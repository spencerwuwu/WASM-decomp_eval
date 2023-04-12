
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

void fputc();

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

int32_t** g1b5 = reinterpret_cast<int32_t**>(0x3d8d48388b4c);

void fun_1d1(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx);

void fun_1ec();

void fun_23d();

void fun_213();

void fun_257(int32_t* rdi, int64_t rsi, int64_t rdx, int32_t* rcx);

void fun_270(int64_t rdi, struct s5* rsi, int64_t rdx, int32_t* rcx);

void fun_192(int64_t rdi, struct s5* rsi, int64_t rdx, int32_t* rcx);

void fun_19a(int64_t rdi, struct s5* rsi, int64_t rdx, int32_t* rcx);

void fun_14c() {
    struct s0* r14_1;
    struct s1* r12_2;
    struct s2* rdi3;
    struct s3* rsi4;
    void* r13_5;
    int64_t r15_6;
    struct s4* rdi7;
    struct s5* rsi8;
    int64_t rdx9;
    void* rax10;
    struct s6* rdi11;
    struct s7* rsi12;
    void* rax13;
    int32_t* rcx14;
    struct s8* rdi15;
    struct s9* rsi16;
    int64_t rdx17;
    int32_t ebp18;
    int32_t** rax19;
    int32_t* r15_20;
    int32_t* rcx21;
    int32_t* rsi22;
    int64_t r13_23;
    int32_t* rdi24;
    int64_t rbx25;
    int64_t r14_26;
    int64_t v27;

    while (1) {
        __asm__("movapd xmm4, [rsp+0x10]");
        r14_1->f0 = r12_2->f0;
        rdi3 = reinterpret_cast<struct s2*>(&r14_1->f4);
        rsi4 = reinterpret_cast<struct s3*>(&r12_2->f4);
        r13_5 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(r13_5) + 1);
        ++r15_6;
        __asm__("movapd xmm3, [rip+0x0]");
        rdi3->f0 = rsi4->f0;
        rdi7 = reinterpret_cast<struct s4*>(&rdi3->f4);
        rsi8 = reinterpret_cast<struct s5*>(&rsi4->f4);
        if (r15_6 == 0x7cf) 
            break;
        rdx9 = r15_6 * 8;
        __asm__("movapd xmm1, xmm4");
        __asm__("xorpd xmm1, xmm3");
        __asm__("xorpd xmm0, xmm0");
        *reinterpret_cast<int32_t*>(&rax10) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax10) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rdi7->f0 = rsi8->f0;
            rdi7 = reinterpret_cast<struct s4*>(&rdi7->f4);
            rsi8 = reinterpret_cast<struct s5*>(&rsi8->f4);
            __asm__("mulsd xmm2, [r14+rax*8]");
            __asm__("addsd xmm0, xmm2");
            rax10 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rax10) + 1);
        } while (rax10 != r13_5);
        __asm__("mulsd xmm1, xmm4");
        __asm__("addsd xmm1, [rip+0x0]");
        __asm__("mulsd xmm5, xmm1");
        __asm__("addsd xmm0, [rbx+r13*8]");
        __asm__("xorpd xmm0, xmm3");
        __asm__("movapd xmm1, xmm0");
        rdi7->f0 = rsi8->f0;
        rdi11 = reinterpret_cast<struct s6*>(&rdi7->f4);
        rsi12 = reinterpret_cast<struct s7*>(&rsi8->f4);
        __asm__("divsd xmm1, xmm5");
        *reinterpret_cast<int32_t*>(&rax13) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax13) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rcx14 = reinterpret_cast<int32_t*>(~reinterpret_cast<int64_t>(rax13) + reinterpret_cast<int64_t>(r13_5));
            rdi11->f0 = rsi12->f0;
            rdi15 = reinterpret_cast<struct s8*>(&rdi11->f4);
            rsi16 = reinterpret_cast<struct s9*>(&rsi12->f4);
            __asm__("mulsd xmm0, xmm1");
            __asm__("addsd xmm0, [r14+rax*8]");
            rdi15->f0 = rsi16->f0;
            rdi11 = reinterpret_cast<struct s6*>(&rdi15->f4);
            rsi12 = reinterpret_cast<struct s7*>(&rsi16->f4);
            rax13 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rax13) + 1);
        } while (rax13 != r13_5);
        rdx17 = rdx9 + 8;
        __asm__("movapd [rsp+0x10], xmm1");
        fun_14c();
    }
    if (ebp18 >= 43 && **reinterpret_cast<signed char**>(__return_address()) == fputc) {
        rax19 = g1b5;
        r15_20 = *rax19;
        rcx21 = r15_20;
        fun_1d1(0x1bf, 22, 1, rcx21);
        rsi22 = reinterpret_cast<int32_t*>(0x1d8);
        *reinterpret_cast<int32_t*>(&r13_23) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_23) + 4) = reinterpret_cast<int32_t>(fputc);
        rdi24 = r15_20;
        fun_1ec();
        do {
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&r13_23) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi24) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi24) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi22 = r15_20;
                fun_23d();
            }
            *rdi24 = *rsi22;
            rdi24 = r15_20;
            rsi22 = reinterpret_cast<int32_t*>(0x1f3);
            fun_213();
            ++r13_23;
        } while (r13_23 != 0x7d0);
        fun_257(r15_20, 0x246, 0x24d, rcx21);
        *reinterpret_cast<int32_t*>(&rsi8) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi8) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx17) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx17) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx14 = r15_20;
        fun_270(0x25e, 22, 1, rcx14);
    }
    fun_192(rbx25, rsi8, rdx17, rcx14);
    fun_19a(r14_26, rsi8, rdx17, rcx14);
    goto v27;
}

void fun_192(int64_t rdi, struct s5* rsi, int64_t rdx, int32_t* rcx) {
    int64_t r14_5;
    int64_t v6;

    fun_19a(r14_5, rsi, rdx, rcx);
    goto v6;
}

void fun_213() {
    int64_t r13_1;
    int32_t* rdi2;
    int32_t* rsi3;
    int32_t* r15_4;
    int32_t* r15_5;
    int32_t* r12_6;
    int32_t* r15_7;
    int32_t* rcx8;
    int32_t* r15_9;
    int64_t rbx10;
    int64_t r14_11;
    int64_t v12;

    while (++r13_1, r13_1 != 0x7d0) {
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&r13_1) * 0xcccccccd) <= 0xccccccc) {
            *reinterpret_cast<int32_t*>(&rdi2) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi2) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi3 = r15_4;
            fun_23d();
        }
        *rdi2 = *rsi3;
        rdi2 = r15_5;
        rsi3 = r12_6;
        fun_213();
    }
    fun_257(r15_7, 0x246, 0x24d, rcx8);
    fun_270(0x25e, 22, 1, r15_9);
    fun_192(rbx10, 22, 1, r15_9);
    fun_19a(r14_11, 22, 1, r15_9);
    goto v12;
}

void fun_23d() {
    int32_t* rdi1;
    int32_t* rsi2;
    int32_t* r15_3;
    int32_t* r12_4;
    int64_t r13_5;
    int32_t* r15_6;
    int32_t* r15_7;
    int32_t* rcx8;
    int32_t* r15_9;
    int64_t rbx10;
    int64_t r14_11;
    int64_t v12;

    while (1) {
        do {
            *rdi1 = *rsi2;
            rdi1 = r15_3;
            rsi2 = r12_4;
            fun_213();
            ++r13_5;
            if (r13_5 == 0x7d0) 
                goto addr_23f_7;
            __asm__("ror eax, 0x2");
        } while (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&r13_5) * 0xcccccccd) > 0xccccccc);
        *reinterpret_cast<int32_t*>(&rdi1) = 10;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi1) + 4) = reinterpret_cast<int32_t>(fputc);
        rsi2 = r15_6;
        fun_23d();
    }
    addr_23f_7:
    fun_257(r15_7, 0x246, 0x24d, rcx8);
    fun_270(0x25e, 22, 1, r15_9);
    fun_192(rbx10, 22, 1, r15_9);
    fun_19a(r14_11, 22, 1, r15_9);
    goto v12;
}

void fun_1d1(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int32_t* rsi5;
    int64_t r13_6;
    int32_t* rdi7;
    int32_t* r15_8;
    int32_t* r15_9;
    int32_t* r15_10;
    int32_t* r15_11;
    int32_t* r15_12;
    int64_t rbx13;
    int64_t r14_14;
    int64_t v15;

    rsi5 = reinterpret_cast<int32_t*>(0x1d8);
    *reinterpret_cast<int32_t*>(&r13_6) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_6) + 4) = reinterpret_cast<int32_t>(fputc);
    rdi7 = r15_8;
    fun_1ec();
    do {
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&r13_6) * 0xcccccccd) <= 0xccccccc) {
            *reinterpret_cast<int32_t*>(&rdi7) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi7) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi5 = r15_9;
            fun_23d();
        }
        *rdi7 = *rsi5;
        rdi7 = r15_10;
        rsi5 = reinterpret_cast<int32_t*>(0x1f3);
        fun_213();
        ++r13_6;
    } while (r13_6 != 0x7d0);
    fun_257(r15_11, 0x246, 0x24d, rcx);
    fun_270(0x25e, 22, 1, r15_12);
    fun_192(rbx13, 22, 1, r15_12);
    fun_19a(r14_14, 22, 1, r15_12);
    goto v15;
}

void fun_19a(int64_t rdi, struct s5* rsi, int64_t rdx, int32_t* rcx) {
    int64_t v5;

    goto v5;
}

void fun_1ec() {
    int64_t r13_1;
    int32_t* rdi2;
    int32_t* rsi3;
    int32_t* r15_4;
    int32_t* r15_5;
    int32_t* r15_6;
    int32_t* rcx7;
    int32_t* r15_8;
    int64_t rbx9;
    int64_t r14_10;
    int64_t v11;

    do {
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&r13_1) * 0xcccccccd) <= 0xccccccc) {
            *reinterpret_cast<int32_t*>(&rdi2) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi2) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi3 = r15_4;
            fun_23d();
        }
        *rdi2 = *rsi3;
        rdi2 = r15_5;
        rsi3 = reinterpret_cast<int32_t*>(0x1f3);
        fun_213();
        ++r13_1;
    } while (r13_1 != 0x7d0);
    fun_257(r15_6, 0x246, 0x24d, rcx7);
    fun_270(0x25e, 22, 1, r15_8);
    fun_192(rbx9, 22, 1, r15_8);
    fun_19a(r14_10, 22, 1, r15_8);
    goto v11;
}

void fun_257(int32_t* rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int32_t* r15_5;
    int64_t rbx6;
    int64_t r14_7;
    int64_t v8;

    fun_270(0x25e, 22, 1, r15_5);
    fun_192(rbx6, 22, 1, r15_5);
    fun_19a(r14_7, 22, 1, r15_5);
    goto v8;
}

void fun_270(int64_t rdi, struct s5* rsi, int64_t rdx, int32_t* rcx) {
    int64_t rbx5;
    int64_t r14_6;
    int64_t v7;

    fun_192(rbx5, rsi, rdx, rcx);
    fun_19a(r14_6, rsi, rdx, rcx);
    goto v7;
}

void fputc() {
}

void fun_1a() {
    signed char* rax1;
    signed char* rax2;
    signed char al3;

    *rax1 = reinterpret_cast<signed char>(*rax2 + al3);
}

void fun_7c() {
    __asm__("movups xmm5, [rip+0x0]");
    __asm__("movapd xmm3, [rip+0x0]");
}

