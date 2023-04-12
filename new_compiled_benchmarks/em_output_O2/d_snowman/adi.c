
void fun_622(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx);

void fun_62a(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx);

void fun_632(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx);

void fun_61a(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int64_t r14_5;
    int64_t r15_6;
    int64_t r12_7;
    int64_t v8;

    fun_622(r14_5, rsi, rdx, rcx);
    fun_62a(r15_6, rsi, rdx, rcx);
    fun_632(r12_7, rsi, rdx, rcx);
    goto v8;
}

void fun_6e9();

void fputc(int32_t edi, int64_t rsi);

void fun_71e(int32_t* rdi, int64_t rsi, int64_t rdx);

void fun_737(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx);

void fun_6c6() {
    int32_t* rdi1;
    int32_t* rsi2;
    int32_t* v3;
    int64_t r13_4;
    int64_t rbp5;
    int64_t v6;
    int64_t rax7;
    int32_t* v8;
    int32_t* v9;
    int64_t rbx10;
    int64_t r14_11;
    int64_t r15_12;
    int64_t r12_13;
    int64_t v14;

    while (1) {
        *rdi1 = *rsi2;
        rdi1 = v3;
        rsi2 = reinterpret_cast<int32_t*>(0x6e2);
        fun_6e9();
        ++r13_4;
        if (r13_4 == 0x3e8) {
            ++rbp5;
            if (rbp5 == 0x3e8) 
                break;
            v6 = rbp5 * 0x3e8;
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
        fun_6c6();
    }
    fun_71e(v9, 0x708, 0x70f);
    fun_737(0x725, 22, 1, v9);
    fun_61a(rbx10, 22, 1, v9);
    fun_622(r14_11, 22, 1, v9);
    fun_62a(r15_12, 22, 1, v9);
    fun_632(r12_13, 22, 1, v9);
    goto v14;
}

void fun_6e9() {
    int64_t r13_1;
    int64_t rbp2;
    int64_t v3;
    int64_t rax4;
    int32_t* rdi5;
    int32_t* rsi6;
    int32_t* v7;
    int32_t* v8;
    int32_t* v9;
    int64_t rbx10;
    int64_t r14_11;
    int64_t r15_12;
    int64_t r12_13;
    int64_t v14;

    while (1) {
        ++r13_1;
        if (r13_1 == 0x3e8) {
            ++rbp2;
            if (rbp2 == 0x3e8) 
                break;
            v3 = rbp2 * 0x3e8;
            *reinterpret_cast<int32_t*>(&r13_1) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_1) + 4) = reinterpret_cast<int32_t>(fputc);
        }
        rax4 = v3;
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>((*reinterpret_cast<int32_t*>(&rax4) + *reinterpret_cast<int32_t*>(&r13_1)) * 0xcccccccd) <= 0xccccccc) {
            *reinterpret_cast<int32_t*>(&rdi5) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi5) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi6 = v7;
            fun_6c6();
        }
        *rdi5 = *rsi6;
        rdi5 = v8;
        rsi6 = reinterpret_cast<int32_t*>(0x6e2);
        fun_6e9();
    }
    fun_71e(v9, 0x708, 0x70f);
    fun_737(0x725, 22, 1, v9);
    fun_61a(rbx10, 22, 1, v9);
    fun_622(r14_11, 22, 1, v9);
    fun_62a(r15_12, 22, 1, v9);
    fun_632(r12_13, 22, 1, v9);
    goto v14;
}

void fun_71e(int32_t* rdi, int64_t rsi, int64_t rdx) {
    int32_t* r13_4;
    int64_t rbx5;
    int64_t r14_6;
    int64_t r15_7;
    int64_t r12_8;
    int64_t v9;

    fun_737(0x725, 22, 1, r13_4);
    fun_61a(rbx5, 22, 1, r13_4);
    fun_622(r14_6, 22, 1, r13_4);
    fun_62a(r15_7, 22, 1, r13_4);
    fun_632(r12_8, 22, 1, r13_4);
    goto v9;
}

void fun_685();

void fun_666(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int32_t* rsi5;
    int64_t rbp6;
    int32_t* v7;
    int32_t* r13_8;
    int32_t* rdi9;
    int32_t* r13_10;
    int64_t v11;
    int64_t r13_12;
    int64_t rax13;
    int64_t rbx14;
    int64_t r14_15;
    int64_t r15_16;
    int64_t r12_17;
    int64_t v18;

    rsi5 = reinterpret_cast<int32_t*>(0x66d);
    *reinterpret_cast<int32_t*>(&rbp6) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp6) + 4) = reinterpret_cast<int32_t>(fputc);
    v7 = r13_8;
    rdi9 = r13_10;
    fun_685();
    do {
        v11 = rbp6 * 0x3e8;
        *reinterpret_cast<int32_t*>(&r13_12) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_12) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rax13 = v11;
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>((*reinterpret_cast<int32_t*>(&rax13) + *reinterpret_cast<int32_t*>(&r13_12)) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi9) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi9) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi5 = v7;
                fun_6c6();
            }
            *rdi9 = *rsi5;
            rdi9 = v7;
            rsi5 = reinterpret_cast<int32_t*>(0x6e2);
            fun_6e9();
            ++r13_12;
        } while (r13_12 != 0x3e8);
        ++rbp6;
    } while (rbp6 != 0x3e8);
    fun_71e(v7, 0x708, 0x70f);
    fun_737(0x725, 22, 1, v7);
    fun_61a(rbx14, 22, 1, v7);
    fun_622(r14_15, 22, 1, v7);
    fun_62a(r15_16, 22, 1, v7);
    fun_632(r12_17, 22, 1, v7);
    goto v18;
}

void fun_622(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int64_t r15_5;
    int64_t r12_6;
    int64_t v7;

    fun_62a(r15_5, rsi, rdx, rcx);
    fun_632(r12_6, rsi, rdx, rcx);
    goto v7;
}

void fun_737(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int64_t rbx5;
    int64_t r14_6;
    int64_t r15_7;
    int64_t r12_8;
    int64_t v9;

    fun_61a(rbx5, rsi, rdx, rcx);
    fun_622(r14_6, rsi, rdx, rcx);
    fun_62a(r15_7, rsi, rdx, rcx);
    fun_632(r12_8, rsi, rdx, rcx);
    goto v9;
}

void fun_685() {
    int64_t v1;
    int64_t rbp2;
    int64_t r13_3;
    int64_t rax4;
    int32_t* rdi5;
    int32_t* rsi6;
    int32_t* v7;
    int32_t* v8;
    int32_t* v9;
    int64_t rbx10;
    int64_t r14_11;
    int64_t r15_12;
    int64_t r12_13;
    int64_t v14;

    do {
        v1 = rbp2 * 0x3e8;
        *reinterpret_cast<int32_t*>(&r13_3) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_3) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rax4 = v1;
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>((*reinterpret_cast<int32_t*>(&rax4) + *reinterpret_cast<int32_t*>(&r13_3)) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi5) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi5) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi6 = v7;
                fun_6c6();
            }
            *rdi5 = *rsi6;
            rdi5 = v8;
            rsi6 = reinterpret_cast<int32_t*>(0x6e2);
            fun_6e9();
            ++r13_3;
        } while (r13_3 != 0x3e8);
        ++rbp2;
    } while (rbp2 != 0x3e8);
    fun_71e(v9, 0x708, 0x70f);
    fun_737(0x725, 22, 1, v9);
    fun_61a(rbx10, 22, 1, v9);
    fun_622(r14_11, 22, 1, v9);
    fun_62a(r15_12, 22, 1, v9);
    fun_632(r12_13, 22, 1, v9);
    goto v14;
}

void fun_62a(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int64_t r12_5;
    int64_t v6;

    fun_632(r12_5, rsi, rdx, rcx);
    goto v6;
}

void fun_632(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int64_t v5;

    goto v5;
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
    int32_t f1;
};

int64_t* g64a = reinterpret_cast<int64_t*>(0x3d8d48288b4c);

void fun_ac(struct s0* rdi) {
    signed char* rax2;
    signed char* rax3;
    signed char al4;
    signed char* rax5;
    signed char* rax6;
    signed char al7;
    struct s1* rsi8;
    int64_t rcx9;
    int64_t rax10;
    int32_t eax11;
    struct s2* rdi12;
    struct s3* rsi13;
    struct s4* rdi14;
    struct s5* rsi15;
    struct s6* rdi16;
    struct s7* rsi17;
    struct s8* rdi18;
    struct s9* rsi19;
    struct s10* rdi20;
    struct s11* rsi21;
    struct s12* rdi22;
    struct s13* rsi23;
    struct s14* rdi24;
    struct s15* rsi25;
    struct s16* rdi26;
    int32_t* rdi27;
    int32_t* rsi28;
    int64_t rdx29;
    int64_t r11_30;
    int64_t* r14_31;
    int64_t* r15_32;
    int32_t* rsi33;
    int32_t* rsi34;
    int64_t r15_35;
    int64_t r12_36;
    int64_t r10_37;
    int64_t r12_38;
    int64_t r15_39;
    int32_t* rdi40;
    int32_t* rsi41;
    int64_t r10_42;
    int32_t* rdi43;
    int32_t* rsi44;
    int32_t* rdi45;
    int32_t* rsi46;
    int32_t* rdi47;
    int32_t* rsi48;
    int32_t* rdi49;
    int32_t* rsi50;
    int32_t* rdi51;
    int32_t* rsi52;
    int32_t* rdi53;
    int32_t* rsi54;
    int32_t* rdi55;
    int32_t* rsi56;
    int32_t* rdi57;
    int32_t* rsi58;
    int32_t* rdi59;
    int32_t* rsi60;
    int32_t* rdi61;
    int32_t* rsi62;
    int64_t r14_63;
    int64_t r9_64;
    int32_t* rdi65;
    int32_t* rsi66;
    int64_t r10_67;
    int64_t rdx68;
    struct s17* rsi69;
    int64_t r10_70;
    struct s18* rdi71;
    int64_t* rbx72;
    int64_t* r15_73;
    struct s19* rdi74;
    struct s20* rsi75;
    struct s21* rsi76;
    int64_t r15_77;
    int64_t r12_78;
    int64_t r9_79;
    int64_t r12_80;
    int64_t r15_81;
    int32_t* rdi82;
    struct s21* rsi83;
    int64_t r9_84;
    int32_t* rdi85;
    struct s21* rsi86;
    int32_t* rdi87;
    struct s21* rsi88;
    int32_t* rdi89;
    struct s21* rsi90;
    int32_t* rdi91;
    struct s21* rsi92;
    int32_t* rdi93;
    struct s21* rsi94;
    int32_t* rdi95;
    struct s21* rsi96;
    int32_t* rdi97;
    struct s21* rsi98;
    int32_t* rdi99;
    struct s21* rsi100;
    int32_t* rdi101;
    struct s21* rsi102;
    int32_t* rdi103;
    struct s21* rsi104;
    void* rbx105;
    int64_t r8_106;
    int32_t* rdi107;
    struct s21* rsi108;
    int64_t r9_109;
    int32_t v110;
    signed char** v111;
    int64_t* rax112;
    int64_t rcx113;

    *rax2 = reinterpret_cast<signed char>(*rax3 + al4);
    *rax5 = reinterpret_cast<signed char>(*rax6 + al7);
    do {
        __asm__("movdqa xmm6, xmm4");
        __asm__("psubq xmm6, xmm5");
        __asm__("pshufd xmm7, xmm6, 0xe8");
        __asm__("cvtdq2pd xmm7, xmm7");
        __asm__("divpd xmm7, xmm1");
        __asm__("movupd [rdx+rcx*8], xmm7");
        __asm__("psubq xmm6, xmm2");
        __asm__("pshufd xmm6, xmm6, 0xe8");
        __asm__("cvtdq2pd xmm6, xmm6");
        __asm__("divpd xmm6, xmm1");
        rsi8 = reinterpret_cast<struct s1*>(reinterpret_cast<uint64_t>(rcx9 * 8) | 16);
        __asm__("movupd [rsi+rdx], xmm6");
        rcx9 = rcx9 + 4;
        __asm__("paddq xmm5, xmm3");
    } while (rcx9 != 0x3e8);
    if (rax10 + 1 == 0x3e8) {
        eax11 = 1;
        rdi->f0 = rsi8->f0;
        rdi12 = reinterpret_cast<struct s2*>(&rdi->f4);
        rsi13 = reinterpret_cast<struct s3*>(&rsi8->f4);
        rdi12->f0 = rsi13->f0;
        rdi14 = reinterpret_cast<struct s4*>(&rdi12->f4);
        rsi15 = reinterpret_cast<struct s5*>(&rsi13->f4);
        rdi14->f0 = rsi15->f0;
        rdi16 = reinterpret_cast<struct s6*>(&rdi14->f4);
        rsi17 = reinterpret_cast<struct s7*>(&rsi15->f4);
        rdi16->f0 = rsi17->f0;
        rdi18 = reinterpret_cast<struct s8*>(&rdi16->f4);
        rsi19 = reinterpret_cast<struct s9*>(&rsi17->f4);
        rdi18->f0 = rsi19->f0;
        rdi20 = reinterpret_cast<struct s10*>(&rdi18->f4);
        rsi21 = reinterpret_cast<struct s11*>(&rsi19->f4);
        rdi20->f0 = rsi21->f0;
        rdi22 = reinterpret_cast<struct s12*>(&rdi20->f4);
        rsi23 = reinterpret_cast<struct s13*>(&rsi21->f4);
        rdi22->f0 = rsi23->f0;
        rdi24 = reinterpret_cast<struct s14*>(&rdi22->f4);
        rsi25 = reinterpret_cast<struct s15*>(&rsi23->f4);
        rdi24->f0 = rsi25->f0;
        rdi26 = reinterpret_cast<struct s16*>(&rdi24->f4);
        rdi26->f0 = rsi25->f4;
        rdi27 = &rdi26->f4;
        do {
            *reinterpret_cast<int32_t*>(&rsi28) = 1;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi28) + 4) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(&rdx29) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx29) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                r11_30 = rdx29 * 0x1f40;
                r14_31[static_cast<int64_t>(rsi28)] = 0x3ff0000000000000;
                r15_32[reinterpret_cast<int64_t>(rsi28) * 0x3e8] = reinterpret_cast<int64_t>(fputc);
                *rdi27 = *rsi28;
                rsi33 = rsi28 + 1;
                rdi27[1] = *rsi33;
                rsi34 = rsi33 + 1;
                rdi27 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsi34) + 1);
                if (reinterpret_cast<uint64_t>(r15_35 + r11_30 + 0x1f40) >= reinterpret_cast<uint64_t>(r12_36 + r11_30 + 0x3e78) || (*reinterpret_cast<int32_t*>(&r10_37) = 1, *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_37) + 4) = reinterpret_cast<int32_t>(fputc), reinterpret_cast<uint64_t>(r12_38 + r11_30 + 0x1f40) >= reinterpret_cast<uint64_t>(r15_39 + r11_30 + 0x3e78))) {
                    *rdi27 = *rsi34;
                    rdi40 = rdi27 + 1;
                    rsi41 = rsi34 + 1;
                    *rdi40 = *rsi41;
                    rdi27 = rdi40 + 1;
                    rsi34 = rsi41 + 1;
                    *reinterpret_cast<int32_t*>(&r10_42) = 1;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_42) + 4) = reinterpret_cast<int32_t>(fputc);
                    do {
                        __asm__("mulsd xmm10, xmm0");
                        __asm__("addsd xmm10, xmm1");
                        __asm__("movapd xmm11, xmm2");
                        __asm__("divsd xmm11, xmm10");
                        *rdi27 = *rsi34;
                        rdi43 = rdi27 + 1;
                        rsi44 = rsi34 + 1;
                        *rdi43 = *rsi44;
                        rdi45 = rdi43 + 1;
                        rsi46 = rsi44 + 1;
                        __asm__("mulsd xmm12, xmm3");
                        *rdi45 = *rsi46;
                        rdi47 = rdi45 + 1;
                        rsi48 = rsi46 + 1;
                        __asm__("mulsd xmm13, xmm4");
                        __asm__("addsd xmm13, xmm12");
                        *rdi47 = *rsi48;
                        rdi49 = rdi47 + 1;
                        rsi50 = rsi48 + 1;
                        __asm__("mulsd xmm12, xmm4");
                        __asm__("addsd xmm12, xmm13");
                        __asm__("mulsd xmm9, xmm2");
                        __asm__("addsd xmm9, xmm12");
                        __asm__("divsd xmm9, xmm10");
                        *rdi49 = *rsi50;
                        rdi27 = rdi49 + 1;
                        rsi34 = rsi50 + 1;
                        ++r10_42;
                        __asm__("movapd xmm10, xmm11");
                    } while (r10_42 != 0x3e7);
                } else {
                    do {
                        *rdi27 = *rsi34;
                        rdi51 = rdi27 + 1;
                        rsi52 = rsi34 + 1;
                        __asm__("mulsd xmm9, xmm0");
                        __asm__("addsd xmm9, xmm1");
                        __asm__("movapd xmm10, xmm2");
                        __asm__("divsd xmm10, xmm9");
                        *rdi51 = *rsi52;
                        rdi53 = rdi51 + 1;
                        rsi54 = rsi52 + 1;
                        *rdi53 = *rsi54;
                        rdi55 = rdi53 + 1;
                        rsi56 = rsi54 + 1;
                        __asm__("mulsd xmm10, xmm3");
                        *rdi55 = *rsi56;
                        rdi57 = rdi55 + 1;
                        rsi58 = rsi56 + 1;
                        __asm__("mulsd xmm11, xmm4");
                        __asm__("addsd xmm11, xmm10");
                        *rdi57 = *rsi58;
                        rdi59 = rdi57 + 1;
                        rsi60 = rsi58 + 1;
                        __asm__("mulsd xmm10, xmm4");
                        __asm__("addsd xmm10, xmm11");
                        *rdi59 = *rsi60;
                        rdi61 = rdi59 + 1;
                        rsi62 = rsi60 + 1;
                        __asm__("mulsd xmm11, xmm2");
                        __asm__("addsd xmm11, xmm10");
                        __asm__("divsd xmm11, xmm9");
                        *rdi61 = *rsi62;
                        rdi27 = rdi61 + 1;
                        rsi34 = rsi62 + 1;
                        ++r10_37;
                    } while (r10_37 != 0x3e7);
                }
                *reinterpret_cast<int64_t*>(r14_63 + reinterpret_cast<int64_t>(rsi34) * 8 + 0x79f2c0) = 0x3ff0000000000000;
                *reinterpret_cast<int32_t*>(&r9_64) = 0x3e6;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_64) + 4) = reinterpret_cast<int32_t>(fputc);
                __asm__("movapd xmm9, xmm5");
                do {
                    __asm__("mulsd xmm9, [r10+r9*8]");
                    __asm__("addsd xmm9, [r11+r9*8]");
                    *rdi27 = *rsi34;
                    rdi65 = rdi27 + 1;
                    rsi66 = rsi34 + 1;
                    __asm__("mulsd xmm9, [r10+r9*8-0x8]");
                    __asm__("addsd xmm9, [r11+r9*8-0x8]");
                    r10_67 = r9_64 - 1;
                    *rdi65 = *rsi66;
                    rdi27 = rdi65 + 1;
                    rsi34 = rsi66 + 1;
                    r9_64 = r9_64 - 2;
                } while (r10_67 != 1);
                ++rdx29;
                rsi28 = rdi27;
            } while (!reinterpret_cast<int1_t>(rdi27 == 0x3e7));
            *reinterpret_cast<int32_t*>(&rdx68) = 1;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx68) + 4) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(&rsi69) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi69) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                r10_70 = reinterpret_cast<int64_t>(rsi69) * 0x1f40;
                rdi71 = reinterpret_cast<struct s18*>(rdx68 * 0x1f40);
                *reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rbx72) + reinterpret_cast<int64_t>(rdi71)) = 0x3ff0000000000000;
                *reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(r15_73) + reinterpret_cast<int64_t>(rdi71)) = reinterpret_cast<int64_t>(fputc);
                rdi71->f0 = rsi69->f0;
                rdi74 = reinterpret_cast<struct s19*>(&rdi71->f4);
                rsi75 = reinterpret_cast<struct s20*>(&rsi69->f4);
                rdi74->f0 = rsi75->f0;
                rdi27 = &rdi74->f4;
                rsi76 = reinterpret_cast<struct s21*>(&rsi75->f4);
                ++rdx68;
                if (reinterpret_cast<uint64_t>(r15_77 + r10_70 + 0x1f40) >= reinterpret_cast<uint64_t>(r12_78 + r10_70 + 0x3e78) || (*reinterpret_cast<int32_t*>(&r9_79) = 1, *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_79) + 4) = reinterpret_cast<int32_t>(fputc), reinterpret_cast<uint64_t>(r12_80 + r10_70 + 0x1f40) >= reinterpret_cast<uint64_t>(r15_81 + r10_70 + 0x3e78))) {
                    *rdi27 = rsi76->f0;
                    rdi82 = rdi27 + 1;
                    rsi83 = reinterpret_cast<struct s21*>(&rsi76->f1);
                    *rdi82 = rsi83->f0;
                    rdi27 = rdi82 + 1;
                    rsi76 = reinterpret_cast<struct s21*>(&rsi83->f1);
                    *reinterpret_cast<int32_t*>(&r9_84) = 1;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_84) + 4) = reinterpret_cast<int32_t>(fputc);
                    do {
                        __asm__("mulsd xmm10, xmm6");
                        __asm__("addsd xmm10, xmm7");
                        __asm__("movapd xmm11, xmm4");
                        __asm__("divsd xmm11, xmm10");
                        *rdi27 = rsi76->f0;
                        rdi85 = rdi27 + 1;
                        rsi86 = reinterpret_cast<struct s21*>(&rsi76->f1);
                        *rdi85 = rsi86->f0;
                        rdi87 = rdi85 + 1;
                        rsi88 = reinterpret_cast<struct s21*>(&rsi86->f1);
                        __asm__("mulsd xmm12, xmm8");
                        *rdi87 = rsi88->f0;
                        rdi89 = rdi87 + 1;
                        rsi90 = reinterpret_cast<struct s21*>(&rsi88->f1);
                        __asm__("mulsd xmm13, xmm2");
                        __asm__("addsd xmm13, xmm12");
                        *rdi89 = rsi90->f0;
                        rdi91 = rdi89 + 1;
                        rsi92 = reinterpret_cast<struct s21*>(&rsi90->f1);
                        __asm__("mulsd xmm12, xmm2");
                        __asm__("addsd xmm12, xmm13");
                        __asm__("mulsd xmm9, xmm4");
                        __asm__("addsd xmm9, xmm12");
                        __asm__("divsd xmm9, xmm10");
                        *rdi91 = rsi92->f0;
                        rdi27 = rdi91 + 1;
                        rsi76 = reinterpret_cast<struct s21*>(&rsi92->f1);
                        ++r9_84;
                        __asm__("movapd xmm10, xmm11");
                    } while (r9_84 != 0x3e7);
                } else {
                    do {
                        *rdi27 = rsi76->f0;
                        rdi93 = rdi27 + 1;
                        rsi94 = reinterpret_cast<struct s21*>(&rsi76->f1);
                        __asm__("mulsd xmm9, xmm6");
                        __asm__("addsd xmm9, xmm7");
                        __asm__("movapd xmm10, xmm4");
                        __asm__("divsd xmm10, xmm9");
                        *rdi93 = rsi94->f0;
                        rdi95 = rdi93 + 1;
                        rsi96 = reinterpret_cast<struct s21*>(&rsi94->f1);
                        *rdi95 = rsi96->f0;
                        rdi97 = rdi95 + 1;
                        rsi98 = reinterpret_cast<struct s21*>(&rsi96->f1);
                        __asm__("mulsd xmm10, xmm8");
                        *rdi97 = rsi98->f0;
                        rdi99 = rdi97 + 1;
                        rsi100 = reinterpret_cast<struct s21*>(&rsi98->f1);
                        __asm__("mulsd xmm11, xmm2");
                        __asm__("addsd xmm11, xmm10");
                        *rdi99 = rsi100->f0;
                        rdi101 = rdi99 + 1;
                        rsi102 = reinterpret_cast<struct s21*>(&rsi100->f1);
                        __asm__("mulsd xmm10, xmm2");
                        __asm__("addsd xmm10, xmm11");
                        *rdi101 = rsi102->f0;
                        rdi103 = rdi101 + 1;
                        rsi104 = reinterpret_cast<struct s21*>(&rsi102->f1);
                        __asm__("mulsd xmm11, xmm4");
                        __asm__("addsd xmm11, xmm10");
                        __asm__("divsd xmm11, xmm9");
                        *rdi103 = rsi104->f0;
                        rdi27 = rdi103 + 1;
                        rsi76 = reinterpret_cast<struct s21*>(&rsi104->f1);
                        ++r9_79;
                    } while (r9_79 != 0x3e7);
                }
                *reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rbx105) + reinterpret_cast<int64_t>(rdi27) + 0x1f38) = 0x3ff0000000000000;
                *reinterpret_cast<int32_t*>(&r8_106) = 0x3e6;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_106) + 4) = reinterpret_cast<int32_t>(fputc);
                __asm__("movapd xmm9, xmm5");
                do {
                    __asm__("mulsd xmm9, [r9+r8*8]");
                    __asm__("addsd xmm9, [r10+r8*8]");
                    *rdi27 = rsi76->f0;
                    rdi107 = rdi27 + 1;
                    rsi108 = reinterpret_cast<struct s21*>(&rsi76->f1);
                    __asm__("mulsd xmm9, [r9+r8*8-0x8]");
                    __asm__("addsd xmm9, [r10+r8*8-0x8]");
                    r9_109 = r8_106 - 1;
                    *rdi107 = rsi108->f0;
                    rdi27 = rdi107 + 1;
                    rsi76 = reinterpret_cast<struct s21*>(&rsi108->f1);
                    r8_106 = r8_106 - 2;
                } while (r9_109 != 1);
                rsi69 = reinterpret_cast<struct s17*>(reinterpret_cast<int64_t>(rsi76) + 1);
            } while (rdx68 != 0x3e7);
            ++eax11;
        } while (eax11 != 0x1f5);
        if (v110 < 43) 
            goto 0x612;
        if (**v111 != fputc) 
            goto "???";
        rax112 = g64a;
        rcx113 = *rax112;
        fun_666(0x654, 22, 1, rcx113);
    }
}

