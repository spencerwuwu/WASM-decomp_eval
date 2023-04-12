
void fun_258(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx);

void fun_260(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx);

void fun_250(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t r14_5;
    int64_t r15_6;
    int64_t v7;

    fun_258(r14_5, rsi, rdx, rcx);
    fun_260(r15_6, rsi, rdx, rcx);
    goto v7;
}

void fputc(int32_t edi, int64_t rsi);

void fun_300();

void fun_31a(int64_t rdi, int64_t rsi, int64_t rdx);

void fun_333(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx);

void fun_2df() {
    int32_t eax1;
    int64_t rbp2;
    int32_t* rdi3;
    int32_t* rsi4;
    int32_t* r12_5;
    int32_t* r12_6;
    int32_t* r13_7;
    int64_t r12_8;
    int64_t r12_9;
    int64_t rbx10;
    int64_t r14_11;
    int64_t r15_12;
    int64_t v13;

    while (1) {
        eax1 = *reinterpret_cast<int32_t*>(&rbp2) * 0xffffcccd;
        __asm__("ror ax, 0x2");
        if (static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax1)) <= 0xccc) {
            *reinterpret_cast<int32_t*>(&rdi3) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi3) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi4 = r12_5;
            fun_300();
        }
        ++rbp2;
        if (rbp2 == 0x7d0) 
            break;
        *rdi3 = *rsi4;
        rdi3 = r12_6;
        rsi4 = r13_7;
        fun_2df();
    }
    fun_31a(r12_8, 0x309, 0x310);
    fun_333(0x321, 22, 1, r12_9);
    fun_250(rbx10, 22, 1, r12_9);
    fun_258(r14_11, 22, 1, r12_9);
    fun_260(r15_12, 22, 1, r12_9);
    goto v13;
}

void fun_300() {
    int64_t rbp1;
    int32_t* rdi2;
    int32_t* rsi3;
    int32_t* r12_4;
    int32_t* r13_5;
    int32_t eax6;
    int32_t* r12_7;
    int64_t r12_8;
    int64_t r12_9;
    int64_t rbx10;
    int64_t r14_11;
    int64_t r15_12;
    int64_t v13;

    while (1) {
        do {
            ++rbp1;
            if (rbp1 == 0x7d0) 
                goto addr_302_3;
            *rdi2 = *rsi3;
            rdi2 = r12_4;
            rsi3 = r13_5;
            fun_2df();
            eax6 = *reinterpret_cast<int32_t*>(&rbp1) * 0xffffcccd;
            __asm__("ror ax, 0x2");
        } while (static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax6)) > 0xccc);
        *reinterpret_cast<int32_t*>(&rdi2) = 10;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi2) + 4) = reinterpret_cast<int32_t>(fputc);
        rsi3 = r12_7;
        fun_300();
    }
    addr_302_3:
    fun_31a(r12_8, 0x309, 0x310);
    fun_333(0x321, 22, 1, r12_9);
    fun_250(rbx10, 22, 1, r12_9);
    fun_258(r14_11, 22, 1, r12_9);
    fun_260(r15_12, 22, 1, r12_9);
    goto v13;
}

void fun_2ae();

void fun_294(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int32_t* rsi5;
    int64_t rbp6;
    int32_t* rdi7;
    int32_t* r12_8;
    int32_t* r12_9;
    int32_t eax10;
    int32_t* r12_11;
    int64_t r12_12;
    int64_t r12_13;
    int64_t rbx14;
    int64_t r14_15;
    int64_t r15_16;
    int64_t v17;

    rsi5 = reinterpret_cast<int32_t*>(0x29b);
    *reinterpret_cast<int32_t*>(&rbp6) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp6) + 4) = reinterpret_cast<int32_t>(fputc);
    rdi7 = r12_8;
    fun_2ae();
    do {
        *rdi7 = *rsi5;
        rdi7 = r12_9;
        rsi5 = reinterpret_cast<int32_t*>(0x2b5);
        fun_2df();
        eax10 = *reinterpret_cast<int32_t*>(&rbp6) * 0xffffcccd;
        __asm__("ror ax, 0x2");
        if (static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax10)) <= 0xccc) {
            *reinterpret_cast<int32_t*>(&rdi7) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi7) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi5 = r12_11;
            fun_300();
        }
        ++rbp6;
    } while (rbp6 != 0x7d0);
    fun_31a(r12_12, 0x309, 0x310);
    fun_333(0x321, 22, 1, r12_13);
    fun_250(rbx14, 22, 1, r12_13);
    fun_258(r14_15, 22, 1, r12_13);
    fun_260(r15_16, 22, 1, r12_13);
    goto v17;
}

void fun_258(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t r15_5;
    int64_t v6;

    fun_260(r15_5, rsi, rdx, rcx);
    goto v6;
}

void fun_2ae() {
    int32_t* rdi1;
    int32_t* rsi2;
    int32_t* r12_3;
    int32_t eax4;
    int64_t rbp5;
    int32_t* r12_6;
    int64_t r12_7;
    int64_t r12_8;
    int64_t rbx9;
    int64_t r14_10;
    int64_t r15_11;
    int64_t v12;

    do {
        *rdi1 = *rsi2;
        rdi1 = r12_3;
        rsi2 = reinterpret_cast<int32_t*>(0x2b5);
        fun_2df();
        eax4 = *reinterpret_cast<int32_t*>(&rbp5) * 0xffffcccd;
        __asm__("ror ax, 0x2");
        if (static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax4)) <= 0xccc) {
            *reinterpret_cast<int32_t*>(&rdi1) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi1) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi2 = r12_6;
            fun_300();
        }
        ++rbp5;
    } while (rbp5 != 0x7d0);
    fun_31a(r12_7, 0x309, 0x310);
    fun_333(0x321, 22, 1, r12_8);
    fun_250(rbx9, 22, 1, r12_8);
    fun_258(r14_10, 22, 1, r12_8);
    fun_260(r15_11, 22, 1, r12_8);
    goto v12;
}

void fun_260(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t v5;

    goto v5;
}

void fun_31a(int64_t rdi, int64_t rsi, int64_t rdx) {
    int64_t r12_4;
    int64_t rbx5;
    int64_t r14_6;
    int64_t r15_7;
    int64_t v8;

    fun_333(0x321, 22, 1, r12_4);
    fun_250(rbx5, 22, 1, r12_4);
    fun_258(r14_6, 22, 1, r12_4);
    fun_260(r15_7, 22, 1, r12_4);
    goto v8;
}

void fun_333(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t rbx5;
    int64_t r14_6;
    int64_t r15_7;
    int64_t v8;

    fun_250(rbx5, rsi, rdx, rcx);
    fun_258(r14_6, rsi, rdx, rcx);
    fun_260(r15_7, rsi, rdx, rcx);
    goto v8;
}

void fputc(int32_t edi, int64_t rsi) {
}

void fun_a0(signed char* rdi) {
    signed char* rax2;
    signed char* rax3;
    signed char al4;
    signed char cl5;

    *rax2 = reinterpret_cast<signed char>(*rax3 + al4);
    *rdi = reinterpret_cast<signed char>(*rdi + cl5);
}

struct s0 {
    int32_t f0;
    int32_t f4;
};

struct s1 {
    int32_t f0;
    signed char[1997] pad2001;
    int32_t f7d1;
};

void fun_ac(int32_t* rdi, struct s0* rsi) {
    struct s1* rsi3;
    int32_t* rdi4;
    uint64_t rcx5;
    uint64_t r8_6;
    uint64_t rcx7;
    uint64_t r13_8;
    uint64_t r9_9;
    uint64_t rcx10;
    uint64_t rcx11;

    *rdi = rsi->f0;
    rsi3 = reinterpret_cast<struct s1*>(&rsi->f4);
    rdi4 = &rsi3->f7d1;
    if (rcx5 >= 2) {
        r8_6 = rcx7 & r13_8;
        __asm__("movd xmm4, rdi");
        __asm__("pshufd xmm4, xmm4, 0x44");
        *reinterpret_cast<int32_t*>(&r9_9) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_9) + 4) = reinterpret_cast<int32_t>(fputc);
        __asm__("movdqa xmm5, xmm1");
        do {
            __asm__("movdqa xmm6, xmm4");
            __asm__("psubq xmm6, xmm5");
            __asm__("pshufd xmm6, xmm6, 0xe8");
            __asm__("cvtdq2pd xmm6, xmm6");
            __asm__("addpd xmm6, xmm6");
            __asm__("divpd xmm6, xmm2");
            __asm__("movupd [r10+r9*8], xmm6");
            r9_9 = r9_9 + 2;
            __asm__("paddq xmm5, xmm3");
        } while (r9_9 != r8_6);
        if (rcx10 != r8_6) 
            goto addr_12f_8;
    } else {
        *reinterpret_cast<int32_t*>(&r8_6) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_6) + 4) = reinterpret_cast<int32_t>(fputc);
        goto addr_130_10;
    }
    addr_90_11:
    addr_12f_8:
    do {
        addr_130_10:
        __asm__("xorps xmm4, xmm4");
        __asm__("cvtsi2sd xmm4, r9d");
        __asm__("addsd xmm4, xmm4");
        __asm__("divsd xmm4, xmm0");
        *rdi4 = rsi3->f0;
        ++rdi4;
        rsi3 = reinterpret_cast<struct s1*>(&rsi3->pad2001);
        ++r8_6;
    } while (r8_6 != rcx11);
    goto addr_90_11;
}

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

int64_t* g278 = reinterpret_cast<int64_t*>(0x3d8d48208b4c);

void fun_163() {
    int32_t* rdi1;
    int32_t* rsi2;
    int32_t* rdi3;
    int32_t* rsi4;
    uint64_t rax5;
    int32_t* rdi6;
    int32_t* rsi7;
    int32_t* rdx8;
    uint64_t r13_9;
    struct s2* rdi10;
    int32_t* rbx11;
    struct s3* rdi12;
    int32_t* rsi13;
    struct s4* rdi14;
    int32_t* rsi15;
    struct s5* rdi16;
    int32_t* rsi17;
    int32_t* rdi18;
    int32_t* rsi19;
    int32_t ebp20;
    signed char** r12_21;
    int64_t* rax22;
    int64_t rcx23;

    while (1) {
        __asm__("divsd xmm0, [rcx+rax*8]");
        *rdi1 = *rsi2;
        rdi3 = rdi1 + 1;
        rsi4 = rsi2 + 1;
        ++rax5;
        if (rax5 == 0x7d0) 
            break;
        *rdi3 = *rsi4;
        rdi6 = rdi3 + 1;
        rsi7 = rsi4 + 1;
        *rdi6 = *rsi7;
        rdi1 = rdi6 + 1;
        rsi2 = rsi7 + 1;
        if (rax5 == fputc) 
            continue;
        if (rax5 != 1) {
            rdx8 = reinterpret_cast<int32_t*>(rax5 & r13_9);
            *reinterpret_cast<int32_t*>(&rsi2) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi2) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                rdi10 = reinterpret_cast<struct s2*>(rbx11 + rax5 * 0xfa0);
                rdi10->f0 = *rsi2;
                rdi12 = reinterpret_cast<struct s3*>(&rdi10->f4);
                rsi13 = rsi2 + 1;
                __asm__("mulsd xmm1, [r14+rcx*8]");
                __asm__("subsd xmm0, xmm1");
                rdi12->f0 = *rsi13;
                rdi14 = reinterpret_cast<struct s4*>(&rdi12->f4);
                rsi15 = rsi13 + 1;
                rdi14->f0 = *rsi15;
                rdi16 = reinterpret_cast<struct s5*>(&rdi14->f4);
                rsi17 = rsi15 + 1;
                __asm__("mulsd xmm1, [r14+r8]");
                __asm__("subsd xmm0, xmm1");
                rdi16->f0 = *rsi17;
                rdi1 = &rdi16->f4;
                rsi2 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rsi17 + 1) + 2);
            } while (rsi2 != rdx8);
        }
        if ((*reinterpret_cast<unsigned char*>(&rax5) & 1) == fputc) 
            continue;
        *rdi1 = *rsi2;
        rdi18 = rdi1 + 1;
        rsi19 = rsi2 + 1;
        __asm__("mulsd xmm1, [r14+rcx*8]");
        __asm__("subsd xmm0, xmm1");
        *rdi18 = *rsi19;
        rdi1 = rdi18 + 1;
        rsi2 = rsi19 + 1;
    }
    if (ebp20 < 43) 
        goto 0x248;
    if (**r12_21 != fputc) 
        goto "???";
    rax22 = g278;
    rcx23 = *rax22;
    fun_294(0x282, 22, 1, rcx23);
}

