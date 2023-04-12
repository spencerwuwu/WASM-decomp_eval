
void fprintf();

void init_array(int32_t edi, int32_t esi, int64_t rdx, int64_t rcx, int64_t r8) {
    int32_t* rdi1;
    int32_t* rsi2;
    int32_t v6;
    int32_t v7;
    int32_t v8;
    int32_t v9;
    int32_t v10;

    *reinterpret_cast<int32_t*>(&rdi1) = edi;
    *reinterpret_cast<int32_t*>(&rsi2) = esi;
    v6 = *reinterpret_cast<int32_t*>(&rdi1);
    v7 = *reinterpret_cast<int32_t*>(&rsi2);
    v8 = reinterpret_cast<int32_t>(fprintf);
    while (v8 < v6) {
        __asm__("cdq ");
        __asm__("cvtsi2sd xmm0, edx");
        __asm__("cvtsi2sd xmm1, dword [rbp-0x4]");
        __asm__("divsd xmm0, xmm1");
        *rdi1 = *rsi2;
        ++rdi1;
        ++rsi2;
        ++v8;
    }
    v9 = reinterpret_cast<int32_t>(fprintf);
    while (v9 < v7) {
        __asm__("cdq ");
        __asm__("cvtsi2sd xmm0, edx");
        __asm__("cvtsi2sd xmm1, dword [rbp-0x8]");
        __asm__("divsd xmm0, xmm1");
        *rdi1 = *rsi2;
        ++rdi1;
        ++rsi2;
        v10 = reinterpret_cast<int32_t>(fprintf);
        while (v10 < v6) {
            __asm__("cdq ");
            __asm__("cvtsi2sd xmm0, edx");
            __asm__("cvtsi2sd xmm1, dword [rbp-0x8]");
            __asm__("divsd xmm0, xmm1");
            *rdi1 = *rsi2;
            ++rdi1;
            ++rsi2;
            ++v10;
        }
        ++v9;
    }
    return;
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

void kernel_bicg(int32_t edi, int32_t esi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7) {
    struct s0* rdi1;
    struct s1* rsi2;
    int32_t v8;
    int32_t v9;
    int32_t v10;
    int32_t v11;
    int32_t v12;
    struct s2* rdi13;
    struct s3* rsi14;
    struct s4* rdi15;
    struct s5* rsi16;
    struct s6* rdi17;
    struct s7* rsi18;
    struct s8* rdi19;
    struct s9* rsi20;
    struct s10* rdi21;
    struct s11* rsi22;
    struct s12* rdi23;
    struct s13* rsi24;
    struct s14* rdi25;
    struct s15* rsi26;

    *reinterpret_cast<int32_t*>(&rdi1) = edi;
    *reinterpret_cast<int32_t*>(&rsi2) = esi;
    v8 = *reinterpret_cast<int32_t*>(&rdi1);
    v9 = *reinterpret_cast<int32_t*>(&rsi2);
    v10 = reinterpret_cast<int32_t>(fprintf);
    while (v10 < v8) {
        __asm__("xorps xmm0, xmm0");
        rdi1->f0 = rsi2->f0;
        rdi1 = reinterpret_cast<struct s0*>(&rdi1->f4);
        rsi2 = reinterpret_cast<struct s1*>(&rsi2->f4);
        ++v10;
    }
    v11 = reinterpret_cast<int32_t>(fprintf);
    while (v11 < v9) {
        __asm__("xorps xmm0, xmm0");
        rdi1->f0 = rsi2->f0;
        rdi1 = reinterpret_cast<struct s0*>(&rdi1->f4);
        rsi2 = reinterpret_cast<struct s1*>(&rsi2->f4);
        v12 = reinterpret_cast<int32_t>(fprintf);
        while (v12 < v8) {
            rdi1->f0 = rsi2->f0;
            rdi13 = reinterpret_cast<struct s2*>(&rdi1->f4);
            rsi14 = reinterpret_cast<struct s3*>(&rsi2->f4);
            rdi13->f0 = rsi14->f0;
            rdi15 = reinterpret_cast<struct s4*>(&rdi13->f4);
            rsi16 = reinterpret_cast<struct s5*>(&rsi14->f4);
            rdi15->f0 = rsi16->f0;
            rdi17 = reinterpret_cast<struct s6*>(&rdi15->f4);
            rsi18 = reinterpret_cast<struct s7*>(&rsi16->f4);
            __asm__("mulsd xmm0, xmm2");
            __asm__("addsd xmm0, xmm1");
            rdi17->f0 = rsi18->f0;
            rdi19 = reinterpret_cast<struct s8*>(&rdi17->f4);
            rsi20 = reinterpret_cast<struct s9*>(&rsi18->f4);
            rdi19->f0 = rsi20->f0;
            rdi21 = reinterpret_cast<struct s10*>(&rdi19->f4);
            rsi22 = reinterpret_cast<struct s11*>(&rsi20->f4);
            rdi21->f0 = rsi22->f0;
            rdi23 = reinterpret_cast<struct s12*>(&rdi21->f4);
            rsi24 = reinterpret_cast<struct s13*>(&rsi22->f4);
            rdi23->f0 = rsi24->f0;
            rdi25 = reinterpret_cast<struct s14*>(&rdi23->f4);
            rsi26 = reinterpret_cast<struct s15*>(&rsi24->f4);
            __asm__("mulsd xmm0, xmm2");
            __asm__("addsd xmm0, xmm1");
            rdi25->f0 = rsi26->f0;
            rdi1 = reinterpret_cast<struct s0*>(&rdi25->f4);
            rsi2 = reinterpret_cast<struct s1*>(&rsi26->f4);
            ++v12;
        }
        ++v11;
    }
    return;
}

void print_array(int32_t edi, int32_t esi, int64_t rdx, int64_t rcx);

void fun_f8(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx);

void fun_101(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx);

void fun_10a(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx);

void fun_113(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx);

void fun_11c(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx);

void fun_d3(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7) {
    int32_t eax8;
    int32_t edi9;
    int64_t rbp10;
    int64_t rbp11;
    int64_t rbp12;
    int64_t rbp13;
    int64_t rdi14;
    int64_t rbp15;
    int64_t rdi16;
    int64_t rbp17;
    int64_t rdi18;
    int64_t rbp19;
    int64_t rdi20;
    int64_t rbp21;
    int64_t rdi22;
    int64_t rbp23;
    int64_t v24;

    if (reinterpret_cast<int1_t>(eax8 == fprintf)) {
        edi9 = *reinterpret_cast<int32_t*>(rbp10 - 24);
        *reinterpret_cast<int32_t*>(&rsi) = *reinterpret_cast<int32_t*>(rbp11 - 20);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi) + 4) = reinterpret_cast<int32_t>(fprintf);
        rdx = *reinterpret_cast<int64_t*>(rbp12 - 40);
        rcx = *reinterpret_cast<int64_t*>(rbp13 - 48);
        print_array(edi9, *reinterpret_cast<int32_t*>(&rsi), rdx, rcx);
    }
    rdi14 = *reinterpret_cast<int64_t*>(rbp15 - 32);
    fun_f8(rdi14, rsi, rdx, rcx);
    rdi16 = *reinterpret_cast<int64_t*>(rbp17 - 40);
    fun_101(rdi16, rsi, rdx, rcx);
    rdi18 = *reinterpret_cast<int64_t*>(rbp19 - 48);
    fun_10a(rdi18, rsi, rdx, rcx);
    rdi20 = *reinterpret_cast<int64_t*>(rbp21 - 56);
    fun_113(rdi20, rsi, rdx, rcx);
    rdi22 = *reinterpret_cast<int64_t*>(rbp23 - 64);
    fun_11c(rdi22, rsi, rdx, rcx);
    goto v24;
}

int64_t* g38d = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_39e(int64_t rdi, int64_t rsi);

int64_t* g3a5 = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_3bd(int64_t rdi);

int64_t* g3eb = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_3fc(int64_t rdi);

int32_t** g403 = reinterpret_cast<int32_t**>(0x48f0458b48388b48);

void fun_421(int64_t rdi);

int64_t* g436 = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_44e(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx);

int64_t* g455 = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_46d(int64_t rdi);

int64_t* g49b = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_4ac(int64_t rdi);

int32_t** g4b3 = reinterpret_cast<int32_t**>(0x48e8458b48388b48);

void fun_4d1(int64_t rdi);

int64_t* g4e6 = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_4fe(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx);

int64_t* g505 = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_516(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx);

void print_array(int32_t edi, int32_t esi, int64_t rdx, int64_t rcx) {
    int32_t v5;
    int32_t v6;
    int64_t* rax7;
    int64_t rdi8;
    int64_t* rax9;
    int64_t rdi10;
    int32_t* rsi11;
    int32_t v12;
    int64_t* rax13;
    int64_t rdi14;
    int32_t** rax15;
    int32_t* rdi16;
    int64_t* rax17;
    int64_t rdi18;
    int64_t* rax19;
    int64_t rdi20;
    int32_t* rsi21;
    int32_t v22;
    int64_t* rax23;
    int64_t rdi24;
    int32_t** rax25;
    int32_t* rdi26;
    int64_t* rax27;
    int64_t rdi28;
    int64_t* rax29;
    int64_t rdi30;

    v5 = edi;
    v6 = esi;
    rax7 = g38d;
    rdi8 = *rax7;
    fun_39e(rdi8, 0x397);
    rax9 = g3a5;
    rdi10 = *rax9;
    rsi11 = reinterpret_cast<int32_t*>(0x3af);
    fun_3bd(rdi10);
    v12 = reinterpret_cast<int32_t>(fprintf);
    while (v12 < v5) {
        __asm__("cdq ");
        if (reinterpret_cast<int1_t>(v12 % 20 == fprintf)) {
            rax13 = g3eb;
            rdi14 = *rax13;
            rsi11 = reinterpret_cast<int32_t*>(0x3f5);
            fun_3fc(rdi14);
        }
        rax15 = g403;
        rdi16 = *rax15;
        rcx = v12;
        *rdi16 = *rsi11;
        rsi11 = reinterpret_cast<int32_t*>(0x41a);
        fun_421(rdi16 + 1);
        ++v12;
    }
    rax17 = g436;
    rdi18 = *rax17;
    fun_44e(rdi18, 0x440, 0x447, rcx);
    rax19 = g455;
    rdi20 = *rax19;
    rsi21 = reinterpret_cast<int32_t*>(0x45f);
    fun_46d(rdi20);
    v22 = reinterpret_cast<int32_t>(fprintf);
    while (v22 < v6) {
        __asm__("cdq ");
        if (reinterpret_cast<int1_t>(v22 % 20 == fprintf)) {
            rax23 = g49b;
            rdi24 = *rax23;
            rsi21 = reinterpret_cast<int32_t*>(0x4a5);
            fun_4ac(rdi24);
        }
        rax25 = g4b3;
        rdi26 = *rax25;
        rcx = v22;
        *rdi26 = *rsi21;
        rsi21 = reinterpret_cast<int32_t*>(0x4ca);
        fun_4d1(rdi26 + 1);
        ++v22;
    }
    rax27 = g4e6;
    rdi28 = *rax27;
    fun_4fe(rdi28, 0x4f0, 0x4f7, rcx);
    rax29 = g505;
    rdi30 = *rax29;
    fun_516(rdi30, 0x50f, 0x4f7, rcx);
    return;
}

void fun_3fc(int64_t rdi) {
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
    int32_t* rsi18;
    int64_t rbp19;
    int64_t rbp20;
    int64_t rbp21;
    int64_t rbp22;
    int64_t* rax23;
    int64_t rdi24;
    int32_t** rax25;
    int32_t* rdi26;
    int64_t rbp27;
    int64_t rbp28;
    int64_t rbp29;
    int64_t* rax30;
    int64_t rdi31;
    int64_t* rax32;
    int64_t rdi33;
    int64_t v34;

    while (1) {
        rax2 = g403;
        rdi3 = *rax2;
        rcx4 = *reinterpret_cast<int32_t*>(rbp5 - 28);
        *rdi3 = *rsi6;
        rsi6 = reinterpret_cast<int32_t*>(0x41a);
        fun_421(rdi3 + 1);
        *reinterpret_cast<int32_t*>(rbp7 - 28) = *reinterpret_cast<int32_t*>(rbp8 - 28) + 1;
        if (*reinterpret_cast<int32_t*>(rbp9 - 28) >= *reinterpret_cast<int32_t*>(rbp10 - 4)) 
            break;
        __asm__("cdq ");
        if (!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp11 - 28) % 20 == fprintf)) 
            continue;
        rax12 = g3eb;
        rdi13 = *rax12;
        rsi6 = reinterpret_cast<int32_t*>(0x3f5);
        fun_3fc(rdi13);
    }
    rax14 = g436;
    rdi15 = *rax14;
    fun_44e(rdi15, 0x440, 0x447, rcx4);
    rax16 = g455;
    rdi17 = *rax16;
    rsi18 = reinterpret_cast<int32_t*>(0x45f);
    fun_46d(rdi17);
    *reinterpret_cast<int32_t*>(rbp19 - 28) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp20 - 28) < *reinterpret_cast<int32_t*>(rbp21 - 8)) {
        __asm__("cdq ");
        if (reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp22 - 28) % 20 == fprintf)) {
            rax23 = g49b;
            rdi24 = *rax23;
            rsi18 = reinterpret_cast<int32_t*>(0x4a5);
            fun_4ac(rdi24);
        }
        rax25 = g4b3;
        rdi26 = *rax25;
        rcx4 = *reinterpret_cast<int32_t*>(rbp27 - 28);
        *rdi26 = *rsi18;
        rsi18 = reinterpret_cast<int32_t*>(0x4ca);
        fun_4d1(rdi26 + 1);
        *reinterpret_cast<int32_t*>(rbp28 - 28) = *reinterpret_cast<int32_t*>(rbp29 - 28) + 1;
    }
    rax30 = g4e6;
    rdi31 = *rax30;
    fun_4fe(rdi31, 0x4f0, 0x4f7, rcx4);
    rax32 = g505;
    rdi33 = *rax32;
    fun_516(rdi33, 0x50f, 0x4f7, rcx4);
    goto v34;
}

void fun_421(int64_t rdi) {
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
    int32_t* rsi18;
    int64_t rbp19;
    int64_t rbp20;
    int64_t rbp21;
    int64_t rbp22;
    int64_t* rax23;
    int64_t rdi24;
    int32_t** rax25;
    int32_t* rdi26;
    int64_t rbp27;
    int64_t rbp28;
    int64_t rbp29;
    int64_t* rax30;
    int64_t rdi31;
    int64_t* rax32;
    int64_t rdi33;
    int64_t v34;

    while (1) {
        *reinterpret_cast<int32_t*>(rbp2 - 28) = *reinterpret_cast<int32_t*>(rbp3 - 28) + 1;
        if (*reinterpret_cast<int32_t*>(rbp4 - 28) >= *reinterpret_cast<int32_t*>(rbp5 - 4)) 
            break;
        __asm__("cdq ");
        if (reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp6 - 28) % 20 == fprintf)) {
            rax7 = g3eb;
            rdi8 = *rax7;
            rsi9 = reinterpret_cast<int32_t*>(0x3f5);
            fun_3fc(rdi8);
        }
        rax10 = g403;
        rdi11 = *rax10;
        rcx12 = *reinterpret_cast<int32_t*>(rbp13 - 28);
        *rdi11 = *rsi9;
        rsi9 = reinterpret_cast<int32_t*>(0x41a);
        fun_421(rdi11 + 1);
    }
    rax14 = g436;
    rdi15 = *rax14;
    fun_44e(rdi15, 0x440, 0x447, rcx12);
    rax16 = g455;
    rdi17 = *rax16;
    rsi18 = reinterpret_cast<int32_t*>(0x45f);
    fun_46d(rdi17);
    *reinterpret_cast<int32_t*>(rbp19 - 28) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp20 - 28) < *reinterpret_cast<int32_t*>(rbp21 - 8)) {
        __asm__("cdq ");
        if (reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp22 - 28) % 20 == fprintf)) {
            rax23 = g49b;
            rdi24 = *rax23;
            rsi18 = reinterpret_cast<int32_t*>(0x4a5);
            fun_4ac(rdi24);
        }
        rax25 = g4b3;
        rdi26 = *rax25;
        rcx12 = *reinterpret_cast<int32_t*>(rbp27 - 28);
        *rdi26 = *rsi18;
        rsi18 = reinterpret_cast<int32_t*>(0x4ca);
        fun_4d1(rdi26 + 1);
        *reinterpret_cast<int32_t*>(rbp28 - 28) = *reinterpret_cast<int32_t*>(rbp29 - 28) + 1;
    }
    rax30 = g4e6;
    rdi31 = *rax30;
    fun_4fe(rdi31, 0x4f0, 0x4f7, rcx12);
    rax32 = g505;
    rdi33 = *rax32;
    fun_516(rdi33, 0x50f, 0x4f7, rcx12);
    goto v34;
}

void fun_4ac(int64_t rdi) {
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
        rax2 = g4b3;
        rdi3 = *rax2;
        rcx4 = *reinterpret_cast<int32_t*>(rbp5 - 28);
        *rdi3 = *rsi6;
        rsi6 = reinterpret_cast<int32_t*>(0x4ca);
        fun_4d1(rdi3 + 1);
        *reinterpret_cast<int32_t*>(rbp7 - 28) = *reinterpret_cast<int32_t*>(rbp8 - 28) + 1;
        if (*reinterpret_cast<int32_t*>(rbp9 - 28) >= *reinterpret_cast<int32_t*>(rbp10 - 8)) 
            break;
        __asm__("cdq ");
        if (!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp11 - 28) % 20 == fprintf)) 
            continue;
        rax12 = g49b;
        rdi13 = *rax12;
        rsi6 = reinterpret_cast<int32_t*>(0x4a5);
        fun_4ac(rdi13);
    }
    rax14 = g4e6;
    rdi15 = *rax14;
    fun_4fe(rdi15, 0x4f0, 0x4f7, rcx4);
    rax16 = g505;
    rdi17 = *rax16;
    fun_516(rdi17, 0x50f, 0x4f7, rcx4);
    goto v18;
}

void fun_4d1(int64_t rdi) {
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
        *reinterpret_cast<int32_t*>(rbp2 - 28) = *reinterpret_cast<int32_t*>(rbp3 - 28) + 1;
        if (*reinterpret_cast<int32_t*>(rbp4 - 28) >= *reinterpret_cast<int32_t*>(rbp5 - 8)) 
            break;
        __asm__("cdq ");
        if (reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp6 - 28) % 20 == fprintf)) {
            rax7 = g49b;
            rdi8 = *rax7;
            rsi9 = reinterpret_cast<int32_t*>(0x4a5);
            fun_4ac(rdi8);
        }
        rax10 = g4b3;
        rdi11 = *rax10;
        rcx12 = *reinterpret_cast<int32_t*>(rbp13 - 28);
        *rdi11 = *rsi9;
        rsi9 = reinterpret_cast<int32_t*>(0x4ca);
        fun_4d1(rdi11 + 1);
    }
    rax14 = g4e6;
    rdi15 = *rax14;
    fun_4fe(rdi15, 0x4f0, 0x4f7, rcx12);
    rax16 = g505;
    rdi17 = *rax16;
    fun_516(rdi17, 0x50f, 0x4f7, rcx12);
    goto v18;
}

void fun_f8(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t rdi5;
    int64_t rbp6;
    int64_t rdi7;
    int64_t rbp8;
    int64_t rdi9;
    int64_t rbp10;
    int64_t rdi11;
    int64_t rbp12;
    int64_t v13;

    rdi5 = *reinterpret_cast<int64_t*>(rbp6 - 40);
    fun_101(rdi5, rsi, rdx, rcx);
    rdi7 = *reinterpret_cast<int64_t*>(rbp8 - 48);
    fun_10a(rdi7, rsi, rdx, rcx);
    rdi9 = *reinterpret_cast<int64_t*>(rbp10 - 56);
    fun_113(rdi9, rsi, rdx, rcx);
    rdi11 = *reinterpret_cast<int64_t*>(rbp12 - 64);
    fun_11c(rdi11, rsi, rdx, rcx);
    goto v13;
}

void fun_39e(int64_t rdi, int64_t rsi) {
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
    int32_t* rsi22;
    int64_t rbp23;
    int64_t rbp24;
    int64_t rbp25;
    int64_t rbp26;
    int64_t* rax27;
    int64_t rdi28;
    int32_t** rax29;
    int32_t* rdi30;
    int64_t rbp31;
    int64_t rbp32;
    int64_t rbp33;
    int64_t* rax34;
    int64_t rdi35;
    int64_t* rax36;
    int64_t rdi37;
    int64_t v38;

    rax3 = g3a5;
    rdi4 = *rax3;
    rsi5 = reinterpret_cast<int32_t*>(0x3af);
    fun_3bd(rdi4);
    *reinterpret_cast<int32_t*>(rbp6 - 28) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp7 - 28) < *reinterpret_cast<int32_t*>(rbp8 - 4)) {
        __asm__("cdq ");
        if (reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp9 - 28) % 20 == fprintf)) {
            rax10 = g3eb;
            rdi11 = *rax10;
            rsi5 = reinterpret_cast<int32_t*>(0x3f5);
            fun_3fc(rdi11);
        }
        rax12 = g403;
        rdi13 = *rax12;
        rcx14 = *reinterpret_cast<int32_t*>(rbp15 - 28);
        *rdi13 = *rsi5;
        rsi5 = reinterpret_cast<int32_t*>(0x41a);
        fun_421(rdi13 + 1);
        *reinterpret_cast<int32_t*>(rbp16 - 28) = *reinterpret_cast<int32_t*>(rbp17 - 28) + 1;
    }
    rax18 = g436;
    rdi19 = *rax18;
    fun_44e(rdi19, 0x440, 0x447, rcx14);
    rax20 = g455;
    rdi21 = *rax20;
    rsi22 = reinterpret_cast<int32_t*>(0x45f);
    fun_46d(rdi21);
    *reinterpret_cast<int32_t*>(rbp23 - 28) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp24 - 28) < *reinterpret_cast<int32_t*>(rbp25 - 8)) {
        __asm__("cdq ");
        if (reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp26 - 28) % 20 == fprintf)) {
            rax27 = g49b;
            rdi28 = *rax27;
            rsi22 = reinterpret_cast<int32_t*>(0x4a5);
            fun_4ac(rdi28);
        }
        rax29 = g4b3;
        rdi30 = *rax29;
        rcx14 = *reinterpret_cast<int32_t*>(rbp31 - 28);
        *rdi30 = *rsi22;
        rsi22 = reinterpret_cast<int32_t*>(0x4ca);
        fun_4d1(rdi30 + 1);
        *reinterpret_cast<int32_t*>(rbp32 - 28) = *reinterpret_cast<int32_t*>(rbp33 - 28) + 1;
    }
    rax34 = g4e6;
    rdi35 = *rax34;
    fun_4fe(rdi35, 0x4f0, 0x4f7, rcx14);
    rax36 = g505;
    rdi37 = *rax36;
    fun_516(rdi37, 0x50f, 0x4f7, rcx14);
    goto v38;
}

void fun_101(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t rdi5;
    int64_t rbp6;
    int64_t rdi7;
    int64_t rbp8;
    int64_t rdi9;
    int64_t rbp10;
    int64_t v11;

    rdi5 = *reinterpret_cast<int64_t*>(rbp6 - 48);
    fun_10a(rdi5, rsi, rdx, rcx);
    rdi7 = *reinterpret_cast<int64_t*>(rbp8 - 56);
    fun_113(rdi7, rsi, rdx, rcx);
    rdi9 = *reinterpret_cast<int64_t*>(rbp10 - 64);
    fun_11c(rdi9, rsi, rdx, rcx);
    goto v11;
}

void fun_3bd(int64_t rdi) {
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
    int32_t* rsi19;
    int64_t rbp20;
    int64_t rbp21;
    int64_t rbp22;
    int64_t rbp23;
    int64_t* rax24;
    int64_t rdi25;
    int32_t** rax26;
    int32_t* rdi27;
    int64_t rbp28;
    int64_t rbp29;
    int64_t rbp30;
    int64_t* rax31;
    int64_t rdi32;
    int64_t* rax33;
    int64_t rdi34;
    int64_t v35;

    *reinterpret_cast<int32_t*>(rbp2 - 28) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp3 - 28) < *reinterpret_cast<int32_t*>(rbp4 - 4)) {
        __asm__("cdq ");
        if (reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp5 - 28) % 20 == fprintf)) {
            rax6 = g3eb;
            rdi7 = *rax6;
            rsi8 = reinterpret_cast<int32_t*>(0x3f5);
            fun_3fc(rdi7);
        }
        rax9 = g403;
        rdi10 = *rax9;
        rcx11 = *reinterpret_cast<int32_t*>(rbp12 - 28);
        *rdi10 = *rsi8;
        rsi8 = reinterpret_cast<int32_t*>(0x41a);
        fun_421(rdi10 + 1);
        *reinterpret_cast<int32_t*>(rbp13 - 28) = *reinterpret_cast<int32_t*>(rbp14 - 28) + 1;
    }
    rax15 = g436;
    rdi16 = *rax15;
    fun_44e(rdi16, 0x440, 0x447, rcx11);
    rax17 = g455;
    rdi18 = *rax17;
    rsi19 = reinterpret_cast<int32_t*>(0x45f);
    fun_46d(rdi18);
    *reinterpret_cast<int32_t*>(rbp20 - 28) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp21 - 28) < *reinterpret_cast<int32_t*>(rbp22 - 8)) {
        __asm__("cdq ");
        if (reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp23 - 28) % 20 == fprintf)) {
            rax24 = g49b;
            rdi25 = *rax24;
            rsi19 = reinterpret_cast<int32_t*>(0x4a5);
            fun_4ac(rdi25);
        }
        rax26 = g4b3;
        rdi27 = *rax26;
        rcx11 = *reinterpret_cast<int32_t*>(rbp28 - 28);
        *rdi27 = *rsi19;
        rsi19 = reinterpret_cast<int32_t*>(0x4ca);
        fun_4d1(rdi27 + 1);
        *reinterpret_cast<int32_t*>(rbp29 - 28) = *reinterpret_cast<int32_t*>(rbp30 - 28) + 1;
    }
    rax31 = g4e6;
    rdi32 = *rax31;
    fun_4fe(rdi32, 0x4f0, 0x4f7, rcx11);
    rax33 = g505;
    rdi34 = *rax33;
    fun_516(rdi34, 0x50f, 0x4f7, rcx11);
    goto v35;
}

void fun_44e(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t* rax5;
    int64_t rdi6;
    int32_t* rsi7;
    int64_t rbp8;
    int64_t rbp9;
    int64_t rbp10;
    int64_t rbp11;
    int64_t* rax12;
    int64_t rdi13;
    int32_t** rax14;
    int32_t* rdi15;
    int64_t rbp16;
    int64_t rbp17;
    int64_t rbp18;
    int64_t* rax19;
    int64_t rdi20;
    int64_t* rax21;
    int64_t rdi22;
    int64_t v23;

    rax5 = g455;
    rdi6 = *rax5;
    rsi7 = reinterpret_cast<int32_t*>(0x45f);
    fun_46d(rdi6);
    *reinterpret_cast<int32_t*>(rbp8 - 28) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp9 - 28) < *reinterpret_cast<int32_t*>(rbp10 - 8)) {
        __asm__("cdq ");
        if (reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp11 - 28) % 20 == fprintf)) {
            rax12 = g49b;
            rdi13 = *rax12;
            rsi7 = reinterpret_cast<int32_t*>(0x4a5);
            fun_4ac(rdi13);
        }
        rax14 = g4b3;
        rdi15 = *rax14;
        rcx = *reinterpret_cast<int32_t*>(rbp16 - 28);
        *rdi15 = *rsi7;
        rsi7 = reinterpret_cast<int32_t*>(0x4ca);
        fun_4d1(rdi15 + 1);
        *reinterpret_cast<int32_t*>(rbp17 - 28) = *reinterpret_cast<int32_t*>(rbp18 - 28) + 1;
    }
    rax19 = g4e6;
    rdi20 = *rax19;
    fun_4fe(rdi20, 0x4f0, 0x4f7, rcx);
    rax21 = g505;
    rdi22 = *rax21;
    fun_516(rdi22, 0x50f, 0x4f7, rcx);
    goto v23;
}

void fun_4fe(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t* rax5;
    int64_t rdi6;
    int64_t v7;

    rax5 = g505;
    rdi6 = *rax5;
    fun_516(rdi6, 0x50f, rdx, rcx);
    goto v7;
}

void fun_10a(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t rdi5;
    int64_t rbp6;
    int64_t rdi7;
    int64_t rbp8;
    int64_t v9;

    rdi5 = *reinterpret_cast<int64_t*>(rbp6 - 56);
    fun_113(rdi5, rsi, rdx, rcx);
    rdi7 = *reinterpret_cast<int64_t*>(rbp8 - 64);
    fun_11c(rdi7, rsi, rdx, rcx);
    goto v9;
}

void fun_46d(int64_t rdi) {
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

    *reinterpret_cast<int32_t*>(rbp2 - 28) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp3 - 28) < *reinterpret_cast<int32_t*>(rbp4 - 8)) {
        __asm__("cdq ");
        if (reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp5 - 28) % 20 == fprintf)) {
            rax6 = g49b;
            rdi7 = *rax6;
            rsi8 = reinterpret_cast<int32_t*>(0x4a5);
            fun_4ac(rdi7);
        }
        rax9 = g4b3;
        rdi10 = *rax9;
        rcx11 = *reinterpret_cast<int32_t*>(rbp12 - 28);
        *rdi10 = *rsi8;
        rsi8 = reinterpret_cast<int32_t*>(0x4ca);
        fun_4d1(rdi10 + 1);
        *reinterpret_cast<int32_t*>(rbp13 - 28) = *reinterpret_cast<int32_t*>(rbp14 - 28) + 1;
    }
    rax15 = g4e6;
    rdi16 = *rax15;
    fun_4fe(rdi16, 0x4f0, 0x4f7, rcx11);
    rax17 = g505;
    rdi18 = *rax17;
    fun_516(rdi18, 0x50f, 0x4f7, rcx11);
    goto v19;
}

void fun_516(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t v5;

    goto v5;
}

void fun_113(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t rdi5;
    int64_t rbp6;
    int64_t v7;

    rdi5 = *reinterpret_cast<int64_t*>(rbp6 - 64);
    fun_11c(rdi5, rsi, rdx, rcx);
    goto v7;
}

void fun_11c(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t v5;

    goto v5;
}

void fprintf() {
}

void fun_70() {
    signed char* rax1;
    signed char* rax2;
    signed char al3;

    *rax1 = reinterpret_cast<signed char>(*rax2 + al3);
}

void fun_7c() {
    int32_t edi1;
    int64_t rbp2;
    int32_t esi3;
    int64_t rbp4;
    int64_t rdx5;
    int64_t rbp6;
    int64_t rcx7;
    int64_t rbp8;
    int64_t r8_9;
    int64_t rbp10;
    int32_t edi11;
    int64_t rbp12;
    int32_t esi13;
    int64_t rbp14;
    int64_t rdx15;
    int64_t rbp16;
    int64_t rcx17;
    int64_t rbp18;
    int64_t r8_19;
    int64_t rbp20;
    int64_t r9_21;
    int64_t rbp22;
    int64_t v23;
    int64_t rbp24;
    int64_t rbp25;
    int64_t rdi26;
    int64_t rbp27;

    edi1 = *reinterpret_cast<int32_t*>(rbp2 - 24);
    esi3 = *reinterpret_cast<int32_t*>(rbp4 - 20);
    rdx5 = *reinterpret_cast<int64_t*>(rbp6 - 32);
    rcx7 = *reinterpret_cast<int64_t*>(rbp8 - 64);
    r8_9 = *reinterpret_cast<int64_t*>(rbp10 - 56);
    init_array(edi1, esi3, rdx5, rcx7, r8_9);
    edi11 = *reinterpret_cast<int32_t*>(rbp12 - 24);
    esi13 = *reinterpret_cast<int32_t*>(rbp14 - 20);
    rdx15 = *reinterpret_cast<int64_t*>(rbp16 - 32);
    rcx17 = *reinterpret_cast<int64_t*>(rbp18 - 40);
    r8_19 = *reinterpret_cast<int64_t*>(rbp20 - 48);
    r9_21 = *reinterpret_cast<int64_t*>(rbp22 - 56);
    v23 = *reinterpret_cast<int64_t*>(rbp24 - 64);
    kernel_bicg(edi11, esi13, rdx15, rcx17, r8_19, r9_21, v23);
    if (*reinterpret_cast<int32_t*>(rbp25 - 4) <= 42) 
        goto 0xef;
    rdi26 = **reinterpret_cast<int64_t**>(rbp27 - 16);
    fun_d3(rdi26, 0xce, rdx15, rcx17, r8_19, r9_21, v23);
}

