
struct s0 {
    signed char[2496] pad2496;
    int32_t f9c0;
};

void fun_329(int64_t rdi, struct s0* rsi, int32_t* rdx);

void fputc(int32_t edi);

int64_t* g365 = reinterpret_cast<int64_t*>(0x3d8d48388b4c);

void fun_381(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx);

void fun_399(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx);

void fun_3d8(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx);

void fun_3f9(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx);

void fun_430(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx);

void fun_449(int64_t rdi, struct s0* rsi, int32_t* rdx, int64_t rcx);

void fun_33e(struct s0* rdi, struct s0* rsi, int32_t* rdx, int64_t rcx);

void fun_348(int32_t* rdi, struct s0* rsi, int32_t* rdx, int64_t rcx);

void fun_319(int32_t* rdi) {
    struct s0* rsi2;
    struct s0* rbx3;
    int32_t* rdx4;
    int32_t* r14_5;
    int32_t ebp6;
    signed char** r15_7;
    struct s0* v8;
    struct s0* rbx9;
    int64_t* rax10;
    int64_t r15_11;
    int64_t rcx12;
    int64_t rdx13;
    int32_t ebp14;
    int64_t r14_15;
    int32_t r12d16;
    int64_t r13_17;
    int32_t ebx18;
    int32_t* v19;
    int64_t rcx20;
    struct s0* rbx21;
    int32_t* v22;
    int64_t v23;

    rsi2 = rbx3;
    rdx4 = r14_5;
    fun_329(0x9c4, rsi2, rdx4);
    if (ebp6 >= 43 && **r15_7 == fputc) {
        v8 = rbx9;
        rax10 = g365;
        r15_11 = *rax10;
        rcx12 = r15_11;
        fun_381(0x36f, 22, 1, rcx12);
        rdx13 = 0x38f;
        fun_399(r15_11, 0x388, 0x38f, rcx12);
        ebp14 = 0x9c4;
        *reinterpret_cast<int32_t*>(&r14_15) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_15) + 4) = reinterpret_cast<int32_t>(fputc);
        r12d16 = reinterpret_cast<int32_t>(fputc);
        do {
            r13_17 = r14_15;
            ebx18 = r12d16;
            do {
                __asm__("ror eax, 0x2");
                if (reinterpret_cast<uint32_t>(ebx18 * 0xcccccccd + 0x19999998) <= 0xccccccc) {
                    fun_3d8(10, r15_11, rdx13, rcx12);
                }
                *reinterpret_cast<int32_t*>(&rdx13) = (v19 + r14_15 * 0x9c4)[r13_17];
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx13) + 4) = reinterpret_cast<int32_t>(fputc);
                fun_3f9(r15_11, 0x3f2, rdx13, rcx12);
                ++ebx18;
                ++r13_17;
            } while (r13_17 != 0x9c4);
            r12d16 = r12d16 + ebp14;
            ++r14_15;
            --ebp14;
        } while (r14_15 != 0x9c4);
        fun_430(r15_11, 0x41f, 0x426, rcx12);
        *reinterpret_cast<int32_t*>(&rsi2) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi2) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx4) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx4) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx20 = r15_11;
        fun_449(0x437, 22, 1, rcx20);
        rbx21 = v8;
    }
    fun_33e(rbx21, rsi2, rdx4, rcx20);
    fun_348(v22, rsi2, rdx4, rcx20);
    goto v23;
}

void fun_33e(struct s0* rdi, struct s0* rsi, int32_t* rdx, int64_t rcx) {
    int32_t* v5;
    int64_t v6;

    fun_348(v5, rsi, rdx, rcx);
    goto v6;
}

void fun_3d8(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t rdx5;
    int64_t r14_6;
    int32_t* v7;
    int64_t r13_8;
    int64_t r15_9;
    int32_t ebx10;
    int32_t r12d11;
    int32_t ebp12;
    int64_t r15_13;
    int64_t r15_14;
    int64_t r15_15;
    struct s0* v16;
    int32_t* v17;
    int64_t v18;

    while (1) {
        *reinterpret_cast<int32_t*>(&rdx5) = (v7 + r14_6 * 0x9c4)[r13_8];
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx5) + 4) = reinterpret_cast<int32_t>(fputc);
        fun_3f9(r15_9, 0x3f2, rdx5, rcx);
        ++ebx10;
        ++r13_8;
        if (r13_8 == 0x9c4) {
            r12d11 = r12d11 + ebp12;
            ++r14_6;
            --ebp12;
            if (r14_6 == 0x9c4) 
                break;
            r13_8 = r14_6;
            ebx10 = r12d11;
        }
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(ebx10 * 0xcccccccd + 0x19999998) > 0xccccccc) 
            continue;
        fun_3d8(10, r15_13, rdx5, rcx);
    }
    fun_430(r15_14, 0x41f, 0x426, rcx);
    fun_449(0x437, 22, 1, r15_15);
    fun_33e(v16, 22, 1, r15_15);
    fun_348(v17, 22, 1, r15_15);
    goto v18;
}

void fun_430(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t r15_5;
    struct s0* v6;
    int32_t* v7;
    int64_t v8;

    fun_449(0x437, 22, 1, r15_5);
    fun_33e(v6, 22, 1, r15_5);
    fun_348(v7, 22, 1, r15_5);
    goto v8;
}

void fun_329(int64_t rdi, struct s0* rsi, int32_t* rdx) {
    int32_t ebp4;
    signed char** r15_5;
    struct s0* v6;
    struct s0* rbx7;
    int64_t* rax8;
    int64_t r15_9;
    int64_t rcx10;
    int64_t rdx11;
    int32_t ebp12;
    int64_t r14_13;
    int32_t r12d14;
    int64_t r13_15;
    int32_t ebx16;
    int32_t* v17;
    int64_t rcx18;
    struct s0* rbx19;
    int32_t* v20;
    int64_t v21;

    if (ebp4 >= 43 && **r15_5 == fputc) {
        v6 = rbx7;
        rax8 = g365;
        r15_9 = *rax8;
        rcx10 = r15_9;
        fun_381(0x36f, 22, 1, rcx10);
        rdx11 = 0x38f;
        fun_399(r15_9, 0x388, 0x38f, rcx10);
        ebp12 = 0x9c4;
        *reinterpret_cast<int32_t*>(&r14_13) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_13) + 4) = reinterpret_cast<int32_t>(fputc);
        r12d14 = reinterpret_cast<int32_t>(fputc);
        do {
            r13_15 = r14_13;
            ebx16 = r12d14;
            do {
                __asm__("ror eax, 0x2");
                if (reinterpret_cast<uint32_t>(ebx16 * 0xcccccccd + 0x19999998) <= 0xccccccc) {
                    fun_3d8(10, r15_9, rdx11, rcx10);
                }
                *reinterpret_cast<int32_t*>(&rdx11) = (v17 + r14_13 * 0x9c4)[r13_15];
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx11) + 4) = reinterpret_cast<int32_t>(fputc);
                fun_3f9(r15_9, 0x3f2, rdx11, rcx10);
                ++ebx16;
                ++r13_15;
            } while (r13_15 != 0x9c4);
            r12d14 = r12d14 + ebp12;
            ++r14_13;
            --ebp12;
        } while (r14_13 != 0x9c4);
        fun_430(r15_9, 0x41f, 0x426, rcx10);
        *reinterpret_cast<int32_t*>(&rsi) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx18 = r15_9;
        fun_449(0x437, 22, 1, rcx18);
        rbx19 = v6;
    }
    fun_33e(rbx19, rsi, rdx, rcx18);
    fun_348(v20, rsi, rdx, rcx18);
    goto v21;
}

void fun_381(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t rdx5;
    int64_t r15_6;
    int32_t ebp7;
    int64_t r14_8;
    int32_t r12d9;
    int64_t r13_10;
    int32_t ebx11;
    int64_t r15_12;
    int32_t* v13;
    int64_t r15_14;
    int64_t r15_15;
    int64_t r15_16;
    struct s0* v17;
    int32_t* v18;
    int64_t v19;

    rdx5 = 0x38f;
    fun_399(r15_6, 0x388, 0x38f, rcx);
    ebp7 = 0x9c4;
    *reinterpret_cast<int32_t*>(&r14_8) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_8) + 4) = reinterpret_cast<int32_t>(fputc);
    r12d9 = reinterpret_cast<int32_t>(fputc);
    do {
        r13_10 = r14_8;
        ebx11 = r12d9;
        do {
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>(ebx11 * 0xcccccccd + 0x19999998) <= 0xccccccc) {
                fun_3d8(10, r15_12, rdx5, rcx);
            }
            *reinterpret_cast<int32_t*>(&rdx5) = (v13 + r14_8 * 0x9c4)[r13_10];
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx5) + 4) = reinterpret_cast<int32_t>(fputc);
            fun_3f9(r15_14, 0x3f2, rdx5, rcx);
            ++ebx11;
            ++r13_10;
        } while (r13_10 != 0x9c4);
        r12d9 = r12d9 + ebp7;
        ++r14_8;
        --ebp7;
    } while (r14_8 != 0x9c4);
    fun_430(r15_15, 0x41f, 0x426, rcx);
    fun_449(0x437, 22, 1, r15_16);
    fun_33e(v17, 22, 1, r15_16);
    fun_348(v18, 22, 1, r15_16);
    goto v19;
}

void fun_348(int32_t* rdi, struct s0* rsi, int32_t* rdx, int64_t rcx) {
    int64_t v5;

    goto v5;
}

void fun_3f9(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int32_t ebx5;
    int64_t r13_6;
    int32_t r12d7;
    int32_t tmp32_8;
    int64_t r14_9;
    int32_t ebp10;
    int64_t r15_11;
    int64_t rdx12;
    int32_t* v13;
    int64_t r15_14;
    int64_t r15_15;
    int64_t r15_16;
    struct s0* v17;
    int32_t* v18;
    int64_t v19;

    while (1) {
        ++ebx5;
        ++r13_6;
        if (r13_6 == 0x9c4) {
            r12d7 = tmp32_8;
            ++r14_9;
            --ebp10;
            if (r14_9 == 0x9c4) 
                break;
            r13_6 = r14_9;
            ebx5 = r12d7;
        }
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(ebx5 * 0xcccccccd + 0x19999998) <= 0xccccccc) {
            fun_3d8(10, r15_11, rdx, rcx);
        }
        *reinterpret_cast<int32_t*>(&rdx12) = (v13 + r14_9 * 0x9c4)[r13_6];
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx12) + 4) = reinterpret_cast<int32_t>(fputc);
        fun_3f9(r15_14, 0x3f2, rdx12, rcx);
    }
    fun_430(r15_15, 0x41f, 0x426, rcx);
    fun_449(0x437, 22, 1, r15_16);
    fun_33e(v17, 22, 1, r15_16);
    fun_348(v18, 22, 1, r15_16);
    goto v19;
}

void fun_449(int64_t rdi, struct s0* rsi, int32_t* rdx, int64_t rcx) {
    struct s0* v5;
    int32_t* v6;
    int64_t v7;

    fun_33e(v5, rsi, rdx, rcx);
    fun_348(v6, rsi, rdx, rcx);
    goto v7;
}

int32_t* fun_1d4(int64_t rdi, int64_t rsi);

void fun_1c2(int64_t rdi, int64_t rsi) {
    struct s0* rbx3;
    struct s0* rax4;
    int32_t* rax5;
    int32_t* v6;
    int64_t rax7;
    struct s0* rsi8;
    int32_t* rdx9;
    int32_t ebp10;
    signed char** r15_11;
    struct s0* v12;
    int64_t* rax13;
    int64_t r15_14;
    int64_t rcx15;
    int64_t rdx16;
    int32_t ebp17;
    int64_t r14_18;
    int32_t r12d19;
    int64_t r13_20;
    int32_t ebx21;
    int64_t rcx22;
    int64_t v23;

    rbx3 = rax4;
    rax5 = fun_1d4(0x5f5e10, 4);
    v6 = rax5;
    __asm__("movdqa xmm0, [rip+0x0]");
    __asm__("movdqa xmm1, [rip+0x0]");
    __asm__("movdqa xmm2, [rip+0x0]");
    __asm__("movdqa xmm3, [rip+0x0]");
    __asm__("movdqa xmm4, [rip+0x0]");
    __asm__("movdqa xmm5, [rip+0x0]");
    __asm__("movdqa xmm6, [rip+0x0]");
    __asm__("movdqa xmm7, [rip+0x0]");
    *reinterpret_cast<int32_t*>(&rax7) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax7) + 4) = reinterpret_cast<int32_t>(fputc);
    __asm__("movdqa xmm8, [rip+0x0]");
    __asm__("pcmpeqd xmm9, xmm9");
    __asm__("movdqa xmm10, [rip+0x0]");
    __asm__("movdqa xmm11, [rip+0x0]");
    do {
        __asm__("movdqa xmm12, xmm7");
        __asm__("pand xmm12, xmm8");
        __asm__("movdqa xmm13, xmm6");
        __asm__("pand xmm13, xmm8");
        __asm__("packuswb xmm12, xmm13");
        __asm__("movdqa xmm13, xmm5");
        __asm__("pand xmm13, xmm8");
        __asm__("movdqa xmm14, xmm4");
        __asm__("pand xmm14, xmm8");
        __asm__("packuswb xmm13, xmm14");
        __asm__("packuswb xmm12, xmm13");
        __asm__("movdqa xmm13, xmm3");
        __asm__("pand xmm13, xmm8");
        __asm__("movdqa xmm14, xmm2");
        __asm__("pand xmm14, xmm8");
        __asm__("packuswb xmm13, xmm14");
        __asm__("movdqa xmm14, xmm1");
        __asm__("pand xmm14, xmm8");
        __asm__("movdqa xmm15, xmm0");
        __asm__("pand xmm15, xmm8");
        __asm__("packuswb xmm14, xmm15");
        __asm__("packuswb xmm13, xmm14");
        __asm__("packuswb xmm12, xmm13");
        __asm__("psubb xmm12, xmm9");
        __asm__("pand xmm12, xmm10");
        __asm__("movdqu [rbx+rax], xmm12");
        rax7 = rax7 + 16;
        __asm__("paddq xmm7, xmm11");
        __asm__("paddq xmm6, xmm11");
        __asm__("paddq xmm5, xmm11");
        __asm__("paddq xmm4, xmm11");
        __asm__("paddq xmm3, xmm11");
        __asm__("paddq xmm2, xmm11");
        __asm__("paddq xmm1, xmm11");
        __asm__("paddq xmm0, xmm11");
    } while (rax7 != 0x9c0);
    rbx3->f9c0 = 0x30201;
    fun_319(v6);
    rsi8 = rbx3;
    rdx9 = v6;
    fun_329(0x9c4, rsi8, rdx9);
    if (ebp10 >= 43 && **r15_11 == fputc) {
        v12 = rbx3;
        rax13 = g365;
        r15_14 = *rax13;
        rcx15 = r15_14;
        fun_381(0x36f, 22, 1, rcx15);
        rdx16 = 0x38f;
        fun_399(r15_14, 0x388, 0x38f, rcx15);
        ebp17 = 0x9c4;
        *reinterpret_cast<int32_t*>(&r14_18) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_18) + 4) = reinterpret_cast<int32_t>(fputc);
        r12d19 = reinterpret_cast<int32_t>(fputc);
        do {
            r13_20 = r14_18;
            ebx21 = r12d19;
            do {
                __asm__("ror eax, 0x2");
                if (reinterpret_cast<uint32_t>(ebx21 * 0xcccccccd + 0x19999998) <= 0xccccccc) {
                    fun_3d8(10, r15_14, rdx16, rcx15);
                }
                *reinterpret_cast<int32_t*>(&rdx16) = (v6 + r14_18 * 0x9c4)[r13_20];
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx16) + 4) = reinterpret_cast<int32_t>(fputc);
                fun_3f9(r15_14, 0x3f2, rdx16, rcx15);
                ++ebx21;
                ++r13_20;
            } while (r13_20 != 0x9c4);
            r12d19 = r12d19 + ebp17;
            ++r14_18;
            --ebp17;
        } while (r14_18 != 0x9c4);
        fun_430(r15_14, 0x41f, 0x426, rcx15);
        *reinterpret_cast<int32_t*>(&rsi8) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi8) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx9) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx9) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx22 = r15_14;
        fun_449(0x437, 22, 1, rcx22);
        rbx3 = v12;
    }
    fun_33e(rbx3, rsi8, rdx9, rcx22);
    fun_348(v6, rsi8, rdx9, rcx22);
    goto v23;
}

void fun_399(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int32_t ebp5;
    int64_t r14_6;
    int32_t r12d7;
    int64_t r13_8;
    int32_t ebx9;
    int64_t r15_10;
    int32_t* v11;
    int64_t r15_12;
    int64_t r15_13;
    int64_t r15_14;
    struct s0* v15;
    int32_t* v16;
    int64_t v17;

    ebp5 = 0x9c4;
    *reinterpret_cast<int32_t*>(&r14_6) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_6) + 4) = reinterpret_cast<int32_t>(fputc);
    r12d7 = reinterpret_cast<int32_t>(fputc);
    do {
        r13_8 = r14_6;
        ebx9 = r12d7;
        do {
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>(ebx9 * 0xcccccccd + 0x19999998) <= 0xccccccc) {
                fun_3d8(10, r15_10, rdx, rcx);
            }
            *reinterpret_cast<int32_t*>(&rdx) = (v11 + r14_6 * 0x9c4)[r13_8];
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx) + 4) = reinterpret_cast<int32_t>(fputc);
            fun_3f9(r15_12, 0x3f2, rdx, rcx);
            ++ebx9;
            ++r13_8;
        } while (r13_8 != 0x9c4);
        r12d7 = r12d7 + ebp5;
        ++r14_6;
        --ebp5;
    } while (r14_6 != 0x9c4);
    fun_430(r15_13, 0x41f, 0x426, rcx);
    fun_449(0x437, 22, 1, r15_14);
    fun_33e(v15, 22, 1, r15_14);
    fun_348(v16, 22, 1, r15_14);
    goto v17;
}

struct s1 {
    signed char[2496] pad2496;
    int32_t f9c0;
};

int32_t* fun_1d4(int64_t rdi, int64_t rsi) {
    int32_t* v3;
    int32_t* rax4;
    int64_t rax5;
    struct s1* rbx6;
    struct s0* rsi7;
    struct s0* rbx8;
    int32_t* rdx9;
    int32_t ebp10;
    signed char** r15_11;
    struct s0* v12;
    struct s0* rbx13;
    int64_t* rax14;
    int64_t r15_15;
    int64_t rcx16;
    int64_t rdx17;
    int32_t ebp18;
    int64_t r14_19;
    int32_t r12d20;
    int64_t r13_21;
    int32_t ebx22;
    int64_t rcx23;
    struct s0* rbx24;
    int64_t v25;

    v3 = rax4;
    __asm__("movdqa xmm0, [rip+0x0]");
    __asm__("movdqa xmm1, [rip+0x0]");
    __asm__("movdqa xmm2, [rip+0x0]");
    __asm__("movdqa xmm3, [rip+0x0]");
    __asm__("movdqa xmm4, [rip+0x0]");
    __asm__("movdqa xmm5, [rip+0x0]");
    __asm__("movdqa xmm6, [rip+0x0]");
    __asm__("movdqa xmm7, [rip+0x0]");
    *reinterpret_cast<int32_t*>(&rax5) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax5) + 4) = reinterpret_cast<int32_t>(fputc);
    __asm__("movdqa xmm8, [rip+0x0]");
    __asm__("pcmpeqd xmm9, xmm9");
    __asm__("movdqa xmm10, [rip+0x0]");
    __asm__("movdqa xmm11, [rip+0x0]");
    do {
        __asm__("movdqa xmm12, xmm7");
        __asm__("pand xmm12, xmm8");
        __asm__("movdqa xmm13, xmm6");
        __asm__("pand xmm13, xmm8");
        __asm__("packuswb xmm12, xmm13");
        __asm__("movdqa xmm13, xmm5");
        __asm__("pand xmm13, xmm8");
        __asm__("movdqa xmm14, xmm4");
        __asm__("pand xmm14, xmm8");
        __asm__("packuswb xmm13, xmm14");
        __asm__("packuswb xmm12, xmm13");
        __asm__("movdqa xmm13, xmm3");
        __asm__("pand xmm13, xmm8");
        __asm__("movdqa xmm14, xmm2");
        __asm__("pand xmm14, xmm8");
        __asm__("packuswb xmm13, xmm14");
        __asm__("movdqa xmm14, xmm1");
        __asm__("pand xmm14, xmm8");
        __asm__("movdqa xmm15, xmm0");
        __asm__("pand xmm15, xmm8");
        __asm__("packuswb xmm14, xmm15");
        __asm__("packuswb xmm13, xmm14");
        __asm__("packuswb xmm12, xmm13");
        __asm__("psubb xmm12, xmm9");
        __asm__("pand xmm12, xmm10");
        __asm__("movdqu [rbx+rax], xmm12");
        rax5 = rax5 + 16;
        __asm__("paddq xmm7, xmm11");
        __asm__("paddq xmm6, xmm11");
        __asm__("paddq xmm5, xmm11");
        __asm__("paddq xmm4, xmm11");
        __asm__("paddq xmm3, xmm11");
        __asm__("paddq xmm2, xmm11");
        __asm__("paddq xmm1, xmm11");
        __asm__("paddq xmm0, xmm11");
    } while (rax5 != 0x9c0);
    rbx6->f9c0 = 0x30201;
    fun_319(v3);
    rsi7 = rbx8;
    rdx9 = v3;
    fun_329(0x9c4, rsi7, rdx9);
    if (ebp10 >= 43 && **r15_11 == fputc) {
        v12 = rbx13;
        rax14 = g365;
        r15_15 = *rax14;
        rcx16 = r15_15;
        fun_381(0x36f, 22, 1, rcx16);
        rdx17 = 0x38f;
        fun_399(r15_15, 0x388, 0x38f, rcx16);
        ebp18 = 0x9c4;
        *reinterpret_cast<int32_t*>(&r14_19) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_19) + 4) = reinterpret_cast<int32_t>(fputc);
        r12d20 = reinterpret_cast<int32_t>(fputc);
        do {
            r13_21 = r14_19;
            ebx22 = r12d20;
            do {
                __asm__("ror eax, 0x2");
                if (reinterpret_cast<uint32_t>(ebx22 * 0xcccccccd + 0x19999998) <= 0xccccccc) {
                    fun_3d8(10, r15_15, rdx17, rcx16);
                }
                *reinterpret_cast<int32_t*>(&rdx17) = (v3 + r14_19 * 0x9c4)[r13_21];
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx17) + 4) = reinterpret_cast<int32_t>(fputc);
                fun_3f9(r15_15, 0x3f2, rdx17, rcx16);
                ++ebx22;
                ++r13_21;
            } while (r13_21 != 0x9c4);
            r12d20 = r12d20 + ebp18;
            ++r14_19;
            --ebp18;
        } while (r14_19 != 0x9c4);
        fun_430(r15_15, 0x41f, 0x426, rcx16);
        *reinterpret_cast<int32_t*>(&rsi7) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi7) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx9) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx9) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx23 = r15_15;
        fun_449(0x437, 22, 1, rcx23);
        rbx24 = v12;
    }
    fun_33e(rbx24, rsi7, rdx9, rcx23);
    fun_348(v3, rsi7, rdx9, rcx23);
    goto v25;
}

void fputc(int32_t edi) {
}

void fun_74() {
    int64_t rax1;
    int64_t r14_2;
    int32_t r13d3;
    int32_t* r9_4;
    int32_t* r9_5;
    int64_t r12_6;
    int32_t* r9_7;
    int64_t r12_8;
    int32_t* r10_9;
    int64_t r8_10;
    int32_t* rdx11;
    int32_t r13d12;
    int64_t r14_13;
    int32_t* r9_14;
    int64_t r14_15;
    int32_t* r9_16;
    int64_t r14_17;
    int32_t ebp18;
    int64_t r8_19;
    int64_t r14_20;
    int32_t eax21;
    int64_t rsi22;
    int64_t r12_23;
    int64_t rsi24;
    int64_t rcx25;
    int32_t* r9_26;
    int64_t r12_27;
    int32_t* r15_28;
    int64_t r8_29;
    int64_t r14_30;
    int32_t* r15_31;
    int32_t* r9_32;
    int64_t r14_33;
    int32_t ebp34;
    int32_t* r9_35;
    int64_t r14_36;
    unsigned char bl37;
    int32_t eax38;
    int64_t r11_39;
    int32_t* rdx40;
    int64_t r14_41;
    int32_t* v42;
    int64_t r12_43;
    int64_t r11_44;
    int32_t ebx45;
    int64_t rax46;
    int64_t rdx47;
    int32_t r10d48;
    int64_t r14_49;
    int32_t* r9_50;
    int64_t r14_51;
    void* r9_52;
    int32_t r14d53;
    int64_t r8_54;
    int32_t ebx55;

    *reinterpret_cast<int32_t*>(&rax1) = static_cast<int32_t>(r14_2 - 1);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax1) + 4) = reinterpret_cast<int32_t>(fputc);
    r13d3 = r9_4[rax1];
    if (r9_5[r12_6] > r13d3) {
        r13d3 = r9_5[r12_6];
    }
    r9_7[r12_8] = r13d3;
    r10_9 = rdx11 + r8_10 * 0x9c4;
    r13d12 = r10_9[r14_13];
    if (r9_14[r14_15] > r13d12) {
        r13d12 = r9_14[r14_15];
    }
    r9_16[r14_17] = r13d12;
    ebp18 = r10_9[rax1];
    if (r8_19 < r14_20) {
        eax21 = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<unsigned char*>(&eax21) = reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(rsi22 + r12_23) + *reinterpret_cast<signed char*>(rsi24 + rcx25) == 3);
        ebp18 = ebp18 + eax21;
    }
    if (r9_26[r12_27] > ebp18) {
        ebp18 = r9_26[r12_27];
    }
    *r15_28 = ebp18;
    if (r8_29 >= r14_30) 
        goto addr_60_10;
    r15_31 = r9_32 + r14_33;
    ebp34 = r9_35[r14_36];
    if (reinterpret_cast<int1_t>((bl37 & 1) == fputc)) 
        goto addr_113_13;
    eax38 = (rdx40 + r11_39 * 0x9c4)[r14_41] + *v42;
    if (ebp34 <= eax38) {
        ebp34 = eax38;
    }
    *r15_31 = ebp34;
    r12_43 = r11_44;
    if (ebx45 == 1) {
        addr_60_10:
    }
    do {
        rax46 = r12_43 * 0x2710 + rdx47;
        r10d48 = *reinterpret_cast<int32_t*>(rax46 + r14_49 * 4 + 0x2710) + r9_50[r12_43];
        if (ebp34 > r10d48) {
            r10d48 = ebp34;
        }
        *r15_31 = r10d48;
        ebp34 = *reinterpret_cast<int32_t*>(rax46 + r14_51 * 4 + 0x4e20) + *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(r9_52) + r12_43 * 4 + 4);
        r12_43 = r12_43 + 2;
        if (r10d48 > ebp34) {
            ebp34 = r10d48;
        }
        *r15_31 = ebp34;
    } while (*reinterpret_cast<int32_t*>(&r12_43) != r14d53);
    goto addr_60_10;
    addr_113_13:
    r12_43 = r8_54;
    if (ebx55 == 1) {
        goto addr_60_10;
    }
}

void fun_e0() {
    int32_t r10d1;
    int64_t r8_2;
    int32_t* rdx3;
    int64_t r14_4;
    int32_t* r9_5;
    int64_t r14_6;
    int32_t* r9_7;
    int64_t r14_8;
    int64_t r8_9;
    int64_t r14_10;

    r10d1 = (rdx3 + r8_2 * 0x9c4)[r14_4];
    if (r9_5[r14_6] > r10d1) {
        r10d1 = r9_5[r14_6];
    }
    r9_7[r14_8] = r10d1;
    if (r8_9 >= r14_10) 
        goto 96; else 
        goto "???";
}

void fun_195() {
    int64_t v1;

    goto v1;
}

void submain(int32_t edi, int64_t rsi) {
    fun_1c2(0x9c4, 1);
}

