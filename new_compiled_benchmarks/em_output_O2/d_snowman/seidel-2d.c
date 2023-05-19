
struct s0 {
    int32_t f0;
    int32_t f4;
};

void fun_318(int64_t rdi, struct s0* rsi, int64_t rdx, int32_t* rcx) {
    int64_t v5;

    goto v5;
}

void fun_3b7();

void fputc(int32_t edi, int64_t rsi);

void fun_3e7(int32_t* rdi, int64_t rsi, int64_t rdx, int32_t* rcx);

void fun_400(int64_t rdi, struct s0* rsi, int64_t rdx, int32_t* rcx);

void fun_39b() {
    int32_t* rdi1;
    int32_t* rsi2;
    int32_t* r14_3;
    int32_t* r15_4;
    int64_t rbp5;
    int64_t r12_6;
    int64_t r13_7;
    int32_t* r14_8;
    int32_t* r14_9;
    int32_t* rcx10;
    int32_t* r14_11;
    int64_t rbx12;
    int64_t v13;

    while (1) {
        *rdi1 = *rsi2;
        rdi1 = r14_3;
        rsi2 = r15_4;
        fun_3b7();
        ++rbp5;
        if (rbp5 == 0x7d0) {
            ++r12_6;
            if (r12_6 == 0x7d0) 
                break;
            r13_7 = r12_6 * 0x7d0;
            *reinterpret_cast<int32_t*>(&rbp5) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp5) + 4) = reinterpret_cast<int32_t>(fputc);
        }
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(static_cast<int32_t>(rbp5 + r13_7) * 0xcccccccd) > 0xccccccc) 
            continue;
        *reinterpret_cast<int32_t*>(&rdi1) = 10;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi1) + 4) = reinterpret_cast<int32_t>(fputc);
        rsi2 = r14_8;
        fun_39b();
    }
    fun_3e7(r14_9, 0x3d6, 0x3dd, rcx10);
    fun_400(0x3ee, 22, 1, r14_11);
    fun_318(rbx12, 22, 1, r14_11);
    goto v13;
}

void fun_3b7() {
    int64_t rbp1;
    int64_t r12_2;
    int64_t r13_3;
    int32_t* rdi4;
    int32_t* rsi5;
    int32_t* r14_6;
    int32_t* r14_7;
    int32_t* r15_8;
    int32_t* r14_9;
    int32_t* rcx10;
    int32_t* r14_11;
    int64_t rbx12;
    int64_t v13;

    while (1) {
        ++rbp1;
        if (rbp1 == 0x7d0) {
            ++r12_2;
            if (r12_2 == 0x7d0) 
                break;
            r13_3 = r12_2 * 0x7d0;
            *reinterpret_cast<int32_t*>(&rbp1) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp1) + 4) = reinterpret_cast<int32_t>(fputc);
        }
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(static_cast<int32_t>(rbp1 + r13_3) * 0xcccccccd) <= 0xccccccc) {
            *reinterpret_cast<int32_t*>(&rdi4) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi4) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi5 = r14_6;
            fun_39b();
        }
        *rdi4 = *rsi5;
        rdi4 = r14_7;
        rsi5 = r15_8;
        fun_3b7();
    }
    fun_3e7(r14_9, 0x3d6, 0x3dd, rcx10);
    fun_400(0x3ee, 22, 1, r14_11);
    fun_318(rbx12, 22, 1, r14_11);
    goto v13;
}

void fun_3e7(int32_t* rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int32_t* r14_5;
    int64_t rbx6;
    int64_t v7;

    fun_400(0x3ee, 22, 1, r14_5);
    fun_318(rbx6, 22, 1, r14_5);
    goto v7;
}

void fun_367();

void fun_34c(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int32_t* rsi5;
    int64_t r12_6;
    int32_t* rdi7;
    int32_t* r14_8;
    int64_t r13_9;
    int64_t rbp10;
    int32_t* r14_11;
    int32_t* r14_12;
    int32_t* r14_13;
    int32_t* r14_14;
    int64_t rbx15;
    int64_t v16;

    rsi5 = reinterpret_cast<int32_t*>(0x353);
    *reinterpret_cast<int32_t*>(&r12_6) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_6) + 4) = reinterpret_cast<int32_t>(fputc);
    rdi7 = r14_8;
    fun_367();
    do {
        r13_9 = r12_6 * 0x7d0;
        *reinterpret_cast<int32_t*>(&rbp10) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp10) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>(static_cast<int32_t>(rbp10 + r13_9) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi7) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi7) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi5 = r14_11;
                fun_39b();
            }
            *rdi7 = *rsi5;
            rdi7 = r14_12;
            rsi5 = reinterpret_cast<int32_t*>(0x36e);
            fun_3b7();
            ++rbp10;
        } while (rbp10 != 0x7d0);
        ++r12_6;
    } while (r12_6 != 0x7d0);
    fun_3e7(r14_13, 0x3d6, 0x3dd, rcx);
    fun_400(0x3ee, 22, 1, r14_14);
    fun_318(rbx15, 22, 1, r14_14);
    goto v16;
}

void fun_400(int64_t rdi, struct s0* rsi, int64_t rdx, int32_t* rcx) {
    int64_t rbx5;
    int64_t v6;

    fun_318(rbx5, rsi, rdx, rcx);
    goto v6;
}

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

int32_t** g330 = reinterpret_cast<int32_t**>(0x3d8d48308b4c);

void fun_13f(struct s1* rdi, int64_t rsi) {
    int64_t rbx3;
    int64_t rax4;
    int64_t rax5;
    int64_t rcx6;
    struct s2* rsi7;
    int32_t eax8;
    struct s3* rdi9;
    struct s0* rsi10;
    int32_t* rcx11;
    int64_t rdx12;
    struct s4* rsi13;
    struct s5* rdi14;
    struct s6* rsi15;
    struct s7* rdi16;
    struct s8* rsi17;
    struct s9* rdi18;
    struct s10* rsi19;
    struct s11* rsi20;
    struct s5* rdi21;
    struct s12* rsi22;
    struct s7* rdi23;
    struct s13* rsi24;
    struct s9* rdi25;
    struct s14* rsi26;
    struct s3* r8_27;
    int32_t ebp28;
    signed char** r14_29;
    int32_t** rax30;
    int32_t* r14_31;
    int32_t* rcx32;
    int32_t* rsi33;
    int64_t r12_34;
    int32_t* rdi35;
    int64_t r13_36;
    int64_t rbp37;
    int64_t v38;

    rbx3 = rax4;
    *reinterpret_cast<int32_t*>(&rax5) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax5) + 4) = reinterpret_cast<int32_t>(fputc);
    __asm__("movdqa xmm0, [rip+0x0]");
    __asm__("movdqa xmm1, [rip+0x0]");
    __asm__("movapd xmm2, [rip+0x0]");
    __asm__("movapd xmm3, [rip+0x0]");
    __asm__("movdqa xmm4, [rip+0x0]");
    do {
        __asm__("xorps xmm5, xmm5");
        __asm__("cvtsi2sd xmm5, eax");
        __asm__("unpcklpd xmm5, xmm5");
        *reinterpret_cast<int32_t*>(&rcx6) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx6) + 4) = reinterpret_cast<int32_t>(fputc);
        __asm__("movdqa xmm6, xmm0");
        do {
            __asm__("movdqa xmm7, xmm6");
            __asm__("paddd xmm7, xmm1");
            __asm__("cvtdq2pd xmm7, xmm7");
            __asm__("mulpd xmm7, xmm5");
            __asm__("addpd xmm7, xmm2");
            __asm__("divpd xmm7, xmm3");
            __asm__("movupd [rdx+rcx*8], xmm7");
            __asm__("paddd xmm6, xmm4");
            __asm__("cvtdq2pd xmm7, xmm6");
            __asm__("mulpd xmm7, xmm5");
            __asm__("addpd xmm7, xmm2");
            __asm__("divpd xmm7, xmm3");
            rsi7 = reinterpret_cast<struct s2*>(reinterpret_cast<uint64_t>(rcx6 * 8) | 16);
            __asm__("movupd [rsi+rdx], xmm7");
            rcx6 = rcx6 + 4;
        } while (rcx6 != 0x7d0);
        ++rax5;
    } while (rax5 != 0x7d0);
    eax8 = reinterpret_cast<int32_t>(fputc);
    rdi->f0 = rsi7->f0;
    rdi9 = reinterpret_cast<struct s3*>(&rdi->f4);
    rsi10 = reinterpret_cast<struct s0*>(&rsi7->f4);
    do {
        rdi9->f0 = rsi10->f0;
        rdi9 = reinterpret_cast<struct s3*>(&rdi9->f4);
        *reinterpret_cast<int32_t*>(&rcx11) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx11) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("movapd xmm2, xmm1");
            rdx12 = reinterpret_cast<int64_t>(rcx11) - 1;
            rsi13 = reinterpret_cast<struct s4*>(reinterpret_cast<int64_t>(rcx11) * 0x3e80);
            rcx11 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rcx11) + 1);
            rdi9->f0 = rsi13->f0;
            rdi14 = reinterpret_cast<struct s5*>(&rdi9->f4);
            rsi15 = reinterpret_cast<struct s6*>(&rsi13->f4);
            rdi14->f0 = rsi15->f0;
            rdi16 = reinterpret_cast<struct s7*>(&rdi14->f4);
            rsi17 = reinterpret_cast<struct s8*>(&rsi15->f4);
            rdi16->f0 = rsi17->f0;
            rdi18 = reinterpret_cast<struct s9*>(&rdi16->f4);
            rsi19 = reinterpret_cast<struct s10*>(&rsi17->f4);
            rdi18->f0 = rsi19->f0;
            rsi20 = reinterpret_cast<struct s11*>(&rsi19->f4);
            rdi18->f4 = rsi20->f0;
            rsi10 = reinterpret_cast<struct s0*>(&rsi20->f4);
            __asm__("movapd xmm8, xmm1");
            *reinterpret_cast<int32_t*>(&rdi9) = 1;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi9) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("movapd xmm7, xmm4");
                __asm__("addsd xmm2, xmm4");
                rdi9->f0 = rsi10->f0;
                rdi21 = reinterpret_cast<struct s5*>(&rdi9->f4);
                rsi22 = reinterpret_cast<struct s12*>(&rsi10->f4);
                __asm__("addsd xmm2, xmm4");
                __asm__("addsd xmm2, xmm8");
                __asm__("addsd xmm2, xmm3");
                rdi21->f0 = rsi22->f0;
                rdi23 = reinterpret_cast<struct s7*>(&rdi21->f4);
                rsi24 = reinterpret_cast<struct s13*>(&rsi22->f4);
                __asm__("addsd xmm2, xmm3");
                __asm__("addsd xmm2, xmm5");
                __asm__("addsd xmm2, xmm6");
                __asm__("movapd xmm5, xmm6");
                rdi23->f0 = rsi24->f0;
                rdi25 = reinterpret_cast<struct s9*>(&rdi23->f4);
                rsi26 = reinterpret_cast<struct s14*>(&rsi24->f4);
                __asm__("addsd xmm2, xmm6");
                __asm__("divsd xmm2, xmm0");
                rdi25->f0 = rsi26->f0;
                rsi10 = reinterpret_cast<struct s0*>(&rsi26->f4);
                r8_27 = reinterpret_cast<struct s3*>(reinterpret_cast<int64_t>(&rdi25->f4) + 1);
                __asm__("movapd xmm8, xmm2");
                __asm__("movapd xmm2, xmm7");
                rdi9 = r8_27;
            } while (!reinterpret_cast<int1_t>(r8_27 == 0x7cf));
        } while (!reinterpret_cast<int1_t>(rcx11 == 0x7cf));
        ++eax8;
    } while (eax8 != 0x1f4);
    if (ebp28 >= 43 && **r14_29 == fputc) {
        rax30 = g330;
        r14_31 = *rax30;
        rcx32 = r14_31;
        fun_34c(0x33a, 22, 1, rcx32);
        rsi33 = reinterpret_cast<int32_t*>(0x353);
        *reinterpret_cast<int32_t*>(&r12_34) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_34) + 4) = reinterpret_cast<int32_t>(fputc);
        rdi35 = r14_31;
        fun_367();
        do {
            r13_36 = r12_34 * 0x7d0;
            *reinterpret_cast<int32_t*>(&rbp37) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp37) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("ror eax, 0x2");
                if (reinterpret_cast<uint32_t>(static_cast<int32_t>(rbp37 + r13_36) * 0xcccccccd) <= 0xccccccc) {
                    *reinterpret_cast<int32_t*>(&rdi35) = 10;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi35) + 4) = reinterpret_cast<int32_t>(fputc);
                    rsi33 = r14_31;
                    fun_39b();
                }
                *rdi35 = *rsi33;
                rdi35 = r14_31;
                rsi33 = reinterpret_cast<int32_t*>(0x36e);
                fun_3b7();
                ++rbp37;
            } while (rbp37 != 0x7d0);
            ++r12_34;
        } while (r12_34 != 0x7d0);
        fun_3e7(r14_31, 0x3d6, 0x3dd, rcx32);
        *reinterpret_cast<int32_t*>(&rsi10) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi10) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx12) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx12) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx11 = r14_31;
        fun_400(0x3ee, 22, 1, rcx11);
    }
    fun_318(rbx3, rsi10, rdx12, rcx11);
    goto v38;
}

void fun_367() {
    int64_t r13_1;
    int64_t r12_2;
    int64_t rbp3;
    int32_t* rdi4;
    int32_t* rsi5;
    int32_t* r14_6;
    int32_t* r14_7;
    int32_t* r14_8;
    int32_t* rcx9;
    int32_t* r14_10;
    int64_t rbx11;
    int64_t v12;

    do {
        r13_1 = r12_2 * 0x7d0;
        *reinterpret_cast<int32_t*>(&rbp3) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp3) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>(static_cast<int32_t>(rbp3 + r13_1) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi4) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi4) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi5 = r14_6;
                fun_39b();
            }
            *rdi4 = *rsi5;
            rdi4 = r14_7;
            rsi5 = reinterpret_cast<int32_t*>(0x36e);
            fun_3b7();
            ++rbp3;
        } while (rbp3 != 0x7d0);
        ++r12_2;
    } while (r12_2 != 0x7d0);
    fun_3e7(r14_8, 0x3d6, 0x3dd, rcx9);
    fun_400(0x3ee, 22, 1, r14_10);
    fun_318(rbx11, 22, 1, r14_10);
    goto v12;
}

void fputc(int32_t edi, int64_t rsi) {
    if (reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(edi < reinterpret_cast<int32_t>(fputc) == fputc)) | reinterpret_cast<uint1_t>(edi == fputc)) {
        return;
    }
}

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

struct s22 {
    int32_t f0;
    int32_t f4;
};

void fun_88() {
    struct s15* rdi1;
    struct s16* rsi2;
    struct s17* rdi3;
    struct s18* rsi4;
    struct s19* rdi5;
    struct s20* rsi6;
    struct s21* rdi7;
    struct s22* rsi8;
    int64_t rbx9;
    int64_t r11_10;
    int64_t rax11;
    int64_t r8_12;
    int64_t rax13;

    do {
        __asm__("movapd xmm7, xmm4");
        __asm__("addsd xmm2, xmm4");
        rdi1->f0 = rsi2->f0;
        rdi3 = reinterpret_cast<struct s17*>(&rdi1->f4);
        rsi4 = reinterpret_cast<struct s18*>(&rsi2->f4);
        __asm__("addsd xmm2, xmm4");
        __asm__("addsd xmm2, xmm8");
        __asm__("addsd xmm2, xmm3");
        rdi3->f0 = rsi4->f0;
        rdi5 = reinterpret_cast<struct s19*>(&rdi3->f4);
        rsi6 = reinterpret_cast<struct s20*>(&rsi4->f4);
        __asm__("addsd xmm2, xmm3");
        __asm__("addsd xmm2, xmm5");
        __asm__("addsd xmm2, xmm6");
        __asm__("movapd xmm5, xmm6");
        rdi5->f0 = rsi6->f0;
        rdi7 = reinterpret_cast<struct s21*>(&rdi5->f4);
        rsi8 = reinterpret_cast<struct s22*>(&rsi6->f4);
        __asm__("addsd xmm2, xmm6");
        __asm__("divsd xmm2, xmm0");
        rdi7->f0 = rsi8->f0;
        rdi1 = reinterpret_cast<struct s15*>(&rdi7->f4);
        rsi2 = reinterpret_cast<struct s16*>(&rsi8->f4);
        rbx9 = r11_10 + 1;
        __asm__("movapd xmm8, xmm2");
        __asm__("movapd xmm2, xmm7");
        r11_10 = rbx9;
    } while (rbx9 != rax11);
    if (r8_12 != rax13) {
    }
}

void submain(int32_t edi, int64_t rsi) {
    fun_13f(0x3d0900, 8);
}

