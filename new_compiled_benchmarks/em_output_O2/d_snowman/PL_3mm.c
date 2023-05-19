
void fun_4a2();

void free(int32_t edi);

void fun_4c4(int64_t rdi, int64_t rsi, int64_t rdx);

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

void fun_47f() {
    int32_t* rdi1;
    int32_t* rsi2;
    int32_t* rbx3;
    int64_t r14_4;
    int64_t r13_5;
    int64_t rbp6;
    int64_t r12_7;
    int32_t v8;
    int64_t r15_9;
    int64_t r12_10;
    int32_t* rbx11;
    int64_t rbx12;
    struct s0* rdi13;
    struct s1* rsi14;
    int64_t rcx15;
    int64_t rbx16;
    int32_t v17;
    int32_t* r11_18;
    int32_t* v19;
    int64_t r12_20;
    int64_t r13_21;
    int64_t* r9_22;
    uint64_t rax23;
    int64_t r10_24;
    struct s2* rsi25;
    struct s1* rsi26;
    struct s3* rdi27;
    struct s4* rdi28;
    struct s2* rsi29;
    struct s5* rdi30;
    struct s2* rsi31;
    int32_t* rdx32;
    int32_t* v33;
    int64_t r11_34;
    int32_t* rbx35;
    int32_t* v36;
    int32_t* r14_37;
    int32_t* v38;
    uint32_t r15d39;
    uint32_t r8d40;
    int64_t r12_41;
    int64_t r13_42;
    int64_t rbp43;
    int32_t r8d44;
    int32_t r8d45;
    uint64_t r10_46;
    int64_t rcx47;
    int32_t r8d48;
    struct s6* rdi49;
    struct s7* rdi50;
    struct s8* rdi51;
    int32_t* rsi52;
    struct s9* rdi53;
    struct s10* rsi54;
    struct s5* rdi55;
    struct s2* rsi56;
    int64_t* rcx57;
    int64_t* v58;
    int64_t rbx59;
    int64_t r14_60;
    uint64_t r10_61;
    int64_t r15_62;
    struct s11* rsi63;
    int32_t* r9_64;
    struct s12* rsi65;
    struct s13* rdi66;
    struct s14* rdi67;
    int32_t* r9_68;
    struct s5* rdi69;
    int64_t v70;

    while (1) {
        *rdi1 = *rsi2;
        rdi1 = rbx3;
        rsi2 = reinterpret_cast<int32_t*>(0x49b);
        fun_4a2();
        ++r14_4;
        if (r14_4 == r13_5) {
            do {
                ++rbp6;
                if (rbp6 == r12_7) 
                    goto addr_4ac_8;
            } while (v8 <= reinterpret_cast<int32_t>(free));
            r15_9 = rbp6 * r12_10;
            *reinterpret_cast<int32_t*>(&r14_4) = reinterpret_cast<int32_t>(free);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_4) + 4) = reinterpret_cast<int32_t>(free);
        }
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r14_4 + r15_9) * 0xcccccccd + 0x19999998) > 0xccccccc) 
            continue;
        *reinterpret_cast<int32_t*>(&rdi1) = 10;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi1) + 4) = reinterpret_cast<int32_t>(free);
        rsi2 = rbx11;
        fun_47f();
    }
    addr_4ac_8:
    fun_4c4(rbx12, 0x4b3, 0x4ba);
    rdi13 = reinterpret_cast<struct s0*>(0x4cb);
    *reinterpret_cast<int32_t*>(&rsi14) = 22;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi14) + 4) = reinterpret_cast<int32_t>(free);
    rcx15 = rbx16;
    v17 = *reinterpret_cast<int32_t*>(&rcx15);
    if (!free) {
        r11_18 = v19;
        *reinterpret_cast<int32_t*>(&r12_20) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_20) + 4) = reinterpret_cast<int32_t>(free);
        do {
            if (!free) {
                *reinterpret_cast<int32_t*>(&r13_21) = reinterpret_cast<int32_t>(free);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_21) + 4) = reinterpret_cast<int32_t>(free);
                do {
                    (r9_22 + r12_20 * 0x384)[r13_21] = reinterpret_cast<int64_t>(free);
                    if (!free) {
                        __asm__("xorpd xmm0, xmm0");
                        *reinterpret_cast<int32_t*>(&rax23) = reinterpret_cast<int32_t>(free);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax23) + 4) = reinterpret_cast<int32_t>(free);
                        *reinterpret_cast<int32_t*>(&r10_24) = reinterpret_cast<int32_t>(free);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_24) + 4) = reinterpret_cast<int32_t>(free);
                        if (!1) {
                            do {
                                rdi13->f0 = rsi14->f0;
                                rsi25 = reinterpret_cast<struct s2*>(&rsi14->f4);
                                __asm__("mulsd xmm1, [rdi+r13*8]");
                                __asm__("addsd xmm1, xmm0");
                                r11_18[rax23 * 0x708] = rsi25->f0;
                                rsi26 = reinterpret_cast<struct s1*>(&rsi25->f4);
                                rdi27 = reinterpret_cast<struct s3*>(rax23 | 1);
                                rdi27->f0 = rsi26->f0;
                                rdi28 = reinterpret_cast<struct s4*>(&rdi27->f4);
                                rsi29 = reinterpret_cast<struct s2*>(&rsi26->f4);
                                __asm__("mulsd xmm0, [rcx+r13*8]");
                                __asm__("addsd xmm0, xmm1");
                                rdi28->f0 = rsi29->f0;
                                rdi13 = reinterpret_cast<struct s0*>(&rdi28->f4);
                                rsi14 = reinterpret_cast<struct s1*>(&rsi29->f4);
                                rax23 = rax23 + 2;
                                r10_24 = r10_24 + 2;
                            } while (!reinterpret_cast<int1_t>(r10_24 == free));
                        }
                        if (!free) {
                            rdi13->f0 = rsi14->f0;
                            rdi30 = reinterpret_cast<struct s5*>(&rdi13->f4);
                            rsi31 = reinterpret_cast<struct s2*>(&rsi14->f4);
                            __asm__("mulsd xmm1, [rax+r13*8]");
                            __asm__("addsd xmm1, xmm0");
                            rdi30->f0 = rsi31->f0;
                            rdi13 = reinterpret_cast<struct s0*>(&rdi30->f4);
                            rsi14 = reinterpret_cast<struct s1*>(&rsi31->f4);
                        }
                    }
                    ++r13_21;
                } while (r13_21 != 22);
            }
            ++r12_20;
            *reinterpret_cast<int32_t*>(&rsi14) = 22;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi14) + 4) = reinterpret_cast<int32_t>(free);
        } while (r12_20 != 0x4cb);
    }
    rdx32 = v33;
    *reinterpret_cast<int32_t*>(&r11_34) = v17;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_34) + 4) = reinterpret_cast<int32_t>(free);
    if (!free) {
        rbx35 = v36;
        r14_37 = v38;
        r15d39 = r8d40;
        *reinterpret_cast<uint32_t*>(&r12_41) = r15d39 & 0xfffffffe;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_41) + 4) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(&r13_42) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_42) + 4) = reinterpret_cast<int32_t>(free);
        do {
            if (v17 > reinterpret_cast<int32_t>(free)) {
                *reinterpret_cast<int32_t*>(&rbp43) = reinterpret_cast<int32_t>(free);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp43) + 4) = reinterpret_cast<int32_t>(free);
                do {
                    (rdx32 + r13_42 * 0x898)[rbp43 * 2] = reinterpret_cast<int32_t>(free);
                    if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(r8d44 < reinterpret_cast<int32_t>(free) == free)) | reinterpret_cast<uint1_t>(r8d45 == free))) {
                        __asm__("xorpd xmm0, xmm0");
                        *reinterpret_cast<int32_t*>(&r10_46) = reinterpret_cast<int32_t>(free);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_46) + 4) = reinterpret_cast<int32_t>(free);
                        *reinterpret_cast<int32_t*>(&rcx47) = reinterpret_cast<int32_t>(free);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx47) + 4) = reinterpret_cast<int32_t>(free);
                        if (r8d48 != 1) {
                            do {
                                rdi49 = reinterpret_cast<struct s6*>(r14_37 + r13_42 * 0x960);
                                rdi49->f0 = rsi14->f0;
                                rdi50 = reinterpret_cast<struct s7*>(&rdi49->f4);
                                __asm__("mulsd xmm1, [rsi+rbp*8]");
                                __asm__("addsd xmm1, xmm0");
                                rdi50->f0 = rbx35[r10_46 * 0x898];
                                rdi51 = reinterpret_cast<struct s8*>(&rdi50->f4);
                                rsi52 = reinterpret_cast<int32_t*>(r10_46 | 1);
                                rdi51->f0 = *rsi52;
                                rdi53 = reinterpret_cast<struct s9*>(&rdi51->f4);
                                rsi54 = reinterpret_cast<struct s10*>(rbx35 + reinterpret_cast<uint64_t>(rsi52 + 1) * 0x898);
                                __asm__("mulsd xmm0, [rsi+rbp*8]");
                                __asm__("addsd xmm0, xmm1");
                                rdi53->f0 = rsi54->f0;
                                rdi13 = reinterpret_cast<struct s0*>(&rdi53->f4);
                                rsi14 = reinterpret_cast<struct s1*>(&rsi54->f4);
                                r10_46 = r10_46 + 2;
                                rcx47 = rcx47 + 2;
                            } while (rcx47 != r12_41);
                        }
                        if ((*reinterpret_cast<unsigned char*>(&r15d39) & 1) != free) {
                            rdi13->f0 = rsi14->f0;
                            rdi55 = reinterpret_cast<struct s5*>(&rdi13->f4);
                            rsi56 = reinterpret_cast<struct s2*>(&rsi14->f4);
                            __asm__("mulsd xmm1, [rcx+rbp*8]");
                            __asm__("addsd xmm1, xmm0");
                            rdi55->f0 = rsi56->f0;
                            rdi13 = reinterpret_cast<struct s0*>(&rdi55->f4);
                            rsi14 = reinterpret_cast<struct s1*>(&rsi56->f4);
                        }
                    }
                    ++rbp43;
                } while (rbp43 != r11_34);
            }
            ++r13_42;
        } while (r13_42 != 22);
    }
    if (!free) {
        rcx57 = v58;
        *reinterpret_cast<int32_t*>(&rbx59) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx59) + 4) = reinterpret_cast<int32_t>(free);
        do {
            if (v17 > reinterpret_cast<int32_t>(free)) {
                *reinterpret_cast<int32_t*>(&r14_60) = reinterpret_cast<int32_t>(free);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_60) + 4) = reinterpret_cast<int32_t>(free);
                do {
                    (rcx57 + rbx59 * 0x44c)[r14_60] = reinterpret_cast<int64_t>(free);
                    if (!free) {
                        __asm__("xorpd xmm0, xmm0");
                        *reinterpret_cast<int32_t*>(&r10_61) = reinterpret_cast<int32_t>(free);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_61) + 4) = reinterpret_cast<int32_t>(free);
                        *reinterpret_cast<int32_t*>(&r15_62) = reinterpret_cast<int32_t>(free);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_62) + 4) = reinterpret_cast<int32_t>(free);
                        if (!free) {
                            do {
                                rsi63 = reinterpret_cast<struct s11*>(r9_64 + rbx59 * 0x708);
                                rdi13->f0 = rsi63->f0;
                                rsi65 = reinterpret_cast<struct s12*>(&rsi63->f4);
                                __asm__("mulsd xmm1, [rdi+r14*8]");
                                __asm__("addsd xmm1, xmm0");
                                rdx32[r10_61 * 0x898] = rsi65->f0;
                                rdi66 = reinterpret_cast<struct s13*>(r10_61 | 1);
                                rdi66->f0 = rsi65->f4;
                                rdi67 = reinterpret_cast<struct s14*>(&rdi66->f4);
                                __asm__("mulsd xmm0, [rsi+r14*8]");
                                __asm__("addsd xmm0, xmm1");
                                rdi67->f0 = rdx32[reinterpret_cast<uint64_t>(rdi67) * 0x898];
                                rdi13 = reinterpret_cast<struct s0*>(&rdi67->f4);
                                r10_61 = r10_61 + 2;
                                r15_62 = r15_62 + 2;
                            } while (r15_62 != 22);
                        }
                        if (!1) {
                            rdi13->f0 = r9_68[rbx59 * 0x708];
                            rdi69 = reinterpret_cast<struct s5*>(&rdi13->f4);
                            __asm__("mulsd xmm1, [rsi+r14*8]");
                            __asm__("addsd xmm1, xmm0");
                            rdi69->f0 = rdx32[r10_61 * 0x898];
                            rdi13 = reinterpret_cast<struct s0*>(&rdi69->f4);
                        }
                    }
                    ++r14_60;
                } while (r14_60 != r11_34);
            }
            ++rbx59;
        } while (rbx59 != 0x4cb);
    }
    goto v70;
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

void fun_4a2() {
    int64_t r14_1;
    int64_t r13_2;
    int64_t rbp3;
    int64_t r12_4;
    int32_t v5;
    int64_t r15_6;
    int64_t r12_7;
    int32_t* rdi8;
    int32_t* rsi9;
    int32_t* rbx10;
    int32_t* rbx11;
    int64_t rbx12;
    struct s15* rdi13;
    struct s16* rsi14;
    int64_t rcx15;
    int64_t rbx16;
    int32_t v17;
    int32_t* r11_18;
    int32_t* v19;
    int64_t r12_20;
    int64_t r13_21;
    int64_t* r9_22;
    uint64_t rax23;
    int64_t r10_24;
    struct s17* rsi25;
    struct s16* rsi26;
    struct s18* rdi27;
    struct s19* rdi28;
    struct s17* rsi29;
    struct s20* rdi30;
    struct s17* rsi31;
    int32_t* rdx32;
    int32_t* v33;
    int64_t r11_34;
    int32_t* rbx35;
    int32_t* v36;
    int32_t* r14_37;
    int32_t* v38;
    uint32_t r15d39;
    uint32_t r8d40;
    int64_t r12_41;
    int64_t r13_42;
    int64_t rbp43;
    int32_t r8d44;
    int32_t r8d45;
    uint64_t r10_46;
    int64_t rcx47;
    int32_t r8d48;
    struct s21* rdi49;
    struct s22* rdi50;
    struct s23* rdi51;
    int32_t* rsi52;
    struct s24* rdi53;
    struct s25* rsi54;
    struct s20* rdi55;
    struct s17* rsi56;
    int64_t* rcx57;
    int64_t* v58;
    int64_t rbx59;
    int64_t r14_60;
    uint64_t r10_61;
    int64_t r15_62;
    struct s26* rsi63;
    int32_t* r9_64;
    struct s27* rsi65;
    struct s28* rdi66;
    struct s29* rdi67;
    int32_t* r9_68;
    struct s20* rdi69;
    int64_t v70;

    while (1) {
        ++r14_1;
        if (r14_1 == r13_2) {
            do {
                ++rbp3;
                if (rbp3 == r12_4) 
                    goto addr_4ac_4;
            } while (v5 <= reinterpret_cast<int32_t>(free));
            r15_6 = rbp3 * r12_7;
            *reinterpret_cast<int32_t*>(&r14_1) = reinterpret_cast<int32_t>(free);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_1) + 4) = reinterpret_cast<int32_t>(free);
        }
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r14_1 + r15_6) * 0xcccccccd + 0x19999998) <= 0xccccccc) {
            *reinterpret_cast<int32_t*>(&rdi8) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi8) + 4) = reinterpret_cast<int32_t>(free);
            rsi9 = rbx10;
            fun_47f();
        }
        *rdi8 = *rsi9;
        rdi8 = rbx11;
        rsi9 = reinterpret_cast<int32_t*>(0x49b);
        fun_4a2();
    }
    addr_4ac_4:
    fun_4c4(rbx12, 0x4b3, 0x4ba);
    rdi13 = reinterpret_cast<struct s15*>(0x4cb);
    *reinterpret_cast<int32_t*>(&rsi14) = 22;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi14) + 4) = reinterpret_cast<int32_t>(free);
    rcx15 = rbx16;
    v17 = *reinterpret_cast<int32_t*>(&rcx15);
    if (!free) {
        r11_18 = v19;
        *reinterpret_cast<int32_t*>(&r12_20) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_20) + 4) = reinterpret_cast<int32_t>(free);
        do {
            if (!free) {
                *reinterpret_cast<int32_t*>(&r13_21) = reinterpret_cast<int32_t>(free);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_21) + 4) = reinterpret_cast<int32_t>(free);
                do {
                    (r9_22 + r12_20 * 0x384)[r13_21] = reinterpret_cast<int64_t>(free);
                    if (!free) {
                        __asm__("xorpd xmm0, xmm0");
                        *reinterpret_cast<int32_t*>(&rax23) = reinterpret_cast<int32_t>(free);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax23) + 4) = reinterpret_cast<int32_t>(free);
                        *reinterpret_cast<int32_t*>(&r10_24) = reinterpret_cast<int32_t>(free);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_24) + 4) = reinterpret_cast<int32_t>(free);
                        if (!1) {
                            do {
                                rdi13->f0 = rsi14->f0;
                                rsi25 = reinterpret_cast<struct s17*>(&rsi14->f4);
                                __asm__("mulsd xmm1, [rdi+r13*8]");
                                __asm__("addsd xmm1, xmm0");
                                r11_18[rax23 * 0x708] = rsi25->f0;
                                rsi26 = reinterpret_cast<struct s16*>(&rsi25->f4);
                                rdi27 = reinterpret_cast<struct s18*>(rax23 | 1);
                                rdi27->f0 = rsi26->f0;
                                rdi28 = reinterpret_cast<struct s19*>(&rdi27->f4);
                                rsi29 = reinterpret_cast<struct s17*>(&rsi26->f4);
                                __asm__("mulsd xmm0, [rcx+r13*8]");
                                __asm__("addsd xmm0, xmm1");
                                rdi28->f0 = rsi29->f0;
                                rdi13 = reinterpret_cast<struct s15*>(&rdi28->f4);
                                rsi14 = reinterpret_cast<struct s16*>(&rsi29->f4);
                                rax23 = rax23 + 2;
                                r10_24 = r10_24 + 2;
                            } while (!reinterpret_cast<int1_t>(r10_24 == free));
                        }
                        if (!free) {
                            rdi13->f0 = rsi14->f0;
                            rdi30 = reinterpret_cast<struct s20*>(&rdi13->f4);
                            rsi31 = reinterpret_cast<struct s17*>(&rsi14->f4);
                            __asm__("mulsd xmm1, [rax+r13*8]");
                            __asm__("addsd xmm1, xmm0");
                            rdi30->f0 = rsi31->f0;
                            rdi13 = reinterpret_cast<struct s15*>(&rdi30->f4);
                            rsi14 = reinterpret_cast<struct s16*>(&rsi31->f4);
                        }
                    }
                    ++r13_21;
                } while (r13_21 != 22);
            }
            ++r12_20;
            *reinterpret_cast<int32_t*>(&rsi14) = 22;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi14) + 4) = reinterpret_cast<int32_t>(free);
        } while (r12_20 != 0x4cb);
    }
    rdx32 = v33;
    *reinterpret_cast<int32_t*>(&r11_34) = v17;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_34) + 4) = reinterpret_cast<int32_t>(free);
    if (!free) {
        rbx35 = v36;
        r14_37 = v38;
        r15d39 = r8d40;
        *reinterpret_cast<uint32_t*>(&r12_41) = r15d39 & 0xfffffffe;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_41) + 4) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(&r13_42) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_42) + 4) = reinterpret_cast<int32_t>(free);
        do {
            if (v17 > reinterpret_cast<int32_t>(free)) {
                *reinterpret_cast<int32_t*>(&rbp43) = reinterpret_cast<int32_t>(free);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp43) + 4) = reinterpret_cast<int32_t>(free);
                do {
                    (rdx32 + r13_42 * 0x898)[rbp43 * 2] = reinterpret_cast<int32_t>(free);
                    if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(r8d44 < reinterpret_cast<int32_t>(free) == free)) | reinterpret_cast<uint1_t>(r8d45 == free))) {
                        __asm__("xorpd xmm0, xmm0");
                        *reinterpret_cast<int32_t*>(&r10_46) = reinterpret_cast<int32_t>(free);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_46) + 4) = reinterpret_cast<int32_t>(free);
                        *reinterpret_cast<int32_t*>(&rcx47) = reinterpret_cast<int32_t>(free);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx47) + 4) = reinterpret_cast<int32_t>(free);
                        if (r8d48 != 1) {
                            do {
                                rdi49 = reinterpret_cast<struct s21*>(r14_37 + r13_42 * 0x960);
                                rdi49->f0 = rsi14->f0;
                                rdi50 = reinterpret_cast<struct s22*>(&rdi49->f4);
                                __asm__("mulsd xmm1, [rsi+rbp*8]");
                                __asm__("addsd xmm1, xmm0");
                                rdi50->f0 = rbx35[r10_46 * 0x898];
                                rdi51 = reinterpret_cast<struct s23*>(&rdi50->f4);
                                rsi52 = reinterpret_cast<int32_t*>(r10_46 | 1);
                                rdi51->f0 = *rsi52;
                                rdi53 = reinterpret_cast<struct s24*>(&rdi51->f4);
                                rsi54 = reinterpret_cast<struct s25*>(rbx35 + reinterpret_cast<uint64_t>(rsi52 + 1) * 0x898);
                                __asm__("mulsd xmm0, [rsi+rbp*8]");
                                __asm__("addsd xmm0, xmm1");
                                rdi53->f0 = rsi54->f0;
                                rdi13 = reinterpret_cast<struct s15*>(&rdi53->f4);
                                rsi14 = reinterpret_cast<struct s16*>(&rsi54->f4);
                                r10_46 = r10_46 + 2;
                                rcx47 = rcx47 + 2;
                            } while (rcx47 != r12_41);
                        }
                        if ((*reinterpret_cast<unsigned char*>(&r15d39) & 1) != free) {
                            rdi13->f0 = rsi14->f0;
                            rdi55 = reinterpret_cast<struct s20*>(&rdi13->f4);
                            rsi56 = reinterpret_cast<struct s17*>(&rsi14->f4);
                            __asm__("mulsd xmm1, [rcx+rbp*8]");
                            __asm__("addsd xmm1, xmm0");
                            rdi55->f0 = rsi56->f0;
                            rdi13 = reinterpret_cast<struct s15*>(&rdi55->f4);
                            rsi14 = reinterpret_cast<struct s16*>(&rsi56->f4);
                        }
                    }
                    ++rbp43;
                } while (rbp43 != r11_34);
            }
            ++r13_42;
        } while (r13_42 != 22);
    }
    if (!free) {
        rcx57 = v58;
        *reinterpret_cast<int32_t*>(&rbx59) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx59) + 4) = reinterpret_cast<int32_t>(free);
        do {
            if (v17 > reinterpret_cast<int32_t>(free)) {
                *reinterpret_cast<int32_t*>(&r14_60) = reinterpret_cast<int32_t>(free);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_60) + 4) = reinterpret_cast<int32_t>(free);
                do {
                    (rcx57 + rbx59 * 0x44c)[r14_60] = reinterpret_cast<int64_t>(free);
                    if (!free) {
                        __asm__("xorpd xmm0, xmm0");
                        *reinterpret_cast<int32_t*>(&r10_61) = reinterpret_cast<int32_t>(free);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_61) + 4) = reinterpret_cast<int32_t>(free);
                        *reinterpret_cast<int32_t*>(&r15_62) = reinterpret_cast<int32_t>(free);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_62) + 4) = reinterpret_cast<int32_t>(free);
                        if (!free) {
                            do {
                                rsi63 = reinterpret_cast<struct s26*>(r9_64 + rbx59 * 0x708);
                                rdi13->f0 = rsi63->f0;
                                rsi65 = reinterpret_cast<struct s27*>(&rsi63->f4);
                                __asm__("mulsd xmm1, [rdi+r14*8]");
                                __asm__("addsd xmm1, xmm0");
                                rdx32[r10_61 * 0x898] = rsi65->f0;
                                rdi66 = reinterpret_cast<struct s28*>(r10_61 | 1);
                                rdi66->f0 = rsi65->f4;
                                rdi67 = reinterpret_cast<struct s29*>(&rdi66->f4);
                                __asm__("mulsd xmm0, [rsi+r14*8]");
                                __asm__("addsd xmm0, xmm1");
                                rdi67->f0 = rdx32[reinterpret_cast<uint64_t>(rdi67) * 0x898];
                                rdi13 = reinterpret_cast<struct s15*>(&rdi67->f4);
                                r10_61 = r10_61 + 2;
                                r15_62 = r15_62 + 2;
                            } while (r15_62 != 22);
                        }
                        if (!1) {
                            rdi13->f0 = r9_68[rbx59 * 0x708];
                            rdi69 = reinterpret_cast<struct s20*>(&rdi13->f4);
                            __asm__("mulsd xmm1, [rsi+r14*8]");
                            __asm__("addsd xmm1, xmm0");
                            rdi69->f0 = rdx32[r10_61 * 0x898];
                            rdi13 = reinterpret_cast<struct s15*>(&rdi69->f4);
                        }
                    }
                    ++r14_60;
                } while (r14_60 != r11_34);
            }
            ++rbx59;
        } while (rbx59 != 0x4cb);
    }
    goto v70;
}

struct s30 {
    int32_t f0;
    int32_t f4;
};

void fun_fcd(int32_t* rdi, struct s30* rsi, int64_t* rdx);

void fun_fd5(int64_t rdi, struct s30* rsi, int64_t* rdx);

void fun_fdd(int64_t rdi, struct s30* rsi, int64_t* rdx);

void fun_fe5(int32_t* rdi, struct s30* rsi, int64_t* rdx);

void fun_fed(int64_t rdi, struct s30* rsi, int64_t* rdx);

void fun_ff5(int64_t rdi, struct s30* rsi, int64_t* rdx);

void fun_fff(int64_t* rdi, struct s30* rsi, int64_t* rdx);

void fun_fc5(int64_t rdi, struct s30* rsi, int64_t* rdx) {
    int32_t* rbx4;
    int64_t r14_5;
    int64_t r12_6;
    int32_t* r13_7;
    int64_t r15_8;
    int64_t rbp9;
    int64_t* v10;
    int64_t v11;

    fun_fcd(rbx4, rsi, rdx);
    fun_fd5(r14_5, rsi, rdx);
    fun_fdd(r12_6, rsi, rdx);
    fun_fe5(r13_7, rsi, rdx);
    fun_fed(r15_8, rsi, rdx);
    fun_ff5(rbp9, rsi, rdx);
    fun_fff(v10, rsi, rdx);
    goto v11;
}

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
};

struct s45 {
    int32_t f0;
    int32_t f4;
};

void fun_4c4(int64_t rdi, int64_t rsi, int64_t rdx) {
    struct s31* rdi4;
    struct s32* rsi5;
    int64_t rcx6;
    int64_t rbx7;
    int32_t v8;
    int32_t* r11_9;
    int32_t* v10;
    int64_t r12_11;
    int64_t r13_12;
    int64_t* r9_13;
    uint64_t rax14;
    int64_t r10_15;
    struct s33* rsi16;
    struct s32* rsi17;
    struct s34* rdi18;
    struct s35* rdi19;
    struct s33* rsi20;
    struct s36* rdi21;
    struct s33* rsi22;
    int32_t* rdx23;
    int32_t* v24;
    int64_t r11_25;
    int32_t* rbx26;
    int32_t* v27;
    int32_t* r14_28;
    int32_t* v29;
    uint32_t r15d30;
    uint32_t r8d31;
    int64_t r12_32;
    int64_t r13_33;
    int64_t rbp34;
    int32_t r8d35;
    int32_t r8d36;
    uint64_t r10_37;
    int64_t rcx38;
    int32_t r8d39;
    struct s37* rdi40;
    struct s38* rdi41;
    struct s39* rdi42;
    int32_t* rsi43;
    struct s40* rdi44;
    struct s41* rsi45;
    struct s36* rdi46;
    struct s33* rsi47;
    int64_t* rcx48;
    int64_t* v49;
    int64_t rbx50;
    int64_t r14_51;
    uint64_t r10_52;
    int64_t r15_53;
    struct s42* rsi54;
    int32_t* r9_55;
    struct s43* rsi56;
    struct s44* rdi57;
    struct s45* rdi58;
    int32_t* r9_59;
    struct s36* rdi60;
    int64_t v61;

    rdi4 = reinterpret_cast<struct s31*>(0x4cb);
    *reinterpret_cast<int32_t*>(&rsi5) = 22;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi5) + 4) = reinterpret_cast<int32_t>(free);
    rcx6 = rbx7;
    v8 = *reinterpret_cast<int32_t*>(&rcx6);
    if (!free) {
        r11_9 = v10;
        *reinterpret_cast<int32_t*>(&r12_11) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_11) + 4) = reinterpret_cast<int32_t>(free);
        do {
            if (!free) {
                *reinterpret_cast<int32_t*>(&r13_12) = reinterpret_cast<int32_t>(free);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_12) + 4) = reinterpret_cast<int32_t>(free);
                do {
                    (r9_13 + r12_11 * 0x384)[r13_12] = reinterpret_cast<int64_t>(free);
                    if (!free) {
                        __asm__("xorpd xmm0, xmm0");
                        *reinterpret_cast<int32_t*>(&rax14) = reinterpret_cast<int32_t>(free);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax14) + 4) = reinterpret_cast<int32_t>(free);
                        *reinterpret_cast<int32_t*>(&r10_15) = reinterpret_cast<int32_t>(free);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_15) + 4) = reinterpret_cast<int32_t>(free);
                        if (!1) {
                            do {
                                rdi4->f0 = rsi5->f0;
                                rsi16 = reinterpret_cast<struct s33*>(&rsi5->f4);
                                __asm__("mulsd xmm1, [rdi+r13*8]");
                                __asm__("addsd xmm1, xmm0");
                                r11_9[rax14 * 0x708] = rsi16->f0;
                                rsi17 = reinterpret_cast<struct s32*>(&rsi16->f4);
                                rdi18 = reinterpret_cast<struct s34*>(rax14 | 1);
                                rdi18->f0 = rsi17->f0;
                                rdi19 = reinterpret_cast<struct s35*>(&rdi18->f4);
                                rsi20 = reinterpret_cast<struct s33*>(&rsi17->f4);
                                __asm__("mulsd xmm0, [rcx+r13*8]");
                                __asm__("addsd xmm0, xmm1");
                                rdi19->f0 = rsi20->f0;
                                rdi4 = reinterpret_cast<struct s31*>(&rdi19->f4);
                                rsi5 = reinterpret_cast<struct s32*>(&rsi20->f4);
                                rax14 = rax14 + 2;
                                r10_15 = r10_15 + 2;
                            } while (!reinterpret_cast<int1_t>(r10_15 == free));
                        }
                        if (!free) {
                            rdi4->f0 = rsi5->f0;
                            rdi21 = reinterpret_cast<struct s36*>(&rdi4->f4);
                            rsi22 = reinterpret_cast<struct s33*>(&rsi5->f4);
                            __asm__("mulsd xmm1, [rax+r13*8]");
                            __asm__("addsd xmm1, xmm0");
                            rdi21->f0 = rsi22->f0;
                            rdi4 = reinterpret_cast<struct s31*>(&rdi21->f4);
                            rsi5 = reinterpret_cast<struct s32*>(&rsi22->f4);
                        }
                    }
                    ++r13_12;
                } while (r13_12 != 22);
            }
            ++r12_11;
            *reinterpret_cast<int32_t*>(&rsi5) = 22;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi5) + 4) = reinterpret_cast<int32_t>(free);
        } while (r12_11 != 0x4cb);
    }
    rdx23 = v24;
    *reinterpret_cast<int32_t*>(&r11_25) = v8;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_25) + 4) = reinterpret_cast<int32_t>(free);
    if (!free) {
        rbx26 = v27;
        r14_28 = v29;
        r15d30 = r8d31;
        *reinterpret_cast<uint32_t*>(&r12_32) = r15d30 & 0xfffffffe;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_32) + 4) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(&r13_33) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_33) + 4) = reinterpret_cast<int32_t>(free);
        do {
            if (v8 > reinterpret_cast<int32_t>(free)) {
                *reinterpret_cast<int32_t*>(&rbp34) = reinterpret_cast<int32_t>(free);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp34) + 4) = reinterpret_cast<int32_t>(free);
                do {
                    (rdx23 + r13_33 * 0x898)[rbp34 * 2] = reinterpret_cast<int32_t>(free);
                    if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(r8d35 < reinterpret_cast<int32_t>(free) == free)) | reinterpret_cast<uint1_t>(r8d36 == free))) {
                        __asm__("xorpd xmm0, xmm0");
                        *reinterpret_cast<int32_t*>(&r10_37) = reinterpret_cast<int32_t>(free);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_37) + 4) = reinterpret_cast<int32_t>(free);
                        *reinterpret_cast<int32_t*>(&rcx38) = reinterpret_cast<int32_t>(free);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx38) + 4) = reinterpret_cast<int32_t>(free);
                        if (r8d39 != 1) {
                            do {
                                rdi40 = reinterpret_cast<struct s37*>(r14_28 + r13_33 * 0x960);
                                rdi40->f0 = rsi5->f0;
                                rdi41 = reinterpret_cast<struct s38*>(&rdi40->f4);
                                __asm__("mulsd xmm1, [rsi+rbp*8]");
                                __asm__("addsd xmm1, xmm0");
                                rdi41->f0 = rbx26[r10_37 * 0x898];
                                rdi42 = reinterpret_cast<struct s39*>(&rdi41->f4);
                                rsi43 = reinterpret_cast<int32_t*>(r10_37 | 1);
                                rdi42->f0 = *rsi43;
                                rdi44 = reinterpret_cast<struct s40*>(&rdi42->f4);
                                rsi45 = reinterpret_cast<struct s41*>(rbx26 + reinterpret_cast<uint64_t>(rsi43 + 1) * 0x898);
                                __asm__("mulsd xmm0, [rsi+rbp*8]");
                                __asm__("addsd xmm0, xmm1");
                                rdi44->f0 = rsi45->f0;
                                rdi4 = reinterpret_cast<struct s31*>(&rdi44->f4);
                                rsi5 = reinterpret_cast<struct s32*>(&rsi45->f4);
                                r10_37 = r10_37 + 2;
                                rcx38 = rcx38 + 2;
                            } while (rcx38 != r12_32);
                        }
                        if ((*reinterpret_cast<unsigned char*>(&r15d30) & 1) != free) {
                            rdi4->f0 = rsi5->f0;
                            rdi46 = reinterpret_cast<struct s36*>(&rdi4->f4);
                            rsi47 = reinterpret_cast<struct s33*>(&rsi5->f4);
                            __asm__("mulsd xmm1, [rcx+rbp*8]");
                            __asm__("addsd xmm1, xmm0");
                            rdi46->f0 = rsi47->f0;
                            rdi4 = reinterpret_cast<struct s31*>(&rdi46->f4);
                            rsi5 = reinterpret_cast<struct s32*>(&rsi47->f4);
                        }
                    }
                    ++rbp34;
                } while (rbp34 != r11_25);
            }
            ++r13_33;
        } while (r13_33 != 22);
    }
    if (!free) {
        rcx48 = v49;
        *reinterpret_cast<int32_t*>(&rbx50) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx50) + 4) = reinterpret_cast<int32_t>(free);
        do {
            if (v8 > reinterpret_cast<int32_t>(free)) {
                *reinterpret_cast<int32_t*>(&r14_51) = reinterpret_cast<int32_t>(free);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_51) + 4) = reinterpret_cast<int32_t>(free);
                do {
                    (rcx48 + rbx50 * 0x44c)[r14_51] = reinterpret_cast<int64_t>(free);
                    if (!free) {
                        __asm__("xorpd xmm0, xmm0");
                        *reinterpret_cast<int32_t*>(&r10_52) = reinterpret_cast<int32_t>(free);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_52) + 4) = reinterpret_cast<int32_t>(free);
                        *reinterpret_cast<int32_t*>(&r15_53) = reinterpret_cast<int32_t>(free);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_53) + 4) = reinterpret_cast<int32_t>(free);
                        if (!free) {
                            do {
                                rsi54 = reinterpret_cast<struct s42*>(r9_55 + rbx50 * 0x708);
                                rdi4->f0 = rsi54->f0;
                                rsi56 = reinterpret_cast<struct s43*>(&rsi54->f4);
                                __asm__("mulsd xmm1, [rdi+r14*8]");
                                __asm__("addsd xmm1, xmm0");
                                rdx23[r10_52 * 0x898] = rsi56->f0;
                                rdi57 = reinterpret_cast<struct s44*>(r10_52 | 1);
                                rdi57->f0 = rsi56->f4;
                                rdi58 = reinterpret_cast<struct s45*>(&rdi57->f4);
                                __asm__("mulsd xmm0, [rsi+r14*8]");
                                __asm__("addsd xmm0, xmm1");
                                rdi58->f0 = rdx23[reinterpret_cast<uint64_t>(rdi58) * 0x898];
                                rdi4 = reinterpret_cast<struct s31*>(&rdi58->f4);
                                r10_52 = r10_52 + 2;
                                r15_53 = r15_53 + 2;
                            } while (r15_53 != 22);
                        }
                        if (!1) {
                            rdi4->f0 = r9_59[rbx50 * 0x708];
                            rdi60 = reinterpret_cast<struct s36*>(&rdi4->f4);
                            __asm__("mulsd xmm1, [rsi+r14*8]");
                            __asm__("addsd xmm1, xmm0");
                            rdi60->f0 = rdx23[r10_52 * 0x898];
                            rdi4 = reinterpret_cast<struct s31*>(&rdi60->f4);
                        }
                    }
                    ++r14_51;
                } while (r14_51 != r11_25);
            }
            ++rbx50;
        } while (rbx50 != 0x4cb);
    }
    goto v61;
}

void fun_fcd(int32_t* rdi, struct s30* rsi, int64_t* rdx) {
    int64_t r14_4;
    int64_t r12_5;
    int32_t* r13_6;
    int64_t r15_7;
    int64_t rbp8;
    int64_t* v9;
    int64_t v10;

    fun_fd5(r14_4, rsi, rdx);
    fun_fdd(r12_5, rsi, rdx);
    fun_fe5(r13_6, rsi, rdx);
    fun_fed(r15_7, rsi, rdx);
    fun_ff5(rbp8, rsi, rdx);
    fun_fff(v9, rsi, rdx);
    goto v10;
}

void fun_425();

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

void fun_40d(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, uint32_t r8d, int32_t* r9) {
    int32_t* rsi7;
    int32_t* rdi8;
    int32_t* rbx9;
    int32_t r15d10;
    int32_t r15d11;
    int64_t r12_12;
    int32_t r15d13;
    int64_t r13_14;
    int32_t v15;
    int64_t rbp16;
    int32_t v17;
    int64_t r15_18;
    int64_t r14_19;
    int32_t* rbx20;
    int32_t* rbx21;
    int64_t rbx22;
    struct s46* rdi23;
    struct s47* rsi24;
    int64_t rcx25;
    int64_t rbx26;
    int32_t v27;
    int32_t* r11_28;
    int32_t* v29;
    int64_t r12_30;
    int64_t r13_31;
    uint64_t rax32;
    int64_t r10_33;
    struct s48* rsi34;
    struct s47* rsi35;
    struct s49* rdi36;
    struct s50* rdi37;
    struct s48* rsi38;
    struct s51* rdi39;
    struct s48* rsi40;
    int32_t* rdx41;
    int32_t* v42;
    int64_t r11_43;
    int32_t* rbx44;
    int32_t* v45;
    int32_t* r14_46;
    int32_t* v47;
    uint32_t r15d48;
    int64_t r12_49;
    int64_t r13_50;
    int64_t rbp51;
    uint64_t r10_52;
    int64_t rcx53;
    struct s52* rdi54;
    struct s53* rdi55;
    struct s54* rdi56;
    int32_t* rsi57;
    struct s55* rdi58;
    struct s56* rsi59;
    struct s51* rdi60;
    struct s48* rsi61;
    int64_t* rcx62;
    int64_t* v63;
    int64_t rbx64;
    int64_t r14_65;
    uint64_t r10_66;
    int64_t r15_67;
    struct s57* rsi68;
    struct s58* rsi69;
    struct s59* rdi70;
    struct s60* rdi71;
    struct s51* rdi72;
    int64_t v73;

    rsi7 = reinterpret_cast<int32_t*>(0x414);
    rdi8 = rbx9;
    fun_425();
    if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(r15d10 < reinterpret_cast<int32_t>(free) == free)) | reinterpret_cast<uint1_t>(r15d11 == free))) {
        *reinterpret_cast<int32_t*>(&r12_12) = r15d13;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_12) + 4) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(&r13_14) = v15;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_14) + 4) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(&rbp16) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp16) + 4) = reinterpret_cast<int32_t>(free);
        do {
            if (v17 > reinterpret_cast<int32_t>(free)) {
                r15_18 = rbp16 * r12_12;
                *reinterpret_cast<int32_t*>(&r14_19) = reinterpret_cast<int32_t>(free);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_19) + 4) = reinterpret_cast<int32_t>(free);
                do {
                    __asm__("ror eax, 0x2");
                    if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r14_19 + r15_18) * 0xcccccccd + 0x19999998) <= 0xccccccc) {
                        *reinterpret_cast<int32_t*>(&rdi8) = 10;
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi8) + 4) = reinterpret_cast<int32_t>(free);
                        rsi7 = rbx20;
                        fun_47f();
                    }
                    *rdi8 = *rsi7;
                    rdi8 = rbx21;
                    rsi7 = reinterpret_cast<int32_t*>(0x49b);
                    fun_4a2();
                    ++r14_19;
                } while (r14_19 != r13_14);
            }
            ++rbp16;
        } while (rbp16 != r12_12);
    }
    fun_4c4(rbx22, 0x4b3, 0x4ba);
    rdi23 = reinterpret_cast<struct s46*>(0x4cb);
    *reinterpret_cast<int32_t*>(&rsi24) = 22;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi24) + 4) = reinterpret_cast<int32_t>(free);
    rcx25 = rbx26;
    v27 = *reinterpret_cast<int32_t*>(&rcx25);
    if (!free) {
        r11_28 = v29;
        *reinterpret_cast<int32_t*>(&r12_30) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_30) + 4) = reinterpret_cast<int32_t>(free);
        do {
            if (!free) {
                *reinterpret_cast<int32_t*>(&r13_31) = reinterpret_cast<int32_t>(free);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_31) + 4) = reinterpret_cast<int32_t>(free);
                do {
                    (r9 + r12_30 * 0x708)[r13_31 * 2] = reinterpret_cast<int32_t>(free);
                    if (!free) {
                        __asm__("xorpd xmm0, xmm0");
                        *reinterpret_cast<int32_t*>(&rax32) = reinterpret_cast<int32_t>(free);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax32) + 4) = reinterpret_cast<int32_t>(free);
                        *reinterpret_cast<int32_t*>(&r10_33) = reinterpret_cast<int32_t>(free);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_33) + 4) = reinterpret_cast<int32_t>(free);
                        if (!1) {
                            do {
                                rdi23->f0 = rsi24->f0;
                                rsi34 = reinterpret_cast<struct s48*>(&rsi24->f4);
                                __asm__("mulsd xmm1, [rdi+r13*8]");
                                __asm__("addsd xmm1, xmm0");
                                r11_28[rax32 * 0x708] = rsi34->f0;
                                rsi35 = reinterpret_cast<struct s47*>(&rsi34->f4);
                                rdi36 = reinterpret_cast<struct s49*>(rax32 | 1);
                                rdi36->f0 = rsi35->f0;
                                rdi37 = reinterpret_cast<struct s50*>(&rdi36->f4);
                                rsi38 = reinterpret_cast<struct s48*>(&rsi35->f4);
                                __asm__("mulsd xmm0, [rcx+r13*8]");
                                __asm__("addsd xmm0, xmm1");
                                rdi37->f0 = rsi38->f0;
                                rdi23 = reinterpret_cast<struct s46*>(&rdi37->f4);
                                rsi24 = reinterpret_cast<struct s47*>(&rsi38->f4);
                                rax32 = rax32 + 2;
                                r10_33 = r10_33 + 2;
                            } while (!reinterpret_cast<int1_t>(r10_33 == free));
                        }
                        if (!free) {
                            rdi23->f0 = rsi24->f0;
                            rdi39 = reinterpret_cast<struct s51*>(&rdi23->f4);
                            rsi40 = reinterpret_cast<struct s48*>(&rsi24->f4);
                            __asm__("mulsd xmm1, [rax+r13*8]");
                            __asm__("addsd xmm1, xmm0");
                            rdi39->f0 = rsi40->f0;
                            rdi23 = reinterpret_cast<struct s46*>(&rdi39->f4);
                            rsi24 = reinterpret_cast<struct s47*>(&rsi40->f4);
                        }
                    }
                    ++r13_31;
                } while (r13_31 != 22);
            }
            ++r12_30;
            *reinterpret_cast<int32_t*>(&rsi24) = 22;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi24) + 4) = reinterpret_cast<int32_t>(free);
        } while (r12_30 != 0x4cb);
    }
    rdx41 = v42;
    *reinterpret_cast<int32_t*>(&r11_43) = v27;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_43) + 4) = reinterpret_cast<int32_t>(free);
    if (!free) {
        rbx44 = v45;
        r14_46 = v47;
        r15d48 = r8d;
        *reinterpret_cast<uint32_t*>(&r12_49) = r15d48 & 0xfffffffe;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_49) + 4) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(&r13_50) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_50) + 4) = reinterpret_cast<int32_t>(free);
        do {
            if (v27 > reinterpret_cast<int32_t>(free)) {
                *reinterpret_cast<int32_t*>(&rbp51) = reinterpret_cast<int32_t>(free);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp51) + 4) = reinterpret_cast<int32_t>(free);
                do {
                    (rdx41 + r13_50 * 0x898)[rbp51 * 2] = reinterpret_cast<int32_t>(free);
                    if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(reinterpret_cast<int32_t>(r8d) < reinterpret_cast<int32_t>(free) == free)) | reinterpret_cast<uint1_t>(r8d == free))) {
                        __asm__("xorpd xmm0, xmm0");
                        *reinterpret_cast<int32_t*>(&r10_52) = reinterpret_cast<int32_t>(free);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_52) + 4) = reinterpret_cast<int32_t>(free);
                        *reinterpret_cast<int32_t*>(&rcx53) = reinterpret_cast<int32_t>(free);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx53) + 4) = reinterpret_cast<int32_t>(free);
                        if (r8d != 1) {
                            do {
                                rdi54 = reinterpret_cast<struct s52*>(r14_46 + r13_50 * 0x960);
                                rdi54->f0 = rsi24->f0;
                                rdi55 = reinterpret_cast<struct s53*>(&rdi54->f4);
                                __asm__("mulsd xmm1, [rsi+rbp*8]");
                                __asm__("addsd xmm1, xmm0");
                                rdi55->f0 = rbx44[r10_52 * 0x898];
                                rdi56 = reinterpret_cast<struct s54*>(&rdi55->f4);
                                rsi57 = reinterpret_cast<int32_t*>(r10_52 | 1);
                                rdi56->f0 = *rsi57;
                                rdi58 = reinterpret_cast<struct s55*>(&rdi56->f4);
                                rsi59 = reinterpret_cast<struct s56*>(rbx44 + reinterpret_cast<uint64_t>(rsi57 + 1) * 0x898);
                                __asm__("mulsd xmm0, [rsi+rbp*8]");
                                __asm__("addsd xmm0, xmm1");
                                rdi58->f0 = rsi59->f0;
                                rdi23 = reinterpret_cast<struct s46*>(&rdi58->f4);
                                rsi24 = reinterpret_cast<struct s47*>(&rsi59->f4);
                                r10_52 = r10_52 + 2;
                                rcx53 = rcx53 + 2;
                            } while (rcx53 != r12_49);
                        }
                        if ((*reinterpret_cast<unsigned char*>(&r15d48) & 1) != free) {
                            rdi23->f0 = rsi24->f0;
                            rdi60 = reinterpret_cast<struct s51*>(&rdi23->f4);
                            rsi61 = reinterpret_cast<struct s48*>(&rsi24->f4);
                            __asm__("mulsd xmm1, [rcx+rbp*8]");
                            __asm__("addsd xmm1, xmm0");
                            rdi60->f0 = rsi61->f0;
                            rdi23 = reinterpret_cast<struct s46*>(&rdi60->f4);
                            rsi24 = reinterpret_cast<struct s47*>(&rsi61->f4);
                        }
                    }
                    ++rbp51;
                } while (rbp51 != r11_43);
            }
            ++r13_50;
        } while (r13_50 != 22);
    }
    if (!free) {
        rcx62 = v63;
        *reinterpret_cast<int32_t*>(&rbx64) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx64) + 4) = reinterpret_cast<int32_t>(free);
        do {
            if (v27 > reinterpret_cast<int32_t>(free)) {
                *reinterpret_cast<int32_t*>(&r14_65) = reinterpret_cast<int32_t>(free);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_65) + 4) = reinterpret_cast<int32_t>(free);
                do {
                    (rcx62 + rbx64 * 0x44c)[r14_65] = reinterpret_cast<int64_t>(free);
                    if (!free) {
                        __asm__("xorpd xmm0, xmm0");
                        *reinterpret_cast<int32_t*>(&r10_66) = reinterpret_cast<int32_t>(free);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_66) + 4) = reinterpret_cast<int32_t>(free);
                        *reinterpret_cast<int32_t*>(&r15_67) = reinterpret_cast<int32_t>(free);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_67) + 4) = reinterpret_cast<int32_t>(free);
                        if (!free) {
                            do {
                                rsi68 = reinterpret_cast<struct s57*>(r9 + rbx64 * 0x708);
                                rdi23->f0 = rsi68->f0;
                                rsi69 = reinterpret_cast<struct s58*>(&rsi68->f4);
                                __asm__("mulsd xmm1, [rdi+r14*8]");
                                __asm__("addsd xmm1, xmm0");
                                rdx41[r10_66 * 0x898] = rsi69->f0;
                                rdi70 = reinterpret_cast<struct s59*>(r10_66 | 1);
                                rdi70->f0 = rsi69->f4;
                                rdi71 = reinterpret_cast<struct s60*>(&rdi70->f4);
                                __asm__("mulsd xmm0, [rsi+r14*8]");
                                __asm__("addsd xmm0, xmm1");
                                rdi71->f0 = rdx41[reinterpret_cast<uint64_t>(rdi71) * 0x898];
                                rdi23 = reinterpret_cast<struct s46*>(&rdi71->f4);
                                r10_66 = r10_66 + 2;
                                r15_67 = r15_67 + 2;
                            } while (r15_67 != 22);
                        }
                        if (!1) {
                            rdi23->f0 = r9[rbx64 * 0x708];
                            rdi72 = reinterpret_cast<struct s51*>(&rdi23->f4);
                            __asm__("mulsd xmm1, [rsi+r14*8]");
                            __asm__("addsd xmm1, xmm0");
                            rdi72->f0 = rdx41[r10_66 * 0x898];
                            rdi23 = reinterpret_cast<struct s46*>(&rdi72->f4);
                        }
                    }
                    ++r14_65;
                } while (r14_65 != r11_43);
            }
            ++rbx64;
        } while (rbx64 != 0x4cb);
    }
    goto v73;
}

int64_t fun_8a8(int64_t rdi, int64_t rsi);

int64_t fun_8ba(int64_t rdi, int64_t rsi);

int32_t* fun_8cc(int64_t rdi, int64_t rsi);

int64_t fun_8de(int64_t rdi, int64_t rsi);

int64_t fun_8f0(int64_t rdi, int64_t rsi);

int64_t* fun_902(int64_t rdi, int64_t rsi);

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
    int32_t f4;
};

void fun_896(int64_t rdi, int64_t rsi) {
    int64_t v3;
    int32_t* rbx4;
    int32_t* rax5;
    int64_t rax6;
    int64_t r14_7;
    int64_t rax8;
    int64_t r12_9;
    int32_t* rax10;
    int32_t* r13_11;
    int64_t rax12;
    int64_t r15_13;
    int64_t rax14;
    int64_t rbp15;
    int64_t* rax16;
    int64_t rdi17;
    int64_t rcx18;
    int64_t rdx19;
    int64_t rcx20;
    int64_t rdx21;
    int64_t rdi22;
    int64_t rdx23;
    int64_t rcx24;
    int64_t rdx25;
    int64_t rdx26;
    int64_t r10_27;
    int32_t* rdi28;
    struct s61* rsi29;
    struct s62* rdi30;
    struct s63* rdi31;
    struct s64* rsi32;
    struct s65* rdi33;
    struct s66* rsi34;
    int32_t* rdi35;
    struct s67* rsi36;
    int64_t r10_37;
    int64_t rcx38;
    int32_t* rdi39;
    struct s68* rsi40;
    struct s69* rdi41;
    struct s70* rdi42;
    struct s71* rsi43;
    struct s72* rdi44;
    struct s73* rsi45;
    int32_t* rdi46;
    struct s74* rsi47;
    int64_t rcx48;
    int64_t* rsi49;
    int64_t* rdx50;
    struct s30* rsi51;
    struct s75* rdi52;
    struct s76* rdi53;
    struct s77* rsi54;
    struct s78* rsi55;
    int32_t* rsi56;
    signed char** v57;
    int64_t v58;

    v3 = reinterpret_cast<int64_t>(__return_address());
    rbx4 = rax5;
    rax6 = fun_8a8(0xc3500, 8);
    r14_7 = rax6;
    rax8 = fun_8ba(0xdbba0, 8);
    r12_9 = rax8;
    rax10 = fun_8cc(0xf1b30, 8);
    r13_11 = rax10;
    rax12 = fun_8de(0x107ac0, 8);
    r15_13 = rax12;
    rax14 = fun_8f0(0x142440, 8);
    rbp15 = rax14;
    rax16 = fun_902(0xd6d80, 8);
    *reinterpret_cast<int32_t*>(&rdi17) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi17) + 4) = reinterpret_cast<int32_t>(free);
    __asm__("movdqa xmm1, [rip+0x0]");
    __asm__("pcmpeqd xmm2, xmm2");
    __asm__("movdqa xmm3, [rip+0x0]");
    __asm__("movdqa xmm4, [rip+0x0]");
    __asm__("movapd xmm5, [rip+0x0]");
    __asm__("movdqa xmm0, [rip+0x0]");
    *reinterpret_cast<int32_t*>(&rcx18) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx18) + 4) = reinterpret_cast<int32_t>(free);
    do {
        __asm__("movd xmm6, ecx");
        __asm__("pshufd xmm6, xmm6, 0x50");
        *reinterpret_cast<int32_t*>(&rdx19) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx19) + 4) = reinterpret_cast<int32_t>(free);
        __asm__("movdqa xmm7, xmm1");
        do {
            __asm__("movdqa xmm8, xmm7");
            __asm__("pmuludq xmm8, xmm6");
            __asm__("pshufd xmm8, xmm8, 0xe8");
            __asm__("pshufd xmm9, xmm6, 0xf5");
            __asm__("pshufd xmm10, xmm7, 0xf5");
            __asm__("pmuludq xmm10, xmm9");
            __asm__("pshufd xmm9, xmm10, 0xe8");
            __asm__("punpckldq xmm8, xmm9");
            __asm__("psubd xmm8, xmm2");
            __asm__("movdqa xmm9, xmm8");
            __asm__("pmuludq xmm9, xmm3");
            __asm__("pshufd xmm9, xmm9, 0xed");
            __asm__("pshufd xmm10, xmm8, 0xf5");
            __asm__("pmuludq xmm10, xmm3");
            __asm__("pshufd xmm10, xmm10, 0xed");
            __asm__("pxor xmm11, xmm11");
            __asm__("pcmpgtd xmm11, xmm8");
            __asm__("pand xmm11, xmm3");
            __asm__("punpckldq xmm9, xmm10");
            __asm__("psubd xmm9, xmm11");
            __asm__("movdqa xmm10, xmm9");
            __asm__("psrad xmm9, 0x8");
            __asm__("psrld xmm10, 0x1f");
            __asm__("paddd xmm9, xmm10");
            __asm__("pshufd xmm10, xmm9, 0xf5");
            __asm__("pmuludq xmm9, xmm4");
            __asm__("pmuludq xmm10, xmm4");
            __asm__("punpckldq xmm9, xmm10");
            __asm__("psubd xmm8, xmm9");
            __asm__("cvtdq2pd xmm8, xmm8");
            __asm__("divpd xmm8, xmm5");
            __asm__("movupd [rsi+rdx*8], xmm8");
            rdx19 = rdx19 + 2;
            __asm__("paddd xmm7, xmm0");
        } while (rdx19 != 0x3e8);
        ++rcx18;
    } while (rcx18 != 0x320);
    __asm__("movdqa xmm1, [rip+0x0]");
    *reinterpret_cast<int32_t*>(&rcx20) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx20) + 4) = reinterpret_cast<int32_t>(free);
    __asm__("pcmpeqd xmm2, xmm2");
    __asm__("movdqa xmm3, [rip+0x0]");
    __asm__("movdqa xmm4, [rip+0x0]");
    __asm__("movapd xmm5, [rip+0x0]");
    __asm__("movdqa xmm6, [rip+0x0]");
    do {
        __asm__("movd xmm7, edi");
        __asm__("pshufd xmm7, xmm7, 0x50");
        *reinterpret_cast<int32_t*>(&rdx21) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx21) + 4) = reinterpret_cast<int32_t>(free);
        __asm__("movdqa xmm8, xmm1");
        do {
            __asm__("pshufd xmm9, xmm8, 0xe8");
            __asm__("psubd xmm9, xmm2");
            __asm__("pshufd xmm10, xmm9, 0x55");
            __asm__("pmuludq xmm9, xmm7");
            __asm__("pshufd xmm11, xmm7, 0xf5");
            __asm__("pshufd xmm9, xmm9, 0xe8");
            __asm__("pmuludq xmm11, xmm10");
            __asm__("pshufd xmm10, xmm11, 0xe8");
            __asm__("punpckldq xmm9, xmm10");
            __asm__("paddd xmm9, xmm0");
            __asm__("pxor xmm10, xmm10");
            __asm__("pcmpgtd xmm10, xmm9");
            __asm__("pand xmm10, xmm3");
            __asm__("paddd xmm10, xmm9");
            __asm__("movdqa xmm11, xmm9");
            __asm__("pmuludq xmm11, xmm3");
            __asm__("pshufd xmm12, xmm9, 0xf5");
            __asm__("pshufd xmm11, xmm11, 0xed");
            __asm__("pmuludq xmm12, xmm3");
            __asm__("pshufd xmm12, xmm12, 0xed");
            __asm__("punpckldq xmm11, xmm12");
            __asm__("psubd xmm11, xmm10");
            __asm__("paddd xmm11, xmm9");
            __asm__("movdqa xmm10, xmm11");
            __asm__("psrad xmm11, 0x9");
            __asm__("psrld xmm10, 0x1f");
            __asm__("paddd xmm11, xmm10");
            __asm__("pshufd xmm10, xmm11, 0xf5");
            __asm__("pmuludq xmm11, xmm4");
            __asm__("pmuludq xmm10, xmm4");
            __asm__("punpckldq xmm11, xmm10");
            __asm__("psubd xmm9, xmm11");
            __asm__("cvtdq2pd xmm9, xmm9");
            __asm__("divpd xmm9, xmm5");
            __asm__("movupd [rsi+rdx*8], xmm9");
            rdx21 = rdx21 + 2;
            __asm__("paddq xmm8, xmm6");
        } while (rdx21 != 0x384);
        ++rdi17;
    } while (rdi17 != 0x3e8);
    __asm__("movdqa xmm1, [rip+0x0]");
    *reinterpret_cast<int32_t*>(&rdi22) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi22) + 4) = reinterpret_cast<int32_t>(free);
    __asm__("movdqa xmm2, [rip+0x0]");
    __asm__("movdqa xmm3, [rip+0x0]");
    __asm__("movdqa xmm4, [rip+0x0]");
    __asm__("movapd xmm5, [rip+0x0]");
    do {
        __asm__("movd xmm6, ecx");
        __asm__("pshufd xmm6, xmm6, 0x50");
        *reinterpret_cast<int32_t*>(&rdx23) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx23) + 4) = reinterpret_cast<int32_t>(free);
        __asm__("movdqa xmm7, xmm1");
        do {
            __asm__("movdqa xmm9, xmm7");
            __asm__("paddd xmm9, xmm2");
            __asm__("pshufd xmm10, xmm9, 0xf5");
            __asm__("pmuludq xmm9, xmm6");
            __asm__("pshufd xmm8, xmm9, 0xe8");
            __asm__("pshufd xmm11, xmm6, 0xf5");
            __asm__("pmuludq xmm11, xmm10");
            __asm__("pshufd xmm10, xmm11, 0xe8");
            __asm__("punpckldq xmm8, xmm10");
            __asm__("pmuludq xmm9, xmm3");
            __asm__("pshufd xmm9, xmm9, 0xed");
            __asm__("pmuludq xmm11, xmm3");
            __asm__("pshufd xmm10, xmm11, 0xed");
            __asm__("pxor xmm11, xmm11");
            __asm__("pcmpgtd xmm11, xmm8");
            __asm__("pand xmm11, xmm3");
            __asm__("punpckldq xmm9, xmm10");
            __asm__("psubd xmm9, xmm11");
            __asm__("movdqa xmm10, xmm9");
            __asm__("psrad xmm9, 0x9");
            __asm__("psrld xmm10, 0x1f");
            __asm__("paddd xmm9, xmm10");
            __asm__("pshufd xmm10, xmm9, 0xf5");
            __asm__("pmuludq xmm9, xmm4");
            __asm__("pmuludq xmm10, xmm4");
            __asm__("punpckldq xmm9, xmm10");
            __asm__("psubd xmm8, xmm9");
            __asm__("cvtdq2pd xmm8, xmm8");
            __asm__("divpd xmm8, xmm5");
            __asm__("movupd [rsi+rdx*8], xmm8");
            rdx23 = rdx23 + 2;
            __asm__("paddd xmm7, xmm0");
        } while (rdx23 != 0x4b0);
        ++rcx20;
    } while (rcx20 != 0x384);
    __asm__("movdqa xmm1, [rip+0x0]");
    *reinterpret_cast<int32_t*>(&rcx24) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx24) + 4) = reinterpret_cast<int32_t>(free);
    __asm__("movdqa xmm2, [rip+0x0]");
    __asm__("movdqa xmm3, [rip+0x0]");
    __asm__("movapd xmm4, [rip+0x0]");
    do {
        __asm__("movd xmm5, edi");
        __asm__("pshufd xmm5, xmm5, 0x50");
        *reinterpret_cast<int32_t*>(&rdx25) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx25) + 4) = reinterpret_cast<int32_t>(free);
        __asm__("movdqa xmm6, xmm1");
        do {
            __asm__("paddd xmm6, xmm0");
            __asm__("movdqa xmm7, xmm6");
            __asm__("pmuludq xmm7, xmm5");
            __asm__("pshufd xmm8, xmm6, 0xf5");
            __asm__("pshufd xmm9, xmm5, 0xf5");
            __asm__("pshufd xmm7, xmm7, 0xe8");
            __asm__("pmuludq xmm9, xmm8");
            __asm__("pshufd xmm8, xmm9, 0xe8");
            __asm__("punpckldq xmm7, xmm8");
            __asm__("paddd xmm7, xmm0");
            __asm__("movdqa xmm8, xmm7");
            __asm__("pmuludq xmm8, xmm2");
            __asm__("pshufd xmm9, xmm7, 0xf5");
            __asm__("pshufd xmm8, xmm8, 0xed");
            __asm__("pmuludq xmm9, xmm2");
            __asm__("pshufd xmm9, xmm9, 0xed");
            __asm__("pxor xmm10, xmm10");
            __asm__("punpckldq xmm8, xmm9");
            __asm__("pcmpgtd xmm10, xmm7");
            __asm__("pand xmm10, xmm2");
            __asm__("psubd xmm8, xmm10");
            __asm__("movdqa xmm9, xmm8");
            __asm__("psrld xmm9, 0x1f");
            __asm__("psrad xmm8, 0x6");
            __asm__("paddd xmm8, xmm9");
            __asm__("pshufd xmm9, xmm8, 0xf5");
            __asm__("pmuludq xmm8, xmm3");
            __asm__("pmuludq xmm9, xmm3");
            __asm__("punpckldq xmm8, xmm9");
            __asm__("psubd xmm7, xmm8");
            __asm__("cvtdq2pd xmm7, xmm7");
            __asm__("divpd xmm7, xmm4");
            __asm__("movupd [rsi+rdx*8], xmm7");
            rdx25 = rdx25 + 2;
        } while (rdx25 != 0x44c);
        ++rdi22;
    } while (rdi22 != 0x4b0);
    *reinterpret_cast<int32_t*>(&rdx26) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx26) + 4) = reinterpret_cast<int32_t>(free);
    do {
        *reinterpret_cast<int32_t*>(&r10_27) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_27) + 4) = reinterpret_cast<int32_t>(free);
        do {
            rdi28 = rbx4 + rcx24 * 0x708;
            rsi29 = reinterpret_cast<struct s61*>(rdi28 + r10_27 * 2);
            rdi28[r10_27 * 2] = reinterpret_cast<int32_t>(free);
            __asm__("pxor xmm0, xmm0");
            *reinterpret_cast<int32_t*>(&rdi30) = reinterpret_cast<int32_t>(free);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi30) + 4) = reinterpret_cast<int32_t>(free);
            do {
                rdi30->f0 = rsi29->f0;
                rdi31 = reinterpret_cast<struct s63*>(&rdi30->f4);
                rsi32 = reinterpret_cast<struct s64*>(&rsi29->f4);
                __asm__("mulsd xmm1, [r9+r10*8]");
                __asm__("addsd xmm1, xmm0");
                rdi31->f0 = rsi32->f0;
                rdi33 = reinterpret_cast<struct s65*>(&rdi31->f4);
                rsi34 = reinterpret_cast<struct s66*>(&rsi32->f4);
                rdi33->f0 = rsi34->f0;
                rdi35 = &rdi33->f4;
                rsi36 = reinterpret_cast<struct s67*>(&rsi34->f4);
                __asm__("mulsd xmm0, [r8+r10*8]");
                __asm__("addsd xmm0, xmm1");
                *rdi35 = rsi36->f0;
                rsi29 = reinterpret_cast<struct s61*>(&rsi36->f4);
                rdi30 = reinterpret_cast<struct s62*>(reinterpret_cast<int64_t>(rdi35 + 1) + 2);
            } while (!reinterpret_cast<int1_t>(rdi30 == 0x3e8));
            ++r10_27;
        } while (r10_27 != 0x384);
        ++rcx24;
    } while (rcx24 != 0x320);
    *reinterpret_cast<int32_t*>(&r10_37) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_37) + 4) = reinterpret_cast<int32_t>(free);
    do {
        *reinterpret_cast<int32_t*>(&rcx38) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx38) + 4) = reinterpret_cast<int32_t>(free);
        do {
            rdi39 = r13_11 + rdx26 * 0x898;
            rsi40 = reinterpret_cast<struct s68*>(rdi39 + rcx38 * 2);
            rdi39[rcx38 * 2] = reinterpret_cast<int32_t>(free);
            __asm__("xorpd xmm0, xmm0");
            *reinterpret_cast<int32_t*>(&rdi41) = reinterpret_cast<int32_t>(free);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi41) + 4) = reinterpret_cast<int32_t>(free);
            do {
                rdi41->f0 = rsi40->f0;
                rdi42 = reinterpret_cast<struct s70*>(&rdi41->f4);
                rsi43 = reinterpret_cast<struct s71*>(&rsi40->f4);
                __asm__("mulsd xmm1, [r9+rcx*8]");
                __asm__("addsd xmm1, xmm0");
                rdi42->f0 = rsi43->f0;
                rdi44 = reinterpret_cast<struct s72*>(&rdi42->f4);
                rsi45 = reinterpret_cast<struct s73*>(&rsi43->f4);
                rdi44->f0 = rsi45->f0;
                rdi46 = &rdi44->f4;
                rsi47 = reinterpret_cast<struct s74*>(&rsi45->f4);
                __asm__("mulsd xmm0, [r8+rcx*8]");
                __asm__("addsd xmm0, xmm1");
                *rdi46 = rsi47->f0;
                rsi40 = reinterpret_cast<struct s68*>(&rsi47->f4);
                rdi41 = reinterpret_cast<struct s69*>(reinterpret_cast<int64_t>(rdi46 + 1) + 2);
            } while (!reinterpret_cast<int1_t>(rdi41 == 0x4b0));
            ++rcx38;
        } while (rcx38 != 0x44c);
        ++rdx26;
    } while (rdx26 != 0x384);
    do {
        *reinterpret_cast<int32_t*>(&rcx48) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx48) + 4) = reinterpret_cast<int32_t>(free);
        do {
            rsi49 = rax16 + r10_37 * 0x44c;
            rdx50 = rsi49 + rcx48;
            rsi49[rcx48] = reinterpret_cast<int64_t>(free);
            __asm__("xorpd xmm0, xmm0");
            *reinterpret_cast<int32_t*>(&rsi51) = reinterpret_cast<int32_t>(free);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi51) + 4) = reinterpret_cast<int32_t>(free);
            do {
                rdi52 = reinterpret_cast<struct s75*>(rbx4 + r10_37 * 0x708);
                rdi52->f0 = rsi51->f0;
                rdi53 = reinterpret_cast<struct s76*>(&rdi52->f4);
                rsi54 = reinterpret_cast<struct s77*>(&rsi51->f4);
                __asm__("mulsd xmm1, [r8+rcx*8]");
                __asm__("addsd xmm1, xmm0");
                rdi53->f0 = rsi54->f0;
                rsi55 = reinterpret_cast<struct s78*>(&rsi54->f4);
                rdi53->f4 = rsi55->f0;
                rsi56 = &rsi55->f4;
                __asm__("mulsd xmm0, [rdi+rcx*8]");
                __asm__("addsd xmm0, xmm1");
                r13_11[(reinterpret_cast<uint64_t>(rsi55) | 1) * 0x898] = *rsi56;
                rsi51 = reinterpret_cast<struct s30*>(reinterpret_cast<uint64_t>(rsi56 + 1) + 2);
            } while (!reinterpret_cast<int1_t>(rsi51 == 0x384));
            ++rcx48;
        } while (rcx48 != 0x44c);
        ++r10_37;
    } while (r10_37 != 0x320);
    if (*reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&v3) + 4) >= 43 && reinterpret_cast<int1_t>(**v57 == free)) {
        *reinterpret_cast<int32_t*>(&rsi51) = 0x44c;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi51) + 4) = reinterpret_cast<int32_t>(free);
        rdx50 = rax16;
        fun_fc5(0x320, 0x44c, rdx50);
    }
    fun_fcd(rbx4, rsi51, rdx50);
    fun_fd5(r14_7, rsi51, rdx50);
    fun_fdd(r12_9, rsi51, rdx50);
    fun_fe5(r13_11, rsi51, rdx50);
    fun_fed(r15_13, rsi51, rdx50);
    fun_ff5(rbp15, rsi51, rdx50);
    fun_fff(rax16, rsi51, rdx50);
    goto v58;
}

void fun_fd5(int64_t rdi, struct s30* rsi, int64_t* rdx) {
    int64_t r12_4;
    int32_t* r13_5;
    int64_t r15_6;
    int64_t rbp7;
    int64_t* v8;
    int64_t v9;

    fun_fdd(r12_4, rsi, rdx);
    fun_fe5(r13_5, rsi, rdx);
    fun_fed(r15_6, rsi, rdx);
    fun_ff5(rbp7, rsi, rdx);
    fun_fff(v8, rsi, rdx);
    goto v9;
}

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
    int32_t f0;
    int32_t f4;
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
};

struct s91 {
    int32_t f0;
    int32_t f4;
};

struct s92 {
    int32_t f0;
    int32_t f4;
};

struct s93 {
    int32_t f0;
    int32_t f4;
};

void fun_425() {
    int32_t r15d1;
    int32_t r15d2;
    int64_t r12_3;
    int32_t r15d4;
    int64_t r13_5;
    int32_t v6;
    int64_t rbp7;
    int32_t v8;
    int64_t r15_9;
    int64_t r14_10;
    int32_t* rdi11;
    int32_t* rsi12;
    int32_t* rbx13;
    int32_t* rbx14;
    int64_t rbx15;
    struct s79* rdi16;
    struct s80* rsi17;
    int64_t rcx18;
    int64_t rbx19;
    int32_t v20;
    int32_t* r11_21;
    int32_t* v22;
    int64_t r12_23;
    int64_t r13_24;
    int64_t* r9_25;
    uint64_t rax26;
    int64_t r10_27;
    struct s81* rsi28;
    struct s80* rsi29;
    struct s82* rdi30;
    struct s83* rdi31;
    struct s81* rsi32;
    struct s84* rdi33;
    struct s81* rsi34;
    int32_t* rdx35;
    int32_t* v36;
    int64_t r11_37;
    int32_t* rbx38;
    int32_t* v39;
    int32_t* r14_40;
    int32_t* v41;
    uint32_t r15d42;
    uint32_t r8d43;
    int64_t r12_44;
    int64_t r13_45;
    int64_t rbp46;
    int32_t r8d47;
    int32_t r8d48;
    uint64_t r10_49;
    int64_t rcx50;
    int32_t r8d51;
    struct s85* rdi52;
    struct s86* rdi53;
    struct s87* rdi54;
    int32_t* rsi55;
    struct s88* rdi56;
    struct s89* rsi57;
    struct s84* rdi58;
    struct s81* rsi59;
    int64_t* rcx60;
    int64_t* v61;
    int64_t rbx62;
    int64_t r14_63;
    uint64_t r10_64;
    int64_t r15_65;
    struct s90* rsi66;
    int32_t* r9_67;
    struct s91* rsi68;
    struct s92* rdi69;
    struct s93* rdi70;
    int32_t* r9_71;
    struct s84* rdi72;
    int64_t v73;

    if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(r15d1 < reinterpret_cast<int32_t>(free) == free)) | reinterpret_cast<uint1_t>(r15d2 == free))) {
        *reinterpret_cast<int32_t*>(&r12_3) = r15d4;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_3) + 4) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(&r13_5) = v6;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_5) + 4) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(&rbp7) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp7) + 4) = reinterpret_cast<int32_t>(free);
        do {
            if (v8 > reinterpret_cast<int32_t>(free)) {
                r15_9 = rbp7 * r12_3;
                *reinterpret_cast<int32_t*>(&r14_10) = reinterpret_cast<int32_t>(free);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_10) + 4) = reinterpret_cast<int32_t>(free);
                do {
                    __asm__("ror eax, 0x2");
                    if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r14_10 + r15_9) * 0xcccccccd + 0x19999998) <= 0xccccccc) {
                        *reinterpret_cast<int32_t*>(&rdi11) = 10;
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi11) + 4) = reinterpret_cast<int32_t>(free);
                        rsi12 = rbx13;
                        fun_47f();
                    }
                    *rdi11 = *rsi12;
                    rdi11 = rbx14;
                    rsi12 = reinterpret_cast<int32_t*>(0x49b);
                    fun_4a2();
                    ++r14_10;
                } while (r14_10 != r13_5);
            }
            ++rbp7;
        } while (rbp7 != r12_3);
    }
    fun_4c4(rbx15, 0x4b3, 0x4ba);
    rdi16 = reinterpret_cast<struct s79*>(0x4cb);
    *reinterpret_cast<int32_t*>(&rsi17) = 22;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi17) + 4) = reinterpret_cast<int32_t>(free);
    rcx18 = rbx19;
    v20 = *reinterpret_cast<int32_t*>(&rcx18);
    if (!free) {
        r11_21 = v22;
        *reinterpret_cast<int32_t*>(&r12_23) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_23) + 4) = reinterpret_cast<int32_t>(free);
        do {
            if (!free) {
                *reinterpret_cast<int32_t*>(&r13_24) = reinterpret_cast<int32_t>(free);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_24) + 4) = reinterpret_cast<int32_t>(free);
                do {
                    (r9_25 + r12_23 * 0x384)[r13_24] = reinterpret_cast<int64_t>(free);
                    if (!free) {
                        __asm__("xorpd xmm0, xmm0");
                        *reinterpret_cast<int32_t*>(&rax26) = reinterpret_cast<int32_t>(free);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax26) + 4) = reinterpret_cast<int32_t>(free);
                        *reinterpret_cast<int32_t*>(&r10_27) = reinterpret_cast<int32_t>(free);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_27) + 4) = reinterpret_cast<int32_t>(free);
                        if (!1) {
                            do {
                                rdi16->f0 = rsi17->f0;
                                rsi28 = reinterpret_cast<struct s81*>(&rsi17->f4);
                                __asm__("mulsd xmm1, [rdi+r13*8]");
                                __asm__("addsd xmm1, xmm0");
                                r11_21[rax26 * 0x708] = rsi28->f0;
                                rsi29 = reinterpret_cast<struct s80*>(&rsi28->f4);
                                rdi30 = reinterpret_cast<struct s82*>(rax26 | 1);
                                rdi30->f0 = rsi29->f0;
                                rdi31 = reinterpret_cast<struct s83*>(&rdi30->f4);
                                rsi32 = reinterpret_cast<struct s81*>(&rsi29->f4);
                                __asm__("mulsd xmm0, [rcx+r13*8]");
                                __asm__("addsd xmm0, xmm1");
                                rdi31->f0 = rsi32->f0;
                                rdi16 = reinterpret_cast<struct s79*>(&rdi31->f4);
                                rsi17 = reinterpret_cast<struct s80*>(&rsi32->f4);
                                rax26 = rax26 + 2;
                                r10_27 = r10_27 + 2;
                            } while (!reinterpret_cast<int1_t>(r10_27 == free));
                        }
                        if (!free) {
                            rdi16->f0 = rsi17->f0;
                            rdi33 = reinterpret_cast<struct s84*>(&rdi16->f4);
                            rsi34 = reinterpret_cast<struct s81*>(&rsi17->f4);
                            __asm__("mulsd xmm1, [rax+r13*8]");
                            __asm__("addsd xmm1, xmm0");
                            rdi33->f0 = rsi34->f0;
                            rdi16 = reinterpret_cast<struct s79*>(&rdi33->f4);
                            rsi17 = reinterpret_cast<struct s80*>(&rsi34->f4);
                        }
                    }
                    ++r13_24;
                } while (r13_24 != 22);
            }
            ++r12_23;
            *reinterpret_cast<int32_t*>(&rsi17) = 22;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi17) + 4) = reinterpret_cast<int32_t>(free);
        } while (r12_23 != 0x4cb);
    }
    rdx35 = v36;
    *reinterpret_cast<int32_t*>(&r11_37) = v20;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_37) + 4) = reinterpret_cast<int32_t>(free);
    if (!free) {
        rbx38 = v39;
        r14_40 = v41;
        r15d42 = r8d43;
        *reinterpret_cast<uint32_t*>(&r12_44) = r15d42 & 0xfffffffe;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_44) + 4) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(&r13_45) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_45) + 4) = reinterpret_cast<int32_t>(free);
        do {
            if (v20 > reinterpret_cast<int32_t>(free)) {
                *reinterpret_cast<int32_t*>(&rbp46) = reinterpret_cast<int32_t>(free);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp46) + 4) = reinterpret_cast<int32_t>(free);
                do {
                    (rdx35 + r13_45 * 0x898)[rbp46 * 2] = reinterpret_cast<int32_t>(free);
                    if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(r8d47 < reinterpret_cast<int32_t>(free) == free)) | reinterpret_cast<uint1_t>(r8d48 == free))) {
                        __asm__("xorpd xmm0, xmm0");
                        *reinterpret_cast<int32_t*>(&r10_49) = reinterpret_cast<int32_t>(free);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_49) + 4) = reinterpret_cast<int32_t>(free);
                        *reinterpret_cast<int32_t*>(&rcx50) = reinterpret_cast<int32_t>(free);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx50) + 4) = reinterpret_cast<int32_t>(free);
                        if (r8d51 != 1) {
                            do {
                                rdi52 = reinterpret_cast<struct s85*>(r14_40 + r13_45 * 0x960);
                                rdi52->f0 = rsi17->f0;
                                rdi53 = reinterpret_cast<struct s86*>(&rdi52->f4);
                                __asm__("mulsd xmm1, [rsi+rbp*8]");
                                __asm__("addsd xmm1, xmm0");
                                rdi53->f0 = rbx38[r10_49 * 0x898];
                                rdi54 = reinterpret_cast<struct s87*>(&rdi53->f4);
                                rsi55 = reinterpret_cast<int32_t*>(r10_49 | 1);
                                rdi54->f0 = *rsi55;
                                rdi56 = reinterpret_cast<struct s88*>(&rdi54->f4);
                                rsi57 = reinterpret_cast<struct s89*>(rbx38 + reinterpret_cast<uint64_t>(rsi55 + 1) * 0x898);
                                __asm__("mulsd xmm0, [rsi+rbp*8]");
                                __asm__("addsd xmm0, xmm1");
                                rdi56->f0 = rsi57->f0;
                                rdi16 = reinterpret_cast<struct s79*>(&rdi56->f4);
                                rsi17 = reinterpret_cast<struct s80*>(&rsi57->f4);
                                r10_49 = r10_49 + 2;
                                rcx50 = rcx50 + 2;
                            } while (rcx50 != r12_44);
                        }
                        if ((*reinterpret_cast<unsigned char*>(&r15d42) & 1) != free) {
                            rdi16->f0 = rsi17->f0;
                            rdi58 = reinterpret_cast<struct s84*>(&rdi16->f4);
                            rsi59 = reinterpret_cast<struct s81*>(&rsi17->f4);
                            __asm__("mulsd xmm1, [rcx+rbp*8]");
                            __asm__("addsd xmm1, xmm0");
                            rdi58->f0 = rsi59->f0;
                            rdi16 = reinterpret_cast<struct s79*>(&rdi58->f4);
                            rsi17 = reinterpret_cast<struct s80*>(&rsi59->f4);
                        }
                    }
                    ++rbp46;
                } while (rbp46 != r11_37);
            }
            ++r13_45;
        } while (r13_45 != 22);
    }
    if (!free) {
        rcx60 = v61;
        *reinterpret_cast<int32_t*>(&rbx62) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx62) + 4) = reinterpret_cast<int32_t>(free);
        do {
            if (v20 > reinterpret_cast<int32_t>(free)) {
                *reinterpret_cast<int32_t*>(&r14_63) = reinterpret_cast<int32_t>(free);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_63) + 4) = reinterpret_cast<int32_t>(free);
                do {
                    (rcx60 + rbx62 * 0x44c)[r14_63] = reinterpret_cast<int64_t>(free);
                    if (!free) {
                        __asm__("xorpd xmm0, xmm0");
                        *reinterpret_cast<int32_t*>(&r10_64) = reinterpret_cast<int32_t>(free);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_64) + 4) = reinterpret_cast<int32_t>(free);
                        *reinterpret_cast<int32_t*>(&r15_65) = reinterpret_cast<int32_t>(free);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_65) + 4) = reinterpret_cast<int32_t>(free);
                        if (!free) {
                            do {
                                rsi66 = reinterpret_cast<struct s90*>(r9_67 + rbx62 * 0x708);
                                rdi16->f0 = rsi66->f0;
                                rsi68 = reinterpret_cast<struct s91*>(&rsi66->f4);
                                __asm__("mulsd xmm1, [rdi+r14*8]");
                                __asm__("addsd xmm1, xmm0");
                                rdx35[r10_64 * 0x898] = rsi68->f0;
                                rdi69 = reinterpret_cast<struct s92*>(r10_64 | 1);
                                rdi69->f0 = rsi68->f4;
                                rdi70 = reinterpret_cast<struct s93*>(&rdi69->f4);
                                __asm__("mulsd xmm0, [rsi+r14*8]");
                                __asm__("addsd xmm0, xmm1");
                                rdi70->f0 = rdx35[reinterpret_cast<uint64_t>(rdi70) * 0x898];
                                rdi16 = reinterpret_cast<struct s79*>(&rdi70->f4);
                                r10_64 = r10_64 + 2;
                                r15_65 = r15_65 + 2;
                            } while (r15_65 != 22);
                        }
                        if (!1) {
                            rdi16->f0 = r9_71[rbx62 * 0x708];
                            rdi72 = reinterpret_cast<struct s84*>(&rdi16->f4);
                            __asm__("mulsd xmm1, [rsi+r14*8]");
                            __asm__("addsd xmm1, xmm0");
                            rdi72->f0 = rdx35[r10_64 * 0x898];
                            rdi16 = reinterpret_cast<struct s79*>(&rdi72->f4);
                        }
                    }
                    ++r14_63;
                } while (r14_63 != r11_37);
            }
            ++rbx62;
        } while (rbx62 != 0x4cb);
    }
    goto v73;
}

struct s94 {
    int32_t f0;
    int32_t f4;
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
    int32_t f0;
    int32_t f4;
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

int64_t fun_8a8(int64_t rdi, int64_t rsi) {
    int64_t v3;
    int64_t r14_4;
    int64_t rax5;
    int64_t rax6;
    int64_t r12_7;
    int32_t* rax8;
    int32_t* r13_9;
    int64_t rax10;
    int64_t r15_11;
    int64_t rax12;
    int64_t rbp13;
    int64_t* rax14;
    int64_t rdi15;
    int64_t rcx16;
    int64_t rdx17;
    int64_t rcx18;
    int64_t rdx19;
    int64_t rdi20;
    int64_t rdx21;
    int64_t rcx22;
    int64_t rdx23;
    int64_t rdx24;
    int64_t r10_25;
    int32_t* rdi26;
    int32_t* rbx27;
    struct s94* rsi28;
    struct s95* rdi29;
    struct s96* rdi30;
    struct s97* rsi31;
    struct s98* rdi32;
    struct s99* rsi33;
    int32_t* rdi34;
    struct s100* rsi35;
    int64_t r10_36;
    int64_t rcx37;
    int32_t* rdi38;
    struct s101* rsi39;
    struct s102* rdi40;
    struct s103* rdi41;
    struct s104* rsi42;
    struct s105* rdi43;
    struct s106* rsi44;
    int32_t* rdi45;
    struct s107* rsi46;
    int64_t rcx47;
    int64_t* rsi48;
    int64_t* rdx49;
    struct s30* rsi50;
    struct s108* rdi51;
    int32_t* rbx52;
    struct s109* rdi53;
    struct s77* rsi54;
    struct s78* rsi55;
    int32_t* rsi56;
    signed char** v57;
    int32_t* rbx58;
    int64_t v59;

    v3 = reinterpret_cast<int64_t>(__return_address());
    r14_4 = rax5;
    rax6 = fun_8ba(0xdbba0, 8);
    r12_7 = rax6;
    rax8 = fun_8cc(0xf1b30, 8);
    r13_9 = rax8;
    rax10 = fun_8de(0x107ac0, 8);
    r15_11 = rax10;
    rax12 = fun_8f0(0x142440, 8);
    rbp13 = rax12;
    rax14 = fun_902(0xd6d80, 8);
    *reinterpret_cast<int32_t*>(&rdi15) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi15) + 4) = reinterpret_cast<int32_t>(free);
    __asm__("movdqa xmm1, [rip+0x0]");
    __asm__("pcmpeqd xmm2, xmm2");
    __asm__("movdqa xmm3, [rip+0x0]");
    __asm__("movdqa xmm4, [rip+0x0]");
    __asm__("movapd xmm5, [rip+0x0]");
    __asm__("movdqa xmm0, [rip+0x0]");
    *reinterpret_cast<int32_t*>(&rcx16) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx16) + 4) = reinterpret_cast<int32_t>(free);
    do {
        __asm__("movd xmm6, ecx");
        __asm__("pshufd xmm6, xmm6, 0x50");
        *reinterpret_cast<int32_t*>(&rdx17) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx17) + 4) = reinterpret_cast<int32_t>(free);
        __asm__("movdqa xmm7, xmm1");
        do {
            __asm__("movdqa xmm8, xmm7");
            __asm__("pmuludq xmm8, xmm6");
            __asm__("pshufd xmm8, xmm8, 0xe8");
            __asm__("pshufd xmm9, xmm6, 0xf5");
            __asm__("pshufd xmm10, xmm7, 0xf5");
            __asm__("pmuludq xmm10, xmm9");
            __asm__("pshufd xmm9, xmm10, 0xe8");
            __asm__("punpckldq xmm8, xmm9");
            __asm__("psubd xmm8, xmm2");
            __asm__("movdqa xmm9, xmm8");
            __asm__("pmuludq xmm9, xmm3");
            __asm__("pshufd xmm9, xmm9, 0xed");
            __asm__("pshufd xmm10, xmm8, 0xf5");
            __asm__("pmuludq xmm10, xmm3");
            __asm__("pshufd xmm10, xmm10, 0xed");
            __asm__("pxor xmm11, xmm11");
            __asm__("pcmpgtd xmm11, xmm8");
            __asm__("pand xmm11, xmm3");
            __asm__("punpckldq xmm9, xmm10");
            __asm__("psubd xmm9, xmm11");
            __asm__("movdqa xmm10, xmm9");
            __asm__("psrad xmm9, 0x8");
            __asm__("psrld xmm10, 0x1f");
            __asm__("paddd xmm9, xmm10");
            __asm__("pshufd xmm10, xmm9, 0xf5");
            __asm__("pmuludq xmm9, xmm4");
            __asm__("pmuludq xmm10, xmm4");
            __asm__("punpckldq xmm9, xmm10");
            __asm__("psubd xmm8, xmm9");
            __asm__("cvtdq2pd xmm8, xmm8");
            __asm__("divpd xmm8, xmm5");
            __asm__("movupd [rsi+rdx*8], xmm8");
            rdx17 = rdx17 + 2;
            __asm__("paddd xmm7, xmm0");
        } while (rdx17 != 0x3e8);
        ++rcx16;
    } while (rcx16 != 0x320);
    __asm__("movdqa xmm1, [rip+0x0]");
    *reinterpret_cast<int32_t*>(&rcx18) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx18) + 4) = reinterpret_cast<int32_t>(free);
    __asm__("pcmpeqd xmm2, xmm2");
    __asm__("movdqa xmm3, [rip+0x0]");
    __asm__("movdqa xmm4, [rip+0x0]");
    __asm__("movapd xmm5, [rip+0x0]");
    __asm__("movdqa xmm6, [rip+0x0]");
    do {
        __asm__("movd xmm7, edi");
        __asm__("pshufd xmm7, xmm7, 0x50");
        *reinterpret_cast<int32_t*>(&rdx19) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx19) + 4) = reinterpret_cast<int32_t>(free);
        __asm__("movdqa xmm8, xmm1");
        do {
            __asm__("pshufd xmm9, xmm8, 0xe8");
            __asm__("psubd xmm9, xmm2");
            __asm__("pshufd xmm10, xmm9, 0x55");
            __asm__("pmuludq xmm9, xmm7");
            __asm__("pshufd xmm11, xmm7, 0xf5");
            __asm__("pshufd xmm9, xmm9, 0xe8");
            __asm__("pmuludq xmm11, xmm10");
            __asm__("pshufd xmm10, xmm11, 0xe8");
            __asm__("punpckldq xmm9, xmm10");
            __asm__("paddd xmm9, xmm0");
            __asm__("pxor xmm10, xmm10");
            __asm__("pcmpgtd xmm10, xmm9");
            __asm__("pand xmm10, xmm3");
            __asm__("paddd xmm10, xmm9");
            __asm__("movdqa xmm11, xmm9");
            __asm__("pmuludq xmm11, xmm3");
            __asm__("pshufd xmm12, xmm9, 0xf5");
            __asm__("pshufd xmm11, xmm11, 0xed");
            __asm__("pmuludq xmm12, xmm3");
            __asm__("pshufd xmm12, xmm12, 0xed");
            __asm__("punpckldq xmm11, xmm12");
            __asm__("psubd xmm11, xmm10");
            __asm__("paddd xmm11, xmm9");
            __asm__("movdqa xmm10, xmm11");
            __asm__("psrad xmm11, 0x9");
            __asm__("psrld xmm10, 0x1f");
            __asm__("paddd xmm11, xmm10");
            __asm__("pshufd xmm10, xmm11, 0xf5");
            __asm__("pmuludq xmm11, xmm4");
            __asm__("pmuludq xmm10, xmm4");
            __asm__("punpckldq xmm11, xmm10");
            __asm__("psubd xmm9, xmm11");
            __asm__("cvtdq2pd xmm9, xmm9");
            __asm__("divpd xmm9, xmm5");
            __asm__("movupd [rsi+rdx*8], xmm9");
            rdx19 = rdx19 + 2;
            __asm__("paddq xmm8, xmm6");
        } while (rdx19 != 0x384);
        ++rdi15;
    } while (rdi15 != 0x3e8);
    __asm__("movdqa xmm1, [rip+0x0]");
    *reinterpret_cast<int32_t*>(&rdi20) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi20) + 4) = reinterpret_cast<int32_t>(free);
    __asm__("movdqa xmm2, [rip+0x0]");
    __asm__("movdqa xmm3, [rip+0x0]");
    __asm__("movdqa xmm4, [rip+0x0]");
    __asm__("movapd xmm5, [rip+0x0]");
    do {
        __asm__("movd xmm6, ecx");
        __asm__("pshufd xmm6, xmm6, 0x50");
        *reinterpret_cast<int32_t*>(&rdx21) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx21) + 4) = reinterpret_cast<int32_t>(free);
        __asm__("movdqa xmm7, xmm1");
        do {
            __asm__("movdqa xmm9, xmm7");
            __asm__("paddd xmm9, xmm2");
            __asm__("pshufd xmm10, xmm9, 0xf5");
            __asm__("pmuludq xmm9, xmm6");
            __asm__("pshufd xmm8, xmm9, 0xe8");
            __asm__("pshufd xmm11, xmm6, 0xf5");
            __asm__("pmuludq xmm11, xmm10");
            __asm__("pshufd xmm10, xmm11, 0xe8");
            __asm__("punpckldq xmm8, xmm10");
            __asm__("pmuludq xmm9, xmm3");
            __asm__("pshufd xmm9, xmm9, 0xed");
            __asm__("pmuludq xmm11, xmm3");
            __asm__("pshufd xmm10, xmm11, 0xed");
            __asm__("pxor xmm11, xmm11");
            __asm__("pcmpgtd xmm11, xmm8");
            __asm__("pand xmm11, xmm3");
            __asm__("punpckldq xmm9, xmm10");
            __asm__("psubd xmm9, xmm11");
            __asm__("movdqa xmm10, xmm9");
            __asm__("psrad xmm9, 0x9");
            __asm__("psrld xmm10, 0x1f");
            __asm__("paddd xmm9, xmm10");
            __asm__("pshufd xmm10, xmm9, 0xf5");
            __asm__("pmuludq xmm9, xmm4");
            __asm__("pmuludq xmm10, xmm4");
            __asm__("punpckldq xmm9, xmm10");
            __asm__("psubd xmm8, xmm9");
            __asm__("cvtdq2pd xmm8, xmm8");
            __asm__("divpd xmm8, xmm5");
            __asm__("movupd [rsi+rdx*8], xmm8");
            rdx21 = rdx21 + 2;
            __asm__("paddd xmm7, xmm0");
        } while (rdx21 != 0x4b0);
        ++rcx18;
    } while (rcx18 != 0x384);
    __asm__("movdqa xmm1, [rip+0x0]");
    *reinterpret_cast<int32_t*>(&rcx22) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx22) + 4) = reinterpret_cast<int32_t>(free);
    __asm__("movdqa xmm2, [rip+0x0]");
    __asm__("movdqa xmm3, [rip+0x0]");
    __asm__("movapd xmm4, [rip+0x0]");
    do {
        __asm__("movd xmm5, edi");
        __asm__("pshufd xmm5, xmm5, 0x50");
        *reinterpret_cast<int32_t*>(&rdx23) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx23) + 4) = reinterpret_cast<int32_t>(free);
        __asm__("movdqa xmm6, xmm1");
        do {
            __asm__("paddd xmm6, xmm0");
            __asm__("movdqa xmm7, xmm6");
            __asm__("pmuludq xmm7, xmm5");
            __asm__("pshufd xmm8, xmm6, 0xf5");
            __asm__("pshufd xmm9, xmm5, 0xf5");
            __asm__("pshufd xmm7, xmm7, 0xe8");
            __asm__("pmuludq xmm9, xmm8");
            __asm__("pshufd xmm8, xmm9, 0xe8");
            __asm__("punpckldq xmm7, xmm8");
            __asm__("paddd xmm7, xmm0");
            __asm__("movdqa xmm8, xmm7");
            __asm__("pmuludq xmm8, xmm2");
            __asm__("pshufd xmm9, xmm7, 0xf5");
            __asm__("pshufd xmm8, xmm8, 0xed");
            __asm__("pmuludq xmm9, xmm2");
            __asm__("pshufd xmm9, xmm9, 0xed");
            __asm__("pxor xmm10, xmm10");
            __asm__("punpckldq xmm8, xmm9");
            __asm__("pcmpgtd xmm10, xmm7");
            __asm__("pand xmm10, xmm2");
            __asm__("psubd xmm8, xmm10");
            __asm__("movdqa xmm9, xmm8");
            __asm__("psrld xmm9, 0x1f");
            __asm__("psrad xmm8, 0x6");
            __asm__("paddd xmm8, xmm9");
            __asm__("pshufd xmm9, xmm8, 0xf5");
            __asm__("pmuludq xmm8, xmm3");
            __asm__("pmuludq xmm9, xmm3");
            __asm__("punpckldq xmm8, xmm9");
            __asm__("psubd xmm7, xmm8");
            __asm__("cvtdq2pd xmm7, xmm7");
            __asm__("divpd xmm7, xmm4");
            __asm__("movupd [rsi+rdx*8], xmm7");
            rdx23 = rdx23 + 2;
        } while (rdx23 != 0x44c);
        ++rdi20;
    } while (rdi20 != 0x4b0);
    *reinterpret_cast<int32_t*>(&rdx24) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx24) + 4) = reinterpret_cast<int32_t>(free);
    do {
        *reinterpret_cast<int32_t*>(&r10_25) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_25) + 4) = reinterpret_cast<int32_t>(free);
        do {
            rdi26 = rbx27 + rcx22 * 0x708;
            rsi28 = reinterpret_cast<struct s94*>(rdi26 + r10_25 * 2);
            rdi26[r10_25 * 2] = reinterpret_cast<int32_t>(free);
            __asm__("pxor xmm0, xmm0");
            *reinterpret_cast<int32_t*>(&rdi29) = reinterpret_cast<int32_t>(free);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi29) + 4) = reinterpret_cast<int32_t>(free);
            do {
                rdi29->f0 = rsi28->f0;
                rdi30 = reinterpret_cast<struct s96*>(&rdi29->f4);
                rsi31 = reinterpret_cast<struct s97*>(&rsi28->f4);
                __asm__("mulsd xmm1, [r9+r10*8]");
                __asm__("addsd xmm1, xmm0");
                rdi30->f0 = rsi31->f0;
                rdi32 = reinterpret_cast<struct s98*>(&rdi30->f4);
                rsi33 = reinterpret_cast<struct s99*>(&rsi31->f4);
                rdi32->f0 = rsi33->f0;
                rdi34 = &rdi32->f4;
                rsi35 = reinterpret_cast<struct s100*>(&rsi33->f4);
                __asm__("mulsd xmm0, [r8+r10*8]");
                __asm__("addsd xmm0, xmm1");
                *rdi34 = rsi35->f0;
                rsi28 = reinterpret_cast<struct s94*>(&rsi35->f4);
                rdi29 = reinterpret_cast<struct s95*>(reinterpret_cast<int64_t>(rdi34 + 1) + 2);
            } while (!reinterpret_cast<int1_t>(rdi29 == 0x3e8));
            ++r10_25;
        } while (r10_25 != 0x384);
        ++rcx22;
    } while (rcx22 != 0x320);
    *reinterpret_cast<int32_t*>(&r10_36) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_36) + 4) = reinterpret_cast<int32_t>(free);
    do {
        *reinterpret_cast<int32_t*>(&rcx37) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx37) + 4) = reinterpret_cast<int32_t>(free);
        do {
            rdi38 = r13_9 + rdx24 * 0x898;
            rsi39 = reinterpret_cast<struct s101*>(rdi38 + rcx37 * 2);
            rdi38[rcx37 * 2] = reinterpret_cast<int32_t>(free);
            __asm__("xorpd xmm0, xmm0");
            *reinterpret_cast<int32_t*>(&rdi40) = reinterpret_cast<int32_t>(free);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi40) + 4) = reinterpret_cast<int32_t>(free);
            do {
                rdi40->f0 = rsi39->f0;
                rdi41 = reinterpret_cast<struct s103*>(&rdi40->f4);
                rsi42 = reinterpret_cast<struct s104*>(&rsi39->f4);
                __asm__("mulsd xmm1, [r9+rcx*8]");
                __asm__("addsd xmm1, xmm0");
                rdi41->f0 = rsi42->f0;
                rdi43 = reinterpret_cast<struct s105*>(&rdi41->f4);
                rsi44 = reinterpret_cast<struct s106*>(&rsi42->f4);
                rdi43->f0 = rsi44->f0;
                rdi45 = &rdi43->f4;
                rsi46 = reinterpret_cast<struct s107*>(&rsi44->f4);
                __asm__("mulsd xmm0, [r8+rcx*8]");
                __asm__("addsd xmm0, xmm1");
                *rdi45 = rsi46->f0;
                rsi39 = reinterpret_cast<struct s101*>(&rsi46->f4);
                rdi40 = reinterpret_cast<struct s102*>(reinterpret_cast<int64_t>(rdi45 + 1) + 2);
            } while (!reinterpret_cast<int1_t>(rdi40 == 0x4b0));
            ++rcx37;
        } while (rcx37 != 0x44c);
        ++rdx24;
    } while (rdx24 != 0x384);
    do {
        *reinterpret_cast<int32_t*>(&rcx47) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx47) + 4) = reinterpret_cast<int32_t>(free);
        do {
            rsi48 = rax14 + r10_36 * 0x44c;
            rdx49 = rsi48 + rcx47;
            rsi48[rcx47] = reinterpret_cast<int64_t>(free);
            __asm__("xorpd xmm0, xmm0");
            *reinterpret_cast<int32_t*>(&rsi50) = reinterpret_cast<int32_t>(free);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi50) + 4) = reinterpret_cast<int32_t>(free);
            do {
                rdi51 = reinterpret_cast<struct s108*>(rbx52 + r10_36 * 0x708);
                rdi51->f0 = rsi50->f0;
                rdi53 = reinterpret_cast<struct s109*>(&rdi51->f4);
                rsi54 = reinterpret_cast<struct s77*>(&rsi50->f4);
                __asm__("mulsd xmm1, [r8+rcx*8]");
                __asm__("addsd xmm1, xmm0");
                rdi53->f0 = rsi54->f0;
                rsi55 = reinterpret_cast<struct s78*>(&rsi54->f4);
                rdi53->f4 = rsi55->f0;
                rsi56 = &rsi55->f4;
                __asm__("mulsd xmm0, [rdi+rcx*8]");
                __asm__("addsd xmm0, xmm1");
                r13_9[(reinterpret_cast<uint64_t>(rsi55) | 1) * 0x898] = *rsi56;
                rsi50 = reinterpret_cast<struct s30*>(reinterpret_cast<uint64_t>(rsi56 + 1) + 2);
            } while (!reinterpret_cast<int1_t>(rsi50 == 0x384));
            ++rcx47;
        } while (rcx47 != 0x44c);
        ++r10_36;
    } while (r10_36 != 0x320);
    if (*reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&v3) + 4) >= 43 && reinterpret_cast<int1_t>(**v57 == free)) {
        *reinterpret_cast<int32_t*>(&rsi50) = 0x44c;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi50) + 4) = reinterpret_cast<int32_t>(free);
        rdx49 = rax14;
        fun_fc5(0x320, 0x44c, rdx49);
    }
    fun_fcd(rbx58, rsi50, rdx49);
    fun_fd5(r14_4, rsi50, rdx49);
    fun_fdd(r12_7, rsi50, rdx49);
    fun_fe5(r13_9, rsi50, rdx49);
    fun_fed(r15_11, rsi50, rdx49);
    fun_ff5(rbp13, rsi50, rdx49);
    fun_fff(rax14, rsi50, rdx49);
    goto v59;
}

void fun_fdd(int64_t rdi, struct s30* rsi, int64_t* rdx) {
    int32_t* r13_4;
    int64_t r15_5;
    int64_t rbp6;
    int64_t* v7;
    int64_t v8;

    fun_fe5(r13_4, rsi, rdx);
    fun_fed(r15_5, rsi, rdx);
    fun_ff5(rbp6, rsi, rdx);
    fun_fff(v7, rsi, rdx);
    goto v8;
}

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
};

struct s114 {
    int32_t f0;
    int32_t f4;
};

struct s115 {
    int32_t f0;
    int32_t f4;
};

struct s116 {
    int32_t f0;
    int32_t f4;
};

struct s117 {
    int32_t f0;
    int32_t f4;
};

struct s118 {
    int32_t f0;
    int32_t f4;
};

struct s119 {
    int32_t f0;
    int32_t f4;
};

struct s120 {
    int32_t f0;
    int32_t f4;
};

struct s121 {
    int32_t f0;
    int32_t f4;
};

struct s122 {
    int32_t f0;
    int32_t f4;
};

struct s123 {
    int32_t f0;
    int32_t f4;
};

struct s124 {
    int32_t f0;
    int32_t f4;
};

struct s125 {
    int32_t f0;
    int32_t f4;
};

int64_t fun_8ba(int64_t rdi, int64_t rsi) {
    int64_t v3;
    int64_t r12_4;
    int64_t rax5;
    int32_t* rax6;
    int32_t* r13_7;
    int64_t rax8;
    int64_t r15_9;
    int64_t rax10;
    int64_t rbp11;
    int64_t* rax12;
    int64_t rdi13;
    int64_t rcx14;
    int64_t rdx15;
    int64_t rcx16;
    int64_t rdx17;
    int64_t rdi18;
    int64_t rdx19;
    int64_t rcx20;
    int64_t rdx21;
    int64_t rdx22;
    int64_t r10_23;
    int32_t* rdi24;
    int32_t* rbx25;
    struct s110* rsi26;
    struct s111* rdi27;
    struct s112* rdi28;
    struct s113* rsi29;
    struct s114* rdi30;
    struct s115* rsi31;
    int32_t* rdi32;
    struct s116* rsi33;
    int64_t r10_34;
    int64_t rcx35;
    int32_t* rdi36;
    struct s117* rsi37;
    struct s118* rdi38;
    struct s119* rdi39;
    struct s120* rsi40;
    struct s121* rdi41;
    struct s122* rsi42;
    int32_t* rdi43;
    struct s123* rsi44;
    int64_t rcx45;
    int64_t* rsi46;
    int64_t* rdx47;
    struct s30* rsi48;
    struct s124* rdi49;
    int32_t* rbx50;
    struct s125* rdi51;
    struct s77* rsi52;
    struct s78* rsi53;
    int32_t* rsi54;
    signed char** v55;
    int32_t* rbx56;
    int64_t r14_57;
    int64_t v58;

    v3 = reinterpret_cast<int64_t>(__return_address());
    r12_4 = rax5;
    rax6 = fun_8cc(0xf1b30, 8);
    r13_7 = rax6;
    rax8 = fun_8de(0x107ac0, 8);
    r15_9 = rax8;
    rax10 = fun_8f0(0x142440, 8);
    rbp11 = rax10;
    rax12 = fun_902(0xd6d80, 8);
    *reinterpret_cast<int32_t*>(&rdi13) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi13) + 4) = reinterpret_cast<int32_t>(free);
    __asm__("movdqa xmm1, [rip+0x0]");
    __asm__("pcmpeqd xmm2, xmm2");
    __asm__("movdqa xmm3, [rip+0x0]");
    __asm__("movdqa xmm4, [rip+0x0]");
    __asm__("movapd xmm5, [rip+0x0]");
    __asm__("movdqa xmm0, [rip+0x0]");
    *reinterpret_cast<int32_t*>(&rcx14) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx14) + 4) = reinterpret_cast<int32_t>(free);
    do {
        __asm__("movd xmm6, ecx");
        __asm__("pshufd xmm6, xmm6, 0x50");
        *reinterpret_cast<int32_t*>(&rdx15) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx15) + 4) = reinterpret_cast<int32_t>(free);
        __asm__("movdqa xmm7, xmm1");
        do {
            __asm__("movdqa xmm8, xmm7");
            __asm__("pmuludq xmm8, xmm6");
            __asm__("pshufd xmm8, xmm8, 0xe8");
            __asm__("pshufd xmm9, xmm6, 0xf5");
            __asm__("pshufd xmm10, xmm7, 0xf5");
            __asm__("pmuludq xmm10, xmm9");
            __asm__("pshufd xmm9, xmm10, 0xe8");
            __asm__("punpckldq xmm8, xmm9");
            __asm__("psubd xmm8, xmm2");
            __asm__("movdqa xmm9, xmm8");
            __asm__("pmuludq xmm9, xmm3");
            __asm__("pshufd xmm9, xmm9, 0xed");
            __asm__("pshufd xmm10, xmm8, 0xf5");
            __asm__("pmuludq xmm10, xmm3");
            __asm__("pshufd xmm10, xmm10, 0xed");
            __asm__("pxor xmm11, xmm11");
            __asm__("pcmpgtd xmm11, xmm8");
            __asm__("pand xmm11, xmm3");
            __asm__("punpckldq xmm9, xmm10");
            __asm__("psubd xmm9, xmm11");
            __asm__("movdqa xmm10, xmm9");
            __asm__("psrad xmm9, 0x8");
            __asm__("psrld xmm10, 0x1f");
            __asm__("paddd xmm9, xmm10");
            __asm__("pshufd xmm10, xmm9, 0xf5");
            __asm__("pmuludq xmm9, xmm4");
            __asm__("pmuludq xmm10, xmm4");
            __asm__("punpckldq xmm9, xmm10");
            __asm__("psubd xmm8, xmm9");
            __asm__("cvtdq2pd xmm8, xmm8");
            __asm__("divpd xmm8, xmm5");
            __asm__("movupd [rsi+rdx*8], xmm8");
            rdx15 = rdx15 + 2;
            __asm__("paddd xmm7, xmm0");
        } while (rdx15 != 0x3e8);
        ++rcx14;
    } while (rcx14 != 0x320);
    __asm__("movdqa xmm1, [rip+0x0]");
    *reinterpret_cast<int32_t*>(&rcx16) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx16) + 4) = reinterpret_cast<int32_t>(free);
    __asm__("pcmpeqd xmm2, xmm2");
    __asm__("movdqa xmm3, [rip+0x0]");
    __asm__("movdqa xmm4, [rip+0x0]");
    __asm__("movapd xmm5, [rip+0x0]");
    __asm__("movdqa xmm6, [rip+0x0]");
    do {
        __asm__("movd xmm7, edi");
        __asm__("pshufd xmm7, xmm7, 0x50");
        *reinterpret_cast<int32_t*>(&rdx17) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx17) + 4) = reinterpret_cast<int32_t>(free);
        __asm__("movdqa xmm8, xmm1");
        do {
            __asm__("pshufd xmm9, xmm8, 0xe8");
            __asm__("psubd xmm9, xmm2");
            __asm__("pshufd xmm10, xmm9, 0x55");
            __asm__("pmuludq xmm9, xmm7");
            __asm__("pshufd xmm11, xmm7, 0xf5");
            __asm__("pshufd xmm9, xmm9, 0xe8");
            __asm__("pmuludq xmm11, xmm10");
            __asm__("pshufd xmm10, xmm11, 0xe8");
            __asm__("punpckldq xmm9, xmm10");
            __asm__("paddd xmm9, xmm0");
            __asm__("pxor xmm10, xmm10");
            __asm__("pcmpgtd xmm10, xmm9");
            __asm__("pand xmm10, xmm3");
            __asm__("paddd xmm10, xmm9");
            __asm__("movdqa xmm11, xmm9");
            __asm__("pmuludq xmm11, xmm3");
            __asm__("pshufd xmm12, xmm9, 0xf5");
            __asm__("pshufd xmm11, xmm11, 0xed");
            __asm__("pmuludq xmm12, xmm3");
            __asm__("pshufd xmm12, xmm12, 0xed");
            __asm__("punpckldq xmm11, xmm12");
            __asm__("psubd xmm11, xmm10");
            __asm__("paddd xmm11, xmm9");
            __asm__("movdqa xmm10, xmm11");
            __asm__("psrad xmm11, 0x9");
            __asm__("psrld xmm10, 0x1f");
            __asm__("paddd xmm11, xmm10");
            __asm__("pshufd xmm10, xmm11, 0xf5");
            __asm__("pmuludq xmm11, xmm4");
            __asm__("pmuludq xmm10, xmm4");
            __asm__("punpckldq xmm11, xmm10");
            __asm__("psubd xmm9, xmm11");
            __asm__("cvtdq2pd xmm9, xmm9");
            __asm__("divpd xmm9, xmm5");
            __asm__("movupd [rsi+rdx*8], xmm9");
            rdx17 = rdx17 + 2;
            __asm__("paddq xmm8, xmm6");
        } while (rdx17 != 0x384);
        ++rdi13;
    } while (rdi13 != 0x3e8);
    __asm__("movdqa xmm1, [rip+0x0]");
    *reinterpret_cast<int32_t*>(&rdi18) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi18) + 4) = reinterpret_cast<int32_t>(free);
    __asm__("movdqa xmm2, [rip+0x0]");
    __asm__("movdqa xmm3, [rip+0x0]");
    __asm__("movdqa xmm4, [rip+0x0]");
    __asm__("movapd xmm5, [rip+0x0]");
    do {
        __asm__("movd xmm6, ecx");
        __asm__("pshufd xmm6, xmm6, 0x50");
        *reinterpret_cast<int32_t*>(&rdx19) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx19) + 4) = reinterpret_cast<int32_t>(free);
        __asm__("movdqa xmm7, xmm1");
        do {
            __asm__("movdqa xmm9, xmm7");
            __asm__("paddd xmm9, xmm2");
            __asm__("pshufd xmm10, xmm9, 0xf5");
            __asm__("pmuludq xmm9, xmm6");
            __asm__("pshufd xmm8, xmm9, 0xe8");
            __asm__("pshufd xmm11, xmm6, 0xf5");
            __asm__("pmuludq xmm11, xmm10");
            __asm__("pshufd xmm10, xmm11, 0xe8");
            __asm__("punpckldq xmm8, xmm10");
            __asm__("pmuludq xmm9, xmm3");
            __asm__("pshufd xmm9, xmm9, 0xed");
            __asm__("pmuludq xmm11, xmm3");
            __asm__("pshufd xmm10, xmm11, 0xed");
            __asm__("pxor xmm11, xmm11");
            __asm__("pcmpgtd xmm11, xmm8");
            __asm__("pand xmm11, xmm3");
            __asm__("punpckldq xmm9, xmm10");
            __asm__("psubd xmm9, xmm11");
            __asm__("movdqa xmm10, xmm9");
            __asm__("psrad xmm9, 0x9");
            __asm__("psrld xmm10, 0x1f");
            __asm__("paddd xmm9, xmm10");
            __asm__("pshufd xmm10, xmm9, 0xf5");
            __asm__("pmuludq xmm9, xmm4");
            __asm__("pmuludq xmm10, xmm4");
            __asm__("punpckldq xmm9, xmm10");
            __asm__("psubd xmm8, xmm9");
            __asm__("cvtdq2pd xmm8, xmm8");
            __asm__("divpd xmm8, xmm5");
            __asm__("movupd [rsi+rdx*8], xmm8");
            rdx19 = rdx19 + 2;
            __asm__("paddd xmm7, xmm0");
        } while (rdx19 != 0x4b0);
        ++rcx16;
    } while (rcx16 != 0x384);
    __asm__("movdqa xmm1, [rip+0x0]");
    *reinterpret_cast<int32_t*>(&rcx20) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx20) + 4) = reinterpret_cast<int32_t>(free);
    __asm__("movdqa xmm2, [rip+0x0]");
    __asm__("movdqa xmm3, [rip+0x0]");
    __asm__("movapd xmm4, [rip+0x0]");
    do {
        __asm__("movd xmm5, edi");
        __asm__("pshufd xmm5, xmm5, 0x50");
        *reinterpret_cast<int32_t*>(&rdx21) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx21) + 4) = reinterpret_cast<int32_t>(free);
        __asm__("movdqa xmm6, xmm1");
        do {
            __asm__("paddd xmm6, xmm0");
            __asm__("movdqa xmm7, xmm6");
            __asm__("pmuludq xmm7, xmm5");
            __asm__("pshufd xmm8, xmm6, 0xf5");
            __asm__("pshufd xmm9, xmm5, 0xf5");
            __asm__("pshufd xmm7, xmm7, 0xe8");
            __asm__("pmuludq xmm9, xmm8");
            __asm__("pshufd xmm8, xmm9, 0xe8");
            __asm__("punpckldq xmm7, xmm8");
            __asm__("paddd xmm7, xmm0");
            __asm__("movdqa xmm8, xmm7");
            __asm__("pmuludq xmm8, xmm2");
            __asm__("pshufd xmm9, xmm7, 0xf5");
            __asm__("pshufd xmm8, xmm8, 0xed");
            __asm__("pmuludq xmm9, xmm2");
            __asm__("pshufd xmm9, xmm9, 0xed");
            __asm__("pxor xmm10, xmm10");
            __asm__("punpckldq xmm8, xmm9");
            __asm__("pcmpgtd xmm10, xmm7");
            __asm__("pand xmm10, xmm2");
            __asm__("psubd xmm8, xmm10");
            __asm__("movdqa xmm9, xmm8");
            __asm__("psrld xmm9, 0x1f");
            __asm__("psrad xmm8, 0x6");
            __asm__("paddd xmm8, xmm9");
            __asm__("pshufd xmm9, xmm8, 0xf5");
            __asm__("pmuludq xmm8, xmm3");
            __asm__("pmuludq xmm9, xmm3");
            __asm__("punpckldq xmm8, xmm9");
            __asm__("psubd xmm7, xmm8");
            __asm__("cvtdq2pd xmm7, xmm7");
            __asm__("divpd xmm7, xmm4");
            __asm__("movupd [rsi+rdx*8], xmm7");
            rdx21 = rdx21 + 2;
        } while (rdx21 != 0x44c);
        ++rdi18;
    } while (rdi18 != 0x4b0);
    *reinterpret_cast<int32_t*>(&rdx22) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx22) + 4) = reinterpret_cast<int32_t>(free);
    do {
        *reinterpret_cast<int32_t*>(&r10_23) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_23) + 4) = reinterpret_cast<int32_t>(free);
        do {
            rdi24 = rbx25 + rcx20 * 0x708;
            rsi26 = reinterpret_cast<struct s110*>(rdi24 + r10_23 * 2);
            rdi24[r10_23 * 2] = reinterpret_cast<int32_t>(free);
            __asm__("pxor xmm0, xmm0");
            *reinterpret_cast<int32_t*>(&rdi27) = reinterpret_cast<int32_t>(free);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi27) + 4) = reinterpret_cast<int32_t>(free);
            do {
                rdi27->f0 = rsi26->f0;
                rdi28 = reinterpret_cast<struct s112*>(&rdi27->f4);
                rsi29 = reinterpret_cast<struct s113*>(&rsi26->f4);
                __asm__("mulsd xmm1, [r9+r10*8]");
                __asm__("addsd xmm1, xmm0");
                rdi28->f0 = rsi29->f0;
                rdi30 = reinterpret_cast<struct s114*>(&rdi28->f4);
                rsi31 = reinterpret_cast<struct s115*>(&rsi29->f4);
                rdi30->f0 = rsi31->f0;
                rdi32 = &rdi30->f4;
                rsi33 = reinterpret_cast<struct s116*>(&rsi31->f4);
                __asm__("mulsd xmm0, [r8+r10*8]");
                __asm__("addsd xmm0, xmm1");
                *rdi32 = rsi33->f0;
                rsi26 = reinterpret_cast<struct s110*>(&rsi33->f4);
                rdi27 = reinterpret_cast<struct s111*>(reinterpret_cast<int64_t>(rdi32 + 1) + 2);
            } while (!reinterpret_cast<int1_t>(rdi27 == 0x3e8));
            ++r10_23;
        } while (r10_23 != 0x384);
        ++rcx20;
    } while (rcx20 != 0x320);
    *reinterpret_cast<int32_t*>(&r10_34) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_34) + 4) = reinterpret_cast<int32_t>(free);
    do {
        *reinterpret_cast<int32_t*>(&rcx35) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx35) + 4) = reinterpret_cast<int32_t>(free);
        do {
            rdi36 = r13_7 + rdx22 * 0x898;
            rsi37 = reinterpret_cast<struct s117*>(rdi36 + rcx35 * 2);
            rdi36[rcx35 * 2] = reinterpret_cast<int32_t>(free);
            __asm__("xorpd xmm0, xmm0");
            *reinterpret_cast<int32_t*>(&rdi38) = reinterpret_cast<int32_t>(free);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi38) + 4) = reinterpret_cast<int32_t>(free);
            do {
                rdi38->f0 = rsi37->f0;
                rdi39 = reinterpret_cast<struct s119*>(&rdi38->f4);
                rsi40 = reinterpret_cast<struct s120*>(&rsi37->f4);
                __asm__("mulsd xmm1, [r9+rcx*8]");
                __asm__("addsd xmm1, xmm0");
                rdi39->f0 = rsi40->f0;
                rdi41 = reinterpret_cast<struct s121*>(&rdi39->f4);
                rsi42 = reinterpret_cast<struct s122*>(&rsi40->f4);
                rdi41->f0 = rsi42->f0;
                rdi43 = &rdi41->f4;
                rsi44 = reinterpret_cast<struct s123*>(&rsi42->f4);
                __asm__("mulsd xmm0, [r8+rcx*8]");
                __asm__("addsd xmm0, xmm1");
                *rdi43 = rsi44->f0;
                rsi37 = reinterpret_cast<struct s117*>(&rsi44->f4);
                rdi38 = reinterpret_cast<struct s118*>(reinterpret_cast<int64_t>(rdi43 + 1) + 2);
            } while (!reinterpret_cast<int1_t>(rdi38 == 0x4b0));
            ++rcx35;
        } while (rcx35 != 0x44c);
        ++rdx22;
    } while (rdx22 != 0x384);
    do {
        *reinterpret_cast<int32_t*>(&rcx45) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx45) + 4) = reinterpret_cast<int32_t>(free);
        do {
            rsi46 = rax12 + r10_34 * 0x44c;
            rdx47 = rsi46 + rcx45;
            rsi46[rcx45] = reinterpret_cast<int64_t>(free);
            __asm__("xorpd xmm0, xmm0");
            *reinterpret_cast<int32_t*>(&rsi48) = reinterpret_cast<int32_t>(free);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi48) + 4) = reinterpret_cast<int32_t>(free);
            do {
                rdi49 = reinterpret_cast<struct s124*>(rbx50 + r10_34 * 0x708);
                rdi49->f0 = rsi48->f0;
                rdi51 = reinterpret_cast<struct s125*>(&rdi49->f4);
                rsi52 = reinterpret_cast<struct s77*>(&rsi48->f4);
                __asm__("mulsd xmm1, [r8+rcx*8]");
                __asm__("addsd xmm1, xmm0");
                rdi51->f0 = rsi52->f0;
                rsi53 = reinterpret_cast<struct s78*>(&rsi52->f4);
                rdi51->f4 = rsi53->f0;
                rsi54 = &rsi53->f4;
                __asm__("mulsd xmm0, [rdi+rcx*8]");
                __asm__("addsd xmm0, xmm1");
                r13_7[(reinterpret_cast<uint64_t>(rsi53) | 1) * 0x898] = *rsi54;
                rsi48 = reinterpret_cast<struct s30*>(reinterpret_cast<uint64_t>(rsi54 + 1) + 2);
            } while (!reinterpret_cast<int1_t>(rsi48 == 0x384));
            ++rcx45;
        } while (rcx45 != 0x44c);
        ++r10_34;
    } while (r10_34 != 0x320);
    if (*reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&v3) + 4) >= 43 && reinterpret_cast<int1_t>(**v55 == free)) {
        *reinterpret_cast<int32_t*>(&rsi48) = 0x44c;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi48) + 4) = reinterpret_cast<int32_t>(free);
        rdx47 = rax12;
        fun_fc5(0x320, 0x44c, rdx47);
    }
    fun_fcd(rbx56, rsi48, rdx47);
    fun_fd5(r14_57, rsi48, rdx47);
    fun_fdd(r12_4, rsi48, rdx47);
    fun_fe5(r13_7, rsi48, rdx47);
    fun_fed(r15_9, rsi48, rdx47);
    fun_ff5(rbp11, rsi48, rdx47);
    fun_fff(rax12, rsi48, rdx47);
    goto v58;
}

void fun_fe5(int32_t* rdi, struct s30* rsi, int64_t* rdx) {
    int64_t r15_4;
    int64_t rbp5;
    int64_t* v6;
    int64_t v7;

    fun_fed(r15_4, rsi, rdx);
    fun_ff5(rbp5, rsi, rdx);
    fun_fff(v6, rsi, rdx);
    goto v7;
}

struct s126 {
    int32_t f0;
    int32_t f4;
};

struct s127 {
    int32_t f0;
    int32_t f4;
};

struct s128 {
    int32_t f0;
    int32_t f4;
};

struct s129 {
    int32_t f0;
    int32_t f4;
};

struct s130 {
    int32_t f0;
    int32_t f4;
};

struct s131 {
    int32_t f0;
    int32_t f4;
};

struct s132 {
    int32_t f0;
    int32_t f4;
};

struct s133 {
    int32_t f0;
    int32_t f4;
};

struct s134 {
    int32_t f0;
    int32_t f4;
};

struct s135 {
    int32_t f0;
    int32_t f4;
};

struct s136 {
    int32_t f0;
    int32_t f4;
};

struct s137 {
    int32_t f0;
    int32_t f4;
};

struct s138 {
    int32_t f0;
    int32_t f4;
};

struct s139 {
    int32_t f0;
    int32_t f4;
};

struct s140 {
    int32_t f0;
    int32_t f4;
};

struct s141 {
    int32_t f0;
    int32_t f4;
};

int32_t* fun_8cc(int64_t rdi, int64_t rsi) {
    int64_t v3;
    int32_t* r13_4;
    int32_t* rax5;
    int64_t rax6;
    int64_t r15_7;
    int64_t rax8;
    int64_t rbp9;
    int64_t* rax10;
    int64_t rdi11;
    int64_t rcx12;
    int64_t rdx13;
    int64_t rcx14;
    int64_t rdx15;
    int64_t rdi16;
    int64_t rdx17;
    int64_t rcx18;
    int64_t rdx19;
    int64_t rdx20;
    int64_t r10_21;
    int32_t* rdi22;
    int32_t* rbx23;
    struct s126* rsi24;
    struct s127* rdi25;
    struct s128* rdi26;
    struct s129* rsi27;
    struct s130* rdi28;
    struct s131* rsi29;
    int32_t* rdi30;
    struct s132* rsi31;
    int64_t r10_32;
    int64_t rcx33;
    int32_t* rdi34;
    struct s133* rsi35;
    struct s134* rdi36;
    struct s135* rdi37;
    struct s136* rsi38;
    struct s137* rdi39;
    struct s138* rsi40;
    int32_t* rdi41;
    struct s139* rsi42;
    int64_t rcx43;
    int64_t* rsi44;
    int64_t* rdx45;
    struct s30* rsi46;
    struct s140* rdi47;
    int32_t* rbx48;
    struct s141* rdi49;
    struct s77* rsi50;
    struct s78* rsi51;
    int32_t* rsi52;
    signed char** v53;
    int32_t* rbx54;
    int64_t r14_55;
    int64_t r12_56;
    int64_t v57;

    v3 = reinterpret_cast<int64_t>(__return_address());
    r13_4 = rax5;
    rax6 = fun_8de(0x107ac0, 8);
    r15_7 = rax6;
    rax8 = fun_8f0(0x142440, 8);
    rbp9 = rax8;
    rax10 = fun_902(0xd6d80, 8);
    *reinterpret_cast<int32_t*>(&rdi11) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi11) + 4) = reinterpret_cast<int32_t>(free);
    __asm__("movdqa xmm1, [rip+0x0]");
    __asm__("pcmpeqd xmm2, xmm2");
    __asm__("movdqa xmm3, [rip+0x0]");
    __asm__("movdqa xmm4, [rip+0x0]");
    __asm__("movapd xmm5, [rip+0x0]");
    __asm__("movdqa xmm0, [rip+0x0]");
    *reinterpret_cast<int32_t*>(&rcx12) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx12) + 4) = reinterpret_cast<int32_t>(free);
    do {
        __asm__("movd xmm6, ecx");
        __asm__("pshufd xmm6, xmm6, 0x50");
        *reinterpret_cast<int32_t*>(&rdx13) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx13) + 4) = reinterpret_cast<int32_t>(free);
        __asm__("movdqa xmm7, xmm1");
        do {
            __asm__("movdqa xmm8, xmm7");
            __asm__("pmuludq xmm8, xmm6");
            __asm__("pshufd xmm8, xmm8, 0xe8");
            __asm__("pshufd xmm9, xmm6, 0xf5");
            __asm__("pshufd xmm10, xmm7, 0xf5");
            __asm__("pmuludq xmm10, xmm9");
            __asm__("pshufd xmm9, xmm10, 0xe8");
            __asm__("punpckldq xmm8, xmm9");
            __asm__("psubd xmm8, xmm2");
            __asm__("movdqa xmm9, xmm8");
            __asm__("pmuludq xmm9, xmm3");
            __asm__("pshufd xmm9, xmm9, 0xed");
            __asm__("pshufd xmm10, xmm8, 0xf5");
            __asm__("pmuludq xmm10, xmm3");
            __asm__("pshufd xmm10, xmm10, 0xed");
            __asm__("pxor xmm11, xmm11");
            __asm__("pcmpgtd xmm11, xmm8");
            __asm__("pand xmm11, xmm3");
            __asm__("punpckldq xmm9, xmm10");
            __asm__("psubd xmm9, xmm11");
            __asm__("movdqa xmm10, xmm9");
            __asm__("psrad xmm9, 0x8");
            __asm__("psrld xmm10, 0x1f");
            __asm__("paddd xmm9, xmm10");
            __asm__("pshufd xmm10, xmm9, 0xf5");
            __asm__("pmuludq xmm9, xmm4");
            __asm__("pmuludq xmm10, xmm4");
            __asm__("punpckldq xmm9, xmm10");
            __asm__("psubd xmm8, xmm9");
            __asm__("cvtdq2pd xmm8, xmm8");
            __asm__("divpd xmm8, xmm5");
            __asm__("movupd [rsi+rdx*8], xmm8");
            rdx13 = rdx13 + 2;
            __asm__("paddd xmm7, xmm0");
        } while (rdx13 != 0x3e8);
        ++rcx12;
    } while (rcx12 != 0x320);
    __asm__("movdqa xmm1, [rip+0x0]");
    *reinterpret_cast<int32_t*>(&rcx14) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx14) + 4) = reinterpret_cast<int32_t>(free);
    __asm__("pcmpeqd xmm2, xmm2");
    __asm__("movdqa xmm3, [rip+0x0]");
    __asm__("movdqa xmm4, [rip+0x0]");
    __asm__("movapd xmm5, [rip+0x0]");
    __asm__("movdqa xmm6, [rip+0x0]");
    do {
        __asm__("movd xmm7, edi");
        __asm__("pshufd xmm7, xmm7, 0x50");
        *reinterpret_cast<int32_t*>(&rdx15) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx15) + 4) = reinterpret_cast<int32_t>(free);
        __asm__("movdqa xmm8, xmm1");
        do {
            __asm__("pshufd xmm9, xmm8, 0xe8");
            __asm__("psubd xmm9, xmm2");
            __asm__("pshufd xmm10, xmm9, 0x55");
            __asm__("pmuludq xmm9, xmm7");
            __asm__("pshufd xmm11, xmm7, 0xf5");
            __asm__("pshufd xmm9, xmm9, 0xe8");
            __asm__("pmuludq xmm11, xmm10");
            __asm__("pshufd xmm10, xmm11, 0xe8");
            __asm__("punpckldq xmm9, xmm10");
            __asm__("paddd xmm9, xmm0");
            __asm__("pxor xmm10, xmm10");
            __asm__("pcmpgtd xmm10, xmm9");
            __asm__("pand xmm10, xmm3");
            __asm__("paddd xmm10, xmm9");
            __asm__("movdqa xmm11, xmm9");
            __asm__("pmuludq xmm11, xmm3");
            __asm__("pshufd xmm12, xmm9, 0xf5");
            __asm__("pshufd xmm11, xmm11, 0xed");
            __asm__("pmuludq xmm12, xmm3");
            __asm__("pshufd xmm12, xmm12, 0xed");
            __asm__("punpckldq xmm11, xmm12");
            __asm__("psubd xmm11, xmm10");
            __asm__("paddd xmm11, xmm9");
            __asm__("movdqa xmm10, xmm11");
            __asm__("psrad xmm11, 0x9");
            __asm__("psrld xmm10, 0x1f");
            __asm__("paddd xmm11, xmm10");
            __asm__("pshufd xmm10, xmm11, 0xf5");
            __asm__("pmuludq xmm11, xmm4");
            __asm__("pmuludq xmm10, xmm4");
            __asm__("punpckldq xmm11, xmm10");
            __asm__("psubd xmm9, xmm11");
            __asm__("cvtdq2pd xmm9, xmm9");
            __asm__("divpd xmm9, xmm5");
            __asm__("movupd [rsi+rdx*8], xmm9");
            rdx15 = rdx15 + 2;
            __asm__("paddq xmm8, xmm6");
        } while (rdx15 != 0x384);
        ++rdi11;
    } while (rdi11 != 0x3e8);
    __asm__("movdqa xmm1, [rip+0x0]");
    *reinterpret_cast<int32_t*>(&rdi16) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi16) + 4) = reinterpret_cast<int32_t>(free);
    __asm__("movdqa xmm2, [rip+0x0]");
    __asm__("movdqa xmm3, [rip+0x0]");
    __asm__("movdqa xmm4, [rip+0x0]");
    __asm__("movapd xmm5, [rip+0x0]");
    do {
        __asm__("movd xmm6, ecx");
        __asm__("pshufd xmm6, xmm6, 0x50");
        *reinterpret_cast<int32_t*>(&rdx17) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx17) + 4) = reinterpret_cast<int32_t>(free);
        __asm__("movdqa xmm7, xmm1");
        do {
            __asm__("movdqa xmm9, xmm7");
            __asm__("paddd xmm9, xmm2");
            __asm__("pshufd xmm10, xmm9, 0xf5");
            __asm__("pmuludq xmm9, xmm6");
            __asm__("pshufd xmm8, xmm9, 0xe8");
            __asm__("pshufd xmm11, xmm6, 0xf5");
            __asm__("pmuludq xmm11, xmm10");
            __asm__("pshufd xmm10, xmm11, 0xe8");
            __asm__("punpckldq xmm8, xmm10");
            __asm__("pmuludq xmm9, xmm3");
            __asm__("pshufd xmm9, xmm9, 0xed");
            __asm__("pmuludq xmm11, xmm3");
            __asm__("pshufd xmm10, xmm11, 0xed");
            __asm__("pxor xmm11, xmm11");
            __asm__("pcmpgtd xmm11, xmm8");
            __asm__("pand xmm11, xmm3");
            __asm__("punpckldq xmm9, xmm10");
            __asm__("psubd xmm9, xmm11");
            __asm__("movdqa xmm10, xmm9");
            __asm__("psrad xmm9, 0x9");
            __asm__("psrld xmm10, 0x1f");
            __asm__("paddd xmm9, xmm10");
            __asm__("pshufd xmm10, xmm9, 0xf5");
            __asm__("pmuludq xmm9, xmm4");
            __asm__("pmuludq xmm10, xmm4");
            __asm__("punpckldq xmm9, xmm10");
            __asm__("psubd xmm8, xmm9");
            __asm__("cvtdq2pd xmm8, xmm8");
            __asm__("divpd xmm8, xmm5");
            __asm__("movupd [rsi+rdx*8], xmm8");
            rdx17 = rdx17 + 2;
            __asm__("paddd xmm7, xmm0");
        } while (rdx17 != 0x4b0);
        ++rcx14;
    } while (rcx14 != 0x384);
    __asm__("movdqa xmm1, [rip+0x0]");
    *reinterpret_cast<int32_t*>(&rcx18) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx18) + 4) = reinterpret_cast<int32_t>(free);
    __asm__("movdqa xmm2, [rip+0x0]");
    __asm__("movdqa xmm3, [rip+0x0]");
    __asm__("movapd xmm4, [rip+0x0]");
    do {
        __asm__("movd xmm5, edi");
        __asm__("pshufd xmm5, xmm5, 0x50");
        *reinterpret_cast<int32_t*>(&rdx19) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx19) + 4) = reinterpret_cast<int32_t>(free);
        __asm__("movdqa xmm6, xmm1");
        do {
            __asm__("paddd xmm6, xmm0");
            __asm__("movdqa xmm7, xmm6");
            __asm__("pmuludq xmm7, xmm5");
            __asm__("pshufd xmm8, xmm6, 0xf5");
            __asm__("pshufd xmm9, xmm5, 0xf5");
            __asm__("pshufd xmm7, xmm7, 0xe8");
            __asm__("pmuludq xmm9, xmm8");
            __asm__("pshufd xmm8, xmm9, 0xe8");
            __asm__("punpckldq xmm7, xmm8");
            __asm__("paddd xmm7, xmm0");
            __asm__("movdqa xmm8, xmm7");
            __asm__("pmuludq xmm8, xmm2");
            __asm__("pshufd xmm9, xmm7, 0xf5");
            __asm__("pshufd xmm8, xmm8, 0xed");
            __asm__("pmuludq xmm9, xmm2");
            __asm__("pshufd xmm9, xmm9, 0xed");
            __asm__("pxor xmm10, xmm10");
            __asm__("punpckldq xmm8, xmm9");
            __asm__("pcmpgtd xmm10, xmm7");
            __asm__("pand xmm10, xmm2");
            __asm__("psubd xmm8, xmm10");
            __asm__("movdqa xmm9, xmm8");
            __asm__("psrld xmm9, 0x1f");
            __asm__("psrad xmm8, 0x6");
            __asm__("paddd xmm8, xmm9");
            __asm__("pshufd xmm9, xmm8, 0xf5");
            __asm__("pmuludq xmm8, xmm3");
            __asm__("pmuludq xmm9, xmm3");
            __asm__("punpckldq xmm8, xmm9");
            __asm__("psubd xmm7, xmm8");
            __asm__("cvtdq2pd xmm7, xmm7");
            __asm__("divpd xmm7, xmm4");
            __asm__("movupd [rsi+rdx*8], xmm7");
            rdx19 = rdx19 + 2;
        } while (rdx19 != 0x44c);
        ++rdi16;
    } while (rdi16 != 0x4b0);
    *reinterpret_cast<int32_t*>(&rdx20) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx20) + 4) = reinterpret_cast<int32_t>(free);
    do {
        *reinterpret_cast<int32_t*>(&r10_21) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_21) + 4) = reinterpret_cast<int32_t>(free);
        do {
            rdi22 = rbx23 + rcx18 * 0x708;
            rsi24 = reinterpret_cast<struct s126*>(rdi22 + r10_21 * 2);
            rdi22[r10_21 * 2] = reinterpret_cast<int32_t>(free);
            __asm__("pxor xmm0, xmm0");
            *reinterpret_cast<int32_t*>(&rdi25) = reinterpret_cast<int32_t>(free);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi25) + 4) = reinterpret_cast<int32_t>(free);
            do {
                rdi25->f0 = rsi24->f0;
                rdi26 = reinterpret_cast<struct s128*>(&rdi25->f4);
                rsi27 = reinterpret_cast<struct s129*>(&rsi24->f4);
                __asm__("mulsd xmm1, [r9+r10*8]");
                __asm__("addsd xmm1, xmm0");
                rdi26->f0 = rsi27->f0;
                rdi28 = reinterpret_cast<struct s130*>(&rdi26->f4);
                rsi29 = reinterpret_cast<struct s131*>(&rsi27->f4);
                rdi28->f0 = rsi29->f0;
                rdi30 = &rdi28->f4;
                rsi31 = reinterpret_cast<struct s132*>(&rsi29->f4);
                __asm__("mulsd xmm0, [r8+r10*8]");
                __asm__("addsd xmm0, xmm1");
                *rdi30 = rsi31->f0;
                rsi24 = reinterpret_cast<struct s126*>(&rsi31->f4);
                rdi25 = reinterpret_cast<struct s127*>(reinterpret_cast<int64_t>(rdi30 + 1) + 2);
            } while (!reinterpret_cast<int1_t>(rdi25 == 0x3e8));
            ++r10_21;
        } while (r10_21 != 0x384);
        ++rcx18;
    } while (rcx18 != 0x320);
    *reinterpret_cast<int32_t*>(&r10_32) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_32) + 4) = reinterpret_cast<int32_t>(free);
    do {
        *reinterpret_cast<int32_t*>(&rcx33) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx33) + 4) = reinterpret_cast<int32_t>(free);
        do {
            rdi34 = r13_4 + rdx20 * 0x898;
            rsi35 = reinterpret_cast<struct s133*>(rdi34 + rcx33 * 2);
            rdi34[rcx33 * 2] = reinterpret_cast<int32_t>(free);
            __asm__("xorpd xmm0, xmm0");
            *reinterpret_cast<int32_t*>(&rdi36) = reinterpret_cast<int32_t>(free);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi36) + 4) = reinterpret_cast<int32_t>(free);
            do {
                rdi36->f0 = rsi35->f0;
                rdi37 = reinterpret_cast<struct s135*>(&rdi36->f4);
                rsi38 = reinterpret_cast<struct s136*>(&rsi35->f4);
                __asm__("mulsd xmm1, [r9+rcx*8]");
                __asm__("addsd xmm1, xmm0");
                rdi37->f0 = rsi38->f0;
                rdi39 = reinterpret_cast<struct s137*>(&rdi37->f4);
                rsi40 = reinterpret_cast<struct s138*>(&rsi38->f4);
                rdi39->f0 = rsi40->f0;
                rdi41 = &rdi39->f4;
                rsi42 = reinterpret_cast<struct s139*>(&rsi40->f4);
                __asm__("mulsd xmm0, [r8+rcx*8]");
                __asm__("addsd xmm0, xmm1");
                *rdi41 = rsi42->f0;
                rsi35 = reinterpret_cast<struct s133*>(&rsi42->f4);
                rdi36 = reinterpret_cast<struct s134*>(reinterpret_cast<int64_t>(rdi41 + 1) + 2);
            } while (!reinterpret_cast<int1_t>(rdi36 == 0x4b0));
            ++rcx33;
        } while (rcx33 != 0x44c);
        ++rdx20;
    } while (rdx20 != 0x384);
    do {
        *reinterpret_cast<int32_t*>(&rcx43) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx43) + 4) = reinterpret_cast<int32_t>(free);
        do {
            rsi44 = rax10 + r10_32 * 0x44c;
            rdx45 = rsi44 + rcx43;
            rsi44[rcx43] = reinterpret_cast<int64_t>(free);
            __asm__("xorpd xmm0, xmm0");
            *reinterpret_cast<int32_t*>(&rsi46) = reinterpret_cast<int32_t>(free);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi46) + 4) = reinterpret_cast<int32_t>(free);
            do {
                rdi47 = reinterpret_cast<struct s140*>(rbx48 + r10_32 * 0x708);
                rdi47->f0 = rsi46->f0;
                rdi49 = reinterpret_cast<struct s141*>(&rdi47->f4);
                rsi50 = reinterpret_cast<struct s77*>(&rsi46->f4);
                __asm__("mulsd xmm1, [r8+rcx*8]");
                __asm__("addsd xmm1, xmm0");
                rdi49->f0 = rsi50->f0;
                rsi51 = reinterpret_cast<struct s78*>(&rsi50->f4);
                rdi49->f4 = rsi51->f0;
                rsi52 = &rsi51->f4;
                __asm__("mulsd xmm0, [rdi+rcx*8]");
                __asm__("addsd xmm0, xmm1");
                r13_4[(reinterpret_cast<uint64_t>(rsi51) | 1) * 0x898] = *rsi52;
                rsi46 = reinterpret_cast<struct s30*>(reinterpret_cast<uint64_t>(rsi52 + 1) + 2);
            } while (!reinterpret_cast<int1_t>(rsi46 == 0x384));
            ++rcx43;
        } while (rcx43 != 0x44c);
        ++r10_32;
    } while (r10_32 != 0x320);
    if (*reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&v3) + 4) >= 43 && reinterpret_cast<int1_t>(**v53 == free)) {
        *reinterpret_cast<int32_t*>(&rsi46) = 0x44c;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi46) + 4) = reinterpret_cast<int32_t>(free);
        rdx45 = rax10;
        fun_fc5(0x320, 0x44c, rdx45);
    }
    fun_fcd(rbx54, rsi46, rdx45);
    fun_fd5(r14_55, rsi46, rdx45);
    fun_fdd(r12_56, rsi46, rdx45);
    fun_fe5(r13_4, rsi46, rdx45);
    fun_fed(r15_7, rsi46, rdx45);
    fun_ff5(rbp9, rsi46, rdx45);
    fun_fff(rax10, rsi46, rdx45);
    goto v57;
}

void fun_fed(int64_t rdi, struct s30* rsi, int64_t* rdx) {
    int64_t rbp4;
    int64_t* v5;
    int64_t v6;

    fun_ff5(rbp4, rsi, rdx);
    fun_fff(v5, rsi, rdx);
    goto v6;
}

struct s142 {
    int32_t f0;
    int32_t f4;
};

struct s143 {
    int32_t f0;
    int32_t f4;
};

struct s144 {
    int32_t f0;
    int32_t f4;
};

struct s145 {
    int32_t f0;
    int32_t f4;
};

struct s146 {
    int32_t f0;
    int32_t f4;
};

struct s147 {
    int32_t f0;
    int32_t f4;
};

struct s148 {
    int32_t f0;
    int32_t f4;
};

struct s149 {
    int32_t f0;
    int32_t f4;
};

struct s150 {
    int32_t f0;
    int32_t f4;
};

struct s151 {
    int32_t f0;
    int32_t f4;
};

struct s152 {
    int32_t f0;
    int32_t f4;
};

struct s153 {
    int32_t f0;
    int32_t f4;
};

struct s154 {
    int32_t f0;
    int32_t f4;
};

struct s155 {
    int32_t f0;
    int32_t f4;
};

struct s156 {
    int32_t f0;
    int32_t f4;
};

struct s157 {
    int32_t f0;
    int32_t f4;
};

int64_t fun_8de(int64_t rdi, int64_t rsi) {
    int64_t v3;
    int64_t r15_4;
    int64_t rax5;
    int64_t rax6;
    int64_t rbp7;
    int64_t* rax8;
    int64_t rdi9;
    int64_t rcx10;
    int64_t rdx11;
    int64_t rcx12;
    int64_t rdx13;
    int64_t rdi14;
    int64_t rdx15;
    int64_t rcx16;
    int64_t rdx17;
    int64_t rdx18;
    int64_t r10_19;
    int32_t* rdi20;
    int32_t* rbx21;
    struct s142* rsi22;
    struct s143* rdi23;
    struct s144* rdi24;
    struct s145* rsi25;
    struct s146* rdi26;
    struct s147* rsi27;
    int32_t* rdi28;
    struct s148* rsi29;
    int64_t r10_30;
    int64_t rcx31;
    int32_t* rdi32;
    int32_t* r13_33;
    struct s149* rsi34;
    struct s150* rdi35;
    struct s151* rdi36;
    struct s152* rsi37;
    struct s153* rdi38;
    struct s154* rsi39;
    int32_t* rdi40;
    struct s155* rsi41;
    int64_t rcx42;
    int64_t* rsi43;
    int64_t* rdx44;
    struct s30* rsi45;
    struct s156* rdi46;
    int32_t* rbx47;
    struct s157* rdi48;
    struct s77* rsi49;
    struct s78* rsi50;
    int32_t* rsi51;
    int32_t* r13_52;
    signed char** v53;
    int32_t* rbx54;
    int64_t r14_55;
    int64_t r12_56;
    int32_t* r13_57;
    int64_t v58;

    v3 = reinterpret_cast<int64_t>(__return_address());
    r15_4 = rax5;
    rax6 = fun_8f0(0x142440, 8);
    rbp7 = rax6;
    rax8 = fun_902(0xd6d80, 8);
    *reinterpret_cast<int32_t*>(&rdi9) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi9) + 4) = reinterpret_cast<int32_t>(free);
    __asm__("movdqa xmm1, [rip+0x0]");
    __asm__("pcmpeqd xmm2, xmm2");
    __asm__("movdqa xmm3, [rip+0x0]");
    __asm__("movdqa xmm4, [rip+0x0]");
    __asm__("movapd xmm5, [rip+0x0]");
    __asm__("movdqa xmm0, [rip+0x0]");
    *reinterpret_cast<int32_t*>(&rcx10) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx10) + 4) = reinterpret_cast<int32_t>(free);
    do {
        __asm__("movd xmm6, ecx");
        __asm__("pshufd xmm6, xmm6, 0x50");
        *reinterpret_cast<int32_t*>(&rdx11) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx11) + 4) = reinterpret_cast<int32_t>(free);
        __asm__("movdqa xmm7, xmm1");
        do {
            __asm__("movdqa xmm8, xmm7");
            __asm__("pmuludq xmm8, xmm6");
            __asm__("pshufd xmm8, xmm8, 0xe8");
            __asm__("pshufd xmm9, xmm6, 0xf5");
            __asm__("pshufd xmm10, xmm7, 0xf5");
            __asm__("pmuludq xmm10, xmm9");
            __asm__("pshufd xmm9, xmm10, 0xe8");
            __asm__("punpckldq xmm8, xmm9");
            __asm__("psubd xmm8, xmm2");
            __asm__("movdqa xmm9, xmm8");
            __asm__("pmuludq xmm9, xmm3");
            __asm__("pshufd xmm9, xmm9, 0xed");
            __asm__("pshufd xmm10, xmm8, 0xf5");
            __asm__("pmuludq xmm10, xmm3");
            __asm__("pshufd xmm10, xmm10, 0xed");
            __asm__("pxor xmm11, xmm11");
            __asm__("pcmpgtd xmm11, xmm8");
            __asm__("pand xmm11, xmm3");
            __asm__("punpckldq xmm9, xmm10");
            __asm__("psubd xmm9, xmm11");
            __asm__("movdqa xmm10, xmm9");
            __asm__("psrad xmm9, 0x8");
            __asm__("psrld xmm10, 0x1f");
            __asm__("paddd xmm9, xmm10");
            __asm__("pshufd xmm10, xmm9, 0xf5");
            __asm__("pmuludq xmm9, xmm4");
            __asm__("pmuludq xmm10, xmm4");
            __asm__("punpckldq xmm9, xmm10");
            __asm__("psubd xmm8, xmm9");
            __asm__("cvtdq2pd xmm8, xmm8");
            __asm__("divpd xmm8, xmm5");
            __asm__("movupd [rsi+rdx*8], xmm8");
            rdx11 = rdx11 + 2;
            __asm__("paddd xmm7, xmm0");
        } while (rdx11 != 0x3e8);
        ++rcx10;
    } while (rcx10 != 0x320);
    __asm__("movdqa xmm1, [rip+0x0]");
    *reinterpret_cast<int32_t*>(&rcx12) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx12) + 4) = reinterpret_cast<int32_t>(free);
    __asm__("pcmpeqd xmm2, xmm2");
    __asm__("movdqa xmm3, [rip+0x0]");
    __asm__("movdqa xmm4, [rip+0x0]");
    __asm__("movapd xmm5, [rip+0x0]");
    __asm__("movdqa xmm6, [rip+0x0]");
    do {
        __asm__("movd xmm7, edi");
        __asm__("pshufd xmm7, xmm7, 0x50");
        *reinterpret_cast<int32_t*>(&rdx13) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx13) + 4) = reinterpret_cast<int32_t>(free);
        __asm__("movdqa xmm8, xmm1");
        do {
            __asm__("pshufd xmm9, xmm8, 0xe8");
            __asm__("psubd xmm9, xmm2");
            __asm__("pshufd xmm10, xmm9, 0x55");
            __asm__("pmuludq xmm9, xmm7");
            __asm__("pshufd xmm11, xmm7, 0xf5");
            __asm__("pshufd xmm9, xmm9, 0xe8");
            __asm__("pmuludq xmm11, xmm10");
            __asm__("pshufd xmm10, xmm11, 0xe8");
            __asm__("punpckldq xmm9, xmm10");
            __asm__("paddd xmm9, xmm0");
            __asm__("pxor xmm10, xmm10");
            __asm__("pcmpgtd xmm10, xmm9");
            __asm__("pand xmm10, xmm3");
            __asm__("paddd xmm10, xmm9");
            __asm__("movdqa xmm11, xmm9");
            __asm__("pmuludq xmm11, xmm3");
            __asm__("pshufd xmm12, xmm9, 0xf5");
            __asm__("pshufd xmm11, xmm11, 0xed");
            __asm__("pmuludq xmm12, xmm3");
            __asm__("pshufd xmm12, xmm12, 0xed");
            __asm__("punpckldq xmm11, xmm12");
            __asm__("psubd xmm11, xmm10");
            __asm__("paddd xmm11, xmm9");
            __asm__("movdqa xmm10, xmm11");
            __asm__("psrad xmm11, 0x9");
            __asm__("psrld xmm10, 0x1f");
            __asm__("paddd xmm11, xmm10");
            __asm__("pshufd xmm10, xmm11, 0xf5");
            __asm__("pmuludq xmm11, xmm4");
            __asm__("pmuludq xmm10, xmm4");
            __asm__("punpckldq xmm11, xmm10");
            __asm__("psubd xmm9, xmm11");
            __asm__("cvtdq2pd xmm9, xmm9");
            __asm__("divpd xmm9, xmm5");
            __asm__("movupd [rsi+rdx*8], xmm9");
            rdx13 = rdx13 + 2;
            __asm__("paddq xmm8, xmm6");
        } while (rdx13 != 0x384);
        ++rdi9;
    } while (rdi9 != 0x3e8);
    __asm__("movdqa xmm1, [rip+0x0]");
    *reinterpret_cast<int32_t*>(&rdi14) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi14) + 4) = reinterpret_cast<int32_t>(free);
    __asm__("movdqa xmm2, [rip+0x0]");
    __asm__("movdqa xmm3, [rip+0x0]");
    __asm__("movdqa xmm4, [rip+0x0]");
    __asm__("movapd xmm5, [rip+0x0]");
    do {
        __asm__("movd xmm6, ecx");
        __asm__("pshufd xmm6, xmm6, 0x50");
        *reinterpret_cast<int32_t*>(&rdx15) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx15) + 4) = reinterpret_cast<int32_t>(free);
        __asm__("movdqa xmm7, xmm1");
        do {
            __asm__("movdqa xmm9, xmm7");
            __asm__("paddd xmm9, xmm2");
            __asm__("pshufd xmm10, xmm9, 0xf5");
            __asm__("pmuludq xmm9, xmm6");
            __asm__("pshufd xmm8, xmm9, 0xe8");
            __asm__("pshufd xmm11, xmm6, 0xf5");
            __asm__("pmuludq xmm11, xmm10");
            __asm__("pshufd xmm10, xmm11, 0xe8");
            __asm__("punpckldq xmm8, xmm10");
            __asm__("pmuludq xmm9, xmm3");
            __asm__("pshufd xmm9, xmm9, 0xed");
            __asm__("pmuludq xmm11, xmm3");
            __asm__("pshufd xmm10, xmm11, 0xed");
            __asm__("pxor xmm11, xmm11");
            __asm__("pcmpgtd xmm11, xmm8");
            __asm__("pand xmm11, xmm3");
            __asm__("punpckldq xmm9, xmm10");
            __asm__("psubd xmm9, xmm11");
            __asm__("movdqa xmm10, xmm9");
            __asm__("psrad xmm9, 0x9");
            __asm__("psrld xmm10, 0x1f");
            __asm__("paddd xmm9, xmm10");
            __asm__("pshufd xmm10, xmm9, 0xf5");
            __asm__("pmuludq xmm9, xmm4");
            __asm__("pmuludq xmm10, xmm4");
            __asm__("punpckldq xmm9, xmm10");
            __asm__("psubd xmm8, xmm9");
            __asm__("cvtdq2pd xmm8, xmm8");
            __asm__("divpd xmm8, xmm5");
            __asm__("movupd [rsi+rdx*8], xmm8");
            rdx15 = rdx15 + 2;
            __asm__("paddd xmm7, xmm0");
        } while (rdx15 != 0x4b0);
        ++rcx12;
    } while (rcx12 != 0x384);
    __asm__("movdqa xmm1, [rip+0x0]");
    *reinterpret_cast<int32_t*>(&rcx16) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx16) + 4) = reinterpret_cast<int32_t>(free);
    __asm__("movdqa xmm2, [rip+0x0]");
    __asm__("movdqa xmm3, [rip+0x0]");
    __asm__("movapd xmm4, [rip+0x0]");
    do {
        __asm__("movd xmm5, edi");
        __asm__("pshufd xmm5, xmm5, 0x50");
        *reinterpret_cast<int32_t*>(&rdx17) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx17) + 4) = reinterpret_cast<int32_t>(free);
        __asm__("movdqa xmm6, xmm1");
        do {
            __asm__("paddd xmm6, xmm0");
            __asm__("movdqa xmm7, xmm6");
            __asm__("pmuludq xmm7, xmm5");
            __asm__("pshufd xmm8, xmm6, 0xf5");
            __asm__("pshufd xmm9, xmm5, 0xf5");
            __asm__("pshufd xmm7, xmm7, 0xe8");
            __asm__("pmuludq xmm9, xmm8");
            __asm__("pshufd xmm8, xmm9, 0xe8");
            __asm__("punpckldq xmm7, xmm8");
            __asm__("paddd xmm7, xmm0");
            __asm__("movdqa xmm8, xmm7");
            __asm__("pmuludq xmm8, xmm2");
            __asm__("pshufd xmm9, xmm7, 0xf5");
            __asm__("pshufd xmm8, xmm8, 0xed");
            __asm__("pmuludq xmm9, xmm2");
            __asm__("pshufd xmm9, xmm9, 0xed");
            __asm__("pxor xmm10, xmm10");
            __asm__("punpckldq xmm8, xmm9");
            __asm__("pcmpgtd xmm10, xmm7");
            __asm__("pand xmm10, xmm2");
            __asm__("psubd xmm8, xmm10");
            __asm__("movdqa xmm9, xmm8");
            __asm__("psrld xmm9, 0x1f");
            __asm__("psrad xmm8, 0x6");
            __asm__("paddd xmm8, xmm9");
            __asm__("pshufd xmm9, xmm8, 0xf5");
            __asm__("pmuludq xmm8, xmm3");
            __asm__("pmuludq xmm9, xmm3");
            __asm__("punpckldq xmm8, xmm9");
            __asm__("psubd xmm7, xmm8");
            __asm__("cvtdq2pd xmm7, xmm7");
            __asm__("divpd xmm7, xmm4");
            __asm__("movupd [rsi+rdx*8], xmm7");
            rdx17 = rdx17 + 2;
        } while (rdx17 != 0x44c);
        ++rdi14;
    } while (rdi14 != 0x4b0);
    *reinterpret_cast<int32_t*>(&rdx18) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx18) + 4) = reinterpret_cast<int32_t>(free);
    do {
        *reinterpret_cast<int32_t*>(&r10_19) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_19) + 4) = reinterpret_cast<int32_t>(free);
        do {
            rdi20 = rbx21 + rcx16 * 0x708;
            rsi22 = reinterpret_cast<struct s142*>(rdi20 + r10_19 * 2);
            rdi20[r10_19 * 2] = reinterpret_cast<int32_t>(free);
            __asm__("pxor xmm0, xmm0");
            *reinterpret_cast<int32_t*>(&rdi23) = reinterpret_cast<int32_t>(free);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi23) + 4) = reinterpret_cast<int32_t>(free);
            do {
                rdi23->f0 = rsi22->f0;
                rdi24 = reinterpret_cast<struct s144*>(&rdi23->f4);
                rsi25 = reinterpret_cast<struct s145*>(&rsi22->f4);
                __asm__("mulsd xmm1, [r9+r10*8]");
                __asm__("addsd xmm1, xmm0");
                rdi24->f0 = rsi25->f0;
                rdi26 = reinterpret_cast<struct s146*>(&rdi24->f4);
                rsi27 = reinterpret_cast<struct s147*>(&rsi25->f4);
                rdi26->f0 = rsi27->f0;
                rdi28 = &rdi26->f4;
                rsi29 = reinterpret_cast<struct s148*>(&rsi27->f4);
                __asm__("mulsd xmm0, [r8+r10*8]");
                __asm__("addsd xmm0, xmm1");
                *rdi28 = rsi29->f0;
                rsi22 = reinterpret_cast<struct s142*>(&rsi29->f4);
                rdi23 = reinterpret_cast<struct s143*>(reinterpret_cast<int64_t>(rdi28 + 1) + 2);
            } while (!reinterpret_cast<int1_t>(rdi23 == 0x3e8));
            ++r10_19;
        } while (r10_19 != 0x384);
        ++rcx16;
    } while (rcx16 != 0x320);
    *reinterpret_cast<int32_t*>(&r10_30) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_30) + 4) = reinterpret_cast<int32_t>(free);
    do {
        *reinterpret_cast<int32_t*>(&rcx31) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx31) + 4) = reinterpret_cast<int32_t>(free);
        do {
            rdi32 = r13_33 + rdx18 * 0x898;
            rsi34 = reinterpret_cast<struct s149*>(rdi32 + rcx31 * 2);
            rdi32[rcx31 * 2] = reinterpret_cast<int32_t>(free);
            __asm__("xorpd xmm0, xmm0");
            *reinterpret_cast<int32_t*>(&rdi35) = reinterpret_cast<int32_t>(free);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi35) + 4) = reinterpret_cast<int32_t>(free);
            do {
                rdi35->f0 = rsi34->f0;
                rdi36 = reinterpret_cast<struct s151*>(&rdi35->f4);
                rsi37 = reinterpret_cast<struct s152*>(&rsi34->f4);
                __asm__("mulsd xmm1, [r9+rcx*8]");
                __asm__("addsd xmm1, xmm0");
                rdi36->f0 = rsi37->f0;
                rdi38 = reinterpret_cast<struct s153*>(&rdi36->f4);
                rsi39 = reinterpret_cast<struct s154*>(&rsi37->f4);
                rdi38->f0 = rsi39->f0;
                rdi40 = &rdi38->f4;
                rsi41 = reinterpret_cast<struct s155*>(&rsi39->f4);
                __asm__("mulsd xmm0, [r8+rcx*8]");
                __asm__("addsd xmm0, xmm1");
                *rdi40 = rsi41->f0;
                rsi34 = reinterpret_cast<struct s149*>(&rsi41->f4);
                rdi35 = reinterpret_cast<struct s150*>(reinterpret_cast<int64_t>(rdi40 + 1) + 2);
            } while (!reinterpret_cast<int1_t>(rdi35 == 0x4b0));
            ++rcx31;
        } while (rcx31 != 0x44c);
        ++rdx18;
    } while (rdx18 != 0x384);
    do {
        *reinterpret_cast<int32_t*>(&rcx42) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx42) + 4) = reinterpret_cast<int32_t>(free);
        do {
            rsi43 = rax8 + r10_30 * 0x44c;
            rdx44 = rsi43 + rcx42;
            rsi43[rcx42] = reinterpret_cast<int64_t>(free);
            __asm__("xorpd xmm0, xmm0");
            *reinterpret_cast<int32_t*>(&rsi45) = reinterpret_cast<int32_t>(free);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi45) + 4) = reinterpret_cast<int32_t>(free);
            do {
                rdi46 = reinterpret_cast<struct s156*>(rbx47 + r10_30 * 0x708);
                rdi46->f0 = rsi45->f0;
                rdi48 = reinterpret_cast<struct s157*>(&rdi46->f4);
                rsi49 = reinterpret_cast<struct s77*>(&rsi45->f4);
                __asm__("mulsd xmm1, [r8+rcx*8]");
                __asm__("addsd xmm1, xmm0");
                rdi48->f0 = rsi49->f0;
                rsi50 = reinterpret_cast<struct s78*>(&rsi49->f4);
                rdi48->f4 = rsi50->f0;
                rsi51 = &rsi50->f4;
                __asm__("mulsd xmm0, [rdi+rcx*8]");
                __asm__("addsd xmm0, xmm1");
                r13_52[(reinterpret_cast<uint64_t>(rsi50) | 1) * 0x898] = *rsi51;
                rsi45 = reinterpret_cast<struct s30*>(reinterpret_cast<uint64_t>(rsi51 + 1) + 2);
            } while (!reinterpret_cast<int1_t>(rsi45 == 0x384));
            ++rcx42;
        } while (rcx42 != 0x44c);
        ++r10_30;
    } while (r10_30 != 0x320);
    if (*reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&v3) + 4) >= 43 && reinterpret_cast<int1_t>(**v53 == free)) {
        *reinterpret_cast<int32_t*>(&rsi45) = 0x44c;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi45) + 4) = reinterpret_cast<int32_t>(free);
        rdx44 = rax8;
        fun_fc5(0x320, 0x44c, rdx44);
    }
    fun_fcd(rbx54, rsi45, rdx44);
    fun_fd5(r14_55, rsi45, rdx44);
    fun_fdd(r12_56, rsi45, rdx44);
    fun_fe5(r13_57, rsi45, rdx44);
    fun_fed(r15_4, rsi45, rdx44);
    fun_ff5(rbp7, rsi45, rdx44);
    fun_fff(rax8, rsi45, rdx44);
    goto v58;
}

void fun_ff5(int64_t rdi, struct s30* rsi, int64_t* rdx) {
    int64_t* v4;
    int64_t v5;

    fun_fff(v4, rsi, rdx);
    goto v5;
}

struct s158 {
    int32_t f0;
    int32_t f4;
};

struct s159 {
    int32_t f0;
    int32_t f4;
};

struct s160 {
    int32_t f0;
    int32_t f4;
};

struct s161 {
    int32_t f0;
    int32_t f4;
};

struct s162 {
    int32_t f0;
    int32_t f4;
};

struct s163 {
    int32_t f0;
    int32_t f4;
};

struct s164 {
    int32_t f0;
    int32_t f4;
};

struct s165 {
    int32_t f0;
    int32_t f4;
};

struct s166 {
    int32_t f0;
    int32_t f4;
};

struct s167 {
    int32_t f0;
    int32_t f4;
};

struct s168 {
    int32_t f0;
    int32_t f4;
};

struct s169 {
    int32_t f0;
    int32_t f4;
};

struct s170 {
    int32_t f0;
    int32_t f4;
};

struct s171 {
    int32_t f0;
    int32_t f4;
};

struct s172 {
    int32_t f0;
    int32_t f4;
};

struct s173 {
    int32_t f0;
    int32_t f4;
};

int64_t fun_8f0(int64_t rdi, int64_t rsi) {
    int64_t v3;
    int64_t rbp4;
    int64_t rax5;
    int64_t* rax6;
    int64_t rdi7;
    int64_t rcx8;
    int64_t rdx9;
    int64_t rcx10;
    int64_t rdx11;
    int64_t rdi12;
    int64_t rdx13;
    int64_t rcx14;
    int64_t rdx15;
    int64_t rdx16;
    int64_t r10_17;
    int32_t* rdi18;
    int32_t* rbx19;
    struct s158* rsi20;
    struct s159* rdi21;
    struct s160* rdi22;
    struct s161* rsi23;
    struct s162* rdi24;
    struct s163* rsi25;
    int32_t* rdi26;
    struct s164* rsi27;
    int64_t r10_28;
    int64_t rcx29;
    int32_t* rdi30;
    int32_t* r13_31;
    struct s165* rsi32;
    struct s166* rdi33;
    struct s167* rdi34;
    struct s168* rsi35;
    struct s169* rdi36;
    struct s170* rsi37;
    int32_t* rdi38;
    struct s171* rsi39;
    int64_t rcx40;
    int64_t* rsi41;
    int64_t* rdx42;
    struct s30* rsi43;
    struct s172* rdi44;
    int32_t* rbx45;
    struct s173* rdi46;
    struct s77* rsi47;
    struct s78* rsi48;
    int32_t* rsi49;
    int32_t* r13_50;
    signed char** v51;
    int32_t* rbx52;
    int64_t r14_53;
    int64_t r12_54;
    int32_t* r13_55;
    int64_t r15_56;
    int64_t v57;

    v3 = reinterpret_cast<int64_t>(__return_address());
    rbp4 = rax5;
    rax6 = fun_902(0xd6d80, 8);
    *reinterpret_cast<int32_t*>(&rdi7) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi7) + 4) = reinterpret_cast<int32_t>(free);
    __asm__("movdqa xmm1, [rip+0x0]");
    __asm__("pcmpeqd xmm2, xmm2");
    __asm__("movdqa xmm3, [rip+0x0]");
    __asm__("movdqa xmm4, [rip+0x0]");
    __asm__("movapd xmm5, [rip+0x0]");
    __asm__("movdqa xmm0, [rip+0x0]");
    *reinterpret_cast<int32_t*>(&rcx8) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx8) + 4) = reinterpret_cast<int32_t>(free);
    do {
        __asm__("movd xmm6, ecx");
        __asm__("pshufd xmm6, xmm6, 0x50");
        *reinterpret_cast<int32_t*>(&rdx9) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx9) + 4) = reinterpret_cast<int32_t>(free);
        __asm__("movdqa xmm7, xmm1");
        do {
            __asm__("movdqa xmm8, xmm7");
            __asm__("pmuludq xmm8, xmm6");
            __asm__("pshufd xmm8, xmm8, 0xe8");
            __asm__("pshufd xmm9, xmm6, 0xf5");
            __asm__("pshufd xmm10, xmm7, 0xf5");
            __asm__("pmuludq xmm10, xmm9");
            __asm__("pshufd xmm9, xmm10, 0xe8");
            __asm__("punpckldq xmm8, xmm9");
            __asm__("psubd xmm8, xmm2");
            __asm__("movdqa xmm9, xmm8");
            __asm__("pmuludq xmm9, xmm3");
            __asm__("pshufd xmm9, xmm9, 0xed");
            __asm__("pshufd xmm10, xmm8, 0xf5");
            __asm__("pmuludq xmm10, xmm3");
            __asm__("pshufd xmm10, xmm10, 0xed");
            __asm__("pxor xmm11, xmm11");
            __asm__("pcmpgtd xmm11, xmm8");
            __asm__("pand xmm11, xmm3");
            __asm__("punpckldq xmm9, xmm10");
            __asm__("psubd xmm9, xmm11");
            __asm__("movdqa xmm10, xmm9");
            __asm__("psrad xmm9, 0x8");
            __asm__("psrld xmm10, 0x1f");
            __asm__("paddd xmm9, xmm10");
            __asm__("pshufd xmm10, xmm9, 0xf5");
            __asm__("pmuludq xmm9, xmm4");
            __asm__("pmuludq xmm10, xmm4");
            __asm__("punpckldq xmm9, xmm10");
            __asm__("psubd xmm8, xmm9");
            __asm__("cvtdq2pd xmm8, xmm8");
            __asm__("divpd xmm8, xmm5");
            __asm__("movupd [rsi+rdx*8], xmm8");
            rdx9 = rdx9 + 2;
            __asm__("paddd xmm7, xmm0");
        } while (rdx9 != 0x3e8);
        ++rcx8;
    } while (rcx8 != 0x320);
    __asm__("movdqa xmm1, [rip+0x0]");
    *reinterpret_cast<int32_t*>(&rcx10) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx10) + 4) = reinterpret_cast<int32_t>(free);
    __asm__("pcmpeqd xmm2, xmm2");
    __asm__("movdqa xmm3, [rip+0x0]");
    __asm__("movdqa xmm4, [rip+0x0]");
    __asm__("movapd xmm5, [rip+0x0]");
    __asm__("movdqa xmm6, [rip+0x0]");
    do {
        __asm__("movd xmm7, edi");
        __asm__("pshufd xmm7, xmm7, 0x50");
        *reinterpret_cast<int32_t*>(&rdx11) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx11) + 4) = reinterpret_cast<int32_t>(free);
        __asm__("movdqa xmm8, xmm1");
        do {
            __asm__("pshufd xmm9, xmm8, 0xe8");
            __asm__("psubd xmm9, xmm2");
            __asm__("pshufd xmm10, xmm9, 0x55");
            __asm__("pmuludq xmm9, xmm7");
            __asm__("pshufd xmm11, xmm7, 0xf5");
            __asm__("pshufd xmm9, xmm9, 0xe8");
            __asm__("pmuludq xmm11, xmm10");
            __asm__("pshufd xmm10, xmm11, 0xe8");
            __asm__("punpckldq xmm9, xmm10");
            __asm__("paddd xmm9, xmm0");
            __asm__("pxor xmm10, xmm10");
            __asm__("pcmpgtd xmm10, xmm9");
            __asm__("pand xmm10, xmm3");
            __asm__("paddd xmm10, xmm9");
            __asm__("movdqa xmm11, xmm9");
            __asm__("pmuludq xmm11, xmm3");
            __asm__("pshufd xmm12, xmm9, 0xf5");
            __asm__("pshufd xmm11, xmm11, 0xed");
            __asm__("pmuludq xmm12, xmm3");
            __asm__("pshufd xmm12, xmm12, 0xed");
            __asm__("punpckldq xmm11, xmm12");
            __asm__("psubd xmm11, xmm10");
            __asm__("paddd xmm11, xmm9");
            __asm__("movdqa xmm10, xmm11");
            __asm__("psrad xmm11, 0x9");
            __asm__("psrld xmm10, 0x1f");
            __asm__("paddd xmm11, xmm10");
            __asm__("pshufd xmm10, xmm11, 0xf5");
            __asm__("pmuludq xmm11, xmm4");
            __asm__("pmuludq xmm10, xmm4");
            __asm__("punpckldq xmm11, xmm10");
            __asm__("psubd xmm9, xmm11");
            __asm__("cvtdq2pd xmm9, xmm9");
            __asm__("divpd xmm9, xmm5");
            __asm__("movupd [rsi+rdx*8], xmm9");
            rdx11 = rdx11 + 2;
            __asm__("paddq xmm8, xmm6");
        } while (rdx11 != 0x384);
        ++rdi7;
    } while (rdi7 != 0x3e8);
    __asm__("movdqa xmm1, [rip+0x0]");
    *reinterpret_cast<int32_t*>(&rdi12) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi12) + 4) = reinterpret_cast<int32_t>(free);
    __asm__("movdqa xmm2, [rip+0x0]");
    __asm__("movdqa xmm3, [rip+0x0]");
    __asm__("movdqa xmm4, [rip+0x0]");
    __asm__("movapd xmm5, [rip+0x0]");
    do {
        __asm__("movd xmm6, ecx");
        __asm__("pshufd xmm6, xmm6, 0x50");
        *reinterpret_cast<int32_t*>(&rdx13) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx13) + 4) = reinterpret_cast<int32_t>(free);
        __asm__("movdqa xmm7, xmm1");
        do {
            __asm__("movdqa xmm9, xmm7");
            __asm__("paddd xmm9, xmm2");
            __asm__("pshufd xmm10, xmm9, 0xf5");
            __asm__("pmuludq xmm9, xmm6");
            __asm__("pshufd xmm8, xmm9, 0xe8");
            __asm__("pshufd xmm11, xmm6, 0xf5");
            __asm__("pmuludq xmm11, xmm10");
            __asm__("pshufd xmm10, xmm11, 0xe8");
            __asm__("punpckldq xmm8, xmm10");
            __asm__("pmuludq xmm9, xmm3");
            __asm__("pshufd xmm9, xmm9, 0xed");
            __asm__("pmuludq xmm11, xmm3");
            __asm__("pshufd xmm10, xmm11, 0xed");
            __asm__("pxor xmm11, xmm11");
            __asm__("pcmpgtd xmm11, xmm8");
            __asm__("pand xmm11, xmm3");
            __asm__("punpckldq xmm9, xmm10");
            __asm__("psubd xmm9, xmm11");
            __asm__("movdqa xmm10, xmm9");
            __asm__("psrad xmm9, 0x9");
            __asm__("psrld xmm10, 0x1f");
            __asm__("paddd xmm9, xmm10");
            __asm__("pshufd xmm10, xmm9, 0xf5");
            __asm__("pmuludq xmm9, xmm4");
            __asm__("pmuludq xmm10, xmm4");
            __asm__("punpckldq xmm9, xmm10");
            __asm__("psubd xmm8, xmm9");
            __asm__("cvtdq2pd xmm8, xmm8");
            __asm__("divpd xmm8, xmm5");
            __asm__("movupd [rsi+rdx*8], xmm8");
            rdx13 = rdx13 + 2;
            __asm__("paddd xmm7, xmm0");
        } while (rdx13 != 0x4b0);
        ++rcx10;
    } while (rcx10 != 0x384);
    __asm__("movdqa xmm1, [rip+0x0]");
    *reinterpret_cast<int32_t*>(&rcx14) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx14) + 4) = reinterpret_cast<int32_t>(free);
    __asm__("movdqa xmm2, [rip+0x0]");
    __asm__("movdqa xmm3, [rip+0x0]");
    __asm__("movapd xmm4, [rip+0x0]");
    do {
        __asm__("movd xmm5, edi");
        __asm__("pshufd xmm5, xmm5, 0x50");
        *reinterpret_cast<int32_t*>(&rdx15) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx15) + 4) = reinterpret_cast<int32_t>(free);
        __asm__("movdqa xmm6, xmm1");
        do {
            __asm__("paddd xmm6, xmm0");
            __asm__("movdqa xmm7, xmm6");
            __asm__("pmuludq xmm7, xmm5");
            __asm__("pshufd xmm8, xmm6, 0xf5");
            __asm__("pshufd xmm9, xmm5, 0xf5");
            __asm__("pshufd xmm7, xmm7, 0xe8");
            __asm__("pmuludq xmm9, xmm8");
            __asm__("pshufd xmm8, xmm9, 0xe8");
            __asm__("punpckldq xmm7, xmm8");
            __asm__("paddd xmm7, xmm0");
            __asm__("movdqa xmm8, xmm7");
            __asm__("pmuludq xmm8, xmm2");
            __asm__("pshufd xmm9, xmm7, 0xf5");
            __asm__("pshufd xmm8, xmm8, 0xed");
            __asm__("pmuludq xmm9, xmm2");
            __asm__("pshufd xmm9, xmm9, 0xed");
            __asm__("pxor xmm10, xmm10");
            __asm__("punpckldq xmm8, xmm9");
            __asm__("pcmpgtd xmm10, xmm7");
            __asm__("pand xmm10, xmm2");
            __asm__("psubd xmm8, xmm10");
            __asm__("movdqa xmm9, xmm8");
            __asm__("psrld xmm9, 0x1f");
            __asm__("psrad xmm8, 0x6");
            __asm__("paddd xmm8, xmm9");
            __asm__("pshufd xmm9, xmm8, 0xf5");
            __asm__("pmuludq xmm8, xmm3");
            __asm__("pmuludq xmm9, xmm3");
            __asm__("punpckldq xmm8, xmm9");
            __asm__("psubd xmm7, xmm8");
            __asm__("cvtdq2pd xmm7, xmm7");
            __asm__("divpd xmm7, xmm4");
            __asm__("movupd [rsi+rdx*8], xmm7");
            rdx15 = rdx15 + 2;
        } while (rdx15 != 0x44c);
        ++rdi12;
    } while (rdi12 != 0x4b0);
    *reinterpret_cast<int32_t*>(&rdx16) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx16) + 4) = reinterpret_cast<int32_t>(free);
    do {
        *reinterpret_cast<int32_t*>(&r10_17) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_17) + 4) = reinterpret_cast<int32_t>(free);
        do {
            rdi18 = rbx19 + rcx14 * 0x708;
            rsi20 = reinterpret_cast<struct s158*>(rdi18 + r10_17 * 2);
            rdi18[r10_17 * 2] = reinterpret_cast<int32_t>(free);
            __asm__("pxor xmm0, xmm0");
            *reinterpret_cast<int32_t*>(&rdi21) = reinterpret_cast<int32_t>(free);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi21) + 4) = reinterpret_cast<int32_t>(free);
            do {
                rdi21->f0 = rsi20->f0;
                rdi22 = reinterpret_cast<struct s160*>(&rdi21->f4);
                rsi23 = reinterpret_cast<struct s161*>(&rsi20->f4);
                __asm__("mulsd xmm1, [r9+r10*8]");
                __asm__("addsd xmm1, xmm0");
                rdi22->f0 = rsi23->f0;
                rdi24 = reinterpret_cast<struct s162*>(&rdi22->f4);
                rsi25 = reinterpret_cast<struct s163*>(&rsi23->f4);
                rdi24->f0 = rsi25->f0;
                rdi26 = &rdi24->f4;
                rsi27 = reinterpret_cast<struct s164*>(&rsi25->f4);
                __asm__("mulsd xmm0, [r8+r10*8]");
                __asm__("addsd xmm0, xmm1");
                *rdi26 = rsi27->f0;
                rsi20 = reinterpret_cast<struct s158*>(&rsi27->f4);
                rdi21 = reinterpret_cast<struct s159*>(reinterpret_cast<int64_t>(rdi26 + 1) + 2);
            } while (!reinterpret_cast<int1_t>(rdi21 == 0x3e8));
            ++r10_17;
        } while (r10_17 != 0x384);
        ++rcx14;
    } while (rcx14 != 0x320);
    *reinterpret_cast<int32_t*>(&r10_28) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_28) + 4) = reinterpret_cast<int32_t>(free);
    do {
        *reinterpret_cast<int32_t*>(&rcx29) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx29) + 4) = reinterpret_cast<int32_t>(free);
        do {
            rdi30 = r13_31 + rdx16 * 0x898;
            rsi32 = reinterpret_cast<struct s165*>(rdi30 + rcx29 * 2);
            rdi30[rcx29 * 2] = reinterpret_cast<int32_t>(free);
            __asm__("xorpd xmm0, xmm0");
            *reinterpret_cast<int32_t*>(&rdi33) = reinterpret_cast<int32_t>(free);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi33) + 4) = reinterpret_cast<int32_t>(free);
            do {
                rdi33->f0 = rsi32->f0;
                rdi34 = reinterpret_cast<struct s167*>(&rdi33->f4);
                rsi35 = reinterpret_cast<struct s168*>(&rsi32->f4);
                __asm__("mulsd xmm1, [r9+rcx*8]");
                __asm__("addsd xmm1, xmm0");
                rdi34->f0 = rsi35->f0;
                rdi36 = reinterpret_cast<struct s169*>(&rdi34->f4);
                rsi37 = reinterpret_cast<struct s170*>(&rsi35->f4);
                rdi36->f0 = rsi37->f0;
                rdi38 = &rdi36->f4;
                rsi39 = reinterpret_cast<struct s171*>(&rsi37->f4);
                __asm__("mulsd xmm0, [r8+rcx*8]");
                __asm__("addsd xmm0, xmm1");
                *rdi38 = rsi39->f0;
                rsi32 = reinterpret_cast<struct s165*>(&rsi39->f4);
                rdi33 = reinterpret_cast<struct s166*>(reinterpret_cast<int64_t>(rdi38 + 1) + 2);
            } while (!reinterpret_cast<int1_t>(rdi33 == 0x4b0));
            ++rcx29;
        } while (rcx29 != 0x44c);
        ++rdx16;
    } while (rdx16 != 0x384);
    do {
        *reinterpret_cast<int32_t*>(&rcx40) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx40) + 4) = reinterpret_cast<int32_t>(free);
        do {
            rsi41 = rax6 + r10_28 * 0x44c;
            rdx42 = rsi41 + rcx40;
            rsi41[rcx40] = reinterpret_cast<int64_t>(free);
            __asm__("xorpd xmm0, xmm0");
            *reinterpret_cast<int32_t*>(&rsi43) = reinterpret_cast<int32_t>(free);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi43) + 4) = reinterpret_cast<int32_t>(free);
            do {
                rdi44 = reinterpret_cast<struct s172*>(rbx45 + r10_28 * 0x708);
                rdi44->f0 = rsi43->f0;
                rdi46 = reinterpret_cast<struct s173*>(&rdi44->f4);
                rsi47 = reinterpret_cast<struct s77*>(&rsi43->f4);
                __asm__("mulsd xmm1, [r8+rcx*8]");
                __asm__("addsd xmm1, xmm0");
                rdi46->f0 = rsi47->f0;
                rsi48 = reinterpret_cast<struct s78*>(&rsi47->f4);
                rdi46->f4 = rsi48->f0;
                rsi49 = &rsi48->f4;
                __asm__("mulsd xmm0, [rdi+rcx*8]");
                __asm__("addsd xmm0, xmm1");
                r13_50[(reinterpret_cast<uint64_t>(rsi48) | 1) * 0x898] = *rsi49;
                rsi43 = reinterpret_cast<struct s30*>(reinterpret_cast<uint64_t>(rsi49 + 1) + 2);
            } while (!reinterpret_cast<int1_t>(rsi43 == 0x384));
            ++rcx40;
        } while (rcx40 != 0x44c);
        ++r10_28;
    } while (r10_28 != 0x320);
    if (*reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&v3) + 4) >= 43 && reinterpret_cast<int1_t>(**v51 == free)) {
        *reinterpret_cast<int32_t*>(&rsi43) = 0x44c;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi43) + 4) = reinterpret_cast<int32_t>(free);
        rdx42 = rax6;
        fun_fc5(0x320, 0x44c, rdx42);
    }
    fun_fcd(rbx52, rsi43, rdx42);
    fun_fd5(r14_53, rsi43, rdx42);
    fun_fdd(r12_54, rsi43, rdx42);
    fun_fe5(r13_55, rsi43, rdx42);
    fun_fed(r15_56, rsi43, rdx42);
    fun_ff5(rbp4, rsi43, rdx42);
    fun_fff(rax6, rsi43, rdx42);
    goto v57;
}

void fun_fff(int64_t* rdi, struct s30* rsi, int64_t* rdx) {
    int64_t v4;

    goto v4;
}

struct s174 {
    int32_t f0;
    int32_t f4;
};

struct s175 {
    int32_t f0;
    int32_t f4;
};

struct s176 {
    int32_t f0;
    int32_t f4;
};

struct s177 {
    int32_t f0;
    int32_t f4;
};

struct s178 {
    int32_t f0;
    int32_t f4;
};

struct s179 {
    int32_t f0;
    int32_t f4;
};

struct s180 {
    int32_t f0;
    int32_t f4;
};

struct s181 {
    int32_t f0;
    int32_t f4;
};

struct s182 {
    int32_t f0;
    int32_t f4;
};

struct s183 {
    int32_t f0;
    int32_t f4;
};

struct s184 {
    int32_t f0;
    int32_t f4;
};

struct s185 {
    int32_t f0;
    int32_t f4;
};

struct s186 {
    int32_t f0;
    int32_t f4;
};

struct s187 {
    int32_t f0;
    int32_t f4;
};

struct s188 {
    int32_t f0;
    int32_t f4;
};

struct s189 {
    int32_t f0;
    int32_t f4;
};

int64_t* fun_902(int64_t rdi, int64_t rsi) {
    int64_t v3;
    int64_t rdi4;
    int64_t rcx5;
    int64_t rdx6;
    int64_t rcx7;
    int64_t rdx8;
    int64_t rdi9;
    int64_t rdx10;
    int64_t rcx11;
    int64_t rdx12;
    int64_t rdx13;
    int64_t r10_14;
    int32_t* rdi15;
    int32_t* rbx16;
    struct s174* rsi17;
    struct s175* rdi18;
    struct s176* rdi19;
    struct s177* rsi20;
    struct s178* rdi21;
    struct s179* rsi22;
    int32_t* rdi23;
    struct s180* rsi24;
    int64_t r10_25;
    int64_t rcx26;
    int32_t* rdi27;
    int32_t* r13_28;
    struct s181* rsi29;
    struct s182* rdi30;
    struct s183* rdi31;
    struct s184* rsi32;
    struct s185* rdi33;
    struct s186* rsi34;
    int32_t* rdi35;
    struct s187* rsi36;
    int64_t rcx37;
    int64_t* rsi38;
    int64_t* rax39;
    int64_t* rdx40;
    struct s30* rsi41;
    struct s188* rdi42;
    int32_t* rbx43;
    struct s189* rdi44;
    struct s77* rsi45;
    struct s78* rsi46;
    int32_t* rsi47;
    int32_t* r13_48;
    signed char** v49;
    int64_t* rax50;
    int32_t* rbx51;
    int64_t r14_52;
    int64_t r12_53;
    int32_t* r13_54;
    int64_t r15_55;
    int64_t rbp56;
    int64_t v57;

    v3 = reinterpret_cast<int64_t>(__return_address());
    *reinterpret_cast<int32_t*>(&rdi4) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi4) + 4) = reinterpret_cast<int32_t>(free);
    __asm__("movdqa xmm1, [rip+0x0]");
    __asm__("pcmpeqd xmm2, xmm2");
    __asm__("movdqa xmm3, [rip+0x0]");
    __asm__("movdqa xmm4, [rip+0x0]");
    __asm__("movapd xmm5, [rip+0x0]");
    __asm__("movdqa xmm0, [rip+0x0]");
    *reinterpret_cast<int32_t*>(&rcx5) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx5) + 4) = reinterpret_cast<int32_t>(free);
    do {
        __asm__("movd xmm6, ecx");
        __asm__("pshufd xmm6, xmm6, 0x50");
        *reinterpret_cast<int32_t*>(&rdx6) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx6) + 4) = reinterpret_cast<int32_t>(free);
        __asm__("movdqa xmm7, xmm1");
        do {
            __asm__("movdqa xmm8, xmm7");
            __asm__("pmuludq xmm8, xmm6");
            __asm__("pshufd xmm8, xmm8, 0xe8");
            __asm__("pshufd xmm9, xmm6, 0xf5");
            __asm__("pshufd xmm10, xmm7, 0xf5");
            __asm__("pmuludq xmm10, xmm9");
            __asm__("pshufd xmm9, xmm10, 0xe8");
            __asm__("punpckldq xmm8, xmm9");
            __asm__("psubd xmm8, xmm2");
            __asm__("movdqa xmm9, xmm8");
            __asm__("pmuludq xmm9, xmm3");
            __asm__("pshufd xmm9, xmm9, 0xed");
            __asm__("pshufd xmm10, xmm8, 0xf5");
            __asm__("pmuludq xmm10, xmm3");
            __asm__("pshufd xmm10, xmm10, 0xed");
            __asm__("pxor xmm11, xmm11");
            __asm__("pcmpgtd xmm11, xmm8");
            __asm__("pand xmm11, xmm3");
            __asm__("punpckldq xmm9, xmm10");
            __asm__("psubd xmm9, xmm11");
            __asm__("movdqa xmm10, xmm9");
            __asm__("psrad xmm9, 0x8");
            __asm__("psrld xmm10, 0x1f");
            __asm__("paddd xmm9, xmm10");
            __asm__("pshufd xmm10, xmm9, 0xf5");
            __asm__("pmuludq xmm9, xmm4");
            __asm__("pmuludq xmm10, xmm4");
            __asm__("punpckldq xmm9, xmm10");
            __asm__("psubd xmm8, xmm9");
            __asm__("cvtdq2pd xmm8, xmm8");
            __asm__("divpd xmm8, xmm5");
            __asm__("movupd [rsi+rdx*8], xmm8");
            rdx6 = rdx6 + 2;
            __asm__("paddd xmm7, xmm0");
        } while (rdx6 != 0x3e8);
        ++rcx5;
    } while (rcx5 != 0x320);
    __asm__("movdqa xmm1, [rip+0x0]");
    *reinterpret_cast<int32_t*>(&rcx7) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx7) + 4) = reinterpret_cast<int32_t>(free);
    __asm__("pcmpeqd xmm2, xmm2");
    __asm__("movdqa xmm3, [rip+0x0]");
    __asm__("movdqa xmm4, [rip+0x0]");
    __asm__("movapd xmm5, [rip+0x0]");
    __asm__("movdqa xmm6, [rip+0x0]");
    do {
        __asm__("movd xmm7, edi");
        __asm__("pshufd xmm7, xmm7, 0x50");
        *reinterpret_cast<int32_t*>(&rdx8) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx8) + 4) = reinterpret_cast<int32_t>(free);
        __asm__("movdqa xmm8, xmm1");
        do {
            __asm__("pshufd xmm9, xmm8, 0xe8");
            __asm__("psubd xmm9, xmm2");
            __asm__("pshufd xmm10, xmm9, 0x55");
            __asm__("pmuludq xmm9, xmm7");
            __asm__("pshufd xmm11, xmm7, 0xf5");
            __asm__("pshufd xmm9, xmm9, 0xe8");
            __asm__("pmuludq xmm11, xmm10");
            __asm__("pshufd xmm10, xmm11, 0xe8");
            __asm__("punpckldq xmm9, xmm10");
            __asm__("paddd xmm9, xmm0");
            __asm__("pxor xmm10, xmm10");
            __asm__("pcmpgtd xmm10, xmm9");
            __asm__("pand xmm10, xmm3");
            __asm__("paddd xmm10, xmm9");
            __asm__("movdqa xmm11, xmm9");
            __asm__("pmuludq xmm11, xmm3");
            __asm__("pshufd xmm12, xmm9, 0xf5");
            __asm__("pshufd xmm11, xmm11, 0xed");
            __asm__("pmuludq xmm12, xmm3");
            __asm__("pshufd xmm12, xmm12, 0xed");
            __asm__("punpckldq xmm11, xmm12");
            __asm__("psubd xmm11, xmm10");
            __asm__("paddd xmm11, xmm9");
            __asm__("movdqa xmm10, xmm11");
            __asm__("psrad xmm11, 0x9");
            __asm__("psrld xmm10, 0x1f");
            __asm__("paddd xmm11, xmm10");
            __asm__("pshufd xmm10, xmm11, 0xf5");
            __asm__("pmuludq xmm11, xmm4");
            __asm__("pmuludq xmm10, xmm4");
            __asm__("punpckldq xmm11, xmm10");
            __asm__("psubd xmm9, xmm11");
            __asm__("cvtdq2pd xmm9, xmm9");
            __asm__("divpd xmm9, xmm5");
            __asm__("movupd [rsi+rdx*8], xmm9");
            rdx8 = rdx8 + 2;
            __asm__("paddq xmm8, xmm6");
        } while (rdx8 != 0x384);
        ++rdi4;
    } while (rdi4 != 0x3e8);
    __asm__("movdqa xmm1, [rip+0x0]");
    *reinterpret_cast<int32_t*>(&rdi9) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi9) + 4) = reinterpret_cast<int32_t>(free);
    __asm__("movdqa xmm2, [rip+0x0]");
    __asm__("movdqa xmm3, [rip+0x0]");
    __asm__("movdqa xmm4, [rip+0x0]");
    __asm__("movapd xmm5, [rip+0x0]");
    do {
        __asm__("movd xmm6, ecx");
        __asm__("pshufd xmm6, xmm6, 0x50");
        *reinterpret_cast<int32_t*>(&rdx10) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx10) + 4) = reinterpret_cast<int32_t>(free);
        __asm__("movdqa xmm7, xmm1");
        do {
            __asm__("movdqa xmm9, xmm7");
            __asm__("paddd xmm9, xmm2");
            __asm__("pshufd xmm10, xmm9, 0xf5");
            __asm__("pmuludq xmm9, xmm6");
            __asm__("pshufd xmm8, xmm9, 0xe8");
            __asm__("pshufd xmm11, xmm6, 0xf5");
            __asm__("pmuludq xmm11, xmm10");
            __asm__("pshufd xmm10, xmm11, 0xe8");
            __asm__("punpckldq xmm8, xmm10");
            __asm__("pmuludq xmm9, xmm3");
            __asm__("pshufd xmm9, xmm9, 0xed");
            __asm__("pmuludq xmm11, xmm3");
            __asm__("pshufd xmm10, xmm11, 0xed");
            __asm__("pxor xmm11, xmm11");
            __asm__("pcmpgtd xmm11, xmm8");
            __asm__("pand xmm11, xmm3");
            __asm__("punpckldq xmm9, xmm10");
            __asm__("psubd xmm9, xmm11");
            __asm__("movdqa xmm10, xmm9");
            __asm__("psrad xmm9, 0x9");
            __asm__("psrld xmm10, 0x1f");
            __asm__("paddd xmm9, xmm10");
            __asm__("pshufd xmm10, xmm9, 0xf5");
            __asm__("pmuludq xmm9, xmm4");
            __asm__("pmuludq xmm10, xmm4");
            __asm__("punpckldq xmm9, xmm10");
            __asm__("psubd xmm8, xmm9");
            __asm__("cvtdq2pd xmm8, xmm8");
            __asm__("divpd xmm8, xmm5");
            __asm__("movupd [rsi+rdx*8], xmm8");
            rdx10 = rdx10 + 2;
            __asm__("paddd xmm7, xmm0");
        } while (rdx10 != 0x4b0);
        ++rcx7;
    } while (rcx7 != 0x384);
    __asm__("movdqa xmm1, [rip+0x0]");
    *reinterpret_cast<int32_t*>(&rcx11) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx11) + 4) = reinterpret_cast<int32_t>(free);
    __asm__("movdqa xmm2, [rip+0x0]");
    __asm__("movdqa xmm3, [rip+0x0]");
    __asm__("movapd xmm4, [rip+0x0]");
    do {
        __asm__("movd xmm5, edi");
        __asm__("pshufd xmm5, xmm5, 0x50");
        *reinterpret_cast<int32_t*>(&rdx12) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx12) + 4) = reinterpret_cast<int32_t>(free);
        __asm__("movdqa xmm6, xmm1");
        do {
            __asm__("paddd xmm6, xmm0");
            __asm__("movdqa xmm7, xmm6");
            __asm__("pmuludq xmm7, xmm5");
            __asm__("pshufd xmm8, xmm6, 0xf5");
            __asm__("pshufd xmm9, xmm5, 0xf5");
            __asm__("pshufd xmm7, xmm7, 0xe8");
            __asm__("pmuludq xmm9, xmm8");
            __asm__("pshufd xmm8, xmm9, 0xe8");
            __asm__("punpckldq xmm7, xmm8");
            __asm__("paddd xmm7, xmm0");
            __asm__("movdqa xmm8, xmm7");
            __asm__("pmuludq xmm8, xmm2");
            __asm__("pshufd xmm9, xmm7, 0xf5");
            __asm__("pshufd xmm8, xmm8, 0xed");
            __asm__("pmuludq xmm9, xmm2");
            __asm__("pshufd xmm9, xmm9, 0xed");
            __asm__("pxor xmm10, xmm10");
            __asm__("punpckldq xmm8, xmm9");
            __asm__("pcmpgtd xmm10, xmm7");
            __asm__("pand xmm10, xmm2");
            __asm__("psubd xmm8, xmm10");
            __asm__("movdqa xmm9, xmm8");
            __asm__("psrld xmm9, 0x1f");
            __asm__("psrad xmm8, 0x6");
            __asm__("paddd xmm8, xmm9");
            __asm__("pshufd xmm9, xmm8, 0xf5");
            __asm__("pmuludq xmm8, xmm3");
            __asm__("pmuludq xmm9, xmm3");
            __asm__("punpckldq xmm8, xmm9");
            __asm__("psubd xmm7, xmm8");
            __asm__("cvtdq2pd xmm7, xmm7");
            __asm__("divpd xmm7, xmm4");
            __asm__("movupd [rsi+rdx*8], xmm7");
            rdx12 = rdx12 + 2;
        } while (rdx12 != 0x44c);
        ++rdi9;
    } while (rdi9 != 0x4b0);
    *reinterpret_cast<int32_t*>(&rdx13) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx13) + 4) = reinterpret_cast<int32_t>(free);
    do {
        *reinterpret_cast<int32_t*>(&r10_14) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_14) + 4) = reinterpret_cast<int32_t>(free);
        do {
            rdi15 = rbx16 + rcx11 * 0x708;
            rsi17 = reinterpret_cast<struct s174*>(rdi15 + r10_14 * 2);
            rdi15[r10_14 * 2] = reinterpret_cast<int32_t>(free);
            __asm__("pxor xmm0, xmm0");
            *reinterpret_cast<int32_t*>(&rdi18) = reinterpret_cast<int32_t>(free);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi18) + 4) = reinterpret_cast<int32_t>(free);
            do {
                rdi18->f0 = rsi17->f0;
                rdi19 = reinterpret_cast<struct s176*>(&rdi18->f4);
                rsi20 = reinterpret_cast<struct s177*>(&rsi17->f4);
                __asm__("mulsd xmm1, [r9+r10*8]");
                __asm__("addsd xmm1, xmm0");
                rdi19->f0 = rsi20->f0;
                rdi21 = reinterpret_cast<struct s178*>(&rdi19->f4);
                rsi22 = reinterpret_cast<struct s179*>(&rsi20->f4);
                rdi21->f0 = rsi22->f0;
                rdi23 = &rdi21->f4;
                rsi24 = reinterpret_cast<struct s180*>(&rsi22->f4);
                __asm__("mulsd xmm0, [r8+r10*8]");
                __asm__("addsd xmm0, xmm1");
                *rdi23 = rsi24->f0;
                rsi17 = reinterpret_cast<struct s174*>(&rsi24->f4);
                rdi18 = reinterpret_cast<struct s175*>(reinterpret_cast<int64_t>(rdi23 + 1) + 2);
            } while (!reinterpret_cast<int1_t>(rdi18 == 0x3e8));
            ++r10_14;
        } while (r10_14 != 0x384);
        ++rcx11;
    } while (rcx11 != 0x320);
    *reinterpret_cast<int32_t*>(&r10_25) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_25) + 4) = reinterpret_cast<int32_t>(free);
    do {
        *reinterpret_cast<int32_t*>(&rcx26) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx26) + 4) = reinterpret_cast<int32_t>(free);
        do {
            rdi27 = r13_28 + rdx13 * 0x898;
            rsi29 = reinterpret_cast<struct s181*>(rdi27 + rcx26 * 2);
            rdi27[rcx26 * 2] = reinterpret_cast<int32_t>(free);
            __asm__("xorpd xmm0, xmm0");
            *reinterpret_cast<int32_t*>(&rdi30) = reinterpret_cast<int32_t>(free);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi30) + 4) = reinterpret_cast<int32_t>(free);
            do {
                rdi30->f0 = rsi29->f0;
                rdi31 = reinterpret_cast<struct s183*>(&rdi30->f4);
                rsi32 = reinterpret_cast<struct s184*>(&rsi29->f4);
                __asm__("mulsd xmm1, [r9+rcx*8]");
                __asm__("addsd xmm1, xmm0");
                rdi31->f0 = rsi32->f0;
                rdi33 = reinterpret_cast<struct s185*>(&rdi31->f4);
                rsi34 = reinterpret_cast<struct s186*>(&rsi32->f4);
                rdi33->f0 = rsi34->f0;
                rdi35 = &rdi33->f4;
                rsi36 = reinterpret_cast<struct s187*>(&rsi34->f4);
                __asm__("mulsd xmm0, [r8+rcx*8]");
                __asm__("addsd xmm0, xmm1");
                *rdi35 = rsi36->f0;
                rsi29 = reinterpret_cast<struct s181*>(&rsi36->f4);
                rdi30 = reinterpret_cast<struct s182*>(reinterpret_cast<int64_t>(rdi35 + 1) + 2);
            } while (!reinterpret_cast<int1_t>(rdi30 == 0x4b0));
            ++rcx26;
        } while (rcx26 != 0x44c);
        ++rdx13;
    } while (rdx13 != 0x384);
    do {
        *reinterpret_cast<int32_t*>(&rcx37) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx37) + 4) = reinterpret_cast<int32_t>(free);
        do {
            rsi38 = rax39 + r10_25 * 0x44c;
            rdx40 = rsi38 + rcx37;
            rsi38[rcx37] = reinterpret_cast<int64_t>(free);
            __asm__("xorpd xmm0, xmm0");
            *reinterpret_cast<int32_t*>(&rsi41) = reinterpret_cast<int32_t>(free);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi41) + 4) = reinterpret_cast<int32_t>(free);
            do {
                rdi42 = reinterpret_cast<struct s188*>(rbx43 + r10_25 * 0x708);
                rdi42->f0 = rsi41->f0;
                rdi44 = reinterpret_cast<struct s189*>(&rdi42->f4);
                rsi45 = reinterpret_cast<struct s77*>(&rsi41->f4);
                __asm__("mulsd xmm1, [r8+rcx*8]");
                __asm__("addsd xmm1, xmm0");
                rdi44->f0 = rsi45->f0;
                rsi46 = reinterpret_cast<struct s78*>(&rsi45->f4);
                rdi44->f4 = rsi46->f0;
                rsi47 = &rsi46->f4;
                __asm__("mulsd xmm0, [rdi+rcx*8]");
                __asm__("addsd xmm0, xmm1");
                r13_48[(reinterpret_cast<uint64_t>(rsi46) | 1) * 0x898] = *rsi47;
                rsi41 = reinterpret_cast<struct s30*>(reinterpret_cast<uint64_t>(rsi47 + 1) + 2);
            } while (!reinterpret_cast<int1_t>(rsi41 == 0x384));
            ++rcx37;
        } while (rcx37 != 0x44c);
        ++r10_25;
    } while (r10_25 != 0x320);
    if (*reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&v3) + 4) >= 43 && reinterpret_cast<int1_t>(**v49 == free)) {
        *reinterpret_cast<int32_t*>(&rsi41) = 0x44c;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi41) + 4) = reinterpret_cast<int32_t>(free);
        rdx40 = rax50;
        fun_fc5(0x320, 0x44c, rdx40);
    }
    fun_fcd(rbx51, rsi41, rdx40);
    fun_fd5(r14_52, rsi41, rdx40);
    fun_fdd(r12_53, rsi41, rdx40);
    fun_fe5(r13_54, rsi41, rdx40);
    fun_fed(r15_55, rsi41, rdx40);
    fun_ff5(rbp56, rsi41, rdx40);
    fun_fff(rax50, rsi41, rdx40);
    goto v57;
}

void free(int32_t edi) {
}

void fun_19() {
}

void fun_f8() {
    uint32_t* rax1;
    int64_t rbx2;
    int32_t* rax3;
    int64_t rbx4;
    int32_t ecx5;
    uint1_t cf6;

    __asm__("enter 0x42f2, 0xf");
    rax1[rbx2 * 2] = rax3[rbx4 * 2] + ecx5 + cf6;
}

struct s190 {
    int32_t f0;
    int32_t f4;
};

struct s191 {
    int32_t f0;
    int32_t f4;
};

struct s192 {
    int32_t f0;
    int32_t f4;
};

struct s193 {
    int32_t f0;
    int32_t f4;
};

struct s194 {
    int32_t f0;
    int32_t f4;
};

struct s195 {
    int32_t f0;
    int32_t f4;
};

struct s196 {
    int32_t f0;
    int32_t f4;
};

struct s197 {
    int32_t f0;
    int32_t f4;
};

struct s198 {
    int32_t f0;
    int32_t f4;
};

struct s199 {
    int32_t f0;
    int32_t f4;
};

void fun_104() {
    int64_t r9_1;
    uint32_t esi2;
    int32_t r10d3;
    int32_t r10d4;
    struct s190* rdi5;
    struct s190* v6;
    int64_t rbx7;
    int64_t r14_8;
    struct s191* rsi9;
    int64_t r12_10;
    struct s192* rdi11;
    struct s193* rsi12;
    int64_t rbp13;
    struct s194* rdi14;
    uint32_t r8d15;
    struct s195* rsi16;
    struct s195* v17;
    int64_t r11_18;
    int64_t rbx19;
    int32_t r8d20;
    int32_t r8d21;
    int64_t r15_22;
    int32_t r8d23;
    struct s196* rdi24;
    struct s197* rsi25;
    int32_t r8d26;
    int32_t r8d27;
    struct s198* rsi28;
    struct s198* v29;
    uint32_t r8d30;
    uint32_t ecx31;
    int64_t r9_32;
    struct s194* r11_33;
    int32_t ecx34;
    int32_t ecx35;
    int64_t r14_36;
    int32_t ecx37;
    struct s196* rdi38;
    struct s199* rsi39;
    int64_t v40;

    *reinterpret_cast<uint32_t*>(&r9_1) = esi2;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_1) + 4) = reinterpret_cast<int32_t>(free);
    if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(r10d3 < reinterpret_cast<int32_t>(free) == free)) | reinterpret_cast<uint1_t>(r10d4 == free))) {
        __asm__("xorps xmm0, xmm0");
        __asm__("cvtsi2sd xmm0, eax");
        rdi5 = v6;
        *reinterpret_cast<uint32_t*>(&rbx7) = *reinterpret_cast<uint32_t*>(&r9_1) & 0xfffffffe;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx7) + 4) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(&r14_8) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_8) + 4) = reinterpret_cast<int32_t>(free);
        do {
            if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(&rsi9) < reinterpret_cast<int32_t>(free) == free)) | reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&rsi9) == free))) {
                *reinterpret_cast<int32_t*>(&r12_10) = reinterpret_cast<int32_t>(free);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_10) + 4) = reinterpret_cast<int32_t>(free);
                if (*reinterpret_cast<int32_t*>(&rsi9) != 1) {
                    do {
                        __asm__("cdq ");
                        __asm__("xorps xmm1, xmm1");
                        __asm__("cvtsi2sd xmm1, edx");
                        __asm__("divsd xmm1, xmm0");
                        rdi5->f0 = rsi9->f0;
                        rdi11 = reinterpret_cast<struct s192*>(&rdi5->f4);
                        rsi12 = reinterpret_cast<struct s193*>(&rsi9->f4);
                        __asm__("cdq ");
                        __asm__("xorps xmm1, xmm1");
                        __asm__("cvtsi2sd xmm1, edx");
                        __asm__("divsd xmm1, xmm0");
                        rdi11->f0 = rsi12->f0;
                        rdi5 = reinterpret_cast<struct s190*>(&rdi11->f4);
                        rsi9 = reinterpret_cast<struct s191*>(&rsi12->f4);
                        r12_10 = r12_10 + 2;
                    } while (r12_10 != rbx7);
                }
                if ((*reinterpret_cast<unsigned char*>(&r9_1) & 1) != free) {
                    __asm__("cdq ");
                    __asm__("xorps xmm1, xmm1");
                    __asm__("cvtsi2sd xmm1, edx");
                    __asm__("divsd xmm1, xmm0");
                    rdi5->f0 = rsi9->f0;
                    rdi5 = reinterpret_cast<struct s190*>(&rdi5->f4);
                    rsi9 = reinterpret_cast<struct s191*>(&rsi9->f4);
                }
            }
            ++r14_8;
        } while (r14_8 != rbp13);
    }
    *reinterpret_cast<uint32_t*>(&rdi14) = r8d15;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi14) + 4) = reinterpret_cast<int32_t>(free);
    if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(&rsi9) < reinterpret_cast<int32_t>(free) == free)) | reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&rsi9) == free))) {
        __asm__("xorps xmm0, xmm0");
        __asm__("cvtsi2sd xmm0, eax");
        rsi16 = v17;
        *reinterpret_cast<uint32_t*>(&r11_18) = *reinterpret_cast<uint32_t*>(&rdi14) & 0xfffffffe;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_18) + 4) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(&rbx19) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx19) + 4) = reinterpret_cast<int32_t>(free);
        do {
            if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(r8d20 < reinterpret_cast<int32_t>(free) == free)) | reinterpret_cast<uint1_t>(r8d21 == free))) {
                *reinterpret_cast<int32_t*>(&r15_22) = reinterpret_cast<int32_t>(free);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_22) + 4) = reinterpret_cast<int32_t>(free);
                if (r8d23 != 1) {
                    do {
                        __asm__("cdq ");
                        __asm__("xorps xmm1, xmm1");
                        __asm__("cvtsi2sd xmm1, edx");
                        __asm__("divsd xmm1, xmm0");
                        rdi14->f0 = rsi16->f0;
                        rdi24 = reinterpret_cast<struct s196*>(&rdi14->f4);
                        rsi25 = reinterpret_cast<struct s197*>(&rsi16->f4);
                        __asm__("cdq ");
                        __asm__("xorps xmm1, xmm1");
                        __asm__("cvtsi2sd xmm1, edx");
                        __asm__("divsd xmm1, xmm0");
                        rdi24->f0 = rsi25->f0;
                        rdi14 = reinterpret_cast<struct s194*>(&rdi24->f4);
                        rsi16 = reinterpret_cast<struct s195*>(&rsi25->f4);
                        r15_22 = r15_22 + 2;
                    } while (r15_22 != r11_18);
                }
                if ((*reinterpret_cast<unsigned char*>(&rdi14) & 1) != free) {
                    __asm__("cdq ");
                    __asm__("xorps xmm1, xmm1");
                    __asm__("cvtsi2sd xmm1, edx");
                    __asm__("divsd xmm1, xmm0");
                    rdi14->f0 = rsi16->f0;
                    rdi14 = reinterpret_cast<struct s194*>(&rdi14->f4);
                    rsi16 = reinterpret_cast<struct s195*>(&rsi16->f4);
                }
            }
            ++rbx19;
        } while (rbx19 != r9_1);
    }
    if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(r8d26 < reinterpret_cast<int32_t>(free) == free)) | reinterpret_cast<uint1_t>(r8d27 == free))) {
        rsi28 = v29;
        __asm__("xorps xmm0, xmm0");
        __asm__("cvtsi2sd xmm0, eax");
        r8d30 = ecx31;
        *reinterpret_cast<uint32_t*>(&r9_32) = r8d30 & 0xfffffffe;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_32) + 4) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(&r11_33) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_33) + 4) = reinterpret_cast<int32_t>(free);
        do {
            if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(ecx34 < reinterpret_cast<int32_t>(free) == free)) | reinterpret_cast<uint1_t>(ecx35 == free))) {
                *reinterpret_cast<int32_t*>(&r14_36) = reinterpret_cast<int32_t>(free);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_36) + 4) = reinterpret_cast<int32_t>(free);
                if (ecx37 != 1) {
                    do {
                        __asm__("cdq ");
                        __asm__("xorps xmm1, xmm1");
                        __asm__("cvtsi2sd xmm1, edx");
                        __asm__("divsd xmm1, xmm0");
                        rdi14->f0 = rsi28->f0;
                        rdi38 = reinterpret_cast<struct s196*>(&rdi14->f4);
                        rsi39 = reinterpret_cast<struct s199*>(&rsi28->f4);
                        __asm__("cdq ");
                        __asm__("xorps xmm1, xmm1");
                        __asm__("cvtsi2sd xmm1, edx");
                        __asm__("divsd xmm1, xmm0");
                        rdi38->f0 = rsi39->f0;
                        rdi14 = reinterpret_cast<struct s194*>(&rdi38->f4);
                        rsi28 = reinterpret_cast<struct s198*>(&rsi39->f4);
                        r14_36 = r14_36 + 2;
                    } while (r14_36 != r9_32);
                }
                if ((*reinterpret_cast<unsigned char*>(&r8d30) & 1) != free) {
                    __asm__("cdq ");
                    __asm__("xorps xmm1, xmm1");
                    __asm__("cvtsi2sd xmm1, edx");
                    __asm__("divsd xmm1, xmm0");
                    rdi14->f0 = rsi28->f0;
                    rdi14 = reinterpret_cast<struct s194*>(&rdi14->f4);
                    rsi28 = reinterpret_cast<struct s198*>(&rsi28->f4);
                }
            }
            r11_33 = reinterpret_cast<struct s194*>(reinterpret_cast<int64_t>(r11_33) + 1);
        } while (r11_33 != rdi14);
    }
    goto v40;
}

int64_t* g3f1 = reinterpret_cast<int64_t*>(0x3d8d48188b48);

void print_array(int32_t edi, int32_t esi, int64_t rdx) {
    int64_t* rax4;
    int64_t rcx5;
    uint32_t r8d6;
    int32_t* r9_7;

    rax4 = g3f1;
    rcx5 = *rax4;
    fun_40d(0x3fb, 22, 1, rcx5, r8d6, r9_7);
}

void submain(int32_t edi, int64_t rsi) {
    fun_896(0xafc80, 8);
}

