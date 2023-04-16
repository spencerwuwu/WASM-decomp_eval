
struct s0 {
    int32_t f0;
    int32_t f4;
};

void fun_744(int64_t* rdi, struct s0* rsi, int32_t* rdx, int32_t* rcx);

struct s1 {
    int64_t f0;
    signed char[9592] pad9600;
    int32_t f2580;
};

void fun_74c(struct s1* rdi, struct s0* rsi, int32_t* rdx, int32_t* rcx);

void fun_73c(int32_t* rdi, struct s0* rsi, int32_t* rdx, int32_t* rcx) {
    int64_t* r14_5;
    struct s1* r15_6;
    int64_t v7;

    fun_744(r14_5, rsi, rdx, rcx);
    fun_74c(r15_6, rsi, rdx, rcx);
    goto v7;
}

void fun_7ee();

void fputc(int32_t edi);

void fun_822(int32_t* rdi, int64_t rsi, int64_t rdx, int32_t* rcx);

void fun_83b(int64_t rdi, struct s0* rsi, int32_t* rdx, int32_t* rcx);

void fun_7cc() {
    int32_t* rdi1;
    int32_t* rsi2;
    int64_t r12_3;
    int64_t rbp4;
    int64_t r13_5;
    int32_t* rcx6;
    int32_t* rbx7;
    int64_t* r14_8;
    struct s1* r15_9;
    int64_t v10;

    while (1) {
        *rdi1 = *rsi2;
        rdi1 = reinterpret_cast<int32_t*>(__return_address());
        rsi2 = reinterpret_cast<int32_t*>(0x7e7);
        fun_7ee();
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
        fun_7cc();
    }
    fun_822(__return_address(), 0x80d, 0x814, rcx6);
    fun_83b(0x829, 22, 1, __return_address());
    fun_73c(rbx7, 22, 1, __return_address());
    fun_744(r14_8, 22, 1, __return_address());
    fun_74c(r15_9, 22, 1, __return_address());
    goto v10;
}

void fun_7ee() {
    int64_t r12_1;
    int64_t rbp2;
    int64_t r13_3;
    int32_t* rdi4;
    int32_t* rsi5;
    int32_t* rcx6;
    int32_t* rbx7;
    int64_t* r14_8;
    struct s1* r15_9;
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
            fun_7cc();
        }
        *rdi4 = *rsi5;
        rdi4 = reinterpret_cast<int32_t*>(__return_address());
        rsi5 = reinterpret_cast<int32_t*>(0x7e7);
        fun_7ee();
    }
    fun_822(__return_address(), 0x80d, 0x814, rcx6);
    fun_83b(0x829, 22, 1, __return_address());
    fun_73c(rbx7, 22, 1, __return_address());
    fun_744(r14_8, 22, 1, __return_address());
    fun_74c(r15_9, 22, 1, __return_address());
    goto v10;
}

void fun_822(int32_t* rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int32_t* r12_5;
    int32_t* rbx6;
    int64_t* r14_7;
    struct s1* r15_8;
    int64_t v9;

    fun_83b(0x829, 22, 1, r12_5);
    fun_73c(rbx6, 22, 1, r12_5);
    fun_744(r14_7, 22, 1, r12_5);
    fun_74c(r15_8, 22, 1, r12_5);
    goto v9;
}

void fun_79e();

void fun_780(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
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
    struct s1* r15_15;
    int64_t v16;

    rsi5 = reinterpret_cast<int32_t*>(0x787);
    *reinterpret_cast<int32_t*>(&rbp6) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp6) + 4) = reinterpret_cast<int32_t>(fputc);
    v7 = r12_8;
    rdi9 = r12_10;
    fun_79e();
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
                fun_7cc();
            }
            *rdi9 = *rsi5;
            rdi9 = v7;
            rsi5 = reinterpret_cast<int32_t*>(0x7e7);
            fun_7ee();
            ++r12_12;
        } while (r12_12 != 0x4b0);
        ++rbp6;
    } while (rbp6 != 0x4b0);
    fun_822(v7, 0x80d, 0x814, rcx);
    fun_83b(0x829, 22, 1, v7);
    fun_73c(rbx13, 22, 1, v7);
    fun_744(r14_14, 22, 1, v7);
    fun_74c(r15_15, 22, 1, v7);
    goto v16;
}

void fun_744(int64_t* rdi, struct s0* rsi, int32_t* rdx, int32_t* rcx) {
    struct s1* r15_5;
    int64_t v6;

    fun_74c(r15_5, rsi, rdx, rcx);
    goto v6;
}

void fun_83b(int64_t rdi, struct s0* rsi, int32_t* rdx, int32_t* rcx) {
    int32_t* rbx5;
    int64_t* r14_6;
    struct s1* r15_7;
    int64_t v8;

    fun_73c(rbx5, rsi, rdx, rcx);
    fun_744(r14_6, rsi, rdx, rcx);
    fun_74c(r15_7, rsi, rdx, rcx);
    goto v8;
}

int64_t* fun_3b1(int64_t rdi, int64_t rsi);

struct s2 {
    int32_t f0;
    int32_t f4;
};

struct s1* fun_3c3(struct s2* rdi, int64_t rsi);

struct s3 {
    int32_t f0;
    int32_t f4;
};

int32_t g4b0 = 0x80d16948;

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

int32_t** g764 = reinterpret_cast<int32_t**>(0x3d8d48208b4c);

void fun_39f(int64_t rdi, int64_t rsi) {
    int32_t* rbx3;
    int32_t* rax4;
    int64_t* rax5;
    int64_t* r14_6;
    struct s1* rax7;
    struct s1* r15_8;
    int64_t rax9;
    int64_t rcx10;
    int64_t rdx11;
    struct s3* rsi12;
    struct s4* rdi13;
    struct s5* rsi14;
    int64_t rcx15;
    struct s6* rdi16;
    struct s7* rsi17;
    struct s8* rdi18;
    struct s9* rsi19;
    struct s10* rdi20;
    struct s11* rsi21;
    struct s12* rcx22;
    int32_t* rax23;
    int64_t rdx24;
    void* rdi25;
    struct s12* rsi26;
    struct s13* rdi27;
    int64_t r8_28;
    struct s14* rdi29;
    struct s15* rsi30;
    struct s16* rdi31;
    struct s17* rsi32;
    struct s18* rdi33;
    struct s19* rsi34;
    struct s20* rdi35;
    struct s21* rsi36;
    struct s22* rdi37;
    struct s23* rsi38;
    int32_t* rcx39;
    struct s24* rsi40;
    struct s25* rdi41;
    struct s26* rsi42;
    struct s0* rsi43;
    struct s27* rdi44;
    struct s28* rdi45;
    int32_t* rsi46;
    struct s29* rdi47;
    struct s26* rsi48;
    struct s0* rsi49;
    int32_t* rdx50;
    int1_t cf51;
    int32_t ebp52;
    signed char** r12_53;
    int32_t** rax54;
    int32_t* r12_55;
    int32_t* rcx56;
    int32_t* rsi57;
    int64_t rbp58;
    int32_t* v59;
    int32_t* rdi60;
    int64_t r13_61;
    int64_t r12_62;
    int64_t v63;

    rbx3 = rax4;
    rax5 = fun_3b1(0x15f900, 8);
    r14_6 = rax5;
    rax7 = fun_3c3(0x4b0, 8);
    r15_8 = rax7;
    *reinterpret_cast<int32_t*>(&rax9) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax9) + 4) = reinterpret_cast<int32_t>(fputc);
    __asm__("movdqa xmm0, [rip+0x0]");
    __asm__("movapd xmm1, [rip+0x0]");
    __asm__("movdqa xmm2, [rip+0x0]");
    __asm__("movdqa xmm3, [rip+0x0]");
    __asm__("movdqa xmm4, [rip+0x0]");
    *reinterpret_cast<int32_t*>(&rcx10) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx10) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        __asm__("xorps xmm5, xmm5");
        __asm__("cvtsi2sd xmm5, ecx");
        __asm__("unpcklpd xmm5, xmm5");
        *reinterpret_cast<int32_t*>(&rdx11) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx11) + 4) = reinterpret_cast<int32_t>(fputc);
        __asm__("movdqa xmm6, xmm0");
        do {
            __asm__("cvtdq2pd xmm7, xmm6");
            __asm__("mulpd xmm7, xmm5");
            __asm__("divpd xmm7, xmm1");
            rsi12 = reinterpret_cast<struct s3*>(rbx3 + rcx10 * 0x960);
            __asm__("movupd [rsi+rdx*8], xmm7");
            __asm__("movdqa xmm7, xmm6");
            __asm__("paddd xmm7, xmm2");
            __asm__("cvtdq2pd xmm7, xmm7");
            __asm__("mulpd xmm7, xmm5");
            __asm__("divpd xmm7, xmm1");
            __asm__("movupd [rsi+rdx*8+0x10], xmm7");
            __asm__("movdqa xmm7, xmm6");
            __asm__("paddd xmm7, xmm3");
            __asm__("cvtdq2pd xmm7, xmm7");
            __asm__("mulpd xmm7, xmm5");
            __asm__("divpd xmm7, xmm1");
            __asm__("movupd [rsi+rdx*8+0x20], xmm7");
            rdx11 = rdx11 + 6;
            __asm__("paddd xmm6, xmm4");
        } while (rdx11 != 0x4b0);
        ++rcx10;
    } while (!reinterpret_cast<int1_t>(rcx10 == "%"));
    g4b0 = rsi12->f0;
    rdi13 = reinterpret_cast<struct s4*>("%");
    rsi14 = reinterpret_cast<struct s5*>(&rsi12->f4);
    do {
        *reinterpret_cast<int64_t*>(reinterpret_cast<uint64_t>(r15_8) + rax9 * 8) = reinterpret_cast<int64_t>(fputc);
        __asm__("xorpd xmm1, xmm1");
        *reinterpret_cast<int32_t*>(&rcx15) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx15) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("addsd xmm1, [rdx+rax*8]");
            rdi13->f0 = rsi14->f0;
            rdi16 = reinterpret_cast<struct s6*>(&rdi13->f4);
            rsi17 = reinterpret_cast<struct s7*>(&rsi14->f4);
            __asm__("addsd xmm1, [rdx+rax*8]");
            rdi16->f0 = rsi17->f0;
            rdi18 = reinterpret_cast<struct s8*>(&rdi16->f4);
            rsi19 = reinterpret_cast<struct s9*>(&rsi17->f4);
            __asm__("addsd xmm1, [rdx+rax*8]");
            rdi18->f0 = rsi19->f0;
            rdi20 = reinterpret_cast<struct s10*>(&rdi18->f4);
            rsi21 = reinterpret_cast<struct s11*>(&rsi19->f4);
            __asm__("addsd xmm1, [rdx+rax*8]");
            rdi20->f0 = rsi21->f0;
            rdi13 = reinterpret_cast<struct s4*>(&rdi20->f4);
            rsi14 = reinterpret_cast<struct s5*>(&rsi21->f4);
            rcx15 = rcx15 + 4;
        } while (!reinterpret_cast<int1_t>(rcx15 == "%"));
        __asm__("divsd xmm1, xmm0");
        rdi13->f0 = rsi14->f0;
        rdi13 = reinterpret_cast<struct s4*>(&rdi13->f4);
        rsi14 = reinterpret_cast<struct s5*>(&rsi14->f4);
        ++rax9;
    } while (rax9 != 0x4b0);
    rcx22 = reinterpret_cast<struct s12*>(&r15_8->f2580);
    *reinterpret_cast<int32_t*>(&rax23) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax23) + 4) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(&rdx24) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx24) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        rdi25 = reinterpret_cast<void*>(rdx24 * 0x2580);
        rsi26 = reinterpret_cast<struct s12*>(reinterpret_cast<int64_t>(rbx3) + reinterpret_cast<int64_t>(rdi25));
        if (reinterpret_cast<uint64_t>(rsi26) >= reinterpret_cast<uint64_t>(rcx22)) {
            *reinterpret_cast<int32_t*>(&rdi27) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi27) + 4) = reinterpret_cast<int32_t>(fputc);
            goto addr_5f0_32;
        }
        *reinterpret_cast<int32_t*>(&rdi27) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi27) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&r8_28) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_28) + 4) = reinterpret_cast<int32_t>(fputc);
        if (reinterpret_cast<uint64_t>(r15_8) >= reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(rbx3) + reinterpret_cast<int64_t>(rdi25) + 0x2580)) {
            do {
                addr_5f0_32:
                __asm__("movupd xmm0, [r15+rdi*8]");
                __asm__("movupd xmm1, [r15+rdi*8+0x10]");
                __asm__("movupd xmm2, [rsi+rdi*8]");
                __asm__("subpd xmm2, xmm0");
                __asm__("movupd xmm0, [rsi+rdi*8+0x10]");
                __asm__("subpd xmm0, xmm1");
                __asm__("movupd [rsi+rdi*8], xmm2");
                __asm__("movupd [rsi+rdi*8+0x10], xmm0");
                __asm__("movupd xmm0, [r15+r8]");
                __asm__("movupd xmm1, [r15+r8+0x10]");
                __asm__("movupd xmm2, [r8+rsi]");
                __asm__("subpd xmm2, xmm0");
                __asm__("movupd xmm0, [r8+rsi+0x10]");
                __asm__("subpd xmm0, xmm1");
                __asm__("movupd [r8+rsi], xmm2");
                __asm__("movupd [r8+rsi+0x10], xmm0");
                ++rdi27;
            } while (!reinterpret_cast<int1_t>(rdi27 == 0x4b0));
        } else {
            do {
                rdi27->f0 = rsi26->f0;
                rdi29 = reinterpret_cast<struct s14*>(&rdi27->f4);
                rsi30 = reinterpret_cast<struct s15*>(&rsi26->f4);
                __asm__("subsd xmm0, [r15+r8*8]");
                rdi29->f0 = rsi30->f0;
                rdi31 = reinterpret_cast<struct s16*>(&rdi29->f4);
                rsi32 = reinterpret_cast<struct s17*>(&rsi30->f4);
                rdi31->f0 = rsi32->f0;
                rdi33 = reinterpret_cast<struct s18*>(&rdi31->f4);
                rsi34 = reinterpret_cast<struct s19*>(&rsi32->f4);
                __asm__("subsd xmm1, [r15+r8*8+0x8]");
                rdi33->f0 = rsi34->f0;
                rdi35 = reinterpret_cast<struct s20*>(&rdi33->f4);
                rsi36 = reinterpret_cast<struct s21*>(&rsi34->f4);
                rdi35->f0 = rsi36->f0;
                rdi37 = reinterpret_cast<struct s22*>(&rdi35->f4);
                rsi38 = reinterpret_cast<struct s23*>(&rsi36->f4);
                __asm__("subsd xmm0, [r15+r8*8+0x10]");
                rdi37->f0 = rsi38->f0;
                rdi27 = reinterpret_cast<struct s13*>(&rdi37->f4);
                rsi26 = reinterpret_cast<struct s12*>(&rsi38->f4);
                r8_28 = r8_28 + 3;
            } while (r8_28 != 0x4b0);
            continue;
        }
        ++rdx24;
    } while (rdx24 != "%");
    rdi27->f0 = rsi26->f0;
    do {
        rcx39 = rax23;
        do {
            (r14_6 + reinterpret_cast<uint64_t>(rax23) * 0x4b0)[static_cast<uint64_t>(rcx39)] = reinterpret_cast<int64_t>(fputc);
            __asm__("xorpd xmm1, xmm1");
            *reinterpret_cast<int32_t*>(&rsi40) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi40) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                rdi41 = reinterpret_cast<struct s25*>(rbx3 + reinterpret_cast<uint64_t>(rsi40) * 0x960);
                rdi41->f0 = rsi40->f0;
                rsi42 = reinterpret_cast<struct s26*>(&rsi40->f4);
                __asm__("mulsd xmm2, [rdi+rcx*8]");
                __asm__("addsd xmm2, xmm1");
                rdi41->f4 = rsi42->f0;
                rsi43 = reinterpret_cast<struct s0*>(&rsi42->f4);
                rdi44 = reinterpret_cast<struct s27*>(rbx3 + (reinterpret_cast<uint64_t>(rsi43) | 1) * 0x960);
                rdi44->f0 = rsi43->f0;
                rdi45 = reinterpret_cast<struct s28*>(&rdi44->f4);
                rsi46 = &rsi43->f4;
                __asm__("mulsd xmm1, [rdi+rcx*8]");
                __asm__("addsd xmm1, xmm2");
                rdi45->f0 = *rsi46;
                rdi47 = reinterpret_cast<struct s29*>(&rdi45->f4);
                rsi40 = reinterpret_cast<struct s24*>(reinterpret_cast<uint64_t>(rsi46 + 1) + 2);
            } while (!reinterpret_cast<int1_t>(rsi40 == "%"));
            __asm__("divsd xmm1, xmm0");
            rdi47->f0 = rsi40->f0;
            rsi48 = reinterpret_cast<struct s26*>(&rsi40->f4);
            rdi47->f4 = rsi48->f0;
            rsi49 = reinterpret_cast<struct s0*>(&rsi48->f4);
            rdx50 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rcx39) + 1);
            cf51 = reinterpret_cast<uint64_t>(rcx39) < 0x4af;
            rcx39 = rdx50;
        } while (cf51);
        rax23 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rax23) + 1);
    } while (!reinterpret_cast<int1_t>(rax23 == 0x4b0));
    if (ebp52 >= 43 && **r12_53 == fputc) {
        rax54 = g764;
        r12_55 = *rax54;
        rcx56 = r12_55;
        fun_780(0x76e, 22, 1, rcx56);
        rsi57 = reinterpret_cast<int32_t*>(0x787);
        *reinterpret_cast<int32_t*>(&rbp58) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp58) + 4) = reinterpret_cast<int32_t>(fputc);
        v59 = r12_55;
        rdi60 = r12_55;
        fun_79e();
        do {
            r13_61 = rbp58 * 0x4b0;
            *reinterpret_cast<int32_t*>(&r12_62) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_62) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("ror eax, 0x2");
                if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r12_62 + r13_61) * 0xcccccccd) <= 0xccccccc) {
                    *reinterpret_cast<int32_t*>(&rdi60) = 10;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi60) + 4) = reinterpret_cast<int32_t>(fputc);
                    rsi57 = v59;
                    fun_7cc();
                }
                *rdi60 = *rsi57;
                rdi60 = v59;
                rsi57 = reinterpret_cast<int32_t*>(0x7e7);
                fun_7ee();
                ++r12_62;
            } while (r12_62 != 0x4b0);
            ++rbp58;
        } while (rbp58 != 0x4b0);
        fun_822(v59, 0x80d, 0x814, rcx56);
        *reinterpret_cast<int32_t*>(&rsi49) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi49) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx50) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx50) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx39 = v59;
        fun_83b(0x829, 22, 1, rcx39);
    }
    fun_73c(rbx3, rsi49, rdx50, rcx39);
    fun_744(r14_6, rsi49, rdx50, rcx39);
    fun_74c(r15_8, rsi49, rdx50, rcx39);
    goto v63;
}

void fun_79e() {
    int32_t* v1;
    int64_t r13_2;
    int64_t rbp3;
    int64_t r12_4;
    int32_t* rdi5;
    int32_t* rsi6;
    int32_t* rcx7;
    int32_t* rbx8;
    int64_t* r14_9;
    struct s1* r15_10;
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
                fun_7cc();
            }
            *rdi5 = *rsi6;
            rdi5 = v1;
            rsi6 = reinterpret_cast<int32_t*>(0x7e7);
            fun_7ee();
            ++r12_4;
        } while (r12_4 != 0x4b0);
        ++rbp3;
    } while (rbp3 != 0x4b0);
    fun_822(v1, 0x80d, 0x814, rcx7);
    fun_83b(0x829, 22, 1, v1);
    fun_73c(rbx8, 22, 1, v1);
    fun_744(r14_9, 22, 1, v1);
    fun_74c(r15_10, 22, 1, v1);
    goto v11;
}

void fun_74c(struct s1* rdi, struct s0* rsi, int32_t* rdx, int32_t* rcx) {
    int64_t v5;

    goto v5;
}

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

int64_t* fun_3b1(int64_t rdi, int64_t rsi) {
    int64_t* r14_3;
    int64_t* rax4;
    struct s1* rax5;
    struct s1* r15_6;
    int64_t rax7;
    int64_t rcx8;
    int64_t rdx9;
    struct s30* rsi10;
    int32_t* rbx11;
    struct s4* rdi12;
    struct s31* rsi13;
    int64_t rcx14;
    struct s6* rdi15;
    struct s32* rsi16;
    struct s8* rdi17;
    struct s33* rsi18;
    struct s10* rdi19;
    struct s34* rsi20;
    struct s12* rcx21;
    int32_t* rax22;
    int64_t rdx23;
    void* rdi24;
    struct s12* rsi25;
    int32_t* rbx26;
    struct s35* rdi27;
    int64_t r8_28;
    void* rbx29;
    struct s36* rdi30;
    struct s15* rsi31;
    struct s37* rdi32;
    struct s17* rsi33;
    struct s38* rdi34;
    struct s19* rsi35;
    struct s39* rdi36;
    struct s21* rsi37;
    struct s40* rdi38;
    struct s23* rsi39;
    int32_t* rcx40;
    struct s24* rsi41;
    struct s41* rdi42;
    int32_t* rbx43;
    struct s26* rsi44;
    struct s0* rsi45;
    struct s42* rdi46;
    int32_t* rbx47;
    struct s43* rdi48;
    int32_t* rsi49;
    struct s44* rdi50;
    struct s26* rsi51;
    struct s0* rsi52;
    int32_t* rdx53;
    int1_t cf54;
    int32_t ebp55;
    signed char** r12_56;
    int32_t** rax57;
    int32_t* r12_58;
    int32_t* rcx59;
    int32_t* rsi60;
    int64_t rbp61;
    int32_t* v62;
    int32_t* rdi63;
    int64_t r13_64;
    int64_t r12_65;
    int32_t* rbx66;
    int64_t v67;

    r14_3 = rax4;
    rax5 = fun_3c3(0x4b0, 8);
    r15_6 = rax5;
    *reinterpret_cast<int32_t*>(&rax7) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax7) + 4) = reinterpret_cast<int32_t>(fputc);
    __asm__("movdqa xmm0, [rip+0x0]");
    __asm__("movapd xmm1, [rip+0x0]");
    __asm__("movdqa xmm2, [rip+0x0]");
    __asm__("movdqa xmm3, [rip+0x0]");
    __asm__("movdqa xmm4, [rip+0x0]");
    *reinterpret_cast<int32_t*>(&rcx8) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx8) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        __asm__("xorps xmm5, xmm5");
        __asm__("cvtsi2sd xmm5, ecx");
        __asm__("unpcklpd xmm5, xmm5");
        *reinterpret_cast<int32_t*>(&rdx9) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx9) + 4) = reinterpret_cast<int32_t>(fputc);
        __asm__("movdqa xmm6, xmm0");
        do {
            __asm__("cvtdq2pd xmm7, xmm6");
            __asm__("mulpd xmm7, xmm5");
            __asm__("divpd xmm7, xmm1");
            rsi10 = reinterpret_cast<struct s30*>(rbx11 + rcx8 * 0x960);
            __asm__("movupd [rsi+rdx*8], xmm7");
            __asm__("movdqa xmm7, xmm6");
            __asm__("paddd xmm7, xmm2");
            __asm__("cvtdq2pd xmm7, xmm7");
            __asm__("mulpd xmm7, xmm5");
            __asm__("divpd xmm7, xmm1");
            __asm__("movupd [rsi+rdx*8+0x10], xmm7");
            __asm__("movdqa xmm7, xmm6");
            __asm__("paddd xmm7, xmm3");
            __asm__("cvtdq2pd xmm7, xmm7");
            __asm__("mulpd xmm7, xmm5");
            __asm__("divpd xmm7, xmm1");
            __asm__("movupd [rsi+rdx*8+0x20], xmm7");
            rdx9 = rdx9 + 6;
            __asm__("paddd xmm6, xmm4");
        } while (rdx9 != 0x4b0);
        ++rcx8;
    } while (!reinterpret_cast<int1_t>(rcx8 == "%"));
    g4b0 = rsi10->f0;
    rdi12 = reinterpret_cast<struct s4*>("%");
    rsi13 = reinterpret_cast<struct s31*>(&rsi10->f4);
    do {
        *reinterpret_cast<int64_t*>(reinterpret_cast<uint64_t>(r15_6) + rax7 * 8) = reinterpret_cast<int64_t>(fputc);
        __asm__("xorpd xmm1, xmm1");
        *reinterpret_cast<int32_t*>(&rcx14) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx14) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("addsd xmm1, [rdx+rax*8]");
            rdi12->f0 = rsi13->f0;
            rdi15 = reinterpret_cast<struct s6*>(&rdi12->f4);
            rsi16 = reinterpret_cast<struct s32*>(&rsi13->f4);
            __asm__("addsd xmm1, [rdx+rax*8]");
            rdi15->f0 = rsi16->f0;
            rdi17 = reinterpret_cast<struct s8*>(&rdi15->f4);
            rsi18 = reinterpret_cast<struct s33*>(&rsi16->f4);
            __asm__("addsd xmm1, [rdx+rax*8]");
            rdi17->f0 = rsi18->f0;
            rdi19 = reinterpret_cast<struct s10*>(&rdi17->f4);
            rsi20 = reinterpret_cast<struct s34*>(&rsi18->f4);
            __asm__("addsd xmm1, [rdx+rax*8]");
            rdi19->f0 = rsi20->f0;
            rdi12 = reinterpret_cast<struct s4*>(&rdi19->f4);
            rsi13 = reinterpret_cast<struct s31*>(&rsi20->f4);
            rcx14 = rcx14 + 4;
        } while (!reinterpret_cast<int1_t>(rcx14 == "%"));
        __asm__("divsd xmm1, xmm0");
        rdi12->f0 = rsi13->f0;
        rdi12 = reinterpret_cast<struct s4*>(&rdi12->f4);
        rsi13 = reinterpret_cast<struct s31*>(&rsi13->f4);
        ++rax7;
    } while (rax7 != 0x4b0);
    rcx21 = reinterpret_cast<struct s12*>(&r15_6->f2580);
    *reinterpret_cast<int32_t*>(&rax22) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax22) + 4) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(&rdx23) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx23) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        rdi24 = reinterpret_cast<void*>(rdx23 * 0x2580);
        rsi25 = reinterpret_cast<struct s12*>(reinterpret_cast<int64_t>(rbx26) + reinterpret_cast<int64_t>(rdi24));
        if (reinterpret_cast<uint64_t>(rsi25) >= reinterpret_cast<uint64_t>(rcx21)) {
            *reinterpret_cast<int32_t*>(&rdi27) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi27) + 4) = reinterpret_cast<int32_t>(fputc);
            goto addr_5f0_31;
        }
        *reinterpret_cast<int32_t*>(&rdi27) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi27) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&r8_28) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_28) + 4) = reinterpret_cast<int32_t>(fputc);
        if (reinterpret_cast<uint64_t>(r15_6) >= reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(rbx29) + reinterpret_cast<int64_t>(rdi24) + 0x2580)) {
            do {
                addr_5f0_31:
                __asm__("movupd xmm0, [r15+rdi*8]");
                __asm__("movupd xmm1, [r15+rdi*8+0x10]");
                __asm__("movupd xmm2, [rsi+rdi*8]");
                __asm__("subpd xmm2, xmm0");
                __asm__("movupd xmm0, [rsi+rdi*8+0x10]");
                __asm__("subpd xmm0, xmm1");
                __asm__("movupd [rsi+rdi*8], xmm2");
                __asm__("movupd [rsi+rdi*8+0x10], xmm0");
                __asm__("movupd xmm0, [r15+r8]");
                __asm__("movupd xmm1, [r15+r8+0x10]");
                __asm__("movupd xmm2, [r8+rsi]");
                __asm__("subpd xmm2, xmm0");
                __asm__("movupd xmm0, [r8+rsi+0x10]");
                __asm__("subpd xmm0, xmm1");
                __asm__("movupd [r8+rsi], xmm2");
                __asm__("movupd [r8+rsi+0x10], xmm0");
                ++rdi27;
            } while (!reinterpret_cast<int1_t>(rdi27 == 0x4b0));
        } else {
            do {
                rdi27->f0 = rsi25->f0;
                rdi30 = reinterpret_cast<struct s36*>(&rdi27->f4);
                rsi31 = reinterpret_cast<struct s15*>(&rsi25->f4);
                __asm__("subsd xmm0, [r15+r8*8]");
                rdi30->f0 = rsi31->f0;
                rdi32 = reinterpret_cast<struct s37*>(&rdi30->f4);
                rsi33 = reinterpret_cast<struct s17*>(&rsi31->f4);
                rdi32->f0 = rsi33->f0;
                rdi34 = reinterpret_cast<struct s38*>(&rdi32->f4);
                rsi35 = reinterpret_cast<struct s19*>(&rsi33->f4);
                __asm__("subsd xmm1, [r15+r8*8+0x8]");
                rdi34->f0 = rsi35->f0;
                rdi36 = reinterpret_cast<struct s39*>(&rdi34->f4);
                rsi37 = reinterpret_cast<struct s21*>(&rsi35->f4);
                rdi36->f0 = rsi37->f0;
                rdi38 = reinterpret_cast<struct s40*>(&rdi36->f4);
                rsi39 = reinterpret_cast<struct s23*>(&rsi37->f4);
                __asm__("subsd xmm0, [r15+r8*8+0x10]");
                rdi38->f0 = rsi39->f0;
                rdi27 = reinterpret_cast<struct s35*>(&rdi38->f4);
                rsi25 = reinterpret_cast<struct s12*>(&rsi39->f4);
                r8_28 = r8_28 + 3;
            } while (r8_28 != 0x4b0);
            continue;
        }
        ++rdx23;
    } while (rdx23 != "%");
    rdi27->f0 = rsi25->f0;
    do {
        rcx40 = rax22;
        do {
            (r14_3 + reinterpret_cast<uint64_t>(rax22) * 0x4b0)[static_cast<uint64_t>(rcx40)] = reinterpret_cast<int64_t>(fputc);
            __asm__("xorpd xmm1, xmm1");
            *reinterpret_cast<int32_t*>(&rsi41) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi41) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                rdi42 = reinterpret_cast<struct s41*>(rbx43 + reinterpret_cast<uint64_t>(rsi41) * 0x960);
                rdi42->f0 = rsi41->f0;
                rsi44 = reinterpret_cast<struct s26*>(&rsi41->f4);
                __asm__("mulsd xmm2, [rdi+rcx*8]");
                __asm__("addsd xmm2, xmm1");
                rdi42->f4 = rsi44->f0;
                rsi45 = reinterpret_cast<struct s0*>(&rsi44->f4);
                rdi46 = reinterpret_cast<struct s42*>(rbx47 + (reinterpret_cast<uint64_t>(rsi45) | 1) * 0x960);
                rdi46->f0 = rsi45->f0;
                rdi48 = reinterpret_cast<struct s43*>(&rdi46->f4);
                rsi49 = &rsi45->f4;
                __asm__("mulsd xmm1, [rdi+rcx*8]");
                __asm__("addsd xmm1, xmm2");
                rdi48->f0 = *rsi49;
                rdi50 = reinterpret_cast<struct s44*>(&rdi48->f4);
                rsi41 = reinterpret_cast<struct s24*>(reinterpret_cast<uint64_t>(rsi49 + 1) + 2);
            } while (!reinterpret_cast<int1_t>(rsi41 == "%"));
            __asm__("divsd xmm1, xmm0");
            rdi50->f0 = rsi41->f0;
            rsi51 = reinterpret_cast<struct s26*>(&rsi41->f4);
            rdi50->f4 = rsi51->f0;
            rsi52 = reinterpret_cast<struct s0*>(&rsi51->f4);
            rdx53 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rcx40) + 1);
            cf54 = reinterpret_cast<uint64_t>(rcx40) < 0x4af;
            rcx40 = rdx53;
        } while (cf54);
        rax22 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rax22) + 1);
    } while (!reinterpret_cast<int1_t>(rax22 == 0x4b0));
    if (ebp55 >= 43 && **r12_56 == fputc) {
        rax57 = g764;
        r12_58 = *rax57;
        rcx59 = r12_58;
        fun_780(0x76e, 22, 1, rcx59);
        rsi60 = reinterpret_cast<int32_t*>(0x787);
        *reinterpret_cast<int32_t*>(&rbp61) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp61) + 4) = reinterpret_cast<int32_t>(fputc);
        v62 = r12_58;
        rdi63 = r12_58;
        fun_79e();
        do {
            r13_64 = rbp61 * 0x4b0;
            *reinterpret_cast<int32_t*>(&r12_65) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_65) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("ror eax, 0x2");
                if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r12_65 + r13_64) * 0xcccccccd) <= 0xccccccc) {
                    *reinterpret_cast<int32_t*>(&rdi63) = 10;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi63) + 4) = reinterpret_cast<int32_t>(fputc);
                    rsi60 = v62;
                    fun_7cc();
                }
                *rdi63 = *rsi60;
                rdi63 = v62;
                rsi60 = reinterpret_cast<int32_t*>(0x7e7);
                fun_7ee();
                ++r12_65;
            } while (r12_65 != 0x4b0);
            ++rbp61;
        } while (rbp61 != 0x4b0);
        fun_822(v62, 0x80d, 0x814, rcx59);
        *reinterpret_cast<int32_t*>(&rsi52) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi52) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx53) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx53) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx40 = v62;
        fun_83b(0x829, 22, 1, rcx40);
    }
    fun_73c(rbx66, rsi52, rdx53, rcx40);
    fun_744(r14_3, rsi52, rdx53, rcx40);
    fun_74c(r15_6, rsi52, rdx53, rcx40);
    goto v67;
}

struct s45 {
    int32_t f0;
    int32_t f4;
};

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

struct s1* fun_3c3(struct s2* rdi, int64_t rsi) {
    struct s1* r15_3;
    struct s1* rax4;
    int64_t rax5;
    int64_t rcx6;
    int64_t rdx7;
    struct s45* rsi8;
    int32_t* rbx9;
    struct s4* rdi10;
    struct s46* rsi11;
    int64_t rcx12;
    struct s6* rdi13;
    struct s47* rsi14;
    struct s8* rdi15;
    struct s48* rsi16;
    struct s10* rdi17;
    struct s49* rsi18;
    struct s12* rcx19;
    int32_t* rax20;
    int64_t rdx21;
    void* rdi22;
    struct s12* rsi23;
    int32_t* rbx24;
    struct s50* rdi25;
    int64_t r8_26;
    void* rbx27;
    struct s51* rdi28;
    struct s15* rsi29;
    struct s52* rdi30;
    struct s17* rsi31;
    struct s53* rdi32;
    struct s19* rsi33;
    struct s54* rdi34;
    struct s21* rsi35;
    struct s55* rdi36;
    struct s23* rsi37;
    int32_t* rcx38;
    int64_t* r14_39;
    struct s24* rsi40;
    struct s56* rdi41;
    int32_t* rbx42;
    struct s26* rsi43;
    struct s0* rsi44;
    struct s57* rdi45;
    int32_t* rbx46;
    struct s58* rdi47;
    int32_t* rsi48;
    struct s59* rdi49;
    struct s26* rsi50;
    struct s0* rsi51;
    int32_t* rdx52;
    int1_t cf53;
    int32_t ebp54;
    signed char** r12_55;
    int32_t** rax56;
    int32_t* r12_57;
    int32_t* rcx58;
    int32_t* rsi59;
    int64_t rbp60;
    int32_t* v61;
    int32_t* rdi62;
    int64_t r13_63;
    int64_t r12_64;
    int32_t* rbx65;
    int64_t* r14_66;
    int64_t v67;

    r15_3 = rax4;
    *reinterpret_cast<int32_t*>(&rax5) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax5) + 4) = reinterpret_cast<int32_t>(fputc);
    __asm__("movdqa xmm0, [rip+0x0]");
    __asm__("movapd xmm1, [rip+0x0]");
    __asm__("movdqa xmm2, [rip+0x0]");
    __asm__("movdqa xmm3, [rip+0x0]");
    __asm__("movdqa xmm4, [rip+0x0]");
    *reinterpret_cast<int32_t*>(&rcx6) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx6) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        __asm__("xorps xmm5, xmm5");
        __asm__("cvtsi2sd xmm5, ecx");
        __asm__("unpcklpd xmm5, xmm5");
        *reinterpret_cast<int32_t*>(&rdx7) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx7) + 4) = reinterpret_cast<int32_t>(fputc);
        __asm__("movdqa xmm6, xmm0");
        do {
            __asm__("cvtdq2pd xmm7, xmm6");
            __asm__("mulpd xmm7, xmm5");
            __asm__("divpd xmm7, xmm1");
            rsi8 = reinterpret_cast<struct s45*>(rbx9 + rcx6 * 0x960);
            __asm__("movupd [rsi+rdx*8], xmm7");
            __asm__("movdqa xmm7, xmm6");
            __asm__("paddd xmm7, xmm2");
            __asm__("cvtdq2pd xmm7, xmm7");
            __asm__("mulpd xmm7, xmm5");
            __asm__("divpd xmm7, xmm1");
            __asm__("movupd [rsi+rdx*8+0x10], xmm7");
            __asm__("movdqa xmm7, xmm6");
            __asm__("paddd xmm7, xmm3");
            __asm__("cvtdq2pd xmm7, xmm7");
            __asm__("mulpd xmm7, xmm5");
            __asm__("divpd xmm7, xmm1");
            __asm__("movupd [rsi+rdx*8+0x20], xmm7");
            rdx7 = rdx7 + 6;
            __asm__("paddd xmm6, xmm4");
        } while (rdx7 != 0x4b0);
        ++rcx6;
    } while (!reinterpret_cast<int1_t>(rcx6 == "%"));
    rdi->f0 = rsi8->f0;
    rdi10 = reinterpret_cast<struct s4*>(&rdi->f4);
    rsi11 = reinterpret_cast<struct s46*>(&rsi8->f4);
    do {
        *reinterpret_cast<int64_t*>(reinterpret_cast<uint64_t>(r15_3) + rax5 * 8) = reinterpret_cast<int64_t>(fputc);
        __asm__("xorpd xmm1, xmm1");
        *reinterpret_cast<int32_t*>(&rcx12) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx12) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("addsd xmm1, [rdx+rax*8]");
            rdi10->f0 = rsi11->f0;
            rdi13 = reinterpret_cast<struct s6*>(&rdi10->f4);
            rsi14 = reinterpret_cast<struct s47*>(&rsi11->f4);
            __asm__("addsd xmm1, [rdx+rax*8]");
            rdi13->f0 = rsi14->f0;
            rdi15 = reinterpret_cast<struct s8*>(&rdi13->f4);
            rsi16 = reinterpret_cast<struct s48*>(&rsi14->f4);
            __asm__("addsd xmm1, [rdx+rax*8]");
            rdi15->f0 = rsi16->f0;
            rdi17 = reinterpret_cast<struct s10*>(&rdi15->f4);
            rsi18 = reinterpret_cast<struct s49*>(&rsi16->f4);
            __asm__("addsd xmm1, [rdx+rax*8]");
            rdi17->f0 = rsi18->f0;
            rdi10 = reinterpret_cast<struct s4*>(&rdi17->f4);
            rsi11 = reinterpret_cast<struct s46*>(&rsi18->f4);
            rcx12 = rcx12 + 4;
        } while (!reinterpret_cast<int1_t>(rcx12 == "%"));
        __asm__("divsd xmm1, xmm0");
        rdi10->f0 = rsi11->f0;
        rdi10 = reinterpret_cast<struct s4*>(&rdi10->f4);
        rsi11 = reinterpret_cast<struct s46*>(&rsi11->f4);
        ++rax5;
    } while (rax5 != 0x4b0);
    rcx19 = reinterpret_cast<struct s12*>(&r15_3->f2580);
    *reinterpret_cast<int32_t*>(&rax20) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax20) + 4) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(&rdx21) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx21) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        rdi22 = reinterpret_cast<void*>(rdx21 * 0x2580);
        rsi23 = reinterpret_cast<struct s12*>(reinterpret_cast<int64_t>(rbx24) + reinterpret_cast<int64_t>(rdi22));
        if (reinterpret_cast<uint64_t>(rsi23) >= reinterpret_cast<uint64_t>(rcx19)) {
            *reinterpret_cast<int32_t*>(&rdi25) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi25) + 4) = reinterpret_cast<int32_t>(fputc);
            goto addr_5f0_30;
        }
        *reinterpret_cast<int32_t*>(&rdi25) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi25) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&r8_26) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_26) + 4) = reinterpret_cast<int32_t>(fputc);
        if (reinterpret_cast<uint64_t>(r15_3) >= reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(rbx27) + reinterpret_cast<int64_t>(rdi22) + 0x2580)) {
            do {
                addr_5f0_30:
                __asm__("movupd xmm0, [r15+rdi*8]");
                __asm__("movupd xmm1, [r15+rdi*8+0x10]");
                __asm__("movupd xmm2, [rsi+rdi*8]");
                __asm__("subpd xmm2, xmm0");
                __asm__("movupd xmm0, [rsi+rdi*8+0x10]");
                __asm__("subpd xmm0, xmm1");
                __asm__("movupd [rsi+rdi*8], xmm2");
                __asm__("movupd [rsi+rdi*8+0x10], xmm0");
                __asm__("movupd xmm0, [r15+r8]");
                __asm__("movupd xmm1, [r15+r8+0x10]");
                __asm__("movupd xmm2, [r8+rsi]");
                __asm__("subpd xmm2, xmm0");
                __asm__("movupd xmm0, [r8+rsi+0x10]");
                __asm__("subpd xmm0, xmm1");
                __asm__("movupd [r8+rsi], xmm2");
                __asm__("movupd [r8+rsi+0x10], xmm0");
                ++rdi25;
            } while (!reinterpret_cast<int1_t>(rdi25 == 0x4b0));
        } else {
            do {
                rdi25->f0 = rsi23->f0;
                rdi28 = reinterpret_cast<struct s51*>(&rdi25->f4);
                rsi29 = reinterpret_cast<struct s15*>(&rsi23->f4);
                __asm__("subsd xmm0, [r15+r8*8]");
                rdi28->f0 = rsi29->f0;
                rdi30 = reinterpret_cast<struct s52*>(&rdi28->f4);
                rsi31 = reinterpret_cast<struct s17*>(&rsi29->f4);
                rdi30->f0 = rsi31->f0;
                rdi32 = reinterpret_cast<struct s53*>(&rdi30->f4);
                rsi33 = reinterpret_cast<struct s19*>(&rsi31->f4);
                __asm__("subsd xmm1, [r15+r8*8+0x8]");
                rdi32->f0 = rsi33->f0;
                rdi34 = reinterpret_cast<struct s54*>(&rdi32->f4);
                rsi35 = reinterpret_cast<struct s21*>(&rsi33->f4);
                rdi34->f0 = rsi35->f0;
                rdi36 = reinterpret_cast<struct s55*>(&rdi34->f4);
                rsi37 = reinterpret_cast<struct s23*>(&rsi35->f4);
                __asm__("subsd xmm0, [r15+r8*8+0x10]");
                rdi36->f0 = rsi37->f0;
                rdi25 = reinterpret_cast<struct s50*>(&rdi36->f4);
                rsi23 = reinterpret_cast<struct s12*>(&rsi37->f4);
                r8_26 = r8_26 + 3;
            } while (r8_26 != 0x4b0);
            continue;
        }
        ++rdx21;
    } while (rdx21 != "%");
    rdi25->f0 = rsi23->f0;
    do {
        rcx38 = rax20;
        do {
            (r14_39 + reinterpret_cast<uint64_t>(rax20) * 0x4b0)[static_cast<uint64_t>(rcx38)] = reinterpret_cast<int64_t>(fputc);
            __asm__("xorpd xmm1, xmm1");
            *reinterpret_cast<int32_t*>(&rsi40) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi40) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                rdi41 = reinterpret_cast<struct s56*>(rbx42 + reinterpret_cast<uint64_t>(rsi40) * 0x960);
                rdi41->f0 = rsi40->f0;
                rsi43 = reinterpret_cast<struct s26*>(&rsi40->f4);
                __asm__("mulsd xmm2, [rdi+rcx*8]");
                __asm__("addsd xmm2, xmm1");
                rdi41->f4 = rsi43->f0;
                rsi44 = reinterpret_cast<struct s0*>(&rsi43->f4);
                rdi45 = reinterpret_cast<struct s57*>(rbx46 + (reinterpret_cast<uint64_t>(rsi44) | 1) * 0x960);
                rdi45->f0 = rsi44->f0;
                rdi47 = reinterpret_cast<struct s58*>(&rdi45->f4);
                rsi48 = &rsi44->f4;
                __asm__("mulsd xmm1, [rdi+rcx*8]");
                __asm__("addsd xmm1, xmm2");
                rdi47->f0 = *rsi48;
                rdi49 = reinterpret_cast<struct s59*>(&rdi47->f4);
                rsi40 = reinterpret_cast<struct s24*>(reinterpret_cast<uint64_t>(rsi48 + 1) + 2);
            } while (!reinterpret_cast<int1_t>(rsi40 == "%"));
            __asm__("divsd xmm1, xmm0");
            rdi49->f0 = rsi40->f0;
            rsi50 = reinterpret_cast<struct s26*>(&rsi40->f4);
            rdi49->f4 = rsi50->f0;
            rsi51 = reinterpret_cast<struct s0*>(&rsi50->f4);
            rdx52 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rcx38) + 1);
            cf53 = reinterpret_cast<uint64_t>(rcx38) < 0x4af;
            rcx38 = rdx52;
        } while (cf53);
        rax20 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rax20) + 1);
    } while (!reinterpret_cast<int1_t>(rax20 == 0x4b0));
    if (ebp54 >= 43 && **r12_55 == fputc) {
        rax56 = g764;
        r12_57 = *rax56;
        rcx58 = r12_57;
        fun_780(0x76e, 22, 1, rcx58);
        rsi59 = reinterpret_cast<int32_t*>(0x787);
        *reinterpret_cast<int32_t*>(&rbp60) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp60) + 4) = reinterpret_cast<int32_t>(fputc);
        v61 = r12_57;
        rdi62 = r12_57;
        fun_79e();
        do {
            r13_63 = rbp60 * 0x4b0;
            *reinterpret_cast<int32_t*>(&r12_64) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_64) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("ror eax, 0x2");
                if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r12_64 + r13_63) * 0xcccccccd) <= 0xccccccc) {
                    *reinterpret_cast<int32_t*>(&rdi62) = 10;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi62) + 4) = reinterpret_cast<int32_t>(fputc);
                    rsi59 = v61;
                    fun_7cc();
                }
                *rdi62 = *rsi59;
                rdi62 = v61;
                rsi59 = reinterpret_cast<int32_t*>(0x7e7);
                fun_7ee();
                ++r12_64;
            } while (r12_64 != 0x4b0);
            ++rbp60;
        } while (rbp60 != 0x4b0);
        fun_822(v61, 0x80d, 0x814, rcx58);
        *reinterpret_cast<int32_t*>(&rsi51) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi51) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx52) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx52) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx38 = v61;
        fun_83b(0x829, 22, 1, rcx38);
    }
    fun_73c(rbx65, rsi51, rdx52, rcx38);
    fun_744(r14_66, rsi51, rdx52, rcx38);
    fun_74c(r15_3, rsi51, rdx52, rcx38);
    goto v67;
}

void fputc(int32_t edi) {
}

void fun_7c() {
    __asm__("addps xmm1, [rsp+rbx*8]");
}

void fun_a9() {
    __asm__("in al, 0x80");
}

struct s60 {
    int32_t f0;
    int32_t f4;
};

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

void fun_b4(struct s60* rdi, struct s61* rsi, int64_t rdx) {
    struct s62* rdi4;
    struct s63* rsi5;
    int32_t* rdi6;
    int32_t* rsi7;
    int64_t r15_8;
    int64_t r11_9;
    int64_t r10_10;
    int64_t r15_11;
    int64_t r10_12;

    __asm__("addsd xmm1, [r12+rbx*8]");
    rdi->f0 = rsi->f0;
    rdi4 = reinterpret_cast<struct s62*>(&rdi->f4);
    rsi5 = reinterpret_cast<struct s63*>(&rsi->f4);
    __asm__("addsd xmm1, [r12+rbx*8]");
    rdi4->f0 = rsi5->f0;
    rdi6 = &rdi4->f4;
    rsi7 = &rsi5->f4;
    if (r15_8 + 4 == r11_9) {
        if (r10_10 != fputc) {
            *reinterpret_cast<int32_t*>(&r15_11) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_11) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("addsd xmm1, [r12+rbx*8]");
                *rdi6 = *rsi7;
                ++rdi6;
                ++rsi7;
                ++r15_11;
            } while (r15_11 != r10_12);
        }
    }
}

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

void fun_126() {
    int32_t esi1;
    int32_t esi2;
    uint64_t r11_3;
    int64_t r8_4;
    int64_t rax5;
    uint64_t rbx6;
    uint32_t eax7;
    int64_t r14_8;
    int64_t rax9;
    int64_t r15_10;
    int64_t v11;
    int64_t rax12;
    int64_t rdx13;
    struct s64* rdi14;
    int64_t r10_15;
    uint64_t rbp16;
    int64_t rdx17;
    uint64_t r13_18;
    uint64_t r8_19;
    uint64_t r13_20;
    unsigned char al21;
    struct s65* rsi22;
    struct s66* rdi23;
    struct s67* rsi24;
    uint64_t rax25;
    int64_t r9_26;
    struct s66* rdi27;
    struct s67* rsi28;
    struct s64* rdi29;
    struct s65* rsi30;
    struct s66* rdi31;
    struct s67* rsi32;
    uint64_t rax33;
    struct s68* rdi34;
    uint32_t r9d35;
    uint64_t r8_36;
    uint64_t r10_37;
    int64_t* rcx38;
    struct s68* r14_39;
    struct s69* rdi40;
    struct s67* rsi41;
    struct s68* rdi42;
    struct s65* rsi43;
    struct s69* rdi44;
    struct s67* rsi45;
    unsigned char r9b46;
    struct s69* rdi47;
    struct s67* rsi48;
    struct s69* rdi49;
    struct s67* rsi50;
    uint64_t rax51;
    uint64_t rax52;
    int64_t v53;

    if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(esi1 < reinterpret_cast<int32_t>(fputc) == fputc)) | reinterpret_cast<uint1_t>(esi2 == fputc))) {
        r11_3 = reinterpret_cast<uint64_t>(r8_4 + rax5 * 8);
        *reinterpret_cast<uint32_t*>(&rbx6) = eax7 & 0xfffffffc;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx6) + 4) = reinterpret_cast<int32_t>(fputc);
        r14_8 = -rax9;
        *reinterpret_cast<int32_t*>(&r15_10) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_10) + 4) = reinterpret_cast<int32_t>(fputc);
        v11 = rax12 * 8 + rdx13;
        while (1) {
            if (reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(&rdi14) < reinterpret_cast<int32_t>(fputc) == fputc)) | reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&rdi14) == fputc)) 
                goto addr_160_4;
            r10_15 = r15_10 * 0x2580;
            if (*reinterpret_cast<uint32_t*>(&rdi14) < 6) {
                *reinterpret_cast<int32_t*>(&rbp16) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp16) + 4) = reinterpret_cast<int32_t>(fputc);
                goto addr_200_7;
            }
            if (reinterpret_cast<uint64_t>(rdx17 + r10_15) >= r11_3) {
                *reinterpret_cast<int32_t*>(&r13_18) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_18) + 4) = reinterpret_cast<int32_t>(fputc);
            } else {
                *reinterpret_cast<int32_t*>(&r13_18) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_18) + 4) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(&rbp16) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp16) + 4) = reinterpret_cast<int32_t>(fputc);
                if (reinterpret_cast<uint64_t>(r10_15 + v11) > r8_19) {
                    addr_200_7:
                    r13_20 = rbp16;
                    if ((al21 & 1) != fputc) {
                        rdi14->f0 = rsi22->f0;
                        rdi23 = reinterpret_cast<struct s66*>(&rdi14->f4);
                        rsi24 = reinterpret_cast<struct s67*>(&rsi22->f4);
                        __asm__("subsd xmm1, [r8+rbp*8]");
                        rdi23->f0 = rsi24->f0;
                        rdi14 = reinterpret_cast<struct s64*>(&rdi23->f4);
                        rsi22 = reinterpret_cast<struct s65*>(&rsi24->f4);
                        r13_20 = rbp16 | 1;
                        goto addr_220_18;
                    }
                }
            }
            do {
                __asm__("movupd xmm1, [r8+r13*8]");
                __asm__("movupd xmm2, [r8+r13*8+0x10]");
                __asm__("movupd xmm3, [r12+r13*8]");
                __asm__("subpd xmm3, xmm1");
                __asm__("movupd xmm1, [r12+r13*8+0x10]");
                __asm__("subpd xmm1, xmm2");
                __asm__("movupd [r12+r13*8], xmm3");
                __asm__("movupd [r12+r13*8+0x10], xmm1");
                r13_18 = r13_18 + 4;
            } while (r13_18 != rbx6);
            rbp16 = rbx6;
            if (rbx6 == rax25) {
                addr_160_4:
                ++r15_10;
                if (r15_10 == r9_26) 
                    break; else 
                    continue;
            } else {
                goto addr_200_7;
            }
            addr_220_18:
            if (~rbp16 != r14_8) {
                do {
                    rdi14->f0 = rsi22->f0;
                    rdi27 = reinterpret_cast<struct s66*>(&rdi14->f4);
                    rsi28 = reinterpret_cast<struct s67*>(&rsi22->f4);
                    __asm__("subsd xmm1, [r8+r13*8]");
                    rdi27->f0 = rsi28->f0;
                    rdi29 = reinterpret_cast<struct s64*>(&rdi27->f4);
                    rsi30 = reinterpret_cast<struct s65*>(&rsi28->f4);
                    rdi29->f0 = rsi30->f0;
                    rdi31 = reinterpret_cast<struct s66*>(&rdi29->f4);
                    rsi32 = reinterpret_cast<struct s67*>(&rsi30->f4);
                    __asm__("subsd xmm2, [r8+r13*8+0x8]");
                    rdi31->f0 = rsi32->f0;
                    rdi14 = reinterpret_cast<struct s64*>(&rdi31->f4);
                    rsi22 = reinterpret_cast<struct s65*>(&rsi32->f4);
                    r13_20 = r13_20 + 2;
                } while (r13_20 != rax33);
                goto addr_160_4;
            }
        }
    }
    if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(&rdi14) < reinterpret_cast<int32_t>(fputc) == fputc)) | reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&rdi14) == fputc))) {
        __asm__("addsd xmm0, [rip+0x0]");
        *reinterpret_cast<uint32_t*>(&rdi34) = r9d35 & 0xfffffffe;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi34) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&r8_36) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_36) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            r10_37 = r8_36;
            do {
                (rcx38 + r8_36 * 0x4b0)[r10_37] = reinterpret_cast<int64_t>(fputc);
                __asm__("xorpd xmm1, xmm1");
                if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(&rsi22) < reinterpret_cast<int32_t>(fputc) == fputc)) | reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&rsi22) == fputc))) {
                    *reinterpret_cast<int32_t*>(&r14_39) = reinterpret_cast<int32_t>(fputc);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_39) + 4) = reinterpret_cast<int32_t>(fputc);
                    if (*reinterpret_cast<int32_t*>(&rsi22) != 1) {
                        do {
                            rdi34->f0 = rsi22->f0;
                            rdi40 = reinterpret_cast<struct s69*>(&rdi34->f4);
                            rsi41 = reinterpret_cast<struct s67*>(&rsi22->f4);
                            __asm__("mulsd xmm2, [r15+r10*8]");
                            __asm__("addsd xmm2, xmm1");
                            rdi40->f0 = rsi41->f0;
                            rdi42 = reinterpret_cast<struct s68*>(&rdi40->f4);
                            rsi43 = reinterpret_cast<struct s65*>(&rsi41->f4);
                            rdi42->f0 = rsi43->f0;
                            rdi44 = reinterpret_cast<struct s69*>(&rdi42->f4);
                            rsi45 = reinterpret_cast<struct s67*>(&rsi43->f4);
                            __asm__("mulsd xmm1, [r15+r10*8]");
                            __asm__("addsd xmm1, xmm2");
                            rdi44->f0 = rsi45->f0;
                            rdi34 = reinterpret_cast<struct s68*>(&rdi44->f4);
                            rsi22 = reinterpret_cast<struct s65*>(&rsi45->f4);
                            r14_39 = reinterpret_cast<struct s68*>(reinterpret_cast<int64_t>(r14_39) + 2);
                        } while (r14_39 != rdi34);
                    }
                    if ((r9b46 & 1) != fputc) {
                        rdi34->f0 = rsi22->f0;
                        rdi47 = reinterpret_cast<struct s69*>(&rdi34->f4);
                        rsi48 = reinterpret_cast<struct s67*>(&rsi22->f4);
                        __asm__("mulsd xmm2, [rbx+r10*8]");
                        __asm__("addsd xmm1, xmm2");
                        rdi47->f0 = rsi48->f0;
                        rdi34 = reinterpret_cast<struct s68*>(&rdi47->f4);
                        rsi22 = reinterpret_cast<struct s65*>(&rsi48->f4);
                    }
                }
                __asm__("divsd xmm1, xmm0");
                rdi34->f0 = rsi22->f0;
                rdi49 = reinterpret_cast<struct s69*>(&rdi34->f4);
                rsi50 = reinterpret_cast<struct s67*>(&rsi22->f4);
                rdi49->f0 = rsi50->f0;
                rdi34 = reinterpret_cast<struct s68*>(&rdi49->f4);
                rsi22 = reinterpret_cast<struct s65*>(&rsi50->f4);
                ++r10_37;
            } while (r10_37 < rax51);
            ++r8_36;
        } while (r8_36 != rax52);
    }
    goto v53;
}

void submain(int32_t edi, int64_t rsi) {
    fun_39f(0x19a280, 8);
}

