
void fun_252(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7);

int32_t fun_234(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7);

void fprintf(int32_t* rdi, int32_t* rsi);

void fun_25b(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7);

void fun_264(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7);

void fun_26d(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7);

void fun_276(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7);

void print_array(int32_t edi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7);

void fun_217(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7) {
    int64_t rbp8;
    int64_t rdi9;
    int64_t rbp10;
    int64_t rdi11;
    int64_t rbp12;
    int32_t eax13;
    int64_t rdi14;
    int64_t rbp15;
    int64_t rdi16;
    int64_t rbp17;
    int64_t rdi18;
    int64_t rbp19;
    int64_t rdi20;
    int64_t rbp21;
    int64_t v22;
    int32_t edi23;
    int64_t rbp24;
    int64_t rbp25;

    if (*reinterpret_cast<int32_t*>(rbp8 - 4) <= 42) {
        addr_249_2:
        rdi9 = *reinterpret_cast<int64_t*>(rbp10 - 48);
        fun_252(rdi9, rsi, rdx, rcx, r8, r9, __return_address());
    } else {
        rdi11 = **reinterpret_cast<int64_t**>(rbp12 - 16);
        rsi = 0x22f;
        eax13 = fun_234(rdi11, 0x22f, rdx, rcx, r8, r9, __return_address());
        if (!reinterpret_cast<int1_t>(eax13 == fprintf)) 
            goto addr_249_2; else 
            goto addr_23d_5;
    }
    rdi14 = *reinterpret_cast<int64_t*>(rbp15 - 56);
    fun_25b(rdi14, rsi, rdx, rcx, r8, r9, __return_address());
    rdi16 = *reinterpret_cast<int64_t*>(rbp17 - 64);
    fun_264(rdi16, rsi, rdx, rcx, r8, r9, __return_address());
    rdi18 = *reinterpret_cast<int64_t*>(rbp19 - 72);
    fun_26d(rdi18, rsi, rdx, rcx, r8, r9, __return_address());
    rdi20 = *reinterpret_cast<int64_t*>(rbp21 - 80);
    fun_276(rdi20, rsi, rdx, rcx, r8, r9, __return_address());
    goto v22;
    addr_23d_5:
    edi23 = *reinterpret_cast<int32_t*>(rbp24 - 20);
    rsi = *reinterpret_cast<int64_t*>(rbp25 - 80);
    print_array(edi23, rsi, rdx, rcx, r8, r9, __return_address());
    goto addr_249_2;
}

int32_t fun_234(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7) {
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
        print_array(edi9, rsi, rdx, rcx, r8, r9, __return_address());
    }
    rdi12 = *reinterpret_cast<int64_t*>(rbp13 - 48);
    fun_252(rdi12, rsi, rdx, rcx, r8, r9, __return_address());
    rdi14 = *reinterpret_cast<int64_t*>(rbp15 - 56);
    fun_25b(rdi14, rsi, rdx, rcx, r8, r9, __return_address());
    rdi16 = *reinterpret_cast<int64_t*>(rbp17 - 64);
    fun_264(rdi16, rsi, rdx, rcx, r8, r9, __return_address());
    rdi18 = *reinterpret_cast<int64_t*>(rbp19 - 72);
    fun_26d(rdi18, rsi, rdx, rcx, r8, r9, __return_address());
    rdi20 = *reinterpret_cast<int64_t*>(rbp21 - 80);
    fun_276(rdi20, rsi, rdx, rcx, r8, r9, __return_address());
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

void print_array(int32_t edi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7) {
    int32_t v8;
    int64_t* rax9;
    int64_t rdi10;
    int64_t* rax11;
    int64_t rdi12;
    int32_t* rsi13;
    int32_t v14;
    int64_t* rax15;
    int64_t rdi16;
    int32_t** rax17;
    int32_t* rdi18;
    int64_t* rax19;
    int64_t rdi20;
    int64_t* rax21;
    int64_t rdi22;

    v8 = edi;
    rax9 = g3b6;
    rdi10 = *rax9;
    fun_3c7(rdi10, 0x3c0);
    rax11 = g3ce;
    rdi12 = *rax11;
    rsi13 = reinterpret_cast<int32_t*>(0x3d8);
    fun_3e6(rdi12);
    v14 = reinterpret_cast<int32_t>(fprintf);
    while (v14 < v8) {
        __asm__("cdq ");
        if (reinterpret_cast<int1_t>(v14 % 20 == fprintf)) {
            rax15 = g414;
            rdi16 = *rax15;
            rsi13 = reinterpret_cast<int32_t*>(0x41e);
            fun_425(rdi16);
        }
        rax17 = g42c;
        rdi18 = *rax17;
        rcx = v14;
        *rdi18 = *rsi13;
        rsi13 = reinterpret_cast<int32_t*>(0x443);
        fun_44a(rdi18 + 1);
        ++v14;
    }
    rax19 = g45f;
    rdi20 = *rax19;
    fun_477(rdi20, 0x469, 0x470, rcx);
    rax21 = g47e;
    rdi22 = *rax21;
    fun_48f(rdi22, 0x488, 0x470, rcx);
    return;
}

void fun_252(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7) {
    int64_t rdi8;
    int64_t rbp9;
    int64_t rdi10;
    int64_t rbp11;
    int64_t rdi12;
    int64_t rbp13;
    int64_t rdi14;
    int64_t rbp15;
    int64_t v16;

    rdi8 = *reinterpret_cast<int64_t*>(rbp9 - 56);
    fun_25b(rdi8, rsi, rdx, rcx, r8, r9, __return_address());
    rdi10 = *reinterpret_cast<int64_t*>(rbp11 - 64);
    fun_264(rdi10, rsi, rdx, rcx, r8, r9, __return_address());
    rdi12 = *reinterpret_cast<int64_t*>(rbp13 - 72);
    fun_26d(rdi12, rsi, rdx, rcx, r8, r9, __return_address());
    rdi14 = *reinterpret_cast<int64_t*>(rbp15 - 80);
    fun_276(rdi14, rsi, rdx, rcx, r8, r9, __return_address());
    goto v16;
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

void fun_25b(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7) {
    int64_t rdi8;
    int64_t rbp9;
    int64_t rdi10;
    int64_t rbp11;
    int64_t rdi12;
    int64_t rbp13;
    int64_t v14;

    rdi8 = *reinterpret_cast<int64_t*>(rbp9 - 64);
    fun_264(rdi8, rsi, rdx, rcx, r8, r9, __return_address());
    rdi10 = *reinterpret_cast<int64_t*>(rbp11 - 72);
    fun_26d(rdi10, rsi, rdx, rcx, r8, r9, __return_address());
    rdi12 = *reinterpret_cast<int64_t*>(rbp13 - 80);
    fun_276(rdi12, rsi, rdx, rcx, r8, r9, __return_address());
    goto v14;
}

int64_t fun_198(int64_t rdi, int64_t rsi);

int64_t fun_1ab(int64_t rdi, int64_t rsi);

int64_t fun_1be(int64_t rdi, int64_t rsi);

int64_t fun_1d1(int64_t rdi, int64_t rsi);

struct s0 {
    int32_t f0;
    int32_t f4;
};

struct s1 {
    int32_t f0;
    int32_t f4;
};

void init_array(struct s0* rdi, struct s1* rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7);

struct s2 {
    int32_t f0;
    int32_t f4;
};

void fun_185(int64_t rdi, int64_t rsi) {
    int64_t rbp3;
    int64_t rax4;
    int64_t rax5;
    int64_t rbp6;
    int64_t rax7;
    int64_t rbp8;
    int64_t rax9;
    int64_t rbp10;
    int64_t rax11;
    int64_t rbp12;
    struct s0* rdi13;
    int64_t rbp14;
    int64_t rcx15;
    int64_t rbp16;
    int64_t r8_17;
    int64_t rbp18;
    int64_t r9_19;
    int64_t rbp20;
    struct s1* rsi21;
    int64_t rbp22;
    int64_t rbp23;
    struct s2* rdi24;
    int64_t rbp25;
    int32_t* rdi26;
    int64_t rsi27;
    int64_t rbp28;
    int64_t rdx29;
    int64_t rbp30;
    int64_t rcx31;
    int64_t rbp32;
    int64_t r8_33;
    int64_t rbp34;
    int64_t r9_35;
    int64_t rbp36;
    int64_t rbp37;
    int64_t rdi38;
    int64_t rbp39;
    int64_t rdi40;
    int64_t rbp41;
    int32_t eax42;
    int64_t rdi43;
    int64_t rbp44;
    int64_t rdi45;
    int64_t rbp46;
    int64_t rdi47;
    int64_t rbp48;
    int64_t rdi49;
    int64_t rbp50;
    int64_t v51;
    int32_t edi52;
    int64_t rbp53;
    int64_t rbp54;

    *reinterpret_cast<int64_t*>(rbp3 - 48) = rax4;
    rax5 = fun_198(0x19c990, 8);
    *reinterpret_cast<int64_t*>(rbp6 - 56) = rax5;
    rax7 = fun_1ab(0x514, 8);
    *reinterpret_cast<int64_t*>(rbp8 - 64) = rax7;
    rax9 = fun_1be(0x514, 8);
    *reinterpret_cast<int64_t*>(rbp10 - 72) = rax9;
    rax11 = fun_1d1(0x514, 8);
    *reinterpret_cast<int64_t*>(rbp12 - 80) = rax11;
    *reinterpret_cast<int32_t*>(&rdi13) = *reinterpret_cast<int32_t*>(rbp14 - 20);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi13) + 4) = reinterpret_cast<int32_t>(fprintf);
    rcx15 = *reinterpret_cast<int64_t*>(rbp16 - 48);
    r8_17 = *reinterpret_cast<int64_t*>(rbp18 - 56);
    r9_19 = *reinterpret_cast<int64_t*>(rbp20 - 72);
    rsi21 = reinterpret_cast<struct s1*>(rbp22 - 32);
    init_array(rdi13, rsi21, rbp23 - 40, rcx15, r8_17, r9_19, __return_address());
    *reinterpret_cast<int32_t*>(&rdi24) = *reinterpret_cast<int32_t*>(rbp25 - 20);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi24) + 4) = reinterpret_cast<int32_t>(fprintf);
    rdi24->f0 = rsi21->f0;
    rdi26 = &rdi24->f4;
    *rdi26 = rsi21->f4;
    rsi27 = *reinterpret_cast<int64_t*>(rbp28 - 48);
    rdx29 = *reinterpret_cast<int64_t*>(rbp30 - 56);
    rcx31 = *reinterpret_cast<int64_t*>(rbp32 - 64);
    r8_33 = *reinterpret_cast<int64_t*>(rbp34 - 72);
    r9_35 = *reinterpret_cast<int64_t*>(rbp36 - 80);
    fun_217(rdi26 + 1, rsi27, rdx29, rcx31, r8_33, r9_35, __return_address());
    if (*reinterpret_cast<int32_t*>(rbp37 - 4) <= 42) {
        addr_249_13:
        rdi38 = *reinterpret_cast<int64_t*>(rbp39 - 48);
        fun_252(rdi38, rsi27, rdx29, rcx31, r8_33, r9_35, __return_address());
    } else {
        rdi40 = **reinterpret_cast<int64_t**>(rbp41 - 16);
        rsi27 = 0x22f;
        eax42 = fun_234(rdi40, 0x22f, rdx29, rcx31, r8_33, r9_35, __return_address());
        if (!reinterpret_cast<int1_t>(eax42 == fprintf)) 
            goto addr_249_13; else 
            goto addr_23d_16;
    }
    rdi43 = *reinterpret_cast<int64_t*>(rbp44 - 56);
    fun_25b(rdi43, rsi27, rdx29, rcx31, r8_33, r9_35, __return_address());
    rdi45 = *reinterpret_cast<int64_t*>(rbp46 - 64);
    fun_264(rdi45, rsi27, rdx29, rcx31, r8_33, r9_35, __return_address());
    rdi47 = *reinterpret_cast<int64_t*>(rbp48 - 72);
    fun_26d(rdi47, rsi27, rdx29, rcx31, r8_33, r9_35, __return_address());
    rdi49 = *reinterpret_cast<int64_t*>(rbp50 - 80);
    fun_276(rdi49, rsi27, rdx29, rcx31, r8_33, r9_35, __return_address());
    goto v51;
    addr_23d_16:
    edi52 = *reinterpret_cast<int32_t*>(rbp53 - 20);
    rsi27 = *reinterpret_cast<int64_t*>(rbp54 - 80);
    print_array(edi52, rsi27, rdx29, rcx31, r8_33, r9_35, __return_address());
    goto addr_249_13;
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

void fun_264(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7) {
    int64_t rdi8;
    int64_t rbp9;
    int64_t rdi10;
    int64_t rbp11;
    int64_t v12;

    rdi8 = *reinterpret_cast<int64_t*>(rbp9 - 72);
    fun_26d(rdi8, rsi, rdx, rcx, r8, r9, __return_address());
    rdi10 = *reinterpret_cast<int64_t*>(rbp11 - 80);
    fun_276(rdi10, rsi, rdx, rcx, r8, r9, __return_address());
    goto v12;
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

struct s3 {
    int32_t f0;
    int32_t f4;
};

int64_t fun_198(int64_t rdi, int64_t rsi) {
    int64_t rbp3;
    int64_t rax4;
    int64_t rax5;
    int64_t rbp6;
    int64_t rax7;
    int64_t rbp8;
    int64_t rax9;
    int64_t rbp10;
    struct s0* rdi11;
    int64_t rbp12;
    int64_t rcx13;
    int64_t rbp14;
    int64_t r8_15;
    int64_t rbp16;
    int64_t r9_17;
    int64_t rbp18;
    struct s1* rsi19;
    int64_t rbp20;
    int64_t rbp21;
    struct s3* rdi22;
    int64_t rbp23;
    int32_t* rdi24;
    int64_t rsi25;
    int64_t rbp26;
    int64_t rdx27;
    int64_t rbp28;
    int64_t rcx29;
    int64_t rbp30;
    int64_t r8_31;
    int64_t rbp32;
    int64_t r9_33;
    int64_t rbp34;
    int64_t rbp35;
    int64_t rdi36;
    int64_t rbp37;
    int64_t rdi38;
    int64_t rbp39;
    int32_t eax40;
    int64_t rdi41;
    int64_t rbp42;
    int64_t rdi43;
    int64_t rbp44;
    int64_t rdi45;
    int64_t rbp46;
    int64_t rdi47;
    int64_t rbp48;
    int64_t v49;
    int32_t edi50;
    int64_t rbp51;
    int64_t rbp52;

    *reinterpret_cast<int64_t*>(rbp3 - 56) = rax4;
    rax5 = fun_1ab(0x514, 8);
    *reinterpret_cast<int64_t*>(rbp6 - 64) = rax5;
    rax7 = fun_1be(0x514, 8);
    *reinterpret_cast<int64_t*>(rbp8 - 72) = rax7;
    rax9 = fun_1d1(0x514, 8);
    *reinterpret_cast<int64_t*>(rbp10 - 80) = rax9;
    *reinterpret_cast<int32_t*>(&rdi11) = *reinterpret_cast<int32_t*>(rbp12 - 20);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi11) + 4) = reinterpret_cast<int32_t>(fprintf);
    rcx13 = *reinterpret_cast<int64_t*>(rbp14 - 48);
    r8_15 = *reinterpret_cast<int64_t*>(rbp16 - 56);
    r9_17 = *reinterpret_cast<int64_t*>(rbp18 - 72);
    rsi19 = reinterpret_cast<struct s1*>(rbp20 - 32);
    init_array(rdi11, rsi19, rbp21 - 40, rcx13, r8_15, r9_17, __return_address());
    *reinterpret_cast<int32_t*>(&rdi22) = *reinterpret_cast<int32_t*>(rbp23 - 20);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi22) + 4) = reinterpret_cast<int32_t>(fprintf);
    rdi22->f0 = rsi19->f0;
    rdi24 = &rdi22->f4;
    *rdi24 = rsi19->f4;
    rsi25 = *reinterpret_cast<int64_t*>(rbp26 - 48);
    rdx27 = *reinterpret_cast<int64_t*>(rbp28 - 56);
    rcx29 = *reinterpret_cast<int64_t*>(rbp30 - 64);
    r8_31 = *reinterpret_cast<int64_t*>(rbp32 - 72);
    r9_33 = *reinterpret_cast<int64_t*>(rbp34 - 80);
    fun_217(rdi24 + 1, rsi25, rdx27, rcx29, r8_31, r9_33, __return_address());
    if (*reinterpret_cast<int32_t*>(rbp35 - 4) <= 42) {
        addr_249_12:
        rdi36 = *reinterpret_cast<int64_t*>(rbp37 - 48);
        fun_252(rdi36, rsi25, rdx27, rcx29, r8_31, r9_33, __return_address());
    } else {
        rdi38 = **reinterpret_cast<int64_t**>(rbp39 - 16);
        rsi25 = 0x22f;
        eax40 = fun_234(rdi38, 0x22f, rdx27, rcx29, r8_31, r9_33, __return_address());
        if (!reinterpret_cast<int1_t>(eax40 == fprintf)) 
            goto addr_249_12; else 
            goto addr_23d_15;
    }
    rdi41 = *reinterpret_cast<int64_t*>(rbp42 - 56);
    fun_25b(rdi41, rsi25, rdx27, rcx29, r8_31, r9_33, __return_address());
    rdi43 = *reinterpret_cast<int64_t*>(rbp44 - 64);
    fun_264(rdi43, rsi25, rdx27, rcx29, r8_31, r9_33, __return_address());
    rdi45 = *reinterpret_cast<int64_t*>(rbp46 - 72);
    fun_26d(rdi45, rsi25, rdx27, rcx29, r8_31, r9_33, __return_address());
    rdi47 = *reinterpret_cast<int64_t*>(rbp48 - 80);
    fun_276(rdi47, rsi25, rdx27, rcx29, r8_31, r9_33, __return_address());
    goto v49;
    addr_23d_15:
    edi50 = *reinterpret_cast<int32_t*>(rbp51 - 20);
    rsi25 = *reinterpret_cast<int64_t*>(rbp52 - 80);
    print_array(edi50, rsi25, rdx27, rcx29, r8_31, r9_33, __return_address());
    goto addr_249_12;
}

void fun_26d(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7) {
    int64_t rdi8;
    int64_t rbp9;
    int64_t v10;

    rdi8 = *reinterpret_cast<int64_t*>(rbp9 - 80);
    fun_276(rdi8, rsi, rdx, rcx, r8, r9, __return_address());
    goto v10;
}

void fun_48f(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t v5;

    goto v5;
}

struct s4 {
    int32_t f0;
    int32_t f4;
};

int64_t fun_1ab(int64_t rdi, int64_t rsi) {
    int64_t rbp3;
    int64_t rax4;
    int64_t rax5;
    int64_t rbp6;
    int64_t rax7;
    int64_t rbp8;
    struct s0* rdi9;
    int64_t rbp10;
    int64_t rcx11;
    int64_t rbp12;
    int64_t r8_13;
    int64_t rbp14;
    int64_t r9_15;
    int64_t rbp16;
    struct s1* rsi17;
    int64_t rbp18;
    int64_t rbp19;
    struct s4* rdi20;
    int64_t rbp21;
    int32_t* rdi22;
    int64_t rsi23;
    int64_t rbp24;
    int64_t rdx25;
    int64_t rbp26;
    int64_t rcx27;
    int64_t rbp28;
    int64_t r8_29;
    int64_t rbp30;
    int64_t r9_31;
    int64_t rbp32;
    int64_t rbp33;
    int64_t rdi34;
    int64_t rbp35;
    int64_t rdi36;
    int64_t rbp37;
    int32_t eax38;
    int64_t rdi39;
    int64_t rbp40;
    int64_t rdi41;
    int64_t rbp42;
    int64_t rdi43;
    int64_t rbp44;
    int64_t rdi45;
    int64_t rbp46;
    int64_t v47;
    int32_t edi48;
    int64_t rbp49;
    int64_t rbp50;

    *reinterpret_cast<int64_t*>(rbp3 - 64) = rax4;
    rax5 = fun_1be(0x514, 8);
    *reinterpret_cast<int64_t*>(rbp6 - 72) = rax5;
    rax7 = fun_1d1(0x514, 8);
    *reinterpret_cast<int64_t*>(rbp8 - 80) = rax7;
    *reinterpret_cast<int32_t*>(&rdi9) = *reinterpret_cast<int32_t*>(rbp10 - 20);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi9) + 4) = reinterpret_cast<int32_t>(fprintf);
    rcx11 = *reinterpret_cast<int64_t*>(rbp12 - 48);
    r8_13 = *reinterpret_cast<int64_t*>(rbp14 - 56);
    r9_15 = *reinterpret_cast<int64_t*>(rbp16 - 72);
    rsi17 = reinterpret_cast<struct s1*>(rbp18 - 32);
    init_array(rdi9, rsi17, rbp19 - 40, rcx11, r8_13, r9_15, __return_address());
    *reinterpret_cast<int32_t*>(&rdi20) = *reinterpret_cast<int32_t*>(rbp21 - 20);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi20) + 4) = reinterpret_cast<int32_t>(fprintf);
    rdi20->f0 = rsi17->f0;
    rdi22 = &rdi20->f4;
    *rdi22 = rsi17->f4;
    rsi23 = *reinterpret_cast<int64_t*>(rbp24 - 48);
    rdx25 = *reinterpret_cast<int64_t*>(rbp26 - 56);
    rcx27 = *reinterpret_cast<int64_t*>(rbp28 - 64);
    r8_29 = *reinterpret_cast<int64_t*>(rbp30 - 72);
    r9_31 = *reinterpret_cast<int64_t*>(rbp32 - 80);
    fun_217(rdi22 + 1, rsi23, rdx25, rcx27, r8_29, r9_31, __return_address());
    if (*reinterpret_cast<int32_t*>(rbp33 - 4) <= 42) {
        addr_249_11:
        rdi34 = *reinterpret_cast<int64_t*>(rbp35 - 48);
        fun_252(rdi34, rsi23, rdx25, rcx27, r8_29, r9_31, __return_address());
    } else {
        rdi36 = **reinterpret_cast<int64_t**>(rbp37 - 16);
        rsi23 = 0x22f;
        eax38 = fun_234(rdi36, 0x22f, rdx25, rcx27, r8_29, r9_31, __return_address());
        if (!reinterpret_cast<int1_t>(eax38 == fprintf)) 
            goto addr_249_11; else 
            goto addr_23d_14;
    }
    rdi39 = *reinterpret_cast<int64_t*>(rbp40 - 56);
    fun_25b(rdi39, rsi23, rdx25, rcx27, r8_29, r9_31, __return_address());
    rdi41 = *reinterpret_cast<int64_t*>(rbp42 - 64);
    fun_264(rdi41, rsi23, rdx25, rcx27, r8_29, r9_31, __return_address());
    rdi43 = *reinterpret_cast<int64_t*>(rbp44 - 72);
    fun_26d(rdi43, rsi23, rdx25, rcx27, r8_29, r9_31, __return_address());
    rdi45 = *reinterpret_cast<int64_t*>(rbp46 - 80);
    fun_276(rdi45, rsi23, rdx25, rcx27, r8_29, r9_31, __return_address());
    goto v47;
    addr_23d_14:
    edi48 = *reinterpret_cast<int32_t*>(rbp49 - 20);
    rsi23 = *reinterpret_cast<int64_t*>(rbp50 - 80);
    print_array(edi48, rsi23, rdx25, rcx27, r8_29, r9_31, __return_address());
    goto addr_249_11;
}

void fun_276(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7) {
    int64_t v8;

    goto v8;
}

struct s5 {
    int32_t f0;
    int32_t f4;
};

int64_t fun_1be(int64_t rdi, int64_t rsi) {
    int64_t rbp3;
    int64_t rax4;
    int64_t rax5;
    int64_t rbp6;
    struct s0* rdi7;
    int64_t rbp8;
    int64_t rcx9;
    int64_t rbp10;
    int64_t r8_11;
    int64_t rbp12;
    int64_t r9_13;
    int64_t rbp14;
    struct s1* rsi15;
    int64_t rbp16;
    int64_t rbp17;
    struct s5* rdi18;
    int64_t rbp19;
    int32_t* rdi20;
    int64_t rsi21;
    int64_t rbp22;
    int64_t rdx23;
    int64_t rbp24;
    int64_t rcx25;
    int64_t rbp26;
    int64_t r8_27;
    int64_t rbp28;
    int64_t r9_29;
    int64_t rbp30;
    int64_t rbp31;
    int64_t rdi32;
    int64_t rbp33;
    int64_t rdi34;
    int64_t rbp35;
    int32_t eax36;
    int64_t rdi37;
    int64_t rbp38;
    int64_t rdi39;
    int64_t rbp40;
    int64_t rdi41;
    int64_t rbp42;
    int64_t rdi43;
    int64_t rbp44;
    int64_t v45;
    int32_t edi46;
    int64_t rbp47;
    int64_t rbp48;

    *reinterpret_cast<int64_t*>(rbp3 - 72) = rax4;
    rax5 = fun_1d1(0x514, 8);
    *reinterpret_cast<int64_t*>(rbp6 - 80) = rax5;
    *reinterpret_cast<int32_t*>(&rdi7) = *reinterpret_cast<int32_t*>(rbp8 - 20);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi7) + 4) = reinterpret_cast<int32_t>(fprintf);
    rcx9 = *reinterpret_cast<int64_t*>(rbp10 - 48);
    r8_11 = *reinterpret_cast<int64_t*>(rbp12 - 56);
    r9_13 = *reinterpret_cast<int64_t*>(rbp14 - 72);
    rsi15 = reinterpret_cast<struct s1*>(rbp16 - 32);
    init_array(rdi7, rsi15, rbp17 - 40, rcx9, r8_11, r9_13, __return_address());
    *reinterpret_cast<int32_t*>(&rdi18) = *reinterpret_cast<int32_t*>(rbp19 - 20);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi18) + 4) = reinterpret_cast<int32_t>(fprintf);
    rdi18->f0 = rsi15->f0;
    rdi20 = &rdi18->f4;
    *rdi20 = rsi15->f4;
    rsi21 = *reinterpret_cast<int64_t*>(rbp22 - 48);
    rdx23 = *reinterpret_cast<int64_t*>(rbp24 - 56);
    rcx25 = *reinterpret_cast<int64_t*>(rbp26 - 64);
    r8_27 = *reinterpret_cast<int64_t*>(rbp28 - 72);
    r9_29 = *reinterpret_cast<int64_t*>(rbp30 - 80);
    fun_217(rdi20 + 1, rsi21, rdx23, rcx25, r8_27, r9_29, __return_address());
    if (*reinterpret_cast<int32_t*>(rbp31 - 4) <= 42) {
        addr_249_10:
        rdi32 = *reinterpret_cast<int64_t*>(rbp33 - 48);
        fun_252(rdi32, rsi21, rdx23, rcx25, r8_27, r9_29, __return_address());
    } else {
        rdi34 = **reinterpret_cast<int64_t**>(rbp35 - 16);
        rsi21 = 0x22f;
        eax36 = fun_234(rdi34, 0x22f, rdx23, rcx25, r8_27, r9_29, __return_address());
        if (!reinterpret_cast<int1_t>(eax36 == fprintf)) 
            goto addr_249_10; else 
            goto addr_23d_13;
    }
    rdi37 = *reinterpret_cast<int64_t*>(rbp38 - 56);
    fun_25b(rdi37, rsi21, rdx23, rcx25, r8_27, r9_29, __return_address());
    rdi39 = *reinterpret_cast<int64_t*>(rbp40 - 64);
    fun_264(rdi39, rsi21, rdx23, rcx25, r8_27, r9_29, __return_address());
    rdi41 = *reinterpret_cast<int64_t*>(rbp42 - 72);
    fun_26d(rdi41, rsi21, rdx23, rcx25, r8_27, r9_29, __return_address());
    rdi43 = *reinterpret_cast<int64_t*>(rbp44 - 80);
    fun_276(rdi43, rsi21, rdx23, rcx25, r8_27, r9_29, __return_address());
    goto v45;
    addr_23d_13:
    edi46 = *reinterpret_cast<int32_t*>(rbp47 - 20);
    rsi21 = *reinterpret_cast<int64_t*>(rbp48 - 80);
    print_array(edi46, rsi21, rdx23, rcx25, r8_27, r9_29, __return_address());
    goto addr_249_10;
}

struct s6 {
    int32_t f0;
    int32_t f4;
};

int64_t fun_1d1(int64_t rdi, int64_t rsi) {
    int64_t rbp3;
    int64_t rax4;
    struct s0* rdi5;
    int64_t rbp6;
    int64_t rcx7;
    int64_t rbp8;
    int64_t r8_9;
    int64_t rbp10;
    int64_t r9_11;
    int64_t rbp12;
    struct s1* rsi13;
    int64_t rbp14;
    int64_t rbp15;
    struct s6* rdi16;
    int64_t rbp17;
    int32_t* rdi18;
    int64_t rsi19;
    int64_t rbp20;
    int64_t rdx21;
    int64_t rbp22;
    int64_t rcx23;
    int64_t rbp24;
    int64_t r8_25;
    int64_t rbp26;
    int64_t r9_27;
    int64_t rbp28;
    int64_t rbp29;
    int64_t rdi30;
    int64_t rbp31;
    int64_t rdi32;
    int64_t rbp33;
    int32_t eax34;
    int64_t rdi35;
    int64_t rbp36;
    int64_t rdi37;
    int64_t rbp38;
    int64_t rdi39;
    int64_t rbp40;
    int64_t rdi41;
    int64_t rbp42;
    int64_t v43;
    int32_t edi44;
    int64_t rbp45;
    int64_t rbp46;

    *reinterpret_cast<int64_t*>(rbp3 - 80) = rax4;
    *reinterpret_cast<int32_t*>(&rdi5) = *reinterpret_cast<int32_t*>(rbp6 - 20);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi5) + 4) = reinterpret_cast<int32_t>(fprintf);
    rcx7 = *reinterpret_cast<int64_t*>(rbp8 - 48);
    r8_9 = *reinterpret_cast<int64_t*>(rbp10 - 56);
    r9_11 = *reinterpret_cast<int64_t*>(rbp12 - 72);
    rsi13 = reinterpret_cast<struct s1*>(rbp14 - 32);
    init_array(rdi5, rsi13, rbp15 - 40, rcx7, r8_9, r9_11, __return_address());
    *reinterpret_cast<int32_t*>(&rdi16) = *reinterpret_cast<int32_t*>(rbp17 - 20);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi16) + 4) = reinterpret_cast<int32_t>(fprintf);
    rdi16->f0 = rsi13->f0;
    rdi18 = &rdi16->f4;
    *rdi18 = rsi13->f4;
    rsi19 = *reinterpret_cast<int64_t*>(rbp20 - 48);
    rdx21 = *reinterpret_cast<int64_t*>(rbp22 - 56);
    rcx23 = *reinterpret_cast<int64_t*>(rbp24 - 64);
    r8_25 = *reinterpret_cast<int64_t*>(rbp26 - 72);
    r9_27 = *reinterpret_cast<int64_t*>(rbp28 - 80);
    fun_217(rdi18 + 1, rsi19, rdx21, rcx23, r8_25, r9_27, __return_address());
    if (*reinterpret_cast<int32_t*>(rbp29 - 4) <= 42) {
        addr_249_9:
        rdi30 = *reinterpret_cast<int64_t*>(rbp31 - 48);
        fun_252(rdi30, rsi19, rdx21, rcx23, r8_25, r9_27, __return_address());
    } else {
        rdi32 = **reinterpret_cast<int64_t**>(rbp33 - 16);
        rsi19 = 0x22f;
        eax34 = fun_234(rdi32, 0x22f, rdx21, rcx23, r8_25, r9_27, __return_address());
        if (!reinterpret_cast<int1_t>(eax34 == fprintf)) 
            goto addr_249_9; else 
            goto addr_23d_12;
    }
    rdi35 = *reinterpret_cast<int64_t*>(rbp36 - 56);
    fun_25b(rdi35, rsi19, rdx21, rcx23, r8_25, r9_27, __return_address());
    rdi37 = *reinterpret_cast<int64_t*>(rbp38 - 64);
    fun_264(rdi37, rsi19, rdx21, rcx23, r8_25, r9_27, __return_address());
    rdi39 = *reinterpret_cast<int64_t*>(rbp40 - 72);
    fun_26d(rdi39, rsi19, rdx21, rcx23, r8_25, r9_27, __return_address());
    rdi41 = *reinterpret_cast<int64_t*>(rbp42 - 80);
    fun_276(rdi41, rsi19, rdx21, rcx23, r8_25, r9_27, __return_address());
    goto v43;
    addr_23d_12:
    edi44 = *reinterpret_cast<int32_t*>(rbp45 - 20);
    rsi19 = *reinterpret_cast<int64_t*>(rbp46 - 80);
    print_array(edi44, rsi19, rdx21, rcx23, r8_25, r9_27, __return_address());
    goto addr_249_9;
}

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

struct s16 {
    int32_t f0;
    int32_t f4;
};

void init_array(struct s0* rdi, struct s1* rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7) {
    int32_t v8;
    struct s7* rdi9;
    struct s8* rsi10;
    struct s9* rdi11;
    struct s10* rsi12;
    struct s11* rdi13;
    struct s12* rsi14;
    struct s13* rdi15;
    struct s14* rsi16;
    int32_t v17;
    int32_t v18;
    struct s15* rdi19;
    struct s16* rsi20;

    v8 = *reinterpret_cast<int32_t*>(&rdi);
    rdi->f0 = rsi->f0;
    rdi9 = reinterpret_cast<struct s7*>(&rdi->f4);
    rsi10 = reinterpret_cast<struct s8*>(&rsi->f4);
    rdi9->f0 = rsi10->f0;
    rdi11 = reinterpret_cast<struct s9*>(&rdi9->f4);
    rsi12 = reinterpret_cast<struct s10*>(&rsi10->f4);
    rdi11->f0 = rsi12->f0;
    rdi13 = reinterpret_cast<struct s11*>(&rdi11->f4);
    rsi14 = reinterpret_cast<struct s12*>(&rsi12->f4);
    rdi13->f0 = rsi14->f0;
    rdi15 = reinterpret_cast<struct s13*>(&rdi13->f4);
    rsi16 = reinterpret_cast<struct s14*>(&rsi14->f4);
    v17 = reinterpret_cast<int32_t>(fprintf);
    while (v17 < v8) {
        __asm__("cdq ");
        __asm__("cvtsi2sd xmm0, edx");
        __asm__("cvtsi2sd xmm1, dword [rbp-0x4]");
        __asm__("divsd xmm0, xmm1");
        rdi15->f0 = rsi16->f0;
        rdi15 = reinterpret_cast<struct s13*>(&rdi15->f4);
        rsi16 = reinterpret_cast<struct s14*>(&rsi16->f4);
        v18 = reinterpret_cast<int32_t>(fprintf);
        while (v18 < v8) {
            __asm__("cdq ");
            __asm__("cvtsi2sd xmm0, edx");
            __asm__("cvtsi2sd xmm1, dword [rbp-0x4]");
            __asm__("divsd xmm0, xmm1");
            rdi15->f0 = rsi16->f0;
            rdi19 = reinterpret_cast<struct s15*>(&rdi15->f4);
            rsi20 = reinterpret_cast<struct s16*>(&rsi16->f4);
            __asm__("cdq ");
            __asm__("cvtsi2sd xmm0, edx");
            __asm__("cvtsi2sd xmm1, dword [rbp-0x4]");
            __asm__("divsd xmm0, xmm1");
            rdi19->f0 = rsi20->f0;
            rdi15 = reinterpret_cast<struct s13*>(&rdi19->f4);
            rsi16 = reinterpret_cast<struct s14*>(&rsi20->f4);
            ++v18;
        }
        ++v17;
    }
    return;
}

void fprintf(int32_t* rdi, int32_t* rsi) {
    *rdi = *rsi;
}

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

void fun_64(struct s17* rdi, struct s18* rsi) {
    int1_t less3;
    struct s19* rdi4;
    struct s20* rsi5;
    struct s21* rdi6;
    struct s22* rsi7;
    int64_t rbp8;
    int64_t rbp9;
    struct s19* rdi10;
    struct s20* rsi11;
    struct s21* rdi12;
    struct s22* rsi13;
    struct s23* rdi14;
    struct s24* rsi15;
    struct s25* rdi16;
    struct s26* rsi17;
    struct s27* rdi18;
    struct s28* rsi19;
    struct s29* rdi20;
    struct s30* rsi21;
    int64_t rbp22;
    int64_t rbp23;

    if (!less3) {
        rdi->f0 = rsi->f0;
        rdi4 = reinterpret_cast<struct s19*>(&rdi->f4);
        rsi5 = reinterpret_cast<struct s20*>(&rsi->f4);
        rdi4->f0 = rsi5->f0;
        rdi6 = reinterpret_cast<struct s21*>(&rdi4->f4);
        rsi7 = reinterpret_cast<struct s22*>(&rsi5->f4);
        rdi6->f0 = rsi7->f0;
        __asm__("mulsd xmm1, [rax+rcx*8]");
        __asm__("mulsd xmm0, xmm2");
        __asm__("addsd xmm0, xmm1");
        rdi6->f4 = rsi7->f4;
        *reinterpret_cast<int32_t*>(rbp8 - 68) = *reinterpret_cast<int32_t*>(rbp9 - 68) + 1;
    } else {
        rdi->f0 = rsi->f0;
        rdi10 = reinterpret_cast<struct s19*>(&rdi->f4);
        rsi11 = reinterpret_cast<struct s20*>(&rsi->f4);
        rdi10->f0 = rsi11->f0;
        rdi12 = reinterpret_cast<struct s21*>(&rdi10->f4);
        rsi13 = reinterpret_cast<struct s22*>(&rsi11->f4);
        rdi12->f0 = rsi13->f0;
        rdi14 = reinterpret_cast<struct s23*>(&rdi12->f4);
        rsi15 = reinterpret_cast<struct s24*>(&rsi13->f4);
        __asm__("mulsd xmm0, xmm2");
        __asm__("addsd xmm0, xmm1");
        rdi14->f0 = rsi15->f0;
        rdi16 = reinterpret_cast<struct s25*>(&rdi14->f4);
        rsi17 = reinterpret_cast<struct s26*>(&rsi15->f4);
        rdi16->f0 = rsi17->f0;
        rdi18 = reinterpret_cast<struct s27*>(&rdi16->f4);
        rsi19 = reinterpret_cast<struct s28*>(&rsi17->f4);
        rdi18->f0 = rsi19->f0;
        rdi20 = reinterpret_cast<struct s29*>(&rdi18->f4);
        rsi21 = reinterpret_cast<struct s30*>(&rsi19->f4);
        rdi20->f0 = rsi21->f0;
        __asm__("mulsd xmm0, xmm2");
        __asm__("addsd xmm0, xmm1");
        rdi20->f4 = rsi21->f4;
        *reinterpret_cast<int32_t*>(rbp22 - 72) = *reinterpret_cast<int32_t*>(rbp23 - 72) + 1;
    }
}

void fun_154() {
    int64_t v1;

    goto v1;
}

void submain(int32_t edi, int64_t rsi) {
    fun_185(0x19c990, 8);
}

