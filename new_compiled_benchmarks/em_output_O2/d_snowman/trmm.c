
void fun_381(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx);

void fun_379(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t r14_5;
    int64_t v6;

    fun_381(r14_5, rsi, rdx, rcx);
    goto v6;
}

void fun_41c();

void fputc(int32_t edi, int64_t rsi);

void fun_44c(int64_t rdi, int64_t rsi, int64_t rdx);

void fun_465(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx);

void fun_3fb() {
    int32_t* rdi1;
    int32_t* rsi2;
    int32_t* r15_3;
    int64_t r12_4;
    int64_t r13_5;
    int64_t rbp6;
    int32_t* r15_7;
    int64_t r15_8;
    int64_t r15_9;
    int64_t rbx10;
    int64_t r14_11;
    int64_t v12;

    while (1) {
        *rdi1 = *rsi2;
        rdi1 = r15_3;
        rsi2 = reinterpret_cast<int32_t*>(0x415);
        fun_41c();
        ++r12_4;
        if (r12_4 == 0x4b0) {
            ++r13_5;
            if (r13_5 == 0x3e8) 
                break;
            rbp6 = r13_5 * 0x3e8;
            *reinterpret_cast<int32_t*>(&r12_4) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_4) + 4) = reinterpret_cast<int32_t>(fputc);
        }
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r12_4 + rbp6) * 0xcccccccd) > 0xccccccc) 
            continue;
        *reinterpret_cast<int32_t*>(&rdi1) = 10;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi1) + 4) = reinterpret_cast<int32_t>(fputc);
        rsi2 = r15_7;
        fun_3fb();
    }
    fun_44c(r15_8, 0x43b, 0x442);
    fun_465(0x453, 22, 1, r15_9);
    fun_379(rbx10, 22, 1, r15_9);
    fun_381(r14_11, 22, 1, r15_9);
    goto v12;
}

void fun_41c() {
    int64_t r12_1;
    int64_t r13_2;
    int64_t rbp3;
    int32_t* rdi4;
    int32_t* rsi5;
    int32_t* r15_6;
    int32_t* r15_7;
    int64_t r15_8;
    int64_t r15_9;
    int64_t rbx10;
    int64_t r14_11;
    int64_t v12;

    while (1) {
        ++r12_1;
        if (r12_1 == 0x4b0) {
            ++r13_2;
            if (r13_2 == 0x3e8) 
                break;
            rbp3 = r13_2 * 0x3e8;
            *reinterpret_cast<int32_t*>(&r12_1) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_1) + 4) = reinterpret_cast<int32_t>(fputc);
        }
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r12_1 + rbp3) * 0xcccccccd) <= 0xccccccc) {
            *reinterpret_cast<int32_t*>(&rdi4) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi4) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi5 = r15_6;
            fun_3fb();
        }
        *rdi4 = *rsi5;
        rdi4 = r15_7;
        rsi5 = reinterpret_cast<int32_t*>(0x415);
        fun_41c();
    }
    fun_44c(r15_8, 0x43b, 0x442);
    fun_465(0x453, 22, 1, r15_9);
    fun_379(rbx10, 22, 1, r15_9);
    fun_381(r14_11, 22, 1, r15_9);
    goto v12;
}

void fun_3d0() {
    int64_t rbp1;
    int64_t r13_2;
    int64_t r12_3;
    int32_t* rdi4;
    int32_t* rsi5;
    int32_t* r15_6;
    int32_t* r15_7;
    int64_t r15_8;
    int64_t r15_9;
    int64_t rbx10;
    int64_t r14_11;
    int64_t v12;

    do {
        rbp1 = r13_2 * 0x3e8;
        *reinterpret_cast<int32_t*>(&r12_3) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_3) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r12_3 + rbp1) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi4) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi4) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi5 = r15_6;
                fun_3fb();
            }
            *rdi4 = *rsi5;
            rdi4 = r15_7;
            rsi5 = reinterpret_cast<int32_t*>(0x415);
            fun_41c();
            ++r12_3;
        } while (r12_3 != 0x4b0);
        ++r13_2;
    } while (r13_2 != 0x3e8);
    fun_44c(r15_8, 0x43b, 0x442);
    fun_465(0x453, 22, 1, r15_9);
    fun_379(rbx10, 22, 1, r15_9);
    fun_381(r14_11, 22, 1, r15_9);
    goto v12;
}

void fun_44c(int64_t rdi, int64_t rsi, int64_t rdx) {
    int64_t r15_4;
    int64_t rbx5;
    int64_t r14_6;
    int64_t v7;

    fun_465(0x453, 22, 1, r15_4);
    fun_379(rbx5, 22, 1, r15_4);
    fun_381(r14_6, 22, 1, r15_4);
    goto v7;
}

void fun_3b5(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int32_t* rsi5;
    int64_t r13_6;
    int32_t* rdi7;
    int32_t* r15_8;
    int64_t rbp9;
    int64_t r12_10;
    int32_t* r15_11;
    int32_t* r15_12;
    int64_t r15_13;
    int64_t r15_14;
    int64_t rbx15;
    int64_t r14_16;
    int64_t v17;

    rsi5 = reinterpret_cast<int32_t*>(0x3bc);
    *reinterpret_cast<int32_t*>(&r13_6) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_6) + 4) = reinterpret_cast<int32_t>(fputc);
    rdi7 = r15_8;
    fun_3d0();
    do {
        rbp9 = r13_6 * 0x3e8;
        *reinterpret_cast<int32_t*>(&r12_10) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_10) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r12_10 + rbp9) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi7) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi7) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi5 = r15_11;
                fun_3fb();
            }
            *rdi7 = *rsi5;
            rdi7 = r15_12;
            rsi5 = reinterpret_cast<int32_t*>(0x415);
            fun_41c();
            ++r12_10;
        } while (r12_10 != 0x4b0);
        ++r13_6;
    } while (r13_6 != 0x3e8);
    fun_44c(r15_13, 0x43b, 0x442);
    fun_465(0x453, 22, 1, r15_14);
    fun_379(rbx15, 22, 1, r15_14);
    fun_381(r14_16, 22, 1, r15_14);
    goto v17;
}

void fun_381(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t v5;

    goto v5;
}

void fun_465(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t rbx5;
    int64_t r14_6;
    int64_t v7;

    fun_379(rbx5, rsi, rdx, rcx);
    fun_381(r14_6, rsi, rdx, rcx);
    goto v7;
}

void fputc(int32_t edi, int64_t rsi) {
}

struct s0 {
    int32_t f0;
    int32_t f1;
};

struct s1 {
    signed char[102] pad102;
    signed char f66;
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

int64_t* g399 = reinterpret_cast<int64_t*>(0x3d8d48388b4c);

void fun_90() {
    signed char* rax1;
    signed char* rax2;
    signed char al3;
    signed char* rcx4;
    signed char* rcx5;
    signed char dh6;
    struct s0* rax7;
    signed char al8;
    struct s1* rsi9;
    int32_t* rsi10;
    int64_t* rbx11;
    int64_t rcx12;
    struct s2* rdi13;
    int32_t* rdi14;
    uint64_t rdx15;
    int32_t* r8_16;
    struct s3* rdi17;
    int64_t rcx18;
    int32_t* r14_19;
    struct s4* rdi20;
    struct s0* rsi21;
    struct s5* rsi22;
    int32_t* rbx23;
    struct s6* rsi24;
    struct s7* rdi25;
    int32_t* r14_26;
    int32_t ebp27;
    signed char** r15_28;
    int64_t* rax29;
    int64_t rcx30;

    *rax1 = reinterpret_cast<signed char>(*rax2 + al3);
    *rcx4 = reinterpret_cast<signed char>(*rcx5 + dh6);
    *reinterpret_cast<int16_t*>(&rax7) = reinterpret_cast<int16_t>(al8 * rsi9->f66);
    do {
        if (rsi10 == fputc) {
            addr_19f_3:
            (rbx11 + reinterpret_cast<uint64_t>(rsi10) * 0x3e8)[static_cast<uint64_t>(rsi10)] = rcx12;
            __asm__("movd xmm10, rdi");
            __asm__("pshufd xmm10, xmm10, 0x44");
            *reinterpret_cast<int32_t*>(&rdi13) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi13) + 4) = reinterpret_cast<int32_t>(fputc);
            __asm__("movdqa xmm11, [rip+0x0]");
        } else {
            if (!reinterpret_cast<int1_t>(rsi10 == 1)) {
                rdi14 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rsi10) & rdx15);
                __asm__("movd xmm10, rsi");
                __asm__("pshufd xmm10, xmm10, 0x44");
                *reinterpret_cast<int32_t*>(&r8_16) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_16) + 4) = reinterpret_cast<int32_t>(fputc);
                __asm__("movdqa xmm11, [rip+0x0]");
                do {
                    __asm__("movdqa xmm12, xmm11");
                    __asm__("paddq xmm12, xmm10");
                    __asm__("pshufd xmm13, xmm12, 0xe8");
                    __asm__("pshufd xmm14, xmm12, 0xee");
                    __asm__("pmuludq xmm12, xmm7");
                    __asm__("pshufd xmm12, xmm12, 0xed");
                    __asm__("pmuludq xmm14, xmm7");
                    __asm__("pshufd xmm14, xmm14, 0xed");
                    __asm__("punpckldq xmm12, xmm14");
                    __asm__("psrld xmm12, 0x6");
                    __asm__("pshufd xmm14, xmm12, 0xf5");
                    __asm__("pmuludq xmm12, xmm8");
                    __asm__("pmuludq xmm14, xmm8");
                    __asm__("punpckldq xmm12, xmm14");
                    __asm__("psubd xmm13, xmm12");
                    __asm__("cvtdq2pd xmm12, xmm13");
                    __asm__("divpd xmm12, xmm0");
                    __asm__("movupd [r9+r8*8], xmm12");
                    r8_16 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(r8_16) + 2);
                    __asm__("paddq xmm11, xmm4");
                } while (r8_16 != rdi14);
                if (rsi10 == rdi14) 
                    goto addr_19f_3; else 
                    goto addr_15e_8;
            } else {
                *reinterpret_cast<int32_t*>(&rdi14) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi14) + 4) = reinterpret_cast<int32_t>(fputc);
                goto addr_160_10;
            }
        }
        do {
            __asm__("movdqa xmm14, xmm10");
            __asm__("psubq xmm14, xmm11");
            __asm__("pshufd xmm12, xmm14, 0xe8");
            __asm__("movdqa xmm13, xmm14");
            __asm__("pmuludq xmm13, xmm1");
            __asm__("pshufd xmm13, xmm13, 0xed");
            __asm__("pshufd xmm15, xmm14, 0xee");
            __asm__("pmuludq xmm15, xmm1");
            __asm__("pshufd xmm15, xmm15, 0xed");
            __asm__("punpckldq xmm13, xmm15");
            __asm__("psrld xmm13, 0x7");
            __asm__("pshufd xmm15, xmm13, 0xf5");
            __asm__("pmuludq xmm13, xmm2");
            __asm__("psubq xmm14, xmm4");
            __asm__("pshufd xmm0, xmm14, 0xe8");
            __asm__("pshufd xmm9, xmm14, 0xee");
            __asm__("pmuludq xmm15, xmm2");
            __asm__("pmuludq xmm14, xmm1");
            __asm__("pshufd xmm14, xmm14, 0xed");
            __asm__("pmuludq xmm9, xmm1");
            __asm__("punpckldq xmm13, xmm15");
            __asm__("pshufd xmm9, xmm9, 0xed");
            __asm__("punpckldq xmm14, xmm9");
            __asm__("psubd xmm12, xmm13");
            __asm__("psrld xmm14, 0x7");
            __asm__("pshufd xmm9, xmm14, 0xf5");
            __asm__("cvtdq2pd xmm12, xmm12");
            __asm__("pmuludq xmm14, xmm2");
            __asm__("pmuludq xmm9, xmm2");
            __asm__("punpckldq xmm14, xmm9");
            __asm__("divpd xmm12, xmm3");
            __asm__("psubd xmm0, xmm14");
            __asm__("cvtdq2pd xmm0, xmm0");
            __asm__("divpd xmm0, xmm3");
            __asm__("movupd [r8+rdi*8], xmm12");
            __asm__("movupd [r9+r8], xmm0");
            rdi13 = reinterpret_cast<struct s2*>(&rdi13->f4);
            __asm__("paddq xmm11, xmm5");
        } while (!reinterpret_cast<int1_t>(rdi13 == 0x4b0));
        continue;
        addr_15e_8:
        do {
            addr_160_10:
            __asm__("xorps xmm10, xmm10");
            __asm__("cvtsi2sd xmm10, r8d");
            __asm__("divsd xmm10, xmm6");
            *rdi14 = *rsi10;
            ++rsi10;
            rdi14 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rdi14 + 1) + 1);
        } while (rdi14 != rsi10);
        goto addr_19f_3;
        rsi10 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rsi10) + 1);
        __asm__("movapd xmm0, [rip+0x0]");
    } while (!reinterpret_cast<int1_t>(rsi10 == 0x3e8));
    rdi13->f0 = *rsi10;
    rdi17 = reinterpret_cast<struct s3*>(&rdi13->f4);
    do {
        *reinterpret_cast<int32_t*>(&rcx18) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx18) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rdi17->f0 = r14_19[reinterpret_cast<uint64_t>(rax7) * 0x960];
            rdi20 = reinterpret_cast<struct s4*>(&rdi17->f4);
            rsi21 = rax7;
            if (reinterpret_cast<uint64_t>(rax7) <= 0x3e6) {
                do {
                    rsi22 = reinterpret_cast<struct s5*>(reinterpret_cast<uint64_t>(rsi21) + 1);
                    rbx23[reinterpret_cast<uint64_t>(rsi22) * 0x7d0] = rsi22->f0;
                    rsi24 = reinterpret_cast<struct s6*>(&rsi22->f4);
                    rdi25 = reinterpret_cast<struct s7*>(r14_26 + reinterpret_cast<uint64_t>(rsi24) * 0x960);
                    __asm__("mulsd xmm2, [rdi+rcx*8]");
                    __asm__("addsd xmm1, xmm2");
                    rdi25->f0 = rsi24->f0;
                    rdi20 = reinterpret_cast<struct s4*>(&rdi25->f4);
                    rsi21 = reinterpret_cast<struct s0*>(&rsi24->f4);
                } while (!reinterpret_cast<int1_t>(rsi21 == 0x3e7));
            }
            __asm__("mulsd xmm1, xmm0");
            rdi20->f0 = rsi21->f0;
            rdi17 = reinterpret_cast<struct s3*>(&rdi20->f4);
            ++rcx18;
        } while (rcx18 != 0x4b0);
        rax7 = reinterpret_cast<struct s0*>(reinterpret_cast<uint64_t>(rax7) + 1);
    } while (rax7 != 0x3e8);
    if (ebp27 < 43) 
        goto 0x371;
    if (**r15_28 != fputc) 
        goto "???";
    rax29 = g399;
    rcx30 = *rax29;
    fun_3b5(0x3a3, 22, 1, rcx30);
}

