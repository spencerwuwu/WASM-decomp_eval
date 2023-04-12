
void fun_56f(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx);

void fun_567(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t r14_5;
    int64_t v6;

    fun_56f(r14_5, rsi, rdx, rcx);
    goto v6;
}

void fun_60c();

void fputc(int32_t edi, int64_t rsi);

void fun_63c(int64_t rdi, int64_t rsi, int64_t rdx);

void fun_655(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx);

void fun_5eb() {
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
        rsi2 = reinterpret_cast<int32_t*>(0x605);
        fun_60c();
        ++r12_4;
        if (r12_4 == 0x514) {
            ++r13_5;
            if (r13_5 == 0x514) 
                break;
            rbp6 = r13_5 * 0x514;
            *reinterpret_cast<int32_t*>(&r12_4) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_4) + 4) = reinterpret_cast<int32_t>(fputc);
        }
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r12_4 + rbp6) * 0xcccccccd) > 0xccccccc) 
            continue;
        *reinterpret_cast<int32_t*>(&rdi1) = 10;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi1) + 4) = reinterpret_cast<int32_t>(fputc);
        rsi2 = r15_7;
        fun_5eb();
    }
    fun_63c(r15_8, 0x62b, 0x632);
    fun_655(0x643, 22, 1, r15_9);
    fun_567(rbx10, 22, 1, r15_9);
    fun_56f(r14_11, 22, 1, r15_9);
    goto v12;
}

void fun_60c() {
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
        if (r12_1 == 0x514) {
            ++r13_2;
            if (r13_2 == 0x514) 
                break;
            rbp3 = r13_2 * 0x514;
            *reinterpret_cast<int32_t*>(&r12_1) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_1) + 4) = reinterpret_cast<int32_t>(fputc);
        }
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r12_1 + rbp3) * 0xcccccccd) <= 0xccccccc) {
            *reinterpret_cast<int32_t*>(&rdi4) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi4) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi5 = r15_6;
            fun_5eb();
        }
        *rdi4 = *rsi5;
        rdi4 = r15_7;
        rsi5 = reinterpret_cast<int32_t*>(0x605);
        fun_60c();
    }
    fun_63c(r15_8, 0x62b, 0x632);
    fun_655(0x643, 22, 1, r15_9);
    fun_567(rbx10, 22, 1, r15_9);
    fun_56f(r14_11, 22, 1, r15_9);
    goto v12;
}

void fun_63c(int64_t rdi, int64_t rsi, int64_t rdx) {
    int64_t r15_4;
    int64_t rbx5;
    int64_t r14_6;
    int64_t v7;

    fun_655(0x643, 22, 1, r15_4);
    fun_567(rbx5, 22, 1, r15_4);
    fun_56f(r14_6, 22, 1, r15_4);
    goto v7;
}

void fun_5be();

void fun_5a3(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
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

    rsi5 = reinterpret_cast<int32_t*>(0x5aa);
    *reinterpret_cast<int32_t*>(&r13_6) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_6) + 4) = reinterpret_cast<int32_t>(fputc);
    rdi7 = r15_8;
    fun_5be();
    do {
        rbp9 = r13_6 * 0x514;
        *reinterpret_cast<int32_t*>(&r12_10) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_10) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r12_10 + rbp9) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi7) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi7) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi5 = r15_11;
                fun_5eb();
            }
            *rdi7 = *rsi5;
            rdi7 = r15_12;
            rsi5 = reinterpret_cast<int32_t*>(0x605);
            fun_60c();
            ++r12_10;
        } while (r12_10 != 0x514);
        ++r13_6;
    } while (r13_6 != 0x514);
    fun_63c(r15_13, 0x62b, 0x632);
    fun_655(0x643, 22, 1, r15_14);
    fun_567(rbx15, 22, 1, r15_14);
    fun_56f(r14_16, 22, 1, r15_14);
    goto v17;
}

void fun_56f(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t v5;

    goto v5;
}

void fun_655(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t rbx5;
    int64_t r14_6;
    int64_t v7;

    fun_567(rbx5, rsi, rdx, rcx);
    fun_56f(r14_6, rsi, rdx, rcx);
    goto v7;
}

void fun_5be() {
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
        rbp1 = r13_2 * 0x514;
        *reinterpret_cast<int32_t*>(&r12_3) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_3) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r12_3 + rbp1) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi4) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi4) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi5 = r15_6;
                fun_5eb();
            }
            *rdi4 = *rsi5;
            rdi4 = r15_7;
            rsi5 = reinterpret_cast<int32_t*>(0x605);
            fun_60c();
            ++r12_3;
        } while (r12_3 != 0x514);
        ++r13_2;
    } while (r13_2 != 0x514);
    fun_63c(r15_8, 0x62b, 0x632);
    fun_655(0x643, 22, 1, r15_9);
    fun_567(rbx10, 22, 1, r15_9);
    fun_56f(r14_11, 22, 1, r15_9);
    goto v12;
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

int64_t* g587 = reinterpret_cast<int64_t*>(0x3d8d48388b4c);

void fun_123() {
    struct s0* rsi1;
    int64_t rax2;
    int64_t rcx3;
    int64_t r14_4;
    int64_t rbx5;
    int32_t* rdi6;
    int32_t* rsi7;
    struct s1* rdi8;
    int32_t* rdi9;
    int32_t eax10;
    int32_t* rdx11;
    int64_t rcx12;
    int32_t* rsi13;
    int32_t* rdi14;
    int64_t r8_15;
    int64_t r14_16;
    int64_t rbx17;
    int64_t r8_18;
    int64_t r9_19;
    int64_t rbx20;
    int64_t r14_21;
    int64_t r8_22;
    int32_t* rdx23;
    int64_t rcx24;
    int32_t* rsi25;
    int32_t* rdi26;
    int64_t r8_27;
    int64_t rbx28;
    int64_t r14_29;
    int64_t r8_30;
    int64_t r9_31;
    int64_t r14_32;
    int64_t rbx33;
    int64_t r8_34;
    int32_t ebp35;
    signed char** r15_36;
    int64_t* rax37;
    int64_t rcx38;

    while (1) {
        addr_130_2:
        __asm__("unpcklpd xmm9, xmm9");
        *reinterpret_cast<int32_t*>(&rsi1) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi1) + 4) = reinterpret_cast<int32_t>(fputc);
        __asm__("movdqa xmm11, xmm3");
        __asm__("movdqa xmm10, xmm3");
        do {
            __asm__("paddd xmm10, xmm4");
            __asm__("cvtdq2pd xmm12, xmm10");
            __asm__("mulpd xmm12, xmm9");
            __asm__("addpd xmm12, xmm5");
            __asm__("divpd xmm12, xmm6");
            __asm__("paddd xmm11, xmm7");
            __asm__("cvtdq2pd xmm11, xmm11");
            __asm__("movupd [rdx+rsi*8], xmm12");
            __asm__("mulpd xmm11, xmm9");
            __asm__("addpd xmm11, xmm8");
            __asm__("divpd xmm11, xmm6");
            __asm__("movupd [rcx+rsi*8], xmm11");
            rsi1 = reinterpret_cast<struct s0*>(reinterpret_cast<int64_t>(rsi1) + 2);
            __asm__("movdqa xmm11, xmm10");
        } while (!reinterpret_cast<int1_t>(rsi1 == 0x514));
        while (++rax2, rax2 != 0x514) {
            __asm__("xorps xmm9, xmm9");
            __asm__("cvtsi2sd xmm9, eax");
            rcx3 = rax2 * 0x28a0;
            if (reinterpret_cast<uint64_t>(rcx3 + r14_4 - (rcx3 + rbx5)) >= 16) 
                goto addr_130_2;
            *reinterpret_cast<int32_t*>(&rsi1) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi1) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                *reinterpret_cast<int32_t*>(&rdi6) = static_cast<int32_t>(reinterpret_cast<int64_t>(rsi1) + 2);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi6) + 4) = reinterpret_cast<int32_t>(fputc);
                __asm__("xorps xmm10, xmm10");
                __asm__("cvtsi2sd xmm10, edi");
                __asm__("mulsd xmm10, xmm9");
                __asm__("addsd xmm10, xmm0");
                __asm__("divsd xmm10, xmm1");
                *rdi6 = rsi1->f0;
                rsi7 = &rsi1->f4;
                *reinterpret_cast<int32_t*>(&rdi8) = static_cast<int32_t>(reinterpret_cast<int64_t>(rsi7) + 3);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi8) + 4) = reinterpret_cast<int32_t>(fputc);
                __asm__("xorps xmm10, xmm10");
                __asm__("cvtsi2sd xmm10, edi");
                __asm__("mulsd xmm10, xmm9");
                __asm__("addsd xmm10, xmm2");
                __asm__("divsd xmm10, xmm1");
                rdi8->f0 = *rsi7;
                rdi9 = &rdi8->f4;
                rsi1 = reinterpret_cast<struct s0*>(reinterpret_cast<int64_t>(rsi7 + 1) + 1);
            } while (!reinterpret_cast<int1_t>(rsi1 == 0x514));
        }
        break;
    }
    eax10 = reinterpret_cast<int32_t>(fputc);
    *rdi9 = rsi1->f0;
    __asm__("movapd xmm1, [rip+0x0]");
    do {
        *reinterpret_cast<int32_t*>(&rdx11) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx11) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rcx12) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx12) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rsi13 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rdx11) + 1);
            rdi14 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rdx11) - 1);
            r8_15 = rcx12 * 0x28a0;
            if (reinterpret_cast<uint64_t>(r8_15 + r14_16 + 0x28a8) >= reinterpret_cast<uint64_t>(rbx17 + r8_15 + 0x79d8)) {
                *reinterpret_cast<int32_t*>(&r8_18) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_18) + 4) = reinterpret_cast<int32_t>(fputc);
            } else {
                *reinterpret_cast<int32_t*>(&r8_18) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_18) + 4) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(&r9_19) = 1;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_19) + 4) = reinterpret_cast<int32_t>(fputc);
                if (reinterpret_cast<uint64_t>(rbx20 + r8_15 + 8) < reinterpret_cast<uint64_t>(r8_15 + r14_21 + 0x5138)) {
                    do {
                        addr_310_24:
                        __asm__("movupd xmm2, [r10+r9*8-0x8]");
                        __asm__("movapd xmm3, xmm2");
                        __asm__("unpckhpd xmm3, xmm2");
                        __asm__("addsd xmm3, xmm2");
                        __asm__("addsd xmm3, [r10+r9*8+0x8]");
                        __asm__("addsd xmm3, [r10+r9*8]");
                        __asm__("addsd xmm3, [r10+r9*8]");
                        __asm__("mulsd xmm3, xmm0");
                        *rdi14 = *rsi13;
                        ++rdi14;
                        ++rsi13;
                        r8_22 = r9_19 + 1;
                        r9_19 = r8_22;
                    } while (r8_22 != 0x513);
                    continue;
                }
            }
            do {
                __asm__("movupd xmm2, [r10+r11]");
                __asm__("movupd xmm3, [r10+r11+0x10]");
                __asm__("movupd xmm4, [r11+r8*8]");
                __asm__("addpd xmm4, xmm2");
                __asm__("movupd xmm2, [r11+r8*8+0x10]");
                __asm__("addpd xmm2, xmm3");
                __asm__("movupd xmm3, [r12+r11]");
                __asm__("addpd xmm3, xmm4");
                __asm__("movupd xmm4, [r12+r11+0x10]");
                __asm__("addpd xmm4, xmm2");
                __asm__("movupd xmm2, [r10+r11]");
                __asm__("addpd xmm2, xmm3");
                __asm__("movupd xmm3, [r10+r11+0x10]");
                __asm__("addpd xmm3, xmm4");
                __asm__("movupd xmm4, [r10+r11]");
                __asm__("addpd xmm4, xmm2");
                __asm__("movupd xmm2, [r10+r11+0x10]");
                __asm__("addpd xmm2, xmm3");
                __asm__("mulpd xmm4, xmm1");
                __asm__("mulpd xmm2, xmm1");
                __asm__("movupd [r10+r9], xmm4");
                __asm__("movupd [r10+r9+0x10], xmm2");
                r8_18 = r8_18 + 4;
            } while (r8_18 != 0x510);
            *reinterpret_cast<int32_t*>(&r9_19) = 0x511;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_19) + 4) = reinterpret_cast<int32_t>(fputc);
            goto addr_310_24;
            ++rcx12;
            rdx11 = rsi13;
        } while (!reinterpret_cast<int1_t>(rsi13 == 0x513));
        *reinterpret_cast<int32_t*>(&rdx23) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx23) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rcx24) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx24) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rsi25 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rdx23) + 1);
            rdi26 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rdx23) - 1);
            r8_27 = rcx24 * 0x28a0;
            if (reinterpret_cast<uint64_t>(r8_27 + rbx28 + 0x28a8) >= reinterpret_cast<uint64_t>(r14_29 + r8_27 + 0x79d8)) {
                *reinterpret_cast<int32_t*>(&r8_30) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_30) + 4) = reinterpret_cast<int32_t>(fputc);
            } else {
                *reinterpret_cast<int32_t*>(&r8_30) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_30) + 4) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(&r9_31) = 1;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_31) + 4) = reinterpret_cast<int32_t>(fputc);
                if (reinterpret_cast<uint64_t>(r14_32 + r8_27 + 8) < reinterpret_cast<uint64_t>(r8_27 + rbx33 + 0x5138)) {
                    do {
                        addr_4d0_36:
                        __asm__("movupd xmm2, [r10+r9*8-0x8]");
                        __asm__("movapd xmm3, xmm2");
                        __asm__("unpckhpd xmm3, xmm2");
                        __asm__("addsd xmm3, xmm2");
                        __asm__("addsd xmm3, [r10+r9*8+0x8]");
                        __asm__("addsd xmm3, [r10+r9*8]");
                        __asm__("addsd xmm3, [r10+r9*8]");
                        __asm__("mulsd xmm3, xmm0");
                        *rdi26 = *rsi25;
                        ++rdi26;
                        ++rsi25;
                        r8_34 = r9_31 + 1;
                        r9_31 = r8_34;
                    } while (r8_34 != 0x513);
                    continue;
                }
            }
            do {
                __asm__("movupd xmm2, [r10+r11]");
                __asm__("movupd xmm3, [r10+r11+0x10]");
                __asm__("movupd xmm4, [r11+r8*8]");
                __asm__("addpd xmm4, xmm2");
                __asm__("movupd xmm2, [r11+r8*8+0x10]");
                __asm__("addpd xmm2, xmm3");
                __asm__("movupd xmm3, [r12+r11]");
                __asm__("addpd xmm3, xmm4");
                __asm__("movupd xmm4, [r12+r11+0x10]");
                __asm__("addpd xmm4, xmm2");
                __asm__("movupd xmm2, [r10+r11]");
                __asm__("addpd xmm2, xmm3");
                __asm__("movupd xmm3, [r10+r11+0x10]");
                __asm__("addpd xmm3, xmm4");
                __asm__("movupd xmm4, [r10+r11]");
                __asm__("addpd xmm4, xmm2");
                __asm__("movupd xmm2, [r10+r11+0x10]");
                __asm__("addpd xmm2, xmm3");
                __asm__("mulpd xmm4, xmm1");
                __asm__("mulpd xmm2, xmm1");
                __asm__("movupd [r10+r9], xmm4");
                __asm__("movupd [r10+r9+0x10], xmm2");
                r8_30 = r8_30 + 4;
            } while (r8_30 != 0x510);
            *reinterpret_cast<int32_t*>(&r9_31) = 0x511;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_31) + 4) = reinterpret_cast<int32_t>(fputc);
            goto addr_4d0_36;
            ++rcx24;
            rdx23 = rsi25;
        } while (!reinterpret_cast<int1_t>(rsi25 == 0x513));
        ++eax10;
    } while (eax10 != 0x1f4);
    if (ebp35 < 43) 
        goto 0x55f;
    if (**r15_36 != fputc) 
        goto "???";
    rax37 = g587;
    rcx38 = *rax37;
    fun_5a3(0x591, 22, 1, rcx38);
}

