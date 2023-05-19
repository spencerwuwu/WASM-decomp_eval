
struct s0 {
    int32_t f0;
    int32_t f4;
};

struct s1 {
    int32_t f0;
    int32_t f4;
};

void fun_f6(struct s0* rdi, struct s1* rsi) {
    int64_t rbp3;
    int64_t r15_4;
    int64_t v5;

    __asm__("movapd xmm1, [rsp+0x10]");
    rdi->f0 = rsi->f0;
    rdi->f4 = rsi->f4;
    if (rbp3 + 1 == r15_4) {
        goto v5;
    }
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

void fputc();

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

int32_t** g2e5 = reinterpret_cast<int32_t**>(0x3d8d48388b4c);

void fun_301(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx);

void fun_31c();

void fun_36d();

void fun_343();

void fun_387(int32_t* rdi, int64_t rsi, int64_t rdx, int32_t* rcx);

void fun_3a0(int64_t rdi, struct s7* rsi, int64_t rdx, int32_t* rcx);

void fun_2c2(int64_t rdi, struct s7* rsi, int64_t rdx, int32_t* rcx);

struct s12 {
    int32_t f0;
    int32_t f4;
};

void fun_2ca(struct s12* rdi, struct s7* rsi, int64_t rdx, int32_t* rcx);

void fun_27c() {
    struct s2* r14_1;
    struct s3* r12_2;
    struct s4* rdi3;
    struct s5* rsi4;
    void* r13_5;
    int64_t r15_6;
    struct s6* rdi7;
    struct s7* rsi8;
    int64_t rdx9;
    void* rax10;
    struct s8* rdi11;
    struct s9* rsi12;
    void* rax13;
    int32_t* rcx14;
    struct s10* rdi15;
    struct s11* rsi16;
    int64_t rdx17;
    int32_t ebp18;
    int32_t** rax19;
    int32_t* r15_20;
    int32_t* rcx21;
    int32_t* rsi22;
    int64_t r13_23;
    int32_t* rdi24;
    int64_t rbx25;
    struct s12* r14_26;
    int64_t v27;

    while (1) {
        __asm__("movapd xmm4, [rsp+0x10]");
        r14_1->f0 = r12_2->f0;
        rdi3 = reinterpret_cast<struct s4*>(&r14_1->f4);
        rsi4 = reinterpret_cast<struct s5*>(&r12_2->f4);
        r13_5 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(r13_5) + 1);
        ++r15_6;
        __asm__("movapd xmm3, [rip+0x0]");
        rdi3->f0 = rsi4->f0;
        rdi7 = reinterpret_cast<struct s6*>(&rdi3->f4);
        rsi8 = reinterpret_cast<struct s7*>(&rsi4->f4);
        if (r15_6 == 0x7cf) 
            break;
        rdx9 = r15_6 * 8;
        __asm__("movapd xmm1, xmm4");
        __asm__("xorpd xmm1, xmm3");
        __asm__("xorpd xmm0, xmm0");
        *reinterpret_cast<int32_t*>(&rax10) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax10) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rdi7->f0 = rsi8->f0;
            rdi7 = reinterpret_cast<struct s6*>(&rdi7->f4);
            rsi8 = reinterpret_cast<struct s7*>(&rsi8->f4);
            __asm__("mulsd xmm2, [r14+rax*8]");
            __asm__("addsd xmm0, xmm2");
            rax10 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rax10) + 1);
        } while (rax10 != r13_5);
        __asm__("mulsd xmm1, xmm4");
        __asm__("addsd xmm1, [rip+0x0]");
        __asm__("mulsd xmm5, xmm1");
        __asm__("addsd xmm0, [rbx+r13*8]");
        __asm__("xorpd xmm0, xmm3");
        __asm__("movapd xmm1, xmm0");
        rdi7->f0 = rsi8->f0;
        rdi11 = reinterpret_cast<struct s8*>(&rdi7->f4);
        rsi12 = reinterpret_cast<struct s9*>(&rsi8->f4);
        __asm__("divsd xmm1, xmm5");
        *reinterpret_cast<int32_t*>(&rax13) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax13) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rcx14 = reinterpret_cast<int32_t*>(~reinterpret_cast<int64_t>(rax13) + reinterpret_cast<int64_t>(r13_5));
            rdi11->f0 = rsi12->f0;
            rdi15 = reinterpret_cast<struct s10*>(&rdi11->f4);
            rsi16 = reinterpret_cast<struct s11*>(&rsi12->f4);
            __asm__("mulsd xmm0, xmm1");
            __asm__("addsd xmm0, [r14+rax*8]");
            rdi15->f0 = rsi16->f0;
            rdi11 = reinterpret_cast<struct s8*>(&rdi15->f4);
            rsi12 = reinterpret_cast<struct s9*>(&rsi16->f4);
            rax13 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rax13) + 1);
        } while (rax13 != r13_5);
        rdx17 = rdx9 + 8;
        __asm__("movapd [rsp+0x10], xmm1");
        fun_27c();
    }
    if (ebp18 >= 43 && **reinterpret_cast<signed char**>(__return_address()) == fputc) {
        rax19 = g2e5;
        r15_20 = *rax19;
        rcx21 = r15_20;
        fun_301(0x2ef, 22, 1, rcx21);
        rsi22 = reinterpret_cast<int32_t*>(0x308);
        *reinterpret_cast<int32_t*>(&r13_23) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_23) + 4) = reinterpret_cast<int32_t>(fputc);
        rdi24 = r15_20;
        fun_31c();
        do {
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&r13_23) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi24) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi24) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi22 = r15_20;
                fun_36d();
            }
            *rdi24 = *rsi22;
            rdi24 = r15_20;
            rsi22 = reinterpret_cast<int32_t*>(0x323);
            fun_343();
            ++r13_23;
        } while (r13_23 != 0x7d0);
        fun_387(r15_20, 0x376, 0x37d, rcx21);
        *reinterpret_cast<int32_t*>(&rsi8) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi8) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx17) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx17) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx14 = r15_20;
        fun_3a0(0x38e, 22, 1, rcx14);
    }
    fun_2c2(rbx25, rsi8, rdx17, rcx14);
    fun_2ca(r14_26, rsi8, rdx17, rcx14);
    goto v27;
}

void fun_2c2(int64_t rdi, struct s7* rsi, int64_t rdx, int32_t* rcx) {
    struct s12* r14_5;
    int64_t v6;

    fun_2ca(r14_5, rsi, rdx, rcx);
    goto v6;
}

void fun_343() {
    int64_t r13_1;
    int32_t* rdi2;
    int32_t* rsi3;
    int32_t* r15_4;
    int32_t* r15_5;
    int32_t* r12_6;
    int32_t* r15_7;
    int32_t* rcx8;
    int32_t* r15_9;
    int64_t rbx10;
    struct s12* r14_11;
    int64_t v12;

    while (++r13_1, r13_1 != 0x7d0) {
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&r13_1) * 0xcccccccd) <= 0xccccccc) {
            *reinterpret_cast<int32_t*>(&rdi2) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi2) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi3 = r15_4;
            fun_36d();
        }
        *rdi2 = *rsi3;
        rdi2 = r15_5;
        rsi3 = r12_6;
        fun_343();
    }
    fun_387(r15_7, 0x376, 0x37d, rcx8);
    fun_3a0(0x38e, 22, 1, r15_9);
    fun_2c2(rbx10, 22, 1, r15_9);
    fun_2ca(r14_11, 22, 1, r15_9);
    goto v12;
}

void fun_36d() {
    int32_t* rdi1;
    int32_t* rsi2;
    int32_t* r15_3;
    int32_t* r12_4;
    int64_t r13_5;
    int32_t* r15_6;
    int32_t* r15_7;
    int32_t* rcx8;
    int32_t* r15_9;
    int64_t rbx10;
    struct s12* r14_11;
    int64_t v12;

    while (1) {
        do {
            *rdi1 = *rsi2;
            rdi1 = r15_3;
            rsi2 = r12_4;
            fun_343();
            ++r13_5;
            if (r13_5 == 0x7d0) 
                goto addr_36f_7;
            __asm__("ror eax, 0x2");
        } while (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&r13_5) * 0xcccccccd) > 0xccccccc);
        *reinterpret_cast<int32_t*>(&rdi1) = 10;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi1) + 4) = reinterpret_cast<int32_t>(fputc);
        rsi2 = r15_6;
        fun_36d();
    }
    addr_36f_7:
    fun_387(r15_7, 0x376, 0x37d, rcx8);
    fun_3a0(0x38e, 22, 1, r15_9);
    fun_2c2(rbx10, 22, 1, r15_9);
    fun_2ca(r14_11, 22, 1, r15_9);
    goto v12;
}

struct s13 {
    int32_t f0;
    int32_t f4;
};

struct s14 {
    int32_t f0;
    int32_t f4;
};

struct s12* fun_168();

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

void fun_156(int64_t rdi, int64_t rsi) {
    signed char** v3;
    int64_t rbx4;
    int64_t rax5;
    struct s13* rdi6;
    struct s14* rsi7;
    struct s12* rax8;
    signed char*** rsp9;
    struct s12* r14_10;
    int64_t rax11;
    struct s15* rdi12;
    struct s16* rsi13;
    struct s17* rdi14;
    struct s18* rsi15;
    struct s19* rdi16;
    struct s7* rsi17;
    void* r13_18;
    int64_t r15_19;
    int32_t* r12_20;
    int64_t rdx21;
    void* rax22;
    struct s20* rdi23;
    struct s9* rsi24;
    void* rax25;
    int32_t* rcx26;
    struct s21* rdi27;
    struct s11* rsi28;
    int64_t rdx29;
    int32_t v30;
    struct s22* rdi31;
    int32_t v32;
    int32_t ebp33;
    int32_t** rax34;
    int32_t* r15_35;
    int32_t* rcx36;
    int32_t* rsi37;
    int64_t r13_38;
    int32_t* rdi39;
    int64_t v40;

    v3 = reinterpret_cast<signed char**>(__return_address());
    rbx4 = rax5;
    *reinterpret_cast<int32_t*>(&rdi6) = 0x7d0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi6) + 4) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(&rsi7) = 8;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi7) + 4) = reinterpret_cast<int32_t>(fputc);
    rax8 = fun_168();
    rsp9 = reinterpret_cast<signed char***>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 + 8);
    r14_10 = rax8;
    *reinterpret_cast<int32_t*>(&rax11) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax11) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        __asm__("xorps xmm0, xmm0");
        __asm__("cvtsi2sd xmm0, ecx");
        rdi6->f0 = rsi7->f0;
        rdi6 = reinterpret_cast<struct s13*>(&rdi6->f4);
        rsi7 = reinterpret_cast<struct s14*>(&rsi7->f4);
        ++rax11;
    } while (rax11 != 0x7d0);
    rdi6->f0 = rsi7->f0;
    rdi12 = reinterpret_cast<struct s15*>(&rdi6->f4);
    rsi13 = reinterpret_cast<struct s16*>(&rsi7->f4);
    __asm__("movapd xmm1, [rip+0x0]");
    __asm__("xorpd xmm0, xmm1");
    __asm__("movlpd [r14], xmm0");
    rdi12->f0 = rsi13->f0;
    rdi14 = reinterpret_cast<struct s17*>(&rdi12->f4);
    rsi15 = reinterpret_cast<struct s18*>(&rsi13->f4);
    __asm__("xorpd xmm4, xmm1");
    rdi14->f0 = rsi15->f0;
    rdi16 = reinterpret_cast<struct s19*>(&rdi14->f4);
    rsi17 = reinterpret_cast<struct s7*>(&rsi15->f4);
    *reinterpret_cast<int32_t*>(&r13_18) = 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_18) + 4) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(&r15_19) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_19) + 4) = reinterpret_cast<int32_t>(fputc);
    __asm__("movapd xmm3, [rip+0x0]");
    r12_20 = reinterpret_cast<int32_t*>(rsp9 + 4);
    do {
        rdx21 = r15_19 * 8;
        __asm__("movapd xmm1, xmm4");
        __asm__("xorpd xmm1, xmm3");
        __asm__("xorpd xmm0, xmm0");
        *reinterpret_cast<int32_t*>(&rax22) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax22) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rdi16->f0 = rsi17->f0;
            rdi16 = reinterpret_cast<struct s19*>(&rdi16->f4);
            rsi17 = reinterpret_cast<struct s7*>(&rsi17->f4);
            __asm__("mulsd xmm2, [r14+rax*8]");
            __asm__("addsd xmm0, xmm2");
            rax22 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rax22) + 1);
        } while (rax22 != r13_18);
        __asm__("mulsd xmm1, xmm4");
        __asm__("addsd xmm1, [rip+0x0]");
        __asm__("mulsd xmm5, xmm1");
        __asm__("addsd xmm0, [rbx+r13*8]");
        __asm__("xorpd xmm0, xmm3");
        __asm__("movapd xmm1, xmm0");
        rdi16->f0 = rsi17->f0;
        rdi23 = reinterpret_cast<struct s20*>(&rdi16->f4);
        rsi24 = reinterpret_cast<struct s9*>(&rsi17->f4);
        __asm__("divsd xmm1, xmm5");
        *reinterpret_cast<int32_t*>(&rax25) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax25) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rcx26 = reinterpret_cast<int32_t*>(~reinterpret_cast<int64_t>(rax25) + reinterpret_cast<int64_t>(r13_18));
            rdi23->f0 = rsi24->f0;
            rdi27 = reinterpret_cast<struct s21*>(&rdi23->f4);
            rsi28 = reinterpret_cast<struct s11*>(&rsi24->f4);
            __asm__("mulsd xmm0, xmm1");
            __asm__("addsd xmm0, [r14+rax*8]");
            rdi27->f0 = rsi28->f0;
            rdi23 = reinterpret_cast<struct s20*>(&rdi27->f4);
            rsi24 = reinterpret_cast<struct s9*>(&rsi28->f4);
            rax25 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rax25) + 1);
        } while (rax25 != r13_18);
        rdx29 = rdx21 + 8;
        __asm__("movapd [rsp+0x10], xmm1");
        fun_27c();
        __asm__("movapd xmm4, [rsp+0x10]");
        r14_10->f0 = v30;
        rdi31 = reinterpret_cast<struct s22*>(&r14_10->f4);
        r13_18 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(r13_18) + 1);
        ++r15_19;
        __asm__("movapd xmm3, [rip+0x0]");
        rdi31->f0 = v32;
        rdi16 = reinterpret_cast<struct s19*>(&rdi31->f4);
        rsi17 = reinterpret_cast<struct s7*>(r12_20 + 1 + 1);
    } while (r15_19 != 0x7cf);
    if (ebp33 >= 43 && **v3 == fputc) {
        rax34 = g2e5;
        r15_35 = *rax34;
        rcx36 = r15_35;
        fun_301(0x2ef, 22, 1, rcx36);
        rsi37 = reinterpret_cast<int32_t*>(0x308);
        *reinterpret_cast<int32_t*>(&r13_38) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_38) + 4) = reinterpret_cast<int32_t>(fputc);
        rdi39 = r15_35;
        fun_31c();
        do {
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&r13_38) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi39) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi39) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi37 = r15_35;
                fun_36d();
            }
            *rdi39 = *rsi37;
            rdi39 = r15_35;
            rsi37 = reinterpret_cast<int32_t*>(0x323);
            fun_343();
            ++r13_38;
        } while (r13_38 != 0x7d0);
        fun_387(r15_35, 0x376, 0x37d, rcx36);
        *reinterpret_cast<int32_t*>(&rsi17) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi17) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx29) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx29) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx26 = r15_35;
        fun_3a0(0x38e, 22, 1, rcx26);
    }
    fun_2c2(rbx4, rsi17, rdx29, rcx26);
    fun_2ca(r14_10, rsi17, rdx29, rcx26);
    goto v40;
}

void fun_301(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int32_t* rsi5;
    int64_t r13_6;
    int32_t* rdi7;
    int32_t* r15_8;
    int32_t* r15_9;
    int32_t* r15_10;
    int32_t* r15_11;
    int32_t* r15_12;
    int64_t rbx13;
    struct s12* r14_14;
    int64_t v15;

    rsi5 = reinterpret_cast<int32_t*>(0x308);
    *reinterpret_cast<int32_t*>(&r13_6) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_6) + 4) = reinterpret_cast<int32_t>(fputc);
    rdi7 = r15_8;
    fun_31c();
    do {
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&r13_6) * 0xcccccccd) <= 0xccccccc) {
            *reinterpret_cast<int32_t*>(&rdi7) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi7) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi5 = r15_9;
            fun_36d();
        }
        *rdi7 = *rsi5;
        rdi7 = r15_10;
        rsi5 = reinterpret_cast<int32_t*>(0x323);
        fun_343();
        ++r13_6;
    } while (r13_6 != 0x7d0);
    fun_387(r15_11, 0x376, 0x37d, rcx);
    fun_3a0(0x38e, 22, 1, r15_12);
    fun_2c2(rbx13, 22, 1, r15_12);
    fun_2ca(r14_14, 22, 1, r15_12);
    goto v15;
}

void fun_2ca(struct s12* rdi, struct s7* rsi, int64_t rdx, int32_t* rcx) {
    int64_t v5;

    goto v5;
}

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

struct s12* fun_168() {
    signed char*** rsp1;
    signed char** v2;
    struct s12* r14_3;
    struct s12* rax4;
    int64_t rax5;
    struct s23* rdi6;
    struct s24* rsi7;
    struct s25* rdi8;
    struct s26* rsi9;
    struct s27* rdi10;
    struct s19* rdi11;
    void* r13_12;
    int64_t r15_13;
    int32_t* r12_14;
    int64_t rdx15;
    void* rax16;
    int32_t v17;
    int32_t v18;
    struct s20* rdi19;
    void* rax20;
    int32_t* rcx21;
    int32_t v22;
    struct s21* rdi23;
    int32_t v24;
    int64_t rdx25;
    int32_t v26;
    struct s22* rdi27;
    int32_t v28;
    struct s7* rsi29;
    int32_t ebp30;
    int32_t** rax31;
    int32_t* r15_32;
    int32_t* rcx33;
    int32_t* rsi34;
    int64_t r13_35;
    int32_t* rdi36;
    int64_t rbx37;
    int64_t v38;

    rsp1 = reinterpret_cast<signed char***>(__zero_stack_offset());
    v2 = reinterpret_cast<signed char**>(__return_address());
    r14_3 = rax4;
    *reinterpret_cast<int32_t*>(&rax5) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax5) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        __asm__("xorps xmm0, xmm0");
        __asm__("cvtsi2sd xmm0, ecx");
        rdi6->f0 = rsi7->f0;
        rdi6 = reinterpret_cast<struct s23*>(&rdi6->f4);
        rsi7 = reinterpret_cast<struct s24*>(&rsi7->f4);
        ++rax5;
    } while (rax5 != 0x7d0);
    rdi6->f0 = rsi7->f0;
    rdi8 = reinterpret_cast<struct s25*>(&rdi6->f4);
    rsi9 = reinterpret_cast<struct s26*>(&rsi7->f4);
    __asm__("movapd xmm1, [rip+0x0]");
    __asm__("xorpd xmm0, xmm1");
    __asm__("movlpd [r14], xmm0");
    rdi8->f0 = rsi9->f0;
    rdi10 = reinterpret_cast<struct s27*>(&rdi8->f4);
    __asm__("xorpd xmm4, xmm1");
    rdi10->f0 = rsi9->f4;
    rdi11 = reinterpret_cast<struct s19*>(&rdi10->f4);
    *reinterpret_cast<int32_t*>(&r13_12) = 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_12) + 4) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(&r15_13) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_13) + 4) = reinterpret_cast<int32_t>(fputc);
    __asm__("movapd xmm3, [rip+0x0]");
    r12_14 = reinterpret_cast<int32_t*>(rsp1 + 4);
    do {
        rdx15 = r15_13 * 8;
        __asm__("movapd xmm1, xmm4");
        __asm__("xorpd xmm1, xmm3");
        __asm__("xorpd xmm0, xmm0");
        *reinterpret_cast<int32_t*>(&rax16) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax16) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rdi11->f0 = v17;
            rdi11 = reinterpret_cast<struct s19*>(&rdi11->f4);
            __asm__("mulsd xmm2, [r14+rax*8]");
            __asm__("addsd xmm0, xmm2");
            rax16 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rax16) + 1);
        } while (rax16 != r13_12);
        __asm__("mulsd xmm1, xmm4");
        __asm__("addsd xmm1, [rip+0x0]");
        __asm__("mulsd xmm5, xmm1");
        __asm__("addsd xmm0, [rbx+r13*8]");
        __asm__("xorpd xmm0, xmm3");
        __asm__("movapd xmm1, xmm0");
        rdi11->f0 = v18;
        rdi19 = reinterpret_cast<struct s20*>(&rdi11->f4);
        __asm__("divsd xmm1, xmm5");
        *reinterpret_cast<int32_t*>(&rax20) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax20) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rcx21 = reinterpret_cast<int32_t*>(~reinterpret_cast<int64_t>(rax20) + reinterpret_cast<int64_t>(r13_12));
            rdi19->f0 = v22;
            rdi23 = reinterpret_cast<struct s21*>(&rdi19->f4);
            __asm__("mulsd xmm0, xmm1");
            __asm__("addsd xmm0, [r14+rax*8]");
            rdi23->f0 = v24;
            rdi19 = reinterpret_cast<struct s20*>(&rdi23->f4);
            rax20 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rax20) + 1);
        } while (rax20 != r13_12);
        rdx25 = rdx15 + 8;
        __asm__("movapd [rsp+0x10], xmm1");
        fun_27c();
        __asm__("movapd xmm4, [rsp+0x10]");
        r14_3->f0 = v26;
        rdi27 = reinterpret_cast<struct s22*>(&r14_3->f4);
        r13_12 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(r13_12) + 1);
        ++r15_13;
        __asm__("movapd xmm3, [rip+0x0]");
        rdi27->f0 = v28;
        rdi11 = reinterpret_cast<struct s19*>(&rdi27->f4);
        rsi29 = reinterpret_cast<struct s7*>(r12_14 + 1 + 1);
    } while (r15_13 != 0x7cf);
    if (ebp30 >= 43 && **v2 == fputc) {
        rax31 = g2e5;
        r15_32 = *rax31;
        rcx33 = r15_32;
        fun_301(0x2ef, 22, 1, rcx33);
        rsi34 = reinterpret_cast<int32_t*>(0x308);
        *reinterpret_cast<int32_t*>(&r13_35) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_35) + 4) = reinterpret_cast<int32_t>(fputc);
        rdi36 = r15_32;
        fun_31c();
        do {
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&r13_35) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi36) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi36) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi34 = r15_32;
                fun_36d();
            }
            *rdi36 = *rsi34;
            rdi36 = r15_32;
            rsi34 = reinterpret_cast<int32_t*>(0x323);
            fun_343();
            ++r13_35;
        } while (r13_35 != 0x7d0);
        fun_387(r15_32, 0x376, 0x37d, rcx33);
        *reinterpret_cast<int32_t*>(&rsi29) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi29) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx25) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx25) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx21 = r15_32;
        fun_3a0(0x38e, 22, 1, rcx21);
    }
    fun_2c2(rbx37, rsi29, rdx25, rcx21);
    fun_2ca(r14_3, rsi29, rdx25, rcx21);
    goto v38;
}

void fun_31c() {
    int64_t r13_1;
    int32_t* rdi2;
    int32_t* rsi3;
    int32_t* r15_4;
    int32_t* r15_5;
    int32_t* r15_6;
    int32_t* rcx7;
    int32_t* r15_8;
    int64_t rbx9;
    struct s12* r14_10;
    int64_t v11;

    do {
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&r13_1) * 0xcccccccd) <= 0xccccccc) {
            *reinterpret_cast<int32_t*>(&rdi2) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi2) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi3 = r15_4;
            fun_36d();
        }
        *rdi2 = *rsi3;
        rdi2 = r15_5;
        rsi3 = reinterpret_cast<int32_t*>(0x323);
        fun_343();
        ++r13_1;
    } while (r13_1 != 0x7d0);
    fun_387(r15_6, 0x376, 0x37d, rcx7);
    fun_3a0(0x38e, 22, 1, r15_8);
    fun_2c2(rbx9, 22, 1, r15_8);
    fun_2ca(r14_10, 22, 1, r15_8);
    goto v11;
}

void fun_387(int32_t* rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int32_t* r15_5;
    int64_t rbx6;
    struct s12* r14_7;
    int64_t v8;

    fun_3a0(0x38e, 22, 1, r15_5);
    fun_2c2(rbx6, 22, 1, r15_5);
    fun_2ca(r14_7, 22, 1, r15_5);
    goto v8;
}

void fun_3a0(int64_t rdi, struct s7* rsi, int64_t rdx, int32_t* rcx) {
    int64_t rbx5;
    struct s12* r14_6;
    int64_t v7;

    fun_2c2(rbx5, rsi, rdx, rcx);
    fun_2ca(r14_6, rsi, rdx, rcx);
    goto v7;
}

void fputc() {
}

void fun_21(int32_t edi) {
}

void fun_7c() {
}

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

void fun_98(struct s28* rdi, struct s29* rsi) {
    int64_t rax3;
    int64_t r13_4;
    struct s30* rdi5;
    struct s31* rsi6;
    int64_t rax7;
    struct s32* rdi8;
    struct s33* rsi9;
    int64_t r13_10;
    struct s0* rbx11;
    struct s1* r12_12;

    if (rax3 + 1 != r13_4) 
        goto 0x80;
    __asm__("addsd xmm2, [r14+r13*8]");
    __asm__("mulsd xmm3, xmm0");
    __asm__("xorpd xmm2, [rip+0x0]");
    rdi->f0 = rsi->f0;
    rdi5 = reinterpret_cast<struct s30*>(&rdi->f4);
    rsi6 = reinterpret_cast<struct s31*>(&rsi->f4);
    __asm__("divsd xmm2, xmm3");
    *reinterpret_cast<int32_t*>(&rax7) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax7) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        rdi5->f0 = rsi6->f0;
        rdi8 = reinterpret_cast<struct s32*>(&rdi5->f4);
        rsi9 = reinterpret_cast<struct s33*>(&rsi6->f4);
        __asm__("mulsd xmm0, xmm2");
        __asm__("addsd xmm0, [rbx+rax*8]");
        rdi8->f0 = rsi9->f0;
        rdi5 = reinterpret_cast<struct s30*>(&rdi8->f4);
        rsi6 = reinterpret_cast<struct s31*>(&rsi9->f4);
        ++rax7;
    } while (rax7 != r13_10);
    __asm__("movapd [rsp+0x10], xmm2");
    fun_f6(rbx11, r12_12);
}

void submain(int32_t edi, int64_t rsi) {
    fun_156(0x7d0, 8);
}

