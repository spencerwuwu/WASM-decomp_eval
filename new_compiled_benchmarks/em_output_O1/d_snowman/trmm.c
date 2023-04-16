
void fun_2d6(int32_t* rdi, void* rsi, int64_t rdx, int32_t* rcx);

void fun_2ce(int32_t* rdi, void* rsi, int64_t rdx, int32_t* rcx) {
    int32_t* r14_5;
    int64_t v6;

    fun_2d6(r14_5, rsi, rdx, rcx);
    goto v6;
}

void fun_37c();

void fputc(int32_t edi);

void fun_3ac(int32_t* rdi, int64_t rsi, int64_t rdx, int32_t* rcx);

void fun_3c5(int64_t rdi, void* rsi, int64_t rdx, int32_t* rcx);

void fun_35b() {
    int32_t* rdi1;
    int32_t* rsi2;
    int32_t* r15_3;
    int64_t r12_4;
    int64_t r13_5;
    int64_t rbp6;
    int32_t* r15_7;
    int32_t* r15_8;
    int32_t* rcx9;
    int32_t* r15_10;
    int32_t* rbx11;
    int32_t* r14_12;
    int64_t v13;

    while (1) {
        *rdi1 = *rsi2;
        rdi1 = r15_3;
        rsi2 = reinterpret_cast<int32_t*>(0x375);
        fun_37c();
        ++r12_4;
        if (r12_4 == 0x4b0) {
            ++r13_5;
            if (r13_5 == 0x3e8) 
                break;
            rbp6 = r13_5 * 0x3e8;
            *reinterpret_cast<int32_t*>(&r12_4) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_4) + 4) = reinterpret_cast<int32_t>(fputc);
        }
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r12_4 + rbp6) * 0xcccccccd) > 0xccccccc) 
            continue;
        *reinterpret_cast<int32_t*>(&rdi1) = 10;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi1) + 4) = reinterpret_cast<int32_t>(fputc);
        rsi2 = r15_7;
        fun_35b();
    }
    fun_3ac(r15_8, 0x39b, 0x3a2, rcx9);
    fun_3c5(0x3b3, 22, 1, r15_10);
    fun_2ce(rbx11, 22, 1, r15_10);
    fun_2d6(r14_12, 22, 1, r15_10);
    goto v13;
}

void fun_37c() {
    int64_t r12_1;
    int64_t r13_2;
    int64_t rbp3;
    int32_t* rdi4;
    int32_t* rsi5;
    int32_t* r15_6;
    int32_t* r15_7;
    int32_t* r15_8;
    int32_t* rcx9;
    int32_t* r15_10;
    int32_t* rbx11;
    int32_t* r14_12;
    int64_t v13;

    while (1) {
        ++r12_1;
        if (r12_1 == 0x4b0) {
            ++r13_2;
            if (r13_2 == 0x3e8) 
                break;
            rbp3 = r13_2 * 0x3e8;
            *reinterpret_cast<int32_t*>(&r12_1) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_1) + 4) = reinterpret_cast<int32_t>(fputc);
        }
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r12_1 + rbp3) * 0xcccccccd) <= 0xccccccc) {
            *reinterpret_cast<int32_t*>(&rdi4) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi4) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi5 = r15_6;
            fun_35b();
        }
        *rdi4 = *rsi5;
        rdi4 = r15_7;
        rsi5 = reinterpret_cast<int32_t*>(0x375);
        fun_37c();
    }
    fun_3ac(r15_8, 0x39b, 0x3a2, rcx9);
    fun_3c5(0x3b3, 22, 1, r15_10);
    fun_2ce(rbx11, 22, 1, r15_10);
    fun_2d6(r14_12, 22, 1, r15_10);
    goto v13;
}

void fun_3ac(int32_t* rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int32_t* r15_5;
    int32_t* rbx6;
    int32_t* r14_7;
    int64_t v8;

    fun_3c5(0x3b3, 22, 1, r15_5);
    fun_2ce(rbx6, 22, 1, r15_5);
    fun_2d6(r14_7, 22, 1, r15_5);
    goto v8;
}

void fun_325();

void fun_30a(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int32_t* rsi5;
    int64_t r13_6;
    int32_t* rdi7;
    int32_t* r15_8;
    int64_t rbp9;
    int64_t r12_10;
    int32_t* r15_11;
    int32_t* r15_12;
    int32_t* r15_13;
    int32_t* r15_14;
    int32_t* rbx15;
    int32_t* r14_16;
    int64_t v17;

    rsi5 = reinterpret_cast<int32_t*>(0x311);
    *reinterpret_cast<int32_t*>(&r13_6) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_6) + 4) = reinterpret_cast<int32_t>(fputc);
    rdi7 = r15_8;
    fun_325();
    do {
        rbp9 = r13_6 * 0x3e8;
        *reinterpret_cast<int32_t*>(&r12_10) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_10) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r12_10 + rbp9) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi7) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi7) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi5 = r15_11;
                fun_35b();
            }
            *rdi7 = *rsi5;
            rdi7 = r15_12;
            rsi5 = reinterpret_cast<int32_t*>(0x375);
            fun_37c();
            ++r12_10;
        } while (r12_10 != 0x4b0);
        ++r13_6;
    } while (r13_6 != 0x3e8);
    fun_3ac(r15_13, 0x39b, 0x3a2, rcx);
    fun_3c5(0x3b3, 22, 1, r15_14);
    fun_2ce(rbx15, 22, 1, r15_14);
    fun_2d6(r14_16, 22, 1, r15_14);
    goto v17;
}

void fun_2d6(int32_t* rdi, void* rsi, int64_t rdx, int32_t* rcx) {
    int64_t v5;

    goto v5;
}

void fun_3c5(int64_t rdi, void* rsi, int64_t rdx, int32_t* rcx) {
    int32_t* rbx5;
    int32_t* r14_6;
    int64_t v7;

    fun_2ce(rbx5, rsi, rdx, rcx);
    fun_2d6(r14_6, rsi, rdx, rcx);
    goto v7;
}

struct s0 {
    int32_t f0;
    int32_t f4;
};

struct s1 {
    int32_t f0;
    int32_t f4;
};

int32_t* fun_101(struct s0* rdi, struct s1* rsi);

int32_t g124f80;

/* .LCPI1_1 */
int32_t LCPI1_1 = 0xb48e0fff;

int32_t g124f84;

int32_t gc = 0x48000000;

struct s2 {
    int32_t f0;
    signed char[1196] pad1200;
    int32_t f4b0;
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

int32_t** g2ee = reinterpret_cast<int32_t**>(0x3d8d48388b4c);

void fun_ef(int64_t rdi, int64_t rsi) {
    int32_t* rbx3;
    int32_t* rax4;
    int32_t* rax5;
    int32_t* r14_6;
    uint64_t rax7;
    struct s2* rdx8;
    struct s2* rsi9;
    int32_t* rsi10;
    int32_t* rdi11;
    int32_t* rcx12;
    int32_t* rdi13;
    int64_t rdx14;
    int32_t* rdi15;
    struct s3* rsi16;
    struct s4* rsi17;
    int32_t* rdi18;
    struct s5* rsi19;
    struct s6* rsi20;
    int32_t* rdi21;
    int32_t* rsi22;
    void* rsi23;
    int32_t ebp24;
    signed char** r15_25;
    int32_t** rax26;
    int32_t* r15_27;
    int32_t* rcx28;
    int32_t* rsi29;
    int64_t r13_30;
    int32_t* rdi31;
    int64_t rbp32;
    int64_t r12_33;
    int64_t v34;

    rbx3 = rax4;
    rax5 = fun_101(0x124f80, 8);
    r14_6 = rax5;
    *reinterpret_cast<int32_t*>(&rax7) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax7) + 4) = reinterpret_cast<int32_t>(fputc);
    g124f80 = LCPI1_1;
    g124f84 = gc;
    *reinterpret_cast<int32_t*>(&rdx8) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx8) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        if (rdx8 != fputc) {
            *reinterpret_cast<int32_t*>(&rsi9) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi9) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("xorps xmm2, xmm2");
                __asm__("cvtsi2sd xmm2, edi");
                __asm__("divsd xmm2, xmm1");
                rbx3[reinterpret_cast<int64_t>(rdx8) * 0x7d0] = rsi9->f0;
                rsi9 = reinterpret_cast<struct s2*>(reinterpret_cast<int64_t>(&rsi9->pad1200) + 1);
            } while (rsi9 != rdx8);
        }
        (rbx3 + reinterpret_cast<int64_t>(rdx8) * 0x7d0)[reinterpret_cast<int64_t>(rdx8) * 2] = reinterpret_cast<int32_t>(0x3ff0000000000000);
        rsi10 = &rdx8->f4b0;
        *reinterpret_cast<int32_t*>(&rdi11) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi11) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("xorps xmm2, xmm2");
            __asm__("cvtsi2sd xmm2, r8d");
            __asm__("divsd xmm2, xmm0");
            *rdi11 = *rsi10;
            ++rsi10;
            rdi11 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rdi11 + 1) + 1);
        } while (!reinterpret_cast<int1_t>(rdi11 == 0x4b0));
        rdx8 = reinterpret_cast<struct s2*>(reinterpret_cast<int64_t>(rdx8) + 1);
    } while (!reinterpret_cast<int1_t>(rdx8 == 0x3e8));
    *reinterpret_cast<int32_t*>(&rcx12) = 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx12) + 4) = reinterpret_cast<int32_t>(fputc);
    *rdi11 = *rsi10;
    rdi13 = rdi11 + 1;
    do {
        *reinterpret_cast<int32_t*>(&rdx14) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx14) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            if (rax7 <= 0x3e6) {
                rdi15 = r14_6 + rax7 * 0x960;
                rsi16 = reinterpret_cast<struct s3*>(rdi15 + rdx14 * 2);
                *rdi15 = rsi16->f0;
                rsi17 = reinterpret_cast<struct s4*>(&rsi16->f4);
                rdi13 = rcx12;
                do {
                    *rdi13 = rsi17->f0;
                    rdi18 = rdi13 + 1;
                    rsi19 = reinterpret_cast<struct s5*>(&rsi17->f4);
                    __asm__("mulsd xmm2, [r8+rdx*8]");
                    __asm__("addsd xmm1, xmm2");
                    *rdi18 = rsi19->f0;
                    rsi17 = reinterpret_cast<struct s4*>(&rsi19->f4);
                    rdi13 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rdi18 + 1) + 1);
                } while (!reinterpret_cast<int1_t>(rdi13 == 0x3e8));
            }
            rsi20 = reinterpret_cast<struct s6*>(r14_6 + rax7 * 0x960);
            *rdi13 = rsi20->f0;
            rdi21 = rdi13 + 1;
            rsi22 = &rsi20->f4;
            __asm__("mulsd xmm1, xmm0");
            *rdi21 = *rsi22;
            rdi13 = rdi21 + 1;
            rsi23 = reinterpret_cast<void*>(rsi22 + 1);
            ++rdx14;
        } while (rdx14 != 0x4b0);
        ++rax7;
        rcx12 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rcx12) + 1);
    } while (rax7 != 0x3e8);
    if (ebp24 >= 43 && **r15_25 == fputc) {
        rax26 = g2ee;
        r15_27 = *rax26;
        rcx28 = r15_27;
        fun_30a(0x2f8, 22, 1, rcx28);
        rsi29 = reinterpret_cast<int32_t*>(0x311);
        *reinterpret_cast<int32_t*>(&r13_30) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_30) + 4) = reinterpret_cast<int32_t>(fputc);
        rdi31 = r15_27;
        fun_325();
        do {
            rbp32 = r13_30 * 0x3e8;
            *reinterpret_cast<int32_t*>(&r12_33) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_33) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("ror eax, 0x2");
                if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r12_33 + rbp32) * 0xcccccccd) <= 0xccccccc) {
                    *reinterpret_cast<int32_t*>(&rdi31) = 10;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi31) + 4) = reinterpret_cast<int32_t>(fputc);
                    rsi29 = r15_27;
                    fun_35b();
                }
                *rdi31 = *rsi29;
                rdi31 = r15_27;
                rsi29 = reinterpret_cast<int32_t*>(0x375);
                fun_37c();
                ++r12_33;
            } while (r12_33 != 0x4b0);
            ++r13_30;
        } while (r13_30 != 0x3e8);
        fun_3ac(r15_27, 0x39b, 0x3a2, rcx28);
        *reinterpret_cast<int32_t*>(&rsi23) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi23) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx14) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx14) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx12 = r15_27;
        fun_3c5(0x3b3, 22, 1, rcx12);
    }
    fun_2ce(rbx3, rsi23, rdx14, rcx12);
    fun_2d6(r14_6, rsi23, rdx14, rcx12);
    goto v34;
}

void fun_325() {
    int64_t rbp1;
    int64_t r13_2;
    int64_t r12_3;
    int32_t* rdi4;
    int32_t* rsi5;
    int32_t* r15_6;
    int32_t* r15_7;
    int32_t* r15_8;
    int32_t* rcx9;
    int32_t* r15_10;
    int32_t* rbx11;
    int32_t* r14_12;
    int64_t v13;

    do {
        rbp1 = r13_2 * 0x3e8;
        *reinterpret_cast<int32_t*>(&r12_3) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_3) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r12_3 + rbp1) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi4) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi4) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi5 = r15_6;
                fun_35b();
            }
            *rdi4 = *rsi5;
            rdi4 = r15_7;
            rsi5 = reinterpret_cast<int32_t*>(0x375);
            fun_37c();
            ++r12_3;
        } while (r12_3 != 0x4b0);
        ++r13_2;
    } while (r13_2 != 0x3e8);
    fun_3ac(r15_8, 0x39b, 0x3a2, rcx9);
    fun_3c5(0x3b3, 22, 1, r15_10);
    fun_2ce(rbx11, 22, 1, r15_10);
    fun_2d6(r14_12, 22, 1, r15_10);
    goto v13;
}

struct s7 {
    int32_t f0;
    signed char[1196] pad1200;
    int32_t f4b0;
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

int32_t* fun_101(struct s0* rdi, struct s1* rsi) {
    int32_t* r14_3;
    int32_t* rax4;
    uint64_t rax5;
    struct s7* rdx6;
    struct s7* rsi7;
    int32_t* rbx8;
    int64_t* rbx9;
    int32_t* rsi10;
    int32_t* rdi11;
    int32_t* rcx12;
    int32_t* rdi13;
    int64_t rdx14;
    int32_t* rdi15;
    struct s8* rsi16;
    struct s9* rsi17;
    int32_t* rdi18;
    struct s10* rsi19;
    struct s11* rsi20;
    int32_t* rdi21;
    int32_t* rsi22;
    void* rsi23;
    int32_t ebp24;
    signed char** r15_25;
    int32_t** rax26;
    int32_t* r15_27;
    int32_t* rcx28;
    int32_t* rsi29;
    int64_t r13_30;
    int32_t* rdi31;
    int64_t rbp32;
    int64_t r12_33;
    int32_t* rbx34;
    int64_t v35;

    r14_3 = rax4;
    *reinterpret_cast<int32_t*>(&rax5) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax5) + 4) = reinterpret_cast<int32_t>(fputc);
    rdi->f0 = rsi->f0;
    rdi->f4 = rsi->f4;
    *reinterpret_cast<int32_t*>(&rdx6) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx6) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        if (rdx6 != fputc) {
            *reinterpret_cast<int32_t*>(&rsi7) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi7) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("xorps xmm2, xmm2");
                __asm__("cvtsi2sd xmm2, edi");
                __asm__("divsd xmm2, xmm1");
                rbx8[reinterpret_cast<int64_t>(rdx6) * 0x7d0] = rsi7->f0;
                rsi7 = reinterpret_cast<struct s7*>(reinterpret_cast<int64_t>(&rsi7->pad1200) + 1);
            } while (rsi7 != rdx6);
        }
        (rbx9 + reinterpret_cast<int64_t>(rdx6) * 0x3e8)[static_cast<int64_t>(rdx6)] = 0x3ff0000000000000;
        rsi10 = &rdx6->f4b0;
        *reinterpret_cast<int32_t*>(&rdi11) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi11) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("xorps xmm2, xmm2");
            __asm__("cvtsi2sd xmm2, r8d");
            __asm__("divsd xmm2, xmm0");
            *rdi11 = *rsi10;
            ++rsi10;
            rdi11 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rdi11 + 1) + 1);
        } while (!reinterpret_cast<int1_t>(rdi11 == 0x4b0));
        rdx6 = reinterpret_cast<struct s7*>(reinterpret_cast<int64_t>(rdx6) + 1);
    } while (!reinterpret_cast<int1_t>(rdx6 == 0x3e8));
    *reinterpret_cast<int32_t*>(&rcx12) = 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx12) + 4) = reinterpret_cast<int32_t>(fputc);
    *rdi11 = *rsi10;
    rdi13 = rdi11 + 1;
    do {
        *reinterpret_cast<int32_t*>(&rdx14) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx14) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            if (rax5 <= 0x3e6) {
                rdi15 = r14_3 + rax5 * 0x960;
                rsi16 = reinterpret_cast<struct s8*>(rdi15 + rdx14 * 2);
                *rdi15 = rsi16->f0;
                rsi17 = reinterpret_cast<struct s9*>(&rsi16->f4);
                rdi13 = rcx12;
                do {
                    *rdi13 = rsi17->f0;
                    rdi18 = rdi13 + 1;
                    rsi19 = reinterpret_cast<struct s10*>(&rsi17->f4);
                    __asm__("mulsd xmm2, [r8+rdx*8]");
                    __asm__("addsd xmm1, xmm2");
                    *rdi18 = rsi19->f0;
                    rsi17 = reinterpret_cast<struct s9*>(&rsi19->f4);
                    rdi13 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rdi18 + 1) + 1);
                } while (!reinterpret_cast<int1_t>(rdi13 == 0x3e8));
            }
            rsi20 = reinterpret_cast<struct s11*>(r14_3 + rax5 * 0x960);
            *rdi13 = rsi20->f0;
            rdi21 = rdi13 + 1;
            rsi22 = &rsi20->f4;
            __asm__("mulsd xmm1, xmm0");
            *rdi21 = *rsi22;
            rdi13 = rdi21 + 1;
            rsi23 = reinterpret_cast<void*>(rsi22 + 1);
            ++rdx14;
        } while (rdx14 != 0x4b0);
        ++rax5;
        rcx12 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rcx12) + 1);
    } while (rax5 != 0x3e8);
    if (ebp24 >= 43 && **r15_25 == fputc) {
        rax26 = g2ee;
        r15_27 = *rax26;
        rcx28 = r15_27;
        fun_30a(0x2f8, 22, 1, rcx28);
        rsi29 = reinterpret_cast<int32_t*>(0x311);
        *reinterpret_cast<int32_t*>(&r13_30) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_30) + 4) = reinterpret_cast<int32_t>(fputc);
        rdi31 = r15_27;
        fun_325();
        do {
            rbp32 = r13_30 * 0x3e8;
            *reinterpret_cast<int32_t*>(&r12_33) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_33) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("ror eax, 0x2");
                if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r12_33 + rbp32) * 0xcccccccd) <= 0xccccccc) {
                    *reinterpret_cast<int32_t*>(&rdi31) = 10;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi31) + 4) = reinterpret_cast<int32_t>(fputc);
                    rsi29 = r15_27;
                    fun_35b();
                }
                *rdi31 = *rsi29;
                rdi31 = r15_27;
                rsi29 = reinterpret_cast<int32_t*>(0x375);
                fun_37c();
                ++r12_33;
            } while (r12_33 != 0x4b0);
            ++r13_30;
        } while (r13_30 != 0x3e8);
        fun_3ac(r15_27, 0x39b, 0x3a2, rcx28);
        *reinterpret_cast<int32_t*>(&rsi23) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi23) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx14) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx14) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx12 = r15_27;
        fun_3c5(0x3b3, 22, 1, rcx12);
    }
    fun_2ce(rbx34, rsi23, rdx14, rcx12);
    fun_2d6(r14_3, rsi23, rdx14, rcx12);
    goto v35;
}

void fputc(int32_t edi) {
    if (reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(edi < reinterpret_cast<int32_t>(fputc) == fputc)) | reinterpret_cast<uint1_t>(edi == fputc)) {
        return;
    }
}

void fun_74() {
    return;
}

struct s12 {
    signed char[1] pad1;
    signed char f1;
};

struct s13 {
    signed char[1] pad1;
    signed char f1;
};

void fun_7d() {
    struct s12* rcx1;
    struct s13* rcx2;
    signed char cl3;

    rcx1->f1 = reinterpret_cast<signed char>(rcx2->f1 + cl3);
}

struct s14 {
    int32_t f0;
    int32_t f4;
};

struct s15 {
    int32_t f0;
    int32_t f4;
};

void fun_98(struct s14* rdi, struct s15* rsi, int32_t edx, int64_t rcx) {
    int32_t* rdi5;
    int64_t r15_6;

    rdi->f0 = rsi->f0;
    rdi5 = &rdi->f4;
    __asm__("mulsd xmm2, [r12+rbx*8]");
    __asm__("addsd xmm1, xmm2");
    *rdi5 = rsi->f4;
    if (!reinterpret_cast<int1_t>(r15_6 + 1 == rdi5 + 1)) {
    }
}

void submain(int32_t edi, int64_t rsi) {
    fun_ef(0xf4240, 8);
}

