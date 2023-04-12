
struct s0 {
    int32_t f0;
    int32_t f4;
};

struct s1 {
    int32_t f0;
    int32_t f4;
};

void fprintf();

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

void init_array(int32_t edi, int32_t esi, int32_t edx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7) {
    struct s0* rdi1;
    struct s1* rsi2;
    int32_t v8;
    int32_t v9;
    int32_t v10;
    int32_t v11;
    int32_t v12;
    int32_t v13;
    struct s2* rdi14;
    struct s3* rsi15;
    struct s4* rdi16;
    struct s5* rsi17;

    *reinterpret_cast<int32_t*>(&rdi1) = edi;
    *reinterpret_cast<int32_t*>(&rsi2) = esi;
    v8 = *reinterpret_cast<int32_t*>(&rdi1);
    v9 = *reinterpret_cast<int32_t*>(&rsi2);
    v10 = edx;
    v11 = reinterpret_cast<int32_t>(fprintf);
    while (v11 < v8) {
        __asm__("cvtsi2sd xmm0, dword [rbp-0x2c]");
        rdi1->f0 = rsi2->f0;
        rdi1 = reinterpret_cast<struct s0*>(&rdi1->f4);
        rsi2 = reinterpret_cast<struct s1*>(&rsi2->f4);
        ++v11;
    }
    v12 = reinterpret_cast<int32_t>(fprintf);
    while (v12 < v9) {
        v13 = reinterpret_cast<int32_t>(fprintf);
        while (v13 < v10) {
            __asm__("cvtsi2sd xmm0, dword [rbp-0x2c]");
            __asm__("cvtsi2sd xmm1, eax");
            __asm__("mulsd xmm0, xmm1");
            __asm__("cvtsi2sd xmm1, dword [rbp-0x8]");
            __asm__("divsd xmm0, xmm1");
            rdi1->f0 = rsi2->f0;
            rdi14 = reinterpret_cast<struct s2*>(&rdi1->f4);
            rsi15 = reinterpret_cast<struct s3*>(&rsi2->f4);
            __asm__("cvtsi2sd xmm0, dword [rbp-0x2c]");
            __asm__("cvtsi2sd xmm1, eax");
            __asm__("mulsd xmm0, xmm1");
            __asm__("cvtsi2sd xmm1, dword [rbp-0xc]");
            __asm__("divsd xmm0, xmm1");
            rdi14->f0 = rsi15->f0;
            rdi16 = reinterpret_cast<struct s4*>(&rdi14->f4);
            rsi17 = reinterpret_cast<struct s5*>(&rsi15->f4);
            __asm__("cvtsi2sd xmm0, dword [rbp-0x2c]");
            __asm__("cvtsi2sd xmm1, eax");
            __asm__("mulsd xmm0, xmm1");
            __asm__("cvtsi2sd xmm1, dword [rbp-0x8]");
            __asm__("divsd xmm0, xmm1");
            rdi16->f0 = rsi17->f0;
            rdi1 = reinterpret_cast<struct s0*>(&rdi16->f4);
            rsi2 = reinterpret_cast<struct s1*>(&rsi17->f4);
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

void kernel_fdtd_2d(int32_t edi, int32_t esi, int32_t edx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7) {
    struct s6* rdi1;
    struct s7* rsi2;
    int32_t v8;
    int32_t v9;
    int32_t v10;
    int32_t v11;
    int32_t v12;
    struct s8* rdi13;
    struct s9* rsi14;
    int32_t v15;
    int32_t v16;
    struct s8* rdi17;
    struct s9* rsi18;
    struct s6* rdi19;
    struct s7* rsi20;
    struct s8* rdi21;
    struct s9* rsi22;
    int32_t v23;
    int32_t v24;
    struct s8* rdi25;
    struct s9* rsi26;
    struct s6* rdi27;
    struct s7* rsi28;
    struct s8* rdi29;
    struct s9* rsi30;
    int32_t v31;
    int32_t v32;
    struct s8* rdi33;
    struct s9* rsi34;
    struct s6* rdi35;
    struct s7* rsi36;
    struct s8* rdi37;
    struct s9* rsi38;

    *reinterpret_cast<int32_t*>(&rdi1) = edi;
    *reinterpret_cast<int32_t*>(&rsi2) = esi;
    v8 = *reinterpret_cast<int32_t*>(&rdi1);
    v9 = *reinterpret_cast<int32_t*>(&rsi2);
    v10 = edx;
    v11 = reinterpret_cast<int32_t>(fprintf);
    while (v11 < v8) {
        v12 = reinterpret_cast<int32_t>(fprintf);
        while (v12 < v10) {
            rdi1->f0 = rsi2->f0;
            rdi13 = reinterpret_cast<struct s8*>(&rdi1->f4);
            rsi14 = reinterpret_cast<struct s9*>(&rsi2->f4);
            rdi13->f0 = rsi14->f0;
            rdi1 = reinterpret_cast<struct s6*>(&rdi13->f4);
            rsi2 = reinterpret_cast<struct s7*>(&rsi14->f4);
            ++v12;
        }
        v15 = 1;
        while (v15 < v9) {
            v16 = reinterpret_cast<int32_t>(fprintf);
            while (v16 < v10) {
                rdi1->f0 = rsi2->f0;
                rdi17 = reinterpret_cast<struct s8*>(&rdi1->f4);
                rsi18 = reinterpret_cast<struct s9*>(&rsi2->f4);
                rdi17->f0 = rsi18->f0;
                rdi19 = reinterpret_cast<struct s6*>(&rdi17->f4);
                rsi20 = reinterpret_cast<struct s7*>(&rsi18->f4);
                __asm__("subsd xmm0, [rax+rcx*8]");
                rdi19->f0 = rsi20->f0;
                rdi21 = reinterpret_cast<struct s8*>(&rdi19->f4);
                rsi22 = reinterpret_cast<struct s9*>(&rsi20->f4);
                __asm__("mulsd xmm0, xmm2");
                __asm__("addsd xmm0, xmm1");
                rdi21->f0 = rsi22->f0;
                rdi1 = reinterpret_cast<struct s6*>(&rdi21->f4);
                rsi2 = reinterpret_cast<struct s7*>(&rsi22->f4);
                ++v16;
            }
            ++v15;
        }
        v23 = reinterpret_cast<int32_t>(fprintf);
        while (v23 < v9) {
            v24 = 1;
            while (v24 < v10) {
                rdi1->f0 = rsi2->f0;
                rdi25 = reinterpret_cast<struct s8*>(&rdi1->f4);
                rsi26 = reinterpret_cast<struct s9*>(&rsi2->f4);
                rdi25->f0 = rsi26->f0;
                rdi27 = reinterpret_cast<struct s6*>(&rdi25->f4);
                rsi28 = reinterpret_cast<struct s7*>(&rsi26->f4);
                __asm__("subsd xmm0, [rax+rcx*8]");
                rdi27->f0 = rsi28->f0;
                rdi29 = reinterpret_cast<struct s8*>(&rdi27->f4);
                rsi30 = reinterpret_cast<struct s9*>(&rsi28->f4);
                __asm__("mulsd xmm0, xmm2");
                __asm__("addsd xmm0, xmm1");
                rdi29->f0 = rsi30->f0;
                rdi1 = reinterpret_cast<struct s6*>(&rdi29->f4);
                rsi2 = reinterpret_cast<struct s7*>(&rsi30->f4);
                ++v24;
            }
            ++v23;
        }
        v31 = reinterpret_cast<int32_t>(fprintf);
        while (v31 < v9 - 1) {
            v32 = reinterpret_cast<int32_t>(fprintf);
            while (v32 < v10 - 1) {
                rdi1->f0 = rsi2->f0;
                rdi33 = reinterpret_cast<struct s8*>(&rdi1->f4);
                rsi34 = reinterpret_cast<struct s9*>(&rsi2->f4);
                rdi33->f0 = rsi34->f0;
                rdi35 = reinterpret_cast<struct s6*>(&rdi33->f4);
                rsi36 = reinterpret_cast<struct s7*>(&rsi34->f4);
                __asm__("subsd xmm0, [rax+rcx*8]");
                __asm__("addsd xmm0, [rax+rcx*8]");
                __asm__("subsd xmm0, [rax+rcx*8]");
                rdi35->f0 = rsi36->f0;
                rdi37 = reinterpret_cast<struct s8*>(&rdi35->f4);
                rsi38 = reinterpret_cast<struct s9*>(&rsi36->f4);
                __asm__("mulsd xmm0, xmm2");
                __asm__("addsd xmm0, xmm1");
                rdi37->f0 = rsi38->f0;
                rdi1 = reinterpret_cast<struct s6*>(&rdi37->f4);
                rsi2 = reinterpret_cast<struct s7*>(&rsi38->f4);
                ++v32;
            }
            ++v31;
        }
        ++v11;
    }
    return;
}

void print_array(int32_t edi, int32_t esi, int64_t rdx, int64_t rcx, int64_t r8);

void fun_fa(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8);

void fun_103(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8);

void fun_10c(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8);

void fun_115(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8);

void fun_d1(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7) {
    int32_t eax8;
    int32_t edi9;
    int64_t rbp10;
    int64_t rbp11;
    int64_t rbp12;
    int64_t rbp13;
    int64_t rbp14;
    int64_t rdi15;
    int64_t rbp16;
    int64_t rdi17;
    int64_t rbp18;
    int64_t rdi19;
    int64_t rbp20;
    int64_t rdi21;
    int64_t rbp22;
    int64_t v23;

    if (reinterpret_cast<int1_t>(eax8 == fprintf)) {
        edi9 = *reinterpret_cast<int32_t*>(rbp10 - 24);
        *reinterpret_cast<int32_t*>(&rsi) = *reinterpret_cast<int32_t*>(rbp11 - 28);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi) + 4) = reinterpret_cast<int32_t>(fprintf);
        rdx = *reinterpret_cast<int64_t*>(rbp12 - 40);
        rcx = *reinterpret_cast<int64_t*>(rbp13 - 48);
        r8 = *reinterpret_cast<int64_t*>(rbp14 - 56);
        print_array(edi9, *reinterpret_cast<int32_t*>(&rsi), rdx, rcx, r8);
    }
    rdi15 = *reinterpret_cast<int64_t*>(rbp16 - 40);
    fun_fa(rdi15, rsi, rdx, rcx, r8);
    rdi17 = *reinterpret_cast<int64_t*>(rbp18 - 48);
    fun_103(rdi17, rsi, rdx, rcx, r8);
    rdi19 = *reinterpret_cast<int64_t*>(rbp20 - 56);
    fun_10c(rdi19, rsi, rdx, rcx, r8);
    rdi21 = *reinterpret_cast<int64_t*>(rbp22 - 64);
    fun_115(rdi21, rsi, rdx, rcx, r8);
    goto v23;
}

int64_t* g5a1 = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_5b2(int64_t rdi, int64_t rsi);

int64_t* g5b9 = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_5d1(int64_t rdi);

int64_t* g619 = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_62a(int64_t rdi);

int32_t** g631 = reinterpret_cast<int32_t**>(0x48f0458b48388b48);

void fun_65d(int64_t rdi);

int64_t* g685 = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_69d(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx);

int64_t* g6a4 = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_6b5(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx);

int64_t* g6bc = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_6d4(int64_t rdi);

int64_t* g71c = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_72d(int64_t rdi);

int32_t** g734 = reinterpret_cast<int32_t**>(0x48e8458b48388b48);

void fun_760(int64_t rdi);

int64_t* g788 = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_7a0(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx);

int64_t* g7a7 = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_7bf(int64_t rdi);

int64_t* g807 = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_818(int64_t rdi);

int32_t** g81f = reinterpret_cast<int32_t**>(0x48e0458b48388b48);

void fun_84b(int64_t rdi);

int64_t* g873 = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_88b(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx);

void print_array(int32_t edi, int32_t esi, int64_t rdx, int64_t rcx, int64_t r8) {
    int32_t v6;
    int32_t v7;
    int64_t* rax8;
    int64_t rdi9;
    int64_t* rax10;
    int64_t rdi11;
    int32_t* rsi12;
    int32_t v13;
    int32_t v14;
    int64_t* rax15;
    int64_t rdi16;
    int32_t** rax17;
    int32_t* rdi18;
    int64_t* rax19;
    int64_t rdi20;
    int64_t* rax21;
    int64_t rdi22;
    int64_t* rax23;
    int64_t rdi24;
    int32_t* rsi25;
    int32_t v26;
    int32_t v27;
    int64_t* rax28;
    int64_t rdi29;
    int32_t** rax30;
    int32_t* rdi31;
    int64_t* rax32;
    int64_t rdi33;
    int64_t* rax34;
    int64_t rdi35;
    int32_t* rsi36;
    int32_t v37;
    int32_t v38;
    int64_t* rax39;
    int64_t rdi40;
    int32_t** rax41;
    int32_t* rdi42;
    int64_t* rax43;
    int64_t rdi44;

    v6 = edi;
    v7 = esi;
    rax8 = g5a1;
    rdi9 = *rax8;
    fun_5b2(rdi9, 0x5ab);
    rax10 = g5b9;
    rdi11 = *rax10;
    rsi12 = reinterpret_cast<int32_t*>(0x5c3);
    fun_5d1(rdi11);
    v13 = reinterpret_cast<int32_t>(fprintf);
    while (v13 < v6) {
        v14 = reinterpret_cast<int32_t>(fprintf);
        while (v14 < v7) {
            __asm__("cdq ");
            if (reinterpret_cast<int1_t>((v13 * v6 + v14) % 20 == fprintf)) {
                rax15 = g619;
                rdi16 = *rax15;
                rsi12 = reinterpret_cast<int32_t*>(0x623);
                fun_62a(rdi16);
            }
            rax17 = g631;
            rdi18 = *rax17;
            rcx = v14;
            *rdi18 = *rsi12;
            rsi12 = reinterpret_cast<int32_t*>(0x656);
            fun_65d(rdi18 + 1);
            ++v14;
        }
        ++v13;
    }
    rax19 = g685;
    rdi20 = *rax19;
    fun_69d(rdi20, 0x68f, 0x696, rcx);
    rax21 = g6a4;
    rdi22 = *rax21;
    fun_6b5(rdi22, 0x6ae, 0x696, rcx);
    rax23 = g6bc;
    rdi24 = *rax23;
    rsi25 = reinterpret_cast<int32_t*>(0x6c6);
    fun_6d4(rdi24);
    v26 = reinterpret_cast<int32_t>(fprintf);
    while (v26 < v6) {
        v27 = reinterpret_cast<int32_t>(fprintf);
        while (v27 < v7) {
            __asm__("cdq ");
            if (reinterpret_cast<int1_t>((v26 * v6 + v27) % 20 == fprintf)) {
                rax28 = g71c;
                rdi29 = *rax28;
                rsi25 = reinterpret_cast<int32_t*>(0x726);
                fun_72d(rdi29);
            }
            rax30 = g734;
            rdi31 = *rax30;
            rcx = v27;
            *rdi31 = *rsi25;
            rsi25 = reinterpret_cast<int32_t*>(0x759);
            fun_760(rdi31 + 1);
            ++v27;
        }
        ++v26;
    }
    rax32 = g788;
    rdi33 = *rax32;
    fun_7a0(rdi33, 0x792, 0x799, rcx);
    rax34 = g7a7;
    rdi35 = *rax34;
    rsi36 = reinterpret_cast<int32_t*>(0x7b1);
    fun_7bf(rdi35);
    v37 = reinterpret_cast<int32_t>(fprintf);
    while (v37 < v6) {
        v38 = reinterpret_cast<int32_t>(fprintf);
        while (v38 < v7) {
            __asm__("cdq ");
            if (reinterpret_cast<int1_t>((v37 * v6 + v38) % 20 == fprintf)) {
                rax39 = g807;
                rdi40 = *rax39;
                rsi36 = reinterpret_cast<int32_t*>(0x811);
                fun_818(rdi40);
            }
            rax41 = g81f;
            rdi42 = *rax41;
            rcx = v38;
            *rdi42 = *rsi36;
            rsi36 = reinterpret_cast<int32_t*>(0x844);
            fun_84b(rdi42 + 1);
            ++v38;
        }
        ++v37;
    }
    rax43 = g873;
    rdi44 = *rax43;
    fun_88b(rdi44, 0x87d, 0x884, rcx);
    return;
}

void fun_62a(int64_t rdi) {
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
    int64_t* rax25;
    int64_t rdi26;
    int32_t* rsi27;
    int64_t rbp28;
    int64_t rbp29;
    int64_t rbp30;
    int64_t rbp31;
    int64_t rbp32;
    int64_t rbp33;
    int64_t rbp34;
    int64_t rbp35;
    int64_t rbp36;
    int64_t* rax37;
    int64_t rdi38;
    int32_t** rax39;
    int32_t* rdi40;
    int64_t rbp41;
    int64_t rbp42;
    int64_t rbp43;
    int64_t rbp44;
    int64_t rbp45;
    int64_t* rax46;
    int64_t rdi47;
    int64_t* rax48;
    int64_t rdi49;
    int32_t* rsi50;
    int64_t rbp51;
    int64_t rbp52;
    int64_t rbp53;
    int64_t rbp54;
    int64_t rbp55;
    int64_t rbp56;
    int64_t rbp57;
    int64_t rbp58;
    int64_t rbp59;
    int64_t* rax60;
    int64_t rdi61;
    int32_t** rax62;
    int32_t* rdi63;
    int64_t rbp64;
    int64_t rbp65;
    int64_t rbp66;
    int64_t rbp67;
    int64_t rbp68;
    int64_t* rax69;
    int64_t rdi70;
    int64_t v71;

    while (1) {
        rax2 = g631;
        rdi3 = *rax2;
        rcx4 = *reinterpret_cast<int32_t*>(rbp5 - 40);
        *rdi3 = *rsi6;
        rsi6 = reinterpret_cast<int32_t*>(0x656);
        fun_65d(rdi3 + 1);
        *reinterpret_cast<int32_t*>(rbp7 - 40) = *reinterpret_cast<int32_t*>(rbp8 - 40) + 1;
        while (*reinterpret_cast<int32_t*>(rbp9 - 40) >= *reinterpret_cast<int32_t*>(rbp10 - 8)) {
            *reinterpret_cast<int32_t*>(rbp11 - 36) = *reinterpret_cast<int32_t*>(rbp12 - 36) + 1;
            if (*reinterpret_cast<int32_t*>(rbp13 - 36) >= *reinterpret_cast<int32_t*>(rbp14 - 4)) 
                goto addr_67e_10;
            *reinterpret_cast<int32_t*>(rbp15 - 40) = reinterpret_cast<int32_t>(fprintf);
        }
        __asm__("cdq ");
        if (!reinterpret_cast<int1_t>((*reinterpret_cast<int32_t*>(rbp16 - 36) * *reinterpret_cast<int32_t*>(rbp17 - 4) + *reinterpret_cast<int32_t*>(rbp18 - 40)) % 20 == fprintf)) 
            continue;
        rax19 = g619;
        rdi20 = *rax19;
        rsi6 = reinterpret_cast<int32_t*>(0x623);
        fun_62a(rdi20);
    }
    addr_67e_10:
    rax21 = g685;
    rdi22 = *rax21;
    fun_69d(rdi22, 0x68f, 0x696, rcx4);
    rax23 = g6a4;
    rdi24 = *rax23;
    fun_6b5(rdi24, 0x6ae, 0x696, rcx4);
    rax25 = g6bc;
    rdi26 = *rax25;
    rsi27 = reinterpret_cast<int32_t*>(0x6c6);
    fun_6d4(rdi26);
    *reinterpret_cast<int32_t*>(rbp28 - 36) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp29 - 36) < *reinterpret_cast<int32_t*>(rbp30 - 4)) {
        *reinterpret_cast<int32_t*>(rbp31 - 40) = reinterpret_cast<int32_t>(fprintf);
        while (*reinterpret_cast<int32_t*>(rbp32 - 40) < *reinterpret_cast<int32_t*>(rbp33 - 8)) {
            __asm__("cdq ");
            if (reinterpret_cast<int1_t>((*reinterpret_cast<int32_t*>(rbp34 - 36) * *reinterpret_cast<int32_t*>(rbp35 - 4) + *reinterpret_cast<int32_t*>(rbp36 - 40)) % 20 == fprintf)) {
                rax37 = g71c;
                rdi38 = *rax37;
                rsi27 = reinterpret_cast<int32_t*>(0x726);
                fun_72d(rdi38);
            }
            rax39 = g734;
            rdi40 = *rax39;
            rcx4 = *reinterpret_cast<int32_t*>(rbp41 - 40);
            *rdi40 = *rsi27;
            rsi27 = reinterpret_cast<int32_t*>(0x759);
            fun_760(rdi40 + 1);
            *reinterpret_cast<int32_t*>(rbp42 - 40) = *reinterpret_cast<int32_t*>(rbp43 - 40) + 1;
        }
        *reinterpret_cast<int32_t*>(rbp44 - 36) = *reinterpret_cast<int32_t*>(rbp45 - 36) + 1;
    }
    rax46 = g788;
    rdi47 = *rax46;
    fun_7a0(rdi47, 0x792, 0x799, rcx4);
    rax48 = g7a7;
    rdi49 = *rax48;
    rsi50 = reinterpret_cast<int32_t*>(0x7b1);
    fun_7bf(rdi49);
    *reinterpret_cast<int32_t*>(rbp51 - 36) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp52 - 36) < *reinterpret_cast<int32_t*>(rbp53 - 4)) {
        *reinterpret_cast<int32_t*>(rbp54 - 40) = reinterpret_cast<int32_t>(fprintf);
        while (*reinterpret_cast<int32_t*>(rbp55 - 40) < *reinterpret_cast<int32_t*>(rbp56 - 8)) {
            __asm__("cdq ");
            if (reinterpret_cast<int1_t>((*reinterpret_cast<int32_t*>(rbp57 - 36) * *reinterpret_cast<int32_t*>(rbp58 - 4) + *reinterpret_cast<int32_t*>(rbp59 - 40)) % 20 == fprintf)) {
                rax60 = g807;
                rdi61 = *rax60;
                rsi50 = reinterpret_cast<int32_t*>(0x811);
                fun_818(rdi61);
            }
            rax62 = g81f;
            rdi63 = *rax62;
            rcx4 = *reinterpret_cast<int32_t*>(rbp64 - 40);
            *rdi63 = *rsi50;
            rsi50 = reinterpret_cast<int32_t*>(0x844);
            fun_84b(rdi63 + 1);
            *reinterpret_cast<int32_t*>(rbp65 - 40) = *reinterpret_cast<int32_t*>(rbp66 - 40) + 1;
        }
        *reinterpret_cast<int32_t*>(rbp67 - 36) = *reinterpret_cast<int32_t*>(rbp68 - 36) + 1;
    }
    rax69 = g873;
    rdi70 = *rax69;
    fun_88b(rdi70, 0x87d, 0x884, rcx4);
    goto v71;
}

void fun_65d(int64_t rdi) {
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
    int64_t* rax25;
    int64_t rdi26;
    int32_t* rsi27;
    int64_t rbp28;
    int64_t rbp29;
    int64_t rbp30;
    int64_t rbp31;
    int64_t rbp32;
    int64_t rbp33;
    int64_t rbp34;
    int64_t rbp35;
    int64_t rbp36;
    int64_t* rax37;
    int64_t rdi38;
    int32_t** rax39;
    int32_t* rdi40;
    int64_t rbp41;
    int64_t rbp42;
    int64_t rbp43;
    int64_t rbp44;
    int64_t rbp45;
    int64_t* rax46;
    int64_t rdi47;
    int64_t* rax48;
    int64_t rdi49;
    int32_t* rsi50;
    int64_t rbp51;
    int64_t rbp52;
    int64_t rbp53;
    int64_t rbp54;
    int64_t rbp55;
    int64_t rbp56;
    int64_t rbp57;
    int64_t rbp58;
    int64_t rbp59;
    int64_t* rax60;
    int64_t rdi61;
    int32_t** rax62;
    int32_t* rdi63;
    int64_t rbp64;
    int64_t rbp65;
    int64_t rbp66;
    int64_t rbp67;
    int64_t rbp68;
    int64_t* rax69;
    int64_t rdi70;
    int64_t v71;

    while (1) {
        *reinterpret_cast<int32_t*>(rbp2 - 40) = *reinterpret_cast<int32_t*>(rbp3 - 40) + 1;
        while (*reinterpret_cast<int32_t*>(rbp4 - 40) >= *reinterpret_cast<int32_t*>(rbp5 - 8)) {
            *reinterpret_cast<int32_t*>(rbp6 - 36) = *reinterpret_cast<int32_t*>(rbp7 - 36) + 1;
            if (*reinterpret_cast<int32_t*>(rbp8 - 36) >= *reinterpret_cast<int32_t*>(rbp9 - 4)) 
                goto addr_67e_6;
            *reinterpret_cast<int32_t*>(rbp10 - 40) = reinterpret_cast<int32_t>(fprintf);
        }
        __asm__("cdq ");
        if (reinterpret_cast<int1_t>((*reinterpret_cast<int32_t*>(rbp11 - 36) * *reinterpret_cast<int32_t*>(rbp12 - 4) + *reinterpret_cast<int32_t*>(rbp13 - 40)) % 20 == fprintf)) {
            rax14 = g619;
            rdi15 = *rax14;
            rsi16 = reinterpret_cast<int32_t*>(0x623);
            fun_62a(rdi15);
        }
        rax17 = g631;
        rdi18 = *rax17;
        rcx19 = *reinterpret_cast<int32_t*>(rbp20 - 40);
        *rdi18 = *rsi16;
        rsi16 = reinterpret_cast<int32_t*>(0x656);
        fun_65d(rdi18 + 1);
    }
    addr_67e_6:
    rax21 = g685;
    rdi22 = *rax21;
    fun_69d(rdi22, 0x68f, 0x696, rcx19);
    rax23 = g6a4;
    rdi24 = *rax23;
    fun_6b5(rdi24, 0x6ae, 0x696, rcx19);
    rax25 = g6bc;
    rdi26 = *rax25;
    rsi27 = reinterpret_cast<int32_t*>(0x6c6);
    fun_6d4(rdi26);
    *reinterpret_cast<int32_t*>(rbp28 - 36) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp29 - 36) < *reinterpret_cast<int32_t*>(rbp30 - 4)) {
        *reinterpret_cast<int32_t*>(rbp31 - 40) = reinterpret_cast<int32_t>(fprintf);
        while (*reinterpret_cast<int32_t*>(rbp32 - 40) < *reinterpret_cast<int32_t*>(rbp33 - 8)) {
            __asm__("cdq ");
            if (reinterpret_cast<int1_t>((*reinterpret_cast<int32_t*>(rbp34 - 36) * *reinterpret_cast<int32_t*>(rbp35 - 4) + *reinterpret_cast<int32_t*>(rbp36 - 40)) % 20 == fprintf)) {
                rax37 = g71c;
                rdi38 = *rax37;
                rsi27 = reinterpret_cast<int32_t*>(0x726);
                fun_72d(rdi38);
            }
            rax39 = g734;
            rdi40 = *rax39;
            rcx19 = *reinterpret_cast<int32_t*>(rbp41 - 40);
            *rdi40 = *rsi27;
            rsi27 = reinterpret_cast<int32_t*>(0x759);
            fun_760(rdi40 + 1);
            *reinterpret_cast<int32_t*>(rbp42 - 40) = *reinterpret_cast<int32_t*>(rbp43 - 40) + 1;
        }
        *reinterpret_cast<int32_t*>(rbp44 - 36) = *reinterpret_cast<int32_t*>(rbp45 - 36) + 1;
    }
    rax46 = g788;
    rdi47 = *rax46;
    fun_7a0(rdi47, 0x792, 0x799, rcx19);
    rax48 = g7a7;
    rdi49 = *rax48;
    rsi50 = reinterpret_cast<int32_t*>(0x7b1);
    fun_7bf(rdi49);
    *reinterpret_cast<int32_t*>(rbp51 - 36) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp52 - 36) < *reinterpret_cast<int32_t*>(rbp53 - 4)) {
        *reinterpret_cast<int32_t*>(rbp54 - 40) = reinterpret_cast<int32_t>(fprintf);
        while (*reinterpret_cast<int32_t*>(rbp55 - 40) < *reinterpret_cast<int32_t*>(rbp56 - 8)) {
            __asm__("cdq ");
            if (reinterpret_cast<int1_t>((*reinterpret_cast<int32_t*>(rbp57 - 36) * *reinterpret_cast<int32_t*>(rbp58 - 4) + *reinterpret_cast<int32_t*>(rbp59 - 40)) % 20 == fprintf)) {
                rax60 = g807;
                rdi61 = *rax60;
                rsi50 = reinterpret_cast<int32_t*>(0x811);
                fun_818(rdi61);
            }
            rax62 = g81f;
            rdi63 = *rax62;
            rcx19 = *reinterpret_cast<int32_t*>(rbp64 - 40);
            *rdi63 = *rsi50;
            rsi50 = reinterpret_cast<int32_t*>(0x844);
            fun_84b(rdi63 + 1);
            *reinterpret_cast<int32_t*>(rbp65 - 40) = *reinterpret_cast<int32_t*>(rbp66 - 40) + 1;
        }
        *reinterpret_cast<int32_t*>(rbp67 - 36) = *reinterpret_cast<int32_t*>(rbp68 - 36) + 1;
    }
    rax69 = g873;
    rdi70 = *rax69;
    fun_88b(rdi70, 0x87d, 0x884, rcx19);
    goto v71;
}

void fun_72d(int64_t rdi) {
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
    int32_t* rsi25;
    int64_t rbp26;
    int64_t rbp27;
    int64_t rbp28;
    int64_t rbp29;
    int64_t rbp30;
    int64_t rbp31;
    int64_t rbp32;
    int64_t rbp33;
    int64_t rbp34;
    int64_t* rax35;
    int64_t rdi36;
    int32_t** rax37;
    int32_t* rdi38;
    int64_t rbp39;
    int64_t rbp40;
    int64_t rbp41;
    int64_t rbp42;
    int64_t rbp43;
    int64_t* rax44;
    int64_t rdi45;
    int64_t v46;

    while (1) {
        rax2 = g734;
        rdi3 = *rax2;
        rcx4 = *reinterpret_cast<int32_t*>(rbp5 - 40);
        *rdi3 = *rsi6;
        rsi6 = reinterpret_cast<int32_t*>(0x759);
        fun_760(rdi3 + 1);
        *reinterpret_cast<int32_t*>(rbp7 - 40) = *reinterpret_cast<int32_t*>(rbp8 - 40) + 1;
        while (*reinterpret_cast<int32_t*>(rbp9 - 40) >= *reinterpret_cast<int32_t*>(rbp10 - 8)) {
            *reinterpret_cast<int32_t*>(rbp11 - 36) = *reinterpret_cast<int32_t*>(rbp12 - 36) + 1;
            if (*reinterpret_cast<int32_t*>(rbp13 - 36) >= *reinterpret_cast<int32_t*>(rbp14 - 4)) 
                goto addr_781_10;
            *reinterpret_cast<int32_t*>(rbp15 - 40) = reinterpret_cast<int32_t>(fprintf);
        }
        __asm__("cdq ");
        if (!reinterpret_cast<int1_t>((*reinterpret_cast<int32_t*>(rbp16 - 36) * *reinterpret_cast<int32_t*>(rbp17 - 4) + *reinterpret_cast<int32_t*>(rbp18 - 40)) % 20 == fprintf)) 
            continue;
        rax19 = g71c;
        rdi20 = *rax19;
        rsi6 = reinterpret_cast<int32_t*>(0x726);
        fun_72d(rdi20);
    }
    addr_781_10:
    rax21 = g788;
    rdi22 = *rax21;
    fun_7a0(rdi22, 0x792, 0x799, rcx4);
    rax23 = g7a7;
    rdi24 = *rax23;
    rsi25 = reinterpret_cast<int32_t*>(0x7b1);
    fun_7bf(rdi24);
    *reinterpret_cast<int32_t*>(rbp26 - 36) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp27 - 36) < *reinterpret_cast<int32_t*>(rbp28 - 4)) {
        *reinterpret_cast<int32_t*>(rbp29 - 40) = reinterpret_cast<int32_t>(fprintf);
        while (*reinterpret_cast<int32_t*>(rbp30 - 40) < *reinterpret_cast<int32_t*>(rbp31 - 8)) {
            __asm__("cdq ");
            if (reinterpret_cast<int1_t>((*reinterpret_cast<int32_t*>(rbp32 - 36) * *reinterpret_cast<int32_t*>(rbp33 - 4) + *reinterpret_cast<int32_t*>(rbp34 - 40)) % 20 == fprintf)) {
                rax35 = g807;
                rdi36 = *rax35;
                rsi25 = reinterpret_cast<int32_t*>(0x811);
                fun_818(rdi36);
            }
            rax37 = g81f;
            rdi38 = *rax37;
            rcx4 = *reinterpret_cast<int32_t*>(rbp39 - 40);
            *rdi38 = *rsi25;
            rsi25 = reinterpret_cast<int32_t*>(0x844);
            fun_84b(rdi38 + 1);
            *reinterpret_cast<int32_t*>(rbp40 - 40) = *reinterpret_cast<int32_t*>(rbp41 - 40) + 1;
        }
        *reinterpret_cast<int32_t*>(rbp42 - 36) = *reinterpret_cast<int32_t*>(rbp43 - 36) + 1;
    }
    rax44 = g873;
    rdi45 = *rax44;
    fun_88b(rdi45, 0x87d, 0x884, rcx4);
    goto v46;
}

void fun_760(int64_t rdi) {
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
    int32_t* rsi25;
    int64_t rbp26;
    int64_t rbp27;
    int64_t rbp28;
    int64_t rbp29;
    int64_t rbp30;
    int64_t rbp31;
    int64_t rbp32;
    int64_t rbp33;
    int64_t rbp34;
    int64_t* rax35;
    int64_t rdi36;
    int32_t** rax37;
    int32_t* rdi38;
    int64_t rbp39;
    int64_t rbp40;
    int64_t rbp41;
    int64_t rbp42;
    int64_t rbp43;
    int64_t* rax44;
    int64_t rdi45;
    int64_t v46;

    while (1) {
        *reinterpret_cast<int32_t*>(rbp2 - 40) = *reinterpret_cast<int32_t*>(rbp3 - 40) + 1;
        while (*reinterpret_cast<int32_t*>(rbp4 - 40) >= *reinterpret_cast<int32_t*>(rbp5 - 8)) {
            *reinterpret_cast<int32_t*>(rbp6 - 36) = *reinterpret_cast<int32_t*>(rbp7 - 36) + 1;
            if (*reinterpret_cast<int32_t*>(rbp8 - 36) >= *reinterpret_cast<int32_t*>(rbp9 - 4)) 
                goto addr_781_6;
            *reinterpret_cast<int32_t*>(rbp10 - 40) = reinterpret_cast<int32_t>(fprintf);
        }
        __asm__("cdq ");
        if (reinterpret_cast<int1_t>((*reinterpret_cast<int32_t*>(rbp11 - 36) * *reinterpret_cast<int32_t*>(rbp12 - 4) + *reinterpret_cast<int32_t*>(rbp13 - 40)) % 20 == fprintf)) {
            rax14 = g71c;
            rdi15 = *rax14;
            rsi16 = reinterpret_cast<int32_t*>(0x726);
            fun_72d(rdi15);
        }
        rax17 = g734;
        rdi18 = *rax17;
        rcx19 = *reinterpret_cast<int32_t*>(rbp20 - 40);
        *rdi18 = *rsi16;
        rsi16 = reinterpret_cast<int32_t*>(0x759);
        fun_760(rdi18 + 1);
    }
    addr_781_6:
    rax21 = g788;
    rdi22 = *rax21;
    fun_7a0(rdi22, 0x792, 0x799, rcx19);
    rax23 = g7a7;
    rdi24 = *rax23;
    rsi25 = reinterpret_cast<int32_t*>(0x7b1);
    fun_7bf(rdi24);
    *reinterpret_cast<int32_t*>(rbp26 - 36) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp27 - 36) < *reinterpret_cast<int32_t*>(rbp28 - 4)) {
        *reinterpret_cast<int32_t*>(rbp29 - 40) = reinterpret_cast<int32_t>(fprintf);
        while (*reinterpret_cast<int32_t*>(rbp30 - 40) < *reinterpret_cast<int32_t*>(rbp31 - 8)) {
            __asm__("cdq ");
            if (reinterpret_cast<int1_t>((*reinterpret_cast<int32_t*>(rbp32 - 36) * *reinterpret_cast<int32_t*>(rbp33 - 4) + *reinterpret_cast<int32_t*>(rbp34 - 40)) % 20 == fprintf)) {
                rax35 = g807;
                rdi36 = *rax35;
                rsi25 = reinterpret_cast<int32_t*>(0x811);
                fun_818(rdi36);
            }
            rax37 = g81f;
            rdi38 = *rax37;
            rcx19 = *reinterpret_cast<int32_t*>(rbp39 - 40);
            *rdi38 = *rsi25;
            rsi25 = reinterpret_cast<int32_t*>(0x844);
            fun_84b(rdi38 + 1);
            *reinterpret_cast<int32_t*>(rbp40 - 40) = *reinterpret_cast<int32_t*>(rbp41 - 40) + 1;
        }
        *reinterpret_cast<int32_t*>(rbp42 - 36) = *reinterpret_cast<int32_t*>(rbp43 - 36) + 1;
    }
    rax44 = g873;
    rdi45 = *rax44;
    fun_88b(rdi45, 0x87d, 0x884, rcx19);
    goto v46;
}

void fun_818(int64_t rdi) {
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
    int64_t v23;

    while (1) {
        rax2 = g81f;
        rdi3 = *rax2;
        rcx4 = *reinterpret_cast<int32_t*>(rbp5 - 40);
        *rdi3 = *rsi6;
        rsi6 = reinterpret_cast<int32_t*>(0x844);
        fun_84b(rdi3 + 1);
        *reinterpret_cast<int32_t*>(rbp7 - 40) = *reinterpret_cast<int32_t*>(rbp8 - 40) + 1;
        while (*reinterpret_cast<int32_t*>(rbp9 - 40) >= *reinterpret_cast<int32_t*>(rbp10 - 8)) {
            *reinterpret_cast<int32_t*>(rbp11 - 36) = *reinterpret_cast<int32_t*>(rbp12 - 36) + 1;
            if (*reinterpret_cast<int32_t*>(rbp13 - 36) >= *reinterpret_cast<int32_t*>(rbp14 - 4)) 
                goto addr_86c_10;
            *reinterpret_cast<int32_t*>(rbp15 - 40) = reinterpret_cast<int32_t>(fprintf);
        }
        __asm__("cdq ");
        if (!reinterpret_cast<int1_t>((*reinterpret_cast<int32_t*>(rbp16 - 36) * *reinterpret_cast<int32_t*>(rbp17 - 4) + *reinterpret_cast<int32_t*>(rbp18 - 40)) % 20 == fprintf)) 
            continue;
        rax19 = g807;
        rdi20 = *rax19;
        rsi6 = reinterpret_cast<int32_t*>(0x811);
        fun_818(rdi20);
    }
    addr_86c_10:
    rax21 = g873;
    rdi22 = *rax21;
    fun_88b(rdi22, 0x87d, 0x884, rcx4);
    goto v23;
}

void fun_84b(int64_t rdi) {
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
    int64_t v23;

    while (1) {
        *reinterpret_cast<int32_t*>(rbp2 - 40) = *reinterpret_cast<int32_t*>(rbp3 - 40) + 1;
        while (*reinterpret_cast<int32_t*>(rbp4 - 40) >= *reinterpret_cast<int32_t*>(rbp5 - 8)) {
            *reinterpret_cast<int32_t*>(rbp6 - 36) = *reinterpret_cast<int32_t*>(rbp7 - 36) + 1;
            if (*reinterpret_cast<int32_t*>(rbp8 - 36) >= *reinterpret_cast<int32_t*>(rbp9 - 4)) 
                goto addr_86c_6;
            *reinterpret_cast<int32_t*>(rbp10 - 40) = reinterpret_cast<int32_t>(fprintf);
        }
        __asm__("cdq ");
        if (reinterpret_cast<int1_t>((*reinterpret_cast<int32_t*>(rbp11 - 36) * *reinterpret_cast<int32_t*>(rbp12 - 4) + *reinterpret_cast<int32_t*>(rbp13 - 40)) % 20 == fprintf)) {
            rax14 = g807;
            rdi15 = *rax14;
            rsi16 = reinterpret_cast<int32_t*>(0x811);
            fun_818(rdi15);
        }
        rax17 = g81f;
        rdi18 = *rax17;
        rcx19 = *reinterpret_cast<int32_t*>(rbp20 - 40);
        *rdi18 = *rsi16;
        rsi16 = reinterpret_cast<int32_t*>(0x844);
        fun_84b(rdi18 + 1);
    }
    addr_86c_6:
    rax21 = g873;
    rdi22 = *rax21;
    fun_88b(rdi22, 0x87d, 0x884, rcx19);
    goto v23;
}

void fun_fa(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8) {
    int64_t rdi6;
    int64_t rbp7;
    int64_t rdi8;
    int64_t rbp9;
    int64_t rdi10;
    int64_t rbp11;
    int64_t v12;

    rdi6 = *reinterpret_cast<int64_t*>(rbp7 - 48);
    fun_103(rdi6, rsi, rdx, rcx, r8);
    rdi8 = *reinterpret_cast<int64_t*>(rbp9 - 56);
    fun_10c(rdi8, rsi, rdx, rcx, r8);
    rdi10 = *reinterpret_cast<int64_t*>(rbp11 - 64);
    fun_115(rdi10, rsi, rdx, rcx, r8);
    goto v12;
}

void fun_5b2(int64_t rdi, int64_t rsi) {
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
    int64_t* rax29;
    int64_t rdi30;
    int32_t* rsi31;
    int64_t rbp32;
    int64_t rbp33;
    int64_t rbp34;
    int64_t rbp35;
    int64_t rbp36;
    int64_t rbp37;
    int64_t rbp38;
    int64_t rbp39;
    int64_t rbp40;
    int64_t* rax41;
    int64_t rdi42;
    int32_t** rax43;
    int32_t* rdi44;
    int64_t rbp45;
    int64_t rbp46;
    int64_t rbp47;
    int64_t rbp48;
    int64_t rbp49;
    int64_t* rax50;
    int64_t rdi51;
    int64_t* rax52;
    int64_t rdi53;
    int32_t* rsi54;
    int64_t rbp55;
    int64_t rbp56;
    int64_t rbp57;
    int64_t rbp58;
    int64_t rbp59;
    int64_t rbp60;
    int64_t rbp61;
    int64_t rbp62;
    int64_t rbp63;
    int64_t* rax64;
    int64_t rdi65;
    int32_t** rax66;
    int32_t* rdi67;
    int64_t rbp68;
    int64_t rbp69;
    int64_t rbp70;
    int64_t rbp71;
    int64_t rbp72;
    int64_t* rax73;
    int64_t rdi74;
    int64_t v75;

    rax3 = g5b9;
    rdi4 = *rax3;
    rsi5 = reinterpret_cast<int32_t*>(0x5c3);
    fun_5d1(rdi4);
    *reinterpret_cast<int32_t*>(rbp6 - 36) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp7 - 36) < *reinterpret_cast<int32_t*>(rbp8 - 4)) {
        *reinterpret_cast<int32_t*>(rbp9 - 40) = reinterpret_cast<int32_t>(fprintf);
        while (*reinterpret_cast<int32_t*>(rbp10 - 40) < *reinterpret_cast<int32_t*>(rbp11 - 8)) {
            __asm__("cdq ");
            if (reinterpret_cast<int1_t>((*reinterpret_cast<int32_t*>(rbp12 - 36) * *reinterpret_cast<int32_t*>(rbp13 - 4) + *reinterpret_cast<int32_t*>(rbp14 - 40)) % 20 == fprintf)) {
                rax15 = g619;
                rdi16 = *rax15;
                rsi5 = reinterpret_cast<int32_t*>(0x623);
                fun_62a(rdi16);
            }
            rax17 = g631;
            rdi18 = *rax17;
            rcx19 = *reinterpret_cast<int32_t*>(rbp20 - 40);
            *rdi18 = *rsi5;
            rsi5 = reinterpret_cast<int32_t*>(0x656);
            fun_65d(rdi18 + 1);
            *reinterpret_cast<int32_t*>(rbp21 - 40) = *reinterpret_cast<int32_t*>(rbp22 - 40) + 1;
        }
        *reinterpret_cast<int32_t*>(rbp23 - 36) = *reinterpret_cast<int32_t*>(rbp24 - 36) + 1;
    }
    rax25 = g685;
    rdi26 = *rax25;
    fun_69d(rdi26, 0x68f, 0x696, rcx19);
    rax27 = g6a4;
    rdi28 = *rax27;
    fun_6b5(rdi28, 0x6ae, 0x696, rcx19);
    rax29 = g6bc;
    rdi30 = *rax29;
    rsi31 = reinterpret_cast<int32_t*>(0x6c6);
    fun_6d4(rdi30);
    *reinterpret_cast<int32_t*>(rbp32 - 36) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp33 - 36) < *reinterpret_cast<int32_t*>(rbp34 - 4)) {
        *reinterpret_cast<int32_t*>(rbp35 - 40) = reinterpret_cast<int32_t>(fprintf);
        while (*reinterpret_cast<int32_t*>(rbp36 - 40) < *reinterpret_cast<int32_t*>(rbp37 - 8)) {
            __asm__("cdq ");
            if (reinterpret_cast<int1_t>((*reinterpret_cast<int32_t*>(rbp38 - 36) * *reinterpret_cast<int32_t*>(rbp39 - 4) + *reinterpret_cast<int32_t*>(rbp40 - 40)) % 20 == fprintf)) {
                rax41 = g71c;
                rdi42 = *rax41;
                rsi31 = reinterpret_cast<int32_t*>(0x726);
                fun_72d(rdi42);
            }
            rax43 = g734;
            rdi44 = *rax43;
            rcx19 = *reinterpret_cast<int32_t*>(rbp45 - 40);
            *rdi44 = *rsi31;
            rsi31 = reinterpret_cast<int32_t*>(0x759);
            fun_760(rdi44 + 1);
            *reinterpret_cast<int32_t*>(rbp46 - 40) = *reinterpret_cast<int32_t*>(rbp47 - 40) + 1;
        }
        *reinterpret_cast<int32_t*>(rbp48 - 36) = *reinterpret_cast<int32_t*>(rbp49 - 36) + 1;
    }
    rax50 = g788;
    rdi51 = *rax50;
    fun_7a0(rdi51, 0x792, 0x799, rcx19);
    rax52 = g7a7;
    rdi53 = *rax52;
    rsi54 = reinterpret_cast<int32_t*>(0x7b1);
    fun_7bf(rdi53);
    *reinterpret_cast<int32_t*>(rbp55 - 36) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp56 - 36) < *reinterpret_cast<int32_t*>(rbp57 - 4)) {
        *reinterpret_cast<int32_t*>(rbp58 - 40) = reinterpret_cast<int32_t>(fprintf);
        while (*reinterpret_cast<int32_t*>(rbp59 - 40) < *reinterpret_cast<int32_t*>(rbp60 - 8)) {
            __asm__("cdq ");
            if (reinterpret_cast<int1_t>((*reinterpret_cast<int32_t*>(rbp61 - 36) * *reinterpret_cast<int32_t*>(rbp62 - 4) + *reinterpret_cast<int32_t*>(rbp63 - 40)) % 20 == fprintf)) {
                rax64 = g807;
                rdi65 = *rax64;
                rsi54 = reinterpret_cast<int32_t*>(0x811);
                fun_818(rdi65);
            }
            rax66 = g81f;
            rdi67 = *rax66;
            rcx19 = *reinterpret_cast<int32_t*>(rbp68 - 40);
            *rdi67 = *rsi54;
            rsi54 = reinterpret_cast<int32_t*>(0x844);
            fun_84b(rdi67 + 1);
            *reinterpret_cast<int32_t*>(rbp69 - 40) = *reinterpret_cast<int32_t*>(rbp70 - 40) + 1;
        }
        *reinterpret_cast<int32_t*>(rbp71 - 36) = *reinterpret_cast<int32_t*>(rbp72 - 36) + 1;
    }
    rax73 = g873;
    rdi74 = *rax73;
    fun_88b(rdi74, 0x87d, 0x884, rcx19);
    goto v75;
}

void fun_103(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8) {
    int64_t rdi6;
    int64_t rbp7;
    int64_t rdi8;
    int64_t rbp9;
    int64_t v10;

    rdi6 = *reinterpret_cast<int64_t*>(rbp7 - 56);
    fun_10c(rdi6, rsi, rdx, rcx, r8);
    rdi8 = *reinterpret_cast<int64_t*>(rbp9 - 64);
    fun_115(rdi8, rsi, rdx, rcx, r8);
    goto v10;
}

void fun_5d1(int64_t rdi) {
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
    int64_t* rax26;
    int64_t rdi27;
    int32_t* rsi28;
    int64_t rbp29;
    int64_t rbp30;
    int64_t rbp31;
    int64_t rbp32;
    int64_t rbp33;
    int64_t rbp34;
    int64_t rbp35;
    int64_t rbp36;
    int64_t rbp37;
    int64_t* rax38;
    int64_t rdi39;
    int32_t** rax40;
    int32_t* rdi41;
    int64_t rbp42;
    int64_t rbp43;
    int64_t rbp44;
    int64_t rbp45;
    int64_t rbp46;
    int64_t* rax47;
    int64_t rdi48;
    int64_t* rax49;
    int64_t rdi50;
    int32_t* rsi51;
    int64_t rbp52;
    int64_t rbp53;
    int64_t rbp54;
    int64_t rbp55;
    int64_t rbp56;
    int64_t rbp57;
    int64_t rbp58;
    int64_t rbp59;
    int64_t rbp60;
    int64_t* rax61;
    int64_t rdi62;
    int32_t** rax63;
    int32_t* rdi64;
    int64_t rbp65;
    int64_t rbp66;
    int64_t rbp67;
    int64_t rbp68;
    int64_t rbp69;
    int64_t* rax70;
    int64_t rdi71;
    int64_t v72;

    *reinterpret_cast<int32_t*>(rbp2 - 36) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp3 - 36) < *reinterpret_cast<int32_t*>(rbp4 - 4)) {
        *reinterpret_cast<int32_t*>(rbp5 - 40) = reinterpret_cast<int32_t>(fprintf);
        while (*reinterpret_cast<int32_t*>(rbp6 - 40) < *reinterpret_cast<int32_t*>(rbp7 - 8)) {
            __asm__("cdq ");
            if (reinterpret_cast<int1_t>((*reinterpret_cast<int32_t*>(rbp8 - 36) * *reinterpret_cast<int32_t*>(rbp9 - 4) + *reinterpret_cast<int32_t*>(rbp10 - 40)) % 20 == fprintf)) {
                rax11 = g619;
                rdi12 = *rax11;
                rsi13 = reinterpret_cast<int32_t*>(0x623);
                fun_62a(rdi12);
            }
            rax14 = g631;
            rdi15 = *rax14;
            rcx16 = *reinterpret_cast<int32_t*>(rbp17 - 40);
            *rdi15 = *rsi13;
            rsi13 = reinterpret_cast<int32_t*>(0x656);
            fun_65d(rdi15 + 1);
            *reinterpret_cast<int32_t*>(rbp18 - 40) = *reinterpret_cast<int32_t*>(rbp19 - 40) + 1;
        }
        *reinterpret_cast<int32_t*>(rbp20 - 36) = *reinterpret_cast<int32_t*>(rbp21 - 36) + 1;
    }
    rax22 = g685;
    rdi23 = *rax22;
    fun_69d(rdi23, 0x68f, 0x696, rcx16);
    rax24 = g6a4;
    rdi25 = *rax24;
    fun_6b5(rdi25, 0x6ae, 0x696, rcx16);
    rax26 = g6bc;
    rdi27 = *rax26;
    rsi28 = reinterpret_cast<int32_t*>(0x6c6);
    fun_6d4(rdi27);
    *reinterpret_cast<int32_t*>(rbp29 - 36) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp30 - 36) < *reinterpret_cast<int32_t*>(rbp31 - 4)) {
        *reinterpret_cast<int32_t*>(rbp32 - 40) = reinterpret_cast<int32_t>(fprintf);
        while (*reinterpret_cast<int32_t*>(rbp33 - 40) < *reinterpret_cast<int32_t*>(rbp34 - 8)) {
            __asm__("cdq ");
            if (reinterpret_cast<int1_t>((*reinterpret_cast<int32_t*>(rbp35 - 36) * *reinterpret_cast<int32_t*>(rbp36 - 4) + *reinterpret_cast<int32_t*>(rbp37 - 40)) % 20 == fprintf)) {
                rax38 = g71c;
                rdi39 = *rax38;
                rsi28 = reinterpret_cast<int32_t*>(0x726);
                fun_72d(rdi39);
            }
            rax40 = g734;
            rdi41 = *rax40;
            rcx16 = *reinterpret_cast<int32_t*>(rbp42 - 40);
            *rdi41 = *rsi28;
            rsi28 = reinterpret_cast<int32_t*>(0x759);
            fun_760(rdi41 + 1);
            *reinterpret_cast<int32_t*>(rbp43 - 40) = *reinterpret_cast<int32_t*>(rbp44 - 40) + 1;
        }
        *reinterpret_cast<int32_t*>(rbp45 - 36) = *reinterpret_cast<int32_t*>(rbp46 - 36) + 1;
    }
    rax47 = g788;
    rdi48 = *rax47;
    fun_7a0(rdi48, 0x792, 0x799, rcx16);
    rax49 = g7a7;
    rdi50 = *rax49;
    rsi51 = reinterpret_cast<int32_t*>(0x7b1);
    fun_7bf(rdi50);
    *reinterpret_cast<int32_t*>(rbp52 - 36) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp53 - 36) < *reinterpret_cast<int32_t*>(rbp54 - 4)) {
        *reinterpret_cast<int32_t*>(rbp55 - 40) = reinterpret_cast<int32_t>(fprintf);
        while (*reinterpret_cast<int32_t*>(rbp56 - 40) < *reinterpret_cast<int32_t*>(rbp57 - 8)) {
            __asm__("cdq ");
            if (reinterpret_cast<int1_t>((*reinterpret_cast<int32_t*>(rbp58 - 36) * *reinterpret_cast<int32_t*>(rbp59 - 4) + *reinterpret_cast<int32_t*>(rbp60 - 40)) % 20 == fprintf)) {
                rax61 = g807;
                rdi62 = *rax61;
                rsi51 = reinterpret_cast<int32_t*>(0x811);
                fun_818(rdi62);
            }
            rax63 = g81f;
            rdi64 = *rax63;
            rcx16 = *reinterpret_cast<int32_t*>(rbp65 - 40);
            *rdi64 = *rsi51;
            rsi51 = reinterpret_cast<int32_t*>(0x844);
            fun_84b(rdi64 + 1);
            *reinterpret_cast<int32_t*>(rbp66 - 40) = *reinterpret_cast<int32_t*>(rbp67 - 40) + 1;
        }
        *reinterpret_cast<int32_t*>(rbp68 - 36) = *reinterpret_cast<int32_t*>(rbp69 - 36) + 1;
    }
    rax70 = g873;
    rdi71 = *rax70;
    fun_88b(rdi71, 0x87d, 0x884, rcx16);
    goto v72;
}

void fun_10c(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8) {
    int64_t rdi6;
    int64_t rbp7;
    int64_t v8;

    rdi6 = *reinterpret_cast<int64_t*>(rbp7 - 64);
    fun_115(rdi6, rsi, rdx, rcx, r8);
    goto v8;
}

void fun_69d(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t* rax5;
    int64_t rdi6;
    int64_t* rax7;
    int64_t rdi8;
    int32_t* rsi9;
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
    int32_t** rax21;
    int32_t* rdi22;
    int64_t rbp23;
    int64_t rbp24;
    int64_t rbp25;
    int64_t rbp26;
    int64_t rbp27;
    int64_t* rax28;
    int64_t rdi29;
    int64_t* rax30;
    int64_t rdi31;
    int32_t* rsi32;
    int64_t rbp33;
    int64_t rbp34;
    int64_t rbp35;
    int64_t rbp36;
    int64_t rbp37;
    int64_t rbp38;
    int64_t rbp39;
    int64_t rbp40;
    int64_t rbp41;
    int64_t* rax42;
    int64_t rdi43;
    int32_t** rax44;
    int32_t* rdi45;
    int64_t rbp46;
    int64_t rbp47;
    int64_t rbp48;
    int64_t rbp49;
    int64_t rbp50;
    int64_t* rax51;
    int64_t rdi52;
    int64_t v53;

    rax5 = g6a4;
    rdi6 = *rax5;
    fun_6b5(rdi6, 0x6ae, rdx, rcx);
    rax7 = g6bc;
    rdi8 = *rax7;
    rsi9 = reinterpret_cast<int32_t*>(0x6c6);
    fun_6d4(rdi8);
    *reinterpret_cast<int32_t*>(rbp10 - 36) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp11 - 36) < *reinterpret_cast<int32_t*>(rbp12 - 4)) {
        *reinterpret_cast<int32_t*>(rbp13 - 40) = reinterpret_cast<int32_t>(fprintf);
        while (*reinterpret_cast<int32_t*>(rbp14 - 40) < *reinterpret_cast<int32_t*>(rbp15 - 8)) {
            __asm__("cdq ");
            if (reinterpret_cast<int1_t>((*reinterpret_cast<int32_t*>(rbp16 - 36) * *reinterpret_cast<int32_t*>(rbp17 - 4) + *reinterpret_cast<int32_t*>(rbp18 - 40)) % 20 == fprintf)) {
                rax19 = g71c;
                rdi20 = *rax19;
                rsi9 = reinterpret_cast<int32_t*>(0x726);
                fun_72d(rdi20);
            }
            rax21 = g734;
            rdi22 = *rax21;
            rcx = *reinterpret_cast<int32_t*>(rbp23 - 40);
            *rdi22 = *rsi9;
            rsi9 = reinterpret_cast<int32_t*>(0x759);
            fun_760(rdi22 + 1);
            *reinterpret_cast<int32_t*>(rbp24 - 40) = *reinterpret_cast<int32_t*>(rbp25 - 40) + 1;
        }
        *reinterpret_cast<int32_t*>(rbp26 - 36) = *reinterpret_cast<int32_t*>(rbp27 - 36) + 1;
    }
    rax28 = g788;
    rdi29 = *rax28;
    fun_7a0(rdi29, 0x792, 0x799, rcx);
    rax30 = g7a7;
    rdi31 = *rax30;
    rsi32 = reinterpret_cast<int32_t*>(0x7b1);
    fun_7bf(rdi31);
    *reinterpret_cast<int32_t*>(rbp33 - 36) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp34 - 36) < *reinterpret_cast<int32_t*>(rbp35 - 4)) {
        *reinterpret_cast<int32_t*>(rbp36 - 40) = reinterpret_cast<int32_t>(fprintf);
        while (*reinterpret_cast<int32_t*>(rbp37 - 40) < *reinterpret_cast<int32_t*>(rbp38 - 8)) {
            __asm__("cdq ");
            if (reinterpret_cast<int1_t>((*reinterpret_cast<int32_t*>(rbp39 - 36) * *reinterpret_cast<int32_t*>(rbp40 - 4) + *reinterpret_cast<int32_t*>(rbp41 - 40)) % 20 == fprintf)) {
                rax42 = g807;
                rdi43 = *rax42;
                rsi32 = reinterpret_cast<int32_t*>(0x811);
                fun_818(rdi43);
            }
            rax44 = g81f;
            rdi45 = *rax44;
            rcx = *reinterpret_cast<int32_t*>(rbp46 - 40);
            *rdi45 = *rsi32;
            rsi32 = reinterpret_cast<int32_t*>(0x844);
            fun_84b(rdi45 + 1);
            *reinterpret_cast<int32_t*>(rbp47 - 40) = *reinterpret_cast<int32_t*>(rbp48 - 40) + 1;
        }
        *reinterpret_cast<int32_t*>(rbp49 - 36) = *reinterpret_cast<int32_t*>(rbp50 - 36) + 1;
    }
    rax51 = g873;
    rdi52 = *rax51;
    fun_88b(rdi52, 0x87d, 0x884, rcx);
    goto v53;
}

void fun_7a0(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t* rax5;
    int64_t rdi6;
    int32_t* rsi7;
    int64_t rbp8;
    int64_t rbp9;
    int64_t rbp10;
    int64_t rbp11;
    int64_t rbp12;
    int64_t rbp13;
    int64_t rbp14;
    int64_t rbp15;
    int64_t rbp16;
    int64_t* rax17;
    int64_t rdi18;
    int32_t** rax19;
    int32_t* rdi20;
    int64_t rbp21;
    int64_t rbp22;
    int64_t rbp23;
    int64_t rbp24;
    int64_t rbp25;
    int64_t* rax26;
    int64_t rdi27;
    int64_t v28;

    rax5 = g7a7;
    rdi6 = *rax5;
    rsi7 = reinterpret_cast<int32_t*>(0x7b1);
    fun_7bf(rdi6);
    *reinterpret_cast<int32_t*>(rbp8 - 36) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp9 - 36) < *reinterpret_cast<int32_t*>(rbp10 - 4)) {
        *reinterpret_cast<int32_t*>(rbp11 - 40) = reinterpret_cast<int32_t>(fprintf);
        while (*reinterpret_cast<int32_t*>(rbp12 - 40) < *reinterpret_cast<int32_t*>(rbp13 - 8)) {
            __asm__("cdq ");
            if (reinterpret_cast<int1_t>((*reinterpret_cast<int32_t*>(rbp14 - 36) * *reinterpret_cast<int32_t*>(rbp15 - 4) + *reinterpret_cast<int32_t*>(rbp16 - 40)) % 20 == fprintf)) {
                rax17 = g807;
                rdi18 = *rax17;
                rsi7 = reinterpret_cast<int32_t*>(0x811);
                fun_818(rdi18);
            }
            rax19 = g81f;
            rdi20 = *rax19;
            rcx = *reinterpret_cast<int32_t*>(rbp21 - 40);
            *rdi20 = *rsi7;
            rsi7 = reinterpret_cast<int32_t*>(0x844);
            fun_84b(rdi20 + 1);
            *reinterpret_cast<int32_t*>(rbp22 - 40) = *reinterpret_cast<int32_t*>(rbp23 - 40) + 1;
        }
        *reinterpret_cast<int32_t*>(rbp24 - 36) = *reinterpret_cast<int32_t*>(rbp25 - 36) + 1;
    }
    rax26 = g873;
    rdi27 = *rax26;
    fun_88b(rdi27, 0x87d, 0x884, rcx);
    goto v28;
}

void fun_88b(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t v5;

    goto v5;
}

void fun_115(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8) {
    int64_t v6;

    goto v6;
}

void fun_6b5(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t* rax5;
    int64_t rdi6;
    int32_t* rsi7;
    int64_t rbp8;
    int64_t rbp9;
    int64_t rbp10;
    int64_t rbp11;
    int64_t rbp12;
    int64_t rbp13;
    int64_t rbp14;
    int64_t rbp15;
    int64_t rbp16;
    int64_t* rax17;
    int64_t rdi18;
    int32_t** rax19;
    int32_t* rdi20;
    int64_t rbp21;
    int64_t rbp22;
    int64_t rbp23;
    int64_t rbp24;
    int64_t rbp25;
    int64_t* rax26;
    int64_t rdi27;
    int64_t* rax28;
    int64_t rdi29;
    int32_t* rsi30;
    int64_t rbp31;
    int64_t rbp32;
    int64_t rbp33;
    int64_t rbp34;
    int64_t rbp35;
    int64_t rbp36;
    int64_t rbp37;
    int64_t rbp38;
    int64_t rbp39;
    int64_t* rax40;
    int64_t rdi41;
    int32_t** rax42;
    int32_t* rdi43;
    int64_t rbp44;
    int64_t rbp45;
    int64_t rbp46;
    int64_t rbp47;
    int64_t rbp48;
    int64_t* rax49;
    int64_t rdi50;
    int64_t v51;

    rax5 = g6bc;
    rdi6 = *rax5;
    rsi7 = reinterpret_cast<int32_t*>(0x6c6);
    fun_6d4(rdi6);
    *reinterpret_cast<int32_t*>(rbp8 - 36) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp9 - 36) < *reinterpret_cast<int32_t*>(rbp10 - 4)) {
        *reinterpret_cast<int32_t*>(rbp11 - 40) = reinterpret_cast<int32_t>(fprintf);
        while (*reinterpret_cast<int32_t*>(rbp12 - 40) < *reinterpret_cast<int32_t*>(rbp13 - 8)) {
            __asm__("cdq ");
            if (reinterpret_cast<int1_t>((*reinterpret_cast<int32_t*>(rbp14 - 36) * *reinterpret_cast<int32_t*>(rbp15 - 4) + *reinterpret_cast<int32_t*>(rbp16 - 40)) % 20 == fprintf)) {
                rax17 = g71c;
                rdi18 = *rax17;
                rsi7 = reinterpret_cast<int32_t*>(0x726);
                fun_72d(rdi18);
            }
            rax19 = g734;
            rdi20 = *rax19;
            rcx = *reinterpret_cast<int32_t*>(rbp21 - 40);
            *rdi20 = *rsi7;
            rsi7 = reinterpret_cast<int32_t*>(0x759);
            fun_760(rdi20 + 1);
            *reinterpret_cast<int32_t*>(rbp22 - 40) = *reinterpret_cast<int32_t*>(rbp23 - 40) + 1;
        }
        *reinterpret_cast<int32_t*>(rbp24 - 36) = *reinterpret_cast<int32_t*>(rbp25 - 36) + 1;
    }
    rax26 = g788;
    rdi27 = *rax26;
    fun_7a0(rdi27, 0x792, 0x799, rcx);
    rax28 = g7a7;
    rdi29 = *rax28;
    rsi30 = reinterpret_cast<int32_t*>(0x7b1);
    fun_7bf(rdi29);
    *reinterpret_cast<int32_t*>(rbp31 - 36) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp32 - 36) < *reinterpret_cast<int32_t*>(rbp33 - 4)) {
        *reinterpret_cast<int32_t*>(rbp34 - 40) = reinterpret_cast<int32_t>(fprintf);
        while (*reinterpret_cast<int32_t*>(rbp35 - 40) < *reinterpret_cast<int32_t*>(rbp36 - 8)) {
            __asm__("cdq ");
            if (reinterpret_cast<int1_t>((*reinterpret_cast<int32_t*>(rbp37 - 36) * *reinterpret_cast<int32_t*>(rbp38 - 4) + *reinterpret_cast<int32_t*>(rbp39 - 40)) % 20 == fprintf)) {
                rax40 = g807;
                rdi41 = *rax40;
                rsi30 = reinterpret_cast<int32_t*>(0x811);
                fun_818(rdi41);
            }
            rax42 = g81f;
            rdi43 = *rax42;
            rcx = *reinterpret_cast<int32_t*>(rbp44 - 40);
            *rdi43 = *rsi30;
            rsi30 = reinterpret_cast<int32_t*>(0x844);
            fun_84b(rdi43 + 1);
            *reinterpret_cast<int32_t*>(rbp45 - 40) = *reinterpret_cast<int32_t*>(rbp46 - 40) + 1;
        }
        *reinterpret_cast<int32_t*>(rbp47 - 36) = *reinterpret_cast<int32_t*>(rbp48 - 36) + 1;
    }
    rax49 = g873;
    rdi50 = *rax49;
    fun_88b(rdi50, 0x87d, 0x884, rcx);
    goto v51;
}

void fun_7bf(int64_t rdi) {
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
    int64_t v24;

    *reinterpret_cast<int32_t*>(rbp2 - 36) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp3 - 36) < *reinterpret_cast<int32_t*>(rbp4 - 4)) {
        *reinterpret_cast<int32_t*>(rbp5 - 40) = reinterpret_cast<int32_t>(fprintf);
        while (*reinterpret_cast<int32_t*>(rbp6 - 40) < *reinterpret_cast<int32_t*>(rbp7 - 8)) {
            __asm__("cdq ");
            if (reinterpret_cast<int1_t>((*reinterpret_cast<int32_t*>(rbp8 - 36) * *reinterpret_cast<int32_t*>(rbp9 - 4) + *reinterpret_cast<int32_t*>(rbp10 - 40)) % 20 == fprintf)) {
                rax11 = g807;
                rdi12 = *rax11;
                rsi13 = reinterpret_cast<int32_t*>(0x811);
                fun_818(rdi12);
            }
            rax14 = g81f;
            rdi15 = *rax14;
            rcx16 = *reinterpret_cast<int32_t*>(rbp17 - 40);
            *rdi15 = *rsi13;
            rsi13 = reinterpret_cast<int32_t*>(0x844);
            fun_84b(rdi15 + 1);
            *reinterpret_cast<int32_t*>(rbp18 - 40) = *reinterpret_cast<int32_t*>(rbp19 - 40) + 1;
        }
        *reinterpret_cast<int32_t*>(rbp20 - 36) = *reinterpret_cast<int32_t*>(rbp21 - 36) + 1;
    }
    rax22 = g873;
    rdi23 = *rax22;
    fun_88b(rdi23, 0x87d, 0x884, rcx16);
    goto v24;
}

void fun_6d4(int64_t rdi) {
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
    int32_t* rsi26;
    int64_t rbp27;
    int64_t rbp28;
    int64_t rbp29;
    int64_t rbp30;
    int64_t rbp31;
    int64_t rbp32;
    int64_t rbp33;
    int64_t rbp34;
    int64_t rbp35;
    int64_t* rax36;
    int64_t rdi37;
    int32_t** rax38;
    int32_t* rdi39;
    int64_t rbp40;
    int64_t rbp41;
    int64_t rbp42;
    int64_t rbp43;
    int64_t rbp44;
    int64_t* rax45;
    int64_t rdi46;
    int64_t v47;

    *reinterpret_cast<int32_t*>(rbp2 - 36) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp3 - 36) < *reinterpret_cast<int32_t*>(rbp4 - 4)) {
        *reinterpret_cast<int32_t*>(rbp5 - 40) = reinterpret_cast<int32_t>(fprintf);
        while (*reinterpret_cast<int32_t*>(rbp6 - 40) < *reinterpret_cast<int32_t*>(rbp7 - 8)) {
            __asm__("cdq ");
            if (reinterpret_cast<int1_t>((*reinterpret_cast<int32_t*>(rbp8 - 36) * *reinterpret_cast<int32_t*>(rbp9 - 4) + *reinterpret_cast<int32_t*>(rbp10 - 40)) % 20 == fprintf)) {
                rax11 = g71c;
                rdi12 = *rax11;
                rsi13 = reinterpret_cast<int32_t*>(0x726);
                fun_72d(rdi12);
            }
            rax14 = g734;
            rdi15 = *rax14;
            rcx16 = *reinterpret_cast<int32_t*>(rbp17 - 40);
            *rdi15 = *rsi13;
            rsi13 = reinterpret_cast<int32_t*>(0x759);
            fun_760(rdi15 + 1);
            *reinterpret_cast<int32_t*>(rbp18 - 40) = *reinterpret_cast<int32_t*>(rbp19 - 40) + 1;
        }
        *reinterpret_cast<int32_t*>(rbp20 - 36) = *reinterpret_cast<int32_t*>(rbp21 - 36) + 1;
    }
    rax22 = g788;
    rdi23 = *rax22;
    fun_7a0(rdi23, 0x792, 0x799, rcx16);
    rax24 = g7a7;
    rdi25 = *rax24;
    rsi26 = reinterpret_cast<int32_t*>(0x7b1);
    fun_7bf(rdi25);
    *reinterpret_cast<int32_t*>(rbp27 - 36) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp28 - 36) < *reinterpret_cast<int32_t*>(rbp29 - 4)) {
        *reinterpret_cast<int32_t*>(rbp30 - 40) = reinterpret_cast<int32_t>(fprintf);
        while (*reinterpret_cast<int32_t*>(rbp31 - 40) < *reinterpret_cast<int32_t*>(rbp32 - 8)) {
            __asm__("cdq ");
            if (reinterpret_cast<int1_t>((*reinterpret_cast<int32_t*>(rbp33 - 36) * *reinterpret_cast<int32_t*>(rbp34 - 4) + *reinterpret_cast<int32_t*>(rbp35 - 40)) % 20 == fprintf)) {
                rax36 = g807;
                rdi37 = *rax36;
                rsi26 = reinterpret_cast<int32_t*>(0x811);
                fun_818(rdi37);
            }
            rax38 = g81f;
            rdi39 = *rax38;
            rcx16 = *reinterpret_cast<int32_t*>(rbp40 - 40);
            *rdi39 = *rsi26;
            rsi26 = reinterpret_cast<int32_t*>(0x844);
            fun_84b(rdi39 + 1);
            *reinterpret_cast<int32_t*>(rbp41 - 40) = *reinterpret_cast<int32_t*>(rbp42 - 40) + 1;
        }
        *reinterpret_cast<int32_t*>(rbp43 - 36) = *reinterpret_cast<int32_t*>(rbp44 - 36) + 1;
    }
    rax45 = g873;
    rdi46 = *rax45;
    fun_88b(rdi46, 0x87d, 0x884, rcx16);
    goto v47;
}

void fprintf() {
}

void fun_78(int32_t edi, int32_t esi, int32_t edx) {
    int64_t rcx4;
    int64_t rbp5;
    int64_t r8_6;
    int64_t rbp7;
    int64_t r9_8;
    int64_t rbp9;
    int64_t v10;
    int64_t rbp11;
    int32_t edi12;
    int64_t rbp13;
    int32_t esi14;
    int64_t rbp15;
    int64_t rdx16;
    int64_t rbp17;
    int64_t rcx18;
    int64_t rbp19;
    int64_t r8_20;
    int64_t rbp21;
    int64_t r9_22;
    int64_t rbp23;
    int64_t v24;
    int64_t rbp25;
    int64_t rbp26;
    int64_t rdi27;
    int64_t rbp28;

    __asm__("in al, 0x48");
    *reinterpret_cast<int32_t*>(&rcx4) = *reinterpret_cast<int32_t*>(rbp5 - 40);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx4) + 4) = reinterpret_cast<int32_t>(fprintf);
    r8_6 = *reinterpret_cast<int64_t*>(rbp7 - 48);
    r9_8 = *reinterpret_cast<int64_t*>(rbp9 - 56);
    v10 = *reinterpret_cast<int64_t*>(rbp11 - 64);
    init_array(edi, esi, edx, rcx4, r8_6, r9_8, v10);
    edi12 = *reinterpret_cast<int32_t*>(rbp13 - 20);
    esi14 = *reinterpret_cast<int32_t*>(rbp15 - 24);
    *reinterpret_cast<int32_t*>(&rdx16) = *reinterpret_cast<int32_t*>(rbp17 - 28);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx16) + 4) = reinterpret_cast<int32_t>(fprintf);
    rcx18 = *reinterpret_cast<int64_t*>(rbp19 - 40);
    r8_20 = *reinterpret_cast<int64_t*>(rbp21 - 48);
    r9_22 = *reinterpret_cast<int64_t*>(rbp23 - 56);
    v24 = *reinterpret_cast<int64_t*>(rbp25 - 64);
    kernel_fdtd_2d(edi12, esi14, *reinterpret_cast<int32_t*>(&rdx16), rcx18, r8_20, r9_22, v24);
    if (*reinterpret_cast<int32_t*>(rbp26 - 4) <= 42) 
        goto 0xf1;
    rdi27 = **reinterpret_cast<int64_t**>(rbp28 - 16);
    fun_d1(rdi27, 0xcc, rdx16, rcx18, r8_20, r9_22, v24);
}

