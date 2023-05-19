
struct s0 {
    int32_t f0;
    int32_t f4;
};

int32_t fputc = 0x56415741;

int32_t g4 = 0x50535441;

void fputc();

struct s1 {
    int32_t f0;
    int32_t f4;
};

struct s1* fun_244(int64_t rdi, int64_t rsi);

void fun_259(struct s1* rdi);

struct s2 {
    int32_t f0;
    int32_t f4;
};

struct s3 {
    int32_t f0;
    int32_t f4;
};

void fun_327();

struct s4 {
    int32_t f0;
    int32_t f4;
};

struct s5 {
    int32_t f0;
    int32_t f4;
};

void fun_335();

int32_t** g460 = reinterpret_cast<int32_t**>(0x3d8d48308b4c);

void fun_482(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx);

void fun_49d();

void fun_4cb();

void fun_4ec();

void fun_51b(int32_t* rdi, int64_t rsi, int64_t rdx, int32_t* rcx);

void fun_534(int64_t rdi, int32_t* rsi, int32_t* rdx, int32_t* rcx);

void fun_448(int32_t* rdi, int32_t* rsi, int32_t* rdx, int32_t* rcx);

void fun_216() {
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
    struct s1* rax11;
    struct s1* r15_12;
    int64_t r12_13;
    int64_t rax14;
    int64_t rcx15;
    int32_t* rsi16;
    int32_t* rbx17;
    int32_t* rdi18;
    struct s2* rdi19;
    struct s3* rsi20;
    int64_t rax21;
    void* rcx22;
    int32_t* rdx23;
    struct s2* rdi24;
    struct s3* rsi25;
    int32_t* rcx26;
    int32_t* rbx27;
    struct s1* rdi28;
    int32_t* r15_29;
    int32_t* rax30;
    struct s3* rsi31;
    struct s4* rdi32;
    int32_t* rbx33;
    int32_t* rbx34;
    struct s5* rdi35;
    struct s3* rsi36;
    struct s5* rdi37;
    struct s3* rsi38;
    uint64_t r14_39;
    struct s5* rdi40;
    struct s3* rsi41;
    int64_t rbx42;
    int32_t v43;
    signed char** v44;
    int32_t** rax45;
    int32_t* r14_46;
    int64_t r12_47;
    int32_t* rcx48;
    int32_t* rsi49;
    int64_t r13_50;
    int32_t* rdi51;
    int64_t rbp52;
    int64_t r15_53;
    int32_t* rbx54;
    int64_t v55;

    while (1) {
        rdi1->f0 = fputc;
        rdi1->f4 = g4;
        rsi2 = reinterpret_cast<int32_t*>(0x7fffffff8);
        do {
            (rbx4 + r14_3 * 0x7d0)[r14_3] = r13_5;
            ++r15_6;
            if (rbp7 == 0x7d0) 
                goto addr_235_9;
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
        fun_216();
    }
    addr_235_9:
    rax11 = fun_244(0x3d0900, 8);
    r15_12 = rax11;
    *reinterpret_cast<int32_t*>(&r12_13) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_13) + 4) = reinterpret_cast<int32_t>(fputc);
    fun_259(rax11);
    *reinterpret_cast<int32_t*>(&rax14) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax14) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        *reinterpret_cast<int32_t*>(&rcx15) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx15) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rsi16 = rbx17 + rcx15 * 0xfa0 + rax14 * 2;
            *reinterpret_cast<int32_t*>(&rdi18) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi18) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                *rdi18 = *rsi16;
                rdi19 = reinterpret_cast<struct s2*>(rdi18 + 1);
                rsi20 = reinterpret_cast<struct s3*>(rsi16 + 1);
                __asm__("mulsd xmm0, [r8+rax*8]");
                __asm__("addsd xmm0, [r9+rdi*8]");
                rdi19->f0 = rsi20->f0;
                rsi16 = &rsi20->f4;
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
            rcx22 = reinterpret_cast<void*>(r12_13 * 0x3e80);
            rdx23 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(r15_12) + reinterpret_cast<int64_t>(rcx22));
            *rdi18 = *rsi16;
            rdi24 = reinterpret_cast<struct s2*>(rdi18 + 1);
            rsi25 = reinterpret_cast<struct s3*>(rsi16 + 1);
            rcx26 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rcx22) + reinterpret_cast<int64_t>(rbx27));
            rdi24->f0 = rsi25->f0;
            rdi18 = &rdi24->f4;
            rsi16 = &rsi25->f4;
            ++rax21;
        } while (rax21 != 0x7d0);
        ++r12_13;
    } while (r12_13 != 0x7d0);
    rdi28 = r15_12;
    fun_327();
    *reinterpret_cast<int32_t*>(&r15_29) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_29) + 4) = reinterpret_cast<int32_t>(fputc);
    __asm__("xorpd xmm2, xmm2");
    do {
        if (r15_29 != fputc) {
            *reinterpret_cast<int32_t*>(&rax30) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax30) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                if (rax30 != fputc) {
                    rdi28->f0 = *rsi16;
                    rdi28 = reinterpret_cast<struct s1*>(&rdi28->f4);
                    *reinterpret_cast<int32_t*>(&rsi16) = reinterpret_cast<int32_t>(fputc);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi16) + 4) = reinterpret_cast<int32_t>(fputc);
                    do {
                        rdi28->f0 = *rsi16;
                        rsi31 = reinterpret_cast<struct s3*>(rsi16 + 1);
                        rdi32 = reinterpret_cast<struct s4*>(rbx33 + reinterpret_cast<int64_t>(rax30) * 0xfa0);
                        __asm__("mulsd xmm1, [rdi+rsi*8]");
                        __asm__("subsd xmm0, xmm1");
                        rdi32->f0 = rsi31->f0;
                        rdi28 = reinterpret_cast<struct s1*>(&rdi32->f4);
                        rsi16 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi31->f4) + 1);
                    } while (rsi16 != rax30);
                }
                rcx26 = rbx34 + reinterpret_cast<int64_t>(r15_29) * 0xfa0;
                rdi28->f0 = *rsi16;
                rdi35 = reinterpret_cast<struct s5*>(&rdi28->f4);
                rsi36 = reinterpret_cast<struct s3*>(rsi16 + 1);
                __asm__("divsd xmm0, [rdx+rax*8]");
                rdi35->f0 = rsi36->f0;
                rdi28 = reinterpret_cast<struct s1*>(&rdi35->f4);
                rsi16 = &rsi36->f4;
                rax30 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rax30) + 1);
            } while (rax30 != r15_29);
            rdi28->f0 = *rsi16;
            rdi28 = reinterpret_cast<struct s1*>(&rdi28->f4);
            ++rsi16;
            *reinterpret_cast<int32_t*>(&rdx23) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx23) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                rdi28->f0 = *rsi16;
                rdi37 = reinterpret_cast<struct s5*>(&rdi28->f4);
                rsi38 = reinterpret_cast<struct s3*>(rsi16 + 1);
                __asm__("mulsd xmm1, xmm1");
                __asm__("subsd xmm0, xmm1");
                rdi37->f0 = rsi38->f0;
                rdi28 = reinterpret_cast<struct s1*>(&rdi37->f4);
                rsi16 = &rsi38->f4;
                rdx23 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rdx23) + 1);
            } while (rdx23 != r15_29);
        }
        r14_39 = reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(r15_29) * 0x3e80);
        rdi28->f0 = *rsi16;
        rdi40 = reinterpret_cast<struct s5*>(&rdi28->f4);
        rsi41 = reinterpret_cast<struct s3*>(rsi16 + 1);
        __asm__("ucomisd xmm0, xmm2");
        if (r14_39 + rbx42 < r14_39) {
            fun_335();
            __asm__("xorpd xmm2, xmm2");
        } else {
            __asm__("sqrtsd xmm0, xmm0");
        }
        rdi40->f0 = rsi41->f0;
        rdi28 = reinterpret_cast<struct s1*>(&rdi40->f4);
        rsi16 = &rsi41->f4;
        r15_29 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(r15_29) + 1);
    } while (r15_29 != 0x7d0);
    if (v43 >= 43 && **v44 == fputc) {
        rax45 = g460;
        r14_46 = *rax45;
        *reinterpret_cast<int32_t*>(&r12_47) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_47) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx48 = r14_46;
        fun_482(0x46a, 22, 1, rcx48);
        rsi49 = reinterpret_cast<int32_t*>(0x489);
        *reinterpret_cast<int32_t*>(&r13_50) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_50) + 4) = reinterpret_cast<int32_t>(fputc);
        rdi51 = r14_46;
        fun_49d();
        do {
            rbp52 = r13_50 * 0x7d0;
            *reinterpret_cast<int32_t*>(&r15_53) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_53) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("ror eax, 0x2");
                if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r15_53 + rbp52) * 0xcccccccd) <= 0xccccccc) {
                    *reinterpret_cast<int32_t*>(&rdi51) = 10;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi51) + 4) = reinterpret_cast<int32_t>(fputc);
                    rsi49 = r14_46;
                    fun_4cb();
                }
                *rdi51 = *rsi49;
                rdi51 = r14_46;
                rsi49 = reinterpret_cast<int32_t*>(0x4e5);
                fun_4ec();
                ++r15_53;
            } while (r15_53 != r12_47);
            ++r13_50;
            ++r12_47;
        } while (r13_50 != 0x7d0);
        fun_51b(r14_46, 0x50a, 0x511, rcx48);
        *reinterpret_cast<int32_t*>(&rsi16) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi16) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx23) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx23) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx26 = r14_46;
        fun_534(0x522, 22, 1, rcx26);
    }
    fun_448(rbx54, rsi16, rdx23, rcx26);
    goto v55;
}

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

void fun_327() {
    int32_t* r15_1;
    int32_t* rax2;
    struct s6* rdi3;
    int32_t* rsi4;
    struct s3* rsi5;
    struct s7* rdi6;
    int32_t* rbx7;
    int32_t* rcx8;
    int32_t* rbx9;
    struct s8* rdi10;
    struct s3* rsi11;
    int32_t* rdx12;
    struct s8* rdi13;
    struct s3* rsi14;
    uint64_t r14_15;
    struct s8* rdi16;
    struct s3* rsi17;
    int64_t rbx18;
    int32_t v19;
    signed char** v20;
    int32_t** rax21;
    int32_t* r14_22;
    int64_t r12_23;
    int32_t* rcx24;
    int32_t* rsi25;
    int64_t r13_26;
    int32_t* rdi27;
    int64_t rbp28;
    int64_t r15_29;
    int32_t* rbx30;
    int64_t v31;

    *reinterpret_cast<int32_t*>(&r15_1) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_1) + 4) = reinterpret_cast<int32_t>(fputc);
    __asm__("xorpd xmm2, xmm2");
    do {
        if (r15_1 != fputc) {
            *reinterpret_cast<int32_t*>(&rax2) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax2) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                if (rax2 != fputc) {
                    rdi3->f0 = *rsi4;
                    rdi3 = reinterpret_cast<struct s6*>(&rdi3->f4);
                    *reinterpret_cast<int32_t*>(&rsi4) = reinterpret_cast<int32_t>(fputc);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi4) + 4) = reinterpret_cast<int32_t>(fputc);
                    do {
                        rdi3->f0 = *rsi4;
                        rsi5 = reinterpret_cast<struct s3*>(rsi4 + 1);
                        rdi6 = reinterpret_cast<struct s7*>(rbx7 + reinterpret_cast<int64_t>(rax2) * 0xfa0);
                        __asm__("mulsd xmm1, [rdi+rsi*8]");
                        __asm__("subsd xmm0, xmm1");
                        rdi6->f0 = rsi5->f0;
                        rdi3 = reinterpret_cast<struct s6*>(&rdi6->f4);
                        rsi4 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi5->f4) + 1);
                    } while (rsi4 != rax2);
                }
                rcx8 = rbx9 + reinterpret_cast<int64_t>(r15_1) * 0xfa0;
                rdi3->f0 = *rsi4;
                rdi10 = reinterpret_cast<struct s8*>(&rdi3->f4);
                rsi11 = reinterpret_cast<struct s3*>(rsi4 + 1);
                __asm__("divsd xmm0, [rdx+rax*8]");
                rdi10->f0 = rsi11->f0;
                rdi3 = reinterpret_cast<struct s6*>(&rdi10->f4);
                rsi4 = &rsi11->f4;
                rax2 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rax2) + 1);
            } while (rax2 != r15_1);
            rdi3->f0 = *rsi4;
            rdi3 = reinterpret_cast<struct s6*>(&rdi3->f4);
            ++rsi4;
            *reinterpret_cast<int32_t*>(&rdx12) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx12) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                rdi3->f0 = *rsi4;
                rdi13 = reinterpret_cast<struct s8*>(&rdi3->f4);
                rsi14 = reinterpret_cast<struct s3*>(rsi4 + 1);
                __asm__("mulsd xmm1, xmm1");
                __asm__("subsd xmm0, xmm1");
                rdi13->f0 = rsi14->f0;
                rdi3 = reinterpret_cast<struct s6*>(&rdi13->f4);
                rsi4 = &rsi14->f4;
                rdx12 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rdx12) + 1);
            } while (rdx12 != r15_1);
        }
        r14_15 = reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(r15_1) * 0x3e80);
        rdi3->f0 = *rsi4;
        rdi16 = reinterpret_cast<struct s8*>(&rdi3->f4);
        rsi17 = reinterpret_cast<struct s3*>(rsi4 + 1);
        __asm__("ucomisd xmm0, xmm2");
        if (r14_15 + rbx18 < r14_15) {
            fun_335();
            __asm__("xorpd xmm2, xmm2");
        } else {
            __asm__("sqrtsd xmm0, xmm0");
        }
        rdi16->f0 = rsi17->f0;
        rdi3 = reinterpret_cast<struct s6*>(&rdi16->f4);
        rsi4 = &rsi17->f4;
        r15_1 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(r15_1) + 1);
    } while (r15_1 != 0x7d0);
    if (v19 >= 43 && **v20 == fputc) {
        rax21 = g460;
        r14_22 = *rax21;
        *reinterpret_cast<int32_t*>(&r12_23) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_23) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx24 = r14_22;
        fun_482(0x46a, 22, 1, rcx24);
        rsi25 = reinterpret_cast<int32_t*>(0x489);
        *reinterpret_cast<int32_t*>(&r13_26) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_26) + 4) = reinterpret_cast<int32_t>(fputc);
        rdi27 = r14_22;
        fun_49d();
        do {
            rbp28 = r13_26 * 0x7d0;
            *reinterpret_cast<int32_t*>(&r15_29) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_29) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("ror eax, 0x2");
                if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r15_29 + rbp28) * 0xcccccccd) <= 0xccccccc) {
                    *reinterpret_cast<int32_t*>(&rdi27) = 10;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi27) + 4) = reinterpret_cast<int32_t>(fputc);
                    rsi25 = r14_22;
                    fun_4cb();
                }
                *rdi27 = *rsi25;
                rdi27 = r14_22;
                rsi25 = reinterpret_cast<int32_t*>(0x4e5);
                fun_4ec();
                ++r15_29;
            } while (r15_29 != r12_23);
            ++r13_26;
            ++r12_23;
        } while (r13_26 != 0x7d0);
        fun_51b(r14_22, 0x50a, 0x511, rcx24);
        *reinterpret_cast<int32_t*>(&rsi4) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi4) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx12) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx12) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx8 = r14_22;
        fun_534(0x522, 22, 1, rcx8);
    }
    fun_448(rbx30, rsi4, rdx12, rcx8);
    goto v31;
}

void fun_448(int32_t* rdi, int32_t* rsi, int32_t* rdx, int32_t* rcx) {
    int64_t v5;

    goto v5;
}

void fun_4cb() {
    int32_t* rdi1;
    int32_t* rsi2;
    int32_t* r14_3;
    int64_t r15_4;
    int64_t r12_5;
    int64_t r13_6;
    int64_t rbp7;
    int32_t* r14_8;
    int32_t* r14_9;
    int32_t* rcx10;
    int32_t* r14_11;
    int32_t* rbx12;
    int64_t v13;

    while (1) {
        *rdi1 = *rsi2;
        rdi1 = r14_3;
        rsi2 = reinterpret_cast<int32_t*>(0x4e5);
        fun_4ec();
        ++r15_4;
        if (r15_4 == r12_5) {
            ++r13_6;
            ++r12_5;
            if (r13_6 == 0x7d0) 
                break;
            rbp7 = r13_6 * 0x7d0;
            *reinterpret_cast<int32_t*>(&r15_4) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_4) + 4) = reinterpret_cast<int32_t>(fputc);
        }
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r15_4 + rbp7) * 0xcccccccd) > 0xccccccc) 
            continue;
        *reinterpret_cast<int32_t*>(&rdi1) = 10;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi1) + 4) = reinterpret_cast<int32_t>(fputc);
        rsi2 = r14_8;
        fun_4cb();
    }
    fun_51b(r14_9, 0x50a, 0x511, rcx10);
    fun_534(0x522, 22, 1, r14_11);
    fun_448(rbx12, 22, 1, r14_11);
    goto v13;
}

void fun_4ec() {
    int64_t r15_1;
    int64_t r12_2;
    int64_t r13_3;
    int64_t rbp4;
    int32_t* rdi5;
    int32_t* rsi6;
    int32_t* r14_7;
    int32_t* r14_8;
    int32_t* r14_9;
    int32_t* rcx10;
    int32_t* r14_11;
    int32_t* rbx12;
    int64_t v13;

    while (1) {
        ++r15_1;
        if (r15_1 == r12_2) {
            ++r13_3;
            ++r12_2;
            if (r13_3 == 0x7d0) 
                break;
            rbp4 = r13_3 * 0x7d0;
            *reinterpret_cast<int32_t*>(&r15_1) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_1) + 4) = reinterpret_cast<int32_t>(fputc);
        }
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r15_1 + rbp4) * 0xcccccccd) <= 0xccccccc) {
            *reinterpret_cast<int32_t*>(&rdi5) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi5) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi6 = r14_7;
            fun_4cb();
        }
        *rdi5 = *rsi6;
        rdi5 = r14_8;
        rsi6 = reinterpret_cast<int32_t*>(0x4e5);
        fun_4ec();
    }
    fun_51b(r14_9, 0x50a, 0x511, rcx10);
    fun_534(0x522, 22, 1, r14_11);
    fun_448(rbx12, 22, 1, r14_11);
    goto v13;
}

void fun_51b(int32_t* rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int32_t* r14_5;
    int32_t* rbx6;
    int64_t v7;

    fun_534(0x522, 22, 1, r14_5);
    fun_448(rbx6, 22, 1, r14_5);
    goto v7;
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

struct s1* fun_244(int64_t rdi, int64_t rsi) {
    struct s9* r15_3;
    struct s9* rax4;
    int64_t r12_5;
    struct s1* rax6;
    int64_t rax7;
    int64_t rcx8;
    int32_t* rsi9;
    int32_t* rbx10;
    int32_t* rdi11;
    struct s10* rdi12;
    struct s3* rsi13;
    int64_t rax14;
    void* rcx15;
    int32_t* rdx16;
    struct s10* rdi17;
    struct s3* rsi18;
    int32_t* rcx19;
    int32_t* rbx20;
    struct s9* rdi21;
    int32_t* r15_22;
    int32_t* rax23;
    struct s3* rsi24;
    struct s11* rdi25;
    int32_t* rbx26;
    int32_t* rbx27;
    struct s12* rdi28;
    struct s3* rsi29;
    struct s12* rdi30;
    struct s3* rsi31;
    uint64_t r14_32;
    struct s12* rdi33;
    struct s3* rsi34;
    int64_t rbx35;
    int32_t v36;
    signed char** v37;
    int32_t** rax38;
    int32_t* r14_39;
    int64_t r12_40;
    int32_t* rcx41;
    int32_t* rsi42;
    int64_t r13_43;
    int32_t* rdi44;
    int64_t rbp45;
    int64_t r15_46;
    int32_t* rbx47;
    int64_t v48;

    r15_3 = rax4;
    *reinterpret_cast<int32_t*>(&r12_5) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_5) + 4) = reinterpret_cast<int32_t>(fputc);
    fun_259(rax6);
    *reinterpret_cast<int32_t*>(&rax7) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax7) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        *reinterpret_cast<int32_t*>(&rcx8) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx8) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rsi9 = rbx10 + rcx8 * 0xfa0 + rax7 * 2;
            *reinterpret_cast<int32_t*>(&rdi11) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi11) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                *rdi11 = *rsi9;
                rdi12 = reinterpret_cast<struct s10*>(rdi11 + 1);
                rsi13 = reinterpret_cast<struct s3*>(rsi9 + 1);
                __asm__("mulsd xmm0, [r8+rax*8]");
                __asm__("addsd xmm0, [r9+rdi*8]");
                rdi12->f0 = rsi13->f0;
                rsi9 = &rsi13->f4;
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
            rcx15 = reinterpret_cast<void*>(r12_5 * 0x3e80);
            rdx16 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(r15_3) + reinterpret_cast<int64_t>(rcx15));
            *rdi11 = *rsi9;
            rdi17 = reinterpret_cast<struct s10*>(rdi11 + 1);
            rsi18 = reinterpret_cast<struct s3*>(rsi9 + 1);
            rcx19 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rcx15) + reinterpret_cast<int64_t>(rbx20));
            rdi17->f0 = rsi18->f0;
            rdi11 = &rdi17->f4;
            rsi9 = &rsi18->f4;
            ++rax14;
        } while (rax14 != 0x7d0);
        ++r12_5;
    } while (r12_5 != 0x7d0);
    rdi21 = r15_3;
    fun_327();
    *reinterpret_cast<int32_t*>(&r15_22) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_22) + 4) = reinterpret_cast<int32_t>(fputc);
    __asm__("xorpd xmm2, xmm2");
    do {
        if (r15_22 != fputc) {
            *reinterpret_cast<int32_t*>(&rax23) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax23) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                if (rax23 != fputc) {
                    rdi21->f0 = *rsi9;
                    rdi21 = reinterpret_cast<struct s9*>(&rdi21->f4);
                    *reinterpret_cast<int32_t*>(&rsi9) = reinterpret_cast<int32_t>(fputc);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi9) + 4) = reinterpret_cast<int32_t>(fputc);
                    do {
                        rdi21->f0 = *rsi9;
                        rsi24 = reinterpret_cast<struct s3*>(rsi9 + 1);
                        rdi25 = reinterpret_cast<struct s11*>(rbx26 + reinterpret_cast<int64_t>(rax23) * 0xfa0);
                        __asm__("mulsd xmm1, [rdi+rsi*8]");
                        __asm__("subsd xmm0, xmm1");
                        rdi25->f0 = rsi24->f0;
                        rdi21 = reinterpret_cast<struct s9*>(&rdi25->f4);
                        rsi9 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi24->f4) + 1);
                    } while (rsi9 != rax23);
                }
                rcx19 = rbx27 + reinterpret_cast<int64_t>(r15_22) * 0xfa0;
                rdi21->f0 = *rsi9;
                rdi28 = reinterpret_cast<struct s12*>(&rdi21->f4);
                rsi29 = reinterpret_cast<struct s3*>(rsi9 + 1);
                __asm__("divsd xmm0, [rdx+rax*8]");
                rdi28->f0 = rsi29->f0;
                rdi21 = reinterpret_cast<struct s9*>(&rdi28->f4);
                rsi9 = &rsi29->f4;
                rax23 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rax23) + 1);
            } while (rax23 != r15_22);
            rdi21->f0 = *rsi9;
            rdi21 = reinterpret_cast<struct s9*>(&rdi21->f4);
            ++rsi9;
            *reinterpret_cast<int32_t*>(&rdx16) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx16) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                rdi21->f0 = *rsi9;
                rdi30 = reinterpret_cast<struct s12*>(&rdi21->f4);
                rsi31 = reinterpret_cast<struct s3*>(rsi9 + 1);
                __asm__("mulsd xmm1, xmm1");
                __asm__("subsd xmm0, xmm1");
                rdi30->f0 = rsi31->f0;
                rdi21 = reinterpret_cast<struct s9*>(&rdi30->f4);
                rsi9 = &rsi31->f4;
                rdx16 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rdx16) + 1);
            } while (rdx16 != r15_22);
        }
        r14_32 = reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(r15_22) * 0x3e80);
        rdi21->f0 = *rsi9;
        rdi33 = reinterpret_cast<struct s12*>(&rdi21->f4);
        rsi34 = reinterpret_cast<struct s3*>(rsi9 + 1);
        __asm__("ucomisd xmm0, xmm2");
        if (r14_32 + rbx35 < r14_32) {
            fun_335();
            __asm__("xorpd xmm2, xmm2");
        } else {
            __asm__("sqrtsd xmm0, xmm0");
        }
        rdi33->f0 = rsi34->f0;
        rdi21 = reinterpret_cast<struct s9*>(&rdi33->f4);
        rsi9 = &rsi34->f4;
        r15_22 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(r15_22) + 1);
    } while (r15_22 != 0x7d0);
    if (v36 >= 43 && **v37 == fputc) {
        rax38 = g460;
        r14_39 = *rax38;
        *reinterpret_cast<int32_t*>(&r12_40) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_40) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx41 = r14_39;
        fun_482(0x46a, 22, 1, rcx41);
        rsi42 = reinterpret_cast<int32_t*>(0x489);
        *reinterpret_cast<int32_t*>(&r13_43) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_43) + 4) = reinterpret_cast<int32_t>(fputc);
        rdi44 = r14_39;
        fun_49d();
        do {
            rbp45 = r13_43 * 0x7d0;
            *reinterpret_cast<int32_t*>(&r15_46) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_46) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("ror eax, 0x2");
                if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r15_46 + rbp45) * 0xcccccccd) <= 0xccccccc) {
                    *reinterpret_cast<int32_t*>(&rdi44) = 10;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi44) + 4) = reinterpret_cast<int32_t>(fputc);
                    rsi42 = r14_39;
                    fun_4cb();
                }
                *rdi44 = *rsi42;
                rdi44 = r14_39;
                rsi42 = reinterpret_cast<int32_t*>(0x4e5);
                fun_4ec();
                ++r15_46;
            } while (r15_46 != r12_40);
            ++r13_43;
            ++r12_40;
        } while (r13_43 != 0x7d0);
        fun_51b(r14_39, 0x50a, 0x511, rcx41);
        *reinterpret_cast<int32_t*>(&rsi9) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi9) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx16) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx16) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx19 = r14_39;
        fun_534(0x522, 22, 1, rcx19);
    }
    fun_448(rbx47, rsi9, rdx16, rcx19);
    goto v48;
}

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

void fun_335() {
    struct s13* rdi1;
    struct s3* rsi2;
    struct s14* rdi3;
    int32_t* rsi4;
    int32_t* r15_5;
    int32_t* rax6;
    struct s3* rsi7;
    struct s15* rdi8;
    int32_t* rbx9;
    int32_t* rcx10;
    int32_t* rbx11;
    struct s13* rdi12;
    struct s3* rsi13;
    int32_t* rdx14;
    struct s13* rdi15;
    struct s3* rsi16;
    uint64_t r14_17;
    int64_t rbx18;
    int32_t v19;
    signed char** v20;
    int32_t** rax21;
    int32_t* r14_22;
    int64_t r12_23;
    int32_t* rcx24;
    int32_t* rsi25;
    int64_t r13_26;
    int32_t* rdi27;
    int64_t rbp28;
    int64_t r15_29;
    int32_t* rbx30;
    int64_t v31;

    while (1) {
        __asm__("xorpd xmm2, xmm2");
        while (1) {
            rdi1->f0 = rsi2->f0;
            rdi3 = reinterpret_cast<struct s14*>(&rdi1->f4);
            rsi4 = &rsi2->f4;
            r15_5 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(r15_5) + 1);
            if (r15_5 == 0x7d0) 
                goto addr_42c_6;
            if (r15_5 != fputc) {
                *reinterpret_cast<int32_t*>(&rax6) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax6) + 4) = reinterpret_cast<int32_t>(fputc);
                do {
                    if (rax6 != fputc) {
                        rdi3->f0 = *rsi4;
                        rdi3 = reinterpret_cast<struct s14*>(&rdi3->f4);
                        *reinterpret_cast<int32_t*>(&rsi4) = reinterpret_cast<int32_t>(fputc);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi4) + 4) = reinterpret_cast<int32_t>(fputc);
                        do {
                            rdi3->f0 = *rsi4;
                            rsi7 = reinterpret_cast<struct s3*>(rsi4 + 1);
                            rdi8 = reinterpret_cast<struct s15*>(rbx9 + reinterpret_cast<int64_t>(rax6) * 0xfa0);
                            __asm__("mulsd xmm1, [rdi+rsi*8]");
                            __asm__("subsd xmm0, xmm1");
                            rdi8->f0 = rsi7->f0;
                            rdi3 = reinterpret_cast<struct s14*>(&rdi8->f4);
                            rsi4 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi7->f4) + 1);
                        } while (rsi4 != rax6);
                    }
                    rcx10 = rbx11 + reinterpret_cast<int64_t>(r15_5) * 0xfa0;
                    rdi3->f0 = *rsi4;
                    rdi12 = reinterpret_cast<struct s13*>(&rdi3->f4);
                    rsi13 = reinterpret_cast<struct s3*>(rsi4 + 1);
                    __asm__("divsd xmm0, [rdx+rax*8]");
                    rdi12->f0 = rsi13->f0;
                    rdi3 = reinterpret_cast<struct s14*>(&rdi12->f4);
                    rsi4 = &rsi13->f4;
                    rax6 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rax6) + 1);
                } while (rax6 != r15_5);
                rdi3->f0 = *rsi4;
                rdi3 = reinterpret_cast<struct s14*>(&rdi3->f4);
                ++rsi4;
                *reinterpret_cast<int32_t*>(&rdx14) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx14) + 4) = reinterpret_cast<int32_t>(fputc);
                do {
                    rdi3->f0 = *rsi4;
                    rdi15 = reinterpret_cast<struct s13*>(&rdi3->f4);
                    rsi16 = reinterpret_cast<struct s3*>(rsi4 + 1);
                    __asm__("mulsd xmm1, xmm1");
                    __asm__("subsd xmm0, xmm1");
                    rdi15->f0 = rsi16->f0;
                    rdi3 = reinterpret_cast<struct s14*>(&rdi15->f4);
                    rsi4 = &rsi16->f4;
                    rdx14 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rdx14) + 1);
                } while (rdx14 != r15_5);
            }
            r14_17 = reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(r15_5) * 0x3e80);
            rdi3->f0 = *rsi4;
            rdi1 = reinterpret_cast<struct s13*>(&rdi3->f4);
            rsi2 = reinterpret_cast<struct s3*>(rsi4 + 1);
            __asm__("ucomisd xmm0, xmm2");
            if (r14_17 + rbx18 < r14_17) 
                break;
            __asm__("sqrtsd xmm0, xmm0");
        }
        fun_335();
    }
    addr_42c_6:
    if (v19 >= 43 && **v20 == fputc) {
        rax21 = g460;
        r14_22 = *rax21;
        *reinterpret_cast<int32_t*>(&r12_23) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_23) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx24 = r14_22;
        fun_482(0x46a, 22, 1, rcx24);
        rsi25 = reinterpret_cast<int32_t*>(0x489);
        *reinterpret_cast<int32_t*>(&r13_26) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_26) + 4) = reinterpret_cast<int32_t>(fputc);
        rdi27 = r14_22;
        fun_49d();
        do {
            rbp28 = r13_26 * 0x7d0;
            *reinterpret_cast<int32_t*>(&r15_29) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_29) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("ror eax, 0x2");
                if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r15_29 + rbp28) * 0xcccccccd) <= 0xccccccc) {
                    *reinterpret_cast<int32_t*>(&rdi27) = 10;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi27) + 4) = reinterpret_cast<int32_t>(fputc);
                    rsi25 = r14_22;
                    fun_4cb();
                }
                *rdi27 = *rsi25;
                rdi27 = r14_22;
                rsi25 = reinterpret_cast<int32_t*>(0x4e5);
                fun_4ec();
                ++r15_29;
            } while (r15_29 != r12_23);
            ++r13_26;
            ++r12_23;
        } while (r13_26 != 0x7d0);
        fun_51b(r14_22, 0x50a, 0x511, rcx24);
        *reinterpret_cast<int32_t*>(&rsi4) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi4) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx14) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx14) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx10 = r14_22;
        fun_534(0x522, 22, 1, rcx10);
    }
    fun_448(rbx30, rsi4, rdx14, rcx10);
    goto v31;
}

void fun_482(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int32_t* rsi5;
    int64_t r13_6;
    int32_t* rdi7;
    int32_t* r14_8;
    int64_t rbp9;
    int64_t r15_10;
    int32_t* r14_11;
    int32_t* r14_12;
    int64_t r12_13;
    int32_t* r14_14;
    int32_t* r14_15;
    int32_t* rbx16;
    int64_t v17;

    rsi5 = reinterpret_cast<int32_t*>(0x489);
    *reinterpret_cast<int32_t*>(&r13_6) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_6) + 4) = reinterpret_cast<int32_t>(fputc);
    rdi7 = r14_8;
    fun_49d();
    do {
        rbp9 = r13_6 * 0x7d0;
        *reinterpret_cast<int32_t*>(&r15_10) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_10) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r15_10 + rbp9) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi7) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi7) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi5 = r14_11;
                fun_4cb();
            }
            *rdi7 = *rsi5;
            rdi7 = r14_12;
            rsi5 = reinterpret_cast<int32_t*>(0x4e5);
            fun_4ec();
            ++r15_10;
        } while (r15_10 != r12_13);
        ++r13_6;
        ++r12_13;
    } while (r13_6 != 0x7d0);
    fun_51b(r14_14, 0x50a, 0x511, rcx);
    fun_534(0x522, 22, 1, r14_15);
    fun_448(rbx16, 22, 1, r14_15);
    goto v17;
}

void fun_534(int64_t rdi, int32_t* rsi, int32_t* rdx, int32_t* rcx) {
    int32_t* rbx5;
    int64_t v6;

    fun_448(rbx5, rsi, rdx, rcx);
    goto v6;
}

struct s16 {
    int32_t f0;
    int32_t f4;
};

int32_t g7fffffff8;

int32_t g7fffffffc;

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

void fun_156(struct s16* rdi, int64_t rsi) {
    int32_t* rbx3;
    int32_t* rax4;
    int64_t r15_5;
    uint64_t rbp6;
    int32_t* rsi7;
    uint64_t r14_8;
    int32_t* rdi9;
    int64_t rax10;
    struct s17* rdi11;
    struct s1* rax12;
    struct s1* r15_13;
    int64_t r12_14;
    int64_t rax15;
    int64_t rcx16;
    int32_t* rsi17;
    int32_t* rdi18;
    struct s18* rdi19;
    struct s3* rsi20;
    int64_t rax21;
    void* rcx22;
    int32_t* rdx23;
    struct s18* rdi24;
    struct s3* rsi25;
    int32_t* rcx26;
    struct s1* rdi27;
    int32_t* r15_28;
    int32_t* rax29;
    struct s3* rsi30;
    struct s19* rdi31;
    struct s5* rdi32;
    struct s3* rsi33;
    struct s5* rdi34;
    struct s3* rsi35;
    int32_t* r14_36;
    struct s5* rdi37;
    struct s3* rsi38;
    int32_t v39;
    signed char** v40;
    int32_t** rax41;
    int32_t* r14_42;
    int64_t r12_43;
    int32_t* rcx44;
    int32_t* rsi45;
    int64_t r13_46;
    int32_t* rdi47;
    int64_t rbp48;
    int64_t r15_49;
    int64_t v50;

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
            rdi11 = reinterpret_cast<struct s17*>(reinterpret_cast<uint64_t>(rdi9) + reinterpret_cast<int64_t>(rbx3));
            fun_216();
            rdi11->f0 = fputc;
            rdi11->f4 = g4;
            rsi7 = reinterpret_cast<int32_t*>(0x7fffffff8);
        }
        (rbx3 + r14_8 * 0xfa0)[r14_8 * 2] = reinterpret_cast<int32_t>(0x3ff0000000000000);
        ++r15_5;
    } while (rbp6 != 0x7d0);
    rax12 = fun_244(0x3d0900, 8);
    r15_13 = rax12;
    *reinterpret_cast<int32_t*>(&r12_14) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_14) + 4) = reinterpret_cast<int32_t>(fputc);
    fun_259(rax12);
    *reinterpret_cast<int32_t*>(&rax15) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax15) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        *reinterpret_cast<int32_t*>(&rcx16) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx16) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rsi17 = rbx3 + rcx16 * 0xfa0 + rax15 * 2;
            *reinterpret_cast<int32_t*>(&rdi18) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi18) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                *rdi18 = *rsi17;
                rdi19 = reinterpret_cast<struct s18*>(rdi18 + 1);
                rsi20 = reinterpret_cast<struct s3*>(rsi17 + 1);
                __asm__("mulsd xmm0, [r8+rax*8]");
                __asm__("addsd xmm0, [r9+rdi*8]");
                rdi19->f0 = rsi20->f0;
                rsi17 = &rsi20->f4;
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
            rcx22 = reinterpret_cast<void*>(r12_14 * 0x3e80);
            rdx23 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(r15_13) + reinterpret_cast<int64_t>(rcx22));
            *rdi18 = *rsi17;
            rdi24 = reinterpret_cast<struct s18*>(rdi18 + 1);
            rsi25 = reinterpret_cast<struct s3*>(rsi17 + 1);
            rcx26 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rcx22) + reinterpret_cast<int64_t>(rbx3));
            rdi24->f0 = rsi25->f0;
            rdi18 = &rdi24->f4;
            rsi17 = &rsi25->f4;
            ++rax21;
        } while (rax21 != 0x7d0);
        ++r12_14;
    } while (r12_14 != 0x7d0);
    rdi27 = r15_13;
    fun_327();
    *reinterpret_cast<int32_t*>(&r15_28) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_28) + 4) = reinterpret_cast<int32_t>(fputc);
    __asm__("xorpd xmm2, xmm2");
    do {
        if (r15_28 != fputc) {
            *reinterpret_cast<int32_t*>(&rax29) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax29) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                if (rax29 != fputc) {
                    rdi27->f0 = *rsi17;
                    rdi27 = reinterpret_cast<struct s1*>(&rdi27->f4);
                    *reinterpret_cast<int32_t*>(&rsi17) = reinterpret_cast<int32_t>(fputc);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi17) + 4) = reinterpret_cast<int32_t>(fputc);
                    do {
                        rdi27->f0 = *rsi17;
                        rsi30 = reinterpret_cast<struct s3*>(rsi17 + 1);
                        rdi31 = reinterpret_cast<struct s19*>(rbx3 + reinterpret_cast<int64_t>(rax29) * 0xfa0);
                        __asm__("mulsd xmm1, [rdi+rsi*8]");
                        __asm__("subsd xmm0, xmm1");
                        rdi31->f0 = rsi30->f0;
                        rdi27 = reinterpret_cast<struct s1*>(&rdi31->f4);
                        rsi17 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi30->f4) + 1);
                    } while (rsi17 != rax29);
                }
                rcx26 = rbx3 + reinterpret_cast<int64_t>(r15_28) * 0xfa0;
                rdi27->f0 = *rsi17;
                rdi32 = reinterpret_cast<struct s5*>(&rdi27->f4);
                rsi33 = reinterpret_cast<struct s3*>(rsi17 + 1);
                __asm__("divsd xmm0, [rdx+rax*8]");
                rdi32->f0 = rsi33->f0;
                rdi27 = reinterpret_cast<struct s1*>(&rdi32->f4);
                rsi17 = &rsi33->f4;
                rax29 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rax29) + 1);
            } while (rax29 != r15_28);
            rdi27->f0 = *rsi17;
            rdi27 = reinterpret_cast<struct s1*>(&rdi27->f4);
            ++rsi17;
            *reinterpret_cast<int32_t*>(&rdx23) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx23) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                rdi27->f0 = *rsi17;
                rdi34 = reinterpret_cast<struct s5*>(&rdi27->f4);
                rsi35 = reinterpret_cast<struct s3*>(rsi17 + 1);
                __asm__("mulsd xmm1, xmm1");
                __asm__("subsd xmm0, xmm1");
                rdi34->f0 = rsi35->f0;
                rdi27 = reinterpret_cast<struct s1*>(&rdi34->f4);
                rsi17 = &rsi35->f4;
                rdx23 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rdx23) + 1);
            } while (rdx23 != r15_28);
        }
        r14_36 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(r15_28) * 0x3e80);
        rdi27->f0 = *rsi17;
        rdi37 = reinterpret_cast<struct s5*>(&rdi27->f4);
        rsi38 = reinterpret_cast<struct s3*>(rsi17 + 1);
        __asm__("ucomisd xmm0, xmm2");
        if (reinterpret_cast<uint64_t>(r14_36) + reinterpret_cast<int64_t>(rbx3) < reinterpret_cast<uint64_t>(r14_36)) {
            fun_335();
            __asm__("xorpd xmm2, xmm2");
        } else {
            __asm__("sqrtsd xmm0, xmm0");
        }
        rdi37->f0 = rsi38->f0;
        rdi27 = reinterpret_cast<struct s1*>(&rdi37->f4);
        rsi17 = &rsi38->f4;
        r15_28 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(r15_28) + 1);
    } while (r15_28 != 0x7d0);
    if (v39 >= 43 && **v40 == fputc) {
        rax41 = g460;
        r14_42 = *rax41;
        *reinterpret_cast<int32_t*>(&r12_43) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_43) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx44 = r14_42;
        fun_482(0x46a, 22, 1, rcx44);
        rsi45 = reinterpret_cast<int32_t*>(0x489);
        *reinterpret_cast<int32_t*>(&r13_46) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_46) + 4) = reinterpret_cast<int32_t>(fputc);
        rdi47 = r14_42;
        fun_49d();
        do {
            rbp48 = r13_46 * 0x7d0;
            *reinterpret_cast<int32_t*>(&r15_49) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_49) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("ror eax, 0x2");
                if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r15_49 + rbp48) * 0xcccccccd) <= 0xccccccc) {
                    *reinterpret_cast<int32_t*>(&rdi47) = 10;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi47) + 4) = reinterpret_cast<int32_t>(fputc);
                    rsi45 = r14_42;
                    fun_4cb();
                }
                *rdi47 = *rsi45;
                rdi47 = r14_42;
                rsi45 = reinterpret_cast<int32_t*>(0x4e5);
                fun_4ec();
                ++r15_49;
            } while (r15_49 != r12_43);
            ++r13_46;
            ++r12_43;
        } while (r13_46 != 0x7d0);
        fun_51b(r14_42, 0x50a, 0x511, rcx44);
        *reinterpret_cast<int32_t*>(&rsi17) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi17) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx23) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx23) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx26 = r14_42;
        fun_534(0x522, 22, 1, rcx26);
    }
    fun_448(rbx3, rsi17, rdx23, rcx26);
    goto v50;
}

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

void fun_259(struct s1* rdi) {
    int64_t rax2;
    int64_t rcx3;
    int32_t* rsi4;
    int32_t* rbx5;
    int32_t* rdi6;
    struct s20* rdi7;
    struct s3* rsi8;
    int64_t rax9;
    void* rcx10;
    int64_t r12_11;
    int32_t* rdx12;
    int32_t* r15_13;
    struct s20* rdi14;
    struct s3* rsi15;
    int32_t* rcx16;
    int32_t* rbx17;
    struct s21* rdi18;
    struct s21* r15_19;
    int32_t* r15_20;
    int32_t* rax21;
    struct s3* rsi22;
    struct s22* rdi23;
    int32_t* rbx24;
    int32_t* rbx25;
    struct s23* rdi26;
    struct s3* rsi27;
    struct s23* rdi28;
    struct s3* rsi29;
    uint64_t r14_30;
    struct s23* rdi31;
    struct s3* rsi32;
    int64_t rbx33;
    int32_t v34;
    signed char** v35;
    int32_t** rax36;
    int32_t* r14_37;
    int64_t r12_38;
    int32_t* rcx39;
    int32_t* rsi40;
    int64_t r13_41;
    int32_t* rdi42;
    int64_t rbp43;
    int64_t r15_44;
    int32_t* rbx45;
    int64_t v46;

    *reinterpret_cast<int32_t*>(&rax2) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax2) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        *reinterpret_cast<int32_t*>(&rcx3) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx3) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rsi4 = rbx5 + rcx3 * 0xfa0 + rax2 * 2;
            *reinterpret_cast<int32_t*>(&rdi6) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi6) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                *rdi6 = *rsi4;
                rdi7 = reinterpret_cast<struct s20*>(rdi6 + 1);
                rsi8 = reinterpret_cast<struct s3*>(rsi4 + 1);
                __asm__("mulsd xmm0, [r8+rax*8]");
                __asm__("addsd xmm0, [r9+rdi*8]");
                rdi7->f0 = rsi8->f0;
                rsi4 = &rsi8->f4;
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
            rcx10 = reinterpret_cast<void*>(r12_11 * 0x3e80);
            rdx12 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(r15_13) + reinterpret_cast<int64_t>(rcx10));
            *rdi6 = *rsi4;
            rdi14 = reinterpret_cast<struct s20*>(rdi6 + 1);
            rsi15 = reinterpret_cast<struct s3*>(rsi4 + 1);
            rcx16 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rcx10) + reinterpret_cast<int64_t>(rbx17));
            rdi14->f0 = rsi15->f0;
            rdi6 = &rdi14->f4;
            rsi4 = &rsi15->f4;
            ++rax9;
        } while (rax9 != 0x7d0);
        ++r12_11;
    } while (r12_11 != 0x7d0);
    rdi18 = r15_19;
    fun_327();
    *reinterpret_cast<int32_t*>(&r15_20) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_20) + 4) = reinterpret_cast<int32_t>(fputc);
    __asm__("xorpd xmm2, xmm2");
    do {
        if (r15_20 != fputc) {
            *reinterpret_cast<int32_t*>(&rax21) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax21) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                if (rax21 != fputc) {
                    rdi18->f0 = *rsi4;
                    rdi18 = reinterpret_cast<struct s21*>(&rdi18->f4);
                    *reinterpret_cast<int32_t*>(&rsi4) = reinterpret_cast<int32_t>(fputc);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi4) + 4) = reinterpret_cast<int32_t>(fputc);
                    do {
                        rdi18->f0 = *rsi4;
                        rsi22 = reinterpret_cast<struct s3*>(rsi4 + 1);
                        rdi23 = reinterpret_cast<struct s22*>(rbx24 + reinterpret_cast<int64_t>(rax21) * 0xfa0);
                        __asm__("mulsd xmm1, [rdi+rsi*8]");
                        __asm__("subsd xmm0, xmm1");
                        rdi23->f0 = rsi22->f0;
                        rdi18 = reinterpret_cast<struct s21*>(&rdi23->f4);
                        rsi4 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi22->f4) + 1);
                    } while (rsi4 != rax21);
                }
                rcx16 = rbx25 + reinterpret_cast<int64_t>(r15_20) * 0xfa0;
                rdi18->f0 = *rsi4;
                rdi26 = reinterpret_cast<struct s23*>(&rdi18->f4);
                rsi27 = reinterpret_cast<struct s3*>(rsi4 + 1);
                __asm__("divsd xmm0, [rdx+rax*8]");
                rdi26->f0 = rsi27->f0;
                rdi18 = reinterpret_cast<struct s21*>(&rdi26->f4);
                rsi4 = &rsi27->f4;
                rax21 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rax21) + 1);
            } while (rax21 != r15_20);
            rdi18->f0 = *rsi4;
            rdi18 = reinterpret_cast<struct s21*>(&rdi18->f4);
            ++rsi4;
            *reinterpret_cast<int32_t*>(&rdx12) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx12) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                rdi18->f0 = *rsi4;
                rdi28 = reinterpret_cast<struct s23*>(&rdi18->f4);
                rsi29 = reinterpret_cast<struct s3*>(rsi4 + 1);
                __asm__("mulsd xmm1, xmm1");
                __asm__("subsd xmm0, xmm1");
                rdi28->f0 = rsi29->f0;
                rdi18 = reinterpret_cast<struct s21*>(&rdi28->f4);
                rsi4 = &rsi29->f4;
                rdx12 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rdx12) + 1);
            } while (rdx12 != r15_20);
        }
        r14_30 = reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(r15_20) * 0x3e80);
        rdi18->f0 = *rsi4;
        rdi31 = reinterpret_cast<struct s23*>(&rdi18->f4);
        rsi32 = reinterpret_cast<struct s3*>(rsi4 + 1);
        __asm__("ucomisd xmm0, xmm2");
        if (r14_30 + rbx33 < r14_30) {
            fun_335();
            __asm__("xorpd xmm2, xmm2");
        } else {
            __asm__("sqrtsd xmm0, xmm0");
        }
        rdi31->f0 = rsi32->f0;
        rdi18 = reinterpret_cast<struct s21*>(&rdi31->f4);
        rsi4 = &rsi32->f4;
        r15_20 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(r15_20) + 1);
    } while (r15_20 != 0x7d0);
    if (v34 >= 43 && **v35 == fputc) {
        rax36 = g460;
        r14_37 = *rax36;
        *reinterpret_cast<int32_t*>(&r12_38) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_38) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx39 = r14_37;
        fun_482(0x46a, 22, 1, rcx39);
        rsi40 = reinterpret_cast<int32_t*>(0x489);
        *reinterpret_cast<int32_t*>(&r13_41) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_41) + 4) = reinterpret_cast<int32_t>(fputc);
        rdi42 = r14_37;
        fun_49d();
        do {
            rbp43 = r13_41 * 0x7d0;
            *reinterpret_cast<int32_t*>(&r15_44) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_44) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("ror eax, 0x2");
                if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r15_44 + rbp43) * 0xcccccccd) <= 0xccccccc) {
                    *reinterpret_cast<int32_t*>(&rdi42) = 10;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi42) + 4) = reinterpret_cast<int32_t>(fputc);
                    rsi40 = r14_37;
                    fun_4cb();
                }
                *rdi42 = *rsi40;
                rdi42 = r14_37;
                rsi40 = reinterpret_cast<int32_t*>(0x4e5);
                fun_4ec();
                ++r15_44;
            } while (r15_44 != r12_38);
            ++r13_41;
            ++r12_38;
        } while (r13_41 != 0x7d0);
        fun_51b(r14_37, 0x50a, 0x511, rcx39);
        *reinterpret_cast<int32_t*>(&rsi4) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi4) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx12) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx12) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx16 = r14_37;
        fun_534(0x522, 22, 1, rcx16);
    }
    fun_448(rbx45, rsi4, rdx12, rcx16);
    goto v46;
}

void fun_49d() {
    int64_t rbp1;
    int64_t r13_2;
    int64_t r15_3;
    int32_t* rdi4;
    int32_t* rsi5;
    int32_t* r14_6;
    int32_t* r14_7;
    int64_t r12_8;
    int32_t* r14_9;
    int32_t* rcx10;
    int32_t* r14_11;
    int32_t* rbx12;
    int64_t v13;

    do {
        rbp1 = r13_2 * 0x7d0;
        *reinterpret_cast<int32_t*>(&r15_3) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_3) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r15_3 + rbp1) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi4) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi4) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi5 = r14_6;
                fun_4cb();
            }
            *rdi4 = *rsi5;
            rdi4 = r14_7;
            rsi5 = reinterpret_cast<int32_t*>(0x4e5);
            fun_4ec();
            ++r15_3;
        } while (r15_3 != r12_8);
        ++r13_2;
        ++r12_8;
    } while (r13_2 != 0x7d0);
    fun_51b(r14_9, 0x50a, 0x511, rcx10);
    fun_534(0x522, 22, 1, r14_11);
    fun_448(rbx12, 22, 1, r14_11);
    goto v13;
}

void fputc() {
}

struct s24 {
    signed char[1] pad1;
    signed char f1;
};

struct s25 {
    signed char[1] pad1;
    signed char f1;
};

void fun_a8(int32_t* rdi, int32_t* rsi) {
    struct s24* rax3;
    struct s25* rax4;
    signed char cl5;
    int64_t rax6;

    rax3->f1 = reinterpret_cast<signed char>(rax4->f1 + cl5);
    __asm__("fcomip st0, st2");
    __asm__("mulps xmm1, [rdi+rsi*8]");
    __asm__("subsd xmm0, xmm1");
    *rdi = *rsi;
    if (reinterpret_cast<int64_t>(rsi + 1) + 1 != rax6) {
    }
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

void fun_d0(struct s26* rdi, struct s27* rsi) {
    struct s28* rdi3;
    struct s29* rsi4;
    int64_t rdx5;
    struct s30* rdi6;
    struct s31* rsi7;
    int64_t r15_8;
    uint64_t r12_9;
    int64_t r15_10;
    int64_t rbx11;

    rdi->f0 = rsi->f0;
    rdi3 = reinterpret_cast<struct s28*>(&rdi->f4);
    rsi4 = reinterpret_cast<struct s29*>(&rsi->f4);
    *reinterpret_cast<int32_t*>(&rdx5) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx5) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        rdi3->f0 = rsi4->f0;
        rdi6 = reinterpret_cast<struct s30*>(&rdi3->f4);
        rsi7 = reinterpret_cast<struct s31*>(&rsi4->f4);
        __asm__("mulsd xmm1, xmm1");
        __asm__("subsd xmm0, xmm1");
        rdi6->f0 = rsi7->f0;
        rdi3 = reinterpret_cast<struct s28*>(&rdi6->f4);
        rsi4 = reinterpret_cast<struct s29*>(&rsi7->f4);
        ++rdx5;
    } while (rdx5 != r15_8);
    r12_9 = reinterpret_cast<uint64_t>(r15_10 * 0x3e80);
    rdi3->f0 = rsi4->f0;
    __asm__("ucomisd xmm0, xmm2");
    if (r12_9 + rbx11 >= r12_9) {
        __asm__("sqrtsd xmm0, xmm0");
    }
}

void fun_11c() {
    int64_t v1;

    goto v1;
}

void submain(int32_t edi, int64_t rsi) {
    fun_156(0x3d0900, 8);
}

