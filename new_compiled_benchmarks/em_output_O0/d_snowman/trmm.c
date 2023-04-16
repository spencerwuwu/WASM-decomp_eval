
void fun_1d0(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8);

int32_t fun_1af(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8);

void fprintf(int32_t* rdi, int32_t* rsi, int64_t rdx, int64_t rcx);

void fun_1d9(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8);

void print_array(int32_t edi, int32_t esi, int64_t rdx, int64_t rcx, int64_t r8);

void fun_192(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8) {
    int64_t rbp6;
    int64_t rdi7;
    int64_t rbp8;
    int64_t rdi9;
    int64_t rbp10;
    int32_t eax11;
    int64_t rdi12;
    int64_t rbp13;
    int64_t v14;
    int32_t edi15;
    int64_t rbp16;
    int64_t rbp17;
    int64_t rbp18;

    if (*reinterpret_cast<int32_t*>(rbp6 - 4) <= 42) {
        addr_1c7_2:
        rdi7 = *reinterpret_cast<int64_t*>(rbp8 - 40);
        fun_1d0(rdi7, rsi, rdx, rcx, r8);
    } else {
        rdi9 = **reinterpret_cast<int64_t**>(rbp10 - 16);
        rsi = 0x1aa;
        eax11 = fun_1af(rdi9, 0x1aa, rdx, rcx, r8);
        if (!reinterpret_cast<int1_t>(eax11 == fprintf)) 
            goto addr_1c7_2; else 
            goto addr_1b8_5;
    }
    rdi12 = *reinterpret_cast<int64_t*>(rbp13 - 48);
    fun_1d9(rdi12, rsi, rdx, rcx, r8);
    goto v14;
    addr_1b8_5:
    edi15 = *reinterpret_cast<int32_t*>(rbp16 - 20);
    *reinterpret_cast<int32_t*>(&rsi) = *reinterpret_cast<int32_t*>(rbp17 - 24);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi) + 4) = reinterpret_cast<int32_t>(fprintf);
    rdx = *reinterpret_cast<int64_t*>(rbp18 - 48);
    print_array(edi15, *reinterpret_cast<int32_t*>(&rsi), rdx, rcx, r8);
    goto addr_1c7_2;
}

int32_t fun_1af(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8) {
    int32_t eax6;
    int32_t edi7;
    int64_t rbp8;
    int64_t rbp9;
    int64_t rbp10;
    int64_t rdi11;
    int64_t rbp12;
    int64_t rdi13;
    int64_t rbp14;
    int64_t v15;

    if (reinterpret_cast<int1_t>(eax6 == fprintf)) {
        edi7 = *reinterpret_cast<int32_t*>(rbp8 - 20);
        *reinterpret_cast<int32_t*>(&rsi) = *reinterpret_cast<int32_t*>(rbp9 - 24);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi) + 4) = reinterpret_cast<int32_t>(fprintf);
        rdx = *reinterpret_cast<int64_t*>(rbp10 - 48);
        print_array(edi7, *reinterpret_cast<int32_t*>(&rsi), rdx, rcx, r8);
    }
    rdi11 = *reinterpret_cast<int64_t*>(rbp12 - 40);
    fun_1d0(rdi11, rsi, rdx, rcx, r8);
    rdi13 = *reinterpret_cast<int64_t*>(rbp14 - 48);
    fun_1d9(rdi13, rsi, rdx, rcx, r8);
    goto v15;
}

int64_t* g329 = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_33a(int64_t rdi, int64_t rsi);

int64_t* g341 = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_359(int64_t rdi);

int64_t* g3a1 = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_3b2(int64_t rdi);

int32_t** g3b9 = reinterpret_cast<int32_t**>(0x48f0458b48388b48);

void fun_3e5(int64_t rdi);

int64_t* g40d = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_425(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx);

int64_t* g42c = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_43d(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx);

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

    v6 = edi;
    v7 = esi;
    rax8 = g329;
    rdi9 = *rax8;
    fun_33a(rdi9, 0x333);
    rax10 = g341;
    rdi11 = *rax10;
    rsi12 = reinterpret_cast<int32_t*>(0x34b);
    fun_359(rdi11);
    v13 = reinterpret_cast<int32_t>(fprintf);
    while (v13 < v6) {
        v14 = reinterpret_cast<int32_t>(fprintf);
        while (v14 < v7) {
            __asm__("cdq ");
            if (reinterpret_cast<int1_t>((v13 * v6 + v14) % 20 == fprintf)) {
                rax15 = g3a1;
                rdi16 = *rax15;
                rsi12 = reinterpret_cast<int32_t*>(0x3ab);
                fun_3b2(rdi16);
            }
            rax17 = g3b9;
            rdi18 = *rax17;
            rcx = v14;
            *rdi18 = *rsi12;
            rsi12 = reinterpret_cast<int32_t*>(0x3de);
            fun_3e5(rdi18 + 1);
            ++v14;
        }
        ++v13;
    }
    rax19 = g40d;
    rdi20 = *rax19;
    fun_425(rdi20, 0x417, 0x41e, rcx);
    rax21 = g42c;
    rdi22 = *rax21;
    fun_43d(rdi22, 0x436, 0x41e, rcx);
    return;
}

void fun_1d0(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8) {
    int64_t rdi6;
    int64_t rbp7;
    int64_t v8;

    rdi6 = *reinterpret_cast<int64_t*>(rbp7 - 48);
    fun_1d9(rdi6, rsi, rdx, rcx, r8);
    goto v8;
}

void fun_3b2(int64_t rdi) {
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
        rax2 = g3b9;
        rdi3 = *rax2;
        rcx4 = *reinterpret_cast<int32_t*>(rbp5 - 24);
        *rdi3 = *rsi6;
        rsi6 = reinterpret_cast<int32_t*>(0x3de);
        fun_3e5(rdi3 + 1);
        *reinterpret_cast<int32_t*>(rbp7 - 24) = *reinterpret_cast<int32_t*>(rbp8 - 24) + 1;
        while (*reinterpret_cast<int32_t*>(rbp9 - 24) >= *reinterpret_cast<int32_t*>(rbp10 - 8)) {
            *reinterpret_cast<int32_t*>(rbp11 - 20) = *reinterpret_cast<int32_t*>(rbp12 - 20) + 1;
            if (*reinterpret_cast<int32_t*>(rbp13 - 20) >= *reinterpret_cast<int32_t*>(rbp14 - 4)) 
                goto addr_406_10;
            *reinterpret_cast<int32_t*>(rbp15 - 24) = reinterpret_cast<int32_t>(fprintf);
        }
        __asm__("cdq ");
        if (!reinterpret_cast<int1_t>((*reinterpret_cast<int32_t*>(rbp16 - 20) * *reinterpret_cast<int32_t*>(rbp17 - 4) + *reinterpret_cast<int32_t*>(rbp18 - 24)) % 20 == fprintf)) 
            continue;
        rax19 = g3a1;
        rdi20 = *rax19;
        rsi6 = reinterpret_cast<int32_t*>(0x3ab);
        fun_3b2(rdi20);
    }
    addr_406_10:
    rax21 = g40d;
    rdi22 = *rax21;
    fun_425(rdi22, 0x417, 0x41e, rcx4);
    rax23 = g42c;
    rdi24 = *rax23;
    fun_43d(rdi24, 0x436, 0x41e, rcx4);
    goto v25;
}

void fun_3e5(int64_t rdi) {
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
                goto addr_406_6;
            *reinterpret_cast<int32_t*>(rbp10 - 24) = reinterpret_cast<int32_t>(fprintf);
        }
        __asm__("cdq ");
        if (reinterpret_cast<int1_t>((*reinterpret_cast<int32_t*>(rbp11 - 20) * *reinterpret_cast<int32_t*>(rbp12 - 4) + *reinterpret_cast<int32_t*>(rbp13 - 24)) % 20 == fprintf)) {
            rax14 = g3a1;
            rdi15 = *rax14;
            rsi16 = reinterpret_cast<int32_t*>(0x3ab);
            fun_3b2(rdi15);
        }
        rax17 = g3b9;
        rdi18 = *rax17;
        rcx19 = *reinterpret_cast<int32_t*>(rbp20 - 24);
        *rdi18 = *rsi16;
        rsi16 = reinterpret_cast<int32_t*>(0x3de);
        fun_3e5(rdi18 + 1);
    }
    addr_406_6:
    rax21 = g40d;
    rdi22 = *rax21;
    fun_425(rdi22, 0x417, 0x41e, rcx19);
    rax23 = g42c;
    rdi24 = *rax23;
    fun_43d(rdi24, 0x436, 0x41e, rcx19);
    goto v25;
}

void fun_33a(int64_t rdi, int64_t rsi) {
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

    rax3 = g341;
    rdi4 = *rax3;
    rsi5 = reinterpret_cast<int32_t*>(0x34b);
    fun_359(rdi4);
    *reinterpret_cast<int32_t*>(rbp6 - 20) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp7 - 20) < *reinterpret_cast<int32_t*>(rbp8 - 4)) {
        *reinterpret_cast<int32_t*>(rbp9 - 24) = reinterpret_cast<int32_t>(fprintf);
        while (*reinterpret_cast<int32_t*>(rbp10 - 24) < *reinterpret_cast<int32_t*>(rbp11 - 8)) {
            __asm__("cdq ");
            if (reinterpret_cast<int1_t>((*reinterpret_cast<int32_t*>(rbp12 - 20) * *reinterpret_cast<int32_t*>(rbp13 - 4) + *reinterpret_cast<int32_t*>(rbp14 - 24)) % 20 == fprintf)) {
                rax15 = g3a1;
                rdi16 = *rax15;
                rsi5 = reinterpret_cast<int32_t*>(0x3ab);
                fun_3b2(rdi16);
            }
            rax17 = g3b9;
            rdi18 = *rax17;
            rcx19 = *reinterpret_cast<int32_t*>(rbp20 - 24);
            *rdi18 = *rsi5;
            rsi5 = reinterpret_cast<int32_t*>(0x3de);
            fun_3e5(rdi18 + 1);
            *reinterpret_cast<int32_t*>(rbp21 - 24) = *reinterpret_cast<int32_t*>(rbp22 - 24) + 1;
        }
        *reinterpret_cast<int32_t*>(rbp23 - 20) = *reinterpret_cast<int32_t*>(rbp24 - 20) + 1;
    }
    rax25 = g40d;
    rdi26 = *rax25;
    fun_425(rdi26, 0x417, 0x41e, rcx19);
    rax27 = g42c;
    rdi28 = *rax27;
    fun_43d(rdi28, 0x436, 0x41e, rcx19);
    goto v29;
}

void fun_1d9(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8) {
    int64_t v6;

    goto v6;
}

void fun_359(int64_t rdi) {
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
                rax11 = g3a1;
                rdi12 = *rax11;
                rsi13 = reinterpret_cast<int32_t*>(0x3ab);
                fun_3b2(rdi12);
            }
            rax14 = g3b9;
            rdi15 = *rax14;
            rcx16 = *reinterpret_cast<int32_t*>(rbp17 - 24);
            *rdi15 = *rsi13;
            rsi13 = reinterpret_cast<int32_t*>(0x3de);
            fun_3e5(rdi15 + 1);
            *reinterpret_cast<int32_t*>(rbp18 - 24) = *reinterpret_cast<int32_t*>(rbp19 - 24) + 1;
        }
        *reinterpret_cast<int32_t*>(rbp20 - 20) = *reinterpret_cast<int32_t*>(rbp21 - 20) + 1;
    }
    rax22 = g40d;
    rdi23 = *rax22;
    fun_425(rdi23, 0x417, 0x41e, rcx16);
    rax24 = g42c;
    rdi25 = *rax24;
    fun_43d(rdi25, 0x436, 0x41e, rcx16);
    goto v26;
}

void fun_425(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t* rax5;
    int64_t rdi6;
    int64_t v7;

    rax5 = g42c;
    rdi6 = *rax5;
    fun_43d(rdi6, 0x436, rdx, rcx);
    goto v7;
}

int64_t fun_15f(int64_t rdi, int64_t rsi);

struct s0 {
    int32_t f0;
    int32_t f4;
};

struct s1 {
    int32_t f0;
    int32_t f4;
};

void init_array(struct s0* rdi, struct s1* rsi, int64_t rdx, int64_t rcx, int64_t r8);

void fun_14c(int64_t rdi, int64_t rsi) {
    int64_t rbp3;
    int64_t rax4;
    int64_t rax5;
    int64_t rbp6;
    struct s0* rdi7;
    int64_t rbp8;
    struct s1* rsi9;
    int64_t rbp10;
    int64_t rcx11;
    int64_t rbp12;
    int64_t r8_13;
    int64_t rbp14;
    int64_t rbp15;
    int32_t* rdi16;
    int64_t rbp17;
    int32_t* rsi18;
    int64_t rbp19;
    int64_t rsi20;
    int64_t rdx21;
    int64_t rbp22;
    int64_t rcx23;
    int64_t rbp24;
    int64_t rbp25;
    int64_t rdi26;
    int64_t rbp27;
    int64_t rdi28;
    int64_t rbp29;
    int32_t eax30;
    int64_t rdi31;
    int64_t rbp32;
    int64_t v33;
    int32_t edi34;
    int64_t rbp35;
    int64_t rbp36;
    int64_t rbp37;

    *reinterpret_cast<int64_t*>(rbp3 - 40) = rax4;
    rax5 = fun_15f(0x124f80, 8);
    *reinterpret_cast<int64_t*>(rbp6 - 48) = rax5;
    *reinterpret_cast<int32_t*>(&rdi7) = *reinterpret_cast<int32_t*>(rbp8 - 20);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi7) + 4) = reinterpret_cast<int32_t>(fprintf);
    *reinterpret_cast<int32_t*>(&rsi9) = *reinterpret_cast<int32_t*>(rbp10 - 24);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi9) + 4) = reinterpret_cast<int32_t>(fprintf);
    rcx11 = *reinterpret_cast<int64_t*>(rbp12 - 40);
    r8_13 = *reinterpret_cast<int64_t*>(rbp14 - 48);
    init_array(rdi7, rsi9, rbp15 - 32, rcx11, r8_13);
    *reinterpret_cast<int32_t*>(&rdi16) = *reinterpret_cast<int32_t*>(rbp17 - 20);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi16) + 4) = reinterpret_cast<int32_t>(fprintf);
    *reinterpret_cast<int32_t*>(&rsi18) = *reinterpret_cast<int32_t*>(rbp19 - 24);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi18) + 4) = reinterpret_cast<int32_t>(fprintf);
    *rdi16 = *rsi18;
    rsi20 = reinterpret_cast<int64_t>(rsi18 + 1);
    rdx21 = *reinterpret_cast<int64_t*>(rbp22 - 40);
    rcx23 = *reinterpret_cast<int64_t*>(rbp24 - 48);
    fun_192(rdi16 + 1, rsi20, rdx21, rcx23, r8_13);
    if (*reinterpret_cast<int32_t*>(rbp25 - 4) <= 42) {
        addr_1c7_7:
        rdi26 = *reinterpret_cast<int64_t*>(rbp27 - 40);
        fun_1d0(rdi26, rsi20, rdx21, rcx23, r8_13);
    } else {
        rdi28 = **reinterpret_cast<int64_t**>(rbp29 - 16);
        rsi20 = 0x1aa;
        eax30 = fun_1af(rdi28, 0x1aa, rdx21, rcx23, r8_13);
        if (!reinterpret_cast<int1_t>(eax30 == fprintf)) 
            goto addr_1c7_7; else 
            goto addr_1b8_10;
    }
    rdi31 = *reinterpret_cast<int64_t*>(rbp32 - 48);
    fun_1d9(rdi31, rsi20, rdx21, rcx23, r8_13);
    goto v33;
    addr_1b8_10:
    edi34 = *reinterpret_cast<int32_t*>(rbp35 - 20);
    *reinterpret_cast<int32_t*>(&rsi20) = *reinterpret_cast<int32_t*>(rbp36 - 24);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi20) + 4) = reinterpret_cast<int32_t>(fprintf);
    rdx21 = *reinterpret_cast<int64_t*>(rbp37 - 48);
    print_array(edi34, *reinterpret_cast<int32_t*>(&rsi20), rdx21, rcx23, r8_13);
    goto addr_1c7_7;
}

void fun_43d(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t v5;

    goto v5;
}

int64_t fun_15f(int64_t rdi, int64_t rsi) {
    int64_t rbp3;
    int64_t rax4;
    struct s0* rdi5;
    int64_t rbp6;
    struct s1* rsi7;
    int64_t rbp8;
    int64_t rcx9;
    int64_t rbp10;
    int64_t r8_11;
    int64_t rbp12;
    int64_t rbp13;
    int32_t* rdi14;
    int64_t rbp15;
    int32_t* rsi16;
    int64_t rbp17;
    int64_t rsi18;
    int64_t rdx19;
    int64_t rbp20;
    int64_t rcx21;
    int64_t rbp22;
    int64_t rbp23;
    int64_t rdi24;
    int64_t rbp25;
    int64_t rdi26;
    int64_t rbp27;
    int32_t eax28;
    int64_t rdi29;
    int64_t rbp30;
    int64_t v31;
    int32_t edi32;
    int64_t rbp33;
    int64_t rbp34;
    int64_t rbp35;

    *reinterpret_cast<int64_t*>(rbp3 - 48) = rax4;
    *reinterpret_cast<int32_t*>(&rdi5) = *reinterpret_cast<int32_t*>(rbp6 - 20);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi5) + 4) = reinterpret_cast<int32_t>(fprintf);
    *reinterpret_cast<int32_t*>(&rsi7) = *reinterpret_cast<int32_t*>(rbp8 - 24);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi7) + 4) = reinterpret_cast<int32_t>(fprintf);
    rcx9 = *reinterpret_cast<int64_t*>(rbp10 - 40);
    r8_11 = *reinterpret_cast<int64_t*>(rbp12 - 48);
    init_array(rdi5, rsi7, rbp13 - 32, rcx9, r8_11);
    *reinterpret_cast<int32_t*>(&rdi14) = *reinterpret_cast<int32_t*>(rbp15 - 20);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi14) + 4) = reinterpret_cast<int32_t>(fprintf);
    *reinterpret_cast<int32_t*>(&rsi16) = *reinterpret_cast<int32_t*>(rbp17 - 24);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi16) + 4) = reinterpret_cast<int32_t>(fprintf);
    *rdi14 = *rsi16;
    rsi18 = reinterpret_cast<int64_t>(rsi16 + 1);
    rdx19 = *reinterpret_cast<int64_t*>(rbp20 - 40);
    rcx21 = *reinterpret_cast<int64_t*>(rbp22 - 48);
    fun_192(rdi14 + 1, rsi18, rdx19, rcx21, r8_11);
    if (*reinterpret_cast<int32_t*>(rbp23 - 4) <= 42) {
        addr_1c7_6:
        rdi24 = *reinterpret_cast<int64_t*>(rbp25 - 40);
        fun_1d0(rdi24, rsi18, rdx19, rcx21, r8_11);
    } else {
        rdi26 = **reinterpret_cast<int64_t**>(rbp27 - 16);
        rsi18 = 0x1aa;
        eax28 = fun_1af(rdi26, 0x1aa, rdx19, rcx21, r8_11);
        if (!reinterpret_cast<int1_t>(eax28 == fprintf)) 
            goto addr_1c7_6; else 
            goto addr_1b8_9;
    }
    rdi29 = *reinterpret_cast<int64_t*>(rbp30 - 48);
    fun_1d9(rdi29, rsi18, rdx19, rcx21, r8_11);
    goto v31;
    addr_1b8_9:
    edi32 = *reinterpret_cast<int32_t*>(rbp33 - 20);
    *reinterpret_cast<int32_t*>(&rsi18) = *reinterpret_cast<int32_t*>(rbp34 - 24);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi18) + 4) = reinterpret_cast<int32_t>(fprintf);
    rdx19 = *reinterpret_cast<int64_t*>(rbp35 - 48);
    print_array(edi32, *reinterpret_cast<int32_t*>(&rsi18), rdx19, rcx21, r8_11);
    goto addr_1c7_6;
}

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

void init_array(struct s0* rdi, struct s1* rsi, int64_t rdx, int64_t rcx, int64_t r8) {
    int32_t v6;
    int32_t v7;
    struct s2* rdi8;
    struct s3* rsi9;
    struct s4* rdi10;
    struct s5* rsi11;
    int32_t v12;
    int32_t v13;
    struct s6* rdi14;
    struct s7* rsi15;
    int32_t v16;

    v6 = *reinterpret_cast<int32_t*>(&rdi);
    v7 = *reinterpret_cast<int32_t*>(&rsi);
    rdi->f0 = rsi->f0;
    rdi8 = reinterpret_cast<struct s2*>(&rdi->f4);
    rsi9 = reinterpret_cast<struct s3*>(&rsi->f4);
    rdi8->f0 = rsi9->f0;
    rdi10 = reinterpret_cast<struct s4*>(&rdi8->f4);
    rsi11 = reinterpret_cast<struct s5*>(&rsi9->f4);
    v12 = reinterpret_cast<int32_t>(fprintf);
    while (v12 < v6) {
        v13 = reinterpret_cast<int32_t>(fprintf);
        while (v13 < v12) {
            __asm__("cdq ");
            __asm__("cvtsi2sd xmm0, edx");
            __asm__("cvtsi2sd xmm1, dword [rbp-0x4]");
            __asm__("divsd xmm0, xmm1");
            rdi10->f0 = rsi11->f0;
            rdi10 = reinterpret_cast<struct s4*>(&rdi10->f4);
            rsi11 = reinterpret_cast<struct s5*>(&rsi11->f4);
            ++v13;
        }
        rdi10->f0 = rsi11->f0;
        rdi14 = reinterpret_cast<struct s6*>(&rdi10->f4);
        rsi15 = reinterpret_cast<struct s7*>(&rsi11->f4);
        rdi14->f0 = rsi15->f0;
        rdi10 = reinterpret_cast<struct s4*>(&rdi14->f4);
        rsi11 = reinterpret_cast<struct s5*>(&rsi15->f4);
        v16 = reinterpret_cast<int32_t>(fprintf);
        while (v16 < v7) {
            __asm__("cdq ");
            __asm__("cvtsi2sd xmm0, edx");
            __asm__("cvtsi2sd xmm1, dword [rbp-0x8]");
            __asm__("divsd xmm0, xmm1");
            rdi10->f0 = rsi11->f0;
            rdi10 = reinterpret_cast<struct s4*>(&rdi10->f4);
            rsi11 = reinterpret_cast<struct s5*>(&rsi11->f4);
            ++v16;
        }
        ++v12;
    }
    return;
}

void fprintf(int32_t* rdi, int32_t* rsi, int64_t rdx, int64_t rcx) {
    *rdi = *rsi;
}

void fun_5c() {
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

void fun_5f(struct s8* rdi, struct s9* rsi) {
    signed char* rax3;
    signed char* rax4;
    signed char al5;
    struct s10* rdi6;
    struct s11* rsi7;
    struct s12* rdi8;
    struct s13* rsi9;
    int64_t rbp10;
    int64_t rbp11;

    *rax3 = reinterpret_cast<signed char>(*rax4 + al5);
    rdi->f0 = rsi->f0;
    rdi6 = reinterpret_cast<struct s10*>(&rdi->f4);
    rsi7 = reinterpret_cast<struct s11*>(&rsi->f4);
    rdi6->f0 = rsi7->f0;
    rdi8 = reinterpret_cast<struct s12*>(&rdi6->f4);
    rsi9 = reinterpret_cast<struct s13*>(&rsi7->f4);
    rdi8->f0 = rsi9->f0;
    __asm__("mulsd xmm0, xmm2");
    __asm__("addsd xmm0, xmm1");
    rdi8->f4 = rsi9->f4;
    *reinterpret_cast<int32_t*>(rbp10 - 44) = *reinterpret_cast<int32_t*>(rbp11 - 44) + 1;
}

struct s14 {
    int32_t f0;
    int32_t f4;
};

struct s15 {
    int32_t f0;
    int32_t f4;
};

void fun_be(struct s14* rdi, struct s15* rsi) {
    int64_t rbp3;
    int64_t rbp4;

    rdi->f0 = rsi->f0;
    __asm__("mulsd xmm0, [rax+rcx*8]");
    rdi->f4 = rsi->f4;
    *reinterpret_cast<int32_t*>(rbp3 - 40) = *reinterpret_cast<int32_t*>(rbp4 - 40) + 1;
}

void fun_107() {
    int64_t rbp1;
    int64_t rbp2;

    *reinterpret_cast<int32_t*>(rbp1 - 36) = *reinterpret_cast<int32_t*>(rbp2 - 36) + 1;
    goto 30;
}

void fun_11a() {
    int64_t v1;

    goto v1;
}

void submain(int32_t edi, int64_t rsi) {
    fun_14c(0xf4240, 8);
}

