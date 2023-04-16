
struct s0 {
    int32_t f0;
    int32_t f1;
    int32_t f4;
};

void fun_26a(int64_t rdi, struct s0* rsi, struct s0* rdx, int32_t* rcx) {
    int64_t v5;

    goto v5;
}

void fun_307();

void fputc(int32_t edi, int64_t rsi);

void fun_337(int32_t* rdi, int64_t rsi, int64_t rdx, int32_t* rcx);

void fun_350(int64_t rdi, struct s0* rsi, struct s0* rdx, int32_t* rcx);

void fun_2eb() {
    int32_t* rdi1;
    int32_t* rsi2;
    int32_t* r14_3;
    int32_t* r15_4;
    int64_t rbp5;
    int64_t r12_6;
    int64_t r13_7;
    int32_t* r14_8;
    int32_t* r14_9;
    int32_t* rcx10;
    int32_t* r14_11;
    int64_t rbx12;
    int64_t v13;

    while (1) {
        *rdi1 = *rsi2;
        rdi1 = r14_3;
        rsi2 = r15_4;
        fun_307();
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
        fun_2eb();
    }
    fun_337(r14_9, 0x326, 0x32d, rcx10);
    fun_350(0x33e, 22, 1, r14_11);
    fun_26a(rbx12, 22, 1, r14_11);
    goto v13;
}

void fun_307() {
    int64_t rbp1;
    int64_t r12_2;
    int64_t r13_3;
    int32_t* rdi4;
    int32_t* rsi5;
    int32_t* r14_6;
    int32_t* r14_7;
    int32_t* r15_8;
    int32_t* r14_9;
    int32_t* rcx10;
    int32_t* r14_11;
    int64_t rbx12;
    int64_t v13;

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
            fun_2eb();
        }
        *rdi4 = *rsi5;
        rdi4 = r14_7;
        rsi5 = r15_8;
        fun_307();
    }
    fun_337(r14_9, 0x326, 0x32d, rcx10);
    fun_350(0x33e, 22, 1, r14_11);
    fun_26a(rbx12, 22, 1, r14_11);
    goto v13;
}

void fun_337(int32_t* rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int32_t* r14_5;
    int64_t rbx6;
    int64_t v7;

    fun_350(0x33e, 22, 1, r14_5);
    fun_26a(rbx6, 22, 1, r14_5);
    goto v7;
}

void fun_2b9();

void fun_29e(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int32_t* rsi5;
    int64_t r12_6;
    int32_t* rdi7;
    int32_t* r14_8;
    int64_t r13_9;
    int64_t rbp10;
    int32_t* r14_11;
    int32_t* r14_12;
    int32_t* r14_13;
    int32_t* r14_14;
    int64_t rbx15;
    int64_t v16;

    rsi5 = reinterpret_cast<int32_t*>(0x2a5);
    *reinterpret_cast<int32_t*>(&r12_6) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_6) + 4) = reinterpret_cast<int32_t>(fputc);
    rdi7 = r14_8;
    fun_2b9();
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
                fun_2eb();
            }
            *rdi7 = *rsi5;
            rdi7 = r14_12;
            rsi5 = reinterpret_cast<int32_t*>(0x2c0);
            fun_307();
            ++rbp10;
        } while (rbp10 != 0x7d0);
        ++r12_6;
    } while (r12_6 != 0x7d0);
    fun_337(r14_13, 0x326, 0x32d, rcx);
    fun_350(0x33e, 22, 1, r14_14);
    fun_26a(rbx15, 22, 1, r14_14);
    goto v16;
}

void fun_350(int64_t rdi, struct s0* rsi, struct s0* rdx, int32_t* rcx) {
    int64_t rbx5;
    int64_t v6;

    fun_26a(rbx5, rsi, rdx, rcx);
    goto v6;
}

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

int32_t** g282 = reinterpret_cast<int32_t**>(0x3d8d48308b4c);

void fun_10f(struct s1* rdi, struct s2* rsi) {
    int64_t rbx3;
    int64_t rax4;
    int64_t rax5;
    struct s3* rdi6;
    struct s4* rsi7;
    int32_t* rdi8;
    int32_t* rsi9;
    int64_t rcx10;
    int32_t eax11;
    struct s0* rdx12;
    int32_t* rcx13;
    struct s5* rdi14;
    struct s6* rsi15;
    struct s7* rdi16;
    struct s0* rsi17;
    int64_t r8_18;
    struct s8* rdi19;
    struct s9* rsi20;
    int64_t r9_21;
    int32_t ebp22;
    signed char** r14_23;
    int32_t** rax24;
    int32_t* r14_25;
    int32_t* rcx26;
    int32_t* rsi27;
    int64_t r12_28;
    int32_t* rdi29;
    int64_t r13_30;
    int64_t rbp31;
    int64_t v32;

    rbx3 = rax4;
    *reinterpret_cast<int32_t*>(&rax5) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax5) + 4) = reinterpret_cast<int32_t>(fputc);
    rdi->f0 = rsi->f0;
    rdi6 = reinterpret_cast<struct s3*>(&rdi->f4);
    rsi7 = reinterpret_cast<struct s4*>(&rsi->f4);
    rdi6->f0 = rsi7->f0;
    rdi8 = &rdi6->f4;
    rsi9 = &rsi7->f4;
    do {
        __asm__("xorps xmm2, xmm2");
        __asm__("cvtsi2sd xmm2, eax");
        *reinterpret_cast<int32_t*>(&rcx10) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx10) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("xorps xmm3, xmm3");
            __asm__("cvtsi2sd xmm3, edx");
            __asm__("mulsd xmm3, xmm2");
            __asm__("addsd xmm3, xmm0");
            __asm__("divsd xmm3, xmm1");
            *rdi8 = *rsi9;
            ++rdi8;
            ++rsi9;
            ++rcx10;
        } while (rcx10 != 0x7d0);
        ++rax5;
    } while (rax5 != 0x7d0);
    eax11 = reinterpret_cast<int32_t>(fputc);
    *rdi8 = *rsi9;
    do {
        *reinterpret_cast<int32_t*>(&rdx12) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx12) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rcx13) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx13) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rdi14 = reinterpret_cast<struct s5*>(reinterpret_cast<int64_t>(rdx12) - 1);
            rsi15 = reinterpret_cast<struct s6*>(reinterpret_cast<int64_t>(rdx12) + 1);
            rdi14->f0 = rsi15->f0;
            rdi16 = reinterpret_cast<struct s7*>(&rdi14->f4);
            rsi17 = reinterpret_cast<struct s0*>(&rsi15->f4);
            *reinterpret_cast<int32_t*>(&r8_18) = 1;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_18) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                rdi16->f0 = rsi17->f0;
                rdi19 = reinterpret_cast<struct s8*>(&rdi16->f4);
                rsi20 = reinterpret_cast<struct s9*>(&rsi17->f1);
                __asm__("addsd xmm2, [r9+r8*8]");
                __asm__("addsd xmm2, [r9+r8*8+0x8]");
                __asm__("addsd xmm2, xmm1");
                __asm__("addsd xmm2, [r9+r8*8]");
                __asm__("addsd xmm2, [r9+r8*8+0x8]");
                __asm__("addsd xmm2, [r10+r8*8-0x8]");
                __asm__("addsd xmm2, [r10+r8*8]");
                __asm__("addsd xmm2, [r10+r8*8+0x8]");
                __asm__("divsd xmm2, xmm0");
                rdi19->f0 = rsi20->f0;
                rdi16 = reinterpret_cast<struct s7*>(&rdi19->f4);
                rsi17 = reinterpret_cast<struct s0*>(&rsi20->f4);
                r9_21 = r8_18 + 1;
                __asm__("movapd xmm1, xmm2");
                r8_18 = r9_21;
            } while (r9_21 != 0x7cf);
            rcx13 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rcx13) + 1);
            rdx12 = rsi17;
        } while (!reinterpret_cast<int1_t>(rsi17 == 0x7cf));
        ++eax11;
    } while (eax11 != 0x1f4);
    if (ebp22 >= 43 && **r14_23 == fputc) {
        rax24 = g282;
        r14_25 = *rax24;
        rcx26 = r14_25;
        fun_29e(0x28c, 22, 1, rcx26);
        rsi27 = reinterpret_cast<int32_t*>(0x2a5);
        *reinterpret_cast<int32_t*>(&r12_28) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_28) + 4) = reinterpret_cast<int32_t>(fputc);
        rdi29 = r14_25;
        fun_2b9();
        do {
            r13_30 = r12_28 * 0x7d0;
            *reinterpret_cast<int32_t*>(&rbp31) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp31) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("ror eax, 0x2");
                if (reinterpret_cast<uint32_t>(static_cast<int32_t>(rbp31 + r13_30) * 0xcccccccd) <= 0xccccccc) {
                    *reinterpret_cast<int32_t*>(&rdi29) = 10;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi29) + 4) = reinterpret_cast<int32_t>(fputc);
                    rsi27 = r14_25;
                    fun_2eb();
                }
                *rdi29 = *rsi27;
                rdi29 = r14_25;
                rsi27 = reinterpret_cast<int32_t*>(0x2c0);
                fun_307();
                ++rbp31;
            } while (rbp31 != 0x7d0);
            ++r12_28;
        } while (r12_28 != 0x7d0);
        fun_337(r14_25, 0x326, 0x32d, rcx26);
        *reinterpret_cast<int32_t*>(&rsi17) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi17) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx12) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx12) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx13 = r14_25;
        fun_350(0x33e, 22, 1, rcx13);
    }
    fun_26a(rbx3, rsi17, rdx12, rcx13);
    goto v32;
}

void fun_2b9() {
    int64_t r13_1;
    int64_t r12_2;
    int64_t rbp3;
    int32_t* rdi4;
    int32_t* rsi5;
    int32_t* r14_6;
    int32_t* r14_7;
    int32_t* r14_8;
    int32_t* rcx9;
    int32_t* r14_10;
    int64_t rbx11;
    int64_t v12;

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
                fun_2eb();
            }
            *rdi4 = *rsi5;
            rdi4 = r14_7;
            rsi5 = reinterpret_cast<int32_t*>(0x2c0);
            fun_307();
            ++rbp3;
        } while (rbp3 != 0x7d0);
        ++r12_2;
    } while (r12_2 != 0x7d0);
    fun_337(r14_8, 0x326, 0x32d, rcx9);
    fun_350(0x33e, 22, 1, r14_10);
    fun_26a(rbx11, 22, 1, r14_10);
    goto v12;
}

void fputc(int32_t edi, int64_t rsi) {
    if (reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(edi < reinterpret_cast<int32_t>(fputc) == fputc)) | reinterpret_cast<uint1_t>(edi == fputc)) {
        return;
    }
}

struct s10 {
    signed char[1] pad1;
    signed char f1;
};

struct s11 {
    signed char[1] pad1;
    signed char f1;
};

void fun_88() {
    struct s10* rcx1;
    struct s11* rcx2;
    signed char cl3;

    rcx1->f1 = reinterpret_cast<signed char>(rcx2->f1 + cl3);
}

void fun_8c(int32_t* rdi, int32_t* rsi, int64_t rdx) {
    int64_t rbx4;
    int64_t rax5;
    int64_t r10_6;
    int64_t rax7;

    __asm__("addsd xmm2, [r14+rbx*8]");
    __asm__("addsd xmm2, [r14+rbx*8+0x8]");
    __asm__("addsd xmm2, [r15+rbx*8-0x8]");
    __asm__("addsd xmm2, [r15+rbx*8]");
    __asm__("addsd xmm2, [r15+rbx*8+0x8]");
    __asm__("divsd xmm2, xmm0");
    *rdi = *rsi;
    __asm__("movapd xmm1, xmm2");
    if (rbx4 + 1 == rax5) {
        if (r10_6 != rax7) {
        }
    }
}

void submain(int32_t edi, int64_t rsi) {
    fun_10f(0x3d0900, 8);
}

