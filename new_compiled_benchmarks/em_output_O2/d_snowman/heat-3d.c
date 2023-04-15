
void fun_83a(int32_t* rdi, int64_t rsi, int32_t* rdx, int32_t* rcx) {
    int64_t v5;

    goto v5;
}

void fun_8f6();

void fputc();

void fun_92d(int32_t* rdi, int64_t rsi, int64_t rdx);

void fun_946(int64_t rdi, int64_t rsi, int32_t* rdx, int32_t* rcx);

void fun_8cd() {
    int32_t* rdi1;
    int32_t* rsi2;
    int32_t* r14_3;
    int32_t* r15_4;
    int64_t r13_5;
    int64_t rbp6;
    int64_t r12_7;
    int64_t v8;
    int64_t rbx9;
    int32_t* r14_10;
    int32_t* r14_11;
    int32_t* r14_12;
    int32_t* v13;
    int64_t v14;

    while (1) {
        *rdi1 = *rsi2;
        rdi1 = r14_3;
        rsi2 = r15_4;
        fun_8f6();
        ++r13_5;
        if (r13_5 == 0x78) {
            ++rbp6;
            if (rbp6 == 0x78) {
                ++r12_7;
                if (r12_7 == 0x78) 
                    break;
                v8 = r12_7 * 0x3840;
                *reinterpret_cast<int32_t*>(&rbp6) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp6) + 4) = reinterpret_cast<int32_t>(fputc);
            }
            rbx9 = rbp6 * 0x78 + v8;
            *reinterpret_cast<int32_t*>(&r13_5) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_5) + 4) = reinterpret_cast<int32_t>(fputc);
        }
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(static_cast<int32_t>(rbx9 + r13_5) * 0xcccccccd) > 0xccccccc) 
            continue;
        *reinterpret_cast<int32_t*>(&rdi1) = 10;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi1) + 4) = reinterpret_cast<int32_t>(fputc);
        rsi2 = r14_10;
        fun_8cd();
    }
    fun_92d(r14_11, 0x91c, 0x923);
    fun_946(0x934, 22, 1, r14_12);
    fun_83a(v13, 22, 1, r14_12);
    goto v14;
}

void fun_8f6() {
    int64_t r13_1;
    int64_t rbp2;
    int64_t r12_3;
    int64_t v4;
    int64_t rbx5;
    int32_t* rdi6;
    int32_t* rsi7;
    int32_t* r14_8;
    int32_t* r14_9;
    int32_t* r15_10;
    int32_t* r14_11;
    int32_t* r14_12;
    int32_t* v13;
    int64_t v14;

    while (1) {
        ++r13_1;
        if (r13_1 == 0x78) {
            ++rbp2;
            if (rbp2 == 0x78) {
                ++r12_3;
                if (r12_3 == 0x78) 
                    break;
                v4 = r12_3 * 0x3840;
                *reinterpret_cast<int32_t*>(&rbp2) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp2) + 4) = reinterpret_cast<int32_t>(fputc);
            }
            rbx5 = rbp2 * 0x78 + v4;
            *reinterpret_cast<int32_t*>(&r13_1) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_1) + 4) = reinterpret_cast<int32_t>(fputc);
        }
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(static_cast<int32_t>(rbx5 + r13_1) * 0xcccccccd) <= 0xccccccc) {
            *reinterpret_cast<int32_t*>(&rdi6) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi6) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi7 = r14_8;
            fun_8cd();
        }
        *rdi6 = *rsi7;
        rdi6 = r14_9;
        rsi7 = r15_10;
        fun_8f6();
    }
    fun_92d(r14_11, 0x91c, 0x923);
    fun_946(0x934, 22, 1, r14_12);
    fun_83a(v13, 22, 1, r14_12);
    goto v14;
}

void fun_92d(int32_t* rdi, int64_t rsi, int64_t rdx) {
    int32_t* r14_4;
    int32_t* v5;
    int64_t v6;

    fun_946(0x934, 22, 1, r14_4);
    fun_83a(v5, 22, 1, r14_4);
    goto v6;
}

int32_t** g852 = reinterpret_cast<int32_t**>(0x3d8d48308b4c);

void fun_86e(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx);

void fun_889();

void fun_823() {
    int32_t ebp1;
    signed char** r14_2;
    int32_t** rax3;
    int32_t* r14_4;
    int32_t* rsi5;
    int64_t r12_6;
    int32_t* rdi7;
    int64_t v8;
    int64_t rbp9;
    int64_t rbx10;
    int64_t r13_11;
    int32_t* rcx12;
    int32_t* v13;
    int64_t v14;

    if (ebp1 >= 43 && **r14_2 == fputc) {
        rax3 = g852;
        r14_4 = *rax3;
        fun_86e(0x85c, 22, 1, r14_4);
        rsi5 = reinterpret_cast<int32_t*>(0x875);
        *reinterpret_cast<int32_t*>(&r12_6) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_6) + 4) = reinterpret_cast<int32_t>(fputc);
        rdi7 = r14_4;
        fun_889();
        do {
            v8 = r12_6 * 0x3840;
            *reinterpret_cast<int32_t*>(&rbp9) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp9) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                rbx10 = rbp9 * 0x78 + v8;
                *reinterpret_cast<int32_t*>(&r13_11) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_11) + 4) = reinterpret_cast<int32_t>(fputc);
                do {
                    __asm__("ror eax, 0x2");
                    if (reinterpret_cast<uint32_t>(static_cast<int32_t>(rbx10 + r13_11) * 0xcccccccd) <= 0xccccccc) {
                        *reinterpret_cast<int32_t*>(&rdi7) = 10;
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi7) + 4) = reinterpret_cast<int32_t>(fputc);
                        rsi5 = r14_4;
                        fun_8cd();
                    }
                    *rdi7 = *rsi5;
                    rdi7 = r14_4;
                    rsi5 = reinterpret_cast<int32_t*>(0x890);
                    fun_8f6();
                    ++r13_11;
                } while (r13_11 != 0x78);
                ++rbp9;
            } while (rbp9 != 0x78);
            ++r12_6;
        } while (r12_6 != 0x78);
        fun_92d(r14_4, 0x91c, 0x923);
        rcx12 = r14_4;
        fun_946(0x934, 22, 1, rcx12);
    }
    fun_83a(v13, 22, 1, rcx12);
    goto v14;
}

void fun_86e(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int32_t* rsi5;
    int64_t r12_6;
    int32_t* rdi7;
    int32_t* r14_8;
    int64_t v9;
    int64_t rbp10;
    int64_t rbx11;
    int64_t r13_12;
    int32_t* r14_13;
    int32_t* r14_14;
    int32_t* r14_15;
    int32_t* r14_16;
    int32_t* v17;
    int64_t v18;

    rsi5 = reinterpret_cast<int32_t*>(0x875);
    *reinterpret_cast<int32_t*>(&r12_6) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_6) + 4) = reinterpret_cast<int32_t>(fputc);
    rdi7 = r14_8;
    fun_889();
    do {
        v9 = r12_6 * 0x3840;
        *reinterpret_cast<int32_t*>(&rbp10) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp10) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rbx11 = rbp10 * 0x78 + v9;
            *reinterpret_cast<int32_t*>(&r13_12) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_12) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("ror eax, 0x2");
                if (reinterpret_cast<uint32_t>(static_cast<int32_t>(rbx11 + r13_12) * 0xcccccccd) <= 0xccccccc) {
                    *reinterpret_cast<int32_t*>(&rdi7) = 10;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi7) + 4) = reinterpret_cast<int32_t>(fputc);
                    rsi5 = r14_13;
                    fun_8cd();
                }
                *rdi7 = *rsi5;
                rdi7 = r14_14;
                rsi5 = reinterpret_cast<int32_t*>(0x890);
                fun_8f6();
                ++r13_12;
            } while (r13_12 != 0x78);
            ++rbp10;
        } while (rbp10 != 0x78);
        ++r12_6;
    } while (r12_6 != 0x78);
    fun_92d(r14_15, 0x91c, 0x923);
    fun_946(0x934, 22, 1, r14_16);
    fun_83a(v17, 22, 1, r14_16);
    goto v18;
}

void fun_946(int64_t rdi, int64_t rsi, int32_t* rdx, int32_t* rcx) {
    int32_t* v5;
    int64_t v6;

    fun_83a(v5, rsi, rdx, rcx);
    goto v6;
}

struct s0 {
    int32_t f0;
    int32_t f4;
};

struct s1 {
    int32_t f0;
    int32_t f4;
};

int32_t* fun_676(struct s0* rdi, struct s1* rsi);

int32_t g1a5e00;

/* .LCPI0_3 */
int32_t LCPI0_3 = 0x89485354;

int32_t g1a5e04;

int32_t gc = 0x748948f0;

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

void fun_662(int64_t rdi, int64_t rsi) {
    int32_t* v3;
    int32_t* rax4;
    int32_t* rax5;
    int64_t rcx6;
    int64_t rdx7;
    struct s2* rsi8;
    int32_t* rdx9;
    struct s3* rdi10;
    int64_t r8_11;
    int64_t r9_12;
    int64_t r11_13;
    int64_t rbx14;
    struct s4* rdi15;
    struct s5* rsi16;
    struct s6* rdi17;
    struct s7* rsi18;
    struct s8* rdi19;
    struct s9* rsi20;
    int64_t rsi21;
    int32_t* rdx22;
    int32_t* rcx23;
    int32_t ebp24;
    signed char** r14_25;
    int32_t** rax26;
    int32_t* r14_27;
    int32_t* rsi28;
    int64_t r12_29;
    int32_t* rdi30;
    int64_t v31;
    int64_t rbp32;
    int64_t rbx33;
    int64_t r13_34;
    int64_t v35;

    v3 = rax4;
    rax5 = fun_676(0x1a5e00, 8);
    *reinterpret_cast<int32_t*>(&rcx6) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx6) + 4) = reinterpret_cast<int32_t>(fputc);
    g1a5e00 = LCPI0_3;
    g1a5e04 = gc;
    __asm__("movdqa xmm2, [rip+0x0]");
    __asm__("movapd xmm3, [rip+0x0]");
    __asm__("movapd xmm4, [rip+0x0]");
    __asm__("movdqa xmm5, [rip+0x0]");
    __asm__("movdqa xmm6, [rip+0x0]");
    do {
        rdx7 = rcx6 * 0x1c200;
        rsi8 = reinterpret_cast<struct s2*>(reinterpret_cast<int64_t>(v3) + rdx7);
        rdx9 = reinterpret_cast<int32_t*>(rdx7 + reinterpret_cast<int64_t>(rax5));
        rdi10 = reinterpret_cast<struct s3*>(rcx6 + 0x78);
        *reinterpret_cast<int32_t*>(&r8_11) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_11) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            r9_12 = r8_11 * 0x3c0;
            if (reinterpret_cast<uint64_t>(r9_12 + reinterpret_cast<int64_t>(rsi8) - (reinterpret_cast<int64_t>(rdx9) + r9_12)) >= 16) {
                __asm__("movd xmm7, r11");
                __asm__("pshufd xmm7, xmm7, 0x44");
                *reinterpret_cast<int32_t*>(&r11_13) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_13) + 4) = reinterpret_cast<int32_t>(fputc);
                __asm__("movdqa xmm8, xmm2");
                do {
                    __asm__("movdqa xmm9, xmm7");
                    __asm__("psubq xmm9, xmm8");
                    __asm__("pshufd xmm10, xmm9, 0xe8");
                    __asm__("cvtdq2pd xmm10, xmm10");
                    __asm__("mulpd xmm10, xmm3");
                    __asm__("divpd xmm10, xmm4");
                    __asm__("movupd [r10+r11*8], xmm10");
                    __asm__("movupd [r9+r11*8], xmm10");
                    __asm__("psubq xmm9, xmm5");
                    __asm__("pshufd xmm9, xmm9, 0xe8");
                    __asm__("cvtdq2pd xmm9, xmm9");
                    __asm__("mulpd xmm9, xmm3");
                    __asm__("divpd xmm9, xmm4");
                    __asm__("movupd [rbx+r10], xmm9");
                    __asm__("movupd [rbx+r9], xmm9");
                    r11_13 = r11_13 + 4;
                    __asm__("paddq xmm8, xmm6");
                } while (r11_13 != 0x78);
            } else {
                *reinterpret_cast<int32_t*>(&rbx14) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx14) + 4) = reinterpret_cast<int32_t>(fputc);
                do {
                    __asm__("xorps xmm7, xmm7");
                    __asm__("cvtsi2sd xmm7, r15d");
                    __asm__("mulsd xmm7, xmm0");
                    __asm__("divsd xmm7, xmm1");
                    rdi10->f0 = rsi8->f0;
                    rdi15 = reinterpret_cast<struct s4*>(&rdi10->f4);
                    rsi16 = reinterpret_cast<struct s5*>(&rsi8->f4);
                    rdi15->f0 = rsi16->f0;
                    rdi17 = reinterpret_cast<struct s6*>(&rdi15->f4);
                    rsi18 = reinterpret_cast<struct s7*>(&rsi16->f4);
                    __asm__("xorps xmm7, xmm7");
                    __asm__("cvtsi2sd xmm7, r12d");
                    __asm__("mulsd xmm7, xmm0");
                    __asm__("divsd xmm7, xmm1");
                    rdi17->f0 = rsi18->f0;
                    rdi19 = reinterpret_cast<struct s8*>(&rdi17->f4);
                    rsi20 = reinterpret_cast<struct s9*>(&rsi18->f4);
                    rdi19->f0 = rsi20->f0;
                    rdi10 = reinterpret_cast<struct s3*>(&rdi19->f4);
                    rsi8 = reinterpret_cast<struct s2*>(&rsi20->f4);
                    rbx14 = rbx14 + 2;
                } while (rbx14 != 0x78);
            }
            ++r8_11;
        } while (r8_11 != 0x78);
        ++rcx6;
    } while (rcx6 != 0x78);
    *reinterpret_cast<int32_t*>(&rsi21) = 0x78;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi21) + 4) = reinterpret_cast<int32_t>(fputc);
    rdx22 = v3;
    rcx23 = rax5;
    fun_823();
    if (ebp24 >= 43 && **r14_25 == fputc) {
        rax26 = g852;
        r14_27 = *rax26;
        fun_86e(0x85c, 22, 1, r14_27);
        rsi28 = reinterpret_cast<int32_t*>(0x875);
        *reinterpret_cast<int32_t*>(&r12_29) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_29) + 4) = reinterpret_cast<int32_t>(fputc);
        rdi30 = r14_27;
        fun_889();
        do {
            v31 = r12_29 * 0x3840;
            *reinterpret_cast<int32_t*>(&rbp32) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp32) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                rbx33 = rbp32 * 0x78 + v31;
                *reinterpret_cast<int32_t*>(&r13_34) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_34) + 4) = reinterpret_cast<int32_t>(fputc);
                do {
                    __asm__("ror eax, 0x2");
                    if (reinterpret_cast<uint32_t>(static_cast<int32_t>(rbx33 + r13_34) * 0xcccccccd) <= 0xccccccc) {
                        *reinterpret_cast<int32_t*>(&rdi30) = 10;
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi30) + 4) = reinterpret_cast<int32_t>(fputc);
                        rsi28 = r14_27;
                        fun_8cd();
                    }
                    *rdi30 = *rsi28;
                    rdi30 = r14_27;
                    rsi28 = reinterpret_cast<int32_t*>(0x890);
                    fun_8f6();
                    ++r13_34;
                } while (r13_34 != 0x78);
                ++rbp32;
            } while (rbp32 != 0x78);
            ++r12_29;
        } while (r12_29 != 0x78);
        fun_92d(r14_27, 0x91c, 0x923);
        *reinterpret_cast<int32_t*>(&rsi21) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi21) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx22) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx22) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx23 = r14_27;
        fun_946(0x934, 22, 1, rcx23);
    }
    fun_83a(v3, rsi21, rdx22, rcx23);
    goto v35;
}

void fun_889() {
    int64_t v1;
    int64_t r12_2;
    int64_t rbp3;
    int64_t rbx4;
    int64_t r13_5;
    int32_t* rdi6;
    int32_t* rsi7;
    int32_t* r14_8;
    int32_t* r14_9;
    int32_t* r14_10;
    int32_t* r14_11;
    int32_t* v12;
    int64_t v13;

    do {
        v1 = r12_2 * 0x3840;
        *reinterpret_cast<int32_t*>(&rbp3) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp3) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rbx4 = rbp3 * 0x78 + v1;
            *reinterpret_cast<int32_t*>(&r13_5) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_5) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("ror eax, 0x2");
                if (reinterpret_cast<uint32_t>(static_cast<int32_t>(rbx4 + r13_5) * 0xcccccccd) <= 0xccccccc) {
                    *reinterpret_cast<int32_t*>(&rdi6) = 10;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi6) + 4) = reinterpret_cast<int32_t>(fputc);
                    rsi7 = r14_8;
                    fun_8cd();
                }
                *rdi6 = *rsi7;
                rdi6 = r14_9;
                rsi7 = reinterpret_cast<int32_t*>(0x890);
                fun_8f6();
                ++r13_5;
            } while (r13_5 != 0x78);
            ++rbp3;
        } while (rbp3 != 0x78);
        ++r12_2;
    } while (r12_2 != 0x78);
    fun_92d(r14_10, 0x91c, 0x923);
    fun_946(0x934, 22, 1, r14_11);
    fun_83a(v12, 22, 1, r14_11);
    goto v13;
}

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

int32_t* fun_676(struct s0* rdi, struct s1* rsi) {
    int64_t rcx3;
    int64_t rdx4;
    struct s10* rsi5;
    int32_t* v6;
    int64_t rdx7;
    int64_t rax8;
    struct s11* rdi9;
    int64_t r8_10;
    int64_t r9_11;
    int64_t r11_12;
    int64_t rbx13;
    struct s12* rdi14;
    struct s13* rsi15;
    struct s14* rdi16;
    struct s15* rsi17;
    struct s16* rdi18;
    struct s17* rsi19;
    int64_t rsi20;
    int32_t* rdx21;
    int32_t* v22;
    int32_t* rcx23;
    int32_t* rax24;
    int32_t ebp25;
    signed char** r14_26;
    int32_t** rax27;
    int32_t* r14_28;
    int32_t* rsi29;
    int64_t r12_30;
    int32_t* rdi31;
    int64_t v32;
    int64_t rbp33;
    int64_t rbx34;
    int64_t r13_35;
    int32_t* v36;
    int64_t v37;

    *reinterpret_cast<int32_t*>(&rcx3) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx3) + 4) = reinterpret_cast<int32_t>(fputc);
    rdi->f0 = rsi->f0;
    rdi->f4 = rsi->f4;
    __asm__("movdqa xmm2, [rip+0x0]");
    __asm__("movapd xmm3, [rip+0x0]");
    __asm__("movapd xmm4, [rip+0x0]");
    __asm__("movdqa xmm5, [rip+0x0]");
    __asm__("movdqa xmm6, [rip+0x0]");
    do {
        rdx4 = rcx3 * 0x1c200;
        rsi5 = reinterpret_cast<struct s10*>(reinterpret_cast<int64_t>(v6) + rdx4);
        rdx7 = rdx4 + rax8;
        rdi9 = reinterpret_cast<struct s11*>(rcx3 + 0x78);
        *reinterpret_cast<int32_t*>(&r8_10) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_10) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            r9_11 = r8_10 * 0x3c0;
            if (reinterpret_cast<uint64_t>(r9_11 + reinterpret_cast<int64_t>(rsi5) - (rdx7 + r9_11)) >= 16) {
                __asm__("movd xmm7, r11");
                __asm__("pshufd xmm7, xmm7, 0x44");
                *reinterpret_cast<int32_t*>(&r11_12) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_12) + 4) = reinterpret_cast<int32_t>(fputc);
                __asm__("movdqa xmm8, xmm2");
                do {
                    __asm__("movdqa xmm9, xmm7");
                    __asm__("psubq xmm9, xmm8");
                    __asm__("pshufd xmm10, xmm9, 0xe8");
                    __asm__("cvtdq2pd xmm10, xmm10");
                    __asm__("mulpd xmm10, xmm3");
                    __asm__("divpd xmm10, xmm4");
                    __asm__("movupd [r10+r11*8], xmm10");
                    __asm__("movupd [r9+r11*8], xmm10");
                    __asm__("psubq xmm9, xmm5");
                    __asm__("pshufd xmm9, xmm9, 0xe8");
                    __asm__("cvtdq2pd xmm9, xmm9");
                    __asm__("mulpd xmm9, xmm3");
                    __asm__("divpd xmm9, xmm4");
                    __asm__("movupd [rbx+r10], xmm9");
                    __asm__("movupd [rbx+r9], xmm9");
                    r11_12 = r11_12 + 4;
                    __asm__("paddq xmm8, xmm6");
                } while (r11_12 != 0x78);
            } else {
                *reinterpret_cast<int32_t*>(&rbx13) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx13) + 4) = reinterpret_cast<int32_t>(fputc);
                do {
                    __asm__("xorps xmm7, xmm7");
                    __asm__("cvtsi2sd xmm7, r15d");
                    __asm__("mulsd xmm7, xmm0");
                    __asm__("divsd xmm7, xmm1");
                    rdi9->f0 = rsi5->f0;
                    rdi14 = reinterpret_cast<struct s12*>(&rdi9->f4);
                    rsi15 = reinterpret_cast<struct s13*>(&rsi5->f4);
                    rdi14->f0 = rsi15->f0;
                    rdi16 = reinterpret_cast<struct s14*>(&rdi14->f4);
                    rsi17 = reinterpret_cast<struct s15*>(&rsi15->f4);
                    __asm__("xorps xmm7, xmm7");
                    __asm__("cvtsi2sd xmm7, r12d");
                    __asm__("mulsd xmm7, xmm0");
                    __asm__("divsd xmm7, xmm1");
                    rdi16->f0 = rsi17->f0;
                    rdi18 = reinterpret_cast<struct s16*>(&rdi16->f4);
                    rsi19 = reinterpret_cast<struct s17*>(&rsi17->f4);
                    rdi18->f0 = rsi19->f0;
                    rdi9 = reinterpret_cast<struct s11*>(&rdi18->f4);
                    rsi5 = reinterpret_cast<struct s10*>(&rsi19->f4);
                    rbx13 = rbx13 + 2;
                } while (rbx13 != 0x78);
            }
            ++r8_10;
        } while (r8_10 != 0x78);
        ++rcx3;
    } while (rcx3 != 0x78);
    *reinterpret_cast<int32_t*>(&rsi20) = 0x78;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi20) + 4) = reinterpret_cast<int32_t>(fputc);
    rdx21 = v22;
    rcx23 = rax24;
    fun_823();
    if (ebp25 >= 43 && **r14_26 == fputc) {
        rax27 = g852;
        r14_28 = *rax27;
        fun_86e(0x85c, 22, 1, r14_28);
        rsi29 = reinterpret_cast<int32_t*>(0x875);
        *reinterpret_cast<int32_t*>(&r12_30) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_30) + 4) = reinterpret_cast<int32_t>(fputc);
        rdi31 = r14_28;
        fun_889();
        do {
            v32 = r12_30 * 0x3840;
            *reinterpret_cast<int32_t*>(&rbp33) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp33) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                rbx34 = rbp33 * 0x78 + v32;
                *reinterpret_cast<int32_t*>(&r13_35) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_35) + 4) = reinterpret_cast<int32_t>(fputc);
                do {
                    __asm__("ror eax, 0x2");
                    if (reinterpret_cast<uint32_t>(static_cast<int32_t>(rbx34 + r13_35) * 0xcccccccd) <= 0xccccccc) {
                        *reinterpret_cast<int32_t*>(&rdi31) = 10;
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi31) + 4) = reinterpret_cast<int32_t>(fputc);
                        rsi29 = r14_28;
                        fun_8cd();
                    }
                    *rdi31 = *rsi29;
                    rdi31 = r14_28;
                    rsi29 = reinterpret_cast<int32_t*>(0x890);
                    fun_8f6();
                    ++r13_35;
                } while (r13_35 != 0x78);
                ++rbp33;
            } while (rbp33 != 0x78);
            ++r12_30;
        } while (r12_30 != 0x78);
        fun_92d(r14_28, 0x91c, 0x923);
        *reinterpret_cast<int32_t*>(&rsi20) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi20) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx21) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx21) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx23 = r14_28;
        fun_946(0x934, 22, 1, rcx23);
    }
    fun_83a(v36, rsi20, rdx21, rcx23);
    goto v37;
}

void fputc() {
}

void fun_1d() {
}

void fun_32() {
    int64_t rax1;
    int64_t rax2;

    *reinterpret_cast<int32_t*>(rax1 - 0x77) = *reinterpret_cast<int32_t*>(rax2 - 0x77) - 1;
}

void fun_74() {
}

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

struct s23 {
    int32_t f0;
    int32_t f4;
};

struct s24 {
    int32_t f0;
    int32_t f4;
};

struct s25 {
    int32_t f0;
    int32_t f4;
};

struct s26 {
    int32_t f0;
    int32_t f4;
};

struct s27 {
    int32_t f0;
    int32_t f4;
};

struct s28 {
    int32_t f0;
    int32_t f4;
};

struct s29 {
    int32_t f0;
    int32_t f4;
};

struct s30 {
    int32_t f0;
    int32_t f4;
};

struct s31 {
    int32_t f0;
    int32_t f4;
};

void fun_90() {
    signed char* rax1;
    signed char* rax2;
    signed char al3;
    int32_t v4;
    void* r15_5;
    int64_t rsi6;
    int64_t v7;
    int64_t rdi8;
    int64_t v9;
    int64_t v10;
    int64_t v11;
    int64_t v12;
    int64_t v13;
    int64_t v14;
    void* r13_15;
    struct s18* rdi16;
    int64_t r10_17;
    int64_t r11_18;
    int64_t r14_19;
    int64_t rbp20;
    int64_t v21;
    uint64_t v22;
    int64_t rsi23;
    int64_t rcx24;
    int64_t rdx25;
    int64_t rsi26;
    int64_t rdx27;
    int64_t rcx28;
    struct s19* rsi29;
    struct s20* rdi30;
    struct s21* rsi31;
    struct s22* rdi32;
    struct s23* rsi33;
    struct s24* rdi34;
    int64_t rsi35;
    int64_t rax36;
    int64_t v37;
    int64_t v38;
    int64_t v39;
    int64_t v40;
    int64_t rax41;
    void* rax42;
    int32_t v43;
    void* r15_44;
    int64_t rsi45;
    int64_t v46;
    int64_t rdi47;
    int64_t v48;
    int64_t v49;
    int64_t v50;
    int64_t v51;
    int64_t v52;
    int64_t v53;
    void* r13_54;
    struct s25* rdi55;
    int64_t r12_56;
    int64_t r11_57;
    int64_t r14_58;
    int64_t rbp59;
    int64_t v60;
    uint64_t v61;
    int64_t rsi62;
    int64_t rdx63;
    int64_t rcx64;
    int64_t rsi65;
    int64_t rcx66;
    int64_t rdx67;
    struct s26* rsi68;
    struct s27* rdi69;
    struct s28* rsi70;
    struct s29* rdi71;
    struct s30* rsi72;
    struct s31* rdi73;
    int64_t rsi74;
    int64_t rax75;
    int64_t v76;
    int64_t v77;
    int64_t v78;
    int64_t v79;
    int64_t rax80;
    void* rax81;

    *rax1 = reinterpret_cast<signed char>(*rax2 + al3);
    if (v4 <= 2) 
        goto 0x80;
    *reinterpret_cast<int32_t*>(&r15_5) = 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_5) + 4) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(&rsi6) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi6) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        v7 = rsi6;
        rdi8 = rsi6 * 0x1c200;
        v9 = rdi8 + 0x1c5c8;
        v10 = v11 + rdi8;
        v12 = v13 + rdi8;
        v14 = rdi8 + 0x3c8;
        r13_15 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(r15_5) + 1);
        rdi16 = reinterpret_cast<struct s18*>(reinterpret_cast<int64_t>(r15_5) - 1);
        *reinterpret_cast<int32_t*>(&r10_17) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_17) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&r11_18) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_18) + 4) = reinterpret_cast<int32_t>(fputc);
        while (1) {
            r14_19 = r11_18 + 1;
            *reinterpret_cast<int32_t*>(&rbp20) = 1;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp20) + 4) = reinterpret_cast<int32_t>(fputc);
            v21 = r10_17;
            if (v22 < 2) 
                goto addr_2a0_5;
            rsi23 = r10_17 * 0x3c0;
            if (reinterpret_cast<uint64_t>(rcx24 + v9 + rsi23) >= reinterpret_cast<uint64_t>(rdx25 + v12 + rsi23)) {
                *reinterpret_cast<int32_t*>(&rsi26) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi26) + 4) = reinterpret_cast<int32_t>(fputc);
            } else {
                *reinterpret_cast<int32_t*>(&rsi26) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi26) + 4) = reinterpret_cast<int32_t>(fputc);
                if (reinterpret_cast<uint64_t>(rdx27 + v14 + rsi23) < reinterpret_cast<uint64_t>(rcx28 + v10 + rsi23)) {
                    do {
                        addr_2a0_5:
                        rsi29 = reinterpret_cast<struct s19*>(r11_18 * 0x3c0);
                        rdi16->f0 = rsi29->f0;
                        rdi30 = reinterpret_cast<struct s20*>(&rdi16->f4);
                        rsi31 = reinterpret_cast<struct s21*>(&rsi29->f4);
                        __asm__("movapd xmm4, xmm5");
                        __asm__("mulsd xmm4, xmm0");
                        rdi30->f0 = rsi31->f0;
                        rdi32 = reinterpret_cast<struct s22*>(&rdi30->f4);
                        rsi33 = reinterpret_cast<struct s23*>(&rsi31->f4);
                        __asm__("addsd xmm6, xmm4");
                        __asm__("addsd xmm6, [r8+rbp*8]");
                        rdi32->f0 = rsi33->f0;
                        rdi34 = reinterpret_cast<struct s24*>(&rdi32->f4);
                        __asm__("addsd xmm7, xmm4");
                        __asm__("addsd xmm7, [r8+rbp*8]");
                        __asm__("mulsd xmm7, xmm1");
                        __asm__("mulsd xmm6, xmm1");
                        __asm__("addsd xmm4, [r12+rbp*8+0x8]");
                        __asm__("addsd xmm6, xmm7");
                        __asm__("addsd xmm4, [r12+rbp*8-0x8]");
                        __asm__("mulsd xmm4, xmm1");
                        __asm__("addsd xmm4, xmm6");
                        __asm__("addsd xmm4, xmm5");
                        rdi34->f0 = rsi33->f4;
                        rdi16 = reinterpret_cast<struct s18*>(&rdi34->f4);
                        rsi35 = rbp20 + 1;
                        rbp20 = rsi35;
                    } while (rsi35 != rax36);
                    goto addr_354_21;
                }
            }
            do {
                __asm__("movupd xmm4, [rbp+r9+0x0]");
                __asm__("movupd xmm5, [rbp+r8+0x0]");
                __asm__("movupd xmm6, [rbp+r8+0x0]");
                __asm__("movupd xmm7, [rbp+r8+0x0]");
                __asm__("movupd xmm8, [rbp+r8+0x0]");
                __asm__("movupd xmm9, [r8+rsi*8]");
                __asm__("movupd xmm10, [r8+rsi*8+0x10]");
                __asm__("movapd xmm11, xmm8");
                __asm__("mulpd xmm11, xmm2");
                __asm__("addpd xmm4, xmm11");
                __asm__("addpd xmm5, xmm4");
                __asm__("addpd xmm6, xmm11");
                __asm__("addpd xmm7, xmm6");
                __asm__("mulpd xmm7, xmm3");
                __asm__("mulpd xmm5, xmm3");
                __asm__("addpd xmm5, xmm7");
                __asm__("addpd xmm10, xmm11");
                __asm__("addpd xmm10, xmm9");
                __asm__("mulpd xmm10, xmm3");
                __asm__("addpd xmm10, xmm5");
                __asm__("addpd xmm10, xmm8");
                __asm__("movupd [rbp+r9+0x0], xmm10");
                rsi26 = rsi26 + 2;
            } while (rsi26 != v37);
            rbp20 = v38;
            if (v39 == v40) {
                addr_120_25:
                r10_17 = v21 + 1;
                r11_18 = r14_19;
                if (r14_19 == rax41) 
                    break; else 
                    continue;
            } else {
                goto addr_2a0_5;
            }
            addr_354_21:
            goto addr_120_25;
        }
        rsi6 = v7 + 1;
        r15_5 = r13_15;
    } while (r13_15 != rax42);
    if (v43 <= 2) 
        goto 0x80;
    *reinterpret_cast<int32_t*>(&r15_44) = 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_44) + 4) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(&rsi45) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi45) + 4) = reinterpret_cast<int32_t>(fputc);
    while (1) {
        v46 = rsi45;
        rdi47 = rsi45 * 0x1c200;
        v48 = rdi47 + 0x1c5c8;
        v49 = v50 + rdi47;
        v51 = v52 + rdi47;
        v53 = rdi47 + 0x3c8;
        r13_54 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(r15_44) + 1);
        rdi55 = reinterpret_cast<struct s25*>(reinterpret_cast<int64_t>(r15_44) - 1);
        *reinterpret_cast<int32_t*>(&r12_56) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_56) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&r11_57) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_57) + 4) = reinterpret_cast<int32_t>(fputc);
        while (1) {
            r14_58 = r11_57 + 1;
            *reinterpret_cast<int32_t*>(&rbp59) = 1;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp59) + 4) = reinterpret_cast<int32_t>(fputc);
            v60 = r12_56;
            if (v61 < 2) 
                goto addr_570_32;
            rsi62 = r12_56 * 0x3c0;
            if (reinterpret_cast<uint64_t>(rdx63 + v48 + rsi62) >= reinterpret_cast<uint64_t>(rcx64 + v51 + rsi62)) {
                *reinterpret_cast<int32_t*>(&rsi65) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi65) + 4) = reinterpret_cast<int32_t>(fputc);
            } else {
                *reinterpret_cast<int32_t*>(&rsi65) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi65) + 4) = reinterpret_cast<int32_t>(fputc);
                if (reinterpret_cast<uint64_t>(rcx66 + v53 + rsi62) < reinterpret_cast<uint64_t>(rdx67 + v49 + rsi62)) {
                    do {
                        addr_570_32:
                        rsi68 = reinterpret_cast<struct s26*>(r11_57 * 0x3c0);
                        rdi55->f0 = rsi68->f0;
                        rdi69 = reinterpret_cast<struct s27*>(&rdi55->f4);
                        rsi70 = reinterpret_cast<struct s28*>(&rsi68->f4);
                        __asm__("movapd xmm4, xmm5");
                        __asm__("mulsd xmm4, xmm0");
                        rdi69->f0 = rsi70->f0;
                        rdi71 = reinterpret_cast<struct s29*>(&rdi69->f4);
                        rsi72 = reinterpret_cast<struct s30*>(&rsi70->f4);
                        __asm__("addsd xmm6, xmm4");
                        __asm__("addsd xmm6, [r8+rbp*8]");
                        rdi71->f0 = rsi72->f0;
                        rdi73 = reinterpret_cast<struct s31*>(&rdi71->f4);
                        __asm__("addsd xmm7, xmm4");
                        __asm__("addsd xmm7, [r8+rbp*8]");
                        __asm__("mulsd xmm7, xmm1");
                        __asm__("mulsd xmm6, xmm1");
                        __asm__("addsd xmm4, [r12+rbp*8+0x8]");
                        __asm__("addsd xmm6, xmm7");
                        __asm__("addsd xmm4, [r12+rbp*8-0x8]");
                        __asm__("mulsd xmm4, xmm1");
                        __asm__("addsd xmm4, xmm6");
                        __asm__("addsd xmm4, xmm5");
                        rdi73->f0 = rsi72->f4;
                        rdi55 = reinterpret_cast<struct s25*>(&rdi73->f4);
                        rsi74 = rbp59 + 1;
                        rbp59 = rsi74;
                    } while (rsi74 != rax75);
                    goto addr_624_48;
                }
            }
            do {
                __asm__("movupd xmm4, [rbp+r10+0x0]");
                __asm__("movupd xmm5, [rbp+r8+0x0]");
                __asm__("movupd xmm6, [rbp+r8+0x0]");
                __asm__("movupd xmm7, [rbp+r8+0x0]");
                __asm__("movupd xmm8, [rbp+r8+0x0]");
                __asm__("movupd xmm9, [r8+rsi*8]");
                __asm__("movupd xmm10, [r8+rsi*8+0x10]");
                __asm__("movapd xmm11, xmm8");
                __asm__("mulpd xmm11, xmm2");
                __asm__("addpd xmm4, xmm11");
                __asm__("addpd xmm5, xmm4");
                __asm__("addpd xmm6, xmm11");
                __asm__("addpd xmm7, xmm6");
                __asm__("mulpd xmm7, xmm3");
                __asm__("mulpd xmm5, xmm3");
                __asm__("addpd xmm5, xmm7");
                __asm__("addpd xmm10, xmm11");
                __asm__("addpd xmm10, xmm9");
                __asm__("mulpd xmm10, xmm3");
                __asm__("addpd xmm10, xmm5");
                __asm__("addpd xmm10, xmm8");
                __asm__("movupd [rbp+r12+0x0], xmm10");
                rsi65 = rsi65 + 2;
            } while (rsi65 != v76);
            rbp59 = v77;
            if (v78 == v79) {
                addr_3f0_52:
                r12_56 = v60 + 1;
                r11_57 = r14_58;
                if (r14_58 == rax80) 
                    break; else 
                    continue;
            } else {
                goto addr_570_32;
            }
            addr_624_48:
            goto addr_3f0_52;
        }
        rsi45 = v46 + 1;
        r15_44 = r13_54;
        if (r13_54 == rax81) 
            goto 0x80;
    }
}

void fun_629() {
    int64_t v1;

    goto v1;
}

void submain(int32_t edi, int64_t rsi) {
    fun_662(0x1a5e00, 8);
}

