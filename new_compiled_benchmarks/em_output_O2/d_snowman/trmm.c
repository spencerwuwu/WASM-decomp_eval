
int32_t* fun_e1(int32_t* rdi, int32_t* rsi);

void fputc(int32_t edi);

int32_t g124f80;

/* .LCPI1_10 */
int32_t LCPI1_10 = 0x948e0fff;

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

struct s0** g46b = reinterpret_cast<struct s0**>(0x3d8d48388b4c);

void fun_487(int64_t rdi, int64_t rsi, int64_t rdx, struct s0* rcx);

void fun_4a2();

void fun_4db();

void fun_4fc();

void fun_52c(struct s0* rdi, int64_t rsi, int64_t rdx, struct s0* rcx);

void fun_545(int64_t rdi, struct s3* rsi, int64_t rdx, struct s0* rcx);

void fun_44b(int64_t* rdi, struct s3* rsi, int64_t rdx, struct s0* rcx);

void fun_453(int32_t* rdi, struct s3* rsi, int64_t rdx, struct s0* rcx);

void fun_cf(int64_t rdi, int64_t rsi) {
    int64_t* rbx3;
    int64_t* rax4;
    int32_t* rax5;
    int32_t* r14_6;
    uint64_t rax7;
    int32_t* rsi8;
    int32_t* rdi9;
    int32_t* rdi10;
    int32_t* r8_11;
    struct s0* rcx12;
    int64_t rdx13;
    int32_t* rdi14;
    struct s1* rsi15;
    struct s2* rsi16;
    struct s0* rdi17;
    int32_t* rdi18;
    struct s3* rsi19;
    struct s3* rsi20;
    int32_t ebp21;
    signed char** r15_22;
    struct s0** rax23;
    struct s0* r15_24;
    struct s0* rcx25;
    struct s0* rsi26;
    int64_t r13_27;
    struct s0* rdi28;
    int64_t rbp29;
    int64_t r12_30;
    int64_t v31;

    rbx3 = rax4;
    rax5 = fun_e1(0x124f80, 8);
    r14_6 = rax5;
    *reinterpret_cast<int32_t*>(&rax7) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax7) + 4) = reinterpret_cast<int32_t>(fputc);
    __asm__("movdqa xmm1, [rip+0x0]");
    __asm__("movdqa xmm2, [rip+0x0]");
    __asm__("movapd xmm3, [rip+0x0]");
    __asm__("movdqa xmm4, [rip+0x0]");
    __asm__("movdqa xmm5, [rip+0x0]");
    g124f80 = LCPI1_10;
    __asm__("movdqa xmm7, [rip+0x0]");
    __asm__("movdqa xmm8, [rip+0x0]");
    __asm__("movapd xmm0, [rip+0x0]");
    *reinterpret_cast<int32_t*>(&rsi8) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi8) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        if (rsi8 == fputc) {
            addr_24f_7:
            (rbx3 + reinterpret_cast<uint64_t>(rsi8) * 0x3e8)[static_cast<uint64_t>(rsi8)] = 0x3ff0000000000000;
            __asm__("movd xmm10, rdi");
            __asm__("pshufd xmm10, xmm10, 0x44");
            *reinterpret_cast<int32_t*>(&rdi9) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi9) + 4) = reinterpret_cast<int32_t>(fputc);
            __asm__("movdqa xmm11, [rip+0x0]");
        } else {
            if (!reinterpret_cast<int1_t>(rsi8 == 1)) {
                rdi10 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rsi8) & 0x7ffffffffffffffe);
                __asm__("movd xmm10, rsi");
                __asm__("pshufd xmm10, xmm10, 0x44");
                *reinterpret_cast<int32_t*>(&r8_11) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_11) + 4) = reinterpret_cast<int32_t>(fputc);
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
                    r8_11 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(r8_11) + 2);
                    __asm__("paddq xmm11, xmm4");
                } while (r8_11 != rdi10);
                if (rsi8 == rdi10) 
                    goto addr_24f_7; else 
                    goto addr_20e_12;
            } else {
                *reinterpret_cast<int32_t*>(&rdi10) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi10) + 4) = reinterpret_cast<int32_t>(fputc);
                goto addr_210_14;
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
            ++rdi9;
            __asm__("paddq xmm11, xmm5");
        } while (!reinterpret_cast<int1_t>(rdi9 == 0x4b0));
        continue;
        addr_20e_12:
        do {
            addr_210_14:
            __asm__("xorps xmm10, xmm10");
            __asm__("cvtsi2sd xmm10, r8d");
            __asm__("divsd xmm10, xmm6");
            *rdi10 = *rsi8;
            ++rsi8;
            rdi10 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rdi10 + 1) + 1);
        } while (rdi10 != rsi8);
        goto addr_24f_7;
        rsi8 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rsi8) + 1);
        __asm__("movapd xmm0, [rip+0x0]");
    } while (!reinterpret_cast<int1_t>(rsi8 == 0x3e8));
    *reinterpret_cast<int32_t*>(&rcx12) = 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx12) + 4) = reinterpret_cast<int32_t>(fputc);
    *rdi9 = *rsi8;
    do {
        *reinterpret_cast<int32_t*>(&rdx13) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx13) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rdi14 = r14_6 + rax7 * 0x960;
            rsi15 = reinterpret_cast<struct s1*>(rdi14 + rdx13 * 2);
            *rdi14 = rsi15->f0;
            rsi16 = reinterpret_cast<struct s2*>(&rsi15->f4);
            rdi17 = rcx12;
            if (rax7 <= 0x3e6) {
                do {
                    rdi17->f0 = rsi16->f0;
                    rdi18 = &rdi17->f4;
                    rsi19 = reinterpret_cast<struct s3*>(&rsi16->f4);
                    __asm__("mulsd xmm2, [r8+rdx*8]");
                    __asm__("addsd xmm1, xmm2");
                    *rdi18 = rsi19->f0;
                    rsi16 = reinterpret_cast<struct s2*>(&rsi19->f4);
                    rdi17 = reinterpret_cast<struct s0*>(reinterpret_cast<int64_t>(rdi18 + 1) + 1);
                } while (!reinterpret_cast<int1_t>(rdi17 == 0x3e8));
            }
            __asm__("mulsd xmm1, xmm0");
            rdi17->f0 = rsi16->f0;
            rsi20 = reinterpret_cast<struct s3*>(&rsi16->f4);
            ++rdx13;
        } while (rdx13 != 0x4b0);
        ++rax7;
        rcx12 = reinterpret_cast<struct s0*>(reinterpret_cast<int64_t>(rcx12) + 1);
    } while (rax7 != 0x3e8);
    if (ebp21 >= 43 && **r15_22 == fputc) {
        rax23 = g46b;
        r15_24 = *rax23;
        rcx25 = r15_24;
        fun_487(0x475, 22, 1, rcx25);
        rsi26 = reinterpret_cast<struct s0*>(0x48e);
        *reinterpret_cast<int32_t*>(&r13_27) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_27) + 4) = reinterpret_cast<int32_t>(fputc);
        rdi28 = r15_24;
        fun_4a2();
        do {
            rbp29 = r13_27 * 0x3e8;
            *reinterpret_cast<int32_t*>(&r12_30) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_30) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("ror eax, 0x2");
                if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r12_30 + rbp29) * 0xcccccccd) <= 0xccccccc) {
                    *reinterpret_cast<int32_t*>(&rdi28) = 10;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi28) + 4) = reinterpret_cast<int32_t>(fputc);
                    rsi26 = r15_24;
                    fun_4db();
                }
                rdi28->f0 = rsi26->f0;
                rdi28 = r15_24;
                rsi26 = reinterpret_cast<struct s0*>(0x4f5);
                fun_4fc();
                ++r12_30;
            } while (r12_30 != 0x4b0);
            ++r13_27;
        } while (r13_27 != 0x3e8);
        fun_52c(r15_24, 0x51b, 0x522, rcx25);
        *reinterpret_cast<int32_t*>(&rsi20) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi20) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx13) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx13) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx12 = r15_24;
        fun_545(0x533, 22, 1, rcx12);
    }
    fun_44b(rbx3, rsi20, rdx13, rcx12);
    fun_453(r14_6, rsi20, rdx13, rcx12);
    goto v31;
}

void fun_44b(int64_t* rdi, struct s3* rsi, int64_t rdx, struct s0* rcx) {
    int32_t* r14_5;
    int64_t v6;

    fun_453(r14_5, rsi, rdx, rcx);
    goto v6;
}

void fun_4db() {
    int32_t* rdi1;
    int32_t* rsi2;
    int32_t* r15_3;
    int64_t r12_4;
    int64_t r13_5;
    int64_t rbp6;
    int32_t* r15_7;
    struct s0* r15_8;
    struct s0* rcx9;
    struct s0* r15_10;
    int64_t* rbx11;
    int32_t* r14_12;
    int64_t v13;

    while (1) {
        *rdi1 = *rsi2;
        rdi1 = r15_3;
        rsi2 = reinterpret_cast<int32_t*>(0x4f5);
        fun_4fc();
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
        fun_4db();
    }
    fun_52c(r15_8, 0x51b, 0x522, rcx9);
    fun_545(0x533, 22, 1, r15_10);
    fun_44b(rbx11, 22, 1, r15_10);
    fun_453(r14_12, 22, 1, r15_10);
    goto v13;
}

void fun_4fc() {
    int64_t r12_1;
    int64_t r13_2;
    int64_t rbp3;
    int32_t* rdi4;
    int32_t* rsi5;
    int32_t* r15_6;
    int32_t* r15_7;
    struct s0* r15_8;
    struct s0* rcx9;
    struct s0* r15_10;
    int64_t* rbx11;
    int32_t* r14_12;
    int64_t v13;

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
            fun_4db();
        }
        *rdi4 = *rsi5;
        rdi4 = r15_7;
        rsi5 = reinterpret_cast<int32_t*>(0x4f5);
        fun_4fc();
    }
    fun_52c(r15_8, 0x51b, 0x522, rcx9);
    fun_545(0x533, 22, 1, r15_10);
    fun_44b(rbx11, 22, 1, r15_10);
    fun_453(r14_12, 22, 1, r15_10);
    goto v13;
}

void fun_52c(struct s0* rdi, int64_t rsi, int64_t rdx, struct s0* rcx) {
    struct s0* r15_5;
    int64_t* rbx6;
    int32_t* r14_7;
    int64_t v8;

    fun_545(0x533, 22, 1, r15_5);
    fun_44b(rbx6, 22, 1, r15_5);
    fun_453(r14_7, 22, 1, r15_5);
    goto v8;
}

struct s4 {
    int32_t f0;
    int32_t f4;
};

int32_t* fun_e1(int32_t* rdi, int32_t* rsi) {
    int32_t* r14_3;
    int32_t* rax4;
    uint64_t rax5;
    int32_t* rsi6;
    int64_t* rbx7;
    int32_t* rdi8;
    int32_t* rdi9;
    int32_t* r8_10;
    struct s0* rcx11;
    int64_t rdx12;
    int32_t* rdi13;
    struct s4* rsi14;
    struct s2* rsi15;
    struct s0* rdi16;
    int32_t* rdi17;
    struct s3* rsi18;
    struct s3* rsi19;
    int32_t ebp20;
    signed char** r15_21;
    struct s0** rax22;
    struct s0* r15_23;
    struct s0* rcx24;
    struct s0* rsi25;
    int64_t r13_26;
    struct s0* rdi27;
    int64_t rbp28;
    int64_t r12_29;
    int64_t* rbx30;
    int64_t v31;

    r14_3 = rax4;
    *reinterpret_cast<int32_t*>(&rax5) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax5) + 4) = reinterpret_cast<int32_t>(fputc);
    __asm__("movdqa xmm1, [rip+0x0]");
    __asm__("movdqa xmm2, [rip+0x0]");
    __asm__("movapd xmm3, [rip+0x0]");
    __asm__("movdqa xmm4, [rip+0x0]");
    __asm__("movdqa xmm5, [rip+0x0]");
    *rdi = *rsi;
    __asm__("movdqa xmm7, [rip+0x0]");
    __asm__("movdqa xmm8, [rip+0x0]");
    __asm__("movapd xmm0, [rip+0x0]");
    *reinterpret_cast<int32_t*>(&rsi6) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi6) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        if (rsi6 == fputc) {
            addr_24f_6:
            (rbx7 + reinterpret_cast<uint64_t>(rsi6) * 0x3e8)[static_cast<uint64_t>(rsi6)] = 0x3ff0000000000000;
            __asm__("movd xmm10, rdi");
            __asm__("pshufd xmm10, xmm10, 0x44");
            *reinterpret_cast<int32_t*>(&rdi8) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi8) + 4) = reinterpret_cast<int32_t>(fputc);
            __asm__("movdqa xmm11, [rip+0x0]");
        } else {
            if (!reinterpret_cast<int1_t>(rsi6 == 1)) {
                rdi9 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rsi6) & 0x7ffffffffffffffe);
                __asm__("movd xmm10, rsi");
                __asm__("pshufd xmm10, xmm10, 0x44");
                *reinterpret_cast<int32_t*>(&r8_10) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_10) + 4) = reinterpret_cast<int32_t>(fputc);
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
                    r8_10 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(r8_10) + 2);
                    __asm__("paddq xmm11, xmm4");
                } while (r8_10 != rdi9);
                if (rsi6 == rdi9) 
                    goto addr_24f_6; else 
                    goto addr_20e_11;
            } else {
                *reinterpret_cast<int32_t*>(&rdi9) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi9) + 4) = reinterpret_cast<int32_t>(fputc);
                goto addr_210_13;
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
            ++rdi8;
            __asm__("paddq xmm11, xmm5");
        } while (!reinterpret_cast<int1_t>(rdi8 == 0x4b0));
        continue;
        addr_20e_11:
        do {
            addr_210_13:
            __asm__("xorps xmm10, xmm10");
            __asm__("cvtsi2sd xmm10, r8d");
            __asm__("divsd xmm10, xmm6");
            *rdi9 = *rsi6;
            ++rsi6;
            rdi9 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rdi9 + 1) + 1);
        } while (rdi9 != rsi6);
        goto addr_24f_6;
        rsi6 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rsi6) + 1);
        __asm__("movapd xmm0, [rip+0x0]");
    } while (!reinterpret_cast<int1_t>(rsi6 == 0x3e8));
    *reinterpret_cast<int32_t*>(&rcx11) = 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx11) + 4) = reinterpret_cast<int32_t>(fputc);
    *rdi8 = *rsi6;
    do {
        *reinterpret_cast<int32_t*>(&rdx12) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx12) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rdi13 = r14_3 + rax5 * 0x960;
            rsi14 = reinterpret_cast<struct s4*>(rdi13 + rdx12 * 2);
            *rdi13 = rsi14->f0;
            rsi15 = reinterpret_cast<struct s2*>(&rsi14->f4);
            rdi16 = rcx11;
            if (rax5 <= 0x3e6) {
                do {
                    rdi16->f0 = rsi15->f0;
                    rdi17 = &rdi16->f4;
                    rsi18 = reinterpret_cast<struct s3*>(&rsi15->f4);
                    __asm__("mulsd xmm2, [r8+rdx*8]");
                    __asm__("addsd xmm1, xmm2");
                    *rdi17 = rsi18->f0;
                    rsi15 = reinterpret_cast<struct s2*>(&rsi18->f4);
                    rdi16 = reinterpret_cast<struct s0*>(reinterpret_cast<int64_t>(rdi17 + 1) + 1);
                } while (!reinterpret_cast<int1_t>(rdi16 == 0x3e8));
            }
            __asm__("mulsd xmm1, xmm0");
            rdi16->f0 = rsi15->f0;
            rsi19 = reinterpret_cast<struct s3*>(&rsi15->f4);
            ++rdx12;
        } while (rdx12 != 0x4b0);
        ++rax5;
        rcx11 = reinterpret_cast<struct s0*>(reinterpret_cast<int64_t>(rcx11) + 1);
    } while (rax5 != 0x3e8);
    if (ebp20 >= 43 && **r15_21 == fputc) {
        rax22 = g46b;
        r15_23 = *rax22;
        rcx24 = r15_23;
        fun_487(0x475, 22, 1, rcx24);
        rsi25 = reinterpret_cast<struct s0*>(0x48e);
        *reinterpret_cast<int32_t*>(&r13_26) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_26) + 4) = reinterpret_cast<int32_t>(fputc);
        rdi27 = r15_23;
        fun_4a2();
        do {
            rbp28 = r13_26 * 0x3e8;
            *reinterpret_cast<int32_t*>(&r12_29) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_29) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("ror eax, 0x2");
                if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r12_29 + rbp28) * 0xcccccccd) <= 0xccccccc) {
                    *reinterpret_cast<int32_t*>(&rdi27) = 10;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi27) + 4) = reinterpret_cast<int32_t>(fputc);
                    rsi25 = r15_23;
                    fun_4db();
                }
                rdi27->f0 = rsi25->f0;
                rdi27 = r15_23;
                rsi25 = reinterpret_cast<struct s0*>(0x4f5);
                fun_4fc();
                ++r12_29;
            } while (r12_29 != 0x4b0);
            ++r13_26;
        } while (r13_26 != 0x3e8);
        fun_52c(r15_23, 0x51b, 0x522, rcx24);
        *reinterpret_cast<int32_t*>(&rsi19) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi19) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx12) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx12) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx11 = r15_23;
        fun_545(0x533, 22, 1, rcx11);
    }
    fun_44b(rbx30, rsi19, rdx12, rcx11);
    fun_453(r14_3, rsi19, rdx12, rcx11);
    goto v31;
}

void fun_487(int64_t rdi, int64_t rsi, int64_t rdx, struct s0* rcx) {
    int32_t* rsi5;
    int64_t r13_6;
    int32_t* rdi7;
    int32_t* r15_8;
    int64_t rbp9;
    int64_t r12_10;
    int32_t* r15_11;
    int32_t* r15_12;
    struct s0* r15_13;
    struct s0* r15_14;
    int64_t* rbx15;
    int32_t* r14_16;
    int64_t v17;

    rsi5 = reinterpret_cast<int32_t*>(0x48e);
    *reinterpret_cast<int32_t*>(&r13_6) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_6) + 4) = reinterpret_cast<int32_t>(fputc);
    rdi7 = r15_8;
    fun_4a2();
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
                fun_4db();
            }
            *rdi7 = *rsi5;
            rdi7 = r15_12;
            rsi5 = reinterpret_cast<int32_t*>(0x4f5);
            fun_4fc();
            ++r12_10;
        } while (r12_10 != 0x4b0);
        ++r13_6;
    } while (r13_6 != 0x3e8);
    fun_52c(r15_13, 0x51b, 0x522, rcx);
    fun_545(0x533, 22, 1, r15_14);
    fun_44b(rbx15, 22, 1, r15_14);
    fun_453(r14_16, 22, 1, r15_14);
    goto v17;
}

void fun_453(int32_t* rdi, struct s3* rsi, int64_t rdx, struct s0* rcx) {
    int64_t v5;

    goto v5;
}

void fun_545(int64_t rdi, struct s3* rsi, int64_t rdx, struct s0* rcx) {
    int64_t* rbx5;
    int32_t* r14_6;
    int64_t v7;

    fun_44b(rbx5, rsi, rdx, rcx);
    fun_453(r14_6, rsi, rdx, rcx);
    goto v7;
}

void fun_4a2() {
    int64_t rbp1;
    int64_t r13_2;
    int64_t r12_3;
    int32_t* rdi4;
    int32_t* rsi5;
    int32_t* r15_6;
    int32_t* r15_7;
    struct s0* r15_8;
    struct s0* rcx9;
    struct s0* r15_10;
    int64_t* rbx11;
    int32_t* r14_12;
    int64_t v13;

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
                fun_4db();
            }
            *rdi4 = *rsi5;
            rdi4 = r15_7;
            rsi5 = reinterpret_cast<int32_t*>(0x4f5);
            fun_4fc();
            ++r12_3;
        } while (r12_3 != 0x4b0);
        ++r13_2;
    } while (r13_2 != 0x3e8);
    fun_52c(r15_8, 0x51b, 0x522, rcx9);
    fun_545(0x533, 22, 1, r15_10);
    fun_44b(rbx11, 22, 1, r15_10);
    fun_453(r14_12, 22, 1, r15_10);
    goto v13;
}

void fputc(int32_t edi) {
    if (reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(edi < reinterpret_cast<int32_t>(fputc) == fputc)) | reinterpret_cast<uint1_t>(edi == fputc)) {
    }
}

void fun_19() {
}

void fun_7d() {
    int64_t rcx1;
    int64_t rcx2;
    signed char dl3;
    uint1_t cf4;

    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(__zero_stack_offset()) + rcx1 * 8) = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(__zero_stack_offset()) + rcx2 * 8) + dl3) + cf4);
}

void fun_99() {
    int64_t r15_1;
    int64_t rax2;

    if (r15_1 + 1 != rax2) {
    }
}

void fun_ad(int32_t edi, int64_t rsi) {
    signed char* rax3;
    signed char* rax4;
    signed char r8b5;

    *rax3 = reinterpret_cast<signed char>(*rax4 + r8b5);
    fun_cf(0xf4240, 8);
}

