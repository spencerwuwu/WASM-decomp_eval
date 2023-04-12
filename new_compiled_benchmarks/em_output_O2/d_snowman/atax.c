
struct s0 {
    int32_t f0;
    int32_t f4;
};

struct s1 {
    int32_t f0;
    int32_t f4;
};

void fputc(int32_t edi, int64_t rsi);

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

uint64_t* g425 = reinterpret_cast<uint64_t*>(0x3d8d48288b4c);

void fun_441(int64_t rdi, int64_t rsi, int64_t rdx, uint64_t rcx);

void fun_45b(uint64_t rdi, int64_t rsi, int64_t rdx, uint64_t rcx);

void fun_4a4(int64_t rdi, uint64_t rsi, int64_t rdx, uint64_t rcx);

void fun_477(uint64_t rdi, int64_t rsi, int64_t rdx, uint64_t rcx);

void fun_4be(uint64_t rdi, int64_t rsi, int64_t rdx, uint64_t rcx);

void fun_4d7(int64_t rdi, struct s1* rsi, int64_t rdx, uint64_t rcx);

void fun_3f5(int64_t rdi, struct s1* rsi, int64_t rdx, uint64_t rcx);

void fun_3fd(int64_t rdi, struct s1* rsi, int64_t rdx, uint64_t rcx);

void fun_405(int64_t rdi, struct s1* rsi, int64_t rdx, uint64_t rcx);

void fun_40d(int64_t rdi, struct s1* rsi, int64_t rdx, uint64_t rcx);

void fun_23e(int64_t rdi) {
    signed char** v2;
    uint64_t rax3;
    int64_t r15_4;
    void* rdx5;
    int64_t r13_6;
    uint64_t rcx7;
    int64_t rbx8;
    struct s0* rdi9;
    void* rbx10;
    uint64_t rdx11;
    int64_t r12_12;
    struct s1* rsi13;
    void* r12_14;
    int64_t* r12_15;
    int64_t r8_16;
    struct s2* rdi17;
    struct s3* rsi18;
    struct s0* rdi19;
    struct s4* rsi20;
    struct s2* rdi21;
    struct s5* rsi22;
    struct s0* rdi23;
    struct s6* rsi24;
    struct s2* rdi25;
    struct s7* rsi26;
    unsigned char r8b27;
    struct s0* r15_28;
    struct s1* r15_29;
    int64_t rdx30;
    struct s2* rdi31;
    int32_t* rsi32;
    struct s0* rdi33;
    struct s8* rsi34;
    struct s2* rdi35;
    struct s9* rsi36;
    int32_t ebp37;
    uint64_t* rax38;
    uint64_t r13_39;
    uint64_t rcx40;
    int64_t rbp41;
    int32_t eax42;
    int64_t rbx43;
    int64_t r14_44;
    int64_t r15_45;
    int64_t r12_46;
    int64_t v47;

    v2 = reinterpret_cast<signed char**>(__return_address());
    rax3 = reinterpret_cast<uint64_t>(r15_4 + 0x41a0);
    do {
        rdx5 = reinterpret_cast<void*>(r13_6 * 0x41a0);
        rcx7 = reinterpret_cast<uint64_t>(rbx8 + reinterpret_cast<int64_t>(rdx5));
        rdi9 = reinterpret_cast<struct s0*>(reinterpret_cast<int64_t>(rbx10) + reinterpret_cast<int64_t>(rdx5) + 0x41a0);
        rdx11 = reinterpret_cast<uint64_t>(r12_12 + r13_6 * 8);
        rsi13 = reinterpret_cast<struct s1*>(reinterpret_cast<int64_t>(r12_14) + r13_6 * 8 + 8);
        r12_15[r13_6] = reinterpret_cast<int64_t>(fputc);
        __asm__("pxor xmm0, xmm0");
        *reinterpret_cast<int32_t*>(&r8_16) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_16) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rdi9->f0 = rsi13->f0;
            rdi17 = reinterpret_cast<struct s2*>(&rdi9->f4);
            rsi18 = reinterpret_cast<struct s3*>(&rsi13->f4);
            __asm__("mulsd xmm1, [r14+r8*8]");
            __asm__("addsd xmm1, xmm0");
            rdi17->f0 = rsi18->f0;
            rdi19 = reinterpret_cast<struct s0*>(&rdi17->f4);
            rsi20 = reinterpret_cast<struct s4*>(&rsi18->f4);
            rdi19->f0 = rsi20->f0;
            rdi21 = reinterpret_cast<struct s2*>(&rdi19->f4);
            rsi22 = reinterpret_cast<struct s5*>(&rsi20->f4);
            __asm__("mulsd xmm2, [r14+r8*8+0x8]");
            __asm__("addsd xmm2, xmm1");
            rdi21->f0 = rsi22->f0;
            rdi23 = reinterpret_cast<struct s0*>(&rdi21->f4);
            rsi24 = reinterpret_cast<struct s6*>(&rsi22->f4);
            rdi23->f0 = rsi24->f0;
            rdi25 = reinterpret_cast<struct s2*>(&rdi23->f4);
            rsi26 = reinterpret_cast<struct s7*>(&rsi24->f4);
            __asm__("mulsd xmm0, [r14+r8*8+0x10]");
            __asm__("addsd xmm0, xmm2");
            rdi25->f0 = rsi26->f0;
            rdi9 = reinterpret_cast<struct s0*>(&rdi25->f4);
            rsi13 = reinterpret_cast<struct s1*>(&rsi26->f4);
            r8_16 = r8_16 + 3;
        } while (r8_16 != 0x834);
        r8b27 = reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(r15_28) < reinterpret_cast<uint64_t>(rdi9));
        *reinterpret_cast<unsigned char*>(&rsi13) = reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(r15_29) < reinterpret_cast<uint64_t>(rsi13));
        *reinterpret_cast<unsigned char*>(&rdi9) = reinterpret_cast<uint1_t>(rdx11 < rax3);
        if (!reinterpret_cast<int1_t>((r8b27 & static_cast<unsigned char>(reinterpret_cast<uint1_t>(rcx7 < rax3))) == fputc)) {
            *reinterpret_cast<int32_t*>(&rdx30) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx30) + 4) = reinterpret_cast<int32_t>(fputc);
            goto addr_390_24;
        }
        *reinterpret_cast<int32_t*>(&rdx30) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx30) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<unsigned char*>(&rsi13) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&rsi13) & *reinterpret_cast<unsigned char*>(&rdi9));
        if (!reinterpret_cast<int1_t>(*reinterpret_cast<unsigned char*>(&rsi13) == fputc)) {
            do {
                addr_390_24:
                rdi9->f0 = rsi13->f0;
                rdi31 = reinterpret_cast<struct s2*>(&rdi9->f4);
                __asm__("mulsd xmm0, [r12+r13*8]");
                __asm__("addsd xmm0, [r15+rdx*8]");
                rsi32 = reinterpret_cast<int32_t*>(rdx30 * 8);
                rdi31->f0 = *rsi32;
                rdi33 = reinterpret_cast<struct s0*>(&rdi31->f4);
                rsi34 = reinterpret_cast<struct s8*>(reinterpret_cast<uint64_t>(rsi32 + 1) | 8);
                rdi33->f0 = rsi34->f0;
                rdi35 = reinterpret_cast<struct s2*>(&rdi33->f4);
                rsi36 = reinterpret_cast<struct s9*>(&rsi34->f4);
                __asm__("mulsd xmm0, [r12+r13*8]");
                __asm__("addsd xmm0, [r15+rsi]");
                rdi35->f0 = rsi36->f0;
                rdi9 = reinterpret_cast<struct s0*>(&rdi35->f4);
                rsi13 = reinterpret_cast<struct s1*>(&rsi36->f4);
                rdx30 = rdx30 + 2;
            } while (rdx30 != 0x834);
        } else {
            rdi9->f0 = rsi13->f0;
            rsi13 = reinterpret_cast<struct s1*>(&rsi13->f4);
            __asm__("unpcklpd xmm0, xmm0");
            *reinterpret_cast<int32_t*>(&rdx30) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx30) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("movupd xmm1, [r15+rdx*8]");
                __asm__("movupd xmm2, [r15+rdx*8+0x10]");
                __asm__("movupd xmm3, [rcx+rdx*8]");
                __asm__("movupd xmm4, [rcx+rdx*8+0x10]");
                __asm__("mulpd xmm3, xmm0");
                __asm__("addpd xmm3, xmm1");
                __asm__("mulpd xmm4, xmm0");
                __asm__("addpd xmm4, xmm2");
                __asm__("movupd [r15+rdx*8], xmm3");
                __asm__("movupd [r15+rdx*8+0x10], xmm4");
                rdx30 = rdx30 + 4;
            } while (rdx30 != 0x834);
            continue;
        }
        ++r13_6;
    } while (r13_6 != 0x76c);
    if (ebp37 >= 43 && **v2 == fputc) {
        rax38 = g425;
        r13_39 = *rax38;
        rcx40 = r13_39;
        fun_441(0x42f, 22, 1, rcx40);
        *reinterpret_cast<int32_t*>(&rbp41) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp41) + 4) = reinterpret_cast<int32_t>(fputc);
        fun_45b(r13_39, 0x448, 0x44f, rcx40);
        do {
            eax42 = *reinterpret_cast<int32_t*>(&rbp41) * 0xffffcccd;
            __asm__("ror ax, 0x2");
            if (static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax42)) <= 0xccc) {
                fun_4a4(10, r13_39, 0x44f, rcx40);
            }
            __asm__("movq xmm0, [r15+rbp*8]");
            fun_477(r13_39, 0x470, 0x44f, rcx40);
            ++rbp41;
        } while (rbp41 != 0x834);
        fun_4be(r13_39, 0x4ad, 0x4b4, rcx40);
        *reinterpret_cast<int32_t*>(&rsi13) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi13) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx30) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx30) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx7 = r13_39;
        fun_4d7(0x4c5, 22, 1, rcx7);
    }
    fun_3f5(rbx43, rsi13, rdx30, rcx7);
    fun_3fd(r14_44, rsi13, rdx30, rcx7);
    fun_405(r15_45, rsi13, rdx30, rcx7);
    fun_40d(r12_46, rsi13, rdx30, rcx7);
    goto v47;
}

void fun_3f5(int64_t rdi, struct s1* rsi, int64_t rdx, uint64_t rcx) {
    int64_t r14_5;
    int64_t r15_6;
    int64_t r12_7;
    int64_t v8;

    fun_3fd(r14_5, rsi, rdx, rcx);
    fun_405(r15_6, rsi, rdx, rcx);
    fun_40d(r12_7, rsi, rdx, rcx);
    goto v8;
}

void fun_4a4(int64_t rdi, uint64_t rsi, int64_t rdx, uint64_t rcx) {
    uint64_t r13_5;
    int64_t rbp6;
    int32_t eax7;
    uint64_t r13_8;
    uint64_t r13_9;
    uint64_t r13_10;
    int64_t rbx11;
    int64_t r14_12;
    int64_t r15_13;
    int64_t r12_14;
    int64_t v15;

    while (1) {
        do {
            __asm__("movq xmm0, [r15+rbp*8]");
            fun_477(r13_5, 0x470, rdx, rcx);
            ++rbp6;
            if (rbp6 == 0x834) 
                goto addr_4a6_4;
            eax7 = *reinterpret_cast<int32_t*>(&rbp6) * 0xffffcccd;
            __asm__("ror ax, 0x2");
        } while (static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax7)) > 0xccc);
        fun_4a4(10, r13_8, rdx, rcx);
    }
    addr_4a6_4:
    fun_4be(r13_9, 0x4ad, 0x4b4, rcx);
    fun_4d7(0x4c5, 22, 1, r13_10);
    fun_3f5(rbx11, 22, 1, r13_10);
    fun_3fd(r14_12, 22, 1, r13_10);
    fun_405(r15_13, 22, 1, r13_10);
    fun_40d(r12_14, 22, 1, r13_10);
    goto v15;
}

void fun_441(int64_t rdi, int64_t rsi, int64_t rdx, uint64_t rcx) {
    int64_t rbp5;
    uint64_t r13_6;
    int32_t eax7;
    uint64_t r13_8;
    uint64_t r13_9;
    uint64_t r13_10;
    uint64_t r13_11;
    int64_t rbx12;
    int64_t r14_13;
    int64_t r15_14;
    int64_t r12_15;
    int64_t v16;

    *reinterpret_cast<int32_t*>(&rbp5) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp5) + 4) = reinterpret_cast<int32_t>(fputc);
    fun_45b(r13_6, 0x448, 0x44f, rcx);
    do {
        eax7 = *reinterpret_cast<int32_t*>(&rbp5) * 0xffffcccd;
        __asm__("ror ax, 0x2");
        if (static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax7)) <= 0xccc) {
            fun_4a4(10, r13_8, 0x44f, rcx);
        }
        __asm__("movq xmm0, [r15+rbp*8]");
        fun_477(r13_9, 0x470, 0x44f, rcx);
        ++rbp5;
    } while (rbp5 != 0x834);
    fun_4be(r13_10, 0x4ad, 0x4b4, rcx);
    fun_4d7(0x4c5, 22, 1, r13_11);
    fun_3f5(rbx12, 22, 1, r13_11);
    fun_3fd(r14_13, 22, 1, r13_11);
    fun_405(r15_14, 22, 1, r13_11);
    fun_40d(r12_15, 22, 1, r13_11);
    goto v16;
}

void fun_3fd(int64_t rdi, struct s1* rsi, int64_t rdx, uint64_t rcx) {
    int64_t r15_5;
    int64_t r12_6;
    int64_t v7;

    fun_405(r15_5, rsi, rdx, rcx);
    fun_40d(r12_6, rsi, rdx, rcx);
    goto v7;
}

void fun_477(uint64_t rdi, int64_t rsi, int64_t rdx, uint64_t rcx) {
    int64_t rbp5;
    int32_t eax6;
    uint64_t r13_7;
    uint64_t r13_8;
    uint64_t r13_9;
    uint64_t r13_10;
    int64_t rbx11;
    int64_t r14_12;
    int64_t r15_13;
    int64_t r12_14;
    int64_t v15;

    while (++rbp5, rbp5 != 0x834) {
        eax6 = *reinterpret_cast<int32_t*>(&rbp5) * 0xffffcccd;
        __asm__("ror ax, 0x2");
        if (static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax6)) <= 0xccc) {
            fun_4a4(10, r13_7, rdx, rcx);
        }
        __asm__("movq xmm0, [r15+rbp*8]");
        fun_477(r13_8, 0x470, rdx, rcx);
    }
    fun_4be(r13_9, 0x4ad, 0x4b4, rcx);
    fun_4d7(0x4c5, 22, 1, r13_10);
    fun_3f5(rbx11, 22, 1, r13_10);
    fun_3fd(r14_12, 22, 1, r13_10);
    fun_405(r15_13, 22, 1, r13_10);
    fun_40d(r12_14, 22, 1, r13_10);
    goto v15;
}

void fun_45b(uint64_t rdi, int64_t rsi, int64_t rdx, uint64_t rcx) {
    int32_t eax5;
    int64_t rbp6;
    uint64_t r13_7;
    uint64_t r13_8;
    uint64_t r13_9;
    uint64_t r13_10;
    int64_t rbx11;
    int64_t r14_12;
    int64_t r15_13;
    int64_t r12_14;
    int64_t v15;

    do {
        eax5 = *reinterpret_cast<int32_t*>(&rbp6) * 0xffffcccd;
        __asm__("ror ax, 0x2");
        if (static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax5)) <= 0xccc) {
            fun_4a4(10, r13_7, rdx, rcx);
        }
        __asm__("movq xmm0, [r15+rbp*8]");
        fun_477(r13_8, 0x470, rdx, rcx);
        ++rbp6;
    } while (rbp6 != 0x834);
    fun_4be(r13_9, 0x4ad, 0x4b4, rcx);
    fun_4d7(0x4c5, 22, 1, r13_10);
    fun_3f5(rbx11, 22, 1, r13_10);
    fun_3fd(r14_12, 22, 1, r13_10);
    fun_405(r15_13, 22, 1, r13_10);
    fun_40d(r12_14, 22, 1, r13_10);
    goto v15;
}

void fun_405(int64_t rdi, struct s1* rsi, int64_t rdx, uint64_t rcx) {
    int64_t r12_5;
    int64_t v6;

    fun_40d(r12_5, rsi, rdx, rcx);
    goto v6;
}

void fun_4be(uint64_t rdi, int64_t rsi, int64_t rdx, uint64_t rcx) {
    uint64_t r13_5;
    int64_t rbx6;
    int64_t r14_7;
    int64_t r15_8;
    int64_t r12_9;
    int64_t v10;

    fun_4d7(0x4c5, 22, 1, r13_5);
    fun_3f5(rbx6, 22, 1, r13_5);
    fun_3fd(r14_7, 22, 1, r13_5);
    fun_405(r15_8, 22, 1, r13_5);
    fun_40d(r12_9, 22, 1, r13_5);
    goto v10;
}

void fun_40d(int64_t rdi, struct s1* rsi, int64_t rdx, uint64_t rcx) {
    int64_t v5;

    goto v5;
}

void fun_4d7(int64_t rdi, struct s1* rsi, int64_t rdx, uint64_t rcx) {
    int64_t rbx5;
    int64_t r14_6;
    int64_t r15_7;
    int64_t r12_8;
    int64_t v9;

    fun_3f5(rbx5, rsi, rdx, rcx);
    fun_3fd(r14_6, rsi, rdx, rcx);
    fun_405(r15_7, rsi, rdx, rcx);
    fun_40d(r12_8, rsi, rdx, rcx);
    goto v9;
}

void fputc(int32_t edi, int64_t rsi) {
}

/* .LCPI0_2 */
void LCPI0_2();

void fun_19() {
    signed char* rax1;
    signed char* rax2;
    signed char al3;

    *rax1 = reinterpret_cast<signed char>(*rax2 + al3);
    LCPI0_2();
}

/* .LCPI0_11 */
void LCPI0_11() {
    int64_t rcx1;
    int64_t rcx2;
    int64_t rax3;
    int64_t r15_4;

    __asm__("int1 ");
    __asm__("addpd xmm6, xmm2");
    __asm__("movupd [r14+rcx*8+0x10], xmm6");
    __asm__("movdqa xmm6, xmm0");
    __asm__("paddd xmm6, xmm4");
    __asm__("cvtdq2pd xmm6, xmm6");
    __asm__("divpd xmm6, xmm1");
    __asm__("addpd xmm6, xmm2");
    __asm__("movupd [r14+rcx*8+0x20], xmm6");
    __asm__("paddd xmm0, xmm5");
    if (rcx1 + 6 == 0x834) {
        __asm__("movdqa xmm0, [rip+0x0]");
        __asm__("movdqa xmm1, [rip+0x0]");
        __asm__("movdqa xmm2, [rip+0x0]");
        __asm__("movapd xmm3, [rip+0x0]");
        __asm__("movdqa xmm4, [rip+0x0]");
        __asm__("movdqa xmm5, [rip+0x0]");
        do {
            __asm__("movd xmm6, rax");
            __asm__("pshufd xmm6, xmm6, 0x44");
            *reinterpret_cast<int32_t*>(&rcx2) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx2) + 4) = reinterpret_cast<int32_t>(fputc);
            __asm__("movdqa xmm7, xmm0");
            do {
                __asm__("movdqa xmm10, xmm7");
                __asm__("paddq xmm10, xmm6");
                __asm__("pshufd xmm8, xmm10, 0xe8");
                __asm__("movdqa xmm9, xmm10");
                __asm__("pmuludq xmm9, xmm1");
                __asm__("pshufd xmm9, xmm9, 0xed");
                __asm__("pshufd xmm11, xmm10, 0xee");
                __asm__("pmuludq xmm11, xmm1");
                __asm__("pshufd xmm11, xmm11, 0xed");
                __asm__("punpckldq xmm9, xmm11");
                __asm__("psrld xmm9, 0xb");
                __asm__("pshufd xmm11, xmm9, 0xf5");
                __asm__("pmuludq xmm9, xmm2");
                __asm__("paddq xmm10, xmm4");
                __asm__("pshufd xmm12, xmm10, 0xe8");
                __asm__("pshufd xmm13, xmm10, 0xee");
                __asm__("pmuludq xmm11, xmm2");
                __asm__("pmuludq xmm10, xmm1");
                __asm__("pshufd xmm10, xmm10, 0xed");
                __asm__("pmuludq xmm13, xmm1");
                __asm__("punpckldq xmm9, xmm11");
                __asm__("pshufd xmm11, xmm13, 0xed");
                __asm__("punpckldq xmm10, xmm11");
                __asm__("psubd xmm8, xmm9");
                __asm__("psrld xmm10, 0xb");
                __asm__("pshufd xmm9, xmm10, 0xf5");
                __asm__("cvtdq2pd xmm8, xmm8");
                __asm__("pmuludq xmm10, xmm2");
                __asm__("pmuludq xmm9, xmm2");
                __asm__("punpckldq xmm10, xmm9");
                __asm__("divpd xmm8, xmm3");
                __asm__("psubd xmm12, xmm10");
                __asm__("cvtdq2pd xmm9, xmm12");
                __asm__("divpd xmm9, xmm3");
                __asm__("movupd [rdx+rcx*8], xmm8");
                __asm__("movupd [rsi+rdx], xmm9");
                rcx2 = rcx2 + 4;
                __asm__("paddq xmm7, xmm5");
            } while (rcx2 != 0x834);
            ++rax3;
        } while (rax3 != 0x76c);
        fun_23e(r15_4);
    }
}

