
void free();

void fun_209();

void fun_223(int64_t rdi, int64_t rsi, int64_t rdx);

struct s0 {
    int64_t f0;
    signed char[168] pad176;
    int64_t fb0;
};

void fun_289(struct s0* rdi);

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

void fun_1e3() {
    int64_t r13_1;
    int64_t r12_2;
    int32_t* rdi3;
    int32_t* rsi4;
    int32_t* rbx5;
    int32_t* rbx6;
    int32_t* r15_7;
    int64_t rbx8;
    int64_t* rbx9;
    int64_t* r9_10;
    struct s0* r14_11;
    struct s0* r8_12;
    int64_t* v13;
    struct s1* rsi14;
    struct s2* rdi15;
    int64_t v16;
    int64_t r9_17;
    int64_t r11_18;
    int64_t* r10_19;
    struct s1* rdx20;
    struct s3* rdi21;
    struct s4* rsi22;
    struct s2* rdi23;
    struct s1* rsi24;
    struct s3* rdi25;
    struct s4* rsi26;
    struct s3* rdi27;
    struct s4* rsi28;
    struct s2* rdx29;
    struct s2* rcx30;
    struct s3* rdi31;
    struct s4* rsi32;
    struct s2* rcx33;
    struct s3* rdi34;
    struct s4* rsi35;
    struct s2* rdi36;
    struct s1* rsi37;
    struct s3* rdi38;
    struct s4* rsi39;
    int64_t v40;

    while (++r13_1, r13_1 != r12_2) {
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&r13_1) * 0xcccccccd) <= 0xccccccc) {
            *reinterpret_cast<int32_t*>(&rdi3) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi3) + 4) = reinterpret_cast<int32_t>(free);
            rsi4 = rbx5;
            fun_209();
        }
        *rdi3 = *rsi4;
        rdi3 = rbx6;
        rsi4 = r15_7;
        fun_1e3();
    }
    fun_223(rbx8, 0x212, 0x219);
    rbx9 = r9_10;
    r14_11 = r8_12;
    if (!free) {
        fun_289(r14_11);
    }
    if (!free) {
        v13 = &r14_11->fb0;
        *reinterpret_cast<uint32_t*>(&rsi14) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi14) + 4) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<uint32_t*>(&rdi15) = 20;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi15) + 4) = reinterpret_cast<int32_t>(free);
        v16 = -22;
        *reinterpret_cast<int32_t*>(&r9_17) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_17) + 4) = reinterpret_cast<int32_t>(free);
        while (1) {
            rbx9[r9_17] = reinterpret_cast<int64_t>(free);
            if (free) {
                addr_2e0_17:
                ++r9_17;
                if (r9_17 == 0x22a) 
                    break; else 
                    continue;
            } else {
                r11_18 = r9_17 * 0x41a0;
                r10_19 = reinterpret_cast<int64_t*>(1 + r11_18);
                __asm__("xorpd xmm0, xmm0");
                *reinterpret_cast<int32_t*>(&rdx20) = reinterpret_cast<int32_t>(free);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx20) + 4) = reinterpret_cast<int32_t>(free);
                if (!free) {
                    do {
                        rdi15->f0 = rsi14->f0;
                        rdi21 = reinterpret_cast<struct s3*>(&rdi15->f4);
                        rsi22 = reinterpret_cast<struct s4*>(&rsi14->f4);
                        __asm__("mulsd xmm1, [r15+rcx*8]");
                        __asm__("addsd xmm1, xmm0");
                        rdi21->f0 = rsi22->f0;
                        rdi23 = reinterpret_cast<struct s2*>(&rdi21->f4);
                        rsi24 = reinterpret_cast<struct s1*>(&rsi22->f4);
                        rdi23->f0 = rsi24->f0;
                        rdi25 = reinterpret_cast<struct s3*>(&rdi23->f4);
                        rsi26 = reinterpret_cast<struct s4*>(&rsi24->f4);
                        __asm__("mulsd xmm0, [r15+r8]");
                        __asm__("addsd xmm0, xmm1");
                        rdi25->f0 = rsi26->f0;
                        rdi15 = reinterpret_cast<struct s2*>(&rdi25->f4);
                        rsi14 = reinterpret_cast<struct s1*>(&rsi26->f4);
                        rdx20 = reinterpret_cast<struct s1*>(reinterpret_cast<int64_t>(rdx20) + 2);
                    } while (rdx20 != rsi14);
                }
                if (!1) {
                    rdi15->f0 = rsi14->f0;
                    rdi27 = reinterpret_cast<struct s3*>(&rdi15->f4);
                    rsi28 = reinterpret_cast<struct s4*>(&rsi14->f4);
                    __asm__("mulsd xmm1, [r15+rcx*8]");
                    __asm__("addsd xmm1, xmm0");
                    rdi27->f0 = rsi28->f0;
                    rdi15 = reinterpret_cast<struct s2*>(&rdi27->f4);
                    rsi14 = reinterpret_cast<struct s1*>(&rsi28->f4);
                }
                if (free) 
                    goto addr_2e0_17;
            }
            if (!1) {
                *reinterpret_cast<int32_t*>(&rdx29) = reinterpret_cast<int32_t>(free);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx29) + 4) = reinterpret_cast<int32_t>(free);
                goto addr_450_43;
            }
            if (!reinterpret_cast<int1_t>((static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(r11_18 + 0xb1) > reinterpret_cast<uint64_t>(r14_11))) & static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(r10_19) < reinterpret_cast<uint64_t>(v13)))) == free)) {
                *reinterpret_cast<int32_t*>(&rdx29) = reinterpret_cast<int32_t>(free);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx29) + 4) = reinterpret_cast<int32_t>(free);
                goto addr_450_43;
            }
            *reinterpret_cast<int32_t*>(&rdx29) = reinterpret_cast<int32_t>(free);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx29) + 4) = reinterpret_cast<int32_t>(free);
            if (!reinterpret_cast<int1_t>((static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(rbx9 + r9_17 + 1) > reinterpret_cast<uint64_t>(r14_11))) & static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(rbx9 + r9_17) < reinterpret_cast<uint64_t>(v13)))) == free)) {
                addr_450_43:
                rcx30 = rdx29;
                if (!1) {
                    rdi15->f0 = rsi14->f0;
                    rdi31 = reinterpret_cast<struct s3*>(&rdi15->f4);
                    rsi32 = reinterpret_cast<struct s4*>(&rsi14->f4);
                    __asm__("mulsd xmm0, [rbx+r9*8]");
                    __asm__("addsd xmm0, [r14+rdx*8]");
                    rdi31->f0 = rsi32->f0;
                    rdi15 = reinterpret_cast<struct s2*>(&rdi31->f4);
                    rsi14 = reinterpret_cast<struct s1*>(&rsi32->f4);
                    rcx30 = reinterpret_cast<struct s2*>(reinterpret_cast<uint64_t>(rdx29) | 1);
                }
            } else {
                rdi15->f0 = rsi14->f0;
                rdi15 = reinterpret_cast<struct s2*>(&rdi15->f4);
                rsi14 = reinterpret_cast<struct s1*>(&rsi14->f4);
                __asm__("unpcklpd xmm0, xmm0");
                *reinterpret_cast<int32_t*>(&rcx33) = reinterpret_cast<int32_t>(free);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx33) + 4) = reinterpret_cast<int32_t>(free);
                do {
                    __asm__("movupd xmm1, [r14+rcx*8]");
                    __asm__("movupd xmm2, [r14+rcx*8+0x10]");
                    __asm__("movupd xmm3, [r10+rcx*8]");
                    __asm__("movupd xmm4, [r10+rcx*8+0x10]");
                    __asm__("mulpd xmm3, xmm0");
                    __asm__("addpd xmm3, xmm1");
                    __asm__("mulpd xmm4, xmm0");
                    __asm__("addpd xmm4, xmm2");
                    __asm__("movupd [r14+rcx*8], xmm3");
                    __asm__("movupd [r14+rcx*8+0x10], xmm4");
                    rcx33 = reinterpret_cast<struct s2*>(&rcx33->f4);
                } while (rcx33 != rdi15);
                rdx29 = rdi15;
                if (rdi15 == 22) 
                    goto addr_2e0_17; else 
                    goto addr_43c_60;
            }
            if (~reinterpret_cast<uint64_t>(rdx29) != v16) {
                do {
                    rdi15->f0 = rsi14->f0;
                    rdi34 = reinterpret_cast<struct s3*>(&rdi15->f4);
                    rsi35 = reinterpret_cast<struct s4*>(&rsi14->f4);
                    __asm__("mulsd xmm0, [rbx+r9*8]");
                    __asm__("addsd xmm0, [r14+rcx*8]");
                    rdi34->f0 = rsi35->f0;
                    rdi36 = reinterpret_cast<struct s2*>(&rdi34->f4);
                    rsi37 = reinterpret_cast<struct s1*>(&rsi35->f4);
                    rdi36->f0 = rsi37->f0;
                    rdi38 = reinterpret_cast<struct s3*>(&rdi36->f4);
                    rsi39 = reinterpret_cast<struct s4*>(&rsi37->f4);
                    __asm__("mulsd xmm0, [rbx+r9*8]");
                    __asm__("addsd xmm0, [r14+rcx*8+0x8]");
                    rdi38->f0 = rsi39->f0;
                    rdi15 = reinterpret_cast<struct s2*>(&rdi38->f4);
                    rsi14 = reinterpret_cast<struct s1*>(&rsi39->f4);
                    rcx30 = reinterpret_cast<struct s2*>(reinterpret_cast<uint64_t>(rcx30) + 2);
                } while (!reinterpret_cast<int1_t>(rcx30 == 22));
                goto addr_2e0_17;
            }
            addr_43c_60:
            goto addr_450_43;
        }
    }
    goto v40;
}

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

void fun_209() {
    int32_t* rdi1;
    int32_t* rsi2;
    int32_t* rbx3;
    int32_t* r15_4;
    int64_t r13_5;
    int64_t r12_6;
    int32_t* rbx7;
    int64_t rbx8;
    int64_t* rbx9;
    int64_t* r9_10;
    struct s0* r14_11;
    struct s0* r8_12;
    int64_t* v13;
    struct s5* rsi14;
    struct s6* rdi15;
    int64_t v16;
    int64_t r9_17;
    int64_t r11_18;
    int64_t* r10_19;
    struct s5* rdx20;
    struct s7* rdi21;
    struct s8* rsi22;
    struct s6* rdi23;
    struct s5* rsi24;
    struct s7* rdi25;
    struct s8* rsi26;
    struct s7* rdi27;
    struct s8* rsi28;
    struct s6* rdx29;
    struct s6* rcx30;
    struct s7* rdi31;
    struct s8* rsi32;
    struct s6* rcx33;
    struct s7* rdi34;
    struct s8* rsi35;
    struct s6* rdi36;
    struct s5* rsi37;
    struct s7* rdi38;
    struct s8* rsi39;
    int64_t v40;

    while (1) {
        do {
            *rdi1 = *rsi2;
            rdi1 = rbx3;
            rsi2 = r15_4;
            fun_1e3();
            ++r13_5;
            if (r13_5 == r12_6) 
                goto addr_20b_7;
            __asm__("ror eax, 0x2");
        } while (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&r13_5) * 0xcccccccd) > 0xccccccc);
        *reinterpret_cast<int32_t*>(&rdi1) = 10;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi1) + 4) = reinterpret_cast<int32_t>(free);
        rsi2 = rbx7;
        fun_209();
    }
    addr_20b_7:
    fun_223(rbx8, 0x212, 0x219);
    rbx9 = r9_10;
    r14_11 = r8_12;
    if (!free) {
        fun_289(r14_11);
    }
    if (!free) {
        v13 = &r14_11->fb0;
        *reinterpret_cast<uint32_t*>(&rsi14) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi14) + 4) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<uint32_t*>(&rdi15) = 20;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi15) + 4) = reinterpret_cast<int32_t>(free);
        v16 = -22;
        *reinterpret_cast<int32_t*>(&r9_17) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_17) + 4) = reinterpret_cast<int32_t>(free);
        while (1) {
            rbx9[r9_17] = reinterpret_cast<int64_t>(free);
            if (free) {
                addr_2e0_17:
                ++r9_17;
                if (r9_17 == 0x22a) 
                    break; else 
                    continue;
            } else {
                r11_18 = r9_17 * 0x41a0;
                r10_19 = reinterpret_cast<int64_t*>(1 + r11_18);
                __asm__("xorpd xmm0, xmm0");
                *reinterpret_cast<int32_t*>(&rdx20) = reinterpret_cast<int32_t>(free);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx20) + 4) = reinterpret_cast<int32_t>(free);
                if (!free) {
                    do {
                        rdi15->f0 = rsi14->f0;
                        rdi21 = reinterpret_cast<struct s7*>(&rdi15->f4);
                        rsi22 = reinterpret_cast<struct s8*>(&rsi14->f4);
                        __asm__("mulsd xmm1, [r15+rcx*8]");
                        __asm__("addsd xmm1, xmm0");
                        rdi21->f0 = rsi22->f0;
                        rdi23 = reinterpret_cast<struct s6*>(&rdi21->f4);
                        rsi24 = reinterpret_cast<struct s5*>(&rsi22->f4);
                        rdi23->f0 = rsi24->f0;
                        rdi25 = reinterpret_cast<struct s7*>(&rdi23->f4);
                        rsi26 = reinterpret_cast<struct s8*>(&rsi24->f4);
                        __asm__("mulsd xmm0, [r15+r8]");
                        __asm__("addsd xmm0, xmm1");
                        rdi25->f0 = rsi26->f0;
                        rdi15 = reinterpret_cast<struct s6*>(&rdi25->f4);
                        rsi14 = reinterpret_cast<struct s5*>(&rsi26->f4);
                        rdx20 = reinterpret_cast<struct s5*>(reinterpret_cast<int64_t>(rdx20) + 2);
                    } while (rdx20 != rsi14);
                }
                if (!1) {
                    rdi15->f0 = rsi14->f0;
                    rdi27 = reinterpret_cast<struct s7*>(&rdi15->f4);
                    rsi28 = reinterpret_cast<struct s8*>(&rsi14->f4);
                    __asm__("mulsd xmm1, [r15+rcx*8]");
                    __asm__("addsd xmm1, xmm0");
                    rdi27->f0 = rsi28->f0;
                    rdi15 = reinterpret_cast<struct s6*>(&rdi27->f4);
                    rsi14 = reinterpret_cast<struct s5*>(&rsi28->f4);
                }
                if (free) 
                    goto addr_2e0_17;
            }
            if (!1) {
                *reinterpret_cast<int32_t*>(&rdx29) = reinterpret_cast<int32_t>(free);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx29) + 4) = reinterpret_cast<int32_t>(free);
                goto addr_450_43;
            }
            if (!reinterpret_cast<int1_t>((static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(r11_18 + 0xb1) > reinterpret_cast<uint64_t>(r14_11))) & static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(r10_19) < reinterpret_cast<uint64_t>(v13)))) == free)) {
                *reinterpret_cast<int32_t*>(&rdx29) = reinterpret_cast<int32_t>(free);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx29) + 4) = reinterpret_cast<int32_t>(free);
                goto addr_450_43;
            }
            *reinterpret_cast<int32_t*>(&rdx29) = reinterpret_cast<int32_t>(free);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx29) + 4) = reinterpret_cast<int32_t>(free);
            if (!reinterpret_cast<int1_t>((static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(rbx9 + r9_17 + 1) > reinterpret_cast<uint64_t>(r14_11))) & static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(rbx9 + r9_17) < reinterpret_cast<uint64_t>(v13)))) == free)) {
                addr_450_43:
                rcx30 = rdx29;
                if (!1) {
                    rdi15->f0 = rsi14->f0;
                    rdi31 = reinterpret_cast<struct s7*>(&rdi15->f4);
                    rsi32 = reinterpret_cast<struct s8*>(&rsi14->f4);
                    __asm__("mulsd xmm0, [rbx+r9*8]");
                    __asm__("addsd xmm0, [r14+rdx*8]");
                    rdi31->f0 = rsi32->f0;
                    rdi15 = reinterpret_cast<struct s6*>(&rdi31->f4);
                    rsi14 = reinterpret_cast<struct s5*>(&rsi32->f4);
                    rcx30 = reinterpret_cast<struct s6*>(reinterpret_cast<uint64_t>(rdx29) | 1);
                }
            } else {
                rdi15->f0 = rsi14->f0;
                rdi15 = reinterpret_cast<struct s6*>(&rdi15->f4);
                rsi14 = reinterpret_cast<struct s5*>(&rsi14->f4);
                __asm__("unpcklpd xmm0, xmm0");
                *reinterpret_cast<int32_t*>(&rcx33) = reinterpret_cast<int32_t>(free);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx33) + 4) = reinterpret_cast<int32_t>(free);
                do {
                    __asm__("movupd xmm1, [r14+rcx*8]");
                    __asm__("movupd xmm2, [r14+rcx*8+0x10]");
                    __asm__("movupd xmm3, [r10+rcx*8]");
                    __asm__("movupd xmm4, [r10+rcx*8+0x10]");
                    __asm__("mulpd xmm3, xmm0");
                    __asm__("addpd xmm3, xmm1");
                    __asm__("mulpd xmm4, xmm0");
                    __asm__("addpd xmm4, xmm2");
                    __asm__("movupd [r14+rcx*8], xmm3");
                    __asm__("movupd [r14+rcx*8+0x10], xmm4");
                    rcx33 = reinterpret_cast<struct s6*>(&rcx33->f4);
                } while (rcx33 != rdi15);
                rdx29 = rdi15;
                if (rdi15 == 22) 
                    goto addr_2e0_17; else 
                    goto addr_43c_60;
            }
            if (~reinterpret_cast<uint64_t>(rdx29) != v16) {
                do {
                    rdi15->f0 = rsi14->f0;
                    rdi34 = reinterpret_cast<struct s7*>(&rdi15->f4);
                    rsi35 = reinterpret_cast<struct s8*>(&rsi14->f4);
                    __asm__("mulsd xmm0, [rbx+r9*8]");
                    __asm__("addsd xmm0, [r14+rcx*8]");
                    rdi34->f0 = rsi35->f0;
                    rdi36 = reinterpret_cast<struct s6*>(&rdi34->f4);
                    rsi37 = reinterpret_cast<struct s5*>(&rsi35->f4);
                    rdi36->f0 = rsi37->f0;
                    rdi38 = reinterpret_cast<struct s7*>(&rdi36->f4);
                    rsi39 = reinterpret_cast<struct s8*>(&rsi37->f4);
                    __asm__("mulsd xmm0, [rbx+r9*8]");
                    __asm__("addsd xmm0, [r14+rcx*8+0x8]");
                    rdi38->f0 = rsi39->f0;
                    rdi15 = reinterpret_cast<struct s6*>(&rdi38->f4);
                    rsi14 = reinterpret_cast<struct s5*>(&rsi39->f4);
                    rcx30 = reinterpret_cast<struct s6*>(reinterpret_cast<uint64_t>(rcx30) + 2);
                } while (!reinterpret_cast<int1_t>(rcx30 == 22));
                goto addr_2e0_17;
            }
            addr_43c_60:
            goto addr_450_43;
        }
    }
    goto v40;
}

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

void fun_289(struct s0* rdi) {
    int32_t v2;
    int64_t rax3;
    uint64_t v4;
    int64_t r14_5;
    int64_t r13_6;
    struct s9* rsi7;
    uint32_t r13d8;
    struct s10* rdi9;
    uint32_t r13d10;
    int64_t v11;
    int64_t r13_12;
    int64_t r9_13;
    int64_t v14;
    int64_t r13_15;
    int64_t r12_16;
    int64_t v17;
    int64_t* rbx18;
    int32_t ebp19;
    int32_t ebp20;
    int64_t r11_21;
    uint64_t r10_22;
    int64_t r12_23;
    struct s9* rdx24;
    int32_t ebp25;
    struct s11* rdi26;
    struct s12* rsi27;
    struct s10* rdi28;
    struct s9* rsi29;
    struct s11* rdi30;
    struct s12* rsi31;
    unsigned char r13b32;
    struct s11* rdi33;
    struct s12* rsi34;
    int32_t ebp35;
    int32_t ebp36;
    uint32_t ebp37;
    struct s10* rdx38;
    uint64_t r14_39;
    int64_t rbx40;
    uint64_t r14_41;
    int64_t rbx42;
    struct s10* rcx43;
    unsigned char r13b44;
    struct s11* rdi45;
    struct s12* rsi46;
    struct s10* rcx47;
    struct s10* r13_48;
    struct s11* rdi49;
    struct s12* rsi50;
    struct s10* rdi51;
    struct s9* rsi52;
    struct s11* rdi53;
    struct s12* rsi54;
    struct s10* r13_55;
    int64_t v56;

    if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(v2 < reinterpret_cast<int32_t>(free) == free)) | reinterpret_cast<uint1_t>(v2 == free))) {
        *reinterpret_cast<int32_t*>(&rax3) = v2;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax3) + 4) = reinterpret_cast<int32_t>(free);
        v4 = reinterpret_cast<uint64_t>(r14_5 + r13_6 * 8);
        *reinterpret_cast<uint32_t*>(&rsi7) = r13d8 & 0xfffffffe;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi7) + 4) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<uint32_t*>(&rdi9) = r13d10 & 0xfffffffc;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi9) + 4) = reinterpret_cast<int32_t>(free);
        v11 = -r13_12;
        *reinterpret_cast<int32_t*>(&r9_13) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_13) + 4) = reinterpret_cast<int32_t>(free);
        v14 = r13_15 * 8 + r12_16;
        v17 = rax3;
        while (1) {
            rbx18[r9_13] = reinterpret_cast<int64_t>(free);
            if (reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(ebp19 < reinterpret_cast<int32_t>(free) == free)) | reinterpret_cast<uint1_t>(ebp20 == free)) {
                addr_2e0_5:
                ++r9_13;
                if (r9_13 == rax3) 
                    break; else 
                    continue;
            } else {
                r11_21 = r9_13 * 0x41a0;
                r10_22 = reinterpret_cast<uint64_t>(r12_23 + r11_21);
                __asm__("xorpd xmm0, xmm0");
                *reinterpret_cast<int32_t*>(&rdx24) = reinterpret_cast<int32_t>(free);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx24) + 4) = reinterpret_cast<int32_t>(free);
                if (ebp25 != 1) {
                    do {
                        rdi9->f0 = rsi7->f0;
                        rdi26 = reinterpret_cast<struct s11*>(&rdi9->f4);
                        rsi27 = reinterpret_cast<struct s12*>(&rsi7->f4);
                        __asm__("mulsd xmm1, [r15+rcx*8]");
                        __asm__("addsd xmm1, xmm0");
                        rdi26->f0 = rsi27->f0;
                        rdi28 = reinterpret_cast<struct s10*>(&rdi26->f4);
                        rsi29 = reinterpret_cast<struct s9*>(&rsi27->f4);
                        rdi28->f0 = rsi29->f0;
                        rdi30 = reinterpret_cast<struct s11*>(&rdi28->f4);
                        rsi31 = reinterpret_cast<struct s12*>(&rsi29->f4);
                        __asm__("mulsd xmm0, [r15+r8]");
                        __asm__("addsd xmm0, xmm1");
                        rdi30->f0 = rsi31->f0;
                        rdi9 = reinterpret_cast<struct s10*>(&rdi30->f4);
                        rsi7 = reinterpret_cast<struct s9*>(&rsi31->f4);
                        rdx24 = reinterpret_cast<struct s9*>(reinterpret_cast<int64_t>(rdx24) + 2);
                    } while (rdx24 != rsi7);
                }
                if ((r13b32 & 1) != free) {
                    rdi9->f0 = rsi7->f0;
                    rdi33 = reinterpret_cast<struct s11*>(&rdi9->f4);
                    rsi34 = reinterpret_cast<struct s12*>(&rsi7->f4);
                    __asm__("mulsd xmm1, [r15+rcx*8]");
                    __asm__("addsd xmm1, xmm0");
                    rdi33->f0 = rsi34->f0;
                    rdi9 = reinterpret_cast<struct s10*>(&rdi33->f4);
                    rsi7 = reinterpret_cast<struct s9*>(&rsi34->f4);
                }
                if (reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(ebp35 < reinterpret_cast<int32_t>(free) == free)) | reinterpret_cast<uint1_t>(ebp36 == free)) 
                    goto addr_2e0_5;
            }
            if (ebp37 < 8) {
                *reinterpret_cast<int32_t*>(&rdx38) = reinterpret_cast<int32_t>(free);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx38) + 4) = reinterpret_cast<int32_t>(free);
                goto addr_450_31;
            }
            if (!reinterpret_cast<int1_t>((static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(r11_21 + v14) > r14_39)) & static_cast<unsigned char>(reinterpret_cast<uint1_t>(r10_22 < v4))) == free)) {
                *reinterpret_cast<int32_t*>(&rdx38) = reinterpret_cast<int32_t>(free);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx38) + 4) = reinterpret_cast<int32_t>(free);
                r12_23 = r12_23;
                rax3 = v17;
                goto addr_450_31;
            }
            *reinterpret_cast<int32_t*>(&rdx38) = reinterpret_cast<int32_t>(free);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx38) + 4) = reinterpret_cast<int32_t>(free);
            r12_23 = r12_23;
            rax3 = v17;
            if (!reinterpret_cast<int1_t>((static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(rbx40 + r9_13 * 8 + 8) > r14_41)) & static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(rbx42 + r9_13 * 8) < v4))) == free)) {
                addr_450_31:
                rcx43 = rdx38;
                if ((r13b44 & 1) != free) {
                    rdi9->f0 = rsi7->f0;
                    rdi45 = reinterpret_cast<struct s11*>(&rdi9->f4);
                    rsi46 = reinterpret_cast<struct s12*>(&rsi7->f4);
                    __asm__("mulsd xmm0, [rbx+r9*8]");
                    __asm__("addsd xmm0, [r14+rdx*8]");
                    rdi45->f0 = rsi46->f0;
                    rdi9 = reinterpret_cast<struct s10*>(&rdi45->f4);
                    rsi7 = reinterpret_cast<struct s9*>(&rsi46->f4);
                    rcx43 = reinterpret_cast<struct s10*>(reinterpret_cast<uint64_t>(rdx38) | 1);
                }
            } else {
                rdi9->f0 = rsi7->f0;
                rdi9 = reinterpret_cast<struct s10*>(&rdi9->f4);
                rsi7 = reinterpret_cast<struct s9*>(&rsi7->f4);
                __asm__("unpcklpd xmm0, xmm0");
                *reinterpret_cast<int32_t*>(&rcx47) = reinterpret_cast<int32_t>(free);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx47) + 4) = reinterpret_cast<int32_t>(free);
                do {
                    __asm__("movupd xmm1, [r14+rcx*8]");
                    __asm__("movupd xmm2, [r14+rcx*8+0x10]");
                    __asm__("movupd xmm3, [r10+rcx*8]");
                    __asm__("movupd xmm4, [r10+rcx*8+0x10]");
                    __asm__("mulpd xmm3, xmm0");
                    __asm__("addpd xmm3, xmm1");
                    __asm__("mulpd xmm4, xmm0");
                    __asm__("addpd xmm4, xmm2");
                    __asm__("movupd [r14+rcx*8], xmm3");
                    __asm__("movupd [r14+rcx*8+0x10], xmm4");
                    rcx47 = reinterpret_cast<struct s10*>(&rcx47->f4);
                } while (rcx47 != rdi9);
                rdx38 = rdi9;
                if (rdi9 == r13_48) 
                    goto addr_2e0_5; else 
                    goto addr_43c_48;
            }
            if (~reinterpret_cast<uint64_t>(rdx38) != v11) {
                do {
                    rdi9->f0 = rsi7->f0;
                    rdi49 = reinterpret_cast<struct s11*>(&rdi9->f4);
                    rsi50 = reinterpret_cast<struct s12*>(&rsi7->f4);
                    __asm__("mulsd xmm0, [rbx+r9*8]");
                    __asm__("addsd xmm0, [r14+rcx*8]");
                    rdi49->f0 = rsi50->f0;
                    rdi51 = reinterpret_cast<struct s10*>(&rdi49->f4);
                    rsi52 = reinterpret_cast<struct s9*>(&rsi50->f4);
                    rdi51->f0 = rsi52->f0;
                    rdi53 = reinterpret_cast<struct s11*>(&rdi51->f4);
                    rsi54 = reinterpret_cast<struct s12*>(&rsi52->f4);
                    __asm__("mulsd xmm0, [rbx+r9*8]");
                    __asm__("addsd xmm0, [r14+rcx*8+0x8]");
                    rdi53->f0 = rsi54->f0;
                    rdi9 = reinterpret_cast<struct s10*>(&rdi53->f4);
                    rsi7 = reinterpret_cast<struct s9*>(&rsi54->f4);
                    rcx43 = reinterpret_cast<struct s10*>(reinterpret_cast<uint64_t>(rcx43) + 2);
                } while (rcx43 != r13_55);
                goto addr_2e0_5;
            }
            addr_43c_48:
            goto addr_450_31;
        }
    }
    goto v56;
}

struct s13 {
    int32_t f0;
    int32_t f4;
    signed char[16792] pad16800;
    int64_t f41a0;
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

void fun_91c(int64_t rdi, struct s13* rsi);

void fun_924(int64_t* rdi, struct s13* rsi);

void fun_92c(int64_t rdi, struct s13* rsi);

void fun_934(struct s13* rdi, struct s13* rsi);

void fun_93c(int64_t* rdi, struct s13* rsi);

void fun_766(struct s13* rdi) {
    signed char** v2;
    uint64_t rax3;
    int64_t r12_4;
    void* rdx5;
    int64_t r15_6;
    uint64_t rcx7;
    int64_t rbx8;
    struct s14* rdi9;
    void* rbx10;
    uint64_t rdx11;
    int64_t r13_12;
    struct s13* rsi13;
    void* r13_14;
    int64_t* r13_15;
    int64_t r8_16;
    struct s15* rdi17;
    struct s16* rsi18;
    struct s14* rdi19;
    struct s13* rsi20;
    struct s15* rdi21;
    struct s16* rsi22;
    struct s14* rdi23;
    struct s13* rsi24;
    struct s15* rdi25;
    struct s16* rsi26;
    unsigned char r8b27;
    struct s14* r12_28;
    struct s13* r12_29;
    int64_t rdx30;
    struct s15* rdi31;
    int32_t* rsi32;
    struct s14* rdi33;
    struct s17* rsi34;
    struct s15* rdi35;
    struct s18* rsi36;
    int64_t rdx37;
    int32_t ebp38;
    struct s13* r12_39;
    int64_t* rbx40;
    int64_t r14_41;
    struct s13* r12_42;
    int64_t* r13_43;
    int64_t v44;

    v2 = reinterpret_cast<signed char**>(__return_address());
    rax3 = reinterpret_cast<uint64_t>(r12_4 + 0x41a0);
    do {
        rdx5 = reinterpret_cast<void*>(r15_6 * 0x41a0);
        rcx7 = reinterpret_cast<uint64_t>(rbx8 + reinterpret_cast<int64_t>(rdx5));
        rdi9 = reinterpret_cast<struct s14*>(reinterpret_cast<int64_t>(rbx10) + reinterpret_cast<int64_t>(rdx5) + 0x41a0);
        rdx11 = reinterpret_cast<uint64_t>(r13_12 + r15_6 * 8);
        rsi13 = reinterpret_cast<struct s13*>(r15_6 * 8 + 8 + reinterpret_cast<int64_t>(r13_14));
        r13_15[r15_6] = reinterpret_cast<int64_t>(free);
        __asm__("pxor xmm0, xmm0");
        *reinterpret_cast<int32_t*>(&r8_16) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_16) + 4) = reinterpret_cast<int32_t>(free);
        do {
            rdi9->f0 = rsi13->f0;
            rdi17 = reinterpret_cast<struct s15*>(&rdi9->f4);
            rsi18 = reinterpret_cast<struct s16*>(&rsi13->f4);
            __asm__("mulsd xmm1, [r14+r8*8]");
            __asm__("addsd xmm1, xmm0");
            rdi17->f0 = rsi18->f0;
            rdi19 = reinterpret_cast<struct s14*>(&rdi17->f4);
            rsi20 = reinterpret_cast<struct s13*>(&rsi18->f4);
            rdi19->f0 = rsi20->f0;
            rdi21 = reinterpret_cast<struct s15*>(&rdi19->f4);
            rsi22 = reinterpret_cast<struct s16*>(&rsi20->f4);
            __asm__("mulsd xmm2, [r14+r8*8+0x8]");
            __asm__("addsd xmm2, xmm1");
            rdi21->f0 = rsi22->f0;
            rdi23 = reinterpret_cast<struct s14*>(&rdi21->f4);
            rsi24 = reinterpret_cast<struct s13*>(&rsi22->f4);
            rdi23->f0 = rsi24->f0;
            rdi25 = reinterpret_cast<struct s15*>(&rdi23->f4);
            rsi26 = reinterpret_cast<struct s16*>(&rsi24->f4);
            __asm__("mulsd xmm0, [r14+r8*8+0x10]");
            __asm__("addsd xmm0, xmm2");
            rdi25->f0 = rsi26->f0;
            rdi9 = reinterpret_cast<struct s14*>(&rdi25->f4);
            rsi13 = reinterpret_cast<struct s13*>(&rsi26->f4);
            r8_16 = r8_16 + 3;
        } while (r8_16 != 0x834);
        r8b27 = reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(r12_28) < reinterpret_cast<uint64_t>(rdi9));
        *reinterpret_cast<unsigned char*>(&rsi13) = reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(r12_29) < reinterpret_cast<uint64_t>(rsi13));
        *reinterpret_cast<unsigned char*>(&rdi9) = reinterpret_cast<uint1_t>(rdx11 < rax3);
        if (!reinterpret_cast<int1_t>((r8b27 & static_cast<unsigned char>(reinterpret_cast<uint1_t>(rcx7 < rax3))) == free)) {
            *reinterpret_cast<int32_t*>(&rdx30) = reinterpret_cast<int32_t>(free);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx30) + 4) = reinterpret_cast<int32_t>(free);
            goto addr_8b0_24;
        }
        *reinterpret_cast<int32_t*>(&rdx30) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx30) + 4) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<unsigned char*>(&rsi13) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rsi13) & *reinterpret_cast<unsigned char*>(&rdi9));
        if (!reinterpret_cast<int1_t>(*reinterpret_cast<unsigned char*>(&rsi13) == free)) {
            do {
                addr_8b0_24:
                rdi9->f0 = rsi13->f0;
                rdi31 = reinterpret_cast<struct s15*>(&rdi9->f4);
                __asm__("mulsd xmm0, [r13+r15*8+0x0]");
                __asm__("addsd xmm0, [r12+rdx*8]");
                rsi32 = reinterpret_cast<int32_t*>(rdx30 * 8);
                rdi31->f0 = *rsi32;
                rdi33 = reinterpret_cast<struct s14*>(&rdi31->f4);
                rsi34 = reinterpret_cast<struct s17*>(reinterpret_cast<uint64_t>(rsi32 + 1) | 8);
                rdi33->f0 = rsi34->f0;
                rdi35 = reinterpret_cast<struct s15*>(&rdi33->f4);
                rsi36 = reinterpret_cast<struct s18*>(&rsi34->f4);
                __asm__("mulsd xmm0, [r13+r15*8+0x0]");
                __asm__("addsd xmm0, [r12+rsi]");
                rdi35->f0 = rsi36->f0;
                rdi9 = reinterpret_cast<struct s14*>(&rdi35->f4);
                rsi13 = reinterpret_cast<struct s13*>(&rsi36->f4);
                rdx30 = rdx30 + 2;
            } while (rdx30 != 0x834);
        } else {
            rdi9->f0 = rsi13->f0;
            rsi13 = reinterpret_cast<struct s13*>(&rsi13->f4);
            __asm__("unpcklpd xmm0, xmm0");
            *reinterpret_cast<int32_t*>(&rdx37) = reinterpret_cast<int32_t>(free);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx37) + 4) = reinterpret_cast<int32_t>(free);
            do {
                __asm__("movupd xmm1, [r12+rdx*8]");
                __asm__("movupd xmm2, [r12+rdx*8+0x10]");
                __asm__("movupd xmm3, [rcx+rdx*8]");
                __asm__("movupd xmm4, [rcx+rdx*8+0x10]");
                __asm__("mulpd xmm3, xmm0");
                __asm__("addpd xmm3, xmm1");
                __asm__("mulpd xmm4, xmm0");
                __asm__("addpd xmm4, xmm2");
                __asm__("movupd [r12+rdx*8], xmm3");
                __asm__("movupd [r12+rdx*8+0x10], xmm4");
                rdx37 = rdx37 + 4;
            } while (rdx37 != 0x834);
            continue;
        }
        ++r15_6;
    } while (r15_6 != 0x76c);
    if (ebp38 >= 43 && reinterpret_cast<int1_t>(**v2 == free)) {
        rsi13 = r12_39;
        fun_91c(0x834, rsi13);
    }
    fun_924(rbx40, rsi13);
    fun_92c(r14_41, rsi13);
    fun_934(r12_42, rsi13);
    fun_93c(r13_43, rsi13);
    goto v44;
}

void fun_91c(int64_t rdi, struct s13* rsi) {
    int64_t* rbx3;
    int64_t r14_4;
    struct s13* r12_5;
    int64_t* r13_6;
    int64_t v7;

    fun_924(rbx3, rsi);
    fun_92c(r14_4, rsi);
    fun_934(r12_5, rsi);
    fun_93c(r13_6, rsi);
    goto v7;
}

void fun_924(int64_t* rdi, struct s13* rsi) {
    int64_t r14_3;
    struct s13* r12_4;
    int64_t* r13_5;
    int64_t v6;

    fun_92c(r14_3, rsi);
    fun_934(r12_4, rsi);
    fun_93c(r13_5, rsi);
    goto v6;
}

void fun_1bb();

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

void fun_1a3(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, struct s0* r8, int64_t* r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14) {
    int32_t* rsi15;
    int32_t* rdi16;
    int32_t* rbx17;
    int32_t ebp18;
    int32_t ebp19;
    int64_t r12_20;
    int32_t ebp21;
    int64_t r13_22;
    int32_t* rbx23;
    int32_t* rbx24;
    int64_t rbx25;
    int64_t* rbx26;
    struct s0* r14_27;
    int64_t* v28;
    struct s19* rsi29;
    struct s20* rdi30;
    int64_t v31;
    int64_t r9_32;
    int64_t r11_33;
    int64_t* r10_34;
    struct s19* rdx35;
    struct s21* rdi36;
    struct s22* rsi37;
    struct s20* rdi38;
    struct s19* rsi39;
    struct s21* rdi40;
    struct s22* rsi41;
    struct s21* rdi42;
    struct s22* rsi43;
    struct s20* rdx44;
    struct s20* rcx45;
    struct s21* rdi46;
    struct s22* rsi47;
    struct s20* rcx48;
    struct s21* rdi49;
    struct s22* rsi50;
    struct s20* rdi51;
    struct s19* rsi52;
    struct s21* rdi53;
    struct s22* rsi54;

    rsi15 = reinterpret_cast<int32_t*>(0x1aa);
    rdi16 = rbx17;
    fun_1bb();
    if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(ebp18 < reinterpret_cast<int32_t>(free) == free)) | reinterpret_cast<uint1_t>(ebp19 == free))) {
        *reinterpret_cast<int32_t*>(&r12_20) = ebp21;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_20) + 4) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(&r13_22) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_22) + 4) = reinterpret_cast<int32_t>(free);
        do {
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&r13_22) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi16) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi16) + 4) = reinterpret_cast<int32_t>(free);
                rsi15 = rbx23;
                fun_209();
            }
            *rdi16 = *rsi15;
            rdi16 = rbx24;
            rsi15 = reinterpret_cast<int32_t*>(0x1cc);
            fun_1e3();
            ++r13_22;
        } while (r13_22 != r12_20);
    }
    fun_223(rbx25, 0x212, 0x219);
    rbx26 = r9;
    r14_27 = r8;
    if (!free) {
        fun_289(r14_27);
    }
    if (!free) {
        v28 = &r14_27->fb0;
        *reinterpret_cast<uint32_t*>(&rsi29) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi29) + 4) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<uint32_t*>(&rdi30) = 20;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi30) + 4) = reinterpret_cast<int32_t>(free);
        v31 = -22;
        *reinterpret_cast<int32_t*>(&r9_32) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_32) + 4) = reinterpret_cast<int32_t>(free);
        while (1) {
            rbx26[r9_32] = reinterpret_cast<int64_t>(free);
            if (free) {
                addr_2e0_20:
                ++r9_32;
                if (r9_32 == 0x22a) 
                    break; else 
                    continue;
            } else {
                r11_33 = r9_32 * 0x41a0;
                r10_34 = reinterpret_cast<int64_t*>(1 + r11_33);
                __asm__("xorpd xmm0, xmm0");
                *reinterpret_cast<int32_t*>(&rdx35) = reinterpret_cast<int32_t>(free);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx35) + 4) = reinterpret_cast<int32_t>(free);
                if (!free) {
                    do {
                        rdi30->f0 = rsi29->f0;
                        rdi36 = reinterpret_cast<struct s21*>(&rdi30->f4);
                        rsi37 = reinterpret_cast<struct s22*>(&rsi29->f4);
                        __asm__("mulsd xmm1, [r15+rcx*8]");
                        __asm__("addsd xmm1, xmm0");
                        rdi36->f0 = rsi37->f0;
                        rdi38 = reinterpret_cast<struct s20*>(&rdi36->f4);
                        rsi39 = reinterpret_cast<struct s19*>(&rsi37->f4);
                        rdi38->f0 = rsi39->f0;
                        rdi40 = reinterpret_cast<struct s21*>(&rdi38->f4);
                        rsi41 = reinterpret_cast<struct s22*>(&rsi39->f4);
                        __asm__("mulsd xmm0, [r15+r8]");
                        __asm__("addsd xmm0, xmm1");
                        rdi40->f0 = rsi41->f0;
                        rdi30 = reinterpret_cast<struct s20*>(&rdi40->f4);
                        rsi29 = reinterpret_cast<struct s19*>(&rsi41->f4);
                        rdx35 = reinterpret_cast<struct s19*>(reinterpret_cast<int64_t>(rdx35) + 2);
                    } while (rdx35 != rsi29);
                }
                if (!1) {
                    rdi30->f0 = rsi29->f0;
                    rdi42 = reinterpret_cast<struct s21*>(&rdi30->f4);
                    rsi43 = reinterpret_cast<struct s22*>(&rsi29->f4);
                    __asm__("mulsd xmm1, [r15+rcx*8]");
                    __asm__("addsd xmm1, xmm0");
                    rdi42->f0 = rsi43->f0;
                    rdi30 = reinterpret_cast<struct s20*>(&rdi42->f4);
                    rsi29 = reinterpret_cast<struct s19*>(&rsi43->f4);
                }
                if (free) 
                    goto addr_2e0_20;
            }
            if (!1) {
                *reinterpret_cast<int32_t*>(&rdx44) = reinterpret_cast<int32_t>(free);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx44) + 4) = reinterpret_cast<int32_t>(free);
                goto addr_450_46;
            }
            if (!reinterpret_cast<int1_t>((static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(r11_33 + 0xb1) > reinterpret_cast<uint64_t>(r14_27))) & static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(r10_34) < reinterpret_cast<uint64_t>(v28)))) == free)) {
                *reinterpret_cast<int32_t*>(&rdx44) = reinterpret_cast<int32_t>(free);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx44) + 4) = reinterpret_cast<int32_t>(free);
                goto addr_450_46;
            }
            *reinterpret_cast<int32_t*>(&rdx44) = reinterpret_cast<int32_t>(free);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx44) + 4) = reinterpret_cast<int32_t>(free);
            if (!reinterpret_cast<int1_t>((static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(rbx26 + r9_32 + 1) > reinterpret_cast<uint64_t>(r14_27))) & static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(rbx26 + r9_32) < reinterpret_cast<uint64_t>(v28)))) == free)) {
                addr_450_46:
                rcx45 = rdx44;
                if (!1) {
                    rdi30->f0 = rsi29->f0;
                    rdi46 = reinterpret_cast<struct s21*>(&rdi30->f4);
                    rsi47 = reinterpret_cast<struct s22*>(&rsi29->f4);
                    __asm__("mulsd xmm0, [rbx+r9*8]");
                    __asm__("addsd xmm0, [r14+rdx*8]");
                    rdi46->f0 = rsi47->f0;
                    rdi30 = reinterpret_cast<struct s20*>(&rdi46->f4);
                    rsi29 = reinterpret_cast<struct s19*>(&rsi47->f4);
                    rcx45 = reinterpret_cast<struct s20*>(reinterpret_cast<uint64_t>(rdx44) | 1);
                }
            } else {
                rdi30->f0 = rsi29->f0;
                rdi30 = reinterpret_cast<struct s20*>(&rdi30->f4);
                rsi29 = reinterpret_cast<struct s19*>(&rsi29->f4);
                __asm__("unpcklpd xmm0, xmm0");
                *reinterpret_cast<int32_t*>(&rcx48) = reinterpret_cast<int32_t>(free);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx48) + 4) = reinterpret_cast<int32_t>(free);
                do {
                    __asm__("movupd xmm1, [r14+rcx*8]");
                    __asm__("movupd xmm2, [r14+rcx*8+0x10]");
                    __asm__("movupd xmm3, [r10+rcx*8]");
                    __asm__("movupd xmm4, [r10+rcx*8+0x10]");
                    __asm__("mulpd xmm3, xmm0");
                    __asm__("addpd xmm3, xmm1");
                    __asm__("mulpd xmm4, xmm0");
                    __asm__("addpd xmm4, xmm2");
                    __asm__("movupd [r14+rcx*8], xmm3");
                    __asm__("movupd [r14+rcx*8+0x10], xmm4");
                    rcx48 = reinterpret_cast<struct s20*>(&rcx48->f4);
                } while (rcx48 != rdi30);
                rdx44 = rdi30;
                if (rdi30 == 22) 
                    goto addr_2e0_20; else 
                    goto addr_43c_63;
            }
            if (~reinterpret_cast<uint64_t>(rdx44) != v31) {
                do {
                    rdi30->f0 = rsi29->f0;
                    rdi49 = reinterpret_cast<struct s21*>(&rdi30->f4);
                    rsi50 = reinterpret_cast<struct s22*>(&rsi29->f4);
                    __asm__("mulsd xmm0, [rbx+r9*8]");
                    __asm__("addsd xmm0, [r14+rcx*8]");
                    rdi49->f0 = rsi50->f0;
                    rdi51 = reinterpret_cast<struct s20*>(&rdi49->f4);
                    rsi52 = reinterpret_cast<struct s19*>(&rsi50->f4);
                    rdi51->f0 = rsi52->f0;
                    rdi53 = reinterpret_cast<struct s21*>(&rdi51->f4);
                    rsi54 = reinterpret_cast<struct s22*>(&rsi52->f4);
                    __asm__("mulsd xmm0, [rbx+r9*8]");
                    __asm__("addsd xmm0, [r14+rcx*8+0x8]");
                    rdi53->f0 = rsi54->f0;
                    rdi30 = reinterpret_cast<struct s20*>(&rdi53->f4);
                    rsi29 = reinterpret_cast<struct s19*>(&rsi54->f4);
                    rcx45 = reinterpret_cast<struct s20*>(reinterpret_cast<uint64_t>(rcx45) + 2);
                } while (!reinterpret_cast<int1_t>(rcx45 == 22));
                goto addr_2e0_20;
            }
            addr_43c_63:
            goto addr_450_46;
        }
    }
    goto a13;
}

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

void fun_223(int64_t rdi, int64_t rsi, int64_t rdx) {
    int64_t* rbx4;
    int64_t* r9_5;
    struct s0* r14_6;
    struct s0* r8_7;
    int64_t* v8;
    struct s23* rsi9;
    struct s24* rdi10;
    int64_t v11;
    int64_t r9_12;
    int64_t r11_13;
    int64_t* r10_14;
    struct s23* rdx15;
    struct s25* rdi16;
    struct s26* rsi17;
    struct s24* rdi18;
    struct s23* rsi19;
    struct s25* rdi20;
    struct s26* rsi21;
    struct s25* rdi22;
    struct s26* rsi23;
    struct s24* rdx24;
    struct s24* rcx25;
    struct s25* rdi26;
    struct s26* rsi27;
    struct s24* rcx28;
    struct s25* rdi29;
    struct s26* rsi30;
    struct s24* rdi31;
    struct s23* rsi32;
    struct s25* rdi33;
    struct s26* rsi34;
    int64_t v35;

    rbx4 = r9_5;
    r14_6 = r8_7;
    if (!free) {
        fun_289(r14_6);
    }
    if (!free) {
        v8 = &r14_6->fb0;
        *reinterpret_cast<uint32_t*>(&rsi9) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi9) + 4) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<uint32_t*>(&rdi10) = 20;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi10) + 4) = reinterpret_cast<int32_t>(free);
        v11 = -22;
        *reinterpret_cast<int32_t*>(&r9_12) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_12) + 4) = reinterpret_cast<int32_t>(free);
        while (1) {
            rbx4[r9_12] = reinterpret_cast<int64_t>(free);
            if (free) {
                addr_2e0_8:
                ++r9_12;
                if (r9_12 == 0x22a) 
                    break; else 
                    continue;
            } else {
                r11_13 = r9_12 * 0x41a0;
                r10_14 = reinterpret_cast<int64_t*>(1 + r11_13);
                __asm__("xorpd xmm0, xmm0");
                *reinterpret_cast<int32_t*>(&rdx15) = reinterpret_cast<int32_t>(free);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx15) + 4) = reinterpret_cast<int32_t>(free);
                if (!free) {
                    do {
                        rdi10->f0 = rsi9->f0;
                        rdi16 = reinterpret_cast<struct s25*>(&rdi10->f4);
                        rsi17 = reinterpret_cast<struct s26*>(&rsi9->f4);
                        __asm__("mulsd xmm1, [r15+rcx*8]");
                        __asm__("addsd xmm1, xmm0");
                        rdi16->f0 = rsi17->f0;
                        rdi18 = reinterpret_cast<struct s24*>(&rdi16->f4);
                        rsi19 = reinterpret_cast<struct s23*>(&rsi17->f4);
                        rdi18->f0 = rsi19->f0;
                        rdi20 = reinterpret_cast<struct s25*>(&rdi18->f4);
                        rsi21 = reinterpret_cast<struct s26*>(&rsi19->f4);
                        __asm__("mulsd xmm0, [r15+r8]");
                        __asm__("addsd xmm0, xmm1");
                        rdi20->f0 = rsi21->f0;
                        rdi10 = reinterpret_cast<struct s24*>(&rdi20->f4);
                        rsi9 = reinterpret_cast<struct s23*>(&rsi21->f4);
                        rdx15 = reinterpret_cast<struct s23*>(reinterpret_cast<int64_t>(rdx15) + 2);
                    } while (rdx15 != rsi9);
                }
                if (!1) {
                    rdi10->f0 = rsi9->f0;
                    rdi22 = reinterpret_cast<struct s25*>(&rdi10->f4);
                    rsi23 = reinterpret_cast<struct s26*>(&rsi9->f4);
                    __asm__("mulsd xmm1, [r15+rcx*8]");
                    __asm__("addsd xmm1, xmm0");
                    rdi22->f0 = rsi23->f0;
                    rdi10 = reinterpret_cast<struct s24*>(&rdi22->f4);
                    rsi9 = reinterpret_cast<struct s23*>(&rsi23->f4);
                }
                if (free) 
                    goto addr_2e0_8;
            }
            if (!1) {
                *reinterpret_cast<int32_t*>(&rdx24) = reinterpret_cast<int32_t>(free);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx24) + 4) = reinterpret_cast<int32_t>(free);
                goto addr_450_34;
            }
            if (!reinterpret_cast<int1_t>((static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(r11_13 + 0xb1) > reinterpret_cast<uint64_t>(r14_6))) & static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(r10_14) < reinterpret_cast<uint64_t>(v8)))) == free)) {
                *reinterpret_cast<int32_t*>(&rdx24) = reinterpret_cast<int32_t>(free);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx24) + 4) = reinterpret_cast<int32_t>(free);
                goto addr_450_34;
            }
            *reinterpret_cast<int32_t*>(&rdx24) = reinterpret_cast<int32_t>(free);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx24) + 4) = reinterpret_cast<int32_t>(free);
            if (!reinterpret_cast<int1_t>((static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(rbx4 + r9_12 + 1) > reinterpret_cast<uint64_t>(r14_6))) & static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(rbx4 + r9_12) < reinterpret_cast<uint64_t>(v8)))) == free)) {
                addr_450_34:
                rcx25 = rdx24;
                if (!1) {
                    rdi10->f0 = rsi9->f0;
                    rdi26 = reinterpret_cast<struct s25*>(&rdi10->f4);
                    rsi27 = reinterpret_cast<struct s26*>(&rsi9->f4);
                    __asm__("mulsd xmm0, [rbx+r9*8]");
                    __asm__("addsd xmm0, [r14+rdx*8]");
                    rdi26->f0 = rsi27->f0;
                    rdi10 = reinterpret_cast<struct s24*>(&rdi26->f4);
                    rsi9 = reinterpret_cast<struct s23*>(&rsi27->f4);
                    rcx25 = reinterpret_cast<struct s24*>(reinterpret_cast<uint64_t>(rdx24) | 1);
                }
            } else {
                rdi10->f0 = rsi9->f0;
                rdi10 = reinterpret_cast<struct s24*>(&rdi10->f4);
                rsi9 = reinterpret_cast<struct s23*>(&rsi9->f4);
                __asm__("unpcklpd xmm0, xmm0");
                *reinterpret_cast<int32_t*>(&rcx28) = reinterpret_cast<int32_t>(free);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx28) + 4) = reinterpret_cast<int32_t>(free);
                do {
                    __asm__("movupd xmm1, [r14+rcx*8]");
                    __asm__("movupd xmm2, [r14+rcx*8+0x10]");
                    __asm__("movupd xmm3, [r10+rcx*8]");
                    __asm__("movupd xmm4, [r10+rcx*8+0x10]");
                    __asm__("mulpd xmm3, xmm0");
                    __asm__("addpd xmm3, xmm1");
                    __asm__("mulpd xmm4, xmm0");
                    __asm__("addpd xmm4, xmm2");
                    __asm__("movupd [r14+rcx*8], xmm3");
                    __asm__("movupd [r14+rcx*8+0x10], xmm4");
                    rcx28 = reinterpret_cast<struct s24*>(&rcx28->f4);
                } while (rcx28 != rdi10);
                rdx24 = rdi10;
                if (rdi10 == 22) 
                    goto addr_2e0_8; else 
                    goto addr_43c_51;
            }
            if (~reinterpret_cast<uint64_t>(rdx24) != v11) {
                do {
                    rdi10->f0 = rsi9->f0;
                    rdi29 = reinterpret_cast<struct s25*>(&rdi10->f4);
                    rsi30 = reinterpret_cast<struct s26*>(&rsi9->f4);
                    __asm__("mulsd xmm0, [rbx+r9*8]");
                    __asm__("addsd xmm0, [r14+rcx*8]");
                    rdi29->f0 = rsi30->f0;
                    rdi31 = reinterpret_cast<struct s24*>(&rdi29->f4);
                    rsi32 = reinterpret_cast<struct s23*>(&rsi30->f4);
                    rdi31->f0 = rsi32->f0;
                    rdi33 = reinterpret_cast<struct s25*>(&rdi31->f4);
                    rsi34 = reinterpret_cast<struct s26*>(&rsi32->f4);
                    __asm__("mulsd xmm0, [rbx+r9*8]");
                    __asm__("addsd xmm0, [r14+rcx*8+0x8]");
                    rdi33->f0 = rsi34->f0;
                    rdi10 = reinterpret_cast<struct s24*>(&rdi33->f4);
                    rsi9 = reinterpret_cast<struct s23*>(&rsi34->f4);
                    rcx25 = reinterpret_cast<struct s24*>(reinterpret_cast<uint64_t>(rcx25) + 2);
                } while (!reinterpret_cast<int1_t>(rcx25 == 22));
                goto addr_2e0_8;
            }
            addr_43c_51:
            goto addr_450_34;
        }
    }
    goto v35;
}

int64_t fun_512(int64_t rdi, int64_t rsi);

struct s13* fun_524(int64_t rdi, int64_t rsi);

int64_t* fun_536(int64_t rdi, int64_t rsi);

struct s27 {
    int32_t f0;
    int32_t f4;
};

struct s28 {
    int32_t f0;
    int32_t f4;
};

void fun_500(int64_t rdi, int64_t rsi) {
    signed char** v3;
    int64_t* rbx4;
    int64_t* rax5;
    int64_t rax6;
    int64_t r14_7;
    struct s13* rax8;
    struct s13* r12_9;
    int64_t* rax10;
    int64_t* r13_11;
    int64_t rax12;
    int64_t rcx13;
    int64_t rcx14;
    int64_t r15_15;
    int64_t* rax16;
    void* rdx17;
    int64_t* rcx18;
    struct s13* rdi19;
    int64_t* rdx20;
    struct s13* rsi21;
    int64_t r8_22;
    struct s16* rdi23;
    struct s16* rsi24;
    struct s13* rdi25;
    struct s13* rsi26;
    struct s16* rdi27;
    struct s16* rsi28;
    struct s13* rdi29;
    struct s13* rsi30;
    struct s16* rdi31;
    struct s16* rsi32;
    unsigned char r8b33;
    int64_t rdx34;
    struct s16* rdi35;
    int32_t* rsi36;
    struct s13* rdi37;
    struct s27* rsi38;
    struct s16* rdi39;
    struct s28* rsi40;
    int64_t rdx41;
    int32_t ebp42;
    int64_t v43;

    v3 = reinterpret_cast<signed char**>(__return_address());
    rbx4 = rax5;
    rax6 = fun_512(0x834, 8);
    r14_7 = rax6;
    rax8 = fun_524(0x834, 8);
    r12_9 = rax8;
    rax10 = fun_536(0x76c, 8);
    r13_11 = rax10;
    __asm__("movdqa xmm0, [rip+0x0]");
    *reinterpret_cast<int32_t*>(&rax12) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax12) + 4) = reinterpret_cast<int32_t>(free);
    __asm__("movapd xmm1, [rip+0x0]");
    __asm__("movapd xmm2, [rip+0x0]");
    __asm__("movdqa xmm3, [rip+0x0]");
    __asm__("movdqa xmm4, [rip+0x0]");
    __asm__("movdqa xmm5, [rip+0x0]");
    *reinterpret_cast<int32_t*>(&rcx13) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx13) + 4) = reinterpret_cast<int32_t>(free);
    do {
        __asm__("cvtdq2pd xmm6, xmm0");
        __asm__("divpd xmm6, xmm1");
        __asm__("addpd xmm6, xmm2");
        __asm__("movupd [r14+rcx*8], xmm6");
        __asm__("movdqa xmm6, xmm0");
        __asm__("paddd xmm6, xmm3");
        __asm__("cvtdq2pd xmm6, xmm6");
        __asm__("divpd xmm6, xmm1");
        __asm__("addpd xmm6, xmm2");
        __asm__("movupd [r14+rcx*8+0x10], xmm6");
        __asm__("movdqa xmm6, xmm0");
        __asm__("paddd xmm6, xmm4");
        __asm__("cvtdq2pd xmm6, xmm6");
        __asm__("divpd xmm6, xmm1");
        __asm__("addpd xmm6, xmm2");
        __asm__("movupd [r14+rcx*8+0x20], xmm6");
        rcx13 = rcx13 + 6;
        __asm__("paddd xmm0, xmm5");
    } while (rcx13 != 0x834);
    __asm__("movdqa xmm0, [rip+0x0]");
    __asm__("movdqa xmm1, [rip+0x0]");
    __asm__("movdqa xmm2, [rip+0x0]");
    __asm__("movapd xmm3, [rip+0x0]");
    __asm__("movdqa xmm4, [rip+0x0]");
    __asm__("movdqa xmm5, [rip+0x0]");
    do {
        __asm__("movd xmm6, rax");
        __asm__("pshufd xmm6, xmm6, 0x44");
        *reinterpret_cast<int32_t*>(&rcx14) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx14) + 4) = reinterpret_cast<int32_t>(free);
        __asm__("movdqa xmm7, xmm0");
        do {
            __asm__("movdqa xmm10, xmm7");
            __asm__("paddq xmm10, xmm6");
            __asm__("pshufd xmm8, xmm10, 0xe8");
            __asm__("movdqa xmm9, xmm10");
            __asm__("pmuludq xmm9, xmm1");
            __asm__("pshufd xmm11, xmm10, 0xee");
            __asm__("pshufd xmm9, xmm9, 0xed");
            __asm__("pmuludq xmm11, xmm1");
            __asm__("pshufd xmm11, xmm11, 0xed");
            __asm__("pxor xmm12, xmm12");
            __asm__("punpckldq xmm9, xmm11");
            __asm__("pcmpgtd xmm12, xmm8");
            __asm__("pand xmm12, xmm1");
            __asm__("psubd xmm9, xmm12");
            __asm__("movdqa xmm11, xmm9");
            __asm__("paddq xmm10, xmm4");
            __asm__("pshufd xmm12, xmm10, 0xe8");
            __asm__("pshufd xmm13, xmm10, 0xee");
            __asm__("psrad xmm9, 0xa");
            __asm__("pmuludq xmm10, xmm1");
            __asm__("pshufd xmm10, xmm10, 0xed");
            __asm__("pmuludq xmm13, xmm1");
            __asm__("psrld xmm11, 0x1f");
            __asm__("pshufd xmm13, xmm13, 0xed");
            __asm__("punpckldq xmm10, xmm13");
            __asm__("pxor xmm13, xmm13");
            __asm__("paddd xmm9, xmm11");
            __asm__("pcmpgtd xmm13, xmm12");
            __asm__("pand xmm13, xmm1");
            __asm__("psubd xmm10, xmm13");
            __asm__("pshufd xmm11, xmm9, 0xf5");
            __asm__("pmuludq xmm9, xmm2");
            __asm__("pmuludq xmm11, xmm2");
            __asm__("punpckldq xmm9, xmm11");
            __asm__("movdqa xmm11, xmm10");
            __asm__("psrld xmm11, 0x1f");
            __asm__("psrad xmm10, 0xa");
            __asm__("psubd xmm8, xmm9");
            __asm__("paddd xmm10, xmm11");
            __asm__("pshufd xmm9, xmm10, 0xf5");
            __asm__("cvtdq2pd xmm8, xmm8");
            __asm__("pmuludq xmm10, xmm2");
            __asm__("pmuludq xmm9, xmm2");
            __asm__("punpckldq xmm10, xmm9");
            __asm__("divpd xmm8, xmm3");
            __asm__("psubd xmm12, xmm10");
            __asm__("cvtdq2pd xmm9, xmm12");
            __asm__("divpd xmm9, xmm3");
            __asm__("movupd [rdx+rcx*8], xmm8");
            __asm__("movupd [rsi+rdx], xmm9");
            rcx14 = rcx14 + 4;
            __asm__("paddq xmm7, xmm5");
        } while (rcx14 != 0x834);
        ++rax12;
    } while (rax12 != 0x76c);
    *reinterpret_cast<int32_t*>(&r15_15) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_15) + 4) = reinterpret_cast<int32_t>(free);
    fun_766(r12_9);
    rax16 = &r12_9->f41a0;
    do {
        rdx17 = reinterpret_cast<void*>(r15_15 * 0x41a0);
        rcx18 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rbx4) + reinterpret_cast<int64_t>(rdx17));
        rdi19 = reinterpret_cast<struct s13*>(reinterpret_cast<int64_t>(rbx4) + reinterpret_cast<int64_t>(rdx17) + 0x41a0);
        rdx20 = r13_11 + r15_15;
        rsi21 = reinterpret_cast<struct s13*>(r15_15 * 8 + 8 + reinterpret_cast<int64_t>(r13_11));
        r13_11[r15_15] = reinterpret_cast<int64_t>(free);
        __asm__("pxor xmm0, xmm0");
        *reinterpret_cast<int32_t*>(&r8_22) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_22) + 4) = reinterpret_cast<int32_t>(free);
        do {
            rdi19->f0 = rsi21->f0;
            rdi23 = reinterpret_cast<struct s16*>(&rdi19->f4);
            rsi24 = reinterpret_cast<struct s16*>(&rsi21->f4);
            __asm__("mulsd xmm1, [r14+r8*8]");
            __asm__("addsd xmm1, xmm0");
            rdi23->f0 = rsi24->f0;
            rdi25 = reinterpret_cast<struct s13*>(&rdi23->f4);
            rsi26 = reinterpret_cast<struct s13*>(&rsi24->f4);
            rdi25->f0 = rsi26->f0;
            rdi27 = reinterpret_cast<struct s16*>(&rdi25->f4);
            rsi28 = reinterpret_cast<struct s16*>(&rsi26->f4);
            __asm__("mulsd xmm2, [r14+r8*8+0x8]");
            __asm__("addsd xmm2, xmm1");
            rdi27->f0 = rsi28->f0;
            rdi29 = reinterpret_cast<struct s13*>(&rdi27->f4);
            rsi30 = reinterpret_cast<struct s13*>(&rsi28->f4);
            rdi29->f0 = rsi30->f0;
            rdi31 = reinterpret_cast<struct s16*>(&rdi29->f4);
            rsi32 = reinterpret_cast<struct s16*>(&rsi30->f4);
            __asm__("mulsd xmm0, [r14+r8*8+0x10]");
            __asm__("addsd xmm0, xmm2");
            rdi31->f0 = rsi32->f0;
            rdi19 = reinterpret_cast<struct s13*>(&rdi31->f4);
            rsi21 = reinterpret_cast<struct s13*>(&rsi32->f4);
            r8_22 = r8_22 + 3;
        } while (r8_22 != 0x834);
        r8b33 = reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(r12_9) < reinterpret_cast<uint64_t>(rdi19));
        *reinterpret_cast<unsigned char*>(&rsi21) = reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(r12_9) < reinterpret_cast<uint64_t>(rsi21));
        *reinterpret_cast<unsigned char*>(&rdi19) = reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(rdx20) < reinterpret_cast<uint64_t>(rax16));
        if (!reinterpret_cast<int1_t>((r8b33 & static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(rcx18) < reinterpret_cast<uint64_t>(rax16)))) == free)) {
            *reinterpret_cast<int32_t*>(&rdx34) = reinterpret_cast<int32_t>(free);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx34) + 4) = reinterpret_cast<int32_t>(free);
            goto addr_8b0_34;
        }
        *reinterpret_cast<int32_t*>(&rdx34) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx34) + 4) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<unsigned char*>(&rsi21) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rsi21) & *reinterpret_cast<unsigned char*>(&rdi19));
        if (!reinterpret_cast<int1_t>(*reinterpret_cast<unsigned char*>(&rsi21) == free)) {
            do {
                addr_8b0_34:
                rdi19->f0 = rsi21->f0;
                rdi35 = reinterpret_cast<struct s16*>(&rdi19->f4);
                __asm__("mulsd xmm0, [r13+r15*8+0x0]");
                __asm__("addsd xmm0, [r12+rdx*8]");
                rsi36 = reinterpret_cast<int32_t*>(rdx34 * 8);
                rdi35->f0 = *rsi36;
                rdi37 = reinterpret_cast<struct s13*>(&rdi35->f4);
                rsi38 = reinterpret_cast<struct s27*>(reinterpret_cast<uint64_t>(rsi36 + 1) | 8);
                rdi37->f0 = rsi38->f0;
                rdi39 = reinterpret_cast<struct s16*>(&rdi37->f4);
                rsi40 = reinterpret_cast<struct s28*>(&rsi38->f4);
                __asm__("mulsd xmm0, [r13+r15*8+0x0]");
                __asm__("addsd xmm0, [r12+rsi]");
                rdi39->f0 = rsi40->f0;
                rdi19 = reinterpret_cast<struct s13*>(&rdi39->f4);
                rsi21 = reinterpret_cast<struct s13*>(&rsi40->f4);
                rdx34 = rdx34 + 2;
            } while (rdx34 != 0x834);
        } else {
            rdi19->f0 = rsi21->f0;
            rsi21 = reinterpret_cast<struct s13*>(&rsi21->f4);
            __asm__("unpcklpd xmm0, xmm0");
            *reinterpret_cast<int32_t*>(&rdx41) = reinterpret_cast<int32_t>(free);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx41) + 4) = reinterpret_cast<int32_t>(free);
            do {
                __asm__("movupd xmm1, [r12+rdx*8]");
                __asm__("movupd xmm2, [r12+rdx*8+0x10]");
                __asm__("movupd xmm3, [rcx+rdx*8]");
                __asm__("movupd xmm4, [rcx+rdx*8+0x10]");
                __asm__("mulpd xmm3, xmm0");
                __asm__("addpd xmm3, xmm1");
                __asm__("mulpd xmm4, xmm0");
                __asm__("addpd xmm4, xmm2");
                __asm__("movupd [r12+rdx*8], xmm3");
                __asm__("movupd [r12+rdx*8+0x10], xmm4");
                rdx41 = rdx41 + 4;
            } while (rdx41 != 0x834);
            continue;
        }
        ++r15_15;
    } while (r15_15 != 0x76c);
    if (ebp42 >= 43 && reinterpret_cast<int1_t>(**v3 == free)) {
        rsi21 = r12_9;
        fun_91c(0x834, rsi21);
    }
    fun_924(rbx4, rsi21);
    fun_92c(r14_7, rsi21);
    fun_934(r12_9, rsi21);
    fun_93c(r13_11, rsi21);
    goto v43;
}

void fun_92c(int64_t rdi, struct s13* rsi) {
    struct s13* r12_3;
    int64_t* r13_4;
    int64_t v5;

    fun_934(r12_3, rsi);
    fun_93c(r13_4, rsi);
    goto v5;
}

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

void fun_1bb() {
    int32_t ebp1;
    int32_t ebp2;
    int64_t r12_3;
    int32_t ebp4;
    int64_t r13_5;
    int32_t* rdi6;
    int32_t* rsi7;
    int32_t* rbx8;
    int32_t* rbx9;
    int64_t rbx10;
    int64_t* rbx11;
    int64_t* r9_12;
    struct s0* r14_13;
    struct s0* r8_14;
    int64_t* v15;
    struct s29* rsi16;
    struct s30* rdi17;
    int64_t v18;
    int64_t r9_19;
    int64_t r11_20;
    int64_t* r10_21;
    struct s29* rdx22;
    struct s31* rdi23;
    struct s32* rsi24;
    struct s30* rdi25;
    struct s29* rsi26;
    struct s31* rdi27;
    struct s32* rsi28;
    struct s31* rdi29;
    struct s32* rsi30;
    struct s30* rdx31;
    struct s30* rcx32;
    struct s31* rdi33;
    struct s32* rsi34;
    struct s30* rcx35;
    struct s31* rdi36;
    struct s32* rsi37;
    struct s30* rdi38;
    struct s29* rsi39;
    struct s31* rdi40;
    struct s32* rsi41;
    int64_t v42;

    if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(ebp1 < reinterpret_cast<int32_t>(free) == free)) | reinterpret_cast<uint1_t>(ebp2 == free))) {
        *reinterpret_cast<int32_t*>(&r12_3) = ebp4;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_3) + 4) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(&r13_5) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_5) + 4) = reinterpret_cast<int32_t>(free);
        do {
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&r13_5) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi6) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi6) + 4) = reinterpret_cast<int32_t>(free);
                rsi7 = rbx8;
                fun_209();
            }
            *rdi6 = *rsi7;
            rdi6 = rbx9;
            rsi7 = reinterpret_cast<int32_t*>(0x1cc);
            fun_1e3();
            ++r13_5;
        } while (r13_5 != r12_3);
    }
    fun_223(rbx10, 0x212, 0x219);
    rbx11 = r9_12;
    r14_13 = r8_14;
    if (!free) {
        fun_289(r14_13);
    }
    if (!free) {
        v15 = &r14_13->fb0;
        *reinterpret_cast<uint32_t*>(&rsi16) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi16) + 4) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<uint32_t*>(&rdi17) = 20;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi17) + 4) = reinterpret_cast<int32_t>(free);
        v18 = -22;
        *reinterpret_cast<int32_t*>(&r9_19) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_19) + 4) = reinterpret_cast<int32_t>(free);
        while (1) {
            rbx11[r9_19] = reinterpret_cast<int64_t>(free);
            if (free) {
                addr_2e0_19:
                ++r9_19;
                if (r9_19 == 0x22a) 
                    break; else 
                    continue;
            } else {
                r11_20 = r9_19 * 0x41a0;
                r10_21 = reinterpret_cast<int64_t*>(1 + r11_20);
                __asm__("xorpd xmm0, xmm0");
                *reinterpret_cast<int32_t*>(&rdx22) = reinterpret_cast<int32_t>(free);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx22) + 4) = reinterpret_cast<int32_t>(free);
                if (!free) {
                    do {
                        rdi17->f0 = rsi16->f0;
                        rdi23 = reinterpret_cast<struct s31*>(&rdi17->f4);
                        rsi24 = reinterpret_cast<struct s32*>(&rsi16->f4);
                        __asm__("mulsd xmm1, [r15+rcx*8]");
                        __asm__("addsd xmm1, xmm0");
                        rdi23->f0 = rsi24->f0;
                        rdi25 = reinterpret_cast<struct s30*>(&rdi23->f4);
                        rsi26 = reinterpret_cast<struct s29*>(&rsi24->f4);
                        rdi25->f0 = rsi26->f0;
                        rdi27 = reinterpret_cast<struct s31*>(&rdi25->f4);
                        rsi28 = reinterpret_cast<struct s32*>(&rsi26->f4);
                        __asm__("mulsd xmm0, [r15+r8]");
                        __asm__("addsd xmm0, xmm1");
                        rdi27->f0 = rsi28->f0;
                        rdi17 = reinterpret_cast<struct s30*>(&rdi27->f4);
                        rsi16 = reinterpret_cast<struct s29*>(&rsi28->f4);
                        rdx22 = reinterpret_cast<struct s29*>(reinterpret_cast<int64_t>(rdx22) + 2);
                    } while (rdx22 != rsi16);
                }
                if (!1) {
                    rdi17->f0 = rsi16->f0;
                    rdi29 = reinterpret_cast<struct s31*>(&rdi17->f4);
                    rsi30 = reinterpret_cast<struct s32*>(&rsi16->f4);
                    __asm__("mulsd xmm1, [r15+rcx*8]");
                    __asm__("addsd xmm1, xmm0");
                    rdi29->f0 = rsi30->f0;
                    rdi17 = reinterpret_cast<struct s30*>(&rdi29->f4);
                    rsi16 = reinterpret_cast<struct s29*>(&rsi30->f4);
                }
                if (free) 
                    goto addr_2e0_19;
            }
            if (!1) {
                *reinterpret_cast<int32_t*>(&rdx31) = reinterpret_cast<int32_t>(free);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx31) + 4) = reinterpret_cast<int32_t>(free);
                goto addr_450_45;
            }
            if (!reinterpret_cast<int1_t>((static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(r11_20 + 0xb1) > reinterpret_cast<uint64_t>(r14_13))) & static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(r10_21) < reinterpret_cast<uint64_t>(v15)))) == free)) {
                *reinterpret_cast<int32_t*>(&rdx31) = reinterpret_cast<int32_t>(free);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx31) + 4) = reinterpret_cast<int32_t>(free);
                goto addr_450_45;
            }
            *reinterpret_cast<int32_t*>(&rdx31) = reinterpret_cast<int32_t>(free);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx31) + 4) = reinterpret_cast<int32_t>(free);
            if (!reinterpret_cast<int1_t>((static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(rbx11 + r9_19 + 1) > reinterpret_cast<uint64_t>(r14_13))) & static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(rbx11 + r9_19) < reinterpret_cast<uint64_t>(v15)))) == free)) {
                addr_450_45:
                rcx32 = rdx31;
                if (!1) {
                    rdi17->f0 = rsi16->f0;
                    rdi33 = reinterpret_cast<struct s31*>(&rdi17->f4);
                    rsi34 = reinterpret_cast<struct s32*>(&rsi16->f4);
                    __asm__("mulsd xmm0, [rbx+r9*8]");
                    __asm__("addsd xmm0, [r14+rdx*8]");
                    rdi33->f0 = rsi34->f0;
                    rdi17 = reinterpret_cast<struct s30*>(&rdi33->f4);
                    rsi16 = reinterpret_cast<struct s29*>(&rsi34->f4);
                    rcx32 = reinterpret_cast<struct s30*>(reinterpret_cast<uint64_t>(rdx31) | 1);
                }
            } else {
                rdi17->f0 = rsi16->f0;
                rdi17 = reinterpret_cast<struct s30*>(&rdi17->f4);
                rsi16 = reinterpret_cast<struct s29*>(&rsi16->f4);
                __asm__("unpcklpd xmm0, xmm0");
                *reinterpret_cast<int32_t*>(&rcx35) = reinterpret_cast<int32_t>(free);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx35) + 4) = reinterpret_cast<int32_t>(free);
                do {
                    __asm__("movupd xmm1, [r14+rcx*8]");
                    __asm__("movupd xmm2, [r14+rcx*8+0x10]");
                    __asm__("movupd xmm3, [r10+rcx*8]");
                    __asm__("movupd xmm4, [r10+rcx*8+0x10]");
                    __asm__("mulpd xmm3, xmm0");
                    __asm__("addpd xmm3, xmm1");
                    __asm__("mulpd xmm4, xmm0");
                    __asm__("addpd xmm4, xmm2");
                    __asm__("movupd [r14+rcx*8], xmm3");
                    __asm__("movupd [r14+rcx*8+0x10], xmm4");
                    rcx35 = reinterpret_cast<struct s30*>(&rcx35->f4);
                } while (rcx35 != rdi17);
                rdx31 = rdi17;
                if (rdi17 == 22) 
                    goto addr_2e0_19; else 
                    goto addr_43c_62;
            }
            if (~reinterpret_cast<uint64_t>(rdx31) != v18) {
                do {
                    rdi17->f0 = rsi16->f0;
                    rdi36 = reinterpret_cast<struct s31*>(&rdi17->f4);
                    rsi37 = reinterpret_cast<struct s32*>(&rsi16->f4);
                    __asm__("mulsd xmm0, [rbx+r9*8]");
                    __asm__("addsd xmm0, [r14+rcx*8]");
                    rdi36->f0 = rsi37->f0;
                    rdi38 = reinterpret_cast<struct s30*>(&rdi36->f4);
                    rsi39 = reinterpret_cast<struct s29*>(&rsi37->f4);
                    rdi38->f0 = rsi39->f0;
                    rdi40 = reinterpret_cast<struct s31*>(&rdi38->f4);
                    rsi41 = reinterpret_cast<struct s32*>(&rsi39->f4);
                    __asm__("mulsd xmm0, [rbx+r9*8]");
                    __asm__("addsd xmm0, [r14+rcx*8+0x8]");
                    rdi40->f0 = rsi41->f0;
                    rdi17 = reinterpret_cast<struct s30*>(&rdi40->f4);
                    rsi16 = reinterpret_cast<struct s29*>(&rsi41->f4);
                    rcx32 = reinterpret_cast<struct s30*>(reinterpret_cast<uint64_t>(rcx32) + 2);
                } while (!reinterpret_cast<int1_t>(rcx32 == 22));
                goto addr_2e0_19;
            }
            addr_43c_62:
            goto addr_450_45;
        }
    }
    goto v42;
}

struct s33 {
    int32_t f0;
    int32_t f4;
};

struct s34 {
    int32_t f0;
    int32_t f4;
};

int64_t fun_512(int64_t rdi, int64_t rsi) {
    signed char** v3;
    int64_t r14_4;
    int64_t rax5;
    struct s13* rax6;
    struct s13* r12_7;
    int64_t* rax8;
    int64_t* r13_9;
    int64_t rax10;
    int64_t rcx11;
    int64_t rcx12;
    int64_t r15_13;
    int64_t* rax14;
    void* rdx15;
    int64_t* rcx16;
    int64_t* rbx17;
    struct s13* rdi18;
    void* rbx19;
    int64_t* rdx20;
    struct s13* rsi21;
    int64_t r8_22;
    struct s16* rdi23;
    struct s16* rsi24;
    struct s13* rdi25;
    struct s13* rsi26;
    struct s16* rdi27;
    struct s16* rsi28;
    struct s13* rdi29;
    struct s13* rsi30;
    struct s16* rdi31;
    struct s16* rsi32;
    unsigned char r8b33;
    int64_t rdx34;
    struct s16* rdi35;
    int32_t* rsi36;
    struct s13* rdi37;
    struct s33* rsi38;
    struct s16* rdi39;
    struct s34* rsi40;
    int64_t rdx41;
    int32_t ebp42;
    int64_t* rbx43;
    int64_t v44;

    v3 = reinterpret_cast<signed char**>(__return_address());
    r14_4 = rax5;
    rax6 = fun_524(0x834, 8);
    r12_7 = rax6;
    rax8 = fun_536(0x76c, 8);
    r13_9 = rax8;
    __asm__("movdqa xmm0, [rip+0x0]");
    *reinterpret_cast<int32_t*>(&rax10) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax10) + 4) = reinterpret_cast<int32_t>(free);
    __asm__("movapd xmm1, [rip+0x0]");
    __asm__("movapd xmm2, [rip+0x0]");
    __asm__("movdqa xmm3, [rip+0x0]");
    __asm__("movdqa xmm4, [rip+0x0]");
    __asm__("movdqa xmm5, [rip+0x0]");
    *reinterpret_cast<int32_t*>(&rcx11) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx11) + 4) = reinterpret_cast<int32_t>(free);
    do {
        __asm__("cvtdq2pd xmm6, xmm0");
        __asm__("divpd xmm6, xmm1");
        __asm__("addpd xmm6, xmm2");
        __asm__("movupd [r14+rcx*8], xmm6");
        __asm__("movdqa xmm6, xmm0");
        __asm__("paddd xmm6, xmm3");
        __asm__("cvtdq2pd xmm6, xmm6");
        __asm__("divpd xmm6, xmm1");
        __asm__("addpd xmm6, xmm2");
        __asm__("movupd [r14+rcx*8+0x10], xmm6");
        __asm__("movdqa xmm6, xmm0");
        __asm__("paddd xmm6, xmm4");
        __asm__("cvtdq2pd xmm6, xmm6");
        __asm__("divpd xmm6, xmm1");
        __asm__("addpd xmm6, xmm2");
        __asm__("movupd [r14+rcx*8+0x20], xmm6");
        rcx11 = rcx11 + 6;
        __asm__("paddd xmm0, xmm5");
    } while (rcx11 != 0x834);
    __asm__("movdqa xmm0, [rip+0x0]");
    __asm__("movdqa xmm1, [rip+0x0]");
    __asm__("movdqa xmm2, [rip+0x0]");
    __asm__("movapd xmm3, [rip+0x0]");
    __asm__("movdqa xmm4, [rip+0x0]");
    __asm__("movdqa xmm5, [rip+0x0]");
    do {
        __asm__("movd xmm6, rax");
        __asm__("pshufd xmm6, xmm6, 0x44");
        *reinterpret_cast<int32_t*>(&rcx12) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx12) + 4) = reinterpret_cast<int32_t>(free);
        __asm__("movdqa xmm7, xmm0");
        do {
            __asm__("movdqa xmm10, xmm7");
            __asm__("paddq xmm10, xmm6");
            __asm__("pshufd xmm8, xmm10, 0xe8");
            __asm__("movdqa xmm9, xmm10");
            __asm__("pmuludq xmm9, xmm1");
            __asm__("pshufd xmm11, xmm10, 0xee");
            __asm__("pshufd xmm9, xmm9, 0xed");
            __asm__("pmuludq xmm11, xmm1");
            __asm__("pshufd xmm11, xmm11, 0xed");
            __asm__("pxor xmm12, xmm12");
            __asm__("punpckldq xmm9, xmm11");
            __asm__("pcmpgtd xmm12, xmm8");
            __asm__("pand xmm12, xmm1");
            __asm__("psubd xmm9, xmm12");
            __asm__("movdqa xmm11, xmm9");
            __asm__("paddq xmm10, xmm4");
            __asm__("pshufd xmm12, xmm10, 0xe8");
            __asm__("pshufd xmm13, xmm10, 0xee");
            __asm__("psrad xmm9, 0xa");
            __asm__("pmuludq xmm10, xmm1");
            __asm__("pshufd xmm10, xmm10, 0xed");
            __asm__("pmuludq xmm13, xmm1");
            __asm__("psrld xmm11, 0x1f");
            __asm__("pshufd xmm13, xmm13, 0xed");
            __asm__("punpckldq xmm10, xmm13");
            __asm__("pxor xmm13, xmm13");
            __asm__("paddd xmm9, xmm11");
            __asm__("pcmpgtd xmm13, xmm12");
            __asm__("pand xmm13, xmm1");
            __asm__("psubd xmm10, xmm13");
            __asm__("pshufd xmm11, xmm9, 0xf5");
            __asm__("pmuludq xmm9, xmm2");
            __asm__("pmuludq xmm11, xmm2");
            __asm__("punpckldq xmm9, xmm11");
            __asm__("movdqa xmm11, xmm10");
            __asm__("psrld xmm11, 0x1f");
            __asm__("psrad xmm10, 0xa");
            __asm__("psubd xmm8, xmm9");
            __asm__("paddd xmm10, xmm11");
            __asm__("pshufd xmm9, xmm10, 0xf5");
            __asm__("cvtdq2pd xmm8, xmm8");
            __asm__("pmuludq xmm10, xmm2");
            __asm__("pmuludq xmm9, xmm2");
            __asm__("punpckldq xmm10, xmm9");
            __asm__("divpd xmm8, xmm3");
            __asm__("psubd xmm12, xmm10");
            __asm__("cvtdq2pd xmm9, xmm12");
            __asm__("divpd xmm9, xmm3");
            __asm__("movupd [rdx+rcx*8], xmm8");
            __asm__("movupd [rsi+rdx], xmm9");
            rcx12 = rcx12 + 4;
            __asm__("paddq xmm7, xmm5");
        } while (rcx12 != 0x834);
        ++rax10;
    } while (rax10 != 0x76c);
    *reinterpret_cast<int32_t*>(&r15_13) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_13) + 4) = reinterpret_cast<int32_t>(free);
    fun_766(r12_7);
    rax14 = &r12_7->f41a0;
    do {
        rdx15 = reinterpret_cast<void*>(r15_13 * 0x41a0);
        rcx16 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rbx17) + reinterpret_cast<int64_t>(rdx15));
        rdi18 = reinterpret_cast<struct s13*>(reinterpret_cast<int64_t>(rbx19) + reinterpret_cast<int64_t>(rdx15) + 0x41a0);
        rdx20 = r13_9 + r15_13;
        rsi21 = reinterpret_cast<struct s13*>(r15_13 * 8 + 8 + reinterpret_cast<int64_t>(r13_9));
        r13_9[r15_13] = reinterpret_cast<int64_t>(free);
        __asm__("pxor xmm0, xmm0");
        *reinterpret_cast<int32_t*>(&r8_22) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_22) + 4) = reinterpret_cast<int32_t>(free);
        do {
            rdi18->f0 = rsi21->f0;
            rdi23 = reinterpret_cast<struct s16*>(&rdi18->f4);
            rsi24 = reinterpret_cast<struct s16*>(&rsi21->f4);
            __asm__("mulsd xmm1, [r14+r8*8]");
            __asm__("addsd xmm1, xmm0");
            rdi23->f0 = rsi24->f0;
            rdi25 = reinterpret_cast<struct s13*>(&rdi23->f4);
            rsi26 = reinterpret_cast<struct s13*>(&rsi24->f4);
            rdi25->f0 = rsi26->f0;
            rdi27 = reinterpret_cast<struct s16*>(&rdi25->f4);
            rsi28 = reinterpret_cast<struct s16*>(&rsi26->f4);
            __asm__("mulsd xmm2, [r14+r8*8+0x8]");
            __asm__("addsd xmm2, xmm1");
            rdi27->f0 = rsi28->f0;
            rdi29 = reinterpret_cast<struct s13*>(&rdi27->f4);
            rsi30 = reinterpret_cast<struct s13*>(&rsi28->f4);
            rdi29->f0 = rsi30->f0;
            rdi31 = reinterpret_cast<struct s16*>(&rdi29->f4);
            rsi32 = reinterpret_cast<struct s16*>(&rsi30->f4);
            __asm__("mulsd xmm0, [r14+r8*8+0x10]");
            __asm__("addsd xmm0, xmm2");
            rdi31->f0 = rsi32->f0;
            rdi18 = reinterpret_cast<struct s13*>(&rdi31->f4);
            rsi21 = reinterpret_cast<struct s13*>(&rsi32->f4);
            r8_22 = r8_22 + 3;
        } while (r8_22 != 0x834);
        r8b33 = reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(r12_7) < reinterpret_cast<uint64_t>(rdi18));
        *reinterpret_cast<unsigned char*>(&rsi21) = reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(r12_7) < reinterpret_cast<uint64_t>(rsi21));
        *reinterpret_cast<unsigned char*>(&rdi18) = reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(rdx20) < reinterpret_cast<uint64_t>(rax14));
        if (!reinterpret_cast<int1_t>((r8b33 & static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(rcx16) < reinterpret_cast<uint64_t>(rax14)))) == free)) {
            *reinterpret_cast<int32_t*>(&rdx34) = reinterpret_cast<int32_t>(free);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx34) + 4) = reinterpret_cast<int32_t>(free);
            goto addr_8b0_33;
        }
        *reinterpret_cast<int32_t*>(&rdx34) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx34) + 4) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<unsigned char*>(&rsi21) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rsi21) & *reinterpret_cast<unsigned char*>(&rdi18));
        if (!reinterpret_cast<int1_t>(*reinterpret_cast<unsigned char*>(&rsi21) == free)) {
            do {
                addr_8b0_33:
                rdi18->f0 = rsi21->f0;
                rdi35 = reinterpret_cast<struct s16*>(&rdi18->f4);
                __asm__("mulsd xmm0, [r13+r15*8+0x0]");
                __asm__("addsd xmm0, [r12+rdx*8]");
                rsi36 = reinterpret_cast<int32_t*>(rdx34 * 8);
                rdi35->f0 = *rsi36;
                rdi37 = reinterpret_cast<struct s13*>(&rdi35->f4);
                rsi38 = reinterpret_cast<struct s33*>(reinterpret_cast<uint64_t>(rsi36 + 1) | 8);
                rdi37->f0 = rsi38->f0;
                rdi39 = reinterpret_cast<struct s16*>(&rdi37->f4);
                rsi40 = reinterpret_cast<struct s34*>(&rsi38->f4);
                __asm__("mulsd xmm0, [r13+r15*8+0x0]");
                __asm__("addsd xmm0, [r12+rsi]");
                rdi39->f0 = rsi40->f0;
                rdi18 = reinterpret_cast<struct s13*>(&rdi39->f4);
                rsi21 = reinterpret_cast<struct s13*>(&rsi40->f4);
                rdx34 = rdx34 + 2;
            } while (rdx34 != 0x834);
        } else {
            rdi18->f0 = rsi21->f0;
            rsi21 = reinterpret_cast<struct s13*>(&rsi21->f4);
            __asm__("unpcklpd xmm0, xmm0");
            *reinterpret_cast<int32_t*>(&rdx41) = reinterpret_cast<int32_t>(free);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx41) + 4) = reinterpret_cast<int32_t>(free);
            do {
                __asm__("movupd xmm1, [r12+rdx*8]");
                __asm__("movupd xmm2, [r12+rdx*8+0x10]");
                __asm__("movupd xmm3, [rcx+rdx*8]");
                __asm__("movupd xmm4, [rcx+rdx*8+0x10]");
                __asm__("mulpd xmm3, xmm0");
                __asm__("addpd xmm3, xmm1");
                __asm__("mulpd xmm4, xmm0");
                __asm__("addpd xmm4, xmm2");
                __asm__("movupd [r12+rdx*8], xmm3");
                __asm__("movupd [r12+rdx*8+0x10], xmm4");
                rdx41 = rdx41 + 4;
            } while (rdx41 != 0x834);
            continue;
        }
        ++r15_13;
    } while (r15_13 != 0x76c);
    if (ebp42 >= 43 && reinterpret_cast<int1_t>(**v3 == free)) {
        rsi21 = r12_7;
        fun_91c(0x834, rsi21);
    }
    fun_924(rbx43, rsi21);
    fun_92c(r14_4, rsi21);
    fun_934(r12_7, rsi21);
    fun_93c(r13_9, rsi21);
    goto v44;
}

void fun_934(struct s13* rdi, struct s13* rsi) {
    int64_t* r13_3;
    int64_t v4;

    fun_93c(r13_3, rsi);
    goto v4;
}

struct s35 {
    int32_t f0;
    int32_t f4;
};

struct s36 {
    int32_t f0;
    int32_t f4;
};

struct s13* fun_524(int64_t rdi, int64_t rsi) {
    signed char** v3;
    struct s13* r12_4;
    struct s13* rax5;
    int64_t* rax6;
    int64_t* r13_7;
    int64_t rax8;
    int64_t rcx9;
    int64_t rcx10;
    int64_t r15_11;
    int64_t* rax12;
    void* rdx13;
    int64_t* rcx14;
    int64_t* rbx15;
    struct s13* rdi16;
    void* rbx17;
    int64_t* rdx18;
    struct s13* rsi19;
    int64_t r8_20;
    struct s16* rdi21;
    struct s16* rsi22;
    struct s13* rdi23;
    struct s13* rsi24;
    struct s16* rdi25;
    struct s16* rsi26;
    struct s13* rdi27;
    struct s13* rsi28;
    struct s16* rdi29;
    struct s16* rsi30;
    unsigned char r8b31;
    int64_t rdx32;
    struct s16* rdi33;
    int32_t* rsi34;
    struct s13* rdi35;
    struct s35* rsi36;
    struct s16* rdi37;
    struct s36* rsi38;
    int64_t rdx39;
    int32_t ebp40;
    int64_t* rbx41;
    int64_t r14_42;
    int64_t v43;

    v3 = reinterpret_cast<signed char**>(__return_address());
    r12_4 = rax5;
    rax6 = fun_536(0x76c, 8);
    r13_7 = rax6;
    __asm__("movdqa xmm0, [rip+0x0]");
    *reinterpret_cast<int32_t*>(&rax8) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax8) + 4) = reinterpret_cast<int32_t>(free);
    __asm__("movapd xmm1, [rip+0x0]");
    __asm__("movapd xmm2, [rip+0x0]");
    __asm__("movdqa xmm3, [rip+0x0]");
    __asm__("movdqa xmm4, [rip+0x0]");
    __asm__("movdqa xmm5, [rip+0x0]");
    *reinterpret_cast<int32_t*>(&rcx9) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx9) + 4) = reinterpret_cast<int32_t>(free);
    do {
        __asm__("cvtdq2pd xmm6, xmm0");
        __asm__("divpd xmm6, xmm1");
        __asm__("addpd xmm6, xmm2");
        __asm__("movupd [r14+rcx*8], xmm6");
        __asm__("movdqa xmm6, xmm0");
        __asm__("paddd xmm6, xmm3");
        __asm__("cvtdq2pd xmm6, xmm6");
        __asm__("divpd xmm6, xmm1");
        __asm__("addpd xmm6, xmm2");
        __asm__("movupd [r14+rcx*8+0x10], xmm6");
        __asm__("movdqa xmm6, xmm0");
        __asm__("paddd xmm6, xmm4");
        __asm__("cvtdq2pd xmm6, xmm6");
        __asm__("divpd xmm6, xmm1");
        __asm__("addpd xmm6, xmm2");
        __asm__("movupd [r14+rcx*8+0x20], xmm6");
        rcx9 = rcx9 + 6;
        __asm__("paddd xmm0, xmm5");
    } while (rcx9 != 0x834);
    __asm__("movdqa xmm0, [rip+0x0]");
    __asm__("movdqa xmm1, [rip+0x0]");
    __asm__("movdqa xmm2, [rip+0x0]");
    __asm__("movapd xmm3, [rip+0x0]");
    __asm__("movdqa xmm4, [rip+0x0]");
    __asm__("movdqa xmm5, [rip+0x0]");
    do {
        __asm__("movd xmm6, rax");
        __asm__("pshufd xmm6, xmm6, 0x44");
        *reinterpret_cast<int32_t*>(&rcx10) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx10) + 4) = reinterpret_cast<int32_t>(free);
        __asm__("movdqa xmm7, xmm0");
        do {
            __asm__("movdqa xmm10, xmm7");
            __asm__("paddq xmm10, xmm6");
            __asm__("pshufd xmm8, xmm10, 0xe8");
            __asm__("movdqa xmm9, xmm10");
            __asm__("pmuludq xmm9, xmm1");
            __asm__("pshufd xmm11, xmm10, 0xee");
            __asm__("pshufd xmm9, xmm9, 0xed");
            __asm__("pmuludq xmm11, xmm1");
            __asm__("pshufd xmm11, xmm11, 0xed");
            __asm__("pxor xmm12, xmm12");
            __asm__("punpckldq xmm9, xmm11");
            __asm__("pcmpgtd xmm12, xmm8");
            __asm__("pand xmm12, xmm1");
            __asm__("psubd xmm9, xmm12");
            __asm__("movdqa xmm11, xmm9");
            __asm__("paddq xmm10, xmm4");
            __asm__("pshufd xmm12, xmm10, 0xe8");
            __asm__("pshufd xmm13, xmm10, 0xee");
            __asm__("psrad xmm9, 0xa");
            __asm__("pmuludq xmm10, xmm1");
            __asm__("pshufd xmm10, xmm10, 0xed");
            __asm__("pmuludq xmm13, xmm1");
            __asm__("psrld xmm11, 0x1f");
            __asm__("pshufd xmm13, xmm13, 0xed");
            __asm__("punpckldq xmm10, xmm13");
            __asm__("pxor xmm13, xmm13");
            __asm__("paddd xmm9, xmm11");
            __asm__("pcmpgtd xmm13, xmm12");
            __asm__("pand xmm13, xmm1");
            __asm__("psubd xmm10, xmm13");
            __asm__("pshufd xmm11, xmm9, 0xf5");
            __asm__("pmuludq xmm9, xmm2");
            __asm__("pmuludq xmm11, xmm2");
            __asm__("punpckldq xmm9, xmm11");
            __asm__("movdqa xmm11, xmm10");
            __asm__("psrld xmm11, 0x1f");
            __asm__("psrad xmm10, 0xa");
            __asm__("psubd xmm8, xmm9");
            __asm__("paddd xmm10, xmm11");
            __asm__("pshufd xmm9, xmm10, 0xf5");
            __asm__("cvtdq2pd xmm8, xmm8");
            __asm__("pmuludq xmm10, xmm2");
            __asm__("pmuludq xmm9, xmm2");
            __asm__("punpckldq xmm10, xmm9");
            __asm__("divpd xmm8, xmm3");
            __asm__("psubd xmm12, xmm10");
            __asm__("cvtdq2pd xmm9, xmm12");
            __asm__("divpd xmm9, xmm3");
            __asm__("movupd [rdx+rcx*8], xmm8");
            __asm__("movupd [rsi+rdx], xmm9");
            rcx10 = rcx10 + 4;
            __asm__("paddq xmm7, xmm5");
        } while (rcx10 != 0x834);
        ++rax8;
    } while (rax8 != 0x76c);
    *reinterpret_cast<int32_t*>(&r15_11) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_11) + 4) = reinterpret_cast<int32_t>(free);
    fun_766(r12_4);
    rax12 = &r12_4->f41a0;
    do {
        rdx13 = reinterpret_cast<void*>(r15_11 * 0x41a0);
        rcx14 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rbx15) + reinterpret_cast<int64_t>(rdx13));
        rdi16 = reinterpret_cast<struct s13*>(reinterpret_cast<int64_t>(rbx17) + reinterpret_cast<int64_t>(rdx13) + 0x41a0);
        rdx18 = r13_7 + r15_11;
        rsi19 = reinterpret_cast<struct s13*>(r15_11 * 8 + 8 + reinterpret_cast<int64_t>(r13_7));
        r13_7[r15_11] = reinterpret_cast<int64_t>(free);
        __asm__("pxor xmm0, xmm0");
        *reinterpret_cast<int32_t*>(&r8_20) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_20) + 4) = reinterpret_cast<int32_t>(free);
        do {
            rdi16->f0 = rsi19->f0;
            rdi21 = reinterpret_cast<struct s16*>(&rdi16->f4);
            rsi22 = reinterpret_cast<struct s16*>(&rsi19->f4);
            __asm__("mulsd xmm1, [r14+r8*8]");
            __asm__("addsd xmm1, xmm0");
            rdi21->f0 = rsi22->f0;
            rdi23 = reinterpret_cast<struct s13*>(&rdi21->f4);
            rsi24 = reinterpret_cast<struct s13*>(&rsi22->f4);
            rdi23->f0 = rsi24->f0;
            rdi25 = reinterpret_cast<struct s16*>(&rdi23->f4);
            rsi26 = reinterpret_cast<struct s16*>(&rsi24->f4);
            __asm__("mulsd xmm2, [r14+r8*8+0x8]");
            __asm__("addsd xmm2, xmm1");
            rdi25->f0 = rsi26->f0;
            rdi27 = reinterpret_cast<struct s13*>(&rdi25->f4);
            rsi28 = reinterpret_cast<struct s13*>(&rsi26->f4);
            rdi27->f0 = rsi28->f0;
            rdi29 = reinterpret_cast<struct s16*>(&rdi27->f4);
            rsi30 = reinterpret_cast<struct s16*>(&rsi28->f4);
            __asm__("mulsd xmm0, [r14+r8*8+0x10]");
            __asm__("addsd xmm0, xmm2");
            rdi29->f0 = rsi30->f0;
            rdi16 = reinterpret_cast<struct s13*>(&rdi29->f4);
            rsi19 = reinterpret_cast<struct s13*>(&rsi30->f4);
            r8_20 = r8_20 + 3;
        } while (r8_20 != 0x834);
        r8b31 = reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(r12_4) < reinterpret_cast<uint64_t>(rdi16));
        *reinterpret_cast<unsigned char*>(&rsi19) = reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(r12_4) < reinterpret_cast<uint64_t>(rsi19));
        *reinterpret_cast<unsigned char*>(&rdi16) = reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(rdx18) < reinterpret_cast<uint64_t>(rax12));
        if (!reinterpret_cast<int1_t>((r8b31 & static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(rcx14) < reinterpret_cast<uint64_t>(rax12)))) == free)) {
            *reinterpret_cast<int32_t*>(&rdx32) = reinterpret_cast<int32_t>(free);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx32) + 4) = reinterpret_cast<int32_t>(free);
            goto addr_8b0_32;
        }
        *reinterpret_cast<int32_t*>(&rdx32) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx32) + 4) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<unsigned char*>(&rsi19) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rsi19) & *reinterpret_cast<unsigned char*>(&rdi16));
        if (!reinterpret_cast<int1_t>(*reinterpret_cast<unsigned char*>(&rsi19) == free)) {
            do {
                addr_8b0_32:
                rdi16->f0 = rsi19->f0;
                rdi33 = reinterpret_cast<struct s16*>(&rdi16->f4);
                __asm__("mulsd xmm0, [r13+r15*8+0x0]");
                __asm__("addsd xmm0, [r12+rdx*8]");
                rsi34 = reinterpret_cast<int32_t*>(rdx32 * 8);
                rdi33->f0 = *rsi34;
                rdi35 = reinterpret_cast<struct s13*>(&rdi33->f4);
                rsi36 = reinterpret_cast<struct s35*>(reinterpret_cast<uint64_t>(rsi34 + 1) | 8);
                rdi35->f0 = rsi36->f0;
                rdi37 = reinterpret_cast<struct s16*>(&rdi35->f4);
                rsi38 = reinterpret_cast<struct s36*>(&rsi36->f4);
                __asm__("mulsd xmm0, [r13+r15*8+0x0]");
                __asm__("addsd xmm0, [r12+rsi]");
                rdi37->f0 = rsi38->f0;
                rdi16 = reinterpret_cast<struct s13*>(&rdi37->f4);
                rsi19 = reinterpret_cast<struct s13*>(&rsi38->f4);
                rdx32 = rdx32 + 2;
            } while (rdx32 != 0x834);
        } else {
            rdi16->f0 = rsi19->f0;
            rsi19 = reinterpret_cast<struct s13*>(&rsi19->f4);
            __asm__("unpcklpd xmm0, xmm0");
            *reinterpret_cast<int32_t*>(&rdx39) = reinterpret_cast<int32_t>(free);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx39) + 4) = reinterpret_cast<int32_t>(free);
            do {
                __asm__("movupd xmm1, [r12+rdx*8]");
                __asm__("movupd xmm2, [r12+rdx*8+0x10]");
                __asm__("movupd xmm3, [rcx+rdx*8]");
                __asm__("movupd xmm4, [rcx+rdx*8+0x10]");
                __asm__("mulpd xmm3, xmm0");
                __asm__("addpd xmm3, xmm1");
                __asm__("mulpd xmm4, xmm0");
                __asm__("addpd xmm4, xmm2");
                __asm__("movupd [r12+rdx*8], xmm3");
                __asm__("movupd [r12+rdx*8+0x10], xmm4");
                rdx39 = rdx39 + 4;
            } while (rdx39 != 0x834);
            continue;
        }
        ++r15_11;
    } while (r15_11 != 0x76c);
    if (ebp40 >= 43 && reinterpret_cast<int1_t>(**v3 == free)) {
        rsi19 = r12_4;
        fun_91c(0x834, rsi19);
    }
    fun_924(rbx41, rsi19);
    fun_92c(r14_42, rsi19);
    fun_934(r12_4, rsi19);
    fun_93c(r13_7, rsi19);
    goto v43;
}

void fun_93c(int64_t* rdi, struct s13* rsi) {
    int64_t v3;

    goto v3;
}

struct s37 {
    signed char[16800] pad16800;
    int64_t f41a0;
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

int64_t* fun_536(int64_t rdi, int64_t rsi) {
    signed char** v3;
    int64_t* r13_4;
    int64_t* rax5;
    int64_t rax6;
    int64_t rcx7;
    int64_t rcx8;
    int64_t r15_9;
    struct s13* r12_10;
    int64_t* rax11;
    struct s37* r12_12;
    void* rdx13;
    int64_t* rcx14;
    int64_t* rbx15;
    struct s38* rdi16;
    void* rbx17;
    int64_t* rdx18;
    struct s13* rsi19;
    int64_t r8_20;
    struct s39* rdi21;
    struct s16* rsi22;
    struct s38* rdi23;
    struct s13* rsi24;
    struct s39* rdi25;
    struct s16* rsi26;
    struct s38* rdi27;
    struct s13* rsi28;
    struct s39* rdi29;
    struct s16* rsi30;
    unsigned char r8b31;
    struct s38* r12_32;
    struct s13* r12_33;
    int64_t rdx34;
    struct s39* rdi35;
    int32_t* rsi36;
    struct s38* rdi37;
    struct s40* rsi38;
    struct s39* rdi39;
    struct s41* rsi40;
    int64_t rdx41;
    int32_t ebp42;
    struct s13* r12_43;
    int64_t* rbx44;
    int64_t r14_45;
    struct s13* r12_46;
    int64_t v47;

    v3 = reinterpret_cast<signed char**>(__return_address());
    r13_4 = rax5;
    __asm__("movdqa xmm0, [rip+0x0]");
    *reinterpret_cast<int32_t*>(&rax6) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax6) + 4) = reinterpret_cast<int32_t>(free);
    __asm__("movapd xmm1, [rip+0x0]");
    __asm__("movapd xmm2, [rip+0x0]");
    __asm__("movdqa xmm3, [rip+0x0]");
    __asm__("movdqa xmm4, [rip+0x0]");
    __asm__("movdqa xmm5, [rip+0x0]");
    *reinterpret_cast<int32_t*>(&rcx7) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx7) + 4) = reinterpret_cast<int32_t>(free);
    do {
        __asm__("cvtdq2pd xmm6, xmm0");
        __asm__("divpd xmm6, xmm1");
        __asm__("addpd xmm6, xmm2");
        __asm__("movupd [r14+rcx*8], xmm6");
        __asm__("movdqa xmm6, xmm0");
        __asm__("paddd xmm6, xmm3");
        __asm__("cvtdq2pd xmm6, xmm6");
        __asm__("divpd xmm6, xmm1");
        __asm__("addpd xmm6, xmm2");
        __asm__("movupd [r14+rcx*8+0x10], xmm6");
        __asm__("movdqa xmm6, xmm0");
        __asm__("paddd xmm6, xmm4");
        __asm__("cvtdq2pd xmm6, xmm6");
        __asm__("divpd xmm6, xmm1");
        __asm__("addpd xmm6, xmm2");
        __asm__("movupd [r14+rcx*8+0x20], xmm6");
        rcx7 = rcx7 + 6;
        __asm__("paddd xmm0, xmm5");
    } while (rcx7 != 0x834);
    __asm__("movdqa xmm0, [rip+0x0]");
    __asm__("movdqa xmm1, [rip+0x0]");
    __asm__("movdqa xmm2, [rip+0x0]");
    __asm__("movapd xmm3, [rip+0x0]");
    __asm__("movdqa xmm4, [rip+0x0]");
    __asm__("movdqa xmm5, [rip+0x0]");
    do {
        __asm__("movd xmm6, rax");
        __asm__("pshufd xmm6, xmm6, 0x44");
        *reinterpret_cast<int32_t*>(&rcx8) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx8) + 4) = reinterpret_cast<int32_t>(free);
        __asm__("movdqa xmm7, xmm0");
        do {
            __asm__("movdqa xmm10, xmm7");
            __asm__("paddq xmm10, xmm6");
            __asm__("pshufd xmm8, xmm10, 0xe8");
            __asm__("movdqa xmm9, xmm10");
            __asm__("pmuludq xmm9, xmm1");
            __asm__("pshufd xmm11, xmm10, 0xee");
            __asm__("pshufd xmm9, xmm9, 0xed");
            __asm__("pmuludq xmm11, xmm1");
            __asm__("pshufd xmm11, xmm11, 0xed");
            __asm__("pxor xmm12, xmm12");
            __asm__("punpckldq xmm9, xmm11");
            __asm__("pcmpgtd xmm12, xmm8");
            __asm__("pand xmm12, xmm1");
            __asm__("psubd xmm9, xmm12");
            __asm__("movdqa xmm11, xmm9");
            __asm__("paddq xmm10, xmm4");
            __asm__("pshufd xmm12, xmm10, 0xe8");
            __asm__("pshufd xmm13, xmm10, 0xee");
            __asm__("psrad xmm9, 0xa");
            __asm__("pmuludq xmm10, xmm1");
            __asm__("pshufd xmm10, xmm10, 0xed");
            __asm__("pmuludq xmm13, xmm1");
            __asm__("psrld xmm11, 0x1f");
            __asm__("pshufd xmm13, xmm13, 0xed");
            __asm__("punpckldq xmm10, xmm13");
            __asm__("pxor xmm13, xmm13");
            __asm__("paddd xmm9, xmm11");
            __asm__("pcmpgtd xmm13, xmm12");
            __asm__("pand xmm13, xmm1");
            __asm__("psubd xmm10, xmm13");
            __asm__("pshufd xmm11, xmm9, 0xf5");
            __asm__("pmuludq xmm9, xmm2");
            __asm__("pmuludq xmm11, xmm2");
            __asm__("punpckldq xmm9, xmm11");
            __asm__("movdqa xmm11, xmm10");
            __asm__("psrld xmm11, 0x1f");
            __asm__("psrad xmm10, 0xa");
            __asm__("psubd xmm8, xmm9");
            __asm__("paddd xmm10, xmm11");
            __asm__("pshufd xmm9, xmm10, 0xf5");
            __asm__("cvtdq2pd xmm8, xmm8");
            __asm__("pmuludq xmm10, xmm2");
            __asm__("pmuludq xmm9, xmm2");
            __asm__("punpckldq xmm10, xmm9");
            __asm__("divpd xmm8, xmm3");
            __asm__("psubd xmm12, xmm10");
            __asm__("cvtdq2pd xmm9, xmm12");
            __asm__("divpd xmm9, xmm3");
            __asm__("movupd [rdx+rcx*8], xmm8");
            __asm__("movupd [rsi+rdx], xmm9");
            rcx8 = rcx8 + 4;
            __asm__("paddq xmm7, xmm5");
        } while (rcx8 != 0x834);
        ++rax6;
    } while (rax6 != 0x76c);
    *reinterpret_cast<int32_t*>(&r15_9) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_9) + 4) = reinterpret_cast<int32_t>(free);
    fun_766(r12_10);
    rax11 = &r12_12->f41a0;
    do {
        rdx13 = reinterpret_cast<void*>(r15_9 * 0x41a0);
        rcx14 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rbx15) + reinterpret_cast<int64_t>(rdx13));
        rdi16 = reinterpret_cast<struct s38*>(reinterpret_cast<int64_t>(rbx17) + reinterpret_cast<int64_t>(rdx13) + 0x41a0);
        rdx18 = r13_4 + r15_9;
        rsi19 = reinterpret_cast<struct s13*>(r15_9 * 8 + 8 + reinterpret_cast<int64_t>(r13_4));
        r13_4[r15_9] = reinterpret_cast<int64_t>(free);
        __asm__("pxor xmm0, xmm0");
        *reinterpret_cast<int32_t*>(&r8_20) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_20) + 4) = reinterpret_cast<int32_t>(free);
        do {
            rdi16->f0 = rsi19->f0;
            rdi21 = reinterpret_cast<struct s39*>(&rdi16->f4);
            rsi22 = reinterpret_cast<struct s16*>(&rsi19->f4);
            __asm__("mulsd xmm1, [r14+r8*8]");
            __asm__("addsd xmm1, xmm0");
            rdi21->f0 = rsi22->f0;
            rdi23 = reinterpret_cast<struct s38*>(&rdi21->f4);
            rsi24 = reinterpret_cast<struct s13*>(&rsi22->f4);
            rdi23->f0 = rsi24->f0;
            rdi25 = reinterpret_cast<struct s39*>(&rdi23->f4);
            rsi26 = reinterpret_cast<struct s16*>(&rsi24->f4);
            __asm__("mulsd xmm2, [r14+r8*8+0x8]");
            __asm__("addsd xmm2, xmm1");
            rdi25->f0 = rsi26->f0;
            rdi27 = reinterpret_cast<struct s38*>(&rdi25->f4);
            rsi28 = reinterpret_cast<struct s13*>(&rsi26->f4);
            rdi27->f0 = rsi28->f0;
            rdi29 = reinterpret_cast<struct s39*>(&rdi27->f4);
            rsi30 = reinterpret_cast<struct s16*>(&rsi28->f4);
            __asm__("mulsd xmm0, [r14+r8*8+0x10]");
            __asm__("addsd xmm0, xmm2");
            rdi29->f0 = rsi30->f0;
            rdi16 = reinterpret_cast<struct s38*>(&rdi29->f4);
            rsi19 = reinterpret_cast<struct s13*>(&rsi30->f4);
            r8_20 = r8_20 + 3;
        } while (r8_20 != 0x834);
        r8b31 = reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(r12_32) < reinterpret_cast<uint64_t>(rdi16));
        *reinterpret_cast<unsigned char*>(&rsi19) = reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(r12_33) < reinterpret_cast<uint64_t>(rsi19));
        *reinterpret_cast<unsigned char*>(&rdi16) = reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(rdx18) < reinterpret_cast<uint64_t>(rax11));
        if (!reinterpret_cast<int1_t>((r8b31 & static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(rcx14) < reinterpret_cast<uint64_t>(rax11)))) == free)) {
            *reinterpret_cast<int32_t*>(&rdx34) = reinterpret_cast<int32_t>(free);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx34) + 4) = reinterpret_cast<int32_t>(free);
            goto addr_8b0_31;
        }
        *reinterpret_cast<int32_t*>(&rdx34) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx34) + 4) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<unsigned char*>(&rsi19) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rsi19) & *reinterpret_cast<unsigned char*>(&rdi16));
        if (!reinterpret_cast<int1_t>(*reinterpret_cast<unsigned char*>(&rsi19) == free)) {
            do {
                addr_8b0_31:
                rdi16->f0 = rsi19->f0;
                rdi35 = reinterpret_cast<struct s39*>(&rdi16->f4);
                __asm__("mulsd xmm0, [r13+r15*8+0x0]");
                __asm__("addsd xmm0, [r12+rdx*8]");
                rsi36 = reinterpret_cast<int32_t*>(rdx34 * 8);
                rdi35->f0 = *rsi36;
                rdi37 = reinterpret_cast<struct s38*>(&rdi35->f4);
                rsi38 = reinterpret_cast<struct s40*>(reinterpret_cast<uint64_t>(rsi36 + 1) | 8);
                rdi37->f0 = rsi38->f0;
                rdi39 = reinterpret_cast<struct s39*>(&rdi37->f4);
                rsi40 = reinterpret_cast<struct s41*>(&rsi38->f4);
                __asm__("mulsd xmm0, [r13+r15*8+0x0]");
                __asm__("addsd xmm0, [r12+rsi]");
                rdi39->f0 = rsi40->f0;
                rdi16 = reinterpret_cast<struct s38*>(&rdi39->f4);
                rsi19 = reinterpret_cast<struct s13*>(&rsi40->f4);
                rdx34 = rdx34 + 2;
            } while (rdx34 != 0x834);
        } else {
            rdi16->f0 = rsi19->f0;
            rsi19 = reinterpret_cast<struct s13*>(&rsi19->f4);
            __asm__("unpcklpd xmm0, xmm0");
            *reinterpret_cast<int32_t*>(&rdx41) = reinterpret_cast<int32_t>(free);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx41) + 4) = reinterpret_cast<int32_t>(free);
            do {
                __asm__("movupd xmm1, [r12+rdx*8]");
                __asm__("movupd xmm2, [r12+rdx*8+0x10]");
                __asm__("movupd xmm3, [rcx+rdx*8]");
                __asm__("movupd xmm4, [rcx+rdx*8+0x10]");
                __asm__("mulpd xmm3, xmm0");
                __asm__("addpd xmm3, xmm1");
                __asm__("mulpd xmm4, xmm0");
                __asm__("addpd xmm4, xmm2");
                __asm__("movupd [r12+rdx*8], xmm3");
                __asm__("movupd [r12+rdx*8+0x10], xmm4");
                rdx41 = rdx41 + 4;
            } while (rdx41 != 0x834);
            continue;
        }
        ++r15_9;
    } while (r15_9 != 0x76c);
    if (ebp42 >= 43 && reinterpret_cast<int1_t>(**v3 == free)) {
        rsi19 = r12_43;
        fun_91c(0x834, rsi19);
    }
    fun_924(rbx44, rsi19);
    fun_92c(r14_45, rsi19);
    fun_934(r12_46, rsi19);
    fun_93c(r13_4, rsi19);
    goto v47;
}

void free() {
}

void fun_c8(int32_t* rdi, int32_t* rsi) {
    int64_t* rax3;
    signed char* rax4;
    signed char* rax5;
    signed char al6;
    unsigned char r9b7;

    *rax3 = reinterpret_cast<int64_t>(__return_address());
    *rax4 = reinterpret_cast<signed char>(*rax5 + al6);
    if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(&rsi) < reinterpret_cast<int32_t>(free) == free)) | reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&rsi) == free))) {
        if (*reinterpret_cast<int32_t*>(&rsi) == 1) {
            if ((r9b7 & 1) != free) {
                __asm__("cdq ");
                __asm__("xorps xmm1, xmm1");
                __asm__("cvtsi2sd xmm1, edx");
                __asm__("divsd xmm1, xmm0");
                *rdi = *rsi;
            }
        }
    }
}

struct s42 {
    int32_t f0;
    int32_t f4;
};

struct s43 {
    int32_t f0;
    int32_t f4;
};

void fun_e8(struct s42* rdi, struct s43* rsi) {
    int32_t* rdi3;
    int64_t rbx4;

    __asm__("cvtsi2sd xmm1, edx");
    __asm__("divsd xmm1, xmm0");
    rdi->f0 = rsi->f0;
    rdi3 = &rdi->f4;
    __asm__("cdq ");
    __asm__("xorps xmm1, xmm1");
    __asm__("cvtsi2sd xmm1, edx");
    __asm__("divsd xmm1, xmm0");
    *rdi3 = rsi->f4;
    if (!reinterpret_cast<int1_t>(rbx4 + 2 == rdi3 + 1)) 
        goto 0xe0; else 
        goto "???";
}

void fun_15b() {
    int64_t v1;

    goto v1;
}

int64_t* g187 = reinterpret_cast<int64_t*>(0x3d8d48188b48);

void print_array(int32_t edi, int64_t rsi) {
    int64_t* rax3;
    int64_t rcx4;
    struct s0* r8_5;
    int64_t* r9_6;
    int64_t rax7;
    int64_t rbx8;
    int64_t r12_9;
    int64_t r13_10;
    int64_t r14_11;
    int64_t r15_12;
    int64_t rbp13;

    rax3 = g187;
    rcx4 = *rax3;
    fun_1a3(0x191, 22, 1, rcx4, r8_5, r9_6, rax7, rbx8, r12_9, r13_10, r14_11, r15_12, rbp13, __return_address());
}

void submain(int32_t edi, int64_t rsi) {
    fun_500(0x3ce1f0, 8);
}

