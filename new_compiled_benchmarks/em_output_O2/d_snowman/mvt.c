
struct s0 {
    int32_t f0;
    int32_t f4;
};

void fun_4b0(int64_t rdi, struct s0* rsi, uint64_t rdx, signed char** rcx);

void fun_4b8(int64_t rdi, struct s0* rsi, uint64_t rdx, signed char** rcx);

void fun_4c0(int64_t rdi, struct s0* rsi, uint64_t rdx, signed char** rcx);

void fun_4c8(int64_t rdi, struct s0* rsi, uint64_t rdx, signed char** rcx);

void fun_4a8(int32_t* rdi, struct s0* rsi, uint64_t rdx, signed char** rcx) {
    int64_t r14_5;
    int64_t r15_6;
    int64_t r12_7;
    int64_t r13_8;
    int64_t v9;

    fun_4b0(r14_5, rsi, rdx, rcx);
    fun_4b8(r15_6, rsi, rdx, rcx);
    fun_4c0(r12_7, rsi, rdx, rcx);
    fun_4c8(r13_8, rsi, rdx, rcx);
    goto v9;
}

void fputc();

void fun_566();

void fun_583(signed char** rdi, int64_t rsi, int64_t rdx);

void fun_59c();

void fun_5e6();

void fun_5b8();

void fun_604(signed char** rdi, int64_t rsi, int64_t rdx);

void fun_61d(int64_t rdi, struct s0* rsi, uint64_t rdx, signed char** rcx);

void fun_538() {
    signed char** v1;
    int64_t rbp2;
    int32_t eax3;
    signed char** rdi4;
    signed char** rsi5;
    int64_t rbp6;
    signed char** rsi7;
    signed char** rdi8;
    int32_t eax9;
    int32_t* rbx10;
    int64_t r14_11;
    int64_t r15_12;
    int64_t r12_13;
    int64_t r13_14;
    int64_t v15;

    while (v1 = reinterpret_cast<signed char**>(__return_address()), ++rbp2, rbp2 != 0x7d0) {
        eax3 = *reinterpret_cast<int32_t*>(&rbp2) * 0xffffcccd;
        __asm__("ror ax, 0x2");
        if (static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax3)) <= 0xccc) {
            *reinterpret_cast<int32_t*>(&rdi4) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi4) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi5 = v1;
            fun_566();
        }
        *rdi4 = *rsi5;
        rdi4 = v1;
        rsi5 = reinterpret_cast<signed char**>(0x531);
        fun_538();
    }
    *reinterpret_cast<int32_t*>(&rbp6) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp6) + 4) = reinterpret_cast<int32_t>(fputc);
    fun_583(v1, 0x56f, 0x576);
    rsi7 = reinterpret_cast<signed char**>(0x58a);
    rdi8 = v1;
    fun_59c();
    do {
        eax9 = *reinterpret_cast<int32_t*>(&rbp6) * 0xffffcccd;
        __asm__("ror ax, 0x2");
        if (static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax9)) <= 0xccc) {
            *reinterpret_cast<int32_t*>(&rdi8) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi8) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi7 = v1;
            fun_5e6();
        }
        *rdi8 = *rsi7;
        rdi8 = v1;
        rsi7 = reinterpret_cast<signed char**>(0x5b1);
        fun_5b8();
        ++rbp6;
    } while (rbp6 != 0x7d0);
    fun_604(v1, 0x5ef, 0x5f6);
    fun_61d(0x60b, 22, 1, v1);
    fun_4a8(rbx10, 22, 1, v1);
    fun_4b0(r14_11, 22, 1, v1);
    fun_4b8(r15_12, 22, 1, v1);
    fun_4c0(r12_13, 22, 1, v1);
    fun_4c8(r13_14, 22, 1, v1);
    goto v15;
}

void fun_566() {
    signed char** v1;
    signed char** rdi2;
    signed char** rsi3;
    int64_t rbp4;
    int32_t eax5;
    int64_t rbp6;
    signed char** rsi7;
    signed char** rdi8;
    int32_t eax9;
    int32_t* rbx10;
    int64_t r14_11;
    int64_t r15_12;
    int64_t r12_13;
    int64_t r13_14;
    int64_t v15;

    while (1) {
        v1 = reinterpret_cast<signed char**>(__return_address());
        do {
            *rdi2 = *rsi3;
            rdi2 = v1;
            rsi3 = reinterpret_cast<signed char**>(0x531);
            fun_538();
            ++rbp4;
            if (rbp4 == 0x7d0) 
                goto addr_568_7;
            eax5 = *reinterpret_cast<int32_t*>(&rbp4) * 0xffffcccd;
            __asm__("ror ax, 0x2");
        } while (static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax5)) > 0xccc);
        *reinterpret_cast<int32_t*>(&rdi2) = 10;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi2) + 4) = reinterpret_cast<int32_t>(fputc);
        rsi3 = v1;
        fun_566();
    }
    addr_568_7:
    *reinterpret_cast<int32_t*>(&rbp6) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp6) + 4) = reinterpret_cast<int32_t>(fputc);
    fun_583(v1, 0x56f, 0x576);
    rsi7 = reinterpret_cast<signed char**>(0x58a);
    rdi8 = v1;
    fun_59c();
    do {
        eax9 = *reinterpret_cast<int32_t*>(&rbp6) * 0xffffcccd;
        __asm__("ror ax, 0x2");
        if (static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax9)) <= 0xccc) {
            *reinterpret_cast<int32_t*>(&rdi8) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi8) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi7 = v1;
            fun_5e6();
        }
        *rdi8 = *rsi7;
        rdi8 = v1;
        rsi7 = reinterpret_cast<signed char**>(0x5b1);
        fun_5b8();
        ++rbp6;
    } while (rbp6 != 0x7d0);
    fun_604(v1, 0x5ef, 0x5f6);
    fun_61d(0x60b, 22, 1, v1);
    fun_4a8(rbx10, 22, 1, v1);
    fun_4b0(r14_11, 22, 1, v1);
    fun_4b8(r15_12, 22, 1, v1);
    fun_4c0(r12_13, 22, 1, v1);
    fun_4c8(r13_14, 22, 1, v1);
    goto v15;
}

void fun_5b8() {
    int64_t rbp1;
    int32_t eax2;
    signed char** rdi3;
    signed char** rsi4;
    int32_t* rbx5;
    int64_t r14_6;
    int64_t r15_7;
    int64_t r12_8;
    int64_t r13_9;
    int64_t v10;

    while (++rbp1, rbp1 != 0x7d0) {
        eax2 = *reinterpret_cast<int32_t*>(&rbp1) * 0xffffcccd;
        __asm__("ror ax, 0x2");
        if (static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax2)) <= 0xccc) {
            *reinterpret_cast<int32_t*>(&rdi3) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi3) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi4 = reinterpret_cast<signed char**>(__return_address());
            fun_5e6();
        }
        *rdi3 = *rsi4;
        rdi3 = reinterpret_cast<signed char**>(__return_address());
        rsi4 = reinterpret_cast<signed char**>(0x5b1);
        fun_5b8();
    }
    fun_604(__return_address(), 0x5ef, 0x5f6);
    fun_61d(0x60b, 22, 1, __return_address());
    fun_4a8(rbx5, 22, 1, __return_address());
    fun_4b0(r14_6, 22, 1, __return_address());
    fun_4b8(r15_7, 22, 1, __return_address());
    fun_4c0(r12_8, 22, 1, __return_address());
    fun_4c8(r13_9, 22, 1, __return_address());
    goto v10;
}

void fun_5e6() {
    signed char** v1;
    signed char** rdi2;
    signed char** rsi3;
    int64_t rbp4;
    int32_t eax5;
    int32_t* rbx6;
    int64_t r14_7;
    int64_t r15_8;
    int64_t r12_9;
    int64_t r13_10;
    int64_t v11;

    while (1) {
        v1 = reinterpret_cast<signed char**>(__return_address());
        do {
            *rdi2 = *rsi3;
            rdi2 = v1;
            rsi3 = reinterpret_cast<signed char**>(0x5b1);
            fun_5b8();
            ++rbp4;
            if (rbp4 == 0x7d0) 
                goto addr_5e8_7;
            eax5 = *reinterpret_cast<int32_t*>(&rbp4) * 0xffffcccd;
            __asm__("ror ax, 0x2");
        } while (static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax5)) > 0xccc);
        *reinterpret_cast<int32_t*>(&rdi2) = 10;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi2) + 4) = reinterpret_cast<int32_t>(fputc);
        rsi3 = v1;
        fun_5e6();
    }
    addr_5e8_7:
    fun_604(v1, 0x5ef, 0x5f6);
    fun_61d(0x60b, 22, 1, v1);
    fun_4a8(rbx6, 22, 1, v1);
    fun_4b0(r14_7, 22, 1, v1);
    fun_4b8(r15_8, 22, 1, v1);
    fun_4c0(r12_9, 22, 1, v1);
    fun_4c8(r13_10, 22, 1, v1);
    goto v11;
}

void fun_518();

void fun_4fd(int64_t rdi, int64_t rsi, int64_t rdx) {
    signed char** v4;
    signed char** rsi5;
    int64_t rbp6;
    signed char** rdi7;
    int32_t eax8;
    int64_t rbp9;
    signed char** rsi10;
    signed char** rdi11;
    int32_t eax12;
    int32_t* rbx13;
    int64_t r14_14;
    int64_t r15_15;
    int64_t r12_16;
    int64_t r13_17;
    int64_t v18;

    v4 = reinterpret_cast<signed char**>(__return_address());
    rsi5 = reinterpret_cast<signed char**>(0x504);
    *reinterpret_cast<int32_t*>(&rbp6) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp6) + 4) = reinterpret_cast<int32_t>(fputc);
    rdi7 = v4;
    fun_518();
    do {
        eax8 = *reinterpret_cast<int32_t*>(&rbp6) * 0xffffcccd;
        __asm__("ror ax, 0x2");
        if (static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax8)) <= 0xccc) {
            *reinterpret_cast<int32_t*>(&rdi7) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi7) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi5 = v4;
            fun_566();
        }
        *rdi7 = *rsi5;
        rdi7 = v4;
        rsi5 = reinterpret_cast<signed char**>(0x531);
        fun_538();
        ++rbp6;
    } while (rbp6 != 0x7d0);
    *reinterpret_cast<int32_t*>(&rbp9) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp9) + 4) = reinterpret_cast<int32_t>(fputc);
    fun_583(v4, 0x56f, 0x576);
    rsi10 = reinterpret_cast<signed char**>(0x58a);
    rdi11 = v4;
    fun_59c();
    do {
        eax12 = *reinterpret_cast<int32_t*>(&rbp9) * 0xffffcccd;
        __asm__("ror ax, 0x2");
        if (static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax12)) <= 0xccc) {
            *reinterpret_cast<int32_t*>(&rdi11) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi11) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi10 = v4;
            fun_5e6();
        }
        *rdi11 = *rsi10;
        rdi11 = v4;
        rsi10 = reinterpret_cast<signed char**>(0x5b1);
        fun_5b8();
        ++rbp9;
    } while (rbp9 != 0x7d0);
    fun_604(v4, 0x5ef, 0x5f6);
    fun_61d(0x60b, 22, 1, v4);
    fun_4a8(rbx13, 22, 1, v4);
    fun_4b0(r14_14, 22, 1, v4);
    fun_4b8(r15_15, 22, 1, v4);
    fun_4c0(r12_16, 22, 1, v4);
    fun_4c8(r13_17, 22, 1, v4);
    goto v18;
}

void fun_4b0(int64_t rdi, struct s0* rsi, uint64_t rdx, signed char** rcx) {
    int64_t r15_5;
    int64_t r12_6;
    int64_t r13_7;
    int64_t v8;

    fun_4b8(r15_5, rsi, rdx, rcx);
    fun_4c0(r12_6, rsi, rdx, rcx);
    fun_4c8(r13_7, rsi, rdx, rcx);
    goto v8;
}

int64_t fun_1e2(int64_t rdi, int64_t rsi);

int64_t fun_1f4(int64_t rdi, int64_t rsi);

int64_t fun_206(int64_t rdi, int64_t rsi);

struct s1 {
    int32_t f0;
    int32_t f4;
};

struct s2 {
    int32_t f0;
    int32_t f4;
};

int64_t fun_218(struct s1* rdi, struct s2* rsi);

int32_t g7d0;

int32_t g8 = 0xfff8553;

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

signed char*** g4e0 = reinterpret_cast<signed char***>(0x48240c8948088b48);

void fun_1d0(int64_t rdi, int64_t rsi) {
    signed char** v3;
    int32_t* rbx4;
    int32_t* rax5;
    int64_t rax6;
    int64_t r14_7;
    int64_t rax8;
    int64_t r15_9;
    int64_t rax10;
    int64_t r12_11;
    int64_t rax12;
    int64_t r13_13;
    int64_t rax14;
    struct s3* rdi15;
    struct s0* rsi16;
    uint64_t rcx17;
    uint64_t rdx18;
    struct s4* rsi19;
    struct s5* rdi20;
    int32_t* rsi21;
    int32_t* rdi22;
    signed char** rcx23;
    int64_t rdx24;
    struct s6* rsi25;
    struct s7* rdi26;
    int32_t* rdi27;
    struct s8* rsi28;
    struct s9* rsi29;
    struct s10* rdi30;
    struct s11* rdi31;
    struct s12* rsi32;
    uint64_t rax33;
    struct s13* rdi34;
    struct s14* rdi35;
    uint64_t rdx36;
    struct s15* rsi37;
    struct s16* rdi38;
    struct s17* rsi39;
    int32_t ebp40;
    signed char*** rax41;
    signed char** v42;
    signed char** rsi43;
    int64_t rbp44;
    signed char** rdi45;
    int32_t eax46;
    int64_t rbp47;
    signed char** rsi48;
    signed char** rdi49;
    int32_t eax50;
    int64_t v51;

    v3 = reinterpret_cast<signed char**>(__return_address());
    rbx4 = rax5;
    rax6 = fun_1e2(0x7d0, 8);
    r14_7 = rax6;
    rax8 = fun_1f4(0x7d0, 8);
    r15_9 = rax8;
    rax10 = fun_206(0x7d0, 8);
    r12_11 = rax10;
    rax12 = fun_218(0x7d0, 8);
    r13_13 = rax12;
    *reinterpret_cast<int32_t*>(&rax14) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax14) + 4) = reinterpret_cast<int32_t>(fputc);
    g7d0 = g8;
    rdi15 = reinterpret_cast<struct s3*>(0x7d4);
    rsi16 = reinterpret_cast<struct s0*>(12);
    __asm__("movdqa xmm1, [rip+0x0]");
    __asm__("movdqa xmm2, [rip+0x0]");
    __asm__("movdqa xmm3, [rip+0x0]");
    __asm__("movapd xmm4, [rip+0x0]");
    __asm__("movdqa xmm5, [rip+0x0]");
    *reinterpret_cast<int32_t*>(&rcx17) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx17) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        __asm__("xorps xmm6, xmm6");
        __asm__("cvtsi2sd xmm6, ecx");
        __asm__("divsd xmm6, xmm0");
        rdi15->f0 = rsi16->f0;
        rdx18 = rcx17 + 1;
        __asm__("xorpd xmm6, xmm6");
        if (rdx18 != 0x7d0) {
            __asm__("xorps xmm6, xmm6");
            __asm__("cvtsi2sd xmm6, edx");
            __asm__("divsd xmm6, xmm0");
        }
        *reinterpret_cast<int32_t*>(&rsi19) = static_cast<int32_t>(rcx17 - 0x7cd);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi19) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdi20) = static_cast<int32_t>(rcx17 + 3);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi20) + 4) = reinterpret_cast<int32_t>(fputc);
        if (rcx17 >= 0x7cd) {
            *reinterpret_cast<int32_t*>(&rdi20) = *reinterpret_cast<int32_t*>(&rsi19);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi20) + 4) = reinterpret_cast<int32_t>(fputc);
        }
        __asm__("xorps xmm7, xmm7");
        __asm__("cvtsi2sd xmm7, edi");
        rdi20->f0 = rsi19->f0;
        __asm__("divsd xmm7, xmm0");
        rdi20->f4 = rsi19->f4;
        *reinterpret_cast<int32_t*>(&rsi21) = static_cast<int32_t>(rcx17 - 0x7cc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi21) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdi22) = static_cast<int32_t>(rcx17 + 4);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi22) + 4) = reinterpret_cast<int32_t>(fputc);
        if (rcx17 >= 0x7cc) {
            *reinterpret_cast<int32_t*>(&rdi22) = *reinterpret_cast<int32_t*>(&rsi21);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi22) + 4) = reinterpret_cast<int32_t>(fputc);
        }
        __asm__("xorps xmm6, xmm6");
        __asm__("cvtsi2sd xmm6, edi");
        __asm__("divsd xmm6, xmm0");
        *rdi22 = *rsi21;
        __asm__("movd xmm6, rcx");
        __asm__("pshufd xmm6, xmm6, 0x44");
        *reinterpret_cast<int32_t*>(&rsi16) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi16) + 4) = reinterpret_cast<int32_t>(fputc);
        __asm__("movdqa xmm7, xmm1");
        do {
            __asm__("movdqa xmm8, xmm7");
            __asm__("psrlq xmm8, 0x20");
            __asm__("pmuludq xmm8, xmm6");
            __asm__("movdqa xmm9, xmm6");
            __asm__("psrlq xmm9, 0x20");
            __asm__("pmuludq xmm9, xmm7");
            __asm__("paddq xmm9, xmm8");
            __asm__("movdqa xmm8, xmm7");
            __asm__("pmuludq xmm8, xmm6");
            __asm__("psllq xmm9, 0x20");
            __asm__("paddq xmm8, xmm9");
            __asm__("pshufd xmm9, xmm8, 0xe8");
            __asm__("pshufd xmm10, xmm8, 0xee");
            __asm__("pmuludq xmm8, xmm2");
            __asm__("pshufd xmm8, xmm8, 0xed");
            __asm__("pmuludq xmm10, xmm2");
            __asm__("pshufd xmm10, xmm10, 0xed");
            __asm__("punpckldq xmm8, xmm10");
            __asm__("psrld xmm8, 0x7");
            __asm__("pshufd xmm10, xmm8, 0xf5");
            __asm__("pmuludq xmm8, xmm3");
            __asm__("pmuludq xmm10, xmm3");
            __asm__("punpckldq xmm8, xmm10");
            __asm__("psubd xmm9, xmm8");
            __asm__("cvtdq2pd xmm8, xmm9");
            __asm__("divpd xmm8, xmm4");
            rdi15 = reinterpret_cast<struct s3*>(rbx4 + rcx17 * 0xfa0);
            __asm__("movupd [rdi+rsi*8], xmm8");
            rsi16 = reinterpret_cast<struct s0*>(reinterpret_cast<uint64_t>(rsi16) + 2);
            __asm__("paddq xmm7, xmm5");
        } while (!reinterpret_cast<int1_t>(rsi16 == 0x7d0));
        rcx17 = rdx18;
    } while (rdx18 != 0x7d0);
    *reinterpret_cast<int32_t*>(&rcx23) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx23) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        rdi15->f0 = rsi16->f0;
        *reinterpret_cast<int32_t*>(&rdx24) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx24) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rsi25 = reinterpret_cast<struct s6*>(rbx4 + rax14 * 0xfa0);
            rdi26 = reinterpret_cast<struct s7*>(rdx24 * 8);
            rdi26->f0 = rsi25->f0;
            rdi27 = &rdi26->f4;
            rsi28 = reinterpret_cast<struct s8*>(&rsi25->f4);
            __asm__("mulsd xmm1, [r12+rdx*8]");
            __asm__("addsd xmm1, xmm0");
            *rdi27 = rsi28->f0;
            rsi29 = reinterpret_cast<struct s9*>(&rsi28->f4);
            rdi30 = reinterpret_cast<struct s10*>(reinterpret_cast<uint64_t>(rdi27 + 1) | 8);
            rdi30->f0 = rsi29->f0;
            rdi31 = reinterpret_cast<struct s11*>(&rdi30->f4);
            rsi32 = reinterpret_cast<struct s12*>(&rsi29->f4);
            __asm__("mulsd xmm0, [r12+rdi]");
            __asm__("addsd xmm0, xmm1");
            rdi31->f0 = rsi32->f0;
            rdi15 = reinterpret_cast<struct s3*>(&rdi31->f4);
            rsi16 = reinterpret_cast<struct s0*>(&rsi32->f4);
            rdx24 = rdx24 + 2;
        } while (rdx24 != 0x7d0);
        ++rax14;
    } while (rax14 != 0x7d0);
    do {
        rdi15->f0 = rsi16->f0;
        rdi15 = reinterpret_cast<struct s3*>(&rdi15->f4);
        rsi16 = reinterpret_cast<struct s0*>(&rsi16->f4);
        *reinterpret_cast<int32_t*>(&rax33) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax33) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rdi15->f0 = rsi16->f0;
            rdi34 = reinterpret_cast<struct s13*>(&rdi15->f4);
            __asm__("mulsd xmm1, [r13+rax*8+0x0]");
            __asm__("addsd xmm1, xmm0");
            rdi34->f0 = rsi16->f4;
            rdi35 = reinterpret_cast<struct s14*>(&rdi34->f4);
            rdx36 = rax33 | 1;
            rsi37 = reinterpret_cast<struct s15*>(rbx4 + rdx36 * 0xfa0);
            rdi35->f0 = rsi37->f0;
            rdi38 = reinterpret_cast<struct s16*>(&rdi35->f4);
            rsi39 = reinterpret_cast<struct s17*>(&rsi37->f4);
            __asm__("mulsd xmm0, [r13+rdx*8+0x0]");
            __asm__("addsd xmm0, xmm1");
            rdi38->f0 = rsi39->f0;
            rdi15 = reinterpret_cast<struct s3*>(&rdi38->f4);
            rsi16 = reinterpret_cast<struct s0*>(&rsi39->f4);
            rax33 = rax33 + 2;
        } while (rax33 != 0x7d0);
        rcx23 = reinterpret_cast<signed char**>(reinterpret_cast<int64_t>(rcx23) + 1);
    } while (!reinterpret_cast<int1_t>(rcx23 == 0x7d0));
    if (ebp40 >= 43 && **v3 == fputc) {
        rax41 = g4e0;
        v42 = *rax41;
        fun_4fd(0x4ee, 22, 1);
        rsi43 = reinterpret_cast<signed char**>(0x504);
        *reinterpret_cast<int32_t*>(&rbp44) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp44) + 4) = reinterpret_cast<int32_t>(fputc);
        rdi45 = v42;
        fun_518();
        do {
            eax46 = *reinterpret_cast<int32_t*>(&rbp44) * 0xffffcccd;
            __asm__("ror ax, 0x2");
            if (static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax46)) <= 0xccc) {
                *reinterpret_cast<int32_t*>(&rdi45) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi45) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi43 = v42;
                fun_566();
            }
            *rdi45 = *rsi43;
            rdi45 = v42;
            rsi43 = reinterpret_cast<signed char**>(0x531);
            fun_538();
            ++rbp44;
        } while (rbp44 != 0x7d0);
        *reinterpret_cast<int32_t*>(&rbp47) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp47) + 4) = reinterpret_cast<int32_t>(fputc);
        fun_583(v42, 0x56f, 0x576);
        rsi48 = reinterpret_cast<signed char**>(0x58a);
        rdi49 = v42;
        fun_59c();
        do {
            eax50 = *reinterpret_cast<int32_t*>(&rbp47) * 0xffffcccd;
            __asm__("ror ax, 0x2");
            if (static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax50)) <= 0xccc) {
                *reinterpret_cast<int32_t*>(&rdi49) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi49) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi48 = v42;
                fun_5e6();
            }
            *rdi49 = *rsi48;
            rdi49 = v42;
            rsi48 = reinterpret_cast<signed char**>(0x5b1);
            fun_5b8();
            ++rbp47;
        } while (rbp47 != 0x7d0);
        fun_604(v42, 0x5ef, 0x5f6);
        *reinterpret_cast<int32_t*>(&rsi16) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi16) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx36) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx36) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx23 = v42;
        fun_61d(0x60b, 22, 1, rcx23);
    }
    fun_4a8(rbx4, rsi16, rdx36, rcx23);
    fun_4b0(r14_7, rsi16, rdx36, rcx23);
    fun_4b8(r15_9, rsi16, rdx36, rcx23);
    fun_4c0(r12_11, rsi16, rdx36, rcx23);
    fun_4c8(r13_13, rsi16, rdx36, rcx23);
    goto v51;
}

void fun_518() {
    signed char** v1;
    int32_t eax2;
    int64_t rbp3;
    signed char** rdi4;
    signed char** rsi5;
    int64_t rbp6;
    signed char** rsi7;
    signed char** rdi8;
    int32_t eax9;
    int32_t* rbx10;
    int64_t r14_11;
    int64_t r15_12;
    int64_t r12_13;
    int64_t r13_14;
    int64_t v15;

    v1 = reinterpret_cast<signed char**>(__return_address());
    do {
        eax2 = *reinterpret_cast<int32_t*>(&rbp3) * 0xffffcccd;
        __asm__("ror ax, 0x2");
        if (static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax2)) <= 0xccc) {
            *reinterpret_cast<int32_t*>(&rdi4) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi4) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi5 = v1;
            fun_566();
        }
        *rdi4 = *rsi5;
        rdi4 = v1;
        rsi5 = reinterpret_cast<signed char**>(0x531);
        fun_538();
        ++rbp3;
    } while (rbp3 != 0x7d0);
    *reinterpret_cast<int32_t*>(&rbp6) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp6) + 4) = reinterpret_cast<int32_t>(fputc);
    fun_583(v1, 0x56f, 0x576);
    rsi7 = reinterpret_cast<signed char**>(0x58a);
    rdi8 = v1;
    fun_59c();
    do {
        eax9 = *reinterpret_cast<int32_t*>(&rbp6) * 0xffffcccd;
        __asm__("ror ax, 0x2");
        if (static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax9)) <= 0xccc) {
            *reinterpret_cast<int32_t*>(&rdi8) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi8) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi7 = v1;
            fun_5e6();
        }
        *rdi8 = *rsi7;
        rdi8 = v1;
        rsi7 = reinterpret_cast<signed char**>(0x5b1);
        fun_5b8();
        ++rbp6;
    } while (rbp6 != 0x7d0);
    fun_604(v1, 0x5ef, 0x5f6);
    fun_61d(0x60b, 22, 1, v1);
    fun_4a8(rbx10, 22, 1, v1);
    fun_4b0(r14_11, 22, 1, v1);
    fun_4b8(r15_12, 22, 1, v1);
    fun_4c0(r12_13, 22, 1, v1);
    fun_4c8(r13_14, 22, 1, v1);
    goto v15;
}

void fun_4b8(int64_t rdi, struct s0* rsi, uint64_t rdx, signed char** rcx) {
    int64_t r12_5;
    int64_t r13_6;
    int64_t v7;

    fun_4c0(r12_5, rsi, rdx, rcx);
    fun_4c8(r13_6, rsi, rdx, rcx);
    goto v7;
}

void fun_583(signed char** rdi, int64_t rsi, int64_t rdx) {
    signed char** v4;
    signed char** rsi5;
    signed char** rdi6;
    int32_t eax7;
    int64_t rbp8;
    int32_t* rbx9;
    int64_t r14_10;
    int64_t r15_11;
    int64_t r12_12;
    int64_t r13_13;
    int64_t v14;

    v4 = reinterpret_cast<signed char**>(__return_address());
    rsi5 = reinterpret_cast<signed char**>(0x58a);
    rdi6 = v4;
    fun_59c();
    do {
        eax7 = *reinterpret_cast<int32_t*>(&rbp8) * 0xffffcccd;
        __asm__("ror ax, 0x2");
        if (static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax7)) <= 0xccc) {
            *reinterpret_cast<int32_t*>(&rdi6) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi6) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi5 = v4;
            fun_5e6();
        }
        *rdi6 = *rsi5;
        rdi6 = v4;
        rsi5 = reinterpret_cast<signed char**>(0x5b1);
        fun_5b8();
        ++rbp8;
    } while (rbp8 != 0x7d0);
    fun_604(v4, 0x5ef, 0x5f6);
    fun_61d(0x60b, 22, 1, v4);
    fun_4a8(rbx9, 22, 1, v4);
    fun_4b0(r14_10, 22, 1, v4);
    fun_4b8(r15_11, 22, 1, v4);
    fun_4c0(r12_12, 22, 1, v4);
    fun_4c8(r13_13, 22, 1, v4);
    goto v14;
}

void fun_604(signed char** rdi, int64_t rsi, int64_t rdx) {
    signed char** rbp4;
    int32_t* rbx5;
    int64_t r14_6;
    int64_t r15_7;
    int64_t r12_8;
    int64_t r13_9;
    int64_t v10;

    fun_61d(0x60b, 22, 1, rbp4);
    fun_4a8(rbx5, 22, 1, rbp4);
    fun_4b0(r14_6, 22, 1, rbp4);
    fun_4b8(r15_7, 22, 1, rbp4);
    fun_4c0(r12_8, 22, 1, rbp4);
    fun_4c8(r13_9, 22, 1, rbp4);
    goto v10;
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

int64_t fun_1e2(int64_t rdi, int64_t rsi) {
    signed char** v3;
    int64_t r14_4;
    int64_t rax5;
    int64_t rax6;
    int64_t r15_7;
    int64_t rax8;
    int64_t r12_9;
    int64_t rax10;
    int64_t r13_11;
    int64_t rax12;
    struct s3* rdi13;
    struct s0* rsi14;
    uint64_t rcx15;
    uint64_t rdx16;
    struct s18* rsi17;
    struct s19* rdi18;
    int32_t* rsi19;
    int32_t* rdi20;
    int32_t* rbx21;
    signed char** rcx22;
    int64_t rdx23;
    struct s20* rsi24;
    int32_t* rbx25;
    struct s21* rdi26;
    int32_t* rdi27;
    struct s22* rsi28;
    struct s23* rsi29;
    struct s24* rdi30;
    struct s25* rdi31;
    struct s26* rsi32;
    uint64_t rax33;
    struct s13* rdi34;
    struct s14* rdi35;
    uint64_t rdx36;
    struct s27* rsi37;
    int32_t* rbx38;
    struct s16* rdi39;
    struct s28* rsi40;
    int32_t ebp41;
    signed char*** rax42;
    signed char** v43;
    signed char** rsi44;
    int64_t rbp45;
    signed char** rdi46;
    int32_t eax47;
    int64_t rbp48;
    signed char** rsi49;
    signed char** rdi50;
    int32_t eax51;
    int32_t* rbx52;
    int64_t v53;

    v3 = reinterpret_cast<signed char**>(__return_address());
    r14_4 = rax5;
    rax6 = fun_1f4(0x7d0, 8);
    r15_7 = rax6;
    rax8 = fun_206(0x7d0, 8);
    r12_9 = rax8;
    rax10 = fun_218(0x7d0, 8);
    r13_11 = rax10;
    *reinterpret_cast<int32_t*>(&rax12) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax12) + 4) = reinterpret_cast<int32_t>(fputc);
    g7d0 = g8;
    rdi13 = reinterpret_cast<struct s3*>(0x7d4);
    rsi14 = reinterpret_cast<struct s0*>(12);
    __asm__("movdqa xmm1, [rip+0x0]");
    __asm__("movdqa xmm2, [rip+0x0]");
    __asm__("movdqa xmm3, [rip+0x0]");
    __asm__("movapd xmm4, [rip+0x0]");
    __asm__("movdqa xmm5, [rip+0x0]");
    *reinterpret_cast<int32_t*>(&rcx15) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx15) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        __asm__("xorps xmm6, xmm6");
        __asm__("cvtsi2sd xmm6, ecx");
        __asm__("divsd xmm6, xmm0");
        rdi13->f0 = rsi14->f0;
        rdx16 = rcx15 + 1;
        __asm__("xorpd xmm6, xmm6");
        if (rdx16 != 0x7d0) {
            __asm__("xorps xmm6, xmm6");
            __asm__("cvtsi2sd xmm6, edx");
            __asm__("divsd xmm6, xmm0");
        }
        *reinterpret_cast<int32_t*>(&rsi17) = static_cast<int32_t>(rcx15 - 0x7cd);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi17) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdi18) = static_cast<int32_t>(rcx15 + 3);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi18) + 4) = reinterpret_cast<int32_t>(fputc);
        if (rcx15 >= 0x7cd) {
            *reinterpret_cast<int32_t*>(&rdi18) = *reinterpret_cast<int32_t*>(&rsi17);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi18) + 4) = reinterpret_cast<int32_t>(fputc);
        }
        __asm__("xorps xmm7, xmm7");
        __asm__("cvtsi2sd xmm7, edi");
        rdi18->f0 = rsi17->f0;
        __asm__("divsd xmm7, xmm0");
        rdi18->f4 = rsi17->f4;
        *reinterpret_cast<int32_t*>(&rsi19) = static_cast<int32_t>(rcx15 - 0x7cc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi19) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdi20) = static_cast<int32_t>(rcx15 + 4);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi20) + 4) = reinterpret_cast<int32_t>(fputc);
        if (rcx15 >= 0x7cc) {
            *reinterpret_cast<int32_t*>(&rdi20) = *reinterpret_cast<int32_t*>(&rsi19);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi20) + 4) = reinterpret_cast<int32_t>(fputc);
        }
        __asm__("xorps xmm6, xmm6");
        __asm__("cvtsi2sd xmm6, edi");
        __asm__("divsd xmm6, xmm0");
        *rdi20 = *rsi19;
        __asm__("movd xmm6, rcx");
        __asm__("pshufd xmm6, xmm6, 0x44");
        *reinterpret_cast<int32_t*>(&rsi14) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi14) + 4) = reinterpret_cast<int32_t>(fputc);
        __asm__("movdqa xmm7, xmm1");
        do {
            __asm__("movdqa xmm8, xmm7");
            __asm__("psrlq xmm8, 0x20");
            __asm__("pmuludq xmm8, xmm6");
            __asm__("movdqa xmm9, xmm6");
            __asm__("psrlq xmm9, 0x20");
            __asm__("pmuludq xmm9, xmm7");
            __asm__("paddq xmm9, xmm8");
            __asm__("movdqa xmm8, xmm7");
            __asm__("pmuludq xmm8, xmm6");
            __asm__("psllq xmm9, 0x20");
            __asm__("paddq xmm8, xmm9");
            __asm__("pshufd xmm9, xmm8, 0xe8");
            __asm__("pshufd xmm10, xmm8, 0xee");
            __asm__("pmuludq xmm8, xmm2");
            __asm__("pshufd xmm8, xmm8, 0xed");
            __asm__("pmuludq xmm10, xmm2");
            __asm__("pshufd xmm10, xmm10, 0xed");
            __asm__("punpckldq xmm8, xmm10");
            __asm__("psrld xmm8, 0x7");
            __asm__("pshufd xmm10, xmm8, 0xf5");
            __asm__("pmuludq xmm8, xmm3");
            __asm__("pmuludq xmm10, xmm3");
            __asm__("punpckldq xmm8, xmm10");
            __asm__("psubd xmm9, xmm8");
            __asm__("cvtdq2pd xmm8, xmm9");
            __asm__("divpd xmm8, xmm4");
            rdi13 = reinterpret_cast<struct s3*>(rbx21 + rcx15 * 0xfa0);
            __asm__("movupd [rdi+rsi*8], xmm8");
            rsi14 = reinterpret_cast<struct s0*>(reinterpret_cast<uint64_t>(rsi14) + 2);
            __asm__("paddq xmm7, xmm5");
        } while (!reinterpret_cast<int1_t>(rsi14 == 0x7d0));
        rcx15 = rdx16;
    } while (rdx16 != 0x7d0);
    *reinterpret_cast<int32_t*>(&rcx22) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx22) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        rdi13->f0 = rsi14->f0;
        *reinterpret_cast<int32_t*>(&rdx23) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx23) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rsi24 = reinterpret_cast<struct s20*>(rbx25 + rax12 * 0xfa0);
            rdi26 = reinterpret_cast<struct s21*>(rdx23 * 8);
            rdi26->f0 = rsi24->f0;
            rdi27 = &rdi26->f4;
            rsi28 = reinterpret_cast<struct s22*>(&rsi24->f4);
            __asm__("mulsd xmm1, [r12+rdx*8]");
            __asm__("addsd xmm1, xmm0");
            *rdi27 = rsi28->f0;
            rsi29 = reinterpret_cast<struct s23*>(&rsi28->f4);
            rdi30 = reinterpret_cast<struct s24*>(reinterpret_cast<uint64_t>(rdi27 + 1) | 8);
            rdi30->f0 = rsi29->f0;
            rdi31 = reinterpret_cast<struct s25*>(&rdi30->f4);
            rsi32 = reinterpret_cast<struct s26*>(&rsi29->f4);
            __asm__("mulsd xmm0, [r12+rdi]");
            __asm__("addsd xmm0, xmm1");
            rdi31->f0 = rsi32->f0;
            rdi13 = reinterpret_cast<struct s3*>(&rdi31->f4);
            rsi14 = reinterpret_cast<struct s0*>(&rsi32->f4);
            rdx23 = rdx23 + 2;
        } while (rdx23 != 0x7d0);
        ++rax12;
    } while (rax12 != 0x7d0);
    do {
        rdi13->f0 = rsi14->f0;
        rdi13 = reinterpret_cast<struct s3*>(&rdi13->f4);
        rsi14 = reinterpret_cast<struct s0*>(&rsi14->f4);
        *reinterpret_cast<int32_t*>(&rax33) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax33) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rdi13->f0 = rsi14->f0;
            rdi34 = reinterpret_cast<struct s13*>(&rdi13->f4);
            __asm__("mulsd xmm1, [r13+rax*8+0x0]");
            __asm__("addsd xmm1, xmm0");
            rdi34->f0 = rsi14->f4;
            rdi35 = reinterpret_cast<struct s14*>(&rdi34->f4);
            rdx36 = rax33 | 1;
            rsi37 = reinterpret_cast<struct s27*>(rbx38 + rdx36 * 0xfa0);
            rdi35->f0 = rsi37->f0;
            rdi39 = reinterpret_cast<struct s16*>(&rdi35->f4);
            rsi40 = reinterpret_cast<struct s28*>(&rsi37->f4);
            __asm__("mulsd xmm0, [r13+rdx*8+0x0]");
            __asm__("addsd xmm0, xmm1");
            rdi39->f0 = rsi40->f0;
            rdi13 = reinterpret_cast<struct s3*>(&rdi39->f4);
            rsi14 = reinterpret_cast<struct s0*>(&rsi40->f4);
            rax33 = rax33 + 2;
        } while (rax33 != 0x7d0);
        rcx22 = reinterpret_cast<signed char**>(reinterpret_cast<int64_t>(rcx22) + 1);
    } while (!reinterpret_cast<int1_t>(rcx22 == 0x7d0));
    if (ebp41 >= 43 && **v3 == fputc) {
        rax42 = g4e0;
        v43 = *rax42;
        fun_4fd(0x4ee, 22, 1);
        rsi44 = reinterpret_cast<signed char**>(0x504);
        *reinterpret_cast<int32_t*>(&rbp45) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp45) + 4) = reinterpret_cast<int32_t>(fputc);
        rdi46 = v43;
        fun_518();
        do {
            eax47 = *reinterpret_cast<int32_t*>(&rbp45) * 0xffffcccd;
            __asm__("ror ax, 0x2");
            if (static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax47)) <= 0xccc) {
                *reinterpret_cast<int32_t*>(&rdi46) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi46) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi44 = v43;
                fun_566();
            }
            *rdi46 = *rsi44;
            rdi46 = v43;
            rsi44 = reinterpret_cast<signed char**>(0x531);
            fun_538();
            ++rbp45;
        } while (rbp45 != 0x7d0);
        *reinterpret_cast<int32_t*>(&rbp48) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp48) + 4) = reinterpret_cast<int32_t>(fputc);
        fun_583(v43, 0x56f, 0x576);
        rsi49 = reinterpret_cast<signed char**>(0x58a);
        rdi50 = v43;
        fun_59c();
        do {
            eax51 = *reinterpret_cast<int32_t*>(&rbp48) * 0xffffcccd;
            __asm__("ror ax, 0x2");
            if (static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax51)) <= 0xccc) {
                *reinterpret_cast<int32_t*>(&rdi50) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi50) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi49 = v43;
                fun_5e6();
            }
            *rdi50 = *rsi49;
            rdi50 = v43;
            rsi49 = reinterpret_cast<signed char**>(0x5b1);
            fun_5b8();
            ++rbp48;
        } while (rbp48 != 0x7d0);
        fun_604(v43, 0x5ef, 0x5f6);
        *reinterpret_cast<int32_t*>(&rsi14) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi14) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx36) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx36) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx22 = v43;
        fun_61d(0x60b, 22, 1, rcx22);
    }
    fun_4a8(rbx52, rsi14, rdx36, rcx22);
    fun_4b0(r14_4, rsi14, rdx36, rcx22);
    fun_4b8(r15_7, rsi14, rdx36, rcx22);
    fun_4c0(r12_9, rsi14, rdx36, rcx22);
    fun_4c8(r13_11, rsi14, rdx36, rcx22);
    goto v53;
}

void fun_4c0(int64_t rdi, struct s0* rsi, uint64_t rdx, signed char** rcx) {
    int64_t r13_5;
    int64_t v6;

    fun_4c8(r13_5, rsi, rdx, rcx);
    goto v6;
}

void fun_59c() {
    signed char** v1;
    int32_t eax2;
    int64_t rbp3;
    signed char** rdi4;
    signed char** rsi5;
    int32_t* rbx6;
    int64_t r14_7;
    int64_t r15_8;
    int64_t r12_9;
    int64_t r13_10;
    int64_t v11;

    v1 = reinterpret_cast<signed char**>(__return_address());
    do {
        eax2 = *reinterpret_cast<int32_t*>(&rbp3) * 0xffffcccd;
        __asm__("ror ax, 0x2");
        if (static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax2)) <= 0xccc) {
            *reinterpret_cast<int32_t*>(&rdi4) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi4) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi5 = v1;
            fun_5e6();
        }
        *rdi4 = *rsi5;
        rdi4 = v1;
        rsi5 = reinterpret_cast<signed char**>(0x5b1);
        fun_5b8();
        ++rbp3;
    } while (rbp3 != 0x7d0);
    fun_604(v1, 0x5ef, 0x5f6);
    fun_61d(0x60b, 22, 1, v1);
    fun_4a8(rbx6, 22, 1, v1);
    fun_4b0(r14_7, 22, 1, v1);
    fun_4b8(r15_8, 22, 1, v1);
    fun_4c0(r12_9, 22, 1, v1);
    fun_4c8(r13_10, 22, 1, v1);
    goto v11;
}

void fun_61d(int64_t rdi, struct s0* rsi, uint64_t rdx, signed char** rcx) {
    int32_t* rbx5;
    int64_t r14_6;
    int64_t r15_7;
    int64_t r12_8;
    int64_t r13_9;
    int64_t v10;

    fun_4a8(rbx5, rsi, rdx, rcx);
    fun_4b0(r14_6, rsi, rdx, rcx);
    fun_4b8(r15_7, rsi, rdx, rcx);
    fun_4c0(r12_8, rsi, rdx, rcx);
    fun_4c8(r13_9, rsi, rdx, rcx);
    goto v10;
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

int64_t fun_1f4(int64_t rdi, int64_t rsi) {
    signed char** v3;
    int64_t r15_4;
    int64_t rax5;
    int64_t rax6;
    int64_t r12_7;
    int64_t rax8;
    int64_t r13_9;
    int64_t rax10;
    struct s3* rdi11;
    struct s0* rsi12;
    uint64_t rcx13;
    uint64_t rdx14;
    struct s29* rsi15;
    struct s30* rdi16;
    int32_t* rsi17;
    int32_t* rdi18;
    int32_t* rbx19;
    signed char** rcx20;
    int64_t rdx21;
    struct s31* rsi22;
    int32_t* rbx23;
    struct s32* rdi24;
    int32_t* rdi25;
    struct s33* rsi26;
    struct s34* rsi27;
    struct s35* rdi28;
    struct s36* rdi29;
    struct s37* rsi30;
    uint64_t rax31;
    struct s13* rdi32;
    struct s14* rdi33;
    uint64_t rdx34;
    struct s38* rsi35;
    int32_t* rbx36;
    struct s16* rdi37;
    struct s39* rsi38;
    int32_t ebp39;
    signed char*** rax40;
    signed char** v41;
    signed char** rsi42;
    int64_t rbp43;
    signed char** rdi44;
    int32_t eax45;
    int64_t rbp46;
    signed char** rsi47;
    signed char** rdi48;
    int32_t eax49;
    int32_t* rbx50;
    int64_t r14_51;
    int64_t v52;

    v3 = reinterpret_cast<signed char**>(__return_address());
    r15_4 = rax5;
    rax6 = fun_206(0x7d0, 8);
    r12_7 = rax6;
    rax8 = fun_218(0x7d0, 8);
    r13_9 = rax8;
    *reinterpret_cast<int32_t*>(&rax10) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax10) + 4) = reinterpret_cast<int32_t>(fputc);
    g7d0 = g8;
    rdi11 = reinterpret_cast<struct s3*>(0x7d4);
    rsi12 = reinterpret_cast<struct s0*>(12);
    __asm__("movdqa xmm1, [rip+0x0]");
    __asm__("movdqa xmm2, [rip+0x0]");
    __asm__("movdqa xmm3, [rip+0x0]");
    __asm__("movapd xmm4, [rip+0x0]");
    __asm__("movdqa xmm5, [rip+0x0]");
    *reinterpret_cast<int32_t*>(&rcx13) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx13) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        __asm__("xorps xmm6, xmm6");
        __asm__("cvtsi2sd xmm6, ecx");
        __asm__("divsd xmm6, xmm0");
        rdi11->f0 = rsi12->f0;
        rdx14 = rcx13 + 1;
        __asm__("xorpd xmm6, xmm6");
        if (rdx14 != 0x7d0) {
            __asm__("xorps xmm6, xmm6");
            __asm__("cvtsi2sd xmm6, edx");
            __asm__("divsd xmm6, xmm0");
        }
        *reinterpret_cast<int32_t*>(&rsi15) = static_cast<int32_t>(rcx13 - 0x7cd);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi15) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdi16) = static_cast<int32_t>(rcx13 + 3);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi16) + 4) = reinterpret_cast<int32_t>(fputc);
        if (rcx13 >= 0x7cd) {
            *reinterpret_cast<int32_t*>(&rdi16) = *reinterpret_cast<int32_t*>(&rsi15);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi16) + 4) = reinterpret_cast<int32_t>(fputc);
        }
        __asm__("xorps xmm7, xmm7");
        __asm__("cvtsi2sd xmm7, edi");
        rdi16->f0 = rsi15->f0;
        __asm__("divsd xmm7, xmm0");
        rdi16->f4 = rsi15->f4;
        *reinterpret_cast<int32_t*>(&rsi17) = static_cast<int32_t>(rcx13 - 0x7cc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi17) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdi18) = static_cast<int32_t>(rcx13 + 4);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi18) + 4) = reinterpret_cast<int32_t>(fputc);
        if (rcx13 >= 0x7cc) {
            *reinterpret_cast<int32_t*>(&rdi18) = *reinterpret_cast<int32_t*>(&rsi17);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi18) + 4) = reinterpret_cast<int32_t>(fputc);
        }
        __asm__("xorps xmm6, xmm6");
        __asm__("cvtsi2sd xmm6, edi");
        __asm__("divsd xmm6, xmm0");
        *rdi18 = *rsi17;
        __asm__("movd xmm6, rcx");
        __asm__("pshufd xmm6, xmm6, 0x44");
        *reinterpret_cast<int32_t*>(&rsi12) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi12) + 4) = reinterpret_cast<int32_t>(fputc);
        __asm__("movdqa xmm7, xmm1");
        do {
            __asm__("movdqa xmm8, xmm7");
            __asm__("psrlq xmm8, 0x20");
            __asm__("pmuludq xmm8, xmm6");
            __asm__("movdqa xmm9, xmm6");
            __asm__("psrlq xmm9, 0x20");
            __asm__("pmuludq xmm9, xmm7");
            __asm__("paddq xmm9, xmm8");
            __asm__("movdqa xmm8, xmm7");
            __asm__("pmuludq xmm8, xmm6");
            __asm__("psllq xmm9, 0x20");
            __asm__("paddq xmm8, xmm9");
            __asm__("pshufd xmm9, xmm8, 0xe8");
            __asm__("pshufd xmm10, xmm8, 0xee");
            __asm__("pmuludq xmm8, xmm2");
            __asm__("pshufd xmm8, xmm8, 0xed");
            __asm__("pmuludq xmm10, xmm2");
            __asm__("pshufd xmm10, xmm10, 0xed");
            __asm__("punpckldq xmm8, xmm10");
            __asm__("psrld xmm8, 0x7");
            __asm__("pshufd xmm10, xmm8, 0xf5");
            __asm__("pmuludq xmm8, xmm3");
            __asm__("pmuludq xmm10, xmm3");
            __asm__("punpckldq xmm8, xmm10");
            __asm__("psubd xmm9, xmm8");
            __asm__("cvtdq2pd xmm8, xmm9");
            __asm__("divpd xmm8, xmm4");
            rdi11 = reinterpret_cast<struct s3*>(rbx19 + rcx13 * 0xfa0);
            __asm__("movupd [rdi+rsi*8], xmm8");
            rsi12 = reinterpret_cast<struct s0*>(reinterpret_cast<uint64_t>(rsi12) + 2);
            __asm__("paddq xmm7, xmm5");
        } while (!reinterpret_cast<int1_t>(rsi12 == 0x7d0));
        rcx13 = rdx14;
    } while (rdx14 != 0x7d0);
    *reinterpret_cast<int32_t*>(&rcx20) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx20) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        rdi11->f0 = rsi12->f0;
        *reinterpret_cast<int32_t*>(&rdx21) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx21) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rsi22 = reinterpret_cast<struct s31*>(rbx23 + rax10 * 0xfa0);
            rdi24 = reinterpret_cast<struct s32*>(rdx21 * 8);
            rdi24->f0 = rsi22->f0;
            rdi25 = &rdi24->f4;
            rsi26 = reinterpret_cast<struct s33*>(&rsi22->f4);
            __asm__("mulsd xmm1, [r12+rdx*8]");
            __asm__("addsd xmm1, xmm0");
            *rdi25 = rsi26->f0;
            rsi27 = reinterpret_cast<struct s34*>(&rsi26->f4);
            rdi28 = reinterpret_cast<struct s35*>(reinterpret_cast<uint64_t>(rdi25 + 1) | 8);
            rdi28->f0 = rsi27->f0;
            rdi29 = reinterpret_cast<struct s36*>(&rdi28->f4);
            rsi30 = reinterpret_cast<struct s37*>(&rsi27->f4);
            __asm__("mulsd xmm0, [r12+rdi]");
            __asm__("addsd xmm0, xmm1");
            rdi29->f0 = rsi30->f0;
            rdi11 = reinterpret_cast<struct s3*>(&rdi29->f4);
            rsi12 = reinterpret_cast<struct s0*>(&rsi30->f4);
            rdx21 = rdx21 + 2;
        } while (rdx21 != 0x7d0);
        ++rax10;
    } while (rax10 != 0x7d0);
    do {
        rdi11->f0 = rsi12->f0;
        rdi11 = reinterpret_cast<struct s3*>(&rdi11->f4);
        rsi12 = reinterpret_cast<struct s0*>(&rsi12->f4);
        *reinterpret_cast<int32_t*>(&rax31) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax31) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rdi11->f0 = rsi12->f0;
            rdi32 = reinterpret_cast<struct s13*>(&rdi11->f4);
            __asm__("mulsd xmm1, [r13+rax*8+0x0]");
            __asm__("addsd xmm1, xmm0");
            rdi32->f0 = rsi12->f4;
            rdi33 = reinterpret_cast<struct s14*>(&rdi32->f4);
            rdx34 = rax31 | 1;
            rsi35 = reinterpret_cast<struct s38*>(rbx36 + rdx34 * 0xfa0);
            rdi33->f0 = rsi35->f0;
            rdi37 = reinterpret_cast<struct s16*>(&rdi33->f4);
            rsi38 = reinterpret_cast<struct s39*>(&rsi35->f4);
            __asm__("mulsd xmm0, [r13+rdx*8+0x0]");
            __asm__("addsd xmm0, xmm1");
            rdi37->f0 = rsi38->f0;
            rdi11 = reinterpret_cast<struct s3*>(&rdi37->f4);
            rsi12 = reinterpret_cast<struct s0*>(&rsi38->f4);
            rax31 = rax31 + 2;
        } while (rax31 != 0x7d0);
        rcx20 = reinterpret_cast<signed char**>(reinterpret_cast<int64_t>(rcx20) + 1);
    } while (!reinterpret_cast<int1_t>(rcx20 == 0x7d0));
    if (ebp39 >= 43 && **v3 == fputc) {
        rax40 = g4e0;
        v41 = *rax40;
        fun_4fd(0x4ee, 22, 1);
        rsi42 = reinterpret_cast<signed char**>(0x504);
        *reinterpret_cast<int32_t*>(&rbp43) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp43) + 4) = reinterpret_cast<int32_t>(fputc);
        rdi44 = v41;
        fun_518();
        do {
            eax45 = *reinterpret_cast<int32_t*>(&rbp43) * 0xffffcccd;
            __asm__("ror ax, 0x2");
            if (static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax45)) <= 0xccc) {
                *reinterpret_cast<int32_t*>(&rdi44) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi44) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi42 = v41;
                fun_566();
            }
            *rdi44 = *rsi42;
            rdi44 = v41;
            rsi42 = reinterpret_cast<signed char**>(0x531);
            fun_538();
            ++rbp43;
        } while (rbp43 != 0x7d0);
        *reinterpret_cast<int32_t*>(&rbp46) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp46) + 4) = reinterpret_cast<int32_t>(fputc);
        fun_583(v41, 0x56f, 0x576);
        rsi47 = reinterpret_cast<signed char**>(0x58a);
        rdi48 = v41;
        fun_59c();
        do {
            eax49 = *reinterpret_cast<int32_t*>(&rbp46) * 0xffffcccd;
            __asm__("ror ax, 0x2");
            if (static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax49)) <= 0xccc) {
                *reinterpret_cast<int32_t*>(&rdi48) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi48) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi47 = v41;
                fun_5e6();
            }
            *rdi48 = *rsi47;
            rdi48 = v41;
            rsi47 = reinterpret_cast<signed char**>(0x5b1);
            fun_5b8();
            ++rbp46;
        } while (rbp46 != 0x7d0);
        fun_604(v41, 0x5ef, 0x5f6);
        *reinterpret_cast<int32_t*>(&rsi12) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi12) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx34) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx34) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx20 = v41;
        fun_61d(0x60b, 22, 1, rcx20);
    }
    fun_4a8(rbx50, rsi12, rdx34, rcx20);
    fun_4b0(r14_51, rsi12, rdx34, rcx20);
    fun_4b8(r15_4, rsi12, rdx34, rcx20);
    fun_4c0(r12_7, rsi12, rdx34, rcx20);
    fun_4c8(r13_9, rsi12, rdx34, rcx20);
    goto v52;
}

void fun_4c8(int64_t rdi, struct s0* rsi, uint64_t rdx, signed char** rcx) {
    int64_t v5;

    goto v5;
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

int64_t fun_206(int64_t rdi, int64_t rsi) {
    signed char** v3;
    int64_t r12_4;
    int64_t rax5;
    int64_t rax6;
    int64_t r13_7;
    int64_t rax8;
    struct s3* rdi9;
    struct s0* rsi10;
    uint64_t rcx11;
    uint64_t rdx12;
    struct s40* rsi13;
    struct s41* rdi14;
    int32_t* rsi15;
    int32_t* rdi16;
    int32_t* rbx17;
    signed char** rcx18;
    int64_t rdx19;
    struct s42* rsi20;
    int32_t* rbx21;
    struct s43* rdi22;
    int32_t* rdi23;
    struct s44* rsi24;
    struct s45* rsi25;
    struct s46* rdi26;
    struct s47* rdi27;
    struct s48* rsi28;
    uint64_t rax29;
    struct s13* rdi30;
    struct s14* rdi31;
    uint64_t rdx32;
    struct s49* rsi33;
    int32_t* rbx34;
    struct s16* rdi35;
    struct s50* rsi36;
    int32_t ebp37;
    signed char*** rax38;
    signed char** v39;
    signed char** rsi40;
    int64_t rbp41;
    signed char** rdi42;
    int32_t eax43;
    int64_t rbp44;
    signed char** rsi45;
    signed char** rdi46;
    int32_t eax47;
    int32_t* rbx48;
    int64_t r14_49;
    int64_t r15_50;
    int64_t v51;

    v3 = reinterpret_cast<signed char**>(__return_address());
    r12_4 = rax5;
    rax6 = fun_218(0x7d0, 8);
    r13_7 = rax6;
    *reinterpret_cast<int32_t*>(&rax8) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax8) + 4) = reinterpret_cast<int32_t>(fputc);
    g7d0 = g8;
    rdi9 = reinterpret_cast<struct s3*>(0x7d4);
    rsi10 = reinterpret_cast<struct s0*>(12);
    __asm__("movdqa xmm1, [rip+0x0]");
    __asm__("movdqa xmm2, [rip+0x0]");
    __asm__("movdqa xmm3, [rip+0x0]");
    __asm__("movapd xmm4, [rip+0x0]");
    __asm__("movdqa xmm5, [rip+0x0]");
    *reinterpret_cast<int32_t*>(&rcx11) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx11) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        __asm__("xorps xmm6, xmm6");
        __asm__("cvtsi2sd xmm6, ecx");
        __asm__("divsd xmm6, xmm0");
        rdi9->f0 = rsi10->f0;
        rdx12 = rcx11 + 1;
        __asm__("xorpd xmm6, xmm6");
        if (rdx12 != 0x7d0) {
            __asm__("xorps xmm6, xmm6");
            __asm__("cvtsi2sd xmm6, edx");
            __asm__("divsd xmm6, xmm0");
        }
        *reinterpret_cast<int32_t*>(&rsi13) = static_cast<int32_t>(rcx11 - 0x7cd);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi13) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdi14) = static_cast<int32_t>(rcx11 + 3);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi14) + 4) = reinterpret_cast<int32_t>(fputc);
        if (rcx11 >= 0x7cd) {
            *reinterpret_cast<int32_t*>(&rdi14) = *reinterpret_cast<int32_t*>(&rsi13);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi14) + 4) = reinterpret_cast<int32_t>(fputc);
        }
        __asm__("xorps xmm7, xmm7");
        __asm__("cvtsi2sd xmm7, edi");
        rdi14->f0 = rsi13->f0;
        __asm__("divsd xmm7, xmm0");
        rdi14->f4 = rsi13->f4;
        *reinterpret_cast<int32_t*>(&rsi15) = static_cast<int32_t>(rcx11 - 0x7cc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi15) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdi16) = static_cast<int32_t>(rcx11 + 4);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi16) + 4) = reinterpret_cast<int32_t>(fputc);
        if (rcx11 >= 0x7cc) {
            *reinterpret_cast<int32_t*>(&rdi16) = *reinterpret_cast<int32_t*>(&rsi15);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi16) + 4) = reinterpret_cast<int32_t>(fputc);
        }
        __asm__("xorps xmm6, xmm6");
        __asm__("cvtsi2sd xmm6, edi");
        __asm__("divsd xmm6, xmm0");
        *rdi16 = *rsi15;
        __asm__("movd xmm6, rcx");
        __asm__("pshufd xmm6, xmm6, 0x44");
        *reinterpret_cast<int32_t*>(&rsi10) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi10) + 4) = reinterpret_cast<int32_t>(fputc);
        __asm__("movdqa xmm7, xmm1");
        do {
            __asm__("movdqa xmm8, xmm7");
            __asm__("psrlq xmm8, 0x20");
            __asm__("pmuludq xmm8, xmm6");
            __asm__("movdqa xmm9, xmm6");
            __asm__("psrlq xmm9, 0x20");
            __asm__("pmuludq xmm9, xmm7");
            __asm__("paddq xmm9, xmm8");
            __asm__("movdqa xmm8, xmm7");
            __asm__("pmuludq xmm8, xmm6");
            __asm__("psllq xmm9, 0x20");
            __asm__("paddq xmm8, xmm9");
            __asm__("pshufd xmm9, xmm8, 0xe8");
            __asm__("pshufd xmm10, xmm8, 0xee");
            __asm__("pmuludq xmm8, xmm2");
            __asm__("pshufd xmm8, xmm8, 0xed");
            __asm__("pmuludq xmm10, xmm2");
            __asm__("pshufd xmm10, xmm10, 0xed");
            __asm__("punpckldq xmm8, xmm10");
            __asm__("psrld xmm8, 0x7");
            __asm__("pshufd xmm10, xmm8, 0xf5");
            __asm__("pmuludq xmm8, xmm3");
            __asm__("pmuludq xmm10, xmm3");
            __asm__("punpckldq xmm8, xmm10");
            __asm__("psubd xmm9, xmm8");
            __asm__("cvtdq2pd xmm8, xmm9");
            __asm__("divpd xmm8, xmm4");
            rdi9 = reinterpret_cast<struct s3*>(rbx17 + rcx11 * 0xfa0);
            __asm__("movupd [rdi+rsi*8], xmm8");
            rsi10 = reinterpret_cast<struct s0*>(reinterpret_cast<uint64_t>(rsi10) + 2);
            __asm__("paddq xmm7, xmm5");
        } while (!reinterpret_cast<int1_t>(rsi10 == 0x7d0));
        rcx11 = rdx12;
    } while (rdx12 != 0x7d0);
    *reinterpret_cast<int32_t*>(&rcx18) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx18) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        rdi9->f0 = rsi10->f0;
        *reinterpret_cast<int32_t*>(&rdx19) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx19) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rsi20 = reinterpret_cast<struct s42*>(rbx21 + rax8 * 0xfa0);
            rdi22 = reinterpret_cast<struct s43*>(rdx19 * 8);
            rdi22->f0 = rsi20->f0;
            rdi23 = &rdi22->f4;
            rsi24 = reinterpret_cast<struct s44*>(&rsi20->f4);
            __asm__("mulsd xmm1, [r12+rdx*8]");
            __asm__("addsd xmm1, xmm0");
            *rdi23 = rsi24->f0;
            rsi25 = reinterpret_cast<struct s45*>(&rsi24->f4);
            rdi26 = reinterpret_cast<struct s46*>(reinterpret_cast<uint64_t>(rdi23 + 1) | 8);
            rdi26->f0 = rsi25->f0;
            rdi27 = reinterpret_cast<struct s47*>(&rdi26->f4);
            rsi28 = reinterpret_cast<struct s48*>(&rsi25->f4);
            __asm__("mulsd xmm0, [r12+rdi]");
            __asm__("addsd xmm0, xmm1");
            rdi27->f0 = rsi28->f0;
            rdi9 = reinterpret_cast<struct s3*>(&rdi27->f4);
            rsi10 = reinterpret_cast<struct s0*>(&rsi28->f4);
            rdx19 = rdx19 + 2;
        } while (rdx19 != 0x7d0);
        ++rax8;
    } while (rax8 != 0x7d0);
    do {
        rdi9->f0 = rsi10->f0;
        rdi9 = reinterpret_cast<struct s3*>(&rdi9->f4);
        rsi10 = reinterpret_cast<struct s0*>(&rsi10->f4);
        *reinterpret_cast<int32_t*>(&rax29) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax29) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rdi9->f0 = rsi10->f0;
            rdi30 = reinterpret_cast<struct s13*>(&rdi9->f4);
            __asm__("mulsd xmm1, [r13+rax*8+0x0]");
            __asm__("addsd xmm1, xmm0");
            rdi30->f0 = rsi10->f4;
            rdi31 = reinterpret_cast<struct s14*>(&rdi30->f4);
            rdx32 = rax29 | 1;
            rsi33 = reinterpret_cast<struct s49*>(rbx34 + rdx32 * 0xfa0);
            rdi31->f0 = rsi33->f0;
            rdi35 = reinterpret_cast<struct s16*>(&rdi31->f4);
            rsi36 = reinterpret_cast<struct s50*>(&rsi33->f4);
            __asm__("mulsd xmm0, [r13+rdx*8+0x0]");
            __asm__("addsd xmm0, xmm1");
            rdi35->f0 = rsi36->f0;
            rdi9 = reinterpret_cast<struct s3*>(&rdi35->f4);
            rsi10 = reinterpret_cast<struct s0*>(&rsi36->f4);
            rax29 = rax29 + 2;
        } while (rax29 != 0x7d0);
        rcx18 = reinterpret_cast<signed char**>(reinterpret_cast<int64_t>(rcx18) + 1);
    } while (!reinterpret_cast<int1_t>(rcx18 == 0x7d0));
    if (ebp37 >= 43 && **v3 == fputc) {
        rax38 = g4e0;
        v39 = *rax38;
        fun_4fd(0x4ee, 22, 1);
        rsi40 = reinterpret_cast<signed char**>(0x504);
        *reinterpret_cast<int32_t*>(&rbp41) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp41) + 4) = reinterpret_cast<int32_t>(fputc);
        rdi42 = v39;
        fun_518();
        do {
            eax43 = *reinterpret_cast<int32_t*>(&rbp41) * 0xffffcccd;
            __asm__("ror ax, 0x2");
            if (static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax43)) <= 0xccc) {
                *reinterpret_cast<int32_t*>(&rdi42) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi42) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi40 = v39;
                fun_566();
            }
            *rdi42 = *rsi40;
            rdi42 = v39;
            rsi40 = reinterpret_cast<signed char**>(0x531);
            fun_538();
            ++rbp41;
        } while (rbp41 != 0x7d0);
        *reinterpret_cast<int32_t*>(&rbp44) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp44) + 4) = reinterpret_cast<int32_t>(fputc);
        fun_583(v39, 0x56f, 0x576);
        rsi45 = reinterpret_cast<signed char**>(0x58a);
        rdi46 = v39;
        fun_59c();
        do {
            eax47 = *reinterpret_cast<int32_t*>(&rbp44) * 0xffffcccd;
            __asm__("ror ax, 0x2");
            if (static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax47)) <= 0xccc) {
                *reinterpret_cast<int32_t*>(&rdi46) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi46) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi45 = v39;
                fun_5e6();
            }
            *rdi46 = *rsi45;
            rdi46 = v39;
            rsi45 = reinterpret_cast<signed char**>(0x5b1);
            fun_5b8();
            ++rbp44;
        } while (rbp44 != 0x7d0);
        fun_604(v39, 0x5ef, 0x5f6);
        *reinterpret_cast<int32_t*>(&rsi10) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi10) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx32) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx32) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx18 = v39;
        fun_61d(0x60b, 22, 1, rcx18);
    }
    fun_4a8(rbx48, rsi10, rdx32, rcx18);
    fun_4b0(r14_49, rsi10, rdx32, rcx18);
    fun_4b8(r15_50, rsi10, rdx32, rcx18);
    fun_4c0(r12_4, rsi10, rdx32, rcx18);
    fun_4c8(r13_7, rsi10, rdx32, rcx18);
    goto v51;
}

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

struct s61 {
    int32_t f0;
    int32_t f4;
};

int64_t fun_218(struct s1* rdi, struct s2* rsi) {
    signed char** v3;
    int64_t r13_4;
    int64_t rax5;
    int64_t rax6;
    struct s3* rdi7;
    struct s0* rsi8;
    uint64_t rcx9;
    uint64_t rdx10;
    struct s51* rsi11;
    struct s52* rdi12;
    int32_t* rsi13;
    int32_t* rdi14;
    int32_t* rbx15;
    signed char** rcx16;
    int64_t rdx17;
    struct s53* rsi18;
    int32_t* rbx19;
    struct s54* rdi20;
    int32_t* rdi21;
    struct s55* rsi22;
    struct s56* rsi23;
    struct s57* rdi24;
    struct s58* rdi25;
    struct s59* rsi26;
    uint64_t rax27;
    struct s13* rdi28;
    struct s14* rdi29;
    uint64_t rdx30;
    struct s60* rsi31;
    int32_t* rbx32;
    struct s16* rdi33;
    struct s61* rsi34;
    int32_t ebp35;
    signed char*** rax36;
    signed char** v37;
    signed char** rsi38;
    int64_t rbp39;
    signed char** rdi40;
    int32_t eax41;
    int64_t rbp42;
    signed char** rsi43;
    signed char** rdi44;
    int32_t eax45;
    int32_t* rbx46;
    int64_t r14_47;
    int64_t r15_48;
    int64_t r12_49;
    int64_t v50;

    v3 = reinterpret_cast<signed char**>(__return_address());
    r13_4 = rax5;
    *reinterpret_cast<int32_t*>(&rax6) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax6) + 4) = reinterpret_cast<int32_t>(fputc);
    rdi->f0 = rsi->f0;
    rdi7 = reinterpret_cast<struct s3*>(&rdi->f4);
    rsi8 = reinterpret_cast<struct s0*>(&rsi->f4);
    __asm__("movdqa xmm1, [rip+0x0]");
    __asm__("movdqa xmm2, [rip+0x0]");
    __asm__("movdqa xmm3, [rip+0x0]");
    __asm__("movapd xmm4, [rip+0x0]");
    __asm__("movdqa xmm5, [rip+0x0]");
    *reinterpret_cast<int32_t*>(&rcx9) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx9) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        __asm__("xorps xmm6, xmm6");
        __asm__("cvtsi2sd xmm6, ecx");
        __asm__("divsd xmm6, xmm0");
        rdi7->f0 = rsi8->f0;
        rdx10 = rcx9 + 1;
        __asm__("xorpd xmm6, xmm6");
        if (rdx10 != 0x7d0) {
            __asm__("xorps xmm6, xmm6");
            __asm__("cvtsi2sd xmm6, edx");
            __asm__("divsd xmm6, xmm0");
        }
        *reinterpret_cast<int32_t*>(&rsi11) = static_cast<int32_t>(rcx9 - 0x7cd);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi11) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdi12) = static_cast<int32_t>(rcx9 + 3);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi12) + 4) = reinterpret_cast<int32_t>(fputc);
        if (rcx9 >= 0x7cd) {
            *reinterpret_cast<int32_t*>(&rdi12) = *reinterpret_cast<int32_t*>(&rsi11);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi12) + 4) = reinterpret_cast<int32_t>(fputc);
        }
        __asm__("xorps xmm7, xmm7");
        __asm__("cvtsi2sd xmm7, edi");
        rdi12->f0 = rsi11->f0;
        __asm__("divsd xmm7, xmm0");
        rdi12->f4 = rsi11->f4;
        *reinterpret_cast<int32_t*>(&rsi13) = static_cast<int32_t>(rcx9 - 0x7cc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi13) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdi14) = static_cast<int32_t>(rcx9 + 4);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi14) + 4) = reinterpret_cast<int32_t>(fputc);
        if (rcx9 >= 0x7cc) {
            *reinterpret_cast<int32_t*>(&rdi14) = *reinterpret_cast<int32_t*>(&rsi13);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi14) + 4) = reinterpret_cast<int32_t>(fputc);
        }
        __asm__("xorps xmm6, xmm6");
        __asm__("cvtsi2sd xmm6, edi");
        __asm__("divsd xmm6, xmm0");
        *rdi14 = *rsi13;
        __asm__("movd xmm6, rcx");
        __asm__("pshufd xmm6, xmm6, 0x44");
        *reinterpret_cast<int32_t*>(&rsi8) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi8) + 4) = reinterpret_cast<int32_t>(fputc);
        __asm__("movdqa xmm7, xmm1");
        do {
            __asm__("movdqa xmm8, xmm7");
            __asm__("psrlq xmm8, 0x20");
            __asm__("pmuludq xmm8, xmm6");
            __asm__("movdqa xmm9, xmm6");
            __asm__("psrlq xmm9, 0x20");
            __asm__("pmuludq xmm9, xmm7");
            __asm__("paddq xmm9, xmm8");
            __asm__("movdqa xmm8, xmm7");
            __asm__("pmuludq xmm8, xmm6");
            __asm__("psllq xmm9, 0x20");
            __asm__("paddq xmm8, xmm9");
            __asm__("pshufd xmm9, xmm8, 0xe8");
            __asm__("pshufd xmm10, xmm8, 0xee");
            __asm__("pmuludq xmm8, xmm2");
            __asm__("pshufd xmm8, xmm8, 0xed");
            __asm__("pmuludq xmm10, xmm2");
            __asm__("pshufd xmm10, xmm10, 0xed");
            __asm__("punpckldq xmm8, xmm10");
            __asm__("psrld xmm8, 0x7");
            __asm__("pshufd xmm10, xmm8, 0xf5");
            __asm__("pmuludq xmm8, xmm3");
            __asm__("pmuludq xmm10, xmm3");
            __asm__("punpckldq xmm8, xmm10");
            __asm__("psubd xmm9, xmm8");
            __asm__("cvtdq2pd xmm8, xmm9");
            __asm__("divpd xmm8, xmm4");
            rdi7 = reinterpret_cast<struct s3*>(rbx15 + rcx9 * 0xfa0);
            __asm__("movupd [rdi+rsi*8], xmm8");
            rsi8 = reinterpret_cast<struct s0*>(reinterpret_cast<uint64_t>(rsi8) + 2);
            __asm__("paddq xmm7, xmm5");
        } while (!reinterpret_cast<int1_t>(rsi8 == 0x7d0));
        rcx9 = rdx10;
    } while (rdx10 != 0x7d0);
    *reinterpret_cast<int32_t*>(&rcx16) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx16) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        rdi7->f0 = rsi8->f0;
        *reinterpret_cast<int32_t*>(&rdx17) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx17) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rsi18 = reinterpret_cast<struct s53*>(rbx19 + rax6 * 0xfa0);
            rdi20 = reinterpret_cast<struct s54*>(rdx17 * 8);
            rdi20->f0 = rsi18->f0;
            rdi21 = &rdi20->f4;
            rsi22 = reinterpret_cast<struct s55*>(&rsi18->f4);
            __asm__("mulsd xmm1, [r12+rdx*8]");
            __asm__("addsd xmm1, xmm0");
            *rdi21 = rsi22->f0;
            rsi23 = reinterpret_cast<struct s56*>(&rsi22->f4);
            rdi24 = reinterpret_cast<struct s57*>(reinterpret_cast<uint64_t>(rdi21 + 1) | 8);
            rdi24->f0 = rsi23->f0;
            rdi25 = reinterpret_cast<struct s58*>(&rdi24->f4);
            rsi26 = reinterpret_cast<struct s59*>(&rsi23->f4);
            __asm__("mulsd xmm0, [r12+rdi]");
            __asm__("addsd xmm0, xmm1");
            rdi25->f0 = rsi26->f0;
            rdi7 = reinterpret_cast<struct s3*>(&rdi25->f4);
            rsi8 = reinterpret_cast<struct s0*>(&rsi26->f4);
            rdx17 = rdx17 + 2;
        } while (rdx17 != 0x7d0);
        ++rax6;
    } while (rax6 != 0x7d0);
    do {
        rdi7->f0 = rsi8->f0;
        rdi7 = reinterpret_cast<struct s3*>(&rdi7->f4);
        rsi8 = reinterpret_cast<struct s0*>(&rsi8->f4);
        *reinterpret_cast<int32_t*>(&rax27) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax27) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rdi7->f0 = rsi8->f0;
            rdi28 = reinterpret_cast<struct s13*>(&rdi7->f4);
            __asm__("mulsd xmm1, [r13+rax*8+0x0]");
            __asm__("addsd xmm1, xmm0");
            rdi28->f0 = rsi8->f4;
            rdi29 = reinterpret_cast<struct s14*>(&rdi28->f4);
            rdx30 = rax27 | 1;
            rsi31 = reinterpret_cast<struct s60*>(rbx32 + rdx30 * 0xfa0);
            rdi29->f0 = rsi31->f0;
            rdi33 = reinterpret_cast<struct s16*>(&rdi29->f4);
            rsi34 = reinterpret_cast<struct s61*>(&rsi31->f4);
            __asm__("mulsd xmm0, [r13+rdx*8+0x0]");
            __asm__("addsd xmm0, xmm1");
            rdi33->f0 = rsi34->f0;
            rdi7 = reinterpret_cast<struct s3*>(&rdi33->f4);
            rsi8 = reinterpret_cast<struct s0*>(&rsi34->f4);
            rax27 = rax27 + 2;
        } while (rax27 != 0x7d0);
        rcx16 = reinterpret_cast<signed char**>(reinterpret_cast<int64_t>(rcx16) + 1);
    } while (!reinterpret_cast<int1_t>(rcx16 == 0x7d0));
    if (ebp35 >= 43 && **v3 == fputc) {
        rax36 = g4e0;
        v37 = *rax36;
        fun_4fd(0x4ee, 22, 1);
        rsi38 = reinterpret_cast<signed char**>(0x504);
        *reinterpret_cast<int32_t*>(&rbp39) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp39) + 4) = reinterpret_cast<int32_t>(fputc);
        rdi40 = v37;
        fun_518();
        do {
            eax41 = *reinterpret_cast<int32_t*>(&rbp39) * 0xffffcccd;
            __asm__("ror ax, 0x2");
            if (static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax41)) <= 0xccc) {
                *reinterpret_cast<int32_t*>(&rdi40) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi40) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi38 = v37;
                fun_566();
            }
            *rdi40 = *rsi38;
            rdi40 = v37;
            rsi38 = reinterpret_cast<signed char**>(0x531);
            fun_538();
            ++rbp39;
        } while (rbp39 != 0x7d0);
        *reinterpret_cast<int32_t*>(&rbp42) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp42) + 4) = reinterpret_cast<int32_t>(fputc);
        fun_583(v37, 0x56f, 0x576);
        rsi43 = reinterpret_cast<signed char**>(0x58a);
        rdi44 = v37;
        fun_59c();
        do {
            eax45 = *reinterpret_cast<int32_t*>(&rbp42) * 0xffffcccd;
            __asm__("ror ax, 0x2");
            if (static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax45)) <= 0xccc) {
                *reinterpret_cast<int32_t*>(&rdi44) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi44) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi43 = v37;
                fun_5e6();
            }
            *rdi44 = *rsi43;
            rdi44 = v37;
            rsi43 = reinterpret_cast<signed char**>(0x5b1);
            fun_5b8();
            ++rbp42;
        } while (rbp42 != 0x7d0);
        fun_604(v37, 0x5ef, 0x5f6);
        *reinterpret_cast<int32_t*>(&rsi8) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi8) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx30) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx30) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx16 = v37;
        fun_61d(0x60b, 22, 1, rcx16);
    }
    fun_4a8(rbx46, rsi8, rdx30, rcx16);
    fun_4b0(r14_47, rsi8, rdx30, rcx16);
    fun_4b8(r15_48, rsi8, rdx30, rcx16);
    fun_4c0(r12_49, rsi8, rdx30, rcx16);
    fun_4c8(r13_4, rsi8, rdx30, rcx16);
    goto v50;
}

void fputc() {
}

void fun_e8(uint32_t* rdi) {
    int32_t ecx2;

    *rdi = *rdi + ecx2 + __intrinsic();
}

struct s62 {
    int32_t f0;
    int32_t f4;
};

struct s63 {
    int32_t f0;
    int32_t f1;
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

void fun_ed() {
    signed char* rax1;
    signed char* rax2;
    signed char r8b3;
    struct s62* rsi4;
    struct s63* rsi5;
    struct s62* rax6;
    int32_t* rdi7;
    int64_t r11_8;
    int64_t r10_9;
    struct s64* rdi10;
    struct s65* rsi11;
    int32_t* rdi12;
    struct s63* rsi13;
    struct s64* rdi14;
    struct s65* rsi15;
    int64_t rcx16;
    unsigned char al17;
    struct s64* rdi18;
    struct s65* rsi19;
    int64_t v20;

    *rax1 = reinterpret_cast<signed char>(*rax2 + r8b3);
    while (rsi4 = reinterpret_cast<struct s62*>(reinterpret_cast<int64_t>(rsi5) + 1), rsi4 != rax6) {
        *rdi7 = rsi4->f0;
        rsi5 = reinterpret_cast<struct s63*>(&rsi4->f4);
        *reinterpret_cast<int32_t*>(&rdi7) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi7) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&r11_8) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_8) + 4) = reinterpret_cast<int32_t>(fputc);
        if (r10_9 != fputc) {
            do {
                *rdi7 = rsi5->f0;
                rdi10 = reinterpret_cast<struct s64*>(rdi7 + 1);
                rsi11 = reinterpret_cast<struct s65*>(&rsi5->f1);
                __asm__("mulsd xmm1, [r8+rdi*8]");
                __asm__("addsd xmm1, xmm0");
                rdi10->f0 = rsi11->f0;
                rdi12 = &rdi10->f4;
                rsi13 = reinterpret_cast<struct s63*>(&rsi11->f4);
                *rdi12 = rsi13->f0;
                rdi14 = reinterpret_cast<struct s64*>(rdi12 + 1);
                rsi15 = reinterpret_cast<struct s65*>(&rsi13->f1);
                __asm__("mulsd xmm0, [r8+rbx*8]");
                __asm__("addsd xmm0, xmm1");
                rdi14->f0 = rsi15->f0;
                rsi5 = reinterpret_cast<struct s63*>(&rsi15->f4);
                rdi7 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi14->f4) + 2);
                r11_8 = r11_8 + 2;
            } while (r11_8 != rcx16);
        }
        if ((al17 & 1) == fputc) 
            continue;
        *rdi7 = rsi5->f0;
        rdi18 = reinterpret_cast<struct s64*>(rdi7 + 1);
        rsi19 = reinterpret_cast<struct s65*>(&rsi5->f1);
        __asm__("mulsd xmm1, [r8+rdi*8]");
        __asm__("addsd xmm1, xmm0");
        rdi18->f0 = rsi19->f0;
        rdi7 = &rdi18->f4;
        rsi5 = reinterpret_cast<struct s63*>(&rsi19->f4);
    }
    goto v20;
}

void submain(int32_t edi, int64_t rsi) {
    fun_1d0(0x3d0900, 8);
}

