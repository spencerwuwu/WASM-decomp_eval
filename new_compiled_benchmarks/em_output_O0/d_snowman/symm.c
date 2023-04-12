
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
    int32_t v9;
    struct s2* rdi10;
    struct s3* rsi11;
    struct s4* rdi12;
    struct s5* rsi13;
    struct s6* rdi14;
    struct s7* rsi15;
    struct s8* rdi16;
    struct s9* rsi17;
    int32_t v18;
    int32_t v19;
    struct s10* rdi20;
    struct s11* rsi21;
    int32_t v22;
    int32_t v23;
    int32_t v24;
    struct s10* rdi25;
    struct s11* rsi26;

    v8 = *reinterpret_cast<int32_t*>(&rdi);
    v9 = *reinterpret_cast<int32_t*>(&rsi);
    rdi->f0 = rsi->f0;
    rdi10 = reinterpret_cast<struct s2*>(&rdi->f4);
    rsi11 = reinterpret_cast<struct s3*>(&rsi->f4);
    rdi10->f0 = rsi11->f0;
    rdi12 = reinterpret_cast<struct s4*>(&rdi10->f4);
    rsi13 = reinterpret_cast<struct s5*>(&rsi11->f4);
    rdi12->f0 = rsi13->f0;
    rdi14 = reinterpret_cast<struct s6*>(&rdi12->f4);
    rsi15 = reinterpret_cast<struct s7*>(&rsi13->f4);
    rdi14->f0 = rsi15->f0;
    rdi16 = reinterpret_cast<struct s8*>(&rdi14->f4);
    rsi17 = reinterpret_cast<struct s9*>(&rsi15->f4);
    v18 = reinterpret_cast<int32_t>(fprintf);
    while (v18 < v8) {
        v19 = reinterpret_cast<int32_t>(fprintf);
        while (v19 < v9) {
            __asm__("cdq ");
            __asm__("cvtsi2sd xmm0, edx");
            __asm__("cvtsi2sd xmm1, dword [rbp-0x4]");
            __asm__("divsd xmm0, xmm1");
            rdi16->f0 = rsi17->f0;
            rdi20 = reinterpret_cast<struct s10*>(&rdi16->f4);
            rsi21 = reinterpret_cast<struct s11*>(&rsi17->f4);
            __asm__("cdq ");
            __asm__("cvtsi2sd xmm0, edx");
            __asm__("cvtsi2sd xmm1, dword [rbp-0x4]");
            __asm__("divsd xmm0, xmm1");
            rdi20->f0 = rsi21->f0;
            rdi16 = reinterpret_cast<struct s8*>(&rdi20->f4);
            rsi17 = reinterpret_cast<struct s9*>(&rsi21->f4);
            ++v19;
        }
        ++v18;
    }
    v22 = reinterpret_cast<int32_t>(fprintf);
    while (v22 < v8) {
        v23 = reinterpret_cast<int32_t>(fprintf);
        while (v23 <= v22) {
            __asm__("cdq ");
            __asm__("cvtsi2sd xmm0, edx");
            __asm__("cvtsi2sd xmm1, dword [rbp-0x4]");
            __asm__("divsd xmm0, xmm1");
            rdi16->f0 = rsi17->f0;
            rdi16 = reinterpret_cast<struct s8*>(&rdi16->f4);
            rsi17 = reinterpret_cast<struct s9*>(&rsi17->f4);
            ++v23;
        }
        v24 = v22 + 1;
        while (v24 < v8) {
            rdi16->f0 = rsi17->f0;
            rdi25 = reinterpret_cast<struct s10*>(&rdi16->f4);
            rsi26 = reinterpret_cast<struct s11*>(&rsi17->f4);
            rdi25->f0 = rsi26->f0;
            rdi16 = reinterpret_cast<struct s8*>(&rdi25->f4);
            rsi17 = reinterpret_cast<struct s9*>(&rsi26->f4);
            ++v24;
        }
        ++v22;
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

void kernel_symm(struct s12* rdi, struct s13* rsi, int64_t rdx, int64_t rcx, int64_t r8) {
    int32_t v6;
    int32_t v7;
    struct s14* rdi8;
    struct s15* rsi9;
    int32_t* rdi10;
    int32_t* rsi11;
    int32_t v12;
    int32_t v13;
    int32_t* rdi14;
    int32_t* rsi15;
    int32_t v16;
    int32_t* rdi17;
    int32_t* rsi18;
    int32_t* rdi19;
    int32_t* rsi20;
    int32_t* rdi21;
    int32_t* rsi22;
    int32_t* rdi23;
    int32_t* rsi24;
    int32_t* rdi25;
    int32_t* rsi26;
    int32_t* rdi27;
    int32_t* rsi28;
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
    int32_t* rdi39;
    int32_t* rsi40;

    v6 = *reinterpret_cast<int32_t*>(&rdi);
    v7 = *reinterpret_cast<int32_t*>(&rsi);
    rdi->f0 = rsi->f0;
    rdi8 = reinterpret_cast<struct s14*>(&rdi->f4);
    rsi9 = reinterpret_cast<struct s15*>(&rsi->f4);
    rdi8->f0 = rsi9->f0;
    rdi10 = &rdi8->f4;
    rsi11 = &rsi9->f4;
    v12 = reinterpret_cast<int32_t>(fprintf);
    while (v12 < v6) {
        v13 = reinterpret_cast<int32_t>(fprintf);
        while (v13 < v7) {
            __asm__("xorps xmm0, xmm0");
            *rdi10 = *rsi11;
            rdi14 = rdi10 + 1;
            rsi15 = rsi11 + 1;
            v16 = reinterpret_cast<int32_t>(fprintf);
            while (v16 < v12) {
                *rdi14 = *rsi15;
                rdi17 = rdi14 + 1;
                rsi18 = rsi15 + 1;
                __asm__("mulsd xmm0, [rax+rcx*8]");
                *rdi17 = *rsi18;
                rdi19 = rdi17 + 1;
                rsi20 = rsi18 + 1;
                *rdi19 = *rsi20;
                rdi21 = rdi19 + 1;
                rsi22 = rsi20 + 1;
                __asm__("mulsd xmm0, xmm2");
                __asm__("addsd xmm0, xmm1");
                *rdi21 = *rsi22;
                rdi23 = rdi21 + 1;
                rsi24 = rsi22 + 1;
                *rdi23 = *rsi24;
                rdi25 = rdi23 + 1;
                rsi26 = rsi24 + 1;
                *rdi25 = *rsi26;
                rdi27 = rdi25 + 1;
                rsi28 = rsi26 + 1;
                *rdi27 = *rsi28;
                rdi29 = rdi27 + 1;
                rsi30 = rsi28 + 1;
                __asm__("mulsd xmm0, xmm2");
                __asm__("addsd xmm0, xmm1");
                *rdi29 = *rsi30;
                rdi14 = rdi29 + 1;
                rsi15 = rsi30 + 1;
                ++v16;
            }
            *rdi14 = *rsi15;
            rdi31 = rdi14 + 1;
            rsi32 = rsi15 + 1;
            *rdi31 = *rsi32;
            rdi33 = rdi31 + 1;
            rsi34 = rsi32 + 1;
            *rdi33 = *rsi34;
            rdi35 = rdi33 + 1;
            rsi36 = rsi34 + 1;
            __asm__("mulsd xmm0, [rax+rcx*8]");
            __asm__("mulsd xmm0, [rax+rcx*8]");
            __asm__("mulsd xmm1, xmm2");
            __asm__("addsd xmm1, xmm0");
            *rdi35 = *rsi36;
            rdi37 = rdi35 + 1;
            rsi38 = rsi36 + 1;
            *rdi37 = *rsi38;
            rdi39 = rdi37 + 1;
            rsi40 = rsi38 + 1;
            __asm__("mulsd xmm0, xmm2");
            __asm__("addsd xmm0, xmm1");
            *rdi39 = *rsi40;
            rdi10 = rdi39 + 1;
            rsi11 = rsi40 + 1;
            ++v13;
        }
        ++v12;
    }
    return;
}

void print_array(int32_t edi, int32_t esi, int64_t rdx);

void fun_d8(int64_t rdi, int64_t rsi, int64_t rdx);

void fun_e1(int64_t rdi, int64_t rsi, int64_t rdx);

void fun_ea(int64_t rdi, int64_t rsi, int64_t rdx);

void fun_b7(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8) {
    int32_t eax6;
    int32_t edi7;
    int64_t rbp8;
    int64_t rbp9;
    int64_t rbp10;
    int64_t rdi11;
    int64_t rbp12;
    int64_t rdi13;
    int64_t rbp14;
    int64_t rdi15;
    int64_t rbp16;
    int64_t v17;

    if (reinterpret_cast<int1_t>(eax6 == fprintf)) {
        edi7 = *reinterpret_cast<int32_t*>(rbp8 - 20);
        *reinterpret_cast<int32_t*>(&rsi) = *reinterpret_cast<int32_t*>(rbp9 - 24);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi) + 4) = reinterpret_cast<int32_t>(fprintf);
        rdx = *reinterpret_cast<int64_t*>(rbp10 - 48);
        print_array(edi7, *reinterpret_cast<int32_t*>(&rsi), rdx);
    }
    rdi11 = *reinterpret_cast<int64_t*>(rbp12 - 48);
    fun_d8(rdi11, rsi, rdx);
    rdi13 = *reinterpret_cast<int64_t*>(rbp14 - 56);
    fun_e1(rdi13, rsi, rdx);
    rdi15 = *reinterpret_cast<int64_t*>(rbp16 - 64);
    fun_ea(rdi15, rsi, rdx);
    goto v17;
}

int64_t* g4a9 = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_4ba(int64_t rdi, int64_t rsi);

int64_t* g4c1 = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_4d9(int64_t rdi);

int64_t* g521 = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_532(int64_t rdi);

int32_t** g539 = reinterpret_cast<int32_t**>(0x48f0458b48388b48);

void fun_565(int64_t rdi);

int64_t* g58d = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_5a5(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx);

int64_t* g5ac = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_5bd(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx);

void print_array(int32_t edi, int32_t esi, int64_t rdx) {
    int32_t v4;
    int32_t v5;
    int64_t* rax6;
    int64_t rdi7;
    int64_t* rax8;
    int64_t rdi9;
    int32_t* rsi10;
    int32_t v11;
    int32_t v12;
    int64_t* rax13;
    int64_t rdi14;
    int32_t** rax15;
    int32_t* rdi16;
    int64_t rcx17;
    int64_t* rax18;
    int64_t rdi19;
    int64_t* rax20;
    int64_t rdi21;

    v4 = edi;
    v5 = esi;
    rax6 = g4a9;
    rdi7 = *rax6;
    fun_4ba(rdi7, 0x4b3);
    rax8 = g4c1;
    rdi9 = *rax8;
    rsi10 = reinterpret_cast<int32_t*>(0x4cb);
    fun_4d9(rdi9);
    v11 = reinterpret_cast<int32_t>(fprintf);
    while (v11 < v4) {
        v12 = reinterpret_cast<int32_t>(fprintf);
        while (v12 < v5) {
            __asm__("cdq ");
            if (reinterpret_cast<int1_t>((v11 * v4 + v12) % 20 == fprintf)) {
                rax13 = g521;
                rdi14 = *rax13;
                rsi10 = reinterpret_cast<int32_t*>(0x52b);
                fun_532(rdi14);
            }
            rax15 = g539;
            rdi16 = *rax15;
            rcx17 = v12;
            *rdi16 = *rsi10;
            rsi10 = reinterpret_cast<int32_t*>(0x55e);
            fun_565(rdi16 + 1);
            ++v12;
        }
        ++v11;
    }
    rax18 = g58d;
    rdi19 = *rax18;
    fun_5a5(rdi19, 0x597, 0x59e, rcx17);
    rax20 = g5ac;
    rdi21 = *rax20;
    fun_5bd(rdi21, 0x5b6, 0x59e, rcx17);
    return;
}

void fun_532(int64_t rdi) {
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
    int64_t rbp12;
    int64_t rbp13;
    int64_t rbp14;
    int64_t rbp15;
    int64_t rbp16;
    int64_t rbp17;
    int64_t rbp18;
    int64_t* rax19;
    int64_t rdi20;
    int64_t* rax21;
    int64_t rdi22;
    int64_t* rax23;
    int64_t rdi24;
    int64_t v25;

    while (1) {
        rax2 = g539;
        rdi3 = *rax2;
        rcx4 = *reinterpret_cast<int32_t*>(rbp5 - 24);
        *rdi3 = *rsi6;
        rsi6 = reinterpret_cast<int32_t*>(0x55e);
        fun_565(rdi3 + 1);
        *reinterpret_cast<int32_t*>(rbp7 - 24) = *reinterpret_cast<int32_t*>(rbp8 - 24) + 1;
        while (*reinterpret_cast<int32_t*>(rbp9 - 24) >= *reinterpret_cast<int32_t*>(rbp10 - 8)) {
            *reinterpret_cast<int32_t*>(rbp11 - 20) = *reinterpret_cast<int32_t*>(rbp12 - 20) + 1;
            if (*reinterpret_cast<int32_t*>(rbp13 - 20) >= *reinterpret_cast<int32_t*>(rbp14 - 4)) 
                goto addr_586_10;
            *reinterpret_cast<int32_t*>(rbp15 - 24) = reinterpret_cast<int32_t>(fprintf);
        }
        __asm__("cdq ");
        if (!reinterpret_cast<int1_t>((*reinterpret_cast<int32_t*>(rbp16 - 20) * *reinterpret_cast<int32_t*>(rbp17 - 4) + *reinterpret_cast<int32_t*>(rbp18 - 24)) % 20 == fprintf)) 
            continue;
        rax19 = g521;
        rdi20 = *rax19;
        rsi6 = reinterpret_cast<int32_t*>(0x52b);
        fun_532(rdi20);
    }
    addr_586_10:
    rax21 = g58d;
    rdi22 = *rax21;
    fun_5a5(rdi22, 0x597, 0x59e, rcx4);
    rax23 = g5ac;
    rdi24 = *rax23;
    fun_5bd(rdi24, 0x5b6, 0x59e, rcx4);
    goto v25;
}

void fun_565(int64_t rdi) {
    int64_t rbp2;
    int64_t rbp3;
    int64_t rbp4;
    int64_t rbp5;
    int64_t rbp6;
    int64_t rbp7;
    int64_t rbp8;
    int64_t rbp9;
    int64_t rbp10;
    int64_t rbp11;
    int64_t rbp12;
    int64_t rbp13;
    int64_t* rax14;
    int64_t rdi15;
    int32_t* rsi16;
    int32_t** rax17;
    int32_t* rdi18;
    int64_t rcx19;
    int64_t rbp20;
    int64_t* rax21;
    int64_t rdi22;
    int64_t* rax23;
    int64_t rdi24;
    int64_t v25;

    while (1) {
        *reinterpret_cast<int32_t*>(rbp2 - 24) = *reinterpret_cast<int32_t*>(rbp3 - 24) + 1;
        while (*reinterpret_cast<int32_t*>(rbp4 - 24) >= *reinterpret_cast<int32_t*>(rbp5 - 8)) {
            *reinterpret_cast<int32_t*>(rbp6 - 20) = *reinterpret_cast<int32_t*>(rbp7 - 20) + 1;
            if (*reinterpret_cast<int32_t*>(rbp8 - 20) >= *reinterpret_cast<int32_t*>(rbp9 - 4)) 
                goto addr_586_6;
            *reinterpret_cast<int32_t*>(rbp10 - 24) = reinterpret_cast<int32_t>(fprintf);
        }
        __asm__("cdq ");
        if (reinterpret_cast<int1_t>((*reinterpret_cast<int32_t*>(rbp11 - 20) * *reinterpret_cast<int32_t*>(rbp12 - 4) + *reinterpret_cast<int32_t*>(rbp13 - 24)) % 20 == fprintf)) {
            rax14 = g521;
            rdi15 = *rax14;
            rsi16 = reinterpret_cast<int32_t*>(0x52b);
            fun_532(rdi15);
        }
        rax17 = g539;
        rdi18 = *rax17;
        rcx19 = *reinterpret_cast<int32_t*>(rbp20 - 24);
        *rdi18 = *rsi16;
        rsi16 = reinterpret_cast<int32_t*>(0x55e);
        fun_565(rdi18 + 1);
    }
    addr_586_6:
    rax21 = g58d;
    rdi22 = *rax21;
    fun_5a5(rdi22, 0x597, 0x59e, rcx19);
    rax23 = g5ac;
    rdi24 = *rax23;
    fun_5bd(rdi24, 0x5b6, 0x59e, rcx19);
    goto v25;
}

void fun_d8(int64_t rdi, int64_t rsi, int64_t rdx) {
    int64_t rdi4;
    int64_t rbp5;
    int64_t rdi6;
    int64_t rbp7;
    int64_t v8;

    rdi4 = *reinterpret_cast<int64_t*>(rbp5 - 56);
    fun_e1(rdi4, rsi, rdx);
    rdi6 = *reinterpret_cast<int64_t*>(rbp7 - 64);
    fun_ea(rdi6, rsi, rdx);
    goto v8;
}

void fun_4ba(int64_t rdi, int64_t rsi) {
    int64_t* rax3;
    int64_t rdi4;
    int32_t* rsi5;
    int64_t rbp6;
    int64_t rbp7;
    int64_t rbp8;
    int64_t rbp9;
    int64_t rbp10;
    int64_t rbp11;
    int64_t rbp12;
    int64_t rbp13;
    int64_t rbp14;
    int64_t* rax15;
    int64_t rdi16;
    int32_t** rax17;
    int32_t* rdi18;
    int64_t rcx19;
    int64_t rbp20;
    int64_t rbp21;
    int64_t rbp22;
    int64_t rbp23;
    int64_t rbp24;
    int64_t* rax25;
    int64_t rdi26;
    int64_t* rax27;
    int64_t rdi28;
    int64_t v29;

    rax3 = g4c1;
    rdi4 = *rax3;
    rsi5 = reinterpret_cast<int32_t*>(0x4cb);
    fun_4d9(rdi4);
    *reinterpret_cast<int32_t*>(rbp6 - 20) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp7 - 20) < *reinterpret_cast<int32_t*>(rbp8 - 4)) {
        *reinterpret_cast<int32_t*>(rbp9 - 24) = reinterpret_cast<int32_t>(fprintf);
        while (*reinterpret_cast<int32_t*>(rbp10 - 24) < *reinterpret_cast<int32_t*>(rbp11 - 8)) {
            __asm__("cdq ");
            if (reinterpret_cast<int1_t>((*reinterpret_cast<int32_t*>(rbp12 - 20) * *reinterpret_cast<int32_t*>(rbp13 - 4) + *reinterpret_cast<int32_t*>(rbp14 - 24)) % 20 == fprintf)) {
                rax15 = g521;
                rdi16 = *rax15;
                rsi5 = reinterpret_cast<int32_t*>(0x52b);
                fun_532(rdi16);
            }
            rax17 = g539;
            rdi18 = *rax17;
            rcx19 = *reinterpret_cast<int32_t*>(rbp20 - 24);
            *rdi18 = *rsi5;
            rsi5 = reinterpret_cast<int32_t*>(0x55e);
            fun_565(rdi18 + 1);
            *reinterpret_cast<int32_t*>(rbp21 - 24) = *reinterpret_cast<int32_t*>(rbp22 - 24) + 1;
        }
        *reinterpret_cast<int32_t*>(rbp23 - 20) = *reinterpret_cast<int32_t*>(rbp24 - 20) + 1;
    }
    rax25 = g58d;
    rdi26 = *rax25;
    fun_5a5(rdi26, 0x597, 0x59e, rcx19);
    rax27 = g5ac;
    rdi28 = *rax27;
    fun_5bd(rdi28, 0x5b6, 0x59e, rcx19);
    goto v29;
}

void fun_e1(int64_t rdi, int64_t rsi, int64_t rdx) {
    int64_t rdi4;
    int64_t rbp5;
    int64_t v6;

    rdi4 = *reinterpret_cast<int64_t*>(rbp5 - 64);
    fun_ea(rdi4, rsi, rdx);
    goto v6;
}

void fun_4d9(int64_t rdi) {
    int64_t rbp2;
    int64_t rbp3;
    int64_t rbp4;
    int64_t rbp5;
    int64_t rbp6;
    int64_t rbp7;
    int64_t rbp8;
    int64_t rbp9;
    int64_t rbp10;
    int64_t* rax11;
    int64_t rdi12;
    int32_t* rsi13;
    int32_t** rax14;
    int32_t* rdi15;
    int64_t rcx16;
    int64_t rbp17;
    int64_t rbp18;
    int64_t rbp19;
    int64_t rbp20;
    int64_t rbp21;
    int64_t* rax22;
    int64_t rdi23;
    int64_t* rax24;
    int64_t rdi25;
    int64_t v26;

    *reinterpret_cast<int32_t*>(rbp2 - 20) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp3 - 20) < *reinterpret_cast<int32_t*>(rbp4 - 4)) {
        *reinterpret_cast<int32_t*>(rbp5 - 24) = reinterpret_cast<int32_t>(fprintf);
        while (*reinterpret_cast<int32_t*>(rbp6 - 24) < *reinterpret_cast<int32_t*>(rbp7 - 8)) {
            __asm__("cdq ");
            if (reinterpret_cast<int1_t>((*reinterpret_cast<int32_t*>(rbp8 - 20) * *reinterpret_cast<int32_t*>(rbp9 - 4) + *reinterpret_cast<int32_t*>(rbp10 - 24)) % 20 == fprintf)) {
                rax11 = g521;
                rdi12 = *rax11;
                rsi13 = reinterpret_cast<int32_t*>(0x52b);
                fun_532(rdi12);
            }
            rax14 = g539;
            rdi15 = *rax14;
            rcx16 = *reinterpret_cast<int32_t*>(rbp17 - 24);
            *rdi15 = *rsi13;
            rsi13 = reinterpret_cast<int32_t*>(0x55e);
            fun_565(rdi15 + 1);
            *reinterpret_cast<int32_t*>(rbp18 - 24) = *reinterpret_cast<int32_t*>(rbp19 - 24) + 1;
        }
        *reinterpret_cast<int32_t*>(rbp20 - 20) = *reinterpret_cast<int32_t*>(rbp21 - 20) + 1;
    }
    rax22 = g58d;
    rdi23 = *rax22;
    fun_5a5(rdi23, 0x597, 0x59e, rcx16);
    rax24 = g5ac;
    rdi25 = *rax24;
    fun_5bd(rdi25, 0x5b6, 0x59e, rcx16);
    goto v26;
}

void fun_ea(int64_t rdi, int64_t rsi, int64_t rdx) {
    int64_t v4;

    goto v4;
}

void fun_5a5(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t* rax5;
    int64_t rdi6;
    int64_t v7;

    rax5 = g5ac;
    rdi6 = *rax5;
    fun_5bd(rdi6, 0x5b6, rdx, rcx);
    goto v7;
}

void fun_5bd(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t v5;

    goto v5;
}

void fprintf() {
}

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

void fun_68(struct s0* rdi, struct s1* rsi) {
    int64_t rbp3;
    int64_t rbp4;
    int64_t r8_5;
    int64_t r9_6;
    int64_t rax7;
    struct s16* rdi8;
    int64_t rbp9;
    struct s17* rsi10;
    int64_t rbp11;
    struct s18* rdi12;
    struct s19* rsi13;
    int64_t rdx14;
    int64_t rbp15;
    int64_t rcx16;
    int64_t rbp17;
    int64_t r8_18;
    int64_t rbp19;
    int64_t rbp20;
    int64_t rdi21;
    int64_t rbp22;

    init_array(rdi, rsi, rbp3 - 32, rbp4 - 40, r8_5, r9_6, rax7);
    *reinterpret_cast<int32_t*>(&rdi8) = *reinterpret_cast<int32_t*>(rbp9 - 20);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi8) + 4) = reinterpret_cast<int32_t>(fprintf);
    *reinterpret_cast<int32_t*>(&rsi10) = *reinterpret_cast<int32_t*>(rbp11 - 24);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi10) + 4) = reinterpret_cast<int32_t>(fprintf);
    rdi8->f0 = rsi10->f0;
    rdi12 = reinterpret_cast<struct s18*>(&rdi8->f4);
    rsi13 = reinterpret_cast<struct s19*>(&rsi10->f4);
    rdi12->f0 = rsi13->f0;
    rdx14 = *reinterpret_cast<int64_t*>(rbp15 - 48);
    rcx16 = *reinterpret_cast<int64_t*>(rbp17 - 56);
    r8_18 = *reinterpret_cast<int64_t*>(rbp19 - 64);
    kernel_symm(&rdi12->f4, &rsi13->f4, rdx14, rcx16, r8_18);
    if (*reinterpret_cast<int32_t*>(rbp20 - 4) <= 42) 
        goto 0xcf;
    rdi21 = **reinterpret_cast<int64_t**>(rbp22 - 16);
    fun_b7(rdi21, 0xb2, rdx14, rcx16, r8_18);
}

