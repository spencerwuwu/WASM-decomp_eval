
struct s0 {
    int32_t f0;
    int32_t f4;
};

struct s1 {
    int32_t f0;
    int32_t f4;
};

void fun_324(int64_t rdi, struct s0* rsi, int32_t rdx, struct s1* rcx);

void fun_32c(int64_t rdi, struct s0* rsi, int32_t rdx, struct s1* rcx);

void fun_334(int64_t rdi, struct s0* rsi, int32_t rdx, struct s1* rcx);

void fun_31c(int64_t rdi, struct s0* rsi, int32_t rdx, struct s1* rcx) {
    int64_t r14_5;
    int64_t r15_6;
    int64_t r12_7;
    int64_t v8;

    fun_324(r14_5, rsi, rdx, rcx);
    fun_32c(r15_6, rsi, rdx, rcx);
    fun_334(r12_7, rsi, rdx, rcx);
    goto v8;
}

void fun_3e9();

void fputc(int32_t edi, int64_t rsi);

void fun_41e(struct s1* rdi, int64_t rsi, int64_t rdx, struct s1* rcx);

void fun_437(int64_t rdi, struct s0* rsi, int32_t rdx, struct s1* rcx);

void fun_3c6() {
    int32_t* rdi1;
    int32_t* rsi2;
    int32_t* v3;
    int64_t r13_4;
    int64_t rbp5;
    int64_t v6;
    int64_t rax7;
    int32_t* v8;
    struct s1* v9;
    struct s1* rcx10;
    int64_t rbx11;
    int64_t r14_12;
    int64_t r15_13;
    int64_t r12_14;
    int64_t v15;

    while (1) {
        *rdi1 = *rsi2;
        rdi1 = v3;
        rsi2 = reinterpret_cast<int32_t*>(0x3e2);
        fun_3e9();
        ++r13_4;
        if (r13_4 == 0x4b0) {
            ++rbp5;
            if (rbp5 == 0x4b0) 
                break;
            v6 = rbp5 * 0x4b0;
            *reinterpret_cast<int32_t*>(&r13_4) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_4) + 4) = reinterpret_cast<int32_t>(fputc);
        }
        rax7 = v6;
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>((*reinterpret_cast<int32_t*>(&rax7) + *reinterpret_cast<int32_t*>(&r13_4)) * 0xcccccccd) > 0xccccccc) 
            continue;
        *reinterpret_cast<int32_t*>(&rdi1) = 10;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi1) + 4) = reinterpret_cast<int32_t>(fputc);
        rsi2 = v8;
        fun_3c6();
    }
    fun_41e(v9, 0x408, 0x40f, rcx10);
    fun_437(0x425, 22, 1, v9);
    fun_31c(rbx11, 22, 1, v9);
    fun_324(r14_12, 22, 1, v9);
    fun_32c(r15_13, 22, 1, v9);
    fun_334(r12_14, 22, 1, v9);
    goto v15;
}

void fun_3e9() {
    int64_t r13_1;
    int64_t rbp2;
    int64_t v3;
    int64_t rax4;
    int32_t* rdi5;
    int32_t* rsi6;
    int32_t* v7;
    int32_t* v8;
    struct s1* v9;
    struct s1* rcx10;
    int64_t rbx11;
    int64_t r14_12;
    int64_t r15_13;
    int64_t r12_14;
    int64_t v15;

    while (1) {
        ++r13_1;
        if (r13_1 == 0x4b0) {
            ++rbp2;
            if (rbp2 == 0x4b0) 
                break;
            v3 = rbp2 * 0x4b0;
            *reinterpret_cast<int32_t*>(&r13_1) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_1) + 4) = reinterpret_cast<int32_t>(fputc);
        }
        rax4 = v3;
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>((*reinterpret_cast<int32_t*>(&rax4) + *reinterpret_cast<int32_t*>(&r13_1)) * 0xcccccccd) <= 0xccccccc) {
            *reinterpret_cast<int32_t*>(&rdi5) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi5) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi6 = v7;
            fun_3c6();
        }
        *rdi5 = *rsi6;
        rdi5 = v8;
        rsi6 = reinterpret_cast<int32_t*>(0x3e2);
        fun_3e9();
    }
    fun_41e(v9, 0x408, 0x40f, rcx10);
    fun_437(0x425, 22, 1, v9);
    fun_31c(rbx11, 22, 1, v9);
    fun_324(r14_12, 22, 1, v9);
    fun_32c(r15_13, 22, 1, v9);
    fun_334(r12_14, 22, 1, v9);
    goto v15;
}

void fun_41e(struct s1* rdi, int64_t rsi, int64_t rdx, struct s1* rcx) {
    struct s1* r13_5;
    int64_t rbx6;
    int64_t r14_7;
    int64_t r15_8;
    int64_t r12_9;
    int64_t v10;

    fun_437(0x425, 22, 1, r13_5);
    fun_31c(rbx6, 22, 1, r13_5);
    fun_324(r14_7, 22, 1, r13_5);
    fun_32c(r15_8, 22, 1, r13_5);
    fun_334(r12_9, 22, 1, r13_5);
    goto v10;
}

struct s2 {
    int32_t f0;
    int32_t f1;
    int32_t f4;
};

struct s3 {
    int32_t f0;
    int32_t f4;
};

struct s1** g34c = reinterpret_cast<struct s1**>(0x3d8d48288b4c);

void fun_368(int64_t rdi, int64_t rsi, int64_t rdx, struct s1* rcx);

void fun_387();

void fun_135() {
    int32_t* rdi1;
    int32_t* rsi2;
    int32_t* rdi3;
    int32_t* rsi4;
    int32_t* rdi5;
    int32_t* rsi6;
    int64_t r13_7;
    int64_t* r12_8;
    uint64_t rax9;
    int32_t* rdi10;
    int32_t* rsi11;
    int64_t rax12;
    int32_t* rdi13;
    int32_t* rsi14;
    int64_t rcx15;
    int32_t* rdi16;
    int32_t* rsi17;
    int32_t* rdi18;
    int32_t* rsi19;
    int32_t* rdi20;
    int32_t* rsi21;
    int64_t rbp22;
    struct s1* rcx23;
    int32_t rdx24;
    struct s0* rsi25;
    int32_t* r14_26;
    struct s1* rdi27;
    int64_t r9_28;
    struct s2* rdi29;
    struct s3* rsi30;
    int64_t r14_31;
    int32_t v32;
    signed char** v33;
    struct s1** rax34;
    struct s1* r13_35;
    struct s1* rcx36;
    struct s1* rsi37;
    int64_t rbp38;
    struct s1* v39;
    struct s1* rdi40;
    int64_t v41;
    int64_t r13_42;
    int64_t rax43;
    int64_t rbx44;
    int64_t r14_45;
    int64_t r15_46;
    int64_t r12_47;
    int64_t v48;

    while (1) {
        *rdi1 = *rsi2;
        rdi3 = rdi1 + 1;
        rsi4 = rsi2 + 1;
        *rdi3 = *rsi4;
        rdi5 = rdi3 + 1;
        rsi6 = rsi4 + 1;
        __asm__("xorpd xmm3, xmm3");
        *rdi5 = *rsi6;
        rdi1 = rdi5 + 1;
        rsi2 = rsi6 + 1;
        while (1) {
            __asm__("movapd xmm1, xmm0");
            ++rdi1;
            ++rsi2;
            __asm__("andpd xmm0, xmm1");
            __asm__("andnpd xmm1, xmm5");
            __asm__("orpd xmm1, xmm0");
            __asm__("movlpd [r12+r13*8], xmm1");
            ++r13_7;
            if (r13_7 == 0x4b0) 
                goto addr_1d8_14;
            r12_8[r13_7] = reinterpret_cast<int64_t>(fputc);
            *reinterpret_cast<int32_t*>(&rax9) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax9) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                *rdi1 = *rsi2;
                rdi10 = rdi1 + 1;
                rsi11 = rsi2 + 1;
                __asm__("subsd xmm0, [r15+r13*8]");
                __asm__("mulsd xmm0, xmm0");
                __asm__("addsd xmm0, [r12+r13*8]");
                *rdi10 = *rsi11;
                rdi1 = rdi10 + 1;
                rsi2 = rsi11 + 1;
                ++rax9;
            } while (rax9 != 0x578);
            __asm__("divsd xmm0, xmm2");
            __asm__("ucomisd xmm0, xmm3");
            if (rax9 < 0x578) 
                break;
            __asm__("sqrtsd xmm0, xmm0");
        }
        fun_135();
    }
    addr_1d8_14:
    *reinterpret_cast<int32_t*>(&rax12) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax12) + 4) = reinterpret_cast<int32_t>(fputc);
    *rdi1 = *rsi2;
    rdi13 = rdi1 + 1;
    rsi14 = rsi2 + 1;
    do {
        *reinterpret_cast<int32_t*>(&rcx15) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx15) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            *rdi13 = *rsi14;
            rdi16 = rdi13 + 1;
            rsi17 = rsi14 + 1;
            __asm__("subsd xmm1, [r15+rcx*8]");
            *rdi16 = *rsi17;
            rdi18 = rdi16 + 1;
            rsi19 = rsi17 + 1;
            *rdi18 = *rsi19;
            rdi20 = rdi18 + 1;
            rsi21 = rsi19 + 1;
            __asm__("mulsd xmm2, xmm0");
            __asm__("divsd xmm1, xmm2");
            *rdi20 = *rsi21;
            rdi13 = rdi20 + 1;
            rsi14 = rsi21 + 1;
            ++rcx15;
        } while (rcx15 != 0x4b0);
        ++rbp22;
    } while (rbp22 != 0x578);
    *reinterpret_cast<int32_t*>(&rcx23) = 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx23) + 4) = reinterpret_cast<int32_t>(fputc);
    rdx24 = reinterpret_cast<int32_t>(0x3ff0000000000000);
    do {
        rsi25 = reinterpret_cast<struct s0*>(r14_26 + rax12 * 0x960);
        (rsi25 + rax12)->f0 = reinterpret_cast<int32_t>(0x3ff0000000000000);
        rdi27 = rcx23;
        do {
            (rsi25 + static_cast<int64_t>(rdi27))->f0 = reinterpret_cast<int32_t>(fputc);
            __asm__("xorpd xmm0, xmm0");
            *reinterpret_cast<int32_t*>(&r9_28) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_28) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                rdi27->f0 = rsi25->f0;
                rdi29 = reinterpret_cast<struct s2*>(&rdi27->f4);
                rsi30 = reinterpret_cast<struct s3*>(&rsi25->f4);
                __asm__("mulsd xmm1, [r10+rdi*8]");
                __asm__("addsd xmm0, xmm1");
                rdi29->f0 = rsi30->f0;
                rdi27 = reinterpret_cast<struct s1*>(&rdi29->f1);
                rsi25 = reinterpret_cast<struct s0*>(&rsi30->f4);
                ++r9_28;
            } while (r9_28 != 0x578);
            rdi27->f0 = rsi25->f0;
            rsi25 = reinterpret_cast<struct s0*>(&rsi25->f4);
            rdi27 = reinterpret_cast<struct s1*>(reinterpret_cast<int64_t>(&rdi27->f4) + 1);
        } while (!reinterpret_cast<int1_t>(rdi27 == 0x4b0));
        ++rax12;
        rcx23 = reinterpret_cast<struct s1*>(reinterpret_cast<int64_t>(rcx23) + 1);
    } while (rax12 != 0x4af);
    *reinterpret_cast<int32_t*>(r14_31 + 0xafc7f8) = reinterpret_cast<int32_t>(0x3ff0000000000000);
    if (v32 >= 43 && **v33 == fputc) {
        rax34 = g34c;
        r13_35 = *rax34;
        rcx36 = r13_35;
        fun_368(0x356, 22, 1, rcx36);
        rsi37 = reinterpret_cast<struct s1*>(0x36f);
        *reinterpret_cast<int32_t*>(&rbp38) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp38) + 4) = reinterpret_cast<int32_t>(fputc);
        v39 = r13_35;
        rdi40 = r13_35;
        fun_387();
        do {
            v41 = rbp38 * 0x4b0;
            *reinterpret_cast<int32_t*>(&r13_42) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_42) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                rax43 = v41;
                __asm__("ror eax, 0x2");
                if (reinterpret_cast<uint32_t>((*reinterpret_cast<int32_t*>(&rax43) + *reinterpret_cast<int32_t*>(&r13_42)) * 0xcccccccd) <= 0xccccccc) {
                    *reinterpret_cast<int32_t*>(&rdi40) = 10;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi40) + 4) = reinterpret_cast<int32_t>(fputc);
                    rsi37 = v39;
                    fun_3c6();
                }
                rdi40->f0 = rsi37->f0;
                rdi40 = v39;
                rsi37 = reinterpret_cast<struct s1*>(0x3e2);
                fun_3e9();
                ++r13_42;
            } while (r13_42 != 0x4b0);
            ++rbp38;
        } while (rbp38 != 0x4b0);
        fun_41e(v39, 0x408, 0x40f, rcx36);
        *reinterpret_cast<int32_t*>(&rsi25) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi25) + 4) = reinterpret_cast<int32_t>(fputc);
        rdx24 = 1;
        (&rdx24)[1] = reinterpret_cast<int32_t>(fputc);
        rcx23 = v39;
        fun_437(0x425, 22, 1, rcx23);
    }
    fun_31c(rbx44, rsi25, rdx24, rcx23);
    fun_324(r14_45, rsi25, rdx24, rcx23);
    fun_32c(r15_46, rsi25, rdx24, rcx23);
    fun_334(r12_47, rsi25, rdx24, rcx23);
    goto v48;
}

void fun_368(int64_t rdi, int64_t rsi, int64_t rdx, struct s1* rcx) {
    struct s1* rsi5;
    int64_t rbp6;
    struct s1* v7;
    struct s1* r13_8;
    struct s1* rdi9;
    struct s1* r13_10;
    int64_t v11;
    int64_t r13_12;
    int64_t rax13;
    int64_t rbx14;
    int64_t r14_15;
    int64_t r15_16;
    int64_t r12_17;
    int64_t v18;

    rsi5 = reinterpret_cast<struct s1*>(0x36f);
    *reinterpret_cast<int32_t*>(&rbp6) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp6) + 4) = reinterpret_cast<int32_t>(fputc);
    v7 = r13_8;
    rdi9 = r13_10;
    fun_387();
    do {
        v11 = rbp6 * 0x4b0;
        *reinterpret_cast<int32_t*>(&r13_12) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_12) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rax13 = v11;
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>((*reinterpret_cast<int32_t*>(&rax13) + *reinterpret_cast<int32_t*>(&r13_12)) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi9) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi9) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi5 = v7;
                fun_3c6();
            }
            rdi9->f0 = rsi5->f0;
            rdi9 = v7;
            rsi5 = reinterpret_cast<struct s1*>(0x3e2);
            fun_3e9();
            ++r13_12;
        } while (r13_12 != 0x4b0);
        ++rbp6;
    } while (rbp6 != 0x4b0);
    fun_41e(v7, 0x408, 0x40f, rcx);
    fun_437(0x425, 22, 1, v7);
    fun_31c(rbx14, 22, 1, v7);
    fun_324(r14_15, 22, 1, v7);
    fun_32c(r15_16, 22, 1, v7);
    fun_334(r12_17, 22, 1, v7);
    goto v18;
}

void fun_324(int64_t rdi, struct s0* rsi, int32_t rdx, struct s1* rcx) {
    int64_t r15_5;
    int64_t r12_6;
    int64_t v7;

    fun_32c(r15_5, rsi, rdx, rcx);
    fun_334(r12_6, rsi, rdx, rcx);
    goto v7;
}

void fun_437(int64_t rdi, struct s0* rsi, int32_t rdx, struct s1* rcx) {
    int64_t rbx5;
    int64_t r14_6;
    int64_t r15_7;
    int64_t r12_8;
    int64_t v9;

    fun_31c(rbx5, rsi, rdx, rcx);
    fun_324(r14_6, rsi, rdx, rcx);
    fun_32c(r15_7, rsi, rdx, rcx);
    fun_334(r12_8, rsi, rdx, rcx);
    goto v9;
}

void fun_387() {
    int64_t v1;
    int64_t rbp2;
    int64_t r13_3;
    int64_t rax4;
    int32_t* rdi5;
    int32_t* rsi6;
    int32_t* v7;
    int32_t* v8;
    struct s1* v9;
    struct s1* rcx10;
    int64_t rbx11;
    int64_t r14_12;
    int64_t r15_13;
    int64_t r12_14;
    int64_t v15;

    do {
        v1 = rbp2 * 0x4b0;
        *reinterpret_cast<int32_t*>(&r13_3) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_3) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rax4 = v1;
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>((*reinterpret_cast<int32_t*>(&rax4) + *reinterpret_cast<int32_t*>(&r13_3)) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi5) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi5) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi6 = v7;
                fun_3c6();
            }
            *rdi5 = *rsi6;
            rdi5 = v8;
            rsi6 = reinterpret_cast<int32_t*>(0x3e2);
            fun_3e9();
            ++r13_3;
        } while (r13_3 != 0x4b0);
        ++rbp2;
    } while (rbp2 != 0x4b0);
    fun_41e(v9, 0x408, 0x40f, rcx10);
    fun_437(0x425, 22, 1, v9);
    fun_31c(rbx11, 22, 1, v9);
    fun_324(r14_12, 22, 1, v9);
    fun_32c(r15_13, 22, 1, v9);
    fun_334(r12_14, 22, 1, v9);
    goto v15;
}

void fun_32c(int64_t rdi, struct s0* rsi, int32_t rdx, struct s1* rcx) {
    int64_t r12_5;
    int64_t v6;

    fun_334(r12_5, rsi, rdx, rcx);
    goto v6;
}

void fun_334(int64_t rdi, struct s0* rsi, int32_t rdx, struct s1* rcx) {
    int64_t v5;

    goto v5;
}

void fputc(int32_t edi, int64_t rsi) {
}

void fun_84() {
    __asm__("int1 ");
    __asm__("xorps xmm2, xmm2");
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

void fun_b8(struct s4* rdi, struct s5* rsi) {
    int64_t rbp3;
    int64_t rbp4;
    signed char dh5;
    struct s6* rdi6;
    struct s7* rsi7;
    int64_t* r15_8;
    int64_t rax9;
    int64_t rcx10;

    *reinterpret_cast<signed char*>(rbp3 - 75) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(rbp4 - 75) + dh5);
    rdi->f0 = rsi->f0;
    rdi6 = reinterpret_cast<struct s6*>(&rdi->f4);
    rsi7 = reinterpret_cast<struct s7*>(&rsi->f4);
    do {
        r15_8[rax9] = reinterpret_cast<int64_t>(fputc);
        __asm__("xorpd xmm0, xmm0");
        *reinterpret_cast<int32_t*>(&rcx10) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx10) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("addsd xmm0, [rdx+rax*8]");
            rdi6->f0 = rsi7->f0;
            rdi6 = reinterpret_cast<struct s6*>(&rdi6->f4);
            rsi7 = reinterpret_cast<struct s7*>(&rsi7->f4);
            ++rcx10;
        } while (rcx10 != 0x578);
        __asm__("divsd xmm0, xmm2");
        rdi6->f0 = rsi7->f0;
        rdi6 = reinterpret_cast<struct s6*>(&rdi6->f4);
        rsi7 = reinterpret_cast<struct s7*>(&rsi7->f4);
        ++rax9;
    } while (rax9 != 0x4b0);
    __asm__("xorpd xmm3, xmm3");
    rdi6->f0 = rsi7->f0;
    rdi6->f4 = rsi7->f4;
    goto 0x178;
}

