
struct s0 {
    int32_t f0;
    int32_t f4;
};

void fun_357(int32_t* rdi, struct s0* rsi, int64_t rdx, int32_t* rcx);

void fun_35f(int32_t* rdi, struct s0* rsi, int64_t rdx, int32_t* rcx);

void fun_34f(int32_t* rdi, struct s0* rsi, int64_t rdx, int32_t* rcx) {
    int32_t* r14_5;
    int32_t* r15_6;
    int64_t v7;

    fun_357(r14_5, rsi, rdx, rcx);
    fun_35f(r15_6, rsi, rdx, rcx);
    goto v7;
}

void fun_40e();

void fputc();

void fun_442(int32_t* rdi, int64_t rsi, int64_t rdx, int32_t* rcx);

void fun_45b(int64_t rdi, struct s0* rsi, int64_t rdx, int32_t* rcx);

void fun_3ec() {
    int32_t* rdi1;
    int32_t* rsi2;
    int64_t r12_3;
    int64_t rbp4;
    int64_t r13_5;
    int32_t* rcx6;
    int32_t* rbx7;
    int32_t* r14_8;
    int32_t* r15_9;
    int64_t v10;

    while (1) {
        *rdi1 = *rsi2;
        rdi1 = reinterpret_cast<int32_t*>(__return_address());
        rsi2 = reinterpret_cast<int32_t*>(0x407);
        fun_40e();
        ++r12_3;
        if (r12_3 == 0x44c) {
            ++rbp4;
            if (rbp4 == 0x3e8) 
                break;
            r13_5 = rbp4 * 0x3e8;
            *reinterpret_cast<int32_t*>(&r12_3) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_3) + 4) = reinterpret_cast<int32_t>(fputc);
        }
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r12_3 + r13_5) * 0xcccccccd) > 0xccccccc) 
            continue;
        *reinterpret_cast<int32_t*>(&rdi1) = 10;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi1) + 4) = reinterpret_cast<int32_t>(fputc);
        rsi2 = reinterpret_cast<int32_t*>(__return_address());
        fun_3ec();
    }
    fun_442(__return_address(), 0x42d, 0x434, rcx6);
    fun_45b(0x449, 22, 1, __return_address());
    fun_34f(rbx7, 22, 1, __return_address());
    fun_357(r14_8, 22, 1, __return_address());
    fun_35f(r15_9, 22, 1, __return_address());
    goto v10;
}

void fun_40e() {
    int64_t r12_1;
    int64_t rbp2;
    int64_t r13_3;
    int32_t* rdi4;
    int32_t* rsi5;
    int32_t* rcx6;
    int32_t* rbx7;
    int32_t* r14_8;
    int32_t* r15_9;
    int64_t v10;

    while (1) {
        ++r12_1;
        if (r12_1 == 0x44c) {
            ++rbp2;
            if (rbp2 == 0x3e8) 
                break;
            r13_3 = rbp2 * 0x3e8;
            *reinterpret_cast<int32_t*>(&r12_1) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_1) + 4) = reinterpret_cast<int32_t>(fputc);
        }
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r12_1 + r13_3) * 0xcccccccd) <= 0xccccccc) {
            *reinterpret_cast<int32_t*>(&rdi4) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi4) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi5 = reinterpret_cast<int32_t*>(__return_address());
            fun_3ec();
        }
        *rdi4 = *rsi5;
        rdi4 = reinterpret_cast<int32_t*>(__return_address());
        rsi5 = reinterpret_cast<int32_t*>(0x407);
        fun_40e();
    }
    fun_442(__return_address(), 0x42d, 0x434, rcx6);
    fun_45b(0x449, 22, 1, __return_address());
    fun_34f(rbx7, 22, 1, __return_address());
    fun_357(r14_8, 22, 1, __return_address());
    fun_35f(r15_9, 22, 1, __return_address());
    goto v10;
}

void fun_442(int32_t* rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int32_t* r12_5;
    int32_t* rbx6;
    int32_t* r14_7;
    int32_t* r15_8;
    int64_t v9;

    fun_45b(0x449, 22, 1, r12_5);
    fun_34f(rbx6, 22, 1, r12_5);
    fun_357(r14_7, 22, 1, r12_5);
    fun_35f(r15_8, 22, 1, r12_5);
    goto v9;
}

void fun_3b1();

void fun_393(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int32_t* rsi5;
    int64_t rbp6;
    int32_t* v7;
    int32_t* r12_8;
    int32_t* rdi9;
    int32_t* r12_10;
    int64_t r13_11;
    int64_t r12_12;
    int32_t* rbx13;
    int32_t* r14_14;
    int32_t* r15_15;
    int64_t v16;

    rsi5 = reinterpret_cast<int32_t*>(0x39a);
    *reinterpret_cast<int32_t*>(&rbp6) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp6) + 4) = reinterpret_cast<int32_t>(fputc);
    v7 = r12_8;
    rdi9 = r12_10;
    fun_3b1();
    do {
        r13_11 = rbp6 * 0x3e8;
        *reinterpret_cast<int32_t*>(&r12_12) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_12) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r12_12 + r13_11) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi9) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi9) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi5 = v7;
                fun_3ec();
            }
            *rdi9 = *rsi5;
            rdi9 = v7;
            rsi5 = reinterpret_cast<int32_t*>(0x407);
            fun_40e();
            ++r12_12;
        } while (r12_12 != 0x44c);
        ++rbp6;
    } while (rbp6 != 0x3e8);
    fun_442(v7, 0x42d, 0x434, rcx);
    fun_45b(0x449, 22, 1, v7);
    fun_34f(rbx13, 22, 1, v7);
    fun_357(r14_14, 22, 1, v7);
    fun_35f(r15_15, 22, 1, v7);
    goto v16;
}

void fun_357(int32_t* rdi, struct s0* rsi, int64_t rdx, int32_t* rcx) {
    int32_t* r15_5;
    int64_t v6;

    fun_35f(r15_5, rsi, rdx, rcx);
    goto v6;
}

void fun_45b(int64_t rdi, struct s0* rsi, int64_t rdx, int32_t* rcx) {
    int32_t* rbx5;
    int32_t* r14_6;
    int32_t* r15_7;
    int64_t v8;

    fun_34f(rbx5, rsi, rdx, rcx);
    fun_357(r14_6, rsi, rdx, rcx);
    fun_35f(r15_7, rsi, rdx, rcx);
    goto v8;
}

int32_t* fun_111(int64_t rdi, int64_t rsi);

int32_t* fun_123(int32_t* rdi, int32_t* rsi);

int32_t g142440;

/* .LCPI1_1 */
int32_t LCPI1_1 = 0xfff8553;

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
    int32_t f1;
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

int32_t** g377 = reinterpret_cast<int32_t**>(0x3d8d48208b4c);

void fun_ff(int64_t rdi, int64_t rsi) {
    int32_t* rbx3;
    int32_t* rax4;
    int32_t* rax5;
    int32_t* r14_6;
    int32_t* rax7;
    int32_t* r15_8;
    int64_t rax9;
    int64_t rcx10;
    int64_t rdx11;
    int64_t rsi12;
    uint64_t rdi13;
    struct s1* rdi14;
    struct s2* rsi15;
    int64_t rcx16;
    struct s3* rdx17;
    struct s4* rsi18;
    struct s5* rdi19;
    struct s3* rsi20;
    int64_t rax21;
    int64_t rdx22;
    uint32_t edi23;
    int64_t rsi24;
    uint64_t rsi25;
    struct s6* rdi26;
    struct s7* rsi27;
    struct s8* rdi28;
    struct s9* rsi29;
    struct s10* rdi30;
    struct s11* rsi31;
    int32_t* rdi32;
    struct s0* rsi33;
    int64_t rdx34;
    int32_t* rcx35;
    struct s12* rdi36;
    struct s13* rsi37;
    int64_t rdx38;
    struct s12* rdi39;
    struct s13* rsi40;
    int32_t ebp41;
    signed char** r12_42;
    int32_t** rax43;
    int32_t* r12_44;
    int32_t* rcx45;
    int32_t* rsi46;
    int64_t rbp47;
    int32_t* v48;
    int32_t* rdi49;
    int64_t r13_50;
    int64_t r12_51;
    int64_t v52;

    rbx3 = rax4;
    rax5 = fun_111(0x124f80, 8);
    r14_6 = rax5;
    rax7 = fun_123(0x142440, 8);
    r15_8 = rax7;
    *reinterpret_cast<int32_t*>(&rax9) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax9) + 4) = reinterpret_cast<int32_t>(fputc);
    g142440 = LCPI1_1;
    *reinterpret_cast<int32_t*>(&rcx10) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx10) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        *reinterpret_cast<int32_t*>(&rdx11) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx11) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            *reinterpret_cast<int32_t*>(&rsi12) = *reinterpret_cast<int32_t*>(&rdx11) * *reinterpret_cast<int32_t*>(&rcx10) + 1;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi12) + 4) = reinterpret_cast<int32_t>(fputc);
            rdi13 = reinterpret_cast<uint64_t>(rsi12 * 0x10624dd3) >> 38;
            *reinterpret_cast<int32_t*>(&rdi14) = *reinterpret_cast<int32_t*>(&rdi13) * 0x3e8;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi14) + 4) = reinterpret_cast<int32_t>(fputc);
            __asm__("xorps xmm1, xmm1");
            __asm__("cvtsi2sd xmm1, esi");
            __asm__("divsd xmm1, xmm0");
            rsi15 = reinterpret_cast<struct s2*>(rbx3 + rcx10 * 0x898);
            rdi14->f0 = rsi15->f0;
            ++rdx11;
        } while (rdx11 != 0x44c);
        ++rcx10;
    } while (rcx10 != 0x3e8);
    *reinterpret_cast<int32_t*>(&rcx16) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx16) + 4) = reinterpret_cast<int32_t>(fputc);
    rdi14->f4 = rsi15->f4;
    do {
        *reinterpret_cast<int32_t*>(&rdx17) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx17) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rsi18 = reinterpret_cast<struct s4*>(reinterpret_cast<int64_t>(rdx17) + 1);
            __asm__("xorps xmm1, xmm1");
            __asm__("cvtsi2sd xmm1, edi");
            __asm__("divsd xmm1, xmm0");
            rdi19 = reinterpret_cast<struct s5*>(r14_6 + rax9 * 0x960);
            rdi19->f0 = rsi18->f0;
            rsi20 = reinterpret_cast<struct s3*>(&rsi18->f4);
            rdx17 = rsi20;
        } while (!reinterpret_cast<int1_t>(rsi20 == 0x4b0));
        ++rax9;
    } while (rax9 != 0x3e8);
    *reinterpret_cast<int32_t*>(&rax21) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax21) + 4) = reinterpret_cast<int32_t>(fputc);
    rdi19->f4 = rsi20->f0;
    do {
        *reinterpret_cast<int32_t*>(&rdx22) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx22) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            edi23 = reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&rcx16) * static_cast<int32_t>(rdx22 + 2));
            *reinterpret_cast<uint32_t*>(&rsi24) = edi23 >> 2;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi24) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi25 = reinterpret_cast<uint64_t>(rsi24 * 0x1dca01dd) >> 37;
            *reinterpret_cast<uint32_t*>(&rdi26) = edi23 - *reinterpret_cast<int32_t*>(&rsi25) * 0x44c;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi26) + 4) = reinterpret_cast<int32_t>(fputc);
            __asm__("xorps xmm1, xmm1");
            __asm__("cvtsi2sd xmm1, edi");
            __asm__("divsd xmm1, xmm0");
            rsi27 = reinterpret_cast<struct s7*>(r15_8 + rcx16 * 0x898);
            rdi26->f0 = rsi27->f0;
            rdi28 = reinterpret_cast<struct s8*>(&rdi26->f4);
            rsi29 = reinterpret_cast<struct s9*>(&rsi27->f4);
            ++rdx22;
        } while (rdx22 != 0x44c);
        ++rcx16;
    } while (rcx16 != 0x4b0);
    rdi28->f0 = rsi29->f0;
    rdi30 = reinterpret_cast<struct s10*>(&rdi28->f4);
    rsi31 = reinterpret_cast<struct s11*>(&rsi29->f4);
    rdi30->f0 = rsi31->f0;
    rdi32 = &rdi30->f4;
    rsi33 = reinterpret_cast<struct s0*>(&rsi31->f4);
    do {
        *reinterpret_cast<int32_t*>(&rdx34) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx34) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rcx35 = rbx3 + rax21 * 0x898;
            *rdi32 = rsi33->f0;
            rdi36 = reinterpret_cast<struct s12*>(rdi32 + 1);
            rsi37 = reinterpret_cast<struct s13*>(&rsi33->f4);
            __asm__("mulsd xmm2, xmm0");
            rdi36->f0 = rsi37->f0;
            rdi32 = &rdi36->f4;
            rsi33 = reinterpret_cast<struct s0*>(&rsi37->f4);
            ++rdx34;
        } while (rdx34 != 0x44c);
        *reinterpret_cast<int32_t*>(&rdx38) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx38) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rsi33 = reinterpret_cast<struct s0*>(r14_6 + rax21 * 0x960 + rdx38 * 2);
            *reinterpret_cast<int32_t*>(&rdi32) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi32) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                *rdi32 = rsi33->f0;
                rdi39 = reinterpret_cast<struct s12*>(rdi32 + 1);
                rsi40 = reinterpret_cast<struct s13*>(&rsi33->f4);
                __asm__("mulsd xmm2, xmm1");
                __asm__("mulsd xmm2, [r8+rdi*8]");
                __asm__("addsd xmm2, [rcx+rdi*8]");
                rdi39->f0 = rsi40->f0;
                rsi33 = reinterpret_cast<struct s0*>(&rsi40->f4);
                rdi32 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi39->f4) + 1);
            } while (!reinterpret_cast<int1_t>(rdi32 == 0x44c));
            ++rdx38;
        } while (rdx38 != 0x4b0);
        ++rax21;
    } while (rax21 != 0x3e8);
    if (ebp41 >= 43 && **r12_42 == fputc) {
        rax43 = g377;
        r12_44 = *rax43;
        rcx45 = r12_44;
        fun_393(0x381, 22, 1, rcx45);
        rsi46 = reinterpret_cast<int32_t*>(0x39a);
        *reinterpret_cast<int32_t*>(&rbp47) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp47) + 4) = reinterpret_cast<int32_t>(fputc);
        v48 = r12_44;
        rdi49 = r12_44;
        fun_3b1();
        do {
            r13_50 = rbp47 * 0x3e8;
            *reinterpret_cast<int32_t*>(&r12_51) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_51) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("ror eax, 0x2");
                if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r12_51 + r13_50) * 0xcccccccd) <= 0xccccccc) {
                    *reinterpret_cast<int32_t*>(&rdi49) = 10;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi49) + 4) = reinterpret_cast<int32_t>(fputc);
                    rsi46 = v48;
                    fun_3ec();
                }
                *rdi49 = *rsi46;
                rdi49 = v48;
                rsi46 = reinterpret_cast<int32_t*>(0x407);
                fun_40e();
                ++r12_51;
            } while (r12_51 != 0x44c);
            ++rbp47;
        } while (rbp47 != 0x3e8);
        fun_442(v48, 0x42d, 0x434, rcx45);
        *reinterpret_cast<int32_t*>(&rsi33) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi33) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx38) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx38) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx35 = v48;
        fun_45b(0x449, 22, 1, rcx35);
    }
    fun_34f(rbx3, rsi33, rdx38, rcx35);
    fun_357(r14_6, rsi33, rdx38, rcx35);
    fun_35f(r15_8, rsi33, rdx38, rcx35);
    goto v52;
}

void fun_3b1() {
    int32_t* v1;
    int64_t r13_2;
    int64_t rbp3;
    int64_t r12_4;
    int32_t* rdi5;
    int32_t* rsi6;
    int32_t* rcx7;
    int32_t* rbx8;
    int32_t* r14_9;
    int32_t* r15_10;
    int64_t v11;

    v1 = reinterpret_cast<int32_t*>(__return_address());
    do {
        r13_2 = rbp3 * 0x3e8;
        *reinterpret_cast<int32_t*>(&r12_4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_4) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r12_4 + r13_2) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi5) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi5) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi6 = v1;
                fun_3ec();
            }
            *rdi5 = *rsi6;
            rdi5 = v1;
            rsi6 = reinterpret_cast<int32_t*>(0x407);
            fun_40e();
            ++r12_4;
        } while (r12_4 != 0x44c);
        ++rbp3;
    } while (rbp3 != 0x3e8);
    fun_442(v1, 0x42d, 0x434, rcx7);
    fun_45b(0x449, 22, 1, v1);
    fun_34f(rbx8, 22, 1, v1);
    fun_357(r14_9, 22, 1, v1);
    fun_35f(r15_10, 22, 1, v1);
    goto v11;
}

void fun_35f(int32_t* rdi, struct s0* rsi, int64_t rdx, int32_t* rcx) {
    int64_t v5;

    goto v5;
}

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
    int32_t f1;
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

int32_t* fun_111(int64_t rdi, int64_t rsi) {
    int32_t* r14_3;
    int32_t* rax4;
    int32_t* rax5;
    int32_t* r15_6;
    int64_t rax7;
    int64_t rcx8;
    int64_t rdx9;
    int64_t rsi10;
    uint64_t rdi11;
    struct s14* rdi12;
    struct s15* rsi13;
    int32_t* rbx14;
    int64_t rcx15;
    struct s16* rdx16;
    struct s17* rsi17;
    struct s18* rdi18;
    struct s16* rsi19;
    int64_t rax20;
    int64_t rdx21;
    uint32_t edi22;
    int64_t rsi23;
    uint64_t rsi24;
    struct s19* rdi25;
    struct s20* rsi26;
    struct s21* rdi27;
    struct s22* rsi28;
    struct s23* rdi29;
    struct s24* rsi30;
    int32_t* rdi31;
    struct s0* rsi32;
    int64_t rdx33;
    int32_t* rcx34;
    int32_t* rbx35;
    struct s25* rdi36;
    struct s13* rsi37;
    int64_t rdx38;
    struct s25* rdi39;
    struct s13* rsi40;
    int32_t ebp41;
    signed char** r12_42;
    int32_t** rax43;
    int32_t* r12_44;
    int32_t* rcx45;
    int32_t* rsi46;
    int64_t rbp47;
    int32_t* v48;
    int32_t* rdi49;
    int64_t r13_50;
    int64_t r12_51;
    int32_t* rbx52;
    int64_t v53;

    r14_3 = rax4;
    rax5 = fun_123(0x142440, 8);
    r15_6 = rax5;
    *reinterpret_cast<int32_t*>(&rax7) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax7) + 4) = reinterpret_cast<int32_t>(fputc);
    g142440 = LCPI1_1;
    *reinterpret_cast<int32_t*>(&rcx8) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx8) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        *reinterpret_cast<int32_t*>(&rdx9) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx9) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            *reinterpret_cast<int32_t*>(&rsi10) = *reinterpret_cast<int32_t*>(&rdx9) * *reinterpret_cast<int32_t*>(&rcx8) + 1;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi10) + 4) = reinterpret_cast<int32_t>(fputc);
            rdi11 = reinterpret_cast<uint64_t>(rsi10 * 0x10624dd3) >> 38;
            *reinterpret_cast<int32_t*>(&rdi12) = *reinterpret_cast<int32_t*>(&rdi11) * 0x3e8;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi12) + 4) = reinterpret_cast<int32_t>(fputc);
            __asm__("xorps xmm1, xmm1");
            __asm__("cvtsi2sd xmm1, esi");
            __asm__("divsd xmm1, xmm0");
            rsi13 = reinterpret_cast<struct s15*>(rbx14 + rcx8 * 0x898);
            rdi12->f0 = rsi13->f0;
            ++rdx9;
        } while (rdx9 != 0x44c);
        ++rcx8;
    } while (rcx8 != 0x3e8);
    *reinterpret_cast<int32_t*>(&rcx15) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx15) + 4) = reinterpret_cast<int32_t>(fputc);
    rdi12->f4 = rsi13->f4;
    do {
        *reinterpret_cast<int32_t*>(&rdx16) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx16) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rsi17 = reinterpret_cast<struct s17*>(reinterpret_cast<int64_t>(rdx16) + 1);
            __asm__("xorps xmm1, xmm1");
            __asm__("cvtsi2sd xmm1, edi");
            __asm__("divsd xmm1, xmm0");
            rdi18 = reinterpret_cast<struct s18*>(r14_3 + rax7 * 0x960);
            rdi18->f0 = rsi17->f0;
            rsi19 = reinterpret_cast<struct s16*>(&rsi17->f4);
            rdx16 = rsi19;
        } while (!reinterpret_cast<int1_t>(rsi19 == 0x4b0));
        ++rax7;
    } while (rax7 != 0x3e8);
    *reinterpret_cast<int32_t*>(&rax20) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax20) + 4) = reinterpret_cast<int32_t>(fputc);
    rdi18->f4 = rsi19->f0;
    do {
        *reinterpret_cast<int32_t*>(&rdx21) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx21) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            edi22 = reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&rcx15) * static_cast<int32_t>(rdx21 + 2));
            *reinterpret_cast<uint32_t*>(&rsi23) = edi22 >> 2;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi23) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi24 = reinterpret_cast<uint64_t>(rsi23 * 0x1dca01dd) >> 37;
            *reinterpret_cast<uint32_t*>(&rdi25) = edi22 - *reinterpret_cast<int32_t*>(&rsi24) * 0x44c;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi25) + 4) = reinterpret_cast<int32_t>(fputc);
            __asm__("xorps xmm1, xmm1");
            __asm__("cvtsi2sd xmm1, edi");
            __asm__("divsd xmm1, xmm0");
            rsi26 = reinterpret_cast<struct s20*>(r15_6 + rcx15 * 0x898);
            rdi25->f0 = rsi26->f0;
            rdi27 = reinterpret_cast<struct s21*>(&rdi25->f4);
            rsi28 = reinterpret_cast<struct s22*>(&rsi26->f4);
            ++rdx21;
        } while (rdx21 != 0x44c);
        ++rcx15;
    } while (rcx15 != 0x4b0);
    rdi27->f0 = rsi28->f0;
    rdi29 = reinterpret_cast<struct s23*>(&rdi27->f4);
    rsi30 = reinterpret_cast<struct s24*>(&rsi28->f4);
    rdi29->f0 = rsi30->f0;
    rdi31 = &rdi29->f4;
    rsi32 = reinterpret_cast<struct s0*>(&rsi30->f4);
    do {
        *reinterpret_cast<int32_t*>(&rdx33) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx33) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rcx34 = rbx35 + rax20 * 0x898;
            *rdi31 = rsi32->f0;
            rdi36 = reinterpret_cast<struct s25*>(rdi31 + 1);
            rsi37 = reinterpret_cast<struct s13*>(&rsi32->f4);
            __asm__("mulsd xmm2, xmm0");
            rdi36->f0 = rsi37->f0;
            rdi31 = &rdi36->f4;
            rsi32 = reinterpret_cast<struct s0*>(&rsi37->f4);
            ++rdx33;
        } while (rdx33 != 0x44c);
        *reinterpret_cast<int32_t*>(&rdx38) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx38) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rsi32 = reinterpret_cast<struct s0*>(r14_3 + rax20 * 0x960 + rdx38 * 2);
            *reinterpret_cast<int32_t*>(&rdi31) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi31) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                *rdi31 = rsi32->f0;
                rdi39 = reinterpret_cast<struct s25*>(rdi31 + 1);
                rsi40 = reinterpret_cast<struct s13*>(&rsi32->f4);
                __asm__("mulsd xmm2, xmm1");
                __asm__("mulsd xmm2, [r8+rdi*8]");
                __asm__("addsd xmm2, [rcx+rdi*8]");
                rdi39->f0 = rsi40->f0;
                rsi32 = reinterpret_cast<struct s0*>(&rsi40->f4);
                rdi31 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi39->f4) + 1);
            } while (!reinterpret_cast<int1_t>(rdi31 == 0x44c));
            ++rdx38;
        } while (rdx38 != 0x4b0);
        ++rax20;
    } while (rax20 != 0x3e8);
    if (ebp41 >= 43 && **r12_42 == fputc) {
        rax43 = g377;
        r12_44 = *rax43;
        rcx45 = r12_44;
        fun_393(0x381, 22, 1, rcx45);
        rsi46 = reinterpret_cast<int32_t*>(0x39a);
        *reinterpret_cast<int32_t*>(&rbp47) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp47) + 4) = reinterpret_cast<int32_t>(fputc);
        v48 = r12_44;
        rdi49 = r12_44;
        fun_3b1();
        do {
            r13_50 = rbp47 * 0x3e8;
            *reinterpret_cast<int32_t*>(&r12_51) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_51) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("ror eax, 0x2");
                if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r12_51 + r13_50) * 0xcccccccd) <= 0xccccccc) {
                    *reinterpret_cast<int32_t*>(&rdi49) = 10;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi49) + 4) = reinterpret_cast<int32_t>(fputc);
                    rsi46 = v48;
                    fun_3ec();
                }
                *rdi49 = *rsi46;
                rdi49 = v48;
                rsi46 = reinterpret_cast<int32_t*>(0x407);
                fun_40e();
                ++r12_51;
            } while (r12_51 != 0x44c);
            ++rbp47;
        } while (rbp47 != 0x3e8);
        fun_442(v48, 0x42d, 0x434, rcx45);
        *reinterpret_cast<int32_t*>(&rsi32) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi32) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx38) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx38) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx34 = v48;
        fun_45b(0x449, 22, 1, rcx34);
    }
    fun_34f(rbx52, rsi32, rdx38, rcx34);
    fun_357(r14_3, rsi32, rdx38, rcx34);
    fun_35f(r15_6, rsi32, rdx38, rcx34);
    goto v53;
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
    int32_t f1;
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

int32_t* fun_123(int32_t* rdi, int32_t* rsi) {
    int32_t* r15_3;
    int32_t* rax4;
    int64_t rax5;
    int64_t rcx6;
    int64_t rdx7;
    int64_t rsi8;
    uint64_t rdi9;
    struct s26* rdi10;
    struct s27* rsi11;
    int32_t* rbx12;
    int64_t rcx13;
    struct s28* rdx14;
    struct s29* rsi15;
    struct s30* rdi16;
    int32_t* r14_17;
    struct s28* rsi18;
    int64_t rax19;
    int64_t rdx20;
    uint32_t edi21;
    int64_t rsi22;
    uint64_t rsi23;
    struct s31* rdi24;
    struct s32* rsi25;
    struct s33* rdi26;
    struct s34* rsi27;
    struct s35* rdi28;
    struct s36* rsi29;
    int32_t* rdi30;
    struct s0* rsi31;
    int64_t rdx32;
    int32_t* rcx33;
    int32_t* rbx34;
    struct s37* rdi35;
    struct s13* rsi36;
    int64_t rdx37;
    int32_t* r14_38;
    struct s37* rdi39;
    struct s13* rsi40;
    int32_t ebp41;
    signed char** r12_42;
    int32_t** rax43;
    int32_t* r12_44;
    int32_t* rcx45;
    int32_t* rsi46;
    int64_t rbp47;
    int32_t* v48;
    int32_t* rdi49;
    int64_t r13_50;
    int64_t r12_51;
    int32_t* rbx52;
    int32_t* r14_53;
    int64_t v54;

    r15_3 = rax4;
    *reinterpret_cast<int32_t*>(&rax5) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax5) + 4) = reinterpret_cast<int32_t>(fputc);
    *rdi = *rsi;
    *reinterpret_cast<int32_t*>(&rcx6) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx6) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        *reinterpret_cast<int32_t*>(&rdx7) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx7) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            *reinterpret_cast<int32_t*>(&rsi8) = *reinterpret_cast<int32_t*>(&rdx7) * *reinterpret_cast<int32_t*>(&rcx6) + 1;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi8) + 4) = reinterpret_cast<int32_t>(fputc);
            rdi9 = reinterpret_cast<uint64_t>(rsi8 * 0x10624dd3) >> 38;
            *reinterpret_cast<int32_t*>(&rdi10) = *reinterpret_cast<int32_t*>(&rdi9) * 0x3e8;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi10) + 4) = reinterpret_cast<int32_t>(fputc);
            __asm__("xorps xmm1, xmm1");
            __asm__("cvtsi2sd xmm1, esi");
            __asm__("divsd xmm1, xmm0");
            rsi11 = reinterpret_cast<struct s27*>(rbx12 + rcx6 * 0x898);
            rdi10->f0 = rsi11->f0;
            ++rdx7;
        } while (rdx7 != 0x44c);
        ++rcx6;
    } while (rcx6 != 0x3e8);
    *reinterpret_cast<int32_t*>(&rcx13) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx13) + 4) = reinterpret_cast<int32_t>(fputc);
    rdi10->f4 = rsi11->f4;
    do {
        *reinterpret_cast<int32_t*>(&rdx14) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx14) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rsi15 = reinterpret_cast<struct s29*>(reinterpret_cast<int64_t>(rdx14) + 1);
            __asm__("xorps xmm1, xmm1");
            __asm__("cvtsi2sd xmm1, edi");
            __asm__("divsd xmm1, xmm0");
            rdi16 = reinterpret_cast<struct s30*>(r14_17 + rax5 * 0x960);
            rdi16->f0 = rsi15->f0;
            rsi18 = reinterpret_cast<struct s28*>(&rsi15->f4);
            rdx14 = rsi18;
        } while (!reinterpret_cast<int1_t>(rsi18 == 0x4b0));
        ++rax5;
    } while (rax5 != 0x3e8);
    *reinterpret_cast<int32_t*>(&rax19) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax19) + 4) = reinterpret_cast<int32_t>(fputc);
    rdi16->f4 = rsi18->f0;
    do {
        *reinterpret_cast<int32_t*>(&rdx20) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx20) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            edi21 = reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&rcx13) * static_cast<int32_t>(rdx20 + 2));
            *reinterpret_cast<uint32_t*>(&rsi22) = edi21 >> 2;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi22) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi23 = reinterpret_cast<uint64_t>(rsi22 * 0x1dca01dd) >> 37;
            *reinterpret_cast<uint32_t*>(&rdi24) = edi21 - *reinterpret_cast<int32_t*>(&rsi23) * 0x44c;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi24) + 4) = reinterpret_cast<int32_t>(fputc);
            __asm__("xorps xmm1, xmm1");
            __asm__("cvtsi2sd xmm1, edi");
            __asm__("divsd xmm1, xmm0");
            rsi25 = reinterpret_cast<struct s32*>(r15_3 + rcx13 * 0x898);
            rdi24->f0 = rsi25->f0;
            rdi26 = reinterpret_cast<struct s33*>(&rdi24->f4);
            rsi27 = reinterpret_cast<struct s34*>(&rsi25->f4);
            ++rdx20;
        } while (rdx20 != 0x44c);
        ++rcx13;
    } while (rcx13 != 0x4b0);
    rdi26->f0 = rsi27->f0;
    rdi28 = reinterpret_cast<struct s35*>(&rdi26->f4);
    rsi29 = reinterpret_cast<struct s36*>(&rsi27->f4);
    rdi28->f0 = rsi29->f0;
    rdi30 = &rdi28->f4;
    rsi31 = reinterpret_cast<struct s0*>(&rsi29->f4);
    do {
        *reinterpret_cast<int32_t*>(&rdx32) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx32) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rcx33 = rbx34 + rax19 * 0x898;
            *rdi30 = rsi31->f0;
            rdi35 = reinterpret_cast<struct s37*>(rdi30 + 1);
            rsi36 = reinterpret_cast<struct s13*>(&rsi31->f4);
            __asm__("mulsd xmm2, xmm0");
            rdi35->f0 = rsi36->f0;
            rdi30 = &rdi35->f4;
            rsi31 = reinterpret_cast<struct s0*>(&rsi36->f4);
            ++rdx32;
        } while (rdx32 != 0x44c);
        *reinterpret_cast<int32_t*>(&rdx37) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx37) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rsi31 = reinterpret_cast<struct s0*>(r14_38 + rax19 * 0x960 + rdx37 * 2);
            *reinterpret_cast<int32_t*>(&rdi30) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi30) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                *rdi30 = rsi31->f0;
                rdi39 = reinterpret_cast<struct s37*>(rdi30 + 1);
                rsi40 = reinterpret_cast<struct s13*>(&rsi31->f4);
                __asm__("mulsd xmm2, xmm1");
                __asm__("mulsd xmm2, [r8+rdi*8]");
                __asm__("addsd xmm2, [rcx+rdi*8]");
                rdi39->f0 = rsi40->f0;
                rsi31 = reinterpret_cast<struct s0*>(&rsi40->f4);
                rdi30 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi39->f4) + 1);
            } while (!reinterpret_cast<int1_t>(rdi30 == 0x44c));
            ++rdx37;
        } while (rdx37 != 0x4b0);
        ++rax19;
    } while (rax19 != 0x3e8);
    if (ebp41 >= 43 && **r12_42 == fputc) {
        rax43 = g377;
        r12_44 = *rax43;
        rcx45 = r12_44;
        fun_393(0x381, 22, 1, rcx45);
        rsi46 = reinterpret_cast<int32_t*>(0x39a);
        *reinterpret_cast<int32_t*>(&rbp47) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp47) + 4) = reinterpret_cast<int32_t>(fputc);
        v48 = r12_44;
        rdi49 = r12_44;
        fun_3b1();
        do {
            r13_50 = rbp47 * 0x3e8;
            *reinterpret_cast<int32_t*>(&r12_51) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_51) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("ror eax, 0x2");
                if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r12_51 + r13_50) * 0xcccccccd) <= 0xccccccc) {
                    *reinterpret_cast<int32_t*>(&rdi49) = 10;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi49) + 4) = reinterpret_cast<int32_t>(fputc);
                    rsi46 = v48;
                    fun_3ec();
                }
                *rdi49 = *rsi46;
                rdi49 = v48;
                rsi46 = reinterpret_cast<int32_t*>(0x407);
                fun_40e();
                ++r12_51;
            } while (r12_51 != 0x44c);
            ++rbp47;
        } while (rbp47 != 0x3e8);
        fun_442(v48, 0x42d, 0x434, rcx45);
        *reinterpret_cast<int32_t*>(&rsi31) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi31) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx37) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx37) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx33 = v48;
        fun_45b(0x449, 22, 1, rcx33);
    }
    fun_34f(rbx52, rsi31, rdx37, rcx33);
    fun_357(r14_53, rsi31, rdx37, rcx33);
    fun_35f(r15_3, rsi31, rdx37, rcx33);
    goto v54;
}

void fputc() {
}

void fun_a8(int32_t* rdi, int32_t* rsi) {
    signed char* rax3;
    signed char* rax4;
    signed char al5;
    int64_t r15_6;

    *rax3 = reinterpret_cast<signed char>(*rax4 + al5);
    __asm__("mulsd xmm2, [r12+r15*8]");
    __asm__("addsd xmm2, [r13+r15*8+0x0]");
    *rdi = *rsi;
    if (!reinterpret_cast<int1_t>(r15_6 + 1 == rdi + 1)) {
    }
}

void fun_cb() {
    int64_t v1;

    goto v1;
}

void submain(int32_t edi, int64_t rsi) {
    fun_ff(0x10c8e0, 8);
}

