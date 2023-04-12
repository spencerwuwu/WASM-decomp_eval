
struct s0 {
    int32_t f0;
    int32_t f4;
};

void fprintf(int32_t edi);

struct s1 {
    int32_t f0;
    int32_t f4;
};

void init_array(struct s0* rdi, struct s1* rsi, int32_t edx, int32_t ecx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10);

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

void kernel_2mm(struct s7* rdi, struct s6* rsi, int32_t edx, int32_t ecx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10);

void fun_142(int64_t rdi, struct s6* rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10);

int32_t fun_121(int64_t rdi, struct s6* rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10);

void fun_14b(int64_t rdi, struct s6* rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10);

void fun_154(int64_t rdi, struct s6* rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10);

void fun_15d(int64_t rdi, struct s6* rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10);

void fun_166(int64_t rdi, struct s6* rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10);

void print_array(int32_t edi, int32_t esi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10);

void fun_87(int64_t rdi, int64_t rsi) {
    int64_t rbp3;
    int64_t rax4;
    struct s0* rdi5;
    int64_t rbp6;
    struct s1* rsi7;
    int64_t rbp8;
    int32_t edx9;
    int64_t rbp10;
    int32_t ecx11;
    int64_t rbp12;
    int64_t r11_13;
    int64_t rbp14;
    int64_t r10_15;
    int64_t rbp16;
    int64_t rax17;
    int64_t rbp18;
    int64_t v19;
    int64_t rbp20;
    int64_t rbp21;
    int64_t rbp22;
    struct s2* rdi23;
    int64_t rbp24;
    struct s3* rsi25;
    int64_t rbp26;
    int64_t rdx27;
    int64_t rbp28;
    int64_t rcx29;
    int64_t rbp30;
    struct s4* rdi31;
    struct s5* rsi32;
    struct s6* rsi33;
    int64_t r8_34;
    int64_t rbp35;
    int64_t r9_36;
    int64_t rbp37;
    int64_t r10_38;
    int64_t rbp39;
    int64_t rax40;
    int64_t rbp41;
    int64_t v42;
    int64_t rbp43;
    int64_t rbp44;
    int64_t rdi45;
    int64_t rbp46;
    int64_t rdi47;
    int64_t rbp48;
    int32_t eax49;
    int64_t rdi50;
    int64_t rbp51;
    int64_t rdi52;
    int64_t rbp53;
    int64_t rdi54;
    int64_t rbp55;
    int64_t rdi56;
    int64_t rbp57;
    int64_t v58;
    int32_t edi59;
    int64_t rbp60;
    int64_t rbp61;
    int64_t rbp62;

    *reinterpret_cast<int64_t*>(rbp3 - 96) = rax4;
    *reinterpret_cast<int32_t*>(&rdi5) = *reinterpret_cast<int32_t*>(rbp6 - 28);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi5) + 4) = reinterpret_cast<int32_t>(fprintf);
    *reinterpret_cast<int32_t*>(&rsi7) = *reinterpret_cast<int32_t*>(rbp8 - 32);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi7) + 4) = reinterpret_cast<int32_t>(fprintf);
    edx9 = *reinterpret_cast<int32_t*>(rbp10 - 36);
    ecx11 = *reinterpret_cast<int32_t*>(rbp12 - 40);
    r11_13 = *reinterpret_cast<int64_t*>(rbp14 - 80);
    r10_15 = *reinterpret_cast<int64_t*>(rbp16 - 88);
    rax17 = *reinterpret_cast<int64_t*>(rbp18 - 96);
    v19 = *reinterpret_cast<int64_t*>(rbp20 - 72);
    init_array(rdi5, rsi7, edx9, ecx11, rbp21 - 48, rbp22 - 56, v19, r11_13, r10_15, rax17);
    *reinterpret_cast<int32_t*>(&rdi23) = *reinterpret_cast<int32_t*>(rbp24 - 28);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi23) + 4) = reinterpret_cast<int32_t>(fprintf);
    *reinterpret_cast<int32_t*>(&rsi25) = *reinterpret_cast<int32_t*>(rbp26 - 32);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi25) + 4) = reinterpret_cast<int32_t>(fprintf);
    *reinterpret_cast<int32_t*>(&rdx27) = *reinterpret_cast<int32_t*>(rbp28 - 36);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx27) + 4) = reinterpret_cast<int32_t>(fprintf);
    *reinterpret_cast<int32_t*>(&rcx29) = *reinterpret_cast<int32_t*>(rbp30 - 40);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx29) + 4) = reinterpret_cast<int32_t>(fprintf);
    rdi23->f0 = rsi25->f0;
    rdi31 = reinterpret_cast<struct s4*>(&rdi23->f4);
    rsi32 = reinterpret_cast<struct s5*>(&rsi25->f4);
    rdi31->f0 = rsi32->f0;
    rsi33 = reinterpret_cast<struct s6*>(&rsi32->f4);
    r8_34 = *reinterpret_cast<int64_t*>(rbp35 - 64);
    r9_36 = *reinterpret_cast<int64_t*>(rbp37 - 72);
    r10_38 = *reinterpret_cast<int64_t*>(rbp39 - 88);
    rax40 = *reinterpret_cast<int64_t*>(rbp41 - 96);
    v42 = *reinterpret_cast<int64_t*>(rbp43 - 80);
    kernel_2mm(&rdi31->f4, rsi33, *reinterpret_cast<int32_t*>(&rdx27), *reinterpret_cast<int32_t*>(&rcx29), r8_34, r9_36, v42, r10_38, rax40, rax17);
    if (*reinterpret_cast<int32_t*>(rbp44 - 12) <= 42) {
        addr_139_8:
        rdi45 = *reinterpret_cast<int64_t*>(rbp46 - 64);
        fun_142(rdi45, rsi33, rdx27, rcx29, r8_34, r9_36, v42, r10_38, rax40, rax17);
    } else {
        rdi47 = **reinterpret_cast<int64_t**>(rbp48 - 24);
        rsi33 = reinterpret_cast<struct s6*>(0x11c);
        eax49 = fun_121(rdi47, 0x11c, rdx27, rcx29, r8_34, r9_36, v42, r10_38, rax40, rax17);
        if (!reinterpret_cast<int1_t>(eax49 == fprintf)) 
            goto addr_139_8; else 
            goto addr_12a_11;
    }
    rdi50 = *reinterpret_cast<int64_t*>(rbp51 - 72);
    fun_14b(rdi50, rsi33, rdx27, rcx29, r8_34, r9_36, v42, r10_38, rax40, rax17);
    rdi52 = *reinterpret_cast<int64_t*>(rbp53 - 80);
    fun_154(rdi52, rsi33, rdx27, rcx29, r8_34, r9_36, v42, r10_38, rax40, rax17);
    rdi54 = *reinterpret_cast<int64_t*>(rbp55 - 88);
    fun_15d(rdi54, rsi33, rdx27, rcx29, r8_34, r9_36, v42, r10_38, rax40, rax17);
    rdi56 = *reinterpret_cast<int64_t*>(rbp57 - 96);
    fun_166(rdi56, rsi33, rdx27, rcx29, r8_34, r9_36, v42, r10_38, rax40, rax17);
    goto v58;
    addr_12a_11:
    edi59 = *reinterpret_cast<int32_t*>(rbp60 - 28);
    *reinterpret_cast<int32_t*>(&rsi33) = *reinterpret_cast<int32_t*>(rbp61 - 40);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi33) + 4) = reinterpret_cast<int32_t>(fprintf);
    rdx27 = *reinterpret_cast<int64_t*>(rbp62 - 96);
    print_array(edi59, *reinterpret_cast<int32_t*>(&rsi33), rdx27, rcx29, r8_34, r9_36, v42, r10_38, rax40, rax17);
    goto addr_139_8;
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

void kernel_2mm(struct s7* rdi, struct s6* rsi, int32_t edx, int32_t ecx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10) {
    int32_t v11;
    int32_t v12;
    int32_t v13;
    int32_t v14;
    struct s8* rdi15;
    struct s9* rsi16;
    struct s10* rdi17;
    struct s11* rsi18;
    int32_t v19;
    int32_t v20;
    int32_t v21;
    struct s12* rdi22;
    struct s13* rsi23;
    struct s10* rdi24;
    struct s11* rsi25;
    struct s12* rdi26;
    struct s13* rsi27;
    int32_t v28;
    int32_t v29;
    struct s12* rdi30;
    struct s13* rsi31;
    int32_t v32;
    struct s12* rdi33;
    struct s13* rsi34;
    struct s10* rdi35;
    struct s11* rsi36;
    struct s12* rdi37;
    struct s13* rsi38;

    v11 = *reinterpret_cast<int32_t*>(&rdi);
    v12 = *reinterpret_cast<int32_t*>(&rsi);
    v13 = edx;
    v14 = ecx;
    rdi->f0 = rsi->f0;
    rdi15 = reinterpret_cast<struct s8*>(&rdi->f4);
    rsi16 = reinterpret_cast<struct s9*>(&rsi->f4);
    rdi15->f0 = rsi16->f0;
    rdi17 = reinterpret_cast<struct s10*>(&rdi15->f4);
    rsi18 = reinterpret_cast<struct s11*>(&rsi16->f4);
    v19 = reinterpret_cast<int32_t>(fprintf);
    while (v19 < v11) {
        v20 = reinterpret_cast<int32_t>(fprintf);
        while (v20 < v12) {
            __asm__("xorps xmm0, xmm0");
            rdi17->f0 = rsi18->f0;
            rdi17 = reinterpret_cast<struct s10*>(&rdi17->f4);
            rsi18 = reinterpret_cast<struct s11*>(&rsi18->f4);
            v21 = reinterpret_cast<int32_t>(fprintf);
            while (v21 < v13) {
                rdi17->f0 = rsi18->f0;
                rdi22 = reinterpret_cast<struct s12*>(&rdi17->f4);
                rsi23 = reinterpret_cast<struct s13*>(&rsi18->f4);
                __asm__("mulsd xmm0, [rax+rcx*8]");
                rdi22->f0 = rsi23->f0;
                rdi24 = reinterpret_cast<struct s10*>(&rdi22->f4);
                rsi25 = reinterpret_cast<struct s11*>(&rsi23->f4);
                rdi24->f0 = rsi25->f0;
                rdi26 = reinterpret_cast<struct s12*>(&rdi24->f4);
                rsi27 = reinterpret_cast<struct s13*>(&rsi25->f4);
                __asm__("mulsd xmm0, xmm2");
                __asm__("addsd xmm0, xmm1");
                rdi26->f0 = rsi27->f0;
                rdi17 = reinterpret_cast<struct s10*>(&rdi26->f4);
                rsi18 = reinterpret_cast<struct s11*>(&rsi27->f4);
                ++v21;
            }
            ++v20;
        }
        ++v19;
    }
    v28 = reinterpret_cast<int32_t>(fprintf);
    while (v28 < v11) {
        v29 = reinterpret_cast<int32_t>(fprintf);
        while (v29 < v14) {
            rdi17->f0 = rsi18->f0;
            rdi30 = reinterpret_cast<struct s12*>(&rdi17->f4);
            rsi31 = reinterpret_cast<struct s13*>(&rsi18->f4);
            __asm__("mulsd xmm0, [rax+rcx*8]");
            rdi30->f0 = rsi31->f0;
            rdi17 = reinterpret_cast<struct s10*>(&rdi30->f4);
            rsi18 = reinterpret_cast<struct s11*>(&rsi31->f4);
            v32 = reinterpret_cast<int32_t>(fprintf);
            while (v32 < v12) {
                rdi17->f0 = rsi18->f0;
                rdi33 = reinterpret_cast<struct s12*>(&rdi17->f4);
                rsi34 = reinterpret_cast<struct s13*>(&rsi18->f4);
                rdi33->f0 = rsi34->f0;
                rdi35 = reinterpret_cast<struct s10*>(&rdi33->f4);
                rsi36 = reinterpret_cast<struct s11*>(&rsi34->f4);
                rdi35->f0 = rsi36->f0;
                rdi37 = reinterpret_cast<struct s12*>(&rdi35->f4);
                rsi38 = reinterpret_cast<struct s13*>(&rsi36->f4);
                __asm__("mulsd xmm0, xmm2");
                __asm__("addsd xmm0, xmm1");
                rdi37->f0 = rsi38->f0;
                rdi17 = reinterpret_cast<struct s10*>(&rdi37->f4);
                rsi18 = reinterpret_cast<struct s11*>(&rsi38->f4);
                ++v32;
            }
            ++v29;
        }
        ++v28;
    }
    return;
}

int32_t fun_121(int64_t rdi, struct s6* rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10) {
    int32_t eax11;
    int32_t edi12;
    int64_t rbp13;
    int64_t rbp14;
    int64_t rbp15;
    int64_t rdi16;
    int64_t rbp17;
    int64_t rdi18;
    int64_t rbp19;
    int64_t rdi20;
    int64_t rbp21;
    int64_t rdi22;
    int64_t rbp23;
    int64_t rdi24;
    int64_t rbp25;
    int64_t v26;

    if (reinterpret_cast<int1_t>(eax11 == fprintf)) {
        edi12 = *reinterpret_cast<int32_t*>(rbp13 - 28);
        *reinterpret_cast<int32_t*>(&rsi) = *reinterpret_cast<int32_t*>(rbp14 - 40);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi) + 4) = reinterpret_cast<int32_t>(fprintf);
        rdx = *reinterpret_cast<int64_t*>(rbp15 - 96);
        print_array(edi12, *reinterpret_cast<int32_t*>(&rsi), rdx, rcx, r8, r9, __return_address(), a7, a8, a9);
    }
    rdi16 = *reinterpret_cast<int64_t*>(rbp17 - 64);
    fun_142(rdi16, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9);
    rdi18 = *reinterpret_cast<int64_t*>(rbp19 - 72);
    fun_14b(rdi18, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9);
    rdi20 = *reinterpret_cast<int64_t*>(rbp21 - 80);
    fun_154(rdi20, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9);
    rdi22 = *reinterpret_cast<int64_t*>(rbp23 - 88);
    fun_15d(rdi22, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9);
    rdi24 = *reinterpret_cast<int64_t*>(rbp25 - 96);
    fun_166(rdi24, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9);
    goto v26;
}

int64_t* g5e9 = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_5fa(int64_t rdi, int64_t rsi);

int64_t* g601 = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_619(int64_t rdi);

int64_t* g661 = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_672(int64_t rdi);

int32_t** g679 = reinterpret_cast<int32_t**>(0x48f0458b48388b48);

void fun_6a5(int64_t rdi);

int64_t* g6cd = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_6e5(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx);

int64_t* g6ec = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_6fd(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx);

void print_array(int32_t edi, int32_t esi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10) {
    int32_t v11;
    int32_t v12;
    int64_t* rax13;
    int64_t rdi14;
    int64_t* rax15;
    int64_t rdi16;
    int32_t* rsi17;
    int32_t v18;
    int32_t v19;
    int64_t* rax20;
    int64_t rdi21;
    int32_t** rax22;
    int32_t* rdi23;
    int64_t* rax24;
    int64_t rdi25;
    int64_t* rax26;
    int64_t rdi27;

    v11 = edi;
    v12 = esi;
    rax13 = g5e9;
    rdi14 = *rax13;
    fun_5fa(rdi14, 0x5f3);
    rax15 = g601;
    rdi16 = *rax15;
    rsi17 = reinterpret_cast<int32_t*>(0x60b);
    fun_619(rdi16);
    v18 = reinterpret_cast<int32_t>(fprintf);
    while (v18 < v11) {
        v19 = reinterpret_cast<int32_t>(fprintf);
        while (v19 < v12) {
            __asm__("cdq ");
            if (reinterpret_cast<int1_t>((v18 * v11 + v19) % 20 == fprintf)) {
                rax20 = g661;
                rdi21 = *rax20;
                rsi17 = reinterpret_cast<int32_t*>(0x66b);
                fun_672(rdi21);
            }
            rax22 = g679;
            rdi23 = *rax22;
            rcx = v19;
            *rdi23 = *rsi17;
            rsi17 = reinterpret_cast<int32_t*>(0x69e);
            fun_6a5(rdi23 + 1);
            ++v19;
        }
        ++v18;
    }
    rax24 = g6cd;
    rdi25 = *rax24;
    fun_6e5(rdi25, 0x6d7, 0x6de, rcx);
    rax26 = g6ec;
    rdi27 = *rax26;
    fun_6fd(rdi27, 0x6f6, 0x6de, rcx);
    return;
}

void fun_672(int64_t rdi) {
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
        rax2 = g679;
        rdi3 = *rax2;
        rcx4 = *reinterpret_cast<int32_t*>(rbp5 - 24);
        *rdi3 = *rsi6;
        rsi6 = reinterpret_cast<int32_t*>(0x69e);
        fun_6a5(rdi3 + 1);
        *reinterpret_cast<int32_t*>(rbp7 - 24) = *reinterpret_cast<int32_t*>(rbp8 - 24) + 1;
        while (*reinterpret_cast<int32_t*>(rbp9 - 24) >= *reinterpret_cast<int32_t*>(rbp10 - 8)) {
            *reinterpret_cast<int32_t*>(rbp11 - 20) = *reinterpret_cast<int32_t*>(rbp12 - 20) + 1;
            if (*reinterpret_cast<int32_t*>(rbp13 - 20) >= *reinterpret_cast<int32_t*>(rbp14 - 4)) 
                goto addr_6c6_10;
            *reinterpret_cast<int32_t*>(rbp15 - 24) = reinterpret_cast<int32_t>(fprintf);
        }
        __asm__("cdq ");
        if (!reinterpret_cast<int1_t>((*reinterpret_cast<int32_t*>(rbp16 - 20) * *reinterpret_cast<int32_t*>(rbp17 - 4) + *reinterpret_cast<int32_t*>(rbp18 - 24)) % 20 == fprintf)) 
            continue;
        rax19 = g661;
        rdi20 = *rax19;
        rsi6 = reinterpret_cast<int32_t*>(0x66b);
        fun_672(rdi20);
    }
    addr_6c6_10:
    rax21 = g6cd;
    rdi22 = *rax21;
    fun_6e5(rdi22, 0x6d7, 0x6de, rcx4);
    rax23 = g6ec;
    rdi24 = *rax23;
    fun_6fd(rdi24, 0x6f6, 0x6de, rcx4);
    goto v25;
}

void fun_6a5(int64_t rdi) {
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
                goto addr_6c6_6;
            *reinterpret_cast<int32_t*>(rbp10 - 24) = reinterpret_cast<int32_t>(fprintf);
        }
        __asm__("cdq ");
        if (reinterpret_cast<int1_t>((*reinterpret_cast<int32_t*>(rbp11 - 20) * *reinterpret_cast<int32_t*>(rbp12 - 4) + *reinterpret_cast<int32_t*>(rbp13 - 24)) % 20 == fprintf)) {
            rax14 = g661;
            rdi15 = *rax14;
            rsi16 = reinterpret_cast<int32_t*>(0x66b);
            fun_672(rdi15);
        }
        rax17 = g679;
        rdi18 = *rax17;
        rcx19 = *reinterpret_cast<int32_t*>(rbp20 - 24);
        *rdi18 = *rsi16;
        rsi16 = reinterpret_cast<int32_t*>(0x69e);
        fun_6a5(rdi18 + 1);
    }
    addr_6c6_6:
    rax21 = g6cd;
    rdi22 = *rax21;
    fun_6e5(rdi22, 0x6d7, 0x6de, rcx19);
    rax23 = g6ec;
    rdi24 = *rax23;
    fun_6fd(rdi24, 0x6f6, 0x6de, rcx19);
    goto v25;
}

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

void init_array(struct s0* rdi, struct s1* rsi, int32_t edx, int32_t ecx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10) {
    int32_t v11;
    int32_t v12;
    int32_t v13;
    int32_t v14;
    struct s14* rdi15;
    struct s15* rsi16;
    struct s16* rdi17;
    struct s17* rsi18;
    struct s18* rdi19;
    struct s19* rsi20;
    int32_t* rdi21;
    int32_t* rsi22;
    int32_t v23;
    int32_t v24;
    int32_t v25;
    int32_t v26;
    int32_t v27;
    int32_t v28;
    int32_t v29;
    int32_t v30;

    v11 = *reinterpret_cast<int32_t*>(&rdi);
    v12 = *reinterpret_cast<int32_t*>(&rsi);
    v13 = edx;
    v14 = ecx;
    rdi->f0 = rsi->f0;
    rdi15 = reinterpret_cast<struct s14*>(&rdi->f4);
    rsi16 = reinterpret_cast<struct s15*>(&rsi->f4);
    rdi15->f0 = rsi16->f0;
    rdi17 = reinterpret_cast<struct s16*>(&rdi15->f4);
    rsi18 = reinterpret_cast<struct s17*>(&rsi16->f4);
    rdi17->f0 = rsi18->f0;
    rdi19 = reinterpret_cast<struct s18*>(&rdi17->f4);
    rsi20 = reinterpret_cast<struct s19*>(&rsi18->f4);
    rdi19->f0 = rsi20->f0;
    rdi21 = &rdi19->f4;
    rsi22 = &rsi20->f4;
    v23 = reinterpret_cast<int32_t>(fprintf);
    while (v23 < v11) {
        v24 = reinterpret_cast<int32_t>(fprintf);
        while (v24 < v13) {
            __asm__("cdq ");
            __asm__("cvtsi2sd xmm0, edx");
            __asm__("cvtsi2sd xmm1, dword [rbp-0x4]");
            __asm__("divsd xmm0, xmm1");
            *rdi21 = *rsi22;
            ++rdi21;
            ++rsi22;
            ++v24;
        }
        ++v23;
    }
    v25 = reinterpret_cast<int32_t>(fprintf);
    while (v25 < v13) {
        v26 = reinterpret_cast<int32_t>(fprintf);
        while (v26 < v12) {
            __asm__("cdq ");
            __asm__("cvtsi2sd xmm0, edx");
            __asm__("cvtsi2sd xmm1, dword [rbp-0x8]");
            __asm__("divsd xmm0, xmm1");
            *rdi21 = *rsi22;
            ++rdi21;
            ++rsi22;
            ++v26;
        }
        ++v25;
    }
    v27 = reinterpret_cast<int32_t>(fprintf);
    while (v27 < v12) {
        v28 = reinterpret_cast<int32_t>(fprintf);
        while (v28 < v14) {
            __asm__("cdq ");
            __asm__("cvtsi2sd xmm0, edx");
            __asm__("cvtsi2sd xmm1, dword [rbp-0x10]");
            __asm__("divsd xmm0, xmm1");
            *rdi21 = *rsi22;
            ++rdi21;
            ++rsi22;
            ++v28;
        }
        ++v27;
    }
    v29 = reinterpret_cast<int32_t>(fprintf);
    while (v29 < v11) {
        v30 = reinterpret_cast<int32_t>(fprintf);
        while (v30 < v14) {
            __asm__("cdq ");
            __asm__("cvtsi2sd xmm0, edx");
            __asm__("cvtsi2sd xmm1, dword [rbp-0xc]");
            __asm__("divsd xmm0, xmm1");
            *rdi21 = *rsi22;
            ++rdi21;
            ++rsi22;
            ++v30;
        }
        ++v29;
    }
    return;
}

void fun_142(int64_t rdi, struct s6* rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10) {
    int64_t rdi11;
    int64_t rbp12;
    int64_t rdi13;
    int64_t rbp14;
    int64_t rdi15;
    int64_t rbp16;
    int64_t rdi17;
    int64_t rbp18;
    int64_t v19;

    rdi11 = *reinterpret_cast<int64_t*>(rbp12 - 72);
    fun_14b(rdi11, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9);
    rdi13 = *reinterpret_cast<int64_t*>(rbp14 - 80);
    fun_154(rdi13, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9);
    rdi15 = *reinterpret_cast<int64_t*>(rbp16 - 88);
    fun_15d(rdi15, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9);
    rdi17 = *reinterpret_cast<int64_t*>(rbp18 - 96);
    fun_166(rdi17, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9);
    goto v19;
}

void fun_5fa(int64_t rdi, int64_t rsi) {
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

    rax3 = g601;
    rdi4 = *rax3;
    rsi5 = reinterpret_cast<int32_t*>(0x60b);
    fun_619(rdi4);
    *reinterpret_cast<int32_t*>(rbp6 - 20) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp7 - 20) < *reinterpret_cast<int32_t*>(rbp8 - 4)) {
        *reinterpret_cast<int32_t*>(rbp9 - 24) = reinterpret_cast<int32_t>(fprintf);
        while (*reinterpret_cast<int32_t*>(rbp10 - 24) < *reinterpret_cast<int32_t*>(rbp11 - 8)) {
            __asm__("cdq ");
            if (reinterpret_cast<int1_t>((*reinterpret_cast<int32_t*>(rbp12 - 20) * *reinterpret_cast<int32_t*>(rbp13 - 4) + *reinterpret_cast<int32_t*>(rbp14 - 24)) % 20 == fprintf)) {
                rax15 = g661;
                rdi16 = *rax15;
                rsi5 = reinterpret_cast<int32_t*>(0x66b);
                fun_672(rdi16);
            }
            rax17 = g679;
            rdi18 = *rax17;
            rcx19 = *reinterpret_cast<int32_t*>(rbp20 - 24);
            *rdi18 = *rsi5;
            rsi5 = reinterpret_cast<int32_t*>(0x69e);
            fun_6a5(rdi18 + 1);
            *reinterpret_cast<int32_t*>(rbp21 - 24) = *reinterpret_cast<int32_t*>(rbp22 - 24) + 1;
        }
        *reinterpret_cast<int32_t*>(rbp23 - 20) = *reinterpret_cast<int32_t*>(rbp24 - 20) + 1;
    }
    rax25 = g6cd;
    rdi26 = *rax25;
    fun_6e5(rdi26, 0x6d7, 0x6de, rcx19);
    rax27 = g6ec;
    rdi28 = *rax27;
    fun_6fd(rdi28, 0x6f6, 0x6de, rcx19);
    goto v29;
}

void fun_14b(int64_t rdi, struct s6* rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10) {
    int64_t rdi11;
    int64_t rbp12;
    int64_t rdi13;
    int64_t rbp14;
    int64_t rdi15;
    int64_t rbp16;
    int64_t v17;

    rdi11 = *reinterpret_cast<int64_t*>(rbp12 - 80);
    fun_154(rdi11, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9);
    rdi13 = *reinterpret_cast<int64_t*>(rbp14 - 88);
    fun_15d(rdi13, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9);
    rdi15 = *reinterpret_cast<int64_t*>(rbp16 - 96);
    fun_166(rdi15, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9);
    goto v17;
}

void fun_619(int64_t rdi) {
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
                rax11 = g661;
                rdi12 = *rax11;
                rsi13 = reinterpret_cast<int32_t*>(0x66b);
                fun_672(rdi12);
            }
            rax14 = g679;
            rdi15 = *rax14;
            rcx16 = *reinterpret_cast<int32_t*>(rbp17 - 24);
            *rdi15 = *rsi13;
            rsi13 = reinterpret_cast<int32_t*>(0x69e);
            fun_6a5(rdi15 + 1);
            *reinterpret_cast<int32_t*>(rbp18 - 24) = *reinterpret_cast<int32_t*>(rbp19 - 24) + 1;
        }
        *reinterpret_cast<int32_t*>(rbp20 - 20) = *reinterpret_cast<int32_t*>(rbp21 - 20) + 1;
    }
    rax22 = g6cd;
    rdi23 = *rax22;
    fun_6e5(rdi23, 0x6d7, 0x6de, rcx16);
    rax24 = g6ec;
    rdi25 = *rax24;
    fun_6fd(rdi25, 0x6f6, 0x6de, rcx16);
    goto v26;
}

void fun_154(int64_t rdi, struct s6* rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10) {
    int64_t rdi11;
    int64_t rbp12;
    int64_t rdi13;
    int64_t rbp14;
    int64_t v15;

    rdi11 = *reinterpret_cast<int64_t*>(rbp12 - 88);
    fun_15d(rdi11, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9);
    rdi13 = *reinterpret_cast<int64_t*>(rbp14 - 96);
    fun_166(rdi13, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9);
    goto v15;
}

void fun_6e5(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t* rax5;
    int64_t rdi6;
    int64_t v7;

    rax5 = g6ec;
    rdi6 = *rax5;
    fun_6fd(rdi6, 0x6f6, rdx, rcx);
    goto v7;
}

void fun_15d(int64_t rdi, struct s6* rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10) {
    int64_t rdi11;
    int64_t rbp12;
    int64_t v13;

    rdi11 = *reinterpret_cast<int64_t*>(rbp12 - 96);
    fun_166(rdi11, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9);
    goto v13;
}

void fun_6fd(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t v5;

    goto v5;
}

void fun_166(int64_t rdi, struct s6* rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10) {
    int64_t v11;

    goto v11;
}

void fprintf(int32_t edi) {
}

void fun_74() {
    int64_t rbp1;
    int64_t rax2;

    *reinterpret_cast<int64_t*>(rbp1 - 88) = rax2;
    fun_87(0xea600, 8);
}

