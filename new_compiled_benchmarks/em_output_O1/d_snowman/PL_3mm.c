
void fun_413(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx);

void fun_41b(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx);

void fun_423(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx);

void fun_42b(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx);

void fun_433(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx);

void fun_43d(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx);

void fun_40b(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int64_t r14_5;
    int64_t r15_6;
    int64_t r12_7;
    int64_t r13_8;
    int64_t rbp9;
    int64_t v10;
    int64_t v11;

    fun_413(r14_5, rsi, rdx, rcx);
    fun_41b(r15_6, rsi, rdx, rcx);
    fun_423(r12_7, rsi, rdx, rcx);
    fun_42b(r13_8, rsi, rdx, rcx);
    fun_433(rbp9, rsi, rdx, rcx);
    fun_43d(v10, rsi, rdx, rcx);
    goto v11;
}

void fun_4ff();

void fputc(int32_t edi, int64_t rsi);

void fun_53d(int32_t* rdi, int64_t rsi, int64_t rdx);

void fun_557(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx);

void fun_4d2() {
    int32_t* v1;
    int32_t* rdi2;
    int32_t* rsi3;
    int64_t rdx4;
    int64_t rax5;
    int64_t v6;
    int64_t v7;
    int64_t rax8;
    int64_t rbx9;
    int64_t r14_10;
    int64_t r15_11;
    int64_t r12_12;
    int64_t r13_13;
    int64_t rbp14;
    int64_t v15;
    int64_t v16;

    while (1) {
        v1 = reinterpret_cast<int32_t*>(__return_address());
        do {
            *rdi2 = *rsi3;
            rdi2 = v1;
            rsi3 = reinterpret_cast<int32_t*>(0x4f8);
            fun_4ff();
            ++rdx4;
            if (rdx4 == 0x44c) {
                rax5 = v6 + 1;
                if (rax5 == 0x320) 
                    goto addr_524_8;
                v6 = rax5;
                v7 = rax5 * 0x320;
                *reinterpret_cast<int32_t*>(&rdx4) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx4) + 4) = reinterpret_cast<int32_t>(fputc);
            }
            rax8 = v7;
            __asm__("ror eax, 0x2");
        } while (reinterpret_cast<uint32_t>((*reinterpret_cast<int32_t*>(&rax8) + *reinterpret_cast<int32_t*>(&rdx4)) * 0xcccccccd) > 0xccccccc);
        *reinterpret_cast<int32_t*>(&rdi2) = 10;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi2) + 4) = reinterpret_cast<int32_t>(fputc);
        rsi3 = v1;
        fun_4d2();
    }
    addr_524_8:
    fun_53d(v1, 0x52b, 0x532);
    fun_557(0x544, 22, 1, v1);
    fun_40b(rbx9, 22, 1, v1);
    fun_413(r14_10, 22, 1, v1);
    fun_41b(r15_11, 22, 1, v1);
    fun_423(r12_12, 22, 1, v1);
    fun_42b(r13_13, 22, 1, v1);
    fun_433(rbp14, 22, 1, v1);
    fun_43d(v15, 22, 1, v1);
    goto v16;
}

void fun_4ff() {
    int64_t rdx1;
    int64_t rax2;
    int64_t v3;
    int64_t v4;
    int64_t rax5;
    int32_t* rdi6;
    int32_t* rsi7;
    int64_t rbx8;
    int64_t r14_9;
    int64_t r15_10;
    int64_t r12_11;
    int64_t r13_12;
    int64_t rbp13;
    int64_t v14;
    int64_t v15;

    while (1) {
        ++rdx1;
        if (rdx1 == 0x44c) {
            rax2 = v3 + 1;
            if (rax2 == 0x320) 
                break;
            v3 = rax2;
            v4 = rax2 * 0x320;
            *reinterpret_cast<int32_t*>(&rdx1) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx1) + 4) = reinterpret_cast<int32_t>(fputc);
        }
        rax5 = v4;
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>((*reinterpret_cast<int32_t*>(&rax5) + *reinterpret_cast<int32_t*>(&rdx1)) * 0xcccccccd) <= 0xccccccc) {
            *reinterpret_cast<int32_t*>(&rdi6) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi6) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi7 = reinterpret_cast<int32_t*>(__return_address());
            fun_4d2();
        }
        *rdi6 = *rsi7;
        rdi6 = reinterpret_cast<int32_t*>(__return_address());
        rsi7 = reinterpret_cast<int32_t*>(0x4f8);
        fun_4ff();
    }
    fun_53d(__return_address(), 0x52b, 0x532);
    fun_557(0x544, 22, 1, __return_address());
    fun_40b(rbx8, 22, 1, __return_address());
    fun_413(r14_9, 22, 1, __return_address());
    fun_41b(r15_10, 22, 1, __return_address());
    fun_423(r12_11, 22, 1, __return_address());
    fun_42b(r13_12, 22, 1, __return_address());
    fun_433(rbp13, 22, 1, __return_address());
    fun_43d(v14, 22, 1, __return_address());
    goto v15;
}

void fun_53d(int32_t* rdi, int64_t rsi, int64_t rdx) {
    int64_t rbx4;
    int64_t r14_5;
    int64_t r15_6;
    int64_t r12_7;
    int64_t r13_8;
    int64_t rbp9;
    int64_t v10;
    int64_t v11;

    fun_557(0x544, 22, 1, __return_address());
    fun_40b(rbx4, 22, 1, __return_address());
    fun_413(r14_5, 22, 1, __return_address());
    fun_41b(r15_6, 22, 1, __return_address());
    fun_423(r12_7, 22, 1, __return_address());
    fun_42b(r13_8, 22, 1, __return_address());
    fun_433(rbp9, 22, 1, __return_address());
    fun_43d(v10, 22, 1, __return_address());
    goto v11;
}

void fun_48b();

void fun_472(int64_t rdi, int64_t rsi, int64_t rdx) {
    int32_t* v4;
    int32_t* rsi5;
    int32_t* rdi6;
    int64_t rax7;
    int64_t v8;
    int64_t v9;
    int64_t rdx10;
    int64_t rax11;
    int64_t rbx12;
    int64_t r14_13;
    int64_t r15_14;
    int64_t r12_15;
    int64_t r13_16;
    int64_t rbp17;
    int64_t v18;
    int64_t v19;

    v4 = reinterpret_cast<int32_t*>(__return_address());
    rsi5 = reinterpret_cast<int32_t*>(0x479);
    rdi6 = v4;
    fun_48b();
    *reinterpret_cast<int32_t*>(&rax7) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax7) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        v8 = rax7;
        v9 = rax7 * 0x320;
        *reinterpret_cast<int32_t*>(&rdx10) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx10) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rax11 = v9;
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>((*reinterpret_cast<int32_t*>(&rax11) + *reinterpret_cast<int32_t*>(&rdx10)) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi6) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi6) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi5 = v4;
                fun_4d2();
            }
            *rdi6 = *rsi5;
            rdi6 = v4;
            rsi5 = reinterpret_cast<int32_t*>(0x4f8);
            fun_4ff();
            ++rdx10;
        } while (rdx10 != 0x44c);
        rax7 = v8 + 1;
    } while (rax7 != 0x320);
    fun_53d(v4, 0x52b, 0x532);
    fun_557(0x544, 22, 1, v4);
    fun_40b(rbx12, 22, 1, v4);
    fun_413(r14_13, 22, 1, v4);
    fun_41b(r15_14, 22, 1, v4);
    fun_423(r12_15, 22, 1, v4);
    fun_42b(r13_16, 22, 1, v4);
    fun_433(rbp17, 22, 1, v4);
    fun_43d(v18, 22, 1, v4);
    goto v19;
}

void fun_413(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int64_t r15_5;
    int64_t r12_6;
    int64_t r13_7;
    int64_t rbp8;
    int64_t v9;
    int64_t v10;

    fun_41b(r15_5, rsi, rdx, rcx);
    fun_423(r12_6, rsi, rdx, rcx);
    fun_42b(r13_7, rsi, rdx, rcx);
    fun_433(rbp8, rsi, rdx, rcx);
    fun_43d(v9, rsi, rdx, rcx);
    goto v10;
}

void fun_557(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int64_t rbx5;
    int64_t r14_6;
    int64_t r15_7;
    int64_t r12_8;
    int64_t r13_9;
    int64_t rbp10;
    int64_t v11;
    int64_t v12;

    fun_40b(rbx5, rsi, rdx, rcx);
    fun_413(r14_6, rsi, rdx, rcx);
    fun_41b(r15_7, rsi, rdx, rcx);
    fun_423(r12_8, rsi, rdx, rcx);
    fun_42b(r13_9, rsi, rdx, rcx);
    fun_433(rbp10, rsi, rdx, rcx);
    fun_43d(v11, rsi, rdx, rcx);
    goto v12;
}

void fun_48b() {
    int32_t* v1;
    int64_t rax2;
    int64_t v3;
    int64_t v4;
    int64_t rdx5;
    int64_t rax6;
    int32_t* rdi7;
    int32_t* rsi8;
    int64_t rbx9;
    int64_t r14_10;
    int64_t r15_11;
    int64_t r12_12;
    int64_t r13_13;
    int64_t rbp14;
    int64_t v15;
    int64_t v16;

    v1 = reinterpret_cast<int32_t*>(__return_address());
    *reinterpret_cast<int32_t*>(&rax2) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax2) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        v3 = rax2;
        v4 = rax2 * 0x320;
        *reinterpret_cast<int32_t*>(&rdx5) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx5) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rax6 = v4;
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>((*reinterpret_cast<int32_t*>(&rax6) + *reinterpret_cast<int32_t*>(&rdx5)) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi7) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi7) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi8 = v1;
                fun_4d2();
            }
            *rdi7 = *rsi8;
            rdi7 = v1;
            rsi8 = reinterpret_cast<int32_t*>(0x4f8);
            fun_4ff();
            ++rdx5;
        } while (rdx5 != 0x44c);
        rax2 = v3 + 1;
    } while (rax2 != 0x320);
    fun_53d(v1, 0x52b, 0x532);
    fun_557(0x544, 22, 1, v1);
    fun_40b(rbx9, 22, 1, v1);
    fun_413(r14_10, 22, 1, v1);
    fun_41b(r15_11, 22, 1, v1);
    fun_423(r12_12, 22, 1, v1);
    fun_42b(r13_13, 22, 1, v1);
    fun_433(rbp14, 22, 1, v1);
    fun_43d(v15, 22, 1, v1);
    goto v16;
}

void fun_41b(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int64_t r12_5;
    int64_t r13_6;
    int64_t rbp7;
    int64_t v8;
    int64_t v9;

    fun_423(r12_5, rsi, rdx, rcx);
    fun_42b(r13_6, rsi, rdx, rcx);
    fun_433(rbp7, rsi, rdx, rcx);
    fun_43d(v8, rsi, rdx, rcx);
    goto v9;
}

void fun_423(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int64_t r13_5;
    int64_t rbp6;
    int64_t v7;
    int64_t v8;

    fun_42b(r13_5, rsi, rdx, rcx);
    fun_433(rbp6, rsi, rdx, rcx);
    fun_43d(v7, rsi, rdx, rcx);
    goto v8;
}

void fun_42b(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int64_t rbp5;
    int64_t v6;
    int64_t v7;

    fun_433(rbp5, rsi, rdx, rcx);
    fun_43d(v6, rsi, rdx, rcx);
    goto v7;
}

void fun_433(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int64_t v5;
    int64_t v6;

    fun_43d(v5, rsi, rdx, rcx);
    goto v6;
}

void fun_43d(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int64_t v5;

    goto v5;
}

void fputc(int32_t edi, int64_t rsi) {
}

void fun_94() {
    __asm__("movups xmm0, [rip+0x0]");
}

struct s0 {
    int32_t f0;
    int32_t f1;
};

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

void fun_e0(int32_t* rdi, int32_t* rsi, int64_t rdx, int64_t rcx) {
    int64_t rdx5;
    struct s0* rsi6;
    struct s1* rdi7;
    struct s0* rdi8;
    int64_t r10_9;
    int64_t rcx10;
    int64_t r8_11;
    uint32_t edi12;
    int64_t rsi13;
    uint64_t rsi14;
    struct s2* rdi15;
    struct s3* rsi16;
    int32_t* r13_17;
    int64_t r9_18;
    int64_t rdx19;
    int64_t rdi20;
    uint64_t rsi21;
    int32_t* rdi22;
    int32_t* rbp23;
    int64_t rcx24;
    int64_t rdx25;
    int32_t* rdi26;
    int32_t* rbx27;
    struct s4* rsi28;
    struct s5* rdi29;
    int32_t* rdi30;
    struct s6* rsi31;
    int64_t r9_32;
    int64_t rdx33;
    int32_t* rdi34;
    int32_t* r12_35;
    struct s7* rsi36;
    struct s8* rdi37;
    int32_t* rdi38;
    struct s9* rsi39;
    int64_t rcx40;
    int64_t* rax41;
    struct s10* rsi42;
    int32_t* rbx43;
    int32_t* rsi44;
    int32_t* r12_45;
    int32_t v46;
    signed char** v47;

    __asm__("movups [rsi+rdx*8], xmm1");
    if (rdx + 1 == 0x3e8) {
        if (rcx + 1 != 0x320) 
            goto 0xa0;
        *reinterpret_cast<int32_t*>(&rdx5) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx5) + 4) = reinterpret_cast<int32_t>(fputc);
        *rdi = *rsi;
        do {
            *reinterpret_cast<int32_t*>(&rsi6) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi6) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                rdi7 = reinterpret_cast<struct s1*>(reinterpret_cast<int64_t>(rsi6) + 1);
                __asm__("xorps xmm1, xmm1");
                __asm__("cvtsi2sd xmm1, r8d");
                __asm__("divsd xmm1, xmm0");
                rdi7->f0 = rsi6->f0;
                rdi8 = reinterpret_cast<struct s0*>(&rdi7->f4);
                rsi6 = rdi8;
            } while (!reinterpret_cast<int1_t>(rdi8 == "\""));
            ++r10_9;
        } while (r10_9 != 0x3e8);
        *reinterpret_cast<int32_t*>(&rcx10) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx10) + 4) = reinterpret_cast<int32_t>(fputc);
        rdi8->f0 = rsi6->f0;
        do {
            *reinterpret_cast<int32_t*>(&r8_11) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_11) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                edi12 = reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&rdx5) * static_cast<int32_t>(r8_11 + 3));
                *reinterpret_cast<uint32_t*>(&rsi13) = edi12 >> 2;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi13) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi14 = reinterpret_cast<uint64_t>(rsi13 * 0x1dca01dd) >> 37;
                *reinterpret_cast<uint32_t*>(&rdi15) = edi12 - *reinterpret_cast<int32_t*>(&rsi14) * 0x44c;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi15) + 4) = reinterpret_cast<int32_t>(fputc);
                __asm__("xorps xmm1, xmm1");
                __asm__("cvtsi2sd xmm1, edi");
                __asm__("divsd xmm1, xmm0");
                rsi16 = reinterpret_cast<struct s3*>(r13_17 + rdx5 * 0x960);
                rdi15->f0 = rsi16->f0;
                ++r8_11;
            } while (r8_11 != 0x4b0);
            ++rdx5;
        } while (!reinterpret_cast<int1_t>(rdx5 == "\""));
        *reinterpret_cast<int32_t*>(&r9_18) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_18) + 4) = reinterpret_cast<int32_t>(fputc);
        rdi15->f4 = rsi16->f4;
        do {
            *reinterpret_cast<int32_t*>(&rdx19) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx19) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                *reinterpret_cast<int32_t*>(&rdi20) = *reinterpret_cast<int32_t*>(&rcx10) * static_cast<int32_t>(rdx19 + 2) + 2;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi20) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi21 = reinterpret_cast<uint64_t>(rdi20 * 0x10624dd3) >> 38;
                *reinterpret_cast<int32_t*>(&rdi22) = *reinterpret_cast<int32_t*>(&rdi20) - *reinterpret_cast<int32_t*>(&rsi21) * 0x3e8;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi22) + 4) = reinterpret_cast<int32_t>(fputc);
                __asm__("xorps xmm1, xmm1");
                __asm__("cvtsi2sd xmm1, edi");
                __asm__("divsd xmm1, xmm0");
                *rdi22 = rbp23[rcx10 * 0x898];
                ++rdx19;
            } while (rdx19 != 0x44c);
            ++rcx10;
        } while (rcx10 != 0x4b0);
        *reinterpret_cast<int32_t*>(&rcx24) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx24) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            *reinterpret_cast<int32_t*>(&rdx25) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx25) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                rdi26 = rbx27 + r9_18 * 0x708;
                rsi28 = reinterpret_cast<struct s4*>(rdi26 + rdx25 * 2);
                rdi26[rdx25 * 2] = reinterpret_cast<int32_t>(fputc);
                __asm__("xorpd xmm0, xmm0");
                *reinterpret_cast<int32_t*>(&rdi29) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi29) + 4) = reinterpret_cast<int32_t>(fputc);
                do {
                    rdi29->f0 = rsi28->f0;
                    rdi30 = &rdi29->f4;
                    rsi31 = reinterpret_cast<struct s6*>(&rsi28->f4);
                    __asm__("mulsd xmm1, [r8+rdx*8]");
                    __asm__("addsd xmm0, xmm1");
                    *rdi30 = rsi31->f0;
                    rsi28 = reinterpret_cast<struct s4*>(&rsi31->f4);
                    rdi29 = reinterpret_cast<struct s5*>(reinterpret_cast<int64_t>(rdi30 + 1) + 1);
                } while (!reinterpret_cast<int1_t>(rdi29 == 0x3e8));
                ++rdx25;
            } while (!reinterpret_cast<int1_t>(rdx25 == "\""));
            ++r9_18;
        } while (r9_18 != 0x320);
        *reinterpret_cast<int32_t*>(&r9_32) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_32) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            *reinterpret_cast<int32_t*>(&rdx33) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx33) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                rdi34 = r12_35 + rcx24 * 0x898;
                rsi36 = reinterpret_cast<struct s7*>(rdi34 + rdx33 * 2);
                rdi34[rdx33 * 2] = reinterpret_cast<int32_t>(fputc);
                __asm__("xorpd xmm0, xmm0");
                *reinterpret_cast<int32_t*>(&rdi37) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi37) + 4) = reinterpret_cast<int32_t>(fputc);
                do {
                    rdi37->f0 = rsi36->f0;
                    rdi38 = &rdi37->f4;
                    rsi39 = reinterpret_cast<struct s9*>(&rsi36->f4);
                    __asm__("mulsd xmm1, [r8+rdx*8]");
                    __asm__("addsd xmm0, xmm1");
                    *rdi38 = rsi39->f0;
                    rsi36 = reinterpret_cast<struct s7*>(&rsi39->f4);
                    rdi37 = reinterpret_cast<struct s8*>(reinterpret_cast<int64_t>(rdi38 + 1) + 1);
                } while (!reinterpret_cast<int1_t>(rdi37 == 0x4b0));
                ++rdx33;
            } while (rdx33 != 0x44c);
            ++rcx24;
        } while (!reinterpret_cast<int1_t>(rcx24 == "\""));
        do {
            *reinterpret_cast<int32_t*>(&rcx40) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx40) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                (rax41 + r9_32 * 0x44c)[rcx40] = reinterpret_cast<int64_t>(fputc);
                __asm__("xorpd xmm0, xmm0");
                *reinterpret_cast<int32_t*>(&rsi42) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi42) + 4) = reinterpret_cast<int32_t>(fputc);
                do {
                    rbx43[r9_32 * 0x708] = rsi42->f0;
                    rsi44 = &rsi42->f4;
                    __asm__("mulsd xmm1, [rdi+rcx*8]");
                    __asm__("addsd xmm0, xmm1");
                    r12_45[reinterpret_cast<int64_t>(rsi44) * 0x898] = *rsi44;
                    rsi42 = reinterpret_cast<struct s10*>(reinterpret_cast<int64_t>(rsi44 + 1) + 1);
                } while (!reinterpret_cast<int1_t>(rsi42 == "\""));
                ++rcx40;
            } while (rcx40 != 0x44c);
            ++r9_32;
        } while (r9_32 != 0x320);
        if (v46 < 43) 
            goto 0x403;
        if (**v47 != fputc) 
            goto "???";
        fun_472(0x463, 22, 1);
    }
}

