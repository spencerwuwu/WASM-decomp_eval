
void fprintf();

void print_array(int32_t edi, int64_t rsi);

void fun_93(int64_t rdi, int64_t rsi);

void fun_9c(int64_t rdi, int64_t rsi);

void fun_75() {
    int32_t eax1;
    int32_t edi2;
    int64_t rbp3;
    int64_t rsi4;
    int64_t rbp5;
    int64_t rdi6;
    int64_t rbp7;
    int64_t rdi8;
    int64_t rbp9;
    int64_t v10;

    if (reinterpret_cast<int1_t>(eax1 == fprintf)) {
        edi2 = *reinterpret_cast<int32_t*>(rbp3 - 20);
        rsi4 = *reinterpret_cast<int64_t*>(rbp5 - 40);
        print_array(edi2, rsi4);
    }
    rdi6 = *reinterpret_cast<int64_t*>(rbp7 - 32);
    fun_93(rdi6, rsi4);
    rdi8 = *reinterpret_cast<int64_t*>(rbp9 - 40);
    fun_9c(rdi8, rsi4);
    goto v10;
}

int64_t* g3b6 = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_3c7(int64_t rdi, int64_t rsi);

int64_t* g3ce = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_3e6(int64_t rdi);

int64_t* g414 = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_425(int64_t rdi);

int32_t** g42c = reinterpret_cast<int32_t**>(0x48f0458b48388b48);

void fun_44a(int64_t rdi);

int64_t* g45f = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_477(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx);

int64_t* g47e = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_48f(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx);

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
    rax4 = g3b6;
    rdi5 = *rax4;
    fun_3c7(rdi5, 0x3c0);
    rax6 = g3ce;
    rdi7 = *rax6;
    rsi8 = reinterpret_cast<int32_t*>(0x3d8);
    fun_3e6(rdi7);
    v9 = reinterpret_cast<int32_t>(fprintf);
    while (v9 < v3) {
        __asm__("cdq ");
        if (reinterpret_cast<int1_t>(v9 % 20 == fprintf)) {
            rax10 = g414;
            rdi11 = *rax10;
            rsi8 = reinterpret_cast<int32_t*>(0x41e);
            fun_425(rdi11);
        }
        rax12 = g42c;
        rdi13 = *rax12;
        rcx14 = v9;
        *rdi13 = *rsi8;
        rsi8 = reinterpret_cast<int32_t*>(0x443);
        fun_44a(rdi13 + 1);
        ++v9;
    }
    rax15 = g45f;
    rdi16 = *rax15;
    fun_477(rdi16, 0x469, 0x470, rcx14);
    rax17 = g47e;
    rdi18 = *rax17;
    fun_48f(rdi18, 0x488, 0x470, rcx14);
    return;
}

void fun_93(int64_t rdi, int64_t rsi) {
    int64_t rdi3;
    int64_t rbp4;
    int64_t v5;

    rdi3 = *reinterpret_cast<int64_t*>(rbp4 - 40);
    fun_9c(rdi3, rsi);
    goto v5;
}

void fun_425(int64_t rdi) {
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
        rax2 = g42c;
        rdi3 = *rax2;
        rcx4 = *reinterpret_cast<int32_t*>(rbp5 - 20);
        *rdi3 = *rsi6;
        rsi6 = reinterpret_cast<int32_t*>(0x443);
        fun_44a(rdi3 + 1);
        *reinterpret_cast<int32_t*>(rbp7 - 20) = *reinterpret_cast<int32_t*>(rbp8 - 20) + 1;
        if (*reinterpret_cast<int32_t*>(rbp9 - 20) >= *reinterpret_cast<int32_t*>(rbp10 - 4)) 
            break;
        __asm__("cdq ");
        if (!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp11 - 20) % 20 == fprintf)) 
            continue;
        rax12 = g414;
        rdi13 = *rax12;
        rsi6 = reinterpret_cast<int32_t*>(0x41e);
        fun_425(rdi13);
    }
    rax14 = g45f;
    rdi15 = *rax14;
    fun_477(rdi15, 0x469, 0x470, rcx4);
    rax16 = g47e;
    rdi17 = *rax16;
    fun_48f(rdi17, 0x488, 0x470, rcx4);
    goto v18;
}

void fun_44a(int64_t rdi) {
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
            rax7 = g414;
            rdi8 = *rax7;
            rsi9 = reinterpret_cast<int32_t*>(0x41e);
            fun_425(rdi8);
        }
        rax10 = g42c;
        rdi11 = *rax10;
        rcx12 = *reinterpret_cast<int32_t*>(rbp13 - 20);
        *rdi11 = *rsi9;
        rsi9 = reinterpret_cast<int32_t*>(0x443);
        fun_44a(rdi11 + 1);
    }
    rax14 = g45f;
    rdi15 = *rax14;
    fun_477(rdi15, 0x469, 0x470, rcx12);
    rax16 = g47e;
    rdi17 = *rax16;
    fun_48f(rdi17, 0x488, 0x470, rcx12);
    goto v18;
}

void fun_3c7(int64_t rdi, int64_t rsi) {
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

    rax3 = g3ce;
    rdi4 = *rax3;
    rsi5 = reinterpret_cast<int32_t*>(0x3d8);
    fun_3e6(rdi4);
    *reinterpret_cast<int32_t*>(rbp6 - 20) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp7 - 20) < *reinterpret_cast<int32_t*>(rbp8 - 4)) {
        __asm__("cdq ");
        if (reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp9 - 20) % 20 == fprintf)) {
            rax10 = g414;
            rdi11 = *rax10;
            rsi5 = reinterpret_cast<int32_t*>(0x41e);
            fun_425(rdi11);
        }
        rax12 = g42c;
        rdi13 = *rax12;
        rcx14 = *reinterpret_cast<int32_t*>(rbp15 - 20);
        *rdi13 = *rsi5;
        rsi5 = reinterpret_cast<int32_t*>(0x443);
        fun_44a(rdi13 + 1);
        *reinterpret_cast<int32_t*>(rbp16 - 20) = *reinterpret_cast<int32_t*>(rbp17 - 20) + 1;
    }
    rax18 = g45f;
    rdi19 = *rax18;
    fun_477(rdi19, 0x469, 0x470, rcx14);
    rax20 = g47e;
    rdi21 = *rax20;
    fun_48f(rdi21, 0x488, 0x470, rcx14);
    goto v22;
}

void fun_9c(int64_t rdi, int64_t rsi) {
    int64_t v3;

    goto v3;
}

void fun_3e6(int64_t rdi) {
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
            rax6 = g414;
            rdi7 = *rax6;
            rsi8 = reinterpret_cast<int32_t*>(0x41e);
            fun_425(rdi7);
        }
        rax9 = g42c;
        rdi10 = *rax9;
        rcx11 = *reinterpret_cast<int32_t*>(rbp12 - 20);
        *rdi10 = *rsi8;
        rsi8 = reinterpret_cast<int32_t*>(0x443);
        fun_44a(rdi10 + 1);
        *reinterpret_cast<int32_t*>(rbp13 - 20) = *reinterpret_cast<int32_t*>(rbp14 - 20) + 1;
    }
    rax15 = g45f;
    rdi16 = *rax15;
    fun_477(rdi16, 0x469, 0x470, rcx11);
    rax17 = g47e;
    rdi18 = *rax17;
    fun_48f(rdi18, 0x488, 0x470, rcx11);
    goto v19;
}

void fun_477(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t* rax5;
    int64_t rdi6;
    int64_t v7;

    rax5 = g47e;
    rdi6 = *rax5;
    fun_48f(rdi6, 0x488, rdx, rcx);
    goto v7;
}

void fun_48f(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t v5;

    goto v5;
}

void fprintf() {
}

void fun_68() {
    fun_75();
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

void kernel_durbin(struct s0* rdi, struct s1* rsi, int64_t rdx) {
    int32_t v4;
    struct s2* rdi5;
    struct s3* rsi6;
    struct s4* rdi7;
    struct s5* rsi8;
    struct s6* rdi9;
    struct s7* rsi10;
    struct s8* rdi11;
    struct s9* rsi12;
    struct s10* rdi13;
    struct s11* rsi14;
    int32_t* rdi15;
    int32_t* rsi16;
    int32_t v17;
    int32_t* rdi18;
    int32_t* rsi19;
    int32_t* rdi20;
    int32_t* rsi21;
    int32_t* rdi22;
    int32_t* rsi23;
    int32_t* rdi24;
    int32_t* rsi25;
    int32_t* rdi26;
    int32_t* rsi27;
    int32_t v28;
    int32_t* rdi29;
    int32_t* rsi30;
    int32_t* rdi31;
    int32_t* rsi32;
    int32_t* rdi33;
    int32_t* rsi34;
    int32_t* rdi35;
    int32_t* rsi36;
    int32_t* rdi37;
    int32_t* rsi38;
    int32_t v39;
    int32_t* rdi40;
    int32_t* rsi41;
    int32_t* rdi42;
    int32_t* rsi43;
    int32_t* rdi44;
    int32_t* rsi45;
    int32_t v46;
    int32_t* rdi47;
    int32_t* rsi48;
    int32_t* rdi49;
    int32_t* rsi50;

    v4 = *reinterpret_cast<int32_t*>(&rdi);
    rdi->f0 = rsi->f0;
    rdi5 = reinterpret_cast<struct s2*>(&rdi->f4);
    rsi6 = reinterpret_cast<struct s3*>(&rsi->f4);
    __asm__("movd rax, xmm0");
    __asm__("movd xmm0, rax");
    rdi5->f0 = rsi6->f0;
    rdi7 = reinterpret_cast<struct s4*>(&rdi5->f4);
    rsi8 = reinterpret_cast<struct s5*>(&rsi6->f4);
    rdi7->f0 = rsi8->f0;
    rdi9 = reinterpret_cast<struct s6*>(&rdi7->f4);
    rsi10 = reinterpret_cast<struct s7*>(&rsi8->f4);
    rdi9->f0 = rsi10->f0;
    rdi11 = reinterpret_cast<struct s8*>(&rdi9->f4);
    rsi12 = reinterpret_cast<struct s9*>(&rsi10->f4);
    rdi11->f0 = rsi12->f0;
    rdi13 = reinterpret_cast<struct s10*>(&rdi11->f4);
    rsi14 = reinterpret_cast<struct s11*>(&rsi12->f4);
    __asm__("movd rax, xmm0");
    __asm__("movd xmm0, rax");
    rdi13->f0 = rsi14->f0;
    rdi15 = &rdi13->f4;
    rsi16 = &rsi14->f4;
    v17 = 1;
    while (v17 < v4) {
        *rdi15 = *rsi16;
        rdi18 = rdi15 + 1;
        rsi19 = rsi16 + 1;
        *rdi18 = *rsi19;
        rdi20 = rdi18 + 1;
        rsi21 = rsi19 + 1;
        __asm__("movd rax, xmm0");
        __asm__("movd xmm0, rax");
        __asm__("mulsd xmm0, xmm1");
        *rdi20 = *rsi21;
        rdi22 = rdi20 + 1;
        rsi23 = rsi21 + 1;
        __asm__("addsd xmm0, xmm1");
        __asm__("mulsd xmm0, [rbp-0x3eb0]");
        *rdi22 = *rsi23;
        rdi24 = rdi22 + 1;
        rsi25 = rsi23 + 1;
        __asm__("xorps xmm0, xmm0");
        *rdi24 = *rsi25;
        rdi26 = rdi24 + 1;
        rsi27 = rsi25 + 1;
        v28 = reinterpret_cast<int32_t>(fprintf);
        while (v28 < v17) {
            *rdi26 = *rsi27;
            rdi29 = rdi26 + 1;
            rsi30 = rsi27 + 1;
            *rdi29 = *rsi30;
            rdi31 = rdi29 + 1;
            rsi32 = rsi30 + 1;
            *rdi31 = *rsi32;
            rdi33 = rdi31 + 1;
            rsi34 = rsi32 + 1;
            __asm__("mulsd xmm0, xmm2");
            __asm__("addsd xmm0, xmm1");
            *rdi33 = *rsi34;
            rdi26 = rdi33 + 1;
            rsi27 = rsi34 + 1;
            ++v28;
        }
        *rdi26 = *rsi27;
        rdi35 = rdi26 + 1;
        rsi36 = rsi27 + 1;
        __asm__("addsd xmm0, [rbp-0x3eb8]");
        __asm__("movd rax, xmm0");
        __asm__("movd xmm0, rax");
        __asm__("divsd xmm0, [rbp-0x3eb0]");
        *rdi35 = *rsi36;
        rdi37 = rdi35 + 1;
        rsi38 = rsi36 + 1;
        v39 = reinterpret_cast<int32_t>(fprintf);
        while (v39 < v17) {
            *rdi37 = *rsi38;
            rdi40 = rdi37 + 1;
            rsi41 = rsi38 + 1;
            *rdi40 = *rsi41;
            rdi42 = rdi40 + 1;
            rsi43 = rsi41 + 1;
            *rdi42 = *rsi43;
            rdi44 = rdi42 + 1;
            rsi45 = rsi43 + 1;
            __asm__("mulsd xmm0, xmm2");
            __asm__("addsd xmm0, xmm1");
            *rdi44 = *rsi45;
            rdi37 = rdi44 + 1;
            rsi38 = rsi45 + 1;
            ++v39;
        }
        v46 = reinterpret_cast<int32_t>(fprintf);
        while (v46 < v17) {
            *rdi37 = *rsi38;
            rdi47 = rdi37 + 1;
            rsi48 = rsi38 + 1;
            *rdi47 = *rsi48;
            rdi37 = rdi47 + 1;
            rsi38 = rsi48 + 1;
            ++v46;
        }
        *rdi37 = *rsi38;
        rdi49 = rdi37 + 1;
        rsi50 = rsi38 + 1;
        *rdi49 = *rsi50;
        rdi15 = rdi49 + 1;
        rsi16 = rsi50 + 1;
        ++v17;
    }
    return;
}

void init_array(int32_t edi, int32_t* rsi) {
    int32_t* rdi1;
    int32_t v3;
    int32_t v4;

    *reinterpret_cast<int32_t*>(&rdi1) = edi;
    v3 = *reinterpret_cast<int32_t*>(&rdi1);
    v4 = reinterpret_cast<int32_t>(fprintf);
    while (v4 < v3) {
        __asm__("cvtsi2sd xmm0, eax");
        *rdi1 = *rsi;
        ++rdi1;
        ++rsi;
        ++v4;
    }
    return;
}

