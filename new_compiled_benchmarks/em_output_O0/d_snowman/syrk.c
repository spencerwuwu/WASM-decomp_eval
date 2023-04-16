
void fun_1f6(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7);

int32_t fun_1d8(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7);

struct s0 {
    int32_t f0;
    int32_t f4;
};

struct s1 {
    int32_t f0;
    int32_t f4;
};

void fprintf(struct s0* rdi, struct s1* rsi);

void fun_1ff(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7);

void print_array(int32_t edi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7);

void fun_1bb(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7) {
    int64_t rbp8;
    int64_t rdi9;
    int64_t rbp10;
    int64_t rdi11;
    int64_t rbp12;
    int32_t eax13;
    int64_t rdi14;
    int64_t rbp15;
    int64_t v16;
    int32_t edi17;
    int64_t rbp18;
    int64_t rbp19;

    if (*reinterpret_cast<int32_t*>(rbp8 - 4) <= 42) {
        addr_1ed_2:
        rdi9 = *reinterpret_cast<int64_t*>(rbp10 - 48);
        fun_1f6(rdi9, rsi, rdx, rcx, r8, r9, __return_address());
    } else {
        rdi11 = **reinterpret_cast<int64_t**>(rbp12 - 16);
        rsi = 0x1d3;
        eax13 = fun_1d8(rdi11, 0x1d3, rdx, rcx, r8, r9, __return_address());
        if (!reinterpret_cast<int1_t>(eax13 == fprintf)) 
            goto addr_1ed_2; else 
            goto addr_1e1_5;
    }
    rdi14 = *reinterpret_cast<int64_t*>(rbp15 - 56);
    fun_1ff(rdi14, rsi, rdx, rcx, r8, r9, __return_address());
    goto v16;
    addr_1e1_5:
    edi17 = *reinterpret_cast<int32_t*>(rbp18 - 20);
    rsi = *reinterpret_cast<int64_t*>(rbp19 - 48);
    print_array(edi17, rsi, rdx, rcx, r8, r9, __return_address());
    goto addr_1ed_2;
}

int32_t fun_1d8(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7) {
    int32_t eax8;
    int32_t edi9;
    int64_t rbp10;
    int64_t rbp11;
    int64_t rdi12;
    int64_t rbp13;
    int64_t rdi14;
    int64_t rbp15;
    int64_t v16;

    if (reinterpret_cast<int1_t>(eax8 == fprintf)) {
        edi9 = *reinterpret_cast<int32_t*>(rbp10 - 20);
        rsi = *reinterpret_cast<int64_t*>(rbp11 - 48);
        print_array(edi9, rsi, rdx, rcx, r8, r9, __return_address());
    }
    rdi12 = *reinterpret_cast<int64_t*>(rbp13 - 48);
    fun_1f6(rdi12, rsi, rdx, rcx, r8, r9, __return_address());
    rdi14 = *reinterpret_cast<int64_t*>(rbp15 - 56);
    fun_1ff(rdi14, rsi, rdx, rcx, r8, r9, __return_address());
    goto v16;
}

int64_t* g366 = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_377(int64_t rdi, int64_t rsi);

int64_t* g37e = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_396(int64_t rdi);

int64_t* g3de = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_3ef(int64_t rdi);

int32_t** g3f6 = reinterpret_cast<int32_t**>(0x48f0458b48388b48);

void fun_422(int64_t rdi);

int64_t* g44a = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_462(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx);

int64_t* g469 = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_47a(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx);

void print_array(int32_t edi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7) {
    int32_t v8;
    int64_t* rax9;
    int64_t rdi10;
    int64_t* rax11;
    int64_t rdi12;
    int32_t* rsi13;
    int32_t v14;
    int32_t v15;
    int64_t* rax16;
    int64_t rdi17;
    int32_t** rax18;
    int32_t* rdi19;
    int64_t* rax20;
    int64_t rdi21;
    int64_t* rax22;
    int64_t rdi23;

    v8 = edi;
    rax9 = g366;
    rdi10 = *rax9;
    fun_377(rdi10, 0x370);
    rax11 = g37e;
    rdi12 = *rax11;
    rsi13 = reinterpret_cast<int32_t*>(0x388);
    fun_396(rdi12);
    v14 = reinterpret_cast<int32_t>(fprintf);
    while (v14 < v8) {
        v15 = reinterpret_cast<int32_t>(fprintf);
        while (v15 < v8) {
            __asm__("cdq ");
            if (reinterpret_cast<int1_t>((v14 * v8 + v15) % 20 == fprintf)) {
                rax16 = g3de;
                rdi17 = *rax16;
                rsi13 = reinterpret_cast<int32_t*>(0x3e8);
                fun_3ef(rdi17);
            }
            rax18 = g3f6;
            rdi19 = *rax18;
            rcx = v15;
            *rdi19 = *rsi13;
            rsi13 = reinterpret_cast<int32_t*>(0x41b);
            fun_422(rdi19 + 1);
            ++v15;
        }
        ++v14;
    }
    rax20 = g44a;
    rdi21 = *rax20;
    fun_462(rdi21, 0x454, 0x45b, rcx);
    rax22 = g469;
    rdi23 = *rax22;
    fun_47a(rdi23, 0x473, 0x45b, rcx);
    return;
}

void fun_1f6(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7) {
    int64_t rdi8;
    int64_t rbp9;
    int64_t v10;

    rdi8 = *reinterpret_cast<int64_t*>(rbp9 - 56);
    fun_1ff(rdi8, rsi, rdx, rcx, r8, r9, __return_address());
    goto v10;
}

void fun_3ef(int64_t rdi) {
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
        rax2 = g3f6;
        rdi3 = *rax2;
        rcx4 = *reinterpret_cast<int32_t*>(rbp5 - 24);
        *rdi3 = *rsi6;
        rsi6 = reinterpret_cast<int32_t*>(0x41b);
        fun_422(rdi3 + 1);
        *reinterpret_cast<int32_t*>(rbp7 - 24) = *reinterpret_cast<int32_t*>(rbp8 - 24) + 1;
        while (*reinterpret_cast<int32_t*>(rbp9 - 24) >= *reinterpret_cast<int32_t*>(rbp10 - 4)) {
            *reinterpret_cast<int32_t*>(rbp11 - 20) = *reinterpret_cast<int32_t*>(rbp12 - 20) + 1;
            if (*reinterpret_cast<int32_t*>(rbp13 - 20) >= *reinterpret_cast<int32_t*>(rbp14 - 4)) 
                goto addr_443_10;
            *reinterpret_cast<int32_t*>(rbp15 - 24) = reinterpret_cast<int32_t>(fprintf);
        }
        __asm__("cdq ");
        if (!reinterpret_cast<int1_t>((*reinterpret_cast<int32_t*>(rbp16 - 20) * *reinterpret_cast<int32_t*>(rbp17 - 4) + *reinterpret_cast<int32_t*>(rbp18 - 24)) % 20 == fprintf)) 
            continue;
        rax19 = g3de;
        rdi20 = *rax19;
        rsi6 = reinterpret_cast<int32_t*>(0x3e8);
        fun_3ef(rdi20);
    }
    addr_443_10:
    rax21 = g44a;
    rdi22 = *rax21;
    fun_462(rdi22, 0x454, 0x45b, rcx4);
    rax23 = g469;
    rdi24 = *rax23;
    fun_47a(rdi24, 0x473, 0x45b, rcx4);
    goto v25;
}

void fun_422(int64_t rdi) {
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
        while (*reinterpret_cast<int32_t*>(rbp4 - 24) >= *reinterpret_cast<int32_t*>(rbp5 - 4)) {
            *reinterpret_cast<int32_t*>(rbp6 - 20) = *reinterpret_cast<int32_t*>(rbp7 - 20) + 1;
            if (*reinterpret_cast<int32_t*>(rbp8 - 20) >= *reinterpret_cast<int32_t*>(rbp9 - 4)) 
                goto addr_443_6;
            *reinterpret_cast<int32_t*>(rbp10 - 24) = reinterpret_cast<int32_t>(fprintf);
        }
        __asm__("cdq ");
        if (reinterpret_cast<int1_t>((*reinterpret_cast<int32_t*>(rbp11 - 20) * *reinterpret_cast<int32_t*>(rbp12 - 4) + *reinterpret_cast<int32_t*>(rbp13 - 24)) % 20 == fprintf)) {
            rax14 = g3de;
            rdi15 = *rax14;
            rsi16 = reinterpret_cast<int32_t*>(0x3e8);
            fun_3ef(rdi15);
        }
        rax17 = g3f6;
        rdi18 = *rax17;
        rcx19 = *reinterpret_cast<int32_t*>(rbp20 - 24);
        *rdi18 = *rsi16;
        rsi16 = reinterpret_cast<int32_t*>(0x41b);
        fun_422(rdi18 + 1);
    }
    addr_443_6:
    rax21 = g44a;
    rdi22 = *rax21;
    fun_462(rdi22, 0x454, 0x45b, rcx19);
    rax23 = g469;
    rdi24 = *rax23;
    fun_47a(rdi24, 0x473, 0x45b, rcx19);
    goto v25;
}

void fun_377(int64_t rdi, int64_t rsi) {
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

    rax3 = g37e;
    rdi4 = *rax3;
    rsi5 = reinterpret_cast<int32_t*>(0x388);
    fun_396(rdi4);
    *reinterpret_cast<int32_t*>(rbp6 - 20) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp7 - 20) < *reinterpret_cast<int32_t*>(rbp8 - 4)) {
        *reinterpret_cast<int32_t*>(rbp9 - 24) = reinterpret_cast<int32_t>(fprintf);
        while (*reinterpret_cast<int32_t*>(rbp10 - 24) < *reinterpret_cast<int32_t*>(rbp11 - 4)) {
            __asm__("cdq ");
            if (reinterpret_cast<int1_t>((*reinterpret_cast<int32_t*>(rbp12 - 20) * *reinterpret_cast<int32_t*>(rbp13 - 4) + *reinterpret_cast<int32_t*>(rbp14 - 24)) % 20 == fprintf)) {
                rax15 = g3de;
                rdi16 = *rax15;
                rsi5 = reinterpret_cast<int32_t*>(0x3e8);
                fun_3ef(rdi16);
            }
            rax17 = g3f6;
            rdi18 = *rax17;
            rcx19 = *reinterpret_cast<int32_t*>(rbp20 - 24);
            *rdi18 = *rsi5;
            rsi5 = reinterpret_cast<int32_t*>(0x41b);
            fun_422(rdi18 + 1);
            *reinterpret_cast<int32_t*>(rbp21 - 24) = *reinterpret_cast<int32_t*>(rbp22 - 24) + 1;
        }
        *reinterpret_cast<int32_t*>(rbp23 - 20) = *reinterpret_cast<int32_t*>(rbp24 - 20) + 1;
    }
    rax25 = g44a;
    rdi26 = *rax25;
    fun_462(rdi26, 0x454, 0x45b, rcx19);
    rax27 = g469;
    rdi28 = *rax27;
    fun_47a(rdi28, 0x473, 0x45b, rcx19);
    goto v29;
}

void fun_1ff(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7) {
    int64_t v8;

    goto v8;
}

void fun_396(int64_t rdi) {
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
        while (*reinterpret_cast<int32_t*>(rbp6 - 24) < *reinterpret_cast<int32_t*>(rbp7 - 4)) {
            __asm__("cdq ");
            if (reinterpret_cast<int1_t>((*reinterpret_cast<int32_t*>(rbp8 - 20) * *reinterpret_cast<int32_t*>(rbp9 - 4) + *reinterpret_cast<int32_t*>(rbp10 - 24)) % 20 == fprintf)) {
                rax11 = g3de;
                rdi12 = *rax11;
                rsi13 = reinterpret_cast<int32_t*>(0x3e8);
                fun_3ef(rdi12);
            }
            rax14 = g3f6;
            rdi15 = *rax14;
            rcx16 = *reinterpret_cast<int32_t*>(rbp17 - 24);
            *rdi15 = *rsi13;
            rsi13 = reinterpret_cast<int32_t*>(0x41b);
            fun_422(rdi15 + 1);
            *reinterpret_cast<int32_t*>(rbp18 - 24) = *reinterpret_cast<int32_t*>(rbp19 - 24) + 1;
        }
        *reinterpret_cast<int32_t*>(rbp20 - 20) = *reinterpret_cast<int32_t*>(rbp21 - 20) + 1;
    }
    rax22 = g44a;
    rdi23 = *rax22;
    fun_462(rdi23, 0x454, 0x45b, rcx16);
    rax24 = g469;
    rdi25 = *rax24;
    fun_47a(rdi25, 0x473, 0x45b, rcx16);
    goto v26;
}

void fun_462(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t* rax5;
    int64_t rdi6;
    int64_t v7;

    rax5 = g469;
    rdi6 = *rax5;
    fun_47a(rdi6, 0x473, rdx, rcx);
    goto v7;
}

void fun_47a(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t v5;

    goto v5;
}

int64_t fun_17f(int64_t rdi, int64_t rsi);

struct s2 {
    int32_t f0;
    int32_t f4;
};

struct s3 {
    int32_t f0;
    int32_t f4;
};

void init_array(struct s2* rdi, struct s3* rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7);

struct s4 {
    int32_t f0;
    int32_t f4;
};

struct s5 {
    int32_t f0;
    int32_t f4;
};

void fun_16c(int64_t rdi, int64_t rsi) {
    int64_t rbp3;
    int64_t rax4;
    int64_t rax5;
    int64_t rbp6;
    struct s2* rdi7;
    int64_t rbp8;
    struct s3* rsi9;
    int64_t rbp10;
    int64_t r8_11;
    int64_t rbp12;
    int64_t r9_13;
    int64_t rbp14;
    int64_t rbp15;
    int64_t rbp16;
    struct s4* rdi17;
    int64_t rbp18;
    struct s5* rsi19;
    int64_t rbp20;
    int32_t* rdi21;
    int32_t* rsi22;
    int64_t rsi23;
    int64_t rdx24;
    int64_t rbp25;
    int64_t rcx26;
    int64_t rbp27;
    int64_t rbp28;
    int64_t rdi29;
    int64_t rbp30;
    int64_t rdi31;
    int64_t rbp32;
    int32_t eax33;
    int64_t rdi34;
    int64_t rbp35;
    int64_t v36;
    int32_t edi37;
    int64_t rbp38;
    int64_t rbp39;

    *reinterpret_cast<int64_t*>(rbp3 - 48) = rax4;
    rax5 = fun_17f(0x124f80, 8);
    *reinterpret_cast<int64_t*>(rbp6 - 56) = rax5;
    *reinterpret_cast<int32_t*>(&rdi7) = *reinterpret_cast<int32_t*>(rbp8 - 20);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi7) + 4) = reinterpret_cast<int32_t>(fprintf);
    *reinterpret_cast<int32_t*>(&rsi9) = *reinterpret_cast<int32_t*>(rbp10 - 24);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi9) + 4) = reinterpret_cast<int32_t>(fprintf);
    r8_11 = *reinterpret_cast<int64_t*>(rbp12 - 48);
    r9_13 = *reinterpret_cast<int64_t*>(rbp14 - 56);
    init_array(rdi7, rsi9, rbp15 - 32, rbp16 - 40, r8_11, r9_13, __return_address());
    *reinterpret_cast<int32_t*>(&rdi17) = *reinterpret_cast<int32_t*>(rbp18 - 20);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi17) + 4) = reinterpret_cast<int32_t>(fprintf);
    *reinterpret_cast<int32_t*>(&rsi19) = *reinterpret_cast<int32_t*>(rbp20 - 24);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi19) + 4) = reinterpret_cast<int32_t>(fprintf);
    rdi17->f0 = rsi19->f0;
    rdi21 = &rdi17->f4;
    rsi22 = &rsi19->f4;
    *rdi21 = *rsi22;
    rsi23 = reinterpret_cast<int64_t>(rsi22 + 1);
    rdx24 = *reinterpret_cast<int64_t*>(rbp25 - 48);
    rcx26 = *reinterpret_cast<int64_t*>(rbp27 - 56);
    fun_1bb(rdi21 + 1, rsi23, rdx24, rcx26, r8_11, r9_13, __return_address());
    if (*reinterpret_cast<int32_t*>(rbp28 - 4) <= 42) {
        addr_1ed_10:
        rdi29 = *reinterpret_cast<int64_t*>(rbp30 - 48);
        fun_1f6(rdi29, rsi23, rdx24, rcx26, r8_11, r9_13, __return_address());
    } else {
        rdi31 = **reinterpret_cast<int64_t**>(rbp32 - 16);
        rsi23 = 0x1d3;
        eax33 = fun_1d8(rdi31, 0x1d3, rdx24, rcx26, r8_11, r9_13, __return_address());
        if (!reinterpret_cast<int1_t>(eax33 == fprintf)) 
            goto addr_1ed_10; else 
            goto addr_1e1_13;
    }
    rdi34 = *reinterpret_cast<int64_t*>(rbp35 - 56);
    fun_1ff(rdi34, rsi23, rdx24, rcx26, r8_11, r9_13, __return_address());
    goto v36;
    addr_1e1_13:
    edi37 = *reinterpret_cast<int32_t*>(rbp38 - 20);
    rsi23 = *reinterpret_cast<int64_t*>(rbp39 - 48);
    print_array(edi37, rsi23, rdx24, rcx26, r8_11, r9_13, __return_address());
    goto addr_1ed_10;
}

struct s6 {
    int32_t f0;
    int32_t f4;
};

struct s7 {
    int32_t f0;
    int32_t f4;
};

int64_t fun_17f(int64_t rdi, int64_t rsi) {
    int64_t rbp3;
    int64_t rax4;
    struct s2* rdi5;
    int64_t rbp6;
    struct s3* rsi7;
    int64_t rbp8;
    int64_t r8_9;
    int64_t rbp10;
    int64_t r9_11;
    int64_t rbp12;
    int64_t rbp13;
    int64_t rbp14;
    struct s6* rdi15;
    int64_t rbp16;
    struct s7* rsi17;
    int64_t rbp18;
    int32_t* rdi19;
    int32_t* rsi20;
    int64_t rsi21;
    int64_t rdx22;
    int64_t rbp23;
    int64_t rcx24;
    int64_t rbp25;
    int64_t rbp26;
    int64_t rdi27;
    int64_t rbp28;
    int64_t rdi29;
    int64_t rbp30;
    int32_t eax31;
    int64_t rdi32;
    int64_t rbp33;
    int64_t v34;
    int32_t edi35;
    int64_t rbp36;
    int64_t rbp37;

    *reinterpret_cast<int64_t*>(rbp3 - 56) = rax4;
    *reinterpret_cast<int32_t*>(&rdi5) = *reinterpret_cast<int32_t*>(rbp6 - 20);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi5) + 4) = reinterpret_cast<int32_t>(fprintf);
    *reinterpret_cast<int32_t*>(&rsi7) = *reinterpret_cast<int32_t*>(rbp8 - 24);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi7) + 4) = reinterpret_cast<int32_t>(fprintf);
    r8_9 = *reinterpret_cast<int64_t*>(rbp10 - 48);
    r9_11 = *reinterpret_cast<int64_t*>(rbp12 - 56);
    init_array(rdi5, rsi7, rbp13 - 32, rbp14 - 40, r8_9, r9_11, __return_address());
    *reinterpret_cast<int32_t*>(&rdi15) = *reinterpret_cast<int32_t*>(rbp16 - 20);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi15) + 4) = reinterpret_cast<int32_t>(fprintf);
    *reinterpret_cast<int32_t*>(&rsi17) = *reinterpret_cast<int32_t*>(rbp18 - 24);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi17) + 4) = reinterpret_cast<int32_t>(fprintf);
    rdi15->f0 = rsi17->f0;
    rdi19 = &rdi15->f4;
    rsi20 = &rsi17->f4;
    *rdi19 = *rsi20;
    rsi21 = reinterpret_cast<int64_t>(rsi20 + 1);
    rdx22 = *reinterpret_cast<int64_t*>(rbp23 - 48);
    rcx24 = *reinterpret_cast<int64_t*>(rbp25 - 56);
    fun_1bb(rdi19 + 1, rsi21, rdx22, rcx24, r8_9, r9_11, __return_address());
    if (*reinterpret_cast<int32_t*>(rbp26 - 4) <= 42) {
        addr_1ed_9:
        rdi27 = *reinterpret_cast<int64_t*>(rbp28 - 48);
        fun_1f6(rdi27, rsi21, rdx22, rcx24, r8_9, r9_11, __return_address());
    } else {
        rdi29 = **reinterpret_cast<int64_t**>(rbp30 - 16);
        rsi21 = 0x1d3;
        eax31 = fun_1d8(rdi29, 0x1d3, rdx22, rcx24, r8_9, r9_11, __return_address());
        if (!reinterpret_cast<int1_t>(eax31 == fprintf)) 
            goto addr_1ed_9; else 
            goto addr_1e1_12;
    }
    rdi32 = *reinterpret_cast<int64_t*>(rbp33 - 56);
    fun_1ff(rdi32, rsi21, rdx22, rcx24, r8_9, r9_11, __return_address());
    goto v34;
    addr_1e1_12:
    edi35 = *reinterpret_cast<int32_t*>(rbp36 - 20);
    rsi21 = *reinterpret_cast<int64_t*>(rbp37 - 48);
    print_array(edi35, rsi21, rdx22, rcx24, r8_9, r9_11, __return_address());
    goto addr_1ed_9;
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

void init_array(struct s2* rdi, struct s3* rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7) {
    int32_t v8;
    int32_t v9;
    struct s8* rdi10;
    struct s9* rsi11;
    struct s10* rdi12;
    struct s11* rsi13;
    struct s12* rdi14;
    struct s13* rsi15;
    int32_t* rdi16;
    int32_t* rsi17;
    int32_t v18;
    int32_t v19;
    int32_t v20;
    int32_t v21;

    v8 = *reinterpret_cast<int32_t*>(&rdi);
    v9 = *reinterpret_cast<int32_t*>(&rsi);
    rdi->f0 = rsi->f0;
    rdi10 = reinterpret_cast<struct s8*>(&rdi->f4);
    rsi11 = reinterpret_cast<struct s9*>(&rsi->f4);
    rdi10->f0 = rsi11->f0;
    rdi12 = reinterpret_cast<struct s10*>(&rdi10->f4);
    rsi13 = reinterpret_cast<struct s11*>(&rsi11->f4);
    rdi12->f0 = rsi13->f0;
    rdi14 = reinterpret_cast<struct s12*>(&rdi12->f4);
    rsi15 = reinterpret_cast<struct s13*>(&rsi13->f4);
    rdi14->f0 = rsi15->f0;
    rdi16 = &rdi14->f4;
    rsi17 = &rsi15->f4;
    v18 = reinterpret_cast<int32_t>(fprintf);
    while (v18 < v8) {
        v19 = reinterpret_cast<int32_t>(fprintf);
        while (v19 < v9) {
            __asm__("cdq ");
            __asm__("cvtsi2sd xmm0, edx");
            __asm__("cvtsi2sd xmm1, dword [rbp-0x4]");
            __asm__("divsd xmm0, xmm1");
            *rdi16 = *rsi17;
            ++rdi16;
            ++rsi17;
            ++v19;
        }
        ++v18;
    }
    v20 = reinterpret_cast<int32_t>(fprintf);
    while (v20 < v8) {
        v21 = reinterpret_cast<int32_t>(fprintf);
        while (v21 < v8) {
            __asm__("cdq ");
            __asm__("cvtsi2sd xmm0, edx");
            __asm__("cvtsi2sd xmm1, dword [rbp-0x8]");
            __asm__("divsd xmm0, xmm1");
            *rdi16 = *rsi17;
            ++rdi16;
            ++rsi17;
            ++v21;
        }
        ++v20;
    }
    return;
}

void fprintf(struct s0* rdi, struct s1* rsi) {
    rdi->f0 = rsi->f0;
    rdi->f4 = rsi->f4;
}

void fun_64() {
    uint32_t* rax1;
    int64_t rcx2;
    int32_t* rax3;
    int64_t rcx4;
    int32_t eax5;
    uint1_t cf6;
    int64_t rbp7;
    int64_t rbp8;

    rax1[rcx2 * 2] = rax3[rcx4 * 2] + eax5 + cf6;
    *reinterpret_cast<int32_t*>(rbp7 - 48) = *reinterpret_cast<int32_t*>(rbp8 - 48) + 1;
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

struct s20 {
    int32_t f0;
    int32_t f4;
};

struct s21 {
    int32_t f0;
    int32_t f4;
};

void fun_75() {
    int64_t rbp1;
    int64_t rbp2;
    int64_t rbp3;
    int64_t rbp4;
    int64_t rbp5;
    int64_t rbp6;
    struct s14* rdi7;
    struct s15* rsi8;
    struct s16* rdi9;
    struct s17* rsi10;
    struct s18* rdi11;
    struct s19* rsi12;
    struct s20* rdi13;
    struct s21* rsi14;
    int64_t rbp15;
    int64_t rbp16;
    int64_t rbp17;
    int64_t rbp18;
    int64_t rbp19;
    int64_t rbp20;

    *reinterpret_cast<int32_t*>(rbp1 - 52) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp2 - 52) < *reinterpret_cast<int32_t*>(rbp3 - 8)) {
        *reinterpret_cast<int32_t*>(rbp4 - 48) = reinterpret_cast<int32_t>(fprintf);
        while (*reinterpret_cast<int32_t*>(rbp5 - 48) <= *reinterpret_cast<int32_t*>(rbp6 - 44)) {
            rdi7->f0 = rsi8->f0;
            rdi9 = reinterpret_cast<struct s16*>(&rdi7->f4);
            rsi10 = reinterpret_cast<struct s17*>(&rsi8->f4);
            __asm__("mulsd xmm0, [rax+rcx*8]");
            rdi9->f0 = rsi10->f0;
            rdi11 = reinterpret_cast<struct s18*>(&rdi9->f4);
            rsi12 = reinterpret_cast<struct s19*>(&rsi10->f4);
            rdi11->f0 = rsi12->f0;
            rdi13 = reinterpret_cast<struct s20*>(&rdi11->f4);
            rsi14 = reinterpret_cast<struct s21*>(&rsi12->f4);
            __asm__("mulsd xmm0, xmm2");
            __asm__("addsd xmm0, xmm1");
            rdi13->f0 = rsi14->f0;
            rdi7 = reinterpret_cast<struct s14*>(&rdi13->f4);
            rsi8 = reinterpret_cast<struct s15*>(&rsi14->f4);
            *reinterpret_cast<int32_t*>(rbp15 - 48) = *reinterpret_cast<int32_t*>(rbp16 - 48) + 1;
        }
        *reinterpret_cast<int32_t*>(rbp17 - 52) = *reinterpret_cast<int32_t*>(rbp18 - 52) + 1;
    }
    *reinterpret_cast<int32_t*>(rbp19 - 44) = *reinterpret_cast<int32_t*>(rbp20 - 44) + 1;
}

void fun_132() {
    int64_t v1;

    goto v1;
}

void submain(int32_t edi, int64_t rsi) {
    fun_16c(0x15f900, 8);
}

