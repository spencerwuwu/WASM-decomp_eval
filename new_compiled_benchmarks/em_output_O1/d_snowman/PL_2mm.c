
void fun_36a(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx);

void fun_372(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx);

void fun_37a(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx);

void fun_382(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx);

void fun_362(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int64_t r14_5;
    int64_t r15_6;
    int64_t r12_7;
    int64_t r13_8;
    int64_t v9;

    fun_36a(r14_5, rsi, rdx, rcx);
    fun_372(r15_6, rsi, rdx, rcx);
    fun_37a(r12_7, rsi, rdx, rcx);
    fun_382(r13_8, rsi, rdx, rcx);
    goto v9;
}

void fun_43b();

void fputc(int32_t edi, int64_t rsi);

void fun_473(int32_t* rdi, int64_t rsi, int64_t rdx);

void fun_48c(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx);

void fun_418() {
    int32_t* rdi1;
    int32_t* rsi2;
    int32_t* v3;
    int64_t rbp4;
    int64_t rax5;
    int64_t v6;
    int64_t rax7;
    int32_t* v8;
    int32_t* v9;
    int64_t rbx10;
    int64_t r14_11;
    int64_t r15_12;
    int64_t r12_13;
    int64_t r13_14;
    int64_t v15;

    while (1) {
        *rdi1 = *rsi2;
        rdi1 = v3;
        rsi2 = reinterpret_cast<int32_t*>(0x434);
        fun_43b();
        ++rbp4;
        if (rbp4 == 0x4b0) {
            rax5 = reinterpret_cast<int64_t>(__return_address()) + 1;
            if (rax5 == 0x320) 
                break;
            v6 = rax5 * 0x320;
            *reinterpret_cast<int32_t*>(&rbp4) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp4) + 4) = reinterpret_cast<int32_t>(fputc);
        }
        rax7 = v6;
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>((*reinterpret_cast<int32_t*>(&rax7) + *reinterpret_cast<int32_t*>(&rbp4)) * 0xcccccccd) > 0xccccccc) 
            continue;
        *reinterpret_cast<int32_t*>(&rdi1) = 10;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi1) + 4) = reinterpret_cast<int32_t>(fputc);
        rsi2 = v8;
        fun_418();
    }
    fun_473(v9, 0x45d, 0x464);
    fun_48c(0x47a, 22, 1, v9);
    fun_362(rbx10, 22, 1, v9);
    fun_36a(r14_11, 22, 1, v9);
    fun_372(r15_12, 22, 1, v9);
    fun_37a(r12_13, 22, 1, v9);
    fun_382(r13_14, 22, 1, v9);
    goto v15;
}

void fun_43b() {
    int64_t rbp1;
    int64_t rax2;
    int64_t v3;
    int64_t rax4;
    int32_t* rdi5;
    int32_t* rsi6;
    int32_t* v7;
    int32_t* v8;
    int32_t* v9;
    int64_t rbx10;
    int64_t r14_11;
    int64_t r15_12;
    int64_t r12_13;
    int64_t r13_14;
    int64_t v15;

    while (1) {
        ++rbp1;
        if (rbp1 == 0x4b0) {
            rax2 = reinterpret_cast<int64_t>(__return_address()) + 1;
            if (rax2 == 0x320) 
                break;
            v3 = rax2 * 0x320;
            *reinterpret_cast<int32_t*>(&rbp1) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp1) + 4) = reinterpret_cast<int32_t>(fputc);
        }
        rax4 = v3;
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>((*reinterpret_cast<int32_t*>(&rax4) + *reinterpret_cast<int32_t*>(&rbp1)) * 0xcccccccd) <= 0xccccccc) {
            *reinterpret_cast<int32_t*>(&rdi5) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi5) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi6 = v7;
            fun_418();
        }
        *rdi5 = *rsi6;
        rdi5 = v8;
        rsi6 = reinterpret_cast<int32_t*>(0x434);
        fun_43b();
    }
    fun_473(v9, 0x45d, 0x464);
    fun_48c(0x47a, 22, 1, v9);
    fun_362(rbx10, 22, 1, v9);
    fun_36a(r14_11, 22, 1, v9);
    fun_372(r15_12, 22, 1, v9);
    fun_37a(r12_13, 22, 1, v9);
    fun_382(r13_14, 22, 1, v9);
    goto v15;
}

void fun_473(int32_t* rdi, int64_t rsi, int64_t rdx) {
    int32_t* rbp4;
    int64_t rbx5;
    int64_t r14_6;
    int64_t r15_7;
    int64_t r12_8;
    int64_t r13_9;
    int64_t v10;

    fun_48c(0x47a, 22, 1, rbp4);
    fun_362(rbx5, 22, 1, rbp4);
    fun_36a(r14_6, 22, 1, rbp4);
    fun_372(r15_7, 22, 1, rbp4);
    fun_37a(r12_8, 22, 1, rbp4);
    fun_382(r13_9, 22, 1, rbp4);
    goto v10;
}

void fun_3d3();

void fun_3b6(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int32_t* rsi5;
    int32_t* v6;
    int32_t* rbp7;
    int32_t* rdi8;
    int32_t* rbp9;
    int64_t rax10;
    int64_t v11;
    int64_t v12;
    int64_t rbp13;
    int64_t rax14;
    int64_t rbx15;
    int64_t r14_16;
    int64_t r15_17;
    int64_t r12_18;
    int64_t r13_19;
    int64_t v20;

    rsi5 = reinterpret_cast<int32_t*>(0x3bd);
    v6 = rbp7;
    rdi8 = rbp9;
    fun_3d3();
    *reinterpret_cast<int32_t*>(&rax10) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax10) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        v11 = rax10;
        v12 = rax10 * 0x320;
        *reinterpret_cast<int32_t*>(&rbp13) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp13) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rax14 = v12;
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>((*reinterpret_cast<int32_t*>(&rax14) + *reinterpret_cast<int32_t*>(&rbp13)) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi8) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi8) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi5 = v6;
                fun_418();
            }
            *rdi8 = *rsi5;
            rdi8 = v6;
            rsi5 = reinterpret_cast<int32_t*>(0x434);
            fun_43b();
            ++rbp13;
        } while (rbp13 != 0x4b0);
        rax10 = v11 + 1;
    } while (rax10 != 0x320);
    fun_473(v6, 0x45d, 0x464);
    fun_48c(0x47a, 22, 1, v6);
    fun_362(rbx15, 22, 1, v6);
    fun_36a(r14_16, 22, 1, v6);
    fun_372(r15_17, 22, 1, v6);
    fun_37a(r12_18, 22, 1, v6);
    fun_382(r13_19, 22, 1, v6);
    goto v20;
}

void fun_36a(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int64_t r15_5;
    int64_t r12_6;
    int64_t r13_7;
    int64_t v8;

    fun_372(r15_5, rsi, rdx, rcx);
    fun_37a(r12_6, rsi, rdx, rcx);
    fun_382(r13_7, rsi, rdx, rcx);
    goto v8;
}

void fun_48c(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int64_t rbx5;
    int64_t r14_6;
    int64_t r15_7;
    int64_t r12_8;
    int64_t r13_9;
    int64_t v10;

    fun_362(rbx5, rsi, rdx, rcx);
    fun_36a(r14_6, rsi, rdx, rcx);
    fun_372(r15_7, rsi, rdx, rcx);
    fun_37a(r12_8, rsi, rdx, rcx);
    fun_382(r13_9, rsi, rdx, rcx);
    goto v10;
}

void fun_3d3() {
    int64_t rax1;
    int64_t v2;
    int64_t v3;
    int64_t rbp4;
    int64_t rax5;
    int32_t* rdi6;
    int32_t* rsi7;
    int32_t* v8;
    int32_t* v9;
    int32_t* v10;
    int64_t rbx11;
    int64_t r14_12;
    int64_t r15_13;
    int64_t r12_14;
    int64_t r13_15;
    int64_t v16;

    *reinterpret_cast<int32_t*>(&rax1) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax1) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        v2 = rax1;
        v3 = rax1 * 0x320;
        *reinterpret_cast<int32_t*>(&rbp4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp4) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rax5 = v3;
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>((*reinterpret_cast<int32_t*>(&rax5) + *reinterpret_cast<int32_t*>(&rbp4)) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi6) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi6) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi7 = v8;
                fun_418();
            }
            *rdi6 = *rsi7;
            rdi6 = v9;
            rsi7 = reinterpret_cast<int32_t*>(0x434);
            fun_43b();
            ++rbp4;
        } while (rbp4 != 0x4b0);
        rax1 = v2 + 1;
    } while (rax1 != 0x320);
    fun_473(v10, 0x45d, 0x464);
    fun_48c(0x47a, 22, 1, v10);
    fun_362(rbx11, 22, 1, v10);
    fun_36a(r14_12, 22, 1, v10);
    fun_372(r15_13, 22, 1, v10);
    fun_37a(r12_14, 22, 1, v10);
    fun_382(r13_15, 22, 1, v10);
    goto v16;
}

void fun_372(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int64_t r12_5;
    int64_t r13_6;
    int64_t v7;

    fun_37a(r12_5, rsi, rdx, rcx);
    fun_382(r13_6, rsi, rdx, rcx);
    goto v7;
}

void fun_37a(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int64_t r13_5;
    int64_t v6;

    fun_382(r13_5, rsi, rdx, rcx);
    goto v6;
}

void fun_382(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int64_t v5;

    goto v5;
}

void fputc(int32_t edi, int64_t rsi) {
}

void fun_8c() {
    signed char* rax1;
    signed char* rax2;
    signed char al3;
    signed char* rax4;
    signed char* rax5;
    signed char al6;

    *rax1 = reinterpret_cast<signed char>(*rax2 + al3);
    *rax4 = reinterpret_cast<signed char>(*rax5 + al6);
}

struct s0 {
    int32_t f0;
    int32_t f1;
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

int64_t* g39a = reinterpret_cast<int64_t*>(0x3d8d48288b48);

void fun_c0(int32_t* rdi, int32_t* rsi, int64_t rdx, int64_t rcx) {
    signed char** v5;
    int64_t rcx6;
    struct s0* rsi7;
    struct s1* rdi8;
    struct s0* rdi9;
    int64_t rax10;
    int64_t rax11;
    int64_t rdx12;
    int64_t rdi13;
    uint64_t rsi14;
    struct s2* rdi15;
    struct s3* rsi16;
    int32_t* r12_17;
    int64_t rcx18;
    int64_t rdx19;
    uint32_t edi20;
    int64_t rsi21;
    uint64_t rsi22;
    struct s4* rdi23;
    struct s5* rsi24;
    int32_t* r13_25;
    int64_t rax26;
    int64_t rdx27;
    int32_t* rdi28;
    int32_t* rbx29;
    struct s6* rsi30;
    struct s7* rdi31;
    struct s8* rdi32;
    struct s9* rsi33;
    struct s8* rdi34;
    int64_t rcx35;
    struct s10* rsi36;
    int32_t* r13_37;
    struct s11* rsi38;
    int32_t* rbx39;
    int32_t* rsi40;
    struct s12* rdi41;
    int32_t* r12_42;
    int32_t ebp43;
    int64_t* rax44;
    int64_t rcx45;

    v5 = reinterpret_cast<signed char**>(__return_address());
    __asm__("movups [rsi+rdx*8], xmm1");
    if (rdx + 1 != 0x44c) 
        goto 0x90;
    if (rcx + 1 == 0x320) {
        *reinterpret_cast<int32_t*>(&rcx6) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx6) + 4) = reinterpret_cast<int32_t>(fputc);
        *rdi = *rsi;
        do {
            *reinterpret_cast<int32_t*>(&rsi7) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi7) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                rdi8 = reinterpret_cast<struct s1*>(reinterpret_cast<int64_t>(rsi7) + 1);
                __asm__("xorps xmm1, xmm1");
                __asm__("cvtsi2sd xmm1, r8d");
                __asm__("divsd xmm1, xmm0");
                rdi8->f0 = rsi7->f0;
                rdi9 = reinterpret_cast<struct s0*>(&rdi8->f4);
                rsi7 = rdi9;
            } while (!reinterpret_cast<int1_t>(rdi9 == 0x384));
            ++rax10;
        } while (rax10 != 0x44c);
        *reinterpret_cast<int32_t*>(&rax11) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax11) + 4) = reinterpret_cast<int32_t>(fputc);
        rdi9->f0 = rsi7->f0;
        do {
            *reinterpret_cast<int32_t*>(&rdx12) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx12) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                *reinterpret_cast<int32_t*>(&rdi13) = *reinterpret_cast<int32_t*>(&rcx6) * static_cast<int32_t>(rdx12 + 3) + 1;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi13) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi14 = reinterpret_cast<uint64_t>(rdi13 * 0x1b4e81b5) >> 39;
                *reinterpret_cast<int32_t*>(&rdi15) = *reinterpret_cast<int32_t*>(&rdi13) - *reinterpret_cast<int32_t*>(&rsi14) * 0x4b0;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi15) + 4) = reinterpret_cast<int32_t>(fputc);
                __asm__("xorps xmm1, xmm1");
                __asm__("cvtsi2sd xmm1, edi");
                __asm__("divsd xmm1, xmm0");
                rsi16 = reinterpret_cast<struct s3*>(r12_17 + rcx6 * 0x960);
                rdi15->f0 = rsi16->f0;
                ++rdx12;
            } while (rdx12 != 0x4b0);
            ++rcx6;
        } while (rcx6 != 0x384);
        *reinterpret_cast<int32_t*>(&rcx18) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx18) + 4) = reinterpret_cast<int32_t>(fputc);
        rdi15->f4 = rsi16->f4;
        do {
            *reinterpret_cast<int32_t*>(&rdx19) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx19) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                edi20 = reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&rax11) * static_cast<int32_t>(rdx19 + 2));
                *reinterpret_cast<uint32_t*>(&rsi21) = edi20 >> 2;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi21) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi22 = reinterpret_cast<uint64_t>(rsi21 * 0x1dca01dd) >> 37;
                *reinterpret_cast<uint32_t*>(&rdi23) = edi20 - *reinterpret_cast<int32_t*>(&rsi22) * 0x44c;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi23) + 4) = reinterpret_cast<int32_t>(fputc);
                __asm__("xorps xmm1, xmm1");
                __asm__("cvtsi2sd xmm1, edi");
                __asm__("divsd xmm1, xmm0");
                rsi24 = reinterpret_cast<struct s5*>(r13_25 + rax11 * 0x960);
                rdi23->f0 = rsi24->f0;
                ++rdx19;
            } while (rdx19 != 0x4b0);
            ++rax11;
        } while (rax11 != 0x320);
        *reinterpret_cast<int32_t*>(&rax26) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax26) + 4) = reinterpret_cast<int32_t>(fputc);
        rdi23->f4 = rsi24->f4;
        do {
            *reinterpret_cast<int32_t*>(&rdx27) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx27) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                rdi28 = rbx29 + rcx18 * 0x708;
                rsi30 = reinterpret_cast<struct s6*>(rdi28 + rdx27 * 2);
                rdi28[rdx27 * 2] = reinterpret_cast<int32_t>(fputc);
                __asm__("xorpd xmm1, xmm1");
                *reinterpret_cast<int32_t*>(&rdi31) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi31) + 4) = reinterpret_cast<int32_t>(fputc);
                do {
                    rdi31->f0 = rsi30->f0;
                    rdi32 = reinterpret_cast<struct s8*>(&rdi31->f4);
                    rsi33 = reinterpret_cast<struct s9*>(&rsi30->f4);
                    __asm__("mulsd xmm2, xmm0");
                    __asm__("mulsd xmm2, [r8+rdx*8]");
                    __asm__("addsd xmm1, xmm2");
                    rdi32->f0 = rsi33->f0;
                    rsi30 = reinterpret_cast<struct s6*>(&rsi33->f4);
                    rdi31 = reinterpret_cast<struct s7*>(reinterpret_cast<int64_t>(&rdi32->f4) + 1);
                } while (!reinterpret_cast<int1_t>(rdi31 == 0x44c));
                ++rdx27;
            } while (rdx27 != 0x384);
            ++rcx18;
        } while (rcx18 != 0x320);
        rdi31->f0 = rsi30->f0;
        rdi34 = reinterpret_cast<struct s8*>(&rdi31->f4);
        do {
            *reinterpret_cast<int32_t*>(&rcx35) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx35) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                rsi36 = reinterpret_cast<struct s10*>(r13_37 + rax26 * 0x960);
                rdi34->f0 = rsi36->f0;
                __asm__("mulsd xmm1, xmm0");
                rdi34->f4 = rsi36->f4;
                *reinterpret_cast<int32_t*>(&rsi38) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi38) + 4) = reinterpret_cast<int32_t>(fputc);
                do {
                    rbx39[rax26 * 0x708] = rsi38->f0;
                    rsi40 = &rsi38->f4;
                    rdi41 = reinterpret_cast<struct s12*>(r12_42 + reinterpret_cast<int64_t>(rsi40) * 0x960);
                    __asm__("mulsd xmm2, [rdi+rcx*8]");
                    __asm__("addsd xmm1, xmm2");
                    rdi41->f0 = *rsi40;
                    rdi34 = reinterpret_cast<struct s8*>(&rdi41->f4);
                    rsi38 = reinterpret_cast<struct s11*>(reinterpret_cast<int64_t>(rsi40 + 1) + 1);
                } while (!reinterpret_cast<int1_t>(rsi38 == 0x384));
                ++rcx35;
            } while (rcx35 != 0x4b0);
            ++rax26;
        } while (rax26 != 0x320);
        if (ebp43 < 43) 
            goto 0x35a;
        if (**v5 != fputc) 
            goto "???";
        rax44 = g39a;
        rcx45 = *rax44;
        fun_3b6(0x3a4, 22, 1, rcx45);
    }
}

