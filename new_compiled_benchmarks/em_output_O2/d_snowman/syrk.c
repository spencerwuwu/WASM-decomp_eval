
struct s0 {
    int32_t f0;
    int32_t f4;
};

void fun_7c2(int32_t* rdi, struct s0* rsi, int32_t* rdx, int32_t* rcx);

void fun_7ba(int32_t* rdi, struct s0* rsi, int32_t* rdx, int32_t* rcx) {
    int32_t* r14_5;
    int64_t v6;

    fun_7c2(r14_5, rsi, rdx, rcx);
    goto v6;
}

void fun_869();

void fputc(int32_t edi, int32_t esi, int64_t rdx);

void fun_899(int32_t* rdi, int64_t rsi, int64_t rdx, int32_t* rcx);

void fun_8b2(int64_t rdi, struct s0* rsi, int32_t* rdx, int32_t* rcx);

void fun_84b() {
    int32_t* rdi1;
    int32_t* rsi2;
    int32_t* r15_3;
    int32_t* rbx4;
    int64_t r12_5;
    int64_t r13_6;
    int64_t rbp7;
    int32_t* r15_8;
    int32_t* r15_9;
    int32_t* rcx10;
    int32_t* r15_11;
    int32_t* r14_12;
    int64_t v13;

    while (1) {
        *rdi1 = *rsi2;
        rdi1 = r15_3;
        rsi2 = rbx4;
        fun_869();
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
        fun_84b();
    }
    fun_899(r15_9, 0x888, 0x88f, rcx10);
    fun_8b2(0x8a0, 22, 1, r15_11);
    fun_7ba(__return_address(), 22, 1, r15_11);
    fun_7c2(r14_12, 22, 1, r15_11);
    goto v13;
}

void fun_869() {
    int64_t r12_1;
    int64_t r13_2;
    int64_t rbp3;
    int32_t* rdi4;
    int32_t* rsi5;
    int32_t* r15_6;
    int32_t* r15_7;
    int32_t* rbx8;
    int32_t* r15_9;
    int32_t* rcx10;
    int32_t* r15_11;
    int32_t* r14_12;
    int64_t v13;

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
            fun_84b();
        }
        *rdi4 = *rsi5;
        rdi4 = r15_7;
        rsi5 = rbx8;
        fun_869();
    }
    fun_899(r15_9, 0x888, 0x88f, rcx10);
    fun_8b2(0x8a0, 22, 1, r15_11);
    fun_7ba(__return_address(), 22, 1, r15_11);
    fun_7c2(r14_12, 22, 1, r15_11);
    goto v13;
}

void fun_899(int32_t* rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int32_t* r15_5;
    int32_t* r14_6;
    int64_t v7;

    fun_8b2(0x8a0, 22, 1, r15_5);
    fun_7ba(__return_address(), 22, 1, r15_5);
    fun_7c2(r14_6, 22, 1, r15_5);
    goto v7;
}

void fun_811();

void fun_7f6(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int32_t* v5;
    int32_t* rsi6;
    int64_t r13_7;
    int32_t* rdi8;
    int32_t* r15_9;
    int64_t rbp10;
    int64_t r12_11;
    int32_t* r15_12;
    int32_t* r15_13;
    int32_t* r15_14;
    int32_t* r15_15;
    int32_t* r14_16;
    int64_t v17;

    v5 = reinterpret_cast<int32_t*>(__return_address());
    rsi6 = reinterpret_cast<int32_t*>(0x7fd);
    *reinterpret_cast<int32_t*>(&r13_7) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_7) + 4) = reinterpret_cast<int32_t>(fputc);
    rdi8 = r15_9;
    fun_811();
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
                fun_84b();
            }
            *rdi8 = *rsi6;
            rdi8 = r15_13;
            rsi6 = reinterpret_cast<int32_t*>(0x818);
            fun_869();
            ++r12_11;
        } while (r12_11 != 0x4b0);
        ++r13_7;
    } while (r13_7 != 0x4b0);
    fun_899(r15_14, 0x888, 0x88f, rcx);
    fun_8b2(0x8a0, 22, 1, r15_15);
    fun_7ba(v5, 22, 1, r15_15);
    fun_7c2(r14_16, 22, 1, r15_15);
    goto v17;
}

void fun_7c2(int32_t* rdi, struct s0* rsi, int32_t* rdx, int32_t* rcx) {
    int64_t v5;

    goto v5;
}

void fun_8b2(int64_t rdi, struct s0* rsi, int32_t* rdx, int32_t* rcx) {
    int32_t* r14_5;
    int64_t v6;

    fun_7ba(__return_address(), rsi, rdx, rcx);
    fun_7c2(r14_5, rsi, rdx, rcx);
    goto v6;
}

struct s1 {
    int32_t f0;
    int32_t f4;
};

int32_t* fun_338(struct s1* rdi, int64_t rsi);

struct s2 {
    int32_t f0;
    int32_t f4;
};

int32_t g124f80;

int32_t g124f84;

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

int32_t** g7da = reinterpret_cast<int32_t**>(0x3d8d48388b4c);

void fun_326(int64_t rdi, int64_t rsi) {
    int32_t* rbx3;
    int32_t* rax4;
    int32_t* rax5;
    int32_t* r14_6;
    int64_t rcx7;
    int64_t rax8;
    int64_t rdx9;
    int32_t* rax10;
    int64_t rdx11;
    struct s2* rsi12;
    int32_t* rcx13;
    int32_t* v14;
    int32_t* rdx15;
    struct s3* rdi16;
    struct s0* rsi17;
    int32_t* r8_18;
    int32_t* r9_19;
    struct s4* rdi20;
    void* r8_21;
    int32_t* r15_22;
    int64_t r10_23;
    unsigned char r13b24;
    int32_t* r9_25;
    int32_t* r13_26;
    struct s5* rdi27;
    struct s6* rsi28;
    int32_t* r13_29;
    struct s5* rdi30;
    struct s6* rsi31;
    struct s5* rdi32;
    struct s6* rsi33;
    struct s4* rdi34;
    struct s0* rsi35;
    struct s5* rdi36;
    struct s6* rsi37;
    struct s7* rdi38;
    struct s6* rsi39;
    int32_t v40;
    signed char** v41;
    int32_t** rax42;
    int32_t* r15_43;
    int32_t* rcx44;
    int32_t* rsi45;
    int64_t r13_46;
    int32_t* rdi47;
    int64_t rbp48;
    int64_t r12_49;
    int64_t v50;

    rbx3 = rax4;
    rax5 = fun_338(0x124f80, 8);
    r14_6 = rax5;
    *reinterpret_cast<int32_t*>(&rcx7) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx7) + 4) = reinterpret_cast<int32_t>(fputc);
    __asm__("movdqa xmm1, [rip+0x0]");
    __asm__("pcmpeqd xmm2, xmm2");
    __asm__("movdqa xmm3, [rip+0x0]");
    __asm__("movdqa xmm4, [rip+0x0]");
    __asm__("movapd xmm5, [rip+0x0]");
    __asm__("movdqa xmm0, [rip+0x0]");
    *reinterpret_cast<int32_t*>(&rax8) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax8) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        __asm__("movd xmm6, rax");
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
            __asm__("psrld xmm9, 0x7");
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
        } while (rdx9 != 0x3e8);
        ++rax8;
    } while (rax8 != 0x4b0);
    __asm__("movdqa xmm1, [rip+0x0]");
    *reinterpret_cast<int32_t*>(&rax10) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax10) + 4) = reinterpret_cast<int32_t>(fputc);
    __asm__("movdqa xmm2, [rip+0x0]");
    __asm__("movdqa xmm3, [rip+0x0]");
    __asm__("movdqa xmm4, [rip+0x0]");
    __asm__("movapd xmm5, [rip+0x0]");
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
            rsi12 = reinterpret_cast<struct s2*>(rbx3 + rcx7 * 0x960);
            __asm__("movupd [rsi+rdx*8], xmm8");
            rdx11 = rdx11 + 2;
            __asm__("paddq xmm7, xmm0");
        } while (rdx11 != 0x4b0);
        ++rcx7;
    } while (rcx7 != 0x4b0);
    *reinterpret_cast<int32_t*>(&rcx13) = 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx13) + 4) = reinterpret_cast<int32_t>(fputc);
    g124f80 = rsi12->f0;
    g124f84 = rsi12->f4;
    __asm__("movapd xmm2, [rip+0x0]");
    v14 = rbx3;
    do {
        rdx15 = rbx3 + reinterpret_cast<uint64_t>(rax10) * 0x960;
        rdi16 = reinterpret_cast<struct s3*>(reinterpret_cast<uint64_t>(rax10) * 0x2588);
        rsi17 = reinterpret_cast<struct s0*>(reinterpret_cast<uint64_t>(rax10) * 0x1f40);
        if (reinterpret_cast<uint64_t>(rcx13) >= 4) {
            r8_18 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rcx13) & 0x7ffffffffffffffc);
            *reinterpret_cast<int32_t*>(&r9_19) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_19) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("movupd xmm3, [rdx+r9*8]");
                __asm__("movupd xmm4, [rdx+r9*8+0x10]");
                __asm__("mulpd xmm3, xmm2");
                __asm__("mulpd xmm4, xmm2");
                __asm__("movupd [rdx+r9*8], xmm3");
                __asm__("movupd [rdx+r9*8+0x10], xmm4");
                ++r9_19;
            } while (r9_19 != r8_18);
            if (rcx13 != r8_18) 
                goto addr_5b0_21;
        } else {
            *reinterpret_cast<int32_t*>(&r8_18) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_18) + 4) = reinterpret_cast<int32_t>(fputc);
            goto addr_5b0_21;
        }
        addr_5c8_23:
        rdi20 = reinterpret_cast<struct s4*>(reinterpret_cast<uint64_t>(rdi16) + reinterpret_cast<int64_t>(rbx3) + 8);
        r8_21 = reinterpret_cast<void*>(&(rsi17 + 1)->f0);
        r15_22 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rcx13) & 0x7ffffffffffffffc);
        *reinterpret_cast<int32_t*>(&r10_23) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_23) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            if (reinterpret_cast<uint64_t>(rcx13) < 6 || (r13b24 = reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(rdx15) < reinterpret_cast<uint64_t>(r8_21) + r10_23 * 8 + reinterpret_cast<int64_t>(r14_6)), !reinterpret_cast<int1_t>((r13b24 & static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(r14_6 + r10_23 * 2) < reinterpret_cast<uint64_t>(rdi20)))) == fputc))) {
                *reinterpret_cast<int32_t*>(&r9_25) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_25) + 4) = reinterpret_cast<int32_t>(fputc);
                goto addr_615_26;
            }
            *reinterpret_cast<int32_t*>(&r9_25) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_25) + 4) = reinterpret_cast<int32_t>(fputc);
            if (!reinterpret_cast<int1_t>((r13b24 & static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(rsi17 + r10_23) + reinterpret_cast<int64_t>(r14_6) < reinterpret_cast<uint64_t>(rdi20)))) == fputc)) {
                addr_615_26:
                r13_26 = r9_25;
                if ((*reinterpret_cast<unsigned char*>(&rcx13) & 1) != fputc) {
                    rdi20->f0 = rsi17->f0;
                    rdi27 = reinterpret_cast<struct s5*>(&rdi20->f4);
                    rsi28 = reinterpret_cast<struct s6*>(&rsi17->f4);
                    __asm__("mulsd xmm3, xmm1");
                    __asm__("mulsd xmm3, [rbx+r10*8]");
                    __asm__("addsd xmm3, [rdx+r9*8]");
                    rdi27->f0 = rsi28->f0;
                    rdi20 = reinterpret_cast<struct s4*>(&rdi27->f4);
                    rsi17 = reinterpret_cast<struct s0*>(&rsi28->f4);
                    r13_26 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(r9_25) | 1);
                }
            } else {
                rdi20->f0 = rsi17->f0;
                rdi20 = reinterpret_cast<struct s4*>(&rdi20->f4);
                rsi17 = reinterpret_cast<struct s0*>(&rsi17->f4);
                __asm__("mulsd xmm3, xmm1");
                __asm__("unpcklpd xmm3, xmm3");
                *reinterpret_cast<int32_t*>(&r13_29) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_29) + 4) = reinterpret_cast<int32_t>(fputc);
                do {
                    rdi20->f0 = rsi17->f0;
                    rdi30 = reinterpret_cast<struct s5*>(&rdi20->f4);
                    rsi31 = reinterpret_cast<struct s6*>(&rsi17->f4);
                    __asm__("movhpd xmm4, [r9+r10*8]");
                    rdi30->f0 = rsi31->f0;
                    rdi20 = reinterpret_cast<struct s4*>(&rdi30->f4);
                    rsi17 = reinterpret_cast<struct s0*>(&rsi31->f4);
                    __asm__("movhpd xmm5, [rbp+r10*8+0x0]");
                    __asm__("movupd xmm6, [rdx+r13*8]");
                    __asm__("movupd xmm7, [rdx+r13*8+0x10]");
                    __asm__("mulpd xmm4, xmm3");
                    __asm__("addpd xmm4, xmm6");
                    __asm__("mulpd xmm5, xmm3");
                    __asm__("addpd xmm5, xmm7");
                    __asm__("movupd [rdx+r13*8], xmm4");
                    __asm__("movupd [rdx+r13*8+0x10], xmm5");
                    ++r13_29;
                } while (r13_29 != r15_22);
                r9_25 = r15_22;
                if (rcx13 == r15_22) 
                    continue; else 
                    goto addr_799_47;
            }
            if (rax10 != r9_25) {
                do {
                    rdi20->f0 = rsi17->f0;
                    rdi32 = reinterpret_cast<struct s5*>(&rdi20->f4);
                    rsi33 = reinterpret_cast<struct s6*>(&rsi17->f4);
                    __asm__("mulsd xmm3, xmm1");
                    __asm__("mulsd xmm3, [r9+r10*8]");
                    __asm__("addsd xmm3, [rdx+r13*8]");
                    rdi32->f0 = rsi33->f0;
                    rdi34 = reinterpret_cast<struct s4*>(&rdi32->f4);
                    rsi35 = reinterpret_cast<struct s0*>(&rsi33->f4);
                    rdi34->f0 = rsi35->f0;
                    rdi36 = reinterpret_cast<struct s5*>(&rdi34->f4);
                    rsi37 = reinterpret_cast<struct s6*>(&rsi35->f4);
                    __asm__("mulsd xmm3, xmm1");
                    __asm__("mulsd xmm3, [r9+r10*8+0x1f40]");
                    __asm__("addsd xmm3, [rdx+r13*8+0x8]");
                    rdi36->f0 = rsi37->f0;
                    rdi20 = reinterpret_cast<struct s4*>(&rdi36->f4);
                    rsi17 = reinterpret_cast<struct s0*>(&rsi37->f4);
                    r13_26 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(r13_26) + 2);
                } while (r13_26 != rcx13);
                continue;
            }
            addr_799_47:
            goto addr_615_26;
            ++r10_23;
        } while (r10_23 != 0x3e8);
        continue;
        do {
            addr_5b0_21:
            rdi16->f0 = rsi17->f0;
            rdi38 = reinterpret_cast<struct s7*>(&rdi16->f4);
            rsi39 = reinterpret_cast<struct s6*>(&rsi17->f4);
            __asm__("mulsd xmm3, xmm0");
            rdi38->f0 = rsi39->f0;
            rdi16 = reinterpret_cast<struct s3*>(&rdi38->f4);
            rsi17 = reinterpret_cast<struct s0*>(&rsi39->f4);
            r8_18 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(r8_18) + 1);
        } while (r8_18 != rcx13);
        goto addr_5c8_23;
        rax10 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rax10) + 1);
        rcx13 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rcx13) + 1);
        rbx3 = v14;
    } while (rax10 != 0x4b0);
    if (v40 >= 43 && **v41 == fputc) {
        rax42 = g7da;
        r15_43 = *rax42;
        rcx44 = r15_43;
        fun_7f6(0x7e4, 22, 1, rcx44);
        rsi45 = reinterpret_cast<int32_t*>(0x7fd);
        *reinterpret_cast<int32_t*>(&r13_46) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_46) + 4) = reinterpret_cast<int32_t>(fputc);
        rdi47 = r15_43;
        fun_811();
        do {
            rbp48 = r13_46 * 0x4b0;
            *reinterpret_cast<int32_t*>(&r12_49) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_49) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("ror eax, 0x2");
                if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r12_49 + rbp48) * 0xcccccccd) <= 0xccccccc) {
                    *reinterpret_cast<int32_t*>(&rdi47) = 10;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi47) + 4) = reinterpret_cast<int32_t>(fputc);
                    rsi45 = r15_43;
                    fun_84b();
                }
                *rdi47 = *rsi45;
                rdi47 = r15_43;
                rsi45 = reinterpret_cast<int32_t*>(0x818);
                fun_869();
                ++r12_49;
            } while (r12_49 != 0x4b0);
            ++r13_46;
        } while (r13_46 != 0x4b0);
        fun_899(r15_43, 0x888, 0x88f, rcx44);
        *reinterpret_cast<int32_t*>(&rsi17) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi17) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx15) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx15) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx13 = r15_43;
        fun_8b2(0x8a0, 22, 1, rcx13);
        rbx3 = v14;
    }
    fun_7ba(rbx3, rsi17, rdx15, rcx13);
    fun_7c2(r14_6, rsi17, rdx15, rcx13);
    goto v50;
}

void fun_811() {
    int32_t* v1;
    int64_t rbp2;
    int64_t r13_3;
    int64_t r12_4;
    int32_t* rdi5;
    int32_t* rsi6;
    int32_t* r15_7;
    int32_t* r15_8;
    int32_t* r15_9;
    int32_t* rcx10;
    int32_t* r15_11;
    int32_t* r14_12;
    int64_t v13;

    v1 = reinterpret_cast<int32_t*>(__return_address());
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
                fun_84b();
            }
            *rdi5 = *rsi6;
            rdi5 = r15_8;
            rsi6 = reinterpret_cast<int32_t*>(0x818);
            fun_869();
            ++r12_4;
        } while (r12_4 != 0x4b0);
        ++r13_3;
    } while (r13_3 != 0x4b0);
    fun_899(r15_9, 0x888, 0x88f, rcx10);
    fun_8b2(0x8a0, 22, 1, r15_11);
    fun_7ba(v1, 22, 1, r15_11);
    fun_7c2(r14_12, 22, 1, r15_11);
    goto v13;
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

struct s12 {
    int32_t f0;
    int32_t f4;
};

int32_t* fun_338(struct s1* rdi, int64_t rsi) {
    int32_t* r14_3;
    int32_t* rax4;
    int64_t rcx5;
    int64_t rax6;
    int64_t rdx7;
    int32_t* rax8;
    int64_t rdx9;
    struct s8* rsi10;
    int32_t* rbx11;
    int32_t* rcx12;
    int32_t* v13;
    int32_t* rbx14;
    int32_t* rdx15;
    int32_t* rbx16;
    struct s9* rdi17;
    struct s0* rsi18;
    int32_t* r8_19;
    int32_t* r9_20;
    struct s10* rdi21;
    void* r8_22;
    int32_t* r15_23;
    int64_t r10_24;
    unsigned char r13b25;
    int32_t* r9_26;
    int32_t* r13_27;
    struct s11* rdi28;
    struct s6* rsi29;
    int32_t* r13_30;
    struct s11* rdi31;
    struct s6* rsi32;
    struct s11* rdi33;
    struct s6* rsi34;
    struct s10* rdi35;
    struct s0* rsi36;
    struct s11* rdi37;
    struct s6* rsi38;
    struct s12* rdi39;
    struct s6* rsi40;
    int32_t v41;
    signed char** v42;
    int32_t** rax43;
    int32_t* r15_44;
    int32_t* rcx45;
    int32_t* rsi46;
    int64_t r13_47;
    int32_t* rdi48;
    int64_t rbp49;
    int64_t r12_50;
    int64_t v51;

    r14_3 = rax4;
    *reinterpret_cast<int32_t*>(&rcx5) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx5) + 4) = reinterpret_cast<int32_t>(fputc);
    __asm__("movdqa xmm1, [rip+0x0]");
    __asm__("pcmpeqd xmm2, xmm2");
    __asm__("movdqa xmm3, [rip+0x0]");
    __asm__("movdqa xmm4, [rip+0x0]");
    __asm__("movapd xmm5, [rip+0x0]");
    __asm__("movdqa xmm0, [rip+0x0]");
    *reinterpret_cast<int32_t*>(&rax6) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax6) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        __asm__("movd xmm6, rax");
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
            __asm__("psrld xmm9, 0x7");
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
        } while (rdx7 != 0x3e8);
        ++rax6;
    } while (rax6 != 0x4b0);
    __asm__("movdqa xmm1, [rip+0x0]");
    *reinterpret_cast<int32_t*>(&rax8) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax8) + 4) = reinterpret_cast<int32_t>(fputc);
    __asm__("movdqa xmm2, [rip+0x0]");
    __asm__("movdqa xmm3, [rip+0x0]");
    __asm__("movdqa xmm4, [rip+0x0]");
    __asm__("movapd xmm5, [rip+0x0]");
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
            rsi10 = reinterpret_cast<struct s8*>(rbx11 + rcx5 * 0x960);
            __asm__("movupd [rsi+rdx*8], xmm8");
            rdx9 = rdx9 + 2;
            __asm__("paddq xmm7, xmm0");
        } while (rdx9 != 0x4b0);
        ++rcx5;
    } while (rcx5 != 0x4b0);
    *reinterpret_cast<int32_t*>(&rcx12) = 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx12) + 4) = reinterpret_cast<int32_t>(fputc);
    rdi->f0 = rsi10->f0;
    rdi->f4 = rsi10->f4;
    __asm__("movapd xmm2, [rip+0x0]");
    v13 = rbx14;
    do {
        rdx15 = rbx16 + reinterpret_cast<uint64_t>(rax8) * 0x960;
        rdi17 = reinterpret_cast<struct s9*>(reinterpret_cast<uint64_t>(rax8) * 0x2588);
        rsi18 = reinterpret_cast<struct s0*>(reinterpret_cast<uint64_t>(rax8) * 0x1f40);
        if (reinterpret_cast<uint64_t>(rcx12) >= 4) {
            r8_19 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rcx12) & 0x7ffffffffffffffc);
            *reinterpret_cast<int32_t*>(&r9_20) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_20) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("movupd xmm3, [rdx+r9*8]");
                __asm__("movupd xmm4, [rdx+r9*8+0x10]");
                __asm__("mulpd xmm3, xmm2");
                __asm__("mulpd xmm4, xmm2");
                __asm__("movupd [rdx+r9*8], xmm3");
                __asm__("movupd [rdx+r9*8+0x10], xmm4");
                ++r9_20;
            } while (r9_20 != r8_19);
            if (rcx12 != r8_19) 
                goto addr_5b0_20;
        } else {
            *reinterpret_cast<int32_t*>(&r8_19) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_19) + 4) = reinterpret_cast<int32_t>(fputc);
            goto addr_5b0_20;
        }
        addr_5c8_22:
        rdi21 = reinterpret_cast<struct s10*>(reinterpret_cast<uint64_t>(rdi17) + reinterpret_cast<int64_t>(rbx16) + 8);
        r8_22 = reinterpret_cast<void*>(&(rsi18 + 1)->f0);
        r15_23 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rcx12) & 0x7ffffffffffffffc);
        *reinterpret_cast<int32_t*>(&r10_24) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_24) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            if (reinterpret_cast<uint64_t>(rcx12) < 6 || (r13b25 = reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(rdx15) < reinterpret_cast<uint64_t>(r8_22) + r10_24 * 8 + reinterpret_cast<int64_t>(r14_3)), !reinterpret_cast<int1_t>((r13b25 & static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(r14_3 + r10_24 * 2) < reinterpret_cast<uint64_t>(rdi21)))) == fputc))) {
                *reinterpret_cast<int32_t*>(&r9_26) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_26) + 4) = reinterpret_cast<int32_t>(fputc);
                goto addr_615_25;
            }
            *reinterpret_cast<int32_t*>(&r9_26) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_26) + 4) = reinterpret_cast<int32_t>(fputc);
            if (!reinterpret_cast<int1_t>((r13b25 & static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(rsi18 + r10_24) + reinterpret_cast<int64_t>(r14_3) < reinterpret_cast<uint64_t>(rdi21)))) == fputc)) {
                addr_615_25:
                r13_27 = r9_26;
                if ((*reinterpret_cast<unsigned char*>(&rcx12) & 1) != fputc) {
                    rdi21->f0 = rsi18->f0;
                    rdi28 = reinterpret_cast<struct s11*>(&rdi21->f4);
                    rsi29 = reinterpret_cast<struct s6*>(&rsi18->f4);
                    __asm__("mulsd xmm3, xmm1");
                    __asm__("mulsd xmm3, [rbx+r10*8]");
                    __asm__("addsd xmm3, [rdx+r9*8]");
                    rdi28->f0 = rsi29->f0;
                    rdi21 = reinterpret_cast<struct s10*>(&rdi28->f4);
                    rsi18 = reinterpret_cast<struct s0*>(&rsi29->f4);
                    r13_27 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(r9_26) | 1);
                }
            } else {
                rdi21->f0 = rsi18->f0;
                rdi21 = reinterpret_cast<struct s10*>(&rdi21->f4);
                rsi18 = reinterpret_cast<struct s0*>(&rsi18->f4);
                __asm__("mulsd xmm3, xmm1");
                __asm__("unpcklpd xmm3, xmm3");
                *reinterpret_cast<int32_t*>(&r13_30) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_30) + 4) = reinterpret_cast<int32_t>(fputc);
                do {
                    rdi21->f0 = rsi18->f0;
                    rdi31 = reinterpret_cast<struct s11*>(&rdi21->f4);
                    rsi32 = reinterpret_cast<struct s6*>(&rsi18->f4);
                    __asm__("movhpd xmm4, [r9+r10*8]");
                    rdi31->f0 = rsi32->f0;
                    rdi21 = reinterpret_cast<struct s10*>(&rdi31->f4);
                    rsi18 = reinterpret_cast<struct s0*>(&rsi32->f4);
                    __asm__("movhpd xmm5, [rbp+r10*8+0x0]");
                    __asm__("movupd xmm6, [rdx+r13*8]");
                    __asm__("movupd xmm7, [rdx+r13*8+0x10]");
                    __asm__("mulpd xmm4, xmm3");
                    __asm__("addpd xmm4, xmm6");
                    __asm__("mulpd xmm5, xmm3");
                    __asm__("addpd xmm5, xmm7");
                    __asm__("movupd [rdx+r13*8], xmm4");
                    __asm__("movupd [rdx+r13*8+0x10], xmm5");
                    ++r13_30;
                } while (r13_30 != r15_23);
                r9_26 = r15_23;
                if (rcx12 == r15_23) 
                    continue; else 
                    goto addr_799_46;
            }
            if (rax8 != r9_26) {
                do {
                    rdi21->f0 = rsi18->f0;
                    rdi33 = reinterpret_cast<struct s11*>(&rdi21->f4);
                    rsi34 = reinterpret_cast<struct s6*>(&rsi18->f4);
                    __asm__("mulsd xmm3, xmm1");
                    __asm__("mulsd xmm3, [r9+r10*8]");
                    __asm__("addsd xmm3, [rdx+r13*8]");
                    rdi33->f0 = rsi34->f0;
                    rdi35 = reinterpret_cast<struct s10*>(&rdi33->f4);
                    rsi36 = reinterpret_cast<struct s0*>(&rsi34->f4);
                    rdi35->f0 = rsi36->f0;
                    rdi37 = reinterpret_cast<struct s11*>(&rdi35->f4);
                    rsi38 = reinterpret_cast<struct s6*>(&rsi36->f4);
                    __asm__("mulsd xmm3, xmm1");
                    __asm__("mulsd xmm3, [r9+r10*8+0x1f40]");
                    __asm__("addsd xmm3, [rdx+r13*8+0x8]");
                    rdi37->f0 = rsi38->f0;
                    rdi21 = reinterpret_cast<struct s10*>(&rdi37->f4);
                    rsi18 = reinterpret_cast<struct s0*>(&rsi38->f4);
                    r13_27 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(r13_27) + 2);
                } while (r13_27 != rcx12);
                continue;
            }
            addr_799_46:
            goto addr_615_25;
            ++r10_24;
        } while (r10_24 != 0x3e8);
        continue;
        do {
            addr_5b0_20:
            rdi17->f0 = rsi18->f0;
            rdi39 = reinterpret_cast<struct s12*>(&rdi17->f4);
            rsi40 = reinterpret_cast<struct s6*>(&rsi18->f4);
            __asm__("mulsd xmm3, xmm0");
            rdi39->f0 = rsi40->f0;
            rdi17 = reinterpret_cast<struct s9*>(&rdi39->f4);
            rsi18 = reinterpret_cast<struct s0*>(&rsi40->f4);
            r8_19 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(r8_19) + 1);
        } while (r8_19 != rcx12);
        goto addr_5c8_22;
        rax8 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rax8) + 1);
        rcx12 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rcx12) + 1);
        rbx16 = v13;
    } while (rax8 != 0x4b0);
    if (v41 >= 43 && **v42 == fputc) {
        rax43 = g7da;
        r15_44 = *rax43;
        rcx45 = r15_44;
        fun_7f6(0x7e4, 22, 1, rcx45);
        rsi46 = reinterpret_cast<int32_t*>(0x7fd);
        *reinterpret_cast<int32_t*>(&r13_47) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_47) + 4) = reinterpret_cast<int32_t>(fputc);
        rdi48 = r15_44;
        fun_811();
        do {
            rbp49 = r13_47 * 0x4b0;
            *reinterpret_cast<int32_t*>(&r12_50) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_50) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("ror eax, 0x2");
                if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r12_50 + rbp49) * 0xcccccccd) <= 0xccccccc) {
                    *reinterpret_cast<int32_t*>(&rdi48) = 10;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi48) + 4) = reinterpret_cast<int32_t>(fputc);
                    rsi46 = r15_44;
                    fun_84b();
                }
                *rdi48 = *rsi46;
                rdi48 = r15_44;
                rsi46 = reinterpret_cast<int32_t*>(0x818);
                fun_869();
                ++r12_50;
            } while (r12_50 != 0x4b0);
            ++r13_47;
        } while (r13_47 != 0x4b0);
        fun_899(r15_44, 0x888, 0x88f, rcx45);
        *reinterpret_cast<int32_t*>(&rsi18) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi18) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx15) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx15) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx12 = r15_44;
        fun_8b2(0x8a0, 22, 1, rcx12);
        rbx16 = v13;
    }
    fun_7ba(rbx16, rsi18, rdx15, rcx12);
    fun_7c2(r14_3, rsi18, rdx15, rcx12);
    goto v51;
}

void fputc(int32_t edi, int32_t esi, int64_t rdx) {
}

void fun_1d() {
}

void fun_32() {
    signed char* rax1;
    signed char* rax2;
    signed char al3;

    *rax1 = reinterpret_cast<signed char>(*rax2 + al3);
}

struct s13 {
    int32_t f0;
    int32_t f4;
};

struct s14 {
    int32_t f0;
    int32_t f4;
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
    signed char[8] pad8;
    int32_t f8;
};

struct s18 {
    int32_t f0;
    int32_t f4;
};

struct s19 {
    int32_t f0;
    int32_t f4;
};

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

void fun_7c() {
    int1_t less_or_equal1;
    struct s13* rdi2;
    struct s14* rsi3;
    struct s15* rdi4;
    struct s16* rsi5;
    int64_t rax6;
    int64_t r9_7;
    int32_t v8;
    struct s17* rbx9;
    int64_t r10_10;
    uint64_t r14_11;
    int64_t r10_12;
    int64_t v13;
    struct s18* rsi14;
    struct s19* rdi15;
    uint64_t r9_16;
    int64_t r13_17;
    uint64_t v18;
    uint64_t r9_19;
    unsigned char al20;
    uint64_t r11_21;
    int64_t rcx22;
    int64_t rcx23;
    struct s19* r12_24;
    int64_t rcx25;
    struct s19* rax26;
    unsigned char r9b27;
    struct s20* rdi28;
    struct s21* rsi29;
    struct s19* r14_30;
    struct s19* r10_31;
    int64_t r10_32;
    int64_t r8_33;
    struct s18* r8_34;
    struct s19* rax35;
    struct s22* rsi36;
    int32_t* rcx37;
    struct s20* rdi38;
    struct s19* r9_39;
    struct s20* rdi40;
    struct s21* rsi41;
    struct s19* rdi42;
    struct s18* rsi43;
    struct s20* rdi44;
    struct s21* rsi45;
    struct s19* r9_46;

    if (less_or_equal1) {
    }
    while (1) {
        __asm__("mulsd xmm3, xmm1");
        rdi2->f0 = rsi3->f0;
        rdi4 = reinterpret_cast<struct s15*>(&rdi2->f4);
        rsi5 = reinterpret_cast<struct s16*>(&rsi3->f4);
        ++rax6;
        if (rax6 == r9_7) 
            break;
        rdi4->f0 = rsi5->f0;
        rdi2 = reinterpret_cast<struct s13*>(&rdi4->f4);
        rsi3 = reinterpret_cast<struct s14*>(&rsi5->f4);
    }
    if (v8 > reinterpret_cast<int32_t>(fputc)) 
        goto addr_e3_11;
    addr_40_12:
    addr_e3_11:
    rbx9 = reinterpret_cast<struct s17*>(r10_10 * 0x1f40);
    r14_11 = reinterpret_cast<uint64_t>(r10_12 * 0x2588 + v13 + 8);
    rsi14 = reinterpret_cast<struct s18*>(&rbx9->f8);
    rdi15 = reinterpret_cast<struct s19*>(r9_16 & 0x7ffffffffffffffc);
    *reinterpret_cast<int32_t*>(&r13_17) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_17) + 4) = reinterpret_cast<int32_t>(fputc);
    v18 = r14_11;
    do {
        if (r9_19 < 6 || (al20 = reinterpret_cast<uint1_t>(r11_21 < reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(rsi14 + r13_17) + rcx22)), !reinterpret_cast<int1_t>((al20 & static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(rcx23 + r13_17 * 8) < r14_11))) == fputc))) {
            *reinterpret_cast<int32_t*>(&r12_24) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_24) + 4) = reinterpret_cast<int32_t>(fputc);
            goto addr_253_15;
        }
        *reinterpret_cast<int32_t*>(&r12_24) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_24) + 4) = reinterpret_cast<int32_t>(fputc);
        if (!reinterpret_cast<int1_t>((al20 & static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(rbx9) + r13_17 * 8 + rcx25) < r14_11))) == fputc)) {
            addr_253_15:
            rax26 = r12_24;
            if ((r9b27 & 1) != fputc) {
                rdi15->f0 = rsi14->f0;
                rdi28 = reinterpret_cast<struct s20*>(&rdi15->f4);
                rsi29 = reinterpret_cast<struct s21*>(&rsi14->f4);
                __asm__("mulsd xmm3, xmm0");
                __asm__("mulsd xmm3, [rax+r13*8]");
                __asm__("addsd xmm3, [r11+r12*8]");
                rdi28->f0 = rsi29->f0;
                rdi15 = reinterpret_cast<struct s19*>(&rdi28->f4);
                rsi14 = reinterpret_cast<struct s18*>(&rsi29->f4);
                rax26 = reinterpret_cast<struct s19*>(reinterpret_cast<uint64_t>(r12_24) | 1);
            }
        } else {
            r14_30 = r10_31;
            r10_32 = r8_33;
            r8_34 = rsi14;
            rdi15->f0 = rsi14->f0;
            rdi15 = reinterpret_cast<struct s19*>(&rdi15->f4);
            __asm__("mulsd xmm3, xmm0");
            __asm__("unpcklpd xmm3, xmm3");
            *reinterpret_cast<int32_t*>(&rax35) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax35) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                rsi36 = reinterpret_cast<struct s22*>(rcx37 + (reinterpret_cast<uint64_t>(rax35) | 3) * 0x7d0);
                rdi15->f0 = rsi36->f0;
                rdi38 = reinterpret_cast<struct s20*>(&rdi15->f4);
                __asm__("movhpd xmm4, [r15+r13*8]");
                rdi38->f0 = rsi36->f4;
                rdi15 = reinterpret_cast<struct s19*>(&rdi38->f4);
                __asm__("movhpd xmm5, [rsi+r13*8]");
                __asm__("movupd xmm6, [r11+rax*8]");
                __asm__("movupd xmm7, [r11+rax*8+0x10]");
                __asm__("mulpd xmm4, xmm3");
                __asm__("addpd xmm4, xmm6");
                __asm__("mulpd xmm5, xmm3");
                __asm__("addpd xmm5, xmm7");
                __asm__("movupd [r11+rax*8], xmm4");
                __asm__("movupd [r11+rax*8+0x10], xmm5");
                rax35 = reinterpret_cast<struct s19*>(&rax35->f4);
            } while (rax35 != rdi15);
            r12_24 = rdi15;
            rsi14 = r8_34;
            r8_33 = r10_32;
            r10_31 = r14_30;
            r14_11 = v18;
            if (r9_39 == rdi15) 
                continue; else 
                goto addr_246_36;
        }
        if (r10_31 != r12_24) {
            do {
                rdi15->f0 = rsi14->f0;
                rdi40 = reinterpret_cast<struct s20*>(&rdi15->f4);
                rsi41 = reinterpret_cast<struct s21*>(&rsi14->f4);
                __asm__("mulsd xmm3, xmm0");
                __asm__("mulsd xmm3, [rdx+r13*8]");
                __asm__("addsd xmm3, [r11+rax*8]");
                rdi40->f0 = rsi41->f0;
                rdi42 = reinterpret_cast<struct s19*>(&rdi40->f4);
                rsi43 = reinterpret_cast<struct s18*>(&rsi41->f4);
                rdi42->f0 = rsi43->f0;
                rdi44 = reinterpret_cast<struct s20*>(&rdi42->f4);
                rsi45 = reinterpret_cast<struct s21*>(&rsi43->f4);
                __asm__("mulsd xmm3, xmm0");
                __asm__("mulsd xmm3, [rdx+r13*8+0x1f40]");
                __asm__("addsd xmm3, [r11+rax*8+0x8]");
                rdi44->f0 = rsi45->f0;
                rdi15 = reinterpret_cast<struct s19*>(&rdi44->f4);
                rsi14 = reinterpret_cast<struct s18*>(&rsi45->f4);
                rax26 = reinterpret_cast<struct s19*>(reinterpret_cast<uint64_t>(rax26) + 2);
            } while (rax26 != r9_46);
            continue;
        }
        addr_246_36:
        goto addr_253_15;
        ++r13_17;
    } while (r13_17 != r8_33);
    goto addr_40_12;
}

void fun_98(int64_t rdi) {
    int64_t rax2;
    int64_t r9_3;
    int64_t rax4;

    __asm__("movups xmm4, [rbx+rdi*8+0x10]");
    __asm__("mulpd xmm3, xmm2");
    __asm__("mulpd xmm4, xmm2");
    __asm__("movupd [r11+rdi*8], xmm3");
    __asm__("movupd [r11+rdi*8+0x10], xmm4");
    if (rdi + 4 == rax2) {
        if (r9_3 == rax4) 
            goto 0xd8; else 
            goto "???";
    }
}

void fun_2f4() {
    int64_t v1;

    goto v1;
}

void submain(int32_t edi, int64_t rsi) {
    fun_326(0x15f900, 8);
}

