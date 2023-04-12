
void fun_661(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx);

void fun_669(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx);

void fun_671(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx);

void fun_679(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx);

void fun_681(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx);

void fun_68b(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx);

void fun_659(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int64_t r14_5;
    int64_t r15_6;
    int64_t r12_7;
    int64_t r13_8;
    int64_t rbp9;
    int64_t v10;
    int64_t v11;

    fun_661(r14_5, rsi, rdx, rcx);
    fun_669(r15_6, rsi, rdx, rcx);
    fun_671(r12_7, rsi, rdx, rcx);
    fun_679(r13_8, rsi, rdx, rcx);
    fun_681(rbp9, rsi, rdx, rcx);
    fun_68b(v10, rsi, rdx, rcx);
    goto v11;
}

void fun_74f();

void fputc(int32_t edi, int64_t rsi);

void fun_78d(int32_t* rdi, int64_t rsi, int64_t rdx);

void fun_7a7(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx);

void fun_722() {
    int32_t* v1;
    int32_t* rdi2;
    int32_t* rsi3;
    int64_t rdx4;
    int64_t rax5;
    int64_t v6;
    int64_t v7;
    int64_t rax8;
    int64_t rbx9;
    int64_t r14_10;
    int64_t r15_11;
    int64_t r12_12;
    int64_t r13_13;
    int64_t rbp14;
    int64_t v15;
    int64_t v16;

    while (1) {
        v1 = reinterpret_cast<int32_t*>(__return_address());
        do {
            *rdi2 = *rsi3;
            rdi2 = v1;
            rsi3 = reinterpret_cast<int32_t*>(0x748);
            fun_74f();
            ++rdx4;
            if (rdx4 == 0x44c) {
                rax5 = v6 + 1;
                if (rax5 == 0x320) 
                    goto addr_774_8;
                v6 = rax5;
                v7 = rax5 * 0x320;
                *reinterpret_cast<int32_t*>(&rdx4) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx4) + 4) = reinterpret_cast<int32_t>(fputc);
            }
            rax8 = v7;
            __asm__("ror eax, 0x2");
        } while (reinterpret_cast<uint32_t>((*reinterpret_cast<int32_t*>(&rax8) + *reinterpret_cast<int32_t*>(&rdx4)) * 0xcccccccd) > 0xccccccc);
        *reinterpret_cast<int32_t*>(&rdi2) = 10;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi2) + 4) = reinterpret_cast<int32_t>(fputc);
        rsi3 = v1;
        fun_722();
    }
    addr_774_8:
    fun_78d(v1, 0x77b, 0x782);
    fun_7a7(0x794, 22, 1, v1);
    fun_659(rbx9, 22, 1, v1);
    fun_661(r14_10, 22, 1, v1);
    fun_669(r15_11, 22, 1, v1);
    fun_671(r12_12, 22, 1, v1);
    fun_679(r13_13, 22, 1, v1);
    fun_681(rbp14, 22, 1, v1);
    fun_68b(v15, 22, 1, v1);
    goto v16;
}

void fun_74f() {
    int64_t rdx1;
    int64_t rax2;
    int64_t v3;
    int64_t v4;
    int64_t rax5;
    int32_t* rdi6;
    int32_t* rsi7;
    int64_t rbx8;
    int64_t r14_9;
    int64_t r15_10;
    int64_t r12_11;
    int64_t r13_12;
    int64_t rbp13;
    int64_t v14;
    int64_t v15;

    while (1) {
        ++rdx1;
        if (rdx1 == 0x44c) {
            rax2 = v3 + 1;
            if (rax2 == 0x320) 
                break;
            v3 = rax2;
            v4 = rax2 * 0x320;
            *reinterpret_cast<int32_t*>(&rdx1) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx1) + 4) = reinterpret_cast<int32_t>(fputc);
        }
        rax5 = v4;
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>((*reinterpret_cast<int32_t*>(&rax5) + *reinterpret_cast<int32_t*>(&rdx1)) * 0xcccccccd) <= 0xccccccc) {
            *reinterpret_cast<int32_t*>(&rdi6) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi6) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi7 = reinterpret_cast<int32_t*>(__return_address());
            fun_722();
        }
        *rdi6 = *rsi7;
        rdi6 = reinterpret_cast<int32_t*>(__return_address());
        rsi7 = reinterpret_cast<int32_t*>(0x748);
        fun_74f();
    }
    fun_78d(__return_address(), 0x77b, 0x782);
    fun_7a7(0x794, 22, 1, __return_address());
    fun_659(rbx8, 22, 1, __return_address());
    fun_661(r14_9, 22, 1, __return_address());
    fun_669(r15_10, 22, 1, __return_address());
    fun_671(r12_11, 22, 1, __return_address());
    fun_679(r13_12, 22, 1, __return_address());
    fun_681(rbp13, 22, 1, __return_address());
    fun_68b(v14, 22, 1, __return_address());
    goto v15;
}

void fun_78d(int32_t* rdi, int64_t rsi, int64_t rdx) {
    int64_t rbx4;
    int64_t r14_5;
    int64_t r15_6;
    int64_t r12_7;
    int64_t r13_8;
    int64_t rbp9;
    int64_t v10;
    int64_t v11;

    fun_7a7(0x794, 22, 1, __return_address());
    fun_659(rbx4, 22, 1, __return_address());
    fun_661(r14_5, 22, 1, __return_address());
    fun_669(r15_6, 22, 1, __return_address());
    fun_671(r12_7, 22, 1, __return_address());
    fun_679(r13_8, 22, 1, __return_address());
    fun_681(rbp9, 22, 1, __return_address());
    fun_68b(v10, 22, 1, __return_address());
    goto v11;
}

void fun_6d9();

void fun_6c0(int64_t rdi, int64_t rsi, int64_t rdx) {
    int32_t* v4;
    int32_t* rsi5;
    int32_t* rdi6;
    int64_t rax7;
    int64_t v8;
    int64_t v9;
    int64_t rdx10;
    int64_t rax11;
    int64_t rbx12;
    int64_t r14_13;
    int64_t r15_14;
    int64_t r12_15;
    int64_t r13_16;
    int64_t rbp17;
    int64_t v18;
    int64_t v19;

    v4 = reinterpret_cast<int32_t*>(__return_address());
    rsi5 = reinterpret_cast<int32_t*>(0x6c7);
    rdi6 = v4;
    fun_6d9();
    *reinterpret_cast<int32_t*>(&rax7) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax7) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        v8 = rax7;
        v9 = rax7 * 0x320;
        *reinterpret_cast<int32_t*>(&rdx10) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx10) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rax11 = v9;
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>((*reinterpret_cast<int32_t*>(&rax11) + *reinterpret_cast<int32_t*>(&rdx10)) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi6) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi6) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi5 = v4;
                fun_722();
            }
            *rdi6 = *rsi5;
            rdi6 = v4;
            rsi5 = reinterpret_cast<int32_t*>(0x748);
            fun_74f();
            ++rdx10;
        } while (rdx10 != 0x44c);
        rax7 = v8 + 1;
    } while (rax7 != 0x320);
    fun_78d(v4, 0x77b, 0x782);
    fun_7a7(0x794, 22, 1, v4);
    fun_659(rbx12, 22, 1, v4);
    fun_661(r14_13, 22, 1, v4);
    fun_669(r15_14, 22, 1, v4);
    fun_671(r12_15, 22, 1, v4);
    fun_679(r13_16, 22, 1, v4);
    fun_681(rbp17, 22, 1, v4);
    fun_68b(v18, 22, 1, v4);
    goto v19;
}

void fun_661(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int64_t r15_5;
    int64_t r12_6;
    int64_t r13_7;
    int64_t rbp8;
    int64_t v9;
    int64_t v10;

    fun_669(r15_5, rsi, rdx, rcx);
    fun_671(r12_6, rsi, rdx, rcx);
    fun_679(r13_7, rsi, rdx, rcx);
    fun_681(rbp8, rsi, rdx, rcx);
    fun_68b(v9, rsi, rdx, rcx);
    goto v10;
}

void fun_7a7(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int64_t rbx5;
    int64_t r14_6;
    int64_t r15_7;
    int64_t r12_8;
    int64_t r13_9;
    int64_t rbp10;
    int64_t v11;
    int64_t v12;

    fun_659(rbx5, rsi, rdx, rcx);
    fun_661(r14_6, rsi, rdx, rcx);
    fun_669(r15_7, rsi, rdx, rcx);
    fun_671(r12_8, rsi, rdx, rcx);
    fun_679(r13_9, rsi, rdx, rcx);
    fun_681(rbp10, rsi, rdx, rcx);
    fun_68b(v11, rsi, rdx, rcx);
    goto v12;
}

void fun_6d9() {
    int32_t* v1;
    int64_t rax2;
    int64_t v3;
    int64_t v4;
    int64_t rdx5;
    int64_t rax6;
    int32_t* rdi7;
    int32_t* rsi8;
    int64_t rbx9;
    int64_t r14_10;
    int64_t r15_11;
    int64_t r12_12;
    int64_t r13_13;
    int64_t rbp14;
    int64_t v15;
    int64_t v16;

    v1 = reinterpret_cast<int32_t*>(__return_address());
    *reinterpret_cast<int32_t*>(&rax2) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax2) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        v3 = rax2;
        v4 = rax2 * 0x320;
        *reinterpret_cast<int32_t*>(&rdx5) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx5) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rax6 = v4;
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>((*reinterpret_cast<int32_t*>(&rax6) + *reinterpret_cast<int32_t*>(&rdx5)) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi7) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi7) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi8 = v1;
                fun_722();
            }
            *rdi7 = *rsi8;
            rdi7 = v1;
            rsi8 = reinterpret_cast<int32_t*>(0x748);
            fun_74f();
            ++rdx5;
        } while (rdx5 != 0x44c);
        rax2 = v3 + 1;
    } while (rax2 != 0x320);
    fun_78d(v1, 0x77b, 0x782);
    fun_7a7(0x794, 22, 1, v1);
    fun_659(rbx9, 22, 1, v1);
    fun_661(r14_10, 22, 1, v1);
    fun_669(r15_11, 22, 1, v1);
    fun_671(r12_12, 22, 1, v1);
    fun_679(r13_13, 22, 1, v1);
    fun_681(rbp14, 22, 1, v1);
    fun_68b(v15, 22, 1, v1);
    goto v16;
}

void fun_669(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int64_t r12_5;
    int64_t r13_6;
    int64_t rbp7;
    int64_t v8;
    int64_t v9;

    fun_671(r12_5, rsi, rdx, rcx);
    fun_679(r13_6, rsi, rdx, rcx);
    fun_681(rbp7, rsi, rdx, rcx);
    fun_68b(v8, rsi, rdx, rcx);
    goto v9;
}

void fun_671(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int64_t r13_5;
    int64_t rbp6;
    int64_t v7;
    int64_t v8;

    fun_679(r13_5, rsi, rdx, rcx);
    fun_681(rbp6, rsi, rdx, rcx);
    fun_68b(v7, rsi, rdx, rcx);
    goto v8;
}

void fun_679(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int64_t rbp5;
    int64_t v6;
    int64_t v7;

    fun_681(rbp5, rsi, rdx, rcx);
    fun_68b(v6, rsi, rdx, rcx);
    goto v7;
}

void fun_681(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int64_t v5;
    int64_t v6;

    fun_68b(v5, rsi, rdx, rcx);
    goto v6;
}

void fun_68b(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int64_t v5;

    goto v5;
}

void fputc(int32_t edi, int64_t rsi) {
}

void fun_94() {
    __asm__("movdqa xmm1, [rip+0x0]");
    __asm__("pcmpeqd xmm2, xmm2");
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
    int32_t f0;
    int32_t f4;
};

struct s18 {
    int32_t f0;
    int32_t f4;
};

/* .LCPI0_14 */
void LCPI0_14() {
    int64_t rdx1;
    int64_t rcx2;
    int64_t rcx3;
    int64_t rdx4;
    int64_t rdi5;
    int64_t rdi6;
    int64_t rdx7;
    int64_t rdx8;
    int64_t rcx9;
    int64_t rcx10;
    int64_t r10_11;
    int32_t* rdi12;
    int32_t* rbx13;
    struct s0* rsi14;
    struct s1* rdi15;
    struct s2* rdi16;
    struct s3* rsi17;
    struct s4* rdi18;
    struct s5* rsi19;
    int32_t* rdi20;
    struct s6* rsi21;
    int64_t r10_22;
    int64_t rdx23;
    int32_t* rdi24;
    int32_t* r12_25;
    struct s7* rsi26;
    struct s8* rdi27;
    struct s9* rdi28;
    struct s10* rsi29;
    struct s11* rdi30;
    struct s12* rsi31;
    int32_t* rdi32;
    struct s13* rsi33;
    int64_t rcx34;
    int64_t* rax35;
    struct s14* rsi36;
    struct s15* rdi37;
    int32_t* rbx38;
    struct s16* rdi39;
    struct s17* rsi40;
    struct s18* rsi41;
    int32_t* rsi42;
    int32_t* r12_43;
    int32_t v44;
    signed char** v45;

    do {
        __asm__("movdqa xmm8, xmm7");
        __asm__("pmuludq xmm8, xmm6");
        __asm__("pshufd xmm8, xmm8, 0xe8");
        __asm__("psubd xmm8, xmm2");
        __asm__("pshufd xmm9, xmm8, 0x55");
        __asm__("pmuludq xmm9, xmm3");
        __asm__("psrlq xmm9, 0x28");
        __asm__("movdqa xmm10, xmm8");
        __asm__("pmuludq xmm9, xmm4");
        __asm__("pmuludq xmm10, xmm3");
        __asm__("pshufd xmm10, xmm10, 0xed");
        __asm__("psrld xmm10, 0x8");
        __asm__("pmuludq xmm10, xmm4");
        __asm__("punpckldq xmm10, xmm9");
        __asm__("psubd xmm8, xmm10");
        __asm__("cvtdq2pd xmm8, xmm8");
        __asm__("divpd xmm8, xmm5");
        __asm__("movupd [rsi+rdx*8], xmm8");
        rdx1 = rdx1 + 2;
        __asm__("paddq xmm7, xmm0");
    } while (rdx1 != 0x3e8);
    if (rcx2 + 1 == 0x320) {
        __asm__("movdqa xmm2, [rip+0x0]");
        *reinterpret_cast<int32_t*>(&rcx3) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx3) + 4) = reinterpret_cast<int32_t>(fputc);
        __asm__("pcmpeqd xmm3, xmm3");
        __asm__("movdqa xmm1, [rip+0x0]");
        __asm__("movdqa xmm4, [rip+0x0]");
        __asm__("movdqa xmm5, [rip+0x0]");
        __asm__("movapd xmm6, [rip+0x0]");
        do {
            __asm__("movd xmm7, rdi");
            __asm__("pshufd xmm7, xmm7, 0x44");
            *reinterpret_cast<int32_t*>(&rdx4) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx4) + 4) = reinterpret_cast<int32_t>(fputc);
            __asm__("movdqa xmm8, xmm2");
            do {
                __asm__("movdqa xmm9, xmm8");
                __asm__("psubq xmm9, xmm3");
                __asm__("pmuludq xmm9, xmm7");
                __asm__("pshufd xmm9, xmm9, 0xe8");
                __asm__("paddd xmm9, xmm1");
                __asm__("movdqa xmm10, xmm9");
                __asm__("pmuludq xmm10, xmm4");
                __asm__("pshufd xmm10, xmm10, 0xed");
                __asm__("pshufd xmm11, xmm9, 0x55");
                __asm__("pmuludq xmm11, xmm4");
                __asm__("pshufd xmm11, xmm11, 0xed");
                __asm__("punpckldq xmm10, xmm11");
                __asm__("psrld xmm10, 0x9");
                __asm__("pshufd xmm11, xmm10, 0xf5");
                __asm__("pmuludq xmm10, xmm5");
                __asm__("pmuludq xmm11, xmm5");
                __asm__("punpckldq xmm10, xmm11");
                __asm__("psubd xmm9, xmm10");
                __asm__("cvtdq2pd xmm9, xmm9");
                __asm__("divpd xmm9, xmm6");
                __asm__("movupd [rsi+rdx*8], xmm9");
                rdx4 = rdx4 + 2;
                __asm__("paddq xmm8, xmm0");
            } while (rdx4 != 0x384);
            ++rdi5;
        } while (rdi5 != 0x3e8);
        __asm__("movdqa xmm2, [rip+0x0]");
        *reinterpret_cast<int32_t*>(&rdi6) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi6) + 4) = reinterpret_cast<int32_t>(fputc);
        __asm__("movdqa xmm3, [rip+0x0]");
        __asm__("movdqa xmm4, [rip+0x0]");
        __asm__("movdqa xmm5, [rip+0x0]");
        __asm__("movapd xmm6, [rip+0x0]");
        do {
            __asm__("movd xmm7, rcx");
            __asm__("pshufd xmm7, xmm7, 0x44");
            *reinterpret_cast<int32_t*>(&rdx7) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx7) + 4) = reinterpret_cast<int32_t>(fputc);
            __asm__("movdqa xmm8, xmm2");
            do {
                __asm__("movdqa xmm9, xmm8");
                __asm__("paddq xmm9, xmm3");
                __asm__("pmuludq xmm9, xmm7");
                __asm__("pshufd xmm9, xmm9, 0xe8");
                __asm__("movdqa xmm10, xmm9");
                __asm__("psrld xmm10, 0x2");
                __asm__("pshufd xmm11, xmm10, 0xf5");
                __asm__("pmuludq xmm10, xmm4");
                __asm__("pshufd xmm10, xmm10, 0xed");
                __asm__("pmuludq xmm11, xmm4");
                __asm__("pshufd xmm11, xmm11, 0xed");
                __asm__("punpckldq xmm10, xmm11");
                __asm__("psrld xmm10, 0x5");
                __asm__("pshufd xmm11, xmm10, 0xf5");
                __asm__("pmuludq xmm10, xmm5");
                __asm__("pmuludq xmm11, xmm5");
                __asm__("punpckldq xmm10, xmm11");
                __asm__("psubd xmm9, xmm10");
                __asm__("cvtdq2pd xmm9, xmm9");
                __asm__("divpd xmm9, xmm6");
                __asm__("movupd [rsi+rdx*8], xmm9");
                rdx7 = rdx7 + 2;
                __asm__("paddq xmm8, xmm0");
            } while (rdx7 != 0x4b0);
            ++rcx3;
        } while (rcx3 != 0x384);
        __asm__("movdqa xmm2, [rip+0x0]");
        *reinterpret_cast<int32_t*>(&rdx8) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx8) + 4) = reinterpret_cast<int32_t>(fputc);
        __asm__("movdqa xmm3, [rip+0x0]");
        __asm__("movdqa xmm4, [rip+0x0]");
        __asm__("movapd xmm5, [rip+0x0]");
        do {
            __asm__("movd xmm6, rdi");
            __asm__("pshufd xmm6, xmm6, 0x44");
            *reinterpret_cast<int32_t*>(&rcx9) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx9) + 4) = reinterpret_cast<int32_t>(fputc);
            __asm__("movdqa xmm7, xmm2");
            do {
                __asm__("paddq xmm7, xmm0");
                __asm__("movdqa xmm8, xmm7");
                __asm__("pmuludq xmm8, xmm6");
                __asm__("pshufd xmm8, xmm8, 0xe8");
                __asm__("paddd xmm8, xmm1");
                __asm__("movdqa xmm9, xmm8");
                __asm__("pmuludq xmm9, xmm3");
                __asm__("pshufd xmm10, xmm8, 0x55");
                __asm__("pmuludq xmm10, xmm3");
                __asm__("pshufd xmm9, xmm9, 0xed");
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
                __asm__("movupd [rsi+rcx*8], xmm8");
                rcx9 = rcx9 + 2;
            } while (rcx9 != 0x44c);
            ++rdi6;
        } while (rdi6 != 0x4b0);
        *reinterpret_cast<int32_t*>(&rcx10) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx10) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            *reinterpret_cast<int32_t*>(&r10_11) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_11) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                rdi12 = rbx13 + rdx8 * 0x708;
                rsi14 = reinterpret_cast<struct s0*>(rdi12 + r10_11 * 2);
                rdi12[r10_11 * 2] = reinterpret_cast<int32_t>(fputc);
                __asm__("pxor xmm0, xmm0");
                *reinterpret_cast<int32_t*>(&rdi15) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi15) + 4) = reinterpret_cast<int32_t>(fputc);
                do {
                    rdi15->f0 = rsi14->f0;
                    rdi16 = reinterpret_cast<struct s2*>(&rdi15->f4);
                    rsi17 = reinterpret_cast<struct s3*>(&rsi14->f4);
                    __asm__("mulsd xmm1, [r9+r10*8]");
                    __asm__("addsd xmm1, xmm0");
                    rdi16->f0 = rsi17->f0;
                    rdi18 = reinterpret_cast<struct s4*>(&rdi16->f4);
                    rsi19 = reinterpret_cast<struct s5*>(&rsi17->f4);
                    rdi18->f0 = rsi19->f0;
                    rdi20 = &rdi18->f4;
                    rsi21 = reinterpret_cast<struct s6*>(&rsi19->f4);
                    __asm__("mulsd xmm0, [r8+r10*8]");
                    __asm__("addsd xmm0, xmm1");
                    *rdi20 = rsi21->f0;
                    rsi14 = reinterpret_cast<struct s0*>(&rsi21->f4);
                    rdi15 = reinterpret_cast<struct s1*>(reinterpret_cast<int64_t>(rdi20 + 1) + 2);
                } while (!reinterpret_cast<int1_t>(rdi15 == 0x3e8));
                ++r10_11;
            } while (r10_11 != 0x384);
            ++rdx8;
        } while (rdx8 != 0x320);
        *reinterpret_cast<int32_t*>(&r10_22) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_22) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            *reinterpret_cast<int32_t*>(&rdx23) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx23) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                rdi24 = r12_25 + rcx10 * 0x898;
                rsi26 = reinterpret_cast<struct s7*>(rdi24 + rdx23 * 2);
                rdi24[rdx23 * 2] = reinterpret_cast<int32_t>(fputc);
                __asm__("xorpd xmm0, xmm0");
                *reinterpret_cast<int32_t*>(&rdi27) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi27) + 4) = reinterpret_cast<int32_t>(fputc);
                do {
                    rdi27->f0 = rsi26->f0;
                    rdi28 = reinterpret_cast<struct s9*>(&rdi27->f4);
                    rsi29 = reinterpret_cast<struct s10*>(&rsi26->f4);
                    __asm__("mulsd xmm1, [r9+rdx*8]");
                    __asm__("addsd xmm1, xmm0");
                    rdi28->f0 = rsi29->f0;
                    rdi30 = reinterpret_cast<struct s11*>(&rdi28->f4);
                    rsi31 = reinterpret_cast<struct s12*>(&rsi29->f4);
                    rdi30->f0 = rsi31->f0;
                    rdi32 = &rdi30->f4;
                    rsi33 = reinterpret_cast<struct s13*>(&rsi31->f4);
                    __asm__("mulsd xmm0, [r8+rdx*8]");
                    __asm__("addsd xmm0, xmm1");
                    *rdi32 = rsi33->f0;
                    rsi26 = reinterpret_cast<struct s7*>(&rsi33->f4);
                    rdi27 = reinterpret_cast<struct s8*>(reinterpret_cast<int64_t>(rdi32 + 1) + 2);
                } while (!reinterpret_cast<int1_t>(rdi27 == 0x4b0));
                ++rdx23;
            } while (rdx23 != 0x44c);
            ++rcx10;
        } while (rcx10 != 0x384);
        do {
            *reinterpret_cast<int32_t*>(&rcx34) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx34) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                (rax35 + r10_22 * 0x44c)[rcx34] = reinterpret_cast<int64_t>(fputc);
                __asm__("xorpd xmm0, xmm0");
                *reinterpret_cast<int32_t*>(&rsi36) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi36) + 4) = reinterpret_cast<int32_t>(fputc);
                do {
                    rdi37 = reinterpret_cast<struct s15*>(rbx38 + r10_22 * 0x708);
                    rdi37->f0 = rsi36->f0;
                    rdi39 = reinterpret_cast<struct s16*>(&rdi37->f4);
                    rsi40 = reinterpret_cast<struct s17*>(&rsi36->f4);
                    __asm__("mulsd xmm1, [r8+rcx*8]");
                    __asm__("addsd xmm1, xmm0");
                    rdi39->f0 = rsi40->f0;
                    rsi41 = reinterpret_cast<struct s18*>(&rsi40->f4);
                    rdi39->f4 = rsi41->f0;
                    rsi42 = &rsi41->f4;
                    __asm__("mulsd xmm0, [rdi+rcx*8]");
                    __asm__("addsd xmm0, xmm1");
                    r12_43[(reinterpret_cast<uint64_t>(rsi41) | 1) * 0x898] = *rsi42;
                    rsi36 = reinterpret_cast<struct s14*>(reinterpret_cast<uint64_t>(rsi42 + 1) + 2);
                } while (!reinterpret_cast<int1_t>(rsi36 == 0x384));
                ++rcx34;
            } while (rcx34 != 0x44c);
            ++r10_22;
        } while (r10_22 != 0x320);
        if (v44 < 43) 
            goto 0x651;
        if (**v45 != fputc) 
            goto "???";
        fun_6c0(0x6b1, 22, 1);
    }
}

