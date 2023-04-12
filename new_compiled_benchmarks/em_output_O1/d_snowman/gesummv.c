
void fun_1f3(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx);

void fun_1fb(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx);

void fun_203(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx);

void fun_20b(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx);

void fun_1eb(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int64_t r14_5;
    int64_t r15_6;
    int64_t r12_7;
    int64_t r13_8;
    int64_t v9;

    fun_1f3(r14_5, rsi, rdx, rcx);
    fun_1fb(r15_6, rsi, rdx, rcx);
    fun_203(r12_7, rsi, rdx, rcx);
    fun_20b(r13_8, rsi, rdx, rcx);
    goto v9;
}

void fputc(int32_t edi, int64_t rsi);

void fun_2a3();

void fun_2c1(int32_t* rdi, int64_t rsi, int64_t rdx);

void fun_2da(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx);

void fun_279() {
    int64_t rbp1;
    int32_t* rdi2;
    int32_t* rsi3;
    int64_t rbx4;
    int64_t r14_5;
    int64_t r15_6;
    int64_t r12_7;
    int64_t r13_8;
    int64_t v9;

    while (++rbp1, rbp1 != 0x514) {
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&rbp1) * 0xcccccccd) <= 0xccccccc) {
            *reinterpret_cast<int32_t*>(&rdi2) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi2) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi3 = reinterpret_cast<int32_t*>(__return_address());
            fun_2a3();
        }
        *rdi2 = *rsi3;
        rdi2 = reinterpret_cast<int32_t*>(__return_address());
        rsi3 = reinterpret_cast<int32_t*>(0x272);
        fun_279();
    }
    fun_2c1(__return_address(), 0x2ac, 0x2b3);
    fun_2da(0x2c8, 22, 1, __return_address());
    fun_1eb(rbx4, 22, 1, __return_address());
    fun_1f3(r14_5, 22, 1, __return_address());
    fun_1fb(r15_6, 22, 1, __return_address());
    fun_203(r12_7, 22, 1, __return_address());
    fun_20b(r13_8, 22, 1, __return_address());
    goto v9;
}

void fun_2a3() {
    int32_t* v1;
    int32_t* rdi2;
    int32_t* rsi3;
    int64_t rbp4;
    int64_t rbx5;
    int64_t r14_6;
    int64_t r15_7;
    int64_t r12_8;
    int64_t r13_9;
    int64_t v10;

    while (1) {
        v1 = reinterpret_cast<int32_t*>(__return_address());
        do {
            *rdi2 = *rsi3;
            rdi2 = v1;
            rsi3 = reinterpret_cast<int32_t*>(0x272);
            fun_279();
            ++rbp4;
            if (rbp4 == 0x514) 
                goto addr_2a5_7;
            __asm__("ror eax, 0x2");
        } while (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&rbp4) * 0xcccccccd) > 0xccccccc);
        *reinterpret_cast<int32_t*>(&rdi2) = 10;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi2) + 4) = reinterpret_cast<int32_t>(fputc);
        rsi3 = v1;
        fun_2a3();
    }
    addr_2a5_7:
    fun_2c1(v1, 0x2ac, 0x2b3);
    fun_2da(0x2c8, 22, 1, v1);
    fun_1eb(rbx5, 22, 1, v1);
    fun_1f3(r14_6, 22, 1, v1);
    fun_1fb(r15_7, 22, 1, v1);
    fun_203(r12_8, 22, 1, v1);
    fun_20b(r13_9, 22, 1, v1);
    goto v10;
}

void fun_25b();

void fun_240(int64_t rdi, int64_t rsi, int64_t rdx) {
    int32_t* v4;
    int32_t* rsi5;
    int64_t rbp6;
    int32_t* rdi7;
    int64_t rbx8;
    int64_t r14_9;
    int64_t r15_10;
    int64_t r12_11;
    int64_t r13_12;
    int64_t v13;

    v4 = reinterpret_cast<int32_t*>(__return_address());
    rsi5 = reinterpret_cast<int32_t*>(0x247);
    *reinterpret_cast<int32_t*>(&rbp6) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp6) + 4) = reinterpret_cast<int32_t>(fputc);
    rdi7 = v4;
    fun_25b();
    do {
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&rbp6) * 0xcccccccd) <= 0xccccccc) {
            *reinterpret_cast<int32_t*>(&rdi7) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi7) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi5 = v4;
            fun_2a3();
        }
        *rdi7 = *rsi5;
        rdi7 = v4;
        rsi5 = reinterpret_cast<int32_t*>(0x272);
        fun_279();
        ++rbp6;
    } while (rbp6 != 0x514);
    fun_2c1(v4, 0x2ac, 0x2b3);
    fun_2da(0x2c8, 22, 1, v4);
    fun_1eb(rbx8, 22, 1, v4);
    fun_1f3(r14_9, 22, 1, v4);
    fun_1fb(r15_10, 22, 1, v4);
    fun_203(r12_11, 22, 1, v4);
    fun_20b(r13_12, 22, 1, v4);
    goto v13;
}

void fun_1f3(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int64_t r15_5;
    int64_t r12_6;
    int64_t r13_7;
    int64_t v8;

    fun_1fb(r15_5, rsi, rdx, rcx);
    fun_203(r12_6, rsi, rdx, rcx);
    fun_20b(r13_7, rsi, rdx, rcx);
    goto v8;
}

void fun_25b() {
    int32_t* v1;
    int64_t rbp2;
    int32_t* rdi3;
    int32_t* rsi4;
    int64_t rbx5;
    int64_t r14_6;
    int64_t r15_7;
    int64_t r12_8;
    int64_t r13_9;
    int64_t v10;

    v1 = reinterpret_cast<int32_t*>(__return_address());
    do {
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&rbp2) * 0xcccccccd) <= 0xccccccc) {
            *reinterpret_cast<int32_t*>(&rdi3) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi3) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi4 = v1;
            fun_2a3();
        }
        *rdi3 = *rsi4;
        rdi3 = v1;
        rsi4 = reinterpret_cast<int32_t*>(0x272);
        fun_279();
        ++rbp2;
    } while (rbp2 != 0x514);
    fun_2c1(v1, 0x2ac, 0x2b3);
    fun_2da(0x2c8, 22, 1, v1);
    fun_1eb(rbx5, 22, 1, v1);
    fun_1f3(r14_6, 22, 1, v1);
    fun_1fb(r15_7, 22, 1, v1);
    fun_203(r12_8, 22, 1, v1);
    fun_20b(r13_9, 22, 1, v1);
    goto v10;
}

void fun_1fb(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int64_t r12_5;
    int64_t r13_6;
    int64_t v7;

    fun_203(r12_5, rsi, rdx, rcx);
    fun_20b(r13_6, rsi, rdx, rcx);
    goto v7;
}

void fun_2c1(int32_t* rdi, int64_t rsi, int64_t rdx) {
    int32_t* rbp4;
    int64_t rbx5;
    int64_t r14_6;
    int64_t r15_7;
    int64_t r12_8;
    int64_t r13_9;
    int64_t v10;

    fun_2da(0x2c8, 22, 1, rbp4);
    fun_1eb(rbx5, 22, 1, rbp4);
    fun_1f3(r14_6, 22, 1, rbp4);
    fun_1fb(r15_7, 22, 1, rbp4);
    fun_203(r12_8, 22, 1, rbp4);
    fun_20b(r13_9, 22, 1, rbp4);
    goto v10;
}

void fun_203(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int64_t r13_5;
    int64_t v6;

    fun_20b(r13_5, rsi, rdx, rcx);
    goto v6;
}

void fun_2da(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int64_t rbx5;
    int64_t r14_6;
    int64_t r15_7;
    int64_t r12_8;
    int64_t r13_9;
    int64_t v10;

    fun_1eb(rbx5, rsi, rdx, rcx);
    fun_1f3(r14_6, rsi, rdx, rcx);
    fun_1fb(r15_7, rsi, rdx, rcx);
    fun_203(r12_8, rsi, rdx, rcx);
    fun_20b(r13_9, rsi, rdx, rcx);
    goto v10;
}

void fun_20b(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int64_t v5;

    goto v5;
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

struct s0 {
    int32_t f0;
    int32_t f4;
};

struct s1 {
    int64_t f0;
    signed char** f8;
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

struct s11 {
    int32_t f0;
    int32_t f4;
};

struct s12 {
    int32_t f0;
    int32_t f4;
};

signed char*** g223 = reinterpret_cast<signed char***>(0x48240c8948088b48);

void fun_c0(int32_t* rdi, struct s0* rsi, int64_t rdx, int64_t rcx) {
    int64_t rbp5;
    struct s1* rbp6;
    signed char*** rsp7;
    void* rdi8;
    int32_t* rsi9;
    int64_t r9_10;
    uint64_t r9_11;
    struct s2* rdi12;
    struct s3* rdi13;
    struct s4* rsi14;
    struct s5* rdi15;
    struct s6* rdi16;
    int64_t* r15_17;
    int64_t rax18;
    int64_t* r13_19;
    int64_t rcx20;
    struct s7* rsi21;
    int32_t* rbx22;
    struct s8* rdi23;
    struct s9* rsi24;
    struct s6* rdi25;
    struct s10* rsi26;
    struct s8* rdi27;
    struct s11* rsi28;
    struct s12* rsi29;
    struct s8* rdi30;
    signed char*** rax31;

    __asm__("ror byte [rdi], 0x57");
    rbp5 = rbp6->f0;
    rsp7 = &rbp6->f8;
    __asm__("cvtsi2sd xmm1, r8d");
    __asm__("divsd xmm1, xmm0");
    *rdi = rsi->f0;
    rdi8 = reinterpret_cast<void*>(rdi + 1);
    rsi9 = &rsi->f4;
    *reinterpret_cast<int32_t*>(&r9_10) = *reinterpret_cast<int32_t*>(&rdi8) + 2;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_10) + 4) = reinterpret_cast<int32_t>(fputc);
    r9_11 = reinterpret_cast<uint64_t>(r9_10 * rcx) >> 42;
    *reinterpret_cast<int32_t*>(&rdi12) = *reinterpret_cast<int32_t*>(&rdi8) + -(*reinterpret_cast<int32_t*>(&r9_11) * 0x514) + 2;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi12) + 4) = reinterpret_cast<int32_t>(fputc);
    __asm__("xorps xmm1, xmm1");
    __asm__("cvtsi2sd xmm1, edi");
    __asm__("divsd xmm1, xmm0");
    rdi12->f0 = *rsi9;
    rdi13 = reinterpret_cast<struct s3*>(&rdi12->f4);
    rsi14 = reinterpret_cast<struct s4*>(reinterpret_cast<int64_t>(rsi9 + 1) + 1);
    if (reinterpret_cast<int1_t>(rsi14 == 0x514)) {
        if (rdx + 1 == 0x514) {
            rdi13->f0 = rsi14->f0;
            rdi15 = reinterpret_cast<struct s5*>(&rdi13->f4);
            rdi15->f0 = rsi14->f4;
            rdi16 = reinterpret_cast<struct s6*>(&rdi15->f4);
            do {
                r15_17[rax18] = reinterpret_cast<int64_t>(fputc);
                r13_19[rax18] = reinterpret_cast<int64_t>(fputc);
                *reinterpret_cast<int32_t*>(&rcx20) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx20) + 4) = reinterpret_cast<int32_t>(fputc);
                do {
                    rsi21 = reinterpret_cast<struct s7*>(rbx22 + rax18 * 0xa28);
                    rdi16->f0 = rsi21->f0;
                    rdi23 = reinterpret_cast<struct s8*>(&rdi16->f4);
                    rsi24 = reinterpret_cast<struct s9*>(&rsi21->f4);
                    __asm__("mulsd xmm2, [r12+rcx*8]");
                    __asm__("addsd xmm2, [r15+rax*8]");
                    rdi23->f0 = rsi24->f0;
                    rdi25 = reinterpret_cast<struct s6*>(&rdi23->f4);
                    rsi26 = reinterpret_cast<struct s10*>(&rsi24->f4);
                    rdi25->f0 = rsi26->f0;
                    rdi27 = reinterpret_cast<struct s8*>(&rdi25->f4);
                    rsi28 = reinterpret_cast<struct s11*>(&rsi26->f4);
                    __asm__("mulsd xmm2, [r12+rcx*8]");
                    __asm__("addsd xmm2, [r13+rax*8+0x0]");
                    rdi27->f0 = rsi28->f0;
                    rdi16 = reinterpret_cast<struct s6*>(&rdi27->f4);
                    rsi29 = reinterpret_cast<struct s12*>(&rsi28->f4);
                    ++rcx20;
                } while (rcx20 != 0x514);
                __asm__("mulsd xmm2, xmm0");
                rdi16->f0 = rsi29->f0;
                rdi30 = reinterpret_cast<struct s8*>(&rdi16->f4);
                __asm__("mulsd xmm3, xmm1");
                __asm__("addsd xmm3, xmm2");
                rdi30->f0 = rsi29->f4;
                rdi16 = reinterpret_cast<struct s6*>(&rdi30->f4);
                ++rax18;
            } while (rax18 != 0x514);
            if (*reinterpret_cast<int32_t*>(&rbp5) < 43) 
                goto 0x1e3;
            if (***rsp7 != fputc) 
                goto "???";
            rax31 = g223;
            *rsp7 = *rax31;
            *reinterpret_cast<int64_t*>(rsp7 - 1) = reinterpret_cast<int64_t>(fun_240);
            fun_240(0x231, 22, 1);
        }
    }
}

