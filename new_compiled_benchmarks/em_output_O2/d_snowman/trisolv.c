
void fun_348(int32_t** rdi, int32_t* rsi, int32_t* rdx, int32_t* rcx);

void fun_350(int64_t rdi, int32_t* rsi, int32_t* rdx, int32_t* rcx);

void fun_340(int32_t* rdi, int32_t* rsi, int32_t* rdx, int32_t* rcx) {
    int32_t** r14_5;
    int64_t r15_6;
    int64_t v7;

    fun_348(r14_5, rsi, rdx, rcx);
    fun_350(r15_6, rsi, rdx, rcx);
    goto v7;
}

void fputc(int32_t edi);

void fun_3f0();

void fun_40a(int32_t* rdi, int64_t rsi, int64_t rdx, int32_t* rcx);

void fun_423(int64_t rdi, int32_t* rsi, int32_t* rdx, int32_t* rcx);

void fun_3cf() {
    int32_t eax1;
    int64_t rbp2;
    int32_t* rdi3;
    int32_t* rsi4;
    int32_t* r12_5;
    int32_t* r12_6;
    int32_t* r13_7;
    int32_t* r12_8;
    int32_t* rcx9;
    int32_t* r12_10;
    int32_t* rbx11;
    int32_t** r14_12;
    int64_t r15_13;
    int64_t v14;

    while (1) {
        eax1 = *reinterpret_cast<int32_t*>(&rbp2) * 0xffffcccd;
        __asm__("ror ax, 0x2");
        if (static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax1)) <= 0xccc) {
            *reinterpret_cast<int32_t*>(&rdi3) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi3) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi4 = r12_5;
            fun_3f0();
        }
        ++rbp2;
        if (rbp2 == 0x7d0) 
            break;
        *rdi3 = *rsi4;
        rdi3 = r12_6;
        rsi4 = r13_7;
        fun_3cf();
    }
    fun_40a(r12_8, 0x3f9, 0x400, rcx9);
    fun_423(0x411, 22, 1, r12_10);
    fun_340(rbx11, 22, 1, r12_10);
    fun_348(r14_12, 22, 1, r12_10);
    fun_350(r15_13, 22, 1, r12_10);
    goto v14;
}

void fun_3f0() {
    int64_t rbp1;
    int32_t* rdi2;
    int32_t* rsi3;
    int32_t* r12_4;
    int32_t* r13_5;
    int32_t eax6;
    int32_t* r12_7;
    int32_t* r12_8;
    int32_t* rcx9;
    int32_t* r12_10;
    int32_t* rbx11;
    int32_t** r14_12;
    int64_t r15_13;
    int64_t v14;

    while (1) {
        do {
            ++rbp1;
            if (rbp1 == 0x7d0) 
                goto addr_3f2_3;
            *rdi2 = *rsi3;
            rdi2 = r12_4;
            rsi3 = r13_5;
            fun_3cf();
            eax6 = *reinterpret_cast<int32_t*>(&rbp1) * 0xffffcccd;
            __asm__("ror ax, 0x2");
        } while (static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax6)) > 0xccc);
        *reinterpret_cast<int32_t*>(&rdi2) = 10;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi2) + 4) = reinterpret_cast<int32_t>(fputc);
        rsi3 = r12_7;
        fun_3f0();
    }
    addr_3f2_3:
    fun_40a(r12_8, 0x3f9, 0x400, rcx9);
    fun_423(0x411, 22, 1, r12_10);
    fun_340(rbx11, 22, 1, r12_10);
    fun_348(r14_12, 22, 1, r12_10);
    fun_350(r15_13, 22, 1, r12_10);
    goto v14;
}

void fun_39e();

void fun_384(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int32_t* rsi5;
    int64_t rbp6;
    int32_t* rdi7;
    int32_t* r12_8;
    int32_t* r12_9;
    int32_t eax10;
    int32_t* r12_11;
    int32_t* r12_12;
    int32_t* r12_13;
    int32_t* rbx14;
    int32_t** r14_15;
    int64_t r15_16;
    int64_t v17;

    rsi5 = reinterpret_cast<int32_t*>(0x38b);
    *reinterpret_cast<int32_t*>(&rbp6) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp6) + 4) = reinterpret_cast<int32_t>(fputc);
    rdi7 = r12_8;
    fun_39e();
    do {
        *rdi7 = *rsi5;
        rdi7 = r12_9;
        rsi5 = reinterpret_cast<int32_t*>(0x3a5);
        fun_3cf();
        eax10 = *reinterpret_cast<int32_t*>(&rbp6) * 0xffffcccd;
        __asm__("ror ax, 0x2");
        if (static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax10)) <= 0xccc) {
            *reinterpret_cast<int32_t*>(&rdi7) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi7) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi5 = r12_11;
            fun_3f0();
        }
        ++rbp6;
    } while (rbp6 != 0x7d0);
    fun_40a(r12_12, 0x3f9, 0x400, rcx);
    fun_423(0x411, 22, 1, r12_13);
    fun_340(rbx14, 22, 1, r12_13);
    fun_348(r14_15, 22, 1, r12_13);
    fun_350(r15_16, 22, 1, r12_13);
    goto v17;
}

void fun_348(int32_t** rdi, int32_t* rsi, int32_t* rdx, int32_t* rcx) {
    int64_t r15_5;
    int64_t v6;

    fun_350(r15_5, rsi, rdx, rcx);
    goto v6;
}

int32_t** fun_12b(int64_t rdi, int64_t rsi);

struct s0 {
    int32_t f0;
    int32_t f4;
};

int64_t fun_13d(struct s0* rdi, int32_t* rsi);

int32_t g7d0;

int32_t g8 = 0x89000000;

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

int32_t** g368 = reinterpret_cast<int32_t**>(0x3d8d48208b4c);

void fun_119(int64_t rdi, int64_t rsi) {
    int32_t* rbx3;
    int32_t* rax4;
    int32_t** rax5;
    int32_t** r14_6;
    int64_t rax7;
    int64_t r15_8;
    uint64_t rcx9;
    uint64_t rax10;
    int32_t* rdx11;
    int32_t* rdi12;
    int32_t* rsi13;
    int32_t* rsi14;
    uint64_t r8_15;
    uint64_t r13_16;
    uint64_t r9_17;
    int32_t* rdi18;
    int32_t* rsi19;
    int32_t* rdi20;
    int32_t* rsi21;
    uint64_t r13_22;
    struct s1* rdi23;
    struct s2* rdi24;
    int32_t* rsi25;
    struct s3* rdi26;
    int32_t* rsi27;
    struct s4* rdi28;
    int32_t* rsi29;
    int32_t* rdi30;
    int32_t* rsi31;
    int32_t* rcx32;
    int32_t ebp33;
    signed char** r12_34;
    int32_t** rax35;
    int32_t* r12_36;
    int32_t* rcx37;
    int32_t* rsi38;
    int64_t rbp39;
    int32_t* rdi40;
    int32_t eax41;
    int64_t v42;

    rbx3 = rax4;
    rax5 = fun_12b(0x7d0, 8);
    r14_6 = rax5;
    rax7 = fun_13d(0x7d0, 8);
    r15_8 = rax7;
    *reinterpret_cast<int32_t*>(&rcx9) = 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx9) + 4) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(&rax10) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax10) + 4) = reinterpret_cast<int32_t>(fputc);
    rdx11 = reinterpret_cast<int32_t*>(0xc08f380000000000);
    g7d0 = g8;
    rdi12 = reinterpret_cast<int32_t*>(0x7d4);
    __asm__("movdqa xmm1, [rip+0x0]");
    __asm__("movapd xmm2, [rip+0x0]");
    __asm__("movdqa xmm3, [rip+0x0]");
    *reinterpret_cast<int32_t*>(&rsi13) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi13) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        __asm__("xorps xmm4, xmm4");
        __asm__("cvtsi2sd xmm4, esi");
        r14_6[static_cast<uint64_t>(rsi13)] = reinterpret_cast<int32_t*>(0xc08f380000000000);
        *rdi12 = *rsi13;
        rsi14 = rsi13 + 1;
        rdi12 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rsi14) + 0x7d1);
        if (rcx9 >= 2) {
            r8_15 = rcx9 & r13_16;
            __asm__("movd xmm4, rdi");
            __asm__("pshufd xmm4, xmm4, 0x44");
            *reinterpret_cast<int32_t*>(&r9_17) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_17) + 4) = reinterpret_cast<int32_t>(fputc);
            __asm__("movdqa xmm5, xmm1");
            do {
                __asm__("movdqa xmm6, xmm4");
                __asm__("psubq xmm6, xmm5");
                __asm__("pshufd xmm6, xmm6, 0xe8");
                __asm__("cvtdq2pd xmm6, xmm6");
                __asm__("addpd xmm6, xmm6");
                __asm__("divpd xmm6, xmm2");
                __asm__("movupd [r10+r9*8], xmm6");
                r9_17 = r9_17 + 2;
                __asm__("paddq xmm5, xmm3");
            } while (r9_17 != r8_15);
            if (rcx9 == r8_15) 
                continue;
        } else {
            *reinterpret_cast<int32_t*>(&r8_15) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_15) + 4) = reinterpret_cast<int32_t>(fputc);
            goto addr_220_15;
        }
        do {
            addr_220_15:
            __asm__("xorps xmm4, xmm4");
            __asm__("cvtsi2sd xmm4, r9d");
            __asm__("addsd xmm4, xmm4");
            __asm__("divsd xmm4, xmm0");
            *rdi12 = *rsi14;
            ++rdi12;
            ++rsi14;
            ++r8_15;
        } while (r8_15 != rcx9);
        rsi13 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rsi14) + 1);
        ++rcx9;
    } while (rsi13 != 0x7d0);
    do {
        *rdi12 = *rsi13;
        rdi18 = rdi12 + 1;
        rsi19 = rsi13 + 1;
        *rdi18 = *rsi19;
        rdi20 = rdi18 + 1;
        rsi21 = rsi19 + 1;
        if (rax10 != fputc) {
            if (rax10 != 1) {
                rdx11 = reinterpret_cast<int32_t*>(rax10 & r13_22);
                *reinterpret_cast<int32_t*>(&rsi21) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi21) + 4) = reinterpret_cast<int32_t>(fputc);
                do {
                    rdi23 = reinterpret_cast<struct s1*>(rbx3 + rax10 * 0xfa0);
                    rdi23->f0 = *rsi21;
                    rdi24 = reinterpret_cast<struct s2*>(&rdi23->f4);
                    rsi25 = rsi21 + 1;
                    __asm__("mulsd xmm1, [r14+rcx*8]");
                    __asm__("subsd xmm0, xmm1");
                    rdi24->f0 = *rsi25;
                    rdi26 = reinterpret_cast<struct s3*>(&rdi24->f4);
                    rsi27 = rsi25 + 1;
                    rdi26->f0 = *rsi27;
                    rdi28 = reinterpret_cast<struct s4*>(&rdi26->f4);
                    rsi29 = rsi27 + 1;
                    __asm__("mulsd xmm1, [r14+r8]");
                    __asm__("subsd xmm0, xmm1");
                    rdi28->f0 = *rsi29;
                    rdi20 = &rdi28->f4;
                    rsi21 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rsi29 + 1) + 2);
                } while (rsi21 != rdx11);
            }
            if ((*reinterpret_cast<unsigned char*>(&rax10) & 1) != fputc) {
                rdx11 = rbx3 + rax10 * 0xfa0;
                *rdi20 = *rsi21;
                rdi30 = rdi20 + 1;
                rsi31 = rsi21 + 1;
                __asm__("mulsd xmm1, [r14+rcx*8]");
                __asm__("subsd xmm0, xmm1");
                *rdi30 = *rsi31;
                rdi20 = rdi30 + 1;
                rsi21 = rsi31 + 1;
            }
        }
        rcx32 = rbx3 + rax10 * 0xfa0;
        __asm__("divsd xmm0, [rcx+rax*8]");
        *rdi20 = *rsi21;
        rdi12 = rdi20 + 1;
        rsi13 = rsi21 + 1;
        ++rax10;
    } while (rax10 != 0x7d0);
    if (ebp33 >= 43 && **r12_34 == fputc) {
        rax35 = g368;
        r12_36 = *rax35;
        rcx37 = r12_36;
        fun_384(0x372, 22, 1, rcx37);
        rsi38 = reinterpret_cast<int32_t*>(0x38b);
        *reinterpret_cast<int32_t*>(&rbp39) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp39) + 4) = reinterpret_cast<int32_t>(fputc);
        rdi40 = r12_36;
        fun_39e();
        do {
            *rdi40 = *rsi38;
            rdi40 = r12_36;
            rsi38 = reinterpret_cast<int32_t*>(0x3a5);
            fun_3cf();
            eax41 = *reinterpret_cast<int32_t*>(&rbp39) * 0xffffcccd;
            __asm__("ror ax, 0x2");
            if (static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax41)) <= 0xccc) {
                *reinterpret_cast<int32_t*>(&rdi40) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi40) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi38 = r12_36;
                fun_3f0();
            }
            ++rbp39;
        } while (rbp39 != 0x7d0);
        fun_40a(r12_36, 0x3f9, 0x400, rcx37);
        *reinterpret_cast<int32_t*>(&rsi13) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi13) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx11) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx11) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx32 = r12_36;
        fun_423(0x411, 22, 1, rcx32);
    }
    fun_340(rbx3, rsi13, rdx11, rcx32);
    fun_348(r14_6, rsi13, rdx11, rcx32);
    fun_350(r15_8, rsi13, rdx11, rcx32);
    goto v42;
}

void fun_39e() {
    int32_t* rdi1;
    int32_t* rsi2;
    int32_t* r12_3;
    int32_t eax4;
    int64_t rbp5;
    int32_t* r12_6;
    int32_t* r12_7;
    int32_t* rcx8;
    int32_t* r12_9;
    int32_t* rbx10;
    int32_t** r14_11;
    int64_t r15_12;
    int64_t v13;

    do {
        *rdi1 = *rsi2;
        rdi1 = r12_3;
        rsi2 = reinterpret_cast<int32_t*>(0x3a5);
        fun_3cf();
        eax4 = *reinterpret_cast<int32_t*>(&rbp5) * 0xffffcccd;
        __asm__("ror ax, 0x2");
        if (static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax4)) <= 0xccc) {
            *reinterpret_cast<int32_t*>(&rdi1) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi1) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi2 = r12_6;
            fun_3f0();
        }
        ++rbp5;
    } while (rbp5 != 0x7d0);
    fun_40a(r12_7, 0x3f9, 0x400, rcx8);
    fun_423(0x411, 22, 1, r12_9);
    fun_340(rbx10, 22, 1, r12_9);
    fun_348(r14_11, 22, 1, r12_9);
    fun_350(r15_12, 22, 1, r12_9);
    goto v13;
}

void fun_350(int64_t rdi, int32_t* rsi, int32_t* rdx, int32_t* rcx) {
    int64_t v5;

    goto v5;
}

void fun_40a(int32_t* rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int32_t* r12_5;
    int32_t* rbx6;
    int32_t** r14_7;
    int64_t r15_8;
    int64_t v9;

    fun_423(0x411, 22, 1, r12_5);
    fun_340(rbx6, 22, 1, r12_5);
    fun_348(r14_7, 22, 1, r12_5);
    fun_350(r15_8, 22, 1, r12_5);
    goto v9;
}

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

int32_t** fun_12b(int64_t rdi, int64_t rsi) {
    int32_t** r14_3;
    int32_t** rax4;
    int64_t rax5;
    int64_t r15_6;
    uint64_t rcx7;
    uint64_t rax8;
    int32_t* rdx9;
    int32_t* rdi10;
    int32_t* rsi11;
    int32_t* rsi12;
    uint64_t r8_13;
    uint64_t r13_14;
    uint64_t r9_15;
    int32_t* rdi16;
    int32_t* rsi17;
    int32_t* rdi18;
    int32_t* rsi19;
    uint64_t r13_20;
    struct s5* rdi21;
    int32_t* rbx22;
    struct s6* rdi23;
    int32_t* rsi24;
    struct s7* rdi25;
    int32_t* rsi26;
    struct s8* rdi27;
    int32_t* rsi28;
    int32_t* rbx29;
    int32_t* rdi30;
    int32_t* rsi31;
    int32_t* rcx32;
    int32_t* rbx33;
    int32_t ebp34;
    signed char** r12_35;
    int32_t** rax36;
    int32_t* r12_37;
    int32_t* rcx38;
    int32_t* rsi39;
    int64_t rbp40;
    int32_t* rdi41;
    int32_t eax42;
    int32_t* rbx43;
    int64_t v44;

    r14_3 = rax4;
    rax5 = fun_13d(0x7d0, 8);
    r15_6 = rax5;
    *reinterpret_cast<int32_t*>(&rcx7) = 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx7) + 4) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(&rax8) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax8) + 4) = reinterpret_cast<int32_t>(fputc);
    rdx9 = reinterpret_cast<int32_t*>(0xc08f380000000000);
    g7d0 = g8;
    rdi10 = reinterpret_cast<int32_t*>(0x7d4);
    __asm__("movdqa xmm1, [rip+0x0]");
    __asm__("movapd xmm2, [rip+0x0]");
    __asm__("movdqa xmm3, [rip+0x0]");
    *reinterpret_cast<int32_t*>(&rsi11) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi11) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        __asm__("xorps xmm4, xmm4");
        __asm__("cvtsi2sd xmm4, esi");
        r14_3[static_cast<uint64_t>(rsi11)] = reinterpret_cast<int32_t*>(0xc08f380000000000);
        *rdi10 = *rsi11;
        rsi12 = rsi11 + 1;
        rdi10 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rsi12) + 0x7d1);
        if (rcx7 >= 2) {
            r8_13 = rcx7 & r13_14;
            __asm__("movd xmm4, rdi");
            __asm__("pshufd xmm4, xmm4, 0x44");
            *reinterpret_cast<int32_t*>(&r9_15) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_15) + 4) = reinterpret_cast<int32_t>(fputc);
            __asm__("movdqa xmm5, xmm1");
            do {
                __asm__("movdqa xmm6, xmm4");
                __asm__("psubq xmm6, xmm5");
                __asm__("pshufd xmm6, xmm6, 0xe8");
                __asm__("cvtdq2pd xmm6, xmm6");
                __asm__("addpd xmm6, xmm6");
                __asm__("divpd xmm6, xmm2");
                __asm__("movupd [r10+r9*8], xmm6");
                r9_15 = r9_15 + 2;
                __asm__("paddq xmm5, xmm3");
            } while (r9_15 != r8_13);
            if (rcx7 == r8_13) 
                continue;
        } else {
            *reinterpret_cast<int32_t*>(&r8_13) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_13) + 4) = reinterpret_cast<int32_t>(fputc);
            goto addr_220_14;
        }
        do {
            addr_220_14:
            __asm__("xorps xmm4, xmm4");
            __asm__("cvtsi2sd xmm4, r9d");
            __asm__("addsd xmm4, xmm4");
            __asm__("divsd xmm4, xmm0");
            *rdi10 = *rsi12;
            ++rdi10;
            ++rsi12;
            ++r8_13;
        } while (r8_13 != rcx7);
        rsi11 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rsi12) + 1);
        ++rcx7;
    } while (rsi11 != 0x7d0);
    do {
        *rdi10 = *rsi11;
        rdi16 = rdi10 + 1;
        rsi17 = rsi11 + 1;
        *rdi16 = *rsi17;
        rdi18 = rdi16 + 1;
        rsi19 = rsi17 + 1;
        if (rax8 != fputc) {
            if (rax8 != 1) {
                rdx9 = reinterpret_cast<int32_t*>(rax8 & r13_20);
                *reinterpret_cast<int32_t*>(&rsi19) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi19) + 4) = reinterpret_cast<int32_t>(fputc);
                do {
                    rdi21 = reinterpret_cast<struct s5*>(rbx22 + rax8 * 0xfa0);
                    rdi21->f0 = *rsi19;
                    rdi23 = reinterpret_cast<struct s6*>(&rdi21->f4);
                    rsi24 = rsi19 + 1;
                    __asm__("mulsd xmm1, [r14+rcx*8]");
                    __asm__("subsd xmm0, xmm1");
                    rdi23->f0 = *rsi24;
                    rdi25 = reinterpret_cast<struct s7*>(&rdi23->f4);
                    rsi26 = rsi24 + 1;
                    rdi25->f0 = *rsi26;
                    rdi27 = reinterpret_cast<struct s8*>(&rdi25->f4);
                    rsi28 = rsi26 + 1;
                    __asm__("mulsd xmm1, [r14+r8]");
                    __asm__("subsd xmm0, xmm1");
                    rdi27->f0 = *rsi28;
                    rdi18 = &rdi27->f4;
                    rsi19 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rsi28 + 1) + 2);
                } while (rsi19 != rdx9);
            }
            if ((*reinterpret_cast<unsigned char*>(&rax8) & 1) != fputc) {
                rdx9 = rbx29 + rax8 * 0xfa0;
                *rdi18 = *rsi19;
                rdi30 = rdi18 + 1;
                rsi31 = rsi19 + 1;
                __asm__("mulsd xmm1, [r14+rcx*8]");
                __asm__("subsd xmm0, xmm1");
                *rdi30 = *rsi31;
                rdi18 = rdi30 + 1;
                rsi19 = rsi31 + 1;
            }
        }
        rcx32 = rbx33 + rax8 * 0xfa0;
        __asm__("divsd xmm0, [rcx+rax*8]");
        *rdi18 = *rsi19;
        rdi10 = rdi18 + 1;
        rsi11 = rsi19 + 1;
        ++rax8;
    } while (rax8 != 0x7d0);
    if (ebp34 >= 43 && **r12_35 == fputc) {
        rax36 = g368;
        r12_37 = *rax36;
        rcx38 = r12_37;
        fun_384(0x372, 22, 1, rcx38);
        rsi39 = reinterpret_cast<int32_t*>(0x38b);
        *reinterpret_cast<int32_t*>(&rbp40) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp40) + 4) = reinterpret_cast<int32_t>(fputc);
        rdi41 = r12_37;
        fun_39e();
        do {
            *rdi41 = *rsi39;
            rdi41 = r12_37;
            rsi39 = reinterpret_cast<int32_t*>(0x3a5);
            fun_3cf();
            eax42 = *reinterpret_cast<int32_t*>(&rbp40) * 0xffffcccd;
            __asm__("ror ax, 0x2");
            if (static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax42)) <= 0xccc) {
                *reinterpret_cast<int32_t*>(&rdi41) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi41) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi39 = r12_37;
                fun_3f0();
            }
            ++rbp40;
        } while (rbp40 != 0x7d0);
        fun_40a(r12_37, 0x3f9, 0x400, rcx38);
        *reinterpret_cast<int32_t*>(&rsi11) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi11) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx9) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx9) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx32 = r12_37;
        fun_423(0x411, 22, 1, rcx32);
    }
    fun_340(rbx43, rsi11, rdx9, rcx32);
    fun_348(r14_3, rsi11, rdx9, rcx32);
    fun_350(r15_6, rsi11, rdx9, rcx32);
    goto v44;
}

void fun_423(int64_t rdi, int32_t* rsi, int32_t* rdx, int32_t* rcx) {
    int32_t* rbx5;
    int32_t** r14_6;
    int64_t r15_7;
    int64_t v8;

    fun_340(rbx5, rsi, rdx, rcx);
    fun_348(r14_6, rsi, rdx, rcx);
    fun_350(r15_7, rsi, rdx, rcx);
    goto v8;
}

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

int64_t fun_13d(struct s0* rdi, int32_t* rsi) {
    int64_t r15_3;
    int64_t rax4;
    uint64_t rcx5;
    uint64_t rax6;
    int32_t* rdx7;
    int32_t* rdi8;
    int32_t* rsi9;
    int32_t** r14_10;
    int32_t* rsi11;
    uint64_t r8_12;
    uint64_t r13_13;
    uint64_t r9_14;
    int32_t* rdi15;
    int32_t* rsi16;
    int32_t* rdi17;
    int32_t* rsi18;
    uint64_t r13_19;
    struct s9* rdi20;
    int32_t* rbx21;
    struct s10* rdi22;
    int32_t* rsi23;
    struct s11* rdi24;
    int32_t* rsi25;
    struct s12* rdi26;
    int32_t* rsi27;
    int32_t* rbx28;
    int32_t* rdi29;
    int32_t* rsi30;
    int32_t* rcx31;
    int32_t* rbx32;
    int32_t ebp33;
    signed char** r12_34;
    int32_t** rax35;
    int32_t* r12_36;
    int32_t* rcx37;
    int32_t* rsi38;
    int64_t rbp39;
    int32_t* rdi40;
    int32_t eax41;
    int32_t* rbx42;
    int32_t** r14_43;
    int64_t v44;

    r15_3 = rax4;
    *reinterpret_cast<int32_t*>(&rcx5) = 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx5) + 4) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(&rax6) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax6) + 4) = reinterpret_cast<int32_t>(fputc);
    rdx7 = reinterpret_cast<int32_t*>(0xc08f380000000000);
    rdi->f0 = *rsi;
    rdi8 = &rdi->f4;
    __asm__("movdqa xmm1, [rip+0x0]");
    __asm__("movapd xmm2, [rip+0x0]");
    __asm__("movdqa xmm3, [rip+0x0]");
    *reinterpret_cast<int32_t*>(&rsi9) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi9) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        __asm__("xorps xmm4, xmm4");
        __asm__("cvtsi2sd xmm4, esi");
        r14_10[static_cast<uint64_t>(rsi9)] = reinterpret_cast<int32_t*>(0xc08f380000000000);
        *rdi8 = *rsi9;
        rsi11 = rsi9 + 1;
        rdi8 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rsi11) + 0x7d1);
        if (rcx5 >= 2) {
            r8_12 = rcx5 & r13_13;
            __asm__("movd xmm4, rdi");
            __asm__("pshufd xmm4, xmm4, 0x44");
            *reinterpret_cast<int32_t*>(&r9_14) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_14) + 4) = reinterpret_cast<int32_t>(fputc);
            __asm__("movdqa xmm5, xmm1");
            do {
                __asm__("movdqa xmm6, xmm4");
                __asm__("psubq xmm6, xmm5");
                __asm__("pshufd xmm6, xmm6, 0xe8");
                __asm__("cvtdq2pd xmm6, xmm6");
                __asm__("addpd xmm6, xmm6");
                __asm__("divpd xmm6, xmm2");
                __asm__("movupd [r10+r9*8], xmm6");
                r9_14 = r9_14 + 2;
                __asm__("paddq xmm5, xmm3");
            } while (r9_14 != r8_12);
            if (rcx5 == r8_12) 
                continue;
        } else {
            *reinterpret_cast<int32_t*>(&r8_12) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_12) + 4) = reinterpret_cast<int32_t>(fputc);
            goto addr_220_13;
        }
        do {
            addr_220_13:
            __asm__("xorps xmm4, xmm4");
            __asm__("cvtsi2sd xmm4, r9d");
            __asm__("addsd xmm4, xmm4");
            __asm__("divsd xmm4, xmm0");
            *rdi8 = *rsi11;
            ++rdi8;
            ++rsi11;
            ++r8_12;
        } while (r8_12 != rcx5);
        rsi9 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rsi11) + 1);
        ++rcx5;
    } while (rsi9 != 0x7d0);
    do {
        *rdi8 = *rsi9;
        rdi15 = rdi8 + 1;
        rsi16 = rsi9 + 1;
        *rdi15 = *rsi16;
        rdi17 = rdi15 + 1;
        rsi18 = rsi16 + 1;
        if (rax6 != fputc) {
            if (rax6 != 1) {
                rdx7 = reinterpret_cast<int32_t*>(rax6 & r13_19);
                *reinterpret_cast<int32_t*>(&rsi18) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi18) + 4) = reinterpret_cast<int32_t>(fputc);
                do {
                    rdi20 = reinterpret_cast<struct s9*>(rbx21 + rax6 * 0xfa0);
                    rdi20->f0 = *rsi18;
                    rdi22 = reinterpret_cast<struct s10*>(&rdi20->f4);
                    rsi23 = rsi18 + 1;
                    __asm__("mulsd xmm1, [r14+rcx*8]");
                    __asm__("subsd xmm0, xmm1");
                    rdi22->f0 = *rsi23;
                    rdi24 = reinterpret_cast<struct s11*>(&rdi22->f4);
                    rsi25 = rsi23 + 1;
                    rdi24->f0 = *rsi25;
                    rdi26 = reinterpret_cast<struct s12*>(&rdi24->f4);
                    rsi27 = rsi25 + 1;
                    __asm__("mulsd xmm1, [r14+r8]");
                    __asm__("subsd xmm0, xmm1");
                    rdi26->f0 = *rsi27;
                    rdi17 = &rdi26->f4;
                    rsi18 = reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rsi27 + 1) + 2);
                } while (rsi18 != rdx7);
            }
            if ((*reinterpret_cast<unsigned char*>(&rax6) & 1) != fputc) {
                rdx7 = rbx28 + rax6 * 0xfa0;
                *rdi17 = *rsi18;
                rdi29 = rdi17 + 1;
                rsi30 = rsi18 + 1;
                __asm__("mulsd xmm1, [r14+rcx*8]");
                __asm__("subsd xmm0, xmm1");
                *rdi29 = *rsi30;
                rdi17 = rdi29 + 1;
                rsi18 = rsi30 + 1;
            }
        }
        rcx31 = rbx32 + rax6 * 0xfa0;
        __asm__("divsd xmm0, [rcx+rax*8]");
        *rdi17 = *rsi18;
        rdi8 = rdi17 + 1;
        rsi9 = rsi18 + 1;
        ++rax6;
    } while (rax6 != 0x7d0);
    if (ebp33 >= 43 && **r12_34 == fputc) {
        rax35 = g368;
        r12_36 = *rax35;
        rcx37 = r12_36;
        fun_384(0x372, 22, 1, rcx37);
        rsi38 = reinterpret_cast<int32_t*>(0x38b);
        *reinterpret_cast<int32_t*>(&rbp39) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp39) + 4) = reinterpret_cast<int32_t>(fputc);
        rdi40 = r12_36;
        fun_39e();
        do {
            *rdi40 = *rsi38;
            rdi40 = r12_36;
            rsi38 = reinterpret_cast<int32_t*>(0x3a5);
            fun_3cf();
            eax41 = *reinterpret_cast<int32_t*>(&rbp39) * 0xffffcccd;
            __asm__("ror ax, 0x2");
            if (static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&eax41)) <= 0xccc) {
                *reinterpret_cast<int32_t*>(&rdi40) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi40) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi38 = r12_36;
                fun_3f0();
            }
            ++rbp39;
        } while (rbp39 != 0x7d0);
        fun_40a(r12_36, 0x3f9, 0x400, rcx37);
        *reinterpret_cast<int32_t*>(&rsi9) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi9) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx7) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx7) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx31 = r12_36;
        fun_423(0x411, 22, 1, rcx31);
    }
    fun_340(rbx42, rsi9, rdx7, rcx31);
    fun_348(r14_43, rsi9, rdx7, rcx31);
    fun_350(r15_3, rsi9, rdx7, rcx31);
    goto v44;
}

void fputc(int32_t edi) {
    if (reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(edi < reinterpret_cast<int32_t>(fputc) == fputc)) | reinterpret_cast<uint1_t>(edi == fputc)) {
        return;
    }
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

void fun_a8(struct s13* rdi, struct s14* rsi) {
    struct s15* rdi3;
    struct s16* rsi4;
    int64_t r11_5;
    int64_t r10_6;

    __asm__("subps xmm0, xmm1");
    rdi->f0 = rsi->f0;
    rdi3 = reinterpret_cast<struct s15*>(&rdi->f4);
    rsi4 = reinterpret_cast<struct s16*>(&rsi->f4);
    if (r11_5 + 2 == r10_6) {
        if ((*reinterpret_cast<unsigned char*>(&rdi3) & 1) != fputc) {
            rdi3->f0 = rsi4->f0;
            __asm__("mulsd xmm1, [rdx+r9*8]");
            __asm__("subsd xmm0, xmm1");
            rdi3->f4 = rsi4->f4;
        }
    }
}

void submain(int32_t edi, int64_t rsi) {
    fun_119(0x3d0900, 8);
}

