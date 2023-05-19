
void fprintf(int32_t edi, int64_t rsi, int64_t rdx, int64_t rcx);

void print_array(int32_t edi, int64_t rsi, int64_t rdx, int64_t rcx);

void fun_1b2(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx);

void fun_1bb(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx);

void fun_1c4(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx);

int32_t fun_194(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int32_t eax5;
    int32_t edi6;
    int64_t rbp7;
    int64_t rbp8;
    int64_t rdi9;
    int64_t rbp10;
    int64_t rdi11;
    int64_t rbp12;
    int64_t rdi13;
    int64_t rbp14;
    int64_t v15;

    if (reinterpret_cast<int1_t>(eax5 == fprintf)) {
        edi6 = *reinterpret_cast<int32_t*>(rbp7 - 20);
        rsi = *reinterpret_cast<int64_t*>(rbp8 - 40);
        print_array(edi6, rsi, rdx, rcx);
    }
    rdi9 = *reinterpret_cast<int64_t*>(rbp10 - 32);
    fun_1b2(rdi9, rsi, rdx, rcx);
    rdi11 = *reinterpret_cast<int64_t*>(rbp12 - 40);
    fun_1bb(rdi11, rsi, rdx, rcx);
    rdi13 = *reinterpret_cast<int64_t*>(rbp14 - 48);
    fun_1c4(rdi13, rsi, rdx, rcx);
    goto v15;
}

int64_t* g2b6 = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_2c7(int64_t rdi, int64_t rsi);

int64_t* g2ce = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_2e6(int64_t rdi);

int32_t** g300 = reinterpret_cast<int32_t**>(0x48f0458b48388b48);

void fun_31e(int64_t rdi, ...);

int64_t* g339 = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_34a(int64_t rdi);

int64_t* g364 = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_37c(int64_t rdi, int64_t rsi, int64_t rdx);

int64_t* g383 = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_394(int64_t rdi, int64_t rsi, int64_t rdx);

void print_array(int32_t edi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int32_t v5;
    int64_t* rax6;
    int64_t rdi7;
    int64_t* rax8;
    int64_t rdi9;
    int32_t* rsi10;
    int32_t v11;
    int32_t** rax12;
    int32_t* rdi13;
    int64_t rdi14;
    int64_t* rax15;
    int64_t rdi16;
    int64_t* rax17;
    int64_t rdi18;
    int64_t* rax19;
    int64_t rdi20;

    v5 = edi;
    rax6 = g2b6;
    rdi7 = *rax6;
    fun_2c7(rdi7, 0x2c0);
    rax8 = g2ce;
    rdi9 = *rax8;
    rsi10 = reinterpret_cast<int32_t*>(0x2d8);
    fun_2e6(rdi9);
    v11 = reinterpret_cast<int32_t>(fprintf);
    while (v11 < v5) {
        rax12 = g300;
        rdi13 = *rax12;
        *rdi13 = *rsi10;
        rdi14 = reinterpret_cast<int64_t>(rdi13 + 1);
        rsi10 = reinterpret_cast<int32_t*>(0x317);
        fun_31e(rdi14, rdi14);
        __asm__("cdq ");
        if (reinterpret_cast<int1_t>(v11 % 20 == fprintf)) {
            rax15 = g339;
            rdi16 = *rax15;
            rsi10 = reinterpret_cast<int32_t*>(0x343);
            fun_34a(rdi16);
        }
        ++v11;
    }
    rax17 = g364;
    rdi18 = *rax17;
    fun_37c(rdi18, 0x36e, 0x375);
    rax19 = g383;
    rdi20 = *rax19;
    fun_394(rdi20, 0x38d, 0x375);
    return;
}

void fun_1b2(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t rdi5;
    int64_t rbp6;
    int64_t rdi7;
    int64_t rbp8;
    int64_t v9;

    rdi5 = *reinterpret_cast<int64_t*>(rbp6 - 40);
    fun_1bb(rdi5, rsi, rdx, rcx);
    rdi7 = *reinterpret_cast<int64_t*>(rbp8 - 48);
    fun_1c4(rdi7, rsi, rdx, rcx);
    goto v9;
}

void fun_31e(int64_t rdi, ...) {
    int64_t rbp2;
    int64_t* rax3;
    int64_t rdi4;
    int32_t* rsi5;
    int64_t rbp6;
    int64_t rbp7;
    int64_t rbp8;
    int64_t rbp9;
    int32_t** rax10;
    int32_t* rdi11;
    int64_t* rax12;
    int64_t rdi13;
    int64_t* rax14;
    int64_t rdi15;
    int64_t v16;

    while (1) {
        __asm__("cdq ");
        if (reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp2 - 20) % 20 == fprintf)) {
            rax3 = g339;
            rdi4 = *rax3;
            rsi5 = reinterpret_cast<int32_t*>(0x343);
            fun_34a(rdi4);
        }
        *reinterpret_cast<int32_t*>(rbp6 - 20) = *reinterpret_cast<int32_t*>(rbp7 - 20) + 1;
        if (*reinterpret_cast<int32_t*>(rbp8 - 20) >= *reinterpret_cast<int32_t*>(rbp9 - 4)) 
            break;
        rax10 = g300;
        rdi11 = *rax10;
        *rdi11 = *rsi5;
        rsi5 = reinterpret_cast<int32_t*>(0x317);
        fun_31e(rdi11 + 1);
    }
    rax12 = g364;
    rdi13 = *rax12;
    fun_37c(rdi13, 0x36e, 0x375);
    rax14 = g383;
    rdi15 = *rax14;
    fun_394(rdi15, 0x38d, 0x375);
    goto v16;
}

void fun_34a(int64_t rdi) {
    int64_t rbp2;
    int64_t rbp3;
    int64_t rbp4;
    int64_t rbp5;
    int32_t** rax6;
    int32_t* rdi7;
    int32_t* rsi8;
    int64_t rbp9;
    int64_t* rax10;
    int64_t rdi11;
    int64_t* rax12;
    int64_t rdi13;
    int64_t* rax14;
    int64_t rdi15;
    int64_t v16;

    while (1) {
        *reinterpret_cast<int32_t*>(rbp2 - 20) = *reinterpret_cast<int32_t*>(rbp3 - 20) + 1;
        if (*reinterpret_cast<int32_t*>(rbp4 - 20) >= *reinterpret_cast<int32_t*>(rbp5 - 4)) 
            break;
        rax6 = g300;
        rdi7 = *rax6;
        *rdi7 = *rsi8;
        rsi8 = reinterpret_cast<int32_t*>(0x317);
        fun_31e(rdi7 + 1);
        __asm__("cdq ");
        if (!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp9 - 20) % 20 == fprintf)) 
            continue;
        rax10 = g339;
        rdi11 = *rax10;
        rsi8 = reinterpret_cast<int32_t*>(0x343);
        fun_34a(rdi11);
    }
    rax12 = g364;
    rdi13 = *rax12;
    fun_37c(rdi13, 0x36e, 0x375);
    rax14 = g383;
    rdi15 = *rax14;
    fun_394(rdi15, 0x38d, 0x375);
    goto v16;
}

void fun_2c7(int64_t rdi, int64_t rsi) {
    int64_t* rax3;
    int64_t rdi4;
    int32_t* rsi5;
    int64_t rbp6;
    int64_t rbp7;
    int64_t rbp8;
    int32_t** rax9;
    int32_t* rdi10;
    int64_t rdi11;
    int64_t rbp12;
    int64_t* rax13;
    int64_t rdi14;
    int64_t rbp15;
    int64_t rbp16;
    int64_t* rax17;
    int64_t rdi18;
    int64_t* rax19;
    int64_t rdi20;
    int64_t v21;

    rax3 = g2ce;
    rdi4 = *rax3;
    rsi5 = reinterpret_cast<int32_t*>(0x2d8);
    fun_2e6(rdi4);
    *reinterpret_cast<int32_t*>(rbp6 - 20) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp7 - 20) < *reinterpret_cast<int32_t*>(rbp8 - 4)) {
        rax9 = g300;
        rdi10 = *rax9;
        *rdi10 = *rsi5;
        rdi11 = reinterpret_cast<int64_t>(rdi10 + 1);
        rsi5 = reinterpret_cast<int32_t*>(0x317);
        fun_31e(rdi11, rdi11);
        __asm__("cdq ");
        if (reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp12 - 20) % 20 == fprintf)) {
            rax13 = g339;
            rdi14 = *rax13;
            rsi5 = reinterpret_cast<int32_t*>(0x343);
            fun_34a(rdi14);
        }
        *reinterpret_cast<int32_t*>(rbp15 - 20) = *reinterpret_cast<int32_t*>(rbp16 - 20) + 1;
    }
    rax17 = g364;
    rdi18 = *rax17;
    fun_37c(rdi18, 0x36e, 0x375);
    rax19 = g383;
    rdi20 = *rax19;
    fun_394(rdi20, 0x38d, 0x375);
    goto v21;
}

void fun_1bb(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t rdi5;
    int64_t rbp6;
    int64_t v7;

    rdi5 = *reinterpret_cast<int64_t*>(rbp6 - 48);
    fun_1c4(rdi5, rsi, rdx, rcx);
    goto v7;
}

int64_t fun_138(int64_t rdi, int64_t rsi);

int64_t fun_14b(int64_t rdi, int64_t rsi);

void init_array(int32_t edi, int32_t* rsi, int64_t rdx, int64_t rcx);

void fun_177(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx);

void fun_125(int64_t rdi, int64_t rsi) {
    int64_t rbp3;
    int64_t rax4;
    int64_t rax5;
    int64_t rbp6;
    int64_t rax7;
    int64_t rbp8;
    int32_t edi9;
    int64_t rbp10;
    int32_t* rsi11;
    int64_t rbp12;
    int64_t rdx13;
    int64_t rbp14;
    int64_t rcx15;
    int64_t rbp16;
    int64_t rdi17;
    int64_t rbp18;
    int64_t rsi19;
    int64_t rbp20;
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
    int64_t rdi33;
    int64_t rbp34;
    int64_t v35;
    int32_t edi36;
    int64_t rbp37;
    int64_t rbp38;

    *reinterpret_cast<int64_t*>(rbp3 - 32) = rax4;
    rax5 = fun_138(0x7d0, 8);
    *reinterpret_cast<int64_t*>(rbp6 - 40) = rax5;
    rax7 = fun_14b(0x7d0, 8);
    *reinterpret_cast<int64_t*>(rbp8 - 48) = rax7;
    edi9 = *reinterpret_cast<int32_t*>(rbp10 - 20);
    rsi11 = *reinterpret_cast<int32_t**>(rbp12 - 32);
    rdx13 = *reinterpret_cast<int64_t*>(rbp14 - 40);
    rcx15 = *reinterpret_cast<int64_t*>(rbp16 - 48);
    init_array(edi9, rsi11, rdx13, rcx15);
    *reinterpret_cast<int32_t*>(&rdi17) = *reinterpret_cast<int32_t*>(rbp18 - 20);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi17) + 4) = reinterpret_cast<int32_t>(fprintf);
    rsi19 = *reinterpret_cast<int64_t*>(rbp20 - 32);
    rdx21 = *reinterpret_cast<int64_t*>(rbp22 - 40);
    rcx23 = *reinterpret_cast<int64_t*>(rbp24 - 48);
    fun_177(rdi17, rsi19, rdx21, rcx23);
    if (*reinterpret_cast<int32_t*>(rbp25 - 4) <= 42) {
        addr_1a9_5:
        rdi26 = *reinterpret_cast<int64_t*>(rbp27 - 32);
        fun_1b2(rdi26, rsi19, rdx21, rcx23);
    } else {
        rdi28 = **reinterpret_cast<int64_t**>(rbp29 - 16);
        rsi19 = 0x18f;
        eax30 = fun_194(rdi28, 0x18f, rdx21, rcx23);
        if (!reinterpret_cast<int1_t>(eax30 == fprintf)) 
            goto addr_1a9_5; else 
            goto addr_19d_8;
    }
    rdi31 = *reinterpret_cast<int64_t*>(rbp32 - 40);
    fun_1bb(rdi31, rsi19, rdx21, rcx23);
    rdi33 = *reinterpret_cast<int64_t*>(rbp34 - 48);
    fun_1c4(rdi33, rsi19, rdx21, rcx23);
    goto v35;
    addr_19d_8:
    edi36 = *reinterpret_cast<int32_t*>(rbp37 - 20);
    rsi19 = *reinterpret_cast<int64_t*>(rbp38 - 40);
    print_array(edi36, rsi19, rdx21, rcx23);
    goto addr_1a9_5;
}

void fun_2e6(int64_t rdi) {
    int64_t rbp2;
    int64_t rbp3;
    int64_t rbp4;
    int32_t** rax5;
    int32_t* rdi6;
    int32_t* rsi7;
    int64_t rbp8;
    int64_t* rax9;
    int64_t rdi10;
    int64_t rbp11;
    int64_t rbp12;
    int64_t* rax13;
    int64_t rdi14;
    int64_t* rax15;
    int64_t rdi16;
    int64_t v17;

    *reinterpret_cast<int32_t*>(rbp2 - 20) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp3 - 20) < *reinterpret_cast<int32_t*>(rbp4 - 4)) {
        rax5 = g300;
        rdi6 = *rax5;
        *rdi6 = *rsi7;
        rsi7 = reinterpret_cast<int32_t*>(0x317);
        fun_31e(rdi6 + 1);
        __asm__("cdq ");
        if (reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp8 - 20) % 20 == fprintf)) {
            rax9 = g339;
            rdi10 = *rax9;
            rsi7 = reinterpret_cast<int32_t*>(0x343);
            fun_34a(rdi10);
        }
        *reinterpret_cast<int32_t*>(rbp11 - 20) = *reinterpret_cast<int32_t*>(rbp12 - 20) + 1;
    }
    rax13 = g364;
    rdi14 = *rax13;
    fun_37c(rdi14, 0x36e, 0x375);
    rax15 = g383;
    rdi16 = *rax15;
    fun_394(rdi16, 0x38d, 0x375);
    goto v17;
}

void fun_1c4(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t v5;

    goto v5;
}

int64_t fun_138(int64_t rdi, int64_t rsi) {
    int64_t rbp3;
    int64_t rax4;
    int64_t rax5;
    int64_t rbp6;
    int32_t edi7;
    int64_t rbp8;
    int32_t* rsi9;
    int64_t rbp10;
    int64_t rdx11;
    int64_t rbp12;
    int64_t rcx13;
    int64_t rbp14;
    int64_t rdi15;
    int64_t rbp16;
    int64_t rsi17;
    int64_t rbp18;
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
    int64_t rdi31;
    int64_t rbp32;
    int64_t v33;
    int32_t edi34;
    int64_t rbp35;
    int64_t rbp36;

    *reinterpret_cast<int64_t*>(rbp3 - 40) = rax4;
    rax5 = fun_14b(0x7d0, 8);
    *reinterpret_cast<int64_t*>(rbp6 - 48) = rax5;
    edi7 = *reinterpret_cast<int32_t*>(rbp8 - 20);
    rsi9 = *reinterpret_cast<int32_t**>(rbp10 - 32);
    rdx11 = *reinterpret_cast<int64_t*>(rbp12 - 40);
    rcx13 = *reinterpret_cast<int64_t*>(rbp14 - 48);
    init_array(edi7, rsi9, rdx11, rcx13);
    *reinterpret_cast<int32_t*>(&rdi15) = *reinterpret_cast<int32_t*>(rbp16 - 20);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi15) + 4) = reinterpret_cast<int32_t>(fprintf);
    rsi17 = *reinterpret_cast<int64_t*>(rbp18 - 32);
    rdx19 = *reinterpret_cast<int64_t*>(rbp20 - 40);
    rcx21 = *reinterpret_cast<int64_t*>(rbp22 - 48);
    fun_177(rdi15, rsi17, rdx19, rcx21);
    if (*reinterpret_cast<int32_t*>(rbp23 - 4) <= 42) {
        addr_1a9_4:
        rdi24 = *reinterpret_cast<int64_t*>(rbp25 - 32);
        fun_1b2(rdi24, rsi17, rdx19, rcx21);
    } else {
        rdi26 = **reinterpret_cast<int64_t**>(rbp27 - 16);
        rsi17 = 0x18f;
        eax28 = fun_194(rdi26, 0x18f, rdx19, rcx21);
        if (!reinterpret_cast<int1_t>(eax28 == fprintf)) 
            goto addr_1a9_4; else 
            goto addr_19d_7;
    }
    rdi29 = *reinterpret_cast<int64_t*>(rbp30 - 40);
    fun_1bb(rdi29, rsi17, rdx19, rcx21);
    rdi31 = *reinterpret_cast<int64_t*>(rbp32 - 48);
    fun_1c4(rdi31, rsi17, rdx19, rcx21);
    goto v33;
    addr_19d_7:
    edi34 = *reinterpret_cast<int32_t*>(rbp35 - 20);
    rsi17 = *reinterpret_cast<int64_t*>(rbp36 - 40);
    print_array(edi34, rsi17, rdx19, rcx21);
    goto addr_1a9_4;
}

void fun_37c(int64_t rdi, int64_t rsi, int64_t rdx) {
    int64_t* rax4;
    int64_t rdi5;
    int64_t v6;

    rax4 = g383;
    rdi5 = *rax4;
    fun_394(rdi5, 0x38d, rdx);
    goto v6;
}

int64_t fun_14b(int64_t rdi, int64_t rsi) {
    int64_t rbp3;
    int64_t rax4;
    int32_t edi5;
    int64_t rbp6;
    int32_t* rsi7;
    int64_t rbp8;
    int64_t rdx9;
    int64_t rbp10;
    int64_t rcx11;
    int64_t rbp12;
    int64_t rdi13;
    int64_t rbp14;
    int64_t rsi15;
    int64_t rbp16;
    int64_t rdx17;
    int64_t rbp18;
    int64_t rcx19;
    int64_t rbp20;
    int64_t rbp21;
    int64_t rdi22;
    int64_t rbp23;
    int64_t rdi24;
    int64_t rbp25;
    int32_t eax26;
    int64_t rdi27;
    int64_t rbp28;
    int64_t rdi29;
    int64_t rbp30;
    int64_t v31;
    int32_t edi32;
    int64_t rbp33;
    int64_t rbp34;

    *reinterpret_cast<int64_t*>(rbp3 - 48) = rax4;
    edi5 = *reinterpret_cast<int32_t*>(rbp6 - 20);
    rsi7 = *reinterpret_cast<int32_t**>(rbp8 - 32);
    rdx9 = *reinterpret_cast<int64_t*>(rbp10 - 40);
    rcx11 = *reinterpret_cast<int64_t*>(rbp12 - 48);
    init_array(edi5, rsi7, rdx9, rcx11);
    *reinterpret_cast<int32_t*>(&rdi13) = *reinterpret_cast<int32_t*>(rbp14 - 20);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi13) + 4) = reinterpret_cast<int32_t>(fprintf);
    rsi15 = *reinterpret_cast<int64_t*>(rbp16 - 32);
    rdx17 = *reinterpret_cast<int64_t*>(rbp18 - 40);
    rcx19 = *reinterpret_cast<int64_t*>(rbp20 - 48);
    fun_177(rdi13, rsi15, rdx17, rcx19);
    if (*reinterpret_cast<int32_t*>(rbp21 - 4) <= 42) {
        addr_1a9_3:
        rdi22 = *reinterpret_cast<int64_t*>(rbp23 - 32);
        fun_1b2(rdi22, rsi15, rdx17, rcx19);
    } else {
        rdi24 = **reinterpret_cast<int64_t**>(rbp25 - 16);
        rsi15 = 0x18f;
        eax26 = fun_194(rdi24, 0x18f, rdx17, rcx19);
        if (!reinterpret_cast<int1_t>(eax26 == fprintf)) 
            goto addr_1a9_3; else 
            goto addr_19d_6;
    }
    rdi27 = *reinterpret_cast<int64_t*>(rbp28 - 40);
    fun_1bb(rdi27, rsi15, rdx17, rcx19);
    rdi29 = *reinterpret_cast<int64_t*>(rbp30 - 48);
    fun_1c4(rdi29, rsi15, rdx17, rcx19);
    goto v31;
    addr_19d_6:
    edi32 = *reinterpret_cast<int32_t*>(rbp33 - 20);
    rsi15 = *reinterpret_cast<int64_t*>(rbp34 - 40);
    print_array(edi32, rsi15, rdx17, rcx19);
    goto addr_1a9_3;
}

void fun_394(int64_t rdi, int64_t rsi, int64_t rdx) {
    int64_t v4;

    goto v4;
}

void init_array(int32_t edi, int32_t* rsi, int64_t rdx, int64_t rcx) {
    int32_t* rdi1;
    int32_t v5;
    int32_t v6;
    int32_t* rdi7;
    int32_t* rsi8;
    int32_t* rdi9;
    int32_t* rsi10;
    int32_t v11;
    int32_t* rdi12;
    int32_t* rsi13;

    *reinterpret_cast<int32_t*>(&rdi1) = edi;
    v5 = *reinterpret_cast<int32_t*>(&rdi1);
    v6 = reinterpret_cast<int32_t>(fprintf);
    while (v6 < v5) {
        *rdi1 = *rsi;
        rdi7 = rdi1 + 1;
        rsi8 = rsi + 1;
        *rdi7 = *rsi8;
        rdi9 = rdi7 + 1;
        rsi10 = rsi8 + 1;
        __asm__("cvtsi2sd xmm0, dword [rbp-0x24]");
        *rdi9 = *rsi10;
        rdi1 = rdi9 + 1;
        rsi = rsi10 + 1;
        v11 = reinterpret_cast<int32_t>(fprintf);
        while (v11 <= v6) {
            __asm__("cvtsi2sd xmm0, eax");
            *rdi1 = *rsi;
            rdi12 = rdi1 + 1;
            rsi13 = rsi + 1;
            __asm__("mulsd xmm0, xmm1");
            __asm__("cvtsi2sd xmm1, dword [rbp-0x4]");
            __asm__("divsd xmm0, xmm1");
            *rdi12 = *rsi13;
            rdi1 = rdi12 + 1;
            rsi = rsi13 + 1;
            ++v11;
        }
        ++v6;
    }
    return;
}

void fun_177(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t rbp5;
    int64_t rdi6;
    int64_t rbp7;
    int64_t rdi8;
    int64_t rbp9;
    int32_t eax10;
    int64_t rdi11;
    int64_t rbp12;
    int64_t rdi13;
    int64_t rbp14;
    int64_t v15;
    int32_t edi16;
    int64_t rbp17;
    int64_t rbp18;

    if (*reinterpret_cast<int32_t*>(rbp5 - 4) <= 42) {
        addr_1a9_2:
        rdi6 = *reinterpret_cast<int64_t*>(rbp7 - 32);
        fun_1b2(rdi6, rsi, rdx, rcx);
    } else {
        rdi8 = **reinterpret_cast<int64_t**>(rbp9 - 16);
        rsi = 0x18f;
        eax10 = fun_194(rdi8, 0x18f, rdx, rcx);
        if (!reinterpret_cast<int1_t>(eax10 == fprintf)) 
            goto addr_1a9_2; else 
            goto addr_19d_5;
    }
    rdi11 = *reinterpret_cast<int64_t*>(rbp12 - 40);
    fun_1bb(rdi11, rsi, rdx, rcx);
    rdi13 = *reinterpret_cast<int64_t*>(rbp14 - 48);
    fun_1c4(rdi13, rsi, rdx, rcx);
    goto v15;
    addr_19d_5:
    edi16 = *reinterpret_cast<int32_t*>(rbp17 - 20);
    rsi = *reinterpret_cast<int64_t*>(rbp18 - 40);
    print_array(edi16, rsi, rdx, rcx);
    goto addr_1a9_2;
}

void fprintf(int32_t edi, int64_t rsi, int64_t rdx, int64_t rcx) {
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

int32_t fprintf = 0xe5894855;

void fun_68(struct s0* rdi, struct s1* rsi, int64_t rdx) {
    struct s2* rdi4;
    int64_t rbp5;
    int64_t rbp6;

    __asm__("fdiv st0, st2");
    __asm__("movups xmm0, [rax+rcx*8]");
    rdi->f0 = rsi->f0;
    rdi4 = reinterpret_cast<struct s2*>(&rdi->f4);
    rdi4->f0 = rsi->f4;
    __asm__("movd rdx, xmm0");
    __asm__("movd xmm0, rdx");
    __asm__("mulsd xmm0, xmm2");
    __asm__("addsd xmm0, xmm1");
    rdi4->f4 = fprintf;
    *reinterpret_cast<int32_t*>(rbp5 - 40) = *reinterpret_cast<int32_t*>(rbp6 - 40) + 1;
}

struct s3 {
    int32_t f0;
    int32_t f4;
};

struct s4 {
    int32_t f0;
    int32_t f4;
};

void fun_ba(struct s3* rdi, struct s4* rsi) {
    int64_t rbp3;
    int64_t rbp4;

    rdi->f0 = rsi->f0;
    __asm__("divsd xmm0, [rax+rcx*8]");
    rdi->f4 = rsi->f4;
    *reinterpret_cast<int32_t*>(rbp3 - 36) = *reinterpret_cast<int32_t*>(rbp4 - 36) + 1;
    goto 26;
}

void fun_fd() {
    int64_t v1;

    goto v1;
}

void submain(int32_t edi, int64_t rsi) {
    fun_125(0x3d0900, 8);
}

