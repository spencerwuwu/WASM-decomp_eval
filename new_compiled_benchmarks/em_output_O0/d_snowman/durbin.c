
void fprintf(int32_t* rdi, int32_t* rsi, int64_t rdx);

void print_array(int32_t edi, int64_t rsi, int64_t rdx);

void fun_333(int64_t rdi, int64_t rsi, int64_t rdx);

void fun_33c(int64_t rdi, int64_t rsi, int64_t rdx);

int32_t fun_315(int64_t rdi, int64_t rsi, int64_t rdx) {
    int32_t eax4;
    int32_t edi5;
    int64_t rbp6;
    int64_t rbp7;
    int64_t rdi8;
    int64_t rbp9;
    int64_t rdi10;
    int64_t rbp11;
    int64_t v12;

    if (reinterpret_cast<int1_t>(eax4 == fprintf)) {
        edi5 = *reinterpret_cast<int32_t*>(rbp6 - 20);
        rsi = *reinterpret_cast<int64_t*>(rbp7 - 40);
        print_array(edi5, rsi, rdx);
    }
    rdi8 = *reinterpret_cast<int64_t*>(rbp9 - 32);
    fun_333(rdi8, rsi, rdx);
    rdi10 = *reinterpret_cast<int64_t*>(rbp11 - 40);
    fun_33c(rdi10, rsi, rdx);
    goto v12;
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

void print_array(int32_t edi, int64_t rsi, int64_t rdx) {
    int32_t v4;
    int64_t* rax5;
    int64_t rdi6;
    int64_t* rax7;
    int64_t rdi8;
    int32_t* rsi9;
    int32_t v10;
    int64_t* rax11;
    int64_t rdi12;
    int32_t** rax13;
    int32_t* rdi14;
    int64_t rcx15;
    int64_t* rax16;
    int64_t rdi17;
    int64_t* rax18;
    int64_t rdi19;

    v4 = edi;
    rax5 = g3b6;
    rdi6 = *rax5;
    fun_3c7(rdi6, 0x3c0);
    rax7 = g3ce;
    rdi8 = *rax7;
    rsi9 = reinterpret_cast<int32_t*>(0x3d8);
    fun_3e6(rdi8);
    v10 = reinterpret_cast<int32_t>(fprintf);
    while (v10 < v4) {
        __asm__("cdq ");
        if (reinterpret_cast<int1_t>(v10 % 20 == fprintf)) {
            rax11 = g414;
            rdi12 = *rax11;
            rsi9 = reinterpret_cast<int32_t*>(0x41e);
            fun_425(rdi12);
        }
        rax13 = g42c;
        rdi14 = *rax13;
        rcx15 = v10;
        *rdi14 = *rsi9;
        rsi9 = reinterpret_cast<int32_t*>(0x443);
        fun_44a(rdi14 + 1);
        ++v10;
    }
    rax16 = g45f;
    rdi17 = *rax16;
    fun_477(rdi17, 0x469, 0x470, rcx15);
    rax18 = g47e;
    rdi19 = *rax18;
    fun_48f(rdi19, 0x488, 0x470, rcx15);
    return;
}

void fun_333(int64_t rdi, int64_t rsi, int64_t rdx) {
    int64_t rdi4;
    int64_t rbp5;
    int64_t v6;

    rdi4 = *reinterpret_cast<int64_t*>(rbp5 - 40);
    fun_33c(rdi4, rsi, rdx);
    goto v6;
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

void fun_33c(int64_t rdi, int64_t rsi, int64_t rdx) {
    int64_t v4;

    goto v4;
}

int64_t fun_2d8(int64_t rdi, int64_t rsi);

void init_array(int32_t edi, int32_t* rsi);

void fun_2f8(int64_t rdi, int64_t rsi, int64_t rdx);

void fun_2c5(int64_t rdi, int64_t rsi) {
    int64_t rbp3;
    int64_t rax4;
    int64_t rax5;
    int64_t rbp6;
    int32_t edi7;
    int64_t rbp8;
    int32_t* rsi9;
    int64_t rbp10;
    int64_t rdi11;
    int64_t rbp12;
    int64_t rsi13;
    int64_t rbp14;
    int64_t rdx15;
    int64_t rbp16;
    int64_t rbp17;
    int64_t rdi18;
    int64_t rbp19;
    int64_t rdi20;
    int64_t rbp21;
    int32_t eax22;
    int64_t rdi23;
    int64_t rbp24;
    int64_t v25;
    int32_t edi26;
    int64_t rbp27;
    int64_t rbp28;

    *reinterpret_cast<int64_t*>(rbp3 - 32) = rax4;
    rax5 = fun_2d8(0x7d0, ">");
    *reinterpret_cast<int64_t*>(rbp6 - 40) = rax5;
    edi7 = *reinterpret_cast<int32_t*>(rbp8 - 20);
    rsi9 = *reinterpret_cast<int32_t**>(rbp10 - 32);
    init_array(edi7, rsi9);
    *reinterpret_cast<int32_t*>(&rdi11) = *reinterpret_cast<int32_t*>(rbp12 - 20);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi11) + 4) = reinterpret_cast<int32_t>(fprintf);
    rsi13 = *reinterpret_cast<int64_t*>(rbp14 - 32);
    rdx15 = *reinterpret_cast<int64_t*>(rbp16 - 40);
    fun_2f8(rdi11, rsi13, rdx15);
    if (*reinterpret_cast<int32_t*>(rbp17 - 4) <= 42) {
        addr_32a_4:
        rdi18 = *reinterpret_cast<int64_t*>(rbp19 - 32);
        fun_333(rdi18, rsi13, rdx15);
    } else {
        rdi20 = **reinterpret_cast<int64_t**>(rbp21 - 16);
        rsi13 = 0x310;
        eax22 = fun_315(rdi20, 0x310, rdx15);
        if (!reinterpret_cast<int1_t>(eax22 == fprintf)) 
            goto addr_32a_4; else 
            goto addr_31e_7;
    }
    rdi23 = *reinterpret_cast<int64_t*>(rbp24 - 40);
    fun_33c(rdi23, rsi13, rdx15);
    goto v25;
    addr_31e_7:
    edi26 = *reinterpret_cast<int32_t*>(rbp27 - 20);
    rsi13 = *reinterpret_cast<int64_t*>(rbp28 - 40);
    print_array(edi26, rsi13, rdx15);
    goto addr_32a_4;
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

int64_t fun_2d8(int64_t rdi, int64_t rsi) {
    int64_t rbp3;
    int64_t rax4;
    int32_t edi5;
    int64_t rbp6;
    int32_t* rsi7;
    int64_t rbp8;
    int64_t rdi9;
    int64_t rbp10;
    int64_t rsi11;
    int64_t rbp12;
    int64_t rdx13;
    int64_t rbp14;
    int64_t rbp15;
    int64_t rdi16;
    int64_t rbp17;
    int64_t rdi18;
    int64_t rbp19;
    int32_t eax20;
    int64_t rdi21;
    int64_t rbp22;
    int64_t v23;
    int32_t edi24;
    int64_t rbp25;
    int64_t rbp26;

    *reinterpret_cast<int64_t*>(rbp3 - 40) = rax4;
    edi5 = *reinterpret_cast<int32_t*>(rbp6 - 20);
    rsi7 = *reinterpret_cast<int32_t**>(rbp8 - 32);
    init_array(edi5, rsi7);
    *reinterpret_cast<int32_t*>(&rdi9) = *reinterpret_cast<int32_t*>(rbp10 - 20);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi9) + 4) = reinterpret_cast<int32_t>(fprintf);
    rsi11 = *reinterpret_cast<int64_t*>(rbp12 - 32);
    rdx13 = *reinterpret_cast<int64_t*>(rbp14 - 40);
    fun_2f8(rdi9, rsi11, rdx13);
    if (*reinterpret_cast<int32_t*>(rbp15 - 4) <= 42) {
        addr_32a_3:
        rdi16 = *reinterpret_cast<int64_t*>(rbp17 - 32);
        fun_333(rdi16, rsi11, rdx13);
    } else {
        rdi18 = **reinterpret_cast<int64_t**>(rbp19 - 16);
        rsi11 = 0x310;
        eax20 = fun_315(rdi18, 0x310, rdx13);
        if (!reinterpret_cast<int1_t>(eax20 == fprintf)) 
            goto addr_32a_3; else 
            goto addr_31e_6;
    }
    rdi21 = *reinterpret_cast<int64_t*>(rbp22 - 40);
    fun_33c(rdi21, rsi11, rdx13);
    goto v23;
    addr_31e_6:
    edi24 = *reinterpret_cast<int32_t*>(rbp25 - 20);
    rsi11 = *reinterpret_cast<int64_t*>(rbp26 - 40);
    print_array(edi24, rsi11, rdx13);
    goto addr_32a_3;
}

void fun_48f(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t v5;

    goto v5;
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

void fun_2f8(int64_t rdi, int64_t rsi, int64_t rdx) {
    int64_t rbp4;
    int64_t rdi5;
    int64_t rbp6;
    int64_t rdi7;
    int64_t rbp8;
    int32_t eax9;
    int64_t rdi10;
    int64_t rbp11;
    int64_t v12;
    int32_t edi13;
    int64_t rbp14;
    int64_t rbp15;

    if (*reinterpret_cast<int32_t*>(rbp4 - 4) <= 42) {
        addr_32a_2:
        rdi5 = *reinterpret_cast<int64_t*>(rbp6 - 32);
        fun_333(rdi5, rsi, rdx);
    } else {
        rdi7 = **reinterpret_cast<int64_t**>(rbp8 - 16);
        rsi = 0x310;
        eax9 = fun_315(rdi7, 0x310, rdx);
        if (!reinterpret_cast<int1_t>(eax9 == fprintf)) 
            goto addr_32a_2; else 
            goto addr_31e_5;
    }
    rdi10 = *reinterpret_cast<int64_t*>(rbp11 - 40);
    fun_33c(rdi10, rsi, rdx);
    goto v12;
    addr_31e_5:
    edi13 = *reinterpret_cast<int32_t*>(rbp14 - 20);
    rsi = *reinterpret_cast<int64_t*>(rbp15 - 40);
    print_array(edi13, rsi, rdx);
    goto addr_32a_2;
}

void fprintf(int32_t* rdi, int32_t* rsi, int64_t rdx) {
    *rdi = *rsi;
    __asm__("movd rax, xmm0");
}

struct s0 {
    int32_t f0;
    int32_t f4;
};

struct s1 {
    int32_t f0;
    int32_t f4;
};

void fun_68(struct s0* rdi, struct s1* rsi) {
    int32_t* rdi3;
    int32_t* rsi4;
    int64_t rbp5;
    int64_t rbp6;
    int64_t rbp7;
    int32_t* rdi8;
    int32_t* rsi9;
    int32_t* rdi10;
    int32_t* rsi11;
    int32_t* rdi12;
    int32_t* rsi13;
    int32_t* rdi14;
    int32_t* rsi15;
    int32_t* rdi16;
    int32_t* rsi17;
    int64_t rbp18;
    int64_t rbp19;
    int64_t rbp20;
    int32_t* rdi21;
    int32_t* rsi22;
    int32_t* rdi23;
    int32_t* rsi24;
    int32_t* rdi25;
    int32_t* rsi26;
    int64_t rbp27;
    int64_t rbp28;
    int32_t* rdi29;
    int32_t* rsi30;
    int32_t* rdi31;
    int32_t* rsi32;
    int64_t rbp33;
    int64_t rbp34;
    int64_t rbp35;
    int32_t* rdi36;
    int32_t* rsi37;
    int32_t* rdi38;
    int32_t* rsi39;
    int32_t* rdi40;
    int32_t* rsi41;
    int64_t rbp42;
    int64_t rbp43;
    int64_t rbp44;
    int64_t rbp45;
    int64_t rbp46;
    int32_t* rdi47;
    int32_t* rsi48;
    int64_t rbp49;
    int64_t rbp50;
    int32_t* rdi51;
    int32_t* rsi52;
    int64_t rbp53;
    int64_t rbp54;
    int64_t v55;

    __asm__("movd mm0, eax");
    rdi->f0 = rsi->f0;
    rdi3 = &rdi->f4;
    rsi4 = &rsi->f4;
    *reinterpret_cast<int32_t*>(rbp5 - 0x3ec0) = 1;
    while (*reinterpret_cast<int32_t*>(rbp6 - 0x3ec0) < *reinterpret_cast<int32_t*>(rbp7 - 4)) {
        *rdi3 = *rsi4;
        rdi8 = rdi3 + 1;
        rsi9 = rsi4 + 1;
        *rdi8 = *rsi9;
        rdi10 = rdi8 + 1;
        rsi11 = rsi9 + 1;
        __asm__("movd rax, xmm0");
        __asm__("movd xmm0, rax");
        __asm__("mulsd xmm0, xmm1");
        *rdi10 = *rsi11;
        rdi12 = rdi10 + 1;
        rsi13 = rsi11 + 1;
        __asm__("addsd xmm0, xmm1");
        __asm__("mulsd xmm0, [rbp-0x3eb0]");
        *rdi12 = *rsi13;
        rdi14 = rdi12 + 1;
        rsi15 = rsi13 + 1;
        __asm__("xorps xmm0, xmm0");
        *rdi14 = *rsi15;
        rdi16 = rdi14 + 1;
        rsi17 = rsi15 + 1;
        *reinterpret_cast<int32_t*>(rbp18 - 0x3ebc) = reinterpret_cast<int32_t>(fprintf);
        while (*reinterpret_cast<int32_t*>(rbp19 - 0x3ebc) < *reinterpret_cast<int32_t*>(rbp20 - 0x3ec0)) {
            *rdi16 = *rsi17;
            rdi21 = rdi16 + 1;
            rsi22 = rsi17 + 1;
            *rdi21 = *rsi22;
            rdi23 = rdi21 + 1;
            rsi24 = rsi22 + 1;
            *rdi23 = *rsi24;
            rdi25 = rdi23 + 1;
            rsi26 = rsi24 + 1;
            __asm__("mulsd xmm0, xmm2");
            __asm__("addsd xmm0, xmm1");
            *rdi25 = *rsi26;
            rdi16 = rdi25 + 1;
            rsi17 = rsi26 + 1;
            *reinterpret_cast<int32_t*>(rbp27 - 0x3ebc) = *reinterpret_cast<int32_t*>(rbp28 - 0x3ebc) + 1;
        }
        *rdi16 = *rsi17;
        rdi29 = rdi16 + 1;
        rsi30 = rsi17 + 1;
        __asm__("addsd xmm0, [rbp-0x3eb8]");
        __asm__("movd rax, xmm0");
        __asm__("movd xmm0, rax");
        __asm__("divsd xmm0, [rbp-0x3eb0]");
        *rdi29 = *rsi30;
        rdi31 = rdi29 + 1;
        rsi32 = rsi30 + 1;
        *reinterpret_cast<int32_t*>(rbp33 - 0x3ebc) = reinterpret_cast<int32_t>(fprintf);
        while (*reinterpret_cast<int32_t*>(rbp34 - 0x3ebc) < *reinterpret_cast<int32_t*>(rbp35 - 0x3ec0)) {
            *rdi31 = *rsi32;
            rdi36 = rdi31 + 1;
            rsi37 = rsi32 + 1;
            *rdi36 = *rsi37;
            rdi38 = rdi36 + 1;
            rsi39 = rsi37 + 1;
            *rdi38 = *rsi39;
            rdi40 = rdi38 + 1;
            rsi41 = rsi39 + 1;
            __asm__("mulsd xmm0, xmm2");
            __asm__("addsd xmm0, xmm1");
            *rdi40 = *rsi41;
            rdi31 = rdi40 + 1;
            rsi32 = rsi41 + 1;
            *reinterpret_cast<int32_t*>(rbp42 - 0x3ebc) = *reinterpret_cast<int32_t*>(rbp43 - 0x3ebc) + 1;
        }
        *reinterpret_cast<int32_t*>(rbp44 - 0x3ebc) = reinterpret_cast<int32_t>(fprintf);
        while (*reinterpret_cast<int32_t*>(rbp45 - 0x3ebc) < *reinterpret_cast<int32_t*>(rbp46 - 0x3ec0)) {
            *rdi31 = *rsi32;
            rdi47 = rdi31 + 1;
            rsi48 = rsi32 + 1;
            *rdi47 = *rsi48;
            rdi31 = rdi47 + 1;
            rsi32 = rsi48 + 1;
            *reinterpret_cast<int32_t*>(rbp49 - 0x3ebc) = *reinterpret_cast<int32_t*>(rbp50 - 0x3ebc) + 1;
        }
        *rdi31 = *rsi32;
        rdi51 = rdi31 + 1;
        rsi52 = rsi32 + 1;
        *rdi51 = *rsi52;
        rdi3 = rdi51 + 1;
        rsi4 = rsi52 + 1;
        *reinterpret_cast<int32_t*>(rbp53 - 0x3ec0) = *reinterpret_cast<int32_t*>(rbp54 - 0x3ec0) + 1;
    }
    goto v55;
}

void submain(int32_t edi, int64_t rsi) {
    fun_2c5(0x7d0, ">");
}

