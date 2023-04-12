
void fun_71() {
    int64_t rbp1;
    int64_t rax2;

    *reinterpret_cast<int64_t*>(rbp1 - 80) = rax2;
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

void fprintf();

struct s10 {
    int32_t f0;
    int32_t f4;
};

struct s11 {
    int32_t f0;
    int32_t f4;
};

void init_array(struct s0* rdi, struct s1* rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7) {
    int32_t v8;
    struct s2* rdi9;
    struct s3* rsi10;
    struct s4* rdi11;
    struct s5* rsi12;
    struct s6* rdi13;
    struct s7* rsi14;
    struct s8* rdi15;
    struct s9* rsi16;
    int32_t v17;
    int32_t v18;
    struct s10* rdi19;
    struct s11* rsi20;

    v8 = *reinterpret_cast<int32_t*>(&rdi);
    rdi->f0 = rsi->f0;
    rdi9 = reinterpret_cast<struct s2*>(&rdi->f4);
    rsi10 = reinterpret_cast<struct s3*>(&rsi->f4);
    rdi9->f0 = rsi10->f0;
    rdi11 = reinterpret_cast<struct s4*>(&rdi9->f4);
    rsi12 = reinterpret_cast<struct s5*>(&rsi10->f4);
    rdi11->f0 = rsi12->f0;
    rdi13 = reinterpret_cast<struct s6*>(&rdi11->f4);
    rsi14 = reinterpret_cast<struct s7*>(&rsi12->f4);
    rdi13->f0 = rsi14->f0;
    rdi15 = reinterpret_cast<struct s8*>(&rdi13->f4);
    rsi16 = reinterpret_cast<struct s9*>(&rsi14->f4);
    v17 = reinterpret_cast<int32_t>(fprintf);
    while (v17 < v8) {
        __asm__("cdq ");
        __asm__("cvtsi2sd xmm0, edx");
        __asm__("cvtsi2sd xmm1, dword [rbp-0x4]");
        __asm__("divsd xmm0, xmm1");
        rdi15->f0 = rsi16->f0;
        rdi15 = reinterpret_cast<struct s8*>(&rdi15->f4);
        rsi16 = reinterpret_cast<struct s9*>(&rsi16->f4);
        v18 = reinterpret_cast<int32_t>(fprintf);
        while (v18 < v8) {
            __asm__("cdq ");
            __asm__("cvtsi2sd xmm0, edx");
            __asm__("cvtsi2sd xmm1, dword [rbp-0x4]");
            __asm__("divsd xmm0, xmm1");
            rdi15->f0 = rsi16->f0;
            rdi19 = reinterpret_cast<struct s10*>(&rdi15->f4);
            rsi20 = reinterpret_cast<struct s11*>(&rsi16->f4);
            __asm__("cdq ");
            __asm__("cvtsi2sd xmm0, edx");
            __asm__("cvtsi2sd xmm1, dword [rbp-0x4]");
            __asm__("divsd xmm0, xmm1");
            rdi19->f0 = rsi20->f0;
            rdi15 = reinterpret_cast<struct s8*>(&rdi19->f4);
            rsi16 = reinterpret_cast<struct s9*>(&rsi20->f4);
            ++v18;
        }
        ++v17;
    }
    return;
}

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

void kernel_gesummv(struct s12* rdi, struct s13* rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7) {
    int32_t v8;
    struct s14* rdi9;
    struct s15* rsi10;
    struct s16* rdi11;
    struct s17* rsi12;
    int32_t v13;
    struct s18* rdi14;
    struct s19* rsi15;
    struct s16* rdi16;
    struct s17* rsi17;
    int32_t v18;
    struct s18* rdi19;
    struct s19* rsi20;
    struct s16* rdi21;
    struct s17* rsi22;
    struct s18* rdi23;
    struct s19* rsi24;
    struct s16* rdi25;
    struct s17* rsi26;
    struct s18* rdi27;
    struct s19* rsi28;
    struct s16* rdi29;
    struct s17* rsi30;
    struct s18* rdi31;
    struct s19* rsi32;
    struct s18* rdi33;
    struct s19* rsi34;
    struct s16* rdi35;
    struct s17* rsi36;
    struct s18* rdi37;
    struct s19* rsi38;

    v8 = *reinterpret_cast<int32_t*>(&rdi);
    rdi->f0 = rsi->f0;
    rdi9 = reinterpret_cast<struct s14*>(&rdi->f4);
    rsi10 = reinterpret_cast<struct s15*>(&rsi->f4);
    rdi9->f0 = rsi10->f0;
    rdi11 = reinterpret_cast<struct s16*>(&rdi9->f4);
    rsi12 = reinterpret_cast<struct s17*>(&rsi10->f4);
    v13 = reinterpret_cast<int32_t>(fprintf);
    while (v13 < v8) {
        __asm__("xorps xmm0, xmm0");
        rdi11->f0 = rsi12->f0;
        rdi14 = reinterpret_cast<struct s18*>(&rdi11->f4);
        rsi15 = reinterpret_cast<struct s19*>(&rsi12->f4);
        __asm__("xorps xmm0, xmm0");
        rdi14->f0 = rsi15->f0;
        rdi16 = reinterpret_cast<struct s16*>(&rdi14->f4);
        rsi17 = reinterpret_cast<struct s17*>(&rsi15->f4);
        v18 = reinterpret_cast<int32_t>(fprintf);
        while (v18 < v8) {
            rdi16->f0 = rsi17->f0;
            rdi19 = reinterpret_cast<struct s18*>(&rdi16->f4);
            rsi20 = reinterpret_cast<struct s19*>(&rsi17->f4);
            rdi19->f0 = rsi20->f0;
            rdi21 = reinterpret_cast<struct s16*>(&rdi19->f4);
            rsi22 = reinterpret_cast<struct s17*>(&rsi20->f4);
            rdi21->f0 = rsi22->f0;
            rdi23 = reinterpret_cast<struct s18*>(&rdi21->f4);
            rsi24 = reinterpret_cast<struct s19*>(&rsi22->f4);
            __asm__("mulsd xmm0, xmm2");
            __asm__("addsd xmm0, xmm1");
            rdi23->f0 = rsi24->f0;
            rdi25 = reinterpret_cast<struct s16*>(&rdi23->f4);
            rsi26 = reinterpret_cast<struct s17*>(&rsi24->f4);
            rdi25->f0 = rsi26->f0;
            rdi27 = reinterpret_cast<struct s18*>(&rdi25->f4);
            rsi28 = reinterpret_cast<struct s19*>(&rsi26->f4);
            rdi27->f0 = rsi28->f0;
            rdi29 = reinterpret_cast<struct s16*>(&rdi27->f4);
            rsi30 = reinterpret_cast<struct s17*>(&rsi28->f4);
            rdi29->f0 = rsi30->f0;
            rdi31 = reinterpret_cast<struct s18*>(&rdi29->f4);
            rsi32 = reinterpret_cast<struct s19*>(&rsi30->f4);
            __asm__("mulsd xmm0, xmm2");
            __asm__("addsd xmm0, xmm1");
            rdi31->f0 = rsi32->f0;
            rdi16 = reinterpret_cast<struct s16*>(&rdi31->f4);
            rsi17 = reinterpret_cast<struct s17*>(&rsi32->f4);
            ++v18;
        }
        rdi16->f0 = rsi17->f0;
        rdi33 = reinterpret_cast<struct s18*>(&rdi16->f4);
        rsi34 = reinterpret_cast<struct s19*>(&rsi17->f4);
        rdi33->f0 = rsi34->f0;
        rdi35 = reinterpret_cast<struct s16*>(&rdi33->f4);
        rsi36 = reinterpret_cast<struct s17*>(&rsi34->f4);
        rdi35->f0 = rsi36->f0;
        rdi37 = reinterpret_cast<struct s18*>(&rdi35->f4);
        rsi38 = reinterpret_cast<struct s19*>(&rsi36->f4);
        __asm__("mulsd xmm1, [rax+rcx*8]");
        __asm__("mulsd xmm0, xmm2");
        __asm__("addsd xmm0, xmm1");
        rdi37->f0 = rsi38->f0;
        rdi11 = reinterpret_cast<struct s16*>(&rdi37->f4);
        rsi12 = reinterpret_cast<struct s17*>(&rsi38->f4);
        ++v13;
    }
    return;
}

void print_array(int32_t edi, int64_t rsi);

void fun_f2(int64_t rdi, int64_t rsi);

void fun_fb(int64_t rdi, int64_t rsi);

void fun_104(int64_t rdi, int64_t rsi);

void fun_10d(int64_t rdi, int64_t rsi);

void fun_116(int64_t rdi, int64_t rsi);

void fun_d4(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7) {
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
    int64_t rdi20;
    int64_t rbp21;
    int64_t v22;

    if (reinterpret_cast<int1_t>(eax8 == fprintf)) {
        edi9 = *reinterpret_cast<int32_t*>(rbp10 - 20);
        rsi = *reinterpret_cast<int64_t*>(rbp11 - 80);
        print_array(edi9, rsi);
    }
    rdi12 = *reinterpret_cast<int64_t*>(rbp13 - 48);
    fun_f2(rdi12, rsi);
    rdi14 = *reinterpret_cast<int64_t*>(rbp15 - 56);
    fun_fb(rdi14, rsi);
    rdi16 = *reinterpret_cast<int64_t*>(rbp17 - 64);
    fun_104(rdi16, rsi);
    rdi18 = *reinterpret_cast<int64_t*>(rbp19 - 72);
    fun_10d(rdi18, rsi);
    rdi20 = *reinterpret_cast<int64_t*>(rbp21 - 80);
    fun_116(rdi20, rsi);
    goto v22;
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

void fun_f2(int64_t rdi, int64_t rsi) {
    int64_t rdi3;
    int64_t rbp4;
    int64_t rdi5;
    int64_t rbp6;
    int64_t rdi7;
    int64_t rbp8;
    int64_t rdi9;
    int64_t rbp10;
    int64_t v11;

    rdi3 = *reinterpret_cast<int64_t*>(rbp4 - 56);
    fun_fb(rdi3, rsi);
    rdi5 = *reinterpret_cast<int64_t*>(rbp6 - 64);
    fun_104(rdi5, rsi);
    rdi7 = *reinterpret_cast<int64_t*>(rbp8 - 72);
    fun_10d(rdi7, rsi);
    rdi9 = *reinterpret_cast<int64_t*>(rbp10 - 80);
    fun_116(rdi9, rsi);
    goto v11;
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

void fun_fb(int64_t rdi, int64_t rsi) {
    int64_t rdi3;
    int64_t rbp4;
    int64_t rdi5;
    int64_t rbp6;
    int64_t rdi7;
    int64_t rbp8;
    int64_t v9;

    rdi3 = *reinterpret_cast<int64_t*>(rbp4 - 64);
    fun_104(rdi3, rsi);
    rdi5 = *reinterpret_cast<int64_t*>(rbp6 - 72);
    fun_10d(rdi5, rsi);
    rdi7 = *reinterpret_cast<int64_t*>(rbp8 - 80);
    fun_116(rdi7, rsi);
    goto v9;
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

void fun_104(int64_t rdi, int64_t rsi) {
    int64_t rdi3;
    int64_t rbp4;
    int64_t rdi5;
    int64_t rbp6;
    int64_t v7;

    rdi3 = *reinterpret_cast<int64_t*>(rbp4 - 72);
    fun_10d(rdi3, rsi);
    rdi5 = *reinterpret_cast<int64_t*>(rbp6 - 80);
    fun_116(rdi5, rsi);
    goto v7;
}

void fun_48f(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t v5;

    goto v5;
}

void fun_10d(int64_t rdi, int64_t rsi) {
    int64_t rdi3;
    int64_t rbp4;
    int64_t v5;

    rdi3 = *reinterpret_cast<int64_t*>(rbp4 - 80);
    fun_116(rdi3, rsi);
    goto v5;
}

void fun_116(int64_t rdi, int64_t rsi) {
    int64_t v3;

    goto v3;
}

void fprintf() {
}

void fun_68() {
    unsigned char* rax1;
    unsigned char* rax2;
    unsigned char al3;
    signed char* rax4;
    signed char* rax5;
    signed char al6;

    *rax1 = reinterpret_cast<unsigned char>(*rax2 | al3);
    *rax4 = reinterpret_cast<signed char>(*rax5 + al6);
    fun_71();
}

struct s20 {
    int32_t f0;
    int32_t f4;
};

struct s21 {
    int32_t f0;
    int32_t f4;
};

void fun_88(struct s0* rdi, struct s1* rsi) {
    int64_t rbp3;
    int64_t rcx4;
    int64_t r8_5;
    int64_t r9_6;
    struct s20* rdi7;
    int64_t rbp8;
    struct s21* rdi9;
    struct s13* rsi10;
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

    init_array(rdi, rsi, rbp3 - 40, rcx4, r8_5, r9_6, __return_address());
    *reinterpret_cast<int32_t*>(&rdi7) = *reinterpret_cast<int32_t*>(rbp8 - 20);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi7) + 4) = reinterpret_cast<int32_t>(fprintf);
    rdi7->f0 = rsi->f0;
    rdi9 = reinterpret_cast<struct s21*>(&rdi7->f4);
    rdi9->f0 = rsi->f4;
    rsi10 = *reinterpret_cast<struct s13**>(rbp11 - 48);
    rdx12 = *reinterpret_cast<int64_t*>(rbp13 - 56);
    rcx14 = *reinterpret_cast<int64_t*>(rbp15 - 64);
    r8_16 = *reinterpret_cast<int64_t*>(rbp17 - 72);
    r9_18 = *reinterpret_cast<int64_t*>(rbp19 - 80);
    kernel_gesummv(&rdi9->f4, rsi10, rdx12, rcx14, r8_16, r9_18, __return_address());
    if (*reinterpret_cast<int32_t*>(rbp20 - 4) <= 42) 
        goto 0xe9;
    rdi21 = **reinterpret_cast<int64_t**>(rbp22 - 16);
    fun_d4(rdi21, 0xcf, rdx12, rcx14, r8_16, r9_18, __return_address());
}

