
void fun_99f(int64_t rdi, int32_t* rsi, int32_t* rdx, int32_t* rcx);

void fun_997(int64_t rdi, int32_t* rsi, int32_t* rdx, int32_t* rcx) {
    int64_t r14_5;
    int64_t v6;

    fun_99f(r14_5, rsi, rdx, rcx);
    goto v6;
}

void fun_a3c();

void fputc(int32_t edi, int64_t rsi);

void fun_a6c(int32_t* rdi, int64_t rsi, int64_t rdx, int32_t* rcx);

void fun_a85(int64_t rdi, int32_t* rsi, int32_t* rdx, int32_t* rcx);

void fun_a1b() {
    int32_t* rdi1;
    int32_t* rsi2;
    int32_t* r15_3;
    int64_t r12_4;
    int64_t r13_5;
    int64_t rbp6;
    int32_t* r15_7;
    int32_t* r15_8;
    int32_t* rcx9;
    int32_t* r15_10;
    int64_t rbx11;
    int64_t r14_12;
    int64_t v13;

    while (1) {
        *rdi1 = *rsi2;
        rdi1 = r15_3;
        rsi2 = reinterpret_cast<int32_t*>(0xa35);
        fun_a3c();
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
        fun_a1b();
    }
    fun_a6c(r15_8, 0xa5b, 0xa62, rcx9);
    fun_a85(0xa73, 22, 1, r15_10);
    fun_997(rbx11, 22, 1, r15_10);
    fun_99f(r14_12, 22, 1, r15_10);
    goto v13;
}

void fun_a3c() {
    int64_t r12_1;
    int64_t r13_2;
    int64_t rbp3;
    int32_t* rdi4;
    int32_t* rsi5;
    int32_t* r15_6;
    int32_t* r15_7;
    int32_t* r15_8;
    int32_t* rcx9;
    int32_t* r15_10;
    int64_t rbx11;
    int64_t r14_12;
    int64_t v13;

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
            fun_a1b();
        }
        *rdi4 = *rsi5;
        rdi4 = r15_7;
        rsi5 = reinterpret_cast<int32_t*>(0xa35);
        fun_a3c();
    }
    fun_a6c(r15_8, 0xa5b, 0xa62, rcx9);
    fun_a85(0xa73, 22, 1, r15_10);
    fun_997(rbx11, 22, 1, r15_10);
    fun_99f(r14_12, 22, 1, r15_10);
    goto v13;
}

void fun_a6c(int32_t* rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int32_t* r15_5;
    int64_t rbx6;
    int64_t r14_7;
    int64_t v8;

    fun_a85(0xa73, 22, 1, r15_5);
    fun_997(rbx6, 22, 1, r15_5);
    fun_99f(r14_7, 22, 1, r15_5);
    goto v8;
}

void fun_9ee();

void fun_9d3(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int32_t* rsi5;
    int64_t r13_6;
    int32_t* rdi7;
    int32_t* r15_8;
    int64_t rbp9;
    int64_t r12_10;
    int32_t* r15_11;
    int32_t* r15_12;
    int32_t* r15_13;
    int32_t* r15_14;
    int64_t rbx15;
    int64_t r14_16;
    int64_t v17;

    rsi5 = reinterpret_cast<int32_t*>(0x9da);
    *reinterpret_cast<int32_t*>(&r13_6) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_6) + 4) = reinterpret_cast<int32_t>(fputc);
    rdi7 = r15_8;
    fun_9ee();
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
                fun_a1b();
            }
            *rdi7 = *rsi5;
            rdi7 = r15_12;
            rsi5 = reinterpret_cast<int32_t*>(0xa35);
            fun_a3c();
            ++r12_10;
        } while (r12_10 != 0x514);
        ++r13_6;
    } while (r13_6 != 0x514);
    fun_a6c(r15_13, 0xa5b, 0xa62, rcx);
    fun_a85(0xa73, 22, 1, r15_14);
    fun_997(rbx15, 22, 1, r15_14);
    fun_99f(r14_16, 22, 1, r15_14);
    goto v17;
}

void fun_99f(int64_t rdi, int32_t* rsi, int32_t* rdx, int32_t* rcx) {
    int64_t v5;

    goto v5;
}

void fun_a85(int64_t rdi, int32_t* rsi, int32_t* rdx, int32_t* rcx) {
    int64_t rbx5;
    int64_t r14_6;
    int64_t v7;

    fun_997(rbx5, rsi, rdx, rcx);
    fun_99f(r14_6, rsi, rdx, rcx);
    goto v7;
}

struct s0 {
    int32_t f0;
    int32_t f4;
};

struct s1 {
    int32_t f0;
    int32_t f4;
};

int64_t fun_461(struct s0* rdi, struct s1* rsi);

int32_t g19c990;

/* .LCPI1_6 */
int32_t LCPI1_6 = 0x89485354;

int32_t g19c994;

int32_t gc = 0x89c82474;

int32_t g19c998;

/* .LCPI1_7 */
int32_t LCPI1_7 = 0x85d4247c;

struct s2 {
    int32_t f0;
    int32_t f4;
};

struct s3 {
    int32_t f0;
    int32_t f4;
};

int32_t** g9b7 = reinterpret_cast<int32_t**>(0x3d8d48388b4c);

void fun_44f(int64_t rdi, int64_t rsi) {
    int64_t rbx3;
    int64_t rax4;
    int64_t rax5;
    int64_t r14_6;
    int64_t rax7;
    int32_t* rdi8;
    int64_t rcx9;
    struct s2* rsi10;
    int32_t* rdi11;
    int32_t* rsi12;
    struct s3* rdi13;
    int32_t eax14;
    int32_t* rdx15;
    int64_t rcx16;
    int32_t* rsi17;
    int32_t* rdi18;
    int64_t r8_19;
    int64_t r8_20;
    int64_t r9_21;
    int64_t r8_22;
    int32_t* rdx23;
    int32_t* rcx24;
    int32_t* rsi25;
    int32_t* rdi26;
    int64_t r8_27;
    int64_t r8_28;
    int64_t r9_29;
    int64_t r8_30;
    int32_t ebp31;
    signed char** r15_32;
    int32_t** rax33;
    int32_t* r15_34;
    int32_t* rcx35;
    int32_t* rsi36;
    int64_t r13_37;
    int32_t* rdi38;
    int64_t rbp39;
    int64_t r12_40;
    int64_t v41;

    rbx3 = rax4;
    rax5 = fun_461(0x19c990, 8);
    r14_6 = rax5;
    *reinterpret_cast<int32_t*>(&rax7) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax7) + 4) = reinterpret_cast<int32_t>(fputc);
    g19c990 = LCPI1_6;
    g19c994 = gc;
    g19c998 = LCPI1_7;
    rdi8 = reinterpret_cast<int32_t*>(0x19c99c);
    __asm__("movdqa xmm3, [rip+0x0]");
    __asm__("movdqa xmm4, [rip+0x0]");
    __asm__("movapd xmm5, [rip+0x0]");
    __asm__("movapd xmm6, [rip+0x0]");
    __asm__("movdqa xmm7, [rip+0x0]");
    __asm__("movapd xmm8, [rip+0x0]");
    do {
        __asm__("xorps xmm9, xmm9");
        __asm__("cvtsi2sd xmm9, eax");
        rcx9 = rax7 * 0x28a0;
        if (reinterpret_cast<uint64_t>(rcx9 + r14_6 - (rcx9 + rbx3)) >= 16) {
            __asm__("unpcklpd xmm9, xmm9");
            *reinterpret_cast<int32_t*>(&rsi10) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi10) + 4) = reinterpret_cast<int32_t>(fputc);
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
                rsi10 = reinterpret_cast<struct s2*>(reinterpret_cast<int64_t>(rsi10) + 2);
                __asm__("movdqa xmm11, xmm10");
            } while (!reinterpret_cast<int1_t>(rsi10 == 0x514));
        } else {
            *reinterpret_cast<int32_t*>(&rsi10) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi10) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                *reinterpret_cast<int32_t*>(&rdi11) = static_cast<int32_t>(reinterpret_cast<int64_t>(rsi10) + 2);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi11) + 4) = reinterpret_cast<int32_t>(fputc);
                __asm__("xorps xmm10, xmm10");
                __asm__("cvtsi2sd xmm10, edi");
                __asm__("mulsd xmm10, xmm9");
                __asm__("addsd xmm10, xmm0");
                __asm__("divsd xmm10, xmm1");
                *rdi11 = rsi10->f0;
                rsi12 = &rsi10->f4;
                *reinterpret_cast<int32_t*>(&rdi13) = static_cast<int32_t>(reinterpret_cast<int64_t>(rsi12) + 3);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi13) + 4) = reinterpret_cast<int32_t>(fputc);
                __asm__("xorps xmm10, xmm10");
                __asm__("cvtsi2sd xmm10, edi");
                __asm__("mulsd xmm10, xmm9");
                __asm__("addsd xmm10, xmm2");
                __asm__("divsd xmm10, xmm1");
                rdi13->f0 = *rsi12;
                rdi8 = &rdi13->f4;
                rsi10 = reinterpret_cast<struct s2*>(reinterpret_cast<int64_t>(rsi12 + 1) + 1);
            } while (!reinterpret_cast<int1_t>(rsi10 == 0x514));
        }
        ++rax7;
    } while (rax7 != 0x514);
    eax14 = reinterpret_cast<int32_t>(fputc);
    *rdi8 = rsi10->f0;
    __asm__("movapd xmm1, [rip+0x0]");
    do {
        *reinterpret_cast<int32_t*>(&rdx15) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx15) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rcx16) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx16) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rsi17 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rdx15) + 1);
            rdi18 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rdx15) - 1);
            r8_19 = rcx16 * 0x28a0;
            if (reinterpret_cast<uint64_t>(r8_19 + r14_6 + 0x28a8) >= reinterpret_cast<uint64_t>(rbx3 + r8_19 + 0x79d8)) {
                *reinterpret_cast<int32_t*>(&r8_20) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_20) + 4) = reinterpret_cast<int32_t>(fputc);
            } else {
                *reinterpret_cast<int32_t*>(&r8_20) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_20) + 4) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(&r9_21) = 1;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_21) + 4) = reinterpret_cast<int32_t>(fputc);
                if (reinterpret_cast<uint64_t>(rbx3 + r8_19 + 8) < reinterpret_cast<uint64_t>(r8_19 + r14_6 + 0x5138)) {
                    do {
                        addr_740_34:
                        __asm__("movupd xmm2, [r10+r9*8-0x8]");
                        __asm__("movapd xmm3, xmm2");
                        __asm__("unpckhpd xmm3, xmm2");
                        __asm__("addsd xmm3, xmm2");
                        __asm__("addsd xmm3, [r10+r9*8+0x8]");
                        __asm__("addsd xmm3, [r10+r9*8]");
                        __asm__("addsd xmm3, [r10+r9*8]");
                        __asm__("mulsd xmm3, xmm0");
                        *rdi18 = *rsi17;
                        ++rdi18;
                        ++rsi17;
                        r8_22 = r9_21 + 1;
                        r9_21 = r8_22;
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
                r8_20 = r8_20 + 4;
            } while (r8_20 != 0x510);
            *reinterpret_cast<int32_t*>(&r9_21) = 0x511;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_21) + 4) = reinterpret_cast<int32_t>(fputc);
            goto addr_740_34;
            ++rcx16;
            rdx15 = rsi17;
        } while (!reinterpret_cast<int1_t>(rsi17 == 0x513));
        *reinterpret_cast<int32_t*>(&rdx23) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx23) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rcx24) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx24) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rsi25 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rdx23) + 1);
            rdi26 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rdx23) - 1);
            r8_27 = reinterpret_cast<int64_t>(rcx24) * 0x28a0;
            if (reinterpret_cast<uint64_t>(r8_27 + rbx3 + 0x28a8) >= reinterpret_cast<uint64_t>(r14_6 + r8_27 + 0x79d8)) {
                *reinterpret_cast<int32_t*>(&r8_28) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_28) + 4) = reinterpret_cast<int32_t>(fputc);
            } else {
                *reinterpret_cast<int32_t*>(&r8_28) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_28) + 4) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(&r9_29) = 1;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_29) + 4) = reinterpret_cast<int32_t>(fputc);
                if (reinterpret_cast<uint64_t>(r14_6 + r8_27 + 8) < reinterpret_cast<uint64_t>(r8_27 + rbx3 + 0x5138)) {
                    do {
                        addr_900_46:
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
                        r8_30 = r9_29 + 1;
                        r9_29 = r8_30;
                    } while (r8_30 != 0x513);
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
                r8_28 = r8_28 + 4;
            } while (r8_28 != 0x510);
            *reinterpret_cast<int32_t*>(&r9_29) = 0x511;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_29) + 4) = reinterpret_cast<int32_t>(fputc);
            goto addr_900_46;
            rcx24 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rcx24) + 1);
            rdx23 = rsi25;
        } while (!reinterpret_cast<int1_t>(rsi25 == 0x513));
        ++eax14;
    } while (!reinterpret_cast<int1_t>(eax14 == "("));
    if (ebp31 >= 43 && **r15_32 == fputc) {
        rax33 = g9b7;
        r15_34 = *rax33;
        rcx35 = r15_34;
        fun_9d3(0x9c1, 22, 1, rcx35);
        rsi36 = reinterpret_cast<int32_t*>(0x9da);
        *reinterpret_cast<int32_t*>(&r13_37) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_37) + 4) = reinterpret_cast<int32_t>(fputc);
        rdi38 = r15_34;
        fun_9ee();
        do {
            rbp39 = r13_37 * 0x514;
            *reinterpret_cast<int32_t*>(&r12_40) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_40) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("ror eax, 0x2");
                if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r12_40 + rbp39) * 0xcccccccd) <= 0xccccccc) {
                    *reinterpret_cast<int32_t*>(&rdi38) = 10;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi38) + 4) = reinterpret_cast<int32_t>(fputc);
                    rsi36 = r15_34;
                    fun_a1b();
                }
                *rdi38 = *rsi36;
                rdi38 = r15_34;
                rsi36 = reinterpret_cast<int32_t*>(0xa35);
                fun_a3c();
                ++r12_40;
            } while (r12_40 != 0x514);
            ++r13_37;
        } while (r13_37 != 0x514);
        fun_a6c(r15_34, 0xa5b, 0xa62, rcx35);
        *reinterpret_cast<int32_t*>(&rsi25) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi25) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx23) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx23) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx24 = r15_34;
        fun_a85(0xa73, 22, 1, rcx24);
    }
    fun_997(rbx3, rsi25, rdx23, rcx24);
    fun_99f(r14_6, rsi25, rdx23, rcx24);
    goto v41;
}

void fun_9ee() {
    int64_t rbp1;
    int64_t r13_2;
    int64_t r12_3;
    int32_t* rdi4;
    int32_t* rsi5;
    int32_t* r15_6;
    int32_t* r15_7;
    int32_t* r15_8;
    int32_t* rcx9;
    int32_t* r15_10;
    int64_t rbx11;
    int64_t r14_12;
    int64_t v13;

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
                fun_a1b();
            }
            *rdi4 = *rsi5;
            rdi4 = r15_7;
            rsi5 = reinterpret_cast<int32_t*>(0xa35);
            fun_a3c();
            ++r12_3;
        } while (r12_3 != 0x514);
        ++r13_2;
    } while (r13_2 != 0x514);
    fun_a6c(r15_8, 0xa5b, 0xa62, rcx9);
    fun_a85(0xa73, 22, 1, r15_10);
    fun_997(rbx11, 22, 1, r15_10);
    fun_99f(r14_12, 22, 1, r15_10);
    goto v13;
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

int64_t fun_461(struct s0* rdi, struct s1* rsi) {
    int64_t r14_3;
    int64_t rax4;
    int64_t rax5;
    struct s4* rdi6;
    struct s5* rsi7;
    struct s6* rdi8;
    int32_t* rdi9;
    int64_t rcx10;
    int64_t rbx11;
    struct s7* rsi12;
    int32_t* rdi13;
    int32_t* rsi14;
    struct s8* rdi15;
    int32_t eax16;
    int32_t* rdx17;
    int64_t rcx18;
    int32_t* rsi19;
    int32_t* rdi20;
    int64_t r8_21;
    int64_t rbx22;
    int64_t r8_23;
    int64_t r9_24;
    int64_t rbx25;
    int64_t r8_26;
    int32_t* rdx27;
    int32_t* rcx28;
    int32_t* rsi29;
    int32_t* rdi30;
    int64_t r8_31;
    int64_t rbx32;
    int64_t r8_33;
    int64_t r9_34;
    int64_t rbx35;
    int64_t r8_36;
    int32_t ebp37;
    signed char** r15_38;
    int32_t** rax39;
    int32_t* r15_40;
    int32_t* rcx41;
    int32_t* rsi42;
    int64_t r13_43;
    int32_t* rdi44;
    int64_t rbp45;
    int64_t r12_46;
    int64_t rbx47;
    int64_t v48;

    r14_3 = rax4;
    *reinterpret_cast<int32_t*>(&rax5) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax5) + 4) = reinterpret_cast<int32_t>(fputc);
    rdi->f0 = rsi->f0;
    rdi6 = reinterpret_cast<struct s4*>(&rdi->f4);
    rsi7 = reinterpret_cast<struct s5*>(&rsi->f4);
    rdi6->f0 = rsi7->f0;
    rdi8 = reinterpret_cast<struct s6*>(&rdi6->f4);
    rdi8->f0 = rsi7->f4;
    rdi9 = &rdi8->f4;
    __asm__("movdqa xmm3, [rip+0x0]");
    __asm__("movdqa xmm4, [rip+0x0]");
    __asm__("movapd xmm5, [rip+0x0]");
    __asm__("movapd xmm6, [rip+0x0]");
    __asm__("movdqa xmm7, [rip+0x0]");
    __asm__("movapd xmm8, [rip+0x0]");
    do {
        __asm__("xorps xmm9, xmm9");
        __asm__("cvtsi2sd xmm9, eax");
        rcx10 = rax5 * 0x28a0;
        if (reinterpret_cast<uint64_t>(rcx10 + r14_3 - (rcx10 + rbx11)) >= 16) {
            __asm__("unpcklpd xmm9, xmm9");
            *reinterpret_cast<int32_t*>(&rsi12) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi12) + 4) = reinterpret_cast<int32_t>(fputc);
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
                rsi12 = reinterpret_cast<struct s7*>(reinterpret_cast<int64_t>(rsi12) + 2);
                __asm__("movdqa xmm11, xmm10");
            } while (!reinterpret_cast<int1_t>(rsi12 == 0x514));
        } else {
            *reinterpret_cast<int32_t*>(&rsi12) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi12) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                *reinterpret_cast<int32_t*>(&rdi13) = static_cast<int32_t>(reinterpret_cast<int64_t>(rsi12) + 2);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi13) + 4) = reinterpret_cast<int32_t>(fputc);
                __asm__("xorps xmm10, xmm10");
                __asm__("cvtsi2sd xmm10, edi");
                __asm__("mulsd xmm10, xmm9");
                __asm__("addsd xmm10, xmm0");
                __asm__("divsd xmm10, xmm1");
                *rdi13 = rsi12->f0;
                rsi14 = &rsi12->f4;
                *reinterpret_cast<int32_t*>(&rdi15) = static_cast<int32_t>(reinterpret_cast<int64_t>(rsi14) + 3);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi15) + 4) = reinterpret_cast<int32_t>(fputc);
                __asm__("xorps xmm10, xmm10");
                __asm__("cvtsi2sd xmm10, edi");
                __asm__("mulsd xmm10, xmm9");
                __asm__("addsd xmm10, xmm2");
                __asm__("divsd xmm10, xmm1");
                rdi15->f0 = *rsi14;
                rdi9 = &rdi15->f4;
                rsi12 = reinterpret_cast<struct s7*>(reinterpret_cast<int64_t>(rsi14 + 1) + 1);
            } while (!reinterpret_cast<int1_t>(rsi12 == 0x514));
        }
        ++rax5;
    } while (rax5 != 0x514);
    eax16 = reinterpret_cast<int32_t>(fputc);
    *rdi9 = rsi12->f0;
    __asm__("movapd xmm1, [rip+0x0]");
    do {
        *reinterpret_cast<int32_t*>(&rdx17) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx17) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rcx18) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx18) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rsi19 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rdx17) + 1);
            rdi20 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rdx17) - 1);
            r8_21 = rcx18 * 0x28a0;
            if (reinterpret_cast<uint64_t>(r8_21 + r14_3 + 0x28a8) >= reinterpret_cast<uint64_t>(rbx22 + r8_21 + 0x79d8)) {
                *reinterpret_cast<int32_t*>(&r8_23) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_23) + 4) = reinterpret_cast<int32_t>(fputc);
            } else {
                *reinterpret_cast<int32_t*>(&r8_23) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_23) + 4) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(&r9_24) = 1;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_24) + 4) = reinterpret_cast<int32_t>(fputc);
                if (reinterpret_cast<uint64_t>(rbx25 + r8_21 + 8) < reinterpret_cast<uint64_t>(r8_21 + r14_3 + 0x5138)) {
                    do {
                        addr_740_33:
                        __asm__("movupd xmm2, [r10+r9*8-0x8]");
                        __asm__("movapd xmm3, xmm2");
                        __asm__("unpckhpd xmm3, xmm2");
                        __asm__("addsd xmm3, xmm2");
                        __asm__("addsd xmm3, [r10+r9*8+0x8]");
                        __asm__("addsd xmm3, [r10+r9*8]");
                        __asm__("addsd xmm3, [r10+r9*8]");
                        __asm__("mulsd xmm3, xmm0");
                        *rdi20 = *rsi19;
                        ++rdi20;
                        ++rsi19;
                        r8_26 = r9_24 + 1;
                        r9_24 = r8_26;
                    } while (r8_26 != 0x513);
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
                r8_23 = r8_23 + 4;
            } while (r8_23 != 0x510);
            *reinterpret_cast<int32_t*>(&r9_24) = 0x511;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_24) + 4) = reinterpret_cast<int32_t>(fputc);
            goto addr_740_33;
            ++rcx18;
            rdx17 = rsi19;
        } while (!reinterpret_cast<int1_t>(rsi19 == 0x513));
        *reinterpret_cast<int32_t*>(&rdx27) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx27) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rcx28) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx28) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rsi29 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rdx27) + 1);
            rdi30 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rdx27) - 1);
            r8_31 = reinterpret_cast<int64_t>(rcx28) * 0x28a0;
            if (reinterpret_cast<uint64_t>(r8_31 + rbx32 + 0x28a8) >= reinterpret_cast<uint64_t>(r14_3 + r8_31 + 0x79d8)) {
                *reinterpret_cast<int32_t*>(&r8_33) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_33) + 4) = reinterpret_cast<int32_t>(fputc);
            } else {
                *reinterpret_cast<int32_t*>(&r8_33) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_33) + 4) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(&r9_34) = 1;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_34) + 4) = reinterpret_cast<int32_t>(fputc);
                if (reinterpret_cast<uint64_t>(r14_3 + r8_31 + 8) < reinterpret_cast<uint64_t>(r8_31 + rbx35 + 0x5138)) {
                    do {
                        addr_900_45:
                        __asm__("movupd xmm2, [r10+r9*8-0x8]");
                        __asm__("movapd xmm3, xmm2");
                        __asm__("unpckhpd xmm3, xmm2");
                        __asm__("addsd xmm3, xmm2");
                        __asm__("addsd xmm3, [r10+r9*8+0x8]");
                        __asm__("addsd xmm3, [r10+r9*8]");
                        __asm__("addsd xmm3, [r10+r9*8]");
                        __asm__("mulsd xmm3, xmm0");
                        *rdi30 = *rsi29;
                        ++rdi30;
                        ++rsi29;
                        r8_36 = r9_34 + 1;
                        r9_34 = r8_36;
                    } while (r8_36 != 0x513);
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
                r8_33 = r8_33 + 4;
            } while (r8_33 != 0x510);
            *reinterpret_cast<int32_t*>(&r9_34) = 0x511;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_34) + 4) = reinterpret_cast<int32_t>(fputc);
            goto addr_900_45;
            rcx28 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rcx28) + 1);
            rdx27 = rsi29;
        } while (!reinterpret_cast<int1_t>(rsi29 == 0x513));
        ++eax16;
    } while (!reinterpret_cast<int1_t>(eax16 == "("));
    if (ebp37 >= 43 && **r15_38 == fputc) {
        rax39 = g9b7;
        r15_40 = *rax39;
        rcx41 = r15_40;
        fun_9d3(0x9c1, 22, 1, rcx41);
        rsi42 = reinterpret_cast<int32_t*>(0x9da);
        *reinterpret_cast<int32_t*>(&r13_43) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_43) + 4) = reinterpret_cast<int32_t>(fputc);
        rdi44 = r15_40;
        fun_9ee();
        do {
            rbp45 = r13_43 * 0x514;
            *reinterpret_cast<int32_t*>(&r12_46) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_46) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("ror eax, 0x2");
                if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r12_46 + rbp45) * 0xcccccccd) <= 0xccccccc) {
                    *reinterpret_cast<int32_t*>(&rdi44) = 10;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi44) + 4) = reinterpret_cast<int32_t>(fputc);
                    rsi42 = r15_40;
                    fun_a1b();
                }
                *rdi44 = *rsi42;
                rdi44 = r15_40;
                rsi42 = reinterpret_cast<int32_t*>(0xa35);
                fun_a3c();
                ++r12_46;
            } while (r12_46 != 0x514);
            ++r13_43;
        } while (r13_43 != 0x514);
        fun_a6c(r15_40, 0xa5b, 0xa62, rcx41);
        *reinterpret_cast<int32_t*>(&rsi29) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi29) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx27) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx27) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx28 = r15_40;
        fun_a85(0xa73, 22, 1, rcx28);
    }
    fun_997(rbx47, rsi29, rdx27, rcx28);
    fun_99f(r14_3, rsi29, rdx27, rcx28);
    goto v48;
}

void fputc(int32_t edi, int64_t rsi) {
}

void fun_1d() {
}

void fun_98() {
    int64_t r13_1;
    int64_t rbp2;
    int64_t r12_3;
    int64_t rax4;
    int32_t* rdi5;
    int64_t r8_6;
    uint64_t r10_7;
    int64_t rsi8;
    int64_t rcx9;
    int64_t rdx10;
    int64_t r9_11;
    int64_t rsi12;
    int64_t rdx13;
    int64_t rcx14;
    int64_t v15;
    int32_t* rcx16;
    int64_t rsi17;
    int64_t rax18;
    int64_t r11_19;
    int64_t v20;
    int64_t r10_21;
    int64_t r11_22;
    int32_t v23;
    int64_t rbp24;
    int64_t r13_25;
    int64_t r12_26;
    int32_t* rdi27;
    int64_t r8_28;
    uint64_t r10_29;
    int64_t r15_30;
    int64_t rdx31;
    int64_t v32;
    int64_t rsi33;
    int64_t rcx34;
    int64_t v35;
    int32_t* rdx36;
    int64_t rsi37;
    int64_t rax38;
    int64_t r11_39;
    int64_t v40;
    int64_t r10_41;
    int64_t r11_42;
    int64_t rax43;

    while (++r13_1, rbp2 = r12_3, r12_3 != rax4) {
        r12_3 = rbp2 + 1;
        rdi5 = reinterpret_cast<int32_t*>(rbp2 - 1);
        *reinterpret_cast<int32_t*>(&r8_6) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_6) + 4) = reinterpret_cast<int32_t>(fputc);
        if (r10_7 < 4) 
            goto addr_1f0_4;
        rsi8 = r13_1 * 0x28a0;
        if (reinterpret_cast<uint64_t>(rsi8 + rcx9 + 0x28a8) >= reinterpret_cast<uint64_t>(rdx10 + r9_11 + rsi8)) {
            *reinterpret_cast<int32_t*>(&rsi12) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi12) + 4) = reinterpret_cast<int32_t>(fputc);
        } else {
            *reinterpret_cast<int32_t*>(&rsi12) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi12) + 4) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(&r8_6) = 1;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_6) + 4) = reinterpret_cast<int32_t>(fputc);
            if (reinterpret_cast<uint64_t>(rdx13 + rsi8 + 8) < reinterpret_cast<uint64_t>(rcx14 + v15 + rsi8)) {
                do {
                    addr_1f0_4:
                    __asm__("movupd xmm2, [rbx+r8*8-0x8]");
                    __asm__("movapd xmm3, xmm2");
                    __asm__("unpckhpd xmm3, xmm2");
                    __asm__("addsd xmm3, xmm2");
                    __asm__("addsd xmm3, [rbx+r8*8+0x8]");
                    __asm__("addsd xmm3, [rbx+r8*8]");
                    __asm__("addsd xmm3, [rbx+r8*8]");
                    __asm__("mulsd xmm3, xmm0");
                    *rdi5 = rcx16[rbp2 * 0xa28];
                    ++rdi5;
                    rsi17 = r8_6 + 1;
                    r8_6 = rsi17;
                } while (rsi17 != rax18);
                goto addr_24e_11;
            }
        }
        do {
            __asm__("movupd xmm2, [r8+rbx]");
            __asm__("movupd xmm3, [r8+rbx+0x10]");
            __asm__("movupd xmm4, [rbx+rsi*8]");
            __asm__("addpd xmm4, xmm2");
            __asm__("movupd xmm2, [rbx+rsi*8+0x10]");
            __asm__("addpd xmm2, xmm3");
            __asm__("movupd xmm3, [r14+rbx]");
            __asm__("addpd xmm3, xmm4");
            __asm__("movupd xmm4, [r14+rbx+0x10]");
            __asm__("addpd xmm4, xmm2");
            __asm__("movupd xmm2, [r8+rbx]");
            __asm__("addpd xmm2, xmm3");
            __asm__("movupd xmm3, [r8+rbx+0x10]");
            __asm__("addpd xmm3, xmm4");
            __asm__("movupd xmm4, [r8+rbx]");
            __asm__("addpd xmm4, xmm2");
            __asm__("movupd xmm2, [r8+rbx+0x10]");
            __asm__("addpd xmm2, xmm3");
            __asm__("mulpd xmm4, xmm1");
            __asm__("mulpd xmm2, xmm1");
            __asm__("movupd [r8+r15], xmm4");
            __asm__("movupd [r8+r15+0x10], xmm2");
            rsi12 = rsi12 + 4;
        } while (rsi12 != r11_19);
        r8_6 = v20;
        if (r10_21 == r11_22) 
            continue;
        goto addr_1f0_4;
        addr_24e_11:
    }
    if (v23 > 2) {
        *reinterpret_cast<int32_t*>(&rbp24) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp24) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&r13_25) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_25) + 4) = reinterpret_cast<int32_t>(fputc);
        while (1) {
            r12_26 = rbp24 + 1;
            rdi27 = reinterpret_cast<int32_t*>(rbp24 - 1);
            *reinterpret_cast<int32_t*>(&r8_28) = 1;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_28) + 4) = reinterpret_cast<int32_t>(fputc);
            if (r10_29 < 4) 
                goto addr_3c0_19;
            r15_30 = r13_25 * 0x28a0;
            if (reinterpret_cast<uint64_t>(r15_30 + rdx31 + 0x28a8) >= reinterpret_cast<uint64_t>(v32 + r15_30)) {
                *reinterpret_cast<int32_t*>(&rsi33) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi33) + 4) = reinterpret_cast<int32_t>(fputc);
            } else {
                *reinterpret_cast<int32_t*>(&rsi33) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi33) + 4) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(&r8_28) = 1;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_28) + 4) = reinterpret_cast<int32_t>(fputc);
                if (reinterpret_cast<uint64_t>(rcx34 + r15_30 + 8) < reinterpret_cast<uint64_t>(r15_30 + v35)) {
                    do {
                        addr_3c0_19:
                        __asm__("movupd xmm2, [rbx+r8*8-0x8]");
                        __asm__("movapd xmm3, xmm2");
                        __asm__("unpckhpd xmm3, xmm2");
                        __asm__("addsd xmm3, xmm2");
                        __asm__("addsd xmm3, [rbx+r8*8+0x8]");
                        __asm__("addsd xmm3, [rbx+r8*8]");
                        __asm__("addsd xmm3, [rbx+r8*8]");
                        __asm__("mulsd xmm3, xmm0");
                        *rdi27 = rdx36[rbp24 * 0xa28];
                        ++rdi27;
                        rsi37 = r8_28 + 1;
                        r8_28 = rsi37;
                    } while (rsi37 != rax38);
                    goto addr_41e_26;
                }
            }
            do {
                __asm__("movupd xmm2, [r8+rbx]");
                __asm__("movupd xmm3, [r8+rbx+0x10]");
                __asm__("movupd xmm4, [rbx+rsi*8]");
                __asm__("addpd xmm4, xmm2");
                __asm__("movupd xmm2, [rbx+rsi*8+0x10]");
                __asm__("addpd xmm2, xmm3");
                __asm__("movupd xmm3, [r14+rbx]");
                __asm__("addpd xmm3, xmm4");
                __asm__("movupd xmm4, [r14+rbx+0x10]");
                __asm__("addpd xmm4, xmm2");
                __asm__("movupd xmm2, [r8+rbx]");
                __asm__("addpd xmm2, xmm3");
                __asm__("movupd xmm3, [r8+rbx+0x10]");
                __asm__("addpd xmm3, xmm4");
                __asm__("movupd xmm4, [r8+rbx]");
                __asm__("addpd xmm4, xmm2");
                __asm__("movupd xmm2, [r8+rbx+0x10]");
                __asm__("addpd xmm2, xmm3");
                __asm__("mulpd xmm4, xmm1");
                __asm__("mulpd xmm2, xmm1");
                __asm__("movupd [r8+r15], xmm4");
                __asm__("movupd [r8+r15+0x10], xmm2");
                rsi33 = rsi33 + 4;
            } while (rsi33 != r11_39);
            r8_28 = v40;
            if (r10_41 == r11_42) {
                addr_280_30:
                ++r13_25;
                rbp24 = r12_26;
                if (r12_26 == rax43) 
                    break; else 
                    continue;
            } else {
                goto addr_3c0_19;
            }
            addr_41e_26:
            goto addr_280_30;
        }
    }
}

void fun_423() {
    int64_t v1;

    goto v1;
}

void submain(int32_t edi, int64_t rsi) {
    fun_44f(0x19c990, 8);
}

