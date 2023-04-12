
void fun_363(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx);

void fun_36b(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx);

void fun_373(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx);

void fun_37b(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx);

void fun_35b(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int64_t r14_5;
    int64_t r15_6;
    int64_t r12_7;
    int64_t r13_8;
    int64_t v9;

    fun_363(r14_5, rsi, rdx, rcx);
    fun_36b(r15_6, rsi, rdx, rcx);
    fun_373(r12_7, rsi, rdx, rcx);
    fun_37b(r13_8, rsi, rdx, rcx);
    goto v9;
}

void fputc(int32_t edi, int64_t rsi);

void fun_417();

void fun_435(int32_t* rdi, int64_t rsi, int64_t rdx);

void fun_44e(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx);

void fun_3e9() {
    int64_t rbp1;
    int32_t eax2;
    int32_t* rdi3;
    int32_t* rsi4;
    int64_t rbx5;
    int64_t r14_6;
    int64_t r15_7;
    int64_t r12_8;
    int64_t r13_9;
    int64_t v10;

    while (++rbp1, rbp1 != 0x514) {
        eax2 = *reinterpret_cast<int32_t*>(&rbp1) * 0xffffcccd;
        __asm__("ror ax, 0x2");
        if (static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax2)) <= 0xccc) {
            *reinterpret_cast<int32_t*>(&rdi3) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi3) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi4 = reinterpret_cast<int32_t*>(__return_address());
            fun_417();
        }
        *rdi3 = *rsi4;
        rdi3 = reinterpret_cast<int32_t*>(__return_address());
        rsi4 = reinterpret_cast<int32_t*>(0x3e2);
        fun_3e9();
    }
    fun_435(__return_address(), 0x420, 0x427);
    fun_44e(0x43c, 22, 1, __return_address());
    fun_35b(rbx5, 22, 1, __return_address());
    fun_363(r14_6, 22, 1, __return_address());
    fun_36b(r15_7, 22, 1, __return_address());
    fun_373(r12_8, 22, 1, __return_address());
    fun_37b(r13_9, 22, 1, __return_address());
    goto v10;
}

void fun_417() {
    int32_t* v1;
    int32_t* rdi2;
    int32_t* rsi3;
    int64_t rbp4;
    int32_t eax5;
    int64_t rbx6;
    int64_t r14_7;
    int64_t r15_8;
    int64_t r12_9;
    int64_t r13_10;
    int64_t v11;

    while (1) {
        v1 = reinterpret_cast<int32_t*>(__return_address());
        do {
            *rdi2 = *rsi3;
            rdi2 = v1;
            rsi3 = reinterpret_cast<int32_t*>(0x3e2);
            fun_3e9();
            ++rbp4;
            if (rbp4 == 0x514) 
                goto addr_419_7;
            eax5 = *reinterpret_cast<int32_t*>(&rbp4) * 0xffffcccd;
            __asm__("ror ax, 0x2");
        } while (static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax5)) > 0xccc);
        *reinterpret_cast<int32_t*>(&rdi2) = 10;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi2) + 4) = reinterpret_cast<int32_t>(fputc);
        rsi3 = v1;
        fun_417();
    }
    addr_419_7:
    fun_435(v1, 0x420, 0x427);
    fun_44e(0x43c, 22, 1, v1);
    fun_35b(rbx6, 22, 1, v1);
    fun_363(r14_7, 22, 1, v1);
    fun_36b(r15_8, 22, 1, v1);
    fun_373(r12_9, 22, 1, v1);
    fun_37b(r13_10, 22, 1, v1);
    goto v11;
}

void fun_3cb();

void fun_3b0(int64_t rdi, int64_t rsi, int64_t rdx) {
    int32_t* v4;
    int32_t* rsi5;
    int64_t rbp6;
    int32_t* rdi7;
    int32_t eax8;
    int64_t rbx9;
    int64_t r14_10;
    int64_t r15_11;
    int64_t r12_12;
    int64_t r13_13;
    int64_t v14;

    v4 = reinterpret_cast<int32_t*>(__return_address());
    rsi5 = reinterpret_cast<int32_t*>(0x3b7);
    *reinterpret_cast<int32_t*>(&rbp6) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp6) + 4) = reinterpret_cast<int32_t>(fputc);
    rdi7 = v4;
    fun_3cb();
    do {
        eax8 = *reinterpret_cast<int32_t*>(&rbp6) * 0xffffcccd;
        __asm__("ror ax, 0x2");
        if (static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax8)) <= 0xccc) {
            *reinterpret_cast<int32_t*>(&rdi7) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi7) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi5 = v4;
            fun_417();
        }
        *rdi7 = *rsi5;
        rdi7 = v4;
        rsi5 = reinterpret_cast<int32_t*>(0x3e2);
        fun_3e9();
        ++rbp6;
    } while (rbp6 != 0x514);
    fun_435(v4, 0x420, 0x427);
    fun_44e(0x43c, 22, 1, v4);
    fun_35b(rbx9, 22, 1, v4);
    fun_363(r14_10, 22, 1, v4);
    fun_36b(r15_11, 22, 1, v4);
    fun_373(r12_12, 22, 1, v4);
    fun_37b(r13_13, 22, 1, v4);
    goto v14;
}

void fun_363(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int64_t r15_5;
    int64_t r12_6;
    int64_t r13_7;
    int64_t v8;

    fun_36b(r15_5, rsi, rdx, rcx);
    fun_373(r12_6, rsi, rdx, rcx);
    fun_37b(r13_7, rsi, rdx, rcx);
    goto v8;
}

void fun_3cb() {
    int32_t* v1;
    int32_t eax2;
    int64_t rbp3;
    int32_t* rdi4;
    int32_t* rsi5;
    int64_t rbx6;
    int64_t r14_7;
    int64_t r15_8;
    int64_t r12_9;
    int64_t r13_10;
    int64_t v11;

    v1 = reinterpret_cast<int32_t*>(__return_address());
    do {
        eax2 = *reinterpret_cast<int32_t*>(&rbp3) * 0xffffcccd;
        __asm__("ror ax, 0x2");
        if (static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax2)) <= 0xccc) {
            *reinterpret_cast<int32_t*>(&rdi4) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi4) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi5 = v1;
            fun_417();
        }
        *rdi4 = *rsi5;
        rdi4 = v1;
        rsi5 = reinterpret_cast<int32_t*>(0x3e2);
        fun_3e9();
        ++rbp3;
    } while (rbp3 != 0x514);
    fun_435(v1, 0x420, 0x427);
    fun_44e(0x43c, 22, 1, v1);
    fun_35b(rbx6, 22, 1, v1);
    fun_363(r14_7, 22, 1, v1);
    fun_36b(r15_8, 22, 1, v1);
    fun_373(r12_9, 22, 1, v1);
    fun_37b(r13_10, 22, 1, v1);
    goto v11;
}

void fun_36b(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int64_t r12_5;
    int64_t r13_6;
    int64_t v7;

    fun_373(r12_5, rsi, rdx, rcx);
    fun_37b(r13_6, rsi, rdx, rcx);
    goto v7;
}

void fun_435(int32_t* rdi, int64_t rsi, int64_t rdx) {
    int32_t* rbp4;
    int64_t rbx5;
    int64_t r14_6;
    int64_t r15_7;
    int64_t r12_8;
    int64_t r13_9;
    int64_t v10;

    fun_44e(0x43c, 22, 1, rbp4);
    fun_35b(rbx5, 22, 1, rbp4);
    fun_363(r14_6, 22, 1, rbp4);
    fun_36b(r15_7, 22, 1, rbp4);
    fun_373(r12_8, 22, 1, rbp4);
    fun_37b(r13_9, 22, 1, rbp4);
    goto v10;
}

void fun_373(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int64_t r13_5;
    int64_t v6;

    fun_37b(r13_5, rsi, rdx, rcx);
    goto v6;
}

void fun_44e(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int64_t rbx5;
    int64_t r14_6;
    int64_t r15_7;
    int64_t r12_8;
    int64_t r13_9;
    int64_t v10;

    fun_35b(rbx5, rsi, rdx, rcx);
    fun_363(r14_6, rsi, rdx, rcx);
    fun_36b(r15_7, rsi, rdx, rcx);
    fun_373(r12_8, rsi, rdx, rcx);
    fun_37b(r13_9, rsi, rdx, rcx);
    goto v10;
}

void fun_37b(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int64_t v5;

    goto v5;
}

void fputc(int32_t edi, int64_t rsi) {
}

/* .LCPI0_3 */
void LCPI0_3();

void fun_19() {
    signed char* rax1;
    signed char* rax2;
    signed char al3;

    *rax1 = reinterpret_cast<signed char>(*rax2 + al3);
    LCPI0_3();
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

void fun_18c() {
    signed char** v1;
    int64_t r8_2;
    int64_t rdx3;
    struct s0* rdi4;
    struct s1* rsi5;
    int64_t rsi6;
    int32_t* rbx7;
    int32_t* r14_8;
    int64_t r8_9;
    struct s2* rdi10;
    struct s3* rsi11;
    struct s2* rdi12;
    struct s0* rdi13;
    int64_t* r15_14;
    int64_t rax15;
    int64_t* r13_16;
    int64_t rcx17;
    struct s4* rsi18;
    int32_t* rbx19;
    struct s2* rdi20;
    struct s5* rsi21;
    struct s0* rdi22;
    struct s6* rsi23;
    struct s2* rdi24;
    struct s7* rsi25;
    struct s8* rsi26;
    struct s2* rdi27;
    int32_t ebp28;

    v1 = reinterpret_cast<signed char**>(__return_address());
    while (1) {
        addr_190_2:
        __asm__("movd xmm8, rdx");
        __asm__("pshufd xmm8, xmm8, 0x44");
        *reinterpret_cast<int32_t*>(&r8_2) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_2) + 4) = reinterpret_cast<int32_t>(fputc);
        __asm__("movdqa xmm9, xmm1");
        do {
            __asm__("movdqa xmm10, xmm9");
            __asm__("pmuludq xmm10, xmm8");
            __asm__("pshufd xmm10, xmm10, 0xe8");
            __asm__("movdqa xmm11, xmm10");
            __asm__("psubd xmm11, xmm2");
            __asm__("movdqa xmm12, xmm11");
            __asm__("pmuludq xmm12, xmm3");
            __asm__("pshufd xmm12, xmm12, 0xed");
            __asm__("pshufd xmm13, xmm11, 0x55");
            __asm__("pmuludq xmm13, xmm3");
            __asm__("pshufd xmm13, xmm13, 0xed");
            __asm__("punpckldq xmm12, xmm13");
            __asm__("psrld xmm12, 0xa");
            __asm__("pshufd xmm13, xmm12, 0xf5");
            __asm__("pmuludq xmm12, xmm4");
            __asm__("paddd xmm10, xmm6");
            __asm__("movdqa xmm14, xmm10");
            __asm__("pmuludq xmm14, xmm3");
            __asm__("pmuludq xmm13, xmm4");
            __asm__("pshufd xmm14, xmm14, 0xed");
            __asm__("pshufd xmm15, xmm10, 0x55");
            __asm__("pmuludq xmm15, xmm3");
            __asm__("punpckldq xmm12, xmm13");
            __asm__("pshufd xmm13, xmm15, 0xed");
            __asm__("punpckldq xmm14, xmm13");
            __asm__("psrld xmm14, 0xa");
            __asm__("psubd xmm11, xmm12");
            __asm__("pshufd xmm12, xmm14, 0xf5");
            __asm__("pmuludq xmm14, xmm4");
            __asm__("cvtdq2pd xmm11, xmm11");
            __asm__("pmuludq xmm12, xmm4");
            __asm__("punpckldq xmm14, xmm12");
            __asm__("psubd xmm10, xmm14");
            __asm__("divpd xmm11, xmm5");
            __asm__("cvtdq2pd xmm10, xmm10");
            __asm__("divpd xmm10, xmm5");
            __asm__("movupd [rdi+r8*8], xmm11");
            __asm__("movupd [rsi+r8*8], xmm10");
            r8_2 = r8_2 + 2;
            __asm__("paddq xmm9, xmm7");
        } while (r8_2 != 0x514);
        while (++rdx3, rdx3 != 0x514) {
            __asm__("xorps xmm8, xmm8");
            __asm__("cvtsi2sd xmm8, edx");
            __asm__("divsd xmm8, xmm0");
            rdi4->f0 = rsi5->f0;
            rsi6 = rdx3 * 0x28a0;
            rdi4 = reinterpret_cast<struct s0*>(rsi6 + reinterpret_cast<int64_t>(rbx7));
            rsi5 = reinterpret_cast<struct s1*>(rsi6 + reinterpret_cast<int64_t>(r14_8));
            if (reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(rsi5) - reinterpret_cast<int64_t>(rdi4)) >= 16) 
                goto addr_190_2;
            *reinterpret_cast<int32_t*>(&r8_9) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_9) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("xorps xmm8, xmm8");
                __asm__("cvtsi2sd xmm8, r10d");
                __asm__("divsd xmm8, xmm0");
                rdi4->f0 = rsi5->f0;
                rdi10 = reinterpret_cast<struct s2*>(&rdi4->f4);
                rsi11 = reinterpret_cast<struct s3*>(&rsi5->f4);
                __asm__("xorps xmm8, xmm8");
                __asm__("cvtsi2sd xmm8, r9d");
                __asm__("divsd xmm8, xmm0");
                rdi10->f0 = rsi11->f0;
                rdi4 = reinterpret_cast<struct s0*>(&rdi10->f4);
                rsi5 = reinterpret_cast<struct s1*>(&rsi11->f4);
                ++r8_9;
            } while (r8_9 != 0x514);
        }
        break;
    }
    rdi4->f0 = rsi5->f0;
    rdi12 = reinterpret_cast<struct s2*>(&rdi4->f4);
    rdi12->f0 = rsi5->f4;
    rdi13 = reinterpret_cast<struct s0*>(&rdi12->f4);
    do {
        r15_14[rax15] = reinterpret_cast<int64_t>(fputc);
        r13_16[rax15] = reinterpret_cast<int64_t>(fputc);
        *reinterpret_cast<int32_t*>(&rcx17) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx17) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rsi18 = reinterpret_cast<struct s4*>(rbx19 + rax15 * 0xa28);
            rdi13->f0 = rsi18->f0;
            rdi20 = reinterpret_cast<struct s2*>(&rdi13->f4);
            rsi21 = reinterpret_cast<struct s5*>(&rsi18->f4);
            __asm__("mulsd xmm2, [r12+rcx*8]");
            __asm__("addsd xmm2, [r15+rax*8]");
            rdi20->f0 = rsi21->f0;
            rdi22 = reinterpret_cast<struct s0*>(&rdi20->f4);
            rsi23 = reinterpret_cast<struct s6*>(&rsi21->f4);
            rdi22->f0 = rsi23->f0;
            rdi24 = reinterpret_cast<struct s2*>(&rdi22->f4);
            rsi25 = reinterpret_cast<struct s7*>(&rsi23->f4);
            __asm__("mulsd xmm2, [r12+rcx*8]");
            __asm__("addsd xmm2, [r13+rax*8+0x0]");
            rdi24->f0 = rsi25->f0;
            rdi13 = reinterpret_cast<struct s0*>(&rdi24->f4);
            rsi26 = reinterpret_cast<struct s8*>(&rsi25->f4);
            ++rcx17;
        } while (rcx17 != 0x514);
        __asm__("mulsd xmm2, xmm0");
        rdi13->f0 = rsi26->f0;
        rdi27 = reinterpret_cast<struct s2*>(&rdi13->f4);
        __asm__("mulsd xmm3, xmm1");
        __asm__("addsd xmm3, xmm2");
        rdi27->f0 = rsi26->f4;
        rdi13 = reinterpret_cast<struct s0*>(&rdi27->f4);
        ++rax15;
    } while (rax15 != 0x514);
    if (ebp28 < 43) 
        goto 0x353;
    if (**v1 != fputc) 
        goto "???";
    fun_3b0(0x3a1, 22, 1);
}

