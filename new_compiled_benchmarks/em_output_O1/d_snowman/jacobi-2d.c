
struct s0 {
    int32_t f0;
    int32_t f4;
};

void fun_342(int64_t rdi, struct s0* rsi, int32_t* rdx, int32_t* rcx);

void fun_33a(int32_t* rdi, struct s0* rsi, int32_t* rdx, int32_t* rcx) {
    int64_t r14_5;
    int64_t v6;

    fun_342(r14_5, rsi, rdx, rcx);
    goto v6;
}

void fun_3ec();

void fputc(int32_t edi, int64_t rsi);

void fun_41c(int32_t* rdi, int64_t rsi, int64_t rdx, int32_t* rcx);

void fun_435(int64_t rdi, struct s0* rsi, int32_t* rdx, int32_t* rcx);

void fun_3cb() {
    int32_t* rdi1;
    int32_t* rsi2;
    int32_t* r15_3;
    int64_t r12_4;
    int64_t r13_5;
    int64_t rbp6;
    int32_t* r15_7;
    int32_t* r15_8;
    int32_t* rcx9;
    int32_t* r15_10;
    int32_t* rbx11;
    int64_t r14_12;
    int64_t v13;

    while (1) {
        *rdi1 = *rsi2;
        rdi1 = r15_3;
        rsi2 = reinterpret_cast<int32_t*>(0x3e5);
        fun_3ec();
        ++r12_4;
        if (r12_4 == 0x514) {
            ++r13_5;
            if (r13_5 == 0x514) 
                break;
            rbp6 = r13_5 * 0x514;
            *reinterpret_cast<int32_t*>(&r12_4) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_4) + 4) = reinterpret_cast<int32_t>(fputc);
        }
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r12_4 + rbp6) * 0xcccccccd) > 0xccccccc) 
            continue;
        *reinterpret_cast<int32_t*>(&rdi1) = 10;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi1) + 4) = reinterpret_cast<int32_t>(fputc);
        rsi2 = r15_7;
        fun_3cb();
    }
    fun_41c(r15_8, 0x40b, 0x412, rcx9);
    fun_435(0x423, 22, 1, r15_10);
    fun_33a(rbx11, 22, 1, r15_10);
    fun_342(r14_12, 22, 1, r15_10);
    goto v13;
}

void fun_3ec() {
    int64_t r12_1;
    int64_t r13_2;
    int64_t rbp3;
    int32_t* rdi4;
    int32_t* rsi5;
    int32_t* r15_6;
    int32_t* r15_7;
    int32_t* r15_8;
    int32_t* rcx9;
    int32_t* r15_10;
    int32_t* rbx11;
    int64_t r14_12;
    int64_t v13;

    while (1) {
        ++r12_1;
        if (r12_1 == 0x514) {
            ++r13_2;
            if (r13_2 == 0x514) 
                break;
            rbp3 = r13_2 * 0x514;
            *reinterpret_cast<int32_t*>(&r12_1) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_1) + 4) = reinterpret_cast<int32_t>(fputc);
        }
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r12_1 + rbp3) * 0xcccccccd) <= 0xccccccc) {
            *reinterpret_cast<int32_t*>(&rdi4) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi4) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi5 = r15_6;
            fun_3cb();
        }
        *rdi4 = *rsi5;
        rdi4 = r15_7;
        rsi5 = reinterpret_cast<int32_t*>(0x3e5);
        fun_3ec();
    }
    fun_41c(r15_8, 0x40b, 0x412, rcx9);
    fun_435(0x423, 22, 1, r15_10);
    fun_33a(rbx11, 22, 1, r15_10);
    fun_342(r14_12, 22, 1, r15_10);
    goto v13;
}

void fun_41c(int32_t* rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int32_t* r15_5;
    int32_t* rbx6;
    int64_t r14_7;
    int64_t v8;

    fun_435(0x423, 22, 1, r15_5);
    fun_33a(rbx6, 22, 1, r15_5);
    fun_342(r14_7, 22, 1, r15_5);
    goto v8;
}

void fun_391();

void fun_376(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int32_t* rsi5;
    int64_t r13_6;
    int32_t* rdi7;
    int32_t* r15_8;
    int64_t rbp9;
    int64_t r12_10;
    int32_t* r15_11;
    int32_t* r15_12;
    int32_t* r15_13;
    int32_t* r15_14;
    int32_t* rbx15;
    int64_t r14_16;
    int64_t v17;

    rsi5 = reinterpret_cast<int32_t*>(0x37d);
    *reinterpret_cast<int32_t*>(&r13_6) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_6) + 4) = reinterpret_cast<int32_t>(fputc);
    rdi7 = r15_8;
    fun_391();
    do {
        rbp9 = r13_6 * 0x514;
        *reinterpret_cast<int32_t*>(&r12_10) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_10) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r12_10 + rbp9) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi7) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi7) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi5 = r15_11;
                fun_3cb();
            }
            *rdi7 = *rsi5;
            rdi7 = r15_12;
            rsi5 = reinterpret_cast<int32_t*>(0x3e5);
            fun_3ec();
            ++r12_10;
        } while (r12_10 != 0x514);
        ++r13_6;
    } while (r13_6 != 0x514);
    fun_41c(r15_13, 0x40b, 0x412, rcx);
    fun_435(0x423, 22, 1, r15_14);
    fun_33a(rbx15, 22, 1, r15_14);
    fun_342(r14_16, 22, 1, r15_14);
    goto v17;
}

void fun_342(int64_t rdi, struct s0* rsi, int32_t* rdx, int32_t* rcx) {
    int64_t v5;

    goto v5;
}

void fun_435(int64_t rdi, struct s0* rsi, int32_t* rdx, int32_t* rcx) {
    int32_t* rbx5;
    int64_t r14_6;
    int64_t v7;

    fun_33a(rbx5, rsi, rdx, rcx);
    fun_342(r14_6, rsi, rdx, rcx);
    goto v7;
}

struct s1 {
    int32_t f0;
    int32_t f4;
};

struct s2 {
    int32_t f0;
    int32_t f4;
};

int64_t fun_171(struct s1* rdi, struct s2* rsi);

int32_t g19c990;

/* .LCPI1_0 */
int32_t LCPI1_0 = 0x1288e;

int32_t g19c994;

int32_t gc = 0xff468d00;

int32_t g19c998;

/* .LCPI1_1 */
int32_t LCPI1_1 = 0xf2c03145;

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

int32_t** g35a = reinterpret_cast<int32_t**>(0x3d8d48388b4c);

void fun_15f(int64_t rdi, int64_t rsi) {
    int32_t* rbx3;
    int32_t* rax4;
    int64_t rax5;
    int64_t r14_6;
    int64_t rax7;
    struct s3* rdi8;
    int64_t rcx9;
    struct s4* rsi10;
    struct s5* rdi11;
    struct s6* rsi12;
    int32_t eax13;
    struct s7* rdx14;
    struct s7* rsi15;
    struct s8* rdi16;
    int32_t* rdi17;
    struct s9* rsi18;
    struct s8* r8_19;
    int32_t* rcx20;
    int32_t* rdx21;
    struct s0* rsi22;
    struct s10* rdi23;
    int32_t* rdi24;
    struct s11* rsi25;
    struct s10* r8_26;
    int32_t ebp27;
    signed char** r15_28;
    int32_t** rax29;
    int32_t* r15_30;
    int32_t* rcx31;
    int32_t* rsi32;
    int64_t r13_33;
    int32_t* rdi34;
    int64_t rbp35;
    int64_t r12_36;
    int64_t v37;

    rbx3 = rax4;
    rax5 = fun_171(0x19c990, 8);
    r14_6 = rax5;
    *reinterpret_cast<int32_t*>(&rax7) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax7) + 4) = reinterpret_cast<int32_t>(fputc);
    g19c990 = LCPI1_0;
    g19c994 = gc;
    g19c998 = LCPI1_1;
    rdi8 = reinterpret_cast<struct s3*>(0x19c99c);
    do {
        __asm__("xorps xmm3, xmm3");
        __asm__("cvtsi2sd xmm3, eax");
        *reinterpret_cast<int32_t*>(&rcx9) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx9) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("xorps xmm4, xmm4");
            __asm__("cvtsi2sd xmm4, edx");
            __asm__("mulsd xmm4, xmm3");
            __asm__("addsd xmm4, xmm0");
            __asm__("divsd xmm4, xmm1");
            __asm__("xorps xmm5, xmm5");
            __asm__("cvtsi2sd xmm5, esi");
            rsi10 = reinterpret_cast<struct s4*>(rbx3 + rax7 * 0xa28);
            rdi8->f0 = rsi10->f0;
            rdi11 = reinterpret_cast<struct s5*>(&rdi8->f4);
            rsi12 = reinterpret_cast<struct s6*>(&rsi10->f4);
            __asm__("mulsd xmm5, xmm3");
            __asm__("addsd xmm5, xmm2");
            __asm__("divsd xmm5, xmm1");
            rdi11->f0 = rsi12->f0;
            rdi8 = reinterpret_cast<struct s3*>(&rdi11->f4);
            ++rcx9;
        } while (rcx9 != 0x514);
        ++rax7;
    } while (rax7 != 0x514);
    eax13 = reinterpret_cast<int32_t>(fputc);
    rdi8->f0 = rsi12->f4;
    do {
        *reinterpret_cast<int32_t*>(&rdx14) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx14) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rsi15 = reinterpret_cast<struct s7*>(reinterpret_cast<int64_t>(rdx14) + 1);
            *reinterpret_cast<int32_t*>(&rdi16) = 1;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi16) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                rdi16->f0 = rsi15->f0;
                rdi17 = &rdi16->f4;
                rsi18 = reinterpret_cast<struct s9*>(&rsi15->f4);
                __asm__("addsd xmm1, [r9+rdi*8-0x8]");
                __asm__("addsd xmm1, [r9+rdi*8+0x8]");
                __asm__("addsd xmm1, [r9+rdi*8]");
                __asm__("addsd xmm1, [r9+rdi*8]");
                __asm__("mulsd xmm1, xmm0");
                *rdi17 = rsi18->f0;
                rsi15 = reinterpret_cast<struct s7*>(&rsi18->f4);
                r8_19 = reinterpret_cast<struct s8*>(reinterpret_cast<int64_t>(rdi17 + 1) + 1);
                rdi16 = r8_19;
            } while (!reinterpret_cast<int1_t>(r8_19 == 0x513));
            *reinterpret_cast<int32_t*>(&rcx20) = 1;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx20) + 4) = reinterpret_cast<int32_t>(fputc);
            rdx14 = rsi15;
        } while (!reinterpret_cast<int1_t>(rsi15 == 0x513));
        do {
            rdx21 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rcx20) + 1);
            rsi22 = reinterpret_cast<struct s0*>(reinterpret_cast<int64_t>(rcx20) - 1);
            *reinterpret_cast<int32_t*>(&rdi23) = 1;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi23) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                rdi23->f0 = rsi22->f0;
                rdi24 = &rdi23->f4;
                rsi25 = reinterpret_cast<struct s11*>(&rsi22->f4);
                __asm__("addsd xmm1, [r9+rdi*8-0x8]");
                __asm__("addsd xmm1, [r9+rdi*8+0x8]");
                __asm__("addsd xmm1, [r9+rdi*8]");
                __asm__("addsd xmm1, [r9+rdi*8]");
                __asm__("mulsd xmm1, xmm0");
                *rdi24 = rsi25->f0;
                rsi22 = reinterpret_cast<struct s0*>(&rsi25->f4);
                r8_26 = reinterpret_cast<struct s10*>(reinterpret_cast<int64_t>(rdi24 + 1) + 1);
                rdi23 = r8_26;
            } while (!reinterpret_cast<int1_t>(r8_26 == 0x513));
            rcx20 = rdx21;
        } while (!reinterpret_cast<int1_t>(rdx21 == 0x513));
        ++eax13;
    } while (eax13 != 0x1f4);
    if (ebp27 >= 43 && **r15_28 == fputc) {
        rax29 = g35a;
        r15_30 = *rax29;
        rcx31 = r15_30;
        fun_376(0x364, 22, 1, rcx31);
        rsi32 = reinterpret_cast<int32_t*>(0x37d);
        *reinterpret_cast<int32_t*>(&r13_33) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_33) + 4) = reinterpret_cast<int32_t>(fputc);
        rdi34 = r15_30;
        fun_391();
        do {
            rbp35 = r13_33 * 0x514;
            *reinterpret_cast<int32_t*>(&r12_36) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_36) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("ror eax, 0x2");
                if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r12_36 + rbp35) * 0xcccccccd) <= 0xccccccc) {
                    *reinterpret_cast<int32_t*>(&rdi34) = 10;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi34) + 4) = reinterpret_cast<int32_t>(fputc);
                    rsi32 = r15_30;
                    fun_3cb();
                }
                *rdi34 = *rsi32;
                rdi34 = r15_30;
                rsi32 = reinterpret_cast<int32_t*>(0x3e5);
                fun_3ec();
                ++r12_36;
            } while (r12_36 != 0x514);
            ++r13_33;
        } while (r13_33 != 0x514);
        fun_41c(r15_30, 0x40b, 0x412, rcx31);
        *reinterpret_cast<int32_t*>(&rsi22) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi22) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx21) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx21) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx20 = r15_30;
        fun_435(0x423, 22, 1, rcx20);
    }
    fun_33a(rbx3, rsi22, rdx21, rcx20);
    fun_342(r14_6, rsi22, rdx21, rcx20);
    goto v37;
}

void fun_391() {
    int64_t rbp1;
    int64_t r13_2;
    int64_t r12_3;
    int32_t* rdi4;
    int32_t* rsi5;
    int32_t* r15_6;
    int32_t* r15_7;
    int32_t* r15_8;
    int32_t* rcx9;
    int32_t* r15_10;
    int32_t* rbx11;
    int64_t r14_12;
    int64_t v13;

    do {
        rbp1 = r13_2 * 0x514;
        *reinterpret_cast<int32_t*>(&r12_3) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_3) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r12_3 + rbp1) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi4) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi4) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi5 = r15_6;
                fun_3cb();
            }
            *rdi4 = *rsi5;
            rdi4 = r15_7;
            rsi5 = reinterpret_cast<int32_t*>(0x3e5);
            fun_3ec();
            ++r12_3;
        } while (r12_3 != 0x514);
        ++r13_2;
    } while (r13_2 != 0x514);
    fun_41c(r15_8, 0x40b, 0x412, rcx9);
    fun_435(0x423, 22, 1, r15_10);
    fun_33a(rbx11, 22, 1, r15_10);
    fun_342(r14_12, 22, 1, r15_10);
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

struct s21 {
    int32_t f0;
    int32_t f4;
};

struct s22 {
    int32_t f0;
    int32_t f4;
};

int64_t fun_171(struct s1* rdi, struct s2* rsi) {
    int64_t r14_3;
    int64_t rax4;
    int64_t rax5;
    struct s12* rdi6;
    struct s13* rsi7;
    struct s14* rdi8;
    struct s15* rdi9;
    int64_t rcx10;
    struct s16* rsi11;
    int32_t* rbx12;
    struct s17* rdi13;
    struct s18* rsi14;
    int32_t eax15;
    struct s19* rdx16;
    struct s19* rsi17;
    struct s20* rdi18;
    int32_t* rdi19;
    struct s21* rsi20;
    struct s20* r8_21;
    int32_t* rcx22;
    int32_t* rdx23;
    struct s0* rsi24;
    struct s22* rdi25;
    int32_t* rdi26;
    struct s11* rsi27;
    struct s22* r8_28;
    int32_t ebp29;
    signed char** r15_30;
    int32_t** rax31;
    int32_t* r15_32;
    int32_t* rcx33;
    int32_t* rsi34;
    int64_t r13_35;
    int32_t* rdi36;
    int64_t rbp37;
    int64_t r12_38;
    int32_t* rbx39;
    int64_t v40;

    r14_3 = rax4;
    *reinterpret_cast<int32_t*>(&rax5) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax5) + 4) = reinterpret_cast<int32_t>(fputc);
    rdi->f0 = rsi->f0;
    rdi6 = reinterpret_cast<struct s12*>(&rdi->f4);
    rsi7 = reinterpret_cast<struct s13*>(&rsi->f4);
    rdi6->f0 = rsi7->f0;
    rdi8 = reinterpret_cast<struct s14*>(&rdi6->f4);
    rdi8->f0 = rsi7->f4;
    rdi9 = reinterpret_cast<struct s15*>(&rdi8->f4);
    do {
        __asm__("xorps xmm3, xmm3");
        __asm__("cvtsi2sd xmm3, eax");
        *reinterpret_cast<int32_t*>(&rcx10) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx10) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("xorps xmm4, xmm4");
            __asm__("cvtsi2sd xmm4, edx");
            __asm__("mulsd xmm4, xmm3");
            __asm__("addsd xmm4, xmm0");
            __asm__("divsd xmm4, xmm1");
            __asm__("xorps xmm5, xmm5");
            __asm__("cvtsi2sd xmm5, esi");
            rsi11 = reinterpret_cast<struct s16*>(rbx12 + rax5 * 0xa28);
            rdi9->f0 = rsi11->f0;
            rdi13 = reinterpret_cast<struct s17*>(&rdi9->f4);
            rsi14 = reinterpret_cast<struct s18*>(&rsi11->f4);
            __asm__("mulsd xmm5, xmm3");
            __asm__("addsd xmm5, xmm2");
            __asm__("divsd xmm5, xmm1");
            rdi13->f0 = rsi14->f0;
            rdi9 = reinterpret_cast<struct s15*>(&rdi13->f4);
            ++rcx10;
        } while (rcx10 != 0x514);
        ++rax5;
    } while (rax5 != 0x514);
    eax15 = reinterpret_cast<int32_t>(fputc);
    rdi9->f0 = rsi14->f4;
    do {
        *reinterpret_cast<int32_t*>(&rdx16) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx16) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rsi17 = reinterpret_cast<struct s19*>(reinterpret_cast<int64_t>(rdx16) + 1);
            *reinterpret_cast<int32_t*>(&rdi18) = 1;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi18) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                rdi18->f0 = rsi17->f0;
                rdi19 = &rdi18->f4;
                rsi20 = reinterpret_cast<struct s21*>(&rsi17->f4);
                __asm__("addsd xmm1, [r9+rdi*8-0x8]");
                __asm__("addsd xmm1, [r9+rdi*8+0x8]");
                __asm__("addsd xmm1, [r9+rdi*8]");
                __asm__("addsd xmm1, [r9+rdi*8]");
                __asm__("mulsd xmm1, xmm0");
                *rdi19 = rsi20->f0;
                rsi17 = reinterpret_cast<struct s19*>(&rsi20->f4);
                r8_21 = reinterpret_cast<struct s20*>(reinterpret_cast<int64_t>(rdi19 + 1) + 1);
                rdi18 = r8_21;
            } while (!reinterpret_cast<int1_t>(r8_21 == 0x513));
            *reinterpret_cast<int32_t*>(&rcx22) = 1;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx22) + 4) = reinterpret_cast<int32_t>(fputc);
            rdx16 = rsi17;
        } while (!reinterpret_cast<int1_t>(rsi17 == 0x513));
        do {
            rdx23 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rcx22) + 1);
            rsi24 = reinterpret_cast<struct s0*>(reinterpret_cast<int64_t>(rcx22) - 1);
            *reinterpret_cast<int32_t*>(&rdi25) = 1;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi25) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                rdi25->f0 = rsi24->f0;
                rdi26 = &rdi25->f4;
                rsi27 = reinterpret_cast<struct s11*>(&rsi24->f4);
                __asm__("addsd xmm1, [r9+rdi*8-0x8]");
                __asm__("addsd xmm1, [r9+rdi*8+0x8]");
                __asm__("addsd xmm1, [r9+rdi*8]");
                __asm__("addsd xmm1, [r9+rdi*8]");
                __asm__("mulsd xmm1, xmm0");
                *rdi26 = rsi27->f0;
                rsi24 = reinterpret_cast<struct s0*>(&rsi27->f4);
                r8_28 = reinterpret_cast<struct s22*>(reinterpret_cast<int64_t>(rdi26 + 1) + 1);
                rdi25 = r8_28;
            } while (!reinterpret_cast<int1_t>(r8_28 == 0x513));
            rcx22 = rdx23;
        } while (!reinterpret_cast<int1_t>(rdx23 == 0x513));
        ++eax15;
    } while (eax15 != 0x1f4);
    if (ebp29 >= 43 && **r15_30 == fputc) {
        rax31 = g35a;
        r15_32 = *rax31;
        rcx33 = r15_32;
        fun_376(0x364, 22, 1, rcx33);
        rsi34 = reinterpret_cast<int32_t*>(0x37d);
        *reinterpret_cast<int32_t*>(&r13_35) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_35) + 4) = reinterpret_cast<int32_t>(fputc);
        rdi36 = r15_32;
        fun_391();
        do {
            rbp37 = r13_35 * 0x514;
            *reinterpret_cast<int32_t*>(&r12_38) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_38) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("ror eax, 0x2");
                if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r12_38 + rbp37) * 0xcccccccd) <= 0xccccccc) {
                    *reinterpret_cast<int32_t*>(&rdi36) = 10;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi36) + 4) = reinterpret_cast<int32_t>(fputc);
                    rsi34 = r15_32;
                    fun_3cb();
                }
                *rdi36 = *rsi34;
                rdi36 = r15_32;
                rsi34 = reinterpret_cast<int32_t*>(0x3e5);
                fun_3ec();
                ++r12_38;
            } while (r12_38 != 0x514);
            ++r13_35;
        } while (r13_35 != 0x514);
        fun_41c(r15_32, 0x40b, 0x412, rcx33);
        *reinterpret_cast<int32_t*>(&rsi24) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi24) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx23) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx23) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx22 = r15_32;
        fun_435(0x423, 22, 1, rcx22);
    }
    fun_33a(rbx39, rsi24, rdx23, rcx22);
    fun_342(r14_3, rsi24, rdx23, rcx22);
    goto v40;
}

void fputc(int32_t edi, int64_t rsi) {
    if (reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(edi < reinterpret_cast<int32_t>(fputc) == fputc)) | reinterpret_cast<uint1_t>(edi == fputc)) {
        return;
    }
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

void fun_98() {
    int64_t rbx1;
    int64_t rax2;
    int64_t r10_3;
    int64_t rax4;
    int64_t r9_5;
    int32_t esi6;
    int64_t r10_7;
    int64_t rbx8;
    struct s23* rdi9;
    struct s24* rsi10;
    struct s25* rdi11;
    struct s26* rsi12;
    int64_t r14_13;
    int64_t rax14;
    int64_t rax15;

    __asm__("movups [rsi+rbx*8], xmm1");
    if (rbx1 + 1 == rax2) {
        if (r10_3 == rax4) {
            *reinterpret_cast<int32_t*>(&r9_5) = 1;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_5) + 4) = reinterpret_cast<int32_t>(fputc);
            if (esi6 > 2) {
                do {
                    r10_7 = r9_5 + 1;
                    *reinterpret_cast<int32_t*>(&rbx8) = 1;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx8) + 4) = reinterpret_cast<int32_t>(fputc);
                    do {
                        rdi9->f0 = rsi10->f0;
                        rdi11 = reinterpret_cast<struct s25*>(&rdi9->f4);
                        rsi12 = reinterpret_cast<struct s26*>(&rsi10->f4);
                        __asm__("addsd xmm1, [r15+rbx*8-0x8]");
                        __asm__("addsd xmm1, [r15+rbx*8+0x8]");
                        __asm__("addsd xmm1, [r15+rbx*8]");
                        __asm__("addsd xmm1, [r15+rbx*8]");
                        __asm__("mulsd xmm1, xmm0");
                        rdi11->f0 = rsi12->f0;
                        rdi9 = reinterpret_cast<struct s23*>(&rdi11->f4);
                        rsi10 = reinterpret_cast<struct s24*>(&rsi12->f4);
                        r14_13 = rbx8 + 1;
                        rbx8 = r14_13;
                    } while (r14_13 != rax14);
                    r9_5 = r10_7;
                } while (r10_7 != rax15);
            }
        }
    }
}

void submain(int32_t edi, int64_t rsi) {
    fun_15f(0x19c990, 8);
}

