
void fun_3c0(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx);

void fun_3c8(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx);

void fun_3b8(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int64_t r14_5;
    int64_t r15_6;
    int64_t v7;

    fun_3c0(r14_5, rsi, rdx, rcx);
    fun_3c8(r15_6, rsi, rdx, rcx);
    goto v7;
}

void fun_46e();

void fputc(int32_t edi, int64_t rsi);

void fun_4a2(int32_t* rdi, int64_t rsi, int64_t rdx);

void fun_4bb(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx);

void fun_44c() {
    int32_t* rdi1;
    int32_t* rsi2;
    int64_t r12_3;
    int64_t rbp4;
    int64_t r13_5;
    int64_t rbx6;
    int64_t r14_7;
    int64_t r15_8;
    int64_t v9;

    while (1) {
        *rdi1 = *rsi2;
        rdi1 = reinterpret_cast<int32_t*>(__return_address());
        rsi2 = reinterpret_cast<int32_t*>(0x467);
        fun_46e();
        ++r12_3;
        if (r12_3 == 0x4b0) {
            ++rbp4;
            if (rbp4 == 0x4b0) 
                break;
            r13_5 = rbp4 * 0x4b0;
            *reinterpret_cast<int32_t*>(&r12_3) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_3) + 4) = reinterpret_cast<int32_t>(fputc);
        }
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r12_3 + r13_5) * 0xcccccccd) > 0xccccccc) 
            continue;
        *reinterpret_cast<int32_t*>(&rdi1) = 10;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi1) + 4) = reinterpret_cast<int32_t>(fputc);
        rsi2 = reinterpret_cast<int32_t*>(__return_address());
        fun_44c();
    }
    fun_4a2(__return_address(), 0x48d, 0x494);
    fun_4bb(0x4a9, 22, 1, __return_address());
    fun_3b8(rbx6, 22, 1, __return_address());
    fun_3c0(r14_7, 22, 1, __return_address());
    fun_3c8(r15_8, 22, 1, __return_address());
    goto v9;
}

void fun_46e() {
    int64_t r12_1;
    int64_t rbp2;
    int64_t r13_3;
    int32_t* rdi4;
    int32_t* rsi5;
    int64_t rbx6;
    int64_t r14_7;
    int64_t r15_8;
    int64_t v9;

    while (1) {
        ++r12_1;
        if (r12_1 == 0x4b0) {
            ++rbp2;
            if (rbp2 == 0x4b0) 
                break;
            r13_3 = rbp2 * 0x4b0;
            *reinterpret_cast<int32_t*>(&r12_1) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_1) + 4) = reinterpret_cast<int32_t>(fputc);
        }
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r12_1 + r13_3) * 0xcccccccd) <= 0xccccccc) {
            *reinterpret_cast<int32_t*>(&rdi4) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi4) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi5 = reinterpret_cast<int32_t*>(__return_address());
            fun_44c();
        }
        *rdi4 = *rsi5;
        rdi4 = reinterpret_cast<int32_t*>(__return_address());
        rsi5 = reinterpret_cast<int32_t*>(0x467);
        fun_46e();
    }
    fun_4a2(__return_address(), 0x48d, 0x494);
    fun_4bb(0x4a9, 22, 1, __return_address());
    fun_3b8(rbx6, 22, 1, __return_address());
    fun_3c0(r14_7, 22, 1, __return_address());
    fun_3c8(r15_8, 22, 1, __return_address());
    goto v9;
}

void fun_4a2(int32_t* rdi, int64_t rsi, int64_t rdx) {
    int32_t* r12_4;
    int64_t rbx5;
    int64_t r14_6;
    int64_t r15_7;
    int64_t v8;

    fun_4bb(0x4a9, 22, 1, r12_4);
    fun_3b8(rbx5, 22, 1, r12_4);
    fun_3c0(r14_6, 22, 1, r12_4);
    fun_3c8(r15_7, 22, 1, r12_4);
    goto v8;
}

void fun_41a();

void fun_3fc(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int32_t* rsi5;
    int64_t rbp6;
    int32_t* v7;
    int32_t* r12_8;
    int32_t* rdi9;
    int32_t* r12_10;
    int64_t r13_11;
    int64_t r12_12;
    int64_t rbx13;
    int64_t r14_14;
    int64_t r15_15;
    int64_t v16;

    rsi5 = reinterpret_cast<int32_t*>(0x403);
    *reinterpret_cast<int32_t*>(&rbp6) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp6) + 4) = reinterpret_cast<int32_t>(fputc);
    v7 = r12_8;
    rdi9 = r12_10;
    fun_41a();
    do {
        r13_11 = rbp6 * 0x4b0;
        *reinterpret_cast<int32_t*>(&r12_12) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_12) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r12_12 + r13_11) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi9) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi9) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi5 = v7;
                fun_44c();
            }
            *rdi9 = *rsi5;
            rdi9 = v7;
            rsi5 = reinterpret_cast<int32_t*>(0x467);
            fun_46e();
            ++r12_12;
        } while (r12_12 != 0x4b0);
        ++rbp6;
    } while (rbp6 != 0x4b0);
    fun_4a2(v7, 0x48d, 0x494);
    fun_4bb(0x4a9, 22, 1, v7);
    fun_3b8(rbx13, 22, 1, v7);
    fun_3c0(r14_14, 22, 1, v7);
    fun_3c8(r15_15, 22, 1, v7);
    goto v16;
}

void fun_3c0(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int64_t r15_5;
    int64_t v6;

    fun_3c8(r15_5, rsi, rdx, rcx);
    goto v6;
}

void fun_4bb(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int64_t rbx5;
    int64_t r14_6;
    int64_t r15_7;
    int64_t v8;

    fun_3b8(rbx5, rsi, rdx, rcx);
    fun_3c0(r14_6, rsi, rdx, rcx);
    fun_3c8(r15_7, rsi, rdx, rcx);
    goto v8;
}

void fun_41a() {
    int32_t* v1;
    int64_t r13_2;
    int64_t rbp3;
    int64_t r12_4;
    int32_t* rdi5;
    int32_t* rsi6;
    int64_t rbx7;
    int64_t r14_8;
    int64_t r15_9;
    int64_t v10;

    v1 = reinterpret_cast<int32_t*>(__return_address());
    do {
        r13_2 = rbp3 * 0x4b0;
        *reinterpret_cast<int32_t*>(&r12_4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_4) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r12_4 + r13_2) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi5) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi5) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi6 = v1;
                fun_44c();
            }
            *rdi5 = *rsi6;
            rdi5 = v1;
            rsi6 = reinterpret_cast<int32_t*>(0x467);
            fun_46e();
            ++r12_4;
        } while (r12_4 != 0x4b0);
        ++rbp3;
    } while (rbp3 != 0x4b0);
    fun_4a2(v1, 0x48d, 0x494);
    fun_4bb(0x4a9, 22, 1, v1);
    fun_3b8(rbx7, 22, 1, v1);
    fun_3c0(r14_8, 22, 1, v1);
    fun_3c8(r15_9, 22, 1, v1);
    goto v10;
}

void fun_3c8(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int64_t v5;

    goto v5;
}

void fputc(int32_t edi, int64_t rsi) {
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

int64_t* g3e0 = reinterpret_cast<int64_t*>(0x3d8d48208b4c);

void fun_ac(struct s0* rdi) {
    struct s1* rsi2;
    int64_t rcx3;
    int32_t* rbx4;
    int64_t rdx5;
    int64_t rcx6;
    struct s2* rdi7;
    struct s3* rsi8;
    int64_t* r15_9;
    int64_t rax10;
    int64_t rcx11;
    struct s4* rdi12;
    struct s5* rsi13;
    struct s6* rdi14;
    struct s7* rsi15;
    struct s8* rdi16;
    struct s9* rsi17;
    struct s10* rcx18;
    int64_t r15_19;
    int64_t rax20;
    int64_t rdx21;
    int64_t rdi22;
    struct s10* rsi23;
    int32_t* rbx24;
    struct s11* rdi25;
    int64_t r8_26;
    uint64_t r15_27;
    int64_t rbx28;
    struct s12* rdi29;
    struct s13* rsi30;
    struct s14* rdi31;
    struct s15* rsi32;
    struct s16* rdi33;
    struct s17* rsi34;
    struct s18* rdi35;
    struct s19* rsi36;
    struct s20* rdi37;
    struct s21* rsi38;
    int64_t rcx39;
    int64_t* r14_40;
    struct s22* rsi41;
    struct s23* rdi42;
    int32_t* rbx43;
    struct s24* rsi44;
    struct s25* rsi45;
    struct s26* rdi46;
    int32_t* rbx47;
    struct s27* rdi48;
    int32_t* rsi49;
    struct s28* rdi50;
    int32_t ebp51;
    signed char** r12_52;
    int64_t* rax53;
    int64_t rcx54;

    rsi2 = reinterpret_cast<struct s1*>(rbx4 + rcx3 * 0x960);
    __asm__("movupd [rsi+rdx*8], xmm7");
    __asm__("movdqa xmm7, xmm6");
    __asm__("paddd xmm7, xmm2");
    __asm__("cvtdq2pd xmm7, xmm7");
    __asm__("mulpd xmm7, xmm5");
    __asm__("divpd xmm7, xmm1");
    __asm__("movupd [rsi+rdx*8+0x10], xmm7");
    __asm__("movdqa xmm7, xmm6");
    __asm__("paddd xmm7, xmm3");
    __asm__("cvtdq2pd xmm7, xmm7");
    __asm__("mulpd xmm7, xmm5");
    __asm__("divpd xmm7, xmm1");
    __asm__("movupd [rsi+rdx*8+0x20], xmm7");
    __asm__("paddd xmm6, xmm4");
    if (rdx5 + 6 != 0x4b0) {
        __asm__("cvtdq2pd xmm7, xmm6");
    } else {
        if (rcx6 + 1 == 0x578) {
            rdi->f0 = rsi2->f0;
            rdi7 = reinterpret_cast<struct s2*>(&rdi->f4);
            rsi8 = reinterpret_cast<struct s3*>(&rsi2->f4);
            do {
                r15_9[rax10] = reinterpret_cast<int64_t>(fputc);
                __asm__("xorpd xmm1, xmm1");
                *reinterpret_cast<int32_t*>(&rcx11) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx11) + 4) = reinterpret_cast<int32_t>(fputc);
                do {
                    __asm__("addsd xmm1, [rdx+rax*8]");
                    rdi7->f0 = rsi8->f0;
                    rdi12 = reinterpret_cast<struct s4*>(&rdi7->f4);
                    rsi13 = reinterpret_cast<struct s5*>(&rsi8->f4);
                    __asm__("addsd xmm1, [rdx+rax*8]");
                    rdi12->f0 = rsi13->f0;
                    rdi14 = reinterpret_cast<struct s6*>(&rdi12->f4);
                    rsi15 = reinterpret_cast<struct s7*>(&rsi13->f4);
                    __asm__("addsd xmm1, [rdx+rax*8]");
                    rdi14->f0 = rsi15->f0;
                    rdi16 = reinterpret_cast<struct s8*>(&rdi14->f4);
                    rsi17 = reinterpret_cast<struct s9*>(&rsi15->f4);
                    __asm__("addsd xmm1, [rdx+rax*8]");
                    rdi16->f0 = rsi17->f0;
                    rdi7 = reinterpret_cast<struct s2*>(&rdi16->f4);
                    rsi8 = reinterpret_cast<struct s3*>(&rsi17->f4);
                    rcx11 = rcx11 + 4;
                } while (rcx11 != 0x578);
                __asm__("divsd xmm1, xmm0");
                rdi7->f0 = rsi8->f0;
                rdi7 = reinterpret_cast<struct s2*>(&rdi7->f4);
                rsi8 = reinterpret_cast<struct s3*>(&rsi8->f4);
                ++rax10;
            } while (rax10 != 0x4b0);
            rcx18 = reinterpret_cast<struct s10*>(r15_19 + 0x2580);
            *reinterpret_cast<int32_t*>(&rax20) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax20) + 4) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(&rdx21) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx21) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                rdi22 = rdx21 * 0x2580;
                rsi23 = reinterpret_cast<struct s10*>(reinterpret_cast<int64_t>(rbx24) + rdi22);
                if (reinterpret_cast<uint64_t>(rsi23) >= reinterpret_cast<uint64_t>(rcx18)) {
                    *reinterpret_cast<int32_t*>(&rdi25) = reinterpret_cast<int32_t>(fputc);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi25) + 4) = reinterpret_cast<int32_t>(fputc);
                    goto addr_270_30;
                }
                *reinterpret_cast<int32_t*>(&rdi25) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi25) + 4) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(&r8_26) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_26) + 4) = reinterpret_cast<int32_t>(fputc);
                if (r15_27 >= reinterpret_cast<uint64_t>(rbx28 + rdi22 + 0x2580)) {
                    do {
                        addr_270_30:
                        __asm__("movupd xmm0, [r15+rdi*8]");
                        __asm__("movupd xmm1, [r15+rdi*8+0x10]");
                        __asm__("movupd xmm2, [rsi+rdi*8]");
                        __asm__("subpd xmm2, xmm0");
                        __asm__("movupd xmm0, [rsi+rdi*8+0x10]");
                        __asm__("subpd xmm0, xmm1");
                        __asm__("movupd [rsi+rdi*8], xmm2");
                        __asm__("movupd [rsi+rdi*8+0x10], xmm0");
                        __asm__("movupd xmm0, [r15+r8]");
                        __asm__("movupd xmm1, [r15+r8+0x10]");
                        __asm__("movupd xmm2, [r8+rsi]");
                        __asm__("subpd xmm2, xmm0");
                        __asm__("movupd xmm0, [r8+rsi+0x10]");
                        __asm__("subpd xmm0, xmm1");
                        __asm__("movupd [r8+rsi], xmm2");
                        __asm__("movupd [r8+rsi+0x10], xmm0");
                        ++rdi25;
                    } while (!reinterpret_cast<int1_t>(rdi25 == 0x4b0));
                } else {
                    do {
                        rdi25->f0 = rsi23->f0;
                        rdi29 = reinterpret_cast<struct s12*>(&rdi25->f4);
                        rsi30 = reinterpret_cast<struct s13*>(&rsi23->f4);
                        __asm__("subsd xmm0, [r15+r8*8]");
                        rdi29->f0 = rsi30->f0;
                        rdi31 = reinterpret_cast<struct s14*>(&rdi29->f4);
                        rsi32 = reinterpret_cast<struct s15*>(&rsi30->f4);
                        rdi31->f0 = rsi32->f0;
                        rdi33 = reinterpret_cast<struct s16*>(&rdi31->f4);
                        rsi34 = reinterpret_cast<struct s17*>(&rsi32->f4);
                        __asm__("subsd xmm1, [r15+r8*8+0x8]");
                        rdi33->f0 = rsi34->f0;
                        rdi35 = reinterpret_cast<struct s18*>(&rdi33->f4);
                        rsi36 = reinterpret_cast<struct s19*>(&rsi34->f4);
                        rdi35->f0 = rsi36->f0;
                        rdi37 = reinterpret_cast<struct s20*>(&rdi35->f4);
                        rsi38 = reinterpret_cast<struct s21*>(&rsi36->f4);
                        __asm__("subsd xmm0, [r15+r8*8+0x10]");
                        rdi37->f0 = rsi38->f0;
                        rdi25 = reinterpret_cast<struct s11*>(&rdi37->f4);
                        rsi23 = reinterpret_cast<struct s10*>(&rsi38->f4);
                        r8_26 = r8_26 + 3;
                    } while (r8_26 != 0x4b0);
                    continue;
                }
                ++rdx21;
            } while (rdx21 != 0x578);
            rdi25->f0 = rsi23->f0;
            do {
                rcx39 = rax20;
                do {
                    (r14_40 + rax20 * 0x4b0)[rcx39] = reinterpret_cast<int64_t>(fputc);
                    __asm__("xorpd xmm1, xmm1");
                    *reinterpret_cast<int32_t*>(&rsi41) = reinterpret_cast<int32_t>(fputc);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi41) + 4) = reinterpret_cast<int32_t>(fputc);
                    do {
                        rdi42 = reinterpret_cast<struct s23*>(rbx43 + reinterpret_cast<uint64_t>(rsi41) * 0x960);
                        rdi42->f0 = rsi41->f0;
                        rsi44 = reinterpret_cast<struct s24*>(&rsi41->f4);
                        __asm__("mulsd xmm2, [rdi+rcx*8]");
                        __asm__("addsd xmm2, xmm1");
                        rdi42->f4 = rsi44->f0;
                        rsi45 = reinterpret_cast<struct s25*>(&rsi44->f4);
                        rdi46 = reinterpret_cast<struct s26*>(rbx47 + (reinterpret_cast<uint64_t>(rsi45) | 1) * 0x960);
                        rdi46->f0 = rsi45->f0;
                        rdi48 = reinterpret_cast<struct s27*>(&rdi46->f4);
                        rsi49 = &rsi45->f4;
                        __asm__("mulsd xmm1, [rdi+rcx*8]");
                        __asm__("addsd xmm1, xmm2");
                        rdi48->f0 = *rsi49;
                        rdi50 = reinterpret_cast<struct s28*>(&rdi48->f4);
                        rsi41 = reinterpret_cast<struct s22*>(reinterpret_cast<uint64_t>(rsi49 + 1) + 2);
                    } while (!reinterpret_cast<int1_t>(rsi41 == 0x578));
                    __asm__("divsd xmm1, xmm0");
                    rdi50->f0 = rsi41->f0;
                    rdi50->f4 = rsi41->f4;
                    ++rcx39;
                } while (rcx39 != 0x4b0);
                ++rax20;
            } while (rax20 != 0x4b0);
            if (ebp51 < 43) 
                goto 0x3b0;
            if (**r12_52 != fputc) 
                goto "???";
            rax53 = g3e0;
            rcx54 = *rax53;
            fun_3fc(0x3ea, 22, 1, rcx54);
        }
    }
}

