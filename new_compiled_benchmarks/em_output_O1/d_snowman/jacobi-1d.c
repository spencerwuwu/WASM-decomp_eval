
void fun_123(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx);

void fun_11b(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t r14_5;
    int64_t v6;

    fun_123(r14_5, rsi, rdx, rcx);
    goto v6;
}

void fputc(int32_t edi, int64_t rsi);

void fun_1bd();

void fun_1d7(int64_t rdi, int64_t rsi, int64_t rdx);

void fun_1f0(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx);

void fun_193() {
    int64_t r13_1;
    int32_t* rdi2;
    int32_t* rsi3;
    int32_t* r15_4;
    int32_t* r15_5;
    int32_t* r12_6;
    int64_t r15_7;
    int64_t r15_8;
    int64_t rbx9;
    int64_t r14_10;
    int64_t v11;

    while (++r13_1, r13_1 != 0x7d0) {
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&r13_1) * 0xcccccccd) <= 0xccccccc) {
            *reinterpret_cast<int32_t*>(&rdi2) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi2) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi3 = r15_4;
            fun_1bd();
        }
        *rdi2 = *rsi3;
        rdi2 = r15_5;
        rsi3 = r12_6;
        fun_193();
    }
    fun_1d7(r15_7, 0x1c6, 0x1cd);
    fun_1f0(0x1de, 22, 1, r15_8);
    fun_11b(rbx9, 22, 1, r15_8);
    fun_123(r14_10, 22, 1, r15_8);
    goto v11;
}

void fun_1bd() {
    int32_t* rdi1;
    int32_t* rsi2;
    int32_t* r15_3;
    int32_t* r12_4;
    int64_t r13_5;
    int32_t* r15_6;
    int64_t r15_7;
    int64_t r15_8;
    int64_t rbx9;
    int64_t r14_10;
    int64_t v11;

    while (1) {
        do {
            *rdi1 = *rsi2;
            rdi1 = r15_3;
            rsi2 = r12_4;
            fun_193();
            ++r13_5;
            if (r13_5 == 0x7d0) 
                goto addr_1bf_7;
            __asm__("ror eax, 0x2");
        } while (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&r13_5) * 0xcccccccd) > 0xccccccc);
        *reinterpret_cast<int32_t*>(&rdi1) = 10;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi1) + 4) = reinterpret_cast<int32_t>(fputc);
        rsi2 = r15_6;
        fun_1bd();
    }
    addr_1bf_7:
    fun_1d7(r15_7, 0x1c6, 0x1cd);
    fun_1f0(0x1de, 22, 1, r15_8);
    fun_11b(rbx9, 22, 1, r15_8);
    fun_123(r14_10, 22, 1, r15_8);
    goto v11;
}

void fun_172();

void fun_157(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int32_t* rsi5;
    int64_t r13_6;
    int32_t* rdi7;
    int32_t* r15_8;
    int32_t* r15_9;
    int32_t* r15_10;
    int64_t r15_11;
    int64_t r15_12;
    int64_t rbx13;
    int64_t r14_14;
    int64_t v15;

    rsi5 = reinterpret_cast<int32_t*>(0x15e);
    *reinterpret_cast<int32_t*>(&r13_6) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_6) + 4) = reinterpret_cast<int32_t>(fputc);
    rdi7 = r15_8;
    fun_172();
    do {
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&r13_6) * 0xcccccccd) <= 0xccccccc) {
            *reinterpret_cast<int32_t*>(&rdi7) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi7) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi5 = r15_9;
            fun_1bd();
        }
        *rdi7 = *rsi5;
        rdi7 = r15_10;
        rsi5 = reinterpret_cast<int32_t*>(0x179);
        fun_193();
        ++r13_6;
    } while (r13_6 != 0x7d0);
    fun_1d7(r15_11, 0x1c6, 0x1cd);
    fun_1f0(0x1de, 22, 1, r15_12);
    fun_11b(rbx13, 22, 1, r15_12);
    fun_123(r14_14, 22, 1, r15_12);
    goto v15;
}

void fun_123(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t v5;

    goto v5;
}

void fun_172() {
    int64_t r13_1;
    int32_t* rdi2;
    int32_t* rsi3;
    int32_t* r15_4;
    int32_t* r15_5;
    int64_t r15_6;
    int64_t r15_7;
    int64_t rbx8;
    int64_t r14_9;
    int64_t v10;

    do {
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&r13_1) * 0xcccccccd) <= 0xccccccc) {
            *reinterpret_cast<int32_t*>(&rdi2) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi2) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi3 = r15_4;
            fun_1bd();
        }
        *rdi2 = *rsi3;
        rdi2 = r15_5;
        rsi3 = reinterpret_cast<int32_t*>(0x179);
        fun_193();
        ++r13_1;
    } while (r13_1 != 0x7d0);
    fun_1d7(r15_6, 0x1c6, 0x1cd);
    fun_1f0(0x1de, 22, 1, r15_7);
    fun_11b(rbx8, 22, 1, r15_7);
    fun_123(r14_9, 22, 1, r15_7);
    goto v10;
}

void fun_1d7(int64_t rdi, int64_t rsi, int64_t rdx) {
    int64_t r15_4;
    int64_t rbx5;
    int64_t r14_6;
    int64_t v7;

    fun_1f0(0x1de, 22, 1, r15_4);
    fun_11b(rbx5, 22, 1, r15_4);
    fun_123(r14_6, 22, 1, r15_4);
    goto v7;
}

void fun_1f0(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t rbx5;
    int64_t r14_6;
    int64_t v7;

    fun_11b(rbx5, rsi, rdx, rcx);
    fun_123(r14_6, rsi, rdx, rcx);
    goto v7;
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

int64_t* g13b = reinterpret_cast<int64_t*>(0x3d8d48388b4c);

void fun_90() {
    int64_t rcx1;
    struct s0* rdx2;
    struct s1* rdi3;
    struct s0* rsi4;
    struct s2* rdi5;
    struct s2* rdi6;
    struct s3* rsi7;
    int64_t rdx8;
    int32_t eax9;
    int32_t ebp10;
    signed char** r15_11;
    int64_t* rax12;
    int64_t rcx13;

    do {
        *reinterpret_cast<int32_t*>(&rcx1) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx1) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx2) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx2) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rdi3->f0 = rsi4->f0;
            rdi5 = reinterpret_cast<struct s2*>(&rdi3->f4);
            __asm__("addsd xmm1, [rbx+rdx*8]");
            __asm__("addsd xmm1, [rbx+rdx*8+0x8]");
            __asm__("mulsd xmm1, xmm0");
            rdi5->f0 = rsi4->f4;
            rdi3 = reinterpret_cast<struct s1*>(&rdi5->f4);
            rsi4 = reinterpret_cast<struct s0*>(reinterpret_cast<int64_t>(rdx2) + 1);
            rdx2 = rsi4;
        } while (!reinterpret_cast<int1_t>(rsi4 == 0x7cf));
        do {
            rdi3->f0 = rsi4->f0;
            rdi6 = reinterpret_cast<struct s2*>(&rdi3->f4);
            rsi7 = reinterpret_cast<struct s3*>(&rsi4->f4);
            __asm__("addsd xmm1, [r14+rcx*8]");
            __asm__("addsd xmm1, [r14+rcx*8+0x8]");
            __asm__("mulsd xmm1, xmm0");
            rdi6->f0 = rsi7->f0;
            rdi3 = reinterpret_cast<struct s1*>(&rdi6->f4);
            rsi4 = reinterpret_cast<struct s0*>(&rsi7->f4);
            rdx8 = rcx1 + 1;
            rcx1 = rdx8;
        } while (rdx8 != 0x7cf);
        ++eax9;
    } while (eax9 != 0x1f4);
    if (ebp10 < 43) 
        goto 0x113;
    if (**r15_11 != fputc) 
        goto "???";
    rax12 = g13b;
    rcx13 = *rax12;
    fun_157(0x145, 22, 1, rcx13);
}

