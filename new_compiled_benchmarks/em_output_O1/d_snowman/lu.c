
struct s0 {
    int32_t f0;
    int32_t f4;
};

int32_t fputc = 0x8e0fff85;

int32_t g4 = 0x111;

void fputc(int32_t edi);

int32_t* fun_234(int64_t rdi, int64_t rsi);

void fun_249(int32_t* rdi);

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

void fun_317();

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

int32_t** g45b = reinterpret_cast<int32_t**>(0x3d8d48308b4c);

void fun_477(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx);

void fun_492();

void fun_4cb();

void fun_4e7();

void fun_517(int32_t* rdi, int64_t rsi, int64_t rdx, int32_t* rcx);

void fun_530(int64_t rdi, struct s1* rsi, int32_t* rdx, int32_t* rcx);

void fun_443(int32_t* rdi, struct s1* rsi, int32_t* rdx, int32_t* rcx);

void fun_206() {
    struct s0* rdi1;
    int32_t* rsi2;
    uint64_t r14_3;
    int64_t* rbx4;
    int64_t r13_5;
    int64_t r15_6;
    uint64_t rbp7;
    int32_t* rdi8;
    int64_t rax9;
    int64_t rbx10;
    int32_t* rax11;
    int32_t* r15_12;
    int64_t r12_13;
    int64_t rax14;
    int64_t rcx15;
    struct s1* rsi16;
    int32_t* rbx17;
    int32_t* rdi18;
    struct s2* rdi19;
    struct s3* rsi20;
    int64_t rax21;
    int32_t* rdx22;
    struct s2* rdi23;
    struct s3* rsi24;
    int32_t* rdi25;
    int32_t* rax26;
    int32_t* rcx27;
    struct s4* rsi28;
    int32_t* rbx29;
    struct s5* rsi30;
    struct s6* rdi31;
    struct s7* rsi32;
    int32_t* rbx33;
    struct s8* rsi34;
    int32_t* rbx35;
    struct s6* rdi36;
    struct s9* rsi37;
    int32_t* rcx38;
    int32_t* rbx39;
    struct s10* rsi40;
    struct s6* rdi41;
    struct s3* rsi42;
    int32_t v43;
    signed char** v44;
    int32_t** rax45;
    int32_t* r14_46;
    int32_t* rcx47;
    int32_t* rsi48;
    int64_t r12_49;
    int32_t* rdi50;
    int64_t r13_51;
    int64_t rbp52;
    int32_t* rbx53;
    int64_t v54;

    while (1) {
        rdi1->f0 = fputc;
        rdi1->f4 = g4;
        rsi2 = reinterpret_cast<int32_t*>(0x7fffffff8);
        do {
            (rbx4 + r14_3 * 0x7d0)[r14_3] = r13_5;
            ++r15_6;
            if (rbp7 == 0x7d0) 
                goto addr_225_9;
            r14_3 = rbp7;
            rdi8 = reinterpret_cast<int32_t*>(rbp7 * 0x3e88 + 8);
            *reinterpret_cast<int32_t*>(&rax9) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax9) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("xorps xmm0, xmm0");
                __asm__("cvtsi2sd xmm0, ecx");
                __asm__("divsd xmm0, xmm1");
                __asm__("addsd xmm0, xmm2");
                *rdi8 = *rsi2;
                ++rdi8;
                ++rsi2;
                ++rax9;
            } while (rax9 != r15_6);
            rbp7 = r14_3 + 1;
        } while (r14_3 > 0x7ce);
        rdi1 = reinterpret_cast<struct s0*>(reinterpret_cast<uint64_t>(rdi8) + rbx10);
        fun_206();
    }
    addr_225_9:
    rax11 = fun_234(0x3d0900, 8);
    r15_12 = rax11;
    *reinterpret_cast<int32_t*>(&r12_13) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_13) + 4) = reinterpret_cast<int32_t>(fputc);
    fun_249(rax11);
    *reinterpret_cast<int32_t*>(&rax14) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax14) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        *reinterpret_cast<int32_t*>(&rcx15) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx15) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rsi16 = reinterpret_cast<struct s1*>(rbx17 + rcx15 * 0xfa0 + rax14 * 2);
            *reinterpret_cast<int32_t*>(&rdi18) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi18) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                *rdi18 = rsi16->f0;
                rdi19 = reinterpret_cast<struct s2*>(rdi18 + 1);
                rsi20 = reinterpret_cast<struct s3*>(&rsi16->f4);
                __asm__("mulsd xmm0, [r8+rax*8]");
                __asm__("addsd xmm0, [r9+rdi*8]");
                rdi19->f0 = rsi20->f0;
                rsi16 = reinterpret_cast<struct s1*>(&rsi20->f4);
                rdi18 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi19->f4) + 1);
            } while (!reinterpret_cast<int1_t>(rdi18 == 0x7d0));
            ++rcx15;
        } while (rcx15 != 0x7d0);
        ++rax14;
    } while (rax14 != 0x7d0);
    do {
        *reinterpret_cast<int32_t*>(&rax21) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax21) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rdx22 = r15_12 + r12_13 * 0xfa0;
            *rdi18 = rsi16->f0;
            rdi23 = reinterpret_cast<struct s2*>(rdi18 + 1);
            rsi24 = reinterpret_cast<struct s3*>(&rsi16->f4);
            rdi23->f0 = rsi24->f0;
            rdi18 = &rdi23->f4;
            rsi16 = reinterpret_cast<struct s1*>(&rsi24->f4);
            ++rax21;
        } while (rax21 != 0x7d0);
        ++r12_13;
    } while (r12_13 != 0x7d0);
    rdi25 = r15_12;
    fun_317();
    *reinterpret_cast<int32_t*>(&rax26) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax26) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        if (rax26 != fputc) {
            *reinterpret_cast<int32_t*>(&rcx27) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx27) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                if (rcx27 != fputc) {
                    rsi28 = reinterpret_cast<struct s4*>(rbx29 + reinterpret_cast<int64_t>(rax26) * 0xfa0 + reinterpret_cast<int64_t>(rcx27) * 2);
                    *rdi25 = rsi28->f0;
                    rsi30 = reinterpret_cast<struct s5*>(&rsi28->f4);
                    *reinterpret_cast<int32_t*>(&rdi25) = reinterpret_cast<int32_t>(fputc);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi25) + 4) = reinterpret_cast<int32_t>(fputc);
                    do {
                        *rdi25 = rsi30->f0;
                        rdi31 = reinterpret_cast<struct s6*>(rdi25 + 1);
                        rsi32 = reinterpret_cast<struct s7*>(&rsi30->f4);
                        __asm__("mulsd xmm1, [r8+rcx*8]");
                        __asm__("subsd xmm0, xmm1");
                        rdi31->f0 = rsi32->f0;
                        rsi30 = reinterpret_cast<struct s5*>(&rsi32->f4);
                        rdi25 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi31->f4) + 1);
                    } while (rdi25 != rcx27);
                }
                rdx22 = rbx33 + reinterpret_cast<int64_t>(rcx27) * 0xfa0;
                rsi34 = reinterpret_cast<struct s8*>(rbx35 + reinterpret_cast<int64_t>(rax26) * 0xfa0);
                *rdi25 = rsi34->f0;
                rdi36 = reinterpret_cast<struct s6*>(rdi25 + 1);
                rsi37 = reinterpret_cast<struct s9*>(&rsi34->f4);
                __asm__("divsd xmm0, [rdx+rcx*8]");
                rdi36->f0 = rsi37->f0;
                rdi25 = &rdi36->f4;
                rsi16 = reinterpret_cast<struct s1*>(&rsi37->f4);
                rcx27 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rcx27) + 1);
            } while (rcx27 != rax26);
        }
        rcx38 = rax26;
        do {
            if (rax26 != fputc) {
                rdx22 = rbx39 + reinterpret_cast<int64_t>(rax26) * 0xfa0;
                rsi40 = reinterpret_cast<struct s10*>(rdx22 + reinterpret_cast<int64_t>(rcx38) * 2);
                *rdi25 = rsi40->f0;
                rsi16 = reinterpret_cast<struct s1*>(&rsi40->f4);
                *reinterpret_cast<int32_t*>(&rdi25) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi25) + 4) = reinterpret_cast<int32_t>(fputc);
                do {
                    *rdi25 = rsi16->f0;
                    rdi41 = reinterpret_cast<struct s6*>(rdi25 + 1);
                    rsi42 = reinterpret_cast<struct s3*>(&rsi16->f4);
                    __asm__("mulsd xmm1, [r8+rcx*8]");
                    __asm__("subsd xmm0, xmm1");
                    rdi41->f0 = rsi42->f0;
                    rsi16 = reinterpret_cast<struct s1*>(&rsi42->f4);
                    rdi25 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi41->f4) + 1);
                } while (rdi25 != rax26);
            }
            rcx38 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rcx38) + 1);
        } while (rcx38 != 0x7d0);
        rax26 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rax26) + 1);
    } while (rax26 != 0x7d0);
    if (v43 >= 43 && **v44 == fputc) {
        rax45 = g45b;
        r14_46 = *rax45;
        rcx47 = r14_46;
        fun_477(0x465, 22, 1, rcx47);
        rsi48 = reinterpret_cast<int32_t*>(0x47e);
        *reinterpret_cast<int32_t*>(&r12_49) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_49) + 4) = reinterpret_cast<int32_t>(fputc);
        rdi50 = r14_46;
        fun_492();
        do {
            r13_51 = r12_49 * 0x7d0;
            *reinterpret_cast<int32_t*>(&rbp52) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp52) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("ror eax, 0x2");
                if (reinterpret_cast<uint32_t>(static_cast<int32_t>(rbp52 + r13_51) * 0xcccccccd) <= 0xccccccc) {
                    *reinterpret_cast<int32_t*>(&rdi50) = 10;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi50) + 4) = reinterpret_cast<int32_t>(fputc);
                    rsi48 = r14_46;
                    fun_4cb();
                }
                *rdi50 = *rsi48;
                rdi50 = r14_46;
                rsi48 = reinterpret_cast<int32_t*>(0x499);
                fun_4e7();
                ++rbp52;
            } while (rbp52 != 0x7d0);
            ++r12_49;
        } while (r12_49 != 0x7d0);
        fun_517(r14_46, 0x506, 0x50d, rcx47);
        *reinterpret_cast<int32_t*>(&rsi16) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi16) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx22) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx22) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx38 = r14_46;
        fun_530(0x51e, 22, 1, rcx38);
    }
    fun_443(rbx53, rsi16, rdx22, rcx38);
    goto v54;
}

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

void fun_317() {
    int32_t* rax1;
    int32_t* rcx2;
    struct s11* rsi3;
    int32_t* rbx4;
    int32_t* rdi5;
    struct s12* rsi6;
    struct s6* rdi7;
    struct s13* rsi8;
    int32_t* rdx9;
    int32_t* rbx10;
    struct s14* rsi11;
    int32_t* rbx12;
    struct s6* rdi13;
    struct s15* rsi14;
    struct s1* rsi15;
    int32_t* rcx16;
    int32_t* rbx17;
    struct s16* rsi18;
    struct s6* rdi19;
    struct s3* rsi20;
    int32_t v21;
    signed char** v22;
    int32_t** rax23;
    int32_t* r14_24;
    int32_t* rcx25;
    int32_t* rsi26;
    int64_t r12_27;
    int32_t* rdi28;
    int64_t r13_29;
    int64_t rbp30;
    int32_t* rbx31;
    int64_t v32;

    *reinterpret_cast<int32_t*>(&rax1) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax1) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        if (rax1 != fputc) {
            *reinterpret_cast<int32_t*>(&rcx2) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx2) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                if (rcx2 != fputc) {
                    rsi3 = reinterpret_cast<struct s11*>(rbx4 + reinterpret_cast<int64_t>(rax1) * 0xfa0 + reinterpret_cast<int64_t>(rcx2) * 2);
                    *rdi5 = rsi3->f0;
                    rsi6 = reinterpret_cast<struct s12*>(&rsi3->f4);
                    *reinterpret_cast<int32_t*>(&rdi5) = reinterpret_cast<int32_t>(fputc);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi5) + 4) = reinterpret_cast<int32_t>(fputc);
                    do {
                        *rdi5 = rsi6->f0;
                        rdi7 = reinterpret_cast<struct s6*>(rdi5 + 1);
                        rsi8 = reinterpret_cast<struct s13*>(&rsi6->f4);
                        __asm__("mulsd xmm1, [r8+rcx*8]");
                        __asm__("subsd xmm0, xmm1");
                        rdi7->f0 = rsi8->f0;
                        rsi6 = reinterpret_cast<struct s12*>(&rsi8->f4);
                        rdi5 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi7->f4) + 1);
                    } while (rdi5 != rcx2);
                }
                rdx9 = rbx10 + reinterpret_cast<int64_t>(rcx2) * 0xfa0;
                rsi11 = reinterpret_cast<struct s14*>(rbx12 + reinterpret_cast<int64_t>(rax1) * 0xfa0);
                *rdi5 = rsi11->f0;
                rdi13 = reinterpret_cast<struct s6*>(rdi5 + 1);
                rsi14 = reinterpret_cast<struct s15*>(&rsi11->f4);
                __asm__("divsd xmm0, [rdx+rcx*8]");
                rdi13->f0 = rsi14->f0;
                rdi5 = &rdi13->f4;
                rsi15 = reinterpret_cast<struct s1*>(&rsi14->f4);
                rcx2 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rcx2) + 1);
            } while (rcx2 != rax1);
        }
        rcx16 = rax1;
        do {
            if (rax1 != fputc) {
                rdx9 = rbx17 + reinterpret_cast<int64_t>(rax1) * 0xfa0;
                rsi18 = reinterpret_cast<struct s16*>(rdx9 + reinterpret_cast<int64_t>(rcx16) * 2);
                *rdi5 = rsi18->f0;
                rsi15 = reinterpret_cast<struct s1*>(&rsi18->f4);
                *reinterpret_cast<int32_t*>(&rdi5) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi5) + 4) = reinterpret_cast<int32_t>(fputc);
                do {
                    *rdi5 = rsi15->f0;
                    rdi19 = reinterpret_cast<struct s6*>(rdi5 + 1);
                    rsi20 = reinterpret_cast<struct s3*>(&rsi15->f4);
                    __asm__("mulsd xmm1, [r8+rcx*8]");
                    __asm__("subsd xmm0, xmm1");
                    rdi19->f0 = rsi20->f0;
                    rsi15 = reinterpret_cast<struct s1*>(&rsi20->f4);
                    rdi5 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi19->f4) + 1);
                } while (rdi5 != rax1);
            }
            rcx16 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rcx16) + 1);
        } while (rcx16 != 0x7d0);
        rax1 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rax1) + 1);
    } while (rax1 != 0x7d0);
    if (v21 >= 43 && **v22 == fputc) {
        rax23 = g45b;
        r14_24 = *rax23;
        rcx25 = r14_24;
        fun_477(0x465, 22, 1, rcx25);
        rsi26 = reinterpret_cast<int32_t*>(0x47e);
        *reinterpret_cast<int32_t*>(&r12_27) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_27) + 4) = reinterpret_cast<int32_t>(fputc);
        rdi28 = r14_24;
        fun_492();
        do {
            r13_29 = r12_27 * 0x7d0;
            *reinterpret_cast<int32_t*>(&rbp30) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp30) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("ror eax, 0x2");
                if (reinterpret_cast<uint32_t>(static_cast<int32_t>(rbp30 + r13_29) * 0xcccccccd) <= 0xccccccc) {
                    *reinterpret_cast<int32_t*>(&rdi28) = 10;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi28) + 4) = reinterpret_cast<int32_t>(fputc);
                    rsi26 = r14_24;
                    fun_4cb();
                }
                *rdi28 = *rsi26;
                rdi28 = r14_24;
                rsi26 = reinterpret_cast<int32_t*>(0x499);
                fun_4e7();
                ++rbp30;
            } while (rbp30 != 0x7d0);
            ++r12_27;
        } while (r12_27 != 0x7d0);
        fun_517(r14_24, 0x506, 0x50d, rcx25);
        *reinterpret_cast<int32_t*>(&rsi15) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi15) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx9) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx9) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx16 = r14_24;
        fun_530(0x51e, 22, 1, rcx16);
    }
    fun_443(rbx31, rsi15, rdx9, rcx16);
    goto v32;
}

void fun_443(int32_t* rdi, struct s1* rsi, int32_t* rdx, int32_t* rcx) {
    int64_t v5;

    goto v5;
}

void fun_4cb() {
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
    int32_t* rbx12;
    int64_t v13;

    while (1) {
        *rdi1 = *rsi2;
        rdi1 = r14_3;
        rsi2 = r15_4;
        fun_4e7();
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
        fun_4cb();
    }
    fun_517(r14_9, 0x506, 0x50d, rcx10);
    fun_530(0x51e, 22, 1, r14_11);
    fun_443(rbx12, 22, 1, r14_11);
    goto v13;
}

void fun_4e7() {
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
    int32_t* rbx12;
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
            fun_4cb();
        }
        *rdi4 = *rsi5;
        rdi4 = r14_7;
        rsi5 = r15_8;
        fun_4e7();
    }
    fun_517(r14_9, 0x506, 0x50d, rcx10);
    fun_530(0x51e, 22, 1, r14_11);
    fun_443(rbx12, 22, 1, r14_11);
    goto v13;
}

void fun_517(int32_t* rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int32_t* r14_5;
    int32_t* rbx6;
    int64_t v7;

    fun_530(0x51e, 22, 1, r14_5);
    fun_443(rbx6, 22, 1, r14_5);
    goto v7;
}

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

int32_t* fun_234(int64_t rdi, int64_t rsi) {
    int32_t* r15_3;
    int32_t* rax4;
    int64_t r12_5;
    int32_t* rax6;
    int64_t rax7;
    int64_t rcx8;
    struct s1* rsi9;
    int32_t* rbx10;
    int32_t* rdi11;
    struct s17* rdi12;
    struct s3* rsi13;
    int64_t rax14;
    int32_t* rdx15;
    struct s17* rdi16;
    struct s3* rsi17;
    int32_t* rdi18;
    int32_t* rax19;
    int32_t* rcx20;
    struct s18* rsi21;
    int32_t* rbx22;
    struct s19* rsi23;
    struct s6* rdi24;
    struct s20* rsi25;
    int32_t* rbx26;
    struct s21* rsi27;
    int32_t* rbx28;
    struct s6* rdi29;
    struct s22* rsi30;
    int32_t* rcx31;
    int32_t* rbx32;
    struct s23* rsi33;
    struct s6* rdi34;
    struct s3* rsi35;
    int32_t v36;
    signed char** v37;
    int32_t** rax38;
    int32_t* r14_39;
    int32_t* rcx40;
    int32_t* rsi41;
    int64_t r12_42;
    int32_t* rdi43;
    int64_t r13_44;
    int64_t rbp45;
    int32_t* rbx46;
    int64_t v47;

    r15_3 = rax4;
    *reinterpret_cast<int32_t*>(&r12_5) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_5) + 4) = reinterpret_cast<int32_t>(fputc);
    fun_249(rax6);
    *reinterpret_cast<int32_t*>(&rax7) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax7) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        *reinterpret_cast<int32_t*>(&rcx8) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx8) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rsi9 = reinterpret_cast<struct s1*>(rbx10 + rcx8 * 0xfa0 + rax7 * 2);
            *reinterpret_cast<int32_t*>(&rdi11) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi11) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                *rdi11 = rsi9->f0;
                rdi12 = reinterpret_cast<struct s17*>(rdi11 + 1);
                rsi13 = reinterpret_cast<struct s3*>(&rsi9->f4);
                __asm__("mulsd xmm0, [r8+rax*8]");
                __asm__("addsd xmm0, [r9+rdi*8]");
                rdi12->f0 = rsi13->f0;
                rsi9 = reinterpret_cast<struct s1*>(&rsi13->f4);
                rdi11 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi12->f4) + 1);
            } while (!reinterpret_cast<int1_t>(rdi11 == 0x7d0));
            ++rcx8;
        } while (rcx8 != 0x7d0);
        ++rax7;
    } while (rax7 != 0x7d0);
    do {
        *reinterpret_cast<int32_t*>(&rax14) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax14) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rdx15 = r15_3 + r12_5 * 0xfa0;
            *rdi11 = rsi9->f0;
            rdi16 = reinterpret_cast<struct s17*>(rdi11 + 1);
            rsi17 = reinterpret_cast<struct s3*>(&rsi9->f4);
            rdi16->f0 = rsi17->f0;
            rdi11 = &rdi16->f4;
            rsi9 = reinterpret_cast<struct s1*>(&rsi17->f4);
            ++rax14;
        } while (rax14 != 0x7d0);
        ++r12_5;
    } while (r12_5 != 0x7d0);
    rdi18 = r15_3;
    fun_317();
    *reinterpret_cast<int32_t*>(&rax19) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax19) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        if (rax19 != fputc) {
            *reinterpret_cast<int32_t*>(&rcx20) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx20) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                if (rcx20 != fputc) {
                    rsi21 = reinterpret_cast<struct s18*>(rbx22 + reinterpret_cast<int64_t>(rax19) * 0xfa0 + reinterpret_cast<int64_t>(rcx20) * 2);
                    *rdi18 = rsi21->f0;
                    rsi23 = reinterpret_cast<struct s19*>(&rsi21->f4);
                    *reinterpret_cast<int32_t*>(&rdi18) = reinterpret_cast<int32_t>(fputc);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi18) + 4) = reinterpret_cast<int32_t>(fputc);
                    do {
                        *rdi18 = rsi23->f0;
                        rdi24 = reinterpret_cast<struct s6*>(rdi18 + 1);
                        rsi25 = reinterpret_cast<struct s20*>(&rsi23->f4);
                        __asm__("mulsd xmm1, [r8+rcx*8]");
                        __asm__("subsd xmm0, xmm1");
                        rdi24->f0 = rsi25->f0;
                        rsi23 = reinterpret_cast<struct s19*>(&rsi25->f4);
                        rdi18 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi24->f4) + 1);
                    } while (rdi18 != rcx20);
                }
                rdx15 = rbx26 + reinterpret_cast<int64_t>(rcx20) * 0xfa0;
                rsi27 = reinterpret_cast<struct s21*>(rbx28 + reinterpret_cast<int64_t>(rax19) * 0xfa0);
                *rdi18 = rsi27->f0;
                rdi29 = reinterpret_cast<struct s6*>(rdi18 + 1);
                rsi30 = reinterpret_cast<struct s22*>(&rsi27->f4);
                __asm__("divsd xmm0, [rdx+rcx*8]");
                rdi29->f0 = rsi30->f0;
                rdi18 = &rdi29->f4;
                rsi9 = reinterpret_cast<struct s1*>(&rsi30->f4);
                rcx20 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rcx20) + 1);
            } while (rcx20 != rax19);
        }
        rcx31 = rax19;
        do {
            if (rax19 != fputc) {
                rdx15 = rbx32 + reinterpret_cast<int64_t>(rax19) * 0xfa0;
                rsi33 = reinterpret_cast<struct s23*>(rdx15 + reinterpret_cast<int64_t>(rcx31) * 2);
                *rdi18 = rsi33->f0;
                rsi9 = reinterpret_cast<struct s1*>(&rsi33->f4);
                *reinterpret_cast<int32_t*>(&rdi18) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi18) + 4) = reinterpret_cast<int32_t>(fputc);
                do {
                    *rdi18 = rsi9->f0;
                    rdi34 = reinterpret_cast<struct s6*>(rdi18 + 1);
                    rsi35 = reinterpret_cast<struct s3*>(&rsi9->f4);
                    __asm__("mulsd xmm1, [r8+rcx*8]");
                    __asm__("subsd xmm0, xmm1");
                    rdi34->f0 = rsi35->f0;
                    rsi9 = reinterpret_cast<struct s1*>(&rsi35->f4);
                    rdi18 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi34->f4) + 1);
                } while (rdi18 != rax19);
            }
            rcx31 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rcx31) + 1);
        } while (rcx31 != 0x7d0);
        rax19 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rax19) + 1);
    } while (rax19 != 0x7d0);
    if (v36 >= 43 && **v37 == fputc) {
        rax38 = g45b;
        r14_39 = *rax38;
        rcx40 = r14_39;
        fun_477(0x465, 22, 1, rcx40);
        rsi41 = reinterpret_cast<int32_t*>(0x47e);
        *reinterpret_cast<int32_t*>(&r12_42) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_42) + 4) = reinterpret_cast<int32_t>(fputc);
        rdi43 = r14_39;
        fun_492();
        do {
            r13_44 = r12_42 * 0x7d0;
            *reinterpret_cast<int32_t*>(&rbp45) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp45) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("ror eax, 0x2");
                if (reinterpret_cast<uint32_t>(static_cast<int32_t>(rbp45 + r13_44) * 0xcccccccd) <= 0xccccccc) {
                    *reinterpret_cast<int32_t*>(&rdi43) = 10;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi43) + 4) = reinterpret_cast<int32_t>(fputc);
                    rsi41 = r14_39;
                    fun_4cb();
                }
                *rdi43 = *rsi41;
                rdi43 = r14_39;
                rsi41 = reinterpret_cast<int32_t*>(0x499);
                fun_4e7();
                ++rbp45;
            } while (rbp45 != 0x7d0);
            ++r12_42;
        } while (r12_42 != 0x7d0);
        fun_517(r14_39, 0x506, 0x50d, rcx40);
        *reinterpret_cast<int32_t*>(&rsi9) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi9) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx15) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx15) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx31 = r14_39;
        fun_530(0x51e, 22, 1, rcx31);
    }
    fun_443(rbx46, rsi9, rdx15, rcx31);
    goto v47;
}

void fun_477(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
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
    int32_t* rbx15;
    int64_t v16;

    rsi5 = reinterpret_cast<int32_t*>(0x47e);
    *reinterpret_cast<int32_t*>(&r12_6) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_6) + 4) = reinterpret_cast<int32_t>(fputc);
    rdi7 = r14_8;
    fun_492();
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
                fun_4cb();
            }
            *rdi7 = *rsi5;
            rdi7 = r14_12;
            rsi5 = reinterpret_cast<int32_t*>(0x499);
            fun_4e7();
            ++rbp10;
        } while (rbp10 != 0x7d0);
        ++r12_6;
    } while (r12_6 != 0x7d0);
    fun_517(r14_13, 0x506, 0x50d, rcx);
    fun_530(0x51e, 22, 1, r14_14);
    fun_443(rbx15, 22, 1, r14_14);
    goto v16;
}

void fun_530(int64_t rdi, struct s1* rsi, int32_t* rdx, int32_t* rcx) {
    int32_t* rbx5;
    int64_t v6;

    fun_443(rbx5, rsi, rdx, rcx);
    goto v6;
}

struct s24 {
    int32_t f0;
    int32_t f4;
};

int32_t g7fffffff8;

int32_t g7fffffffc;

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

void fun_146(struct s24* rdi, int64_t rsi) {
    int32_t* rbx3;
    int32_t* rax4;
    int64_t r15_5;
    uint64_t rbp6;
    int32_t* rsi7;
    uint64_t r14_8;
    int32_t* rdi9;
    int64_t rax10;
    struct s25* rdi11;
    int32_t* rax12;
    int32_t* r15_13;
    int64_t r12_14;
    int64_t rax15;
    int64_t rcx16;
    struct s1* rsi17;
    int32_t* rdi18;
    struct s26* rdi19;
    struct s3* rsi20;
    int64_t rax21;
    int32_t* rdx22;
    struct s26* rdi23;
    struct s3* rsi24;
    int32_t* rdi25;
    int32_t* rax26;
    int32_t* rcx27;
    struct s27* rsi28;
    struct s28* rsi29;
    struct s6* rdi30;
    struct s29* rsi31;
    struct s30* rsi32;
    struct s6* rdi33;
    struct s31* rsi34;
    int32_t* rcx35;
    struct s32* rsi36;
    struct s6* rdi37;
    struct s3* rsi38;
    int32_t v39;
    signed char** v40;
    int32_t** rax41;
    int32_t* r14_42;
    int32_t* rcx43;
    int32_t* rsi44;
    int64_t r12_45;
    int32_t* rdi46;
    int64_t r13_47;
    int64_t rbp48;
    int64_t v49;

    rbx3 = rax4;
    *reinterpret_cast<int32_t*>(&r15_5) = 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_5) + 4) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(&rbp6) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp6) + 4) = reinterpret_cast<int32_t>(fputc);
    rdi->f0 = g7fffffff8;
    rdi->f4 = g7fffffffc;
    rsi7 = reinterpret_cast<int32_t*>(0x800000000);
    do {
        r14_8 = rbp6;
        rdi9 = reinterpret_cast<int32_t*>(rbp6 * 0x3e88 + 8);
        *reinterpret_cast<int32_t*>(&rax10) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax10) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("xorps xmm0, xmm0");
            __asm__("cvtsi2sd xmm0, ecx");
            __asm__("divsd xmm0, xmm1");
            __asm__("addsd xmm0, xmm2");
            *rdi9 = *rsi7;
            ++rdi9;
            ++rsi7;
            ++rax10;
        } while (rax10 != r15_5);
        rbp6 = r14_8 + 1;
        if (r14_8 <= 0x7ce) {
            rdi11 = reinterpret_cast<struct s25*>(reinterpret_cast<uint64_t>(rdi9) + reinterpret_cast<int64_t>(rbx3));
            fun_206();
            rdi11->f0 = fputc;
            rdi11->f4 = g4;
            rsi7 = reinterpret_cast<int32_t*>(0x7fffffff8);
        }
        (rbx3 + r14_8 * 0xfa0)[r14_8 * 2] = reinterpret_cast<int32_t>(0x3ff0000000000000);
        ++r15_5;
    } while (rbp6 != 0x7d0);
    rax12 = fun_234(0x3d0900, 8);
    r15_13 = rax12;
    *reinterpret_cast<int32_t*>(&r12_14) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_14) + 4) = reinterpret_cast<int32_t>(fputc);
    fun_249(rax12);
    *reinterpret_cast<int32_t*>(&rax15) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax15) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        *reinterpret_cast<int32_t*>(&rcx16) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx16) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rsi17 = reinterpret_cast<struct s1*>(rbx3 + rcx16 * 0xfa0 + rax15 * 2);
            *reinterpret_cast<int32_t*>(&rdi18) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi18) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                *rdi18 = rsi17->f0;
                rdi19 = reinterpret_cast<struct s26*>(rdi18 + 1);
                rsi20 = reinterpret_cast<struct s3*>(&rsi17->f4);
                __asm__("mulsd xmm0, [r8+rax*8]");
                __asm__("addsd xmm0, [r9+rdi*8]");
                rdi19->f0 = rsi20->f0;
                rsi17 = reinterpret_cast<struct s1*>(&rsi20->f4);
                rdi18 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi19->f4) + 1);
            } while (!reinterpret_cast<int1_t>(rdi18 == 0x7d0));
            ++rcx16;
        } while (rcx16 != 0x7d0);
        ++rax15;
    } while (rax15 != 0x7d0);
    do {
        *reinterpret_cast<int32_t*>(&rax21) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax21) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rdx22 = r15_13 + r12_14 * 0xfa0;
            *rdi18 = rsi17->f0;
            rdi23 = reinterpret_cast<struct s26*>(rdi18 + 1);
            rsi24 = reinterpret_cast<struct s3*>(&rsi17->f4);
            rdi23->f0 = rsi24->f0;
            rdi18 = &rdi23->f4;
            rsi17 = reinterpret_cast<struct s1*>(&rsi24->f4);
            ++rax21;
        } while (rax21 != 0x7d0);
        ++r12_14;
    } while (r12_14 != 0x7d0);
    rdi25 = r15_13;
    fun_317();
    *reinterpret_cast<int32_t*>(&rax26) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax26) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        if (rax26 != fputc) {
            *reinterpret_cast<int32_t*>(&rcx27) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx27) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                if (rcx27 != fputc) {
                    rsi28 = reinterpret_cast<struct s27*>(rbx3 + reinterpret_cast<int64_t>(rax26) * 0xfa0 + reinterpret_cast<int64_t>(rcx27) * 2);
                    *rdi25 = rsi28->f0;
                    rsi29 = reinterpret_cast<struct s28*>(&rsi28->f4);
                    *reinterpret_cast<int32_t*>(&rdi25) = reinterpret_cast<int32_t>(fputc);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi25) + 4) = reinterpret_cast<int32_t>(fputc);
                    do {
                        *rdi25 = rsi29->f0;
                        rdi30 = reinterpret_cast<struct s6*>(rdi25 + 1);
                        rsi31 = reinterpret_cast<struct s29*>(&rsi29->f4);
                        __asm__("mulsd xmm1, [r8+rcx*8]");
                        __asm__("subsd xmm0, xmm1");
                        rdi30->f0 = rsi31->f0;
                        rsi29 = reinterpret_cast<struct s28*>(&rsi31->f4);
                        rdi25 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi30->f4) + 1);
                    } while (rdi25 != rcx27);
                }
                rdx22 = rbx3 + reinterpret_cast<int64_t>(rcx27) * 0xfa0;
                rsi32 = reinterpret_cast<struct s30*>(rbx3 + reinterpret_cast<int64_t>(rax26) * 0xfa0);
                *rdi25 = rsi32->f0;
                rdi33 = reinterpret_cast<struct s6*>(rdi25 + 1);
                rsi34 = reinterpret_cast<struct s31*>(&rsi32->f4);
                __asm__("divsd xmm0, [rdx+rcx*8]");
                rdi33->f0 = rsi34->f0;
                rdi25 = &rdi33->f4;
                rsi17 = reinterpret_cast<struct s1*>(&rsi34->f4);
                rcx27 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rcx27) + 1);
            } while (rcx27 != rax26);
        }
        rcx35 = rax26;
        do {
            if (rax26 != fputc) {
                rdx22 = rbx3 + reinterpret_cast<int64_t>(rax26) * 0xfa0;
                rsi36 = reinterpret_cast<struct s32*>(rdx22 + reinterpret_cast<int64_t>(rcx35) * 2);
                *rdi25 = rsi36->f0;
                rsi17 = reinterpret_cast<struct s1*>(&rsi36->f4);
                *reinterpret_cast<int32_t*>(&rdi25) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi25) + 4) = reinterpret_cast<int32_t>(fputc);
                do {
                    *rdi25 = rsi17->f0;
                    rdi37 = reinterpret_cast<struct s6*>(rdi25 + 1);
                    rsi38 = reinterpret_cast<struct s3*>(&rsi17->f4);
                    __asm__("mulsd xmm1, [r8+rcx*8]");
                    __asm__("subsd xmm0, xmm1");
                    rdi37->f0 = rsi38->f0;
                    rsi17 = reinterpret_cast<struct s1*>(&rsi38->f4);
                    rdi25 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi37->f4) + 1);
                } while (rdi25 != rax26);
            }
            rcx35 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rcx35) + 1);
        } while (rcx35 != 0x7d0);
        rax26 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rax26) + 1);
    } while (rax26 != 0x7d0);
    if (v39 >= 43 && **v40 == fputc) {
        rax41 = g45b;
        r14_42 = *rax41;
        rcx43 = r14_42;
        fun_477(0x465, 22, 1, rcx43);
        rsi44 = reinterpret_cast<int32_t*>(0x47e);
        *reinterpret_cast<int32_t*>(&r12_45) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_45) + 4) = reinterpret_cast<int32_t>(fputc);
        rdi46 = r14_42;
        fun_492();
        do {
            r13_47 = r12_45 * 0x7d0;
            *reinterpret_cast<int32_t*>(&rbp48) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp48) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("ror eax, 0x2");
                if (reinterpret_cast<uint32_t>(static_cast<int32_t>(rbp48 + r13_47) * 0xcccccccd) <= 0xccccccc) {
                    *reinterpret_cast<int32_t*>(&rdi46) = 10;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi46) + 4) = reinterpret_cast<int32_t>(fputc);
                    rsi44 = r14_42;
                    fun_4cb();
                }
                *rdi46 = *rsi44;
                rdi46 = r14_42;
                rsi44 = reinterpret_cast<int32_t*>(0x499);
                fun_4e7();
                ++rbp48;
            } while (rbp48 != 0x7d0);
            ++r12_45;
        } while (r12_45 != 0x7d0);
        fun_517(r14_42, 0x506, 0x50d, rcx43);
        *reinterpret_cast<int32_t*>(&rsi17) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi17) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx22) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx22) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx35 = r14_42;
        fun_530(0x51e, 22, 1, rcx35);
    }
    fun_443(rbx3, rsi17, rdx22, rcx35);
    goto v49;
}

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

void fun_249(int32_t* rdi) {
    int64_t rax2;
    int64_t rcx3;
    struct s1* rsi4;
    int32_t* rbx5;
    int32_t* rdi6;
    struct s33* rdi7;
    struct s3* rsi8;
    int64_t rax9;
    int32_t* rdx10;
    int32_t* r15_11;
    int64_t r12_12;
    struct s33* rdi13;
    struct s3* rsi14;
    int32_t* rdi15;
    int32_t* r15_16;
    int32_t* rax17;
    int32_t* rcx18;
    struct s34* rsi19;
    int32_t* rbx20;
    struct s35* rsi21;
    struct s6* rdi22;
    struct s36* rsi23;
    int32_t* rbx24;
    struct s37* rsi25;
    int32_t* rbx26;
    struct s6* rdi27;
    struct s38* rsi28;
    int32_t* rcx29;
    int32_t* rbx30;
    struct s39* rsi31;
    struct s6* rdi32;
    struct s3* rsi33;
    int32_t v34;
    signed char** v35;
    int32_t** rax36;
    int32_t* r14_37;
    int32_t* rcx38;
    int32_t* rsi39;
    int64_t r12_40;
    int32_t* rdi41;
    int64_t r13_42;
    int64_t rbp43;
    int32_t* rbx44;
    int64_t v45;

    *reinterpret_cast<int32_t*>(&rax2) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax2) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        *reinterpret_cast<int32_t*>(&rcx3) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx3) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rsi4 = reinterpret_cast<struct s1*>(rbx5 + rcx3 * 0xfa0 + rax2 * 2);
            *reinterpret_cast<int32_t*>(&rdi6) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi6) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                *rdi6 = rsi4->f0;
                rdi7 = reinterpret_cast<struct s33*>(rdi6 + 1);
                rsi8 = reinterpret_cast<struct s3*>(&rsi4->f4);
                __asm__("mulsd xmm0, [r8+rax*8]");
                __asm__("addsd xmm0, [r9+rdi*8]");
                rdi7->f0 = rsi8->f0;
                rsi4 = reinterpret_cast<struct s1*>(&rsi8->f4);
                rdi6 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi7->f4) + 1);
            } while (!reinterpret_cast<int1_t>(rdi6 == 0x7d0));
            ++rcx3;
        } while (rcx3 != 0x7d0);
        ++rax2;
    } while (rax2 != 0x7d0);
    do {
        *reinterpret_cast<int32_t*>(&rax9) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax9) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rdx10 = r15_11 + r12_12 * 0xfa0;
            *rdi6 = rsi4->f0;
            rdi13 = reinterpret_cast<struct s33*>(rdi6 + 1);
            rsi14 = reinterpret_cast<struct s3*>(&rsi4->f4);
            rdi13->f0 = rsi14->f0;
            rdi6 = &rdi13->f4;
            rsi4 = reinterpret_cast<struct s1*>(&rsi14->f4);
            ++rax9;
        } while (rax9 != 0x7d0);
        ++r12_12;
    } while (r12_12 != 0x7d0);
    rdi15 = r15_16;
    fun_317();
    *reinterpret_cast<int32_t*>(&rax17) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax17) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        if (rax17 != fputc) {
            *reinterpret_cast<int32_t*>(&rcx18) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx18) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                if (rcx18 != fputc) {
                    rsi19 = reinterpret_cast<struct s34*>(rbx20 + reinterpret_cast<int64_t>(rax17) * 0xfa0 + reinterpret_cast<int64_t>(rcx18) * 2);
                    *rdi15 = rsi19->f0;
                    rsi21 = reinterpret_cast<struct s35*>(&rsi19->f4);
                    *reinterpret_cast<int32_t*>(&rdi15) = reinterpret_cast<int32_t>(fputc);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi15) + 4) = reinterpret_cast<int32_t>(fputc);
                    do {
                        *rdi15 = rsi21->f0;
                        rdi22 = reinterpret_cast<struct s6*>(rdi15 + 1);
                        rsi23 = reinterpret_cast<struct s36*>(&rsi21->f4);
                        __asm__("mulsd xmm1, [r8+rcx*8]");
                        __asm__("subsd xmm0, xmm1");
                        rdi22->f0 = rsi23->f0;
                        rsi21 = reinterpret_cast<struct s35*>(&rsi23->f4);
                        rdi15 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi22->f4) + 1);
                    } while (rdi15 != rcx18);
                }
                rdx10 = rbx24 + reinterpret_cast<int64_t>(rcx18) * 0xfa0;
                rsi25 = reinterpret_cast<struct s37*>(rbx26 + reinterpret_cast<int64_t>(rax17) * 0xfa0);
                *rdi15 = rsi25->f0;
                rdi27 = reinterpret_cast<struct s6*>(rdi15 + 1);
                rsi28 = reinterpret_cast<struct s38*>(&rsi25->f4);
                __asm__("divsd xmm0, [rdx+rcx*8]");
                rdi27->f0 = rsi28->f0;
                rdi15 = &rdi27->f4;
                rsi4 = reinterpret_cast<struct s1*>(&rsi28->f4);
                rcx18 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rcx18) + 1);
            } while (rcx18 != rax17);
        }
        rcx29 = rax17;
        do {
            if (rax17 != fputc) {
                rdx10 = rbx30 + reinterpret_cast<int64_t>(rax17) * 0xfa0;
                rsi31 = reinterpret_cast<struct s39*>(rdx10 + reinterpret_cast<int64_t>(rcx29) * 2);
                *rdi15 = rsi31->f0;
                rsi4 = reinterpret_cast<struct s1*>(&rsi31->f4);
                *reinterpret_cast<int32_t*>(&rdi15) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi15) + 4) = reinterpret_cast<int32_t>(fputc);
                do {
                    *rdi15 = rsi4->f0;
                    rdi32 = reinterpret_cast<struct s6*>(rdi15 + 1);
                    rsi33 = reinterpret_cast<struct s3*>(&rsi4->f4);
                    __asm__("mulsd xmm1, [r8+rcx*8]");
                    __asm__("subsd xmm0, xmm1");
                    rdi32->f0 = rsi33->f0;
                    rsi4 = reinterpret_cast<struct s1*>(&rsi33->f4);
                    rdi15 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi32->f4) + 1);
                } while (rdi15 != rax17);
            }
            rcx29 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rcx29) + 1);
        } while (rcx29 != 0x7d0);
        rax17 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rax17) + 1);
    } while (rax17 != 0x7d0);
    if (v34 >= 43 && **v35 == fputc) {
        rax36 = g45b;
        r14_37 = *rax36;
        rcx38 = r14_37;
        fun_477(0x465, 22, 1, rcx38);
        rsi39 = reinterpret_cast<int32_t*>(0x47e);
        *reinterpret_cast<int32_t*>(&r12_40) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_40) + 4) = reinterpret_cast<int32_t>(fputc);
        rdi41 = r14_37;
        fun_492();
        do {
            r13_42 = r12_40 * 0x7d0;
            *reinterpret_cast<int32_t*>(&rbp43) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp43) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("ror eax, 0x2");
                if (reinterpret_cast<uint32_t>(static_cast<int32_t>(rbp43 + r13_42) * 0xcccccccd) <= 0xccccccc) {
                    *reinterpret_cast<int32_t*>(&rdi41) = 10;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi41) + 4) = reinterpret_cast<int32_t>(fputc);
                    rsi39 = r14_37;
                    fun_4cb();
                }
                *rdi41 = *rsi39;
                rdi41 = r14_37;
                rsi39 = reinterpret_cast<int32_t*>(0x499);
                fun_4e7();
                ++rbp43;
            } while (rbp43 != 0x7d0);
            ++r12_40;
        } while (r12_40 != 0x7d0);
        fun_517(r14_37, 0x506, 0x50d, rcx38);
        *reinterpret_cast<int32_t*>(&rsi4) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi4) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx10) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx10) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx29 = r14_37;
        fun_530(0x51e, 22, 1, rcx29);
    }
    fun_443(rbx44, rsi4, rdx10, rcx29);
    goto v45;
}

void fun_492() {
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
    int32_t* rbx11;
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
                fun_4cb();
            }
            *rdi4 = *rsi5;
            rdi4 = r14_7;
            rsi5 = reinterpret_cast<int32_t*>(0x499);
            fun_4e7();
            ++rbp3;
        } while (rbp3 != 0x7d0);
        ++r12_2;
    } while (r12_2 != 0x7d0);
    fun_517(r14_8, 0x506, 0x50d, rcx9);
    fun_530(0x51e, 22, 1, r14_10);
    fun_443(rbx11, 22, 1, r14_10);
    goto v12;
}

void fputc(int32_t edi) {
    if (reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(edi < reinterpret_cast<int32_t>(fputc) == fputc)) | reinterpret_cast<uint1_t>(edi == fputc)) {
        return;
    }
}

void fun_98() {
    int64_t r9_1;

    __asm__("movups [rax], xmm0");
    if (!reinterpret_cast<int1_t>(r9_1 + 1 == fputc)) {
    }
}

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

void fun_b0() {
    int64_t rdx1;
    int64_t rcx2;
    int64_t rcx3;
    struct s40* rdi4;
    int64_t rcx5;
    struct s41* rsi6;
    struct s42* rdi7;
    int64_t r9_8;
    struct s43* rdi9;
    struct s44* rsi10;
    int64_t rcx11;
    int64_t rax12;

    rdx1 = rcx2;
    do {
        if (rcx3 != fputc) {
            rdi4 = reinterpret_cast<struct s40*>(rsi6 + rcx5 * 0x7d0);
            rdi4->f0 = rsi6->f0;
            rdi7 = reinterpret_cast<struct s42*>(&rdi4->f4);
            rsi6 = reinterpret_cast<struct s41*>(&rsi6->f4);
            *reinterpret_cast<int32_t*>(&r9_8) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_8) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                rdi7->f0 = rsi6->f0;
                rdi9 = reinterpret_cast<struct s43*>(&rdi7->f4);
                rsi10 = reinterpret_cast<struct s44*>(&rsi6->f4);
                __asm__("mulsd xmm1, [r10+rdx*8]");
                __asm__("subsd xmm0, xmm1");
                rdi9->f0 = rsi10->f0;
                rdi7 = reinterpret_cast<struct s42*>(&rdi9->f4);
                rsi6 = reinterpret_cast<struct s41*>(&rsi10->f4);
                ++r9_8;
            } while (r9_8 != rcx11);
        }
        ++rdx1;
    } while (rdx1 != rax12);
}

void submain(int32_t edi, int64_t rsi) {
    fun_146(0x3d0900, 8);
}

