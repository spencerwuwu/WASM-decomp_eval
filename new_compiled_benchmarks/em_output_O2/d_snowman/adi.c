
void fun_191();

void free(int32_t edi);

void fun_1b9(int64_t rdi, int64_t rsi, int64_t rdx);

struct s0 {
    int32_t f0;
    signed char[167996] pad168000;
    int32_t f29040;
};

int32_t g1c0 = 0x16be;

int32_t g16 = 0x140f66c8;

int32_t g1c4 = 0x1ba00;

int32_t g1a = 0x66d231c8;

struct s1 {
    int32_t f0;
    int32_t f4;
};

struct s2 {
    signed char[8168] pad8168;
    int32_t f1fe8;
};

struct s3 {
    int32_t f0;
    int32_t f4;
};

int32_t g1fe8;

struct s4 {
    int32_t f0;
    int32_t f4;
};

int32_t g1fec;

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
    int32_t f1;
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
    signed char[1] pad1;
    int32_t f1;
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
    signed char[160] pad168;
    int32_t fa8;
};

struct s22 {
    int32_t f0;
    int32_t f4;
};

void fun_170() {
    int32_t* rdi1;
    int32_t* rsi2;
    int32_t* rbx3;
    int64_t r15_4;
    int64_t r12_5;
    int64_t r13_6;
    int64_t r12_7;
    int64_t rbp8;
    int64_t r12_9;
    int32_t* rbx10;
    int64_t rbx11;
    struct s0* rcx12;
    struct s0* rbx13;
    int64_t rsi14;
    int64_t v15;
    int64_t rdi16;
    struct s1* r13_17;
    int64_t r12_18;
    struct s2* r10_19;
    struct s3* rsi20;
    void* r8_21;
    int32_t* r11_22;
    uint64_t r14_23;
    int64_t* r8_24;
    struct s4* rsi25;
    struct s1* rsi26;
    int32_t* rdi27;
    struct s1* rbp28;
    void* r9_29;
    int64_t r9_30;
    int64_t r8_31;
    int32_t* rdi32;
    int32_t* rdi33;
    struct s1* rsi34;
    int32_t* rdi35;
    struct s5* rsi36;
    int32_t* rdi37;
    struct s6* rsi38;
    int32_t* rdi39;
    struct s7* rsi40;
    int32_t* rdi41;
    struct s8* rsi42;
    int32_t* rdi43;
    struct s5* rsi44;
    int32_t* rdi45;
    struct s6* rsi46;
    int32_t* rdi47;
    struct s7* rsi48;
    int32_t* rdi49;
    struct s8* rsi50;
    int32_t* rdi51;
    struct s9* rsi52;
    int32_t* rdi53;
    int32_t* rsi54;
    struct s10* rsi55;
    int32_t* r8_56;
    int32_t* rsi57;
    int32_t* r9_58;
    void* rsi59;
    struct s1* r12_60;
    int64_t r13_61;
    struct s11* rsi62;
    struct s12* rdi63;
    void* r8_64;
    void* r10_65;
    struct s13* rbp66;
    int64_t* r8_67;
    struct s14* rdi68;
    struct s15* rsi69;
    struct s1* rdi70;
    struct s16* rsi71;
    int32_t* r14_72;
    void* r9_73;
    int64_t r9_74;
    int64_t r8_75;
    struct s1* rdi76;
    int32_t* r8_77;
    struct s5* rdi78;
    struct s17* rsi79;
    struct s6* rdi80;
    struct s7* rdi81;
    struct s8* rdi82;
    int32_t* r9_83;
    struct s18* rsi84;
    int32_t* r8_85;
    struct s5* rdi86;
    struct s6* rdi87;
    struct s19* rsi88;
    struct s7* rdi89;
    struct s8* rdi90;
    struct s9* rdi91;
    struct s20* rsi92;
    int32_t* r9_93;
    int32_t* rdi94;
    struct s21* rsi95;
    struct s10* rdi96;
    int32_t* rdi97;
    struct s22* rsi98;
    void* rdi99;
    int64_t v100;

    while (1) {
        *rdi1 = *rsi2;
        rdi1 = rbx3;
        rsi2 = reinterpret_cast<int32_t*>(0x18a);
        fun_191();
        ++r15_4;
        if (r15_4 == r12_5) {
            ++r13_6;
            if (r13_6 == r12_7) 
                break;
            rbp8 = r13_6 * r12_9;
            *reinterpret_cast<int32_t*>(&r15_4) = reinterpret_cast<int32_t>(free);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_4) + 4) = reinterpret_cast<int32_t>(free);
        }
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r15_4 + rbp8) * 0xcccccccd + 0x19999998) > 0xccccccc) 
            continue;
        *reinterpret_cast<int32_t*>(&rdi1) = 10;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi1) + 4) = reinterpret_cast<int32_t>(free);
        rsi2 = rbx10;
        fun_170();
    }
    fun_1b9(rbx11, 0x1a8, 0x1af);
    rcx12 = rbx13;
    if (!free) {
        __asm__("cvtsi2sd xmm0, esi");
        g1c0 = g16;
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
        g1c4 = g1a;
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
        *reinterpret_cast<int32_t*>(&rsi14) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi14) + 4) = reinterpret_cast<int32_t>(free);
        while (1) {
            v15 = rsi14;
            if (free) {
                addr_2c0_21:
                rdi16 = v15;
                *reinterpret_cast<int32_t*>(&rsi14) = static_cast<int32_t>(rdi16 + 1);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi14) + 4) = reinterpret_cast<int32_t>(free);
                if (*reinterpret_cast<int32_t*>(&rdi16) == 0x1c0) 
                    break; else 
                    continue;
            } else {
                *reinterpret_cast<int32_t*>(&r13_17) = 1;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_17) + 4) = reinterpret_cast<int32_t>(free);
                *reinterpret_cast<int32_t*>(&r12_18) = reinterpret_cast<int32_t>(free);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_18) + 4) = reinterpret_cast<int32_t>(free);
                do {
                    r10_19 = reinterpret_cast<struct s2*>(r12_18 * 0x1f40);
                    rsi20 = reinterpret_cast<struct s3*>(reinterpret_cast<int64_t>(r8_21) + reinterpret_cast<int64_t>(r10_19) + 0x1f40);
                    r11_22 = &r10_19->f1fe8;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rcx12) + reinterpret_cast<uint64_t>(r13_17) * 8) = reinterpret_cast<int32_t>(0x3ff0000000000000);
                    r14_23 = reinterpret_cast<uint64_t>(r13_17) * 0x1f40;
                    *reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(r8_24) + r14_23) = reinterpret_cast<int64_t>(free);
                    g1fe8 = rsi20->f0;
                    rsi25 = reinterpret_cast<struct s4*>(&rsi20->f4);
                    g1fec = rsi25->f0;
                    rsi26 = reinterpret_cast<struct s1*>(&rsi25->f4);
                    rdi27 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(r13_17) - 1);
                    rbp28 = reinterpret_cast<struct s1*>(reinterpret_cast<uint64_t>(r13_17) + 1);
                    if (reinterpret_cast<uint64_t>(rsi26) >= reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(r9_29) + reinterpret_cast<int64_t>(r11_22)) || (*reinterpret_cast<int32_t*>(&rsi26) = 1, *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi26) + 4) = reinterpret_cast<int32_t>(free), reinterpret_cast<uint64_t>(r9_30 + reinterpret_cast<int64_t>(r10_19) + 0x1f40) >= reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(r11_22) + r8_31))) {
                        *rdi27 = rsi26->f0;
                        rdi32 = rdi27 + 1;
                        *rdi32 = rsi26->f4;
                        rdi33 = rdi32 + 1;
                        *reinterpret_cast<int32_t*>(&rsi34) = 1;
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi34) + 4) = reinterpret_cast<int32_t>(free);
                        do {
                            __asm__("mulsd xmm9, xmm3");
                            __asm__("addsd xmm9, xmm1");
                            __asm__("movapd xmm10, xmm5");
                            __asm__("divsd xmm10, xmm9");
                            *rdi33 = rsi34->f0;
                            rdi35 = rdi33 + 1;
                            rsi36 = reinterpret_cast<struct s5*>(&rsi34->f4);
                            *rdi35 = rsi36->f0;
                            rdi37 = rdi35 + 1;
                            rsi38 = reinterpret_cast<struct s6*>(&rsi36->f4);
                            __asm__("mulsd xmm11, xmm6");
                            *rdi37 = rsi38->f0;
                            rdi39 = rdi37 + 1;
                            rsi40 = reinterpret_cast<struct s7*>(&rsi38->f4);
                            __asm__("mulsd xmm12, xmm4");
                            __asm__("addsd xmm12, xmm11");
                            *rdi39 = rsi40->f0;
                            rdi41 = rdi39 + 1;
                            rsi42 = reinterpret_cast<struct s8*>(&rsi40->f4);
                            __asm__("mulsd xmm11, xmm4");
                            __asm__("addsd xmm11, xmm12");
                            __asm__("mulsd xmm8, xmm5");
                            __asm__("addsd xmm8, xmm11");
                            __asm__("divsd xmm8, xmm9");
                            *rdi41 = rsi42->f0;
                            rdi33 = rdi41 + 1;
                            rsi34 = reinterpret_cast<struct s1*>(reinterpret_cast<uint64_t>(&rsi42->f4) + 1);
                            __asm__("movapd xmm9, xmm10");
                        } while (!reinterpret_cast<int1_t>(rsi34 == 21));
                    } else {
                        do {
                            *rdi27 = rsi26->f0;
                            rdi43 = rdi27 + 1;
                            rsi44 = reinterpret_cast<struct s5*>(&rsi26->f4);
                            __asm__("mulsd xmm8, xmm3");
                            __asm__("addsd xmm8, xmm1");
                            __asm__("movapd xmm9, xmm5");
                            __asm__("divsd xmm9, xmm8");
                            *rdi43 = rsi44->f0;
                            rdi45 = rdi43 + 1;
                            rsi46 = reinterpret_cast<struct s6*>(&rsi44->f4);
                            *rdi45 = rsi46->f0;
                            rdi47 = rdi45 + 1;
                            rsi48 = reinterpret_cast<struct s7*>(&rsi46->f4);
                            __asm__("mulsd xmm9, xmm6");
                            *rdi47 = rsi48->f0;
                            rdi49 = rdi47 + 1;
                            rsi50 = reinterpret_cast<struct s8*>(&rsi48->f4);
                            __asm__("mulsd xmm10, xmm4");
                            __asm__("addsd xmm10, xmm9");
                            *rdi49 = rsi50->f0;
                            rdi51 = rdi49 + 1;
                            rsi52 = reinterpret_cast<struct s9*>(&rsi50->f4);
                            __asm__("mulsd xmm9, xmm4");
                            __asm__("addsd xmm9, xmm10");
                            *rdi51 = rsi52->f0;
                            rdi53 = rdi51 + 1;
                            rsi54 = &rsi52->f1;
                            __asm__("mulsd xmm10, xmm5");
                            __asm__("addsd xmm10, xmm9");
                            __asm__("divsd xmm10, xmm8");
                            *rdi53 = *rsi54;
                            rdi27 = rdi53 + 1;
                            rsi26 = reinterpret_cast<struct s1*>(reinterpret_cast<uint64_t>(rsi54 + 1) + 1);
                        } while (!reinterpret_cast<int1_t>(rsi26 == 21));
                    }
                    (&rcx12->f29040)[reinterpret_cast<uint64_t>(r13_17) * 2] = reinterpret_cast<int32_t>(0x3ff0000000000000);
                    rsi55 = reinterpret_cast<struct s10*>(20);
                    do {
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(r8_56) + r14_23) = rsi55->f0;
                        rsi57 = &rsi55->f4;
                        __asm__("mulsd xmm8, [r10+r13*8+0x1f40]");
                        __asm__("addsd xmm8, [rdi+rsi*8]");
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(r9_58) + r14_23) = *rsi57;
                        rsi59 = reinterpret_cast<void*>(rsi57 + 1);
                        rsi55 = reinterpret_cast<struct s10*>(reinterpret_cast<uint64_t>(rsi59) + 0xffffffffffffffff);
                    } while (reinterpret_cast<int64_t>(rsi59) > reinterpret_cast<int64_t>(1));
                    ++r12_18;
                    r13_17 = rbp28;
                } while (!reinterpret_cast<int1_t>(rbp28 == 21));
                if (free) 
                    goto addr_2c0_21;
            }
            *reinterpret_cast<int32_t*>(&r12_60) = 1;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_60) + 4) = reinterpret_cast<int32_t>(free);
            *reinterpret_cast<int32_t*>(&r13_61) = reinterpret_cast<int32_t>(free);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_61) + 4) = reinterpret_cast<int32_t>(free);
            do {
                rsi62 = reinterpret_cast<struct s11*>(r13_61 * 0x1f40);
                rdi63 = reinterpret_cast<struct s12*>(reinterpret_cast<int64_t>(r8_64) + reinterpret_cast<int64_t>(rsi62) + 0x1f40);
                r10_65 = reinterpret_cast<void*>(&(rsi62 + 0x3fd)->f0);
                rbp66 = reinterpret_cast<struct s13*>(reinterpret_cast<uint64_t>(r12_60) * 0x1f40);
                rbp66->f1 = reinterpret_cast<int32_t>(0x3ff0000000000000);
                *reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(r8_67) + reinterpret_cast<uint64_t>(rbp66)) = reinterpret_cast<int64_t>(free);
                rdi63->f0 = rsi62->f0;
                rdi68 = reinterpret_cast<struct s14*>(&rdi63->f4);
                rsi69 = reinterpret_cast<struct s15*>(&rsi62->f4);
                rdi68->f0 = rsi69->f0;
                rdi70 = reinterpret_cast<struct s1*>(&rdi68->f4);
                rsi71 = reinterpret_cast<struct s16*>(&rsi69->f4);
                r14_72 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(r12_60) - 1);
                r12_60 = reinterpret_cast<struct s1*>(reinterpret_cast<uint64_t>(r12_60) + 1);
                if (reinterpret_cast<uint64_t>(rdi70) >= reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(r9_73) + reinterpret_cast<int64_t>(r10_65)) || (*reinterpret_cast<int32_t*>(&rdi70) = 1, *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi70) + 4) = reinterpret_cast<int32_t>(free), reinterpret_cast<uint64_t>(r9_74 + reinterpret_cast<int64_t>(rsi71) + 0x1f40) >= reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(r10_65) + r8_75))) {
                    rdi70->f0 = rsi71->f0;
                    rdi70->f4 = rsi71->f4;
                    *reinterpret_cast<int32_t*>(&rdi76) = 1;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi76) + 4) = reinterpret_cast<int32_t>(free);
                    do {
                        __asm__("mulsd xmm9, xmm2");
                        __asm__("addsd xmm9, xmm0");
                        __asm__("movapd xmm10, xmm4");
                        __asm__("divsd xmm10, xmm9");
                        rdi76->f0 = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(r8_77) + reinterpret_cast<uint64_t>(rbp66));
                        rdi78 = reinterpret_cast<struct s5*>(&rdi76->f4);
                        rsi79 = reinterpret_cast<struct s17*>(reinterpret_cast<uint64_t>(r14_72) * 0x1f40 + reinterpret_cast<int64_t>(rcx12));
                        rdi78->f0 = rsi79->f0;
                        rdi80 = reinterpret_cast<struct s6*>(&rdi78->f4);
                        __asm__("mulsd xmm11, xmm7");
                        rdi80->f0 = rsi79->f4;
                        rdi81 = reinterpret_cast<struct s7*>(&rdi80->f4);
                        __asm__("mulsd xmm12, xmm5");
                        __asm__("addsd xmm12, xmm11");
                        rdi81->f0 = *reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(r12_60) * 0x1f40 + reinterpret_cast<int64_t>(rcx12));
                        rdi82 = reinterpret_cast<struct s8*>(&rdi81->f4);
                        __asm__("mulsd xmm11, xmm5");
                        __asm__("addsd xmm11, xmm12");
                        __asm__("mulsd xmm8, xmm4");
                        __asm__("addsd xmm8, xmm11");
                        __asm__("divsd xmm8, xmm9");
                        rdi82->f0 = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(r9_83) + reinterpret_cast<uint64_t>(rbp66));
                        rdi76 = reinterpret_cast<struct s1*>(reinterpret_cast<uint64_t>(&rdi82->f4) + 1);
                        __asm__("movapd xmm9, xmm10");
                    } while (!reinterpret_cast<int1_t>(rdi76 == 21));
                } else {
                    do {
                        rsi84 = reinterpret_cast<struct s18*>(reinterpret_cast<int64_t>(r8_85) + reinterpret_cast<uint64_t>(rbp66));
                        rdi70->f0 = rsi84->f0;
                        rdi86 = reinterpret_cast<struct s5*>(&rdi70->f4);
                        __asm__("mulsd xmm8, xmm2");
                        __asm__("addsd xmm8, xmm0");
                        __asm__("movapd xmm9, xmm4");
                        __asm__("divsd xmm9, xmm8");
                        rdi86->f0 = rsi84->f4;
                        rdi87 = reinterpret_cast<struct s6*>(&rdi86->f4);
                        rsi88 = reinterpret_cast<struct s19*>(reinterpret_cast<uint64_t>(r14_72) * 0x1f40 + reinterpret_cast<int64_t>(rcx12));
                        rdi87->f0 = rsi88->f0;
                        rdi89 = reinterpret_cast<struct s7*>(&rdi87->f4);
                        __asm__("mulsd xmm9, xmm7");
                        rdi89->f0 = rsi88->f4;
                        rdi90 = reinterpret_cast<struct s8*>(&rdi89->f4);
                        __asm__("mulsd xmm10, xmm5");
                        __asm__("addsd xmm10, xmm9");
                        rdi90->f0 = *reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(r12_60) * 0x1f40 + reinterpret_cast<int64_t>(rcx12));
                        rdi91 = reinterpret_cast<struct s9*>(&rdi90->f4);
                        __asm__("mulsd xmm9, xmm5");
                        __asm__("addsd xmm9, xmm10");
                        rsi92 = reinterpret_cast<struct s20*>(reinterpret_cast<int64_t>(r9_93) + reinterpret_cast<uint64_t>(rbp66));
                        rdi91->f0 = rsi92->f0;
                        rdi94 = &rdi91->f1;
                        __asm__("mulsd xmm10, xmm4");
                        __asm__("addsd xmm10, xmm9");
                        __asm__("divsd xmm10, xmm8");
                        *rdi94 = rsi92->f4;
                        rdi70 = reinterpret_cast<struct s1*>(reinterpret_cast<uint64_t>(rdi94 + 1) + 1);
                    } while (!reinterpret_cast<int1_t>(rdi70 == 21));
                }
                rsi95 = reinterpret_cast<struct s21*>(&rbp66->f1);
                rsi95->fa8 = reinterpret_cast<int32_t>(0x3ff0000000000000);
                rdi96 = reinterpret_cast<struct s10*>(20);
                do {
                    rdi96->f0 = rsi95->f0;
                    rdi97 = &rdi96->f4;
                    rsi98 = reinterpret_cast<struct s22*>(&rsi95->f4);
                    __asm__("mulsd xmm8, [rsi+rdi*8+0x8]");
                    __asm__("addsd xmm8, [r10+rdi*8]");
                    *rdi97 = rsi98->f0;
                    rdi99 = reinterpret_cast<void*>(rdi97 + 1);
                    rsi95 = reinterpret_cast<struct s21*>(&rsi98->f4);
                    rdi96 = reinterpret_cast<struct s10*>(reinterpret_cast<uint64_t>(rdi99) + 0xffffffffffffffff);
                } while (reinterpret_cast<int64_t>(rdi99) > reinterpret_cast<int64_t>(1));
                ++r13_61;
            } while (!reinterpret_cast<int1_t>(r12_60 == 21));
            goto addr_2c0_21;
        }
    }
    goto v100;
}

struct s23 {
    int32_t f0;
    signed char[167996] pad168000;
    int32_t f29040;
};

struct s24 {
    int32_t f0;
    int32_t f4;
};

struct s25 {
    signed char[8168] pad8168;
    int32_t f1fe8;
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

struct s32 {
    int32_t f0;
    int32_t f1;
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
    signed char[1] pad1;
    int32_t f1;
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
    int32_t f0;
    int32_t f4;
};

struct s40 {
    int32_t f0;
    int32_t f4;
};

struct s41 {
    int32_t f0;
    int32_t f4;
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
    signed char[160] pad168;
    int32_t fa8;
};

struct s45 {
    int32_t f0;
    int32_t f4;
};

void fun_191() {
    int64_t r15_1;
    int64_t r12_2;
    int64_t r13_3;
    int64_t r12_4;
    int64_t rbp5;
    int64_t r12_6;
    int32_t* rdi7;
    int32_t* rsi8;
    int32_t* rbx9;
    int32_t* rbx10;
    int64_t rbx11;
    struct s23* rcx12;
    struct s23* rbx13;
    int64_t rsi14;
    int64_t v15;
    int64_t rdi16;
    struct s24* r13_17;
    int64_t r12_18;
    struct s25* r10_19;
    struct s26* rsi20;
    void* r8_21;
    int32_t* r11_22;
    uint64_t r14_23;
    int64_t* r8_24;
    struct s27* rsi25;
    struct s24* rsi26;
    int32_t* rdi27;
    struct s24* rbp28;
    void* r9_29;
    int64_t r9_30;
    int64_t r8_31;
    int32_t* rdi32;
    int32_t* rdi33;
    struct s24* rsi34;
    int32_t* rdi35;
    struct s28* rsi36;
    int32_t* rdi37;
    struct s29* rsi38;
    int32_t* rdi39;
    struct s30* rsi40;
    int32_t* rdi41;
    struct s31* rsi42;
    int32_t* rdi43;
    struct s28* rsi44;
    int32_t* rdi45;
    struct s29* rsi46;
    int32_t* rdi47;
    struct s30* rsi48;
    int32_t* rdi49;
    struct s31* rsi50;
    int32_t* rdi51;
    struct s32* rsi52;
    int32_t* rdi53;
    int32_t* rsi54;
    struct s33* rsi55;
    int32_t* r8_56;
    int32_t* rsi57;
    int32_t* r9_58;
    void* rsi59;
    struct s24* r12_60;
    int64_t r13_61;
    struct s34* rsi62;
    struct s35* rdi63;
    void* r8_64;
    void* r10_65;
    struct s36* rbp66;
    int64_t* r8_67;
    struct s37* rdi68;
    struct s38* rsi69;
    struct s24* rdi70;
    struct s39* rsi71;
    int32_t* r14_72;
    void* r9_73;
    int64_t r9_74;
    int64_t r8_75;
    struct s24* rdi76;
    int32_t* r8_77;
    struct s28* rdi78;
    struct s40* rsi79;
    struct s29* rdi80;
    struct s30* rdi81;
    struct s31* rdi82;
    int32_t* r9_83;
    struct s41* rsi84;
    int32_t* r8_85;
    struct s28* rdi86;
    struct s29* rdi87;
    struct s42* rsi88;
    struct s30* rdi89;
    struct s31* rdi90;
    struct s32* rdi91;
    struct s43* rsi92;
    int32_t* r9_93;
    int32_t* rdi94;
    struct s44* rsi95;
    struct s33* rdi96;
    int32_t* rdi97;
    struct s45* rsi98;
    void* rdi99;
    int64_t v100;

    while (1) {
        ++r15_1;
        if (r15_1 == r12_2) {
            ++r13_3;
            if (r13_3 == r12_4) 
                break;
            rbp5 = r13_3 * r12_6;
            *reinterpret_cast<int32_t*>(&r15_1) = reinterpret_cast<int32_t>(free);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_1) + 4) = reinterpret_cast<int32_t>(free);
        }
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r15_1 + rbp5) * 0xcccccccd + 0x19999998) <= 0xccccccc) {
            *reinterpret_cast<int32_t*>(&rdi7) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi7) + 4) = reinterpret_cast<int32_t>(free);
            rsi8 = rbx9;
            fun_170();
        }
        *rdi7 = *rsi8;
        rdi7 = rbx10;
        rsi8 = reinterpret_cast<int32_t*>(0x18a);
        fun_191();
    }
    fun_1b9(rbx11, 0x1a8, 0x1af);
    rcx12 = rbx13;
    if (!free) {
        __asm__("cvtsi2sd xmm0, esi");
        g1c0 = g16;
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
        g1c4 = g1a;
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
        *reinterpret_cast<int32_t*>(&rsi14) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi14) + 4) = reinterpret_cast<int32_t>(free);
        while (1) {
            v15 = rsi14;
            if (free) {
                addr_2c0_21:
                rdi16 = v15;
                *reinterpret_cast<int32_t*>(&rsi14) = static_cast<int32_t>(rdi16 + 1);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi14) + 4) = reinterpret_cast<int32_t>(free);
                if (*reinterpret_cast<int32_t*>(&rdi16) == 0x1c0) 
                    break; else 
                    continue;
            } else {
                *reinterpret_cast<int32_t*>(&r13_17) = 1;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_17) + 4) = reinterpret_cast<int32_t>(free);
                *reinterpret_cast<int32_t*>(&r12_18) = reinterpret_cast<int32_t>(free);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_18) + 4) = reinterpret_cast<int32_t>(free);
                do {
                    r10_19 = reinterpret_cast<struct s25*>(r12_18 * 0x1f40);
                    rsi20 = reinterpret_cast<struct s26*>(reinterpret_cast<int64_t>(r8_21) + reinterpret_cast<int64_t>(r10_19) + 0x1f40);
                    r11_22 = &r10_19->f1fe8;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rcx12) + reinterpret_cast<uint64_t>(r13_17) * 8) = reinterpret_cast<int32_t>(0x3ff0000000000000);
                    r14_23 = reinterpret_cast<uint64_t>(r13_17) * 0x1f40;
                    *reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(r8_24) + r14_23) = reinterpret_cast<int64_t>(free);
                    g1fe8 = rsi20->f0;
                    rsi25 = reinterpret_cast<struct s27*>(&rsi20->f4);
                    g1fec = rsi25->f0;
                    rsi26 = reinterpret_cast<struct s24*>(&rsi25->f4);
                    rdi27 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(r13_17) - 1);
                    rbp28 = reinterpret_cast<struct s24*>(reinterpret_cast<uint64_t>(r13_17) + 1);
                    if (reinterpret_cast<uint64_t>(rsi26) >= reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(r9_29) + reinterpret_cast<int64_t>(r11_22)) || (*reinterpret_cast<int32_t*>(&rsi26) = 1, *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi26) + 4) = reinterpret_cast<int32_t>(free), reinterpret_cast<uint64_t>(r9_30 + reinterpret_cast<int64_t>(r10_19) + 0x1f40) >= reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(r11_22) + r8_31))) {
                        *rdi27 = rsi26->f0;
                        rdi32 = rdi27 + 1;
                        *rdi32 = rsi26->f4;
                        rdi33 = rdi32 + 1;
                        *reinterpret_cast<int32_t*>(&rsi34) = 1;
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi34) + 4) = reinterpret_cast<int32_t>(free);
                        do {
                            __asm__("mulsd xmm9, xmm3");
                            __asm__("addsd xmm9, xmm1");
                            __asm__("movapd xmm10, xmm5");
                            __asm__("divsd xmm10, xmm9");
                            *rdi33 = rsi34->f0;
                            rdi35 = rdi33 + 1;
                            rsi36 = reinterpret_cast<struct s28*>(&rsi34->f4);
                            *rdi35 = rsi36->f0;
                            rdi37 = rdi35 + 1;
                            rsi38 = reinterpret_cast<struct s29*>(&rsi36->f4);
                            __asm__("mulsd xmm11, xmm6");
                            *rdi37 = rsi38->f0;
                            rdi39 = rdi37 + 1;
                            rsi40 = reinterpret_cast<struct s30*>(&rsi38->f4);
                            __asm__("mulsd xmm12, xmm4");
                            __asm__("addsd xmm12, xmm11");
                            *rdi39 = rsi40->f0;
                            rdi41 = rdi39 + 1;
                            rsi42 = reinterpret_cast<struct s31*>(&rsi40->f4);
                            __asm__("mulsd xmm11, xmm4");
                            __asm__("addsd xmm11, xmm12");
                            __asm__("mulsd xmm8, xmm5");
                            __asm__("addsd xmm8, xmm11");
                            __asm__("divsd xmm8, xmm9");
                            *rdi41 = rsi42->f0;
                            rdi33 = rdi41 + 1;
                            rsi34 = reinterpret_cast<struct s24*>(reinterpret_cast<uint64_t>(&rsi42->f4) + 1);
                            __asm__("movapd xmm9, xmm10");
                        } while (!reinterpret_cast<int1_t>(rsi34 == 21));
                    } else {
                        do {
                            *rdi27 = rsi26->f0;
                            rdi43 = rdi27 + 1;
                            rsi44 = reinterpret_cast<struct s28*>(&rsi26->f4);
                            __asm__("mulsd xmm8, xmm3");
                            __asm__("addsd xmm8, xmm1");
                            __asm__("movapd xmm9, xmm5");
                            __asm__("divsd xmm9, xmm8");
                            *rdi43 = rsi44->f0;
                            rdi45 = rdi43 + 1;
                            rsi46 = reinterpret_cast<struct s29*>(&rsi44->f4);
                            *rdi45 = rsi46->f0;
                            rdi47 = rdi45 + 1;
                            rsi48 = reinterpret_cast<struct s30*>(&rsi46->f4);
                            __asm__("mulsd xmm9, xmm6");
                            *rdi47 = rsi48->f0;
                            rdi49 = rdi47 + 1;
                            rsi50 = reinterpret_cast<struct s31*>(&rsi48->f4);
                            __asm__("mulsd xmm10, xmm4");
                            __asm__("addsd xmm10, xmm9");
                            *rdi49 = rsi50->f0;
                            rdi51 = rdi49 + 1;
                            rsi52 = reinterpret_cast<struct s32*>(&rsi50->f4);
                            __asm__("mulsd xmm9, xmm4");
                            __asm__("addsd xmm9, xmm10");
                            *rdi51 = rsi52->f0;
                            rdi53 = rdi51 + 1;
                            rsi54 = &rsi52->f1;
                            __asm__("mulsd xmm10, xmm5");
                            __asm__("addsd xmm10, xmm9");
                            __asm__("divsd xmm10, xmm8");
                            *rdi53 = *rsi54;
                            rdi27 = rdi53 + 1;
                            rsi26 = reinterpret_cast<struct s24*>(reinterpret_cast<uint64_t>(rsi54 + 1) + 1);
                        } while (!reinterpret_cast<int1_t>(rsi26 == 21));
                    }
                    (&rcx12->f29040)[reinterpret_cast<uint64_t>(r13_17) * 2] = reinterpret_cast<int32_t>(0x3ff0000000000000);
                    rsi55 = reinterpret_cast<struct s33*>(20);
                    do {
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(r8_56) + r14_23) = rsi55->f0;
                        rsi57 = &rsi55->f4;
                        __asm__("mulsd xmm8, [r10+r13*8+0x1f40]");
                        __asm__("addsd xmm8, [rdi+rsi*8]");
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(r9_58) + r14_23) = *rsi57;
                        rsi59 = reinterpret_cast<void*>(rsi57 + 1);
                        rsi55 = reinterpret_cast<struct s33*>(reinterpret_cast<uint64_t>(rsi59) + 0xffffffffffffffff);
                    } while (reinterpret_cast<int64_t>(rsi59) > reinterpret_cast<int64_t>(1));
                    ++r12_18;
                    r13_17 = rbp28;
                } while (!reinterpret_cast<int1_t>(rbp28 == 21));
                if (free) 
                    goto addr_2c0_21;
            }
            *reinterpret_cast<int32_t*>(&r12_60) = 1;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_60) + 4) = reinterpret_cast<int32_t>(free);
            *reinterpret_cast<int32_t*>(&r13_61) = reinterpret_cast<int32_t>(free);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_61) + 4) = reinterpret_cast<int32_t>(free);
            do {
                rsi62 = reinterpret_cast<struct s34*>(r13_61 * 0x1f40);
                rdi63 = reinterpret_cast<struct s35*>(reinterpret_cast<int64_t>(r8_64) + reinterpret_cast<int64_t>(rsi62) + 0x1f40);
                r10_65 = reinterpret_cast<void*>(&(rsi62 + 0x3fd)->f0);
                rbp66 = reinterpret_cast<struct s36*>(reinterpret_cast<uint64_t>(r12_60) * 0x1f40);
                rbp66->f1 = reinterpret_cast<int32_t>(0x3ff0000000000000);
                *reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(r8_67) + reinterpret_cast<uint64_t>(rbp66)) = reinterpret_cast<int64_t>(free);
                rdi63->f0 = rsi62->f0;
                rdi68 = reinterpret_cast<struct s37*>(&rdi63->f4);
                rsi69 = reinterpret_cast<struct s38*>(&rsi62->f4);
                rdi68->f0 = rsi69->f0;
                rdi70 = reinterpret_cast<struct s24*>(&rdi68->f4);
                rsi71 = reinterpret_cast<struct s39*>(&rsi69->f4);
                r14_72 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(r12_60) - 1);
                r12_60 = reinterpret_cast<struct s24*>(reinterpret_cast<uint64_t>(r12_60) + 1);
                if (reinterpret_cast<uint64_t>(rdi70) >= reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(r9_73) + reinterpret_cast<int64_t>(r10_65)) || (*reinterpret_cast<int32_t*>(&rdi70) = 1, *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi70) + 4) = reinterpret_cast<int32_t>(free), reinterpret_cast<uint64_t>(r9_74 + reinterpret_cast<int64_t>(rsi71) + 0x1f40) >= reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(r10_65) + r8_75))) {
                    rdi70->f0 = rsi71->f0;
                    rdi70->f4 = rsi71->f4;
                    *reinterpret_cast<int32_t*>(&rdi76) = 1;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi76) + 4) = reinterpret_cast<int32_t>(free);
                    do {
                        __asm__("mulsd xmm9, xmm2");
                        __asm__("addsd xmm9, xmm0");
                        __asm__("movapd xmm10, xmm4");
                        __asm__("divsd xmm10, xmm9");
                        rdi76->f0 = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(r8_77) + reinterpret_cast<uint64_t>(rbp66));
                        rdi78 = reinterpret_cast<struct s28*>(&rdi76->f4);
                        rsi79 = reinterpret_cast<struct s40*>(reinterpret_cast<uint64_t>(r14_72) * 0x1f40 + reinterpret_cast<int64_t>(rcx12));
                        rdi78->f0 = rsi79->f0;
                        rdi80 = reinterpret_cast<struct s29*>(&rdi78->f4);
                        __asm__("mulsd xmm11, xmm7");
                        rdi80->f0 = rsi79->f4;
                        rdi81 = reinterpret_cast<struct s30*>(&rdi80->f4);
                        __asm__("mulsd xmm12, xmm5");
                        __asm__("addsd xmm12, xmm11");
                        rdi81->f0 = *reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(r12_60) * 0x1f40 + reinterpret_cast<int64_t>(rcx12));
                        rdi82 = reinterpret_cast<struct s31*>(&rdi81->f4);
                        __asm__("mulsd xmm11, xmm5");
                        __asm__("addsd xmm11, xmm12");
                        __asm__("mulsd xmm8, xmm4");
                        __asm__("addsd xmm8, xmm11");
                        __asm__("divsd xmm8, xmm9");
                        rdi82->f0 = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(r9_83) + reinterpret_cast<uint64_t>(rbp66));
                        rdi76 = reinterpret_cast<struct s24*>(reinterpret_cast<uint64_t>(&rdi82->f4) + 1);
                        __asm__("movapd xmm9, xmm10");
                    } while (!reinterpret_cast<int1_t>(rdi76 == 21));
                } else {
                    do {
                        rsi84 = reinterpret_cast<struct s41*>(reinterpret_cast<int64_t>(r8_85) + reinterpret_cast<uint64_t>(rbp66));
                        rdi70->f0 = rsi84->f0;
                        rdi86 = reinterpret_cast<struct s28*>(&rdi70->f4);
                        __asm__("mulsd xmm8, xmm2");
                        __asm__("addsd xmm8, xmm0");
                        __asm__("movapd xmm9, xmm4");
                        __asm__("divsd xmm9, xmm8");
                        rdi86->f0 = rsi84->f4;
                        rdi87 = reinterpret_cast<struct s29*>(&rdi86->f4);
                        rsi88 = reinterpret_cast<struct s42*>(reinterpret_cast<uint64_t>(r14_72) * 0x1f40 + reinterpret_cast<int64_t>(rcx12));
                        rdi87->f0 = rsi88->f0;
                        rdi89 = reinterpret_cast<struct s30*>(&rdi87->f4);
                        __asm__("mulsd xmm9, xmm7");
                        rdi89->f0 = rsi88->f4;
                        rdi90 = reinterpret_cast<struct s31*>(&rdi89->f4);
                        __asm__("mulsd xmm10, xmm5");
                        __asm__("addsd xmm10, xmm9");
                        rdi90->f0 = *reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(r12_60) * 0x1f40 + reinterpret_cast<int64_t>(rcx12));
                        rdi91 = reinterpret_cast<struct s32*>(&rdi90->f4);
                        __asm__("mulsd xmm9, xmm5");
                        __asm__("addsd xmm9, xmm10");
                        rsi92 = reinterpret_cast<struct s43*>(reinterpret_cast<int64_t>(r9_93) + reinterpret_cast<uint64_t>(rbp66));
                        rdi91->f0 = rsi92->f0;
                        rdi94 = &rdi91->f1;
                        __asm__("mulsd xmm10, xmm4");
                        __asm__("addsd xmm10, xmm9");
                        __asm__("divsd xmm10, xmm8");
                        *rdi94 = rsi92->f4;
                        rdi70 = reinterpret_cast<struct s24*>(reinterpret_cast<uint64_t>(rdi94 + 1) + 1);
                    } while (!reinterpret_cast<int1_t>(rdi70 == 21));
                }
                rsi95 = reinterpret_cast<struct s44*>(&rbp66->f1);
                rsi95->fa8 = reinterpret_cast<int32_t>(0x3ff0000000000000);
                rdi96 = reinterpret_cast<struct s33*>(20);
                do {
                    rdi96->f0 = rsi95->f0;
                    rdi97 = &rdi96->f4;
                    rsi98 = reinterpret_cast<struct s45*>(&rsi95->f4);
                    __asm__("mulsd xmm8, [rsi+rdi*8+0x8]");
                    __asm__("addsd xmm8, [r10+rdi*8]");
                    *rdi97 = rsi98->f0;
                    rdi99 = reinterpret_cast<void*>(rdi97 + 1);
                    rsi95 = reinterpret_cast<struct s44*>(&rsi98->f4);
                    rdi96 = reinterpret_cast<struct s33*>(reinterpret_cast<uint64_t>(rdi99) + 0xffffffffffffffff);
                } while (reinterpret_cast<int64_t>(rdi99) > reinterpret_cast<int64_t>(1));
                ++r13_61;
            } while (!reinterpret_cast<int1_t>(r12_60 == 21));
            goto addr_2c0_21;
        }
    }
    goto v100;
}

struct s46 {
    int32_t f0;
    signed char[167996] pad168000;
    int32_t f29040;
};

struct s47 {
    int32_t f0;
    int32_t f4;
};

struct s48 {
    signed char[8168] pad8168;
    int32_t f1fe8;
};

struct s49 {
    int32_t f0;
    int32_t f4;
};

struct s50 {
    int32_t f0;
    int32_t f4;
};

struct s51 {
    int32_t f0;
    int32_t f4;
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
    int32_t f1;
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
    signed char[1] pad1;
    int32_t f1;
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
    int32_t f0;
    int32_t f4;
};

struct s65 {
    int32_t f0;
    int32_t f4;
};

struct s66 {
    int32_t f0;
    int32_t f4;
};

struct s67 {
    int32_t f0;
    int32_t f4;
    signed char[160] pad168;
    int32_t fa8;
};

struct s68 {
    int32_t f0;
    int32_t f4;
};

void fun_1b9(int64_t rdi, int64_t rsi, int64_t rdx) {
    struct s46* rcx4;
    struct s46* rbx5;
    int64_t rsi6;
    int64_t v7;
    int64_t rdi8;
    struct s47* r13_9;
    int64_t r12_10;
    struct s48* r10_11;
    struct s49* rsi12;
    void* r8_13;
    int32_t* r11_14;
    uint64_t r14_15;
    int64_t* r8_16;
    struct s50* rsi17;
    struct s47* rsi18;
    int32_t* rdi19;
    struct s47* rbp20;
    void* r9_21;
    int64_t r9_22;
    int64_t r8_23;
    int32_t* rdi24;
    int32_t* rdi25;
    struct s47* rsi26;
    int32_t* rdi27;
    struct s51* rsi28;
    int32_t* rdi29;
    struct s52* rsi30;
    int32_t* rdi31;
    struct s53* rsi32;
    int32_t* rdi33;
    struct s54* rsi34;
    int32_t* rdi35;
    struct s51* rsi36;
    int32_t* rdi37;
    struct s52* rsi38;
    int32_t* rdi39;
    struct s53* rsi40;
    int32_t* rdi41;
    struct s54* rsi42;
    int32_t* rdi43;
    struct s55* rsi44;
    int32_t* rdi45;
    int32_t* rsi46;
    struct s56* rsi47;
    int32_t* r8_48;
    int32_t* rsi49;
    int32_t* r9_50;
    void* rsi51;
    struct s47* r12_52;
    int64_t r13_53;
    struct s57* rsi54;
    struct s58* rdi55;
    void* r8_56;
    void* r10_57;
    struct s59* rbp58;
    int64_t* r8_59;
    struct s60* rdi60;
    struct s61* rsi61;
    struct s47* rdi62;
    struct s62* rsi63;
    int32_t* r14_64;
    void* r9_65;
    int64_t r9_66;
    int64_t r8_67;
    struct s47* rdi68;
    int32_t* r8_69;
    struct s51* rdi70;
    struct s63* rsi71;
    struct s52* rdi72;
    struct s53* rdi73;
    struct s54* rdi74;
    int32_t* r9_75;
    struct s64* rsi76;
    int32_t* r8_77;
    struct s51* rdi78;
    struct s52* rdi79;
    struct s65* rsi80;
    struct s53* rdi81;
    struct s54* rdi82;
    struct s55* rdi83;
    struct s66* rsi84;
    int32_t* r9_85;
    int32_t* rdi86;
    struct s67* rsi87;
    struct s56* rdi88;
    int32_t* rdi89;
    struct s68* rsi90;
    void* rdi91;
    int64_t v92;

    rcx4 = rbx5;
    if (!free) {
        __asm__("cvtsi2sd xmm0, esi");
        g1c0 = g16;
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
        g1c4 = g1a;
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
        *reinterpret_cast<int32_t*>(&rsi6) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi6) + 4) = reinterpret_cast<int32_t>(free);
        while (1) {
            v7 = rsi6;
            if (free) {
                addr_2c0_11:
                rdi8 = v7;
                *reinterpret_cast<int32_t*>(&rsi6) = static_cast<int32_t>(rdi8 + 1);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi6) + 4) = reinterpret_cast<int32_t>(free);
                if (*reinterpret_cast<int32_t*>(&rdi8) == 0x1c0) 
                    break; else 
                    continue;
            } else {
                *reinterpret_cast<int32_t*>(&r13_9) = 1;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_9) + 4) = reinterpret_cast<int32_t>(free);
                *reinterpret_cast<int32_t*>(&r12_10) = reinterpret_cast<int32_t>(free);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_10) + 4) = reinterpret_cast<int32_t>(free);
                do {
                    r10_11 = reinterpret_cast<struct s48*>(r12_10 * 0x1f40);
                    rsi12 = reinterpret_cast<struct s49*>(reinterpret_cast<int64_t>(r8_13) + reinterpret_cast<int64_t>(r10_11) + 0x1f40);
                    r11_14 = &r10_11->f1fe8;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rcx4) + reinterpret_cast<uint64_t>(r13_9) * 8) = reinterpret_cast<int32_t>(0x3ff0000000000000);
                    r14_15 = reinterpret_cast<uint64_t>(r13_9) * 0x1f40;
                    *reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(r8_16) + r14_15) = reinterpret_cast<int64_t>(free);
                    g1fe8 = rsi12->f0;
                    rsi17 = reinterpret_cast<struct s50*>(&rsi12->f4);
                    g1fec = rsi17->f0;
                    rsi18 = reinterpret_cast<struct s47*>(&rsi17->f4);
                    rdi19 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(r13_9) - 1);
                    rbp20 = reinterpret_cast<struct s47*>(reinterpret_cast<uint64_t>(r13_9) + 1);
                    if (reinterpret_cast<uint64_t>(rsi18) >= reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(r9_21) + reinterpret_cast<int64_t>(r11_14)) || (*reinterpret_cast<int32_t*>(&rsi18) = 1, *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi18) + 4) = reinterpret_cast<int32_t>(free), reinterpret_cast<uint64_t>(r9_22 + reinterpret_cast<int64_t>(r10_11) + 0x1f40) >= reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(r11_14) + r8_23))) {
                        *rdi19 = rsi18->f0;
                        rdi24 = rdi19 + 1;
                        *rdi24 = rsi18->f4;
                        rdi25 = rdi24 + 1;
                        *reinterpret_cast<int32_t*>(&rsi26) = 1;
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi26) + 4) = reinterpret_cast<int32_t>(free);
                        do {
                            __asm__("mulsd xmm9, xmm3");
                            __asm__("addsd xmm9, xmm1");
                            __asm__("movapd xmm10, xmm5");
                            __asm__("divsd xmm10, xmm9");
                            *rdi25 = rsi26->f0;
                            rdi27 = rdi25 + 1;
                            rsi28 = reinterpret_cast<struct s51*>(&rsi26->f4);
                            *rdi27 = rsi28->f0;
                            rdi29 = rdi27 + 1;
                            rsi30 = reinterpret_cast<struct s52*>(&rsi28->f4);
                            __asm__("mulsd xmm11, xmm6");
                            *rdi29 = rsi30->f0;
                            rdi31 = rdi29 + 1;
                            rsi32 = reinterpret_cast<struct s53*>(&rsi30->f4);
                            __asm__("mulsd xmm12, xmm4");
                            __asm__("addsd xmm12, xmm11");
                            *rdi31 = rsi32->f0;
                            rdi33 = rdi31 + 1;
                            rsi34 = reinterpret_cast<struct s54*>(&rsi32->f4);
                            __asm__("mulsd xmm11, xmm4");
                            __asm__("addsd xmm11, xmm12");
                            __asm__("mulsd xmm8, xmm5");
                            __asm__("addsd xmm8, xmm11");
                            __asm__("divsd xmm8, xmm9");
                            *rdi33 = rsi34->f0;
                            rdi25 = rdi33 + 1;
                            rsi26 = reinterpret_cast<struct s47*>(reinterpret_cast<uint64_t>(&rsi34->f4) + 1);
                            __asm__("movapd xmm9, xmm10");
                        } while (!reinterpret_cast<int1_t>(rsi26 == 21));
                    } else {
                        do {
                            *rdi19 = rsi18->f0;
                            rdi35 = rdi19 + 1;
                            rsi36 = reinterpret_cast<struct s51*>(&rsi18->f4);
                            __asm__("mulsd xmm8, xmm3");
                            __asm__("addsd xmm8, xmm1");
                            __asm__("movapd xmm9, xmm5");
                            __asm__("divsd xmm9, xmm8");
                            *rdi35 = rsi36->f0;
                            rdi37 = rdi35 + 1;
                            rsi38 = reinterpret_cast<struct s52*>(&rsi36->f4);
                            *rdi37 = rsi38->f0;
                            rdi39 = rdi37 + 1;
                            rsi40 = reinterpret_cast<struct s53*>(&rsi38->f4);
                            __asm__("mulsd xmm9, xmm6");
                            *rdi39 = rsi40->f0;
                            rdi41 = rdi39 + 1;
                            rsi42 = reinterpret_cast<struct s54*>(&rsi40->f4);
                            __asm__("mulsd xmm10, xmm4");
                            __asm__("addsd xmm10, xmm9");
                            *rdi41 = rsi42->f0;
                            rdi43 = rdi41 + 1;
                            rsi44 = reinterpret_cast<struct s55*>(&rsi42->f4);
                            __asm__("mulsd xmm9, xmm4");
                            __asm__("addsd xmm9, xmm10");
                            *rdi43 = rsi44->f0;
                            rdi45 = rdi43 + 1;
                            rsi46 = &rsi44->f1;
                            __asm__("mulsd xmm10, xmm5");
                            __asm__("addsd xmm10, xmm9");
                            __asm__("divsd xmm10, xmm8");
                            *rdi45 = *rsi46;
                            rdi19 = rdi45 + 1;
                            rsi18 = reinterpret_cast<struct s47*>(reinterpret_cast<uint64_t>(rsi46 + 1) + 1);
                        } while (!reinterpret_cast<int1_t>(rsi18 == 21));
                    }
                    (&rcx4->f29040)[reinterpret_cast<uint64_t>(r13_9) * 2] = reinterpret_cast<int32_t>(0x3ff0000000000000);
                    rsi47 = reinterpret_cast<struct s56*>(20);
                    do {
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(r8_48) + r14_15) = rsi47->f0;
                        rsi49 = &rsi47->f4;
                        __asm__("mulsd xmm8, [r10+r13*8+0x1f40]");
                        __asm__("addsd xmm8, [rdi+rsi*8]");
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(r9_50) + r14_15) = *rsi49;
                        rsi51 = reinterpret_cast<void*>(rsi49 + 1);
                        rsi47 = reinterpret_cast<struct s56*>(reinterpret_cast<uint64_t>(rsi51) + 0xffffffffffffffff);
                    } while (reinterpret_cast<int64_t>(rsi51) > reinterpret_cast<int64_t>(1));
                    ++r12_10;
                    r13_9 = rbp20;
                } while (!reinterpret_cast<int1_t>(rbp20 == 21));
                if (free) 
                    goto addr_2c0_11;
            }
            *reinterpret_cast<int32_t*>(&r12_52) = 1;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_52) + 4) = reinterpret_cast<int32_t>(free);
            *reinterpret_cast<int32_t*>(&r13_53) = reinterpret_cast<int32_t>(free);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_53) + 4) = reinterpret_cast<int32_t>(free);
            do {
                rsi54 = reinterpret_cast<struct s57*>(r13_53 * 0x1f40);
                rdi55 = reinterpret_cast<struct s58*>(reinterpret_cast<int64_t>(r8_56) + reinterpret_cast<int64_t>(rsi54) + 0x1f40);
                r10_57 = reinterpret_cast<void*>(&(rsi54 + 0x3fd)->f0);
                rbp58 = reinterpret_cast<struct s59*>(reinterpret_cast<uint64_t>(r12_52) * 0x1f40);
                rbp58->f1 = reinterpret_cast<int32_t>(0x3ff0000000000000);
                *reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(r8_59) + reinterpret_cast<uint64_t>(rbp58)) = reinterpret_cast<int64_t>(free);
                rdi55->f0 = rsi54->f0;
                rdi60 = reinterpret_cast<struct s60*>(&rdi55->f4);
                rsi61 = reinterpret_cast<struct s61*>(&rsi54->f4);
                rdi60->f0 = rsi61->f0;
                rdi62 = reinterpret_cast<struct s47*>(&rdi60->f4);
                rsi63 = reinterpret_cast<struct s62*>(&rsi61->f4);
                r14_64 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(r12_52) - 1);
                r12_52 = reinterpret_cast<struct s47*>(reinterpret_cast<uint64_t>(r12_52) + 1);
                if (reinterpret_cast<uint64_t>(rdi62) >= reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(r9_65) + reinterpret_cast<int64_t>(r10_57)) || (*reinterpret_cast<int32_t*>(&rdi62) = 1, *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi62) + 4) = reinterpret_cast<int32_t>(free), reinterpret_cast<uint64_t>(r9_66 + reinterpret_cast<int64_t>(rsi63) + 0x1f40) >= reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(r10_57) + r8_67))) {
                    rdi62->f0 = rsi63->f0;
                    rdi62->f4 = rsi63->f4;
                    *reinterpret_cast<int32_t*>(&rdi68) = 1;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi68) + 4) = reinterpret_cast<int32_t>(free);
                    do {
                        __asm__("mulsd xmm9, xmm2");
                        __asm__("addsd xmm9, xmm0");
                        __asm__("movapd xmm10, xmm4");
                        __asm__("divsd xmm10, xmm9");
                        rdi68->f0 = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(r8_69) + reinterpret_cast<uint64_t>(rbp58));
                        rdi70 = reinterpret_cast<struct s51*>(&rdi68->f4);
                        rsi71 = reinterpret_cast<struct s63*>(reinterpret_cast<uint64_t>(r14_64) * 0x1f40 + reinterpret_cast<int64_t>(rcx4));
                        rdi70->f0 = rsi71->f0;
                        rdi72 = reinterpret_cast<struct s52*>(&rdi70->f4);
                        __asm__("mulsd xmm11, xmm7");
                        rdi72->f0 = rsi71->f4;
                        rdi73 = reinterpret_cast<struct s53*>(&rdi72->f4);
                        __asm__("mulsd xmm12, xmm5");
                        __asm__("addsd xmm12, xmm11");
                        rdi73->f0 = *reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(r12_52) * 0x1f40 + reinterpret_cast<int64_t>(rcx4));
                        rdi74 = reinterpret_cast<struct s54*>(&rdi73->f4);
                        __asm__("mulsd xmm11, xmm5");
                        __asm__("addsd xmm11, xmm12");
                        __asm__("mulsd xmm8, xmm4");
                        __asm__("addsd xmm8, xmm11");
                        __asm__("divsd xmm8, xmm9");
                        rdi74->f0 = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(r9_75) + reinterpret_cast<uint64_t>(rbp58));
                        rdi68 = reinterpret_cast<struct s47*>(reinterpret_cast<uint64_t>(&rdi74->f4) + 1);
                        __asm__("movapd xmm9, xmm10");
                    } while (!reinterpret_cast<int1_t>(rdi68 == 21));
                } else {
                    do {
                        rsi76 = reinterpret_cast<struct s64*>(reinterpret_cast<int64_t>(r8_77) + reinterpret_cast<uint64_t>(rbp58));
                        rdi62->f0 = rsi76->f0;
                        rdi78 = reinterpret_cast<struct s51*>(&rdi62->f4);
                        __asm__("mulsd xmm8, xmm2");
                        __asm__("addsd xmm8, xmm0");
                        __asm__("movapd xmm9, xmm4");
                        __asm__("divsd xmm9, xmm8");
                        rdi78->f0 = rsi76->f4;
                        rdi79 = reinterpret_cast<struct s52*>(&rdi78->f4);
                        rsi80 = reinterpret_cast<struct s65*>(reinterpret_cast<uint64_t>(r14_64) * 0x1f40 + reinterpret_cast<int64_t>(rcx4));
                        rdi79->f0 = rsi80->f0;
                        rdi81 = reinterpret_cast<struct s53*>(&rdi79->f4);
                        __asm__("mulsd xmm9, xmm7");
                        rdi81->f0 = rsi80->f4;
                        rdi82 = reinterpret_cast<struct s54*>(&rdi81->f4);
                        __asm__("mulsd xmm10, xmm5");
                        __asm__("addsd xmm10, xmm9");
                        rdi82->f0 = *reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(r12_52) * 0x1f40 + reinterpret_cast<int64_t>(rcx4));
                        rdi83 = reinterpret_cast<struct s55*>(&rdi82->f4);
                        __asm__("mulsd xmm9, xmm5");
                        __asm__("addsd xmm9, xmm10");
                        rsi84 = reinterpret_cast<struct s66*>(reinterpret_cast<int64_t>(r9_85) + reinterpret_cast<uint64_t>(rbp58));
                        rdi83->f0 = rsi84->f0;
                        rdi86 = &rdi83->f1;
                        __asm__("mulsd xmm10, xmm4");
                        __asm__("addsd xmm10, xmm9");
                        __asm__("divsd xmm10, xmm8");
                        *rdi86 = rsi84->f4;
                        rdi62 = reinterpret_cast<struct s47*>(reinterpret_cast<uint64_t>(rdi86 + 1) + 1);
                    } while (!reinterpret_cast<int1_t>(rdi62 == 21));
                }
                rsi87 = reinterpret_cast<struct s67*>(&rbp58->f1);
                rsi87->fa8 = reinterpret_cast<int32_t>(0x3ff0000000000000);
                rdi88 = reinterpret_cast<struct s56*>(20);
                do {
                    rdi88->f0 = rsi87->f0;
                    rdi89 = &rdi88->f4;
                    rsi90 = reinterpret_cast<struct s68*>(&rsi87->f4);
                    __asm__("mulsd xmm8, [rsi+rdi*8+0x8]");
                    __asm__("addsd xmm8, [r10+rdi*8]");
                    *rdi89 = rsi90->f0;
                    rdi91 = reinterpret_cast<void*>(rdi89 + 1);
                    rsi87 = reinterpret_cast<struct s67*>(&rsi90->f4);
                    rdi88 = reinterpret_cast<struct s56*>(reinterpret_cast<uint64_t>(rdi91) + 0xffffffffffffffff);
                } while (reinterpret_cast<int64_t>(rdi91) > reinterpret_cast<int64_t>(1));
                ++r13_53;
            } while (!reinterpret_cast<int1_t>(r12_52 == 21));
            goto addr_2c0_11;
        }
    }
    goto v92;
}

void fun_85d(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13);

void fun_865(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13);

void fun_86d(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13);

void fun_875(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13);

void fun_87d(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13);

void fun_843(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13) {
    int32_t ebp14;
    signed char** r15_15;
    int64_t rbx16;
    int64_t rbx17;
    int64_t r14_18;
    int64_t r12_19;
    int64_t r13_20;

    if (ebp14 >= 43 && reinterpret_cast<int1_t>(**r15_15 == free)) {
        rsi = rbx16;
        fun_85d(0x3e8, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11, a12);
    }
    fun_865(rbx17, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11, a12);
    fun_86d(r14_18, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11, a12);
    fun_875(r12_19, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11, a12);
    fun_87d(r13_20, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11, a12);
    goto a13;
}

void fun_85d(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13) {
    int64_t rbx14;
    int64_t r14_15;
    int64_t r12_16;
    int64_t r13_17;

    fun_865(rbx14, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11, a12);
    fun_86d(r14_15, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11, a12);
    fun_875(r12_16, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11, a12);
    fun_87d(r13_17, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11, a12);
    goto a13;
}

void fun_865(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13) {
    int64_t r14_14;
    int64_t r12_15;
    int64_t r13_16;

    fun_86d(r14_14, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11, a12);
    fun_875(r12_15, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11, a12);
    fun_87d(r13_16, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11, a12);
    goto a13;
}

void fun_12b();

struct s69 {
    int32_t f0;
    signed char[167996] pad168000;
    int32_t f29040;
};

struct s70 {
    int32_t f0;
    int32_t f4;
};

struct s71 {
    signed char[8168] pad8168;
    int32_t f1fe8;
};

struct s72 {
    int32_t f0;
    int32_t f4;
};

struct s73 {
    int32_t f0;
    int32_t f4;
};

struct s74 {
    int32_t f0;
    int32_t f4;
};

struct s75 {
    int32_t f0;
    int32_t f4;
};

struct s76 {
    int32_t f0;
    int32_t f4;
};

struct s77 {
    int32_t f0;
    int32_t f4;
};

struct s78 {
    int32_t f0;
    int32_t f1;
    int32_t f4;
};

struct s79 {
    int32_t f0;
    int32_t f4;
};

struct s80 {
    int32_t f0;
    int32_t f4;
};

struct s81 {
    int32_t f0;
    int32_t f4;
};

struct s82 {
    signed char[1] pad1;
    int32_t f1;
};

struct s83 {
    int32_t f0;
    int32_t f4;
};

struct s84 {
    int32_t f0;
    int32_t f4;
};

struct s85 {
    int32_t f0;
    int32_t f4;
};

struct s86 {
    int32_t f0;
    int32_t f4;
};

struct s87 {
    int32_t f0;
    int32_t f4;
};

struct s88 {
    int32_t f0;
    int32_t f4;
};

struct s89 {
    int32_t f0;
    int32_t f4;
};

struct s90 {
    int32_t f0;
    int32_t f4;
    signed char[160] pad168;
    int32_t fa8;
};

struct s91 {
    int32_t f0;
    int32_t f4;
};

void fun_113(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int32_t* r8, int32_t* r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14) {
    int32_t* rsi15;
    int32_t* rdi16;
    int32_t* rbx17;
    int32_t ebp18;
    int32_t ebp19;
    int64_t r12_20;
    int32_t ebp21;
    int64_t r13_22;
    int64_t rbp23;
    int64_t r15_24;
    int32_t* rbx25;
    int32_t* rbx26;
    int64_t rbx27;
    struct s69* rcx28;
    struct s69* rbx29;
    int64_t rsi30;
    int64_t v31;
    int64_t rdi32;
    struct s70* r13_33;
    int64_t r12_34;
    struct s71* r10_35;
    struct s72* rsi36;
    int32_t* r11_37;
    void* r14_38;
    struct s73* rsi39;
    struct s70* rsi40;
    int32_t* rdi41;
    struct s70* rbp42;
    int32_t* rdi43;
    int32_t* rdi44;
    struct s70* rsi45;
    int32_t* rdi46;
    struct s74* rsi47;
    int32_t* rdi48;
    struct s75* rsi49;
    int32_t* rdi50;
    struct s76* rsi51;
    int32_t* rdi52;
    struct s77* rsi53;
    int32_t* rdi54;
    struct s74* rsi55;
    int32_t* rdi56;
    struct s75* rsi57;
    int32_t* rdi58;
    struct s76* rsi59;
    int32_t* rdi60;
    struct s77* rsi61;
    int32_t* rdi62;
    struct s78* rsi63;
    int32_t* rdi64;
    int32_t* rsi65;
    struct s79* rsi66;
    int32_t* rsi67;
    void* rsi68;
    struct s70* r12_69;
    int64_t r13_70;
    struct s80* rsi71;
    struct s81* rdi72;
    void* r10_73;
    struct s82* rbp74;
    struct s83* rdi75;
    struct s84* rsi76;
    struct s70* rdi77;
    struct s85* rsi78;
    int32_t* r14_79;
    struct s70* rdi80;
    struct s74* rdi81;
    struct s86* rsi82;
    struct s75* rdi83;
    struct s76* rdi84;
    struct s77* rdi85;
    struct s87* rsi86;
    struct s74* rdi87;
    struct s75* rdi88;
    struct s88* rsi89;
    struct s76* rdi90;
    struct s77* rdi91;
    struct s78* rdi92;
    struct s89* rsi93;
    int32_t* rdi94;
    struct s90* rsi95;
    struct s79* rdi96;
    int32_t* rdi97;
    struct s91* rsi98;
    void* rdi99;

    rsi15 = reinterpret_cast<int32_t*>(0x11a);
    rdi16 = rbx17;
    fun_12b();
    if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(ebp18 < reinterpret_cast<int32_t>(free) == free)) | reinterpret_cast<uint1_t>(ebp19 == free))) {
        *reinterpret_cast<int32_t*>(&r12_20) = ebp21;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_20) + 4) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(&r13_22) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_22) + 4) = reinterpret_cast<int32_t>(free);
        do {
            rbp23 = r13_22 * r12_20;
            *reinterpret_cast<int32_t*>(&r15_24) = reinterpret_cast<int32_t>(free);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_24) + 4) = reinterpret_cast<int32_t>(free);
            do {
                __asm__("ror eax, 0x2");
                if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r15_24 + rbp23) * 0xcccccccd + 0x19999998) <= 0xccccccc) {
                    *reinterpret_cast<int32_t*>(&rdi16) = 10;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi16) + 4) = reinterpret_cast<int32_t>(free);
                    rsi15 = rbx25;
                    fun_170();
                }
                *rdi16 = *rsi15;
                rdi16 = rbx26;
                rsi15 = reinterpret_cast<int32_t*>(0x18a);
                fun_191();
                ++r15_24;
            } while (r15_24 != r12_20);
            ++r13_22;
        } while (r13_22 != r12_20);
    }
    fun_1b9(rbx27, 0x1a8, 0x1af);
    rcx28 = rbx29;
    if (!free) {
        __asm__("cvtsi2sd xmm0, esi");
        g1c0 = g16;
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
        g1c4 = g1a;
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
        *reinterpret_cast<int32_t*>(&rsi30) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi30) + 4) = reinterpret_cast<int32_t>(free);
        while (1) {
            v31 = rsi30;
            if (free) {
                addr_2c0_24:
                rdi32 = v31;
                *reinterpret_cast<int32_t*>(&rsi30) = static_cast<int32_t>(rdi32 + 1);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi30) + 4) = reinterpret_cast<int32_t>(free);
                if (*reinterpret_cast<int32_t*>(&rdi32) == 0x1c0) 
                    break; else 
                    continue;
            } else {
                *reinterpret_cast<int32_t*>(&r13_33) = 1;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_33) + 4) = reinterpret_cast<int32_t>(free);
                *reinterpret_cast<int32_t*>(&r12_34) = reinterpret_cast<int32_t>(free);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_34) + 4) = reinterpret_cast<int32_t>(free);
                do {
                    r10_35 = reinterpret_cast<struct s71*>(r12_34 * 0x1f40);
                    rsi36 = reinterpret_cast<struct s72*>(reinterpret_cast<int64_t>(r8) + reinterpret_cast<int64_t>(r10_35) + 0x1f40);
                    r11_37 = &r10_35->f1fe8;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rcx28) + reinterpret_cast<uint64_t>(r13_33) * 8) = reinterpret_cast<int32_t>(0x3ff0000000000000);
                    r14_38 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(r13_33) * 0x1f40);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(r8) + reinterpret_cast<uint64_t>(r14_38)) = reinterpret_cast<int32_t>(free);
                    g1fe8 = rsi36->f0;
                    rsi39 = reinterpret_cast<struct s73*>(&rsi36->f4);
                    g1fec = rsi39->f0;
                    rsi40 = reinterpret_cast<struct s70*>(&rsi39->f4);
                    rdi41 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(r13_33) - 1);
                    rbp42 = reinterpret_cast<struct s70*>(reinterpret_cast<uint64_t>(r13_33) + 1);
                    if (reinterpret_cast<uint64_t>(rsi40) >= reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(r9) + reinterpret_cast<int64_t>(r11_37)) || (*reinterpret_cast<int32_t*>(&rsi40) = 1, *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi40) + 4) = reinterpret_cast<int32_t>(free), reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(r9) + reinterpret_cast<int64_t>(r10_35) + 0x1f40) >= reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(r11_37) + reinterpret_cast<int64_t>(r8)))) {
                        *rdi41 = rsi40->f0;
                        rdi43 = rdi41 + 1;
                        *rdi43 = rsi40->f4;
                        rdi44 = rdi43 + 1;
                        *reinterpret_cast<int32_t*>(&rsi45) = 1;
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi45) + 4) = reinterpret_cast<int32_t>(free);
                        do {
                            __asm__("mulsd xmm9, xmm3");
                            __asm__("addsd xmm9, xmm1");
                            __asm__("movapd xmm10, xmm5");
                            __asm__("divsd xmm10, xmm9");
                            *rdi44 = rsi45->f0;
                            rdi46 = rdi44 + 1;
                            rsi47 = reinterpret_cast<struct s74*>(&rsi45->f4);
                            *rdi46 = rsi47->f0;
                            rdi48 = rdi46 + 1;
                            rsi49 = reinterpret_cast<struct s75*>(&rsi47->f4);
                            __asm__("mulsd xmm11, xmm6");
                            *rdi48 = rsi49->f0;
                            rdi50 = rdi48 + 1;
                            rsi51 = reinterpret_cast<struct s76*>(&rsi49->f4);
                            __asm__("mulsd xmm12, xmm4");
                            __asm__("addsd xmm12, xmm11");
                            *rdi50 = rsi51->f0;
                            rdi52 = rdi50 + 1;
                            rsi53 = reinterpret_cast<struct s77*>(&rsi51->f4);
                            __asm__("mulsd xmm11, xmm4");
                            __asm__("addsd xmm11, xmm12");
                            __asm__("mulsd xmm8, xmm5");
                            __asm__("addsd xmm8, xmm11");
                            __asm__("divsd xmm8, xmm9");
                            *rdi52 = rsi53->f0;
                            rdi44 = rdi52 + 1;
                            rsi45 = reinterpret_cast<struct s70*>(reinterpret_cast<uint64_t>(&rsi53->f4) + 1);
                            __asm__("movapd xmm9, xmm10");
                        } while (!reinterpret_cast<int1_t>(rsi45 == 21));
                    } else {
                        do {
                            *rdi41 = rsi40->f0;
                            rdi54 = rdi41 + 1;
                            rsi55 = reinterpret_cast<struct s74*>(&rsi40->f4);
                            __asm__("mulsd xmm8, xmm3");
                            __asm__("addsd xmm8, xmm1");
                            __asm__("movapd xmm9, xmm5");
                            __asm__("divsd xmm9, xmm8");
                            *rdi54 = rsi55->f0;
                            rdi56 = rdi54 + 1;
                            rsi57 = reinterpret_cast<struct s75*>(&rsi55->f4);
                            *rdi56 = rsi57->f0;
                            rdi58 = rdi56 + 1;
                            rsi59 = reinterpret_cast<struct s76*>(&rsi57->f4);
                            __asm__("mulsd xmm9, xmm6");
                            *rdi58 = rsi59->f0;
                            rdi60 = rdi58 + 1;
                            rsi61 = reinterpret_cast<struct s77*>(&rsi59->f4);
                            __asm__("mulsd xmm10, xmm4");
                            __asm__("addsd xmm10, xmm9");
                            *rdi60 = rsi61->f0;
                            rdi62 = rdi60 + 1;
                            rsi63 = reinterpret_cast<struct s78*>(&rsi61->f4);
                            __asm__("mulsd xmm9, xmm4");
                            __asm__("addsd xmm9, xmm10");
                            *rdi62 = rsi63->f0;
                            rdi64 = rdi62 + 1;
                            rsi65 = &rsi63->f1;
                            __asm__("mulsd xmm10, xmm5");
                            __asm__("addsd xmm10, xmm9");
                            __asm__("divsd xmm10, xmm8");
                            *rdi64 = *rsi65;
                            rdi41 = rdi64 + 1;
                            rsi40 = reinterpret_cast<struct s70*>(reinterpret_cast<uint64_t>(rsi65 + 1) + 1);
                        } while (!reinterpret_cast<int1_t>(rsi40 == 21));
                    }
                    (&rcx28->f29040)[reinterpret_cast<uint64_t>(r13_33) * 2] = reinterpret_cast<int32_t>(0x3ff0000000000000);
                    rsi66 = reinterpret_cast<struct s79*>(20);
                    do {
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(r8) + reinterpret_cast<uint64_t>(r14_38)) = rsi66->f0;
                        rsi67 = &rsi66->f4;
                        __asm__("mulsd xmm8, [r10+r13*8+0x1f40]");
                        __asm__("addsd xmm8, [rdi+rsi*8]");
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(r9) + reinterpret_cast<uint64_t>(r14_38)) = *rsi67;
                        rsi68 = reinterpret_cast<void*>(rsi67 + 1);
                        rsi66 = reinterpret_cast<struct s79*>(reinterpret_cast<uint64_t>(rsi68) + 0xffffffffffffffff);
                    } while (reinterpret_cast<int64_t>(rsi68) > reinterpret_cast<int64_t>(1));
                    ++r12_34;
                    r13_33 = rbp42;
                } while (!reinterpret_cast<int1_t>(rbp42 == 21));
                if (free) 
                    goto addr_2c0_24;
            }
            *reinterpret_cast<int32_t*>(&r12_69) = 1;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_69) + 4) = reinterpret_cast<int32_t>(free);
            *reinterpret_cast<int32_t*>(&r13_70) = reinterpret_cast<int32_t>(free);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_70) + 4) = reinterpret_cast<int32_t>(free);
            do {
                rsi71 = reinterpret_cast<struct s80*>(r13_70 * 0x1f40);
                rdi72 = reinterpret_cast<struct s81*>(reinterpret_cast<int64_t>(r8) + reinterpret_cast<int64_t>(rsi71) + 0x1f40);
                r10_73 = reinterpret_cast<void*>(&(rsi71 + 0x3fd)->f0);
                rbp74 = reinterpret_cast<struct s82*>(reinterpret_cast<uint64_t>(r12_69) * 0x1f40);
                rbp74->f1 = reinterpret_cast<int32_t>(0x3ff0000000000000);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(r8) + reinterpret_cast<uint64_t>(rbp74)) = reinterpret_cast<int32_t>(free);
                rdi72->f0 = rsi71->f0;
                rdi75 = reinterpret_cast<struct s83*>(&rdi72->f4);
                rsi76 = reinterpret_cast<struct s84*>(&rsi71->f4);
                rdi75->f0 = rsi76->f0;
                rdi77 = reinterpret_cast<struct s70*>(&rdi75->f4);
                rsi78 = reinterpret_cast<struct s85*>(&rsi76->f4);
                r14_79 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(r12_69) - 1);
                r12_69 = reinterpret_cast<struct s70*>(reinterpret_cast<uint64_t>(r12_69) + 1);
                if (reinterpret_cast<uint64_t>(rdi77) >= reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(r9) + reinterpret_cast<int64_t>(r10_73)) || (*reinterpret_cast<int32_t*>(&rdi77) = 1, *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi77) + 4) = reinterpret_cast<int32_t>(free), reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(r9) + reinterpret_cast<int64_t>(rsi78) + 0x1f40) >= reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(r10_73) + reinterpret_cast<int64_t>(r8)))) {
                    rdi77->f0 = rsi78->f0;
                    rdi77->f4 = rsi78->f4;
                    *reinterpret_cast<int32_t*>(&rdi80) = 1;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi80) + 4) = reinterpret_cast<int32_t>(free);
                    do {
                        __asm__("mulsd xmm9, xmm2");
                        __asm__("addsd xmm9, xmm0");
                        __asm__("movapd xmm10, xmm4");
                        __asm__("divsd xmm10, xmm9");
                        rdi80->f0 = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(r8) + reinterpret_cast<uint64_t>(rbp74));
                        rdi81 = reinterpret_cast<struct s74*>(&rdi80->f4);
                        rsi82 = reinterpret_cast<struct s86*>(reinterpret_cast<uint64_t>(r14_79) * 0x1f40 + reinterpret_cast<int64_t>(rcx28));
                        rdi81->f0 = rsi82->f0;
                        rdi83 = reinterpret_cast<struct s75*>(&rdi81->f4);
                        __asm__("mulsd xmm11, xmm7");
                        rdi83->f0 = rsi82->f4;
                        rdi84 = reinterpret_cast<struct s76*>(&rdi83->f4);
                        __asm__("mulsd xmm12, xmm5");
                        __asm__("addsd xmm12, xmm11");
                        rdi84->f0 = *reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(r12_69) * 0x1f40 + reinterpret_cast<int64_t>(rcx28));
                        rdi85 = reinterpret_cast<struct s77*>(&rdi84->f4);
                        __asm__("mulsd xmm11, xmm5");
                        __asm__("addsd xmm11, xmm12");
                        __asm__("mulsd xmm8, xmm4");
                        __asm__("addsd xmm8, xmm11");
                        __asm__("divsd xmm8, xmm9");
                        rdi85->f0 = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(r9) + reinterpret_cast<uint64_t>(rbp74));
                        rdi80 = reinterpret_cast<struct s70*>(reinterpret_cast<uint64_t>(&rdi85->f4) + 1);
                        __asm__("movapd xmm9, xmm10");
                    } while (!reinterpret_cast<int1_t>(rdi80 == 21));
                } else {
                    do {
                        rsi86 = reinterpret_cast<struct s87*>(reinterpret_cast<int64_t>(r8) + reinterpret_cast<uint64_t>(rbp74));
                        rdi77->f0 = rsi86->f0;
                        rdi87 = reinterpret_cast<struct s74*>(&rdi77->f4);
                        __asm__("mulsd xmm8, xmm2");
                        __asm__("addsd xmm8, xmm0");
                        __asm__("movapd xmm9, xmm4");
                        __asm__("divsd xmm9, xmm8");
                        rdi87->f0 = rsi86->f4;
                        rdi88 = reinterpret_cast<struct s75*>(&rdi87->f4);
                        rsi89 = reinterpret_cast<struct s88*>(reinterpret_cast<uint64_t>(r14_79) * 0x1f40 + reinterpret_cast<int64_t>(rcx28));
                        rdi88->f0 = rsi89->f0;
                        rdi90 = reinterpret_cast<struct s76*>(&rdi88->f4);
                        __asm__("mulsd xmm9, xmm7");
                        rdi90->f0 = rsi89->f4;
                        rdi91 = reinterpret_cast<struct s77*>(&rdi90->f4);
                        __asm__("mulsd xmm10, xmm5");
                        __asm__("addsd xmm10, xmm9");
                        rdi91->f0 = *reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(r12_69) * 0x1f40 + reinterpret_cast<int64_t>(rcx28));
                        rdi92 = reinterpret_cast<struct s78*>(&rdi91->f4);
                        __asm__("mulsd xmm9, xmm5");
                        __asm__("addsd xmm9, xmm10");
                        rsi93 = reinterpret_cast<struct s89*>(reinterpret_cast<int64_t>(r9) + reinterpret_cast<uint64_t>(rbp74));
                        rdi92->f0 = rsi93->f0;
                        rdi94 = &rdi92->f1;
                        __asm__("mulsd xmm10, xmm4");
                        __asm__("addsd xmm10, xmm9");
                        __asm__("divsd xmm10, xmm8");
                        *rdi94 = rsi93->f4;
                        rdi77 = reinterpret_cast<struct s70*>(reinterpret_cast<uint64_t>(rdi94 + 1) + 1);
                    } while (!reinterpret_cast<int1_t>(rdi77 == 21));
                }
                rsi95 = reinterpret_cast<struct s90*>(&rbp74->f1);
                rsi95->fa8 = reinterpret_cast<int32_t>(0x3ff0000000000000);
                rdi96 = reinterpret_cast<struct s79*>(20);
                do {
                    rdi96->f0 = rsi95->f0;
                    rdi97 = &rdi96->f4;
                    rsi98 = reinterpret_cast<struct s91*>(&rsi95->f4);
                    __asm__("mulsd xmm8, [rsi+rdi*8+0x8]");
                    __asm__("addsd xmm8, [r10+rdi*8]");
                    *rdi97 = rsi98->f0;
                    rdi99 = reinterpret_cast<void*>(rdi97 + 1);
                    rsi95 = reinterpret_cast<struct s90*>(&rsi98->f4);
                    rdi96 = reinterpret_cast<struct s79*>(reinterpret_cast<uint64_t>(rdi99) + 0xffffffffffffffff);
                } while (reinterpret_cast<int64_t>(rdi99) > reinterpret_cast<int64_t>(1));
                ++r13_70;
            } while (!reinterpret_cast<int1_t>(r12_69 == 21));
            goto addr_2c0_24;
        }
    }
    goto a13;
}

int64_t fun_761(int64_t rdi, int64_t rsi);

int64_t fun_773(int64_t rdi, int64_t rsi);

int64_t fun_785(int64_t rdi, int64_t rsi);

void fun_74f(int64_t rdi, int64_t rsi) {
    int64_t v3;
    int64_t rbx4;
    int64_t rax5;
    int64_t rax6;
    int64_t r14_7;
    int64_t rax8;
    int64_t r12_9;
    int64_t rax10;
    int64_t r13_11;
    int64_t rax12;
    int64_t rcx13;
    int64_t rsi14;
    int64_t v15;
    int64_t v16;
    int64_t v17;
    int64_t v18;
    int64_t v19;
    int64_t v20;
    int32_t ebp21;
    signed char** r15_22;
    int64_t v23;
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

    v3 = reinterpret_cast<int64_t>(__return_address());
    rbx4 = rax5;
    rax6 = fun_761(0xf4240, 8);
    r14_7 = rax6;
    rax8 = fun_773(0xf4240, 8);
    r12_9 = rax8;
    rax10 = fun_785(0xf4240, 8);
    r13_11 = rax10;
    *reinterpret_cast<int32_t*>(&rax12) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax12) + 4) = reinterpret_cast<int32_t>(free);
    __asm__("movdqa xmm0, [rip+0x0]");
    __asm__("movapd xmm1, [rip+0x0]");
    __asm__("movdqa xmm2, [rip+0x0]");
    __asm__("movdqa xmm3, [rip+0x0]");
    do {
        __asm__("movd xmm4, ecx");
        __asm__("pshufd xmm4, xmm4, 0x50");
        *reinterpret_cast<int32_t*>(&rcx13) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx13) + 4) = reinterpret_cast<int32_t>(free);
        __asm__("movdqa xmm5, xmm0");
        do {
            __asm__("movdqa xmm6, xmm4");
            __asm__("psubd xmm6, xmm5");
            __asm__("cvtdq2pd xmm7, xmm6");
            __asm__("divpd xmm7, xmm1");
            __asm__("movupd [rdx+rcx*8], xmm7");
            __asm__("psubd xmm6, xmm2");
            __asm__("cvtdq2pd xmm6, xmm6");
            __asm__("divpd xmm6, xmm1");
            __asm__("movupd [rsi+rdx], xmm6");
            rcx13 = rcx13 + 4;
            __asm__("paddd xmm5, xmm3");
        } while (rcx13 != 0x3e8);
        ++rax12;
    } while (rax12 != 0x3e8);
    *reinterpret_cast<int32_t*>(&rsi14) = 0x3e8;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi14) + 4) = reinterpret_cast<int32_t>(free);
    fun_843(0x1f4, 0x3e8, rbx4, r14_7, r12_9, r13_11, v3, v15, v16, v17, v18, v19, v20);
    if (ebp21 >= 43 && reinterpret_cast<int1_t>(**r15_22 == free)) {
        rsi14 = rbx4;
        fun_85d(0x3e8, rsi14, rbx4, r14_7, r12_9, r13_11, v3, v23, v24, v25, v26, v27, v28);
    }
    fun_865(rbx4, rsi14, rbx4, r14_7, r12_9, r13_11, v3, v29, v30, v31, v32, v33, v34);
    fun_86d(r14_7, rsi14, rbx4, r14_7, r12_9, r13_11, v3, v35, v36, v37, v38, v39, v40);
    fun_875(r12_9, rsi14, rbx4, r14_7, r12_9, r13_11, v3, v41, v42, v43, v44, v45, v46);
    fun_87d(r13_11, rsi14, rbx4, r14_7, r12_9, r13_11, v3, v47, v48, v49, v50, v51, v52);
    goto v53;
}

void fun_86d(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13) {
    int64_t r12_14;
    int64_t r13_15;

    fun_875(r12_14, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11, a12);
    fun_87d(r13_15, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11, a12);
    goto a13;
}

struct s92 {
    int32_t f0;
    signed char[167996] pad168000;
    int32_t f29040;
};

struct s93 {
    int32_t f0;
    int32_t f4;
};

struct s94 {
    signed char[8168] pad8168;
    int32_t f1fe8;
};

struct s95 {
    int32_t f0;
    int32_t f4;
};

struct s96 {
    int32_t f0;
    int32_t f4;
};

struct s97 {
    int32_t f0;
    int32_t f4;
};

struct s98 {
    int32_t f0;
    int32_t f4;
};

struct s99 {
    int32_t f0;
    int32_t f4;
};

struct s100 {
    int32_t f0;
    int32_t f4;
};

struct s101 {
    int32_t f0;
    int32_t f1;
    int32_t f4;
};

struct s102 {
    int32_t f0;
    int32_t f4;
};

struct s103 {
    int32_t f0;
    int32_t f4;
};

struct s104 {
    int32_t f0;
    int32_t f4;
};

struct s105 {
    signed char[1] pad1;
    int32_t f1;
};

struct s106 {
    int32_t f0;
    int32_t f4;
};

struct s107 {
    int32_t f0;
    int32_t f4;
};

struct s108 {
    int32_t f0;
    int32_t f4;
};

struct s109 {
    int32_t f0;
    int32_t f4;
};

struct s110 {
    int32_t f0;
    int32_t f4;
};

struct s111 {
    int32_t f0;
    int32_t f4;
};

struct s112 {
    int32_t f0;
    int32_t f4;
};

struct s113 {
    int32_t f0;
    int32_t f4;
    signed char[160] pad168;
    int32_t fa8;
};

struct s114 {
    int32_t f0;
    int32_t f4;
};

void fun_12b() {
    int32_t ebp1;
    int32_t ebp2;
    int64_t r12_3;
    int32_t ebp4;
    int64_t r13_5;
    int64_t rbp6;
    int64_t r15_7;
    int32_t* rdi8;
    int32_t* rsi9;
    int32_t* rbx10;
    int32_t* rbx11;
    int64_t rbx12;
    struct s92* rcx13;
    struct s92* rbx14;
    int64_t rsi15;
    int64_t v16;
    int64_t rdi17;
    struct s93* r13_18;
    int64_t r12_19;
    struct s94* r10_20;
    struct s95* rsi21;
    void* r8_22;
    int32_t* r11_23;
    uint64_t r14_24;
    int64_t* r8_25;
    struct s96* rsi26;
    struct s93* rsi27;
    int32_t* rdi28;
    struct s93* rbp29;
    void* r9_30;
    int64_t r9_31;
    int64_t r8_32;
    int32_t* rdi33;
    int32_t* rdi34;
    struct s93* rsi35;
    int32_t* rdi36;
    struct s97* rsi37;
    int32_t* rdi38;
    struct s98* rsi39;
    int32_t* rdi40;
    struct s99* rsi41;
    int32_t* rdi42;
    struct s100* rsi43;
    int32_t* rdi44;
    struct s97* rsi45;
    int32_t* rdi46;
    struct s98* rsi47;
    int32_t* rdi48;
    struct s99* rsi49;
    int32_t* rdi50;
    struct s100* rsi51;
    int32_t* rdi52;
    struct s101* rsi53;
    int32_t* rdi54;
    int32_t* rsi55;
    struct s102* rsi56;
    int32_t* r8_57;
    int32_t* rsi58;
    int32_t* r9_59;
    void* rsi60;
    struct s93* r12_61;
    int64_t r13_62;
    struct s103* rsi63;
    struct s104* rdi64;
    void* r8_65;
    void* r10_66;
    struct s105* rbp67;
    int64_t* r8_68;
    struct s106* rdi69;
    struct s107* rsi70;
    struct s93* rdi71;
    struct s108* rsi72;
    int32_t* r14_73;
    void* r9_74;
    int64_t r9_75;
    int64_t r8_76;
    struct s93* rdi77;
    int32_t* r8_78;
    struct s97* rdi79;
    struct s109* rsi80;
    struct s98* rdi81;
    struct s99* rdi82;
    struct s100* rdi83;
    int32_t* r9_84;
    struct s110* rsi85;
    int32_t* r8_86;
    struct s97* rdi87;
    struct s98* rdi88;
    struct s111* rsi89;
    struct s99* rdi90;
    struct s100* rdi91;
    struct s101* rdi92;
    struct s112* rsi93;
    int32_t* r9_94;
    int32_t* rdi95;
    struct s113* rsi96;
    struct s102* rdi97;
    int32_t* rdi98;
    struct s114* rsi99;
    void* rdi100;
    int64_t v101;

    if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(ebp1 < reinterpret_cast<int32_t>(free) == free)) | reinterpret_cast<uint1_t>(ebp2 == free))) {
        *reinterpret_cast<int32_t*>(&r12_3) = ebp4;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_3) + 4) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(&r13_5) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_5) + 4) = reinterpret_cast<int32_t>(free);
        do {
            rbp6 = r13_5 * r12_3;
            *reinterpret_cast<int32_t*>(&r15_7) = reinterpret_cast<int32_t>(free);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_7) + 4) = reinterpret_cast<int32_t>(free);
            do {
                __asm__("ror eax, 0x2");
                if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r15_7 + rbp6) * 0xcccccccd + 0x19999998) <= 0xccccccc) {
                    *reinterpret_cast<int32_t*>(&rdi8) = 10;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi8) + 4) = reinterpret_cast<int32_t>(free);
                    rsi9 = rbx10;
                    fun_170();
                }
                *rdi8 = *rsi9;
                rdi8 = rbx11;
                rsi9 = reinterpret_cast<int32_t*>(0x18a);
                fun_191();
                ++r15_7;
            } while (r15_7 != r12_3);
            ++r13_5;
        } while (r13_5 != r12_3);
    }
    fun_1b9(rbx12, 0x1a8, 0x1af);
    rcx13 = rbx14;
    if (!free) {
        __asm__("cvtsi2sd xmm0, esi");
        g1c0 = g16;
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
        g1c4 = g1a;
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
        *reinterpret_cast<int32_t*>(&rsi15) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi15) + 4) = reinterpret_cast<int32_t>(free);
        while (1) {
            v16 = rsi15;
            if (free) {
                addr_2c0_23:
                rdi17 = v16;
                *reinterpret_cast<int32_t*>(&rsi15) = static_cast<int32_t>(rdi17 + 1);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi15) + 4) = reinterpret_cast<int32_t>(free);
                if (*reinterpret_cast<int32_t*>(&rdi17) == 0x1c0) 
                    break; else 
                    continue;
            } else {
                *reinterpret_cast<int32_t*>(&r13_18) = 1;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_18) + 4) = reinterpret_cast<int32_t>(free);
                *reinterpret_cast<int32_t*>(&r12_19) = reinterpret_cast<int32_t>(free);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_19) + 4) = reinterpret_cast<int32_t>(free);
                do {
                    r10_20 = reinterpret_cast<struct s94*>(r12_19 * 0x1f40);
                    rsi21 = reinterpret_cast<struct s95*>(reinterpret_cast<int64_t>(r8_22) + reinterpret_cast<int64_t>(r10_20) + 0x1f40);
                    r11_23 = &r10_20->f1fe8;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rcx13) + reinterpret_cast<uint64_t>(r13_18) * 8) = reinterpret_cast<int32_t>(0x3ff0000000000000);
                    r14_24 = reinterpret_cast<uint64_t>(r13_18) * 0x1f40;
                    *reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(r8_25) + r14_24) = reinterpret_cast<int64_t>(free);
                    g1fe8 = rsi21->f0;
                    rsi26 = reinterpret_cast<struct s96*>(&rsi21->f4);
                    g1fec = rsi26->f0;
                    rsi27 = reinterpret_cast<struct s93*>(&rsi26->f4);
                    rdi28 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(r13_18) - 1);
                    rbp29 = reinterpret_cast<struct s93*>(reinterpret_cast<uint64_t>(r13_18) + 1);
                    if (reinterpret_cast<uint64_t>(rsi27) >= reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(r9_30) + reinterpret_cast<int64_t>(r11_23)) || (*reinterpret_cast<int32_t*>(&rsi27) = 1, *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi27) + 4) = reinterpret_cast<int32_t>(free), reinterpret_cast<uint64_t>(r9_31 + reinterpret_cast<int64_t>(r10_20) + 0x1f40) >= reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(r11_23) + r8_32))) {
                        *rdi28 = rsi27->f0;
                        rdi33 = rdi28 + 1;
                        *rdi33 = rsi27->f4;
                        rdi34 = rdi33 + 1;
                        *reinterpret_cast<int32_t*>(&rsi35) = 1;
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi35) + 4) = reinterpret_cast<int32_t>(free);
                        do {
                            __asm__("mulsd xmm9, xmm3");
                            __asm__("addsd xmm9, xmm1");
                            __asm__("movapd xmm10, xmm5");
                            __asm__("divsd xmm10, xmm9");
                            *rdi34 = rsi35->f0;
                            rdi36 = rdi34 + 1;
                            rsi37 = reinterpret_cast<struct s97*>(&rsi35->f4);
                            *rdi36 = rsi37->f0;
                            rdi38 = rdi36 + 1;
                            rsi39 = reinterpret_cast<struct s98*>(&rsi37->f4);
                            __asm__("mulsd xmm11, xmm6");
                            *rdi38 = rsi39->f0;
                            rdi40 = rdi38 + 1;
                            rsi41 = reinterpret_cast<struct s99*>(&rsi39->f4);
                            __asm__("mulsd xmm12, xmm4");
                            __asm__("addsd xmm12, xmm11");
                            *rdi40 = rsi41->f0;
                            rdi42 = rdi40 + 1;
                            rsi43 = reinterpret_cast<struct s100*>(&rsi41->f4);
                            __asm__("mulsd xmm11, xmm4");
                            __asm__("addsd xmm11, xmm12");
                            __asm__("mulsd xmm8, xmm5");
                            __asm__("addsd xmm8, xmm11");
                            __asm__("divsd xmm8, xmm9");
                            *rdi42 = rsi43->f0;
                            rdi34 = rdi42 + 1;
                            rsi35 = reinterpret_cast<struct s93*>(reinterpret_cast<uint64_t>(&rsi43->f4) + 1);
                            __asm__("movapd xmm9, xmm10");
                        } while (!reinterpret_cast<int1_t>(rsi35 == 21));
                    } else {
                        do {
                            *rdi28 = rsi27->f0;
                            rdi44 = rdi28 + 1;
                            rsi45 = reinterpret_cast<struct s97*>(&rsi27->f4);
                            __asm__("mulsd xmm8, xmm3");
                            __asm__("addsd xmm8, xmm1");
                            __asm__("movapd xmm9, xmm5");
                            __asm__("divsd xmm9, xmm8");
                            *rdi44 = rsi45->f0;
                            rdi46 = rdi44 + 1;
                            rsi47 = reinterpret_cast<struct s98*>(&rsi45->f4);
                            *rdi46 = rsi47->f0;
                            rdi48 = rdi46 + 1;
                            rsi49 = reinterpret_cast<struct s99*>(&rsi47->f4);
                            __asm__("mulsd xmm9, xmm6");
                            *rdi48 = rsi49->f0;
                            rdi50 = rdi48 + 1;
                            rsi51 = reinterpret_cast<struct s100*>(&rsi49->f4);
                            __asm__("mulsd xmm10, xmm4");
                            __asm__("addsd xmm10, xmm9");
                            *rdi50 = rsi51->f0;
                            rdi52 = rdi50 + 1;
                            rsi53 = reinterpret_cast<struct s101*>(&rsi51->f4);
                            __asm__("mulsd xmm9, xmm4");
                            __asm__("addsd xmm9, xmm10");
                            *rdi52 = rsi53->f0;
                            rdi54 = rdi52 + 1;
                            rsi55 = &rsi53->f1;
                            __asm__("mulsd xmm10, xmm5");
                            __asm__("addsd xmm10, xmm9");
                            __asm__("divsd xmm10, xmm8");
                            *rdi54 = *rsi55;
                            rdi28 = rdi54 + 1;
                            rsi27 = reinterpret_cast<struct s93*>(reinterpret_cast<uint64_t>(rsi55 + 1) + 1);
                        } while (!reinterpret_cast<int1_t>(rsi27 == 21));
                    }
                    (&rcx13->f29040)[reinterpret_cast<uint64_t>(r13_18) * 2] = reinterpret_cast<int32_t>(0x3ff0000000000000);
                    rsi56 = reinterpret_cast<struct s102*>(20);
                    do {
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(r8_57) + r14_24) = rsi56->f0;
                        rsi58 = &rsi56->f4;
                        __asm__("mulsd xmm8, [r10+r13*8+0x1f40]");
                        __asm__("addsd xmm8, [rdi+rsi*8]");
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(r9_59) + r14_24) = *rsi58;
                        rsi60 = reinterpret_cast<void*>(rsi58 + 1);
                        rsi56 = reinterpret_cast<struct s102*>(reinterpret_cast<uint64_t>(rsi60) + 0xffffffffffffffff);
                    } while (reinterpret_cast<int64_t>(rsi60) > reinterpret_cast<int64_t>(1));
                    ++r12_19;
                    r13_18 = rbp29;
                } while (!reinterpret_cast<int1_t>(rbp29 == 21));
                if (free) 
                    goto addr_2c0_23;
            }
            *reinterpret_cast<int32_t*>(&r12_61) = 1;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_61) + 4) = reinterpret_cast<int32_t>(free);
            *reinterpret_cast<int32_t*>(&r13_62) = reinterpret_cast<int32_t>(free);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_62) + 4) = reinterpret_cast<int32_t>(free);
            do {
                rsi63 = reinterpret_cast<struct s103*>(r13_62 * 0x1f40);
                rdi64 = reinterpret_cast<struct s104*>(reinterpret_cast<int64_t>(r8_65) + reinterpret_cast<int64_t>(rsi63) + 0x1f40);
                r10_66 = reinterpret_cast<void*>(&(rsi63 + 0x3fd)->f0);
                rbp67 = reinterpret_cast<struct s105*>(reinterpret_cast<uint64_t>(r12_61) * 0x1f40);
                rbp67->f1 = reinterpret_cast<int32_t>(0x3ff0000000000000);
                *reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(r8_68) + reinterpret_cast<uint64_t>(rbp67)) = reinterpret_cast<int64_t>(free);
                rdi64->f0 = rsi63->f0;
                rdi69 = reinterpret_cast<struct s106*>(&rdi64->f4);
                rsi70 = reinterpret_cast<struct s107*>(&rsi63->f4);
                rdi69->f0 = rsi70->f0;
                rdi71 = reinterpret_cast<struct s93*>(&rdi69->f4);
                rsi72 = reinterpret_cast<struct s108*>(&rsi70->f4);
                r14_73 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(r12_61) - 1);
                r12_61 = reinterpret_cast<struct s93*>(reinterpret_cast<uint64_t>(r12_61) + 1);
                if (reinterpret_cast<uint64_t>(rdi71) >= reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(r9_74) + reinterpret_cast<int64_t>(r10_66)) || (*reinterpret_cast<int32_t*>(&rdi71) = 1, *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi71) + 4) = reinterpret_cast<int32_t>(free), reinterpret_cast<uint64_t>(r9_75 + reinterpret_cast<int64_t>(rsi72) + 0x1f40) >= reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(r10_66) + r8_76))) {
                    rdi71->f0 = rsi72->f0;
                    rdi71->f4 = rsi72->f4;
                    *reinterpret_cast<int32_t*>(&rdi77) = 1;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi77) + 4) = reinterpret_cast<int32_t>(free);
                    do {
                        __asm__("mulsd xmm9, xmm2");
                        __asm__("addsd xmm9, xmm0");
                        __asm__("movapd xmm10, xmm4");
                        __asm__("divsd xmm10, xmm9");
                        rdi77->f0 = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(r8_78) + reinterpret_cast<uint64_t>(rbp67));
                        rdi79 = reinterpret_cast<struct s97*>(&rdi77->f4);
                        rsi80 = reinterpret_cast<struct s109*>(reinterpret_cast<uint64_t>(r14_73) * 0x1f40 + reinterpret_cast<int64_t>(rcx13));
                        rdi79->f0 = rsi80->f0;
                        rdi81 = reinterpret_cast<struct s98*>(&rdi79->f4);
                        __asm__("mulsd xmm11, xmm7");
                        rdi81->f0 = rsi80->f4;
                        rdi82 = reinterpret_cast<struct s99*>(&rdi81->f4);
                        __asm__("mulsd xmm12, xmm5");
                        __asm__("addsd xmm12, xmm11");
                        rdi82->f0 = *reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(r12_61) * 0x1f40 + reinterpret_cast<int64_t>(rcx13));
                        rdi83 = reinterpret_cast<struct s100*>(&rdi82->f4);
                        __asm__("mulsd xmm11, xmm5");
                        __asm__("addsd xmm11, xmm12");
                        __asm__("mulsd xmm8, xmm4");
                        __asm__("addsd xmm8, xmm11");
                        __asm__("divsd xmm8, xmm9");
                        rdi83->f0 = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(r9_84) + reinterpret_cast<uint64_t>(rbp67));
                        rdi77 = reinterpret_cast<struct s93*>(reinterpret_cast<uint64_t>(&rdi83->f4) + 1);
                        __asm__("movapd xmm9, xmm10");
                    } while (!reinterpret_cast<int1_t>(rdi77 == 21));
                } else {
                    do {
                        rsi85 = reinterpret_cast<struct s110*>(reinterpret_cast<int64_t>(r8_86) + reinterpret_cast<uint64_t>(rbp67));
                        rdi71->f0 = rsi85->f0;
                        rdi87 = reinterpret_cast<struct s97*>(&rdi71->f4);
                        __asm__("mulsd xmm8, xmm2");
                        __asm__("addsd xmm8, xmm0");
                        __asm__("movapd xmm9, xmm4");
                        __asm__("divsd xmm9, xmm8");
                        rdi87->f0 = rsi85->f4;
                        rdi88 = reinterpret_cast<struct s98*>(&rdi87->f4);
                        rsi89 = reinterpret_cast<struct s111*>(reinterpret_cast<uint64_t>(r14_73) * 0x1f40 + reinterpret_cast<int64_t>(rcx13));
                        rdi88->f0 = rsi89->f0;
                        rdi90 = reinterpret_cast<struct s99*>(&rdi88->f4);
                        __asm__("mulsd xmm9, xmm7");
                        rdi90->f0 = rsi89->f4;
                        rdi91 = reinterpret_cast<struct s100*>(&rdi90->f4);
                        __asm__("mulsd xmm10, xmm5");
                        __asm__("addsd xmm10, xmm9");
                        rdi91->f0 = *reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(r12_61) * 0x1f40 + reinterpret_cast<int64_t>(rcx13));
                        rdi92 = reinterpret_cast<struct s101*>(&rdi91->f4);
                        __asm__("mulsd xmm9, xmm5");
                        __asm__("addsd xmm9, xmm10");
                        rsi93 = reinterpret_cast<struct s112*>(reinterpret_cast<int64_t>(r9_94) + reinterpret_cast<uint64_t>(rbp67));
                        rdi92->f0 = rsi93->f0;
                        rdi95 = &rdi92->f1;
                        __asm__("mulsd xmm10, xmm4");
                        __asm__("addsd xmm10, xmm9");
                        __asm__("divsd xmm10, xmm8");
                        *rdi95 = rsi93->f4;
                        rdi71 = reinterpret_cast<struct s93*>(reinterpret_cast<uint64_t>(rdi95 + 1) + 1);
                    } while (!reinterpret_cast<int1_t>(rdi71 == 21));
                }
                rsi96 = reinterpret_cast<struct s113*>(&rbp67->f1);
                rsi96->fa8 = reinterpret_cast<int32_t>(0x3ff0000000000000);
                rdi97 = reinterpret_cast<struct s102*>(20);
                do {
                    rdi97->f0 = rsi96->f0;
                    rdi98 = &rdi97->f4;
                    rsi99 = reinterpret_cast<struct s114*>(&rsi96->f4);
                    __asm__("mulsd xmm8, [rsi+rdi*8+0x8]");
                    __asm__("addsd xmm8, [r10+rdi*8]");
                    *rdi98 = rsi99->f0;
                    rdi100 = reinterpret_cast<void*>(rdi98 + 1);
                    rsi96 = reinterpret_cast<struct s113*>(&rsi99->f4);
                    rdi97 = reinterpret_cast<struct s102*>(reinterpret_cast<uint64_t>(rdi100) + 0xffffffffffffffff);
                } while (reinterpret_cast<int64_t>(rdi100) > reinterpret_cast<int64_t>(1));
                ++r13_62;
            } while (!reinterpret_cast<int1_t>(r12_61 == 21));
            goto addr_2c0_23;
        }
    }
    goto v101;
}

int64_t fun_761(int64_t rdi, int64_t rsi) {
    int64_t v3;
    int64_t r14_4;
    int64_t rax5;
    int64_t rax6;
    int64_t r12_7;
    int64_t rax8;
    int64_t r13_9;
    int64_t rax10;
    int64_t rcx11;
    int64_t rsi12;
    int64_t rbx13;
    int64_t v14;
    int64_t v15;
    int64_t v16;
    int64_t v17;
    int64_t v18;
    int64_t v19;
    int32_t ebp20;
    signed char** r15_21;
    int64_t rbx22;
    int64_t v23;
    int64_t v24;
    int64_t v25;
    int64_t v26;
    int64_t v27;
    int64_t v28;
    int64_t rbx29;
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
    r14_4 = rax5;
    rax6 = fun_773(0xf4240, 8);
    r12_7 = rax6;
    rax8 = fun_785(0xf4240, 8);
    r13_9 = rax8;
    *reinterpret_cast<int32_t*>(&rax10) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax10) + 4) = reinterpret_cast<int32_t>(free);
    __asm__("movdqa xmm0, [rip+0x0]");
    __asm__("movapd xmm1, [rip+0x0]");
    __asm__("movdqa xmm2, [rip+0x0]");
    __asm__("movdqa xmm3, [rip+0x0]");
    do {
        __asm__("movd xmm4, ecx");
        __asm__("pshufd xmm4, xmm4, 0x50");
        *reinterpret_cast<int32_t*>(&rcx11) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx11) + 4) = reinterpret_cast<int32_t>(free);
        __asm__("movdqa xmm5, xmm0");
        do {
            __asm__("movdqa xmm6, xmm4");
            __asm__("psubd xmm6, xmm5");
            __asm__("cvtdq2pd xmm7, xmm6");
            __asm__("divpd xmm7, xmm1");
            __asm__("movupd [rdx+rcx*8], xmm7");
            __asm__("psubd xmm6, xmm2");
            __asm__("cvtdq2pd xmm6, xmm6");
            __asm__("divpd xmm6, xmm1");
            __asm__("movupd [rsi+rdx], xmm6");
            rcx11 = rcx11 + 4;
            __asm__("paddd xmm5, xmm3");
        } while (rcx11 != 0x3e8);
        ++rax10;
    } while (rax10 != 0x3e8);
    *reinterpret_cast<int32_t*>(&rsi12) = 0x3e8;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi12) + 4) = reinterpret_cast<int32_t>(free);
    fun_843(0x1f4, 0x3e8, rbx13, r14_4, r12_7, r13_9, v3, v14, v15, v16, v17, v18, v19);
    if (ebp20 >= 43 && reinterpret_cast<int1_t>(**r15_21 == free)) {
        rsi12 = rbx22;
        fun_85d(0x3e8, rsi12, rbx13, r14_4, r12_7, r13_9, v3, v23, v24, v25, v26, v27, v28);
    }
    fun_865(rbx29, rsi12, rbx13, r14_4, r12_7, r13_9, v3, v30, v31, v32, v33, v34, v35);
    fun_86d(r14_4, rsi12, rbx13, r14_4, r12_7, r13_9, v3, v36, v37, v38, v39, v40, v41);
    fun_875(r12_7, rsi12, rbx13, r14_4, r12_7, r13_9, v3, v42, v43, v44, v45, v46, v47);
    fun_87d(r13_9, rsi12, rbx13, r14_4, r12_7, r13_9, v3, v48, v49, v50, v51, v52, v53);
    goto v54;
}

void fun_875(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13) {
    int64_t r13_14;

    fun_87d(r13_14, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11, a12);
    goto a13;
}

int64_t fun_773(int64_t rdi, int64_t rsi) {
    int64_t v3;
    int64_t r12_4;
    int64_t rax5;
    int64_t rax6;
    int64_t r13_7;
    int64_t rax8;
    int64_t rcx9;
    int64_t rsi10;
    int64_t rbx11;
    int64_t r14_12;
    int64_t v13;
    int64_t v14;
    int64_t v15;
    int64_t v16;
    int64_t v17;
    int64_t v18;
    int32_t ebp19;
    signed char** r15_20;
    int64_t rbx21;
    int64_t v22;
    int64_t v23;
    int64_t v24;
    int64_t v25;
    int64_t v26;
    int64_t v27;
    int64_t rbx28;
    int64_t v29;
    int64_t v30;
    int64_t v31;
    int64_t v32;
    int64_t v33;
    int64_t v34;
    int64_t r14_35;
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
    r12_4 = rax5;
    rax6 = fun_785(0xf4240, 8);
    r13_7 = rax6;
    *reinterpret_cast<int32_t*>(&rax8) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax8) + 4) = reinterpret_cast<int32_t>(free);
    __asm__("movdqa xmm0, [rip+0x0]");
    __asm__("movapd xmm1, [rip+0x0]");
    __asm__("movdqa xmm2, [rip+0x0]");
    __asm__("movdqa xmm3, [rip+0x0]");
    do {
        __asm__("movd xmm4, ecx");
        __asm__("pshufd xmm4, xmm4, 0x50");
        *reinterpret_cast<int32_t*>(&rcx9) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx9) + 4) = reinterpret_cast<int32_t>(free);
        __asm__("movdqa xmm5, xmm0");
        do {
            __asm__("movdqa xmm6, xmm4");
            __asm__("psubd xmm6, xmm5");
            __asm__("cvtdq2pd xmm7, xmm6");
            __asm__("divpd xmm7, xmm1");
            __asm__("movupd [rdx+rcx*8], xmm7");
            __asm__("psubd xmm6, xmm2");
            __asm__("cvtdq2pd xmm6, xmm6");
            __asm__("divpd xmm6, xmm1");
            __asm__("movupd [rsi+rdx], xmm6");
            rcx9 = rcx9 + 4;
            __asm__("paddd xmm5, xmm3");
        } while (rcx9 != 0x3e8);
        ++rax8;
    } while (rax8 != 0x3e8);
    *reinterpret_cast<int32_t*>(&rsi10) = 0x3e8;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi10) + 4) = reinterpret_cast<int32_t>(free);
    fun_843(0x1f4, 0x3e8, rbx11, r14_12, r12_4, r13_7, v3, v13, v14, v15, v16, v17, v18);
    if (ebp19 >= 43 && reinterpret_cast<int1_t>(**r15_20 == free)) {
        rsi10 = rbx21;
        fun_85d(0x3e8, rsi10, rbx11, r14_12, r12_4, r13_7, v3, v22, v23, v24, v25, v26, v27);
    }
    fun_865(rbx28, rsi10, rbx11, r14_12, r12_4, r13_7, v3, v29, v30, v31, v32, v33, v34);
    fun_86d(r14_35, rsi10, rbx11, r14_12, r12_4, r13_7, v3, v36, v37, v38, v39, v40, v41);
    fun_875(r12_4, rsi10, rbx11, r14_12, r12_4, r13_7, v3, v42, v43, v44, v45, v46, v47);
    fun_87d(r13_7, rsi10, rbx11, r14_12, r12_4, r13_7, v3, v48, v49, v50, v51, v52, v53);
    goto v54;
}

void fun_87d(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13) {
    goto a13;
}

int64_t fun_785(int64_t rdi, int64_t rsi) {
    int64_t v3;
    int64_t r13_4;
    int64_t rax5;
    int64_t rax6;
    int64_t rcx7;
    int64_t rsi8;
    int64_t rbx9;
    int64_t r14_10;
    int64_t r12_11;
    int64_t v12;
    int64_t v13;
    int64_t v14;
    int64_t v15;
    int64_t v16;
    int64_t v17;
    int32_t ebp18;
    signed char** r15_19;
    int64_t rbx20;
    int64_t v21;
    int64_t v22;
    int64_t v23;
    int64_t v24;
    int64_t v25;
    int64_t v26;
    int64_t rbx27;
    int64_t v28;
    int64_t v29;
    int64_t v30;
    int64_t v31;
    int64_t v32;
    int64_t v33;
    int64_t r14_34;
    int64_t v35;
    int64_t v36;
    int64_t v37;
    int64_t v38;
    int64_t v39;
    int64_t v40;
    int64_t r12_41;
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
    r13_4 = rax5;
    *reinterpret_cast<int32_t*>(&rax6) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax6) + 4) = reinterpret_cast<int32_t>(free);
    __asm__("movdqa xmm0, [rip+0x0]");
    __asm__("movapd xmm1, [rip+0x0]");
    __asm__("movdqa xmm2, [rip+0x0]");
    __asm__("movdqa xmm3, [rip+0x0]");
    do {
        __asm__("movd xmm4, ecx");
        __asm__("pshufd xmm4, xmm4, 0x50");
        *reinterpret_cast<int32_t*>(&rcx7) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx7) + 4) = reinterpret_cast<int32_t>(free);
        __asm__("movdqa xmm5, xmm0");
        do {
            __asm__("movdqa xmm6, xmm4");
            __asm__("psubd xmm6, xmm5");
            __asm__("cvtdq2pd xmm7, xmm6");
            __asm__("divpd xmm7, xmm1");
            __asm__("movupd [rdx+rcx*8], xmm7");
            __asm__("psubd xmm6, xmm2");
            __asm__("cvtdq2pd xmm6, xmm6");
            __asm__("divpd xmm6, xmm1");
            __asm__("movupd [rsi+rdx], xmm6");
            rcx7 = rcx7 + 4;
            __asm__("paddd xmm5, xmm3");
        } while (rcx7 != 0x3e8);
        ++rax6;
    } while (rax6 != 0x3e8);
    *reinterpret_cast<int32_t*>(&rsi8) = 0x3e8;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi8) + 4) = reinterpret_cast<int32_t>(free);
    fun_843(0x1f4, 0x3e8, rbx9, r14_10, r12_11, r13_4, v3, v12, v13, v14, v15, v16, v17);
    if (ebp18 >= 43 && reinterpret_cast<int1_t>(**r15_19 == free)) {
        rsi8 = rbx20;
        fun_85d(0x3e8, rsi8, rbx9, r14_10, r12_11, r13_4, v3, v21, v22, v23, v24, v25, v26);
    }
    fun_865(rbx27, rsi8, rbx9, r14_10, r12_11, r13_4, v3, v28, v29, v30, v31, v32, v33);
    fun_86d(r14_34, rsi8, rbx9, r14_10, r12_11, r13_4, v3, v35, v36, v37, v38, v39, v40);
    fun_875(r12_41, rsi8, rbx9, r14_10, r12_11, r13_4, v3, v42, v43, v44, v45, v46, v47);
    fun_87d(r13_4, rsi8, rbx9, r14_10, r12_11, r13_4, v3, v48, v49, v50, v51, v52, v53);
    goto v54;
}

void free(int32_t edi) {
    if (reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(edi < reinterpret_cast<int32_t>(free) == free)) | reinterpret_cast<uint1_t>(edi == free)) {
        return;
    }
}

struct s115 {
    signed char[1] pad1;
    signed char f1;
};

struct s116 {
    signed char[1] pad1;
    signed char f1;
};

void fun_c8(int32_t* rdi, int32_t* rsi) {
    struct s115* rcx3;
    struct s116* rcx4;
    signed char cl5;
    int64_t r9_6;
    int64_t rax7;

    rcx3->f1 = reinterpret_cast<signed char>(rcx4->f1 + cl5);
    *rdi = *rsi;
    if (r9_6 + 1 != rax7) {
    }
}

int64_t* gf7 = reinterpret_cast<int64_t*>(0x3d8d48188b48);

void print_array(int32_t edi, int64_t rsi) {
    int64_t* rax3;
    int64_t rcx4;
    int32_t* r8_5;
    int32_t* r9_6;
    int64_t rax7;
    int64_t rbx8;
    int64_t r12_9;
    int64_t r13_10;
    int64_t r14_11;
    int64_t r15_12;
    int64_t rbp13;

    rax3 = gf7;
    rcx4 = *rax3;
    fun_113(0x101, 22, 1, rcx4, r8_5, r9_6, rax7, rbx8, r12_9, r13_10, r14_11, r15_12, rbp13, __return_address());
}

void submain(int32_t edi, int64_t rsi) {
    fun_74f(0xf4240, 8);
}

