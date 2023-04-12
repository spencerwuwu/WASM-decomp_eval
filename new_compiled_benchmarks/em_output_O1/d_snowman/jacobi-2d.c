
void fun_202(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx);

void fun_1fa(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t r14_5;
    int64_t v6;

    fun_202(r14_5, rsi, rdx, rcx);
    goto v6;
}

void fun_2ac();

void fputc(int32_t edi, int64_t rsi);

void fun_2dc(int64_t rdi, int64_t rsi, int64_t rdx);

void fun_2f5(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx);

void fun_28b() {
    int32_t* rdi1;
    int32_t* rsi2;
    int32_t* r15_3;
    int64_t r12_4;
    int64_t r13_5;
    int64_t rbp6;
    int32_t* r15_7;
    int64_t r15_8;
    int64_t r15_9;
    int64_t rbx10;
    int64_t r14_11;
    int64_t v12;

    while (1) {
        *rdi1 = *rsi2;
        rdi1 = r15_3;
        rsi2 = reinterpret_cast<int32_t*>(0x2a5);
        fun_2ac();
        ++r12_4;
        if (r12_4 == 0x514) {
            ++r13_5;
            if (r13_5 == 0x514) 
                break;
            rbp6 = r13_5 * 0x514;
            *reinterpret_cast<int32_t*>(&r12_4) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_4) + 4) = reinterpret_cast<int32_t>(fputc);
        }
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r12_4 + rbp6) * 0xcccccccd) > 0xccccccc) 
            continue;
        *reinterpret_cast<int32_t*>(&rdi1) = 10;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi1) + 4) = reinterpret_cast<int32_t>(fputc);
        rsi2 = r15_7;
        fun_28b();
    }
    fun_2dc(r15_8, 0x2cb, 0x2d2);
    fun_2f5(0x2e3, 22, 1, r15_9);
    fun_1fa(rbx10, 22, 1, r15_9);
    fun_202(r14_11, 22, 1, r15_9);
    goto v12;
}

void fun_2ac() {
    int64_t r12_1;
    int64_t r13_2;
    int64_t rbp3;
    int32_t* rdi4;
    int32_t* rsi5;
    int32_t* r15_6;
    int32_t* r15_7;
    int64_t r15_8;
    int64_t r15_9;
    int64_t rbx10;
    int64_t r14_11;
    int64_t v12;

    while (1) {
        ++r12_1;
        if (r12_1 == 0x514) {
            ++r13_2;
            if (r13_2 == 0x514) 
                break;
            rbp3 = r13_2 * 0x514;
            *reinterpret_cast<int32_t*>(&r12_1) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_1) + 4) = reinterpret_cast<int32_t>(fputc);
        }
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r12_1 + rbp3) * 0xcccccccd) <= 0xccccccc) {
            *reinterpret_cast<int32_t*>(&rdi4) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi4) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi5 = r15_6;
            fun_28b();
        }
        *rdi4 = *rsi5;
        rdi4 = r15_7;
        rsi5 = reinterpret_cast<int32_t*>(0x2a5);
        fun_2ac();
    }
    fun_2dc(r15_8, 0x2cb, 0x2d2);
    fun_2f5(0x2e3, 22, 1, r15_9);
    fun_1fa(rbx10, 22, 1, r15_9);
    fun_202(r14_11, 22, 1, r15_9);
    goto v12;
}

void fun_2dc(int64_t rdi, int64_t rsi, int64_t rdx) {
    int64_t r15_4;
    int64_t rbx5;
    int64_t r14_6;
    int64_t v7;

    fun_2f5(0x2e3, 22, 1, r15_4);
    fun_1fa(rbx5, 22, 1, r15_4);
    fun_202(r14_6, 22, 1, r15_4);
    goto v7;
}

void fun_251();

void fun_236(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int32_t* rsi5;
    int64_t r13_6;
    int32_t* rdi7;
    int32_t* r15_8;
    int64_t rbp9;
    int64_t r12_10;
    int32_t* r15_11;
    int32_t* r15_12;
    int64_t r15_13;
    int64_t r15_14;
    int64_t rbx15;
    int64_t r14_16;
    int64_t v17;

    rsi5 = reinterpret_cast<int32_t*>(0x23d);
    *reinterpret_cast<int32_t*>(&r13_6) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_6) + 4) = reinterpret_cast<int32_t>(fputc);
    rdi7 = r15_8;
    fun_251();
    do {
        rbp9 = r13_6 * 0x514;
        *reinterpret_cast<int32_t*>(&r12_10) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_10) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r12_10 + rbp9) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi7) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi7) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi5 = r15_11;
                fun_28b();
            }
            *rdi7 = *rsi5;
            rdi7 = r15_12;
            rsi5 = reinterpret_cast<int32_t*>(0x2a5);
            fun_2ac();
            ++r12_10;
        } while (r12_10 != 0x514);
        ++r13_6;
    } while (r13_6 != 0x514);
    fun_2dc(r15_13, 0x2cb, 0x2d2);
    fun_2f5(0x2e3, 22, 1, r15_14);
    fun_1fa(rbx15, 22, 1, r15_14);
    fun_202(r14_16, 22, 1, r15_14);
    goto v17;
}

void fun_202(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t v5;

    goto v5;
}

void fun_2f5(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t rbx5;
    int64_t r14_6;
    int64_t v7;

    fun_1fa(rbx5, rsi, rdx, rcx);
    fun_202(r14_6, rsi, rdx, rcx);
    goto v7;
}

void fun_251() {
    int64_t rbp1;
    int64_t r13_2;
    int64_t r12_3;
    int32_t* rdi4;
    int32_t* rsi5;
    int32_t* r15_6;
    int32_t* r15_7;
    int64_t r15_8;
    int64_t r15_9;
    int64_t rbx10;
    int64_t r14_11;
    int64_t v12;

    do {
        rbp1 = r13_2 * 0x514;
        *reinterpret_cast<int32_t*>(&r12_3) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_3) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r12_3 + rbp1) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi4) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi4) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi5 = r15_6;
                fun_28b();
            }
            *rdi4 = *rsi5;
            rdi4 = r15_7;
            rsi5 = reinterpret_cast<int32_t*>(0x2a5);
            fun_2ac();
            ++r12_3;
        } while (r12_3 != 0x514);
        ++r13_2;
    } while (r13_2 != 0x514);
    fun_2dc(r15_8, 0x2cb, 0x2d2);
    fun_2f5(0x2e3, 22, 1, r15_9);
    fun_1fa(rbx10, 22, 1, r15_9);
    fun_202(r14_11, 22, 1, r15_9);
    goto v12;
}

void fputc(int32_t edi, int64_t rsi) {
}

void fun_90(int32_t* rdi, int32_t* rsi, int64_t rdx) {
    __asm__("mulsd xmm5, xmm3");
    __asm__("addsd xmm5, xmm2");
    __asm__("divsd xmm5, xmm1");
    *rdi = *rsi;
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

int64_t* g21a = reinterpret_cast<int64_t*>(0x3d8d48388b4c);

void fun_ac(int32_t* rdi, int32_t* rsi) {
    signed char* rax3;
    signed char* rax4;
    signed char al5;
    signed char* rax6;
    int64_t rax7;
    int32_t eax8;
    struct s0* rdx9;
    struct s0* rsi10;
    struct s1* rdi11;
    int32_t* rdi12;
    struct s2* rsi13;
    struct s1* r8_14;
    int64_t rcx15;
    int64_t rdx16;
    struct s3* rsi17;
    struct s4* rdi18;
    int32_t* rdi19;
    struct s5* rsi20;
    struct s4* r8_21;
    int32_t ebp22;
    signed char** r15_23;
    int64_t* rax24;
    int64_t rcx25;

    *rax3 = reinterpret_cast<signed char>(*rax4 + al5);
    if (reinterpret_cast<int1_t>(*rax6 == fputc)) {
        if (rax7 + 1 == 0x514) {
            eax8 = reinterpret_cast<int32_t>(fputc);
            *rdi = *rsi;
            do {
                *reinterpret_cast<int32_t*>(&rdx9) = 1;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx9) + 4) = reinterpret_cast<int32_t>(fputc);
                do {
                    rsi10 = reinterpret_cast<struct s0*>(reinterpret_cast<int64_t>(rdx9) + 1);
                    *reinterpret_cast<int32_t*>(&rdi11) = 1;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi11) + 4) = reinterpret_cast<int32_t>(fputc);
                    do {
                        rdi11->f0 = rsi10->f0;
                        rdi12 = &rdi11->f4;
                        rsi13 = reinterpret_cast<struct s2*>(&rsi10->f4);
                        __asm__("addsd xmm1, [r9+rdi*8-0x8]");
                        __asm__("addsd xmm1, [r9+rdi*8+0x8]");
                        __asm__("addsd xmm1, [r9+rdi*8]");
                        __asm__("addsd xmm1, [r9+rdi*8]");
                        __asm__("mulsd xmm1, xmm0");
                        *rdi12 = rsi13->f0;
                        rsi10 = reinterpret_cast<struct s0*>(&rsi13->f4);
                        r8_14 = reinterpret_cast<struct s1*>(reinterpret_cast<int64_t>(rdi12 + 1) + 1);
                        rdi11 = r8_14;
                    } while (!reinterpret_cast<int1_t>(r8_14 == 0x513));
                    *reinterpret_cast<int32_t*>(&rcx15) = 1;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx15) + 4) = reinterpret_cast<int32_t>(fputc);
                    rdx9 = rsi10;
                } while (!reinterpret_cast<int1_t>(rsi10 == 0x513));
                do {
                    rdx16 = rcx15 + 1;
                    rsi17 = reinterpret_cast<struct s3*>(rcx15 - 1);
                    *reinterpret_cast<int32_t*>(&rdi18) = 1;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi18) + 4) = reinterpret_cast<int32_t>(fputc);
                    do {
                        rdi18->f0 = rsi17->f0;
                        rdi19 = &rdi18->f4;
                        rsi20 = reinterpret_cast<struct s5*>(&rsi17->f4);
                        __asm__("addsd xmm1, [r9+rdi*8-0x8]");
                        __asm__("addsd xmm1, [r9+rdi*8+0x8]");
                        __asm__("addsd xmm1, [r9+rdi*8]");
                        __asm__("addsd xmm1, [r9+rdi*8]");
                        __asm__("mulsd xmm1, xmm0");
                        *rdi19 = rsi20->f0;
                        rsi17 = reinterpret_cast<struct s3*>(&rsi20->f4);
                        r8_21 = reinterpret_cast<struct s4*>(reinterpret_cast<int64_t>(rdi19 + 1) + 1);
                        rdi18 = r8_21;
                    } while (!reinterpret_cast<int1_t>(r8_21 == 0x513));
                    rcx15 = rdx16;
                } while (rdx16 != 0x513);
                ++eax8;
            } while (eax8 != 0x1f4);
            if (ebp22 < 43) 
                goto 0x1f2;
            if (**r15_23 != fputc) 
                goto "???";
            rax24 = g21a;
            rcx25 = *rax24;
            fun_236(0x224, 22, 1, rcx25);
        }
    }
}

