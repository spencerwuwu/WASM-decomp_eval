
void fun_255(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7);

int32_t fun_237(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7);

struct s0 {
    int32_t f0;
    int32_t f4;
};

struct s1 {
    int32_t f0;
    int32_t f4;
};

void fprintf(struct s0* rdi, struct s1* rsi);

void fun_25e(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7);

void fun_267(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7);

void print_array(int32_t edi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7);

void fun_21a(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7) {
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
    int64_t v18;
    int32_t edi19;
    int64_t rbp20;
    int64_t rbp21;

    if (*reinterpret_cast<int32_t*>(rbp8 - 4) <= 42) {
        addr_24c_2:
        rdi9 = *reinterpret_cast<int64_t*>(rbp10 - 48);
        fun_255(rdi9, rsi, rdx, rcx, r8, r9, __return_address());
    } else {
        rdi11 = **reinterpret_cast<int64_t**>(rbp12 - 16);
        rsi = 0x232;
        eax13 = fun_237(rdi11, 0x232, rdx, rcx, r8, r9, __return_address());
        if (!reinterpret_cast<int1_t>(eax13 == fprintf)) 
            goto addr_24c_2; else 
            goto addr_240_5;
    }
    rdi14 = *reinterpret_cast<int64_t*>(rbp15 - 56);
    fun_25e(rdi14, rsi, rdx, rcx, r8, r9, __return_address());
    rdi16 = *reinterpret_cast<int64_t*>(rbp17 - 64);
    fun_267(rdi16, rsi, rdx, rcx, r8, r9, __return_address());
    goto v18;
    addr_240_5:
    edi19 = *reinterpret_cast<int32_t*>(rbp20 - 20);
    rsi = *reinterpret_cast<int64_t*>(rbp21 - 48);
    print_array(edi19, rsi, rdx, rcx, r8, r9, __return_address());
    goto addr_24c_2;
}

int32_t fun_237(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7) {
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
    int64_t v18;

    if (reinterpret_cast<int1_t>(eax8 == fprintf)) {
        edi9 = *reinterpret_cast<int32_t*>(rbp10 - 20);
        rsi = *reinterpret_cast<int64_t*>(rbp11 - 48);
        print_array(edi9, rsi, rdx, rcx, r8, r9, __return_address());
    }
    rdi12 = *reinterpret_cast<int64_t*>(rbp13 - 48);
    fun_255(rdi12, rsi, rdx, rcx, r8, r9, __return_address());
    rdi14 = *reinterpret_cast<int64_t*>(rbp15 - 56);
    fun_25e(rdi14, rsi, rdx, rcx, r8, r9, __return_address());
    rdi16 = *reinterpret_cast<int64_t*>(rbp17 - 64);
    fun_267(rdi16, rsi, rdx, rcx, r8, r9, __return_address());
    goto v18;
}

int64_t* g3f6 = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_407(int64_t rdi, int64_t rsi);

int64_t* g40e = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_426(int64_t rdi);

int64_t* g46e = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_47f(int64_t rdi);

int32_t** g486 = reinterpret_cast<int32_t**>(0x48f0458b48388b48);

void fun_4b2(int64_t rdi);

int64_t* g4da = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_4f2(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx);

int64_t* g4f9 = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_50a(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx);

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
    rax9 = g3f6;
    rdi10 = *rax9;
    fun_407(rdi10, 0x400);
    rax11 = g40e;
    rdi12 = *rax11;
    rsi13 = reinterpret_cast<int32_t*>(0x418);
    fun_426(rdi12);
    v14 = reinterpret_cast<int32_t>(fprintf);
    while (v14 < v8) {
        v15 = reinterpret_cast<int32_t>(fprintf);
        while (v15 < v8) {
            __asm__("cdq ");
            if (reinterpret_cast<int1_t>((v14 * v8 + v15) % 20 == fprintf)) {
                rax16 = g46e;
                rdi17 = *rax16;
                rsi13 = reinterpret_cast<int32_t*>(0x478);
                fun_47f(rdi17);
            }
            rax18 = g486;
            rdi19 = *rax18;
            rcx = v15;
            *rdi19 = *rsi13;
            rsi13 = reinterpret_cast<int32_t*>(0x4ab);
            fun_4b2(rdi19 + 1);
            ++v15;
        }
        ++v14;
    }
    rax20 = g4da;
    rdi21 = *rax20;
    fun_4f2(rdi21, 0x4e4, 0x4eb, rcx);
    rax22 = g4f9;
    rdi23 = *rax22;
    fun_50a(rdi23, 0x503, 0x4eb, rcx);
    return;
}

void fun_255(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7) {
    int64_t rdi8;
    int64_t rbp9;
    int64_t rdi10;
    int64_t rbp11;
    int64_t v12;

    rdi8 = *reinterpret_cast<int64_t*>(rbp9 - 56);
    fun_25e(rdi8, rsi, rdx, rcx, r8, r9, __return_address());
    rdi10 = *reinterpret_cast<int64_t*>(rbp11 - 64);
    fun_267(rdi10, rsi, rdx, rcx, r8, r9, __return_address());
    goto v12;
}

void fun_47f(int64_t rdi) {
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
        rax2 = g486;
        rdi3 = *rax2;
        rcx4 = *reinterpret_cast<int32_t*>(rbp5 - 24);
        *rdi3 = *rsi6;
        rsi6 = reinterpret_cast<int32_t*>(0x4ab);
        fun_4b2(rdi3 + 1);
        *reinterpret_cast<int32_t*>(rbp7 - 24) = *reinterpret_cast<int32_t*>(rbp8 - 24) + 1;
        while (*reinterpret_cast<int32_t*>(rbp9 - 24) >= *reinterpret_cast<int32_t*>(rbp10 - 4)) {
            *reinterpret_cast<int32_t*>(rbp11 - 20) = *reinterpret_cast<int32_t*>(rbp12 - 20) + 1;
            if (*reinterpret_cast<int32_t*>(rbp13 - 20) >= *reinterpret_cast<int32_t*>(rbp14 - 4)) 
                goto addr_4d3_10;
            *reinterpret_cast<int32_t*>(rbp15 - 24) = reinterpret_cast<int32_t>(fprintf);
        }
        __asm__("cdq ");
        if (!reinterpret_cast<int1_t>((*reinterpret_cast<int32_t*>(rbp16 - 20) * *reinterpret_cast<int32_t*>(rbp17 - 4) + *reinterpret_cast<int32_t*>(rbp18 - 24)) % 20 == fprintf)) 
            continue;
        rax19 = g46e;
        rdi20 = *rax19;
        rsi6 = reinterpret_cast<int32_t*>(0x478);
        fun_47f(rdi20);
    }
    addr_4d3_10:
    rax21 = g4da;
    rdi22 = *rax21;
    fun_4f2(rdi22, 0x4e4, 0x4eb, rcx4);
    rax23 = g4f9;
    rdi24 = *rax23;
    fun_50a(rdi24, 0x503, 0x4eb, rcx4);
    goto v25;
}

void fun_4b2(int64_t rdi) {
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
                goto addr_4d3_6;
            *reinterpret_cast<int32_t*>(rbp10 - 24) = reinterpret_cast<int32_t>(fprintf);
        }
        __asm__("cdq ");
        if (reinterpret_cast<int1_t>((*reinterpret_cast<int32_t*>(rbp11 - 20) * *reinterpret_cast<int32_t*>(rbp12 - 4) + *reinterpret_cast<int32_t*>(rbp13 - 24)) % 20 == fprintf)) {
            rax14 = g46e;
            rdi15 = *rax14;
            rsi16 = reinterpret_cast<int32_t*>(0x478);
            fun_47f(rdi15);
        }
        rax17 = g486;
        rdi18 = *rax17;
        rcx19 = *reinterpret_cast<int32_t*>(rbp20 - 24);
        *rdi18 = *rsi16;
        rsi16 = reinterpret_cast<int32_t*>(0x4ab);
        fun_4b2(rdi18 + 1);
    }
    addr_4d3_6:
    rax21 = g4da;
    rdi22 = *rax21;
    fun_4f2(rdi22, 0x4e4, 0x4eb, rcx19);
    rax23 = g4f9;
    rdi24 = *rax23;
    fun_50a(rdi24, 0x503, 0x4eb, rcx19);
    goto v25;
}

void fun_407(int64_t rdi, int64_t rsi) {
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

    rax3 = g40e;
    rdi4 = *rax3;
    rsi5 = reinterpret_cast<int32_t*>(0x418);
    fun_426(rdi4);
    *reinterpret_cast<int32_t*>(rbp6 - 20) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp7 - 20) < *reinterpret_cast<int32_t*>(rbp8 - 4)) {
        *reinterpret_cast<int32_t*>(rbp9 - 24) = reinterpret_cast<int32_t>(fprintf);
        while (*reinterpret_cast<int32_t*>(rbp10 - 24) < *reinterpret_cast<int32_t*>(rbp11 - 4)) {
            __asm__("cdq ");
            if (reinterpret_cast<int1_t>((*reinterpret_cast<int32_t*>(rbp12 - 20) * *reinterpret_cast<int32_t*>(rbp13 - 4) + *reinterpret_cast<int32_t*>(rbp14 - 24)) % 20 == fprintf)) {
                rax15 = g46e;
                rdi16 = *rax15;
                rsi5 = reinterpret_cast<int32_t*>(0x478);
                fun_47f(rdi16);
            }
            rax17 = g486;
            rdi18 = *rax17;
            rcx19 = *reinterpret_cast<int32_t*>(rbp20 - 24);
            *rdi18 = *rsi5;
            rsi5 = reinterpret_cast<int32_t*>(0x4ab);
            fun_4b2(rdi18 + 1);
            *reinterpret_cast<int32_t*>(rbp21 - 24) = *reinterpret_cast<int32_t*>(rbp22 - 24) + 1;
        }
        *reinterpret_cast<int32_t*>(rbp23 - 20) = *reinterpret_cast<int32_t*>(rbp24 - 20) + 1;
    }
    rax25 = g4da;
    rdi26 = *rax25;
    fun_4f2(rdi26, 0x4e4, 0x4eb, rcx19);
    rax27 = g4f9;
    rdi28 = *rax27;
    fun_50a(rdi28, 0x503, 0x4eb, rcx19);
    goto v29;
}

void fun_25e(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7) {
    int64_t rdi8;
    int64_t rbp9;
    int64_t v10;

    rdi8 = *reinterpret_cast<int64_t*>(rbp9 - 64);
    fun_267(rdi8, rsi, rdx, rcx, r8, r9, __return_address());
    goto v10;
}

void fun_426(int64_t rdi) {
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
                rax11 = g46e;
                rdi12 = *rax11;
                rsi13 = reinterpret_cast<int32_t*>(0x478);
                fun_47f(rdi12);
            }
            rax14 = g486;
            rdi15 = *rax14;
            rcx16 = *reinterpret_cast<int32_t*>(rbp17 - 24);
            *rdi15 = *rsi13;
            rsi13 = reinterpret_cast<int32_t*>(0x4ab);
            fun_4b2(rdi15 + 1);
            *reinterpret_cast<int32_t*>(rbp18 - 24) = *reinterpret_cast<int32_t*>(rbp19 - 24) + 1;
        }
        *reinterpret_cast<int32_t*>(rbp20 - 20) = *reinterpret_cast<int32_t*>(rbp21 - 20) + 1;
    }
    rax22 = g4da;
    rdi23 = *rax22;
    fun_4f2(rdi23, 0x4e4, 0x4eb, rcx16);
    rax24 = g4f9;
    rdi25 = *rax24;
    fun_50a(rdi25, 0x503, 0x4eb, rcx16);
    goto v26;
}

void fun_267(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7) {
    int64_t v8;

    goto v8;
}

void fun_4f2(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t* rax5;
    int64_t rdi6;
    int64_t v7;

    rax5 = g4f9;
    rdi6 = *rax5;
    fun_50a(rdi6, 0x503, rdx, rcx);
    goto v7;
}

void fun_50a(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t v5;

    goto v5;
}

int64_t fun_1bf(int64_t rdi, int64_t rsi);

int64_t fun_1d2(int64_t rdi, int64_t rsi);

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

void fun_1ac(int64_t rdi, int64_t rsi) {
    int64_t rbp3;
    int64_t rax4;
    int64_t rax5;
    int64_t rbp6;
    int64_t rax7;
    int64_t rbp8;
    struct s2* rdi9;
    int64_t rbp10;
    struct s3* rsi11;
    int64_t rbp12;
    int64_t r8_13;
    int64_t rbp14;
    int64_t r9_15;
    int64_t rbp16;
    int64_t v17;
    int64_t rbp18;
    int64_t rbp19;
    int64_t rbp20;
    struct s4* rdi21;
    int64_t rbp22;
    struct s5* rsi23;
    int64_t rbp24;
    int32_t* rdi25;
    int32_t* rsi26;
    int64_t rsi27;
    int64_t rdx28;
    int64_t rbp29;
    int64_t rcx30;
    int64_t rbp31;
    int64_t r8_32;
    int64_t rbp33;
    int64_t rbp34;
    int64_t rdi35;
    int64_t rbp36;
    int64_t rdi37;
    int64_t rbp38;
    int32_t eax39;
    int64_t rdi40;
    int64_t rbp41;
    int64_t rdi42;
    int64_t rbp43;
    int64_t v44;
    int32_t edi45;
    int64_t rbp46;
    int64_t rbp47;

    *reinterpret_cast<int64_t*>(rbp3 - 48) = rax4;
    rax5 = fun_1bf(0x124f80, 8);
    *reinterpret_cast<int64_t*>(rbp6 - 56) = rax5;
    rax7 = fun_1d2(0x124f80, 8);
    *reinterpret_cast<int64_t*>(rbp8 - 64) = rax7;
    *reinterpret_cast<int32_t*>(&rdi9) = *reinterpret_cast<int32_t*>(rbp10 - 20);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi9) + 4) = reinterpret_cast<int32_t>(fprintf);
    *reinterpret_cast<int32_t*>(&rsi11) = *reinterpret_cast<int32_t*>(rbp12 - 24);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi11) + 4) = reinterpret_cast<int32_t>(fprintf);
    r8_13 = *reinterpret_cast<int64_t*>(rbp14 - 48);
    r9_15 = *reinterpret_cast<int64_t*>(rbp16 - 56);
    v17 = *reinterpret_cast<int64_t*>(rbp18 - 64);
    init_array(rdi9, rsi11, rbp19 - 32, rbp20 - 40, r8_13, r9_15, v17);
    *reinterpret_cast<int32_t*>(&rdi21) = *reinterpret_cast<int32_t*>(rbp22 - 20);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi21) + 4) = reinterpret_cast<int32_t>(fprintf);
    *reinterpret_cast<int32_t*>(&rsi23) = *reinterpret_cast<int32_t*>(rbp24 - 24);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi23) + 4) = reinterpret_cast<int32_t>(fprintf);
    rdi21->f0 = rsi23->f0;
    rdi25 = &rdi21->f4;
    rsi26 = &rsi23->f4;
    *rdi25 = *rsi26;
    rsi27 = reinterpret_cast<int64_t>(rsi26 + 1);
    rdx28 = *reinterpret_cast<int64_t*>(rbp29 - 48);
    rcx30 = *reinterpret_cast<int64_t*>(rbp31 - 56);
    r8_32 = *reinterpret_cast<int64_t*>(rbp33 - 64);
    fun_21a(rdi25 + 1, rsi27, rdx28, rcx30, r8_32, r9_15, v17);
    if (*reinterpret_cast<int32_t*>(rbp34 - 4) <= 42) {
        addr_24c_11:
        rdi35 = *reinterpret_cast<int64_t*>(rbp36 - 48);
        fun_255(rdi35, rsi27, rdx28, rcx30, r8_32, r9_15, v17);
    } else {
        rdi37 = **reinterpret_cast<int64_t**>(rbp38 - 16);
        rsi27 = 0x232;
        eax39 = fun_237(rdi37, 0x232, rdx28, rcx30, r8_32, r9_15, v17);
        if (!reinterpret_cast<int1_t>(eax39 == fprintf)) 
            goto addr_24c_11; else 
            goto addr_240_14;
    }
    rdi40 = *reinterpret_cast<int64_t*>(rbp41 - 56);
    fun_25e(rdi40, rsi27, rdx28, rcx30, r8_32, r9_15, v17);
    rdi42 = *reinterpret_cast<int64_t*>(rbp43 - 64);
    fun_267(rdi42, rsi27, rdx28, rcx30, r8_32, r9_15, v17);
    goto v44;
    addr_240_14:
    edi45 = *reinterpret_cast<int32_t*>(rbp46 - 20);
    rsi27 = *reinterpret_cast<int64_t*>(rbp47 - 48);
    print_array(edi45, rsi27, rdx28, rcx30, r8_32, r9_15, v17);
    goto addr_24c_11;
}

struct s6 {
    int32_t f0;
    int32_t f4;
};

struct s7 {
    int32_t f0;
    int32_t f4;
};

int64_t fun_1bf(int64_t rdi, int64_t rsi) {
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
    int64_t v15;
    int64_t rbp16;
    int64_t rbp17;
    int64_t rbp18;
    struct s6* rdi19;
    int64_t rbp20;
    struct s7* rsi21;
    int64_t rbp22;
    int32_t* rdi23;
    int32_t* rsi24;
    int64_t rsi25;
    int64_t rdx26;
    int64_t rbp27;
    int64_t rcx28;
    int64_t rbp29;
    int64_t r8_30;
    int64_t rbp31;
    int64_t rbp32;
    int64_t rdi33;
    int64_t rbp34;
    int64_t rdi35;
    int64_t rbp36;
    int32_t eax37;
    int64_t rdi38;
    int64_t rbp39;
    int64_t rdi40;
    int64_t rbp41;
    int64_t v42;
    int32_t edi43;
    int64_t rbp44;
    int64_t rbp45;

    *reinterpret_cast<int64_t*>(rbp3 - 56) = rax4;
    rax5 = fun_1d2(0x124f80, 8);
    *reinterpret_cast<int64_t*>(rbp6 - 64) = rax5;
    *reinterpret_cast<int32_t*>(&rdi7) = *reinterpret_cast<int32_t*>(rbp8 - 20);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi7) + 4) = reinterpret_cast<int32_t>(fprintf);
    *reinterpret_cast<int32_t*>(&rsi9) = *reinterpret_cast<int32_t*>(rbp10 - 24);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi9) + 4) = reinterpret_cast<int32_t>(fprintf);
    r8_11 = *reinterpret_cast<int64_t*>(rbp12 - 48);
    r9_13 = *reinterpret_cast<int64_t*>(rbp14 - 56);
    v15 = *reinterpret_cast<int64_t*>(rbp16 - 64);
    init_array(rdi7, rsi9, rbp17 - 32, rbp18 - 40, r8_11, r9_13, v15);
    *reinterpret_cast<int32_t*>(&rdi19) = *reinterpret_cast<int32_t*>(rbp20 - 20);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi19) + 4) = reinterpret_cast<int32_t>(fprintf);
    *reinterpret_cast<int32_t*>(&rsi21) = *reinterpret_cast<int32_t*>(rbp22 - 24);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi21) + 4) = reinterpret_cast<int32_t>(fprintf);
    rdi19->f0 = rsi21->f0;
    rdi23 = &rdi19->f4;
    rsi24 = &rsi21->f4;
    *rdi23 = *rsi24;
    rsi25 = reinterpret_cast<int64_t>(rsi24 + 1);
    rdx26 = *reinterpret_cast<int64_t*>(rbp27 - 48);
    rcx28 = *reinterpret_cast<int64_t*>(rbp29 - 56);
    r8_30 = *reinterpret_cast<int64_t*>(rbp31 - 64);
    fun_21a(rdi23 + 1, rsi25, rdx26, rcx28, r8_30, r9_13, v15);
    if (*reinterpret_cast<int32_t*>(rbp32 - 4) <= 42) {
        addr_24c_10:
        rdi33 = *reinterpret_cast<int64_t*>(rbp34 - 48);
        fun_255(rdi33, rsi25, rdx26, rcx28, r8_30, r9_13, v15);
    } else {
        rdi35 = **reinterpret_cast<int64_t**>(rbp36 - 16);
        rsi25 = 0x232;
        eax37 = fun_237(rdi35, 0x232, rdx26, rcx28, r8_30, r9_13, v15);
        if (!reinterpret_cast<int1_t>(eax37 == fprintf)) 
            goto addr_24c_10; else 
            goto addr_240_13;
    }
    rdi38 = *reinterpret_cast<int64_t*>(rbp39 - 56);
    fun_25e(rdi38, rsi25, rdx26, rcx28, r8_30, r9_13, v15);
    rdi40 = *reinterpret_cast<int64_t*>(rbp41 - 64);
    fun_267(rdi40, rsi25, rdx26, rcx28, r8_30, r9_13, v15);
    goto v42;
    addr_240_13:
    edi43 = *reinterpret_cast<int32_t*>(rbp44 - 20);
    rsi25 = *reinterpret_cast<int64_t*>(rbp45 - 48);
    print_array(edi43, rsi25, rdx26, rcx28, r8_30, r9_13, v15);
    goto addr_24c_10;
}

struct s8 {
    int32_t f0;
    int32_t f4;
};

struct s9 {
    int32_t f0;
    int32_t f4;
};

int64_t fun_1d2(int64_t rdi, int64_t rsi) {
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
    int64_t v13;
    int64_t rbp14;
    int64_t rbp15;
    int64_t rbp16;
    struct s8* rdi17;
    int64_t rbp18;
    struct s9* rsi19;
    int64_t rbp20;
    int32_t* rdi21;
    int32_t* rsi22;
    int64_t rsi23;
    int64_t rdx24;
    int64_t rbp25;
    int64_t rcx26;
    int64_t rbp27;
    int64_t r8_28;
    int64_t rbp29;
    int64_t rbp30;
    int64_t rdi31;
    int64_t rbp32;
    int64_t rdi33;
    int64_t rbp34;
    int32_t eax35;
    int64_t rdi36;
    int64_t rbp37;
    int64_t rdi38;
    int64_t rbp39;
    int64_t v40;
    int32_t edi41;
    int64_t rbp42;
    int64_t rbp43;

    *reinterpret_cast<int64_t*>(rbp3 - 64) = rax4;
    *reinterpret_cast<int32_t*>(&rdi5) = *reinterpret_cast<int32_t*>(rbp6 - 20);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi5) + 4) = reinterpret_cast<int32_t>(fprintf);
    *reinterpret_cast<int32_t*>(&rsi7) = *reinterpret_cast<int32_t*>(rbp8 - 24);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi7) + 4) = reinterpret_cast<int32_t>(fprintf);
    r8_9 = *reinterpret_cast<int64_t*>(rbp10 - 48);
    r9_11 = *reinterpret_cast<int64_t*>(rbp12 - 56);
    v13 = *reinterpret_cast<int64_t*>(rbp14 - 64);
    init_array(rdi5, rsi7, rbp15 - 32, rbp16 - 40, r8_9, r9_11, v13);
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
    r8_28 = *reinterpret_cast<int64_t*>(rbp29 - 64);
    fun_21a(rdi21 + 1, rsi23, rdx24, rcx26, r8_28, r9_11, v13);
    if (*reinterpret_cast<int32_t*>(rbp30 - 4) <= 42) {
        addr_24c_9:
        rdi31 = *reinterpret_cast<int64_t*>(rbp32 - 48);
        fun_255(rdi31, rsi23, rdx24, rcx26, r8_28, r9_11, v13);
    } else {
        rdi33 = **reinterpret_cast<int64_t**>(rbp34 - 16);
        rsi23 = 0x232;
        eax35 = fun_237(rdi33, 0x232, rdx24, rcx26, r8_28, r9_11, v13);
        if (!reinterpret_cast<int1_t>(eax35 == fprintf)) 
            goto addr_24c_9; else 
            goto addr_240_12;
    }
    rdi36 = *reinterpret_cast<int64_t*>(rbp37 - 56);
    fun_25e(rdi36, rsi23, rdx24, rcx26, r8_28, r9_11, v13);
    rdi38 = *reinterpret_cast<int64_t*>(rbp39 - 64);
    fun_267(rdi38, rsi23, rdx24, rcx26, r8_28, r9_11, v13);
    goto v40;
    addr_240_12:
    edi41 = *reinterpret_cast<int32_t*>(rbp42 - 20);
    rsi23 = *reinterpret_cast<int64_t*>(rbp43 - 48);
    print_array(edi41, rsi23, rdx24, rcx26, r8_28, r9_11, v13);
    goto addr_24c_9;
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

void init_array(struct s2* rdi, struct s3* rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7) {
    int32_t v8;
    int32_t v9;
    struct s10* rdi10;
    struct s11* rsi11;
    struct s12* rdi12;
    struct s13* rsi13;
    struct s14* rdi14;
    struct s15* rsi15;
    struct s16* rdi16;
    struct s17* rsi17;
    int32_t v18;
    int32_t v19;
    struct s18* rdi20;
    struct s19* rsi21;
    int32_t v22;
    int32_t v23;

    v8 = *reinterpret_cast<int32_t*>(&rdi);
    v9 = *reinterpret_cast<int32_t*>(&rsi);
    rdi->f0 = rsi->f0;
    rdi10 = reinterpret_cast<struct s10*>(&rdi->f4);
    rsi11 = reinterpret_cast<struct s11*>(&rsi->f4);
    rdi10->f0 = rsi11->f0;
    rdi12 = reinterpret_cast<struct s12*>(&rdi10->f4);
    rsi13 = reinterpret_cast<struct s13*>(&rsi11->f4);
    rdi12->f0 = rsi13->f0;
    rdi14 = reinterpret_cast<struct s14*>(&rdi12->f4);
    rsi15 = reinterpret_cast<struct s15*>(&rsi13->f4);
    rdi14->f0 = rsi15->f0;
    rdi16 = reinterpret_cast<struct s16*>(&rdi14->f4);
    rsi17 = reinterpret_cast<struct s17*>(&rsi15->f4);
    v18 = reinterpret_cast<int32_t>(fprintf);
    while (v18 < v8) {
        v19 = reinterpret_cast<int32_t>(fprintf);
        while (v19 < v9) {
            __asm__("cdq ");
            __asm__("cvtsi2sd xmm0, edx");
            __asm__("cvtsi2sd xmm1, dword [rbp-0x4]");
            __asm__("divsd xmm0, xmm1");
            rdi16->f0 = rsi17->f0;
            rdi20 = reinterpret_cast<struct s18*>(&rdi16->f4);
            rsi21 = reinterpret_cast<struct s19*>(&rsi17->f4);
            __asm__("cdq ");
            __asm__("cvtsi2sd xmm0, edx");
            __asm__("cvtsi2sd xmm1, dword [rbp-0x8]");
            __asm__("divsd xmm0, xmm1");
            rdi20->f0 = rsi21->f0;
            rdi16 = reinterpret_cast<struct s16*>(&rdi20->f4);
            rsi17 = reinterpret_cast<struct s17*>(&rsi21->f4);
            ++v19;
        }
        ++v18;
    }
    v22 = reinterpret_cast<int32_t>(fprintf);
    while (v22 < v8) {
        v23 = reinterpret_cast<int32_t>(fprintf);
        while (v23 < v8) {
            __asm__("cdq ");
            __asm__("cvtsi2sd xmm0, edx");
            __asm__("cvtsi2sd xmm1, dword [rbp-0x8]");
            __asm__("divsd xmm0, xmm1");
            rdi16->f0 = rsi17->f0;
            rdi16 = reinterpret_cast<struct s16*>(&rdi16->f4);
            rsi17 = reinterpret_cast<struct s17*>(&rsi17->f4);
            ++v23;
        }
        ++v22;
    }
    return;
}

void fprintf(struct s0* rdi, struct s1* rsi) {
    rdi->f0 = rsi->f0;
    rdi->f4 = rsi->f4;
}

void fun_64(int32_t* rdi, int32_t* rsi) {
    int64_t rbp3;
    int64_t rbp4;

    *rdi = *rsi;
    *reinterpret_cast<int32_t*>(rbp3 - 56) = *reinterpret_cast<int32_t*>(rbp4 - 56) + 1;
}

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

void fun_88() {
    signed char* rax1;
    signed char* rax2;
    signed char al3;
    int64_t rbp4;
    int64_t rbp5;
    int64_t rbp6;
    struct s20* rdi7;
    struct s21* rsi8;
    struct s22* rdi9;
    struct s23* rsi10;
    struct s24* rdi11;
    struct s25* rsi12;
    struct s26* rdi13;
    struct s27* rsi14;
    int64_t rbp15;
    int64_t rbp16;
    int64_t rbp17;
    int64_t rbp18;

    __asm__("rol byte [rax], cl");
    *rax1 = reinterpret_cast<signed char>(*rax2 + al3);
    *reinterpret_cast<int32_t*>(rbp4 - 56) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp5 - 56) <= *reinterpret_cast<int32_t*>(rbp6 - 52)) {
        rdi7->f0 = rsi8->f0;
        rdi9 = reinterpret_cast<struct s22*>(&rdi7->f4);
        rsi10 = reinterpret_cast<struct s23*>(&rsi8->f4);
        __asm__("mulsd xmm0, [rbp-0x10]");
        rdi9->f0 = rsi10->f0;
        rdi11 = reinterpret_cast<struct s24*>(&rdi9->f4);
        rsi12 = reinterpret_cast<struct s25*>(&rsi10->f4);
        rdi11->f0 = rsi12->f0;
        rdi13 = reinterpret_cast<struct s26*>(&rdi11->f4);
        rsi14 = reinterpret_cast<struct s27*>(&rsi12->f4);
        __asm__("mulsd xmm1, [rbp-0x10]");
        __asm__("mulsd xmm1, [rax+rcx*8]");
        __asm__("mulsd xmm0, xmm2");
        __asm__("addsd xmm0, xmm1");
        __asm__("addsd xmm0, [rax+rcx*8]");
        rdi13->f0 = rsi14->f0;
        rdi7 = reinterpret_cast<struct s20*>(&rdi13->f4);
        rsi8 = reinterpret_cast<struct s21*>(&rsi14->f4);
        *reinterpret_cast<int32_t*>(rbp15 - 56) = *reinterpret_cast<int32_t*>(rbp16 - 56) + 1;
    }
    *reinterpret_cast<int32_t*>(rbp17 - 60) = *reinterpret_cast<int32_t*>(rbp18 - 60) + 1;
}

void fun_79() {
    int64_t rbp1;

    *reinterpret_cast<int32_t*>(rbp1 - 60) = reinterpret_cast<int32_t>(fprintf);
}

void fun_15e() {
    int64_t rbp1;
    int64_t rbp2;

    *reinterpret_cast<int32_t*>(rbp1 - 52) = *reinterpret_cast<int32_t*>(rbp2 - 52) + 1;
}

void fun_171() {
    int64_t v1;

    goto v1;
}

void submain(int32_t edi, int64_t rsi) {
    fun_1ac(0x15f900, 8);
}

