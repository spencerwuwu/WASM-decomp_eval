
struct s0 {
    int32_t f0;
    int32_t f4;
};

void fun_2f9(int64_t rdi, struct s0* rsi, int64_t rdx, int32_t* rcx);

void fun_2f1(int64_t rdi, struct s0* rsi, int64_t rdx, int32_t* rcx) {
    int64_t r14_5;
    int64_t v6;

    fun_2f9(r14_5, rsi, rdx, rcx);
    goto v6;
}

void fputc();

void fun_3a1();

void fun_3bb(int32_t* rdi, int64_t rsi, int64_t rdx, int32_t* rcx);

void fun_3d4(int64_t rdi, struct s0* rsi, int64_t rdx, int32_t* rcx);

void fun_373() {
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
    int64_t r14_12;
    int64_t v13;

    while (++r13_1, r13_1 != 0x7d0) {
        eax2 = *reinterpret_cast<int32_t*>(&r13_1) * 0xffffcccd;
        __asm__("ror ax, 0x2");
        if (static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax2)) <= 0xccc) {
            *reinterpret_cast<int32_t*>(&rdi3) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi3) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi4 = r15_5;
            fun_3a1();
        }
        *rdi3 = *rsi4;
        rdi3 = r15_6;
        rsi4 = r12_7;
        fun_373();
    }
    fun_3bb(r15_8, 0x3aa, 0x3b1, rcx9);
    fun_3d4(0x3c2, 22, 1, r15_10);
    fun_2f1(rbx11, 22, 1, r15_10);
    fun_2f9(r14_12, 22, 1, r15_10);
    goto v13;
}

void fun_3a1() {
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
    int64_t r14_12;
    int64_t v13;

    while (1) {
        do {
            *rdi1 = *rsi2;
            rdi1 = r15_3;
            rsi2 = r12_4;
            fun_373();
            ++r13_5;
            if (r13_5 == 0x7d0) 
                goto addr_3a3_7;
            eax6 = *reinterpret_cast<int32_t*>(&r13_5) * 0xffffcccd;
            __asm__("ror ax, 0x2");
        } while (static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax6)) > 0xccc);
        *reinterpret_cast<int32_t*>(&rdi1) = 10;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi1) + 4) = reinterpret_cast<int32_t>(fputc);
        rsi2 = r15_7;
        fun_3a1();
    }
    addr_3a3_7:
    fun_3bb(r15_8, 0x3aa, 0x3b1, rcx9);
    fun_3d4(0x3c2, 22, 1, r15_10);
    fun_2f1(rbx11, 22, 1, r15_10);
    fun_2f9(r14_12, 22, 1, r15_10);
    goto v13;
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

struct s10 {
    int32_t f0;
    int32_t f4;
};

int32_t** g314 = reinterpret_cast<int32_t**>(0x3d8d48388b4c);

void fun_330(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx);

void fun_34b();

void fun_125() {
    struct s1* r14_1;
    struct s2* r12_2;
    struct s3* rdi3;
    struct s4* rsi4;
    int32_t* r15_5;
    int64_t rbp6;
    struct s5* rdi7;
    struct s0* rsi8;
    uint64_t rcx9;
    int64_t r13_10;
    int64_t rax11;
    uint64_t rdx12;
    int32_t* rsi13;
    struct s6* rdi14;
    int64_t rdx15;
    struct s7* rdi16;
    struct s8* rsi17;
    int32_t* rax18;
    uint64_t r13_19;
    int32_t* rcx20;
    int64_t rdx21;
    struct s9* rdi22;
    struct s10* rsi23;
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
    int64_t r14_34;
    int64_t v35;

    while (1) {
        __asm__("movapd xmm3, [rsp+0x20]");
        r14_1->f0 = r12_2->f0;
        rdi3 = reinterpret_cast<struct s3*>(&r14_1->f4);
        rsi4 = reinterpret_cast<struct s4*>(&r12_2->f4);
        r15_5 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(r15_5) + 1);
        ++rbp6;
        rdi3->f0 = rsi4->f0;
        rdi7 = reinterpret_cast<struct s5*>(&rdi3->f4);
        rsi8 = reinterpret_cast<struct s0*>(&rsi4->f4);
        if (rbp6 == 0x7cf) 
            break;
        if (rbp6 == fputc) {
            __asm__("xorpd xmm0, xmm0");
            if (!reinterpret_cast<int1_t>((*reinterpret_cast<unsigned char*>(&r15_5) & 1) == fputc)) {
                addr_1bd_10:
            } else {
                goto addr_1d5_12;
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
                rdi14 = reinterpret_cast<struct s6*>(reinterpret_cast<uint64_t>(r15_5) - rax11);
                rdi14->f0 = *rsi13;
                rdi7 = reinterpret_cast<struct s5*>(&rdi14->f4);
                rsi8 = reinterpret_cast<struct s0*>(reinterpret_cast<uint64_t>(rsi13 + 1) | 8);
                __asm__("mulsd xmm0, [r14+rsi]");
                __asm__("addsd xmm0, xmm1");
                rax11 = rax11 + 2;
                rdx12 = rdx12 + 2;
            } while (rdx12 != rcx9);
            if ((*reinterpret_cast<unsigned char*>(&r15_5) & 1) == fputc) 
                goto addr_1d5_12; else 
                goto addr_1bd_10;
        }
        rdi7->f0 = rsi8->f0;
        rdi7 = reinterpret_cast<struct s5*>(&rdi7->f4);
        rsi8 = reinterpret_cast<struct s0*>(&rsi8->f4);
        __asm__("mulsd xmm1, [r14+rax*8]");
        __asm__("addsd xmm0, xmm1");
        addr_1d5_12:
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
        rdi16 = reinterpret_cast<struct s7*>(&rdi7->f4);
        rsi17 = reinterpret_cast<struct s8*>(&rsi8->f4);
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
                rsi17 = reinterpret_cast<struct s8*>(~reinterpret_cast<uint64_t>(rcx20) + reinterpret_cast<uint64_t>(r15_5));
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
                goto addr_28c_31;
        } else {
            *reinterpret_cast<int32_t*>(&rax18) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax18) + 4) = reinterpret_cast<int32_t>(fputc);
            goto addr_290_33;
        }
        addr_110_34:
        rdx21 = rdx15 + 8;
        __asm__("movapd [rsp+0x20], xmm5");
        fun_125();
        continue;
        addr_28c_31:
        do {
            addr_290_33:
            rcx20 = reinterpret_cast<int32_t*>(~reinterpret_cast<uint64_t>(rax18) + reinterpret_cast<uint64_t>(r15_5));
            rdi16->f0 = rsi17->f0;
            rdi22 = reinterpret_cast<struct s9*>(&rdi16->f4);
            rsi23 = reinterpret_cast<struct s10*>(&rsi17->f4);
            __asm__("mulsd xmm0, xmm5");
            __asm__("addsd xmm0, [r14+rax*8]");
            rdi22->f0 = rsi23->f0;
            rdi16 = reinterpret_cast<struct s7*>(&rdi22->f4);
            rsi17 = reinterpret_cast<struct s8*>(&rsi23->f4);
            rax18 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rax18) + 1);
        } while (rax18 != r15_5);
        goto addr_110_34;
    }
    if (v24 >= 43 && **v25 == fputc) {
        rax26 = g314;
        r15_27 = *rax26;
        rcx28 = r15_27;
        fun_330(0x31e, 22, 1, rcx28);
        rsi29 = reinterpret_cast<int32_t*>(0x337);
        *reinterpret_cast<int32_t*>(&r13_30) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_30) + 4) = reinterpret_cast<int32_t>(fputc);
        rdi31 = r15_27;
        fun_34b();
        do {
            eax32 = *reinterpret_cast<int32_t*>(&r13_30) * 0xffffcccd;
            __asm__("ror ax, 0x2");
            if (static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax32)) <= 0xccc) {
                *reinterpret_cast<int32_t*>(&rdi31) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi31) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi29 = r15_27;
                fun_3a1();
            }
            *rdi31 = *rsi29;
            rdi31 = r15_27;
            rsi29 = reinterpret_cast<int32_t*>(0x352);
            fun_373();
            ++r13_30;
        } while (r13_30 != 0x7d0);
        fun_3bb(r15_27, 0x3aa, 0x3b1, rcx28);
        *reinterpret_cast<int32_t*>(&rsi8) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi8) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx21) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx21) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx20 = r15_27;
        fun_3d4(0x3c2, 22, 1, rcx20);
    }
    fun_2f1(rbx33, rsi8, rdx21, rcx20);
    fun_2f9(r14_34, rsi8, rdx21, rcx20);
    goto v35;
}

void fun_330(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
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
    int64_t r14_15;
    int64_t v16;

    rsi5 = reinterpret_cast<int32_t*>(0x337);
    *reinterpret_cast<int32_t*>(&r13_6) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_6) + 4) = reinterpret_cast<int32_t>(fputc);
    rdi7 = r15_8;
    fun_34b();
    do {
        eax9 = *reinterpret_cast<int32_t*>(&r13_6) * 0xffffcccd;
        __asm__("ror ax, 0x2");
        if (static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax9)) <= 0xccc) {
            *reinterpret_cast<int32_t*>(&rdi7) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi7) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi5 = r15_10;
            fun_3a1();
        }
        *rdi7 = *rsi5;
        rdi7 = r15_11;
        rsi5 = reinterpret_cast<int32_t*>(0x352);
        fun_373();
        ++r13_6;
    } while (r13_6 != 0x7d0);
    fun_3bb(r15_12, 0x3aa, 0x3b1, rcx);
    fun_3d4(0x3c2, 22, 1, r15_13);
    fun_2f1(rbx14, 22, 1, r15_13);
    fun_2f9(r14_15, 22, 1, r15_13);
    goto v16;
}

void fun_2f9(int64_t rdi, struct s0* rsi, int64_t rdx, int32_t* rcx) {
    int64_t v5;

    goto v5;
}

void fun_34b() {
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
    int64_t r14_11;
    int64_t v12;

    do {
        eax1 = *reinterpret_cast<int32_t*>(&r13_2) * 0xffffcccd;
        __asm__("ror ax, 0x2");
        if (static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax1)) <= 0xccc) {
            *reinterpret_cast<int32_t*>(&rdi3) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi3) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi4 = r15_5;
            fun_3a1();
        }
        *rdi3 = *rsi4;
        rdi3 = r15_6;
        rsi4 = reinterpret_cast<int32_t*>(0x352);
        fun_373();
        ++r13_2;
    } while (r13_2 != 0x7d0);
    fun_3bb(r15_7, 0x3aa, 0x3b1, rcx8);
    fun_3d4(0x3c2, 22, 1, r15_9);
    fun_2f1(rbx10, 22, 1, r15_9);
    fun_2f9(r14_11, 22, 1, r15_9);
    goto v12;
}

void fun_3bb(int32_t* rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int32_t* r15_5;
    int64_t rbx6;
    int64_t r14_7;
    int64_t v8;

    fun_3d4(0x3c2, 22, 1, r15_5);
    fun_2f1(rbx6, 22, 1, r15_5);
    fun_2f9(r14_7, 22, 1, r15_5);
    goto v8;
}

void fun_3d4(int64_t rdi, struct s0* rsi, int64_t rdx, int32_t* rcx) {
    int64_t rbx5;
    int64_t r14_6;
    int64_t v7;

    fun_2f1(rbx5, rsi, rdx, rcx);
    fun_2f9(r14_6, rsi, rdx, rcx);
    goto v7;
}

void fputc() {
}

void fun_19() {
    unsigned char* rax1;
    unsigned char al2;

    *reinterpret_cast<unsigned char*>(&rax1) = reinterpret_cast<unsigned char>(al2 | 0xbf);
    __asm__("rol byte [rdi], 1");
    *rax1 = reinterpret_cast<unsigned char>(*rax1 + *reinterpret_cast<unsigned char*>(&rax1));
}

void fun_27() {
    signed char* rax1;
    signed char* rax2;
    signed char al3;

    *rax1 = reinterpret_cast<signed char>(*rax2 + al3);
}

void fun_7c() {
    __asm__("cvtdq2pd xmm6, xmm6");
}

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

void fun_90(struct s11* rdi, struct s12* rsi) {
    int64_t rax3;
    struct s13* rdi4;
    struct s14* rsi5;

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
    __asm__("paddd xmm0, xmm5");
    if (rax3 + 8 == 0x7d0) {
        rdi->f0 = rsi->f0;
        rdi4 = reinterpret_cast<struct s13*>(&rdi->f4);
        rsi5 = reinterpret_cast<struct s14*>(&rsi->f4);
        __asm__("movapd xmm1, [rip+0x0]");
        __asm__("xorpd xmm0, xmm1");
        __asm__("movlpd [r14], xmm0");
        rdi4->f0 = rsi5->f0;
        __asm__("xorpd xmm3, xmm1");
        rdi4->f4 = rsi5->f4;
        goto 0x14a;
    }
}

