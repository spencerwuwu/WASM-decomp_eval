
struct s0 {
    signed char[1] pad1;
    int32_t f1;
};

void fun_36c(int64_t* rdi, struct s0* rsi, int32_t* rdx, int32_t* rcx);

void fun_374(int64_t* rdi, struct s0* rsi, int32_t* rdx, int32_t* rcx);

void fun_364(int32_t* rdi, struct s0* rsi, int32_t* rdx, int32_t* rcx) {
    int64_t* r14_5;
    int64_t* r15_6;
    int64_t v7;

    fun_36c(r14_5, rsi, rdx, rcx);
    fun_374(r15_6, rsi, rdx, rcx);
    goto v7;
}

void fun_41e();

void fputc(int32_t edi, int32_t esi);

void fun_452(int32_t* rdi, int64_t rsi, int64_t rdx, int32_t* rcx);

void fun_46b(int64_t rdi, struct s0* rsi, int32_t* rdx, int32_t* rcx);

void fun_3fc() {
    int32_t* rdi1;
    int32_t* rsi2;
    int64_t r12_3;
    int64_t rbp4;
    int64_t r13_5;
    int32_t* rcx6;
    int32_t* rbx7;
    int64_t* r14_8;
    int64_t* r15_9;
    int64_t v10;

    while (1) {
        *rdi1 = *rsi2;
        rdi1 = reinterpret_cast<int32_t*>(__return_address());
        rsi2 = reinterpret_cast<int32_t*>(0x417);
        fun_41e();
        ++r12_3;
        if (r12_3 == 0x4b0) {
            ++rbp4;
            if (rbp4 == 0x4b0) 
                break;
            r13_5 = rbp4 * 0x4b0;
            *reinterpret_cast<int32_t*>(&r12_3) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_3) + 4) = reinterpret_cast<int32_t>(fputc);
        }
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r12_3 + r13_5) * 0xcccccccd) > 0xccccccc) 
            continue;
        *reinterpret_cast<int32_t*>(&rdi1) = 10;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi1) + 4) = reinterpret_cast<int32_t>(fputc);
        rsi2 = reinterpret_cast<int32_t*>(__return_address());
        fun_3fc();
    }
    fun_452(__return_address(), 0x43d, 0x444, rcx6);
    fun_46b(0x459, 22, 1, __return_address());
    fun_364(rbx7, 22, 1, __return_address());
    fun_36c(r14_8, 22, 1, __return_address());
    fun_374(r15_9, 22, 1, __return_address());
    goto v10;
}

void fun_41e() {
    int64_t r12_1;
    int64_t rbp2;
    int64_t r13_3;
    int32_t* rdi4;
    int32_t* rsi5;
    int32_t* rcx6;
    int32_t* rbx7;
    int64_t* r14_8;
    int64_t* r15_9;
    int64_t v10;

    while (1) {
        ++r12_1;
        if (r12_1 == 0x4b0) {
            ++rbp2;
            if (rbp2 == 0x4b0) 
                break;
            r13_3 = rbp2 * 0x4b0;
            *reinterpret_cast<int32_t*>(&r12_1) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_1) + 4) = reinterpret_cast<int32_t>(fputc);
        }
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r12_1 + r13_3) * 0xcccccccd) <= 0xccccccc) {
            *reinterpret_cast<int32_t*>(&rdi4) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi4) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi5 = reinterpret_cast<int32_t*>(__return_address());
            fun_3fc();
        }
        *rdi4 = *rsi5;
        rdi4 = reinterpret_cast<int32_t*>(__return_address());
        rsi5 = reinterpret_cast<int32_t*>(0x417);
        fun_41e();
    }
    fun_452(__return_address(), 0x43d, 0x444, rcx6);
    fun_46b(0x459, 22, 1, __return_address());
    fun_364(rbx7, 22, 1, __return_address());
    fun_36c(r14_8, 22, 1, __return_address());
    fun_374(r15_9, 22, 1, __return_address());
    goto v10;
}

void fun_452(int32_t* rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int32_t* r12_5;
    int32_t* rbx6;
    int64_t* r14_7;
    int64_t* r15_8;
    int64_t v9;

    fun_46b(0x459, 22, 1, r12_5);
    fun_364(rbx6, 22, 1, r12_5);
    fun_36c(r14_7, 22, 1, r12_5);
    fun_374(r15_8, 22, 1, r12_5);
    goto v9;
}

void fun_3c6();

void fun_3a8(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int32_t* rsi5;
    int64_t rbp6;
    int32_t* v7;
    int32_t* r12_8;
    int32_t* rdi9;
    int32_t* r12_10;
    int64_t r13_11;
    int64_t r12_12;
    int32_t* rbx13;
    int64_t* r14_14;
    int64_t* r15_15;
    int64_t v16;

    rsi5 = reinterpret_cast<int32_t*>(0x3af);
    *reinterpret_cast<int32_t*>(&rbp6) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp6) + 4) = reinterpret_cast<int32_t>(fputc);
    v7 = r12_8;
    rdi9 = r12_10;
    fun_3c6();
    do {
        r13_11 = rbp6 * 0x4b0;
        *reinterpret_cast<int32_t*>(&r12_12) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_12) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r12_12 + r13_11) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi9) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi9) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi5 = v7;
                fun_3fc();
            }
            *rdi9 = *rsi5;
            rdi9 = v7;
            rsi5 = reinterpret_cast<int32_t*>(0x417);
            fun_41e();
            ++r12_12;
        } while (r12_12 != 0x4b0);
        ++rbp6;
    } while (rbp6 != 0x4b0);
    fun_452(v7, 0x43d, 0x444, rcx);
    fun_46b(0x459, 22, 1, v7);
    fun_364(rbx13, 22, 1, v7);
    fun_36c(r14_14, 22, 1, v7);
    fun_374(r15_15, 22, 1, v7);
    goto v16;
}

void fun_36c(int64_t* rdi, struct s0* rsi, int32_t* rdx, int32_t* rcx) {
    int64_t* r15_5;
    int64_t v6;

    fun_374(r15_5, rsi, rdx, rcx);
    goto v6;
}

void fun_46b(int64_t rdi, struct s0* rsi, int32_t* rdx, int32_t* rcx) {
    int32_t* rbx5;
    int64_t* r14_6;
    int64_t* r15_7;
    int64_t v8;

    fun_364(rbx5, rsi, rdx, rcx);
    fun_36c(r14_6, rsi, rdx, rcx);
    fun_374(r15_7, rsi, rdx, rcx);
    goto v8;
}

int64_t* fun_1a1(int64_t rdi, int64_t rsi);

struct s1 {
    int32_t f0;
    int32_t f4;
};

int64_t* fun_1b3(struct s1* rdi, int32_t* rsi);

int32_t g4b0;

/* .LCPI1_0 */
int32_t LCPI1_0 = 0x647eff85;

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

int32_t** g38c = reinterpret_cast<int32_t**>(0x3d8d48208b4c);

void fun_18f(int64_t rdi, int64_t rsi) {
    int32_t* rbx3;
    int32_t* rax4;
    int64_t* rax5;
    int64_t* r14_6;
    int64_t* rax7;
    int64_t* r15_8;
    int64_t rax9;
    struct s2* rdi10;
    int64_t rcx11;
    int64_t rdx12;
    struct s3* rsi13;
    int64_t rcx14;
    struct s4* rdi15;
    int64_t rdx16;
    struct s5* rsi17;
    int32_t* rax18;
    int64_t rdx19;
    struct s6* rsi20;
    struct s7* rdi21;
    struct s8* rsi22;
    int32_t* rcx23;
    struct s9* rsi24;
    struct s10* rdi25;
    struct s11* rdi26;
    int32_t* rsi27;
    struct s12* rdi28;
    int32_t* rsi29;
    struct s0* rsi30;
    int32_t* rdx31;
    int1_t cf32;
    int32_t ebp33;
    signed char** r12_34;
    int32_t** rax35;
    int32_t* r12_36;
    int32_t* rcx37;
    int32_t* rsi38;
    int64_t rbp39;
    int32_t* v40;
    int32_t* rdi41;
    int64_t r13_42;
    int64_t r12_43;
    int64_t v44;

    rbx3 = rax4;
    rax5 = fun_1a1(0x15f900, 8);
    r14_6 = rax5;
    rax7 = fun_1b3(0x4b0, 8);
    r15_8 = rax7;
    *reinterpret_cast<int32_t*>(&rax9) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax9) + 4) = reinterpret_cast<int32_t>(fputc);
    g4b0 = LCPI1_0;
    rdi10 = reinterpret_cast<struct s2*>(0x4b4);
    *reinterpret_cast<int32_t*>(&rcx11) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx11) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        __asm__("xorps xmm1, xmm1");
        __asm__("cvtsi2sd xmm1, ecx");
        *reinterpret_cast<int32_t*>(&rdx12) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx12) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("xorps xmm2, xmm2");
            __asm__("cvtsi2sd xmm2, edx");
            __asm__("mulsd xmm2, xmm1");
            __asm__("divsd xmm2, xmm0");
            rsi13 = reinterpret_cast<struct s3*>(rbx3 + rcx11 * 0x960);
            rdi10->f0 = rsi13->f0;
            rdi10 = reinterpret_cast<struct s2*>(&rdi10->f4);
            ++rdx12;
        } while (rdx12 != 0x4b0);
        ++rcx11;
    } while (rcx11 != 0x578);
    *reinterpret_cast<int32_t*>(&rcx14) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx14) + 4) = reinterpret_cast<int32_t>(fputc);
    rdi10->f0 = rsi13->f4;
    rdi15 = reinterpret_cast<struct s4*>(&rdi10->f4);
    do {
        r15_8[rax9] = reinterpret_cast<int64_t>(fputc);
        __asm__("xorpd xmm1, xmm1");
        *reinterpret_cast<int32_t*>(&rdx16) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx16) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rsi17 = reinterpret_cast<struct s5*>(rbx3 + rdx16 * 0x960);
            __asm__("addsd xmm1, [rsi+rax*8]");
            rdi15->f0 = rsi17->f0;
            rdi15 = reinterpret_cast<struct s4*>(&rdi15->f4);
            ++rdx16;
        } while (rdx16 != 0x578);
        __asm__("divsd xmm1, xmm0");
        rdi15->f0 = rsi17->f4;
        rdi15 = reinterpret_cast<struct s4*>(&rdi15->f4);
        ++rax9;
    } while (rax9 != 0x4b0);
    *reinterpret_cast<int32_t*>(&rax18) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax18) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        *reinterpret_cast<int32_t*>(&rdx19) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx19) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rsi20 = reinterpret_cast<struct s6*>(rbx3 + rcx14 * 0x960);
            rdi15->f0 = rsi20->f0;
            rdi21 = reinterpret_cast<struct s7*>(&rdi15->f4);
            rsi22 = reinterpret_cast<struct s8*>(&rsi20->f4);
            __asm__("subsd xmm0, [r15+rdx*8]");
            rdi21->f0 = rsi22->f0;
            rdi15 = reinterpret_cast<struct s4*>(&rdi21->f4);
            ++rdx19;
        } while (rdx19 != 0x4b0);
        ++rcx14;
    } while (rcx14 != 0x578);
    rdi15->f0 = rsi22->f4;
    do {
        rcx23 = rax18;
        do {
            (r14_6 + reinterpret_cast<uint64_t>(rax18) * 0x4b0)[static_cast<uint64_t>(rcx23)] = reinterpret_cast<int64_t>(fputc);
            __asm__("xorpd xmm1, xmm1");
            *reinterpret_cast<int32_t*>(&rsi24) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi24) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                rdi25 = reinterpret_cast<struct s10*>(rbx3 + reinterpret_cast<int64_t>(rsi24) * 0x960);
                rdi25->f0 = rsi24->f0;
                rdi26 = reinterpret_cast<struct s11*>(&rdi25->f4);
                rsi27 = &rsi24->f4;
                __asm__("mulsd xmm2, [rdi+rcx*8]");
                __asm__("addsd xmm1, xmm2");
                rdi26->f0 = *rsi27;
                rdi28 = reinterpret_cast<struct s12*>(&rdi26->f4);
                rsi24 = reinterpret_cast<struct s9*>(reinterpret_cast<int64_t>(rsi27 + 1) + 1);
            } while (!reinterpret_cast<int1_t>(rsi24 == 0x578));
            __asm__("divsd xmm1, xmm0");
            rdi28->f0 = rsi24->f0;
            rsi29 = &rsi24->f4;
            rdi28->f4 = *rsi29;
            rsi30 = reinterpret_cast<struct s0*>(rsi29 + 1);
            rdx31 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rcx23) + 1);
            cf32 = reinterpret_cast<uint64_t>(rcx23) < 0x4af;
            rcx23 = rdx31;
        } while (cf32);
        rax18 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rax18) + 1);
    } while (!reinterpret_cast<int1_t>(rax18 == 0x4b0));
    if (ebp33 >= 43 && **r12_34 == fputc) {
        rax35 = g38c;
        r12_36 = *rax35;
        rcx37 = r12_36;
        fun_3a8(0x396, 22, 1, rcx37);
        rsi38 = reinterpret_cast<int32_t*>(0x3af);
        *reinterpret_cast<int32_t*>(&rbp39) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp39) + 4) = reinterpret_cast<int32_t>(fputc);
        v40 = r12_36;
        rdi41 = r12_36;
        fun_3c6();
        do {
            r13_42 = rbp39 * 0x4b0;
            *reinterpret_cast<int32_t*>(&r12_43) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_43) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("ror eax, 0x2");
                if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r12_43 + r13_42) * 0xcccccccd) <= 0xccccccc) {
                    *reinterpret_cast<int32_t*>(&rdi41) = 10;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi41) + 4) = reinterpret_cast<int32_t>(fputc);
                    rsi38 = v40;
                    fun_3fc();
                }
                *rdi41 = *rsi38;
                rdi41 = v40;
                rsi38 = reinterpret_cast<int32_t*>(0x417);
                fun_41e();
                ++r12_43;
            } while (r12_43 != 0x4b0);
            ++rbp39;
        } while (rbp39 != 0x4b0);
        fun_452(v40, 0x43d, 0x444, rcx37);
        *reinterpret_cast<int32_t*>(&rsi30) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi30) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx31) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx31) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx23 = v40;
        fun_46b(0x459, 22, 1, rcx23);
    }
    fun_364(rbx3, rsi30, rdx31, rcx23);
    fun_36c(r14_6, rsi30, rdx31, rcx23);
    fun_374(r15_8, rsi30, rdx31, rcx23);
    goto v44;
}

void fun_3c6() {
    int32_t* v1;
    int64_t r13_2;
    int64_t rbp3;
    int64_t r12_4;
    int32_t* rdi5;
    int32_t* rsi6;
    int32_t* rcx7;
    int32_t* rbx8;
    int64_t* r14_9;
    int64_t* r15_10;
    int64_t v11;

    v1 = reinterpret_cast<int32_t*>(__return_address());
    do {
        r13_2 = rbp3 * 0x4b0;
        *reinterpret_cast<int32_t*>(&r12_4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_4) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r12_4 + r13_2) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi5) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi5) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi6 = v1;
                fun_3fc();
            }
            *rdi5 = *rsi6;
            rdi5 = v1;
            rsi6 = reinterpret_cast<int32_t*>(0x417);
            fun_41e();
            ++r12_4;
        } while (r12_4 != 0x4b0);
        ++rbp3;
    } while (rbp3 != 0x4b0);
    fun_452(v1, 0x43d, 0x444, rcx7);
    fun_46b(0x459, 22, 1, v1);
    fun_364(rbx8, 22, 1, v1);
    fun_36c(r14_9, 22, 1, v1);
    fun_374(r15_10, 22, 1, v1);
    goto v11;
}

void fun_374(int64_t* rdi, struct s0* rsi, int32_t* rdx, int32_t* rcx) {
    int64_t v5;

    goto v5;
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

int64_t* fun_1a1(int64_t rdi, int64_t rsi) {
    int64_t* r14_3;
    int64_t* rax4;
    int64_t* rax5;
    int64_t* r15_6;
    int64_t rax7;
    struct s2* rdi8;
    int64_t rcx9;
    int64_t rdx10;
    struct s13* rsi11;
    int32_t* rbx12;
    int64_t rcx13;
    struct s4* rdi14;
    int64_t rdx15;
    struct s14* rsi16;
    int32_t* rbx17;
    int32_t* rax18;
    int64_t rdx19;
    struct s15* rsi20;
    int32_t* rbx21;
    struct s7* rdi22;
    struct s16* rsi23;
    int32_t* rcx24;
    struct s9* rsi25;
    struct s17* rdi26;
    int32_t* rbx27;
    struct s18* rdi28;
    int32_t* rsi29;
    struct s19* rdi30;
    int32_t* rsi31;
    struct s0* rsi32;
    int32_t* rdx33;
    int1_t cf34;
    int32_t ebp35;
    signed char** r12_36;
    int32_t** rax37;
    int32_t* r12_38;
    int32_t* rcx39;
    int32_t* rsi40;
    int64_t rbp41;
    int32_t* v42;
    int32_t* rdi43;
    int64_t r13_44;
    int64_t r12_45;
    int32_t* rbx46;
    int64_t v47;

    r14_3 = rax4;
    rax5 = fun_1b3(0x4b0, 8);
    r15_6 = rax5;
    *reinterpret_cast<int32_t*>(&rax7) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax7) + 4) = reinterpret_cast<int32_t>(fputc);
    g4b0 = LCPI1_0;
    rdi8 = reinterpret_cast<struct s2*>(0x4b4);
    *reinterpret_cast<int32_t*>(&rcx9) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx9) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        __asm__("xorps xmm1, xmm1");
        __asm__("cvtsi2sd xmm1, ecx");
        *reinterpret_cast<int32_t*>(&rdx10) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx10) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("xorps xmm2, xmm2");
            __asm__("cvtsi2sd xmm2, edx");
            __asm__("mulsd xmm2, xmm1");
            __asm__("divsd xmm2, xmm0");
            rsi11 = reinterpret_cast<struct s13*>(rbx12 + rcx9 * 0x960);
            rdi8->f0 = rsi11->f0;
            rdi8 = reinterpret_cast<struct s2*>(&rdi8->f4);
            ++rdx10;
        } while (rdx10 != 0x4b0);
        ++rcx9;
    } while (rcx9 != 0x578);
    *reinterpret_cast<int32_t*>(&rcx13) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx13) + 4) = reinterpret_cast<int32_t>(fputc);
    rdi8->f0 = rsi11->f4;
    rdi14 = reinterpret_cast<struct s4*>(&rdi8->f4);
    do {
        r15_6[rax7] = reinterpret_cast<int64_t>(fputc);
        __asm__("xorpd xmm1, xmm1");
        *reinterpret_cast<int32_t*>(&rdx15) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx15) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rsi16 = reinterpret_cast<struct s14*>(rbx17 + rdx15 * 0x960);
            __asm__("addsd xmm1, [rsi+rax*8]");
            rdi14->f0 = rsi16->f0;
            rdi14 = reinterpret_cast<struct s4*>(&rdi14->f4);
            ++rdx15;
        } while (rdx15 != 0x578);
        __asm__("divsd xmm1, xmm0");
        rdi14->f0 = rsi16->f4;
        rdi14 = reinterpret_cast<struct s4*>(&rdi14->f4);
        ++rax7;
    } while (rax7 != 0x4b0);
    *reinterpret_cast<int32_t*>(&rax18) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax18) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        *reinterpret_cast<int32_t*>(&rdx19) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx19) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rsi20 = reinterpret_cast<struct s15*>(rbx21 + rcx13 * 0x960);
            rdi14->f0 = rsi20->f0;
            rdi22 = reinterpret_cast<struct s7*>(&rdi14->f4);
            rsi23 = reinterpret_cast<struct s16*>(&rsi20->f4);
            __asm__("subsd xmm0, [r15+rdx*8]");
            rdi22->f0 = rsi23->f0;
            rdi14 = reinterpret_cast<struct s4*>(&rdi22->f4);
            ++rdx19;
        } while (rdx19 != 0x4b0);
        ++rcx13;
    } while (rcx13 != 0x578);
    rdi14->f0 = rsi23->f4;
    do {
        rcx24 = rax18;
        do {
            (r14_3 + reinterpret_cast<uint64_t>(rax18) * 0x4b0)[static_cast<uint64_t>(rcx24)] = reinterpret_cast<int64_t>(fputc);
            __asm__("xorpd xmm1, xmm1");
            *reinterpret_cast<int32_t*>(&rsi25) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi25) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                rdi26 = reinterpret_cast<struct s17*>(rbx27 + reinterpret_cast<int64_t>(rsi25) * 0x960);
                rdi26->f0 = rsi25->f0;
                rdi28 = reinterpret_cast<struct s18*>(&rdi26->f4);
                rsi29 = &rsi25->f4;
                __asm__("mulsd xmm2, [rdi+rcx*8]");
                __asm__("addsd xmm1, xmm2");
                rdi28->f0 = *rsi29;
                rdi30 = reinterpret_cast<struct s19*>(&rdi28->f4);
                rsi25 = reinterpret_cast<struct s9*>(reinterpret_cast<int64_t>(rsi29 + 1) + 1);
            } while (!reinterpret_cast<int1_t>(rsi25 == 0x578));
            __asm__("divsd xmm1, xmm0");
            rdi30->f0 = rsi25->f0;
            rsi31 = &rsi25->f4;
            rdi30->f4 = *rsi31;
            rsi32 = reinterpret_cast<struct s0*>(rsi31 + 1);
            rdx33 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rcx24) + 1);
            cf34 = reinterpret_cast<uint64_t>(rcx24) < 0x4af;
            rcx24 = rdx33;
        } while (cf34);
        rax18 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rax18) + 1);
    } while (!reinterpret_cast<int1_t>(rax18 == 0x4b0));
    if (ebp35 >= 43 && **r12_36 == fputc) {
        rax37 = g38c;
        r12_38 = *rax37;
        rcx39 = r12_38;
        fun_3a8(0x396, 22, 1, rcx39);
        rsi40 = reinterpret_cast<int32_t*>(0x3af);
        *reinterpret_cast<int32_t*>(&rbp41) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp41) + 4) = reinterpret_cast<int32_t>(fputc);
        v42 = r12_38;
        rdi43 = r12_38;
        fun_3c6();
        do {
            r13_44 = rbp41 * 0x4b0;
            *reinterpret_cast<int32_t*>(&r12_45) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_45) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("ror eax, 0x2");
                if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r12_45 + r13_44) * 0xcccccccd) <= 0xccccccc) {
                    *reinterpret_cast<int32_t*>(&rdi43) = 10;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi43) + 4) = reinterpret_cast<int32_t>(fputc);
                    rsi40 = v42;
                    fun_3fc();
                }
                *rdi43 = *rsi40;
                rdi43 = v42;
                rsi40 = reinterpret_cast<int32_t*>(0x417);
                fun_41e();
                ++r12_45;
            } while (r12_45 != 0x4b0);
            ++rbp41;
        } while (rbp41 != 0x4b0);
        fun_452(v42, 0x43d, 0x444, rcx39);
        *reinterpret_cast<int32_t*>(&rsi32) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi32) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx33) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx33) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx24 = v42;
        fun_46b(0x459, 22, 1, rcx24);
    }
    fun_364(rbx46, rsi32, rdx33, rcx24);
    fun_36c(r14_3, rsi32, rdx33, rcx24);
    fun_374(r15_6, rsi32, rdx33, rcx24);
    goto v47;
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

int64_t* fun_1b3(struct s1* rdi, int32_t* rsi) {
    int64_t* r15_3;
    int64_t* rax4;
    int64_t rax5;
    struct s2* rdi6;
    int64_t rcx7;
    int64_t rdx8;
    struct s20* rsi9;
    int32_t* rbx10;
    int64_t rcx11;
    struct s4* rdi12;
    int64_t rdx13;
    struct s21* rsi14;
    int32_t* rbx15;
    int32_t* rax16;
    int64_t rdx17;
    struct s22* rsi18;
    int32_t* rbx19;
    struct s7* rdi20;
    struct s23* rsi21;
    int32_t* rcx22;
    int64_t* r14_23;
    struct s9* rsi24;
    struct s24* rdi25;
    int32_t* rbx26;
    struct s25* rdi27;
    int32_t* rsi28;
    struct s26* rdi29;
    int32_t* rsi30;
    struct s0* rsi31;
    int32_t* rdx32;
    int1_t cf33;
    int32_t ebp34;
    signed char** r12_35;
    int32_t** rax36;
    int32_t* r12_37;
    int32_t* rcx38;
    int32_t* rsi39;
    int64_t rbp40;
    int32_t* v41;
    int32_t* rdi42;
    int64_t r13_43;
    int64_t r12_44;
    int32_t* rbx45;
    int64_t* r14_46;
    int64_t v47;

    r15_3 = rax4;
    *reinterpret_cast<int32_t*>(&rax5) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax5) + 4) = reinterpret_cast<int32_t>(fputc);
    rdi->f0 = *rsi;
    rdi6 = reinterpret_cast<struct s2*>(&rdi->f4);
    *reinterpret_cast<int32_t*>(&rcx7) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx7) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        __asm__("xorps xmm1, xmm1");
        __asm__("cvtsi2sd xmm1, ecx");
        *reinterpret_cast<int32_t*>(&rdx8) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx8) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("xorps xmm2, xmm2");
            __asm__("cvtsi2sd xmm2, edx");
            __asm__("mulsd xmm2, xmm1");
            __asm__("divsd xmm2, xmm0");
            rsi9 = reinterpret_cast<struct s20*>(rbx10 + rcx7 * 0x960);
            rdi6->f0 = rsi9->f0;
            rdi6 = reinterpret_cast<struct s2*>(&rdi6->f4);
            ++rdx8;
        } while (rdx8 != 0x4b0);
        ++rcx7;
    } while (rcx7 != 0x578);
    *reinterpret_cast<int32_t*>(&rcx11) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx11) + 4) = reinterpret_cast<int32_t>(fputc);
    rdi6->f0 = rsi9->f4;
    rdi12 = reinterpret_cast<struct s4*>(&rdi6->f4);
    do {
        r15_3[rax5] = reinterpret_cast<int64_t>(fputc);
        __asm__("xorpd xmm1, xmm1");
        *reinterpret_cast<int32_t*>(&rdx13) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx13) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rsi14 = reinterpret_cast<struct s21*>(rbx15 + rdx13 * 0x960);
            __asm__("addsd xmm1, [rsi+rax*8]");
            rdi12->f0 = rsi14->f0;
            rdi12 = reinterpret_cast<struct s4*>(&rdi12->f4);
            ++rdx13;
        } while (rdx13 != 0x578);
        __asm__("divsd xmm1, xmm0");
        rdi12->f0 = rsi14->f4;
        rdi12 = reinterpret_cast<struct s4*>(&rdi12->f4);
        ++rax5;
    } while (rax5 != 0x4b0);
    *reinterpret_cast<int32_t*>(&rax16) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax16) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        *reinterpret_cast<int32_t*>(&rdx17) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx17) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rsi18 = reinterpret_cast<struct s22*>(rbx19 + rcx11 * 0x960);
            rdi12->f0 = rsi18->f0;
            rdi20 = reinterpret_cast<struct s7*>(&rdi12->f4);
            rsi21 = reinterpret_cast<struct s23*>(&rsi18->f4);
            __asm__("subsd xmm0, [r15+rdx*8]");
            rdi20->f0 = rsi21->f0;
            rdi12 = reinterpret_cast<struct s4*>(&rdi20->f4);
            ++rdx17;
        } while (rdx17 != 0x4b0);
        ++rcx11;
    } while (rcx11 != 0x578);
    rdi12->f0 = rsi21->f4;
    do {
        rcx22 = rax16;
        do {
            (r14_23 + reinterpret_cast<uint64_t>(rax16) * 0x4b0)[static_cast<uint64_t>(rcx22)] = reinterpret_cast<int64_t>(fputc);
            __asm__("xorpd xmm1, xmm1");
            *reinterpret_cast<int32_t*>(&rsi24) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi24) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                rdi25 = reinterpret_cast<struct s24*>(rbx26 + reinterpret_cast<int64_t>(rsi24) * 0x960);
                rdi25->f0 = rsi24->f0;
                rdi27 = reinterpret_cast<struct s25*>(&rdi25->f4);
                rsi28 = &rsi24->f4;
                __asm__("mulsd xmm2, [rdi+rcx*8]");
                __asm__("addsd xmm1, xmm2");
                rdi27->f0 = *rsi28;
                rdi29 = reinterpret_cast<struct s26*>(&rdi27->f4);
                rsi24 = reinterpret_cast<struct s9*>(reinterpret_cast<int64_t>(rsi28 + 1) + 1);
            } while (!reinterpret_cast<int1_t>(rsi24 == 0x578));
            __asm__("divsd xmm1, xmm0");
            rdi29->f0 = rsi24->f0;
            rsi30 = &rsi24->f4;
            rdi29->f4 = *rsi30;
            rsi31 = reinterpret_cast<struct s0*>(rsi30 + 1);
            rdx32 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rcx22) + 1);
            cf33 = reinterpret_cast<uint64_t>(rcx22) < 0x4af;
            rcx22 = rdx32;
        } while (cf33);
        rax16 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rax16) + 1);
    } while (!reinterpret_cast<int1_t>(rax16 == 0x4b0));
    if (ebp34 >= 43 && **r12_35 == fputc) {
        rax36 = g38c;
        r12_37 = *rax36;
        rcx38 = r12_37;
        fun_3a8(0x396, 22, 1, rcx38);
        rsi39 = reinterpret_cast<int32_t*>(0x3af);
        *reinterpret_cast<int32_t*>(&rbp40) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp40) + 4) = reinterpret_cast<int32_t>(fputc);
        v41 = r12_37;
        rdi42 = r12_37;
        fun_3c6();
        do {
            r13_43 = rbp40 * 0x4b0;
            *reinterpret_cast<int32_t*>(&r12_44) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_44) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("ror eax, 0x2");
                if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r12_44 + r13_43) * 0xcccccccd) <= 0xccccccc) {
                    *reinterpret_cast<int32_t*>(&rdi42) = 10;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi42) + 4) = reinterpret_cast<int32_t>(fputc);
                    rsi39 = v41;
                    fun_3fc();
                }
                *rdi42 = *rsi39;
                rdi42 = v41;
                rsi39 = reinterpret_cast<int32_t*>(0x417);
                fun_41e();
                ++r12_44;
            } while (r12_44 != 0x4b0);
            ++rbp40;
        } while (rbp40 != 0x4b0);
        fun_452(v41, 0x43d, 0x444, rcx38);
        *reinterpret_cast<int32_t*>(&rsi31) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi31) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx32) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx32) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx22 = v41;
        fun_46b(0x459, 22, 1, rcx22);
    }
    fun_364(rbx45, rsi31, rdx32, rcx22);
    fun_36c(r14_46, rsi31, rdx32, rcx22);
    fun_374(r15_3, rsi31, rdx32, rcx22);
    goto v47;
}

void fputc(int32_t edi, int32_t esi) {
}

void fun_a8() {
    int64_t r11_1;
    int64_t rax2;

    __asm__("movups [rbx+rbx*8], xmm1");
    if (r11_1 + 1 != rax2) {
    }
}

void fun_b6(int32_t edi) {
    int32_t* rdi2;
    int32_t* r8_3;
    int32_t* r10_4;
    int64_t* rcx5;
    int32_t* rsi6;
    int64_t rbx7;
    int32_t* rdi8;
    int32_t* rsi9;
    int64_t r9_10;
    int32_t* rdi11;
    int32_t* rsi12;
    int32_t* rdi13;
    int32_t* rsi14;
    int32_t* rax15;
    int64_t v16;

    if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(edi < reinterpret_cast<int32_t>(fputc) == fputc)) | reinterpret_cast<uint1_t>(edi == fputc))) {
        __asm__("addsd xmm0, [rip+0x0]");
        rdi2 = reinterpret_cast<int32_t*>(static_cast<int64_t>(edi));
        *reinterpret_cast<int32_t*>(&r8_3) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_3) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            r10_4 = r8_3;
            do {
                (rcx5 + reinterpret_cast<int64_t>(r8_3) * 0x4b0)[static_cast<int64_t>(r10_4)] = reinterpret_cast<int64_t>(fputc);
                if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(&rsi6) < reinterpret_cast<int32_t>(fputc) == fputc)) | reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&rsi6) == fputc))) {
                    *rdi2 = *rsi6;
                    ++rdi2;
                    ++rsi6;
                    *reinterpret_cast<int32_t*>(&rbx7) = reinterpret_cast<int32_t>(fputc);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx7) + 4) = reinterpret_cast<int32_t>(fputc);
                    do {
                        *rdi2 = *rsi6;
                        rdi8 = rdi2 + 1;
                        rsi9 = rsi6 + 1;
                        __asm__("mulsd xmm2, [r14+r10*8]");
                        __asm__("addsd xmm1, xmm2");
                        *rdi8 = *rsi9;
                        rdi2 = rdi8 + 1;
                        rsi6 = rsi9 + 1;
                        ++rbx7;
                    } while (rbx7 != r9_10);
                }
                *rdi2 = *rsi6;
                rdi11 = rdi2 + 1;
                rsi12 = rsi6 + 1;
                __asm__("divsd xmm1, xmm0");
                *rdi11 = *rsi12;
                rdi13 = rdi11 + 1;
                rsi14 = rsi12 + 1;
                *rdi13 = *rsi14;
                rdi2 = rdi13 + 1;
                rsi6 = rsi14 + 1;
                r10_4 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(r10_4) + 1);
            } while (reinterpret_cast<int64_t>(r10_4) < reinterpret_cast<int64_t>(rdi2));
            r8_3 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(r8_3) + 1);
        } while (r8_3 != rax15);
    }
    goto v16;
}

void submain(int32_t edi, int64_t rsi) {
    fun_18f(0x19a280, 8);
}

