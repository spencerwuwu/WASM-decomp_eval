
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

void fprintf();

struct s4 {
    int32_t f0;
    int32_t f4;
};

struct s5 {
    int32_t f0;
    int32_t f4;
};

void init_array(struct s0* rdi, struct s1* rsi, int64_t rdx, int64_t rcx) {
    int32_t v5;
    int32_t v6;
    struct s2* rdi7;
    struct s3* rsi8;
    int32_t v9;
    struct s4* rdi10;
    struct s5* rsi11;
    int32_t v12;
    int32_t v13;

    v5 = *reinterpret_cast<int32_t*>(&rdi);
    v6 = *reinterpret_cast<int32_t*>(&rsi);
    __asm__("cvtsi2sd xmm0, dword [rbp-0x8]");
    rdi->f0 = rsi->f0;
    rdi7 = reinterpret_cast<struct s2*>(&rdi->f4);
    rsi8 = reinterpret_cast<struct s3*>(&rsi->f4);
    v9 = reinterpret_cast<int32_t>(fprintf);
    while (v9 < v6) {
        __asm__("cvtsi2sd xmm1, dword [rbp-0x1c]");
        __asm__("divsd xmm1, [rbp-0x28]");
        rdi7->f0 = rsi8->f0;
        rdi10 = reinterpret_cast<struct s4*>(&rdi7->f4);
        rsi11 = reinterpret_cast<struct s5*>(&rsi8->f4);
        __asm__("addsd xmm0, xmm1");
        rdi10->f0 = rsi11->f0;
        rdi7 = reinterpret_cast<struct s2*>(&rdi10->f4);
        rsi8 = reinterpret_cast<struct s3*>(&rsi11->f4);
        ++v9;
    }
    v12 = reinterpret_cast<int32_t>(fprintf);
    while (v12 < v5) {
        v13 = reinterpret_cast<int32_t>(fprintf);
        while (v13 < v6) {
            __asm__("cdq ");
            __asm__("cvtsi2sd xmm0, edx");
            __asm__("cvtsi2sd xmm1, eax");
            __asm__("divsd xmm0, xmm1");
            rdi7->f0 = rsi8->f0;
            rdi7 = reinterpret_cast<struct s2*>(&rdi7->f4);
            rsi8 = reinterpret_cast<struct s3*>(&rsi8->f4);
            ++v13;
        }
        ++v12;
    }
    return;
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

void kernel_atax(int32_t edi, int32_t esi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7) {
    struct s6* rdi1;
    struct s7* rsi2;
    int32_t v8;
    int32_t v9;
    int32_t v10;
    int32_t v11;
    int32_t v12;
    struct s8* rdi13;
    struct s9* rsi14;
    struct s10* rdi15;
    struct s11* rsi16;
    struct s12* rdi17;
    struct s13* rsi18;
    int32_t v19;
    struct s8* rdi20;
    struct s9* rsi21;
    struct s10* rdi22;
    struct s11* rsi23;
    struct s12* rdi24;
    struct s13* rsi25;

    *reinterpret_cast<int32_t*>(&rdi1) = edi;
    *reinterpret_cast<int32_t*>(&rsi2) = esi;
    v8 = *reinterpret_cast<int32_t*>(&rdi1);
    v9 = *reinterpret_cast<int32_t*>(&rsi2);
    v10 = reinterpret_cast<int32_t>(fprintf);
    while (v10 < v9) {
        __asm__("xorps xmm0, xmm0");
        rdi1->f0 = rsi2->f0;
        rdi1 = reinterpret_cast<struct s6*>(&rdi1->f4);
        rsi2 = reinterpret_cast<struct s7*>(&rsi2->f4);
        ++v10;
    }
    v11 = reinterpret_cast<int32_t>(fprintf);
    while (v11 < v8) {
        __asm__("xorps xmm0, xmm0");
        rdi1->f0 = rsi2->f0;
        rdi1 = reinterpret_cast<struct s6*>(&rdi1->f4);
        rsi2 = reinterpret_cast<struct s7*>(&rsi2->f4);
        v12 = reinterpret_cast<int32_t>(fprintf);
        while (v12 < v9) {
            rdi1->f0 = rsi2->f0;
            rdi13 = reinterpret_cast<struct s8*>(&rdi1->f4);
            rsi14 = reinterpret_cast<struct s9*>(&rsi2->f4);
            rdi13->f0 = rsi14->f0;
            rdi15 = reinterpret_cast<struct s10*>(&rdi13->f4);
            rsi16 = reinterpret_cast<struct s11*>(&rsi14->f4);
            rdi15->f0 = rsi16->f0;
            rdi17 = reinterpret_cast<struct s12*>(&rdi15->f4);
            rsi18 = reinterpret_cast<struct s13*>(&rsi16->f4);
            __asm__("mulsd xmm0, xmm2");
            __asm__("addsd xmm0, xmm1");
            rdi17->f0 = rsi18->f0;
            rdi1 = reinterpret_cast<struct s6*>(&rdi17->f4);
            rsi2 = reinterpret_cast<struct s7*>(&rsi18->f4);
            ++v12;
        }
        v19 = reinterpret_cast<int32_t>(fprintf);
        while (v19 < v9) {
            rdi1->f0 = rsi2->f0;
            rdi20 = reinterpret_cast<struct s8*>(&rdi1->f4);
            rsi21 = reinterpret_cast<struct s9*>(&rsi2->f4);
            rdi20->f0 = rsi21->f0;
            rdi22 = reinterpret_cast<struct s10*>(&rdi20->f4);
            rsi23 = reinterpret_cast<struct s11*>(&rsi21->f4);
            rdi22->f0 = rsi23->f0;
            rdi24 = reinterpret_cast<struct s12*>(&rdi22->f4);
            rsi25 = reinterpret_cast<struct s13*>(&rsi23->f4);
            __asm__("mulsd xmm0, xmm2");
            __asm__("addsd xmm0, xmm1");
            rdi24->f0 = rsi25->f0;
            rdi1 = reinterpret_cast<struct s6*>(&rdi24->f4);
            rsi2 = reinterpret_cast<struct s7*>(&rsi25->f4);
            ++v19;
        }
        ++v11;
    }
    return;
}

void print_array(int32_t edi, int64_t rsi);

void fun_d2(int64_t rdi, int64_t rsi);

void fun_db(int64_t rdi, int64_t rsi);

void fun_e4(int64_t rdi, int64_t rsi);

void fun_ed(int64_t rdi, int64_t rsi);

void fun_b4(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7) {
    int32_t eax8;
    int32_t edi9;
    int64_t rbp10;
    int64_t rbp11;
    int64_t rdi12;
    int64_t rbp13;
    int64_t rdi14;
    int64_t rbp15;
    int64_t rdi16;
    int64_t rbp17;
    int64_t rdi18;
    int64_t rbp19;
    int64_t v20;

    if (reinterpret_cast<int1_t>(eax8 == fprintf)) {
        edi9 = *reinterpret_cast<int32_t*>(rbp10 - 24);
        rsi = *reinterpret_cast<int64_t*>(rbp11 - 48);
        print_array(edi9, rsi);
    }
    rdi12 = *reinterpret_cast<int64_t*>(rbp13 - 32);
    fun_d2(rdi12, rsi);
    rdi14 = *reinterpret_cast<int64_t*>(rbp15 - 40);
    fun_db(rdi14, rsi);
    rdi16 = *reinterpret_cast<int64_t*>(rbp17 - 48);
    fun_e4(rdi16, rsi);
    rdi18 = *reinterpret_cast<int64_t*>(rbp19 - 56);
    fun_ed(rdi18, rsi);
    goto v20;
}

int64_t* g356 = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_367(int64_t rdi, int64_t rsi);

int64_t* g36e = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_386(int64_t rdi);

int64_t* g3b4 = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_3c5(int64_t rdi);

int32_t** g3cc = reinterpret_cast<int32_t**>(0x48f0458b48388b48);

void fun_3ea(int64_t rdi);

int64_t* g3ff = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_417(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx);

int64_t* g41e = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_42f(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx);

void print_array(int32_t edi, int64_t rsi) {
    int32_t v3;
    int64_t* rax4;
    int64_t rdi5;
    int64_t* rax6;
    int64_t rdi7;
    int32_t* rsi8;
    int32_t v9;
    int64_t* rax10;
    int64_t rdi11;
    int32_t** rax12;
    int32_t* rdi13;
    int64_t rcx14;
    int64_t* rax15;
    int64_t rdi16;
    int64_t* rax17;
    int64_t rdi18;

    v3 = edi;
    rax4 = g356;
    rdi5 = *rax4;
    fun_367(rdi5, 0x360);
    rax6 = g36e;
    rdi7 = *rax6;
    rsi8 = reinterpret_cast<int32_t*>(0x378);
    fun_386(rdi7);
    v9 = reinterpret_cast<int32_t>(fprintf);
    while (v9 < v3) {
        __asm__("cdq ");
        if (reinterpret_cast<int1_t>(v9 % 20 == fprintf)) {
            rax10 = g3b4;
            rdi11 = *rax10;
            rsi8 = reinterpret_cast<int32_t*>(0x3be);
            fun_3c5(rdi11);
        }
        rax12 = g3cc;
        rdi13 = *rax12;
        rcx14 = v9;
        *rdi13 = *rsi8;
        rsi8 = reinterpret_cast<int32_t*>(0x3e3);
        fun_3ea(rdi13 + 1);
        ++v9;
    }
    rax15 = g3ff;
    rdi16 = *rax15;
    fun_417(rdi16, 0x409, 0x410, rcx14);
    rax17 = g41e;
    rdi18 = *rax17;
    fun_42f(rdi18, 0x428, 0x410, rcx14);
    return;
}

void fun_3c5(int64_t rdi) {
    int32_t** rax2;
    int32_t* rdi3;
    int64_t rcx4;
    int64_t rbp5;
    int32_t* rsi6;
    int64_t rbp7;
    int64_t rbp8;
    int64_t rbp9;
    int64_t rbp10;
    int64_t rbp11;
    int64_t* rax12;
    int64_t rdi13;
    int64_t* rax14;
    int64_t rdi15;
    int64_t* rax16;
    int64_t rdi17;
    int64_t v18;

    while (1) {
        rax2 = g3cc;
        rdi3 = *rax2;
        rcx4 = *reinterpret_cast<int32_t*>(rbp5 - 20);
        *rdi3 = *rsi6;
        rsi6 = reinterpret_cast<int32_t*>(0x3e3);
        fun_3ea(rdi3 + 1);
        *reinterpret_cast<int32_t*>(rbp7 - 20) = *reinterpret_cast<int32_t*>(rbp8 - 20) + 1;
        if (*reinterpret_cast<int32_t*>(rbp9 - 20) >= *reinterpret_cast<int32_t*>(rbp10 - 4)) 
            break;
        __asm__("cdq ");
        if (!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp11 - 20) % 20 == fprintf)) 
            continue;
        rax12 = g3b4;
        rdi13 = *rax12;
        rsi6 = reinterpret_cast<int32_t*>(0x3be);
        fun_3c5(rdi13);
    }
    rax14 = g3ff;
    rdi15 = *rax14;
    fun_417(rdi15, 0x409, 0x410, rcx4);
    rax16 = g41e;
    rdi17 = *rax16;
    fun_42f(rdi17, 0x428, 0x410, rcx4);
    goto v18;
}

void fun_3ea(int64_t rdi) {
    int64_t rbp2;
    int64_t rbp3;
    int64_t rbp4;
    int64_t rbp5;
    int64_t rbp6;
    int64_t* rax7;
    int64_t rdi8;
    int32_t* rsi9;
    int32_t** rax10;
    int32_t* rdi11;
    int64_t rcx12;
    int64_t rbp13;
    int64_t* rax14;
    int64_t rdi15;
    int64_t* rax16;
    int64_t rdi17;
    int64_t v18;

    while (1) {
        *reinterpret_cast<int32_t*>(rbp2 - 20) = *reinterpret_cast<int32_t*>(rbp3 - 20) + 1;
        if (*reinterpret_cast<int32_t*>(rbp4 - 20) >= *reinterpret_cast<int32_t*>(rbp5 - 4)) 
            break;
        __asm__("cdq ");
        if (reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp6 - 20) % 20 == fprintf)) {
            rax7 = g3b4;
            rdi8 = *rax7;
            rsi9 = reinterpret_cast<int32_t*>(0x3be);
            fun_3c5(rdi8);
        }
        rax10 = g3cc;
        rdi11 = *rax10;
        rcx12 = *reinterpret_cast<int32_t*>(rbp13 - 20);
        *rdi11 = *rsi9;
        rsi9 = reinterpret_cast<int32_t*>(0x3e3);
        fun_3ea(rdi11 + 1);
    }
    rax14 = g3ff;
    rdi15 = *rax14;
    fun_417(rdi15, 0x409, 0x410, rcx12);
    rax16 = g41e;
    rdi17 = *rax16;
    fun_42f(rdi17, 0x428, 0x410, rcx12);
    goto v18;
}

void fun_d2(int64_t rdi, int64_t rsi) {
    int64_t rdi3;
    int64_t rbp4;
    int64_t rdi5;
    int64_t rbp6;
    int64_t rdi7;
    int64_t rbp8;
    int64_t v9;

    rdi3 = *reinterpret_cast<int64_t*>(rbp4 - 40);
    fun_db(rdi3, rsi);
    rdi5 = *reinterpret_cast<int64_t*>(rbp6 - 48);
    fun_e4(rdi5, rsi);
    rdi7 = *reinterpret_cast<int64_t*>(rbp8 - 56);
    fun_ed(rdi7, rsi);
    goto v9;
}

void fun_367(int64_t rdi, int64_t rsi) {
    int64_t* rax3;
    int64_t rdi4;
    int32_t* rsi5;
    int64_t rbp6;
    int64_t rbp7;
    int64_t rbp8;
    int64_t rbp9;
    int64_t* rax10;
    int64_t rdi11;
    int32_t** rax12;
    int32_t* rdi13;
    int64_t rcx14;
    int64_t rbp15;
    int64_t rbp16;
    int64_t rbp17;
    int64_t* rax18;
    int64_t rdi19;
    int64_t* rax20;
    int64_t rdi21;
    int64_t v22;

    rax3 = g36e;
    rdi4 = *rax3;
    rsi5 = reinterpret_cast<int32_t*>(0x378);
    fun_386(rdi4);
    *reinterpret_cast<int32_t*>(rbp6 - 20) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp7 - 20) < *reinterpret_cast<int32_t*>(rbp8 - 4)) {
        __asm__("cdq ");
        if (reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp9 - 20) % 20 == fprintf)) {
            rax10 = g3b4;
            rdi11 = *rax10;
            rsi5 = reinterpret_cast<int32_t*>(0x3be);
            fun_3c5(rdi11);
        }
        rax12 = g3cc;
        rdi13 = *rax12;
        rcx14 = *reinterpret_cast<int32_t*>(rbp15 - 20);
        *rdi13 = *rsi5;
        rsi5 = reinterpret_cast<int32_t*>(0x3e3);
        fun_3ea(rdi13 + 1);
        *reinterpret_cast<int32_t*>(rbp16 - 20) = *reinterpret_cast<int32_t*>(rbp17 - 20) + 1;
    }
    rax18 = g3ff;
    rdi19 = *rax18;
    fun_417(rdi19, 0x409, 0x410, rcx14);
    rax20 = g41e;
    rdi21 = *rax20;
    fun_42f(rdi21, 0x428, 0x410, rcx14);
    goto v22;
}

void fun_db(int64_t rdi, int64_t rsi) {
    int64_t rdi3;
    int64_t rbp4;
    int64_t rdi5;
    int64_t rbp6;
    int64_t v7;

    rdi3 = *reinterpret_cast<int64_t*>(rbp4 - 48);
    fun_e4(rdi3, rsi);
    rdi5 = *reinterpret_cast<int64_t*>(rbp6 - 56);
    fun_ed(rdi5, rsi);
    goto v7;
}

void fun_386(int64_t rdi) {
    int64_t rbp2;
    int64_t rbp3;
    int64_t rbp4;
    int64_t rbp5;
    int64_t* rax6;
    int64_t rdi7;
    int32_t* rsi8;
    int32_t** rax9;
    int32_t* rdi10;
    int64_t rcx11;
    int64_t rbp12;
    int64_t rbp13;
    int64_t rbp14;
    int64_t* rax15;
    int64_t rdi16;
    int64_t* rax17;
    int64_t rdi18;
    int64_t v19;

    *reinterpret_cast<int32_t*>(rbp2 - 20) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp3 - 20) < *reinterpret_cast<int32_t*>(rbp4 - 4)) {
        __asm__("cdq ");
        if (reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp5 - 20) % 20 == fprintf)) {
            rax6 = g3b4;
            rdi7 = *rax6;
            rsi8 = reinterpret_cast<int32_t*>(0x3be);
            fun_3c5(rdi7);
        }
        rax9 = g3cc;
        rdi10 = *rax9;
        rcx11 = *reinterpret_cast<int32_t*>(rbp12 - 20);
        *rdi10 = *rsi8;
        rsi8 = reinterpret_cast<int32_t*>(0x3e3);
        fun_3ea(rdi10 + 1);
        *reinterpret_cast<int32_t*>(rbp13 - 20) = *reinterpret_cast<int32_t*>(rbp14 - 20) + 1;
    }
    rax15 = g3ff;
    rdi16 = *rax15;
    fun_417(rdi16, 0x409, 0x410, rcx11);
    rax17 = g41e;
    rdi18 = *rax17;
    fun_42f(rdi18, 0x428, 0x410, rcx11);
    goto v19;
}

void fun_417(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t* rax5;
    int64_t rdi6;
    int64_t v7;

    rax5 = g41e;
    rdi6 = *rax5;
    fun_42f(rdi6, 0x428, rdx, rcx);
    goto v7;
}

void fun_e4(int64_t rdi, int64_t rsi) {
    int64_t rdi3;
    int64_t rbp4;
    int64_t v5;

    rdi3 = *reinterpret_cast<int64_t*>(rbp4 - 56);
    fun_ed(rdi3, rsi);
    goto v5;
}

void fun_42f(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t v5;

    goto v5;
}

void fun_ed(int64_t rdi, int64_t rsi) {
    int64_t v3;

    goto v3;
}

void fprintf() {
}

void fun_68(struct s0* rdi) {
    struct s1* rsi2;
    int64_t rbp3;
    int64_t rdx4;
    int64_t rbp5;
    int64_t rcx6;
    int64_t rbp7;
    int32_t edi8;
    int64_t rbp9;
    int32_t esi10;
    int64_t rbp11;
    int64_t rdx12;
    int64_t rbp13;
    int64_t rcx14;
    int64_t rbp15;
    int64_t r8_16;
    int64_t rbp17;
    int64_t r9_18;
    int64_t rbp19;
    int64_t rbp20;
    int64_t rdi21;
    int64_t rbp22;

    __asm__("enter 0x7d8b, 0xec");
    *reinterpret_cast<int32_t*>(&rsi2) = *reinterpret_cast<int32_t*>(rbp3 - 24);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi2) + 4) = reinterpret_cast<int32_t>(fprintf);
    rdx4 = *reinterpret_cast<int64_t*>(rbp5 - 32);
    rcx6 = *reinterpret_cast<int64_t*>(rbp7 - 40);
    init_array(rdi, rsi2, rdx4, rcx6);
    edi8 = *reinterpret_cast<int32_t*>(rbp9 - 20);
    esi10 = *reinterpret_cast<int32_t*>(rbp11 - 24);
    rdx12 = *reinterpret_cast<int64_t*>(rbp13 - 32);
    rcx14 = *reinterpret_cast<int64_t*>(rbp15 - 40);
    r8_16 = *reinterpret_cast<int64_t*>(rbp17 - 48);
    r9_18 = *reinterpret_cast<int64_t*>(rbp19 - 56);
    kernel_atax(edi8, esi10, rdx12, rcx14, r8_16, r9_18, __return_address());
    if (*reinterpret_cast<int32_t*>(rbp20 - 4) <= 42) 
        goto 0xc9;
    rdi21 = **reinterpret_cast<int64_t**>(rbp22 - 16);
    fun_b4(rdi21, 0xaf, rdx12, rcx14, r8_16, r9_18, __return_address());
}

