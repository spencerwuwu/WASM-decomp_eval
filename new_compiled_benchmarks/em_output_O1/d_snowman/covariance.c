
void fun_1f8(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx);

void fun_200(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx);

void fun_1f0(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int64_t r14_5;
    int64_t r15_6;
    int64_t v7;

    fun_1f8(r14_5, rsi, rdx, rcx);
    fun_200(r15_6, rsi, rdx, rcx);
    goto v7;
}

void fun_2ae();

void fputc(int32_t edi, int64_t rsi);

void fun_2e2(int32_t* rdi, int64_t rsi, int64_t rdx);

void fun_2fb(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx);

void fun_28c() {
    int32_t* rdi1;
    int32_t* rsi2;
    int64_t r12_3;
    int64_t rbp4;
    int64_t r13_5;
    int64_t rbx6;
    int64_t r14_7;
    int64_t r15_8;
    int64_t v9;

    while (1) {
        *rdi1 = *rsi2;
        rdi1 = reinterpret_cast<int32_t*>(__return_address());
        rsi2 = reinterpret_cast<int32_t*>(0x2a7);
        fun_2ae();
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
        fun_28c();
    }
    fun_2e2(__return_address(), 0x2cd, 0x2d4);
    fun_2fb(0x2e9, 22, 1, __return_address());
    fun_1f0(rbx6, 22, 1, __return_address());
    fun_1f8(r14_7, 22, 1, __return_address());
    fun_200(r15_8, 22, 1, __return_address());
    goto v9;
}

void fun_2ae() {
    int64_t r12_1;
    int64_t rbp2;
    int64_t r13_3;
    int32_t* rdi4;
    int32_t* rsi5;
    int64_t rbx6;
    int64_t r14_7;
    int64_t r15_8;
    int64_t v9;

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
            fun_28c();
        }
        *rdi4 = *rsi5;
        rdi4 = reinterpret_cast<int32_t*>(__return_address());
        rsi5 = reinterpret_cast<int32_t*>(0x2a7);
        fun_2ae();
    }
    fun_2e2(__return_address(), 0x2cd, 0x2d4);
    fun_2fb(0x2e9, 22, 1, __return_address());
    fun_1f0(rbx6, 22, 1, __return_address());
    fun_1f8(r14_7, 22, 1, __return_address());
    fun_200(r15_8, 22, 1, __return_address());
    goto v9;
}

void fun_2e2(int32_t* rdi, int64_t rsi, int64_t rdx) {
    int32_t* r12_4;
    int64_t rbx5;
    int64_t r14_6;
    int64_t r15_7;
    int64_t v8;

    fun_2fb(0x2e9, 22, 1, r12_4);
    fun_1f0(rbx5, 22, 1, r12_4);
    fun_1f8(r14_6, 22, 1, r12_4);
    fun_200(r15_7, 22, 1, r12_4);
    goto v8;
}

void fun_252();

void fun_234(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int32_t* rsi5;
    int64_t rbp6;
    int32_t* v7;
    int32_t* r12_8;
    int32_t* rdi9;
    int32_t* r12_10;
    int64_t r13_11;
    int64_t r12_12;
    int64_t rbx13;
    int64_t r14_14;
    int64_t r15_15;
    int64_t v16;

    rsi5 = reinterpret_cast<int32_t*>(0x23b);
    *reinterpret_cast<int32_t*>(&rbp6) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp6) + 4) = reinterpret_cast<int32_t>(fputc);
    v7 = r12_8;
    rdi9 = r12_10;
    fun_252();
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
                fun_28c();
            }
            *rdi9 = *rsi5;
            rdi9 = v7;
            rsi5 = reinterpret_cast<int32_t*>(0x2a7);
            fun_2ae();
            ++r12_12;
        } while (r12_12 != 0x4b0);
        ++rbp6;
    } while (rbp6 != 0x4b0);
    fun_2e2(v7, 0x2cd, 0x2d4);
    fun_2fb(0x2e9, 22, 1, v7);
    fun_1f0(rbx13, 22, 1, v7);
    fun_1f8(r14_14, 22, 1, v7);
    fun_200(r15_15, 22, 1, v7);
    goto v16;
}

void fun_1f8(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int64_t r15_5;
    int64_t v6;

    fun_200(r15_5, rsi, rdx, rcx);
    goto v6;
}

void fun_2fb(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int64_t rbx5;
    int64_t r14_6;
    int64_t r15_7;
    int64_t v8;

    fun_1f0(rbx5, rsi, rdx, rcx);
    fun_1f8(r14_6, rsi, rdx, rcx);
    fun_200(r15_7, rsi, rdx, rcx);
    goto v8;
}

void fun_252() {
    int32_t* v1;
    int64_t r13_2;
    int64_t rbp3;
    int64_t r12_4;
    int32_t* rdi5;
    int32_t* rsi6;
    int64_t rbx7;
    int64_t r14_8;
    int64_t r15_9;
    int64_t v10;

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
                fun_28c();
            }
            *rdi5 = *rsi6;
            rdi5 = v1;
            rsi6 = reinterpret_cast<int32_t*>(0x2a7);
            fun_2ae();
            ++r12_4;
        } while (r12_4 != 0x4b0);
        ++rbp3;
    } while (rbp3 != 0x4b0);
    fun_2e2(v1, 0x2cd, 0x2d4);
    fun_2fb(0x2e9, 22, 1, v1);
    fun_1f0(rbx7, 22, 1, v1);
    fun_1f8(r14_8, 22, 1, v1);
    fun_200(r15_9, 22, 1, v1);
    goto v10;
}

void fun_200(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int64_t v5;

    goto v5;
}

void fputc(int32_t edi, int64_t rsi) {
}

void fun_a0() {
    int1_t sf1;
    signed char* rax2;
    signed char* rax3;
    signed char al4;

    if (!sf1) {
        *rax2 = reinterpret_cast<signed char>(*rax3 + al4);
    }
}

struct s0 {
    int32_t f0;
    int32_t f4;
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

int64_t* g218 = reinterpret_cast<int64_t*>(0x3d8d48208b4c);

void fun_b4() {
    signed char* rax1;
    signed char* rax2;
    signed char al3;
    signed char* rax4;
    signed char* rax5;
    signed char al6;
    int64_t rdx7;
    struct s0* rsi8;
    int32_t* rbx9;
    struct s1* rdi10;
    struct s2* rdi11;
    int64_t rax12;
    int64_t rax13;
    int64_t rdx14;
    struct s3* rsi15;
    int64_t rcx16;
    int32_t* rbx17;
    struct s4* rdi18;
    struct s5* rsi19;
    int64_t rcx20;
    int64_t* r14_21;
    struct s6* rsi22;
    struct s7* rdi23;
    int32_t* rbx24;
    struct s8* rdi25;
    int32_t* rsi26;
    struct s9* rdi27;
    int32_t ebp28;
    signed char** r12_29;
    int64_t* rax30;
    int64_t rcx31;

    *rax1 = reinterpret_cast<signed char>(*rax2 + al3);
    *rax4 = reinterpret_cast<signed char>(*rax5 + al6);
    __asm__("xorpd xmm1, xmm1");
    *reinterpret_cast<int32_t*>(&rdx7) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx7) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        rsi8 = reinterpret_cast<struct s0*>(rbx9 + rdx7 * 0x960);
        __asm__("addsd xmm1, [rsi+rax*8]");
        rdi10->f0 = rsi8->f0;
        rdi10 = reinterpret_cast<struct s1*>(&rdi10->f4);
        ++rdx7;
    } while (rdx7 != 0x578);
    __asm__("divsd xmm1, xmm0");
    rdi10->f0 = rsi8->f4;
    rdi11 = reinterpret_cast<struct s2*>(&rdi10->f4);
    if (rax12 + 1 == 0x4b0) {
        *reinterpret_cast<int32_t*>(&rax13) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax13) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            *reinterpret_cast<int32_t*>(&rdx14) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx14) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                rsi15 = reinterpret_cast<struct s3*>(rbx17 + rcx16 * 0x960);
                rdi11->f0 = rsi15->f0;
                rdi18 = reinterpret_cast<struct s4*>(&rdi11->f4);
                rsi19 = reinterpret_cast<struct s5*>(&rsi15->f4);
                __asm__("subsd xmm0, [r15+rdx*8]");
                rdi18->f0 = rsi19->f0;
                rdi11 = reinterpret_cast<struct s2*>(&rdi18->f4);
                ++rdx14;
            } while (rdx14 != 0x4b0);
            ++rcx16;
        } while (rcx16 != 0x578);
        rdi11->f0 = rsi19->f4;
        do {
            rcx20 = rax13;
            do {
                (r14_21 + rax13 * 0x4b0)[rcx20] = reinterpret_cast<int64_t>(fputc);
                __asm__("xorpd xmm1, xmm1");
                *reinterpret_cast<int32_t*>(&rsi22) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi22) + 4) = reinterpret_cast<int32_t>(fputc);
                do {
                    rdi23 = reinterpret_cast<struct s7*>(rbx24 + reinterpret_cast<int64_t>(rsi22) * 0x960);
                    rdi23->f0 = rsi22->f0;
                    rdi25 = reinterpret_cast<struct s8*>(&rdi23->f4);
                    rsi26 = &rsi22->f4;
                    __asm__("mulsd xmm2, [rdi+rcx*8]");
                    __asm__("addsd xmm1, xmm2");
                    rdi25->f0 = *rsi26;
                    rdi27 = reinterpret_cast<struct s9*>(&rdi25->f4);
                    rsi22 = reinterpret_cast<struct s6*>(reinterpret_cast<int64_t>(rsi26 + 1) + 1);
                } while (!reinterpret_cast<int1_t>(rsi22 == 0x578));
                __asm__("divsd xmm1, xmm0");
                rdi27->f0 = rsi22->f0;
                rdi27->f4 = rsi22->f4;
                ++rcx20;
            } while (rcx20 != 0x4b0);
            ++rax13;
        } while (rax13 != 0x4b0);
        if (ebp28 < 43) 
            goto 0x1e8;
        if (**r12_29 != fputc) 
            goto "???";
        rax30 = g218;
        rcx31 = *rax30;
        fun_234(0x222, 22, 1, rcx31);
    }
}

