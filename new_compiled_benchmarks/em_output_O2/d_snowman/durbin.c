
struct s0 {
    int32_t f0;
    int32_t f4;
};

struct s1 {
    int32_t f0;
    int32_t f4;
};

void fun_529(struct s1* rdi, struct s0* rsi, int64_t rdx, int32_t* rcx);

void fun_521(int64_t rdi, struct s0* rsi, int64_t rdx, int32_t* rcx) {
    struct s1* r14_5;
    int64_t v6;

    fun_529(r14_5, rsi, rdx, rcx);
    goto v6;
}

void fputc();

void fun_5d1();

void fun_5eb(int32_t* rdi, int64_t rsi, int64_t rdx, int32_t* rcx);

void fun_604(int64_t rdi, struct s0* rsi, int64_t rdx, int32_t* rcx);

void fun_5a3() {
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
    int64_t rbx11;
    struct s1* r14_12;
    int64_t v13;

    while (++r13_1, r13_1 != 0x7d0) {
        eax2 = *reinterpret_cast<int32_t*>(&r13_1) * 0xffffcccd;
        __asm__("ror ax, 0x2");
        if (static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax2)) <= 0xccc) {
            *reinterpret_cast<int32_t*>(&rdi3) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi3) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi4 = r15_5;
            fun_5d1();
        }
        *rdi3 = *rsi4;
        rdi3 = r15_6;
        rsi4 = r12_7;
        fun_5a3();
    }
    fun_5eb(r15_8, 0x5da, 0x5e1, rcx9);
    fun_604(0x5f2, 22, 1, r15_10);
    fun_521(rbx11, 22, 1, r15_10);
    fun_529(r14_12, 22, 1, r15_10);
    goto v13;
}

void fun_5d1() {
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
    int64_t rbx11;
    struct s1* r14_12;
    int64_t v13;

    while (1) {
        do {
            *rdi1 = *rsi2;
            rdi1 = r15_3;
            rsi2 = r12_4;
            fun_5a3();
            ++r13_5;
            if (r13_5 == 0x7d0) 
                goto addr_5d3_7;
            eax6 = *reinterpret_cast<int32_t*>(&r13_5) * 0xffffcccd;
            __asm__("ror ax, 0x2");
        } while (static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax6)) > 0xccc);
        *reinterpret_cast<int32_t*>(&rdi1) = 10;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi1) + 4) = reinterpret_cast<int32_t>(fputc);
        rsi2 = r15_7;
        fun_5d1();
    }
    addr_5d3_7:
    fun_5eb(r15_8, 0x5da, 0x5e1, rcx9);
    fun_604(0x5f2, 22, 1, r15_10);
    fun_521(rbx11, 22, 1, r15_10);
    fun_529(r14_12, 22, 1, r15_10);
    goto v13;
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

int32_t** g544 = reinterpret_cast<int32_t**>(0x3d8d48388b4c);

void fun_560(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx);

void fun_57b();

void fun_355() {
    struct s2* r14_1;
    struct s3* r12_2;
    struct s4* rdi3;
    struct s5* rsi4;
    int32_t* r15_5;
    int64_t rbp6;
    struct s6* rdi7;
    struct s0* rsi8;
    uint64_t rcx9;
    int64_t r13_10;
    int64_t rax11;
    uint64_t rdx12;
    int32_t* rsi13;
    struct s7* rdi14;
    int64_t rdx15;
    struct s8* rdi16;
    struct s9* rsi17;
    int32_t* rax18;
    uint64_t r13_19;
    int32_t* rcx20;
    int64_t rdx21;
    struct s10* rdi22;
    struct s11* rsi23;
    int32_t v24;
    signed char** v25;
    int32_t** rax26;
    int32_t* r15_27;
    int32_t* rcx28;
    int32_t* rsi29;
    int64_t r13_30;
    int32_t* rdi31;
    int32_t eax32;
    int64_t rbx33;
    struct s1* r14_34;
    int64_t v35;

    while (1) {
        __asm__("movapd xmm3, [rsp+0x20]");
        r14_1->f0 = r12_2->f0;
        rdi3 = reinterpret_cast<struct s4*>(&r14_1->f4);
        rsi4 = reinterpret_cast<struct s5*>(&r12_2->f4);
        r15_5 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(r15_5) + 1);
        ++rbp6;
        rdi3->f0 = rsi4->f0;
        rdi7 = reinterpret_cast<struct s6*>(&rdi3->f4);
        rsi8 = reinterpret_cast<struct s0*>(&rsi4->f4);
        if (rbp6 == 0x7cf) 
            break;
        if (rbp6 == fputc) {
            __asm__("xorpd xmm0, xmm0");
            if (!reinterpret_cast<int1_t>((*reinterpret_cast<unsigned char*>(&r15_5) & 1) == fputc)) {
                addr_3ed_10:
            } else {
                goto addr_405_12;
            }
        } else {
            rcx9 = reinterpret_cast<uint64_t>(r13_10 + 2) & reinterpret_cast<uint64_t>(r15_5);
            __asm__("xorpd xmm0, xmm0");
            *reinterpret_cast<int32_t*>(&rax11) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax11) + 4) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(&rdx12) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx12) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                rdi7->f0 = *reinterpret_cast<int32_t*>(~rax11 + reinterpret_cast<uint64_t>(r15_5));
                __asm__("mulsd xmm1, [r14+rax*8]");
                rsi13 = reinterpret_cast<int32_t*>(rax11 * 8);
                __asm__("addsd xmm1, xmm0");
                rdi14 = reinterpret_cast<struct s7*>(reinterpret_cast<uint64_t>(r15_5) - rax11);
                rdi14->f0 = *rsi13;
                rdi7 = reinterpret_cast<struct s6*>(&rdi14->f4);
                rsi8 = reinterpret_cast<struct s0*>(reinterpret_cast<uint64_t>(rsi13 + 1) | 8);
                __asm__("mulsd xmm0, [r14+rsi]");
                __asm__("addsd xmm0, xmm1");
                rax11 = rax11 + 2;
                rdx12 = rdx12 + 2;
            } while (rdx12 != rcx9);
            if ((*reinterpret_cast<unsigned char*>(&r15_5) & 1) == fputc) 
                goto addr_405_12; else 
                goto addr_3ed_10;
        }
        rdi7->f0 = rsi8->f0;
        rdi7 = reinterpret_cast<struct s6*>(&rdi7->f4);
        rsi8 = reinterpret_cast<struct s0*>(&rsi8->f4);
        __asm__("mulsd xmm1, [r14+rax*8]");
        __asm__("addsd xmm0, xmm1");
        addr_405_12:
        rdx15 = rbp6 * 8;
        __asm__("movapd xmm1, xmm3");
        __asm__("movapd xmm2, [rip+0x0]");
        __asm__("xorpd xmm1, xmm2");
        __asm__("mulsd xmm1, xmm3");
        __asm__("addsd xmm1, [rip+0x0]");
        __asm__("mulsd xmm4, xmm1");
        __asm__("addsd xmm0, [rbx+r15*8]");
        __asm__("xorpd xmm0, xmm2");
        __asm__("movapd xmm5, xmm0");
        rdi7->f0 = rsi8->f0;
        rdi16 = reinterpret_cast<struct s8*>(&rdi7->f4);
        rsi17 = reinterpret_cast<struct s9*>(&rsi8->f4);
        __asm__("divsd xmm5, xmm4");
        if (reinterpret_cast<uint64_t>(r15_5) >= 4) {
            rax18 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(r15_5) & r13_19);
            __asm__("movapd xmm0, xmm5");
            __asm__("unpcklpd xmm0, xmm5");
            *reinterpret_cast<int32_t*>(&rcx20) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx20) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("movupd xmm1, [r14+rcx*8]");
                __asm__("movupd xmm2, [r14+rcx*8+0x10]");
                rsi17 = reinterpret_cast<struct s9*>(~reinterpret_cast<uint64_t>(rcx20) + reinterpret_cast<uint64_t>(r15_5));
                __asm__("movupd xmm3, [r14+rsi*8-0x18]");
                __asm__("movupd xmm4, [r14+rsi*8-0x8]");
                __asm__("shufpd xmm4, xmm4, 0x1");
                __asm__("shufpd xmm3, xmm3, 0x1");
                __asm__("mulpd xmm4, xmm0");
                __asm__("addpd xmm4, xmm1");
                __asm__("mulpd xmm3, xmm0");
                __asm__("addpd xmm3, xmm2");
                __asm__("movapd [rsp+rcx*8+0x30], xmm4");
                __asm__("movapd [rsp+rcx*8+0x40], xmm3");
                ++rcx20;
            } while (rcx20 != rax18);
            if (r15_5 != rax18) 
                goto addr_4bc_31;
        } else {
            *reinterpret_cast<int32_t*>(&rax18) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax18) + 4) = reinterpret_cast<int32_t>(fputc);
            goto addr_4c0_33;
        }
        addr_340_34:
        rdx21 = rdx15 + 8;
        __asm__("movapd [rsp+0x20], xmm5");
        fun_355();
        continue;
        addr_4bc_31:
        do {
            addr_4c0_33:
            rcx20 = reinterpret_cast<int32_t*>(~reinterpret_cast<uint64_t>(rax18) + reinterpret_cast<uint64_t>(r15_5));
            rdi16->f0 = rsi17->f0;
            rdi22 = reinterpret_cast<struct s10*>(&rdi16->f4);
            rsi23 = reinterpret_cast<struct s11*>(&rsi17->f4);
            __asm__("mulsd xmm0, xmm5");
            __asm__("addsd xmm0, [r14+rax*8]");
            rdi22->f0 = rsi23->f0;
            rdi16 = reinterpret_cast<struct s8*>(&rdi22->f4);
            rsi17 = reinterpret_cast<struct s9*>(&rsi23->f4);
            rax18 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rax18) + 1);
        } while (rax18 != r15_5);
        goto addr_340_34;
    }
    if (v24 >= 43 && **v25 == fputc) {
        rax26 = g544;
        r15_27 = *rax26;
        rcx28 = r15_27;
        fun_560(0x54e, 22, 1, rcx28);
        rsi29 = reinterpret_cast<int32_t*>(0x567);
        *reinterpret_cast<int32_t*>(&r13_30) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_30) + 4) = reinterpret_cast<int32_t>(fputc);
        rdi31 = r15_27;
        fun_57b();
        do {
            eax32 = *reinterpret_cast<int32_t*>(&r13_30) * 0xffffcccd;
            __asm__("ror ax, 0x2");
            if (static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax32)) <= 0xccc) {
                *reinterpret_cast<int32_t*>(&rdi31) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi31) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi29 = r15_27;
                fun_5d1();
            }
            *rdi31 = *rsi29;
            rdi31 = r15_27;
            rsi29 = reinterpret_cast<int32_t*>(0x582);
            fun_5a3();
            ++r13_30;
        } while (r13_30 != 0x7d0);
        fun_5eb(r15_27, 0x5da, 0x5e1, rcx28);
        *reinterpret_cast<int32_t*>(&rsi8) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi8) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx21) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx21) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx20 = r15_27;
        fun_604(0x5f2, 22, 1, rcx20);
    }
    fun_521(rbx33, rsi8, rdx21, rcx20);
    fun_529(r14_34, rsi8, rdx21, rcx20);
    goto v35;
}

void fun_560(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int32_t* rsi5;
    int64_t r13_6;
    int32_t* rdi7;
    int32_t* r15_8;
    int32_t eax9;
    int32_t* r15_10;
    int32_t* r15_11;
    int32_t* r15_12;
    int32_t* r15_13;
    int64_t rbx14;
    struct s1* r14_15;
    int64_t v16;

    rsi5 = reinterpret_cast<int32_t*>(0x567);
    *reinterpret_cast<int32_t*>(&r13_6) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_6) + 4) = reinterpret_cast<int32_t>(fputc);
    rdi7 = r15_8;
    fun_57b();
    do {
        eax9 = *reinterpret_cast<int32_t*>(&r13_6) * 0xffffcccd;
        __asm__("ror ax, 0x2");
        if (static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax9)) <= 0xccc) {
            *reinterpret_cast<int32_t*>(&rdi7) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi7) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi5 = r15_10;
            fun_5d1();
        }
        *rdi7 = *rsi5;
        rdi7 = r15_11;
        rsi5 = reinterpret_cast<int32_t*>(0x582);
        fun_5a3();
        ++r13_6;
    } while (r13_6 != 0x7d0);
    fun_5eb(r15_12, 0x5da, 0x5e1, rcx);
    fun_604(0x5f2, 22, 1, r15_13);
    fun_521(rbx14, 22, 1, r15_13);
    fun_529(r14_15, 22, 1, r15_13);
    goto v16;
}

void fun_529(struct s1* rdi, struct s0* rsi, int64_t rdx, int32_t* rcx) {
    int64_t v5;

    goto v5;
}

struct s12 {
    int32_t f0;
    int32_t f4;
};

struct s13 {
    int32_t f0;
    int32_t f4;
};

struct s1* fun_26b(struct s12* rdi, struct s13* rsi);

int32_t g7d0;

/* .LCPI1_7 */
int32_t LCPI1_7 = 0x81485354;

int32_t g7d4;

int32_t gc = 0x3ea8ec;

int32_t g7d8;

/* .LCPI1_0 */
int32_t LCPI1_0 = 0x100ff200;

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

void fun_259(int64_t rdi, int64_t rsi) {
    int64_t rbx3;
    int64_t rax4;
    struct s1* rax5;
    void* rsp6;
    struct s1* r14_7;
    int64_t rax8;
    struct s14* rdi9;
    struct s0* rsi10;
    int32_t* r15_11;
    int64_t rbp12;
    int32_t* r12_13;
    uint64_t rcx14;
    int64_t rax15;
    uint64_t rdx16;
    int32_t* rsi17;
    struct s15* rdi18;
    int64_t rdx19;
    struct s16* rdi20;
    struct s9* rsi21;
    int32_t* rax22;
    int32_t* rcx23;
    int64_t rdx24;
    int32_t v25;
    struct s17* rdi26;
    int32_t v27;
    struct s18* rdi28;
    struct s11* rsi29;
    int32_t v30;
    signed char** v31;
    int32_t** rax32;
    int32_t* r15_33;
    int32_t* rcx34;
    int32_t* rsi35;
    int64_t r13_36;
    int32_t* rdi37;
    int32_t eax38;
    int64_t v39;

    rbx3 = rax4;
    rax5 = fun_26b(0x7d0, 8);
    rsp6 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 + 8);
    r14_7 = rax5;
    __asm__("movdqa xmm0, [rip+0x0]");
    *reinterpret_cast<int32_t*>(&rax8) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax8) + 4) = reinterpret_cast<int32_t>(fputc);
    __asm__("movdqa xmm1, [rip+0x0]");
    __asm__("movdqa xmm2, [rip+0x0]");
    __asm__("movdqa xmm3, [rip+0x0]");
    __asm__("movdqa xmm4, [rip+0x0]");
    __asm__("movdqa xmm5, [rip+0x0]");
    do {
        __asm__("movdqa xmm6, xmm1");
        __asm__("psubd xmm6, xmm0");
        __asm__("movdqa xmm7, xmm2");
        __asm__("cvtdq2pd xmm6, xmm6");
        __asm__("psubd xmm7, xmm0");
        __asm__("cvtdq2pd xmm7, xmm7");
        __asm__("movups [rbx+rax*8], xmm6");
        __asm__("movups [rbx+rax*8+0x10], xmm7");
        __asm__("movdqa xmm6, xmm3");
        __asm__("psubd xmm6, xmm0");
        __asm__("movdqa xmm7, xmm4");
        __asm__("psubd xmm7, xmm0");
        __asm__("cvtdq2pd xmm6, xmm6");
        __asm__("cvtdq2pd xmm7, xmm7");
        __asm__("movups [rbx+rcx], xmm6");
        __asm__("movups [rbx+rcx+0x10], xmm7");
        rax8 = rax8 + 8;
        __asm__("paddd xmm0, xmm5");
    } while (rax8 != 0x7d0);
    g7d0 = LCPI1_7;
    __asm__("movapd xmm1, [rip+0x0]");
    __asm__("xorpd xmm0, xmm1");
    __asm__("movlpd [r14], xmm0");
    g7d4 = gc;
    __asm__("xorpd xmm3, xmm1");
    g7d8 = LCPI1_0;
    rdi9 = reinterpret_cast<struct s14*>(0x7dc);
    rsi10 = reinterpret_cast<struct s0*>(20);
    *reinterpret_cast<int32_t*>(&r15_11) = 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_11) + 4) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(&rbp12) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp12) + 4) = reinterpret_cast<int32_t>(fputc);
    r12_13 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp6) + 48);
    do {
        if (rbp12 == fputc) {
            __asm__("xorpd xmm0, xmm0");
            if (!reinterpret_cast<int1_t>((*reinterpret_cast<unsigned char*>(&r15_11) & 1) == fputc)) {
                addr_3ed_16:
            } else {
                goto addr_405_18;
            }
        } else {
            rcx14 = 0x7ffffffffffffffe & reinterpret_cast<uint64_t>(r15_11);
            __asm__("xorpd xmm0, xmm0");
            *reinterpret_cast<int32_t*>(&rax15) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax15) + 4) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(&rdx16) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx16) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                rdi9->f0 = *reinterpret_cast<int32_t*>(~rax15 + reinterpret_cast<uint64_t>(r15_11));
                __asm__("mulsd xmm1, [r14+rax*8]");
                rsi17 = reinterpret_cast<int32_t*>(rax15 * 8);
                __asm__("addsd xmm1, xmm0");
                rdi18 = reinterpret_cast<struct s15*>(reinterpret_cast<uint64_t>(r15_11) - rax15);
                rdi18->f0 = *rsi17;
                rdi9 = reinterpret_cast<struct s14*>(&rdi18->f4);
                rsi10 = reinterpret_cast<struct s0*>(reinterpret_cast<uint64_t>(rsi17 + 1) | 8);
                __asm__("mulsd xmm0, [r14+rsi]");
                __asm__("addsd xmm0, xmm1");
                rax15 = rax15 + 2;
                rdx16 = rdx16 + 2;
            } while (rdx16 != rcx14);
            if ((*reinterpret_cast<unsigned char*>(&r15_11) & 1) == fputc) 
                goto addr_405_18; else 
                goto addr_3ed_16;
        }
        rdi9->f0 = rsi10->f0;
        rdi9 = reinterpret_cast<struct s14*>(&rdi9->f4);
        rsi10 = reinterpret_cast<struct s0*>(&rsi10->f4);
        __asm__("mulsd xmm1, [r14+rax*8]");
        __asm__("addsd xmm0, xmm1");
        addr_405_18:
        rdx19 = rbp12 * 8;
        __asm__("movapd xmm1, xmm3");
        __asm__("movapd xmm2, [rip+0x0]");
        __asm__("xorpd xmm1, xmm2");
        __asm__("mulsd xmm1, xmm3");
        __asm__("addsd xmm1, [rip+0x0]");
        __asm__("mulsd xmm4, xmm1");
        __asm__("addsd xmm0, [rbx+r15*8]");
        __asm__("xorpd xmm0, xmm2");
        __asm__("movapd xmm5, xmm0");
        rdi9->f0 = rsi10->f0;
        rdi20 = reinterpret_cast<struct s16*>(&rdi9->f4);
        rsi21 = reinterpret_cast<struct s9*>(&rsi10->f4);
        __asm__("divsd xmm5, xmm4");
        if (reinterpret_cast<uint64_t>(r15_11) >= 4) {
            rax22 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(r15_11) & 0x7ffffffffffffffc);
            __asm__("movapd xmm0, xmm5");
            __asm__("unpcklpd xmm0, xmm5");
            *reinterpret_cast<int32_t*>(&rcx23) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx23) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("movupd xmm1, [r14+rcx*8]");
                __asm__("movupd xmm2, [r14+rcx*8+0x10]");
                rsi21 = reinterpret_cast<struct s9*>(~reinterpret_cast<uint64_t>(rcx23) + reinterpret_cast<uint64_t>(r15_11));
                __asm__("movupd xmm3, [r14+rsi*8-0x18]");
                __asm__("movupd xmm4, [r14+rsi*8-0x8]");
                __asm__("shufpd xmm4, xmm4, 0x1");
                __asm__("shufpd xmm3, xmm3, 0x1");
                __asm__("mulpd xmm4, xmm0");
                __asm__("addpd xmm4, xmm1");
                __asm__("mulpd xmm3, xmm0");
                __asm__("addpd xmm3, xmm2");
                __asm__("movapd [rsp+rcx*8+0x30], xmm4");
                __asm__("movapd [rsp+rcx*8+0x40], xmm3");
                ++rcx23;
            } while (rcx23 != rax22);
            if (r15_11 != rax22) 
                goto addr_4bc_37;
        } else {
            *reinterpret_cast<int32_t*>(&rax22) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax22) + 4) = reinterpret_cast<int32_t>(fputc);
            goto addr_4c0_39;
        }
        addr_340_40:
        rdx24 = rdx19 + 8;
        __asm__("movapd [rsp+0x20], xmm5");
        fun_355();
        __asm__("movapd xmm3, [rsp+0x20]");
        r14_7->f0 = v25;
        rdi26 = reinterpret_cast<struct s17*>(&r14_7->f4);
        r15_11 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(r15_11) + 1);
        ++rbp12;
        rdi26->f0 = v27;
        rdi9 = reinterpret_cast<struct s14*>(&rdi26->f4);
        rsi10 = reinterpret_cast<struct s0*>(r12_13 + 1 + 1);
        continue;
        addr_4bc_37:
        do {
            addr_4c0_39:
            rcx23 = reinterpret_cast<int32_t*>(~reinterpret_cast<uint64_t>(rax22) + reinterpret_cast<uint64_t>(r15_11));
            rdi20->f0 = rsi21->f0;
            rdi28 = reinterpret_cast<struct s18*>(&rdi20->f4);
            rsi29 = reinterpret_cast<struct s11*>(&rsi21->f4);
            __asm__("mulsd xmm0, xmm5");
            __asm__("addsd xmm0, [r14+rax*8]");
            rdi28->f0 = rsi29->f0;
            rdi20 = reinterpret_cast<struct s16*>(&rdi28->f4);
            rsi21 = reinterpret_cast<struct s9*>(&rsi29->f4);
            rax22 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rax22) + 1);
        } while (rax22 != r15_11);
        goto addr_340_40;
    } while (rbp12 != 0x7cf);
    if (v30 >= 43 && **v31 == fputc) {
        rax32 = g544;
        r15_33 = *rax32;
        rcx34 = r15_33;
        fun_560(0x54e, 22, 1, rcx34);
        rsi35 = reinterpret_cast<int32_t*>(0x567);
        *reinterpret_cast<int32_t*>(&r13_36) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_36) + 4) = reinterpret_cast<int32_t>(fputc);
        rdi37 = r15_33;
        fun_57b();
        do {
            eax38 = *reinterpret_cast<int32_t*>(&r13_36) * 0xffffcccd;
            __asm__("ror ax, 0x2");
            if (static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax38)) <= 0xccc) {
                *reinterpret_cast<int32_t*>(&rdi37) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi37) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi35 = r15_33;
                fun_5d1();
            }
            *rdi37 = *rsi35;
            rdi37 = r15_33;
            rsi35 = reinterpret_cast<int32_t*>(0x582);
            fun_5a3();
            ++r13_36;
        } while (r13_36 != 0x7d0);
        fun_5eb(r15_33, 0x5da, 0x5e1, rcx34);
        *reinterpret_cast<int32_t*>(&rsi10) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi10) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx24) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx24) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx23 = r15_33;
        fun_604(0x5f2, 22, 1, rcx23);
    }
    fun_521(rbx3, rsi10, rdx24, rcx23);
    fun_529(r14_7, rsi10, rdx24, rcx23);
    goto v39;
}

void fun_57b() {
    int32_t eax1;
    int64_t r13_2;
    int32_t* rdi3;
    int32_t* rsi4;
    int32_t* r15_5;
    int32_t* r15_6;
    int32_t* r15_7;
    int32_t* rcx8;
    int32_t* r15_9;
    int64_t rbx10;
    struct s1* r14_11;
    int64_t v12;

    do {
        eax1 = *reinterpret_cast<int32_t*>(&r13_2) * 0xffffcccd;
        __asm__("ror ax, 0x2");
        if (static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax1)) <= 0xccc) {
            *reinterpret_cast<int32_t*>(&rdi3) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi3) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi4 = r15_5;
            fun_5d1();
        }
        *rdi3 = *rsi4;
        rdi3 = r15_6;
        rsi4 = reinterpret_cast<int32_t*>(0x582);
        fun_5a3();
        ++r13_2;
    } while (r13_2 != 0x7d0);
    fun_5eb(r15_7, 0x5da, 0x5e1, rcx8);
    fun_604(0x5f2, 22, 1, r15_9);
    fun_521(rbx10, 22, 1, r15_9);
    fun_529(r14_11, 22, 1, r15_9);
    goto v12;
}

void fun_5eb(int32_t* rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int32_t* r15_5;
    int64_t rbx6;
    struct s1* r14_7;
    int64_t v8;

    fun_604(0x5f2, 22, 1, r15_5);
    fun_521(rbx6, 22, 1, r15_5);
    fun_529(r14_7, 22, 1, r15_5);
    goto v8;
}

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

struct s1* fun_26b(struct s12* rdi, struct s13* rsi) {
    void* rsp3;
    struct s1* r14_4;
    struct s1* rax5;
    int64_t rax6;
    struct s19* rdi7;
    struct s20* rsi8;
    struct s21* rdi9;
    struct s22* rsi10;
    struct s14* rdi11;
    struct s0* rsi12;
    int32_t* r15_13;
    int64_t rbp14;
    int32_t* r12_15;
    uint64_t rcx16;
    int64_t rax17;
    uint64_t rdx18;
    int32_t* rsi19;
    struct s23* rdi20;
    int64_t rdx21;
    struct s16* rdi22;
    struct s9* rsi23;
    int32_t* rax24;
    int32_t* rcx25;
    int64_t rdx26;
    int32_t v27;
    struct s17* rdi28;
    int32_t v29;
    struct s18* rdi30;
    struct s11* rsi31;
    int32_t v32;
    signed char** v33;
    int32_t** rax34;
    int32_t* r15_35;
    int32_t* rcx36;
    int32_t* rsi37;
    int64_t r13_38;
    int32_t* rdi39;
    int32_t eax40;
    int64_t rbx41;
    int64_t v42;

    rsp3 = __zero_stack_offset();
    r14_4 = rax5;
    __asm__("movdqa xmm0, [rip+0x0]");
    *reinterpret_cast<int32_t*>(&rax6) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax6) + 4) = reinterpret_cast<int32_t>(fputc);
    __asm__("movdqa xmm1, [rip+0x0]");
    __asm__("movdqa xmm2, [rip+0x0]");
    __asm__("movdqa xmm3, [rip+0x0]");
    __asm__("movdqa xmm4, [rip+0x0]");
    __asm__("movdqa xmm5, [rip+0x0]");
    do {
        __asm__("movdqa xmm6, xmm1");
        __asm__("psubd xmm6, xmm0");
        __asm__("movdqa xmm7, xmm2");
        __asm__("cvtdq2pd xmm6, xmm6");
        __asm__("psubd xmm7, xmm0");
        __asm__("cvtdq2pd xmm7, xmm7");
        __asm__("movups [rbx+rax*8], xmm6");
        __asm__("movups [rbx+rax*8+0x10], xmm7");
        __asm__("movdqa xmm6, xmm3");
        __asm__("psubd xmm6, xmm0");
        __asm__("movdqa xmm7, xmm4");
        __asm__("psubd xmm7, xmm0");
        __asm__("cvtdq2pd xmm6, xmm6");
        __asm__("cvtdq2pd xmm7, xmm7");
        __asm__("movups [rbx+rcx], xmm6");
        __asm__("movups [rbx+rcx+0x10], xmm7");
        rax6 = rax6 + 8;
        __asm__("paddd xmm0, xmm5");
    } while (rax6 != 0x7d0);
    rdi->f0 = rsi->f0;
    rdi7 = reinterpret_cast<struct s19*>(&rdi->f4);
    rsi8 = reinterpret_cast<struct s20*>(&rsi->f4);
    __asm__("movapd xmm1, [rip+0x0]");
    __asm__("xorpd xmm0, xmm1");
    __asm__("movlpd [r14], xmm0");
    rdi7->f0 = rsi8->f0;
    rdi9 = reinterpret_cast<struct s21*>(&rdi7->f4);
    rsi10 = reinterpret_cast<struct s22*>(&rsi8->f4);
    __asm__("xorpd xmm3, xmm1");
    rdi9->f0 = rsi10->f0;
    rdi11 = reinterpret_cast<struct s14*>(&rdi9->f4);
    rsi12 = reinterpret_cast<struct s0*>(&rsi10->f4);
    *reinterpret_cast<int32_t*>(&r15_13) = 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_13) + 4) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(&rbp14) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp14) + 4) = reinterpret_cast<int32_t>(fputc);
    r12_15 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp3) + 48);
    do {
        if (rbp14 == fputc) {
            __asm__("xorpd xmm0, xmm0");
            if (!reinterpret_cast<int1_t>((*reinterpret_cast<unsigned char*>(&r15_13) & 1) == fputc)) {
                addr_3ed_15:
            } else {
                goto addr_405_17;
            }
        } else {
            rcx16 = 0x7ffffffffffffffe & reinterpret_cast<uint64_t>(r15_13);
            __asm__("xorpd xmm0, xmm0");
            *reinterpret_cast<int32_t*>(&rax17) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax17) + 4) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(&rdx18) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx18) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                rdi11->f0 = *reinterpret_cast<int32_t*>(~rax17 + reinterpret_cast<uint64_t>(r15_13));
                __asm__("mulsd xmm1, [r14+rax*8]");
                rsi19 = reinterpret_cast<int32_t*>(rax17 * 8);
                __asm__("addsd xmm1, xmm0");
                rdi20 = reinterpret_cast<struct s23*>(reinterpret_cast<uint64_t>(r15_13) - rax17);
                rdi20->f0 = *rsi19;
                rdi11 = reinterpret_cast<struct s14*>(&rdi20->f4);
                rsi12 = reinterpret_cast<struct s0*>(reinterpret_cast<uint64_t>(rsi19 + 1) | 8);
                __asm__("mulsd xmm0, [r14+rsi]");
                __asm__("addsd xmm0, xmm1");
                rax17 = rax17 + 2;
                rdx18 = rdx18 + 2;
            } while (rdx18 != rcx16);
            if ((*reinterpret_cast<unsigned char*>(&r15_13) & 1) == fputc) 
                goto addr_405_17; else 
                goto addr_3ed_15;
        }
        rdi11->f0 = rsi12->f0;
        rdi11 = reinterpret_cast<struct s14*>(&rdi11->f4);
        rsi12 = reinterpret_cast<struct s0*>(&rsi12->f4);
        __asm__("mulsd xmm1, [r14+rax*8]");
        __asm__("addsd xmm0, xmm1");
        addr_405_17:
        rdx21 = rbp14 * 8;
        __asm__("movapd xmm1, xmm3");
        __asm__("movapd xmm2, [rip+0x0]");
        __asm__("xorpd xmm1, xmm2");
        __asm__("mulsd xmm1, xmm3");
        __asm__("addsd xmm1, [rip+0x0]");
        __asm__("mulsd xmm4, xmm1");
        __asm__("addsd xmm0, [rbx+r15*8]");
        __asm__("xorpd xmm0, xmm2");
        __asm__("movapd xmm5, xmm0");
        rdi11->f0 = rsi12->f0;
        rdi22 = reinterpret_cast<struct s16*>(&rdi11->f4);
        rsi23 = reinterpret_cast<struct s9*>(&rsi12->f4);
        __asm__("divsd xmm5, xmm4");
        if (reinterpret_cast<uint64_t>(r15_13) >= 4) {
            rax24 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(r15_13) & 0x7ffffffffffffffc);
            __asm__("movapd xmm0, xmm5");
            __asm__("unpcklpd xmm0, xmm5");
            *reinterpret_cast<int32_t*>(&rcx25) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx25) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("movupd xmm1, [r14+rcx*8]");
                __asm__("movupd xmm2, [r14+rcx*8+0x10]");
                rsi23 = reinterpret_cast<struct s9*>(~reinterpret_cast<uint64_t>(rcx25) + reinterpret_cast<uint64_t>(r15_13));
                __asm__("movupd xmm3, [r14+rsi*8-0x18]");
                __asm__("movupd xmm4, [r14+rsi*8-0x8]");
                __asm__("shufpd xmm4, xmm4, 0x1");
                __asm__("shufpd xmm3, xmm3, 0x1");
                __asm__("mulpd xmm4, xmm0");
                __asm__("addpd xmm4, xmm1");
                __asm__("mulpd xmm3, xmm0");
                __asm__("addpd xmm3, xmm2");
                __asm__("movapd [rsp+rcx*8+0x30], xmm4");
                __asm__("movapd [rsp+rcx*8+0x40], xmm3");
                ++rcx25;
            } while (rcx25 != rax24);
            if (r15_13 != rax24) 
                goto addr_4bc_36;
        } else {
            *reinterpret_cast<int32_t*>(&rax24) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax24) + 4) = reinterpret_cast<int32_t>(fputc);
            goto addr_4c0_38;
        }
        addr_340_39:
        rdx26 = rdx21 + 8;
        __asm__("movapd [rsp+0x20], xmm5");
        fun_355();
        __asm__("movapd xmm3, [rsp+0x20]");
        r14_4->f0 = v27;
        rdi28 = reinterpret_cast<struct s17*>(&r14_4->f4);
        r15_13 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(r15_13) + 1);
        ++rbp14;
        rdi28->f0 = v29;
        rdi11 = reinterpret_cast<struct s14*>(&rdi28->f4);
        rsi12 = reinterpret_cast<struct s0*>(r12_15 + 1 + 1);
        continue;
        addr_4bc_36:
        do {
            addr_4c0_38:
            rcx25 = reinterpret_cast<int32_t*>(~reinterpret_cast<uint64_t>(rax24) + reinterpret_cast<uint64_t>(r15_13));
            rdi22->f0 = rsi23->f0;
            rdi30 = reinterpret_cast<struct s18*>(&rdi22->f4);
            rsi31 = reinterpret_cast<struct s11*>(&rsi23->f4);
            __asm__("mulsd xmm0, xmm5");
            __asm__("addsd xmm0, [r14+rax*8]");
            rdi30->f0 = rsi31->f0;
            rdi22 = reinterpret_cast<struct s16*>(&rdi30->f4);
            rsi23 = reinterpret_cast<struct s9*>(&rsi31->f4);
            rax24 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rax24) + 1);
        } while (rax24 != r15_13);
        goto addr_340_39;
    } while (rbp14 != 0x7cf);
    if (v32 >= 43 && **v33 == fputc) {
        rax34 = g544;
        r15_35 = *rax34;
        rcx36 = r15_35;
        fun_560(0x54e, 22, 1, rcx36);
        rsi37 = reinterpret_cast<int32_t*>(0x567);
        *reinterpret_cast<int32_t*>(&r13_38) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_38) + 4) = reinterpret_cast<int32_t>(fputc);
        rdi39 = r15_35;
        fun_57b();
        do {
            eax40 = *reinterpret_cast<int32_t*>(&r13_38) * 0xffffcccd;
            __asm__("ror ax, 0x2");
            if (static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax40)) <= 0xccc) {
                *reinterpret_cast<int32_t*>(&rdi39) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi39) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi37 = r15_35;
                fun_5d1();
            }
            *rdi39 = *rsi37;
            rdi39 = r15_35;
            rsi37 = reinterpret_cast<int32_t*>(0x582);
            fun_5a3();
            ++r13_38;
        } while (r13_38 != 0x7d0);
        fun_5eb(r15_35, 0x5da, 0x5e1, rcx36);
        *reinterpret_cast<int32_t*>(&rsi12) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi12) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx26) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx26) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx25 = r15_35;
        fun_604(0x5f2, 22, 1, rcx25);
    }
    fun_521(rbx41, rsi12, rdx26, rcx25);
    fun_529(r14_4, rsi12, rdx26, rcx25);
    goto v42;
}

void fun_604(int64_t rdi, struct s0* rsi, int64_t rdx, int32_t* rcx) {
    int64_t rbx5;
    struct s1* r14_6;
    int64_t v7;

    fun_521(rbx5, rsi, rdx, rcx);
    fun_529(r14_6, rsi, rdx, rcx);
    goto v7;
}

void fputc() {
}

void fun_21(int32_t edi) {
}

struct s24 {
    int32_t f0;
    int32_t f4;
};

struct s25 {
    int32_t f0;
    int32_t f4;
};

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

struct s32 {
    int32_t f0;
    int32_t f4;
};

struct s33 {
    int32_t f0;
    int32_t f4;
};

struct s34 {
    int32_t f0;
    int32_t f4;
};

struct s35 {
    int32_t f0;
    int32_t f4;
};

void fun_7c(struct s24* rdi, struct s25* rsi) {
    struct s26* rdi3;
    struct s27* rsi4;
    uint64_t rbp5;
    int64_t rbp6;
    int64_t r12_7;
    int64_t r12_8;
    struct s28* rdi9;
    struct s29* rsi10;
    int64_t r15_11;
    int64_t v12;
    struct s30* rdi13;
    struct s31* rsi14;
    struct s32* rdi15;
    struct s33* rsi16;
    uint64_t rax17;
    uint64_t r13_18;
    uint64_t rcx19;
    struct s34* rdi20;
    struct s35* rsi21;

    __asm__("movaps xmm2, [rsp+0x10]");
    rdi->f0 = rsi->f0;
    rdi3 = reinterpret_cast<struct s26*>(&rdi->f4);
    rsi4 = reinterpret_cast<struct s27*>(&rsi->f4);
    rbp5 = reinterpret_cast<uint64_t>(rbp6 + 1);
    r12_7 = r12_8 + 1;
    rdi3->f0 = rsi4->f0;
    rdi9 = reinterpret_cast<struct s28*>(&rdi3->f4);
    rsi10 = reinterpret_cast<struct s29*>(&rsi4->f4);
    if (r12_7 == r15_11) {
        goto v12;
    }
    if (r12_7 != fputc) {
    }
    __asm__("xorpd xmm0, xmm0");
    if (!reinterpret_cast<int1_t>((*reinterpret_cast<unsigned char*>(&rbp5) & 1) == fputc)) {
        rdi9->f0 = rsi10->f0;
        rdi9 = reinterpret_cast<struct s28*>(&rdi9->f4);
        rsi10 = reinterpret_cast<struct s29*>(&rsi10->f4);
        __asm__("mulsd xmm1, [rbx+rax*8]");
        __asm__("addsd xmm0, xmm1");
    }
    __asm__("mulsd xmm2, xmm2");
    rdi9->f0 = rsi10->f0;
    rdi13 = reinterpret_cast<struct s30*>(&rdi9->f4);
    rsi14 = reinterpret_cast<struct s31*>(&rsi10->f4);
    __asm__("subsd xmm1, xmm2");
    __asm__("mulsd xmm3, xmm1");
    __asm__("addsd xmm0, [r14+rbp*8]");
    __asm__("xorpd xmm0, [rip+0x0]");
    __asm__("movapd xmm5, xmm0");
    __asm__("divsd xmm5, xmm3");
    rdi13->f0 = rsi14->f0;
    rdi15 = reinterpret_cast<struct s32*>(&rdi13->f4);
    rsi16 = reinterpret_cast<struct s33*>(&rsi14->f4);
    if (rbp5 < 4) 
        goto addr_15b_24;
    rax17 = rbp5 & r13_18;
    __asm__("movapd xmm0, xmm5");
    __asm__("unpcklpd xmm0, xmm5");
    *reinterpret_cast<int32_t*>(&rcx19) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx19) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        __asm__("movupd xmm1, [rbx+rcx*8]");
        __asm__("movupd xmm2, [rbx+rcx*8+0x10]");
        __asm__("movupd xmm3, [rbx+rdx*8-0x18]");
        __asm__("movupd xmm4, [rbx+rdx*8-0x8]");
        __asm__("shufpd xmm4, xmm4, 0x1");
        __asm__("shufpd xmm3, xmm3, 0x1");
        __asm__("mulpd xmm4, xmm0");
        __asm__("addpd xmm4, xmm1");
        __asm__("mulpd xmm3, xmm0");
        __asm__("addpd xmm3, xmm2");
        __asm__("movapd [rsp+rcx*8+0x20], xmm4");
        __asm__("movapd [rsp+rcx*8+0x30], xmm3");
        rcx19 = rcx19 + 4;
    } while (rcx19 != rax17);
    if (rbp5 != rax17) 
        goto addr_1c8_28;
    addr_60_29:
    addr_1c8_28:
    do {
        addr_1d0_30:
        rdi15->f0 = rsi16->f0;
        rdi20 = reinterpret_cast<struct s34*>(&rdi15->f4);
        rsi21 = reinterpret_cast<struct s35*>(&rsi16->f4);
        __asm__("mulsd xmm0, xmm5");
        __asm__("addsd xmm0, [rbx+rax*8]");
        rdi20->f0 = rsi21->f0;
        rdi15 = reinterpret_cast<struct s32*>(&rdi20->f4);
        rsi16 = reinterpret_cast<struct s33*>(&rsi21->f4);
        ++rax17;
    } while (rax17 != rbp5);
    goto addr_60_29;
    addr_15b_24:
    *reinterpret_cast<int32_t*>(&rax17) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax17) + 4) = reinterpret_cast<int32_t>(fputc);
    goto addr_1d0_30;
}

struct s36 {
    int32_t f0;
    int32_t f4;
};

void fun_ac() {
    int64_t rax1;
    int64_t rdx2;
    int32_t* rdi3;
    void* rbp4;
    struct s36* rdi5;
    void* rbp6;
    int64_t rcx7;
    unsigned char bpl8;

    __asm__("xorps xmm0, xmm0");
    *reinterpret_cast<int32_t*>(&rax1) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax1) + 4) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(&rdx2) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx2) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        *rdi3 = *reinterpret_cast<int32_t*>(~rax1 + reinterpret_cast<int64_t>(rbp4));
        __asm__("mulsd xmm1, [rbx+rax*8]");
        __asm__("addsd xmm1, xmm0");
        rdi5 = reinterpret_cast<struct s36*>(reinterpret_cast<int64_t>(rbp6) - rax1);
        rdi5->f0 = *reinterpret_cast<int32_t*>(rax1 * 8);
        rdi3 = &rdi5->f4;
        __asm__("mulsd xmm0, [rbx+rsi]");
        __asm__("addsd xmm0, xmm1");
        rax1 = rax1 + 2;
        rdx2 = rdx2 + 2;
    } while (rdx2 != rcx7);
    if ((bpl8 & 1) == fputc) 
        goto 0x125; else 
        goto "???";
}

void submain(int32_t edi, int64_t rsi) {
    fun_259(0x7d0, 8);
}

