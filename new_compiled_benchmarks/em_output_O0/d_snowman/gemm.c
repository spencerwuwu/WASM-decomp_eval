
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

void fprintf();

void init_array(struct s0* rdi, struct s1* rsi, int32_t edx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8) {
    int32_t v9;
    int32_t v10;
    int32_t v11;
    struct s2* rdi12;
    struct s3* rsi13;
    struct s4* rdi14;
    struct s5* rsi15;
    struct s6* rdi16;
    struct s7* rsi17;
    int32_t* rdi18;
    int32_t* rsi19;
    int32_t v20;
    int32_t v21;
    int32_t v22;
    int32_t v23;
    int32_t v24;
    int32_t v25;

    v9 = *reinterpret_cast<int32_t*>(&rdi);
    v10 = *reinterpret_cast<int32_t*>(&rsi);
    v11 = edx;
    rdi->f0 = rsi->f0;
    rdi12 = reinterpret_cast<struct s2*>(&rdi->f4);
    rsi13 = reinterpret_cast<struct s3*>(&rsi->f4);
    rdi12->f0 = rsi13->f0;
    rdi14 = reinterpret_cast<struct s4*>(&rdi12->f4);
    rsi15 = reinterpret_cast<struct s5*>(&rsi13->f4);
    rdi14->f0 = rsi15->f0;
    rdi16 = reinterpret_cast<struct s6*>(&rdi14->f4);
    rsi17 = reinterpret_cast<struct s7*>(&rsi15->f4);
    rdi16->f0 = rsi17->f0;
    rdi18 = &rdi16->f4;
    rsi19 = &rsi17->f4;
    v20 = reinterpret_cast<int32_t>(fprintf);
    while (v20 < v9) {
        v21 = reinterpret_cast<int32_t>(fprintf);
        while (v21 < v10) {
            __asm__("cdq ");
            __asm__("cvtsi2sd xmm0, edx");
            __asm__("cvtsi2sd xmm1, dword [rbp-0x4]");
            __asm__("divsd xmm0, xmm1");
            *rdi18 = *rsi19;
            ++rdi18;
            ++rsi19;
            ++v21;
        }
        ++v20;
    }
    v22 = reinterpret_cast<int32_t>(fprintf);
    while (v22 < v9) {
        v23 = reinterpret_cast<int32_t>(fprintf);
        while (v23 < v11) {
            __asm__("cdq ");
            __asm__("cvtsi2sd xmm0, edx");
            __asm__("cvtsi2sd xmm1, dword [rbp-0xc]");
            __asm__("divsd xmm0, xmm1");
            *rdi18 = *rsi19;
            ++rdi18;
            ++rsi19;
            ++v23;
        }
        ++v22;
    }
    v24 = reinterpret_cast<int32_t>(fprintf);
    while (v24 < v11) {
        v25 = reinterpret_cast<int32_t>(fprintf);
        while (v25 < v10) {
            __asm__("cdq ");
            __asm__("cvtsi2sd xmm0, edx");
            __asm__("cvtsi2sd xmm1, dword [rbp-0x8]");
            __asm__("divsd xmm0, xmm1");
            *rdi18 = *rsi19;
            ++rdi18;
            ++rsi19;
            ++v25;
        }
        ++v24;
    }
    return;
}

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

void kernel_gemm(struct s8* rdi, struct s9* rsi, int32_t edx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8) {
    int32_t v9;
    int32_t v10;
    int32_t v11;
    struct s10* rdi12;
    struct s11* rsi13;
    struct s12* rdi14;
    struct s13* rsi15;
    int32_t v16;
    int32_t v17;
    struct s14* rdi18;
    struct s15* rsi19;
    int32_t v20;
    int32_t v21;
    struct s14* rdi22;
    struct s15* rsi23;
    struct s12* rdi24;
    struct s13* rsi25;
    struct s14* rdi26;
    struct s15* rsi27;

    v9 = *reinterpret_cast<int32_t*>(&rdi);
    v10 = *reinterpret_cast<int32_t*>(&rsi);
    v11 = edx;
    rdi->f0 = rsi->f0;
    rdi12 = reinterpret_cast<struct s10*>(&rdi->f4);
    rsi13 = reinterpret_cast<struct s11*>(&rsi->f4);
    rdi12->f0 = rsi13->f0;
    rdi14 = reinterpret_cast<struct s12*>(&rdi12->f4);
    rsi15 = reinterpret_cast<struct s13*>(&rsi13->f4);
    v16 = reinterpret_cast<int32_t>(fprintf);
    while (v16 < v9) {
        v17 = reinterpret_cast<int32_t>(fprintf);
        while (v17 < v10) {
            rdi14->f0 = rsi15->f0;
            rdi18 = reinterpret_cast<struct s14*>(&rdi14->f4);
            rsi19 = reinterpret_cast<struct s15*>(&rsi15->f4);
            __asm__("mulsd xmm0, [rax+rcx*8]");
            rdi18->f0 = rsi19->f0;
            rdi14 = reinterpret_cast<struct s12*>(&rdi18->f4);
            rsi15 = reinterpret_cast<struct s13*>(&rsi19->f4);
            ++v17;
        }
        v20 = reinterpret_cast<int32_t>(fprintf);
        while (v20 < v11) {
            v21 = reinterpret_cast<int32_t>(fprintf);
            while (v21 < v10) {
                rdi14->f0 = rsi15->f0;
                rdi22 = reinterpret_cast<struct s14*>(&rdi14->f4);
                rsi23 = reinterpret_cast<struct s15*>(&rsi15->f4);
                __asm__("mulsd xmm0, [rax+rcx*8]");
                rdi22->f0 = rsi23->f0;
                rdi24 = reinterpret_cast<struct s12*>(&rdi22->f4);
                rsi25 = reinterpret_cast<struct s13*>(&rsi23->f4);
                rdi24->f0 = rsi25->f0;
                rdi26 = reinterpret_cast<struct s14*>(&rdi24->f4);
                rsi27 = reinterpret_cast<struct s15*>(&rsi25->f4);
                __asm__("mulsd xmm0, xmm2");
                __asm__("addsd xmm0, xmm1");
                rdi26->f0 = rsi27->f0;
                rdi14 = reinterpret_cast<struct s12*>(&rdi26->f4);
                rsi15 = reinterpret_cast<struct s13*>(&rsi27->f4);
                ++v21;
            }
            ++v20;
        }
        ++v16;
    }
    return;
}

void print_array(int32_t edi, int32_t esi, int64_t rdx);

void fun_ea(int64_t rdi, int64_t rsi, int64_t rdx);

void fun_f3(int64_t rdi, int64_t rsi, int64_t rdx);

void fun_fc(int64_t rdi, int64_t rsi, int64_t rdx);

void fun_c9(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8) {
    int32_t eax9;
    int32_t edi10;
    int64_t rbp11;
    int64_t rbp12;
    int64_t rbp13;
    int64_t rdi14;
    int64_t rbp15;
    int64_t rdi16;
    int64_t rbp17;
    int64_t rdi18;
    int64_t rbp19;
    int64_t v20;

    if (reinterpret_cast<int1_t>(eax9 == fprintf)) {
        edi10 = *reinterpret_cast<int32_t*>(rbp11 - 20);
        *reinterpret_cast<int32_t*>(&rsi) = *reinterpret_cast<int32_t*>(rbp12 - 24);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi) + 4) = reinterpret_cast<int32_t>(fprintf);
        rdx = *reinterpret_cast<int64_t*>(rbp13 - 56);
        print_array(edi10, *reinterpret_cast<int32_t*>(&rsi), rdx);
    }
    rdi14 = *reinterpret_cast<int64_t*>(rbp15 - 56);
    fun_ea(rdi14, rsi, rdx);
    rdi16 = *reinterpret_cast<int64_t*>(rbp17 - 64);
    fun_f3(rdi16, rsi, rdx);
    rdi18 = *reinterpret_cast<int64_t*>(rbp19 - 72);
    fun_fc(rdi18, rsi, rdx);
    goto v20;
}

int64_t* g429 = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_43a(int64_t rdi, int64_t rsi);

int64_t* g441 = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_459(int64_t rdi);

int64_t* g4a1 = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_4b2(int64_t rdi);

int32_t** g4b9 = reinterpret_cast<int32_t**>(0x48f0458b48388b48);

void fun_4e5(int64_t rdi);

int64_t* g50d = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_525(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx);

int64_t* g52c = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_53d(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx);

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
    rax6 = g429;
    rdi7 = *rax6;
    fun_43a(rdi7, 0x433);
    rax8 = g441;
    rdi9 = *rax8;
    rsi10 = reinterpret_cast<int32_t*>(0x44b);
    fun_459(rdi9);
    v11 = reinterpret_cast<int32_t>(fprintf);
    while (v11 < v4) {
        v12 = reinterpret_cast<int32_t>(fprintf);
        while (v12 < v5) {
            __asm__("cdq ");
            if (reinterpret_cast<int1_t>((v11 * v4 + v12) % 20 == fprintf)) {
                rax13 = g4a1;
                rdi14 = *rax13;
                rsi10 = reinterpret_cast<int32_t*>(0x4ab);
                fun_4b2(rdi14);
            }
            rax15 = g4b9;
            rdi16 = *rax15;
            rcx17 = v12;
            *rdi16 = *rsi10;
            rsi10 = reinterpret_cast<int32_t*>(0x4de);
            fun_4e5(rdi16 + 1);
            ++v12;
        }
        ++v11;
    }
    rax18 = g50d;
    rdi19 = *rax18;
    fun_525(rdi19, 0x517, 0x51e, rcx17);
    rax20 = g52c;
    rdi21 = *rax20;
    fun_53d(rdi21, 0x536, 0x51e, rcx17);
    return;
}

void fun_4b2(int64_t rdi) {
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
        rax2 = g4b9;
        rdi3 = *rax2;
        rcx4 = *reinterpret_cast<int32_t*>(rbp5 - 24);
        *rdi3 = *rsi6;
        rsi6 = reinterpret_cast<int32_t*>(0x4de);
        fun_4e5(rdi3 + 1);
        *reinterpret_cast<int32_t*>(rbp7 - 24) = *reinterpret_cast<int32_t*>(rbp8 - 24) + 1;
        while (*reinterpret_cast<int32_t*>(rbp9 - 24) >= *reinterpret_cast<int32_t*>(rbp10 - 8)) {
            *reinterpret_cast<int32_t*>(rbp11 - 20) = *reinterpret_cast<int32_t*>(rbp12 - 20) + 1;
            if (*reinterpret_cast<int32_t*>(rbp13 - 20) >= *reinterpret_cast<int32_t*>(rbp14 - 4)) 
                goto addr_506_10;
            *reinterpret_cast<int32_t*>(rbp15 - 24) = reinterpret_cast<int32_t>(fprintf);
        }
        __asm__("cdq ");
        if (!reinterpret_cast<int1_t>((*reinterpret_cast<int32_t*>(rbp16 - 20) * *reinterpret_cast<int32_t*>(rbp17 - 4) + *reinterpret_cast<int32_t*>(rbp18 - 24)) % 20 == fprintf)) 
            continue;
        rax19 = g4a1;
        rdi20 = *rax19;
        rsi6 = reinterpret_cast<int32_t*>(0x4ab);
        fun_4b2(rdi20);
    }
    addr_506_10:
    rax21 = g50d;
    rdi22 = *rax21;
    fun_525(rdi22, 0x517, 0x51e, rcx4);
    rax23 = g52c;
    rdi24 = *rax23;
    fun_53d(rdi24, 0x536, 0x51e, rcx4);
    goto v25;
}

void fun_4e5(int64_t rdi) {
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
                goto addr_506_6;
            *reinterpret_cast<int32_t*>(rbp10 - 24) = reinterpret_cast<int32_t>(fprintf);
        }
        __asm__("cdq ");
        if (reinterpret_cast<int1_t>((*reinterpret_cast<int32_t*>(rbp11 - 20) * *reinterpret_cast<int32_t*>(rbp12 - 4) + *reinterpret_cast<int32_t*>(rbp13 - 24)) % 20 == fprintf)) {
            rax14 = g4a1;
            rdi15 = *rax14;
            rsi16 = reinterpret_cast<int32_t*>(0x4ab);
            fun_4b2(rdi15);
        }
        rax17 = g4b9;
        rdi18 = *rax17;
        rcx19 = *reinterpret_cast<int32_t*>(rbp20 - 24);
        *rdi18 = *rsi16;
        rsi16 = reinterpret_cast<int32_t*>(0x4de);
        fun_4e5(rdi18 + 1);
    }
    addr_506_6:
    rax21 = g50d;
    rdi22 = *rax21;
    fun_525(rdi22, 0x517, 0x51e, rcx19);
    rax23 = g52c;
    rdi24 = *rax23;
    fun_53d(rdi24, 0x536, 0x51e, rcx19);
    goto v25;
}

void fun_ea(int64_t rdi, int64_t rsi, int64_t rdx) {
    int64_t rdi4;
    int64_t rbp5;
    int64_t rdi6;
    int64_t rbp7;
    int64_t v8;

    rdi4 = *reinterpret_cast<int64_t*>(rbp5 - 64);
    fun_f3(rdi4, rsi, rdx);
    rdi6 = *reinterpret_cast<int64_t*>(rbp7 - 72);
    fun_fc(rdi6, rsi, rdx);
    goto v8;
}

void fun_43a(int64_t rdi, int64_t rsi) {
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

    rax3 = g441;
    rdi4 = *rax3;
    rsi5 = reinterpret_cast<int32_t*>(0x44b);
    fun_459(rdi4);
    *reinterpret_cast<int32_t*>(rbp6 - 20) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp7 - 20) < *reinterpret_cast<int32_t*>(rbp8 - 4)) {
        *reinterpret_cast<int32_t*>(rbp9 - 24) = reinterpret_cast<int32_t>(fprintf);
        while (*reinterpret_cast<int32_t*>(rbp10 - 24) < *reinterpret_cast<int32_t*>(rbp11 - 8)) {
            __asm__("cdq ");
            if (reinterpret_cast<int1_t>((*reinterpret_cast<int32_t*>(rbp12 - 20) * *reinterpret_cast<int32_t*>(rbp13 - 4) + *reinterpret_cast<int32_t*>(rbp14 - 24)) % 20 == fprintf)) {
                rax15 = g4a1;
                rdi16 = *rax15;
                rsi5 = reinterpret_cast<int32_t*>(0x4ab);
                fun_4b2(rdi16);
            }
            rax17 = g4b9;
            rdi18 = *rax17;
            rcx19 = *reinterpret_cast<int32_t*>(rbp20 - 24);
            *rdi18 = *rsi5;
            rsi5 = reinterpret_cast<int32_t*>(0x4de);
            fun_4e5(rdi18 + 1);
            *reinterpret_cast<int32_t*>(rbp21 - 24) = *reinterpret_cast<int32_t*>(rbp22 - 24) + 1;
        }
        *reinterpret_cast<int32_t*>(rbp23 - 20) = *reinterpret_cast<int32_t*>(rbp24 - 20) + 1;
    }
    rax25 = g50d;
    rdi26 = *rax25;
    fun_525(rdi26, 0x517, 0x51e, rcx19);
    rax27 = g52c;
    rdi28 = *rax27;
    fun_53d(rdi28, 0x536, 0x51e, rcx19);
    goto v29;
}

void fun_f3(int64_t rdi, int64_t rsi, int64_t rdx) {
    int64_t rdi4;
    int64_t rbp5;
    int64_t v6;

    rdi4 = *reinterpret_cast<int64_t*>(rbp5 - 72);
    fun_fc(rdi4, rsi, rdx);
    goto v6;
}

void fun_459(int64_t rdi) {
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
                rax11 = g4a1;
                rdi12 = *rax11;
                rsi13 = reinterpret_cast<int32_t*>(0x4ab);
                fun_4b2(rdi12);
            }
            rax14 = g4b9;
            rdi15 = *rax14;
            rcx16 = *reinterpret_cast<int32_t*>(rbp17 - 24);
            *rdi15 = *rsi13;
            rsi13 = reinterpret_cast<int32_t*>(0x4de);
            fun_4e5(rdi15 + 1);
            *reinterpret_cast<int32_t*>(rbp18 - 24) = *reinterpret_cast<int32_t*>(rbp19 - 24) + 1;
        }
        *reinterpret_cast<int32_t*>(rbp20 - 20) = *reinterpret_cast<int32_t*>(rbp21 - 20) + 1;
    }
    rax22 = g50d;
    rdi23 = *rax22;
    fun_525(rdi23, 0x517, 0x51e, rcx16);
    rax24 = g52c;
    rdi25 = *rax24;
    fun_53d(rdi25, 0x536, 0x51e, rcx16);
    goto v26;
}

void fun_fc(int64_t rdi, int64_t rsi, int64_t rdx) {
    int64_t v4;

    goto v4;
}

void fun_525(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t* rax5;
    int64_t rdi6;
    int64_t v7;

    rax5 = g52c;
    rdi6 = *rax5;
    fun_53d(rdi6, 0x536, rdx, rcx);
    goto v7;
}

void fun_53d(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
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

void fun_68(struct s0* rdi, struct s1* rsi, int32_t edx, int64_t rcx) {
    int64_t rbp5;
    int64_t r9_6;
    int64_t r10_7;
    struct s16* rdi8;
    int64_t rbp9;
    struct s17* rsi10;
    int64_t rbp11;
    int64_t rdx12;
    int64_t rbp13;
    struct s18* rdi14;
    struct s19* rsi15;
    int64_t rcx16;
    int64_t rbp17;
    int64_t r8_18;
    int64_t rbp19;
    int64_t r9_20;
    int64_t rbp21;
    int64_t rbp22;
    int64_t rdi23;
    int64_t rbp24;

    __asm__("enter 0x8b4c, 0x55");
    __asm__("ror byte [rax-0x75], 0x45");
    init_array(rdi, rsi, edx, rcx, rbp5 - 48, r9_6, r10_7, 0xd84d8d48);
    *reinterpret_cast<int32_t*>(&rdi8) = *reinterpret_cast<int32_t*>(rbp9 - 20);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi8) + 4) = reinterpret_cast<int32_t>(fprintf);
    *reinterpret_cast<int32_t*>(&rsi10) = *reinterpret_cast<int32_t*>(rbp11 - 24);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi10) + 4) = reinterpret_cast<int32_t>(fprintf);
    *reinterpret_cast<int32_t*>(&rdx12) = *reinterpret_cast<int32_t*>(rbp13 - 28);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx12) + 4) = reinterpret_cast<int32_t>(fprintf);
    rdi8->f0 = rsi10->f0;
    rdi14 = reinterpret_cast<struct s18*>(&rdi8->f4);
    rsi15 = reinterpret_cast<struct s19*>(&rsi10->f4);
    rdi14->f0 = rsi15->f0;
    rcx16 = *reinterpret_cast<int64_t*>(rbp17 - 56);
    r8_18 = *reinterpret_cast<int64_t*>(rbp19 - 64);
    r9_20 = *reinterpret_cast<int64_t*>(rbp21 - 72);
    kernel_gemm(&rdi14->f4, &rsi15->f4, *reinterpret_cast<int32_t*>(&rdx12), rcx16, r8_18, r9_20, r10_7, 0xd84d8d48);
    if (*reinterpret_cast<int32_t*>(rbp22 - 4) <= 42) 
        goto 0xe1;
    rdi23 = **reinterpret_cast<int64_t**>(rbp24 - 16);
    fun_c9(rdi23, 0xc4, rdx12, rcx16, r8_18, r9_20, r10_7, 0xd84d8d48);
}

