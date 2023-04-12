
void fun_3b1(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx);

void fun_3a9(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t r14_5;
    int64_t v6;

    fun_3b1(r14_5, rsi, rdx, rcx);
    goto v6;
}

void fputc(int32_t edi, int64_t rsi);

void fun_451();

void fun_46b(int64_t rdi, int64_t rsi, int64_t rdx);

void fun_484(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx);

void fun_423() {
    int64_t r13_1;
    int32_t eax2;
    int32_t* rdi3;
    int32_t* rsi4;
    int32_t* r15_5;
    int32_t* r15_6;
    int32_t* r12_7;
    int64_t r15_8;
    int64_t r15_9;
    int64_t rbx10;
    int64_t r14_11;
    int64_t v12;

    while (++r13_1, r13_1 != 0x7d0) {
        eax2 = *reinterpret_cast<int32_t*>(&r13_1) * 0xffffcccd;
        __asm__("ror ax, 0x2");
        if (static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax2)) <= 0xccc) {
            *reinterpret_cast<int32_t*>(&rdi3) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi3) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi4 = r15_5;
            fun_451();
        }
        *rdi3 = *rsi4;
        rdi3 = r15_6;
        rsi4 = r12_7;
        fun_423();
    }
    fun_46b(r15_8, 0x45a, 0x461);
    fun_484(0x472, 22, 1, r15_9);
    fun_3a9(rbx10, 22, 1, r15_9);
    fun_3b1(r14_11, 22, 1, r15_9);
    goto v12;
}

void fun_451() {
    int32_t* rdi1;
    int32_t* rsi2;
    int32_t* r15_3;
    int32_t* r12_4;
    int64_t r13_5;
    int32_t eax6;
    int32_t* r15_7;
    int64_t r15_8;
    int64_t r15_9;
    int64_t rbx10;
    int64_t r14_11;
    int64_t v12;

    while (1) {
        do {
            *rdi1 = *rsi2;
            rdi1 = r15_3;
            rsi2 = r12_4;
            fun_423();
            ++r13_5;
            if (r13_5 == 0x7d0) 
                goto addr_453_7;
            eax6 = *reinterpret_cast<int32_t*>(&r13_5) * 0xffffcccd;
            __asm__("ror ax, 0x2");
        } while (static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax6)) > 0xccc);
        *reinterpret_cast<int32_t*>(&rdi1) = 10;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi1) + 4) = reinterpret_cast<int32_t>(fputc);
        rsi2 = r15_7;
        fun_451();
    }
    addr_453_7:
    fun_46b(r15_8, 0x45a, 0x461);
    fun_484(0x472, 22, 1, r15_9);
    fun_3a9(rbx10, 22, 1, r15_9);
    fun_3b1(r14_11, 22, 1, r15_9);
    goto v12;
}

void fun_400();

void fun_3e5(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int32_t* rsi5;
    int64_t r13_6;
    int32_t* rdi7;
    int32_t* r15_8;
    int32_t eax9;
    int32_t* r15_10;
    int32_t* r15_11;
    int64_t r15_12;
    int64_t r15_13;
    int64_t rbx14;
    int64_t r14_15;
    int64_t v16;

    rsi5 = reinterpret_cast<int32_t*>(0x3ec);
    *reinterpret_cast<int32_t*>(&r13_6) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_6) + 4) = reinterpret_cast<int32_t>(fputc);
    rdi7 = r15_8;
    fun_400();
    do {
        eax9 = *reinterpret_cast<int32_t*>(&r13_6) * 0xffffcccd;
        __asm__("ror ax, 0x2");
        if (static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax9)) <= 0xccc) {
            *reinterpret_cast<int32_t*>(&rdi7) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi7) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi5 = r15_10;
            fun_451();
        }
        *rdi7 = *rsi5;
        rdi7 = r15_11;
        rsi5 = reinterpret_cast<int32_t*>(0x407);
        fun_423();
        ++r13_6;
    } while (r13_6 != 0x7d0);
    fun_46b(r15_12, 0x45a, 0x461);
    fun_484(0x472, 22, 1, r15_13);
    fun_3a9(rbx14, 22, 1, r15_13);
    fun_3b1(r14_15, 22, 1, r15_13);
    goto v16;
}

void fun_3b1(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t v5;

    goto v5;
}

void fun_400() {
    int32_t eax1;
    int64_t r13_2;
    int32_t* rdi3;
    int32_t* rsi4;
    int32_t* r15_5;
    int32_t* r15_6;
    int64_t r15_7;
    int64_t r15_8;
    int64_t rbx9;
    int64_t r14_10;
    int64_t v11;

    do {
        eax1 = *reinterpret_cast<int32_t*>(&r13_2) * 0xffffcccd;
        __asm__("ror ax, 0x2");
        if (static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax1)) <= 0xccc) {
            *reinterpret_cast<int32_t*>(&rdi3) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi3) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi4 = r15_5;
            fun_451();
        }
        *rdi3 = *rsi4;
        rdi3 = r15_6;
        rsi4 = reinterpret_cast<int32_t*>(0x407);
        fun_423();
        ++r13_2;
    } while (r13_2 != 0x7d0);
    fun_46b(r15_7, 0x45a, 0x461);
    fun_484(0x472, 22, 1, r15_8);
    fun_3a9(rbx9, 22, 1, r15_8);
    fun_3b1(r14_10, 22, 1, r15_8);
    goto v11;
}

void fun_46b(int64_t rdi, int64_t rsi, int64_t rdx) {
    int64_t r15_4;
    int64_t rbx5;
    int64_t r14_6;
    int64_t v7;

    fun_484(0x472, 22, 1, r15_4);
    fun_3a9(rbx5, 22, 1, r15_4);
    fun_3b1(r14_6, 22, 1, r15_4);
    goto v7;
}

void fun_484(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t rbx5;
    int64_t r14_6;
    int64_t v7;

    fun_3a9(rbx5, rsi, rdx, rcx);
    fun_3b1(r14_6, rsi, rdx, rcx);
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
    signed char[15992] pad15992;
    int32_t f3e78;
};

struct s4 {
    signed char[8] pad8;
    int32_t f8;
};

struct s5 {
    int32_t f0;
    int32_t f4;
};

int64_t* g3c9 = reinterpret_cast<int64_t*>(0x3d8d48388b4c);

void fun_90(struct s0* rdi, struct s1* rsi) {
    int64_t rax3;
    int32_t* rsi4;
    int64_t r14_5;
    struct s2* rdi6;
    struct s3* r14_7;
    unsigned char al8;
    struct s2* rbx9;
    int64_t r14_10;
    int64_t rbx11;
    struct s4* rbx12;
    unsigned char cl13;
    uint64_t r14_14;
    int64_t rbx15;
    int32_t edx16;
    struct s5* rdi17;
    struct s5* rsi18;
    int64_t rsi19;
    int32_t* rsi20;
    struct s5* rsi21;
    int64_t rsi22;
    int32_t* rsi23;
    int32_t ebp24;
    signed char** r15_25;
    int64_t* rax26;
    int64_t rcx27;

    __asm__("cvtsi2sd xmm3, ecx");
    __asm__("movapd xmm4, xmm3");
    __asm__("addsd xmm4, xmm0");
    __asm__("divsd xmm4, xmm1");
    rdi->f0 = rsi->f0;
    __asm__("addsd xmm3, xmm2");
    __asm__("divsd xmm3, xmm1");
    rdi->f4 = rsi->f4;
    if (rax3 + 2 == 0x7d0) {
        rsi4 = reinterpret_cast<int32_t*>(r14_5 + 0x3e80);
        rdi6 = reinterpret_cast<struct s2*>(&r14_7->f3e78);
        al8 = reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(rbx9) < reinterpret_cast<uint64_t>(rdi6))) & static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(r14_10 + 8) < reinterpret_cast<uint64_t>(rbx11 + 0x3e80))));
        *reinterpret_cast<unsigned char*>(&rsi4) = reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(&rbx12->f8) < reinterpret_cast<uint64_t>(rsi4));
        cl13 = reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(r14_14 < reinterpret_cast<uint64_t>(rbx15 + 0x3e78))) & *reinterpret_cast<unsigned char*>(&rsi4));
        edx16 = reinterpret_cast<int32_t>(fputc);
        rdi6->f0 = *rsi4;
        rdi17 = reinterpret_cast<struct s5*>(&rdi6->f4);
        __asm__("movapd xmm1, [rip+0x0]");
        do {
            *reinterpret_cast<int32_t*>(&rsi18) = 1;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi18) + 4) = reinterpret_cast<int32_t>(fputc);
            if (reinterpret_cast<int1_t>(al8 == fputc)) {
                *reinterpret_cast<int32_t*>(&rsi19) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi19) + 4) = reinterpret_cast<int32_t>(fputc);
                do {
                    __asm__("movupd xmm2, [rbx+rsi*8]");
                    __asm__("movupd xmm3, [rbx+rsi*8+0x10]");
                    __asm__("movupd xmm4, [rbx+r8]");
                    __asm__("addpd xmm4, xmm2");
                    __asm__("movupd xmm2, [rbx+r8+0x10]");
                    __asm__("addpd xmm2, xmm3");
                    rdi17 = reinterpret_cast<struct s5*>(reinterpret_cast<uint64_t>(rsi19 * 8) | 16);
                    __asm__("movupd xmm3, [rbx+rdi]");
                    __asm__("addpd xmm3, xmm4");
                    __asm__("movupd xmm4, [rbx+rdi+0x10]");
                    __asm__("addpd xmm4, xmm2");
                    __asm__("mulpd xmm3, xmm1");
                    __asm__("mulpd xmm4, xmm1");
                    __asm__("movupd [r14+r8], xmm3");
                    __asm__("movupd [r14+r8+0x10], xmm4");
                    rsi19 = rsi19 + 4;
                } while (rsi19 != 0x7cc);
                *reinterpret_cast<int32_t*>(&rsi18) = 0x7cd;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi18) + 4) = reinterpret_cast<int32_t>(fputc);
            }
            do {
                __asm__("movupd xmm2, [rbx+rsi*8-0x8]");
                __asm__("movapd xmm3, xmm2");
                __asm__("unpckhpd xmm3, xmm2");
                __asm__("addsd xmm3, xmm2");
                __asm__("addsd xmm3, [rbx+rsi*8+0x8]");
                __asm__("mulsd xmm3, xmm0");
                rdi17->f0 = rsi18->f0;
                rsi20 = &rsi18->f4;
                __asm__("movupd xmm2, [rbx+rsi*8]");
                __asm__("movapd xmm3, xmm2");
                __asm__("unpckhpd xmm3, xmm2");
                __asm__("addsd xmm3, xmm2");
                __asm__("addsd xmm3, [rbx+rsi*8+0x10]");
                __asm__("mulsd xmm3, xmm0");
                rdi17->f4 = *rsi20;
                rdi17 = reinterpret_cast<struct s5*>(reinterpret_cast<uint64_t>(rsi20 + 1) + 2);
                rsi18 = rdi17;
            } while (!reinterpret_cast<int1_t>(rdi17 == 0x7cf));
            *reinterpret_cast<int32_t*>(&rsi21) = 1;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi21) + 4) = reinterpret_cast<int32_t>(fputc);
            if (reinterpret_cast<int1_t>(cl13 == fputc)) {
                *reinterpret_cast<int32_t*>(&rsi22) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi22) + 4) = reinterpret_cast<int32_t>(fputc);
                do {
                    __asm__("movupd xmm2, [r14+rsi*8]");
                    __asm__("movupd xmm3, [r14+rsi*8+0x10]");
                    __asm__("movupd xmm4, [r14+r8]");
                    __asm__("addpd xmm4, xmm2");
                    __asm__("movupd xmm2, [r14+r8+0x10]");
                    __asm__("addpd xmm2, xmm3");
                    rdi17 = reinterpret_cast<struct s5*>(reinterpret_cast<uint64_t>(rsi22 * 8) | 16);
                    __asm__("movupd xmm3, [r14+rdi]");
                    __asm__("addpd xmm3, xmm4");
                    __asm__("movupd xmm4, [r14+rdi+0x10]");
                    __asm__("addpd xmm4, xmm2");
                    __asm__("mulpd xmm3, xmm1");
                    __asm__("mulpd xmm4, xmm1");
                    __asm__("movupd [rbx+r8], xmm3");
                    __asm__("movupd [rbx+r8+0x10], xmm4");
                    rsi22 = rsi22 + 4;
                } while (rsi22 != 0x7cc);
                *reinterpret_cast<int32_t*>(&rsi21) = 0x7cd;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi21) + 4) = reinterpret_cast<int32_t>(fputc);
            }
            do {
                __asm__("movupd xmm2, [r14+rsi*8-0x8]");
                __asm__("movapd xmm3, xmm2");
                __asm__("unpckhpd xmm3, xmm2");
                __asm__("addsd xmm3, xmm2");
                __asm__("addsd xmm3, [r14+rsi*8+0x8]");
                __asm__("mulsd xmm3, xmm0");
                rdi17->f0 = rsi21->f0;
                rsi23 = &rsi21->f4;
                __asm__("movupd xmm2, [r14+rsi*8]");
                __asm__("movapd xmm3, xmm2");
                __asm__("unpckhpd xmm3, xmm2");
                __asm__("addsd xmm3, xmm2");
                __asm__("addsd xmm3, [r14+rsi*8+0x10]");
                __asm__("mulsd xmm3, xmm0");
                rdi17->f4 = *rsi23;
                rdi17 = reinterpret_cast<struct s5*>(reinterpret_cast<uint64_t>(rsi23 + 1) + 2);
                rsi21 = rdi17;
            } while (!reinterpret_cast<int1_t>(rdi17 == 0x7cf));
            ++edx16;
        } while (edx16 != 0x1f4);
        if (ebp24 < 43) 
            goto 0x3a1;
        if (**r15_25 != fputc) 
            goto "???";
        rax26 = g3c9;
        rcx27 = *rax26;
        fun_3e5(0x3d3, 22, 1, rcx27);
    }
}

void fun_c4() {
    int64_t rax1;

    __asm__("movdqa xmm0, [rip+0x0]");
    __asm__("movapd xmm1, [rip+0x0]");
    __asm__("movapd xmm2, [rip+0x0]");
    __asm__("movapd xmm3, [rip+0x0]");
    __asm__("movdqa xmm4, [rip+0x0]");
    __asm__("movdqa xmm5, [rip+0x0]");
    while (1) {
        __asm__("cvtdq2pd xmm6, xmm0");
        __asm__("movapd xmm7, xmm6");
        __asm__("addpd xmm7, xmm1");
        __asm__("divpd xmm7, xmm2");
        __asm__("movupd [rbx+rax*8], xmm7");
        __asm__("addpd xmm6, xmm3");
        __asm__("divpd xmm6, xmm2");
        __asm__("movdqa xmm7, xmm0");
        __asm__("paddd xmm7, xmm4");
        __asm__("cvtdq2pd xmm7, xmm7");
        __asm__("movupd [r14+rax*8], xmm6");
        __asm__("movapd xmm6, xmm7");
        __asm__("addpd xmm6, xmm1");
        __asm__("divpd xmm6, xmm2");
        __asm__("movupd [rbx+rcx], xmm6");
        __asm__("addpd xmm7, xmm3");
        __asm__("divpd xmm7, xmm2");
        __asm__("movupd [r14+rcx], xmm7");
        rax1 = rax1 + 4;
        __asm__("paddd xmm0, xmm5");
        if (rax1 == 0x7d0) 
            goto "???";
    }
}

