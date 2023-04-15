
struct s0 {
    int32_t f0;
    int32_t f4;
};

void fun_314(int64_t* rdi, struct s0* rsi, int64_t rdx, int32_t* rcx);

void fun_31c(int32_t* rdi, struct s0* rsi, int64_t rdx, int32_t* rcx);

void fun_30c(int64_t rdi, struct s0* rsi, int64_t rdx, int32_t* rcx) {
    int64_t* r14_5;
    int32_t* r15_6;
    int64_t v7;

    fun_314(r14_5, rsi, rdx, rcx);
    fun_31c(r15_6, rsi, rdx, rcx);
    goto v7;
}

void fun_400();

void fputc();

void fun_44e(int32_t* rdi, int64_t rsi, int64_t rdx);

void fun_467(int64_t rdi, struct s0* rsi, int64_t rdx, int32_t* rcx);

void fun_3cf() {
    int32_t* rdi1;
    int32_t* rsi2;
    int32_t* v3;
    int64_t r12_4;
    int64_t r13_5;
    int64_t r13_6;
    int64_t v7;
    int64_t v8;
    int64_t rbp9;
    int32_t* v10;
    int32_t* v11;
    int64_t rbx12;
    int64_t* r14_13;
    int32_t* r15_14;
    int64_t v15;

    while (1) {
        *rdi1 = *rsi2;
        rdi1 = v3;
        rsi2 = reinterpret_cast<int32_t*>(0x3f9);
        fun_400();
        ++r12_4;
        if (r12_4 == 0xa0) {
            ++r13_5;
            if (r13_5 == 0x8c) {
                r13_6 = v7 + 1;
                if (r13_6 == 0x96) 
                    break;
                v7 = r13_6;
                v8 = r13_6 * 0x5780;
                *reinterpret_cast<int32_t*>(&r13_5) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_5) + 4) = reinterpret_cast<int32_t>(fputc);
            }
            rbp9 = (r13_5 * 4 + r13_5 << 5) + v8;
            *reinterpret_cast<int32_t*>(&r12_4) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_4) + 4) = reinterpret_cast<int32_t>(fputc);
        }
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r12_4 + rbp9) * 0xcccccccd) > 0xccccccc) 
            continue;
        *reinterpret_cast<int32_t*>(&rdi1) = 10;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi1) + 4) = reinterpret_cast<int32_t>(fputc);
        rsi2 = v10;
        fun_3cf();
    }
    fun_44e(v11, 0x438, 0x43f);
    fun_467(0x455, 22, 1, v11);
    fun_30c(rbx12, 22, 1, v11);
    fun_314(r14_13, 22, 1, v11);
    fun_31c(r15_14, 22, 1, v11);
    goto v15;
}

void fun_400() {
    int64_t r12_1;
    int64_t r13_2;
    int64_t r13_3;
    int64_t v4;
    int64_t v5;
    int64_t rbp6;
    int32_t* rdi7;
    int32_t* rsi8;
    int32_t* v9;
    int32_t* v10;
    int32_t* v11;
    int64_t rbx12;
    int64_t* r14_13;
    int32_t* r15_14;
    int64_t v15;

    while (1) {
        ++r12_1;
        if (r12_1 == 0xa0) {
            ++r13_2;
            if (r13_2 == 0x8c) {
                r13_3 = v4 + 1;
                if (r13_3 == 0x96) 
                    break;
                v4 = r13_3;
                v5 = r13_3 * 0x5780;
                *reinterpret_cast<int32_t*>(&r13_2) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_2) + 4) = reinterpret_cast<int32_t>(fputc);
            }
            rbp6 = (r13_2 * 4 + r13_2 << 5) + v5;
            *reinterpret_cast<int32_t*>(&r12_1) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_1) + 4) = reinterpret_cast<int32_t>(fputc);
        }
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r12_1 + rbp6) * 0xcccccccd) <= 0xccccccc) {
            *reinterpret_cast<int32_t*>(&rdi7) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi7) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi8 = v9;
            fun_3cf();
        }
        *rdi7 = *rsi8;
        rdi7 = v10;
        rsi8 = reinterpret_cast<int32_t*>(0x3f9);
        fun_400();
    }
    fun_44e(v11, 0x438, 0x43f);
    fun_467(0x455, 22, 1, v11);
    fun_30c(rbx12, 22, 1, v11);
    fun_314(r14_13, 22, 1, v11);
    fun_31c(r15_14, 22, 1, v11);
    goto v15;
}

void fun_370() {
    int64_t v1;
    int64_t r13_2;
    int64_t v3;
    int64_t r13_4;
    int64_t rbp5;
    int64_t r12_6;
    int32_t* rdi7;
    int32_t* rsi8;
    int32_t* v9;
    int32_t* v10;
    int32_t* v11;
    int64_t rbx12;
    int64_t* r14_13;
    int32_t* r15_14;
    int64_t v15;

    do {
        v1 = r13_2;
        v3 = r13_2 * 0x5780;
        *reinterpret_cast<int32_t*>(&r13_4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_4) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rbp5 = (r13_4 * 4 + r13_4 << 5) + v3;
            *reinterpret_cast<int32_t*>(&r12_6) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_6) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("ror eax, 0x2");
                if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r12_6 + rbp5) * 0xcccccccd) <= 0xccccccc) {
                    *reinterpret_cast<int32_t*>(&rdi7) = 10;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi7) + 4) = reinterpret_cast<int32_t>(fputc);
                    rsi8 = v9;
                    fun_3cf();
                }
                *rdi7 = *rsi8;
                rdi7 = v10;
                rsi8 = reinterpret_cast<int32_t*>(0x3f9);
                fun_400();
                ++r12_6;
            } while (r12_6 != 0xa0);
            ++r13_4;
        } while (r13_4 != 0x8c);
        r13_2 = v1 + 1;
    } while (r13_2 != 0x96);
    fun_44e(v11, 0x438, 0x43f);
    fun_467(0x455, 22, 1, v11);
    fun_30c(rbx12, 22, 1, v11);
    fun_314(r14_13, 22, 1, v11);
    fun_31c(r15_14, 22, 1, v11);
    goto v15;
}

void fun_44e(int32_t* rdi, int64_t rsi, int64_t rdx) {
    int32_t* r12_4;
    int64_t rbx5;
    int64_t* r14_6;
    int32_t* r15_7;
    int64_t v8;

    fun_467(0x455, 22, 1, r12_4);
    fun_30c(rbx5, 22, 1, r12_4);
    fun_314(r14_6, 22, 1, r12_4);
    fun_31c(r15_7, 22, 1, r12_4);
    goto v8;
}

void fun_350(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int32_t* rsi5;
    int64_t r13_6;
    int32_t* v7;
    int32_t* r12_8;
    int32_t* rdi9;
    int32_t* r12_10;
    int64_t v11;
    int64_t v12;
    int64_t r13_13;
    int64_t rbp14;
    int64_t r12_15;
    int64_t rbx16;
    int64_t* r14_17;
    int32_t* r15_18;
    int64_t v19;

    rsi5 = reinterpret_cast<int32_t*>(0x357);
    *reinterpret_cast<int32_t*>(&r13_6) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_6) + 4) = reinterpret_cast<int32_t>(fputc);
    v7 = r12_8;
    rdi9 = r12_10;
    fun_370();
    do {
        v11 = r13_6;
        v12 = r13_6 * 0x5780;
        *reinterpret_cast<int32_t*>(&r13_13) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_13) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rbp14 = (r13_13 * 4 + r13_13 << 5) + v12;
            *reinterpret_cast<int32_t*>(&r12_15) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_15) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("ror eax, 0x2");
                if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r12_15 + rbp14) * 0xcccccccd) <= 0xccccccc) {
                    *reinterpret_cast<int32_t*>(&rdi9) = 10;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi9) + 4) = reinterpret_cast<int32_t>(fputc);
                    rsi5 = v7;
                    fun_3cf();
                }
                *rdi9 = *rsi5;
                rdi9 = v7;
                rsi5 = reinterpret_cast<int32_t*>(0x3f9);
                fun_400();
                ++r12_15;
            } while (r12_15 != 0xa0);
            ++r13_13;
        } while (r13_13 != 0x8c);
        r13_6 = v11 + 1;
    } while (r13_6 != 0x96);
    fun_44e(v7, 0x438, 0x43f);
    fun_467(0x455, 22, 1, v7);
    fun_30c(rbx16, 22, 1, v7);
    fun_314(r14_17, 22, 1, v7);
    fun_31c(r15_18, 22, 1, v7);
    goto v19;
}

void fun_314(int64_t* rdi, struct s0* rsi, int64_t rdx, int32_t* rcx) {
    int32_t* r15_5;
    int64_t v6;

    fun_31c(r15_5, rsi, rdx, rcx);
    goto v6;
}

void fun_467(int64_t rdi, struct s0* rsi, int64_t rdx, int32_t* rcx) {
    int64_t rbx5;
    int64_t* r14_6;
    int32_t* r15_7;
    int64_t v8;

    fun_30c(rbx5, rsi, rdx, rcx);
    fun_314(r14_6, rsi, rdx, rcx);
    fun_31c(r15_7, rsi, rdx, rcx);
    goto v8;
}

int64_t* fun_124(int64_t rdi, int64_t rsi);

int32_t* fun_136(int32_t* rdi, int32_t* rsi);

int32_t g6400;

int32_t g8 = 0xfff8553;

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

int32_t** g334 = reinterpret_cast<int32_t**>(0x3d8d48208b4c);

void fun_112(int64_t rdi, int64_t rsi) {
    int64_t rbx3;
    int64_t rax4;
    int64_t* rax5;
    int64_t* r14_6;
    int32_t* rax7;
    int32_t* r15_8;
    int64_t rcx9;
    int64_t rdx10;
    int32_t* rsi11;
    int32_t* rdi12;
    int64_t r8_13;
    int64_t rax14;
    int32_t* rsi15;
    int32_t* rcx16;
    struct s1* rsi17;
    int32_t* rdi18;
    int64_t rdx19;
    struct s2* rdi20;
    struct s3* rsi21;
    struct s0* rsi22;
    struct s2* rdi23;
    int32_t* rsi24;
    int32_t ebp25;
    signed char** r12_26;
    int32_t** rax27;
    int32_t* r12_28;
    int32_t* rsi29;
    int64_t r13_30;
    int32_t* v31;
    int32_t* rdi32;
    int64_t v33;
    int64_t v34;
    int64_t r13_35;
    int64_t rbp36;
    int64_t r12_37;
    int64_t v38;

    rbx3 = rax4;
    rax5 = fun_124(0xa0, 8);
    r14_6 = rax5;
    rax7 = fun_136(0x6400, 8);
    r15_8 = rax7;
    *reinterpret_cast<int32_t*>(&rcx9) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx9) + 4) = reinterpret_cast<int32_t>(fputc);
    g6400 = g8;
    *reinterpret_cast<int32_t*>(&rdx10) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx10) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        *reinterpret_cast<int32_t*>(&rsi11) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi11) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rdi12 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsi11) * rdx10);
            *reinterpret_cast<int32_t*>(&r8_13) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_13) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("xorps xmm1, xmm1");
                __asm__("cvtsi2sd xmm1, r9d");
                __asm__("divsd xmm1, xmm0");
                *rdi12 = *rsi11;
                ++rdi12;
                ++rsi11;
                ++r8_13;
            } while (r8_13 != 0xa0);
            rsi11 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsi11) + 1);
        } while (!reinterpret_cast<int1_t>(rsi11 == 0x8c));
        ++rdx10;
    } while (rdx10 != 0x96);
    *reinterpret_cast<int32_t*>(&rax14) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax14) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        *reinterpret_cast<int32_t*>(&rsi15) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi15) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("xorps xmm1, xmm1");
            __asm__("cvtsi2sd xmm1, edi");
            __asm__("divsd xmm1, xmm0");
            *reinterpret_cast<int32_t*>((rcx9 + rcx9 * 4 << 8) + reinterpret_cast<int64_t>(r15_8)) = *rsi15;
            rsi15 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsi15 + 1) + 1);
        } while (!reinterpret_cast<int1_t>(rsi15 == 0xa0));
        ++rcx9;
    } while (rcx9 != 0xa0);
    do {
        *reinterpret_cast<int32_t*>(&rcx16) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx16) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            *reinterpret_cast<int32_t*>(&rsi17) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi17) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                r14_6[static_cast<int64_t>(rsi17)] = reinterpret_cast<int64_t>(fputc);
                __asm__("xorpd xmm0, xmm0");
                *reinterpret_cast<int32_t*>(&rdi18) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi18) + 4) = reinterpret_cast<int32_t>(fputc);
                do {
                    rdx19 = (reinterpret_cast<int64_t>(rcx16 + static_cast<int64_t>(rcx16)) << 8) + rbx3 + rax14 * 0x2bc00;
                    *rdi18 = rsi17->f0;
                    rdi20 = reinterpret_cast<struct s2*>(rdi18 + 1);
                    rsi21 = reinterpret_cast<struct s3*>(&rsi17->f4);
                    __asm__("mulsd xmm1, [r8+rsi*8]");
                    __asm__("addsd xmm0, xmm1");
                    rdi20->f0 = rsi21->f0;
                    rsi17 = reinterpret_cast<struct s1*>(&rsi21->f4);
                    rdi18 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi20->f4) + 1);
                } while (!reinterpret_cast<int1_t>(rdi18 == 0xa0));
                rsi17 = reinterpret_cast<struct s1*>(reinterpret_cast<int64_t>(rsi17) + 1);
            } while (!reinterpret_cast<int1_t>(rsi17 == 0xa0));
            *reinterpret_cast<int32_t*>(&rsi22) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi22) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                *rdi18 = rsi22->f0;
                rdi23 = reinterpret_cast<struct s2*>(rdi18 + 1);
                rsi24 = &rsi22->f4;
                rdi23->f0 = *rsi24;
                rdi18 = &rdi23->f4;
                rsi22 = reinterpret_cast<struct s0*>(reinterpret_cast<int64_t>(rsi24 + 1) + 1);
            } while (!reinterpret_cast<int1_t>(rsi22 == 0xa0));
            rcx16 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rcx16) + 1);
        } while (!reinterpret_cast<int1_t>(rcx16 == 0x8c));
        ++rax14;
    } while (rax14 != 0x96);
    if (ebp25 >= 43 && **r12_26 == fputc) {
        rax27 = g334;
        r12_28 = *rax27;
        fun_350(0x33e, 22, 1, r12_28);
        rsi29 = reinterpret_cast<int32_t*>(0x357);
        *reinterpret_cast<int32_t*>(&r13_30) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_30) + 4) = reinterpret_cast<int32_t>(fputc);
        v31 = r12_28;
        rdi32 = r12_28;
        fun_370();
        do {
            v33 = r13_30;
            v34 = r13_30 * 0x5780;
            *reinterpret_cast<int32_t*>(&r13_35) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_35) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                rbp36 = (r13_35 * 4 + r13_35 << 5) + v34;
                *reinterpret_cast<int32_t*>(&r12_37) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_37) + 4) = reinterpret_cast<int32_t>(fputc);
                do {
                    __asm__("ror eax, 0x2");
                    if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r12_37 + rbp36) * 0xcccccccd) <= 0xccccccc) {
                        *reinterpret_cast<int32_t*>(&rdi32) = 10;
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi32) + 4) = reinterpret_cast<int32_t>(fputc);
                        rsi29 = v31;
                        fun_3cf();
                    }
                    *rdi32 = *rsi29;
                    rdi32 = v31;
                    rsi29 = reinterpret_cast<int32_t*>(0x3f9);
                    fun_400();
                    ++r12_37;
                } while (r12_37 != 0xa0);
                ++r13_35;
            } while (r13_35 != 0x8c);
            r13_30 = v33 + 1;
        } while (r13_30 != 0x96);
        fun_44e(v31, 0x438, 0x43f);
        *reinterpret_cast<int32_t*>(&rsi22) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi22) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx19) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx19) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx16 = v31;
        fun_467(0x455, 22, 1, rcx16);
    }
    fun_30c(rbx3, rsi22, rdx19, rcx16);
    fun_314(r14_6, rsi22, rdx19, rcx16);
    fun_31c(r15_8, rsi22, rdx19, rcx16);
    goto v38;
}

void fun_31c(int32_t* rdi, struct s0* rsi, int64_t rdx, int32_t* rcx) {
    int64_t v5;

    goto v5;
}

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

int64_t* fun_124(int64_t rdi, int64_t rsi) {
    int64_t* r14_3;
    int64_t* rax4;
    int32_t* rax5;
    int32_t* r15_6;
    int64_t rcx7;
    int64_t rdx8;
    int32_t* rsi9;
    int32_t* rdi10;
    int64_t r8_11;
    int64_t rax12;
    int32_t* rsi13;
    int32_t* rcx14;
    struct s4* rsi15;
    int32_t* rdi16;
    int64_t rdx17;
    int64_t rbx18;
    struct s5* rdi19;
    struct s6* rsi20;
    struct s0* rsi21;
    struct s5* rdi22;
    int32_t* rsi23;
    int32_t ebp24;
    signed char** r12_25;
    int32_t** rax26;
    int32_t* r12_27;
    int32_t* rsi28;
    int64_t r13_29;
    int32_t* v30;
    int32_t* rdi31;
    int64_t v32;
    int64_t v33;
    int64_t r13_34;
    int64_t rbp35;
    int64_t r12_36;
    int64_t rbx37;
    int64_t v38;

    r14_3 = rax4;
    rax5 = fun_136(0x6400, 8);
    r15_6 = rax5;
    *reinterpret_cast<int32_t*>(&rcx7) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx7) + 4) = reinterpret_cast<int32_t>(fputc);
    g6400 = g8;
    *reinterpret_cast<int32_t*>(&rdx8) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx8) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        *reinterpret_cast<int32_t*>(&rsi9) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi9) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rdi10 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsi9) * rdx8);
            *reinterpret_cast<int32_t*>(&r8_11) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_11) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("xorps xmm1, xmm1");
                __asm__("cvtsi2sd xmm1, r9d");
                __asm__("divsd xmm1, xmm0");
                *rdi10 = *rsi9;
                ++rdi10;
                ++rsi9;
                ++r8_11;
            } while (r8_11 != 0xa0);
            rsi9 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsi9) + 1);
        } while (!reinterpret_cast<int1_t>(rsi9 == 0x8c));
        ++rdx8;
    } while (rdx8 != 0x96);
    *reinterpret_cast<int32_t*>(&rax12) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax12) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        *reinterpret_cast<int32_t*>(&rsi13) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi13) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("xorps xmm1, xmm1");
            __asm__("cvtsi2sd xmm1, edi");
            __asm__("divsd xmm1, xmm0");
            *reinterpret_cast<int32_t*>((rcx7 + rcx7 * 4 << 8) + reinterpret_cast<int64_t>(r15_6)) = *rsi13;
            rsi13 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsi13 + 1) + 1);
        } while (!reinterpret_cast<int1_t>(rsi13 == 0xa0));
        ++rcx7;
    } while (rcx7 != 0xa0);
    do {
        *reinterpret_cast<int32_t*>(&rcx14) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx14) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            *reinterpret_cast<int32_t*>(&rsi15) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi15) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                r14_3[static_cast<int64_t>(rsi15)] = reinterpret_cast<int64_t>(fputc);
                __asm__("xorpd xmm0, xmm0");
                *reinterpret_cast<int32_t*>(&rdi16) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi16) + 4) = reinterpret_cast<int32_t>(fputc);
                do {
                    rdx17 = (reinterpret_cast<int64_t>(rcx14 + static_cast<int64_t>(rcx14)) << 8) + rbx18 + rax12 * 0x2bc00;
                    *rdi16 = rsi15->f0;
                    rdi19 = reinterpret_cast<struct s5*>(rdi16 + 1);
                    rsi20 = reinterpret_cast<struct s6*>(&rsi15->f4);
                    __asm__("mulsd xmm1, [r8+rsi*8]");
                    __asm__("addsd xmm0, xmm1");
                    rdi19->f0 = rsi20->f0;
                    rsi15 = reinterpret_cast<struct s4*>(&rsi20->f4);
                    rdi16 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi19->f4) + 1);
                } while (!reinterpret_cast<int1_t>(rdi16 == 0xa0));
                rsi15 = reinterpret_cast<struct s4*>(reinterpret_cast<int64_t>(rsi15) + 1);
            } while (!reinterpret_cast<int1_t>(rsi15 == 0xa0));
            *reinterpret_cast<int32_t*>(&rsi21) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi21) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                *rdi16 = rsi21->f0;
                rdi22 = reinterpret_cast<struct s5*>(rdi16 + 1);
                rsi23 = &rsi21->f4;
                rdi22->f0 = *rsi23;
                rdi16 = &rdi22->f4;
                rsi21 = reinterpret_cast<struct s0*>(reinterpret_cast<int64_t>(rsi23 + 1) + 1);
            } while (!reinterpret_cast<int1_t>(rsi21 == 0xa0));
            rcx14 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rcx14) + 1);
        } while (!reinterpret_cast<int1_t>(rcx14 == 0x8c));
        ++rax12;
    } while (rax12 != 0x96);
    if (ebp24 >= 43 && **r12_25 == fputc) {
        rax26 = g334;
        r12_27 = *rax26;
        fun_350(0x33e, 22, 1, r12_27);
        rsi28 = reinterpret_cast<int32_t*>(0x357);
        *reinterpret_cast<int32_t*>(&r13_29) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_29) + 4) = reinterpret_cast<int32_t>(fputc);
        v30 = r12_27;
        rdi31 = r12_27;
        fun_370();
        do {
            v32 = r13_29;
            v33 = r13_29 * 0x5780;
            *reinterpret_cast<int32_t*>(&r13_34) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_34) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                rbp35 = (r13_34 * 4 + r13_34 << 5) + v33;
                *reinterpret_cast<int32_t*>(&r12_36) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_36) + 4) = reinterpret_cast<int32_t>(fputc);
                do {
                    __asm__("ror eax, 0x2");
                    if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r12_36 + rbp35) * 0xcccccccd) <= 0xccccccc) {
                        *reinterpret_cast<int32_t*>(&rdi31) = 10;
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi31) + 4) = reinterpret_cast<int32_t>(fputc);
                        rsi28 = v30;
                        fun_3cf();
                    }
                    *rdi31 = *rsi28;
                    rdi31 = v30;
                    rsi28 = reinterpret_cast<int32_t*>(0x3f9);
                    fun_400();
                    ++r12_36;
                } while (r12_36 != 0xa0);
                ++r13_34;
            } while (r13_34 != 0x8c);
            r13_29 = v32 + 1;
        } while (r13_29 != 0x96);
        fun_44e(v30, 0x438, 0x43f);
        *reinterpret_cast<int32_t*>(&rsi21) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi21) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx17) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx17) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx14 = v30;
        fun_467(0x455, 22, 1, rcx14);
    }
    fun_30c(rbx37, rsi21, rdx17, rcx14);
    fun_314(r14_3, rsi21, rdx17, rcx14);
    fun_31c(r15_6, rsi21, rdx17, rcx14);
    goto v38;
}

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

int32_t* fun_136(int32_t* rdi, int32_t* rsi) {
    int32_t* r15_3;
    int32_t* rax4;
    int64_t rcx5;
    int64_t rdx6;
    int32_t* rsi7;
    int32_t* rdi8;
    int64_t r8_9;
    int64_t rax10;
    int32_t* rsi11;
    int32_t* rcx12;
    struct s7* rsi13;
    int64_t* r14_14;
    int32_t* rdi15;
    int64_t rdx16;
    int64_t rbx17;
    struct s8* rdi18;
    struct s9* rsi19;
    struct s0* rsi20;
    struct s8* rdi21;
    int32_t* rsi22;
    int32_t ebp23;
    signed char** r12_24;
    int32_t** rax25;
    int32_t* r12_26;
    int32_t* rsi27;
    int64_t r13_28;
    int32_t* v29;
    int32_t* rdi30;
    int64_t v31;
    int64_t v32;
    int64_t r13_33;
    int64_t rbp34;
    int64_t r12_35;
    int64_t rbx36;
    int64_t* r14_37;
    int64_t v38;

    r15_3 = rax4;
    *reinterpret_cast<int32_t*>(&rcx5) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx5) + 4) = reinterpret_cast<int32_t>(fputc);
    *rdi = *rsi;
    *reinterpret_cast<int32_t*>(&rdx6) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx6) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        *reinterpret_cast<int32_t*>(&rsi7) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi7) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rdi8 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsi7) * rdx6);
            *reinterpret_cast<int32_t*>(&r8_9) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_9) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("xorps xmm1, xmm1");
                __asm__("cvtsi2sd xmm1, r9d");
                __asm__("divsd xmm1, xmm0");
                *rdi8 = *rsi7;
                ++rdi8;
                ++rsi7;
                ++r8_9;
            } while (r8_9 != 0xa0);
            rsi7 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsi7) + 1);
        } while (!reinterpret_cast<int1_t>(rsi7 == 0x8c));
        ++rdx6;
    } while (rdx6 != 0x96);
    *reinterpret_cast<int32_t*>(&rax10) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax10) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        *reinterpret_cast<int32_t*>(&rsi11) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi11) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("xorps xmm1, xmm1");
            __asm__("cvtsi2sd xmm1, edi");
            __asm__("divsd xmm1, xmm0");
            *reinterpret_cast<int32_t*>((rcx5 + rcx5 * 4 << 8) + reinterpret_cast<int64_t>(r15_3)) = *rsi11;
            rsi11 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsi11 + 1) + 1);
        } while (!reinterpret_cast<int1_t>(rsi11 == 0xa0));
        ++rcx5;
    } while (rcx5 != 0xa0);
    do {
        *reinterpret_cast<int32_t*>(&rcx12) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx12) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            *reinterpret_cast<int32_t*>(&rsi13) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi13) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                r14_14[static_cast<int64_t>(rsi13)] = reinterpret_cast<int64_t>(fputc);
                __asm__("xorpd xmm0, xmm0");
                *reinterpret_cast<int32_t*>(&rdi15) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi15) + 4) = reinterpret_cast<int32_t>(fputc);
                do {
                    rdx16 = (reinterpret_cast<int64_t>(rcx12 + static_cast<int64_t>(rcx12)) << 8) + rbx17 + rax10 * 0x2bc00;
                    *rdi15 = rsi13->f0;
                    rdi18 = reinterpret_cast<struct s8*>(rdi15 + 1);
                    rsi19 = reinterpret_cast<struct s9*>(&rsi13->f4);
                    __asm__("mulsd xmm1, [r8+rsi*8]");
                    __asm__("addsd xmm0, xmm1");
                    rdi18->f0 = rsi19->f0;
                    rsi13 = reinterpret_cast<struct s7*>(&rsi19->f4);
                    rdi15 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi18->f4) + 1);
                } while (!reinterpret_cast<int1_t>(rdi15 == 0xa0));
                rsi13 = reinterpret_cast<struct s7*>(reinterpret_cast<int64_t>(rsi13) + 1);
            } while (!reinterpret_cast<int1_t>(rsi13 == 0xa0));
            *reinterpret_cast<int32_t*>(&rsi20) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi20) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                *rdi15 = rsi20->f0;
                rdi21 = reinterpret_cast<struct s8*>(rdi15 + 1);
                rsi22 = &rsi20->f4;
                rdi21->f0 = *rsi22;
                rdi15 = &rdi21->f4;
                rsi20 = reinterpret_cast<struct s0*>(reinterpret_cast<int64_t>(rsi22 + 1) + 1);
            } while (!reinterpret_cast<int1_t>(rsi20 == 0xa0));
            rcx12 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rcx12) + 1);
        } while (!reinterpret_cast<int1_t>(rcx12 == 0x8c));
        ++rax10;
    } while (rax10 != 0x96);
    if (ebp23 >= 43 && **r12_24 == fputc) {
        rax25 = g334;
        r12_26 = *rax25;
        fun_350(0x33e, 22, 1, r12_26);
        rsi27 = reinterpret_cast<int32_t*>(0x357);
        *reinterpret_cast<int32_t*>(&r13_28) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_28) + 4) = reinterpret_cast<int32_t>(fputc);
        v29 = r12_26;
        rdi30 = r12_26;
        fun_370();
        do {
            v31 = r13_28;
            v32 = r13_28 * 0x5780;
            *reinterpret_cast<int32_t*>(&r13_33) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_33) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                rbp34 = (r13_33 * 4 + r13_33 << 5) + v32;
                *reinterpret_cast<int32_t*>(&r12_35) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_35) + 4) = reinterpret_cast<int32_t>(fputc);
                do {
                    __asm__("ror eax, 0x2");
                    if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r12_35 + rbp34) * 0xcccccccd) <= 0xccccccc) {
                        *reinterpret_cast<int32_t*>(&rdi30) = 10;
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi30) + 4) = reinterpret_cast<int32_t>(fputc);
                        rsi27 = v29;
                        fun_3cf();
                    }
                    *rdi30 = *rsi27;
                    rdi30 = v29;
                    rsi27 = reinterpret_cast<int32_t*>(0x3f9);
                    fun_400();
                    ++r12_35;
                } while (r12_35 != 0xa0);
                ++r13_33;
            } while (r13_33 != 0x8c);
            r13_28 = v31 + 1;
        } while (r13_28 != 0x96);
        fun_44e(v29, 0x438, 0x43f);
        *reinterpret_cast<int32_t*>(&rsi20) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi20) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx16) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx16) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx12 = v29;
        fun_467(0x455, 22, 1, rcx12);
    }
    fun_30c(rbx36, rsi20, rdx16, rcx12);
    fun_314(r14_37, rsi20, rdx16, rcx12);
    fun_31c(r15_3, rsi20, rdx16, rcx12);
    goto v38;
}

void fputc() {
}

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

void fun_a8() {
    int64_t rsi1;
    int64_t rsi2;
    signed char cl3;
    int64_t r14_4;
    struct s10* rdi5;
    struct s11* rsi6;
    struct s12* rdi7;
    struct s13* rsi8;
    int64_t r10_9;

    *reinterpret_cast<signed char*>(rsi1 - 0x6b) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(rsi2 - 0x6b) >> cl3);
    *reinterpret_cast<int32_t*>(&r14_4) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_4) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        rdi5->f0 = rsi6->f0;
        rdi7 = reinterpret_cast<struct s12*>(&rdi5->f4);
        rsi8 = reinterpret_cast<struct s13*>(&rsi6->f4);
        rdi7->f0 = rsi8->f0;
        rdi5 = reinterpret_cast<struct s10*>(&rdi7->f4);
        rsi6 = reinterpret_cast<struct s11*>(&rsi8->f4);
        ++r14_4;
    } while (r14_4 != r10_9);
}

void fun_de() {
    int64_t v1;

    goto v1;
}

void submain(int32_t edi, int64_t rsi) {
    fun_112(0x334500, 8);
}

