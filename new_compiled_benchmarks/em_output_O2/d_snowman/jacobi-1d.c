
struct s0 {
    int32_t f0;
    int32_t f4;
    int32_t f8;
};

struct s1 {
    int32_t f0;
    int32_t f4;
};

struct s2 {
    signed char[15992] pad15992;
    int32_t f3e78;
    signed char[4] pad16000;
    int32_t f3e80;
};

void fun_6d1(struct s2* rdi, struct s1* rsi, int64_t rdx, int32_t* rcx);

void fun_6c9(struct s0* rdi, struct s1* rsi, int64_t rdx, int32_t* rcx) {
    struct s2* r14_5;
    int64_t v6;

    fun_6d1(r14_5, rsi, rdx, rcx);
    goto v6;
}

void fputc(int32_t edi);

void fun_771();

void fun_78b(int32_t* rdi, int64_t rsi, int64_t rdx, int32_t* rcx);

void fun_7a4(int64_t rdi, struct s1* rsi, int64_t rdx, int32_t* rcx);

void fun_743() {
    int64_t r13_1;
    int32_t eax2;
    int32_t* rdi3;
    int32_t* rsi4;
    int32_t* r15_5;
    int32_t* r15_6;
    int32_t* r12_7;
    int32_t* r15_8;
    int32_t* rcx9;
    int32_t* r15_10;
    struct s0* rbx11;
    struct s2* r14_12;
    int64_t v13;

    while (++r13_1, r13_1 != 0x7d0) {
        eax2 = *reinterpret_cast<int32_t*>(&r13_1) * 0xffffcccd;
        __asm__("ror ax, 0x2");
        if (static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax2)) <= 0xccc) {
            *reinterpret_cast<int32_t*>(&rdi3) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi3) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi4 = r15_5;
            fun_771();
        }
        *rdi3 = *rsi4;
        rdi3 = r15_6;
        rsi4 = r12_7;
        fun_743();
    }
    fun_78b(r15_8, 0x77a, 0x781, rcx9);
    fun_7a4(0x792, 22, 1, r15_10);
    fun_6c9(rbx11, 22, 1, r15_10);
    fun_6d1(r14_12, 22, 1, r15_10);
    goto v13;
}

void fun_771() {
    int32_t* rdi1;
    int32_t* rsi2;
    int32_t* r15_3;
    int32_t* r12_4;
    int64_t r13_5;
    int32_t eax6;
    int32_t* r15_7;
    int32_t* r15_8;
    int32_t* rcx9;
    int32_t* r15_10;
    struct s0* rbx11;
    struct s2* r14_12;
    int64_t v13;

    while (1) {
        do {
            *rdi1 = *rsi2;
            rdi1 = r15_3;
            rsi2 = r12_4;
            fun_743();
            ++r13_5;
            if (r13_5 == 0x7d0) 
                goto addr_773_7;
            eax6 = *reinterpret_cast<int32_t*>(&r13_5) * 0xffffcccd;
            __asm__("ror ax, 0x2");
        } while (static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax6)) > 0xccc);
        *reinterpret_cast<int32_t*>(&rdi1) = 10;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi1) + 4) = reinterpret_cast<int32_t>(fputc);
        rsi2 = r15_7;
        fun_771();
    }
    addr_773_7:
    fun_78b(r15_8, 0x77a, 0x781, rcx9);
    fun_7a4(0x792, 22, 1, r15_10);
    fun_6c9(rbx11, 22, 1, r15_10);
    fun_6d1(r14_12, 22, 1, r15_10);
    goto v13;
}

void fun_720();

void fun_705(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int32_t* rsi5;
    int64_t r13_6;
    int32_t* rdi7;
    int32_t* r15_8;
    int32_t eax9;
    int32_t* r15_10;
    int32_t* r15_11;
    int32_t* r15_12;
    int32_t* r15_13;
    struct s0* rbx14;
    struct s2* r14_15;
    int64_t v16;

    rsi5 = reinterpret_cast<int32_t*>(0x70c);
    *reinterpret_cast<int32_t*>(&r13_6) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_6) + 4) = reinterpret_cast<int32_t>(fputc);
    rdi7 = r15_8;
    fun_720();
    do {
        eax9 = *reinterpret_cast<int32_t*>(&r13_6) * 0xffffcccd;
        __asm__("ror ax, 0x2");
        if (static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax9)) <= 0xccc) {
            *reinterpret_cast<int32_t*>(&rdi7) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi7) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi5 = r15_10;
            fun_771();
        }
        *rdi7 = *rsi5;
        rdi7 = r15_11;
        rsi5 = reinterpret_cast<int32_t*>(0x727);
        fun_743();
        ++r13_6;
    } while (r13_6 != 0x7d0);
    fun_78b(r15_12, 0x77a, 0x781, rcx);
    fun_7a4(0x792, 22, 1, r15_13);
    fun_6c9(rbx14, 22, 1, r15_13);
    fun_6d1(r14_15, 22, 1, r15_13);
    goto v16;
}

void fun_6d1(struct s2* rdi, struct s1* rsi, int64_t rdx, int32_t* rcx) {
    int64_t v5;

    goto v5;
}

struct s3 {
    int32_t f0;
    int32_t f4;
};

struct s4 {
    int32_t f0;
    int32_t f4;
};

struct s2* fun_351(struct s3* rdi, struct s4* rsi);

int32_t g7d0;

/* .LCPI1_6 */
int32_t LCPI1_6 = 0xff855354;

int32_t g7d4;

int32_t gc = 0x2f78e0f;

int32_t g7d8;

/* .LCPI1_7 */
int32_t LCPI1_7 = 0x468d0000;

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

int32_t** g6e9 = reinterpret_cast<int32_t**>(0x3d8d48388b4c);

void fun_33f(int64_t rdi, int64_t rsi) {
    struct s0* rbx3;
    struct s0* rax4;
    struct s2* rax5;
    struct s2* r14_6;
    int64_t rax7;
    struct s5* rdi8;
    struct s6* rsi9;
    struct s7* rdi10;
    struct s8* rsi11;
    struct s9* rdi12;
    struct s10* rsi13;
    struct s11* rdi14;
    struct s12* rsi15;
    int32_t* rcx16;
    int32_t* rsi17;
    struct s0* rdi18;
    unsigned char al19;
    int64_t rdx20;
    struct s1* rdi21;
    struct s1* rsi22;
    int64_t rsi23;
    int32_t* rsi24;
    struct s1* rsi25;
    int64_t rsi26;
    int32_t* rsi27;
    int32_t ebp28;
    signed char** r15_29;
    int32_t** rax30;
    int32_t* r15_31;
    int32_t* rcx32;
    int32_t* rsi33;
    int64_t r13_34;
    int32_t* rdi35;
    int32_t eax36;
    int64_t v37;

    rbx3 = rax4;
    rax5 = fun_351(0x7d0, 8);
    r14_6 = rax5;
    *reinterpret_cast<int32_t*>(&rax7) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax7) + 4) = reinterpret_cast<int32_t>(fputc);
    if (reinterpret_cast<uint64_t>(rax5) - reinterpret_cast<uint64_t>(rbx3) >= 16) {
        __asm__("movdqa xmm0, [rip+0x0]");
        __asm__("movapd xmm1, [rip+0x0]");
        __asm__("movapd xmm2, [rip+0x0]");
        __asm__("movapd xmm3, [rip+0x0]");
        __asm__("movdqa xmm4, [rip+0x0]");
        __asm__("movdqa xmm5, [rip+0x0]");
        do {
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
            rax7 = rax7 + 4;
            __asm__("paddd xmm0, xmm5");
        } while (rax7 != 0x7d0);
    } else {
        g7d0 = LCPI1_6;
        g7d4 = gc;
        g7d8 = LCPI1_7;
        rdi8 = reinterpret_cast<struct s5*>(0x7dc);
        rsi9 = reinterpret_cast<struct s6*>(20);
        do {
            __asm__("xorps xmm3, xmm3");
            __asm__("cvtsi2sd xmm3, eax");
            __asm__("movapd xmm4, xmm3");
            __asm__("addsd xmm4, xmm0");
            __asm__("divsd xmm4, xmm1");
            rdi8->f0 = rsi9->f0;
            rdi10 = reinterpret_cast<struct s7*>(&rdi8->f4);
            rsi11 = reinterpret_cast<struct s8*>(&rsi9->f4);
            __asm__("addsd xmm3, xmm2");
            __asm__("divsd xmm3, xmm1");
            rdi10->f0 = rsi11->f0;
            rdi12 = reinterpret_cast<struct s9*>(&rdi10->f4);
            rsi13 = reinterpret_cast<struct s10*>(&rsi11->f4);
            __asm__("xorps xmm3, xmm3");
            __asm__("cvtsi2sd xmm3, ecx");
            __asm__("movapd xmm4, xmm3");
            __asm__("addsd xmm4, xmm0");
            __asm__("divsd xmm4, xmm1");
            rdi12->f0 = rsi13->f0;
            rdi14 = reinterpret_cast<struct s11*>(&rdi12->f4);
            rsi15 = reinterpret_cast<struct s12*>(&rsi13->f4);
            __asm__("addsd xmm3, xmm2");
            __asm__("divsd xmm3, xmm1");
            rdi14->f0 = rsi15->f0;
            rdi8 = reinterpret_cast<struct s5*>(&rdi14->f4);
            rsi9 = reinterpret_cast<struct s6*>(&rsi15->f4);
            rax7 = rax7 + 2;
        } while (rax7 != 0x7d0);
    }
    rcx16 = &rbx3->f8;
    rsi17 = &r14_6->f3e80;
    rdi18 = reinterpret_cast<struct s0*>(&r14_6->f3e78);
    al19 = reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(rbx3) < reinterpret_cast<uint64_t>(rdi18))) & static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(r14_6) + 8 < reinterpret_cast<uint64_t>(rbx3) + 0x3e80)));
    *reinterpret_cast<unsigned char*>(&rsi17) = reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(rcx16) < reinterpret_cast<uint64_t>(rsi17));
    *reinterpret_cast<unsigned char*>(&rcx16) = reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(r14_6) < reinterpret_cast<uint64_t>(rbx3) + 0x3e78)) & *reinterpret_cast<unsigned char*>(&rsi17));
    *reinterpret_cast<int32_t*>(&rdx20) = reinterpret_cast<int32_t>(fputc);
    rdi18->f0 = *rsi17;
    rdi21 = reinterpret_cast<struct s1*>(&rdi18->f4);
    __asm__("movapd xmm1, [rip+0x0]");
    do {
        *reinterpret_cast<int32_t*>(&rsi22) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi22) + 4) = reinterpret_cast<int32_t>(fputc);
        if (reinterpret_cast<int1_t>(al19 == fputc)) {
            *reinterpret_cast<int32_t*>(&rsi23) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi23) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("movupd xmm2, [rbx+rsi*8]");
                __asm__("movupd xmm3, [rbx+rsi*8+0x10]");
                __asm__("movupd xmm4, [rbx+r8]");
                __asm__("addpd xmm4, xmm2");
                __asm__("movupd xmm2, [rbx+r8+0x10]");
                __asm__("addpd xmm2, xmm3");
                rdi21 = reinterpret_cast<struct s1*>(reinterpret_cast<uint64_t>(rsi23 * 8) | 16);
                __asm__("movupd xmm3, [rbx+rdi]");
                __asm__("addpd xmm3, xmm4");
                __asm__("movupd xmm4, [rbx+rdi+0x10]");
                __asm__("addpd xmm4, xmm2");
                __asm__("mulpd xmm3, xmm1");
                __asm__("mulpd xmm4, xmm1");
                __asm__("movupd [r14+r8], xmm3");
                __asm__("movupd [r14+r8+0x10], xmm4");
                rsi23 = rsi23 + 4;
            } while (rsi23 != 0x7cc);
            *reinterpret_cast<int32_t*>(&rsi22) = 0x7cd;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi22) + 4) = reinterpret_cast<int32_t>(fputc);
        }
        do {
            __asm__("movupd xmm2, [rbx+rsi*8-0x8]");
            __asm__("movapd xmm3, xmm2");
            __asm__("unpckhpd xmm3, xmm2");
            __asm__("addsd xmm3, xmm2");
            __asm__("addsd xmm3, [rbx+rsi*8+0x8]");
            __asm__("mulsd xmm3, xmm0");
            rdi21->f0 = rsi22->f0;
            rsi24 = &rsi22->f4;
            __asm__("movupd xmm2, [rbx+rsi*8]");
            __asm__("movapd xmm3, xmm2");
            __asm__("unpckhpd xmm3, xmm2");
            __asm__("addsd xmm3, xmm2");
            __asm__("addsd xmm3, [rbx+rsi*8+0x10]");
            __asm__("mulsd xmm3, xmm0");
            rdi21->f4 = *rsi24;
            rdi21 = reinterpret_cast<struct s1*>(reinterpret_cast<uint64_t>(rsi24 + 1) + 2);
            rsi22 = rdi21;
        } while (!reinterpret_cast<int1_t>(rdi21 == 0x7cf));
        *reinterpret_cast<int32_t*>(&rsi25) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi25) + 4) = reinterpret_cast<int32_t>(fputc);
        if (reinterpret_cast<int1_t>(*reinterpret_cast<unsigned char*>(&rcx16) == fputc)) {
            *reinterpret_cast<int32_t*>(&rsi26) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi26) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("movupd xmm2, [r14+rsi*8]");
                __asm__("movupd xmm3, [r14+rsi*8+0x10]");
                __asm__("movupd xmm4, [r14+r8]");
                __asm__("addpd xmm4, xmm2");
                __asm__("movupd xmm2, [r14+r8+0x10]");
                __asm__("addpd xmm2, xmm3");
                rdi21 = reinterpret_cast<struct s1*>(reinterpret_cast<uint64_t>(rsi26 * 8) | 16);
                __asm__("movupd xmm3, [r14+rdi]");
                __asm__("addpd xmm3, xmm4");
                __asm__("movupd xmm4, [r14+rdi+0x10]");
                __asm__("addpd xmm4, xmm2");
                __asm__("mulpd xmm3, xmm1");
                __asm__("mulpd xmm4, xmm1");
                __asm__("movupd [rbx+r8], xmm3");
                __asm__("movupd [rbx+r8+0x10], xmm4");
                rsi26 = rsi26 + 4;
            } while (rsi26 != 0x7cc);
            *reinterpret_cast<int32_t*>(&rsi25) = 0x7cd;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi25) + 4) = reinterpret_cast<int32_t>(fputc);
        }
        do {
            __asm__("movupd xmm2, [r14+rsi*8-0x8]");
            __asm__("movapd xmm3, xmm2");
            __asm__("unpckhpd xmm3, xmm2");
            __asm__("addsd xmm3, xmm2");
            __asm__("addsd xmm3, [r14+rsi*8+0x8]");
            __asm__("mulsd xmm3, xmm0");
            rdi21->f0 = rsi25->f0;
            rsi27 = &rsi25->f4;
            __asm__("movupd xmm2, [r14+rsi*8]");
            __asm__("movapd xmm3, xmm2");
            __asm__("unpckhpd xmm3, xmm2");
            __asm__("addsd xmm3, xmm2");
            __asm__("addsd xmm3, [r14+rsi*8+0x10]");
            __asm__("mulsd xmm3, xmm0");
            rdi21->f4 = *rsi27;
            rdi21 = reinterpret_cast<struct s1*>(reinterpret_cast<uint64_t>(rsi27 + 1) + 2);
            rsi25 = rdi21;
        } while (!reinterpret_cast<int1_t>(rdi21 == 0x7cf));
        *reinterpret_cast<int32_t*>(&rdx20) = *reinterpret_cast<int32_t*>(&rdx20) + 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx20) + 4) = reinterpret_cast<int32_t>(fputc);
    } while (*reinterpret_cast<int32_t*>(&rdx20) != 0x1f4);
    if (ebp28 >= 43 && **r15_29 == fputc) {
        rax30 = g6e9;
        r15_31 = *rax30;
        rcx32 = r15_31;
        fun_705(0x6f3, 22, 1, rcx32);
        rsi33 = reinterpret_cast<int32_t*>(0x70c);
        *reinterpret_cast<int32_t*>(&r13_34) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_34) + 4) = reinterpret_cast<int32_t>(fputc);
        rdi35 = r15_31;
        fun_720();
        do {
            eax36 = *reinterpret_cast<int32_t*>(&r13_34) * 0xffffcccd;
            __asm__("ror ax, 0x2");
            if (static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax36)) <= 0xccc) {
                *reinterpret_cast<int32_t*>(&rdi35) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi35) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi33 = r15_31;
                fun_771();
            }
            *rdi35 = *rsi33;
            rdi35 = r15_31;
            rsi33 = reinterpret_cast<int32_t*>(0x727);
            fun_743();
            ++r13_34;
        } while (r13_34 != 0x7d0);
        fun_78b(r15_31, 0x77a, 0x781, rcx32);
        *reinterpret_cast<int32_t*>(&rsi25) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi25) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx20) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx20) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx16 = r15_31;
        fun_7a4(0x792, 22, 1, rcx16);
    }
    fun_6c9(rbx3, rsi25, rdx20, rcx16);
    fun_6d1(r14_6, rsi25, rdx20, rcx16);
    goto v37;
}

void fun_720() {
    int32_t eax1;
    int64_t r13_2;
    int32_t* rdi3;
    int32_t* rsi4;
    int32_t* r15_5;
    int32_t* r15_6;
    int32_t* r15_7;
    int32_t* rcx8;
    int32_t* r15_9;
    struct s0* rbx10;
    struct s2* r14_11;
    int64_t v12;

    do {
        eax1 = *reinterpret_cast<int32_t*>(&r13_2) * 0xffffcccd;
        __asm__("ror ax, 0x2");
        if (static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax1)) <= 0xccc) {
            *reinterpret_cast<int32_t*>(&rdi3) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi3) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi4 = r15_5;
            fun_771();
        }
        *rdi3 = *rsi4;
        rdi3 = r15_6;
        rsi4 = reinterpret_cast<int32_t*>(0x727);
        fun_743();
        ++r13_2;
    } while (r13_2 != 0x7d0);
    fun_78b(r15_7, 0x77a, 0x781, rcx8);
    fun_7a4(0x792, 22, 1, r15_9);
    fun_6c9(rbx10, 22, 1, r15_9);
    fun_6d1(r14_11, 22, 1, r15_9);
    goto v12;
}

void fun_78b(int32_t* rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int32_t* r15_5;
    struct s0* rbx6;
    struct s2* r14_7;
    int64_t v8;

    fun_7a4(0x792, 22, 1, r15_5);
    fun_6c9(rbx6, 22, 1, r15_5);
    fun_6d1(r14_7, 22, 1, r15_5);
    goto v8;
}

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

struct s18 {
    int32_t f0;
    int32_t f4;
};

struct s19 {
    int32_t f0;
    int32_t f4;
};

struct s20 {
    int32_t f0;
    int32_t f4;
};

struct s21 {
    int32_t f0;
    int32_t f4;
};

struct s22 {
    int32_t f0;
    int32_t f4;
};

struct s23 {
    int32_t f0;
    int32_t f4;
};

struct s24 {
    int32_t f0;
    int32_t f4;
};

struct s25 {
    signed char[8] pad8;
    int32_t f8;
};

struct s2* fun_351(struct s3* rdi, struct s4* rsi) {
    struct s2* r14_3;
    struct s2* rax4;
    int64_t rax5;
    int64_t rax6;
    int64_t rbx7;
    struct s13* rdi8;
    struct s14* rsi9;
    struct s15* rdi10;
    struct s16* rsi11;
    struct s17* rdi12;
    struct s18* rsi13;
    struct s19* rdi14;
    struct s20* rsi15;
    struct s21* rdi16;
    struct s22* rsi17;
    struct s23* rdi18;
    struct s24* rsi19;
    int32_t* rcx20;
    struct s25* rbx21;
    int32_t* rsi22;
    struct s0* rdi23;
    unsigned char al24;
    struct s0* rbx25;
    int64_t rbx26;
    void* rbx27;
    int64_t rdx28;
    struct s1* rdi29;
    struct s1* rsi30;
    int64_t rsi31;
    int32_t* rsi32;
    struct s1* rsi33;
    int64_t rsi34;
    int32_t* rsi35;
    int32_t ebp36;
    signed char** r15_37;
    int32_t** rax38;
    int32_t* r15_39;
    int32_t* rcx40;
    int32_t* rsi41;
    int64_t r13_42;
    int32_t* rdi43;
    int32_t eax44;
    struct s0* rbx45;
    int64_t v46;

    r14_3 = rax4;
    *reinterpret_cast<int32_t*>(&rax5) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax5) + 4) = reinterpret_cast<int32_t>(fputc);
    if (reinterpret_cast<uint64_t>(rax6 - rbx7) >= 16) {
        __asm__("movdqa xmm0, [rip+0x0]");
        __asm__("movapd xmm1, [rip+0x0]");
        __asm__("movapd xmm2, [rip+0x0]");
        __asm__("movapd xmm3, [rip+0x0]");
        __asm__("movdqa xmm4, [rip+0x0]");
        __asm__("movdqa xmm5, [rip+0x0]");
        do {
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
            rax5 = rax5 + 4;
            __asm__("paddd xmm0, xmm5");
        } while (rax5 != 0x7d0);
    } else {
        rdi->f0 = rsi->f0;
        rdi8 = reinterpret_cast<struct s13*>(&rdi->f4);
        rsi9 = reinterpret_cast<struct s14*>(&rsi->f4);
        rdi8->f0 = rsi9->f0;
        rdi10 = reinterpret_cast<struct s15*>(&rdi8->f4);
        rsi11 = reinterpret_cast<struct s16*>(&rsi9->f4);
        rdi10->f0 = rsi11->f0;
        rdi12 = reinterpret_cast<struct s17*>(&rdi10->f4);
        rsi13 = reinterpret_cast<struct s18*>(&rsi11->f4);
        do {
            __asm__("xorps xmm3, xmm3");
            __asm__("cvtsi2sd xmm3, eax");
            __asm__("movapd xmm4, xmm3");
            __asm__("addsd xmm4, xmm0");
            __asm__("divsd xmm4, xmm1");
            rdi12->f0 = rsi13->f0;
            rdi14 = reinterpret_cast<struct s19*>(&rdi12->f4);
            rsi15 = reinterpret_cast<struct s20*>(&rsi13->f4);
            __asm__("addsd xmm3, xmm2");
            __asm__("divsd xmm3, xmm1");
            rdi14->f0 = rsi15->f0;
            rdi16 = reinterpret_cast<struct s21*>(&rdi14->f4);
            rsi17 = reinterpret_cast<struct s22*>(&rsi15->f4);
            __asm__("xorps xmm3, xmm3");
            __asm__("cvtsi2sd xmm3, ecx");
            __asm__("movapd xmm4, xmm3");
            __asm__("addsd xmm4, xmm0");
            __asm__("divsd xmm4, xmm1");
            rdi16->f0 = rsi17->f0;
            rdi18 = reinterpret_cast<struct s23*>(&rdi16->f4);
            rsi19 = reinterpret_cast<struct s24*>(&rsi17->f4);
            __asm__("addsd xmm3, xmm2");
            __asm__("divsd xmm3, xmm1");
            rdi18->f0 = rsi19->f0;
            rdi12 = reinterpret_cast<struct s17*>(&rdi18->f4);
            rsi13 = reinterpret_cast<struct s18*>(&rsi19->f4);
            rax5 = rax5 + 2;
        } while (rax5 != 0x7d0);
    }
    rcx20 = &rbx21->f8;
    rsi22 = &r14_3->f3e80;
    rdi23 = reinterpret_cast<struct s0*>(&r14_3->f3e78);
    al24 = reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(rbx25) < reinterpret_cast<uint64_t>(rdi23))) & static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(r14_3) + 8 < reinterpret_cast<uint64_t>(rbx26 + 0x3e80))));
    *reinterpret_cast<unsigned char*>(&rsi22) = reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(rcx20) < reinterpret_cast<uint64_t>(rsi22));
    *reinterpret_cast<unsigned char*>(&rcx20) = reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(r14_3) < reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(rbx27) + 0x3e78))) & *reinterpret_cast<unsigned char*>(&rsi22));
    *reinterpret_cast<int32_t*>(&rdx28) = reinterpret_cast<int32_t>(fputc);
    rdi23->f0 = *rsi22;
    rdi29 = reinterpret_cast<struct s1*>(&rdi23->f4);
    __asm__("movapd xmm1, [rip+0x0]");
    do {
        *reinterpret_cast<int32_t*>(&rsi30) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi30) + 4) = reinterpret_cast<int32_t>(fputc);
        if (reinterpret_cast<int1_t>(al24 == fputc)) {
            *reinterpret_cast<int32_t*>(&rsi31) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi31) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("movupd xmm2, [rbx+rsi*8]");
                __asm__("movupd xmm3, [rbx+rsi*8+0x10]");
                __asm__("movupd xmm4, [rbx+r8]");
                __asm__("addpd xmm4, xmm2");
                __asm__("movupd xmm2, [rbx+r8+0x10]");
                __asm__("addpd xmm2, xmm3");
                rdi29 = reinterpret_cast<struct s1*>(reinterpret_cast<uint64_t>(rsi31 * 8) | 16);
                __asm__("movupd xmm3, [rbx+rdi]");
                __asm__("addpd xmm3, xmm4");
                __asm__("movupd xmm4, [rbx+rdi+0x10]");
                __asm__("addpd xmm4, xmm2");
                __asm__("mulpd xmm3, xmm1");
                __asm__("mulpd xmm4, xmm1");
                __asm__("movupd [r14+r8], xmm3");
                __asm__("movupd [r14+r8+0x10], xmm4");
                rsi31 = rsi31 + 4;
            } while (rsi31 != 0x7cc);
            *reinterpret_cast<int32_t*>(&rsi30) = 0x7cd;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi30) + 4) = reinterpret_cast<int32_t>(fputc);
        }
        do {
            __asm__("movupd xmm2, [rbx+rsi*8-0x8]");
            __asm__("movapd xmm3, xmm2");
            __asm__("unpckhpd xmm3, xmm2");
            __asm__("addsd xmm3, xmm2");
            __asm__("addsd xmm3, [rbx+rsi*8+0x8]");
            __asm__("mulsd xmm3, xmm0");
            rdi29->f0 = rsi30->f0;
            rsi32 = &rsi30->f4;
            __asm__("movupd xmm2, [rbx+rsi*8]");
            __asm__("movapd xmm3, xmm2");
            __asm__("unpckhpd xmm3, xmm2");
            __asm__("addsd xmm3, xmm2");
            __asm__("addsd xmm3, [rbx+rsi*8+0x10]");
            __asm__("mulsd xmm3, xmm0");
            rdi29->f4 = *rsi32;
            rdi29 = reinterpret_cast<struct s1*>(reinterpret_cast<uint64_t>(rsi32 + 1) + 2);
            rsi30 = rdi29;
        } while (!reinterpret_cast<int1_t>(rdi29 == 0x7cf));
        *reinterpret_cast<int32_t*>(&rsi33) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi33) + 4) = reinterpret_cast<int32_t>(fputc);
        if (reinterpret_cast<int1_t>(*reinterpret_cast<unsigned char*>(&rcx20) == fputc)) {
            *reinterpret_cast<int32_t*>(&rsi34) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi34) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("movupd xmm2, [r14+rsi*8]");
                __asm__("movupd xmm3, [r14+rsi*8+0x10]");
                __asm__("movupd xmm4, [r14+r8]");
                __asm__("addpd xmm4, xmm2");
                __asm__("movupd xmm2, [r14+r8+0x10]");
                __asm__("addpd xmm2, xmm3");
                rdi29 = reinterpret_cast<struct s1*>(reinterpret_cast<uint64_t>(rsi34 * 8) | 16);
                __asm__("movupd xmm3, [r14+rdi]");
                __asm__("addpd xmm3, xmm4");
                __asm__("movupd xmm4, [r14+rdi+0x10]");
                __asm__("addpd xmm4, xmm2");
                __asm__("mulpd xmm3, xmm1");
                __asm__("mulpd xmm4, xmm1");
                __asm__("movupd [rbx+r8], xmm3");
                __asm__("movupd [rbx+r8+0x10], xmm4");
                rsi34 = rsi34 + 4;
            } while (rsi34 != 0x7cc);
            *reinterpret_cast<int32_t*>(&rsi33) = 0x7cd;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi33) + 4) = reinterpret_cast<int32_t>(fputc);
        }
        do {
            __asm__("movupd xmm2, [r14+rsi*8-0x8]");
            __asm__("movapd xmm3, xmm2");
            __asm__("unpckhpd xmm3, xmm2");
            __asm__("addsd xmm3, xmm2");
            __asm__("addsd xmm3, [r14+rsi*8+0x8]");
            __asm__("mulsd xmm3, xmm0");
            rdi29->f0 = rsi33->f0;
            rsi35 = &rsi33->f4;
            __asm__("movupd xmm2, [r14+rsi*8]");
            __asm__("movapd xmm3, xmm2");
            __asm__("unpckhpd xmm3, xmm2");
            __asm__("addsd xmm3, xmm2");
            __asm__("addsd xmm3, [r14+rsi*8+0x10]");
            __asm__("mulsd xmm3, xmm0");
            rdi29->f4 = *rsi35;
            rdi29 = reinterpret_cast<struct s1*>(reinterpret_cast<uint64_t>(rsi35 + 1) + 2);
            rsi33 = rdi29;
        } while (!reinterpret_cast<int1_t>(rdi29 == 0x7cf));
        *reinterpret_cast<int32_t*>(&rdx28) = *reinterpret_cast<int32_t*>(&rdx28) + 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx28) + 4) = reinterpret_cast<int32_t>(fputc);
    } while (*reinterpret_cast<int32_t*>(&rdx28) != 0x1f4);
    if (ebp36 >= 43 && **r15_37 == fputc) {
        rax38 = g6e9;
        r15_39 = *rax38;
        rcx40 = r15_39;
        fun_705(0x6f3, 22, 1, rcx40);
        rsi41 = reinterpret_cast<int32_t*>(0x70c);
        *reinterpret_cast<int32_t*>(&r13_42) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_42) + 4) = reinterpret_cast<int32_t>(fputc);
        rdi43 = r15_39;
        fun_720();
        do {
            eax44 = *reinterpret_cast<int32_t*>(&r13_42) * 0xffffcccd;
            __asm__("ror ax, 0x2");
            if (static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax44)) <= 0xccc) {
                *reinterpret_cast<int32_t*>(&rdi43) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi43) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi41 = r15_39;
                fun_771();
            }
            *rdi43 = *rsi41;
            rdi43 = r15_39;
            rsi41 = reinterpret_cast<int32_t*>(0x727);
            fun_743();
            ++r13_42;
        } while (r13_42 != 0x7d0);
        fun_78b(r15_39, 0x77a, 0x781, rcx40);
        *reinterpret_cast<int32_t*>(&rsi33) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi33) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx28) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx28) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx20 = r15_39;
        fun_7a4(0x792, 22, 1, rcx20);
    }
    fun_6c9(rbx45, rsi33, rdx28, rcx20);
    fun_6d1(r14_3, rsi33, rdx28, rcx20);
    goto v46;
}

void fun_7a4(int64_t rdi, struct s1* rsi, int64_t rdx, int32_t* rcx) {
    struct s0* rbx5;
    struct s2* r14_6;
    int64_t v7;

    fun_6c9(rbx5, rsi, rdx, rcx);
    fun_6d1(r14_6, rsi, rdx, rcx);
    goto v7;
}

void fputc(int32_t edi) {
}

struct s26 {
    int32_t f0;
    int32_t f4;
};

struct s27 {
    int32_t f0;
    int32_t f4;
};

struct s28 {
    int32_t f0;
    int32_t f4;
};

struct s29 {
    int32_t f0;
    int32_t f4;
};

struct s30 {
    int32_t f0;
    int32_t f4;
};

struct s31 {
    int32_t f0;
    int32_t f4;
};

void fun_6c(struct s26* rdi, struct s27* rsi) {
    struct s28* rdi3;
    struct s29* rsi4;
    int64_t r12_5;
    uint64_t r9_6;
    unsigned char r8b7;
    int64_t r15_8;
    int64_t r15_9;
    int64_t r10_10;
    int64_t r11_11;
    int64_t r9_12;
    int64_t r10_13;
    int64_t rbx14;
    struct s30* rdi15;
    struct s31* rsi16;
    int64_t r12_17;
    int64_t rax18;
    int64_t r12_19;
    uint64_t r9_20;
    unsigned char bpl21;
    int64_t r15_22;
    int64_t r15_23;
    int64_t r10_24;
    int64_t r11_25;
    int64_t r9_26;
    int64_t r10_27;
    int64_t rbx28;
    struct s30* rdi29;
    struct s31* rsi30;
    int64_t r12_31;
    int64_t rax32;

    rdi->f0 = rsi->f0;
    rdi3 = reinterpret_cast<struct s28*>(&rdi->f4);
    rsi4 = reinterpret_cast<struct s29*>(&rsi->f4);
    __asm__("movapd xmm1, [rip+0x0]");
    *reinterpret_cast<int32_t*>(&r12_5) = 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_5) + 4) = reinterpret_cast<int32_t>(fputc);
    if (!reinterpret_cast<int1_t>((static_cast<unsigned char>(reinterpret_cast<uint1_t>(r9_6 < 4)) | r8b7) == fputc)) {
        addr_134_6:
        r15_8 = r12_5;
        if ((*reinterpret_cast<unsigned char*>(&rsi4) & 1) != fputc) {
            __asm__("movupd xmm2, [rdx+r12*8-0x8]");
            __asm__("movapd xmm3, xmm2");
            __asm__("unpckhpd xmm3, xmm2");
            __asm__("addsd xmm3, xmm2");
            r15_8 = r12_5 + 1;
            __asm__("addsd xmm3, [rdx+r12*8+0x8]");
            __asm__("mulsd xmm3, xmm0");
            rdi3->f0 = rsi4->f0;
            rdi3 = reinterpret_cast<struct s28*>(&rdi3->f4);
            rsi4 = reinterpret_cast<struct s29*>(&rsi4->f4);
        }
    } else {
        *reinterpret_cast<int32_t*>(&r15_9) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_9) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("movupd xmm2, [rdx+r15*8]");
            __asm__("movupd xmm3, [rdx+r15*8+0x10]");
            __asm__("movupd xmm4, [rdx+r13]");
            __asm__("addpd xmm4, xmm2");
            __asm__("movupd xmm2, [rdx+r13+0x10]");
            __asm__("addpd xmm2, xmm3");
            __asm__("movupd xmm3, [rdx+r12]");
            __asm__("addpd xmm3, xmm4");
            __asm__("movupd xmm4, [rdx+r12+0x10]");
            __asm__("addpd xmm4, xmm2");
            __asm__("mulpd xmm3, xmm1");
            __asm__("mulpd xmm4, xmm1");
            __asm__("movupd [rcx+r13], xmm3");
            __asm__("movupd [rcx+r13+0x10], xmm4");
            r15_9 = r15_9 + 4;
        } while (r15_9 != r10_10);
        r12_5 = r11_11;
        if (r9_12 == r10_13) 
            goto addr_1c4_13; else 
            goto addr_134_6;
    }
    if (~r12_5 != rbx14) {
        do {
            __asm__("movupd xmm2, [rdx+r15*8-0x8]");
            __asm__("movapd xmm3, xmm2");
            __asm__("unpckhpd xmm3, xmm2");
            __asm__("addsd xmm3, xmm2");
            __asm__("addsd xmm3, [rdx+r15*8+0x8]");
            __asm__("mulsd xmm3, xmm0");
            rdi3->f0 = rsi4->f0;
            rdi15 = reinterpret_cast<struct s30*>(&rdi3->f4);
            rsi16 = reinterpret_cast<struct s31*>(&rsi4->f4);
            __asm__("movupd xmm2, [rdx+r15*8]");
            __asm__("movapd xmm3, xmm2");
            __asm__("unpckhpd xmm3, xmm2");
            __asm__("addsd xmm3, xmm2");
            __asm__("addsd xmm3, [rdx+r15*8+0x10]");
            __asm__("mulsd xmm3, xmm0");
            rdi15->f0 = rsi16->f0;
            rdi3 = reinterpret_cast<struct s28*>(&rdi15->f4);
            rsi4 = reinterpret_cast<struct s29*>(&rsi16->f4);
            r12_17 = r15_8 + 2;
            r15_8 = r12_17;
        } while (r12_17 != rax18);
    }
    addr_1c4_13:
    if (*reinterpret_cast<int32_t*>(&rsi4) < 3) {
        addr_90_23:
    } else {
        *reinterpret_cast<int32_t*>(&r12_19) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_19) + 4) = reinterpret_cast<int32_t>(fputc);
        if (!reinterpret_cast<int1_t>((static_cast<unsigned char>(reinterpret_cast<uint1_t>(r9_20 < 4)) | bpl21) == fputc)) {
            addr_264_25:
            r15_22 = r12_19;
            if ((*reinterpret_cast<unsigned char*>(&rsi4) & 1) != fputc) {
                __asm__("movupd xmm2, [rcx+r12*8-0x8]");
                __asm__("movapd xmm3, xmm2");
                __asm__("unpckhpd xmm3, xmm2");
                __asm__("addsd xmm3, xmm2");
                r15_22 = r12_19 + 1;
                __asm__("addsd xmm3, [rcx+r12*8+0x8]");
                __asm__("mulsd xmm3, xmm0");
                rdi3->f0 = rsi4->f0;
                rdi3 = reinterpret_cast<struct s28*>(&rdi3->f4);
                rsi4 = reinterpret_cast<struct s29*>(&rsi4->f4);
            }
        } else {
            *reinterpret_cast<int32_t*>(&r15_23) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_23) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("movupd xmm2, [rcx+r15*8]");
                __asm__("movupd xmm3, [rcx+r15*8+0x10]");
                __asm__("movupd xmm4, [rcx+r13]");
                __asm__("addpd xmm4, xmm2");
                __asm__("movupd xmm2, [rcx+r13+0x10]");
                __asm__("addpd xmm2, xmm3");
                __asm__("movupd xmm3, [rcx+r12]");
                __asm__("addpd xmm3, xmm4");
                __asm__("movupd xmm4, [rcx+r12+0x10]");
                __asm__("addpd xmm4, xmm2");
                __asm__("mulpd xmm3, xmm1");
                __asm__("mulpd xmm4, xmm1");
                __asm__("movupd [rdx+r13], xmm3");
                __asm__("movupd [rdx+r13+0x10], xmm4");
                r15_23 = r15_23 + 4;
            } while (r15_23 != r10_24);
            r12_19 = r11_25;
            if (r9_26 == r10_27) 
                goto addr_90_23; else 
                goto addr_264_25;
        }
    }
    if (~r12_19 != rbx28) {
        do {
            __asm__("movupd xmm2, [rcx+r15*8-0x8]");
            __asm__("movapd xmm3, xmm2");
            __asm__("unpckhpd xmm3, xmm2");
            __asm__("addsd xmm3, xmm2");
            __asm__("addsd xmm3, [rcx+r15*8+0x8]");
            __asm__("mulsd xmm3, xmm0");
            rdi3->f0 = rsi4->f0;
            rdi29 = reinterpret_cast<struct s30*>(&rdi3->f4);
            rsi30 = reinterpret_cast<struct s31*>(&rsi4->f4);
            __asm__("movupd xmm2, [rcx+r15*8]");
            __asm__("movapd xmm3, xmm2");
            __asm__("unpckhpd xmm3, xmm2");
            __asm__("addsd xmm3, xmm2");
            __asm__("addsd xmm3, [rcx+r15*8+0x10]");
            __asm__("mulsd xmm3, xmm0");
            rdi29->f0 = rsi30->f0;
            rdi3 = reinterpret_cast<struct s28*>(&rdi29->f4);
            rsi4 = reinterpret_cast<struct s29*>(&rsi30->f4);
            r12_31 = r15_22 + 2;
            r15_22 = r12_31;
        } while (r12_31 != rax32);
        goto addr_90_23;
    }
}

void fun_98() {
    int64_t rbx1;
    int64_t rbx2;
    signed char al3;
    signed char* rax4;

    __asm__("insd ");
    *reinterpret_cast<signed char*>(rbx1 - 0x1083fc02) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(rbx2 - 0x1083fc02) + reinterpret_cast<signed char>(al3 + *rax4));
}

void fun_309() {
    int64_t v1;

    goto v1;
}

void submain(int32_t edi, int64_t rsi) {
    fun_33f(0x7d0, 8);
}

