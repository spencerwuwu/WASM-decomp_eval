
struct s0 {
    int32_t f0;
    int32_t f4;
};

struct s1 {
    int32_t f0;
    int32_t f4;
};

void fun_2c7(int32_t* rdi, struct s0* rsi, int32_t* rdx, struct s1* rcx);

void fun_2bf(int32_t* rdi, struct s0* rsi, int32_t* rdx, struct s1* rcx) {
    int32_t* r14_5;
    int64_t v6;

    fun_2c7(r14_5, rsi, rdx, rcx);
    goto v6;
}

void fun_36c();

void fputc(int32_t edi, int32_t esi);

void fun_39c(struct s1* rdi, int64_t rsi, int64_t rdx, struct s1* rcx);

void fun_3b5(int64_t rdi, struct s0* rsi, int32_t* rdx, struct s1* rcx);

void fun_34b() {
    int32_t* rdi1;
    int32_t* rsi2;
    int32_t* r15_3;
    int64_t r12_4;
    int64_t r13_5;
    int64_t rbp6;
    int32_t* r15_7;
    struct s1* r15_8;
    struct s1* rcx9;
    struct s1* r15_10;
    int32_t* rbx11;
    int32_t* r14_12;
    int64_t v13;

    while (1) {
        *rdi1 = *rsi2;
        rdi1 = r15_3;
        rsi2 = reinterpret_cast<int32_t*>(0x365);
        fun_36c();
        ++r12_4;
        if (r12_4 == 0x4b0) {
            ++r13_5;
            if (r13_5 == 0x4b0) 
                break;
            rbp6 = r13_5 * 0x4b0;
            *reinterpret_cast<int32_t*>(&r12_4) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_4) + 4) = reinterpret_cast<int32_t>(fputc);
        }
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r12_4 + rbp6) * 0xcccccccd) > 0xccccccc) 
            continue;
        *reinterpret_cast<int32_t*>(&rdi1) = 10;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi1) + 4) = reinterpret_cast<int32_t>(fputc);
        rsi2 = r15_7;
        fun_34b();
    }
    fun_39c(r15_8, 0x38b, 0x392, rcx9);
    fun_3b5(0x3a3, 22, 1, r15_10);
    fun_2bf(rbx11, 22, 1, r15_10);
    fun_2c7(r14_12, 22, 1, r15_10);
    goto v13;
}

void fun_36c() {
    int64_t r12_1;
    int64_t r13_2;
    int64_t rbp3;
    int32_t* rdi4;
    int32_t* rsi5;
    int32_t* r15_6;
    int32_t* r15_7;
    struct s1* r15_8;
    struct s1* rcx9;
    struct s1* r15_10;
    int32_t* rbx11;
    int32_t* r14_12;
    int64_t v13;

    while (1) {
        ++r12_1;
        if (r12_1 == 0x4b0) {
            ++r13_2;
            if (r13_2 == 0x4b0) 
                break;
            rbp3 = r13_2 * 0x4b0;
            *reinterpret_cast<int32_t*>(&r12_1) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_1) + 4) = reinterpret_cast<int32_t>(fputc);
        }
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r12_1 + rbp3) * 0xcccccccd) <= 0xccccccc) {
            *reinterpret_cast<int32_t*>(&rdi4) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi4) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi5 = r15_6;
            fun_34b();
        }
        *rdi4 = *rsi5;
        rdi4 = r15_7;
        rsi5 = reinterpret_cast<int32_t*>(0x365);
        fun_36c();
    }
    fun_39c(r15_8, 0x38b, 0x392, rcx9);
    fun_3b5(0x3a3, 22, 1, r15_10);
    fun_2bf(rbx11, 22, 1, r15_10);
    fun_2c7(r14_12, 22, 1, r15_10);
    goto v13;
}

void fun_39c(struct s1* rdi, int64_t rsi, int64_t rdx, struct s1* rcx) {
    struct s1* r15_5;
    int32_t* rbx6;
    int32_t* r14_7;
    int64_t v8;

    fun_3b5(0x3a3, 22, 1, r15_5);
    fun_2bf(rbx6, 22, 1, r15_5);
    fun_2c7(r14_7, 22, 1, r15_5);
    goto v8;
}

void fun_316();

void fun_2fb(int64_t rdi, int64_t rsi, int64_t rdx, struct s1* rcx) {
    int32_t* rsi5;
    int64_t r13_6;
    int32_t* rdi7;
    int32_t* r15_8;
    int64_t rbp9;
    int64_t r12_10;
    int32_t* r15_11;
    int32_t* r15_12;
    struct s1* r15_13;
    struct s1* r15_14;
    int32_t* rbx15;
    int32_t* r14_16;
    int64_t v17;

    rsi5 = reinterpret_cast<int32_t*>(0x302);
    *reinterpret_cast<int32_t*>(&r13_6) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_6) + 4) = reinterpret_cast<int32_t>(fputc);
    rdi7 = r15_8;
    fun_316();
    do {
        rbp9 = r13_6 * 0x4b0;
        *reinterpret_cast<int32_t*>(&r12_10) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_10) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r12_10 + rbp9) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi7) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi7) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi5 = r15_11;
                fun_34b();
            }
            *rdi7 = *rsi5;
            rdi7 = r15_12;
            rsi5 = reinterpret_cast<int32_t*>(0x365);
            fun_36c();
            ++r12_10;
        } while (r12_10 != 0x4b0);
        ++r13_6;
    } while (r13_6 != 0x4b0);
    fun_39c(r15_13, 0x38b, 0x392, rcx);
    fun_3b5(0x3a3, 22, 1, r15_14);
    fun_2bf(rbx15, 22, 1, r15_14);
    fun_2c7(r14_16, 22, 1, r15_14);
    goto v17;
}

void fun_2c7(int32_t* rdi, struct s0* rsi, int32_t* rdx, struct s1* rcx) {
    int64_t v5;

    goto v5;
}

void fun_3b5(int64_t rdi, struct s0* rsi, int32_t* rdx, struct s1* rcx) {
    int32_t* rbx5;
    int32_t* r14_6;
    int64_t v7;

    fun_2bf(rbx5, rsi, rdx, rcx);
    fun_2c7(r14_6, rsi, rdx, rcx);
    goto v7;
}

int32_t* fun_101(int32_t* rdi, int32_t* rsi);

int32_t g124f80;

/* .LCPI1_1 */
int32_t LCPI1_1 = 0xbc8e;

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

struct s1** g2df = reinterpret_cast<struct s1**>(0x3d8d48388b4c);

void fun_ef(int64_t rdi, int64_t rsi) {
    int32_t* rbx3;
    int32_t* rax4;
    int32_t* rax5;
    int32_t* r14_6;
    int64_t rcx7;
    int64_t rax8;
    int64_t rdx9;
    int64_t rsi10;
    uint64_t rdi11;
    struct s2* rdi12;
    struct s3* rsi13;
    int64_t rax14;
    int64_t rdx15;
    int64_t rsi16;
    uint64_t rdi17;
    struct s4* rdi18;
    struct s5* rsi19;
    struct s6* rdi20;
    struct s7* rsi21;
    struct s1* rcx22;
    struct s8* rdi23;
    struct s9* rdi24;
    struct s1* rsi25;
    int32_t* rdx26;
    struct s10* rdi27;
    int32_t* rsi28;
    struct s0* rsi29;
    struct s1* r8_30;
    struct s10* rdi31;
    struct s11* rsi32;
    int32_t ebp33;
    signed char** r15_34;
    struct s1** rax35;
    struct s1* r15_36;
    struct s1* rcx37;
    struct s1* rsi38;
    int64_t r13_39;
    struct s1* rdi40;
    int64_t rbp41;
    int64_t r12_42;
    int64_t v43;

    rbx3 = rax4;
    rax5 = fun_101(0x124f80, 8);
    r14_6 = rax5;
    *reinterpret_cast<int32_t*>(&rcx7) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx7) + 4) = reinterpret_cast<int32_t>(fputc);
    g124f80 = LCPI1_1;
    *reinterpret_cast<int32_t*>(&rax8) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax8) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        *reinterpret_cast<int32_t*>(&rdx9) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx9) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            *reinterpret_cast<int32_t*>(&rsi10) = *reinterpret_cast<int32_t*>(&rdx9) * *reinterpret_cast<int32_t*>(&rax8) + 1;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi10) + 4) = reinterpret_cast<int32_t>(fputc);
            rdi11 = reinterpret_cast<uint64_t>(rsi10 * 0x1b4e81b5) >> 39;
            *reinterpret_cast<int32_t*>(&rdi12) = *reinterpret_cast<int32_t*>(&rdi11) * 0x4b0;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi12) + 4) = reinterpret_cast<int32_t>(fputc);
            __asm__("xorps xmm1, xmm1");
            __asm__("cvtsi2sd xmm1, esi");
            __asm__("divsd xmm1, xmm0");
            rsi13 = reinterpret_cast<struct s3*>(r14_6 + rax8 * 0x7d0);
            rdi12->f0 = rsi13->f0;
            ++rdx9;
        } while (rdx9 != 0x3e8);
        ++rax8;
    } while (rax8 != 0x4b0);
    *reinterpret_cast<int32_t*>(&rax14) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax14) + 4) = reinterpret_cast<int32_t>(fputc);
    rdi12->f4 = rsi13->f4;
    do {
        *reinterpret_cast<int32_t*>(&rdx15) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx15) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            *reinterpret_cast<int32_t*>(&rsi16) = *reinterpret_cast<int32_t*>(&rdx15) * *reinterpret_cast<int32_t*>(&rcx7) + 2;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi16) + 4) = reinterpret_cast<int32_t>(fputc);
            rdi17 = reinterpret_cast<uint64_t>(rsi16 * 0x10624dd3) >> 38;
            *reinterpret_cast<int32_t*>(&rdi18) = *reinterpret_cast<int32_t*>(&rdi17) * 0x3e8;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi18) + 4) = reinterpret_cast<int32_t>(fputc);
            __asm__("xorps xmm1, xmm1");
            __asm__("cvtsi2sd xmm1, esi");
            __asm__("divsd xmm1, xmm0");
            rsi19 = reinterpret_cast<struct s5*>(rbx3 + rcx7 * 0x960);
            rdi18->f0 = rsi19->f0;
            rdi20 = reinterpret_cast<struct s6*>(&rdi18->f4);
            rsi21 = reinterpret_cast<struct s7*>(&rsi19->f4);
            ++rdx15;
        } while (rdx15 != 0x4b0);
        ++rcx7;
    } while (rcx7 != 0x4b0);
    *reinterpret_cast<int32_t*>(&rcx22) = 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx22) + 4) = reinterpret_cast<int32_t>(fputc);
    rdi20->f0 = rsi21->f0;
    rdi23 = reinterpret_cast<struct s8*>(&rdi20->f4);
    rdi23->f0 = rsi21->f4;
    rdi24 = reinterpret_cast<struct s9*>(&rdi23->f4);
    do {
        *reinterpret_cast<int32_t*>(&rsi25) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi25) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rdx26 = rbx3 + rax14 * 0x960;
            rdi24->f0 = rsi25->f0;
            rdi27 = reinterpret_cast<struct s10*>(&rdi24->f4);
            rsi28 = &rsi25->f4;
            __asm__("mulsd xmm2, xmm0");
            rdi27->f0 = *rsi28;
            rdi24 = reinterpret_cast<struct s9*>(&rdi27->f4);
            rsi25 = reinterpret_cast<struct s1*>(reinterpret_cast<int64_t>(rsi28 + 1) + 1);
        } while (rsi25 != rcx22);
        *reinterpret_cast<int32_t*>(&rsi29) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi29) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rdi24 = reinterpret_cast<struct s9*>(r14_6 + rax14 * 0x7d0 + reinterpret_cast<int64_t>(rsi29) * 2);
            *reinterpret_cast<int32_t*>(&r8_30) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_30) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                rdi24->f0 = rsi29->f0;
                rdi31 = reinterpret_cast<struct s10*>(&rdi24->f4);
                rsi32 = reinterpret_cast<struct s11*>(&rsi29->f4);
                __asm__("mulsd xmm2, xmm1");
                __asm__("mulsd xmm2, [r9+rsi*8]");
                __asm__("addsd xmm2, [rdx+r8*8]");
                rdi31->f0 = rsi32->f0;
                rdi24 = reinterpret_cast<struct s9*>(&rdi31->f4);
                rsi29 = reinterpret_cast<struct s0*>(&rsi32->f4);
                r8_30 = reinterpret_cast<struct s1*>(reinterpret_cast<int64_t>(r8_30) + 1);
            } while (r8_30 != rcx22);
            rsi29 = reinterpret_cast<struct s0*>(reinterpret_cast<int64_t>(rsi29) + 1);
        } while (!reinterpret_cast<int1_t>(rsi29 == 0x3e8));
        ++rax14;
        rcx22 = reinterpret_cast<struct s1*>(reinterpret_cast<int64_t>(rcx22) + 1);
    } while (rax14 != 0x4b0);
    if (ebp33 >= 43 && **r15_34 == fputc) {
        rax35 = g2df;
        r15_36 = *rax35;
        rcx37 = r15_36;
        fun_2fb(0x2e9, 22, 1, rcx37);
        rsi38 = reinterpret_cast<struct s1*>(0x302);
        *reinterpret_cast<int32_t*>(&r13_39) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_39) + 4) = reinterpret_cast<int32_t>(fputc);
        rdi40 = r15_36;
        fun_316();
        do {
            rbp41 = r13_39 * 0x4b0;
            *reinterpret_cast<int32_t*>(&r12_42) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_42) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("ror eax, 0x2");
                if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r12_42 + rbp41) * 0xcccccccd) <= 0xccccccc) {
                    *reinterpret_cast<int32_t*>(&rdi40) = 10;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi40) + 4) = reinterpret_cast<int32_t>(fputc);
                    rsi38 = r15_36;
                    fun_34b();
                }
                rdi40->f0 = rsi38->f0;
                rdi40 = r15_36;
                rsi38 = reinterpret_cast<struct s1*>(0x365);
                fun_36c();
                ++r12_42;
            } while (r12_42 != 0x4b0);
            ++r13_39;
        } while (r13_39 != 0x4b0);
        fun_39c(r15_36, 0x38b, 0x392, rcx37);
        *reinterpret_cast<int32_t*>(&rsi29) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi29) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx26) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx26) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx22 = r15_36;
        fun_3b5(0x3a3, 22, 1, rcx22);
    }
    fun_2bf(rbx3, rsi29, rdx26, rcx22);
    fun_2c7(r14_6, rsi29, rdx26, rcx22);
    goto v43;
}

void fun_316() {
    int64_t rbp1;
    int64_t r13_2;
    int64_t r12_3;
    int32_t* rdi4;
    int32_t* rsi5;
    int32_t* r15_6;
    int32_t* r15_7;
    struct s1* r15_8;
    struct s1* rcx9;
    struct s1* r15_10;
    int32_t* rbx11;
    int32_t* r14_12;
    int64_t v13;

    do {
        rbp1 = r13_2 * 0x4b0;
        *reinterpret_cast<int32_t*>(&r12_3) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_3) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r12_3 + rbp1) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi4) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi4) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi5 = r15_6;
                fun_34b();
            }
            *rdi4 = *rsi5;
            rdi4 = r15_7;
            rsi5 = reinterpret_cast<int32_t*>(0x365);
            fun_36c();
            ++r12_3;
        } while (r12_3 != 0x4b0);
        ++r13_2;
    } while (r13_2 != 0x4b0);
    fun_39c(r15_8, 0x38b, 0x392, rcx9);
    fun_3b5(0x3a3, 22, 1, r15_10);
    fun_2bf(rbx11, 22, 1, r15_10);
    fun_2c7(r14_12, 22, 1, r15_10);
    goto v13;
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

int32_t* fun_101(int32_t* rdi, int32_t* rsi) {
    int32_t* r14_3;
    int32_t* rax4;
    int64_t rcx5;
    int64_t rax6;
    int64_t rdx7;
    int64_t rsi8;
    uint64_t rdi9;
    struct s12* rdi10;
    struct s13* rsi11;
    int64_t rax12;
    int64_t rdx13;
    int64_t rsi14;
    uint64_t rdi15;
    struct s14* rdi16;
    struct s15* rsi17;
    int32_t* rbx18;
    struct s16* rdi19;
    struct s17* rsi20;
    struct s1* rcx21;
    struct s18* rdi22;
    struct s19* rdi23;
    struct s1* rsi24;
    int32_t* rdx25;
    int32_t* rbx26;
    struct s20* rdi27;
    int32_t* rsi28;
    struct s0* rsi29;
    struct s1* r8_30;
    struct s20* rdi31;
    struct s11* rsi32;
    int32_t ebp33;
    signed char** r15_34;
    struct s1** rax35;
    struct s1* r15_36;
    struct s1* rcx37;
    struct s1* rsi38;
    int64_t r13_39;
    struct s1* rdi40;
    int64_t rbp41;
    int64_t r12_42;
    int32_t* rbx43;
    int64_t v44;

    r14_3 = rax4;
    *reinterpret_cast<int32_t*>(&rcx5) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx5) + 4) = reinterpret_cast<int32_t>(fputc);
    *rdi = *rsi;
    *reinterpret_cast<int32_t*>(&rax6) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax6) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        *reinterpret_cast<int32_t*>(&rdx7) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx7) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            *reinterpret_cast<int32_t*>(&rsi8) = *reinterpret_cast<int32_t*>(&rdx7) * *reinterpret_cast<int32_t*>(&rax6) + 1;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi8) + 4) = reinterpret_cast<int32_t>(fputc);
            rdi9 = reinterpret_cast<uint64_t>(rsi8 * 0x1b4e81b5) >> 39;
            *reinterpret_cast<int32_t*>(&rdi10) = *reinterpret_cast<int32_t*>(&rdi9) * 0x4b0;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi10) + 4) = reinterpret_cast<int32_t>(fputc);
            __asm__("xorps xmm1, xmm1");
            __asm__("cvtsi2sd xmm1, esi");
            __asm__("divsd xmm1, xmm0");
            rsi11 = reinterpret_cast<struct s13*>(r14_3 + rax6 * 0x7d0);
            rdi10->f0 = rsi11->f0;
            ++rdx7;
        } while (rdx7 != 0x3e8);
        ++rax6;
    } while (rax6 != 0x4b0);
    *reinterpret_cast<int32_t*>(&rax12) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax12) + 4) = reinterpret_cast<int32_t>(fputc);
    rdi10->f4 = rsi11->f4;
    do {
        *reinterpret_cast<int32_t*>(&rdx13) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx13) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            *reinterpret_cast<int32_t*>(&rsi14) = *reinterpret_cast<int32_t*>(&rdx13) * *reinterpret_cast<int32_t*>(&rcx5) + 2;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi14) + 4) = reinterpret_cast<int32_t>(fputc);
            rdi15 = reinterpret_cast<uint64_t>(rsi14 * 0x10624dd3) >> 38;
            *reinterpret_cast<int32_t*>(&rdi16) = *reinterpret_cast<int32_t*>(&rdi15) * 0x3e8;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi16) + 4) = reinterpret_cast<int32_t>(fputc);
            __asm__("xorps xmm1, xmm1");
            __asm__("cvtsi2sd xmm1, esi");
            __asm__("divsd xmm1, xmm0");
            rsi17 = reinterpret_cast<struct s15*>(rbx18 + rcx5 * 0x960);
            rdi16->f0 = rsi17->f0;
            rdi19 = reinterpret_cast<struct s16*>(&rdi16->f4);
            rsi20 = reinterpret_cast<struct s17*>(&rsi17->f4);
            ++rdx13;
        } while (rdx13 != 0x4b0);
        ++rcx5;
    } while (rcx5 != 0x4b0);
    *reinterpret_cast<int32_t*>(&rcx21) = 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx21) + 4) = reinterpret_cast<int32_t>(fputc);
    rdi19->f0 = rsi20->f0;
    rdi22 = reinterpret_cast<struct s18*>(&rdi19->f4);
    rdi22->f0 = rsi20->f4;
    rdi23 = reinterpret_cast<struct s19*>(&rdi22->f4);
    do {
        *reinterpret_cast<int32_t*>(&rsi24) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi24) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rdx25 = rbx26 + rax12 * 0x960;
            rdi23->f0 = rsi24->f0;
            rdi27 = reinterpret_cast<struct s20*>(&rdi23->f4);
            rsi28 = &rsi24->f4;
            __asm__("mulsd xmm2, xmm0");
            rdi27->f0 = *rsi28;
            rdi23 = reinterpret_cast<struct s19*>(&rdi27->f4);
            rsi24 = reinterpret_cast<struct s1*>(reinterpret_cast<int64_t>(rsi28 + 1) + 1);
        } while (rsi24 != rcx21);
        *reinterpret_cast<int32_t*>(&rsi29) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi29) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rdi23 = reinterpret_cast<struct s19*>(r14_3 + rax12 * 0x7d0 + reinterpret_cast<int64_t>(rsi29) * 2);
            *reinterpret_cast<int32_t*>(&r8_30) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_30) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                rdi23->f0 = rsi29->f0;
                rdi31 = reinterpret_cast<struct s20*>(&rdi23->f4);
                rsi32 = reinterpret_cast<struct s11*>(&rsi29->f4);
                __asm__("mulsd xmm2, xmm1");
                __asm__("mulsd xmm2, [r9+rsi*8]");
                __asm__("addsd xmm2, [rdx+r8*8]");
                rdi31->f0 = rsi32->f0;
                rdi23 = reinterpret_cast<struct s19*>(&rdi31->f4);
                rsi29 = reinterpret_cast<struct s0*>(&rsi32->f4);
                r8_30 = reinterpret_cast<struct s1*>(reinterpret_cast<int64_t>(r8_30) + 1);
            } while (r8_30 != rcx21);
            rsi29 = reinterpret_cast<struct s0*>(reinterpret_cast<int64_t>(rsi29) + 1);
        } while (!reinterpret_cast<int1_t>(rsi29 == 0x3e8));
        ++rax12;
        rcx21 = reinterpret_cast<struct s1*>(reinterpret_cast<int64_t>(rcx21) + 1);
    } while (rax12 != 0x4b0);
    if (ebp33 >= 43 && **r15_34 == fputc) {
        rax35 = g2df;
        r15_36 = *rax35;
        rcx37 = r15_36;
        fun_2fb(0x2e9, 22, 1, rcx37);
        rsi38 = reinterpret_cast<struct s1*>(0x302);
        *reinterpret_cast<int32_t*>(&r13_39) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_39) + 4) = reinterpret_cast<int32_t>(fputc);
        rdi40 = r15_36;
        fun_316();
        do {
            rbp41 = r13_39 * 0x4b0;
            *reinterpret_cast<int32_t*>(&r12_42) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_42) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("ror eax, 0x2");
                if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r12_42 + rbp41) * 0xcccccccd) <= 0xccccccc) {
                    *reinterpret_cast<int32_t*>(&rdi40) = 10;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi40) + 4) = reinterpret_cast<int32_t>(fputc);
                    rsi38 = r15_36;
                    fun_34b();
                }
                rdi40->f0 = rsi38->f0;
                rdi40 = r15_36;
                rsi38 = reinterpret_cast<struct s1*>(0x365);
                fun_36c();
                ++r12_42;
            } while (r12_42 != 0x4b0);
            ++r13_39;
        } while (r13_39 != 0x4b0);
        fun_39c(r15_36, 0x38b, 0x392, rcx37);
        *reinterpret_cast<int32_t*>(&rsi29) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi29) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx25) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx25) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx21 = r15_36;
        fun_3b5(0x3a3, 22, 1, rcx21);
    }
    fun_2bf(rbx43, rsi29, rdx25, rcx21);
    fun_2c7(r14_3, rsi29, rdx25, rcx21);
    goto v44;
}

void fputc(int32_t edi, int32_t esi) {
    if (reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(edi < reinterpret_cast<int32_t>(fputc) == fputc)) | reinterpret_cast<uint1_t>(edi == fputc)) {
        return;
    }
}

void fun_19() {
}

void fun_7c() {
}

void fun_98(int32_t* rdi, int32_t* rsi) {
    int64_t r14_3;
    int64_t r8_4;
    int64_t r11_5;

    __asm__("mulsd xmm2, [r15+r11*8]");
    __asm__("addsd xmm2, [r10+r14*8]");
    *rdi = *rsi;
    if (r14_3 + 1 != r8_4) 
        goto 0x90;
    if (!reinterpret_cast<int1_t>(r11_5 + 1 == rdi + 1)) {
    }
}

void submain(int32_t edi, int64_t rsi) {
    fun_ef(0x15f900, 8);
}

