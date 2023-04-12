
void fun_593(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx);

void fun_59b(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx);

void fun_5a3(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx);

void fun_58b(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int64_t r14_5;
    int64_t r15_6;
    int64_t r12_7;
    int64_t v8;

    fun_593(r14_5, rsi, rdx, rcx);
    fun_59b(r15_6, rsi, rdx, rcx);
    fun_5a3(r12_7, rsi, rdx, rcx);
    goto v8;
}

void fun_659();

void fputc(int32_t edi, int64_t rsi);

void fun_68e(int32_t* rdi, int64_t rsi, int64_t rdx);

void fun_6a7(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx);

void fun_636() {
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
        rsi2 = reinterpret_cast<int32_t*>(0x652);
        fun_659();
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
        fun_636();
    }
    fun_68e(v9, 0x678, 0x67f);
    fun_6a7(0x695, 22, 1, v9);
    fun_58b(rbx10, 22, 1, v9);
    fun_593(r14_11, 22, 1, v9);
    fun_59b(r15_12, 22, 1, v9);
    fun_5a3(r12_13, 22, 1, v9);
    goto v14;
}

void fun_659() {
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
            fun_636();
        }
        *rdi5 = *rsi6;
        rdi5 = v8;
        rsi6 = reinterpret_cast<int32_t*>(0x652);
        fun_659();
    }
    fun_68e(v9, 0x678, 0x67f);
    fun_6a7(0x695, 22, 1, v9);
    fun_58b(rbx10, 22, 1, v9);
    fun_593(r14_11, 22, 1, v9);
    fun_59b(r15_12, 22, 1, v9);
    fun_5a3(r12_13, 22, 1, v9);
    goto v14;
}

void fun_68e(int32_t* rdi, int64_t rsi, int64_t rdx) {
    int32_t* r13_4;
    int64_t rbx5;
    int64_t r14_6;
    int64_t r15_7;
    int64_t r12_8;
    int64_t v9;

    fun_6a7(0x695, 22, 1, r13_4);
    fun_58b(rbx5, 22, 1, r13_4);
    fun_593(r14_6, 22, 1, r13_4);
    fun_59b(r15_7, 22, 1, r13_4);
    fun_5a3(r12_8, 22, 1, r13_4);
    goto v9;
}

void fun_5f6();

void fun_5d7(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
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

    rsi5 = reinterpret_cast<int32_t*>(0x5de);
    *reinterpret_cast<int32_t*>(&rbp6) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp6) + 4) = reinterpret_cast<int32_t>(fputc);
    v7 = r13_8;
    rdi9 = r13_10;
    fun_5f6();
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
                fun_636();
            }
            *rdi9 = *rsi5;
            rdi9 = v7;
            rsi5 = reinterpret_cast<int32_t*>(0x652);
            fun_659();
            ++r13_12;
        } while (r13_12 != 0x3e8);
        ++rbp6;
    } while (rbp6 != 0x3e8);
    fun_68e(v7, 0x678, 0x67f);
    fun_6a7(0x695, 22, 1, v7);
    fun_58b(rbx14, 22, 1, v7);
    fun_593(r14_15, 22, 1, v7);
    fun_59b(r15_16, 22, 1, v7);
    fun_5a3(r12_17, 22, 1, v7);
    goto v18;
}

void fun_593(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int64_t r15_5;
    int64_t r12_6;
    int64_t v7;

    fun_59b(r15_5, rsi, rdx, rcx);
    fun_5a3(r12_6, rsi, rdx, rcx);
    goto v7;
}

void fun_6a7(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int64_t rbx5;
    int64_t r14_6;
    int64_t r15_7;
    int64_t r12_8;
    int64_t v9;

    fun_58b(rbx5, rsi, rdx, rcx);
    fun_593(r14_6, rsi, rdx, rcx);
    fun_59b(r15_7, rsi, rdx, rcx);
    fun_5a3(r12_8, rsi, rdx, rcx);
    goto v9;
}

void fun_5f6() {
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
                fun_636();
            }
            *rdi5 = *rsi6;
            rdi5 = v8;
            rsi6 = reinterpret_cast<int32_t*>(0x652);
            fun_659();
            ++r13_3;
        } while (r13_3 != 0x3e8);
        ++rbp2;
    } while (rbp2 != 0x3e8);
    fun_68e(v9, 0x678, 0x67f);
    fun_6a7(0x695, 22, 1, v9);
    fun_58b(rbx10, 22, 1, v9);
    fun_593(r14_11, 22, 1, v9);
    fun_59b(r15_12, 22, 1, v9);
    fun_5a3(r12_13, 22, 1, v9);
    goto v14;
}

void fun_59b(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int64_t r12_5;
    int64_t v6;

    fun_5a3(r12_5, rsi, rdx, rcx);
    goto v6;
}

void fun_5a3(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
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
    int32_t f1;
};

int64_t* g5bb = reinterpret_cast<int64_t*>(0x3d8d48288b4c);

void fun_ac(struct s0* rdi, struct s1* rsi) {
    int64_t rbp3;
    int64_t rbp4;
    signed char dh5;
    int32_t eax6;
    struct s2* rdi7;
    struct s3* rsi8;
    struct s4* rdi9;
    struct s5* rsi10;
    struct s6* rdi11;
    struct s7* rsi12;
    struct s8* rdi13;
    struct s9* rsi14;
    struct s10* rdi15;
    struct s11* rsi16;
    struct s12* rdi17;
    struct s13* rsi18;
    struct s14* rdi19;
    int32_t* rdi20;
    int32_t* rsi21;
    int64_t rdx22;
    int64_t r11_23;
    int64_t* r14_24;
    int64_t* r15_25;
    int32_t* rsi26;
    int32_t* rsi27;
    int64_t r15_28;
    int64_t r12_29;
    int64_t r10_30;
    int64_t r12_31;
    int64_t r15_32;
    int32_t* rdi33;
    int32_t* rsi34;
    int64_t r10_35;
    int32_t* rdi36;
    int32_t* rsi37;
    int32_t* rdi38;
    int32_t* rsi39;
    int32_t* rdi40;
    int32_t* rsi41;
    int32_t* rdi42;
    int32_t* rsi43;
    int32_t* rdi44;
    int32_t* rsi45;
    int32_t* rdi46;
    int32_t* rsi47;
    int32_t* rdi48;
    int32_t* rsi49;
    int32_t* rdi50;
    int32_t* rsi51;
    int32_t* rdi52;
    int32_t* rsi53;
    int32_t* rdi54;
    int32_t* rsi55;
    int64_t r14_56;
    uint64_t r9_57;
    int32_t* rdi58;
    int32_t* rsi59;
    int1_t below_or_equal60;
    int64_t rdx61;
    struct s15* rsi62;
    int64_t r10_63;
    struct s16* rdi64;
    int64_t* rbx65;
    int64_t* r15_66;
    struct s17* rdi67;
    struct s18* rsi68;
    struct s19* rsi69;
    int64_t r15_70;
    int64_t r12_71;
    int64_t r9_72;
    int64_t r12_73;
    int64_t r15_74;
    int32_t* rdi75;
    struct s19* rsi76;
    int64_t r9_77;
    int32_t* rdi78;
    struct s19* rsi79;
    int32_t* rdi80;
    struct s19* rsi81;
    int32_t* rdi82;
    struct s19* rsi83;
    int32_t* rdi84;
    struct s19* rsi85;
    int32_t* rdi86;
    struct s19* rsi87;
    int32_t* rdi88;
    struct s19* rsi89;
    int32_t* rdi90;
    struct s19* rsi91;
    int32_t* rdi92;
    struct s19* rsi93;
    int32_t* rdi94;
    struct s19* rsi95;
    int32_t* rdi96;
    struct s19* rsi97;
    void* rbx98;
    uint64_t r8_99;
    int32_t* rdi100;
    struct s19* rsi101;
    int1_t below_or_equal102;
    int32_t v103;
    signed char** v104;
    int64_t* rax105;
    int64_t rcx106;

    __asm__("ror byte [rax+0x3d], 0xe8");
    *reinterpret_cast<signed char*>(rbp3 - 69) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(rbp4 - 69) + dh5);
    eax6 = 1;
    rdi->f0 = rsi->f0;
    rdi7 = reinterpret_cast<struct s2*>(&rdi->f4);
    rsi8 = reinterpret_cast<struct s3*>(&rsi->f4);
    rdi7->f0 = rsi8->f0;
    rdi9 = reinterpret_cast<struct s4*>(&rdi7->f4);
    rsi10 = reinterpret_cast<struct s5*>(&rsi8->f4);
    rdi9->f0 = rsi10->f0;
    rdi11 = reinterpret_cast<struct s6*>(&rdi9->f4);
    rsi12 = reinterpret_cast<struct s7*>(&rsi10->f4);
    rdi11->f0 = rsi12->f0;
    rdi13 = reinterpret_cast<struct s8*>(&rdi11->f4);
    rsi14 = reinterpret_cast<struct s9*>(&rsi12->f4);
    rdi13->f0 = rsi14->f0;
    rdi15 = reinterpret_cast<struct s10*>(&rdi13->f4);
    rsi16 = reinterpret_cast<struct s11*>(&rsi14->f4);
    rdi15->f0 = rsi16->f0;
    rdi17 = reinterpret_cast<struct s12*>(&rdi15->f4);
    rsi18 = reinterpret_cast<struct s13*>(&rsi16->f4);
    rdi17->f0 = rsi18->f0;
    rdi19 = reinterpret_cast<struct s14*>(&rdi17->f4);
    rdi19->f0 = rsi18->f4;
    rdi20 = &rdi19->f4;
    do {
        *reinterpret_cast<int32_t*>(&rsi21) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi21) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx22) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx22) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            r11_23 = rdx22 * 0x1f40;
            r14_24[static_cast<int64_t>(rsi21)] = 0x3ff0000000000000;
            r15_25[reinterpret_cast<int64_t>(rsi21) * 0x3e8] = reinterpret_cast<int64_t>(fputc);
            *rdi20 = *rsi21;
            rsi26 = rsi21 + 1;
            rdi20[1] = *rsi26;
            rsi27 = rsi26 + 1;
            rdi20 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsi27) + 1);
            if (reinterpret_cast<uint64_t>(r15_28 + r11_23 + 0x1f40) >= reinterpret_cast<uint64_t>(r12_29 + r11_23 + 0x3e78) || (*reinterpret_cast<int32_t*>(&r10_30) = 1, *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_30) + 4) = reinterpret_cast<int32_t>(fputc), reinterpret_cast<uint64_t>(r12_31 + r11_23 + 0x1f40) >= reinterpret_cast<uint64_t>(r15_32 + r11_23 + 0x3e78))) {
                *rdi20 = *rsi27;
                rdi33 = rdi20 + 1;
                rsi34 = rsi27 + 1;
                *rdi33 = *rsi34;
                rdi20 = rdi33 + 1;
                rsi27 = rsi34 + 1;
                *reinterpret_cast<int32_t*>(&r10_35) = 1;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_35) + 4) = reinterpret_cast<int32_t>(fputc);
                do {
                    __asm__("mulsd xmm9, xmm0");
                    __asm__("addsd xmm9, xmm1");
                    __asm__("movapd xmm10, xmm2");
                    __asm__("divsd xmm10, xmm9");
                    *rdi20 = *rsi27;
                    rdi36 = rdi20 + 1;
                    rsi37 = rsi27 + 1;
                    *rdi36 = *rsi37;
                    rdi38 = rdi36 + 1;
                    rsi39 = rsi37 + 1;
                    __asm__("mulsd xmm11, xmm3");
                    *rdi38 = *rsi39;
                    rdi40 = rdi38 + 1;
                    rsi41 = rsi39 + 1;
                    __asm__("mulsd xmm12, xmm4");
                    __asm__("addsd xmm12, xmm11");
                    *rdi40 = *rsi41;
                    rdi42 = rdi40 + 1;
                    rsi43 = rsi41 + 1;
                    __asm__("mulsd xmm11, xmm4");
                    __asm__("addsd xmm11, xmm12");
                    __asm__("mulsd xmm8, xmm2");
                    __asm__("addsd xmm8, xmm11");
                    __asm__("divsd xmm8, xmm9");
                    *rdi42 = *rsi43;
                    rdi20 = rdi42 + 1;
                    rsi27 = rsi43 + 1;
                    ++r10_35;
                    __asm__("movapd xmm9, xmm10");
                } while (r10_35 != 0x3e7);
            } else {
                do {
                    *rdi20 = *rsi27;
                    rdi44 = rdi20 + 1;
                    rsi45 = rsi27 + 1;
                    __asm__("mulsd xmm8, xmm0");
                    __asm__("addsd xmm8, xmm1");
                    __asm__("movapd xmm9, xmm2");
                    __asm__("divsd xmm9, xmm8");
                    *rdi44 = *rsi45;
                    rdi46 = rdi44 + 1;
                    rsi47 = rsi45 + 1;
                    *rdi46 = *rsi47;
                    rdi48 = rdi46 + 1;
                    rsi49 = rsi47 + 1;
                    __asm__("mulsd xmm9, xmm3");
                    *rdi48 = *rsi49;
                    rdi50 = rdi48 + 1;
                    rsi51 = rsi49 + 1;
                    __asm__("mulsd xmm10, xmm4");
                    __asm__("addsd xmm10, xmm9");
                    *rdi50 = *rsi51;
                    rdi52 = rdi50 + 1;
                    rsi53 = rsi51 + 1;
                    __asm__("mulsd xmm9, xmm4");
                    __asm__("addsd xmm9, xmm10");
                    *rdi52 = *rsi53;
                    rdi54 = rdi52 + 1;
                    rsi55 = rsi53 + 1;
                    __asm__("mulsd xmm10, xmm2");
                    __asm__("addsd xmm10, xmm9");
                    __asm__("divsd xmm10, xmm8");
                    *rdi54 = *rsi55;
                    rdi20 = rdi54 + 1;
                    rsi27 = rsi55 + 1;
                    ++r10_30;
                } while (r10_30 != 0x3e7);
            }
            *reinterpret_cast<int64_t*>(r14_56 + reinterpret_cast<int64_t>(rsi27) * 8 + 0x79f2c0) = 0x3ff0000000000000;
            *reinterpret_cast<int32_t*>(&r9_57) = 0x3e6;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_57) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                *rdi20 = *rsi27;
                rdi58 = rdi20 + 1;
                rsi59 = rsi27 + 1;
                __asm__("mulsd xmm8, [r11+rsi*8+0x1f40]");
                __asm__("addsd xmm8, [r10+r9*8]");
                *rdi58 = *rsi59;
                rdi20 = rdi58 + 1;
                rsi27 = rsi59 + 1;
                below_or_equal60 = r9_57 <= 1;
                --r9_57;
            } while (!below_or_equal60);
            ++rdx22;
            rsi21 = rdi20;
        } while (!reinterpret_cast<int1_t>(rdi20 == 0x3e7));
        *reinterpret_cast<int32_t*>(&rdx61) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx61) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rsi62) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi62) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            r10_63 = reinterpret_cast<int64_t>(rsi62) * 0x1f40;
            rdi64 = reinterpret_cast<struct s16*>(rdx61 * 0x1f40);
            *reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rbx65) + reinterpret_cast<int64_t>(rdi64)) = 0x3ff0000000000000;
            *reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(r15_66) + reinterpret_cast<int64_t>(rdi64)) = reinterpret_cast<int64_t>(fputc);
            rdi64->f0 = rsi62->f0;
            rdi67 = reinterpret_cast<struct s17*>(&rdi64->f4);
            rsi68 = reinterpret_cast<struct s18*>(&rsi62->f4);
            rdi67->f0 = rsi68->f0;
            rdi20 = &rdi67->f4;
            rsi69 = reinterpret_cast<struct s19*>(&rsi68->f4);
            ++rdx61;
            if (reinterpret_cast<uint64_t>(r15_70 + r10_63 + 0x1f40) >= reinterpret_cast<uint64_t>(r12_71 + r10_63 + 0x3e78) || (*reinterpret_cast<int32_t*>(&r9_72) = 1, *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_72) + 4) = reinterpret_cast<int32_t>(fputc), reinterpret_cast<uint64_t>(r12_73 + r10_63 + 0x1f40) >= reinterpret_cast<uint64_t>(r15_74 + r10_63 + 0x3e78))) {
                *rdi20 = rsi69->f0;
                rdi75 = rdi20 + 1;
                rsi76 = reinterpret_cast<struct s19*>(&rsi69->f1);
                *rdi75 = rsi76->f0;
                rdi20 = rdi75 + 1;
                rsi69 = reinterpret_cast<struct s19*>(&rsi76->f1);
                *reinterpret_cast<int32_t*>(&r9_77) = 1;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_77) + 4) = reinterpret_cast<int32_t>(fputc);
                do {
                    __asm__("mulsd xmm9, xmm5");
                    __asm__("addsd xmm9, xmm6");
                    __asm__("movapd xmm10, xmm4");
                    __asm__("divsd xmm10, xmm9");
                    *rdi20 = rsi69->f0;
                    rdi78 = rdi20 + 1;
                    rsi79 = reinterpret_cast<struct s19*>(&rsi69->f1);
                    *rdi78 = rsi79->f0;
                    rdi80 = rdi78 + 1;
                    rsi81 = reinterpret_cast<struct s19*>(&rsi79->f1);
                    __asm__("mulsd xmm11, xmm7");
                    *rdi80 = rsi81->f0;
                    rdi82 = rdi80 + 1;
                    rsi83 = reinterpret_cast<struct s19*>(&rsi81->f1);
                    __asm__("mulsd xmm12, xmm2");
                    __asm__("addsd xmm12, xmm11");
                    *rdi82 = rsi83->f0;
                    rdi84 = rdi82 + 1;
                    rsi85 = reinterpret_cast<struct s19*>(&rsi83->f1);
                    __asm__("mulsd xmm11, xmm2");
                    __asm__("addsd xmm11, xmm12");
                    __asm__("mulsd xmm8, xmm4");
                    __asm__("addsd xmm8, xmm11");
                    __asm__("divsd xmm8, xmm9");
                    *rdi84 = rsi85->f0;
                    rdi20 = rdi84 + 1;
                    rsi69 = reinterpret_cast<struct s19*>(&rsi85->f1);
                    ++r9_77;
                    __asm__("movapd xmm9, xmm10");
                } while (r9_77 != 0x3e7);
            } else {
                do {
                    *rdi20 = rsi69->f0;
                    rdi86 = rdi20 + 1;
                    rsi87 = reinterpret_cast<struct s19*>(&rsi69->f1);
                    __asm__("mulsd xmm8, xmm5");
                    __asm__("addsd xmm8, xmm6");
                    __asm__("movapd xmm9, xmm4");
                    __asm__("divsd xmm9, xmm8");
                    *rdi86 = rsi87->f0;
                    rdi88 = rdi86 + 1;
                    rsi89 = reinterpret_cast<struct s19*>(&rsi87->f1);
                    *rdi88 = rsi89->f0;
                    rdi90 = rdi88 + 1;
                    rsi91 = reinterpret_cast<struct s19*>(&rsi89->f1);
                    __asm__("mulsd xmm9, xmm7");
                    *rdi90 = rsi91->f0;
                    rdi92 = rdi90 + 1;
                    rsi93 = reinterpret_cast<struct s19*>(&rsi91->f1);
                    __asm__("mulsd xmm10, xmm2");
                    __asm__("addsd xmm10, xmm9");
                    *rdi92 = rsi93->f0;
                    rdi94 = rdi92 + 1;
                    rsi95 = reinterpret_cast<struct s19*>(&rsi93->f1);
                    __asm__("mulsd xmm9, xmm2");
                    __asm__("addsd xmm9, xmm10");
                    *rdi94 = rsi95->f0;
                    rdi96 = rdi94 + 1;
                    rsi97 = reinterpret_cast<struct s19*>(&rsi95->f1);
                    __asm__("mulsd xmm10, xmm4");
                    __asm__("addsd xmm10, xmm9");
                    __asm__("divsd xmm10, xmm8");
                    *rdi96 = rsi97->f0;
                    rdi20 = rdi96 + 1;
                    rsi69 = reinterpret_cast<struct s19*>(&rsi97->f1);
                    ++r9_72;
                } while (r9_72 != 0x3e7);
            }
            *reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rbx98) + reinterpret_cast<int64_t>(rdi20) + 0x1f38) = 0x3ff0000000000000;
            *reinterpret_cast<int32_t*>(&r8_99) = 0x3e6;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_99) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                *rdi20 = rsi69->f0;
                rdi100 = rdi20 + 1;
                rsi101 = reinterpret_cast<struct s19*>(&rsi69->f1);
                __asm__("mulsd xmm8, [r9+r8*8+0x8]");
                __asm__("addsd xmm8, [r10+r8*8]");
                *rdi100 = rsi101->f0;
                rdi20 = rdi100 + 1;
                rsi69 = reinterpret_cast<struct s19*>(&rsi101->f1);
                below_or_equal102 = r8_99 <= 1;
                --r8_99;
            } while (!below_or_equal102);
            rsi62 = reinterpret_cast<struct s15*>(reinterpret_cast<int64_t>(rsi69) + 1);
        } while (rdx61 != 0x3e7);
        ++eax6;
    } while (eax6 != 0x1f5);
    if (v103 < 43) 
        goto 0x583;
    if (**v104 != fputc) 
        goto "???";
    rax105 = g5bb;
    rcx106 = *rax105;
    fun_5d7(0x5c5, 22, 1, rcx106);
}

