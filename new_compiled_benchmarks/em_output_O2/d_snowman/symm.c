
void fun_529(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx);

void fun_531(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx);

void fun_521(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int64_t r14_5;
    int64_t r15_6;
    int64_t v7;

    fun_529(r14_5, rsi, rdx, rcx);
    fun_531(r15_6, rsi, rdx, rcx);
    goto v7;
}

void fun_5e0();

void fputc(int32_t edi, int64_t rsi);

void fun_615(int32_t* rdi, int64_t rsi, int64_t rdx);

void fun_62e(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx);

void fun_5bd() {
    int32_t* rdi1;
    int32_t* rsi2;
    int32_t* v3;
    int64_t r12_4;
    int64_t rbp5;
    int64_t r13_6;
    int32_t* v7;
    int32_t* v8;
    int64_t rbx9;
    int64_t r14_10;
    int64_t r15_11;
    int64_t v12;

    while (1) {
        *rdi1 = *rsi2;
        rdi1 = v3;
        rsi2 = reinterpret_cast<int32_t*>(0x5d9);
        fun_5e0();
        ++r12_4;
        if (r12_4 == 0x4b0) {
            ++rbp5;
            if (rbp5 == 0x3e8) 
                break;
            r13_6 = rbp5 * 0x3e8;
            *reinterpret_cast<int32_t*>(&r12_4) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_4) + 4) = reinterpret_cast<int32_t>(fputc);
        }
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r12_4 + r13_6) * 0xcccccccd) > 0xccccccc) 
            continue;
        *reinterpret_cast<int32_t*>(&rdi1) = 10;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi1) + 4) = reinterpret_cast<int32_t>(fputc);
        rsi2 = v7;
        fun_5bd();
    }
    fun_615(v8, 0x5ff, 0x606);
    fun_62e(0x61c, 22, 1, v8);
    fun_521(rbx9, 22, 1, v8);
    fun_529(r14_10, 22, 1, v8);
    fun_531(r15_11, 22, 1, v8);
    goto v12;
}

void fun_5e0() {
    int64_t r12_1;
    int64_t rbp2;
    int64_t r13_3;
    int32_t* rdi4;
    int32_t* rsi5;
    int32_t* v6;
    int32_t* v7;
    int32_t* v8;
    int64_t rbx9;
    int64_t r14_10;
    int64_t r15_11;
    int64_t v12;

    while (1) {
        ++r12_1;
        if (r12_1 == 0x4b0) {
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
            rsi5 = v6;
            fun_5bd();
        }
        *rdi4 = *rsi5;
        rdi4 = v7;
        rsi5 = reinterpret_cast<int32_t*>(0x5d9);
        fun_5e0();
    }
    fun_615(v8, 0x5ff, 0x606);
    fun_62e(0x61c, 22, 1, v8);
    fun_521(rbx9, 22, 1, v8);
    fun_529(r14_10, 22, 1, v8);
    fun_531(r15_11, 22, 1, v8);
    goto v12;
}

void fun_615(int32_t* rdi, int64_t rsi, int64_t rdx) {
    int32_t* r12_4;
    int64_t rbx5;
    int64_t r14_6;
    int64_t r15_7;
    int64_t v8;

    fun_62e(0x61c, 22, 1, r12_4);
    fun_521(rbx5, 22, 1, r12_4);
    fun_529(r14_6, 22, 1, r12_4);
    fun_531(r15_7, 22, 1, r12_4);
    goto v8;
}

void fun_584();

void fun_565(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8) {
    int32_t* rsi6;
    int64_t rbp7;
    int32_t* v8;
    int32_t* r12_9;
    int32_t* rdi10;
    int32_t* r12_11;
    int64_t r13_12;
    int64_t r12_13;
    int64_t rbx14;
    int64_t r14_15;
    int64_t r15_16;
    int64_t v17;

    rsi6 = reinterpret_cast<int32_t*>(0x56c);
    *reinterpret_cast<int32_t*>(&rbp7) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp7) + 4) = reinterpret_cast<int32_t>(fputc);
    v8 = r12_9;
    rdi10 = r12_11;
    fun_584();
    do {
        r13_12 = rbp7 * 0x3e8;
        *reinterpret_cast<int32_t*>(&r12_13) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_13) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r12_13 + r13_12) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi10) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi10) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi6 = v8;
                fun_5bd();
            }
            *rdi10 = *rsi6;
            rdi10 = v8;
            rsi6 = reinterpret_cast<int32_t*>(0x5d9);
            fun_5e0();
            ++r12_13;
        } while (r12_13 != 0x4b0);
        ++rbp7;
    } while (rbp7 != 0x3e8);
    fun_615(v8, 0x5ff, 0x606);
    fun_62e(0x61c, 22, 1, v8);
    fun_521(rbx14, 22, 1, v8);
    fun_529(r14_15, 22, 1, v8);
    fun_531(r15_16, 22, 1, v8);
    goto v17;
}

void fun_529(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int64_t r15_5;
    int64_t v6;

    fun_531(r15_5, rsi, rdx, rcx);
    goto v6;
}

void fun_62e(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int64_t rbx5;
    int64_t r14_6;
    int64_t r15_7;
    int64_t v8;

    fun_521(rbx5, rsi, rdx, rcx);
    fun_529(r14_6, rsi, rdx, rcx);
    fun_531(r15_7, rsi, rdx, rcx);
    goto v8;
}

void fun_584() {
    int64_t r13_1;
    int64_t rbp2;
    int64_t r12_3;
    int32_t* rdi4;
    int32_t* rsi5;
    int32_t* v6;
    int32_t* v7;
    int32_t* v8;
    int64_t rbx9;
    int64_t r14_10;
    int64_t r15_11;
    int64_t v12;

    do {
        r13_1 = rbp2 * 0x3e8;
        *reinterpret_cast<int32_t*>(&r12_3) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_3) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r12_3 + r13_1) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi4) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi4) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi5 = v6;
                fun_5bd();
            }
            *rdi4 = *rsi5;
            rdi4 = v7;
            rsi5 = reinterpret_cast<int32_t*>(0x5d9);
            fun_5e0();
            ++r12_3;
        } while (r12_3 != 0x4b0);
        ++rbp2;
    } while (rbp2 != 0x3e8);
    fun_615(v8, 0x5ff, 0x606);
    fun_62e(0x61c, 22, 1, v8);
    fun_521(rbx9, 22, 1, v8);
    fun_529(r14_10, 22, 1, v8);
    fun_531(r15_11, 22, 1, v8);
    goto v12;
}

void fun_531(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int64_t v5;

    goto v5;
}

void fputc(int32_t edi, int64_t rsi) {
}

void fun_84() {
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

void fun_a0() {
    struct s0* rdi1;
    int64_t rax2;
    int64_t rdx3;
    int64_t rax4;
    struct s1* rsi5;
    int32_t* rbx6;
    int64_t r15_7;
    int64_t rdi8;
    int64_t r8_9;
    struct s2* rdi10;
    struct s3* rsi11;

    *reinterpret_cast<int32_t*>(&rdi1) = static_cast<int32_t>(rax2 + 0x4b0);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi1) + 4) = reinterpret_cast<int32_t>(fputc);
    rdx3 = rax4 * 0x2580;
    rsi5 = reinterpret_cast<struct s1*>(rdx3 + reinterpret_cast<int64_t>(rbx6));
    if (reinterpret_cast<uint64_t>(rdx3 + r15_7 - reinterpret_cast<int64_t>(rsi5)) >= 16) {
        __asm__("movd xmm6, rax");
        __asm__("pshufd xmm6, xmm6, 0x44");
        __asm__("movd xmm7, rdi");
        __asm__("pshufd xmm7, xmm7, 0x44");
        *reinterpret_cast<int32_t*>(&rdi8) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi8) + 4) = reinterpret_cast<int32_t>(fputc);
        __asm__("movdqa xmm8, xmm4");
        do {
            __asm__("movdqa xmm10, xmm8");
            __asm__("paddq xmm10, xmm6");
            __asm__("pshufd xmm9, xmm10, 0xe8");
            __asm__("pshufd xmm11, xmm10, 0xee");
            __asm__("pmuludq xmm10, xmm1");
            __asm__("pshufd xmm10, xmm10, 0xed");
            __asm__("pmuludq xmm11, xmm1");
            __asm__("pshufd xmm11, xmm11, 0xed");
            __asm__("punpckldq xmm10, xmm11");
            __asm__("psrld xmm10, 0x5");
            __asm__("movdqa xmm11, xmm7");
            __asm__("psubq xmm11, xmm8");
            __asm__("pshufd xmm12, xmm10, 0xf5");
            __asm__("pshufd xmm13, xmm11, 0xe8");
            __asm__("pshufd xmm14, xmm11, 0xee");
            __asm__("pmuludq xmm11, xmm1");
            __asm__("pmuludq xmm10, xmm2");
            __asm__("pshufd xmm11, xmm11, 0xed");
            __asm__("pmuludq xmm14, xmm1");
            __asm__("pshufd xmm14, xmm14, 0xed");
            __asm__("pmuludq xmm12, xmm2");
            __asm__("punpckldq xmm11, xmm14");
            __asm__("psrld xmm11, 0x5");
            __asm__("pshufd xmm14, xmm11, 0xf5");
            __asm__("punpckldq xmm10, xmm12");
            __asm__("pmuludq xmm11, xmm2");
            __asm__("pmuludq xmm14, xmm2");
            __asm__("punpckldq xmm11, xmm14");
            __asm__("psubd xmm9, xmm10");
            __asm__("cvtdq2pd xmm9, xmm9");
            __asm__("psubd xmm13, xmm11");
            __asm__("divpd xmm9, xmm5");
            __asm__("cvtdq2pd xmm10, xmm13");
            __asm__("divpd xmm10, xmm5");
            __asm__("movupd [rsi+rdi*8], xmm9");
            __asm__("movupd [rdx+rdi*8], xmm10");
            rdi8 = rdi8 + 2;
            __asm__("paddq xmm8, xmm3");
        } while (rdi8 != 0x4b0);
        goto 0x90;
    } else {
        *reinterpret_cast<int32_t*>(&r8_9) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_9) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("xorps xmm6, xmm6");
            __asm__("cvtsi2sd xmm6, r9d");
            __asm__("divsd xmm6, xmm0");
            rdi1->f0 = rsi5->f0;
            rdi10 = reinterpret_cast<struct s2*>(&rdi1->f4);
            rsi11 = reinterpret_cast<struct s3*>(&rsi5->f4);
            __asm__("xorps xmm6, xmm6");
            __asm__("cvtsi2sd xmm6, r9d");
            __asm__("divsd xmm6, xmm0");
            rdi10->f0 = rsi11->f0;
            rdi1 = reinterpret_cast<struct s0*>(&rdi10->f4);
            rsi5 = reinterpret_cast<struct s1*>(&rsi11->f4);
            ++r8_9;
        } while (r8_9 != 0x4b0);
        goto 0x90;
    }
}

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

int64_t* g549 = reinterpret_cast<int64_t*>(0x3d8d48208b4c);

void fun_23d() {
    uint64_t rdx1;
    int64_t rax2;
    struct s4* rsi3;
    struct s5* rdi4;
    uint64_t r8_5;
    uint64_t rcx6;
    uint64_t rcx7;
    uint64_t r9_8;
    uint64_t r10_9;
    uint64_t r9_10;
    struct s4** r14_11;
    uint64_t r11_12;
    uint64_t r13_13;
    int32_t* rsi14;
    struct s6* rdi15;
    int32_t* r15_16;
    int64_t r8_17;
    struct s7* rdi18;
    struct s8* rsi19;
    struct s9* rdi20;
    struct s10* rsi21;
    void* rdi22;
    struct s11* rdi23;
    int32_t* r15_24;
    struct s12* rdi25;
    struct s8* rsi26;
    struct s10* rsi27;
    int32_t v28;
    signed char** v29;
    int64_t* rax30;
    int64_t rcx31;
    int64_t rbx32;

    *reinterpret_cast<int32_t*>(&rdx1) = 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx1) + 4) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(&rax2) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax2) + 4) = reinterpret_cast<int32_t>(fputc);
    rsi3 = reinterpret_cast<struct s4*>(0xc08f380000000000);
    __asm__("movapd xmm4, [rip+0x0]");
    rdi4 = reinterpret_cast<struct s5*>(0x7ffffffffffffffe);
    __asm__("movdqa xmm5, [rip+0x0]");
    __asm__("movapd xmm6, [rip+0x0]");
    while (1) {
        r8_5 = rcx6;
        if (rdx1 >= 2) {
            rcx7 = rdx1 & reinterpret_cast<uint64_t>(rdi4);
            __asm__("movd xmm7, r8");
            __asm__("pshufd xmm7, xmm7, 0x44");
            *reinterpret_cast<int32_t*>(&r9_8) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_8) + 4) = reinterpret_cast<int32_t>(fputc);
            __asm__("movdqa xmm8, xmm5");
            do {
                __asm__("movdqa xmm9, xmm8");
                __asm__("paddq xmm9, xmm7");
                __asm__("pshufd xmm10, xmm9, 0xe8");
                __asm__("pshufd xmm11, xmm9, 0xee");
                __asm__("pmuludq xmm9, xmm1");
                __asm__("pshufd xmm9, xmm9, 0xed");
                __asm__("pmuludq xmm11, xmm1");
                __asm__("pshufd xmm11, xmm11, 0xed");
                __asm__("punpckldq xmm9, xmm11");
                __asm__("psrld xmm9, 0x5");
                __asm__("pshufd xmm11, xmm9, 0xf5");
                __asm__("pmuludq xmm9, xmm2");
                __asm__("pmuludq xmm11, xmm2");
                __asm__("punpckldq xmm9, xmm11");
                __asm__("psubd xmm10, xmm9");
                __asm__("cvtdq2pd xmm9, xmm10");
                __asm__("divpd xmm9, xmm6");
                __asm__("movupd [r10+r9*8], xmm9");
                r9_8 = r9_8 + 2;
                __asm__("paddq xmm8, xmm3");
            } while (r9_8 != rcx7);
            if (rdx1 != rcx7) 
                goto addr_33e_6;
        } else {
            *reinterpret_cast<int32_t*>(&rcx7) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx7) + 4) = reinterpret_cast<int32_t>(fputc);
            goto addr_340_8;
        }
        addr_37a_9:
        rcx6 = r8_5 + 1;
        if (r8_5 > 0x3e6) {
            addr_280_10:
            ++rdx1;
            if (rcx6 == 0x3e8) 
                break; else 
                continue;
        } else {
            r10_9 = 0x3e7 - r8_5;
            r9_10 = rdx1;
            if (r10_9 < 4) {
                do {
                    addr_3e0_12:
                    (r14_11 + r8_5 * 0x3e8)[r9_10] = rsi3;
                    ++r9_10;
                } while (r9_10 != 0x3e8);
            } else {
                r11_12 = r10_9 & 0xfffffffffffffffc;
                r9_10 = rdx1 + r11_12;
                *reinterpret_cast<int32_t*>(&r13_13) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_13) + 4) = reinterpret_cast<int32_t>(fputc);
                do {
                    __asm__("movupd [rbp+r12*8+0x0], xmm4");
                    __asm__("movupd [rbp+r12*8+0x10], xmm4");
                    r13_13 = r13_13 + 4;
                } while (r13_13 != r11_12);
                if (r10_9 == r11_12) 
                    goto addr_280_10; else 
                    goto addr_3de_16;
            }
        }
        goto addr_280_10;
        addr_3de_16:
        goto addr_3e0_12;
        addr_33e_6:
        do {
            addr_340_8:
            __asm__("xorps xmm7, xmm7");
            __asm__("cvtsi2sd xmm7, r9d");
            __asm__("divsd xmm7, xmm0");
            rdi4->f0 = rsi3->f0;
            rdi4 = reinterpret_cast<struct s5*>(&rdi4->f4);
            rsi3 = reinterpret_cast<struct s4*>(&rsi3->f4);
            ++rcx7;
        } while (rcx7 != rdx1);
        goto addr_37a_9;
    }
    rdi4->f0 = rsi3->f0;
    rdi4->f4 = rsi3->f4;
    do {
        *reinterpret_cast<int32_t*>(&rsi14) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi14) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            if (rax2 == fputc) {
                __asm__("pxor xmm2, xmm2");
            } else {
                rdi15 = reinterpret_cast<struct s6*>(r15_16 + rax2 * 0x960 + reinterpret_cast<int64_t>(rsi14) * 2);
                __asm__("pxor xmm2, xmm2");
                *reinterpret_cast<int32_t*>(&r8_17) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_17) + 4) = reinterpret_cast<int32_t>(fputc);
                do {
                    rdi15->f0 = *rsi14;
                    rdi18 = reinterpret_cast<struct s7*>(&rdi15->f4);
                    rsi19 = reinterpret_cast<struct s8*>(rsi14 + 1);
                    __asm__("mulsd xmm3, xmm0");
                    __asm__("mulsd xmm3, [rcx+r8*8]");
                    __asm__("addsd xmm3, [r10+rsi*8]");
                    rdi18->f0 = rsi19->f0;
                    rdi20 = reinterpret_cast<struct s9*>(&rdi18->f4);
                    rsi21 = reinterpret_cast<struct s10*>(&rsi19->f4);
                    rdi20->f0 = rsi21->f0;
                    rdi15 = reinterpret_cast<struct s6*>(&rdi20->f4);
                    rsi14 = &rsi21->f4;
                    __asm__("mulsd xmm3, [rcx+r8*8]");
                    __asm__("addsd xmm2, xmm3");
                    ++r8_17;
                } while (r8_17 != rax2);
            }
            rdi22 = reinterpret_cast<void*>(rax2 * 0x2580);
            rdi23 = reinterpret_cast<struct s11*>(reinterpret_cast<int64_t>(rdi22) + reinterpret_cast<int64_t>(r15_24));
            rdi23->f0 = *rsi14;
            rdi25 = reinterpret_cast<struct s12*>(&rdi23->f4);
            rsi26 = reinterpret_cast<struct s8*>(rsi14 + 1);
            __asm__("mulsd xmm3, xmm0");
            __asm__("mulsd xmm3, [rdx]");
            rdi25->f0 = rsi26->f0;
            rsi27 = reinterpret_cast<struct s10*>(&rsi26->f4);
            __asm__("mulsd xmm4, xmm1");
            __asm__("addsd xmm4, xmm3");
            __asm__("mulsd xmm2, xmm0");
            __asm__("addsd xmm2, xmm4");
            rdi25->f4 = rsi27->f0;
            rsi14 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi27->f4) + 1);
        } while (rsi14 != 0x4b0);
        ++rax2;
    } while (rax2 != 0x3e8);
    if (v28 < 43) 
        goto 0x519;
    if (**v29 != fputc) 
        goto "???";
    rax30 = g549;
    rcx31 = *rax30;
    fun_565(0x553, 22, 1, rcx31, rbx32 + reinterpret_cast<int64_t>(rdi22));
}

