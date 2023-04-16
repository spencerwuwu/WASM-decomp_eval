
void fputc();

int32_t** g365 = reinterpret_cast<int32_t**>(0x3d8d48308b4c);

void fun_381(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx);

void fun_39c();

void fun_3dc();

void fun_407();

void fun_43e(int32_t* rdi, int64_t rsi, int64_t rdx);

void fun_457(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx);

void fun_34d(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx);

void fun_338() {
    int32_t ebp1;
    signed char** r14_2;
    int32_t** rax3;
    int32_t* r14_4;
    int32_t* rsi5;
    int64_t r12_6;
    int32_t* rdi7;
    int64_t v8;
    int64_t rbp9;
    int64_t r13_10;
    int64_t r15_11;
    int32_t* rcx12;
    int64_t rbx13;
    int64_t v14;

    if (ebp1 >= 43 && **r14_2 == fputc) {
        rax3 = g365;
        r14_4 = *rax3;
        fun_381(0x36f, 22, 1, r14_4);
        rsi5 = reinterpret_cast<int32_t*>(0x388);
        *reinterpret_cast<int32_t*>(&r12_6) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_6) + 4) = reinterpret_cast<int32_t>(fputc);
        rdi7 = r14_4;
        fun_39c();
        do {
            v8 = r12_6 * 0x3840;
            *reinterpret_cast<int32_t*>(&rbp9) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp9) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                r13_10 = rbp9 * 0x78 + v8;
                *reinterpret_cast<int32_t*>(&r15_11) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_11) + 4) = reinterpret_cast<int32_t>(fputc);
                do {
                    __asm__("ror eax, 0x2");
                    if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r15_11 + r13_10) * 0xcccccccd) <= 0xccccccc) {
                        *reinterpret_cast<int32_t*>(&rdi7) = 10;
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi7) + 4) = reinterpret_cast<int32_t>(fputc);
                        rsi5 = r14_4;
                        fun_3dc();
                    }
                    *rdi7 = *rsi5;
                    rdi7 = r14_4;
                    rsi5 = reinterpret_cast<int32_t*>(0x400);
                    fun_407();
                    ++r15_11;
                } while (r15_11 != 0x78);
                ++rbp9;
            } while (rbp9 != 0x78);
            ++r12_6;
        } while (r12_6 != 0x78);
        fun_43e(r14_4, 0x42d, 0x434);
        rcx12 = r14_4;
        fun_457(0x445, 22, 1, rcx12);
    }
    fun_34d(rbx13, 22, 1, rcx12);
    goto v14;
}

void fun_34d(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int64_t v5;

    goto v5;
}

void fun_3dc() {
    int64_t v1;
    int32_t* rdi2;
    int32_t* rsi3;
    int32_t* r14_4;
    int64_t r15_5;
    int64_t rbp6;
    int64_t r12_7;
    int64_t r13_8;
    int32_t* r14_9;
    int32_t* r14_10;
    int32_t* r14_11;
    int64_t rbx12;
    int64_t v13;

    while (1) {
        v1 = reinterpret_cast<int64_t>(__return_address());
        *rdi2 = *rsi3;
        rdi2 = r14_4;
        rsi3 = reinterpret_cast<int32_t*>(0x400);
        fun_407();
        ++r15_5;
        if (r15_5 == 0x78) {
            ++rbp6;
            if (rbp6 == 0x78) {
                ++r12_7;
                if (r12_7 == 0x78) 
                    break;
                v1 = r12_7 * 0x3840;
                *reinterpret_cast<int32_t*>(&rbp6) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp6) + 4) = reinterpret_cast<int32_t>(fputc);
            }
            r13_8 = rbp6 * 0x78 + v1;
            *reinterpret_cast<int32_t*>(&r15_5) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_5) + 4) = reinterpret_cast<int32_t>(fputc);
        }
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r15_5 + r13_8) * 0xcccccccd) > 0xccccccc) 
            continue;
        *reinterpret_cast<int32_t*>(&rdi2) = 10;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi2) + 4) = reinterpret_cast<int32_t>(fputc);
        rsi3 = r14_9;
        fun_3dc();
    }
    fun_43e(r14_10, 0x42d, 0x434);
    fun_457(0x445, 22, 1, r14_11);
    fun_34d(rbx12, 22, 1, r14_11);
    goto v13;
}

void fun_407() {
    int64_t v1;
    int64_t r15_2;
    int64_t rbp3;
    int64_t r12_4;
    int64_t r13_5;
    int32_t* rdi6;
    int32_t* rsi7;
    int32_t* r14_8;
    int32_t* r14_9;
    int32_t* r14_10;
    int32_t* r14_11;
    int64_t rbx12;
    int64_t v13;

    while (1) {
        v1 = reinterpret_cast<int64_t>(__return_address());
        ++r15_2;
        if (r15_2 == 0x78) {
            ++rbp3;
            if (rbp3 == 0x78) {
                ++r12_4;
                if (r12_4 == 0x78) 
                    break;
                v1 = r12_4 * 0x3840;
                *reinterpret_cast<int32_t*>(&rbp3) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp3) + 4) = reinterpret_cast<int32_t>(fputc);
            }
            r13_5 = rbp3 * 0x78 + v1;
            *reinterpret_cast<int32_t*>(&r15_2) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_2) + 4) = reinterpret_cast<int32_t>(fputc);
        }
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r15_2 + r13_5) * 0xcccccccd) <= 0xccccccc) {
            *reinterpret_cast<int32_t*>(&rdi6) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi6) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi7 = r14_8;
            fun_3dc();
        }
        *rdi6 = *rsi7;
        rdi6 = r14_9;
        rsi7 = reinterpret_cast<int32_t*>(0x400);
        fun_407();
    }
    fun_43e(r14_10, 0x42d, 0x434);
    fun_457(0x445, 22, 1, r14_11);
    fun_34d(rbx12, 22, 1, r14_11);
    goto v13;
}

void fun_43e(int32_t* rdi, int64_t rsi, int64_t rdx) {
    int32_t* r14_4;
    int64_t rbx5;
    int64_t v6;

    fun_457(0x445, 22, 1, r14_4);
    fun_34d(rbx5, 22, 1, r14_4);
    goto v6;
}

void fun_381(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int32_t* rsi5;
    int64_t r12_6;
    int32_t* rdi7;
    int32_t* r14_8;
    int64_t v9;
    int64_t rbp10;
    int64_t r13_11;
    int64_t r15_12;
    int32_t* r14_13;
    int32_t* r14_14;
    int32_t* r14_15;
    int32_t* r14_16;
    int64_t rbx17;
    int64_t v18;

    rsi5 = reinterpret_cast<int32_t*>(0x388);
    *reinterpret_cast<int32_t*>(&r12_6) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_6) + 4) = reinterpret_cast<int32_t>(fputc);
    rdi7 = r14_8;
    fun_39c();
    do {
        v9 = r12_6 * 0x3840;
        *reinterpret_cast<int32_t*>(&rbp10) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp10) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            r13_11 = rbp10 * 0x78 + v9;
            *reinterpret_cast<int32_t*>(&r15_12) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_12) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("ror eax, 0x2");
                if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r15_12 + r13_11) * 0xcccccccd) <= 0xccccccc) {
                    *reinterpret_cast<int32_t*>(&rdi7) = 10;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi7) + 4) = reinterpret_cast<int32_t>(fputc);
                    rsi5 = r14_13;
                    fun_3dc();
                }
                *rdi7 = *rsi5;
                rdi7 = r14_14;
                rsi5 = reinterpret_cast<int32_t*>(0x400);
                fun_407();
                ++r15_12;
            } while (r15_12 != 0x78);
            ++rbp10;
        } while (rbp10 != 0x78);
        ++r12_6;
    } while (r12_6 != 0x78);
    fun_43e(r14_15, 0x42d, 0x434);
    fun_457(0x445, 22, 1, r14_16);
    fun_34d(rbx17, 22, 1, r14_16);
    goto v18;
}

void fun_457(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int64_t rbx5;
    int64_t v6;

    fun_34d(rbx5, rsi, rdx, rcx);
    goto v6;
}

struct s0 {
    int32_t f0;
    int32_t f4;
};

struct s1 {
    int32_t f0;
    int32_t f4;
};

int32_t* fun_291(struct s0* rdi, struct s1* rsi);

int32_t g1a5e00;

/* .LCPI0_1 */
int32_t LCPI0_1 = 0x89485354;

int32_t g1a5e04;

int32_t gc = 0x748948f0;

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

void fun_27f(int64_t rdi, int64_t rsi) {
    int64_t rbx3;
    int64_t rax4;
    int32_t* rax5;
    int64_t rcx6;
    int64_t rdx7;
    struct s2* rsi8;
    struct s3* rdi9;
    int64_t r8_10;
    struct s4* rdi11;
    struct s5* rsi12;
    int64_t rsi13;
    int64_t rdx14;
    int32_t* rcx15;
    int32_t ebp16;
    signed char** r14_17;
    int32_t** rax18;
    int32_t* r14_19;
    int32_t* rsi20;
    int64_t r12_21;
    int32_t* rdi22;
    int64_t v23;
    int64_t rbp24;
    int64_t r13_25;
    int64_t r15_26;
    int64_t v27;

    rbx3 = rax4;
    rax5 = fun_291(0x1a5e00, 8);
    *reinterpret_cast<int32_t*>(&rcx6) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx6) + 4) = reinterpret_cast<int32_t>(fputc);
    g1a5e00 = LCPI0_1;
    g1a5e04 = gc;
    do {
        rdx7 = rcx6 + 0x78;
        *reinterpret_cast<int32_t*>(&rsi8) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi8) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rdi9 = reinterpret_cast<struct s3*>(rdx7 + reinterpret_cast<int64_t>(rsi8));
            *reinterpret_cast<int32_t*>(&r8_10) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_10) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("xorps xmm2, xmm2");
                __asm__("cvtsi2sd xmm2, r9d");
                __asm__("mulsd xmm2, xmm0");
                __asm__("divsd xmm2, xmm1");
                rdi9->f0 = rsi8->f0;
                rdi11 = reinterpret_cast<struct s4*>(&rdi9->f4);
                rsi12 = reinterpret_cast<struct s5*>(&rsi8->f4);
                rdi11->f0 = rsi12->f0;
                rdi9 = reinterpret_cast<struct s3*>(&rdi11->f4);
                rsi8 = reinterpret_cast<struct s2*>(&rsi12->f4);
                ++r8_10;
            } while (r8_10 != 0x78);
            rsi8 = reinterpret_cast<struct s2*>(reinterpret_cast<int64_t>(rsi8) + 1);
        } while (!reinterpret_cast<int1_t>(rsi8 == 0x78));
        ++rcx6;
    } while (rcx6 != 0x78);
    *reinterpret_cast<int32_t*>(&rsi13) = 0x78;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi13) + 4) = reinterpret_cast<int32_t>(fputc);
    rdx14 = rbx3;
    rcx15 = rax5;
    fun_338();
    if (ebp16 >= 43 && **r14_17 == fputc) {
        rax18 = g365;
        r14_19 = *rax18;
        fun_381(0x36f, 22, 1, r14_19);
        rsi20 = reinterpret_cast<int32_t*>(0x388);
        *reinterpret_cast<int32_t*>(&r12_21) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_21) + 4) = reinterpret_cast<int32_t>(fputc);
        rdi22 = r14_19;
        fun_39c();
        do {
            v23 = r12_21 * 0x3840;
            *reinterpret_cast<int32_t*>(&rbp24) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp24) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                r13_25 = rbp24 * 0x78 + v23;
                *reinterpret_cast<int32_t*>(&r15_26) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_26) + 4) = reinterpret_cast<int32_t>(fputc);
                do {
                    __asm__("ror eax, 0x2");
                    if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r15_26 + r13_25) * 0xcccccccd) <= 0xccccccc) {
                        *reinterpret_cast<int32_t*>(&rdi22) = 10;
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi22) + 4) = reinterpret_cast<int32_t>(fputc);
                        rsi20 = r14_19;
                        fun_3dc();
                    }
                    *rdi22 = *rsi20;
                    rdi22 = r14_19;
                    rsi20 = reinterpret_cast<int32_t*>(0x400);
                    fun_407();
                    ++r15_26;
                } while (r15_26 != 0x78);
                ++rbp24;
            } while (rbp24 != 0x78);
            ++r12_21;
        } while (r12_21 != 0x78);
        fun_43e(r14_19, 0x42d, 0x434);
        *reinterpret_cast<int32_t*>(&rsi13) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi13) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx14) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx14) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx15 = r14_19;
        fun_457(0x445, 22, 1, rcx15);
    }
    fun_34d(rbx3, rsi13, rdx14, rcx15);
    goto v27;
}

void fun_39c() {
    int64_t v1;
    int64_t r12_2;
    int64_t rbp3;
    int64_t r13_4;
    int64_t r15_5;
    int32_t* rdi6;
    int32_t* rsi7;
    int32_t* r14_8;
    int32_t* r14_9;
    int32_t* r14_10;
    int32_t* r14_11;
    int64_t rbx12;
    int64_t v13;

    do {
        v1 = r12_2 * 0x3840;
        *reinterpret_cast<int32_t*>(&rbp3) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp3) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            r13_4 = rbp3 * 0x78 + v1;
            *reinterpret_cast<int32_t*>(&r15_5) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_5) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("ror eax, 0x2");
                if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r15_5 + r13_4) * 0xcccccccd) <= 0xccccccc) {
                    *reinterpret_cast<int32_t*>(&rdi6) = 10;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi6) + 4) = reinterpret_cast<int32_t>(fputc);
                    rsi7 = r14_8;
                    fun_3dc();
                }
                *rdi6 = *rsi7;
                rdi6 = r14_9;
                rsi7 = reinterpret_cast<int32_t*>(0x400);
                fun_407();
                ++r15_5;
            } while (r15_5 != 0x78);
            ++rbp3;
        } while (rbp3 != 0x78);
        ++r12_2;
    } while (r12_2 != 0x78);
    fun_43e(r14_10, 0x42d, 0x434);
    fun_457(0x445, 22, 1, r14_11);
    fun_34d(rbx12, 22, 1, r14_11);
    goto v13;
}

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

int32_t* fun_291(struct s0* rdi, struct s1* rsi) {
    int64_t rcx3;
    int64_t rdx4;
    struct s6* rsi5;
    struct s7* rdi6;
    int64_t r8_7;
    struct s8* rdi8;
    struct s9* rsi9;
    int64_t rsi10;
    int64_t rdx11;
    int64_t rbx12;
    int32_t* rcx13;
    int32_t* rax14;
    int32_t ebp15;
    signed char** r14_16;
    int32_t** rax17;
    int32_t* r14_18;
    int32_t* rsi19;
    int64_t r12_20;
    int32_t* rdi21;
    int64_t v22;
    int64_t rbp23;
    int64_t r13_24;
    int64_t r15_25;
    int64_t rbx26;
    int64_t v27;

    *reinterpret_cast<int32_t*>(&rcx3) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx3) + 4) = reinterpret_cast<int32_t>(fputc);
    rdi->f0 = rsi->f0;
    rdi->f4 = rsi->f4;
    do {
        rdx4 = rcx3 + 0x78;
        *reinterpret_cast<int32_t*>(&rsi5) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi5) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rdi6 = reinterpret_cast<struct s7*>(rdx4 + reinterpret_cast<int64_t>(rsi5));
            *reinterpret_cast<int32_t*>(&r8_7) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_7) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("xorps xmm2, xmm2");
                __asm__("cvtsi2sd xmm2, r9d");
                __asm__("mulsd xmm2, xmm0");
                __asm__("divsd xmm2, xmm1");
                rdi6->f0 = rsi5->f0;
                rdi8 = reinterpret_cast<struct s8*>(&rdi6->f4);
                rsi9 = reinterpret_cast<struct s9*>(&rsi5->f4);
                rdi8->f0 = rsi9->f0;
                rdi6 = reinterpret_cast<struct s7*>(&rdi8->f4);
                rsi5 = reinterpret_cast<struct s6*>(&rsi9->f4);
                ++r8_7;
            } while (r8_7 != 0x78);
            rsi5 = reinterpret_cast<struct s6*>(reinterpret_cast<int64_t>(rsi5) + 1);
        } while (!reinterpret_cast<int1_t>(rsi5 == 0x78));
        ++rcx3;
    } while (rcx3 != 0x78);
    *reinterpret_cast<int32_t*>(&rsi10) = 0x78;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi10) + 4) = reinterpret_cast<int32_t>(fputc);
    rdx11 = rbx12;
    rcx13 = rax14;
    fun_338();
    if (ebp15 >= 43 && **r14_16 == fputc) {
        rax17 = g365;
        r14_18 = *rax17;
        fun_381(0x36f, 22, 1, r14_18);
        rsi19 = reinterpret_cast<int32_t*>(0x388);
        *reinterpret_cast<int32_t*>(&r12_20) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_20) + 4) = reinterpret_cast<int32_t>(fputc);
        rdi21 = r14_18;
        fun_39c();
        do {
            v22 = r12_20 * 0x3840;
            *reinterpret_cast<int32_t*>(&rbp23) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp23) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                r13_24 = rbp23 * 0x78 + v22;
                *reinterpret_cast<int32_t*>(&r15_25) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_25) + 4) = reinterpret_cast<int32_t>(fputc);
                do {
                    __asm__("ror eax, 0x2");
                    if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r15_25 + r13_24) * 0xcccccccd) <= 0xccccccc) {
                        *reinterpret_cast<int32_t*>(&rdi21) = 10;
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi21) + 4) = reinterpret_cast<int32_t>(fputc);
                        rsi19 = r14_18;
                        fun_3dc();
                    }
                    *rdi21 = *rsi19;
                    rdi21 = r14_18;
                    rsi19 = reinterpret_cast<int32_t*>(0x400);
                    fun_407();
                    ++r15_25;
                } while (r15_25 != 0x78);
                ++rbp23;
            } while (rbp23 != 0x78);
            ++r12_20;
        } while (r12_20 != 0x78);
        fun_43e(r14_18, 0x42d, 0x434);
        *reinterpret_cast<int32_t*>(&rsi10) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi10) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx11) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx11) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx13 = r14_18;
        fun_457(0x445, 22, 1, rcx13);
    }
    fun_34d(rbx26, rsi10, rdx11, rcx13);
    goto v27;
}

void fputc() {
}

void fun_1d() {
}

void fun_32() {
}

void fun_74() {
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

struct s14 {
    int32_t f0;
    int32_t f4;
};

struct s15 {
    int32_t f0;
    int32_t f4;
};

struct s16 {
    int32_t f0;
    int32_t f4;
};

struct s17 {
    int32_t f0;
    int32_t f4;
};

void fun_90(struct s10* rdi) {
    int64_t rcx2;
    int64_t rax3;
    int64_t rcx4;
    int64_t rax5;
    signed char cl6;
    struct s11* rsi7;
    int32_t* rdx8;
    int64_t r8_9;
    struct s12* rsi10;
    struct s13* rsi11;
    int64_t rbx12;
    int32_t* rsi13;
    int64_t r14_14;
    int64_t r15_15;
    int64_t rax16;
    int64_t rbx17;
    int64_t rax18;
    int64_t r9_19;
    int64_t rax20;
    int64_t r8_21;
    int32_t v22;
    int64_t r9_23;
    int64_t r11_24;
    int64_t rbx25;
    int64_t r14_26;
    int64_t r15_27;
    struct s14* rsi28;
    int32_t* rcx29;
    struct s15* rdi30;
    int32_t* rcx31;
    struct s16* rdi32;
    struct s17* rdi33;
    int32_t* rdi34;
    int64_t rsi35;
    int64_t rax36;
    int64_t rax37;
    int64_t rax38;

    *reinterpret_cast<signed char*>(rcx2 + rax3 - 25) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(rcx4 + rax5 - 25) + cl6);
    rsi7 = reinterpret_cast<struct s11*>(rdx8 + r8_9 * 0x7080);
    rdi->f0 = rsi7->f0;
    rsi10 = reinterpret_cast<struct s12*>(&rsi7->f4);
    __asm__("movapd xmm2, xmm3");
    __asm__("mulsd xmm2, xmm0");
    rdi->f4 = rsi10->f0;
    rsi11 = reinterpret_cast<struct s13*>(&rsi10->f4);
    __asm__("addsd xmm4, xmm2");
    __asm__("addsd xmm4, [rdi+r15*8]");
    (rsi11 + rbx12 * 0x78)->f0 = rsi11->f0;
    rsi13 = &rsi11->f4;
    __asm__("addsd xmm5, xmm2");
    __asm__("addsd xmm5, [rdi+r15*8]");
    __asm__("mulsd xmm5, xmm1");
    __asm__("mulsd xmm4, xmm1");
    __asm__("addsd xmm2, [rbp+r15*8+0x8]");
    __asm__("addsd xmm4, xmm5");
    __asm__("addsd xmm2, [rbp+r15*8-0x8]");
    __asm__("mulsd xmm2, xmm1");
    __asm__("addsd xmm2, xmm4");
    __asm__("addsd xmm2, xmm3");
    rsi13[r14_14 * 0xf0] = *rsi13;
    if (r15_15 + 1 == rax16) {
        if (rbx17 == rax18) {
            if (r9_19 == rax20) {
                *reinterpret_cast<int32_t*>(&r8_21) = 1;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_21) + 4) = reinterpret_cast<int32_t>(fputc);
                if (v22 > 2) {
                    do {
                        r9_23 = r8_21 + 1;
                        *reinterpret_cast<int32_t*>(&r11_24) = 1;
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_24) + 4) = reinterpret_cast<int32_t>(fputc);
                        do {
                            rbx25 = r11_24 + 1;
                            r14_26 = r11_24 - 1;
                            *reinterpret_cast<int32_t*>(&r15_27) = 1;
                            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_27) + 4) = reinterpret_cast<int32_t>(fputc);
                            do {
                                rsi28 = reinterpret_cast<struct s14*>(rcx29 + r9_23 * 0x7080 + r11_24 * 0xf0);
                                rdi30 = reinterpret_cast<struct s15*>(rcx31 + r8_21 * 0x7080);
                                rdi30->f0 = rsi28->f0;
                                rdi32 = reinterpret_cast<struct s16*>(&rdi30->f4);
                                __asm__("movapd xmm2, xmm3");
                                __asm__("mulsd xmm2, xmm0");
                                rdi32->f0 = rsi28->f4;
                                rdi33 = reinterpret_cast<struct s17*>(&rdi32->f4);
                                __asm__("addsd xmm4, xmm2");
                                __asm__("addsd xmm4, [rsi+r15*8]");
                                rdi33->f0 = (rdi33 + rbx25 * 0x78)->f0;
                                rdi34 = &rdi33->f4;
                                __asm__("addsd xmm5, xmm2");
                                __asm__("addsd xmm5, [rsi+r15*8]");
                                __asm__("mulsd xmm5, xmm1");
                                __asm__("mulsd xmm4, xmm1");
                                __asm__("addsd xmm2, [rbp+r15*8+0x8]");
                                __asm__("addsd xmm4, xmm5");
                                __asm__("addsd xmm2, [rbp+r15*8-0x8]");
                                __asm__("mulsd xmm2, xmm1");
                                __asm__("addsd xmm2, xmm4");
                                __asm__("addsd xmm2, xmm3");
                                *rdi34 = rdi34[r14_26 * 0xf0];
                                rsi35 = r15_27 + 1;
                                r15_27 = rsi35;
                            } while (rsi35 != rax36);
                            r11_24 = rbx25;
                        } while (rbx25 != rax37);
                        r8_21 = r9_23;
                    } while (r9_23 != rax38);
                }
            }
        }
    }
}

void fun_253() {
    int64_t v1;

    goto v1;
}

void submain(int32_t edi, int64_t rsi) {
    fun_27f(0x1a5e00, 8);
}

