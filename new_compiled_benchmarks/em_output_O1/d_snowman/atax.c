
struct s0 {
    int32_t f0;
    int32_t f4;
};

void fputc(int32_t edi, int64_t rsi);

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

int32_t** g1c8 = reinterpret_cast<int32_t**>(0x3d8d48288b4c);

void fun_1e4(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx);

void fun_1fe();

void fun_240();

void fun_217();

void fun_25a(int32_t* rdi, int64_t rsi, int64_t rdx, int32_t* rcx);

void fun_273(int64_t rdi, struct s1* rsi, int64_t rdx, int32_t* rcx);

void fun_198(int64_t rdi, struct s1* rsi, int64_t rdx, int32_t* rcx);

void fun_1a0(int64_t rdi, struct s1* rsi, int64_t rdx, int32_t* rcx);

void fun_1a8(int64_t rdi, struct s1* rsi, int64_t rdx, int32_t* rcx);

void fun_1b0(int64_t rdi, struct s1* rsi, int64_t rdx, int32_t* rcx);

void fun_109(struct s0* rdi) {
    signed char** v2;
    int64_t* r12_3;
    int64_t r13_4;
    int64_t rcx5;
    struct s1* rsi6;
    struct s2* rdi7;
    struct s3* rsi8;
    int32_t* rcx9;
    struct s2* rdi10;
    struct s3* rsi11;
    int32_t ebp12;
    int32_t** rax13;
    int32_t* r13_14;
    int32_t* rcx15;
    int32_t* rsi16;
    int64_t rbp17;
    int32_t* rdi18;
    int64_t rbx19;
    int64_t r14_20;
    int64_t r15_21;
    int64_t r12_22;
    int64_t v23;

    v2 = reinterpret_cast<signed char**>(__return_address());
    do {
        r12_3[r13_4] = reinterpret_cast<int64_t>(fputc);
        __asm__("xorpd xmm0, xmm0");
        *reinterpret_cast<int32_t*>(&rcx5) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx5) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rdi->f0 = rsi6->f0;
            rdi7 = reinterpret_cast<struct s2*>(&rdi->f4);
            rsi8 = reinterpret_cast<struct s3*>(&rsi6->f4);
            __asm__("mulsd xmm1, [r14+rcx*8]");
            __asm__("addsd xmm0, xmm1");
            rdi7->f0 = rsi8->f0;
            rdi = reinterpret_cast<struct s0*>(&rdi7->f4);
            rsi6 = reinterpret_cast<struct s1*>(&rsi8->f4);
            ++rcx5;
        } while (rcx5 != 0x834);
        *reinterpret_cast<int32_t*>(&rcx9) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx9) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rdi->f0 = rsi6->f0;
            rdi10 = reinterpret_cast<struct s2*>(&rdi->f4);
            rsi11 = reinterpret_cast<struct s3*>(&rsi6->f4);
            __asm__("mulsd xmm0, [r12+r13*8]");
            __asm__("addsd xmm0, [r15+rcx*8]");
            rdi10->f0 = rsi11->f0;
            rdi = reinterpret_cast<struct s0*>(&rdi10->f4);
            rsi6 = reinterpret_cast<struct s1*>(&rsi11->f4);
            rcx9 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rcx9) + 1);
        } while (!reinterpret_cast<int1_t>(rcx9 == 0x834));
        ++r13_4;
    } while (r13_4 != 0x76c);
    if (ebp12 >= 43 && **v2 == fputc) {
        rax13 = g1c8;
        r13_14 = *rax13;
        rcx15 = r13_14;
        fun_1e4(0x1d2, 22, 1, rcx15);
        rsi16 = reinterpret_cast<int32_t*>(0x1eb);
        *reinterpret_cast<int32_t*>(&rbp17) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp17) + 4) = reinterpret_cast<int32_t>(fputc);
        rdi18 = r13_14;
        fun_1fe();
        do {
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&rbp17) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi18) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi18) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi16 = r13_14;
                fun_240();
            }
            *rdi18 = *rsi16;
            rdi18 = r13_14;
            rsi16 = reinterpret_cast<int32_t*>(0x210);
            fun_217();
            ++rbp17;
        } while (rbp17 != 0x834);
        fun_25a(r13_14, 0x249, 0x250, rcx15);
        *reinterpret_cast<int32_t*>(&rsi6) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi6) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx9 = r13_14;
        fun_273(0x261, 22, 1, rcx9);
    }
    fun_198(rbx19, rsi6, 1, rcx9);
    fun_1a0(r14_20, rsi6, 1, rcx9);
    fun_1a8(r15_21, rsi6, 1, rcx9);
    fun_1b0(r12_22, rsi6, 1, rcx9);
    goto v23;
}

void fun_198(int64_t rdi, struct s1* rsi, int64_t rdx, int32_t* rcx) {
    int64_t r14_5;
    int64_t r15_6;
    int64_t r12_7;
    int64_t v8;

    fun_1a0(r14_5, rsi, rdx, rcx);
    fun_1a8(r15_6, rsi, rdx, rcx);
    fun_1b0(r12_7, rsi, rdx, rcx);
    goto v8;
}

void fun_217() {
    int64_t rbp1;
    int32_t* rdi2;
    int32_t* rsi3;
    int32_t* r13_4;
    int32_t* r13_5;
    int32_t* r13_6;
    int32_t* rcx7;
    int32_t* r13_8;
    int64_t rbx9;
    int64_t r14_10;
    int64_t r15_11;
    int64_t r12_12;
    int64_t v13;

    while (++rbp1, rbp1 != 0x834) {
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&rbp1) * 0xcccccccd) <= 0xccccccc) {
            *reinterpret_cast<int32_t*>(&rdi2) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi2) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi3 = r13_4;
            fun_240();
        }
        *rdi2 = *rsi3;
        rdi2 = r13_5;
        rsi3 = reinterpret_cast<int32_t*>(0x210);
        fun_217();
    }
    fun_25a(r13_6, 0x249, 0x250, rcx7);
    fun_273(0x261, 22, 1, r13_8);
    fun_198(rbx9, 22, 1, r13_8);
    fun_1a0(r14_10, 22, 1, r13_8);
    fun_1a8(r15_11, 22, 1, r13_8);
    fun_1b0(r12_12, 22, 1, r13_8);
    goto v13;
}

void fun_240() {
    int32_t* rdi1;
    int32_t* rsi2;
    int32_t* r13_3;
    int64_t rbp4;
    int32_t* r13_5;
    int32_t* r13_6;
    int32_t* rcx7;
    int32_t* r13_8;
    int64_t rbx9;
    int64_t r14_10;
    int64_t r15_11;
    int64_t r12_12;
    int64_t v13;

    while (1) {
        do {
            *rdi1 = *rsi2;
            rdi1 = r13_3;
            rsi2 = reinterpret_cast<int32_t*>(0x210);
            fun_217();
            ++rbp4;
            if (rbp4 == 0x834) 
                goto addr_242_7;
            __asm__("ror eax, 0x2");
        } while (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&rbp4) * 0xcccccccd) > 0xccccccc);
        *reinterpret_cast<int32_t*>(&rdi1) = 10;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi1) + 4) = reinterpret_cast<int32_t>(fputc);
        rsi2 = r13_5;
        fun_240();
    }
    addr_242_7:
    fun_25a(r13_6, 0x249, 0x250, rcx7);
    fun_273(0x261, 22, 1, r13_8);
    fun_198(rbx9, 22, 1, r13_8);
    fun_1a0(r14_10, 22, 1, r13_8);
    fun_1a8(r15_11, 22, 1, r13_8);
    fun_1b0(r12_12, 22, 1, r13_8);
    goto v13;
}

void fun_1e4(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int32_t* rsi5;
    int64_t rbp6;
    int32_t* rdi7;
    int32_t* r13_8;
    int32_t* r13_9;
    int32_t* r13_10;
    int32_t* r13_11;
    int32_t* r13_12;
    int64_t rbx13;
    int64_t r14_14;
    int64_t r15_15;
    int64_t r12_16;
    int64_t v17;

    rsi5 = reinterpret_cast<int32_t*>(0x1eb);
    *reinterpret_cast<int32_t*>(&rbp6) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp6) + 4) = reinterpret_cast<int32_t>(fputc);
    rdi7 = r13_8;
    fun_1fe();
    do {
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&rbp6) * 0xcccccccd) <= 0xccccccc) {
            *reinterpret_cast<int32_t*>(&rdi7) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi7) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi5 = r13_9;
            fun_240();
        }
        *rdi7 = *rsi5;
        rdi7 = r13_10;
        rsi5 = reinterpret_cast<int32_t*>(0x210);
        fun_217();
        ++rbp6;
    } while (rbp6 != 0x834);
    fun_25a(r13_11, 0x249, 0x250, rcx);
    fun_273(0x261, 22, 1, r13_12);
    fun_198(rbx13, 22, 1, r13_12);
    fun_1a0(r14_14, 22, 1, r13_12);
    fun_1a8(r15_15, 22, 1, r13_12);
    fun_1b0(r12_16, 22, 1, r13_12);
    goto v17;
}

void fun_1a0(int64_t rdi, struct s1* rsi, int64_t rdx, int32_t* rcx) {
    int64_t r15_5;
    int64_t r12_6;
    int64_t v7;

    fun_1a8(r15_5, rsi, rdx, rcx);
    fun_1b0(r12_6, rsi, rdx, rcx);
    goto v7;
}

void fun_1fe() {
    int64_t rbp1;
    int32_t* rdi2;
    int32_t* rsi3;
    int32_t* r13_4;
    int32_t* r13_5;
    int32_t* r13_6;
    int32_t* rcx7;
    int32_t* r13_8;
    int64_t rbx9;
    int64_t r14_10;
    int64_t r15_11;
    int64_t r12_12;
    int64_t v13;

    do {
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&rbp1) * 0xcccccccd) <= 0xccccccc) {
            *reinterpret_cast<int32_t*>(&rdi2) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi2) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi3 = r13_4;
            fun_240();
        }
        *rdi2 = *rsi3;
        rdi2 = r13_5;
        rsi3 = reinterpret_cast<int32_t*>(0x210);
        fun_217();
        ++rbp1;
    } while (rbp1 != 0x834);
    fun_25a(r13_6, 0x249, 0x250, rcx7);
    fun_273(0x261, 22, 1, r13_8);
    fun_198(rbx9, 22, 1, r13_8);
    fun_1a0(r14_10, 22, 1, r13_8);
    fun_1a8(r15_11, 22, 1, r13_8);
    fun_1b0(r12_12, 22, 1, r13_8);
    goto v13;
}

void fun_1a8(int64_t rdi, struct s1* rsi, int64_t rdx, int32_t* rcx) {
    int64_t r12_5;
    int64_t v6;

    fun_1b0(r12_5, rsi, rdx, rcx);
    goto v6;
}

void fun_25a(int32_t* rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int32_t* r13_5;
    int64_t rbx6;
    int64_t r14_7;
    int64_t r15_8;
    int64_t r12_9;
    int64_t v10;

    fun_273(0x261, 22, 1, r13_5);
    fun_198(rbx6, 22, 1, r13_5);
    fun_1a0(r14_7, 22, 1, r13_5);
    fun_1a8(r15_8, 22, 1, r13_5);
    fun_1b0(r12_9, 22, 1, r13_5);
    goto v10;
}

void fun_1b0(int64_t rdi, struct s1* rsi, int64_t rdx, int32_t* rcx) {
    int64_t v5;

    goto v5;
}

void fun_273(int64_t rdi, struct s1* rsi, int64_t rdx, int32_t* rcx) {
    int64_t rbx5;
    int64_t r14_6;
    int64_t r15_7;
    int64_t r12_8;
    int64_t v9;

    fun_198(rbx5, rsi, rdx, rcx);
    fun_1a0(r14_6, rsi, rdx, rcx);
    fun_1a8(r15_7, rsi, rdx, rcx);
    fun_1b0(r12_8, rsi, rdx, rcx);
    goto v9;
}

void fputc(int32_t edi, int64_t rsi) {
}

void fun_20();

void fun_19() {
    signed char* rax1;
    signed char* rax2;
    signed char al3;

    *rax1 = reinterpret_cast<signed char>(*rax2 + al3);
    fun_20();
}

void fun_b0() {
    int64_t rsi1;
    int64_t rdx2;
    int64_t rax3;
    uint64_t rdi4;
    int64_t rcx5;
    int32_t* rdi6;
    int64_t rax7;
    int32_t* rbx8;
    int64_t rax9;
    struct s0* r15_10;

    do {
        *reinterpret_cast<int32_t*>(&rsi1) = static_cast<int32_t>(rdx2 + rax3);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi1) + 4) = reinterpret_cast<int32_t>(fputc);
        rdi4 = reinterpret_cast<uint64_t>(rsi1 * rcx5) >> 43;
        *reinterpret_cast<int32_t*>(&rdi6) = *reinterpret_cast<int32_t*>(&rdi4) * 0x834;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi6) + 4) = reinterpret_cast<int32_t>(fputc);
        __asm__("xorps xmm1, xmm1");
        __asm__("cvtsi2sd xmm1, esi");
        __asm__("divsd xmm1, xmm0");
        *rdi6 = rbx8[rax7 * 0x1068];
        ++rdx2;
    } while (rdx2 != 0x834);
    if (rax9 + 1 == 0x76c) {
        fun_109(r15_10);
    }
}

