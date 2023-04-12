
void fun_1f8(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t v5;

    goto v5;
}

void fun_297();

void fputc(int32_t edi, int64_t rsi);

void fun_2c7(int64_t rdi, int64_t rsi, int64_t rdx);

void fun_2e0(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx);

void fun_27b() {
    int32_t* rdi1;
    int32_t* rsi2;
    int32_t* r14_3;
    int32_t* r15_4;
    int64_t rbp5;
    int64_t r12_6;
    int64_t r13_7;
    int32_t* r14_8;
    int64_t r14_9;
    int64_t r14_10;
    int64_t rbx11;
    int64_t v12;

    while (1) {
        *rdi1 = *rsi2;
        rdi1 = r14_3;
        rsi2 = r15_4;
        fun_297();
        ++rbp5;
        if (rbp5 == 0x7d0) {
            ++r12_6;
            if (r12_6 == 0x7d0) 
                break;
            r13_7 = r12_6 * 0x7d0;
            *reinterpret_cast<int32_t*>(&rbp5) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp5) + 4) = reinterpret_cast<int32_t>(fputc);
        }
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(static_cast<int32_t>(rbp5 + r13_7) * 0xcccccccd) > 0xccccccc) 
            continue;
        *reinterpret_cast<int32_t*>(&rdi1) = 10;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi1) + 4) = reinterpret_cast<int32_t>(fputc);
        rsi2 = r14_8;
        fun_27b();
    }
    fun_2c7(r14_9, 0x2b6, 0x2bd);
    fun_2e0(0x2ce, 22, 1, r14_10);
    fun_1f8(rbx11, 22, 1, r14_10);
    goto v12;
}

void fun_297() {
    int64_t rbp1;
    int64_t r12_2;
    int64_t r13_3;
    int32_t* rdi4;
    int32_t* rsi5;
    int32_t* r14_6;
    int32_t* r14_7;
    int32_t* r15_8;
    int64_t r14_9;
    int64_t r14_10;
    int64_t rbx11;
    int64_t v12;

    while (1) {
        ++rbp1;
        if (rbp1 == 0x7d0) {
            ++r12_2;
            if (r12_2 == 0x7d0) 
                break;
            r13_3 = r12_2 * 0x7d0;
            *reinterpret_cast<int32_t*>(&rbp1) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp1) + 4) = reinterpret_cast<int32_t>(fputc);
        }
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(static_cast<int32_t>(rbp1 + r13_3) * 0xcccccccd) <= 0xccccccc) {
            *reinterpret_cast<int32_t*>(&rdi4) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi4) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi5 = r14_6;
            fun_27b();
        }
        *rdi4 = *rsi5;
        rdi4 = r14_7;
        rsi5 = r15_8;
        fun_297();
    }
    fun_2c7(r14_9, 0x2b6, 0x2bd);
    fun_2e0(0x2ce, 22, 1, r14_10);
    fun_1f8(rbx11, 22, 1, r14_10);
    goto v12;
}

void fun_2c7(int64_t rdi, int64_t rsi, int64_t rdx) {
    int64_t r14_4;
    int64_t rbx5;
    int64_t v6;

    fun_2e0(0x2ce, 22, 1, r14_4);
    fun_1f8(rbx5, 22, 1, r14_4);
    goto v6;
}

void fun_247();

void fun_22c(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int32_t* rsi5;
    int64_t r12_6;
    int32_t* rdi7;
    int32_t* r14_8;
    int64_t r13_9;
    int64_t rbp10;
    int32_t* r14_11;
    int32_t* r14_12;
    int64_t r14_13;
    int64_t r14_14;
    int64_t rbx15;
    int64_t v16;

    rsi5 = reinterpret_cast<int32_t*>(0x233);
    *reinterpret_cast<int32_t*>(&r12_6) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_6) + 4) = reinterpret_cast<int32_t>(fputc);
    rdi7 = r14_8;
    fun_247();
    do {
        r13_9 = r12_6 * 0x7d0;
        *reinterpret_cast<int32_t*>(&rbp10) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp10) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>(static_cast<int32_t>(rbp10 + r13_9) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi7) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi7) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi5 = r14_11;
                fun_27b();
            }
            *rdi7 = *rsi5;
            rdi7 = r14_12;
            rsi5 = reinterpret_cast<int32_t*>(0x24e);
            fun_297();
            ++rbp10;
        } while (rbp10 != 0x7d0);
        ++r12_6;
    } while (r12_6 != 0x7d0);
    fun_2c7(r14_13, 0x2b6, 0x2bd);
    fun_2e0(0x2ce, 22, 1, r14_14);
    fun_1f8(rbx15, 22, 1, r14_14);
    goto v16;
}

void fun_2e0(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t rbx5;
    int64_t v6;

    fun_1f8(rbx5, rsi, rdx, rcx);
    goto v6;
}

void fun_247() {
    int64_t r13_1;
    int64_t r12_2;
    int64_t rbp3;
    int32_t* rdi4;
    int32_t* rsi5;
    int32_t* r14_6;
    int32_t* r14_7;
    int64_t r14_8;
    int64_t r14_9;
    int64_t rbx10;
    int64_t v11;

    do {
        r13_1 = r12_2 * 0x7d0;
        *reinterpret_cast<int32_t*>(&rbp3) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp3) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>(static_cast<int32_t>(rbp3 + r13_1) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi4) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi4) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi5 = r14_6;
                fun_27b();
            }
            *rdi4 = *rsi5;
            rdi4 = r14_7;
            rsi5 = reinterpret_cast<int32_t*>(0x24e);
            fun_297();
            ++rbp3;
        } while (rbp3 != 0x7d0);
        ++r12_2;
    } while (r12_2 != 0x7d0);
    fun_2c7(r14_8, 0x2b6, 0x2bd);
    fun_2e0(0x2ce, 22, 1, r14_9);
    fun_1f8(rbx10, 22, 1, r14_9);
    goto v11;
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

struct s13 {
    int32_t f0;
    int32_t f4;
};

struct s14 {
    int32_t f0;
    int32_t f4;
};

int64_t* g210 = reinterpret_cast<int64_t*>(0x3d8d48308b4c);

void fun_80(struct s0* rdi) {
    struct s1* rsi2;
    int64_t rcx3;
    int64_t rcx4;
    int64_t rax5;
    int32_t eax6;
    struct s2* rdi7;
    struct s3* rsi8;
    int64_t rcx9;
    struct s4* rsi10;
    struct s5* rdi11;
    struct s6* rsi12;
    struct s7* rdi13;
    struct s8* rsi14;
    struct s9* rdi15;
    struct s10* rsi16;
    struct s11* rsi17;
    struct s5* rdi18;
    struct s12* rsi19;
    struct s7* rdi20;
    struct s13* rsi21;
    struct s9* rdi22;
    struct s14* rsi23;
    struct s2* r8_24;
    int32_t ebp25;
    signed char** r14_26;
    int64_t* rax27;
    int64_t rcx28;

    __asm__("addpd xmm7, xmm2");
    __asm__("divpd xmm7, xmm3");
    __asm__("movupd [rdx+rcx*8], xmm7");
    __asm__("paddd xmm6, xmm4");
    __asm__("cvtdq2pd xmm7, xmm6");
    __asm__("mulpd xmm7, xmm5");
    __asm__("addpd xmm7, xmm2");
    __asm__("divpd xmm7, xmm3");
    rsi2 = reinterpret_cast<struct s1*>(reinterpret_cast<uint64_t>(rcx3 * 8) | 16);
    __asm__("movupd [rsi+rdx], xmm7");
    if (rcx4 + 4 == 0x7d0) {
        if (rax5 + 1 == 0x7d0) {
            eax6 = reinterpret_cast<int32_t>(fputc);
            rdi->f0 = rsi2->f0;
            rdi7 = reinterpret_cast<struct s2*>(&rdi->f4);
            rsi8 = reinterpret_cast<struct s3*>(&rsi2->f4);
            do {
                rdi7->f0 = rsi8->f0;
                rdi7 = reinterpret_cast<struct s2*>(&rdi7->f4);
                *reinterpret_cast<int32_t*>(&rcx9) = 1;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx9) + 4) = reinterpret_cast<int32_t>(fputc);
                do {
                    __asm__("movapd xmm2, xmm1");
                    rsi10 = reinterpret_cast<struct s4*>(rcx9 * 0x3e80);
                    ++rcx9;
                    rdi7->f0 = rsi10->f0;
                    rdi11 = reinterpret_cast<struct s5*>(&rdi7->f4);
                    rsi12 = reinterpret_cast<struct s6*>(&rsi10->f4);
                    rdi11->f0 = rsi12->f0;
                    rdi13 = reinterpret_cast<struct s7*>(&rdi11->f4);
                    rsi14 = reinterpret_cast<struct s8*>(&rsi12->f4);
                    rdi13->f0 = rsi14->f0;
                    rdi15 = reinterpret_cast<struct s9*>(&rdi13->f4);
                    rsi16 = reinterpret_cast<struct s10*>(&rsi14->f4);
                    rdi15->f0 = rsi16->f0;
                    rsi17 = reinterpret_cast<struct s11*>(&rsi16->f4);
                    rdi15->f4 = rsi17->f0;
                    rsi8 = reinterpret_cast<struct s3*>(&rsi17->f4);
                    __asm__("movapd xmm8, xmm1");
                    *reinterpret_cast<int32_t*>(&rdi7) = 1;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi7) + 4) = reinterpret_cast<int32_t>(fputc);
                    do {
                        __asm__("movapd xmm7, xmm4");
                        __asm__("addsd xmm2, xmm4");
                        rdi7->f0 = rsi8->f0;
                        rdi18 = reinterpret_cast<struct s5*>(&rdi7->f4);
                        rsi19 = reinterpret_cast<struct s12*>(&rsi8->f4);
                        __asm__("addsd xmm2, xmm4");
                        __asm__("addsd xmm2, xmm8");
                        __asm__("addsd xmm2, xmm3");
                        rdi18->f0 = rsi19->f0;
                        rdi20 = reinterpret_cast<struct s7*>(&rdi18->f4);
                        rsi21 = reinterpret_cast<struct s13*>(&rsi19->f4);
                        __asm__("addsd xmm2, xmm3");
                        __asm__("addsd xmm2, xmm5");
                        __asm__("addsd xmm2, xmm6");
                        __asm__("movapd xmm5, xmm6");
                        rdi20->f0 = rsi21->f0;
                        rdi22 = reinterpret_cast<struct s9*>(&rdi20->f4);
                        rsi23 = reinterpret_cast<struct s14*>(&rsi21->f4);
                        __asm__("addsd xmm2, xmm6");
                        __asm__("divsd xmm2, xmm0");
                        rdi22->f0 = rsi23->f0;
                        rsi8 = reinterpret_cast<struct s3*>(&rsi23->f4);
                        r8_24 = reinterpret_cast<struct s2*>(reinterpret_cast<int64_t>(&rdi22->f4) + 1);
                        __asm__("movapd xmm8, xmm2");
                        __asm__("movapd xmm2, xmm7");
                        rdi7 = r8_24;
                    } while (!reinterpret_cast<int1_t>(r8_24 == 0x7cf));
                } while (rcx9 != 0x7cf);
                ++eax6;
            } while (eax6 != 0x1f4);
            if (ebp25 < 43) 
                goto 0x1f0;
            if (**r14_26 != fputc) 
                goto "???";
            rax27 = g210;
            rcx28 = *rax27;
            fun_22c(0x21a, 22, 1, rcx28);
        }
    }
}

