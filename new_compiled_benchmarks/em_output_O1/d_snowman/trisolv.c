
void fun_157(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx);

void fun_15f(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx);

void fun_14f(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t r14_5;
    int64_t r15_6;
    int64_t v7;

    fun_157(r14_5, rsi, rdx, rcx);
    fun_15f(r15_6, rsi, rdx, rcx);
    goto v7;
}

void fputc(int32_t edi, int64_t rsi);

void fun_1fc();

void fun_216(int64_t rdi, int64_t rsi, int64_t rdx);

void fun_22f(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx);

void fun_1df() {
    int64_t rbp1;
    int32_t* rdi2;
    int32_t* rsi3;
    int32_t* r12_4;
    int32_t* r12_5;
    int32_t* r13_6;
    int64_t r12_7;
    int64_t r12_8;
    int64_t rbx9;
    int64_t r14_10;
    int64_t r15_11;
    int64_t v12;

    while (1) {
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&rbp1) * 0xcccccccd) <= 0xccccccc) {
            *reinterpret_cast<int32_t*>(&rdi2) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi2) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi3 = r12_4;
            fun_1fc();
        }
        ++rbp1;
        if (rbp1 == 0x7d0) 
            break;
        *rdi2 = *rsi3;
        rdi2 = r12_5;
        rsi3 = r13_6;
        fun_1df();
    }
    fun_216(r12_7, 0x205, 0x20c);
    fun_22f(0x21d, 22, 1, r12_8);
    fun_14f(rbx9, 22, 1, r12_8);
    fun_157(r14_10, 22, 1, r12_8);
    fun_15f(r15_11, 22, 1, r12_8);
    goto v12;
}

void fun_1fc() {
    int64_t rbp1;
    int32_t* rdi2;
    int32_t* rsi3;
    int32_t* r12_4;
    int32_t* r13_5;
    int32_t* r12_6;
    int64_t r12_7;
    int64_t r12_8;
    int64_t rbx9;
    int64_t r14_10;
    int64_t r15_11;
    int64_t v12;

    while (1) {
        do {
            ++rbp1;
            if (rbp1 == 0x7d0) 
                goto addr_1fe_3;
            *rdi2 = *rsi3;
            rdi2 = r12_4;
            rsi3 = r13_5;
            fun_1df();
            __asm__("ror eax, 0x2");
        } while (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&rbp1) * 0xcccccccd) > 0xccccccc);
        *reinterpret_cast<int32_t*>(&rdi2) = 10;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi2) + 4) = reinterpret_cast<int32_t>(fputc);
        rsi3 = r12_6;
        fun_1fc();
    }
    addr_1fe_3:
    fun_216(r12_7, 0x205, 0x20c);
    fun_22f(0x21d, 22, 1, r12_8);
    fun_14f(rbx9, 22, 1, r12_8);
    fun_157(r14_10, 22, 1, r12_8);
    fun_15f(r15_11, 22, 1, r12_8);
    goto v12;
}

void fun_1ad();

void fun_193(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int32_t* rsi5;
    int64_t rbp6;
    int32_t* rdi7;
    int32_t* r12_8;
    int32_t* r12_9;
    int32_t* r12_10;
    int64_t r12_11;
    int64_t r12_12;
    int64_t rbx13;
    int64_t r14_14;
    int64_t r15_15;
    int64_t v16;

    rsi5 = reinterpret_cast<int32_t*>(0x19a);
    *reinterpret_cast<int32_t*>(&rbp6) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp6) + 4) = reinterpret_cast<int32_t>(fputc);
    rdi7 = r12_8;
    fun_1ad();
    do {
        *rdi7 = *rsi5;
        rdi7 = r12_9;
        rsi5 = reinterpret_cast<int32_t*>(0x1b4);
        fun_1df();
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&rbp6) * 0xcccccccd) <= 0xccccccc) {
            *reinterpret_cast<int32_t*>(&rdi7) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi7) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi5 = r12_10;
            fun_1fc();
        }
        ++rbp6;
    } while (rbp6 != 0x7d0);
    fun_216(r12_11, 0x205, 0x20c);
    fun_22f(0x21d, 22, 1, r12_12);
    fun_14f(rbx13, 22, 1, r12_12);
    fun_157(r14_14, 22, 1, r12_12);
    fun_15f(r15_15, 22, 1, r12_12);
    goto v16;
}

void fun_157(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t r15_5;
    int64_t v6;

    fun_15f(r15_5, rsi, rdx, rcx);
    goto v6;
}

void fun_1ad() {
    int32_t* rdi1;
    int32_t* rsi2;
    int32_t* r12_3;
    int64_t rbp4;
    int32_t* r12_5;
    int64_t r12_6;
    int64_t r12_7;
    int64_t rbx8;
    int64_t r14_9;
    int64_t r15_10;
    int64_t v11;

    do {
        *rdi1 = *rsi2;
        rdi1 = r12_3;
        rsi2 = reinterpret_cast<int32_t*>(0x1b4);
        fun_1df();
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&rbp4) * 0xcccccccd) <= 0xccccccc) {
            *reinterpret_cast<int32_t*>(&rdi1) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi1) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi2 = r12_5;
            fun_1fc();
        }
        ++rbp4;
    } while (rbp4 != 0x7d0);
    fun_216(r12_6, 0x205, 0x20c);
    fun_22f(0x21d, 22, 1, r12_7);
    fun_14f(rbx8, 22, 1, r12_7);
    fun_157(r14_9, 22, 1, r12_7);
    fun_15f(r15_10, 22, 1, r12_7);
    goto v11;
}

void fun_15f(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t v5;

    goto v5;
}

void fun_216(int64_t rdi, int64_t rsi, int64_t rdx) {
    int64_t r12_4;
    int64_t rbx5;
    int64_t r14_6;
    int64_t r15_7;
    int64_t v8;

    fun_22f(0x21d, 22, 1, r12_4);
    fun_14f(rbx5, 22, 1, r12_4);
    fun_157(r14_6, 22, 1, r12_4);
    fun_15f(r15_7, 22, 1, r12_4);
    goto v8;
}

void fun_22f(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t rbx5;
    int64_t r14_6;
    int64_t r15_7;
    int64_t v8;

    fun_14f(rbx5, rsi, rdx, rcx);
    fun_157(r14_6, rsi, rdx, rcx);
    fun_15f(r15_7, rsi, rdx, rcx);
    goto v8;
}

void fputc(int32_t edi, int64_t rsi) {
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

int64_t* g177 = reinterpret_cast<int64_t*>(0x3d8d48208b4c);

void fun_a0(struct s0* rdi, int32_t* rsi) {
    int64_t rax3;
    int64_t rbp4;
    int64_t* rbp5;
    void* rsp6;
    struct s1* rdi7;
    int64_t r8_8;
    int64_t rcx9;
    struct s2* rsi10;
    struct s3* rdi11;
    struct s4* rsi12;
    struct s1* rdi13;
    struct s2* rsi14;
    int64_t rcx15;
    struct s3* rdi16;
    struct s4* rsi17;
    struct s3* rdi18;
    struct s4* rsi19;
    signed char** r12_20;
    int64_t* rax21;
    int64_t rcx22;

    rax3 = reinterpret_cast<int64_t>(__return_address());
    rbp4 = *rbp5;
    rsp6 = reinterpret_cast<void*>(rbp5 + 1);
    __asm__("divsd xmm1, xmm0");
    rdi->f0 = *rsi;
    rdi7 = reinterpret_cast<struct s1*>(&rdi->f4);
    if (r8_8 + 1 == rcx9) {
        rsi10 = reinterpret_cast<struct s2*>(reinterpret_cast<int64_t>(rsi + 1) + 1);
        if (reinterpret_cast<int1_t>(rsi10 == 0x7d0)) {
            do {
                rdi7->f0 = rsi10->f0;
                rdi11 = reinterpret_cast<struct s3*>(&rdi7->f4);
                rsi12 = reinterpret_cast<struct s4*>(&rsi10->f4);
                rdi11->f0 = rsi12->f0;
                rdi13 = reinterpret_cast<struct s1*>(&rdi11->f4);
                rsi14 = reinterpret_cast<struct s2*>(&rsi12->f4);
                if (rax3 != fputc) {
                    *reinterpret_cast<int32_t*>(&rcx15) = reinterpret_cast<int32_t>(fputc);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx15) + 4) = reinterpret_cast<int32_t>(fputc);
                    do {
                        rdi13->f0 = rsi14->f0;
                        rdi16 = reinterpret_cast<struct s3*>(&rdi13->f4);
                        rsi17 = reinterpret_cast<struct s4*>(&rsi14->f4);
                        __asm__("mulsd xmm1, [r14+rcx*8]");
                        __asm__("subsd xmm0, xmm1");
                        rdi16->f0 = rsi17->f0;
                        rdi13 = reinterpret_cast<struct s1*>(&rdi16->f4);
                        rsi14 = reinterpret_cast<struct s2*>(&rsi17->f4);
                        ++rcx15;
                    } while (rcx15 != rax3);
                }
                rdi13->f0 = rsi14->f0;
                rdi18 = reinterpret_cast<struct s3*>(&rdi13->f4);
                rsi19 = reinterpret_cast<struct s4*>(&rsi14->f4);
                __asm__("divsd xmm0, [rcx+rax*8]");
                rdi18->f0 = rsi19->f0;
                rdi7 = reinterpret_cast<struct s1*>(&rdi18->f4);
                rsi10 = reinterpret_cast<struct s2*>(&rsi19->f4);
                ++rax3;
            } while (rax3 != 0x7d0);
            if (*reinterpret_cast<int32_t*>(&rbp4) < 43) 
                goto 0x147;
            if (**r12_20 != fputc) 
                goto "???";
            rax21 = g177;
            rcx22 = *rax21;
            *reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp6) - 8) = reinterpret_cast<int64_t>(fun_193);
            fun_193(0x181, 22, 1, rcx22);
        }
    }
}

