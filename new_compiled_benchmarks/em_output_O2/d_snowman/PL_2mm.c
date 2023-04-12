
void fun_598(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx);

void fun_5a0(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx);

void fun_5a8(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx);

void fun_5b0(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx);

void fun_590(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int64_t r14_5;
    int64_t r15_6;
    int64_t r12_7;
    int64_t r13_8;
    int64_t v9;

    fun_598(r14_5, rsi, rdx, rcx);
    fun_5a0(r15_6, rsi, rdx, rcx);
    fun_5a8(r12_7, rsi, rdx, rcx);
    fun_5b0(r13_8, rsi, rdx, rcx);
    goto v9;
}

void fun_66b();

void fputc(int32_t edi, int64_t rsi);

void fun_6a3(int32_t* rdi, int64_t rsi, int64_t rdx);

void fun_6bc(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx);

void fun_648() {
    int32_t* rdi1;
    int32_t* rsi2;
    int32_t* v3;
    int64_t rbp4;
    int64_t rax5;
    int64_t v6;
    int64_t rax7;
    int32_t* v8;
    int32_t* v9;
    int64_t rbx10;
    int64_t r14_11;
    int64_t r15_12;
    int64_t r12_13;
    int64_t r13_14;
    int64_t v15;

    while (1) {
        *rdi1 = *rsi2;
        rdi1 = v3;
        rsi2 = reinterpret_cast<int32_t*>(0x664);
        fun_66b();
        ++rbp4;
        if (rbp4 == 0x4b0) {
            rax5 = reinterpret_cast<int64_t>(__return_address()) + 1;
            if (rax5 == 0x320) 
                break;
            v6 = rax5 * 0x320;
            *reinterpret_cast<int32_t*>(&rbp4) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp4) + 4) = reinterpret_cast<int32_t>(fputc);
        }
        rax7 = v6;
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>((*reinterpret_cast<int32_t*>(&rax7) + *reinterpret_cast<int32_t*>(&rbp4)) * 0xcccccccd) > 0xccccccc) 
            continue;
        *reinterpret_cast<int32_t*>(&rdi1) = 10;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi1) + 4) = reinterpret_cast<int32_t>(fputc);
        rsi2 = v8;
        fun_648();
    }
    fun_6a3(v9, 0x68d, 0x694);
    fun_6bc(0x6aa, 22, 1, v9);
    fun_590(rbx10, 22, 1, v9);
    fun_598(r14_11, 22, 1, v9);
    fun_5a0(r15_12, 22, 1, v9);
    fun_5a8(r12_13, 22, 1, v9);
    fun_5b0(r13_14, 22, 1, v9);
    goto v15;
}

void fun_66b() {
    int64_t rbp1;
    int64_t rax2;
    int64_t v3;
    int64_t rax4;
    int32_t* rdi5;
    int32_t* rsi6;
    int32_t* v7;
    int32_t* v8;
    int32_t* v9;
    int64_t rbx10;
    int64_t r14_11;
    int64_t r15_12;
    int64_t r12_13;
    int64_t r13_14;
    int64_t v15;

    while (1) {
        ++rbp1;
        if (rbp1 == 0x4b0) {
            rax2 = reinterpret_cast<int64_t>(__return_address()) + 1;
            if (rax2 == 0x320) 
                break;
            v3 = rax2 * 0x320;
            *reinterpret_cast<int32_t*>(&rbp1) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp1) + 4) = reinterpret_cast<int32_t>(fputc);
        }
        rax4 = v3;
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>((*reinterpret_cast<int32_t*>(&rax4) + *reinterpret_cast<int32_t*>(&rbp1)) * 0xcccccccd) <= 0xccccccc) {
            *reinterpret_cast<int32_t*>(&rdi5) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi5) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi6 = v7;
            fun_648();
        }
        *rdi5 = *rsi6;
        rdi5 = v8;
        rsi6 = reinterpret_cast<int32_t*>(0x664);
        fun_66b();
    }
    fun_6a3(v9, 0x68d, 0x694);
    fun_6bc(0x6aa, 22, 1, v9);
    fun_590(rbx10, 22, 1, v9);
    fun_598(r14_11, 22, 1, v9);
    fun_5a0(r15_12, 22, 1, v9);
    fun_5a8(r12_13, 22, 1, v9);
    fun_5b0(r13_14, 22, 1, v9);
    goto v15;
}

void fun_6a3(int32_t* rdi, int64_t rsi, int64_t rdx) {
    int32_t* rbp4;
    int64_t rbx5;
    int64_t r14_6;
    int64_t r15_7;
    int64_t r12_8;
    int64_t r13_9;
    int64_t v10;

    fun_6bc(0x6aa, 22, 1, rbp4);
    fun_590(rbx5, 22, 1, rbp4);
    fun_598(r14_6, 22, 1, rbp4);
    fun_5a0(r15_7, 22, 1, rbp4);
    fun_5a8(r12_8, 22, 1, rbp4);
    fun_5b0(r13_9, 22, 1, rbp4);
    goto v10;
}

void fun_601();

void fun_5e4(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int32_t* rsi5;
    int32_t* v6;
    int32_t* rbp7;
    int32_t* rdi8;
    int32_t* rbp9;
    int64_t rax10;
    int64_t v11;
    int64_t v12;
    int64_t rbp13;
    int64_t rax14;
    int64_t rbx15;
    int64_t r14_16;
    int64_t r15_17;
    int64_t r12_18;
    int64_t r13_19;
    int64_t v20;

    rsi5 = reinterpret_cast<int32_t*>(0x5eb);
    v6 = rbp7;
    rdi8 = rbp9;
    fun_601();
    *reinterpret_cast<int32_t*>(&rax10) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax10) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        v11 = rax10;
        v12 = rax10 * 0x320;
        *reinterpret_cast<int32_t*>(&rbp13) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp13) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rax14 = v12;
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>((*reinterpret_cast<int32_t*>(&rax14) + *reinterpret_cast<int32_t*>(&rbp13)) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi8) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi8) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi5 = v6;
                fun_648();
            }
            *rdi8 = *rsi5;
            rdi8 = v6;
            rsi5 = reinterpret_cast<int32_t*>(0x664);
            fun_66b();
            ++rbp13;
        } while (rbp13 != 0x4b0);
        rax10 = v11 + 1;
    } while (rax10 != 0x320);
    fun_6a3(v6, 0x68d, 0x694);
    fun_6bc(0x6aa, 22, 1, v6);
    fun_590(rbx15, 22, 1, v6);
    fun_598(r14_16, 22, 1, v6);
    fun_5a0(r15_17, 22, 1, v6);
    fun_5a8(r12_18, 22, 1, v6);
    fun_5b0(r13_19, 22, 1, v6);
    goto v20;
}

void fun_598(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int64_t r15_5;
    int64_t r12_6;
    int64_t r13_7;
    int64_t v8;

    fun_5a0(r15_5, rsi, rdx, rcx);
    fun_5a8(r12_6, rsi, rdx, rcx);
    fun_5b0(r13_7, rsi, rdx, rcx);
    goto v8;
}

void fun_6bc(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int64_t rbx5;
    int64_t r14_6;
    int64_t r15_7;
    int64_t r12_8;
    int64_t r13_9;
    int64_t v10;

    fun_590(rbx5, rsi, rdx, rcx);
    fun_598(r14_6, rsi, rdx, rcx);
    fun_5a0(r15_7, rsi, rdx, rcx);
    fun_5a8(r12_8, rsi, rdx, rcx);
    fun_5b0(r13_9, rsi, rdx, rcx);
    goto v10;
}

void fun_601() {
    int64_t rax1;
    int64_t v2;
    int64_t v3;
    int64_t rbp4;
    int64_t rax5;
    int32_t* rdi6;
    int32_t* rsi7;
    int32_t* v8;
    int32_t* v9;
    int32_t* v10;
    int64_t rbx11;
    int64_t r14_12;
    int64_t r15_13;
    int64_t r12_14;
    int64_t r13_15;
    int64_t v16;

    *reinterpret_cast<int32_t*>(&rax1) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax1) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        v2 = rax1;
        v3 = rax1 * 0x320;
        *reinterpret_cast<int32_t*>(&rbp4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp4) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rax5 = v3;
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>((*reinterpret_cast<int32_t*>(&rax5) + *reinterpret_cast<int32_t*>(&rbp4)) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi6) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi6) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi7 = v8;
                fun_648();
            }
            *rdi6 = *rsi7;
            rdi6 = v9;
            rsi7 = reinterpret_cast<int32_t*>(0x664);
            fun_66b();
            ++rbp4;
        } while (rbp4 != 0x4b0);
        rax1 = v2 + 1;
    } while (rax1 != 0x320);
    fun_6a3(v10, 0x68d, 0x694);
    fun_6bc(0x6aa, 22, 1, v10);
    fun_590(rbx11, 22, 1, v10);
    fun_598(r14_12, 22, 1, v10);
    fun_5a0(r15_13, 22, 1, v10);
    fun_5a8(r12_14, 22, 1, v10);
    fun_5b0(r13_15, 22, 1, v10);
    goto v16;
}

void fun_5a0(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int64_t r12_5;
    int64_t r13_6;
    int64_t v7;

    fun_5a8(r12_5, rsi, rdx, rcx);
    fun_5b0(r13_6, rsi, rdx, rcx);
    goto v7;
}

void fun_5a8(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int64_t r13_5;
    int64_t v6;

    fun_5b0(r13_5, rsi, rdx, rcx);
    goto v6;
}

void fun_5b0(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int64_t v5;

    goto v5;
}

void fputc(int32_t edi, int64_t rsi) {
}

void fun_8c() {
    __asm__("movapd xmm5, [rip+0x0]");
    __asm__("movdqa xmm0, [rip+0x0]");
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

int64_t* g5c8 = reinterpret_cast<int64_t*>(0x3d8d48288b48);

/* .LCPI0_12 */
void LCPI0_12(int32_t* rdi) {
    signed char** v2;
    int64_t rdx3;
    int64_t rax4;
    int64_t rax5;
    int64_t rdx6;
    int64_t rcx7;
    int64_t rdx8;
    int64_t rcx9;
    int64_t rcx10;
    int64_t rax11;
    int32_t* rsi12;
    int32_t* r13_13;
    int64_t rax14;
    int64_t rdx15;
    int32_t* rdi16;
    int32_t* rbx17;
    struct s0* rsi18;
    struct s1* rdi19;
    struct s2* rdi20;
    struct s3* rsi21;
    struct s4* rdi22;
    struct s5* rsi23;
    int32_t* rdi24;
    struct s6* rsi25;
    struct s2* rdi26;
    int64_t rcx27;
    struct s7* rsi28;
    int32_t* r13_29;
    struct s8* rsi30;
    struct s9* rdi31;
    int32_t* rbx32;
    struct s10* rdi33;
    struct s11* rsi34;
    struct s12* rsi35;
    int32_t* rsi36;
    struct s13* rdi37;
    int32_t* r12_38;
    int32_t ebp39;
    int64_t* rax40;
    int64_t rcx41;

    v2 = reinterpret_cast<signed char**>(__return_address());
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
    __asm__("paddq xmm7, xmm0");
    if (rdx3 + 2 == 0x44c) {
        if (rax4 + 1 != 0x320) 
            goto 0xa0;
        __asm__("movdqa xmm1, [rip+0x0]");
        *reinterpret_cast<int32_t*>(&rax5) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax5) + 4) = reinterpret_cast<int32_t>(fputc);
        __asm__("pcmpeqd xmm2, xmm2");
        __asm__("movdqa xmm3, [rip+0x0]");
        __asm__("movdqa xmm4, [rip+0x0]");
        __asm__("movapd xmm5, [rip+0x0]");
        do {
            __asm__("movd xmm6, rcx");
            __asm__("pshufd xmm6, xmm6, 0x44");
            *reinterpret_cast<int32_t*>(&rdx6) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx6) + 4) = reinterpret_cast<int32_t>(fputc);
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
                __asm__("psrld xmm8, 0x9");
                __asm__("pshufd xmm10, xmm8, 0xf5");
                __asm__("pmuludq xmm8, xmm4");
                __asm__("pmuludq xmm10, xmm4");
                __asm__("punpckldq xmm8, xmm10");
                __asm__("psubd xmm9, xmm8");
                __asm__("cvtdq2pd xmm8, xmm9");
                __asm__("divpd xmm8, xmm5");
                __asm__("movupd [rsi+rdx*8], xmm8");
                rdx6 = rdx6 + 2;
                __asm__("paddq xmm7, xmm0");
            } while (rdx6 != 0x384);
            ++rcx7;
        } while (rcx7 != 0x44c);
        __asm__("movdqa xmm1, [rip+0x0]");
        *reinterpret_cast<int32_t*>(&rdx8) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx8) + 4) = reinterpret_cast<int32_t>(fputc);
        __asm__("movdqa xmm2, [rip+0x0]");
        __asm__("pcmpeqd xmm3, xmm3");
        __asm__("movdqa xmm4, [rip+0x0]");
        __asm__("movdqa xmm5, [rip+0x0]");
        __asm__("movapd xmm6, [rip+0x0]");
        do {
            __asm__("movd xmm7, rax");
            __asm__("pshufd xmm7, xmm7, 0x44");
            *reinterpret_cast<int32_t*>(&rcx9) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx9) + 4) = reinterpret_cast<int32_t>(fputc);
            __asm__("movdqa xmm8, xmm1");
            do {
                __asm__("movdqa xmm9, xmm8");
                __asm__("paddq xmm9, xmm2");
                __asm__("pmuludq xmm9, xmm7");
                __asm__("pshufd xmm9, xmm9, 0xe8");
                __asm__("psubd xmm9, xmm3");
                __asm__("movdqa xmm10, xmm9");
                __asm__("pmuludq xmm10, xmm4");
                __asm__("pshufd xmm10, xmm10, 0xed");
                __asm__("pshufd xmm11, xmm9, 0x55");
                __asm__("pmuludq xmm11, xmm4");
                __asm__("pshufd xmm11, xmm11, 0xed");
                __asm__("punpckldq xmm10, xmm11");
                __asm__("psrld xmm10, 0x7");
                __asm__("pshufd xmm11, xmm10, 0xf5");
                __asm__("pmuludq xmm10, xmm5");
                __asm__("pmuludq xmm11, xmm5");
                __asm__("punpckldq xmm10, xmm11");
                __asm__("psubd xmm9, xmm10");
                __asm__("cvtdq2pd xmm9, xmm9");
                __asm__("divpd xmm9, xmm6");
                __asm__("movupd [rsi+rcx*8], xmm9");
                rcx9 = rcx9 + 2;
                __asm__("paddq xmm8, xmm0");
            } while (rcx9 != 0x4b0);
            ++rax5;
        } while (rax5 != 0x384);
        __asm__("movdqa xmm1, [rip+0x0]");
        *reinterpret_cast<int32_t*>(&rcx10) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx10) + 4) = reinterpret_cast<int32_t>(fputc);
        __asm__("movdqa xmm2, [rip+0x0]");
        __asm__("movdqa xmm3, [rip+0x0]");
        __asm__("movapd xmm4, [rip+0x0]");
        do {
            __asm__("movd xmm5, rdx");
            __asm__("pshufd xmm5, xmm5, 0x44");
            *reinterpret_cast<int32_t*>(&rax11) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax11) + 4) = reinterpret_cast<int32_t>(fputc);
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
                rsi12 = r13_13 + rdx8 * 0x960;
                __asm__("movupd [rsi+rax*8], xmm7");
                rax11 = rax11 + 2;
            } while (rax11 != 0x4b0);
            ++rdx8;
        } while (rdx8 != 0x320);
        *reinterpret_cast<int32_t*>(&rax14) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax14) + 4) = reinterpret_cast<int32_t>(fputc);
        *rdi = *rsi12;
        do {
            *reinterpret_cast<int32_t*>(&rdx15) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx15) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                rdi16 = rbx17 + rcx10 * 0x708;
                rsi18 = reinterpret_cast<struct s0*>(rdi16 + rdx15 * 2);
                rdi16[rdx15 * 2] = reinterpret_cast<int32_t>(fputc);
                __asm__("pxor xmm1, xmm1");
                *reinterpret_cast<int32_t*>(&rdi19) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi19) + 4) = reinterpret_cast<int32_t>(fputc);
                do {
                    rdi19->f0 = rsi18->f0;
                    rdi20 = reinterpret_cast<struct s2*>(&rdi19->f4);
                    rsi21 = reinterpret_cast<struct s3*>(&rsi18->f4);
                    __asm__("mulsd xmm2, xmm0");
                    __asm__("mulsd xmm2, [r9+rdx*8]");
                    __asm__("addsd xmm2, xmm1");
                    rdi20->f0 = rsi21->f0;
                    rdi22 = reinterpret_cast<struct s4*>(&rdi20->f4);
                    rsi23 = reinterpret_cast<struct s5*>(&rsi21->f4);
                    rdi22->f0 = rsi23->f0;
                    rdi24 = &rdi22->f4;
                    rsi25 = reinterpret_cast<struct s6*>(&rsi23->f4);
                    __asm__("mulsd xmm1, xmm0");
                    __asm__("mulsd xmm1, [r8+rdx*8]");
                    __asm__("addsd xmm1, xmm2");
                    *rdi24 = rsi25->f0;
                    rsi18 = reinterpret_cast<struct s0*>(&rsi25->f4);
                    rdi19 = reinterpret_cast<struct s1*>(reinterpret_cast<uint64_t>(rdi24 + 1) + 2);
                } while (!reinterpret_cast<int1_t>(rdi19 == 0x44c));
                ++rdx15;
            } while (rdx15 != 0x384);
            ++rcx10;
        } while (rcx10 != 0x320);
        rdi19->f0 = rsi18->f0;
        rdi26 = reinterpret_cast<struct s2*>(&rdi19->f4);
        do {
            *reinterpret_cast<int32_t*>(&rcx27) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx27) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                rsi28 = reinterpret_cast<struct s7*>(r13_29 + rax14 * 0x960);
                rdi26->f0 = rsi28->f0;
                __asm__("mulsd xmm1, xmm0");
                rdi26->f4 = rsi28->f4;
                *reinterpret_cast<int32_t*>(&rsi30) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi30) + 4) = reinterpret_cast<int32_t>(fputc);
                do {
                    rdi31 = reinterpret_cast<struct s9*>(rbx32 + rax14 * 0x708);
                    rdi31->f0 = rsi30->f0;
                    rdi33 = reinterpret_cast<struct s10*>(&rdi31->f4);
                    rsi34 = reinterpret_cast<struct s11*>(&rsi30->f4);
                    __asm__("mulsd xmm2, [r8+rcx*8]");
                    __asm__("addsd xmm2, xmm1");
                    rdi33->f0 = rsi34->f0;
                    rsi35 = reinterpret_cast<struct s12*>(&rsi34->f4);
                    rdi33->f4 = rsi35->f0;
                    rsi36 = &rsi35->f4;
                    rdi37 = reinterpret_cast<struct s13*>(r12_38 + (reinterpret_cast<uint64_t>(rsi35) | 1) * 0x960);
                    __asm__("mulsd xmm1, [rdi+rcx*8]");
                    __asm__("addsd xmm1, xmm2");
                    rdi37->f0 = *rsi36;
                    rdi26 = reinterpret_cast<struct s2*>(&rdi37->f4);
                    rsi30 = reinterpret_cast<struct s8*>(reinterpret_cast<uint64_t>(rsi36 + 1) + 2);
                } while (!reinterpret_cast<int1_t>(rsi30 == 0x384));
                ++rcx27;
            } while (rcx27 != 0x4b0);
            ++rax14;
        } while (rax14 != 0x320);
        if (ebp39 < 43) 
            goto 0x588;
        if (**v2 != fputc) 
            goto "???";
        rax40 = g5c8;
        rcx41 = *rax40;
        fun_5e4(0x5d2, 22, 1, rcx41);
    }
}

