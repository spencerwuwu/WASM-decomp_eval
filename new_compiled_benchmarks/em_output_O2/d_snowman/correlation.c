
struct s0 {
    int32_t f0;
    int32_t f4;
};

struct s1 {
    int32_t f0;
    int32_t f4;
};

void fun_50d(int64_t rdi, struct s0* rsi, int32_t rdx, struct s1* rcx);

void fun_515(int64_t rdi, struct s0* rsi, int32_t rdx, struct s1* rcx);

void fun_51d(int64_t rdi, struct s0* rsi, int32_t rdx, struct s1* rcx);

void fun_505(int64_t rdi, struct s0* rsi, int32_t rdx, struct s1* rcx) {
    int64_t r14_5;
    int64_t r15_6;
    int64_t r12_7;
    int64_t v8;

    fun_50d(r14_5, rsi, rdx, rcx);
    fun_515(r15_6, rsi, rdx, rcx);
    fun_51d(r12_7, rsi, rdx, rcx);
    goto v8;
}

void fun_5c9();

void fputc(int32_t edi, int64_t rsi);

void fun_5fe(struct s1* rdi, int64_t rsi, int64_t rdx, struct s1* rcx);

void fun_617(int64_t rdi, struct s0* rsi, int32_t rdx, struct s1* rcx);

void fun_5a6() {
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
        rsi2 = reinterpret_cast<int32_t*>(0x5c2);
        fun_5c9();
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
        fun_5a6();
    }
    fun_5fe(v9, 0x5e8, 0x5ef, rcx10);
    fun_617(0x605, 22, 1, v9);
    fun_505(rbx11, 22, 1, v9);
    fun_50d(r14_12, 22, 1, v9);
    fun_515(r15_13, 22, 1, v9);
    fun_51d(r12_14, 22, 1, v9);
    goto v15;
}

void fun_5c9() {
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
            fun_5a6();
        }
        *rdi5 = *rsi6;
        rdi5 = v8;
        rsi6 = reinterpret_cast<int32_t*>(0x5c2);
        fun_5c9();
    }
    fun_5fe(v9, 0x5e8, 0x5ef, rcx10);
    fun_617(0x605, 22, 1, v9);
    fun_505(rbx11, 22, 1, v9);
    fun_50d(r14_12, 22, 1, v9);
    fun_515(r15_13, 22, 1, v9);
    fun_51d(r12_14, 22, 1, v9);
    goto v15;
}

void fun_570() {
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
                fun_5a6();
            }
            *rdi5 = *rsi6;
            rdi5 = v8;
            rsi6 = reinterpret_cast<int32_t*>(0x5c2);
            fun_5c9();
            ++r13_3;
        } while (r13_3 != 0x4b0);
        ++rbp2;
    } while (rbp2 != 0x4b0);
    fun_5fe(v9, 0x5e8, 0x5ef, rcx10);
    fun_617(0x605, 22, 1, v9);
    fun_505(rbx11, 22, 1, v9);
    fun_50d(r14_12, 22, 1, v9);
    fun_515(r15_13, 22, 1, v9);
    fun_51d(r12_14, 22, 1, v9);
    goto v15;
}

void fun_5fe(struct s1* rdi, int64_t rsi, int64_t rdx, struct s1* rcx) {
    struct s1* r13_5;
    int64_t rbx6;
    int64_t r14_7;
    int64_t r15_8;
    int64_t r12_9;
    int64_t v10;

    fun_617(0x605, 22, 1, r13_5);
    fun_505(rbx6, 22, 1, r13_5);
    fun_50d(r14_7, 22, 1, r13_5);
    fun_515(r15_8, 22, 1, r13_5);
    fun_51d(r12_9, 22, 1, r13_5);
    goto v10;
}

struct s2 {
    int32_t f0;
    int32_t f4;
};

struct s3 {
    signed char[9600] pad9600;
    int32_t f2580;
};

struct s4 {
    signed char[9600] pad9600;
    int32_t f2580;
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
    int32_t f1;
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

struct s1** g535 = reinterpret_cast<struct s1**>(0x3d8d48288b4c);

void fun_551(int64_t rdi, int64_t rsi, int64_t rdx, struct s1* rcx);

void fun_1b5() {
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
    int32_t* rdi12;
    int32_t* rsi13;
    int32_t* rdi14;
    int32_t* rsi15;
    struct s2* rcx16;
    struct s3* r15_17;
    struct s2* rdx18;
    struct s4* r12_19;
    int64_t rax20;
    struct s5* rsi21;
    void* rdi22;
    uint64_t r8_23;
    int64_t rbx24;
    struct s2* rdi25;
    int32_t* rbx26;
    uint64_t r15_27;
    int64_t r9_28;
    int64_t r8_29;
    uint64_t r12_30;
    struct s6* rdi31;
    struct s7* rsi32;
    struct s8* rdi33;
    struct s9* rsi34;
    struct s10* rdi35;
    struct s11* rsi36;
    struct s12* rdi37;
    struct s13* rsi38;
    struct s14* rdi39;
    struct s15* rsi40;
    struct s16* rdi41;
    struct s17* rsi42;
    struct s18* rdi43;
    struct s19* rsi44;
    struct s1* rcx45;
    int32_t rdx46;
    struct s0* rsi47;
    int32_t* r14_48;
    struct s1* rdi49;
    int64_t r9_50;
    struct s20* rdi51;
    struct s21* rsi52;
    struct s22* rdi53;
    struct s23* rsi54;
    struct s24* rdi55;
    struct s25* rsi56;
    int64_t r14_57;
    int32_t ebp58;
    signed char** v59;
    struct s1** rax60;
    struct s1* r13_61;
    struct s1* rcx62;
    struct s1* rsi63;
    int64_t rbp64;
    struct s1* v65;
    struct s1* rdi66;
    int64_t v67;
    int64_t r13_68;
    int64_t rax69;
    int64_t rbx70;
    int64_t r14_71;
    int64_t r15_72;
    int64_t r12_73;
    int64_t v74;

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
                goto addr_282_14;
            r12_8[r13_7] = reinterpret_cast<int64_t>(fputc);
            __asm__("xorpd xmm0, xmm0");
            *reinterpret_cast<int32_t*>(&rax9) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax9) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                *rdi1 = *rsi2;
                rdi10 = rdi1 + 1;
                rsi11 = rsi2 + 1;
                __asm__("subsd xmm1, [r15+r13*8]");
                __asm__("mulsd xmm1, xmm1");
                __asm__("addsd xmm1, xmm0");
                *rdi10 = *rsi11;
                rdi12 = rdi10 + 1;
                rsi13 = rsi11 + 1;
                *rdi12 = *rsi13;
                rdi14 = rdi12 + 1;
                rsi15 = rsi13 + 1;
                __asm__("subsd xmm0, [r15+r13*8]");
                __asm__("mulsd xmm0, xmm0");
                __asm__("addsd xmm0, xmm1");
                *rdi14 = *rsi15;
                rdi1 = rdi14 + 1;
                rsi2 = rsi15 + 1;
                rax9 = rax9 + 2;
            } while (rax9 != 0x578);
            __asm__("divsd xmm0, xmm2");
            __asm__("ucomisd xmm0, xmm3");
            if (rax9 < 0x578) 
                break;
            __asm__("sqrtsd xmm0, xmm0");
        }
        fun_1b5();
    }
    addr_282_14:
    rcx16 = reinterpret_cast<struct s2*>(&r15_17->f2580);
    rdx18 = reinterpret_cast<struct s2*>(&r12_19->f2580);
    *reinterpret_cast<int32_t*>(&rax20) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax20) + 4) = reinterpret_cast<int32_t>(fputc);
    *rdi1 = *rsi2;
    __asm__("movapd xmm1, [rip+0x0]");
    *reinterpret_cast<int32_t*>(&rsi21) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi21) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        rdi22 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsi21) * 0x2580);
        r8_23 = reinterpret_cast<uint64_t>(rbx24 + reinterpret_cast<int64_t>(rdi22) + 0x2580);
        rdi25 = reinterpret_cast<struct s2*>(reinterpret_cast<int64_t>(rdi22) + reinterpret_cast<int64_t>(rbx26));
        if (!reinterpret_cast<int1_t>((static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(rdi25) < reinterpret_cast<uint64_t>(rcx16))) & static_cast<unsigned char>(reinterpret_cast<uint1_t>(r15_27 < r8_23))) == fputc)) {
            *reinterpret_cast<int32_t*>(&r9_28) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_28) + 4) = reinterpret_cast<int32_t>(fputc);
            goto addr_3a0_37;
        }
        *reinterpret_cast<int32_t*>(&r8_29) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_29) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&r9_28) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_28) + 4) = reinterpret_cast<int32_t>(fputc);
        if (!reinterpret_cast<int1_t>((static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(rdi25) < reinterpret_cast<uint64_t>(rdx18))) & static_cast<unsigned char>(reinterpret_cast<uint1_t>(r12_30 < r8_23))) == fputc)) {
            do {
                addr_3a0_37:
                rdi25->f0 = rsi21->f0;
                rdi31 = reinterpret_cast<struct s6*>(&rdi25->f4);
                rsi32 = reinterpret_cast<struct s7*>(&rsi21->f4);
                __asm__("subsd xmm2, [r15+r9*8]");
                rdi31->f0 = rsi32->f0;
                rdi33 = reinterpret_cast<struct s8*>(&rdi31->f4);
                rsi34 = reinterpret_cast<struct s9*>(&rsi32->f4);
                rdi33->f0 = rsi34->f0;
                rdi35 = reinterpret_cast<struct s10*>(&rdi33->f4);
                rsi36 = reinterpret_cast<struct s11*>(&rsi34->f4);
                __asm__("mulsd xmm3, xmm0");
                __asm__("divsd xmm2, xmm3");
                rdi35->f0 = rsi36->f0;
                rdi37 = reinterpret_cast<struct s12*>(&rdi35->f4);
                rsi38 = reinterpret_cast<struct s13*>(&rsi36->f4);
                rdi37->f0 = rsi38->f0;
                rdi39 = reinterpret_cast<struct s14*>(&rdi37->f4);
                rsi40 = reinterpret_cast<struct s15*>(&rsi38->f4);
                __asm__("subsd xmm2, [r15+r8]");
                rdi39->f0 = rsi40->f0;
                rdi41 = reinterpret_cast<struct s16*>(&rdi39->f4);
                rsi42 = reinterpret_cast<struct s17*>(&rsi40->f4);
                rdi41->f0 = rsi42->f0;
                rdi43 = reinterpret_cast<struct s18*>(&rdi41->f4);
                rsi44 = reinterpret_cast<struct s19*>(&rsi42->f4);
                __asm__("mulsd xmm3, xmm0");
                __asm__("divsd xmm2, xmm3");
                rdi43->f0 = rsi44->f0;
                rdi25 = reinterpret_cast<struct s2*>(&rdi43->f4);
                rsi21 = reinterpret_cast<struct s5*>(&rsi44->f4);
                r9_28 = r9_28 + 2;
            } while (r9_28 != 0x4b0);
        } else {
            do {
                __asm__("movupd xmm2, [r15+r8*8]");
                __asm__("movupd xmm3, [rdi+r8*8]");
                __asm__("subpd xmm3, xmm2");
                __asm__("movupd [rdi+r8*8], xmm3");
                __asm__("movupd xmm2, [r12+r8*8]");
                __asm__("mulpd xmm2, xmm1");
                __asm__("divpd xmm3, xmm2");
                __asm__("movupd [rdi+r8*8], xmm3");
                __asm__("movupd xmm2, [r15+r9]");
                __asm__("movupd xmm3, [r9+rdi]");
                __asm__("subpd xmm3, xmm2");
                __asm__("movupd [r9+rdi], xmm3");
                __asm__("movupd xmm2, [r12+r9]");
                __asm__("mulpd xmm2, xmm1");
                __asm__("divpd xmm3, xmm2");
                __asm__("movupd [r9+rdi], xmm3");
                r8_29 = r8_29 + 4;
            } while (r8_29 != 0x4b0);
            continue;
        }
        rsi21 = reinterpret_cast<struct s5*>(reinterpret_cast<int64_t>(rsi21) + 1);
    } while (rsi21 != 0x578);
    *reinterpret_cast<int32_t*>(&rcx45) = 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx45) + 4) = reinterpret_cast<int32_t>(fputc);
    rdx46 = reinterpret_cast<int32_t>(0x3ff0000000000000);
    do {
        rsi47 = reinterpret_cast<struct s0*>(r14_48 + rax20 * 0x960);
        (rsi47 + rax20)->f0 = reinterpret_cast<int32_t>(0x3ff0000000000000);
        rdi49 = rcx45;
        do {
            (rsi47 + static_cast<int64_t>(rdi49))->f0 = reinterpret_cast<int32_t>(fputc);
            __asm__("xorpd xmm0, xmm0");
            *reinterpret_cast<int32_t*>(&r9_50) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_50) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                rdi49->f0 = rsi47->f0;
                rdi51 = reinterpret_cast<struct s20*>(&rdi49->f4);
                rsi52 = reinterpret_cast<struct s21*>(&rsi47->f4);
                __asm__("mulsd xmm1, [r10+rdi*8]");
                __asm__("addsd xmm1, xmm0");
                rdi51->f0 = rsi52->f0;
                rdi53 = reinterpret_cast<struct s22*>(&rdi51->f1);
                rsi54 = reinterpret_cast<struct s23*>(&rsi52->f4);
                rdi53->f0 = rsi54->f0;
                rdi55 = reinterpret_cast<struct s24*>(&rdi53->f4);
                rsi56 = reinterpret_cast<struct s25*>(&rsi54->f4);
                __asm__("mulsd xmm0, [r10+rdi*8]");
                __asm__("addsd xmm0, xmm1");
                rdi55->f0 = rsi56->f0;
                rdi49 = reinterpret_cast<struct s1*>(&rdi55->f4);
                rsi47 = reinterpret_cast<struct s0*>(&rsi56->f4);
                r9_50 = r9_50 + 2;
            } while (r9_50 != 0x578);
            rdi49->f0 = rsi47->f0;
            rsi47 = reinterpret_cast<struct s0*>(&rsi47->f4);
            rdi49 = reinterpret_cast<struct s1*>(reinterpret_cast<int64_t>(&rdi49->f4) + 1);
        } while (!reinterpret_cast<int1_t>(rdi49 == 0x4b0));
        ++rax20;
        rcx45 = reinterpret_cast<struct s1*>(reinterpret_cast<int64_t>(rcx45) + 1);
    } while (rax20 != 0x4af);
    *reinterpret_cast<int32_t*>(r14_57 + 0xafc7f8) = reinterpret_cast<int32_t>(0x3ff0000000000000);
    if (ebp58 >= 43 && **v59 == fputc) {
        rax60 = g535;
        r13_61 = *rax60;
        rcx62 = r13_61;
        fun_551(0x53f, 22, 1, rcx62);
        rsi63 = reinterpret_cast<struct s1*>(0x558);
        *reinterpret_cast<int32_t*>(&rbp64) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp64) + 4) = reinterpret_cast<int32_t>(fputc);
        v65 = r13_61;
        rdi66 = r13_61;
        fun_570();
        do {
            v67 = rbp64 * 0x4b0;
            *reinterpret_cast<int32_t*>(&r13_68) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_68) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                rax69 = v67;
                __asm__("ror eax, 0x2");
                if (reinterpret_cast<uint32_t>((*reinterpret_cast<int32_t*>(&rax69) + *reinterpret_cast<int32_t*>(&r13_68)) * 0xcccccccd) <= 0xccccccc) {
                    *reinterpret_cast<int32_t*>(&rdi66) = 10;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi66) + 4) = reinterpret_cast<int32_t>(fputc);
                    rsi63 = v65;
                    fun_5a6();
                }
                rdi66->f0 = rsi63->f0;
                rdi66 = v65;
                rsi63 = reinterpret_cast<struct s1*>(0x5c2);
                fun_5c9();
                ++r13_68;
            } while (r13_68 != 0x4b0);
            ++rbp64;
        } while (rbp64 != 0x4b0);
        fun_5fe(v65, 0x5e8, 0x5ef, rcx62);
        *reinterpret_cast<int32_t*>(&rsi47) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi47) + 4) = reinterpret_cast<int32_t>(fputc);
        rdx46 = 1;
        (&rdx46)[1] = reinterpret_cast<int32_t>(fputc);
        rcx45 = v65;
        fun_617(0x605, 22, 1, rcx45);
    }
    fun_505(rbx70, rsi47, rdx46, rcx45);
    fun_50d(r14_71, rsi47, rdx46, rcx45);
    fun_515(r15_72, rsi47, rdx46, rcx45);
    fun_51d(r12_73, rsi47, rdx46, rcx45);
    goto v74;
}

void fun_551(int64_t rdi, int64_t rsi, int64_t rdx, struct s1* rcx) {
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

    rsi5 = reinterpret_cast<struct s1*>(0x558);
    *reinterpret_cast<int32_t*>(&rbp6) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp6) + 4) = reinterpret_cast<int32_t>(fputc);
    v7 = r13_8;
    rdi9 = r13_10;
    fun_570();
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
                fun_5a6();
            }
            rdi9->f0 = rsi5->f0;
            rdi9 = v7;
            rsi5 = reinterpret_cast<struct s1*>(0x5c2);
            fun_5c9();
            ++r13_12;
        } while (r13_12 != 0x4b0);
        ++rbp6;
    } while (rbp6 != 0x4b0);
    fun_5fe(v7, 0x5e8, 0x5ef, rcx);
    fun_617(0x605, 22, 1, v7);
    fun_505(rbx14, 22, 1, v7);
    fun_50d(r14_15, 22, 1, v7);
    fun_515(r15_16, 22, 1, v7);
    fun_51d(r12_17, 22, 1, v7);
    goto v18;
}

void fun_50d(int64_t rdi, struct s0* rsi, int32_t rdx, struct s1* rcx) {
    int64_t r15_5;
    int64_t r12_6;
    int64_t v7;

    fun_515(r15_5, rsi, rdx, rcx);
    fun_51d(r12_6, rsi, rdx, rcx);
    goto v7;
}

void fun_617(int64_t rdi, struct s0* rsi, int32_t rdx, struct s1* rcx) {
    int64_t rbx5;
    int64_t r14_6;
    int64_t r15_7;
    int64_t r12_8;
    int64_t v9;

    fun_505(rbx5, rsi, rdx, rcx);
    fun_50d(r14_6, rsi, rdx, rcx);
    fun_515(r15_7, rsi, rdx, rcx);
    fun_51d(r12_8, rsi, rdx, rcx);
    goto v9;
}

void fun_515(int64_t rdi, struct s0* rsi, int32_t rdx, struct s1* rcx) {
    int64_t r12_5;
    int64_t v6;

    fun_51d(r12_5, rsi, rdx, rcx);
    goto v6;
}

void fun_51d(int64_t rdi, struct s0* rsi, int32_t rdx, struct s1* rcx) {
    int64_t v5;

    goto v5;
}

void fputc(int32_t edi, int64_t rsi) {
}

void fun_1d() {
    signed char* rax1;
    signed char* rax2;
    signed char al3;

    *rax1 = reinterpret_cast<signed char>(*rax2 + al3);
}

void fun_27() {
}

void fun_84() {
    __asm__("cvtpi2ps xmm3, mm1");
    __asm__("movd xmm4, rcx");
    __asm__("pshufd xmm4, xmm4, 0x44");
    __asm__("unpcklpd xmm3, xmm3");
    __asm__("movdqa xmm5, xmm0");
}

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

void fun_b8(struct s26* rdi) {
    struct s27* rsi2;
    int64_t rcx3;
    int32_t* rbx4;
    int64_t rdx5;
    int64_t rcx6;
    struct s28* rdi7;
    struct s29* rsi8;
    int64_t* r15_9;
    int64_t rax10;
    int64_t rcx11;
    struct s30* rdi12;
    struct s31* rsi13;
    struct s32* rdi14;
    struct s33* rsi15;
    struct s34* rdi16;
    struct s35* rsi17;

    rsi2 = reinterpret_cast<struct s27*>(rbx4 + rcx3 * 0x960);
    __asm__("movupd [rsi+rdx*8], xmm6");
    __asm__("paddq xmm5, xmm2");
    if (rdx5 + 2 != 0x4b0) 
        goto 0xa0;
    if (rcx6 + 1 == 0x578) {
        rdi->f0 = rsi2->f0;
        rdi7 = reinterpret_cast<struct s28*>(&rdi->f4);
        rsi8 = reinterpret_cast<struct s29*>(&rsi2->f4);
        do {
            r15_9[rax10] = reinterpret_cast<int64_t>(fputc);
            __asm__("pxor xmm0, xmm0");
            *reinterpret_cast<int32_t*>(&rcx11) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx11) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("addsd xmm0, [rdx+rax*8]");
                rdi7->f0 = rsi8->f0;
                rdi12 = reinterpret_cast<struct s30*>(&rdi7->f4);
                rsi13 = reinterpret_cast<struct s31*>(&rsi8->f4);
                __asm__("addsd xmm0, [rdx+rax*8]");
                rdi12->f0 = rsi13->f0;
                rdi14 = reinterpret_cast<struct s32*>(&rdi12->f4);
                rsi15 = reinterpret_cast<struct s33*>(&rsi13->f4);
                __asm__("addsd xmm0, [rdx+rax*8]");
                rdi14->f0 = rsi15->f0;
                rdi16 = reinterpret_cast<struct s34*>(&rdi14->f4);
                rsi17 = reinterpret_cast<struct s35*>(&rsi15->f4);
                __asm__("addsd xmm0, [rdx+rax*8]");
                rdi16->f0 = rsi17->f0;
                rdi7 = reinterpret_cast<struct s28*>(&rdi16->f4);
                rsi8 = reinterpret_cast<struct s29*>(&rsi17->f4);
                rcx11 = rcx11 + 4;
            } while (rcx11 != 0x578);
            __asm__("divsd xmm0, xmm2");
            rdi7->f0 = rsi8->f0;
            rdi7 = reinterpret_cast<struct s28*>(&rdi7->f4);
            rsi8 = reinterpret_cast<struct s29*>(&rsi8->f4);
            ++rax10;
        } while (rax10 != 0x4b0);
        __asm__("xorpd xmm3, xmm3");
        rdi7->f0 = rsi8->f0;
        rdi7->f4 = rsi8->f4;
        goto 0x1fc;
    }
}

