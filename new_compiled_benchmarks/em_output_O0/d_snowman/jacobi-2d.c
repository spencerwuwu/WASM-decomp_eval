
void fprintf(int32_t edi, int32_t esi, int64_t rdx, int64_t rcx);

void print_array(int32_t edi, int64_t rsi, int64_t rdx, int64_t rcx);

void fun_301(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx);

void fun_30a(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx);

int32_t fun_2e3(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int32_t eax5;
    int32_t edi6;
    int64_t rbp7;
    int64_t rbp8;
    int64_t rdi9;
    int64_t rbp10;
    int64_t rdi11;
    int64_t rbp12;
    int64_t v13;

    if (reinterpret_cast<int1_t>(eax5 == fprintf)) {
        edi6 = *reinterpret_cast<int32_t*>(rbp7 - 20);
        rsi = *reinterpret_cast<int64_t*>(rbp8 - 32);
        print_array(edi6, rsi, rdx, rcx);
    }
    rdi9 = *reinterpret_cast<int64_t*>(rbp10 - 32);
    fun_301(rdi9, rsi, rdx, rcx);
    rdi11 = *reinterpret_cast<int64_t*>(rbp12 - 40);
    fun_30a(rdi11, rsi, rdx, rcx);
    goto v13;
}

int64_t* g416 = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_427(int64_t rdi, int64_t rsi);

int64_t* g42e = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_446(int64_t rdi);

int64_t* g48e = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_49f(int64_t rdi);

int32_t** g4a6 = reinterpret_cast<int32_t**>(0x48f0458b48388b48);

void fun_4d2(int64_t rdi);

int64_t* g4fa = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_512(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx);

int64_t* g519 = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_52a(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx);

void print_array(int32_t edi, int64_t rsi, int64_t rdx, int64_t rcx) {
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
    int64_t* rax17;
    int64_t rdi18;
    int64_t* rax19;
    int64_t rdi20;

    v5 = edi;
    rax6 = g416;
    rdi7 = *rax6;
    fun_427(rdi7, 0x420);
    rax8 = g42e;
    rdi9 = *rax8;
    rsi10 = reinterpret_cast<int32_t*>(0x438);
    fun_446(rdi9);
    v11 = reinterpret_cast<int32_t>(fprintf);
    while (v11 < v5) {
        v12 = reinterpret_cast<int32_t>(fprintf);
        while (v12 < v5) {
            __asm__("cdq ");
            if (reinterpret_cast<int1_t>((v11 * v5 + v12) % 20 == fprintf)) {
                rax13 = g48e;
                rdi14 = *rax13;
                rsi10 = reinterpret_cast<int32_t*>(0x498);
                fun_49f(rdi14);
            }
            rax15 = g4a6;
            rdi16 = *rax15;
            rcx = v12;
            *rdi16 = *rsi10;
            rsi10 = reinterpret_cast<int32_t*>(0x4cb);
            fun_4d2(rdi16 + 1);
            ++v12;
        }
        ++v11;
    }
    rax17 = g4fa;
    rdi18 = *rax17;
    fun_512(rdi18, 0x504, 0x50b, rcx);
    rax19 = g519;
    rdi20 = *rax19;
    fun_52a(rdi20, 0x523, 0x50b, rcx);
    return;
}

void fun_301(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t rdi5;
    int64_t rbp6;
    int64_t v7;

    rdi5 = *reinterpret_cast<int64_t*>(rbp6 - 40);
    fun_30a(rdi5, rsi, rdx, rcx);
    goto v7;
}

void fun_49f(int64_t rdi) {
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
        rax2 = g4a6;
        rdi3 = *rax2;
        rcx4 = *reinterpret_cast<int32_t*>(rbp5 - 24);
        *rdi3 = *rsi6;
        rsi6 = reinterpret_cast<int32_t*>(0x4cb);
        fun_4d2(rdi3 + 1);
        *reinterpret_cast<int32_t*>(rbp7 - 24) = *reinterpret_cast<int32_t*>(rbp8 - 24) + 1;
        while (*reinterpret_cast<int32_t*>(rbp9 - 24) >= *reinterpret_cast<int32_t*>(rbp10 - 4)) {
            *reinterpret_cast<int32_t*>(rbp11 - 20) = *reinterpret_cast<int32_t*>(rbp12 - 20) + 1;
            if (*reinterpret_cast<int32_t*>(rbp13 - 20) >= *reinterpret_cast<int32_t*>(rbp14 - 4)) 
                goto addr_4f3_10;
            *reinterpret_cast<int32_t*>(rbp15 - 24) = reinterpret_cast<int32_t>(fprintf);
        }
        __asm__("cdq ");
        if (!reinterpret_cast<int1_t>((*reinterpret_cast<int32_t*>(rbp16 - 20) * *reinterpret_cast<int32_t*>(rbp17 - 4) + *reinterpret_cast<int32_t*>(rbp18 - 24)) % 20 == fprintf)) 
            continue;
        rax19 = g48e;
        rdi20 = *rax19;
        rsi6 = reinterpret_cast<int32_t*>(0x498);
        fun_49f(rdi20);
    }
    addr_4f3_10:
    rax21 = g4fa;
    rdi22 = *rax21;
    fun_512(rdi22, 0x504, 0x50b, rcx4);
    rax23 = g519;
    rdi24 = *rax23;
    fun_52a(rdi24, 0x523, 0x50b, rcx4);
    goto v25;
}

void fun_4d2(int64_t rdi) {
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
                goto addr_4f3_6;
            *reinterpret_cast<int32_t*>(rbp10 - 24) = reinterpret_cast<int32_t>(fprintf);
        }
        __asm__("cdq ");
        if (reinterpret_cast<int1_t>((*reinterpret_cast<int32_t*>(rbp11 - 20) * *reinterpret_cast<int32_t*>(rbp12 - 4) + *reinterpret_cast<int32_t*>(rbp13 - 24)) % 20 == fprintf)) {
            rax14 = g48e;
            rdi15 = *rax14;
            rsi16 = reinterpret_cast<int32_t*>(0x498);
            fun_49f(rdi15);
        }
        rax17 = g4a6;
        rdi18 = *rax17;
        rcx19 = *reinterpret_cast<int32_t*>(rbp20 - 24);
        *rdi18 = *rsi16;
        rsi16 = reinterpret_cast<int32_t*>(0x4cb);
        fun_4d2(rdi18 + 1);
    }
    addr_4f3_6:
    rax21 = g4fa;
    rdi22 = *rax21;
    fun_512(rdi22, 0x504, 0x50b, rcx19);
    rax23 = g519;
    rdi24 = *rax23;
    fun_52a(rdi24, 0x523, 0x50b, rcx19);
    goto v25;
}

void fun_427(int64_t rdi, int64_t rsi) {
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

    rax3 = g42e;
    rdi4 = *rax3;
    rsi5 = reinterpret_cast<int32_t*>(0x438);
    fun_446(rdi4);
    *reinterpret_cast<int32_t*>(rbp6 - 20) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp7 - 20) < *reinterpret_cast<int32_t*>(rbp8 - 4)) {
        *reinterpret_cast<int32_t*>(rbp9 - 24) = reinterpret_cast<int32_t>(fprintf);
        while (*reinterpret_cast<int32_t*>(rbp10 - 24) < *reinterpret_cast<int32_t*>(rbp11 - 4)) {
            __asm__("cdq ");
            if (reinterpret_cast<int1_t>((*reinterpret_cast<int32_t*>(rbp12 - 20) * *reinterpret_cast<int32_t*>(rbp13 - 4) + *reinterpret_cast<int32_t*>(rbp14 - 24)) % 20 == fprintf)) {
                rax15 = g48e;
                rdi16 = *rax15;
                rsi5 = reinterpret_cast<int32_t*>(0x498);
                fun_49f(rdi16);
            }
            rax17 = g4a6;
            rdi18 = *rax17;
            rcx19 = *reinterpret_cast<int32_t*>(rbp20 - 24);
            *rdi18 = *rsi5;
            rsi5 = reinterpret_cast<int32_t*>(0x4cb);
            fun_4d2(rdi18 + 1);
            *reinterpret_cast<int32_t*>(rbp21 - 24) = *reinterpret_cast<int32_t*>(rbp22 - 24) + 1;
        }
        *reinterpret_cast<int32_t*>(rbp23 - 20) = *reinterpret_cast<int32_t*>(rbp24 - 20) + 1;
    }
    rax25 = g4fa;
    rdi26 = *rax25;
    fun_512(rdi26, 0x504, 0x50b, rcx19);
    rax27 = g519;
    rdi28 = *rax27;
    fun_52a(rdi28, 0x523, 0x50b, rcx19);
    goto v29;
}

void fun_30a(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t v5;

    goto v5;
}

void fun_446(int64_t rdi) {
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
                rax11 = g48e;
                rdi12 = *rax11;
                rsi13 = reinterpret_cast<int32_t*>(0x498);
                fun_49f(rdi12);
            }
            rax14 = g4a6;
            rdi15 = *rax14;
            rcx16 = *reinterpret_cast<int32_t*>(rbp17 - 24);
            *rdi15 = *rsi13;
            rsi13 = reinterpret_cast<int32_t*>(0x4cb);
            fun_4d2(rdi15 + 1);
            *reinterpret_cast<int32_t*>(rbp18 - 24) = *reinterpret_cast<int32_t*>(rbp19 - 24) + 1;
        }
        *reinterpret_cast<int32_t*>(rbp20 - 20) = *reinterpret_cast<int32_t*>(rbp21 - 20) + 1;
    }
    rax22 = g4fa;
    rdi23 = *rax22;
    fun_512(rdi23, 0x504, 0x50b, rcx16);
    rax24 = g519;
    rdi25 = *rax24;
    fun_52a(rdi25, 0x523, 0x50b, rcx16);
    goto v26;
}

void fun_512(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t* rax5;
    int64_t rdi6;
    int64_t v7;

    rax5 = g519;
    rdi6 = *rax5;
    fun_52a(rdi6, 0x523, rdx, rcx);
    goto v7;
}

void fun_52a(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t v5;

    goto v5;
}

int64_t fun_29f(int64_t rdi, int64_t rsi);

struct s0 {
    int32_t f0;
    int32_t f4;
};

void init_array(int32_t edi, struct s0* rsi, int64_t rdx);

void fun_2c6(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx);

void fun_28c(int64_t rdi, int64_t rsi) {
    int64_t rbp3;
    int64_t rax4;
    int64_t rax5;
    int64_t rbp6;
    int32_t edi7;
    int64_t rbp8;
    struct s0* rsi9;
    int64_t rbp10;
    int64_t rdx11;
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
    int64_t v29;
    int32_t edi30;
    int64_t rbp31;
    int64_t rbp32;

    *reinterpret_cast<int64_t*>(rbp3 - 32) = rax4;
    rax5 = fun_29f(0x19c990, 8);
    *reinterpret_cast<int64_t*>(rbp6 - 40) = rax5;
    edi7 = *reinterpret_cast<int32_t*>(rbp8 - 20);
    rsi9 = *reinterpret_cast<struct s0**>(rbp10 - 32);
    rdx11 = *reinterpret_cast<int64_t*>(rbp12 - 40);
    init_array(edi7, rsi9, rdx11);
    *reinterpret_cast<int32_t*>(&rdi13) = *reinterpret_cast<int32_t*>(rbp14 - 24);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi13) + 4) = reinterpret_cast<int32_t>(fprintf);
    *reinterpret_cast<int32_t*>(&rsi15) = *reinterpret_cast<int32_t*>(rbp16 - 20);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi15) + 4) = reinterpret_cast<int32_t>(fprintf);
    rdx17 = *reinterpret_cast<int64_t*>(rbp18 - 32);
    rcx19 = *reinterpret_cast<int64_t*>(rbp20 - 40);
    fun_2c6(rdi13, rsi15, rdx17, rcx19);
    if (*reinterpret_cast<int32_t*>(rbp21 - 4) <= 42) {
        addr_2f8_4:
        rdi22 = *reinterpret_cast<int64_t*>(rbp23 - 32);
        fun_301(rdi22, rsi15, rdx17, rcx19);
    } else {
        rdi24 = **reinterpret_cast<int64_t**>(rbp25 - 16);
        rsi15 = 0x2de;
        eax26 = fun_2e3(rdi24, 0x2de, rdx17, rcx19);
        if (!reinterpret_cast<int1_t>(eax26 == fprintf)) 
            goto addr_2f8_4; else 
            goto addr_2ec_7;
    }
    rdi27 = *reinterpret_cast<int64_t*>(rbp28 - 40);
    fun_30a(rdi27, rsi15, rdx17, rcx19);
    goto v29;
    addr_2ec_7:
    edi30 = *reinterpret_cast<int32_t*>(rbp31 - 20);
    rsi15 = *reinterpret_cast<int64_t*>(rbp32 - 32);
    print_array(edi30, rsi15, rdx17, rcx19);
    goto addr_2f8_4;
}

int64_t fun_29f(int64_t rdi, int64_t rsi) {
    int64_t rbp3;
    int64_t rax4;
    int32_t edi5;
    int64_t rbp6;
    struct s0* rsi7;
    int64_t rbp8;
    int64_t rdx9;
    int64_t rbp10;
    int64_t rdi11;
    int64_t rbp12;
    int64_t rsi13;
    int64_t rbp14;
    int64_t rdx15;
    int64_t rbp16;
    int64_t rcx17;
    int64_t rbp18;
    int64_t rbp19;
    int64_t rdi20;
    int64_t rbp21;
    int64_t rdi22;
    int64_t rbp23;
    int32_t eax24;
    int64_t rdi25;
    int64_t rbp26;
    int64_t v27;
    int32_t edi28;
    int64_t rbp29;
    int64_t rbp30;

    *reinterpret_cast<int64_t*>(rbp3 - 40) = rax4;
    edi5 = *reinterpret_cast<int32_t*>(rbp6 - 20);
    rsi7 = *reinterpret_cast<struct s0**>(rbp8 - 32);
    rdx9 = *reinterpret_cast<int64_t*>(rbp10 - 40);
    init_array(edi5, rsi7, rdx9);
    *reinterpret_cast<int32_t*>(&rdi11) = *reinterpret_cast<int32_t*>(rbp12 - 24);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi11) + 4) = reinterpret_cast<int32_t>(fprintf);
    *reinterpret_cast<int32_t*>(&rsi13) = *reinterpret_cast<int32_t*>(rbp14 - 20);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi13) + 4) = reinterpret_cast<int32_t>(fprintf);
    rdx15 = *reinterpret_cast<int64_t*>(rbp16 - 32);
    rcx17 = *reinterpret_cast<int64_t*>(rbp18 - 40);
    fun_2c6(rdi11, rsi13, rdx15, rcx17);
    if (*reinterpret_cast<int32_t*>(rbp19 - 4) <= 42) {
        addr_2f8_3:
        rdi20 = *reinterpret_cast<int64_t*>(rbp21 - 32);
        fun_301(rdi20, rsi13, rdx15, rcx17);
    } else {
        rdi22 = **reinterpret_cast<int64_t**>(rbp23 - 16);
        rsi13 = 0x2de;
        eax24 = fun_2e3(rdi22, 0x2de, rdx15, rcx17);
        if (!reinterpret_cast<int1_t>(eax24 == fprintf)) 
            goto addr_2f8_3; else 
            goto addr_2ec_6;
    }
    rdi25 = *reinterpret_cast<int64_t*>(rbp26 - 40);
    fun_30a(rdi25, rsi13, rdx15, rcx17);
    goto v27;
    addr_2ec_6:
    edi28 = *reinterpret_cast<int32_t*>(rbp29 - 20);
    rsi13 = *reinterpret_cast<int64_t*>(rbp30 - 32);
    print_array(edi28, rsi13, rdx15, rcx17);
    goto addr_2f8_3;
}

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

void init_array(int32_t edi, struct s0* rsi, int64_t rdx) {
    struct s1* rdi1;
    int32_t v4;
    int32_t v5;
    int32_t v6;
    struct s2* rdi7;
    struct s3* rsi8;
    struct s4* rdi9;
    struct s5* rsi10;
    struct s6* rdi11;
    struct s7* rsi12;

    *reinterpret_cast<int32_t*>(&rdi1) = edi;
    v4 = *reinterpret_cast<int32_t*>(&rdi1);
    v5 = reinterpret_cast<int32_t>(fprintf);
    while (v5 < v4) {
        v6 = reinterpret_cast<int32_t>(fprintf);
        while (v6 < v4) {
            __asm__("cvtsi2sd xmm0, dword [rbp-0x1c]");
            __asm__("cvtsi2sd xmm1, eax");
            __asm__("mulsd xmm0, xmm1");
            rdi1->f0 = rsi->f0;
            rdi7 = reinterpret_cast<struct s2*>(&rdi1->f4);
            rsi8 = reinterpret_cast<struct s3*>(&rsi->f4);
            __asm__("addsd xmm0, xmm1");
            __asm__("cvtsi2sd xmm1, dword [rbp-0x4]");
            __asm__("divsd xmm0, xmm1");
            rdi7->f0 = rsi8->f0;
            rdi9 = reinterpret_cast<struct s4*>(&rdi7->f4);
            rsi10 = reinterpret_cast<struct s5*>(&rsi8->f4);
            __asm__("cvtsi2sd xmm0, dword [rbp-0x1c]");
            __asm__("cvtsi2sd xmm1, eax");
            __asm__("mulsd xmm0, xmm1");
            rdi9->f0 = rsi10->f0;
            rdi11 = reinterpret_cast<struct s6*>(&rdi9->f4);
            rsi12 = reinterpret_cast<struct s7*>(&rsi10->f4);
            __asm__("addsd xmm0, xmm1");
            __asm__("cvtsi2sd xmm1, dword [rbp-0x4]");
            __asm__("divsd xmm0, xmm1");
            rdi11->f0 = rsi12->f0;
            rdi1 = reinterpret_cast<struct s1*>(&rdi11->f4);
            rsi = reinterpret_cast<struct s0*>(&rsi12->f4);
            ++v6;
        }
        ++v5;
    }
    return;
}

void fun_2c6(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t rbp5;
    int64_t rdi6;
    int64_t rbp7;
    int64_t rdi8;
    int64_t rbp9;
    int32_t eax10;
    int64_t rdi11;
    int64_t rbp12;
    int64_t v13;
    int32_t edi14;
    int64_t rbp15;
    int64_t rbp16;

    if (*reinterpret_cast<int32_t*>(rbp5 - 4) <= 42) {
        addr_2f8_2:
        rdi6 = *reinterpret_cast<int64_t*>(rbp7 - 32);
        fun_301(rdi6, rsi, rdx, rcx);
    } else {
        rdi8 = **reinterpret_cast<int64_t**>(rbp9 - 16);
        rsi = 0x2de;
        eax10 = fun_2e3(rdi8, 0x2de, rdx, rcx);
        if (!reinterpret_cast<int1_t>(eax10 == fprintf)) 
            goto addr_2f8_2; else 
            goto addr_2ec_5;
    }
    rdi11 = *reinterpret_cast<int64_t*>(rbp12 - 40);
    fun_30a(rdi11, rsi, rdx, rcx);
    goto v13;
    addr_2ec_5:
    edi14 = *reinterpret_cast<int32_t*>(rbp15 - 20);
    rsi = *reinterpret_cast<int64_t*>(rbp16 - 32);
    print_array(edi14, rsi, rdx, rcx);
    goto addr_2f8_2;
}

void fprintf(int32_t edi, int32_t esi, int64_t rdx, int64_t rcx) {
}

struct s8 {
    int32_t f0;
    int32_t f4;
};

struct s9 {
    int32_t f0;
    int32_t f4;
};

void fun_5c(struct s8* rdi, struct s9* rsi) {
    int64_t rcx3;
    int1_t zf4;
    int64_t rbp5;
    int64_t rbp6;

    if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(rcx3 - 1 == fprintf)) & reinterpret_cast<uint1_t>(!zf4))) {
        rdi->f0 = rsi->f0;
        rdi = reinterpret_cast<struct s8*>(&rdi->f4);
        rsi = reinterpret_cast<struct s9*>(&rsi->f4);
        __asm__("addsd xmm1, [rax+rcx*8]");
    }
    __asm__("addsd xmm1, [rax+rcx*8]");
    __asm__("addsd xmm1, [rax+rcx*8]");
    __asm__("addsd xmm1, [rax+rcx*8]");
    rdi->f0 = rsi->f0;
    __asm__("mulsd xmm0, xmm1");
    rdi->f4 = rsi->f4;
    *reinterpret_cast<int32_t*>(rbp5 - 36) = *reinterpret_cast<int32_t*>(rbp6 - 36) + 1;
}

void fun_125() {
    int64_t rbp1;
    int64_t rbp2;

    *reinterpret_cast<int32_t*>(rbp1 - 32) = *reinterpret_cast<int32_t*>(rbp2 - 32) + 1;
}

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

void fun_138() {
    int64_t rbp1;
    int64_t rbp2;
    int64_t rbp3;
    int64_t rbp4;
    int64_t rbp5;
    int64_t rbp6;
    struct s10* rdi7;
    struct s11* rsi8;
    struct s12* rdi9;
    struct s13* rsi10;
    struct s14* rdi11;
    struct s15* rsi12;
    int64_t rbp13;
    int64_t rbp14;
    int64_t rbp15;
    int64_t rbp16;
    int64_t rbp17;
    int64_t rbp18;

    *reinterpret_cast<int32_t*>(rbp1 - 32) = 1;
    while (*reinterpret_cast<int32_t*>(rbp2 - 32) < *reinterpret_cast<int32_t*>(rbp3 - 8) - 1) {
        *reinterpret_cast<int32_t*>(rbp4 - 36) = 1;
        while (*reinterpret_cast<int32_t*>(rbp5 - 36) < *reinterpret_cast<int32_t*>(rbp6 - 8) - 1) {
            rdi7->f0 = rsi8->f0;
            rdi9 = reinterpret_cast<struct s12*>(&rdi7->f4);
            rsi10 = reinterpret_cast<struct s13*>(&rsi8->f4);
            __asm__("addsd xmm1, [rax+rcx*8]");
            __asm__("addsd xmm1, [rax+rcx*8]");
            __asm__("addsd xmm1, [rax+rcx*8]");
            __asm__("addsd xmm1, [rax+rcx*8]");
            rdi9->f0 = rsi10->f0;
            rdi11 = reinterpret_cast<struct s14*>(&rdi9->f4);
            rsi12 = reinterpret_cast<struct s15*>(&rsi10->f4);
            __asm__("mulsd xmm0, xmm1");
            rdi11->f0 = rsi12->f0;
            rdi7 = reinterpret_cast<struct s10*>(&rdi11->f4);
            rsi8 = reinterpret_cast<struct s11*>(&rsi12->f4);
            *reinterpret_cast<int32_t*>(rbp13 - 36) = *reinterpret_cast<int32_t*>(rbp14 - 36) + 1;
        }
        *reinterpret_cast<int32_t*>(rbp15 - 32) = *reinterpret_cast<int32_t*>(rbp16 - 32) + 1;
    }
    *reinterpret_cast<int32_t*>(rbp17 - 28) = *reinterpret_cast<int32_t*>(rbp18 - 28) + 1;
    goto 25;
}

void fun_25e() {
    int64_t v1;

    goto v1;
}

void submain(int32_t edi, int64_t rsi) {
    fun_28c(0x19c990, 8);
}

