
void fun_789(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t v5;

    goto v5;
}

void fun_848();

void fputc(int32_t edi, int64_t rsi);

void fun_87f(int64_t rdi, int64_t rsi, int64_t rdx);

void fun_898(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx);

void fun_81d() {
    int32_t* rdi1;
    int32_t* rsi2;
    int32_t* r14_3;
    int64_t r15_4;
    int64_t rbp5;
    int64_t r12_6;
    int64_t v7;
    int64_t r13_8;
    int32_t* r14_9;
    int64_t r14_10;
    int64_t r14_11;
    int64_t rbx12;
    int64_t v13;

    while (1) {
        *rdi1 = *rsi2;
        rdi1 = r14_3;
        rsi2 = reinterpret_cast<int32_t*>(0x841);
        fun_848();
        ++r15_4;
        if (r15_4 == 0x78) {
            ++rbp5;
            if (rbp5 == 0x78) {
                ++r12_6;
                if (r12_6 == 0x78) 
                    break;
                v7 = r12_6 * 0x3840;
                *reinterpret_cast<int32_t*>(&rbp5) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp5) + 4) = reinterpret_cast<int32_t>(fputc);
            }
            r13_8 = rbp5 * 0x78 + v7;
            *reinterpret_cast<int32_t*>(&r15_4) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_4) + 4) = reinterpret_cast<int32_t>(fputc);
        }
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r15_4 + r13_8) * 0xcccccccd) > 0xccccccc) 
            continue;
        *reinterpret_cast<int32_t*>(&rdi1) = 10;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi1) + 4) = reinterpret_cast<int32_t>(fputc);
        rsi2 = r14_9;
        fun_81d();
    }
    fun_87f(r14_10, 0x86e, 0x875);
    fun_898(0x886, 22, 1, r14_11);
    fun_789(rbx12, 22, 1, r14_11);
    goto v13;
}

void fun_848() {
    int64_t r15_1;
    int64_t rbp2;
    int64_t r12_3;
    int64_t v4;
    int64_t r13_5;
    int32_t* rdi6;
    int32_t* rsi7;
    int32_t* r14_8;
    int32_t* r14_9;
    int64_t r14_10;
    int64_t r14_11;
    int64_t rbx12;
    int64_t v13;

    while (1) {
        ++r15_1;
        if (r15_1 == 0x78) {
            ++rbp2;
            if (rbp2 == 0x78) {
                ++r12_3;
                if (r12_3 == 0x78) 
                    break;
                v4 = r12_3 * 0x3840;
                *reinterpret_cast<int32_t*>(&rbp2) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp2) + 4) = reinterpret_cast<int32_t>(fputc);
            }
            r13_5 = rbp2 * 0x78 + v4;
            *reinterpret_cast<int32_t*>(&r15_1) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_1) + 4) = reinterpret_cast<int32_t>(fputc);
        }
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r15_1 + r13_5) * 0xcccccccd) <= 0xccccccc) {
            *reinterpret_cast<int32_t*>(&rdi6) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi6) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi7 = r14_8;
            fun_81d();
        }
        *rdi6 = *rsi7;
        rdi6 = r14_9;
        rsi7 = reinterpret_cast<int32_t*>(0x841);
        fun_848();
    }
    fun_87f(r14_10, 0x86e, 0x875);
    fun_898(0x886, 22, 1, r14_11);
    fun_789(rbx12, 22, 1, r14_11);
    goto v13;
}

void fun_87f(int64_t rdi, int64_t rsi, int64_t rdx) {
    int64_t r14_4;
    int64_t rbx5;
    int64_t v6;

    fun_898(0x886, 22, 1, r14_4);
    fun_789(rbx5, 22, 1, r14_4);
    goto v6;
}

void fun_7d8();

void fun_7bd(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int32_t* rsi5;
    int64_t r12_6;
    int32_t* rdi7;
    int32_t* r14_8;
    int64_t v9;
    int64_t rbp10;
    int64_t r13_11;
    int64_t r15_12;
    int32_t* r14_13;
    int32_t* r14_14;
    int64_t r14_15;
    int64_t r14_16;
    int64_t rbx17;
    int64_t v18;

    rsi5 = reinterpret_cast<int32_t*>(0x7c4);
    *reinterpret_cast<int32_t*>(&r12_6) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_6) + 4) = reinterpret_cast<int32_t>(fputc);
    rdi7 = r14_8;
    fun_7d8();
    do {
        v9 = r12_6 * 0x3840;
        *reinterpret_cast<int32_t*>(&rbp10) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp10) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            r13_11 = rbp10 * 0x78 + v9;
            *reinterpret_cast<int32_t*>(&r15_12) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_12) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("ror eax, 0x2");
                if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r15_12 + r13_11) * 0xcccccccd) <= 0xccccccc) {
                    *reinterpret_cast<int32_t*>(&rdi7) = 10;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi7) + 4) = reinterpret_cast<int32_t>(fputc);
                    rsi5 = r14_13;
                    fun_81d();
                }
                *rdi7 = *rsi5;
                rdi7 = r14_14;
                rsi5 = reinterpret_cast<int32_t*>(0x841);
                fun_848();
                ++r15_12;
            } while (r15_12 != 0x78);
            ++rbp10;
        } while (rbp10 != 0x78);
        ++r12_6;
    } while (r12_6 != 0x78);
    fun_87f(r14_15, 0x86e, 0x875);
    fun_898(0x886, 22, 1, r14_16);
    fun_789(rbx17, 22, 1, r14_16);
    goto v18;
}

void fun_898(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t rbx5;
    int64_t v6;

    fun_789(rbx5, rsi, rdx, rcx);
    goto v6;
}

void fun_7d8() {
    int64_t v1;
    int64_t r12_2;
    int64_t rbp3;
    int64_t r13_4;
    int64_t r15_5;
    int32_t* rdi6;
    int32_t* rsi7;
    int32_t* r14_8;
    int32_t* r14_9;
    int64_t r14_10;
    int64_t r14_11;
    int64_t rbx12;
    int64_t v13;

    do {
        v1 = r12_2 * 0x3840;
        *reinterpret_cast<int32_t*>(&rbp3) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp3) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            r13_4 = rbp3 * 0x78 + v1;
            *reinterpret_cast<int32_t*>(&r15_5) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_5) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("ror eax, 0x2");
                if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r15_5 + r13_4) * 0xcccccccd) <= 0xccccccc) {
                    *reinterpret_cast<int32_t*>(&rdi6) = 10;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi6) + 4) = reinterpret_cast<int32_t>(fputc);
                    rsi7 = r14_8;
                    fun_81d();
                }
                *rdi6 = *rsi7;
                rdi6 = r14_9;
                rsi7 = reinterpret_cast<int32_t*>(0x841);
                fun_848();
                ++r15_5;
            } while (r15_5 != 0x78);
            ++rbp3;
        } while (rbp3 != 0x78);
        ++r12_2;
    } while (r12_2 != 0x78);
    fun_87f(r14_10, 0x86e, 0x875);
    fun_898(0x886, 22, 1, r14_11);
    fun_789(rbx12, 22, 1, r14_11);
    goto v13;
}

void fputc(int32_t edi, int64_t rsi) {
}

void fun_74() {
}

struct s0 {
    signed char[105] pad105;
    signed char f69;
};

struct s1 {
    signed char[105] pad105;
    signed char f69;
};

void fun_88() {
    struct s0* rax1;
    struct s1* rax2;
    signed char cl3;

    rax1->f69 = reinterpret_cast<signed char>(rax2->f69 + cl3);
    __asm__("rol dword [rax], 1");
    return;
}

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

void fun_ac() {
    signed char* rax1;
    signed char* rax2;
    signed char al3;
    signed char* rax4;
    signed char* rax5;
    signed char al6;
    int64_t r8_7;
    int64_t r9_8;
    struct s2* rsi9;
    int64_t rdx10;
    int64_t r11_11;
    int64_t r14_12;
    struct s3* rdi13;
    struct s4* rdi14;
    struct s5* rsi15;
    struct s6* rdi16;
    struct s7* rsi17;
    struct s8* rdi18;
    struct s9* rsi19;

    *rax1 = reinterpret_cast<signed char>(*rax2 + al3);
    *rax4 = reinterpret_cast<signed char>(*rax5 + al6);
    while (1) {
        ++r8_7;
        if (r8_7 == 0x78) 
            goto 0x80;
        r9_8 = r8_7 * 0x3c0;
        if (reinterpret_cast<uint64_t>(r9_8 + reinterpret_cast<int64_t>(rsi9) - (rdx10 + r9_8)) >= 16) {
            __asm__("movd xmm7, r11");
            __asm__("pshufd xmm7, xmm7, 0x44");
            *reinterpret_cast<int32_t*>(&r11_11) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_11) + 4) = reinterpret_cast<int32_t>(fputc);
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
                __asm__("movupd [r14+r10], xmm9");
                __asm__("movupd [r14+r9], xmm9");
                r11_11 = r11_11 + 4;
                __asm__("paddq xmm8, xmm6");
            } while (r11_11 != 0x78);
        } else {
            *reinterpret_cast<int32_t*>(&r14_12) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_12) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("xorps xmm7, xmm7");
                __asm__("cvtsi2sd xmm7, ebp");
                __asm__("mulsd xmm7, xmm0");
                __asm__("divsd xmm7, xmm1");
                rdi13->f0 = rsi9->f0;
                rdi14 = reinterpret_cast<struct s4*>(&rdi13->f4);
                rsi15 = reinterpret_cast<struct s5*>(&rsi9->f4);
                rdi14->f0 = rsi15->f0;
                rdi16 = reinterpret_cast<struct s6*>(&rdi14->f4);
                rsi17 = reinterpret_cast<struct s7*>(&rsi15->f4);
                __asm__("xorps xmm7, xmm7");
                __asm__("cvtsi2sd xmm7, ebp");
                __asm__("mulsd xmm7, xmm0");
                __asm__("divsd xmm7, xmm1");
                rdi16->f0 = rsi17->f0;
                rdi18 = reinterpret_cast<struct s8*>(&rdi16->f4);
                rsi19 = reinterpret_cast<struct s9*>(&rsi17->f4);
                rdi18->f0 = rsi19->f0;
                rdi13 = reinterpret_cast<struct s3*>(&rdi18->f4);
                rsi9 = reinterpret_cast<struct s2*>(&rsi19->f4);
                r14_12 = r14_12 + 2;
            } while (r14_12 != 0x78);
        }
    }
}

void fun_94() {
    goto 0xb9;
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

int64_t* g7a1 = reinterpret_cast<int64_t*>(0x3d8d48308b4c);

void fun_1d1(struct s10* rdi, struct s11* rsi) {
    int32_t ecx3;
    int32_t v4;
    struct s12* rsi5;
    int64_t rcx6;
    int64_t v7;
    int64_t rcx8;
    int64_t v9;
    int64_t v10;
    int64_t v11;
    int64_t v12;
    struct s12* r8_13;
    int64_t r10_14;
    int64_t r13_15;
    int64_t r14_16;
    int64_t rbp17;
    int64_t rcx18;
    int64_t v19;
    int64_t rax20;
    int64_t rbx21;
    int64_t rdx22;
    int64_t rcx23;
    int64_t rbx24;
    int64_t rax25;
    int64_t rdi26;
    struct s13* rdi27;
    int32_t* rbx28;
    int32_t* r9_29;
    int32_t* rbx30;
    struct s14* rsi31;
    struct s15* rsi32;
    struct s16* rsi33;
    int64_t rdx34;
    struct s17* rsi35;
    int64_t rcx36;
    int64_t v37;
    int64_t rcx38;
    int64_t v39;
    int64_t v40;
    int64_t v41;
    int64_t v42;
    struct s17* r8_43;
    int64_t r10_44;
    int64_t r13_45;
    int64_t r14_46;
    int64_t rbp47;
    int64_t rcx48;
    int64_t v49;
    int64_t rbx50;
    int64_t rax51;
    int64_t rdx52;
    int64_t rcx53;
    int64_t rax54;
    int64_t rbx55;
    int64_t rdi56;
    struct s18* rdi57;
    int32_t* rax58;
    int32_t* r9_59;
    int32_t* rax60;
    struct s19* rsi61;
    struct s20* rsi62;
    struct s21* rsi63;
    int64_t rdx64;
    int32_t v65;
    signed char** v66;
    int64_t* rax67;
    int64_t rcx68;

    ecx3 = 1;
    rdi->f0 = rsi->f0;
    rdi->f4 = rsi->f4;
    __asm__("movapd xmm2, [rip+0x0]");
    __asm__("movapd xmm3, [rip+0x0]");
    do {
        v4 = ecx3;
        *reinterpret_cast<int32_t*>(&rsi5) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi5) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rcx6) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx6) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            v7 = rcx6;
            rcx8 = rcx6 * 0x1c200;
            v9 = rcx8 + 0x1c5c8;
            v10 = rcx8 + 0x1c978;
            v11 = rcx8 + 0x3c8;
            v12 = rcx8 + 0x38b78;
            r8_13 = reinterpret_cast<struct s12*>(reinterpret_cast<int64_t>(rsi5) + 1);
            *reinterpret_cast<int32_t*>(&r10_14) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_14) + 4) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(&r13_15) = 1;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_15) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                r14_16 = r13_15 + 1;
                rbp17 = r13_15 - 1;
                rcx18 = r10_14 * 0x3c0;
                v19 = r10_14;
                if (reinterpret_cast<uint64_t>(rax20 + v9 + rcx18) >= reinterpret_cast<uint64_t>(v12 + rbx21 + rcx18)) {
                    *reinterpret_cast<int32_t*>(&rdx22) = reinterpret_cast<int32_t>(fputc);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx22) + 4) = reinterpret_cast<int32_t>(fputc);
                    goto addr_3e0_12;
                }
                *reinterpret_cast<int32_t*>(&rcx23) = 1;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx23) + 4) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(&rdx22) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx22) + 4) = reinterpret_cast<int32_t>(fputc);
                if (reinterpret_cast<uint64_t>(rbx24 + v11 + rcx18) >= reinterpret_cast<uint64_t>(rax25 + v10 + rcx18)) {
                    do {
                        addr_3e0_12:
                        __asm__("movupd xmm6, [r10+r9]");
                        __asm__("movupd xmm4, [r10+r9]");
                        __asm__("movapd xmm5, xmm4");
                        __asm__("mulpd xmm5, xmm2");
                        __asm__("addpd xmm6, xmm5");
                        __asm__("movupd xmm7, [r10+r12]");
                        __asm__("addpd xmm7, xmm6");
                        __asm__("movupd xmm6, [r10+r12]");
                        __asm__("addpd xmm6, xmm5");
                        __asm__("movupd xmm8, [r10+r12]");
                        __asm__("addpd xmm8, xmm6");
                        __asm__("mulpd xmm8, xmm3");
                        __asm__("mulpd xmm7, xmm3");
                        __asm__("addpd xmm7, xmm8");
                        __asm__("movupd xmm6, [r9+rdx*8]");
                        __asm__("movupd xmm8, [r9+rdx*8+0x10]");
                        rdi26 = rdx22 + 2;
                        __asm__("addpd xmm8, xmm5");
                        __asm__("addpd xmm8, xmm6");
                        __asm__("mulpd xmm8, xmm3");
                        __asm__("addpd xmm8, xmm7");
                        __asm__("addpd xmm8, xmm4");
                        __asm__("movupd [r10+r11], xmm8");
                        rdx22 = rdi26;
                    } while (rdi26 != 0x76);
                } else {
                    do {
                        rdi27 = reinterpret_cast<struct s13*>(rbx28 + reinterpret_cast<int64_t>(r8_13) * 0x7080 + r13_15 * 0xf0);
                        r9_29 = rbx30 + reinterpret_cast<int64_t>(rsi5) * 0x7080;
                        rdi27->f0 = rsi5->f0;
                        rsi31 = reinterpret_cast<struct s14*>(&rsi5->f4);
                        __asm__("movapd xmm4, xmm5");
                        __asm__("mulsd xmm4, xmm0");
                        rdi27->f4 = rsi31->f0;
                        rsi32 = reinterpret_cast<struct s15*>(&rsi31->f4);
                        __asm__("addsd xmm6, xmm4");
                        __asm__("addsd xmm6, [rdi+rcx*8]");
                        r9_29[r14_16 * 0xf0] = rsi32->f0;
                        rsi33 = reinterpret_cast<struct s16*>(&rsi32->f4);
                        __asm__("addsd xmm7, xmm4");
                        __asm__("addsd xmm7, [rdi+rcx*8]");
                        __asm__("mulsd xmm7, xmm1");
                        __asm__("mulsd xmm6, xmm1");
                        __asm__("addsd xmm4, [r11+rcx*8+0x8]");
                        __asm__("addsd xmm6, xmm7");
                        __asm__("addsd xmm4, [r11+rcx*8-0x8]");
                        __asm__("mulsd xmm4, xmm1");
                        __asm__("addsd xmm4, xmm6");
                        __asm__("addsd xmm4, xmm5");
                        r9_29[rbp17 * 0xf0] = rsi33->f0;
                        rsi5 = reinterpret_cast<struct s12*>(&rsi33->f4);
                        rdx34 = rcx23 + 1;
                        rcx23 = rdx34;
                    } while (rdx34 != 0x77);
                    continue;
                }
                r10_14 = v19 + 1;
                r13_15 = r14_16;
            } while (r14_16 != 0x77);
            rcx6 = v7 + 1;
            rsi5 = r8_13;
        } while (r8_13 != 0x77);
        *reinterpret_cast<int32_t*>(&rsi35) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi35) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rcx36) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx36) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            v37 = rcx36;
            rcx38 = rcx36 * 0x1c200;
            v39 = rcx38 + 0x1c5c8;
            v40 = rcx38 + 0x1c978;
            v41 = rcx38 + 0x3c8;
            v42 = rcx38 + 0x38b78;
            r8_43 = reinterpret_cast<struct s17*>(reinterpret_cast<int64_t>(rsi35) + 1);
            *reinterpret_cast<int32_t*>(&r10_44) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_44) + 4) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(&r13_45) = 1;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_45) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                r14_46 = r13_45 + 1;
                rbp47 = r13_45 - 1;
                rcx48 = r10_44 * 0x3c0;
                v49 = r10_44;
                if (reinterpret_cast<uint64_t>(rbx50 + v39 + rcx48) >= reinterpret_cast<uint64_t>(v42 + rax51 + rcx48)) {
                    *reinterpret_cast<int32_t*>(&rdx52) = reinterpret_cast<int32_t>(fputc);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx52) + 4) = reinterpret_cast<int32_t>(fputc);
                    goto addr_690_36;
                }
                *reinterpret_cast<int32_t*>(&rcx53) = 1;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx53) + 4) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(&rdx52) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx52) + 4) = reinterpret_cast<int32_t>(fputc);
                if (reinterpret_cast<uint64_t>(rax54 + v41 + rcx48) >= reinterpret_cast<uint64_t>(rbx55 + v40 + rcx48)) {
                    do {
                        addr_690_36:
                        __asm__("movupd xmm6, [r10+r9]");
                        __asm__("movupd xmm4, [r10+r9]");
                        __asm__("movapd xmm5, xmm4");
                        __asm__("mulpd xmm5, xmm2");
                        __asm__("addpd xmm6, xmm5");
                        __asm__("movupd xmm7, [r10+r12]");
                        __asm__("addpd xmm7, xmm6");
                        __asm__("movupd xmm6, [r10+r12]");
                        __asm__("addpd xmm6, xmm5");
                        __asm__("movupd xmm8, [r10+r12]");
                        __asm__("addpd xmm8, xmm6");
                        __asm__("mulpd xmm8, xmm3");
                        __asm__("mulpd xmm7, xmm3");
                        __asm__("addpd xmm7, xmm8");
                        __asm__("movupd xmm6, [r9+rdx*8]");
                        __asm__("movupd xmm8, [r9+rdx*8+0x10]");
                        rdi56 = rdx52 + 2;
                        __asm__("addpd xmm8, xmm5");
                        __asm__("addpd xmm8, xmm6");
                        __asm__("mulpd xmm8, xmm3");
                        __asm__("addpd xmm8, xmm7");
                        __asm__("addpd xmm8, xmm4");
                        __asm__("movupd [r10+r11], xmm8");
                        rdx52 = rdi56;
                    } while (rdi56 != 0x76);
                } else {
                    do {
                        rdi57 = reinterpret_cast<struct s18*>(rax58 + reinterpret_cast<int64_t>(r8_43) * 0x7080 + r13_45 * 0xf0);
                        r9_59 = rax60 + reinterpret_cast<int64_t>(rsi35) * 0x7080;
                        rdi57->f0 = rsi35->f0;
                        rsi61 = reinterpret_cast<struct s19*>(&rsi35->f4);
                        __asm__("movapd xmm4, xmm5");
                        __asm__("mulsd xmm4, xmm0");
                        rdi57->f4 = rsi61->f0;
                        rsi62 = reinterpret_cast<struct s20*>(&rsi61->f4);
                        __asm__("addsd xmm6, xmm4");
                        __asm__("addsd xmm6, [rdi+rcx*8]");
                        r9_59[r14_46 * 0xf0] = rsi62->f0;
                        rsi63 = reinterpret_cast<struct s21*>(&rsi62->f4);
                        __asm__("addsd xmm7, xmm4");
                        __asm__("addsd xmm7, [rdi+rcx*8]");
                        __asm__("mulsd xmm7, xmm1");
                        __asm__("mulsd xmm6, xmm1");
                        __asm__("addsd xmm4, [r11+rcx*8+0x8]");
                        __asm__("addsd xmm6, xmm7");
                        __asm__("addsd xmm4, [r11+rcx*8-0x8]");
                        __asm__("mulsd xmm4, xmm1");
                        __asm__("addsd xmm4, xmm6");
                        __asm__("addsd xmm4, xmm5");
                        r9_59[rbp47 * 0xf0] = rsi63->f0;
                        rsi35 = reinterpret_cast<struct s17*>(&rsi63->f4);
                        rdx64 = rcx53 + 1;
                        rcx53 = rdx64;
                    } while (rdx64 != 0x77);
                    continue;
                }
                r10_44 = v49 + 1;
                r13_45 = r14_46;
            } while (r14_46 != 0x77);
            rcx36 = v37 + 1;
            rsi35 = r8_43;
        } while (r8_43 != 0x77);
        ecx3 = v4 + 1;
    } while (ecx3 != 0x1f5);
    if (v65 < 43) 
        goto 0x781;
    if (**v66 != fputc) 
        goto "???";
    rax67 = g7a1;
    rcx68 = *rax67;
    fun_7bd(0x7ab, 22, 1, rcx68);
}

