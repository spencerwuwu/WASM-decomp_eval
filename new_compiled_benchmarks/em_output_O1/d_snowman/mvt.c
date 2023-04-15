
struct s0 {
    int32_t f0;
    int32_t f4;
};

struct s1 {
    int32_t f0;
    int32_t f4;
};

int64_t fun_108(struct s0* rdi, struct s1* rsi);

void fputc(int32_t edi);

int32_t g7d0;

int32_t g8 = 0xf66d231;

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
    int32_t f1;
    int32_t f4;
};

signed char*** g2f8 = reinterpret_cast<signed char***>(0x48240c8948088b48);

void fun_315(int64_t rdi, int64_t rsi, int64_t rdx);

void fun_330();

void fun_382();

void fun_358();

void fun_39f(signed char** rdi, int64_t rsi, int64_t rdx);

void fun_3b8();

void fun_402();

void fun_3d8();

void fun_420(signed char** rdi, int64_t rsi, int64_t rdx);

void fun_439(int64_t rdi, struct s3* rsi, int64_t rdx, signed char** rcx);

void fun_2c0(int64_t rdi, struct s3* rsi, int64_t rdx, signed char** rcx);

void fun_2c8(int64_t rdi, struct s3* rsi, int64_t rdx, signed char** rcx);

void fun_2d0(int64_t rdi, struct s3* rsi, int64_t rdx, signed char** rcx);

void fun_2d8(int64_t rdi, struct s3* rsi, int64_t rdx, signed char** rcx);

void fun_2e0(int64_t rdi, struct s3* rsi, int64_t rdx, signed char** rcx);

void fun_f6() {
    signed char** v1;
    int64_t r12_2;
    int64_t rax3;
    int64_t rax4;
    int64_t r13_5;
    int64_t rax6;
    struct s2* rdi7;
    struct s3* rsi8;
    int64_t rcx9;
    struct s4* rdi10;
    int64_t rdx11;
    struct s2* rdi12;
    int64_t rsi13;
    uint64_t rsi14;
    struct s5* rsi15;
    struct s6* rdi16;
    int32_t* rbx17;
    signed char** rcx18;
    int64_t rdx19;
    struct s7* rsi20;
    int32_t* rbx21;
    struct s4* rdi22;
    struct s8* rsi23;
    int64_t rax24;
    int64_t rdx25;
    int64_t rbx26;
    struct s4* rdi27;
    struct s9* rsi28;
    int32_t ebp29;
    signed char*** rax30;
    signed char** v31;
    signed char** rsi32;
    int64_t rbp33;
    signed char** rdi34;
    int64_t rbp35;
    signed char** rsi36;
    signed char** rdi37;
    int64_t rbx38;
    int64_t r14_39;
    int64_t r15_40;
    int64_t v41;

    v1 = reinterpret_cast<signed char**>(__return_address());
    r12_2 = rax3;
    rax4 = fun_108(0x7d0, 8);
    r13_5 = rax4;
    *reinterpret_cast<int32_t*>(&rax6) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax6) + 4) = reinterpret_cast<int32_t>(fputc);
    g7d0 = g8;
    rdi7 = reinterpret_cast<struct s2*>(0x7d4);
    rsi8 = reinterpret_cast<struct s3*>(12);
    *reinterpret_cast<int32_t*>(&rcx9) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx9) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        __asm__("xorps xmm1, xmm1");
        __asm__("cvtsi2sd xmm1, ecx");
        __asm__("divsd xmm1, xmm0");
        rdi7->f0 = rsi8->f0;
        rdi10 = reinterpret_cast<struct s4*>(&rdi7->f4);
        rdx11 = rcx9 + 1;
        __asm__("xorpd xmm1, xmm1");
        if (rdx11 != 0x7d0) {
            __asm__("xorps xmm1, xmm1");
            __asm__("cvtsi2sd xmm1, edx");
            __asm__("divsd xmm1, xmm0");
        }
        rdi10->f0 = rsi8->f4;
        rdi12 = reinterpret_cast<struct s2*>(&rdi10->f4);
        __asm__("xorps xmm1, xmm1");
        __asm__("cvtsi2sd xmm1, esi");
        __asm__("divsd xmm1, xmm0");
        *reinterpret_cast<int32_t*>(&rsi13) = static_cast<int32_t>(rcx9 + 4);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi13) + 4) = reinterpret_cast<int32_t>(fputc);
        rsi14 = reinterpret_cast<uint64_t>(rsi13 * 0x10624dd3) >> 39;
        *reinterpret_cast<int32_t*>(&rsi15) = -(*reinterpret_cast<int32_t*>(&rsi14) * 0x7d0) + *reinterpret_cast<int32_t*>(&rcx9) + 4;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi15) + 4) = reinterpret_cast<int32_t>(fputc);
        __asm__("xorps xmm2, xmm2");
        __asm__("cvtsi2sd xmm2, esi");
        rdi12->f0 = rsi15->f0;
        __asm__("divsd xmm2, xmm0");
        rdi12->f4 = rsi15->f4;
        *reinterpret_cast<int32_t*>(&rsi8) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi8) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("xorps xmm1, xmm1");
            __asm__("cvtsi2sd xmm1, edi");
            __asm__("divsd xmm1, xmm0");
            rdi16 = reinterpret_cast<struct s6*>(rbx17 + rcx9 * 0xfa0);
            rdi16->f0 = rsi8->f0;
            rdi7 = reinterpret_cast<struct s2*>(&rdi16->f4);
            rsi8 = reinterpret_cast<struct s3*>(reinterpret_cast<int64_t>(&rsi8->f4) + 1);
        } while (!reinterpret_cast<int1_t>(rsi8 == 0x7d0));
        rcx9 = rdx11;
    } while (rdx11 != 0x7d0);
    *reinterpret_cast<int32_t*>(&rcx18) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx18) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        rdi7->f0 = rsi8->f0;
        rdi7 = reinterpret_cast<struct s2*>(&rdi7->f4);
        *reinterpret_cast<int32_t*>(&rdx19) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx19) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rsi20 = reinterpret_cast<struct s7*>(rbx21 + rax6 * 0xfa0);
            rdi7->f0 = rsi20->f0;
            rdi22 = reinterpret_cast<struct s4*>(&rdi7->f4);
            rsi23 = reinterpret_cast<struct s8*>(&rsi20->f4);
            __asm__("mulsd xmm1, [r12+rdx*8]");
            __asm__("addsd xmm0, xmm1");
            rdi22->f0 = rsi23->f0;
            rdi7 = reinterpret_cast<struct s2*>(&rdi22->f4);
            rsi8 = reinterpret_cast<struct s3*>(&rsi23->f4);
            ++rdx19;
        } while (rdx19 != 0x7d0);
        ++rax6;
    } while (rax6 != 0x7d0);
    do {
        rdi7->f0 = rsi8->f0;
        rdi7 = reinterpret_cast<struct s2*>(&rdi7->f4);
        rsi8 = reinterpret_cast<struct s3*>(&rsi8->f4);
        *reinterpret_cast<int32_t*>(&rax24) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax24) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rdx25 = rax24 * 0x3e80 + rbx26;
            rdi7->f0 = rsi8->f0;
            rdi27 = reinterpret_cast<struct s4*>(&rdi7->f4);
            rsi28 = reinterpret_cast<struct s9*>(&rsi8->f4);
            __asm__("mulsd xmm1, [r13+rax*8+0x0]");
            __asm__("addsd xmm0, xmm1");
            rdi27->f0 = rsi28->f0;
            rdi7 = reinterpret_cast<struct s2*>(&rdi27->f4);
            rsi8 = reinterpret_cast<struct s3*>(&rsi28->f1);
            ++rax24;
        } while (rax24 != 0x7d0);
        rcx18 = reinterpret_cast<signed char**>(reinterpret_cast<int64_t>(rcx18) + 1);
    } while (!reinterpret_cast<int1_t>(rcx18 == 0x7d0));
    if (ebp29 >= 43 && **v1 == fputc) {
        rax30 = g2f8;
        v31 = *rax30;
        fun_315(0x306, 22, 1);
        rsi32 = reinterpret_cast<signed char**>(0x31c);
        *reinterpret_cast<int32_t*>(&rbp33) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp33) + 4) = reinterpret_cast<int32_t>(fputc);
        rdi34 = v31;
        fun_330();
        do {
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&rbp33) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi34) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi34) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi32 = v31;
                fun_382();
            }
            *rdi34 = *rsi32;
            rdi34 = v31;
            rsi32 = reinterpret_cast<signed char**>(0x351);
            fun_358();
            ++rbp33;
        } while (rbp33 != 0x7d0);
        *reinterpret_cast<int32_t*>(&rbp35) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp35) + 4) = reinterpret_cast<int32_t>(fputc);
        fun_39f(v31, 0x38b, 0x392);
        rsi36 = reinterpret_cast<signed char**>(0x3a6);
        rdi37 = v31;
        fun_3b8();
        do {
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&rbp35) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi37) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi37) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi36 = v31;
                fun_402();
            }
            *rdi37 = *rsi36;
            rdi37 = v31;
            rsi36 = reinterpret_cast<signed char**>(0x3d1);
            fun_3d8();
            ++rbp35;
        } while (rbp35 != 0x7d0);
        fun_420(v31, 0x40b, 0x412);
        *reinterpret_cast<int32_t*>(&rsi8) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi8) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx25) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx25) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx18 = v31;
        fun_439(0x427, 22, 1, rcx18);
    }
    fun_2c0(rbx38, rsi8, rdx25, rcx18);
    fun_2c8(r14_39, rsi8, rdx25, rcx18);
    fun_2d0(r15_40, rsi8, rdx25, rcx18);
    fun_2d8(r12_2, rsi8, rdx25, rcx18);
    fun_2e0(r13_5, rsi8, rdx25, rcx18);
    goto v41;
}

void fun_2c0(int64_t rdi, struct s3* rsi, int64_t rdx, signed char** rcx) {
    int64_t r14_5;
    int64_t r15_6;
    int64_t r12_7;
    int64_t r13_8;
    int64_t v9;

    fun_2c8(r14_5, rsi, rdx, rcx);
    fun_2d0(r15_6, rsi, rdx, rcx);
    fun_2d8(r12_7, rsi, rdx, rcx);
    fun_2e0(r13_8, rsi, rdx, rcx);
    goto v9;
}

void fun_358() {
    signed char** v1;
    int64_t rbp2;
    signed char** rdi3;
    signed char** rsi4;
    int64_t rbp5;
    signed char** rsi6;
    signed char** rdi7;
    int64_t rbx8;
    int64_t r14_9;
    int64_t r15_10;
    int64_t r12_11;
    int64_t r13_12;
    int64_t v13;

    while (v1 = reinterpret_cast<signed char**>(__return_address()), ++rbp2, rbp2 != 0x7d0) {
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&rbp2) * 0xcccccccd) <= 0xccccccc) {
            *reinterpret_cast<int32_t*>(&rdi3) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi3) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi4 = v1;
            fun_382();
        }
        *rdi3 = *rsi4;
        rdi3 = v1;
        rsi4 = reinterpret_cast<signed char**>(0x351);
        fun_358();
    }
    *reinterpret_cast<int32_t*>(&rbp5) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp5) + 4) = reinterpret_cast<int32_t>(fputc);
    fun_39f(v1, 0x38b, 0x392);
    rsi6 = reinterpret_cast<signed char**>(0x3a6);
    rdi7 = v1;
    fun_3b8();
    do {
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&rbp5) * 0xcccccccd) <= 0xccccccc) {
            *reinterpret_cast<int32_t*>(&rdi7) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi7) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi6 = v1;
            fun_402();
        }
        *rdi7 = *rsi6;
        rdi7 = v1;
        rsi6 = reinterpret_cast<signed char**>(0x3d1);
        fun_3d8();
        ++rbp5;
    } while (rbp5 != 0x7d0);
    fun_420(v1, 0x40b, 0x412);
    fun_439(0x427, 22, 1, v1);
    fun_2c0(rbx8, 22, 1, v1);
    fun_2c8(r14_9, 22, 1, v1);
    fun_2d0(r15_10, 22, 1, v1);
    fun_2d8(r12_11, 22, 1, v1);
    fun_2e0(r13_12, 22, 1, v1);
    goto v13;
}

void fun_382() {
    signed char** v1;
    signed char** rdi2;
    signed char** rsi3;
    int64_t rbp4;
    int64_t rbp5;
    signed char** rsi6;
    signed char** rdi7;
    int64_t rbx8;
    int64_t r14_9;
    int64_t r15_10;
    int64_t r12_11;
    int64_t r13_12;
    int64_t v13;

    while (1) {
        v1 = reinterpret_cast<signed char**>(__return_address());
        do {
            *rdi2 = *rsi3;
            rdi2 = v1;
            rsi3 = reinterpret_cast<signed char**>(0x351);
            fun_358();
            ++rbp4;
            if (rbp4 == 0x7d0) 
                goto addr_384_7;
            __asm__("ror eax, 0x2");
        } while (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&rbp4) * 0xcccccccd) > 0xccccccc);
        *reinterpret_cast<int32_t*>(&rdi2) = 10;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi2) + 4) = reinterpret_cast<int32_t>(fputc);
        rsi3 = v1;
        fun_382();
    }
    addr_384_7:
    *reinterpret_cast<int32_t*>(&rbp5) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp5) + 4) = reinterpret_cast<int32_t>(fputc);
    fun_39f(v1, 0x38b, 0x392);
    rsi6 = reinterpret_cast<signed char**>(0x3a6);
    rdi7 = v1;
    fun_3b8();
    do {
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&rbp5) * 0xcccccccd) <= 0xccccccc) {
            *reinterpret_cast<int32_t*>(&rdi7) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi7) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi6 = v1;
            fun_402();
        }
        *rdi7 = *rsi6;
        rdi7 = v1;
        rsi6 = reinterpret_cast<signed char**>(0x3d1);
        fun_3d8();
        ++rbp5;
    } while (rbp5 != 0x7d0);
    fun_420(v1, 0x40b, 0x412);
    fun_439(0x427, 22, 1, v1);
    fun_2c0(rbx8, 22, 1, v1);
    fun_2c8(r14_9, 22, 1, v1);
    fun_2d0(r15_10, 22, 1, v1);
    fun_2d8(r12_11, 22, 1, v1);
    fun_2e0(r13_12, 22, 1, v1);
    goto v13;
}

void fun_3d8() {
    int64_t rbp1;
    signed char** rdi2;
    signed char** rsi3;
    int64_t rbx4;
    int64_t r14_5;
    int64_t r15_6;
    int64_t r12_7;
    int64_t r13_8;
    int64_t v9;

    while (++rbp1, rbp1 != 0x7d0) {
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&rbp1) * 0xcccccccd) <= 0xccccccc) {
            *reinterpret_cast<int32_t*>(&rdi2) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi2) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi3 = reinterpret_cast<signed char**>(__return_address());
            fun_402();
        }
        *rdi2 = *rsi3;
        rdi2 = reinterpret_cast<signed char**>(__return_address());
        rsi3 = reinterpret_cast<signed char**>(0x3d1);
        fun_3d8();
    }
    fun_420(__return_address(), 0x40b, 0x412);
    fun_439(0x427, 22, 1, __return_address());
    fun_2c0(rbx4, 22, 1, __return_address());
    fun_2c8(r14_5, 22, 1, __return_address());
    fun_2d0(r15_6, 22, 1, __return_address());
    fun_2d8(r12_7, 22, 1, __return_address());
    fun_2e0(r13_8, 22, 1, __return_address());
    goto v9;
}

void fun_402() {
    signed char** v1;
    signed char** rdi2;
    signed char** rsi3;
    int64_t rbp4;
    int64_t rbx5;
    int64_t r14_6;
    int64_t r15_7;
    int64_t r12_8;
    int64_t r13_9;
    int64_t v10;

    while (1) {
        v1 = reinterpret_cast<signed char**>(__return_address());
        do {
            *rdi2 = *rsi3;
            rdi2 = v1;
            rsi3 = reinterpret_cast<signed char**>(0x3d1);
            fun_3d8();
            ++rbp4;
            if (rbp4 == 0x7d0) 
                goto addr_404_7;
            __asm__("ror eax, 0x2");
        } while (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&rbp4) * 0xcccccccd) > 0xccccccc);
        *reinterpret_cast<int32_t*>(&rdi2) = 10;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi2) + 4) = reinterpret_cast<int32_t>(fputc);
        rsi3 = v1;
        fun_402();
    }
    addr_404_7:
    fun_420(v1, 0x40b, 0x412);
    fun_439(0x427, 22, 1, v1);
    fun_2c0(rbx5, 22, 1, v1);
    fun_2c8(r14_6, 22, 1, v1);
    fun_2d0(r15_7, 22, 1, v1);
    fun_2d8(r12_8, 22, 1, v1);
    fun_2e0(r13_9, 22, 1, v1);
    goto v10;
}

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

int64_t fun_108(struct s0* rdi, struct s1* rsi) {
    signed char** v3;
    int64_t r13_4;
    int64_t rax5;
    int64_t rax6;
    struct s2* rdi7;
    struct s3* rsi8;
    int64_t rcx9;
    struct s4* rdi10;
    int64_t rdx11;
    struct s2* rdi12;
    int64_t rsi13;
    uint64_t rsi14;
    struct s10* rsi15;
    struct s11* rdi16;
    int32_t* rbx17;
    signed char** rcx18;
    int64_t rdx19;
    struct s12* rsi20;
    int32_t* rbx21;
    struct s4* rdi22;
    struct s13* rsi23;
    int64_t rax24;
    int64_t rdx25;
    int64_t rbx26;
    struct s4* rdi27;
    struct s9* rsi28;
    int32_t ebp29;
    signed char*** rax30;
    signed char** v31;
    signed char** rsi32;
    int64_t rbp33;
    signed char** rdi34;
    int64_t rbp35;
    signed char** rsi36;
    signed char** rdi37;
    int64_t rbx38;
    int64_t r14_39;
    int64_t r15_40;
    int64_t r12_41;
    int64_t v42;

    v3 = reinterpret_cast<signed char**>(__return_address());
    r13_4 = rax5;
    *reinterpret_cast<int32_t*>(&rax6) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax6) + 4) = reinterpret_cast<int32_t>(fputc);
    rdi->f0 = rsi->f0;
    rdi7 = reinterpret_cast<struct s2*>(&rdi->f4);
    rsi8 = reinterpret_cast<struct s3*>(&rsi->f4);
    *reinterpret_cast<int32_t*>(&rcx9) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx9) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        __asm__("xorps xmm1, xmm1");
        __asm__("cvtsi2sd xmm1, ecx");
        __asm__("divsd xmm1, xmm0");
        rdi7->f0 = rsi8->f0;
        rdi10 = reinterpret_cast<struct s4*>(&rdi7->f4);
        rdx11 = rcx9 + 1;
        __asm__("xorpd xmm1, xmm1");
        if (rdx11 != 0x7d0) {
            __asm__("xorps xmm1, xmm1");
            __asm__("cvtsi2sd xmm1, edx");
            __asm__("divsd xmm1, xmm0");
        }
        rdi10->f0 = rsi8->f4;
        rdi12 = reinterpret_cast<struct s2*>(&rdi10->f4);
        __asm__("xorps xmm1, xmm1");
        __asm__("cvtsi2sd xmm1, esi");
        __asm__("divsd xmm1, xmm0");
        *reinterpret_cast<int32_t*>(&rsi13) = static_cast<int32_t>(rcx9 + 4);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi13) + 4) = reinterpret_cast<int32_t>(fputc);
        rsi14 = reinterpret_cast<uint64_t>(rsi13 * 0x10624dd3) >> 39;
        *reinterpret_cast<int32_t*>(&rsi15) = -(*reinterpret_cast<int32_t*>(&rsi14) * 0x7d0) + *reinterpret_cast<int32_t*>(&rcx9) + 4;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi15) + 4) = reinterpret_cast<int32_t>(fputc);
        __asm__("xorps xmm2, xmm2");
        __asm__("cvtsi2sd xmm2, esi");
        rdi12->f0 = rsi15->f0;
        __asm__("divsd xmm2, xmm0");
        rdi12->f4 = rsi15->f4;
        *reinterpret_cast<int32_t*>(&rsi8) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi8) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("xorps xmm1, xmm1");
            __asm__("cvtsi2sd xmm1, edi");
            __asm__("divsd xmm1, xmm0");
            rdi16 = reinterpret_cast<struct s11*>(rbx17 + rcx9 * 0xfa0);
            rdi16->f0 = rsi8->f0;
            rdi7 = reinterpret_cast<struct s2*>(&rdi16->f4);
            rsi8 = reinterpret_cast<struct s3*>(reinterpret_cast<int64_t>(&rsi8->f4) + 1);
        } while (!reinterpret_cast<int1_t>(rsi8 == 0x7d0));
        rcx9 = rdx11;
    } while (rdx11 != 0x7d0);
    *reinterpret_cast<int32_t*>(&rcx18) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx18) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        rdi7->f0 = rsi8->f0;
        rdi7 = reinterpret_cast<struct s2*>(&rdi7->f4);
        *reinterpret_cast<int32_t*>(&rdx19) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx19) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rsi20 = reinterpret_cast<struct s12*>(rbx21 + rax6 * 0xfa0);
            rdi7->f0 = rsi20->f0;
            rdi22 = reinterpret_cast<struct s4*>(&rdi7->f4);
            rsi23 = reinterpret_cast<struct s13*>(&rsi20->f4);
            __asm__("mulsd xmm1, [r12+rdx*8]");
            __asm__("addsd xmm0, xmm1");
            rdi22->f0 = rsi23->f0;
            rdi7 = reinterpret_cast<struct s2*>(&rdi22->f4);
            rsi8 = reinterpret_cast<struct s3*>(&rsi23->f4);
            ++rdx19;
        } while (rdx19 != 0x7d0);
        ++rax6;
    } while (rax6 != 0x7d0);
    do {
        rdi7->f0 = rsi8->f0;
        rdi7 = reinterpret_cast<struct s2*>(&rdi7->f4);
        rsi8 = reinterpret_cast<struct s3*>(&rsi8->f4);
        *reinterpret_cast<int32_t*>(&rax24) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax24) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rdx25 = rax24 * 0x3e80 + rbx26;
            rdi7->f0 = rsi8->f0;
            rdi27 = reinterpret_cast<struct s4*>(&rdi7->f4);
            rsi28 = reinterpret_cast<struct s9*>(&rsi8->f4);
            __asm__("mulsd xmm1, [r13+rax*8+0x0]");
            __asm__("addsd xmm0, xmm1");
            rdi27->f0 = rsi28->f0;
            rdi7 = reinterpret_cast<struct s2*>(&rdi27->f4);
            rsi8 = reinterpret_cast<struct s3*>(&rsi28->f1);
            ++rax24;
        } while (rax24 != 0x7d0);
        rcx18 = reinterpret_cast<signed char**>(reinterpret_cast<int64_t>(rcx18) + 1);
    } while (!reinterpret_cast<int1_t>(rcx18 == 0x7d0));
    if (ebp29 >= 43 && **v3 == fputc) {
        rax30 = g2f8;
        v31 = *rax30;
        fun_315(0x306, 22, 1);
        rsi32 = reinterpret_cast<signed char**>(0x31c);
        *reinterpret_cast<int32_t*>(&rbp33) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp33) + 4) = reinterpret_cast<int32_t>(fputc);
        rdi34 = v31;
        fun_330();
        do {
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&rbp33) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi34) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi34) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi32 = v31;
                fun_382();
            }
            *rdi34 = *rsi32;
            rdi34 = v31;
            rsi32 = reinterpret_cast<signed char**>(0x351);
            fun_358();
            ++rbp33;
        } while (rbp33 != 0x7d0);
        *reinterpret_cast<int32_t*>(&rbp35) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp35) + 4) = reinterpret_cast<int32_t>(fputc);
        fun_39f(v31, 0x38b, 0x392);
        rsi36 = reinterpret_cast<signed char**>(0x3a6);
        rdi37 = v31;
        fun_3b8();
        do {
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&rbp35) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi37) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi37) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi36 = v31;
                fun_402();
            }
            *rdi37 = *rsi36;
            rdi37 = v31;
            rsi36 = reinterpret_cast<signed char**>(0x3d1);
            fun_3d8();
            ++rbp35;
        } while (rbp35 != 0x7d0);
        fun_420(v31, 0x40b, 0x412);
        *reinterpret_cast<int32_t*>(&rsi8) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi8) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx25) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx25) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx18 = v31;
        fun_439(0x427, 22, 1, rcx18);
    }
    fun_2c0(rbx38, rsi8, rdx25, rcx18);
    fun_2c8(r14_39, rsi8, rdx25, rcx18);
    fun_2d0(r15_40, rsi8, rdx25, rcx18);
    fun_2d8(r12_41, rsi8, rdx25, rcx18);
    fun_2e0(r13_4, rsi8, rdx25, rcx18);
    goto v42;
}

void fun_315(int64_t rdi, int64_t rsi, int64_t rdx) {
    signed char** v4;
    signed char** rsi5;
    int64_t rbp6;
    signed char** rdi7;
    int64_t rbp8;
    signed char** rsi9;
    signed char** rdi10;
    int64_t rbx11;
    int64_t r14_12;
    int64_t r15_13;
    int64_t r12_14;
    int64_t r13_15;
    int64_t v16;

    v4 = reinterpret_cast<signed char**>(__return_address());
    rsi5 = reinterpret_cast<signed char**>(0x31c);
    *reinterpret_cast<int32_t*>(&rbp6) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp6) + 4) = reinterpret_cast<int32_t>(fputc);
    rdi7 = v4;
    fun_330();
    do {
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&rbp6) * 0xcccccccd) <= 0xccccccc) {
            *reinterpret_cast<int32_t*>(&rdi7) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi7) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi5 = v4;
            fun_382();
        }
        *rdi7 = *rsi5;
        rdi7 = v4;
        rsi5 = reinterpret_cast<signed char**>(0x351);
        fun_358();
        ++rbp6;
    } while (rbp6 != 0x7d0);
    *reinterpret_cast<int32_t*>(&rbp8) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp8) + 4) = reinterpret_cast<int32_t>(fputc);
    fun_39f(v4, 0x38b, 0x392);
    rsi9 = reinterpret_cast<signed char**>(0x3a6);
    rdi10 = v4;
    fun_3b8();
    do {
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&rbp8) * 0xcccccccd) <= 0xccccccc) {
            *reinterpret_cast<int32_t*>(&rdi10) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi10) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi9 = v4;
            fun_402();
        }
        *rdi10 = *rsi9;
        rdi10 = v4;
        rsi9 = reinterpret_cast<signed char**>(0x3d1);
        fun_3d8();
        ++rbp8;
    } while (rbp8 != 0x7d0);
    fun_420(v4, 0x40b, 0x412);
    fun_439(0x427, 22, 1, v4);
    fun_2c0(rbx11, 22, 1, v4);
    fun_2c8(r14_12, 22, 1, v4);
    fun_2d0(r15_13, 22, 1, v4);
    fun_2d8(r12_14, 22, 1, v4);
    fun_2e0(r13_15, 22, 1, v4);
    goto v16;
}

void fun_2c8(int64_t rdi, struct s3* rsi, int64_t rdx, signed char** rcx) {
    int64_t r15_5;
    int64_t r12_6;
    int64_t r13_7;
    int64_t v8;

    fun_2d0(r15_5, rsi, rdx, rcx);
    fun_2d8(r12_6, rsi, rdx, rcx);
    fun_2e0(r13_7, rsi, rdx, rcx);
    goto v8;
}

void fun_330() {
    signed char** v1;
    int64_t rbp2;
    signed char** rdi3;
    signed char** rsi4;
    int64_t rbp5;
    signed char** rsi6;
    signed char** rdi7;
    int64_t rbx8;
    int64_t r14_9;
    int64_t r15_10;
    int64_t r12_11;
    int64_t r13_12;
    int64_t v13;

    v1 = reinterpret_cast<signed char**>(__return_address());
    do {
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&rbp2) * 0xcccccccd) <= 0xccccccc) {
            *reinterpret_cast<int32_t*>(&rdi3) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi3) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi4 = v1;
            fun_382();
        }
        *rdi3 = *rsi4;
        rdi3 = v1;
        rsi4 = reinterpret_cast<signed char**>(0x351);
        fun_358();
        ++rbp2;
    } while (rbp2 != 0x7d0);
    *reinterpret_cast<int32_t*>(&rbp5) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp5) + 4) = reinterpret_cast<int32_t>(fputc);
    fun_39f(v1, 0x38b, 0x392);
    rsi6 = reinterpret_cast<signed char**>(0x3a6);
    rdi7 = v1;
    fun_3b8();
    do {
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&rbp5) * 0xcccccccd) <= 0xccccccc) {
            *reinterpret_cast<int32_t*>(&rdi7) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi7) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi6 = v1;
            fun_402();
        }
        *rdi7 = *rsi6;
        rdi7 = v1;
        rsi6 = reinterpret_cast<signed char**>(0x3d1);
        fun_3d8();
        ++rbp5;
    } while (rbp5 != 0x7d0);
    fun_420(v1, 0x40b, 0x412);
    fun_439(0x427, 22, 1, v1);
    fun_2c0(rbx8, 22, 1, v1);
    fun_2c8(r14_9, 22, 1, v1);
    fun_2d0(r15_10, 22, 1, v1);
    fun_2d8(r12_11, 22, 1, v1);
    fun_2e0(r13_12, 22, 1, v1);
    goto v13;
}

void fun_2d0(int64_t rdi, struct s3* rsi, int64_t rdx, signed char** rcx) {
    int64_t r12_5;
    int64_t r13_6;
    int64_t v7;

    fun_2d8(r12_5, rsi, rdx, rcx);
    fun_2e0(r13_6, rsi, rdx, rcx);
    goto v7;
}

void fun_39f(signed char** rdi, int64_t rsi, int64_t rdx) {
    signed char** v4;
    signed char** rsi5;
    signed char** rdi6;
    int64_t rbp7;
    int64_t rbx8;
    int64_t r14_9;
    int64_t r15_10;
    int64_t r12_11;
    int64_t r13_12;
    int64_t v13;

    v4 = reinterpret_cast<signed char**>(__return_address());
    rsi5 = reinterpret_cast<signed char**>(0x3a6);
    rdi6 = v4;
    fun_3b8();
    do {
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&rbp7) * 0xcccccccd) <= 0xccccccc) {
            *reinterpret_cast<int32_t*>(&rdi6) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi6) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi5 = v4;
            fun_402();
        }
        *rdi6 = *rsi5;
        rdi6 = v4;
        rsi5 = reinterpret_cast<signed char**>(0x3d1);
        fun_3d8();
        ++rbp7;
    } while (rbp7 != 0x7d0);
    fun_420(v4, 0x40b, 0x412);
    fun_439(0x427, 22, 1, v4);
    fun_2c0(rbx8, 22, 1, v4);
    fun_2c8(r14_9, 22, 1, v4);
    fun_2d0(r15_10, 22, 1, v4);
    fun_2d8(r12_11, 22, 1, v4);
    fun_2e0(r13_12, 22, 1, v4);
    goto v13;
}

void fun_420(signed char** rdi, int64_t rsi, int64_t rdx) {
    signed char** rbp4;
    int64_t rbx5;
    int64_t r14_6;
    int64_t r15_7;
    int64_t r12_8;
    int64_t r13_9;
    int64_t v10;

    fun_439(0x427, 22, 1, rbp4);
    fun_2c0(rbx5, 22, 1, rbp4);
    fun_2c8(r14_6, 22, 1, rbp4);
    fun_2d0(r15_7, 22, 1, rbp4);
    fun_2d8(r12_8, 22, 1, rbp4);
    fun_2e0(r13_9, 22, 1, rbp4);
    goto v10;
}

void fun_2d8(int64_t rdi, struct s3* rsi, int64_t rdx, signed char** rcx) {
    int64_t r13_5;
    int64_t v6;

    fun_2e0(r13_5, rsi, rdx, rcx);
    goto v6;
}

void fun_3b8() {
    signed char** v1;
    int64_t rbp2;
    signed char** rdi3;
    signed char** rsi4;
    int64_t rbx5;
    int64_t r14_6;
    int64_t r15_7;
    int64_t r12_8;
    int64_t r13_9;
    int64_t v10;

    v1 = reinterpret_cast<signed char**>(__return_address());
    do {
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&rbp2) * 0xcccccccd) <= 0xccccccc) {
            *reinterpret_cast<int32_t*>(&rdi3) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi3) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi4 = v1;
            fun_402();
        }
        *rdi3 = *rsi4;
        rdi3 = v1;
        rsi4 = reinterpret_cast<signed char**>(0x3d1);
        fun_3d8();
        ++rbp2;
    } while (rbp2 != 0x7d0);
    fun_420(v1, 0x40b, 0x412);
    fun_439(0x427, 22, 1, v1);
    fun_2c0(rbx5, 22, 1, v1);
    fun_2c8(r14_6, 22, 1, v1);
    fun_2d0(r15_7, 22, 1, v1);
    fun_2d8(r12_8, 22, 1, v1);
    fun_2e0(r13_9, 22, 1, v1);
    goto v10;
}

void fun_439(int64_t rdi, struct s3* rsi, int64_t rdx, signed char** rcx) {
    int64_t rbx5;
    int64_t r14_6;
    int64_t r15_7;
    int64_t r12_8;
    int64_t r13_9;
    int64_t v10;

    fun_2c0(rbx5, rsi, rdx, rcx);
    fun_2c8(r14_6, rsi, rdx, rcx);
    fun_2d0(r15_7, rsi, rdx, rcx);
    fun_2d8(r12_8, rsi, rdx, rcx);
    fun_2e0(r13_9, rsi, rdx, rcx);
    goto v10;
}

void fun_2e0(int64_t rdi, struct s3* rsi, int64_t rdx, signed char** rcx) {
    int64_t v5;

    goto v5;
}

void fputc(int32_t edi) {
    if (reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(edi < reinterpret_cast<int32_t>(fputc) == fputc)) | reinterpret_cast<uint1_t>(edi == fputc)) {
    }
}

void fun_e8() {
    signed char* rax1;
    signed char* rax2;
    signed char al3;

    __asm__("rol byte [rdi], 1");
    *rax1 = reinterpret_cast<signed char>(*rax2 + al3);
    fun_f6();
}

