
void fun_111();

void free(int32_t edi);

void fun_139(int64_t rdi, int64_t rsi, int64_t rdx);

struct s0 {
    int32_t f0;
    signed char[231996] pad232000;
    int32_t f38a40;
};

int32_t g140 = 0x16be;

int32_t g16 = 0x1f0f2e66;

int32_t g144 = 0x1ba00;

int32_t g1a = 0x84;

struct s1 {
    signed char[8232] pad8232;
    int32_t f2028;
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
    signed char[8232] pad8232;
    int32_t f2028;
};

struct s15 {
    int32_t f0;
    int32_t f4;
};

struct s16 {
    signed char[1] pad1;
    int32_t f1;
};

int32_t g2028;

struct s17 {
    int32_t f0;
    int32_t f4;
};

int32_t g202c;

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
    signed char[224] pad232;
    int32_t fe8;
};

struct s24 {
    int32_t f0;
    int32_t f4;
};

void fun_f0() {
    int32_t* rdi1;
    int32_t* rsi2;
    int32_t* rbx3;
    int64_t r15_4;
    int64_t r12_5;
    int64_t rbp6;
    int32_t* rbx7;
    int64_t r13_8;
    int64_t r12_9;
    int64_t rbx10;
    struct s0* rcx11;
    struct s0* rbx12;
    int64_t v13;
    int64_t r10_14;
    int32_t* v15;
    int64_t v16;
    void* rbp17;
    int64_t r13_18;
    struct s1* rbx19;
    struct s2* rsi20;
    struct s3* rdi21;
    int64_t* r8_22;
    struct s4* rdi23;
    struct s5* rsi24;
    int32_t* rdi25;
    struct s6* rsi26;
    void* r14_27;
    int64_t r8_28;
    int64_t r9_29;
    void* r8_30;
    void* r12_31;
    void* r9_32;
    int32_t* rdi33;
    void* r12_34;
    void* r8_35;
    int32_t* rdi36;
    struct s7* rsi37;
    int32_t* rdi38;
    struct s8* rsi39;
    int32_t* rdi40;
    int32_t* rdi41;
    void* r9_42;
    struct s9* rsi43;
    void* r8_44;
    int32_t* rdi45;
    int32_t* rdi46;
    struct s10* rsi47;
    int32_t* rdi48;
    struct s11* rsi49;
    int32_t* rdi50;
    int32_t* rdi51;
    struct s12* rsi52;
    void* r9_53;
    int32_t* rdi54;
    struct s13* r10_55;
    void* r8_56;
    int32_t* rdi57;
    void* r9_58;
    int1_t less_or_equal59;
    void* r13_60;
    int64_t rbp61;
    struct s14* r12_62;
    struct s15* rsi63;
    void* r8_64;
    int32_t* rbx65;
    struct s16* r14_66;
    int64_t* r8_67;
    struct s17* rsi68;
    struct s18* rsi69;
    int32_t* rdi70;
    void* r9_71;
    void* r9_72;
    void* r10_73;
    void* r8_74;
    int32_t* rdi75;
    int32_t* rdi76;
    void* r10_77;
    int32_t* r8_78;
    int32_t* rdi79;
    struct s19* rsi80;
    int32_t* rdi81;
    int32_t* rdi82;
    int32_t* rdi83;
    int32_t* r9_84;
    struct s20* rsi85;
    int32_t* r8_86;
    int32_t* rdi87;
    int32_t* rdi88;
    struct s21* rsi89;
    int32_t* rdi90;
    int32_t* rdi91;
    int32_t* rdi92;
    struct s22* rsi93;
    int32_t* r9_94;
    int32_t* rdi95;
    struct s23* rdi96;
    struct s13* rsi97;
    struct s24* rdi98;
    int32_t* rsi99;
    void* rsi100;
    int64_t rdi101;

    while (1) {
        *rdi1 = *rsi2;
        rdi1 = rbx3;
        rsi2 = reinterpret_cast<int32_t*>(0x10a);
        fun_111();
        ++r15_4;
        if (r15_4 == r12_5) 
            break;
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r15_4 + rbp6) * 0xcccccccd + 0x19999998) > 0xccccccc) 
            continue;
        *reinterpret_cast<int32_t*>(&rdi1) = 10;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi1) + 4) = reinterpret_cast<int32_t>(free);
        rsi2 = rbx7;
        fun_f0();
    }
    if (r13_8 + 1 != r12_9) {
    }
    fun_139(rbx10, 0x128, 0x12f);
    rcx11 = rbx12;
    if (!free) 
        goto addr_17b_13;
    addr_6d3_14:
    goto v13;
    addr_17b_13:
    __asm__("cvtsi2sd xmm0, esi");
    g140 = g16;
    __asm__("movapd xmm2, xmm8");
    __asm__("divsd xmm2, xmm0");
    __asm__("cvtsi2sd xmm1, dword [rsp-0x2c]");
    __asm__("movapd xmm0, xmm8");
    __asm__("divsd xmm0, xmm1");
    __asm__("movapd xmm1, xmm0");
    __asm__("addsd xmm1, xmm0");
    __asm__("mulsd xmm2, xmm2");
    __asm__("divsd xmm1, xmm2");
    __asm__("divsd xmm0, xmm2");
    g144 = g1a;
    __asm__("movapd xmm3, xmm1");
    __asm__("mulsd xmm3, xmm2");
    __asm__("addsd xmm1, xmm8");
    __asm__("mulsd xmm2, xmm0");
    __asm__("addsd xmm0, xmm8");
    __asm__("movapd xmm4, [rip+0x0]");
    __asm__("movapd xmm5, xmm3");
    __asm__("xorpd xmm5, xmm4");
    __asm__("xorpd xmm4, xmm2");
    __asm__("movapd xmm6, xmm2");
    __asm__("addsd xmm6, xmm2");
    __asm__("addsd xmm6, xmm8");
    __asm__("movapd xmm7, xmm3");
    __asm__("addsd xmm7, xmm3");
    __asm__("addsd xmm7, xmm8");
    *reinterpret_cast<int32_t*>(&r10_14) = 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_14) + 4) = reinterpret_cast<int32_t>(free);
    v15 = &rcx11->f38a40;
    do {
        v16 = r10_14;
        if (!free) {
            *reinterpret_cast<int32_t*>(&rbp17) = 1;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp17) + 4) = reinterpret_cast<int32_t>(free);
            *reinterpret_cast<int32_t*>(&r13_18) = reinterpret_cast<int32_t>(free);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_18) + 4) = reinterpret_cast<int32_t>(free);
            do {
                rbx19 = reinterpret_cast<struct s1*>(r13_18 * 0x1f40);
                rsi20 = reinterpret_cast<struct s2*>(&rbx19->f2028);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rcx11) + reinterpret_cast<int64_t>(rbp17) * 8) = reinterpret_cast<int32_t>(0x3ff0000000000000);
                rdi21 = reinterpret_cast<struct s3*>(reinterpret_cast<int64_t>(rbp17) * 0x1f40);
                *reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(r8_22) + reinterpret_cast<int64_t>(rdi21)) = reinterpret_cast<int64_t>(free);
                rdi21->f0 = rsi20->f0;
                rdi23 = reinterpret_cast<struct s4*>(&rdi21->f4);
                rsi24 = reinterpret_cast<struct s5*>(&rsi20->f4);
                rdi23->f0 = rsi24->f0;
                rdi25 = &rdi23->f4;
                rsi26 = reinterpret_cast<struct s6*>(&rsi24->f4);
                r14_27 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rbp17) + 1);
                if (reinterpret_cast<uint64_t>(r8_28 + reinterpret_cast<int64_t>(rbx19) + 0x1f40) >= reinterpret_cast<uint64_t>(r9_29 + reinterpret_cast<int64_t>(rsi20)) || (rsi26 = reinterpret_cast<struct s6*>(reinterpret_cast<uint64_t>(rsi26) + reinterpret_cast<int64_t>(r8_30)), *reinterpret_cast<int32_t*>(&r12_31) = 1, *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_31) + 4) = reinterpret_cast<int32_t>(free), reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(r9_32) + reinterpret_cast<int64_t>(rbx19) + 0x1f40) >= reinterpret_cast<uint64_t>(rsi26))) {
                    *rdi25 = rsi26->f0;
                    rdi33 = rdi25 + 1;
                    *rdi33 = rsi26->f4;
                    rdi25 = rdi33 + 1;
                    *reinterpret_cast<int32_t*>(&r12_34) = 1;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_34) + 4) = reinterpret_cast<int32_t>(free);
                    do {
                        __asm__("mulsd xmm9, xmm3");
                        __asm__("addsd xmm9, xmm1");
                        __asm__("movapd xmm10, xmm5");
                        __asm__("divsd xmm10, xmm9");
                        *rdi25 = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(r8_35) + reinterpret_cast<int64_t>(rdi25));
                        rdi36 = rdi25 + 1;
                        rsi37 = reinterpret_cast<struct s7*>(reinterpret_cast<int64_t>(r12_34) * 0x1f40 + 1);
                        *rdi36 = rsi37->f0;
                        rdi38 = rdi36 + 1;
                        rsi39 = reinterpret_cast<struct s8*>(&rsi37->f4);
                        __asm__("mulsd xmm11, xmm6");
                        *rdi38 = rsi39->f0;
                        rdi40 = rdi38 + 1;
                        __asm__("mulsd xmm12, xmm4");
                        __asm__("addsd xmm12, xmm11");
                        *rdi40 = rsi39->f4;
                        rdi41 = rdi40 + 1;
                        __asm__("mulsd xmm11, xmm4");
                        __asm__("addsd xmm11, xmm12");
                        __asm__("mulsd xmm8, xmm5");
                        __asm__("addsd xmm8, xmm11");
                        __asm__("divsd xmm8, xmm9");
                        *rdi41 = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(r9_42) + reinterpret_cast<int64_t>(rdi41));
                        rdi25 = rdi41 + 1;
                        r12_34 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(r12_34) + 1);
                        __asm__("movapd xmm9, xmm10");
                    } while (!reinterpret_cast<int1_t>(r12_34 == 29));
                } else {
                    do {
                        rsi43 = reinterpret_cast<struct s9*>(reinterpret_cast<int64_t>(r8_44) + reinterpret_cast<int64_t>(rdi25));
                        *rdi25 = rsi43->f0;
                        rdi45 = rdi25 + 1;
                        __asm__("mulsd xmm8, xmm3");
                        __asm__("addsd xmm8, xmm1");
                        __asm__("movapd xmm9, xmm5");
                        __asm__("divsd xmm9, xmm8");
                        *rdi45 = rsi43->f4;
                        rdi46 = rdi45 + 1;
                        rsi47 = reinterpret_cast<struct s10*>(reinterpret_cast<int64_t>(r12_31) * 0x1f40 + 1);
                        *rdi46 = rsi47->f0;
                        rdi48 = rdi46 + 1;
                        rsi49 = reinterpret_cast<struct s11*>(&rsi47->f4);
                        __asm__("mulsd xmm9, xmm6");
                        *rdi48 = rsi49->f0;
                        rdi50 = rdi48 + 1;
                        __asm__("mulsd xmm10, xmm4");
                        __asm__("addsd xmm10, xmm9");
                        *rdi50 = rsi49->f4;
                        rdi51 = rdi50 + 1;
                        __asm__("mulsd xmm9, xmm4");
                        __asm__("addsd xmm9, xmm10");
                        rsi52 = reinterpret_cast<struct s12*>(reinterpret_cast<int64_t>(r9_53) + reinterpret_cast<int64_t>(rdi51));
                        *rdi51 = rsi52->f0;
                        rdi54 = rdi51 + 1;
                        __asm__("mulsd xmm10, xmm5");
                        __asm__("addsd xmm10, xmm9");
                        __asm__("divsd xmm10, xmm8");
                        *rdi54 = rsi52->f4;
                        rdi25 = rdi54 + 1;
                        r12_31 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(r12_31) + 1);
                    } while (!reinterpret_cast<int1_t>(r12_31 == 29));
                }
                v15[reinterpret_cast<int64_t>(rbp17) * 2] = reinterpret_cast<int32_t>(0x3ff0000000000000);
                r10_55 = reinterpret_cast<struct s13*>(28);
                if (!free) {
                    do {
                        *rdi25 = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(r8_56) + reinterpret_cast<int64_t>(rdi25));
                        rdi57 = rdi25 + 1;
                        __asm__("mulsd xmm8, [r11+rbp*8+0x1f40]");
                        __asm__("addsd xmm8, [rsi+r10*8]");
                        *rdi57 = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(r9_58) + reinterpret_cast<int64_t>(rdi57));
                        rdi25 = rdi57 + 1;
                        less_or_equal59 = reinterpret_cast<int64_t>(r10_55) <= 1;
                        r10_55 = reinterpret_cast<struct s13*>(reinterpret_cast<int64_t>(r10_55) - 1);
                    } while (!less_or_equal59);
                }
                ++r13_18;
                rbp17 = r14_27;
            } while (r14_27 != 29);
        }
        if (!free) {
            *reinterpret_cast<int32_t*>(&r13_60) = 1;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_60) + 4) = reinterpret_cast<int32_t>(free);
            *reinterpret_cast<int32_t*>(&rbp61) = reinterpret_cast<int32_t>(free);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp61) + 4) = reinterpret_cast<int32_t>(free);
            do {
                r12_62 = reinterpret_cast<struct s14*>(rbp61 * 0x1f40);
                rsi63 = reinterpret_cast<struct s15*>(reinterpret_cast<int64_t>(r8_64) + reinterpret_cast<int64_t>(r12_62) + 0x1f40);
                rbx65 = &r12_62->f2028;
                r14_66 = reinterpret_cast<struct s16*>(reinterpret_cast<int64_t>(r13_60) * 0x1f40);
                r14_66->f1 = reinterpret_cast<int32_t>(0x3ff0000000000000);
                *reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(r8_67) + reinterpret_cast<int64_t>(r14_66)) = reinterpret_cast<int64_t>(free);
                g2028 = rsi63->f0;
                rsi68 = reinterpret_cast<struct s17*>(&rsi63->f4);
                g202c = rsi68->f0;
                rsi69 = reinterpret_cast<struct s18*>(&rsi68->f4);
                rdi70 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(r13_60) - 1);
                r13_60 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(r13_60) + 1);
                if (reinterpret_cast<uint64_t>(rsi69) >= reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(r9_71) + reinterpret_cast<int64_t>(rbx65)) || (rsi69 = reinterpret_cast<struct s18*>(reinterpret_cast<int64_t>(r9_72) + reinterpret_cast<int64_t>(r12_62) + 0x1f40), *reinterpret_cast<int32_t*>(&r10_73) = 1, *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_73) + 4) = reinterpret_cast<int32_t>(free), reinterpret_cast<uint64_t>(rsi69) >= reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(rbx65) + reinterpret_cast<int64_t>(r8_74)))) {
                    *rdi70 = rsi69->f0;
                    rdi75 = rdi70 + 1;
                    *rdi75 = rsi69->f4;
                    rdi76 = rdi75 + 1;
                    *reinterpret_cast<int32_t*>(&r10_77) = 1;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_77) + 4) = reinterpret_cast<int32_t>(free);
                    do {
                        __asm__("mulsd xmm9, xmm2");
                        __asm__("addsd xmm9, xmm0");
                        __asm__("movapd xmm10, xmm4");
                        __asm__("divsd xmm10, xmm9");
                        *rdi76 = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(r8_78) + reinterpret_cast<int64_t>(r14_66));
                        rdi79 = rdi76 + 1;
                        rsi80 = reinterpret_cast<struct s19*>(reinterpret_cast<int64_t>(rdi79) * 0x1f40 + reinterpret_cast<int64_t>(rcx11));
                        *rdi79 = rsi80->f0;
                        rdi81 = rdi79 + 1;
                        __asm__("mulsd xmm11, xmm7");
                        *rdi81 = rsi80->f4;
                        rdi82 = rdi81 + 1;
                        __asm__("mulsd xmm12, xmm5");
                        __asm__("addsd xmm12, xmm11");
                        *rdi82 = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(r13_60) * 0x1f40 + reinterpret_cast<int64_t>(rcx11));
                        rdi83 = rdi82 + 1;
                        __asm__("mulsd xmm11, xmm5");
                        __asm__("addsd xmm11, xmm12");
                        __asm__("mulsd xmm8, xmm4");
                        __asm__("addsd xmm8, xmm11");
                        __asm__("divsd xmm8, xmm9");
                        *rdi83 = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(r9_84) + reinterpret_cast<int64_t>(r14_66));
                        rdi76 = rdi83 + 1;
                        r10_77 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(r10_77) + 1);
                        __asm__("movapd xmm9, xmm10");
                    } while (!reinterpret_cast<int1_t>(r10_77 == 29));
                } else {
                    do {
                        rsi85 = reinterpret_cast<struct s20*>(reinterpret_cast<int64_t>(r8_86) + reinterpret_cast<int64_t>(r14_66));
                        *rdi70 = rsi85->f0;
                        rdi87 = rdi70 + 1;
                        __asm__("mulsd xmm8, xmm2");
                        __asm__("addsd xmm8, xmm0");
                        __asm__("movapd xmm9, xmm4");
                        __asm__("divsd xmm9, xmm8");
                        *rdi87 = rsi85->f4;
                        rdi88 = rdi87 + 1;
                        rsi89 = reinterpret_cast<struct s21*>(reinterpret_cast<int64_t>(rdi88) * 0x1f40 + reinterpret_cast<int64_t>(rcx11));
                        *rdi88 = rsi89->f0;
                        rdi90 = rdi88 + 1;
                        __asm__("mulsd xmm9, xmm7");
                        *rdi90 = rsi89->f4;
                        rdi91 = rdi90 + 1;
                        __asm__("mulsd xmm10, xmm5");
                        __asm__("addsd xmm10, xmm9");
                        *rdi91 = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(r13_60) * 0x1f40 + reinterpret_cast<int64_t>(rcx11));
                        rdi92 = rdi91 + 1;
                        __asm__("mulsd xmm9, xmm5");
                        __asm__("addsd xmm9, xmm10");
                        rsi93 = reinterpret_cast<struct s22*>(reinterpret_cast<int64_t>(r9_94) + reinterpret_cast<int64_t>(r14_66));
                        *rdi92 = rsi93->f0;
                        rdi95 = rdi92 + 1;
                        __asm__("mulsd xmm10, xmm4");
                        __asm__("addsd xmm10, xmm9");
                        __asm__("divsd xmm10, xmm8");
                        *rdi95 = rsi93->f4;
                        rdi70 = rdi95 + 1;
                        r10_73 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(r10_73) + 1);
                    } while (!reinterpret_cast<int1_t>(r10_73 == 29));
                }
                rdi96 = reinterpret_cast<struct s23*>(&r14_66->f1);
                rdi96->fe8 = reinterpret_cast<int32_t>(0x3ff0000000000000);
                rsi97 = reinterpret_cast<struct s13*>(28);
                if (!free) {
                    do {
                        rdi96->f0 = rsi97->f0;
                        rdi98 = reinterpret_cast<struct s24*>(&rdi96->f4);
                        rsi99 = &rsi97->f4;
                        __asm__("mulsd xmm8, [rdi+rsi*8+0x8]");
                        __asm__("addsd xmm8, [r10+rsi*8]");
                        rdi98->f0 = *rsi99;
                        rdi96 = reinterpret_cast<struct s23*>(&rdi98->f4);
                        rsi100 = reinterpret_cast<void*>(rsi99 + 1);
                        rsi97 = reinterpret_cast<struct s13*>(reinterpret_cast<int64_t>(rsi100) - 1);
                    } while (reinterpret_cast<int64_t>(rsi100) > 1);
                }
                ++rbp61;
            } while (r13_60 != 29);
        }
        rdi101 = v16;
        *reinterpret_cast<int32_t*>(&r10_14) = static_cast<int32_t>(rdi101 + 1);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_14) + 4) = reinterpret_cast<int32_t>(free);
    } while (*reinterpret_cast<int32_t*>(&rdi101) != 0x140);
    goto addr_6d3_14;
}

struct s25 {
    int32_t f0;
    signed char[231996] pad232000;
    int32_t f38a40;
};

struct s26 {
    signed char[8232] pad8232;
    int32_t f2028;
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

struct s32 {
    int32_t f0;
    int32_t f4;
};

struct s33 {
    int32_t f0;
    int32_t f4;
};

struct s34 {
    int32_t f0;
    int32_t f4;
};

struct s35 {
    int32_t f0;
    int32_t f4;
};

struct s36 {
    int32_t f0;
    int32_t f4;
};

struct s37 {
    int32_t f0;
    int32_t f4;
};

struct s38 {
    int32_t f0;
    int32_t f4;
};

struct s39 {
    signed char[8232] pad8232;
    int32_t f2028;
};

struct s40 {
    int32_t f0;
    int32_t f4;
};

struct s41 {
    signed char[1] pad1;
    int32_t f1;
};

struct s42 {
    int32_t f0;
    int32_t f4;
};

struct s43 {
    int32_t f0;
    int32_t f4;
};

struct s44 {
    int32_t f0;
    int32_t f4;
};

struct s45 {
    int32_t f0;
    int32_t f4;
};

struct s46 {
    int32_t f0;
    int32_t f4;
};

struct s47 {
    int32_t f0;
    int32_t f4;
};

struct s48 {
    int32_t f0;
    int32_t f4;
    signed char[224] pad232;
    int32_t fe8;
};

struct s49 {
    int32_t f0;
    int32_t f4;
};

void fun_111() {
    int64_t r15_1;
    int64_t r12_2;
    int64_t rbp3;
    int32_t* rdi4;
    int32_t* rsi5;
    int32_t* rbx6;
    int32_t* rbx7;
    int64_t r13_8;
    int64_t r12_9;
    int64_t rbx10;
    struct s25* rcx11;
    struct s25* rbx12;
    int64_t v13;
    int64_t r10_14;
    int32_t* v15;
    int64_t v16;
    void* rbp17;
    int64_t r13_18;
    struct s26* rbx19;
    struct s27* rsi20;
    struct s28* rdi21;
    int64_t* r8_22;
    struct s29* rdi23;
    struct s30* rsi24;
    int32_t* rdi25;
    struct s31* rsi26;
    void* r14_27;
    int64_t r8_28;
    int64_t r9_29;
    void* r8_30;
    void* r12_31;
    void* r9_32;
    int32_t* rdi33;
    void* r12_34;
    void* r8_35;
    int32_t* rdi36;
    struct s32* rsi37;
    int32_t* rdi38;
    struct s33* rsi39;
    int32_t* rdi40;
    int32_t* rdi41;
    void* r9_42;
    struct s34* rsi43;
    void* r8_44;
    int32_t* rdi45;
    int32_t* rdi46;
    struct s35* rsi47;
    int32_t* rdi48;
    struct s36* rsi49;
    int32_t* rdi50;
    int32_t* rdi51;
    struct s37* rsi52;
    void* r9_53;
    int32_t* rdi54;
    struct s38* r10_55;
    void* r8_56;
    int32_t* rdi57;
    void* r9_58;
    int1_t less_or_equal59;
    void* r13_60;
    int64_t rbp61;
    struct s39* r12_62;
    struct s40* rsi63;
    void* r8_64;
    int32_t* rbx65;
    struct s41* r14_66;
    int64_t* r8_67;
    struct s42* rsi68;
    struct s43* rsi69;
    int32_t* rdi70;
    void* r9_71;
    void* r9_72;
    void* r10_73;
    void* r8_74;
    int32_t* rdi75;
    int32_t* rdi76;
    void* r10_77;
    int32_t* r8_78;
    int32_t* rdi79;
    struct s44* rsi80;
    int32_t* rdi81;
    int32_t* rdi82;
    int32_t* rdi83;
    int32_t* r9_84;
    struct s45* rsi85;
    int32_t* r8_86;
    int32_t* rdi87;
    int32_t* rdi88;
    struct s46* rsi89;
    int32_t* rdi90;
    int32_t* rdi91;
    int32_t* rdi92;
    struct s47* rsi93;
    int32_t* r9_94;
    int32_t* rdi95;
    struct s48* rdi96;
    struct s38* rsi97;
    struct s49* rdi98;
    int32_t* rsi99;
    void* rsi100;
    int64_t rdi101;

    while (++r15_1, r15_1 != r12_2) {
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r15_1 + rbp3) * 0xcccccccd + 0x19999998) <= 0xccccccc) {
            *reinterpret_cast<int32_t*>(&rdi4) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi4) + 4) = reinterpret_cast<int32_t>(free);
            rsi5 = rbx6;
            fun_f0();
        }
        *rdi4 = *rsi5;
        rdi4 = rbx7;
        rsi5 = reinterpret_cast<int32_t*>(0x10a);
        fun_111();
    }
    if (r13_8 + 1 != r12_9) {
    }
    fun_139(rbx10, 0x128, 0x12f);
    rcx11 = rbx12;
    if (!free) 
        goto addr_17b_13;
    addr_6d3_14:
    goto v13;
    addr_17b_13:
    __asm__("cvtsi2sd xmm0, esi");
    g140 = g16;
    __asm__("movapd xmm2, xmm8");
    __asm__("divsd xmm2, xmm0");
    __asm__("cvtsi2sd xmm1, dword [rsp-0x2c]");
    __asm__("movapd xmm0, xmm8");
    __asm__("divsd xmm0, xmm1");
    __asm__("movapd xmm1, xmm0");
    __asm__("addsd xmm1, xmm0");
    __asm__("mulsd xmm2, xmm2");
    __asm__("divsd xmm1, xmm2");
    __asm__("divsd xmm0, xmm2");
    g144 = g1a;
    __asm__("movapd xmm3, xmm1");
    __asm__("mulsd xmm3, xmm2");
    __asm__("addsd xmm1, xmm8");
    __asm__("mulsd xmm2, xmm0");
    __asm__("addsd xmm0, xmm8");
    __asm__("movapd xmm4, [rip+0x0]");
    __asm__("movapd xmm5, xmm3");
    __asm__("xorpd xmm5, xmm4");
    __asm__("xorpd xmm4, xmm2");
    __asm__("movapd xmm6, xmm2");
    __asm__("addsd xmm6, xmm2");
    __asm__("addsd xmm6, xmm8");
    __asm__("movapd xmm7, xmm3");
    __asm__("addsd xmm7, xmm3");
    __asm__("addsd xmm7, xmm8");
    *reinterpret_cast<int32_t*>(&r10_14) = 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_14) + 4) = reinterpret_cast<int32_t>(free);
    v15 = &rcx11->f38a40;
    do {
        v16 = r10_14;
        if (!free) {
            *reinterpret_cast<int32_t*>(&rbp17) = 1;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp17) + 4) = reinterpret_cast<int32_t>(free);
            *reinterpret_cast<int32_t*>(&r13_18) = reinterpret_cast<int32_t>(free);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_18) + 4) = reinterpret_cast<int32_t>(free);
            do {
                rbx19 = reinterpret_cast<struct s26*>(r13_18 * 0x1f40);
                rsi20 = reinterpret_cast<struct s27*>(&rbx19->f2028);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rcx11) + reinterpret_cast<int64_t>(rbp17) * 8) = reinterpret_cast<int32_t>(0x3ff0000000000000);
                rdi21 = reinterpret_cast<struct s28*>(reinterpret_cast<int64_t>(rbp17) * 0x1f40);
                *reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(r8_22) + reinterpret_cast<int64_t>(rdi21)) = reinterpret_cast<int64_t>(free);
                rdi21->f0 = rsi20->f0;
                rdi23 = reinterpret_cast<struct s29*>(&rdi21->f4);
                rsi24 = reinterpret_cast<struct s30*>(&rsi20->f4);
                rdi23->f0 = rsi24->f0;
                rdi25 = &rdi23->f4;
                rsi26 = reinterpret_cast<struct s31*>(&rsi24->f4);
                r14_27 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rbp17) + 1);
                if (reinterpret_cast<uint64_t>(r8_28 + reinterpret_cast<int64_t>(rbx19) + 0x1f40) >= reinterpret_cast<uint64_t>(r9_29 + reinterpret_cast<int64_t>(rsi20)) || (rsi26 = reinterpret_cast<struct s31*>(reinterpret_cast<uint64_t>(rsi26) + reinterpret_cast<int64_t>(r8_30)), *reinterpret_cast<int32_t*>(&r12_31) = 1, *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_31) + 4) = reinterpret_cast<int32_t>(free), reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(r9_32) + reinterpret_cast<int64_t>(rbx19) + 0x1f40) >= reinterpret_cast<uint64_t>(rsi26))) {
                    *rdi25 = rsi26->f0;
                    rdi33 = rdi25 + 1;
                    *rdi33 = rsi26->f4;
                    rdi25 = rdi33 + 1;
                    *reinterpret_cast<int32_t*>(&r12_34) = 1;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_34) + 4) = reinterpret_cast<int32_t>(free);
                    do {
                        __asm__("mulsd xmm9, xmm3");
                        __asm__("addsd xmm9, xmm1");
                        __asm__("movapd xmm10, xmm5");
                        __asm__("divsd xmm10, xmm9");
                        *rdi25 = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(r8_35) + reinterpret_cast<int64_t>(rdi25));
                        rdi36 = rdi25 + 1;
                        rsi37 = reinterpret_cast<struct s32*>(reinterpret_cast<int64_t>(r12_34) * 0x1f40 + 1);
                        *rdi36 = rsi37->f0;
                        rdi38 = rdi36 + 1;
                        rsi39 = reinterpret_cast<struct s33*>(&rsi37->f4);
                        __asm__("mulsd xmm11, xmm6");
                        *rdi38 = rsi39->f0;
                        rdi40 = rdi38 + 1;
                        __asm__("mulsd xmm12, xmm4");
                        __asm__("addsd xmm12, xmm11");
                        *rdi40 = rsi39->f4;
                        rdi41 = rdi40 + 1;
                        __asm__("mulsd xmm11, xmm4");
                        __asm__("addsd xmm11, xmm12");
                        __asm__("mulsd xmm8, xmm5");
                        __asm__("addsd xmm8, xmm11");
                        __asm__("divsd xmm8, xmm9");
                        *rdi41 = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(r9_42) + reinterpret_cast<int64_t>(rdi41));
                        rdi25 = rdi41 + 1;
                        r12_34 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(r12_34) + 1);
                        __asm__("movapd xmm9, xmm10");
                    } while (!reinterpret_cast<int1_t>(r12_34 == 29));
                } else {
                    do {
                        rsi43 = reinterpret_cast<struct s34*>(reinterpret_cast<int64_t>(r8_44) + reinterpret_cast<int64_t>(rdi25));
                        *rdi25 = rsi43->f0;
                        rdi45 = rdi25 + 1;
                        __asm__("mulsd xmm8, xmm3");
                        __asm__("addsd xmm8, xmm1");
                        __asm__("movapd xmm9, xmm5");
                        __asm__("divsd xmm9, xmm8");
                        *rdi45 = rsi43->f4;
                        rdi46 = rdi45 + 1;
                        rsi47 = reinterpret_cast<struct s35*>(reinterpret_cast<int64_t>(r12_31) * 0x1f40 + 1);
                        *rdi46 = rsi47->f0;
                        rdi48 = rdi46 + 1;
                        rsi49 = reinterpret_cast<struct s36*>(&rsi47->f4);
                        __asm__("mulsd xmm9, xmm6");
                        *rdi48 = rsi49->f0;
                        rdi50 = rdi48 + 1;
                        __asm__("mulsd xmm10, xmm4");
                        __asm__("addsd xmm10, xmm9");
                        *rdi50 = rsi49->f4;
                        rdi51 = rdi50 + 1;
                        __asm__("mulsd xmm9, xmm4");
                        __asm__("addsd xmm9, xmm10");
                        rsi52 = reinterpret_cast<struct s37*>(reinterpret_cast<int64_t>(r9_53) + reinterpret_cast<int64_t>(rdi51));
                        *rdi51 = rsi52->f0;
                        rdi54 = rdi51 + 1;
                        __asm__("mulsd xmm10, xmm5");
                        __asm__("addsd xmm10, xmm9");
                        __asm__("divsd xmm10, xmm8");
                        *rdi54 = rsi52->f4;
                        rdi25 = rdi54 + 1;
                        r12_31 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(r12_31) + 1);
                    } while (!reinterpret_cast<int1_t>(r12_31 == 29));
                }
                v15[reinterpret_cast<int64_t>(rbp17) * 2] = reinterpret_cast<int32_t>(0x3ff0000000000000);
                r10_55 = reinterpret_cast<struct s38*>(28);
                if (!free) {
                    do {
                        *rdi25 = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(r8_56) + reinterpret_cast<int64_t>(rdi25));
                        rdi57 = rdi25 + 1;
                        __asm__("mulsd xmm8, [r11+rbp*8+0x1f40]");
                        __asm__("addsd xmm8, [rsi+r10*8]");
                        *rdi57 = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(r9_58) + reinterpret_cast<int64_t>(rdi57));
                        rdi25 = rdi57 + 1;
                        less_or_equal59 = reinterpret_cast<int64_t>(r10_55) <= 1;
                        r10_55 = reinterpret_cast<struct s38*>(reinterpret_cast<int64_t>(r10_55) - 1);
                    } while (!less_or_equal59);
                }
                ++r13_18;
                rbp17 = r14_27;
            } while (r14_27 != 29);
        }
        if (!free) {
            *reinterpret_cast<int32_t*>(&r13_60) = 1;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_60) + 4) = reinterpret_cast<int32_t>(free);
            *reinterpret_cast<int32_t*>(&rbp61) = reinterpret_cast<int32_t>(free);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp61) + 4) = reinterpret_cast<int32_t>(free);
            do {
                r12_62 = reinterpret_cast<struct s39*>(rbp61 * 0x1f40);
                rsi63 = reinterpret_cast<struct s40*>(reinterpret_cast<int64_t>(r8_64) + reinterpret_cast<int64_t>(r12_62) + 0x1f40);
                rbx65 = &r12_62->f2028;
                r14_66 = reinterpret_cast<struct s41*>(reinterpret_cast<int64_t>(r13_60) * 0x1f40);
                r14_66->f1 = reinterpret_cast<int32_t>(0x3ff0000000000000);
                *reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(r8_67) + reinterpret_cast<int64_t>(r14_66)) = reinterpret_cast<int64_t>(free);
                g2028 = rsi63->f0;
                rsi68 = reinterpret_cast<struct s42*>(&rsi63->f4);
                g202c = rsi68->f0;
                rsi69 = reinterpret_cast<struct s43*>(&rsi68->f4);
                rdi70 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(r13_60) - 1);
                r13_60 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(r13_60) + 1);
                if (reinterpret_cast<uint64_t>(rsi69) >= reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(r9_71) + reinterpret_cast<int64_t>(rbx65)) || (rsi69 = reinterpret_cast<struct s43*>(reinterpret_cast<int64_t>(r9_72) + reinterpret_cast<int64_t>(r12_62) + 0x1f40), *reinterpret_cast<int32_t*>(&r10_73) = 1, *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_73) + 4) = reinterpret_cast<int32_t>(free), reinterpret_cast<uint64_t>(rsi69) >= reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(rbx65) + reinterpret_cast<int64_t>(r8_74)))) {
                    *rdi70 = rsi69->f0;
                    rdi75 = rdi70 + 1;
                    *rdi75 = rsi69->f4;
                    rdi76 = rdi75 + 1;
                    *reinterpret_cast<int32_t*>(&r10_77) = 1;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_77) + 4) = reinterpret_cast<int32_t>(free);
                    do {
                        __asm__("mulsd xmm9, xmm2");
                        __asm__("addsd xmm9, xmm0");
                        __asm__("movapd xmm10, xmm4");
                        __asm__("divsd xmm10, xmm9");
                        *rdi76 = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(r8_78) + reinterpret_cast<int64_t>(r14_66));
                        rdi79 = rdi76 + 1;
                        rsi80 = reinterpret_cast<struct s44*>(reinterpret_cast<int64_t>(rdi79) * 0x1f40 + reinterpret_cast<int64_t>(rcx11));
                        *rdi79 = rsi80->f0;
                        rdi81 = rdi79 + 1;
                        __asm__("mulsd xmm11, xmm7");
                        *rdi81 = rsi80->f4;
                        rdi82 = rdi81 + 1;
                        __asm__("mulsd xmm12, xmm5");
                        __asm__("addsd xmm12, xmm11");
                        *rdi82 = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(r13_60) * 0x1f40 + reinterpret_cast<int64_t>(rcx11));
                        rdi83 = rdi82 + 1;
                        __asm__("mulsd xmm11, xmm5");
                        __asm__("addsd xmm11, xmm12");
                        __asm__("mulsd xmm8, xmm4");
                        __asm__("addsd xmm8, xmm11");
                        __asm__("divsd xmm8, xmm9");
                        *rdi83 = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(r9_84) + reinterpret_cast<int64_t>(r14_66));
                        rdi76 = rdi83 + 1;
                        r10_77 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(r10_77) + 1);
                        __asm__("movapd xmm9, xmm10");
                    } while (!reinterpret_cast<int1_t>(r10_77 == 29));
                } else {
                    do {
                        rsi85 = reinterpret_cast<struct s45*>(reinterpret_cast<int64_t>(r8_86) + reinterpret_cast<int64_t>(r14_66));
                        *rdi70 = rsi85->f0;
                        rdi87 = rdi70 + 1;
                        __asm__("mulsd xmm8, xmm2");
                        __asm__("addsd xmm8, xmm0");
                        __asm__("movapd xmm9, xmm4");
                        __asm__("divsd xmm9, xmm8");
                        *rdi87 = rsi85->f4;
                        rdi88 = rdi87 + 1;
                        rsi89 = reinterpret_cast<struct s46*>(reinterpret_cast<int64_t>(rdi88) * 0x1f40 + reinterpret_cast<int64_t>(rcx11));
                        *rdi88 = rsi89->f0;
                        rdi90 = rdi88 + 1;
                        __asm__("mulsd xmm9, xmm7");
                        *rdi90 = rsi89->f4;
                        rdi91 = rdi90 + 1;
                        __asm__("mulsd xmm10, xmm5");
                        __asm__("addsd xmm10, xmm9");
                        *rdi91 = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(r13_60) * 0x1f40 + reinterpret_cast<int64_t>(rcx11));
                        rdi92 = rdi91 + 1;
                        __asm__("mulsd xmm9, xmm5");
                        __asm__("addsd xmm9, xmm10");
                        rsi93 = reinterpret_cast<struct s47*>(reinterpret_cast<int64_t>(r9_94) + reinterpret_cast<int64_t>(r14_66));
                        *rdi92 = rsi93->f0;
                        rdi95 = rdi92 + 1;
                        __asm__("mulsd xmm10, xmm4");
                        __asm__("addsd xmm10, xmm9");
                        __asm__("divsd xmm10, xmm8");
                        *rdi95 = rsi93->f4;
                        rdi70 = rdi95 + 1;
                        r10_73 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(r10_73) + 1);
                    } while (!reinterpret_cast<int1_t>(r10_73 == 29));
                }
                rdi96 = reinterpret_cast<struct s48*>(&r14_66->f1);
                rdi96->fe8 = reinterpret_cast<int32_t>(0x3ff0000000000000);
                rsi97 = reinterpret_cast<struct s38*>(28);
                if (!free) {
                    do {
                        rdi96->f0 = rsi97->f0;
                        rdi98 = reinterpret_cast<struct s49*>(&rdi96->f4);
                        rsi99 = &rsi97->f4;
                        __asm__("mulsd xmm8, [rdi+rsi*8+0x8]");
                        __asm__("addsd xmm8, [r10+rsi*8]");
                        rdi98->f0 = *rsi99;
                        rdi96 = reinterpret_cast<struct s48*>(&rdi98->f4);
                        rsi100 = reinterpret_cast<void*>(rsi99 + 1);
                        rsi97 = reinterpret_cast<struct s38*>(reinterpret_cast<int64_t>(rsi100) - 1);
                    } while (reinterpret_cast<int64_t>(rsi100) > 1);
                }
                ++rbp61;
            } while (r13_60 != 29);
        }
        rdi101 = v16;
        *reinterpret_cast<int32_t*>(&r10_14) = static_cast<int32_t>(rdi101 + 1);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_14) + 4) = reinterpret_cast<int32_t>(free);
    } while (*reinterpret_cast<int32_t*>(&rdi101) != 0x140);
    goto addr_6d3_14;
}

struct s50 {
    int32_t f0;
    signed char[231996] pad232000;
    int32_t f38a40;
};

struct s51 {
    signed char[8232] pad8232;
    int32_t f2028;
};

struct s52 {
    int32_t f0;
    int32_t f4;
};

struct s53 {
    int32_t f0;
    int32_t f4;
};

struct s54 {
    int32_t f0;
    int32_t f4;
};

struct s55 {
    int32_t f0;
    int32_t f4;
};

struct s56 {
    int32_t f0;
    int32_t f4;
};

struct s57 {
    int32_t f0;
    int32_t f4;
};

struct s58 {
    int32_t f0;
    int32_t f4;
};

struct s59 {
    int32_t f0;
    int32_t f4;
};

struct s60 {
    int32_t f0;
    int32_t f4;
};

struct s61 {
    int32_t f0;
    int32_t f4;
};

struct s62 {
    int32_t f0;
    int32_t f4;
};

struct s63 {
    int32_t f0;
    int32_t f4;
};

struct s64 {
    signed char[8232] pad8232;
    int32_t f2028;
};

struct s65 {
    int32_t f0;
    int32_t f4;
};

struct s66 {
    signed char[1] pad1;
    int32_t f1;
};

struct s67 {
    int32_t f0;
    int32_t f4;
};

struct s68 {
    int32_t f0;
    int32_t f4;
};

struct s69 {
    int32_t f0;
    int32_t f4;
};

struct s70 {
    int32_t f0;
    int32_t f4;
};

struct s71 {
    int32_t f0;
    int32_t f4;
};

struct s72 {
    int32_t f0;
    int32_t f4;
};

struct s73 {
    int32_t f0;
    int32_t f4;
    signed char[224] pad232;
    int32_t fe8;
};

struct s74 {
    int32_t f0;
    int32_t f4;
};

void fun_139(int64_t rdi, int64_t rsi, int64_t rdx) {
    struct s50* rcx4;
    struct s50* rbx5;
    int64_t r10_6;
    int32_t* v7;
    int64_t v8;
    void* rbp9;
    int64_t r13_10;
    struct s51* rbx11;
    struct s52* rsi12;
    struct s53* rdi13;
    int64_t* r8_14;
    struct s54* rdi15;
    struct s55* rsi16;
    int32_t* rdi17;
    struct s56* rsi18;
    void* r14_19;
    int64_t r8_20;
    int64_t r9_21;
    void* r8_22;
    void* r12_23;
    void* r9_24;
    int32_t* rdi25;
    void* r12_26;
    void* r8_27;
    int32_t* rdi28;
    struct s57* rsi29;
    int32_t* rdi30;
    struct s58* rsi31;
    int32_t* rdi32;
    int32_t* rdi33;
    void* r9_34;
    struct s59* rsi35;
    void* r8_36;
    int32_t* rdi37;
    int32_t* rdi38;
    struct s60* rsi39;
    int32_t* rdi40;
    struct s61* rsi41;
    int32_t* rdi42;
    int32_t* rdi43;
    struct s62* rsi44;
    void* r9_45;
    int32_t* rdi46;
    struct s63* r10_47;
    void* r8_48;
    int32_t* rdi49;
    void* r9_50;
    int1_t less_or_equal51;
    void* r13_52;
    int64_t rbp53;
    struct s64* r12_54;
    struct s65* rsi55;
    void* r8_56;
    int32_t* rbx57;
    struct s66* r14_58;
    int64_t* r8_59;
    struct s67* rsi60;
    struct s68* rsi61;
    int32_t* rdi62;
    void* r9_63;
    void* r9_64;
    void* r10_65;
    void* r8_66;
    int32_t* rdi67;
    int32_t* rdi68;
    void* r10_69;
    int32_t* r8_70;
    int32_t* rdi71;
    struct s69* rsi72;
    int32_t* rdi73;
    int32_t* rdi74;
    int32_t* rdi75;
    int32_t* r9_76;
    struct s70* rsi77;
    int32_t* r8_78;
    int32_t* rdi79;
    int32_t* rdi80;
    struct s71* rsi81;
    int32_t* rdi82;
    int32_t* rdi83;
    int32_t* rdi84;
    struct s72* rsi85;
    int32_t* r9_86;
    int32_t* rdi87;
    struct s73* rdi88;
    struct s63* rsi89;
    struct s74* rdi90;
    int32_t* rsi91;
    void* rsi92;
    int64_t rdi93;
    int64_t v94;

    rcx4 = rbx5;
    if (!free) {
        __asm__("cvtsi2sd xmm0, esi");
        g140 = g16;
        __asm__("movapd xmm2, xmm8");
        __asm__("divsd xmm2, xmm0");
        __asm__("cvtsi2sd xmm1, dword [rsp-0x2c]");
        __asm__("movapd xmm0, xmm8");
        __asm__("divsd xmm0, xmm1");
        __asm__("movapd xmm1, xmm0");
        __asm__("addsd xmm1, xmm0");
        __asm__("mulsd xmm2, xmm2");
        __asm__("divsd xmm1, xmm2");
        __asm__("divsd xmm0, xmm2");
        g144 = g1a;
        __asm__("movapd xmm3, xmm1");
        __asm__("mulsd xmm3, xmm2");
        __asm__("addsd xmm1, xmm8");
        __asm__("mulsd xmm2, xmm0");
        __asm__("addsd xmm0, xmm8");
        __asm__("movapd xmm4, [rip+0x0]");
        __asm__("movapd xmm5, xmm3");
        __asm__("xorpd xmm5, xmm4");
        __asm__("xorpd xmm4, xmm2");
        __asm__("movapd xmm6, xmm2");
        __asm__("addsd xmm6, xmm2");
        __asm__("addsd xmm6, xmm8");
        __asm__("movapd xmm7, xmm3");
        __asm__("addsd xmm7, xmm3");
        __asm__("addsd xmm7, xmm8");
        *reinterpret_cast<int32_t*>(&r10_6) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_6) + 4) = reinterpret_cast<int32_t>(free);
        v7 = &rcx4->f38a40;
        do {
            v8 = r10_6;
            if (!free) {
                *reinterpret_cast<int32_t*>(&rbp9) = 1;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp9) + 4) = reinterpret_cast<int32_t>(free);
                *reinterpret_cast<int32_t*>(&r13_10) = reinterpret_cast<int32_t>(free);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_10) + 4) = reinterpret_cast<int32_t>(free);
                do {
                    rbx11 = reinterpret_cast<struct s51*>(r13_10 * 0x1f40);
                    rsi12 = reinterpret_cast<struct s52*>(&rbx11->f2028);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rcx4) + reinterpret_cast<int64_t>(rbp9) * 8) = reinterpret_cast<int32_t>(0x3ff0000000000000);
                    rdi13 = reinterpret_cast<struct s53*>(reinterpret_cast<int64_t>(rbp9) * 0x1f40);
                    *reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(r8_14) + reinterpret_cast<int64_t>(rdi13)) = reinterpret_cast<int64_t>(free);
                    rdi13->f0 = rsi12->f0;
                    rdi15 = reinterpret_cast<struct s54*>(&rdi13->f4);
                    rsi16 = reinterpret_cast<struct s55*>(&rsi12->f4);
                    rdi15->f0 = rsi16->f0;
                    rdi17 = &rdi15->f4;
                    rsi18 = reinterpret_cast<struct s56*>(&rsi16->f4);
                    r14_19 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rbp9) + 1);
                    if (reinterpret_cast<uint64_t>(r8_20 + reinterpret_cast<int64_t>(rbx11) + 0x1f40) >= reinterpret_cast<uint64_t>(r9_21 + reinterpret_cast<int64_t>(rsi12)) || (rsi18 = reinterpret_cast<struct s56*>(reinterpret_cast<uint64_t>(rsi18) + reinterpret_cast<int64_t>(r8_22)), *reinterpret_cast<int32_t*>(&r12_23) = 1, *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_23) + 4) = reinterpret_cast<int32_t>(free), reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(r9_24) + reinterpret_cast<int64_t>(rbx11) + 0x1f40) >= reinterpret_cast<uint64_t>(rsi18))) {
                        *rdi17 = rsi18->f0;
                        rdi25 = rdi17 + 1;
                        *rdi25 = rsi18->f4;
                        rdi17 = rdi25 + 1;
                        *reinterpret_cast<int32_t*>(&r12_26) = 1;
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_26) + 4) = reinterpret_cast<int32_t>(free);
                        do {
                            __asm__("mulsd xmm9, xmm3");
                            __asm__("addsd xmm9, xmm1");
                            __asm__("movapd xmm10, xmm5");
                            __asm__("divsd xmm10, xmm9");
                            *rdi17 = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(r8_27) + reinterpret_cast<int64_t>(rdi17));
                            rdi28 = rdi17 + 1;
                            rsi29 = reinterpret_cast<struct s57*>(reinterpret_cast<int64_t>(r12_26) * 0x1f40 + 1);
                            *rdi28 = rsi29->f0;
                            rdi30 = rdi28 + 1;
                            rsi31 = reinterpret_cast<struct s58*>(&rsi29->f4);
                            __asm__("mulsd xmm11, xmm6");
                            *rdi30 = rsi31->f0;
                            rdi32 = rdi30 + 1;
                            __asm__("mulsd xmm12, xmm4");
                            __asm__("addsd xmm12, xmm11");
                            *rdi32 = rsi31->f4;
                            rdi33 = rdi32 + 1;
                            __asm__("mulsd xmm11, xmm4");
                            __asm__("addsd xmm11, xmm12");
                            __asm__("mulsd xmm8, xmm5");
                            __asm__("addsd xmm8, xmm11");
                            __asm__("divsd xmm8, xmm9");
                            *rdi33 = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(r9_34) + reinterpret_cast<int64_t>(rdi33));
                            rdi17 = rdi33 + 1;
                            r12_26 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(r12_26) + 1);
                            __asm__("movapd xmm9, xmm10");
                        } while (!reinterpret_cast<int1_t>(r12_26 == 29));
                    } else {
                        do {
                            rsi35 = reinterpret_cast<struct s59*>(reinterpret_cast<int64_t>(r8_36) + reinterpret_cast<int64_t>(rdi17));
                            *rdi17 = rsi35->f0;
                            rdi37 = rdi17 + 1;
                            __asm__("mulsd xmm8, xmm3");
                            __asm__("addsd xmm8, xmm1");
                            __asm__("movapd xmm9, xmm5");
                            __asm__("divsd xmm9, xmm8");
                            *rdi37 = rsi35->f4;
                            rdi38 = rdi37 + 1;
                            rsi39 = reinterpret_cast<struct s60*>(reinterpret_cast<int64_t>(r12_23) * 0x1f40 + 1);
                            *rdi38 = rsi39->f0;
                            rdi40 = rdi38 + 1;
                            rsi41 = reinterpret_cast<struct s61*>(&rsi39->f4);
                            __asm__("mulsd xmm9, xmm6");
                            *rdi40 = rsi41->f0;
                            rdi42 = rdi40 + 1;
                            __asm__("mulsd xmm10, xmm4");
                            __asm__("addsd xmm10, xmm9");
                            *rdi42 = rsi41->f4;
                            rdi43 = rdi42 + 1;
                            __asm__("mulsd xmm9, xmm4");
                            __asm__("addsd xmm9, xmm10");
                            rsi44 = reinterpret_cast<struct s62*>(reinterpret_cast<int64_t>(r9_45) + reinterpret_cast<int64_t>(rdi43));
                            *rdi43 = rsi44->f0;
                            rdi46 = rdi43 + 1;
                            __asm__("mulsd xmm10, xmm5");
                            __asm__("addsd xmm10, xmm9");
                            __asm__("divsd xmm10, xmm8");
                            *rdi46 = rsi44->f4;
                            rdi17 = rdi46 + 1;
                            r12_23 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(r12_23) + 1);
                        } while (!reinterpret_cast<int1_t>(r12_23 == 29));
                    }
                    v7[reinterpret_cast<int64_t>(rbp9) * 2] = reinterpret_cast<int32_t>(0x3ff0000000000000);
                    r10_47 = reinterpret_cast<struct s63*>(28);
                    if (!free) {
                        do {
                            *rdi17 = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(r8_48) + reinterpret_cast<int64_t>(rdi17));
                            rdi49 = rdi17 + 1;
                            __asm__("mulsd xmm8, [r11+rbp*8+0x1f40]");
                            __asm__("addsd xmm8, [rsi+r10*8]");
                            *rdi49 = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(r9_50) + reinterpret_cast<int64_t>(rdi49));
                            rdi17 = rdi49 + 1;
                            less_or_equal51 = reinterpret_cast<int64_t>(r10_47) <= 1;
                            r10_47 = reinterpret_cast<struct s63*>(reinterpret_cast<int64_t>(r10_47) - 1);
                        } while (!less_or_equal51);
                    }
                    ++r13_10;
                    rbp9 = r14_19;
                } while (r14_19 != 29);
            }
            if (!free) {
                *reinterpret_cast<int32_t*>(&r13_52) = 1;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_52) + 4) = reinterpret_cast<int32_t>(free);
                *reinterpret_cast<int32_t*>(&rbp53) = reinterpret_cast<int32_t>(free);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp53) + 4) = reinterpret_cast<int32_t>(free);
                do {
                    r12_54 = reinterpret_cast<struct s64*>(rbp53 * 0x1f40);
                    rsi55 = reinterpret_cast<struct s65*>(reinterpret_cast<int64_t>(r8_56) + reinterpret_cast<int64_t>(r12_54) + 0x1f40);
                    rbx57 = &r12_54->f2028;
                    r14_58 = reinterpret_cast<struct s66*>(reinterpret_cast<int64_t>(r13_52) * 0x1f40);
                    r14_58->f1 = reinterpret_cast<int32_t>(0x3ff0000000000000);
                    *reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(r8_59) + reinterpret_cast<int64_t>(r14_58)) = reinterpret_cast<int64_t>(free);
                    g2028 = rsi55->f0;
                    rsi60 = reinterpret_cast<struct s67*>(&rsi55->f4);
                    g202c = rsi60->f0;
                    rsi61 = reinterpret_cast<struct s68*>(&rsi60->f4);
                    rdi62 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(r13_52) - 1);
                    r13_52 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(r13_52) + 1);
                    if (reinterpret_cast<uint64_t>(rsi61) >= reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(r9_63) + reinterpret_cast<int64_t>(rbx57)) || (rsi61 = reinterpret_cast<struct s68*>(reinterpret_cast<int64_t>(r9_64) + reinterpret_cast<int64_t>(r12_54) + 0x1f40), *reinterpret_cast<int32_t*>(&r10_65) = 1, *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_65) + 4) = reinterpret_cast<int32_t>(free), reinterpret_cast<uint64_t>(rsi61) >= reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(rbx57) + reinterpret_cast<int64_t>(r8_66)))) {
                        *rdi62 = rsi61->f0;
                        rdi67 = rdi62 + 1;
                        *rdi67 = rsi61->f4;
                        rdi68 = rdi67 + 1;
                        *reinterpret_cast<int32_t*>(&r10_69) = 1;
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_69) + 4) = reinterpret_cast<int32_t>(free);
                        do {
                            __asm__("mulsd xmm9, xmm2");
                            __asm__("addsd xmm9, xmm0");
                            __asm__("movapd xmm10, xmm4");
                            __asm__("divsd xmm10, xmm9");
                            *rdi68 = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(r8_70) + reinterpret_cast<int64_t>(r14_58));
                            rdi71 = rdi68 + 1;
                            rsi72 = reinterpret_cast<struct s69*>(reinterpret_cast<int64_t>(rdi71) * 0x1f40 + reinterpret_cast<int64_t>(rcx4));
                            *rdi71 = rsi72->f0;
                            rdi73 = rdi71 + 1;
                            __asm__("mulsd xmm11, xmm7");
                            *rdi73 = rsi72->f4;
                            rdi74 = rdi73 + 1;
                            __asm__("mulsd xmm12, xmm5");
                            __asm__("addsd xmm12, xmm11");
                            *rdi74 = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(r13_52) * 0x1f40 + reinterpret_cast<int64_t>(rcx4));
                            rdi75 = rdi74 + 1;
                            __asm__("mulsd xmm11, xmm5");
                            __asm__("addsd xmm11, xmm12");
                            __asm__("mulsd xmm8, xmm4");
                            __asm__("addsd xmm8, xmm11");
                            __asm__("divsd xmm8, xmm9");
                            *rdi75 = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(r9_76) + reinterpret_cast<int64_t>(r14_58));
                            rdi68 = rdi75 + 1;
                            r10_69 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(r10_69) + 1);
                            __asm__("movapd xmm9, xmm10");
                        } while (!reinterpret_cast<int1_t>(r10_69 == 29));
                    } else {
                        do {
                            rsi77 = reinterpret_cast<struct s70*>(reinterpret_cast<int64_t>(r8_78) + reinterpret_cast<int64_t>(r14_58));
                            *rdi62 = rsi77->f0;
                            rdi79 = rdi62 + 1;
                            __asm__("mulsd xmm8, xmm2");
                            __asm__("addsd xmm8, xmm0");
                            __asm__("movapd xmm9, xmm4");
                            __asm__("divsd xmm9, xmm8");
                            *rdi79 = rsi77->f4;
                            rdi80 = rdi79 + 1;
                            rsi81 = reinterpret_cast<struct s71*>(reinterpret_cast<int64_t>(rdi80) * 0x1f40 + reinterpret_cast<int64_t>(rcx4));
                            *rdi80 = rsi81->f0;
                            rdi82 = rdi80 + 1;
                            __asm__("mulsd xmm9, xmm7");
                            *rdi82 = rsi81->f4;
                            rdi83 = rdi82 + 1;
                            __asm__("mulsd xmm10, xmm5");
                            __asm__("addsd xmm10, xmm9");
                            *rdi83 = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(r13_52) * 0x1f40 + reinterpret_cast<int64_t>(rcx4));
                            rdi84 = rdi83 + 1;
                            __asm__("mulsd xmm9, xmm5");
                            __asm__("addsd xmm9, xmm10");
                            rsi85 = reinterpret_cast<struct s72*>(reinterpret_cast<int64_t>(r9_86) + reinterpret_cast<int64_t>(r14_58));
                            *rdi84 = rsi85->f0;
                            rdi87 = rdi84 + 1;
                            __asm__("mulsd xmm10, xmm4");
                            __asm__("addsd xmm10, xmm9");
                            __asm__("divsd xmm10, xmm8");
                            *rdi87 = rsi85->f4;
                            rdi62 = rdi87 + 1;
                            r10_65 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(r10_65) + 1);
                        } while (!reinterpret_cast<int1_t>(r10_65 == 29));
                    }
                    rdi88 = reinterpret_cast<struct s73*>(&r14_58->f1);
                    rdi88->fe8 = reinterpret_cast<int32_t>(0x3ff0000000000000);
                    rsi89 = reinterpret_cast<struct s63*>(28);
                    if (!free) {
                        do {
                            rdi88->f0 = rsi89->f0;
                            rdi90 = reinterpret_cast<struct s74*>(&rdi88->f4);
                            rsi91 = &rsi89->f4;
                            __asm__("mulsd xmm8, [rdi+rsi*8+0x8]");
                            __asm__("addsd xmm8, [r10+rsi*8]");
                            rdi90->f0 = *rsi91;
                            rdi88 = reinterpret_cast<struct s73*>(&rdi90->f4);
                            rsi92 = reinterpret_cast<void*>(rsi91 + 1);
                            rsi89 = reinterpret_cast<struct s63*>(reinterpret_cast<int64_t>(rsi92) - 1);
                        } while (reinterpret_cast<int64_t>(rsi92) > 1);
                    }
                    ++rbp53;
                } while (r13_52 != 29);
            }
            rdi93 = v8;
            *reinterpret_cast<int32_t*>(&r10_6) = static_cast<int32_t>(rdi93 + 1);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_6) + 4) = reinterpret_cast<int32_t>(free);
        } while (*reinterpret_cast<int32_t*>(&rdi93) != 0x140);
    }
    goto v94;
}

void fun_7ca(int64_t rdi, int32_t* rsi, int32_t* rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13);

void fun_7d2(int32_t* rdi, int32_t* rsi, int32_t* rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13);

void fun_7da(int64_t rdi, int32_t* rsi, int32_t* rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13);

void fun_7e2(int64_t rdi, int32_t* rsi, int32_t* rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13);

void fun_7ea(int64_t rdi, int32_t* rsi, int32_t* rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13);

void fun_7b0(int64_t rdi, int32_t* rsi, int32_t* rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13) {
    int32_t ebp14;
    signed char** r15_15;
    int32_t* rbx16;
    int32_t* rbx17;
    int64_t r14_18;
    int64_t r12_19;
    int64_t r13_20;

    if (ebp14 >= 43 && reinterpret_cast<int1_t>(**r15_15 == free)) {
        rsi = rbx16;
        fun_7ca(0x3e8, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11, a12);
    }
    fun_7d2(rbx17, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11, a12);
    fun_7da(r14_18, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11, a12);
    fun_7e2(r12_19, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11, a12);
    fun_7ea(r13_20, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11, a12);
    goto a13;
}

void fun_7ca(int64_t rdi, int32_t* rsi, int32_t* rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13) {
    int32_t* rbx14;
    int64_t r14_15;
    int64_t r12_16;
    int64_t r13_17;

    fun_7d2(rbx14, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11, a12);
    fun_7da(r14_15, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11, a12);
    fun_7e2(r12_16, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11, a12);
    fun_7ea(r13_17, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11, a12);
    goto a13;
}

void fun_7d2(int32_t* rdi, int32_t* rsi, int32_t* rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13) {
    int64_t r14_14;
    int64_t r12_15;
    int64_t r13_16;

    fun_7da(r14_14, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11, a12);
    fun_7e2(r12_15, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11, a12);
    fun_7ea(r13_16, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11, a12);
    goto a13;
}

int64_t fun_711(int64_t rdi, int64_t rsi);

int64_t fun_723(int64_t rdi, int64_t rsi);

struct s75 {
    int32_t f0;
    int32_t f4;
};

int64_t fun_735(struct s75* rdi, int32_t* rsi);

int32_t gf4240;

/* .LCPI2_1 */
int32_t LCPI2_1 = 0xc931f889;

void fun_6ff(int64_t rdi, int64_t rsi) {
    int64_t v3;
    int32_t* rbx4;
    int32_t* rax5;
    int64_t rax6;
    int64_t r14_7;
    int64_t rax8;
    int64_t r12_9;
    int64_t rax10;
    int64_t r13_11;
    int64_t rax12;
    int32_t* rdi13;
    int64_t rdx14;
    int32_t* rsi15;
    int64_t v16;
    int64_t v17;
    int64_t v18;
    int64_t v19;
    int64_t v20;
    int64_t v21;
    int32_t ebp22;
    signed char** r15_23;
    int64_t v24;
    int64_t v25;
    int64_t v26;
    int64_t v27;
    int64_t v28;
    int64_t v29;
    int64_t v30;
    int64_t v31;
    int64_t v32;
    int64_t v33;
    int64_t v34;
    int64_t v35;
    int64_t v36;
    int64_t v37;
    int64_t v38;
    int64_t v39;
    int64_t v40;
    int64_t v41;
    int64_t v42;
    int64_t v43;
    int64_t v44;
    int64_t v45;
    int64_t v46;
    int64_t v47;
    int64_t v48;
    int64_t v49;
    int64_t v50;
    int64_t v51;
    int64_t v52;
    int64_t v53;
    int64_t v54;

    v3 = reinterpret_cast<int64_t>(__return_address());
    rbx4 = rax5;
    rax6 = fun_711(0xf4240, 8);
    r14_7 = rax6;
    rax8 = fun_723(0xf4240, 8);
    r12_9 = rax8;
    rax10 = fun_735(0xf4240, 8);
    r13_11 = rax10;
    *reinterpret_cast<int32_t*>(&rax12) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax12) + 4) = reinterpret_cast<int32_t>(free);
    gf4240 = LCPI2_1;
    rdi13 = reinterpret_cast<int32_t*>(0xf4244);
    do {
        *reinterpret_cast<int32_t*>(&rdx14) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx14) + 4) = reinterpret_cast<int32_t>(free);
        do {
            __asm__("xorps xmm1, xmm1");
            __asm__("cvtsi2sd xmm1, esi");
            __asm__("divsd xmm1, xmm0");
            *rdi13 = rbx4[rax12 * 0x7d0];
            ++rdi13;
            ++rdx14;
        } while (rdx14 != 0x3e8);
        ++rax12;
    } while (rax12 != 0x3e8);
    *reinterpret_cast<int32_t*>(&rsi15) = 0x3e8;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi15) + 4) = reinterpret_cast<int32_t>(free);
    fun_7b0(0x1f4, 0x3e8, rbx4, r14_7, r12_9, r13_11, v3, v16, v17, v18, v19, v20, v21);
    if (ebp22 >= 43 && reinterpret_cast<int1_t>(**r15_23 == free)) {
        rsi15 = rbx4;
        fun_7ca(0x3e8, rsi15, rbx4, r14_7, r12_9, r13_11, v3, v24, v25, v26, v27, v28, v29);
    }
    fun_7d2(rbx4, rsi15, rbx4, r14_7, r12_9, r13_11, v3, v30, v31, v32, v33, v34, v35);
    fun_7da(r14_7, rsi15, rbx4, r14_7, r12_9, r13_11, v3, v36, v37, v38, v39, v40, v41);
    fun_7e2(r12_9, rsi15, rbx4, r14_7, r12_9, r13_11, v3, v42, v43, v44, v45, v46, v47);
    fun_7ea(r13_11, rsi15, rbx4, r14_7, r12_9, r13_11, v3, v48, v49, v50, v51, v52, v53);
    goto v54;
}

void fun_7da(int64_t rdi, int32_t* rsi, int32_t* rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13) {
    int64_t r12_14;
    int64_t r13_15;

    fun_7e2(r12_14, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11, a12);
    fun_7ea(r13_15, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11, a12);
    goto a13;
}

int64_t fun_711(int64_t rdi, int64_t rsi) {
    int64_t v3;
    int64_t r14_4;
    int64_t rax5;
    int64_t rax6;
    int64_t r12_7;
    int64_t rax8;
    int64_t r13_9;
    int64_t rax10;
    int32_t* rdi11;
    int64_t rdx12;
    int32_t* rbx13;
    int32_t* rsi14;
    int32_t* rbx15;
    int64_t v16;
    int64_t v17;
    int64_t v18;
    int64_t v19;
    int64_t v20;
    int64_t v21;
    int32_t ebp22;
    signed char** r15_23;
    int32_t* rbx24;
    int64_t v25;
    int64_t v26;
    int64_t v27;
    int64_t v28;
    int64_t v29;
    int64_t v30;
    int32_t* rbx31;
    int64_t v32;
    int64_t v33;
    int64_t v34;
    int64_t v35;
    int64_t v36;
    int64_t v37;
    int64_t v38;
    int64_t v39;
    int64_t v40;
    int64_t v41;
    int64_t v42;
    int64_t v43;
    int64_t v44;
    int64_t v45;
    int64_t v46;
    int64_t v47;
    int64_t v48;
    int64_t v49;
    int64_t v50;
    int64_t v51;
    int64_t v52;
    int64_t v53;
    int64_t v54;
    int64_t v55;
    int64_t v56;

    v3 = reinterpret_cast<int64_t>(__return_address());
    r14_4 = rax5;
    rax6 = fun_723(0xf4240, 8);
    r12_7 = rax6;
    rax8 = fun_735(0xf4240, 8);
    r13_9 = rax8;
    *reinterpret_cast<int32_t*>(&rax10) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax10) + 4) = reinterpret_cast<int32_t>(free);
    gf4240 = LCPI2_1;
    rdi11 = reinterpret_cast<int32_t*>(0xf4244);
    do {
        *reinterpret_cast<int32_t*>(&rdx12) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx12) + 4) = reinterpret_cast<int32_t>(free);
        do {
            __asm__("xorps xmm1, xmm1");
            __asm__("cvtsi2sd xmm1, esi");
            __asm__("divsd xmm1, xmm0");
            *rdi11 = rbx13[rax10 * 0x7d0];
            ++rdi11;
            ++rdx12;
        } while (rdx12 != 0x3e8);
        ++rax10;
    } while (rax10 != 0x3e8);
    *reinterpret_cast<int32_t*>(&rsi14) = 0x3e8;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi14) + 4) = reinterpret_cast<int32_t>(free);
    fun_7b0(0x1f4, 0x3e8, rbx15, r14_4, r12_7, r13_9, v3, v16, v17, v18, v19, v20, v21);
    if (ebp22 >= 43 && reinterpret_cast<int1_t>(**r15_23 == free)) {
        rsi14 = rbx24;
        fun_7ca(0x3e8, rsi14, rbx15, r14_4, r12_7, r13_9, v3, v25, v26, v27, v28, v29, v30);
    }
    fun_7d2(rbx31, rsi14, rbx15, r14_4, r12_7, r13_9, v3, v32, v33, v34, v35, v36, v37);
    fun_7da(r14_4, rsi14, rbx15, r14_4, r12_7, r13_9, v3, v38, v39, v40, v41, v42, v43);
    fun_7e2(r12_7, rsi14, rbx15, r14_4, r12_7, r13_9, v3, v44, v45, v46, v47, v48, v49);
    fun_7ea(r13_9, rsi14, rbx15, r14_4, r12_7, r13_9, v3, v50, v51, v52, v53, v54, v55);
    goto v56;
}

void fun_7e2(int64_t rdi, int32_t* rsi, int32_t* rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13) {
    int64_t r13_14;

    fun_7ea(r13_14, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11, a12);
    goto a13;
}

int64_t fun_723(int64_t rdi, int64_t rsi) {
    int64_t v3;
    int64_t r12_4;
    int64_t rax5;
    int64_t rax6;
    int64_t r13_7;
    int64_t rax8;
    int32_t* rdi9;
    int64_t rdx10;
    int32_t* rbx11;
    int32_t* rsi12;
    int32_t* rbx13;
    int64_t r14_14;
    int64_t v15;
    int64_t v16;
    int64_t v17;
    int64_t v18;
    int64_t v19;
    int64_t v20;
    int32_t ebp21;
    signed char** r15_22;
    int32_t* rbx23;
    int64_t v24;
    int64_t v25;
    int64_t v26;
    int64_t v27;
    int64_t v28;
    int64_t v29;
    int32_t* rbx30;
    int64_t v31;
    int64_t v32;
    int64_t v33;
    int64_t v34;
    int64_t v35;
    int64_t v36;
    int64_t r14_37;
    int64_t v38;
    int64_t v39;
    int64_t v40;
    int64_t v41;
    int64_t v42;
    int64_t v43;
    int64_t v44;
    int64_t v45;
    int64_t v46;
    int64_t v47;
    int64_t v48;
    int64_t v49;
    int64_t v50;
    int64_t v51;
    int64_t v52;
    int64_t v53;
    int64_t v54;
    int64_t v55;
    int64_t v56;

    v3 = reinterpret_cast<int64_t>(__return_address());
    r12_4 = rax5;
    rax6 = fun_735(0xf4240, 8);
    r13_7 = rax6;
    *reinterpret_cast<int32_t*>(&rax8) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax8) + 4) = reinterpret_cast<int32_t>(free);
    gf4240 = LCPI2_1;
    rdi9 = reinterpret_cast<int32_t*>(0xf4244);
    do {
        *reinterpret_cast<int32_t*>(&rdx10) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx10) + 4) = reinterpret_cast<int32_t>(free);
        do {
            __asm__("xorps xmm1, xmm1");
            __asm__("cvtsi2sd xmm1, esi");
            __asm__("divsd xmm1, xmm0");
            *rdi9 = rbx11[rax8 * 0x7d0];
            ++rdi9;
            ++rdx10;
        } while (rdx10 != 0x3e8);
        ++rax8;
    } while (rax8 != 0x3e8);
    *reinterpret_cast<int32_t*>(&rsi12) = 0x3e8;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi12) + 4) = reinterpret_cast<int32_t>(free);
    fun_7b0(0x1f4, 0x3e8, rbx13, r14_14, r12_4, r13_7, v3, v15, v16, v17, v18, v19, v20);
    if (ebp21 >= 43 && reinterpret_cast<int1_t>(**r15_22 == free)) {
        rsi12 = rbx23;
        fun_7ca(0x3e8, rsi12, rbx13, r14_14, r12_4, r13_7, v3, v24, v25, v26, v27, v28, v29);
    }
    fun_7d2(rbx30, rsi12, rbx13, r14_14, r12_4, r13_7, v3, v31, v32, v33, v34, v35, v36);
    fun_7da(r14_37, rsi12, rbx13, r14_14, r12_4, r13_7, v3, v38, v39, v40, v41, v42, v43);
    fun_7e2(r12_4, rsi12, rbx13, r14_14, r12_4, r13_7, v3, v44, v45, v46, v47, v48, v49);
    fun_7ea(r13_7, rsi12, rbx13, r14_14, r12_4, r13_7, v3, v50, v51, v52, v53, v54, v55);
    goto v56;
}

void fun_7ea(int64_t rdi, int32_t* rsi, int32_t* rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13) {
    goto a13;
}

int64_t fun_735(struct s75* rdi, int32_t* rsi) {
    int64_t v3;
    int64_t r13_4;
    int64_t rax5;
    int64_t rax6;
    int32_t* rdi7;
    int64_t rdx8;
    int32_t* rbx9;
    int32_t* rsi10;
    int32_t* rbx11;
    int64_t r14_12;
    int64_t r12_13;
    int64_t v14;
    int64_t v15;
    int64_t v16;
    int64_t v17;
    int64_t v18;
    int64_t v19;
    int32_t ebp20;
    signed char** r15_21;
    int32_t* rbx22;
    int64_t v23;
    int64_t v24;
    int64_t v25;
    int64_t v26;
    int64_t v27;
    int64_t v28;
    int32_t* rbx29;
    int64_t v30;
    int64_t v31;
    int64_t v32;
    int64_t v33;
    int64_t v34;
    int64_t v35;
    int64_t r14_36;
    int64_t v37;
    int64_t v38;
    int64_t v39;
    int64_t v40;
    int64_t v41;
    int64_t v42;
    int64_t r12_43;
    int64_t v44;
    int64_t v45;
    int64_t v46;
    int64_t v47;
    int64_t v48;
    int64_t v49;
    int64_t v50;
    int64_t v51;
    int64_t v52;
    int64_t v53;
    int64_t v54;
    int64_t v55;
    int64_t v56;

    v3 = reinterpret_cast<int64_t>(__return_address());
    r13_4 = rax5;
    *reinterpret_cast<int32_t*>(&rax6) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax6) + 4) = reinterpret_cast<int32_t>(free);
    rdi->f0 = *rsi;
    rdi7 = &rdi->f4;
    do {
        *reinterpret_cast<int32_t*>(&rdx8) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx8) + 4) = reinterpret_cast<int32_t>(free);
        do {
            __asm__("xorps xmm1, xmm1");
            __asm__("cvtsi2sd xmm1, esi");
            __asm__("divsd xmm1, xmm0");
            *rdi7 = rbx9[rax6 * 0x7d0];
            ++rdi7;
            ++rdx8;
        } while (rdx8 != 0x3e8);
        ++rax6;
    } while (rax6 != 0x3e8);
    *reinterpret_cast<int32_t*>(&rsi10) = 0x3e8;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi10) + 4) = reinterpret_cast<int32_t>(free);
    fun_7b0(0x1f4, 0x3e8, rbx11, r14_12, r12_13, r13_4, v3, v14, v15, v16, v17, v18, v19);
    if (ebp20 >= 43 && reinterpret_cast<int1_t>(**r15_21 == free)) {
        rsi10 = rbx22;
        fun_7ca(0x3e8, rsi10, rbx11, r14_12, r12_13, r13_4, v3, v23, v24, v25, v26, v27, v28);
    }
    fun_7d2(rbx29, rsi10, rbx11, r14_12, r12_13, r13_4, v3, v30, v31, v32, v33, v34, v35);
    fun_7da(r14_36, rsi10, rbx11, r14_12, r12_13, r13_4, v3, v37, v38, v39, v40, v41, v42);
    fun_7e2(r12_43, rsi10, rbx11, r14_12, r12_13, r13_4, v3, v44, v45, v46, v47, v48, v49);
    fun_7ea(r13_4, rsi10, rbx11, r14_12, r12_13, r13_4, v3, v50, v51, v52, v53, v54, v55);
    goto v56;
}

void free(int32_t edi) {
    if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(edi < reinterpret_cast<int32_t>(free) == free)) | reinterpret_cast<uint1_t>(edi == free))) {
        __asm__("cvtsi2sd xmm0, edi");
    }
}

void fun_c8() {
}

void submain(int32_t edi, int64_t rsi) {
    fun_6ff(0xf4240, 8);
}

