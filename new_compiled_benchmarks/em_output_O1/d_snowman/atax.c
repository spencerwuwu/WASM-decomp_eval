
void free();

void fun_129();

void fun_103();

int64_t fun_143(int64_t rdi, int64_t rsi, int64_t rdx);

struct s0 {
    int32_t f0;
    int32_t f4;
};

void fun_1a6(int64_t rdi);

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

void fun_db(int32_t* rdi) {
    int32_t ebp2;
    int32_t ebp3;
    int64_t r12_4;
    int32_t ebp5;
    int64_t r13_6;
    int32_t* rsi7;
    int32_t* rbx8;
    int32_t* rbx9;
    int64_t rbx10;
    struct s0* rdi11;
    int32_t* rsi12;
    int64_t* rbx13;
    int64_t* r9_14;
    int64_t r8_15;
    int64_t rcx16;
    int64_t rdx17;
    struct s1* rsi18;
    struct s2* rdi19;
    struct s3* rsi20;
    int64_t rdx21;
    struct s4* rsi22;
    struct s2* rdi23;
    struct s5* rsi24;
    int64_t v25;

    if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(ebp2 < reinterpret_cast<int32_t>(free) == free)) | reinterpret_cast<uint1_t>(ebp3 == free))) {
        *reinterpret_cast<int32_t*>(&r12_4) = ebp5;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_4) + 4) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(&r13_6) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_6) + 4) = reinterpret_cast<int32_t>(free);
        do {
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&r13_6) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi) + 4) = reinterpret_cast<int32_t>(free);
                rsi7 = rbx8;
                fun_129();
            }
            *rdi = *rsi7;
            rdi = rbx9;
            rsi7 = reinterpret_cast<int32_t*>(0xec);
            fun_103();
            ++r13_6;
        } while (r13_6 != r12_4);
    }
    fun_143(rbx10, 0x132, 0x139);
    rdi11 = reinterpret_cast<struct s0*>(0x14a);
    *reinterpret_cast<int32_t*>(&rsi12) = 22;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi12) + 4) = reinterpret_cast<int32_t>(free);
    rbx13 = r9_14;
    if (!free) {
        *reinterpret_cast<int32_t*>(&rsi12) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi12) + 4) = reinterpret_cast<int32_t>(free);
        fun_1a6(r8_15);
        *reinterpret_cast<int32_t*>(&rdi11) = 0x14a;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi11) + 4) = reinterpret_cast<int32_t>(free);
    }
    if (!free) {
        *reinterpret_cast<int32_t*>(&rcx16) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx16) + 4) = reinterpret_cast<int32_t>(free);
        do {
            rbx13[rcx16] = reinterpret_cast<int64_t>(free);
            if (!free) {
                rdi11->f0 = *rsi12;
                rdi11 = reinterpret_cast<struct s0*>(&rdi11->f4);
                *reinterpret_cast<int32_t*>(&rdx17) = reinterpret_cast<int32_t>(free);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx17) + 4) = reinterpret_cast<int32_t>(free);
                do {
                    rsi18 = reinterpret_cast<struct s1*>(rcx16 * 0x41a0 + 1);
                    rdi11->f0 = rsi18->f0;
                    rdi19 = reinterpret_cast<struct s2*>(&rdi11->f4);
                    rsi20 = reinterpret_cast<struct s3*>(&rsi18->f4);
                    __asm__("mulsd xmm1, [r15+rdx*8]");
                    __asm__("addsd xmm0, xmm1");
                    rdi19->f0 = rsi20->f0;
                    rdi11 = reinterpret_cast<struct s0*>(&rdi19->f4);
                    rsi12 = &rsi20->f4;
                    ++rdx17;
                } while (rdx17 != 22);
            }
            if (!free) {
                *reinterpret_cast<int32_t*>(&rdx21) = reinterpret_cast<int32_t>(free);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx21) + 4) = reinterpret_cast<int32_t>(free);
                do {
                    rsi22 = reinterpret_cast<struct s4*>(rcx16 * 0x41a0 + 1);
                    rdi11->f0 = rsi22->f0;
                    rdi23 = reinterpret_cast<struct s2*>(&rdi11->f4);
                    rsi24 = reinterpret_cast<struct s5*>(&rsi22->f4);
                    __asm__("mulsd xmm0, [rbx+rcx*8]");
                    __asm__("addsd xmm0, [r14+rdx*8]");
                    rdi23->f0 = rsi24->f0;
                    rdi11 = reinterpret_cast<struct s0*>(&rdi23->f4);
                    rsi12 = &rsi24->f4;
                    ++rdx21;
                } while (rdx21 != 22);
            }
            ++rcx16;
        } while (rcx16 != 0x14a);
    }
    goto v25;
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

void fun_103() {
    int64_t r13_1;
    int64_t r12_2;
    int32_t* rdi3;
    int32_t* rsi4;
    int32_t* rbx5;
    int32_t* rbx6;
    int32_t* r15_7;
    int64_t rbx8;
    struct s6* rdi9;
    int32_t* rsi10;
    int64_t* rbx11;
    int64_t* r9_12;
    int64_t r8_13;
    int64_t rcx14;
    int64_t rdx15;
    struct s7* rsi16;
    struct s8* rdi17;
    struct s9* rsi18;
    int64_t rdx19;
    struct s10* rsi20;
    struct s8* rdi21;
    struct s11* rsi22;
    int64_t v23;

    while (++r13_1, r13_1 != r12_2) {
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&r13_1) * 0xcccccccd) <= 0xccccccc) {
            *reinterpret_cast<int32_t*>(&rdi3) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi3) + 4) = reinterpret_cast<int32_t>(free);
            rsi4 = rbx5;
            fun_129();
        }
        *rdi3 = *rsi4;
        rdi3 = rbx6;
        rsi4 = r15_7;
        fun_103();
    }
    fun_143(rbx8, 0x132, 0x139);
    rdi9 = reinterpret_cast<struct s6*>(0x14a);
    *reinterpret_cast<int32_t*>(&rsi10) = 22;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi10) + 4) = reinterpret_cast<int32_t>(free);
    rbx11 = r9_12;
    if (!free) {
        *reinterpret_cast<int32_t*>(&rsi10) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi10) + 4) = reinterpret_cast<int32_t>(free);
        fun_1a6(r8_13);
        *reinterpret_cast<int32_t*>(&rdi9) = 0x14a;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi9) + 4) = reinterpret_cast<int32_t>(free);
    }
    if (!free) {
        *reinterpret_cast<int32_t*>(&rcx14) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx14) + 4) = reinterpret_cast<int32_t>(free);
        do {
            rbx11[rcx14] = reinterpret_cast<int64_t>(free);
            if (!free) {
                rdi9->f0 = *rsi10;
                rdi9 = reinterpret_cast<struct s6*>(&rdi9->f4);
                *reinterpret_cast<int32_t*>(&rdx15) = reinterpret_cast<int32_t>(free);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx15) + 4) = reinterpret_cast<int32_t>(free);
                do {
                    rsi16 = reinterpret_cast<struct s7*>(rcx14 * 0x41a0 + 1);
                    rdi9->f0 = rsi16->f0;
                    rdi17 = reinterpret_cast<struct s8*>(&rdi9->f4);
                    rsi18 = reinterpret_cast<struct s9*>(&rsi16->f4);
                    __asm__("mulsd xmm1, [r15+rdx*8]");
                    __asm__("addsd xmm0, xmm1");
                    rdi17->f0 = rsi18->f0;
                    rdi9 = reinterpret_cast<struct s6*>(&rdi17->f4);
                    rsi10 = &rsi18->f4;
                    ++rdx15;
                } while (rdx15 != 22);
            }
            if (!free) {
                *reinterpret_cast<int32_t*>(&rdx19) = reinterpret_cast<int32_t>(free);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx19) + 4) = reinterpret_cast<int32_t>(free);
                do {
                    rsi20 = reinterpret_cast<struct s10*>(rcx14 * 0x41a0 + 1);
                    rdi9->f0 = rsi20->f0;
                    rdi21 = reinterpret_cast<struct s8*>(&rdi9->f4);
                    rsi22 = reinterpret_cast<struct s11*>(&rsi20->f4);
                    __asm__("mulsd xmm0, [rbx+rcx*8]");
                    __asm__("addsd xmm0, [r14+rdx*8]");
                    rdi21->f0 = rsi22->f0;
                    rdi9 = reinterpret_cast<struct s6*>(&rdi21->f4);
                    rsi10 = &rsi22->f4;
                    ++rdx19;
                } while (rdx19 != 22);
            }
            ++rcx14;
        } while (rcx14 != 0x14a);
    }
    goto v23;
}

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

void fun_129() {
    int32_t* rdi1;
    int32_t* rsi2;
    int32_t* rbx3;
    int32_t* r15_4;
    int64_t r13_5;
    int64_t r12_6;
    int32_t* rbx7;
    int64_t rbx8;
    struct s12* rdi9;
    int32_t* rsi10;
    int64_t* rbx11;
    int64_t* r9_12;
    int64_t r8_13;
    int64_t rcx14;
    int64_t rdx15;
    struct s13* rsi16;
    struct s14* rdi17;
    struct s15* rsi18;
    int64_t rdx19;
    struct s16* rsi20;
    struct s14* rdi21;
    struct s17* rsi22;
    int64_t v23;

    while (1) {
        do {
            *rdi1 = *rsi2;
            rdi1 = rbx3;
            rsi2 = r15_4;
            fun_103();
            ++r13_5;
            if (r13_5 == r12_6) 
                goto addr_12b_7;
            __asm__("ror eax, 0x2");
        } while (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&r13_5) * 0xcccccccd) > 0xccccccc);
        *reinterpret_cast<int32_t*>(&rdi1) = 10;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi1) + 4) = reinterpret_cast<int32_t>(free);
        rsi2 = rbx7;
        fun_129();
    }
    addr_12b_7:
    fun_143(rbx8, 0x132, 0x139);
    rdi9 = reinterpret_cast<struct s12*>(0x14a);
    *reinterpret_cast<int32_t*>(&rsi10) = 22;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi10) + 4) = reinterpret_cast<int32_t>(free);
    rbx11 = r9_12;
    if (!free) {
        *reinterpret_cast<int32_t*>(&rsi10) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi10) + 4) = reinterpret_cast<int32_t>(free);
        fun_1a6(r8_13);
        *reinterpret_cast<int32_t*>(&rdi9) = 0x14a;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi9) + 4) = reinterpret_cast<int32_t>(free);
    }
    if (!free) {
        *reinterpret_cast<int32_t*>(&rcx14) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx14) + 4) = reinterpret_cast<int32_t>(free);
        do {
            rbx11[rcx14] = reinterpret_cast<int64_t>(free);
            if (!free) {
                rdi9->f0 = *rsi10;
                rdi9 = reinterpret_cast<struct s12*>(&rdi9->f4);
                *reinterpret_cast<int32_t*>(&rdx15) = reinterpret_cast<int32_t>(free);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx15) + 4) = reinterpret_cast<int32_t>(free);
                do {
                    rsi16 = reinterpret_cast<struct s13*>(rcx14 * 0x41a0 + 1);
                    rdi9->f0 = rsi16->f0;
                    rdi17 = reinterpret_cast<struct s14*>(&rdi9->f4);
                    rsi18 = reinterpret_cast<struct s15*>(&rsi16->f4);
                    __asm__("mulsd xmm1, [r15+rdx*8]");
                    __asm__("addsd xmm0, xmm1");
                    rdi17->f0 = rsi18->f0;
                    rdi9 = reinterpret_cast<struct s12*>(&rdi17->f4);
                    rsi10 = &rsi18->f4;
                    ++rdx15;
                } while (rdx15 != 22);
            }
            if (!free) {
                *reinterpret_cast<int32_t*>(&rdx19) = reinterpret_cast<int32_t>(free);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx19) + 4) = reinterpret_cast<int32_t>(free);
                do {
                    rsi20 = reinterpret_cast<struct s16*>(rcx14 * 0x41a0 + 1);
                    rdi9->f0 = rsi20->f0;
                    rdi21 = reinterpret_cast<struct s14*>(&rdi9->f4);
                    rsi22 = reinterpret_cast<struct s17*>(&rsi20->f4);
                    __asm__("mulsd xmm0, [rbx+rcx*8]");
                    __asm__("addsd xmm0, [r14+rdx*8]");
                    rdi21->f0 = rsi22->f0;
                    rdi9 = reinterpret_cast<struct s12*>(&rdi21->f4);
                    rsi10 = &rsi22->f4;
                    ++rdx19;
                } while (rdx19 != 22);
            }
            ++rcx14;
        } while (rcx14 != 0x14a);
    }
    goto v23;
}

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

void fun_1a6(int64_t rdi) {
    int64_t v2;
    struct s18* rdi3;
    int64_t rax4;
    int64_t rcx5;
    int64_t* rbx6;
    int32_t ebp7;
    int32_t ebp8;
    int32_t* rsi9;
    int64_t rdx10;
    struct s19* rsi11;
    int32_t* r12_12;
    struct s20* rdi13;
    struct s21* rsi14;
    int64_t r13_15;
    int32_t ebp16;
    int32_t ebp17;
    int64_t rdx18;
    struct s22* rsi19;
    int32_t* r12_20;
    struct s20* rdi21;
    struct s23* rsi22;
    int64_t r13_23;
    int64_t v24;

    v2 = reinterpret_cast<int64_t>(__return_address());
    *reinterpret_cast<int32_t*>(&rdi3) = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&v2) + 4);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi3) + 4) = reinterpret_cast<int32_t>(free);
    if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(&rdi3) < reinterpret_cast<int32_t>(free) == free)) | reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&rdi3) == free))) {
        *reinterpret_cast<int32_t*>(&rax4) = *reinterpret_cast<int32_t*>(&rdi3);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax4) + 4) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(&rcx5) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx5) + 4) = reinterpret_cast<int32_t>(free);
        do {
            rbx6[rcx5] = reinterpret_cast<int64_t>(free);
            if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(ebp7 < reinterpret_cast<int32_t>(free) == free)) | reinterpret_cast<uint1_t>(ebp8 == free))) {
                rdi3->f0 = *rsi9;
                rdi3 = reinterpret_cast<struct s18*>(&rdi3->f4);
                *reinterpret_cast<int32_t*>(&rdx10) = reinterpret_cast<int32_t>(free);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx10) + 4) = reinterpret_cast<int32_t>(free);
                do {
                    rsi11 = reinterpret_cast<struct s19*>(r12_12 + rcx5 * 0x1068);
                    rdi3->f0 = rsi11->f0;
                    rdi13 = reinterpret_cast<struct s20*>(&rdi3->f4);
                    rsi14 = reinterpret_cast<struct s21*>(&rsi11->f4);
                    __asm__("mulsd xmm1, [r15+rdx*8]");
                    __asm__("addsd xmm0, xmm1");
                    rdi13->f0 = rsi14->f0;
                    rdi3 = reinterpret_cast<struct s18*>(&rdi13->f4);
                    rsi9 = &rsi14->f4;
                    ++rdx10;
                } while (rdx10 != r13_15);
            }
            if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(ebp16 < reinterpret_cast<int32_t>(free) == free)) | reinterpret_cast<uint1_t>(ebp17 == free))) {
                *reinterpret_cast<int32_t*>(&rdx18) = reinterpret_cast<int32_t>(free);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx18) + 4) = reinterpret_cast<int32_t>(free);
                do {
                    rsi19 = reinterpret_cast<struct s22*>(r12_20 + rcx5 * 0x1068);
                    rdi3->f0 = rsi19->f0;
                    rdi21 = reinterpret_cast<struct s20*>(&rdi3->f4);
                    rsi22 = reinterpret_cast<struct s23*>(&rsi19->f4);
                    __asm__("mulsd xmm0, [rbx+rcx*8]");
                    __asm__("addsd xmm0, [r14+rdx*8]");
                    rdi21->f0 = rsi22->f0;
                    rdi3 = reinterpret_cast<struct s18*>(&rdi21->f4);
                    rsi9 = &rsi22->f4;
                    ++rdx18;
                } while (rdx18 != r13_23);
            }
            ++rcx5;
        } while (rcx5 != rax4);
    }
    goto v24;
}

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

void fun_3fe(int64_t rdi, struct s25* rsi, int64_t rdx);

void fun_406(int64_t rdi, struct s25* rsi, int64_t rdx);

void fun_40e(int64_t rdi, struct s25* rsi, int64_t rdx);

void fun_416(struct s25* rdi, struct s25* rsi, int64_t rdx);

void fun_41e(int64_t* rdi, struct s25* rsi, int64_t rdx);

void fun_365() {
    signed char** v1;
    int64_t* r13_2;
    int64_t r15_3;
    int64_t rcx4;
    struct s24* rdi5;
    struct s25* rsi6;
    struct s26* rdi7;
    struct s27* rsi8;
    int64_t rcx9;
    struct s26* rdi10;
    struct s27* rsi11;
    int32_t ebp12;
    struct s25* r12_13;
    int64_t rdx14;
    int64_t rbx15;
    int64_t rdx16;
    int64_t r14_17;
    int64_t rdx18;
    struct s25* r12_19;
    int64_t rdx20;
    int64_t* r13_21;
    int64_t rdx22;
    int64_t v23;

    v1 = reinterpret_cast<signed char**>(__return_address());
    do {
        r13_2[r15_3] = reinterpret_cast<int64_t>(free);
        __asm__("xorpd xmm0, xmm0");
        *reinterpret_cast<int32_t*>(&rcx4) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx4) + 4) = reinterpret_cast<int32_t>(free);
        do {
            rdi5->f0 = rsi6->f0;
            rdi7 = reinterpret_cast<struct s26*>(&rdi5->f4);
            rsi8 = reinterpret_cast<struct s27*>(&rsi6->f4);
            __asm__("mulsd xmm1, [r14+rcx*8]");
            __asm__("addsd xmm0, xmm1");
            rdi7->f0 = rsi8->f0;
            rdi5 = reinterpret_cast<struct s24*>(&rdi7->f4);
            rsi6 = reinterpret_cast<struct s25*>(&rsi8->f4);
            ++rcx4;
        } while (rcx4 != 0x834);
        *reinterpret_cast<int32_t*>(&rcx9) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx9) + 4) = reinterpret_cast<int32_t>(free);
        do {
            rdi5->f0 = rsi6->f0;
            rdi10 = reinterpret_cast<struct s26*>(&rdi5->f4);
            rsi11 = reinterpret_cast<struct s27*>(&rsi6->f4);
            __asm__("mulsd xmm0, [r13+r15*8+0x0]");
            __asm__("addsd xmm0, [r12+rcx*8]");
            rdi10->f0 = rsi11->f0;
            rdi5 = reinterpret_cast<struct s24*>(&rdi10->f4);
            rsi6 = reinterpret_cast<struct s25*>(&rsi11->f4);
            ++rcx9;
        } while (rcx9 != 0x834);
        ++r15_3;
    } while (r15_3 != 0x76c);
    if (ebp12 >= 43 && reinterpret_cast<int1_t>(**v1 == free)) {
        rsi6 = r12_13;
        fun_3fe(0x834, rsi6, rdx14);
    }
    fun_406(rbx15, rsi6, rdx16);
    fun_40e(r14_17, rsi6, rdx18);
    fun_416(r12_19, rsi6, rdx20);
    fun_41e(r13_21, rsi6, rdx22);
    goto v23;
}

void fun_3fe(int64_t rdi, struct s25* rsi, int64_t rdx) {
    int64_t rbx4;
    int64_t r14_5;
    struct s25* r12_6;
    int64_t* r13_7;
    int64_t v8;

    fun_406(rbx4, rsi, rdx);
    fun_40e(r14_5, rsi, rdx);
    fun_416(r12_6, rsi, rdx);
    fun_41e(r13_7, rsi, rdx);
    goto v8;
}

void fun_406(int64_t rdi, struct s25* rsi, int64_t rdx) {
    int64_t r14_4;
    struct s25* r12_5;
    int64_t* r13_6;
    int64_t v7;

    fun_40e(r14_4, rsi, rdx);
    fun_416(r12_5, rsi, rdx);
    fun_41e(r13_6, rsi, rdx);
    goto v7;
}

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

int64_t fun_143(int64_t rdi, int64_t rsi, int64_t rdx) {
    struct s28* rdi4;
    int32_t* rsi5;
    int64_t* rbx6;
    int64_t* r9_7;
    int64_t r8_8;
    int64_t rcx9;
    int64_t rdx10;
    struct s29* rsi11;
    struct s30* rdi12;
    struct s31* rsi13;
    int64_t rdx14;
    struct s32* rsi15;
    struct s30* rdi16;
    struct s33* rsi17;
    int64_t v18;

    rdi4 = reinterpret_cast<struct s28*>(0x14a);
    *reinterpret_cast<int32_t*>(&rsi5) = 22;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi5) + 4) = reinterpret_cast<int32_t>(free);
    rbx6 = r9_7;
    if (!free) {
        *reinterpret_cast<int32_t*>(&rsi5) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi5) + 4) = reinterpret_cast<int32_t>(free);
        fun_1a6(r8_8);
        *reinterpret_cast<int32_t*>(&rdi4) = 0x14a;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi4) + 4) = reinterpret_cast<int32_t>(free);
    }
    if (!free) {
        *reinterpret_cast<int32_t*>(&rcx9) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx9) + 4) = reinterpret_cast<int32_t>(free);
        do {
            rbx6[rcx9] = reinterpret_cast<int64_t>(free);
            if (!free) {
                rdi4->f0 = *rsi5;
                rdi4 = reinterpret_cast<struct s28*>(&rdi4->f4);
                *reinterpret_cast<int32_t*>(&rdx10) = reinterpret_cast<int32_t>(free);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx10) + 4) = reinterpret_cast<int32_t>(free);
                do {
                    rsi11 = reinterpret_cast<struct s29*>(rcx9 * 0x41a0 + 1);
                    rdi4->f0 = rsi11->f0;
                    rdi12 = reinterpret_cast<struct s30*>(&rdi4->f4);
                    rsi13 = reinterpret_cast<struct s31*>(&rsi11->f4);
                    __asm__("mulsd xmm1, [r15+rdx*8]");
                    __asm__("addsd xmm0, xmm1");
                    rdi12->f0 = rsi13->f0;
                    rdi4 = reinterpret_cast<struct s28*>(&rdi12->f4);
                    rsi5 = &rsi13->f4;
                    ++rdx10;
                } while (rdx10 != 22);
            }
            if (!free) {
                *reinterpret_cast<int32_t*>(&rdx14) = reinterpret_cast<int32_t>(free);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx14) + 4) = reinterpret_cast<int32_t>(free);
                do {
                    rsi15 = reinterpret_cast<struct s32*>(rcx9 * 0x41a0 + 1);
                    rdi4->f0 = rsi15->f0;
                    rdi16 = reinterpret_cast<struct s30*>(&rdi4->f4);
                    rsi17 = reinterpret_cast<struct s33*>(&rsi15->f4);
                    __asm__("mulsd xmm0, [rbx+rcx*8]");
                    __asm__("addsd xmm0, [r14+rdx*8]");
                    rdi16->f0 = rsi17->f0;
                    rdi4 = reinterpret_cast<struct s28*>(&rdi16->f4);
                    rsi5 = &rsi17->f4;
                    ++rdx14;
                } while (rdx14 != 22);
            }
            ++rcx9;
        } while (rcx9 != 0x14a);
    }
    goto v18;
}

int64_t fun_282(int64_t rdi, int64_t rsi);

struct s25* fun_294(int64_t rdi, int64_t rsi);

struct s34 {
    int32_t f0;
    int32_t f4;
};

struct s35 {
    int32_t f0;
    int32_t f4;
};

int64_t* fun_2a6(struct s34* rdi, struct s35* rsi);

int32_t g76c;

/* .LCPI3_0 */
int32_t LCPI3_0 = 0xff2327e;

int32_t g770;

int32_t gc = 0xc031c62a;

void fun_270(int64_t rdi, int64_t rsi) {
    signed char** v3;
    int64_t rbx4;
    int64_t rax5;
    int64_t rax6;
    int64_t r14_7;
    struct s25* rax8;
    struct s25* r12_9;
    int64_t* rax10;
    int64_t* r13_11;
    int64_t rax12;
    int32_t* rdi13;
    int32_t* rsi14;
    int64_t rcx15;
    int64_t rcx16;
    uint64_t rsi17;
    int32_t* rdi18;
    int64_t rsi19;
    int32_t* rsi20;
    int64_t r15_21;
    struct s25* rdi22;
    struct s25* rsi23;
    int64_t rcx24;
    struct s27* rdi25;
    struct s27* rsi26;
    int64_t rcx27;
    struct s27* rdi28;
    struct s27* rsi29;
    int32_t ebp30;
    int64_t v31;

    v3 = reinterpret_cast<signed char**>(__return_address());
    rbx4 = rax5;
    rax6 = fun_282(0x834, 8);
    r14_7 = rax6;
    rax8 = fun_294(0x834, 8);
    r12_9 = rax8;
    rax10 = fun_2a6(0x76c, 8);
    r13_11 = rax10;
    *reinterpret_cast<int32_t*>(&rax12) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax12) + 4) = reinterpret_cast<int32_t>(free);
    g76c = LCPI3_0;
    g770 = gc;
    rdi13 = reinterpret_cast<int32_t*>(0x774);
    rsi14 = reinterpret_cast<int32_t*>(16);
    *reinterpret_cast<int32_t*>(&rcx15) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx15) + 4) = reinterpret_cast<int32_t>(free);
    do {
        __asm__("xorps xmm2, xmm2");
        __asm__("cvtsi2sd xmm2, ecx");
        __asm__("divsd xmm2, xmm0");
        __asm__("addsd xmm2, xmm1");
        *rdi13 = *rsi14;
        ++rdi13;
        ++rsi14;
        ++rcx15;
    } while (rcx15 != 0x834);
    *rdi13 = *rsi14;
    do {
        *reinterpret_cast<int32_t*>(&rcx16) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx16) + 4) = reinterpret_cast<int32_t>(free);
        do {
            rsi17 = static_cast<int32_t>(rcx16 + rax12) * 0x7cd49a17;
            rdi18 = reinterpret_cast<int32_t*>(rsi17 >> 63);
            rsi19 = reinterpret_cast<int64_t>(rsi17) >> 42;
            *reinterpret_cast<int32_t*>(&rsi20) = (*reinterpret_cast<int32_t*>(&rsi19) + *reinterpret_cast<int32_t*>(&rdi18)) * 0x834;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi20) + 4) = reinterpret_cast<int32_t>(free);
            __asm__("xorps xmm1, xmm1");
            __asm__("cvtsi2sd xmm1, edx");
            __asm__("divsd xmm1, xmm0");
            *rdi18 = *rsi20;
            ++rcx16;
        } while (rcx16 != 0x834);
        ++rax12;
    } while (rax12 != 0x76c);
    *reinterpret_cast<int32_t*>(&r15_21) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_21) + 4) = reinterpret_cast<int32_t>(free);
    rdi22 = r12_9;
    *reinterpret_cast<int32_t*>(&rsi23) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi23) + 4) = reinterpret_cast<int32_t>(free);
    fun_365();
    do {
        r13_11[r15_21] = reinterpret_cast<int64_t>(free);
        __asm__("xorpd xmm0, xmm0");
        *reinterpret_cast<int32_t*>(&rcx24) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx24) + 4) = reinterpret_cast<int32_t>(free);
        do {
            rdi22->f0 = rsi23->f0;
            rdi25 = reinterpret_cast<struct s27*>(&rdi22->f4);
            rsi26 = reinterpret_cast<struct s27*>(&rsi23->f4);
            __asm__("mulsd xmm1, [r14+rcx*8]");
            __asm__("addsd xmm0, xmm1");
            rdi25->f0 = rsi26->f0;
            rdi22 = reinterpret_cast<struct s25*>(&rdi25->f4);
            rsi23 = reinterpret_cast<struct s25*>(&rsi26->f4);
            ++rcx24;
        } while (rcx24 != 0x834);
        *reinterpret_cast<int32_t*>(&rcx27) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx27) + 4) = reinterpret_cast<int32_t>(free);
        do {
            rdi22->f0 = rsi23->f0;
            rdi28 = reinterpret_cast<struct s27*>(&rdi22->f4);
            rsi29 = reinterpret_cast<struct s27*>(&rsi23->f4);
            __asm__("mulsd xmm0, [r13+r15*8+0x0]");
            __asm__("addsd xmm0, [r12+rcx*8]");
            rdi28->f0 = rsi29->f0;
            rdi22 = reinterpret_cast<struct s25*>(&rdi28->f4);
            rsi23 = reinterpret_cast<struct s25*>(&rsi29->f4);
            ++rcx27;
        } while (rcx27 != 0x834);
        ++r15_21;
    } while (r15_21 != 0x76c);
    if (ebp30 >= 43 && reinterpret_cast<int1_t>(**v3 == free)) {
        rsi23 = r12_9;
        fun_3fe(0x834, rsi23, 0x41a0);
    }
    fun_406(rbx4, rsi23, 0x41a0);
    fun_40e(r14_7, rsi23, 0x41a0);
    fun_416(r12_9, rsi23, 0x41a0);
    fun_41e(r13_11, rsi23, 0x41a0);
    goto v31;
}

void fun_40e(int64_t rdi, struct s25* rsi, int64_t rdx) {
    struct s25* r12_4;
    int64_t* r13_5;
    int64_t v6;

    fun_416(r12_4, rsi, rdx);
    fun_41e(r13_5, rsi, rdx);
    goto v6;
}

int64_t fun_282(int64_t rdi, int64_t rsi) {
    signed char** v3;
    int64_t r14_4;
    int64_t rax5;
    struct s25* rax6;
    struct s25* r12_7;
    int64_t* rax8;
    int64_t* r13_9;
    int64_t rax10;
    int32_t* rdi11;
    int32_t* rsi12;
    int64_t rcx13;
    int64_t rcx14;
    uint64_t rsi15;
    int32_t* rdi16;
    int64_t rsi17;
    int32_t* rsi18;
    int64_t r15_19;
    struct s25* rdi20;
    struct s25* rsi21;
    int64_t rcx22;
    struct s27* rdi23;
    struct s27* rsi24;
    int64_t rcx25;
    struct s27* rdi26;
    struct s27* rsi27;
    int32_t ebp28;
    int64_t rbx29;
    int64_t v30;

    v3 = reinterpret_cast<signed char**>(__return_address());
    r14_4 = rax5;
    rax6 = fun_294(0x834, 8);
    r12_7 = rax6;
    rax8 = fun_2a6(0x76c, 8);
    r13_9 = rax8;
    *reinterpret_cast<int32_t*>(&rax10) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax10) + 4) = reinterpret_cast<int32_t>(free);
    g76c = LCPI3_0;
    g770 = gc;
    rdi11 = reinterpret_cast<int32_t*>(0x774);
    rsi12 = reinterpret_cast<int32_t*>(16);
    *reinterpret_cast<int32_t*>(&rcx13) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx13) + 4) = reinterpret_cast<int32_t>(free);
    do {
        __asm__("xorps xmm2, xmm2");
        __asm__("cvtsi2sd xmm2, ecx");
        __asm__("divsd xmm2, xmm0");
        __asm__("addsd xmm2, xmm1");
        *rdi11 = *rsi12;
        ++rdi11;
        ++rsi12;
        ++rcx13;
    } while (rcx13 != 0x834);
    *rdi11 = *rsi12;
    do {
        *reinterpret_cast<int32_t*>(&rcx14) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx14) + 4) = reinterpret_cast<int32_t>(free);
        do {
            rsi15 = static_cast<int32_t>(rcx14 + rax10) * 0x7cd49a17;
            rdi16 = reinterpret_cast<int32_t*>(rsi15 >> 63);
            rsi17 = reinterpret_cast<int64_t>(rsi15) >> 42;
            *reinterpret_cast<int32_t*>(&rsi18) = (*reinterpret_cast<int32_t*>(&rsi17) + *reinterpret_cast<int32_t*>(&rdi16)) * 0x834;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi18) + 4) = reinterpret_cast<int32_t>(free);
            __asm__("xorps xmm1, xmm1");
            __asm__("cvtsi2sd xmm1, edx");
            __asm__("divsd xmm1, xmm0");
            *rdi16 = *rsi18;
            ++rcx14;
        } while (rcx14 != 0x834);
        ++rax10;
    } while (rax10 != 0x76c);
    *reinterpret_cast<int32_t*>(&r15_19) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_19) + 4) = reinterpret_cast<int32_t>(free);
    rdi20 = r12_7;
    *reinterpret_cast<int32_t*>(&rsi21) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi21) + 4) = reinterpret_cast<int32_t>(free);
    fun_365();
    do {
        r13_9[r15_19] = reinterpret_cast<int64_t>(free);
        __asm__("xorpd xmm0, xmm0");
        *reinterpret_cast<int32_t*>(&rcx22) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx22) + 4) = reinterpret_cast<int32_t>(free);
        do {
            rdi20->f0 = rsi21->f0;
            rdi23 = reinterpret_cast<struct s27*>(&rdi20->f4);
            rsi24 = reinterpret_cast<struct s27*>(&rsi21->f4);
            __asm__("mulsd xmm1, [r14+rcx*8]");
            __asm__("addsd xmm0, xmm1");
            rdi23->f0 = rsi24->f0;
            rdi20 = reinterpret_cast<struct s25*>(&rdi23->f4);
            rsi21 = reinterpret_cast<struct s25*>(&rsi24->f4);
            ++rcx22;
        } while (rcx22 != 0x834);
        *reinterpret_cast<int32_t*>(&rcx25) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx25) + 4) = reinterpret_cast<int32_t>(free);
        do {
            rdi20->f0 = rsi21->f0;
            rdi26 = reinterpret_cast<struct s27*>(&rdi20->f4);
            rsi27 = reinterpret_cast<struct s27*>(&rsi21->f4);
            __asm__("mulsd xmm0, [r13+r15*8+0x0]");
            __asm__("addsd xmm0, [r12+rcx*8]");
            rdi26->f0 = rsi27->f0;
            rdi20 = reinterpret_cast<struct s25*>(&rdi26->f4);
            rsi21 = reinterpret_cast<struct s25*>(&rsi27->f4);
            ++rcx25;
        } while (rcx25 != 0x834);
        ++r15_19;
    } while (r15_19 != 0x76c);
    if (ebp28 >= 43 && reinterpret_cast<int1_t>(**v3 == free)) {
        rsi21 = r12_7;
        fun_3fe(0x834, rsi21, 0x41a0);
    }
    fun_406(rbx29, rsi21, 0x41a0);
    fun_40e(r14_4, rsi21, 0x41a0);
    fun_416(r12_7, rsi21, 0x41a0);
    fun_41e(r13_9, rsi21, 0x41a0);
    goto v30;
}

void fun_416(struct s25* rdi, struct s25* rsi, int64_t rdx) {
    int64_t* r13_4;
    int64_t v5;

    fun_41e(r13_4, rsi, rdx);
    goto v5;
}

struct s25* fun_294(int64_t rdi, int64_t rsi) {
    signed char** v3;
    struct s25* r12_4;
    struct s25* rax5;
    int64_t* rax6;
    int64_t* r13_7;
    int64_t rax8;
    int32_t* rdi9;
    int32_t* rsi10;
    int64_t rcx11;
    int64_t rcx12;
    uint64_t rsi13;
    int32_t* rdi14;
    int64_t rsi15;
    int32_t* rsi16;
    int64_t r15_17;
    struct s25* rdi18;
    struct s25* rsi19;
    int64_t rcx20;
    struct s27* rdi21;
    struct s27* rsi22;
    int64_t rcx23;
    struct s27* rdi24;
    struct s27* rsi25;
    int32_t ebp26;
    int64_t rbx27;
    int64_t r14_28;
    int64_t v29;

    v3 = reinterpret_cast<signed char**>(__return_address());
    r12_4 = rax5;
    rax6 = fun_2a6(0x76c, 8);
    r13_7 = rax6;
    *reinterpret_cast<int32_t*>(&rax8) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax8) + 4) = reinterpret_cast<int32_t>(free);
    g76c = LCPI3_0;
    g770 = gc;
    rdi9 = reinterpret_cast<int32_t*>(0x774);
    rsi10 = reinterpret_cast<int32_t*>(16);
    *reinterpret_cast<int32_t*>(&rcx11) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx11) + 4) = reinterpret_cast<int32_t>(free);
    do {
        __asm__("xorps xmm2, xmm2");
        __asm__("cvtsi2sd xmm2, ecx");
        __asm__("divsd xmm2, xmm0");
        __asm__("addsd xmm2, xmm1");
        *rdi9 = *rsi10;
        ++rdi9;
        ++rsi10;
        ++rcx11;
    } while (rcx11 != 0x834);
    *rdi9 = *rsi10;
    do {
        *reinterpret_cast<int32_t*>(&rcx12) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx12) + 4) = reinterpret_cast<int32_t>(free);
        do {
            rsi13 = static_cast<int32_t>(rcx12 + rax8) * 0x7cd49a17;
            rdi14 = reinterpret_cast<int32_t*>(rsi13 >> 63);
            rsi15 = reinterpret_cast<int64_t>(rsi13) >> 42;
            *reinterpret_cast<int32_t*>(&rsi16) = (*reinterpret_cast<int32_t*>(&rsi15) + *reinterpret_cast<int32_t*>(&rdi14)) * 0x834;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi16) + 4) = reinterpret_cast<int32_t>(free);
            __asm__("xorps xmm1, xmm1");
            __asm__("cvtsi2sd xmm1, edx");
            __asm__("divsd xmm1, xmm0");
            *rdi14 = *rsi16;
            ++rcx12;
        } while (rcx12 != 0x834);
        ++rax8;
    } while (rax8 != 0x76c);
    *reinterpret_cast<int32_t*>(&r15_17) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_17) + 4) = reinterpret_cast<int32_t>(free);
    rdi18 = r12_4;
    *reinterpret_cast<int32_t*>(&rsi19) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi19) + 4) = reinterpret_cast<int32_t>(free);
    fun_365();
    do {
        r13_7[r15_17] = reinterpret_cast<int64_t>(free);
        __asm__("xorpd xmm0, xmm0");
        *reinterpret_cast<int32_t*>(&rcx20) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx20) + 4) = reinterpret_cast<int32_t>(free);
        do {
            rdi18->f0 = rsi19->f0;
            rdi21 = reinterpret_cast<struct s27*>(&rdi18->f4);
            rsi22 = reinterpret_cast<struct s27*>(&rsi19->f4);
            __asm__("mulsd xmm1, [r14+rcx*8]");
            __asm__("addsd xmm0, xmm1");
            rdi21->f0 = rsi22->f0;
            rdi18 = reinterpret_cast<struct s25*>(&rdi21->f4);
            rsi19 = reinterpret_cast<struct s25*>(&rsi22->f4);
            ++rcx20;
        } while (rcx20 != 0x834);
        *reinterpret_cast<int32_t*>(&rcx23) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx23) + 4) = reinterpret_cast<int32_t>(free);
        do {
            rdi18->f0 = rsi19->f0;
            rdi24 = reinterpret_cast<struct s27*>(&rdi18->f4);
            rsi25 = reinterpret_cast<struct s27*>(&rsi19->f4);
            __asm__("mulsd xmm0, [r13+r15*8+0x0]");
            __asm__("addsd xmm0, [r12+rcx*8]");
            rdi24->f0 = rsi25->f0;
            rdi18 = reinterpret_cast<struct s25*>(&rdi24->f4);
            rsi19 = reinterpret_cast<struct s25*>(&rsi25->f4);
            ++rcx23;
        } while (rcx23 != 0x834);
        ++r15_17;
    } while (r15_17 != 0x76c);
    if (ebp26 >= 43 && reinterpret_cast<int1_t>(**v3 == free)) {
        rsi19 = r12_4;
        fun_3fe(0x834, rsi19, 0x41a0);
    }
    fun_406(rbx27, rsi19, 0x41a0);
    fun_40e(r14_28, rsi19, 0x41a0);
    fun_416(r12_4, rsi19, 0x41a0);
    fun_41e(r13_7, rsi19, 0x41a0);
    goto v29;
}

void fun_41e(int64_t* rdi, struct s25* rsi, int64_t rdx) {
    int64_t v4;

    goto v4;
}

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

int64_t* fun_2a6(struct s34* rdi, struct s35* rsi) {
    signed char** v3;
    int64_t* r13_4;
    int64_t* rax5;
    int64_t rax6;
    struct s36* rdi7;
    struct s37* rsi8;
    int32_t* rdi9;
    int32_t* rsi10;
    int64_t rcx11;
    int64_t rcx12;
    uint64_t rsi13;
    int32_t* rdi14;
    int64_t rsi15;
    int32_t* rsi16;
    int64_t r15_17;
    struct s38* rdi18;
    struct s38* r12_19;
    struct s25* rsi20;
    int64_t rcx21;
    struct s39* rdi22;
    struct s27* rsi23;
    int64_t rcx24;
    struct s39* rdi25;
    struct s27* rsi26;
    int32_t ebp27;
    struct s25* r12_28;
    int64_t rbx29;
    int64_t r14_30;
    struct s25* r12_31;
    int64_t v32;

    v3 = reinterpret_cast<signed char**>(__return_address());
    r13_4 = rax5;
    *reinterpret_cast<int32_t*>(&rax6) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax6) + 4) = reinterpret_cast<int32_t>(free);
    rdi->f0 = rsi->f0;
    rdi7 = reinterpret_cast<struct s36*>(&rdi->f4);
    rsi8 = reinterpret_cast<struct s37*>(&rsi->f4);
    rdi7->f0 = rsi8->f0;
    rdi9 = &rdi7->f4;
    rsi10 = &rsi8->f4;
    *reinterpret_cast<int32_t*>(&rcx11) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx11) + 4) = reinterpret_cast<int32_t>(free);
    do {
        __asm__("xorps xmm2, xmm2");
        __asm__("cvtsi2sd xmm2, ecx");
        __asm__("divsd xmm2, xmm0");
        __asm__("addsd xmm2, xmm1");
        *rdi9 = *rsi10;
        ++rdi9;
        ++rsi10;
        ++rcx11;
    } while (rcx11 != 0x834);
    *rdi9 = *rsi10;
    do {
        *reinterpret_cast<int32_t*>(&rcx12) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx12) + 4) = reinterpret_cast<int32_t>(free);
        do {
            rsi13 = static_cast<int32_t>(rcx12 + rax6) * 0x7cd49a17;
            rdi14 = reinterpret_cast<int32_t*>(rsi13 >> 63);
            rsi15 = reinterpret_cast<int64_t>(rsi13) >> 42;
            *reinterpret_cast<int32_t*>(&rsi16) = (*reinterpret_cast<int32_t*>(&rsi15) + *reinterpret_cast<int32_t*>(&rdi14)) * 0x834;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi16) + 4) = reinterpret_cast<int32_t>(free);
            __asm__("xorps xmm1, xmm1");
            __asm__("cvtsi2sd xmm1, edx");
            __asm__("divsd xmm1, xmm0");
            *rdi14 = *rsi16;
            ++rcx12;
        } while (rcx12 != 0x834);
        ++rax6;
    } while (rax6 != 0x76c);
    *reinterpret_cast<int32_t*>(&r15_17) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_17) + 4) = reinterpret_cast<int32_t>(free);
    rdi18 = r12_19;
    *reinterpret_cast<int32_t*>(&rsi20) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi20) + 4) = reinterpret_cast<int32_t>(free);
    fun_365();
    do {
        r13_4[r15_17] = reinterpret_cast<int64_t>(free);
        __asm__("xorpd xmm0, xmm0");
        *reinterpret_cast<int32_t*>(&rcx21) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx21) + 4) = reinterpret_cast<int32_t>(free);
        do {
            rdi18->f0 = rsi20->f0;
            rdi22 = reinterpret_cast<struct s39*>(&rdi18->f4);
            rsi23 = reinterpret_cast<struct s27*>(&rsi20->f4);
            __asm__("mulsd xmm1, [r14+rcx*8]");
            __asm__("addsd xmm0, xmm1");
            rdi22->f0 = rsi23->f0;
            rdi18 = reinterpret_cast<struct s38*>(&rdi22->f4);
            rsi20 = reinterpret_cast<struct s25*>(&rsi23->f4);
            ++rcx21;
        } while (rcx21 != 0x834);
        *reinterpret_cast<int32_t*>(&rcx24) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx24) + 4) = reinterpret_cast<int32_t>(free);
        do {
            rdi18->f0 = rsi20->f0;
            rdi25 = reinterpret_cast<struct s39*>(&rdi18->f4);
            rsi26 = reinterpret_cast<struct s27*>(&rsi20->f4);
            __asm__("mulsd xmm0, [r13+r15*8+0x0]");
            __asm__("addsd xmm0, [r12+rcx*8]");
            rdi25->f0 = rsi26->f0;
            rdi18 = reinterpret_cast<struct s38*>(&rdi25->f4);
            rsi20 = reinterpret_cast<struct s25*>(&rsi26->f4);
            ++rcx24;
        } while (rcx24 != 0x834);
        ++r15_17;
    } while (r15_17 != 0x76c);
    if (ebp27 >= 43 && reinterpret_cast<int1_t>(**v3 == free)) {
        rsi20 = r12_28;
        fun_3fe(0x834, rsi20, 0x41a0);
    }
    fun_406(rbx29, rsi20, 0x41a0);
    fun_40e(r14_30, rsi20, 0x41a0);
    fun_416(r12_31, rsi20, 0x41a0);
    fun_41e(r13_4, rsi20, 0x41a0);
    goto v32;
}

void free() {
}

void fun_c8() {
    signed char* rax1;
    signed char* rax2;
    signed char al3;
    int32_t* rbx4;

    *rax1 = reinterpret_cast<signed char>(*rax2 + al3);
    fun_db(rbx4);
}

void submain(int32_t edi, int64_t rsi) {
    fun_270(0x3ce1f0, 8);
}

