
void fprintf();

void print_array(int32_t edi, int64_t rsi);

void fun_cb(int64_t rdi, int64_t rsi);

void fun_d4(int64_t rdi, int64_t rsi);

void fun_dd(int64_t rdi, int64_t rsi);

void fun_e6(int64_t rdi, int64_t rsi);

void fun_ad(int64_t rdi, int64_t rsi) {
    int32_t eax3;
    int32_t edi4;
    int64_t rbp5;
    int64_t rbp6;
    int64_t rdi7;
    int64_t rbp8;
    int64_t rdi9;
    int64_t rbp10;
    int64_t rdi11;
    int64_t rbp12;
    int64_t rdi13;
    int64_t rbp14;
    int64_t v15;

    if (reinterpret_cast<int1_t>(eax3 == fprintf)) {
        edi4 = *reinterpret_cast<int32_t*>(rbp5 - 20);
        rsi = *reinterpret_cast<int64_t*>(rbp6 - 32);
        print_array(edi4, rsi);
    }
    rdi7 = *reinterpret_cast<int64_t*>(rbp8 - 32);
    fun_cb(rdi7, rsi);
    rdi9 = *reinterpret_cast<int64_t*>(rbp10 - 40);
    fun_d4(rdi9, rsi);
    rdi11 = *reinterpret_cast<int64_t*>(rbp12 - 48);
    fun_dd(rdi11, rsi);
    rdi13 = *reinterpret_cast<int64_t*>(rbp14 - 56);
    fun_e6(rdi13, rsi);
    goto v15;
}

int64_t* g986 = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_997(int64_t rdi, int64_t rsi);

int64_t* g99e = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_9b6(int64_t rdi);

int64_t* g9fe = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_a0f(int64_t rdi);

int32_t** ga16 = reinterpret_cast<int32_t**>(0x48f0458b48388b48);

void fun_a42(int64_t rdi);

int64_t* ga6a = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_a82(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx);

int64_t* ga89 = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_a9a(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx);

void print_array(int32_t edi, int64_t rsi) {
    int32_t v3;
    int64_t* rax4;
    int64_t rdi5;
    int64_t* rax6;
    int64_t rdi7;
    int32_t* rsi8;
    int32_t v9;
    int32_t v10;
    int64_t* rax11;
    int64_t rdi12;
    int32_t** rax13;
    int32_t* rdi14;
    int64_t rcx15;
    int64_t* rax16;
    int64_t rdi17;
    int64_t* rax18;
    int64_t rdi19;

    v3 = edi;
    rax4 = g986;
    rdi5 = *rax4;
    fun_997(rdi5, 0x990);
    rax6 = g99e;
    rdi7 = *rax6;
    rsi8 = reinterpret_cast<int32_t*>(0x9a8);
    fun_9b6(rdi7);
    v9 = reinterpret_cast<int32_t>(fprintf);
    while (v9 < v3) {
        v10 = reinterpret_cast<int32_t>(fprintf);
        while (v10 < v3) {
            __asm__("cdq ");
            if (reinterpret_cast<int1_t>((v9 * v3 + v10) % 20 == fprintf)) {
                rax11 = g9fe;
                rdi12 = *rax11;
                rsi8 = reinterpret_cast<int32_t*>(0xa08);
                fun_a0f(rdi12);
            }
            rax13 = ga16;
            rdi14 = *rax13;
            rcx15 = v10;
            *rdi14 = *rsi8;
            rsi8 = reinterpret_cast<int32_t*>(0xa3b);
            fun_a42(rdi14 + 1);
            ++v10;
        }
        ++v9;
    }
    rax16 = ga6a;
    rdi17 = *rax16;
    fun_a82(rdi17, 0xa74, 0xa7b, rcx15);
    rax18 = ga89;
    rdi19 = *rax18;
    fun_a9a(rdi19, 0xa93, 0xa7b, rcx15);
    return;
}

void fun_cb(int64_t rdi, int64_t rsi) {
    int64_t rdi3;
    int64_t rbp4;
    int64_t rdi5;
    int64_t rbp6;
    int64_t rdi7;
    int64_t rbp8;
    int64_t v9;

    rdi3 = *reinterpret_cast<int64_t*>(rbp4 - 40);
    fun_d4(rdi3, rsi);
    rdi5 = *reinterpret_cast<int64_t*>(rbp6 - 48);
    fun_dd(rdi5, rsi);
    rdi7 = *reinterpret_cast<int64_t*>(rbp8 - 56);
    fun_e6(rdi7, rsi);
    goto v9;
}

void fun_a0f(int64_t rdi) {
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
        rax2 = ga16;
        rdi3 = *rax2;
        rcx4 = *reinterpret_cast<int32_t*>(rbp5 - 24);
        *rdi3 = *rsi6;
        rsi6 = reinterpret_cast<int32_t*>(0xa3b);
        fun_a42(rdi3 + 1);
        *reinterpret_cast<int32_t*>(rbp7 - 24) = *reinterpret_cast<int32_t*>(rbp8 - 24) + 1;
        while (*reinterpret_cast<int32_t*>(rbp9 - 24) >= *reinterpret_cast<int32_t*>(rbp10 - 4)) {
            *reinterpret_cast<int32_t*>(rbp11 - 20) = *reinterpret_cast<int32_t*>(rbp12 - 20) + 1;
            if (*reinterpret_cast<int32_t*>(rbp13 - 20) >= *reinterpret_cast<int32_t*>(rbp14 - 4)) 
                goto addr_a63_10;
            *reinterpret_cast<int32_t*>(rbp15 - 24) = reinterpret_cast<int32_t>(fprintf);
        }
        __asm__("cdq ");
        if (!reinterpret_cast<int1_t>((*reinterpret_cast<int32_t*>(rbp16 - 20) * *reinterpret_cast<int32_t*>(rbp17 - 4) + *reinterpret_cast<int32_t*>(rbp18 - 24)) % 20 == fprintf)) 
            continue;
        rax19 = g9fe;
        rdi20 = *rax19;
        rsi6 = reinterpret_cast<int32_t*>(0xa08);
        fun_a0f(rdi20);
    }
    addr_a63_10:
    rax21 = ga6a;
    rdi22 = *rax21;
    fun_a82(rdi22, 0xa74, 0xa7b, rcx4);
    rax23 = ga89;
    rdi24 = *rax23;
    fun_a9a(rdi24, 0xa93, 0xa7b, rcx4);
    goto v25;
}

void fun_a42(int64_t rdi) {
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
                goto addr_a63_6;
            *reinterpret_cast<int32_t*>(rbp10 - 24) = reinterpret_cast<int32_t>(fprintf);
        }
        __asm__("cdq ");
        if (reinterpret_cast<int1_t>((*reinterpret_cast<int32_t*>(rbp11 - 20) * *reinterpret_cast<int32_t*>(rbp12 - 4) + *reinterpret_cast<int32_t*>(rbp13 - 24)) % 20 == fprintf)) {
            rax14 = g9fe;
            rdi15 = *rax14;
            rsi16 = reinterpret_cast<int32_t*>(0xa08);
            fun_a0f(rdi15);
        }
        rax17 = ga16;
        rdi18 = *rax17;
        rcx19 = *reinterpret_cast<int32_t*>(rbp20 - 24);
        *rdi18 = *rsi16;
        rsi16 = reinterpret_cast<int32_t*>(0xa3b);
        fun_a42(rdi18 + 1);
    }
    addr_a63_6:
    rax21 = ga6a;
    rdi22 = *rax21;
    fun_a82(rdi22, 0xa74, 0xa7b, rcx19);
    rax23 = ga89;
    rdi24 = *rax23;
    fun_a9a(rdi24, 0xa93, 0xa7b, rcx19);
    goto v25;
}

void fun_997(int64_t rdi, int64_t rsi) {
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

    rax3 = g99e;
    rdi4 = *rax3;
    rsi5 = reinterpret_cast<int32_t*>(0x9a8);
    fun_9b6(rdi4);
    *reinterpret_cast<int32_t*>(rbp6 - 20) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp7 - 20) < *reinterpret_cast<int32_t*>(rbp8 - 4)) {
        *reinterpret_cast<int32_t*>(rbp9 - 24) = reinterpret_cast<int32_t>(fprintf);
        while (*reinterpret_cast<int32_t*>(rbp10 - 24) < *reinterpret_cast<int32_t*>(rbp11 - 4)) {
            __asm__("cdq ");
            if (reinterpret_cast<int1_t>((*reinterpret_cast<int32_t*>(rbp12 - 20) * *reinterpret_cast<int32_t*>(rbp13 - 4) + *reinterpret_cast<int32_t*>(rbp14 - 24)) % 20 == fprintf)) {
                rax15 = g9fe;
                rdi16 = *rax15;
                rsi5 = reinterpret_cast<int32_t*>(0xa08);
                fun_a0f(rdi16);
            }
            rax17 = ga16;
            rdi18 = *rax17;
            rcx19 = *reinterpret_cast<int32_t*>(rbp20 - 24);
            *rdi18 = *rsi5;
            rsi5 = reinterpret_cast<int32_t*>(0xa3b);
            fun_a42(rdi18 + 1);
            *reinterpret_cast<int32_t*>(rbp21 - 24) = *reinterpret_cast<int32_t*>(rbp22 - 24) + 1;
        }
        *reinterpret_cast<int32_t*>(rbp23 - 20) = *reinterpret_cast<int32_t*>(rbp24 - 20) + 1;
    }
    rax25 = ga6a;
    rdi26 = *rax25;
    fun_a82(rdi26, 0xa74, 0xa7b, rcx19);
    rax27 = ga89;
    rdi28 = *rax27;
    fun_a9a(rdi28, 0xa93, 0xa7b, rcx19);
    goto v29;
}

void fun_d4(int64_t rdi, int64_t rsi) {
    int64_t rdi3;
    int64_t rbp4;
    int64_t rdi5;
    int64_t rbp6;
    int64_t v7;

    rdi3 = *reinterpret_cast<int64_t*>(rbp4 - 48);
    fun_dd(rdi3, rsi);
    rdi5 = *reinterpret_cast<int64_t*>(rbp6 - 56);
    fun_e6(rdi5, rsi);
    goto v7;
}

void fun_9b6(int64_t rdi) {
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
                rax11 = g9fe;
                rdi12 = *rax11;
                rsi13 = reinterpret_cast<int32_t*>(0xa08);
                fun_a0f(rdi12);
            }
            rax14 = ga16;
            rdi15 = *rax14;
            rcx16 = *reinterpret_cast<int32_t*>(rbp17 - 24);
            *rdi15 = *rsi13;
            rsi13 = reinterpret_cast<int32_t*>(0xa3b);
            fun_a42(rdi15 + 1);
            *reinterpret_cast<int32_t*>(rbp18 - 24) = *reinterpret_cast<int32_t*>(rbp19 - 24) + 1;
        }
        *reinterpret_cast<int32_t*>(rbp20 - 20) = *reinterpret_cast<int32_t*>(rbp21 - 20) + 1;
    }
    rax22 = ga6a;
    rdi23 = *rax22;
    fun_a82(rdi23, 0xa74, 0xa7b, rcx16);
    rax24 = ga89;
    rdi25 = *rax24;
    fun_a9a(rdi25, 0xa93, 0xa7b, rcx16);
    goto v26;
}

void fun_dd(int64_t rdi, int64_t rsi) {
    int64_t rdi3;
    int64_t rbp4;
    int64_t v5;

    rdi3 = *reinterpret_cast<int64_t*>(rbp4 - 56);
    fun_e6(rdi3, rsi);
    goto v5;
}

void fun_e6(int64_t rdi, int64_t rsi) {
    int64_t v3;

    goto v3;
}

void fun_a82(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t* rax5;
    int64_t rdi6;
    int64_t v7;

    rax5 = ga89;
    rdi6 = *rax5;
    fun_a9a(rdi6, 0xa93, rdx, rcx);
    goto v7;
}

void fun_a9a(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t v5;

    goto v5;
}

void fprintf() {
}

void fun_98() {
    signed char* rax1;
    signed char* rax2;
    signed char al3;
    int64_t rdi4;
    int64_t rbp5;

    *rax1 = reinterpret_cast<signed char>(*rax2 + al3);
    rdi4 = **reinterpret_cast<int64_t**>(rbp5 - 16);
    fun_ad(rdi4, 0xa8);
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

struct s31 {
    int32_t f0;
    int32_t f4;
};

struct s32 {
    int32_t f0;
    int32_t f4;
};

struct s33 {
    int32_t f0;
    int32_t f4;
};

struct s34 {
    int32_t f0;
    int32_t f4;
};

struct s35 {
    int32_t f0;
    int32_t f4;
};

struct s36 {
    int32_t f0;
    int32_t f4;
};

struct s37 {
    int32_t f0;
    int32_t f4;
};

struct s38 {
    int32_t f0;
    int32_t f4;
};

struct s39 {
    int32_t f0;
    int32_t f4;
};

struct s40 {
    int32_t f0;
    int32_t f4;
};

struct s41 {
    int32_t f0;
    int32_t f4;
};

struct s42 {
    int32_t f0;
    int32_t f4;
};

struct s43 {
    int32_t f0;
    int32_t f4;
};

struct s44 {
    int32_t f0;
    int32_t f4;
};

struct s45 {
    int32_t f0;
    int32_t f4;
};

struct s46 {
    int32_t f0;
    int32_t f4;
};

struct s47 {
    int32_t f0;
    int32_t f4;
};

struct s48 {
    int32_t f0;
    int32_t f4;
};

struct s49 {
    int32_t f0;
    int32_t f4;
};

struct s50 {
    int32_t f0;
    int32_t f4;
};

struct s51 {
    int32_t f0;
    int32_t f4;
};

struct s52 {
    int32_t f0;
    int32_t f4;
};

struct s53 {
    int32_t f0;
    int32_t f4;
};

struct s54 {
    int32_t f0;
    int32_t f4;
};

struct s55 {
    int32_t f0;
    int32_t f4;
};

struct s56 {
    int32_t f0;
    int32_t f4;
};

struct s57 {
    int32_t f0;
    int32_t f4;
};

struct s58 {
    int32_t f0;
    int32_t f4;
};

struct s59 {
    int32_t f0;
    int32_t f4;
};

void kernel_adi(struct s0* rdi, struct s1* rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    int32_t v7;
    int32_t v8;
    struct s2* rdi9;
    struct s3* rsi10;
    struct s4* rdi11;
    struct s5* rsi12;
    struct s6* rdi13;
    struct s7* rsi14;
    struct s8* rdi15;
    struct s9* rsi16;
    struct s10* rdi17;
    struct s11* rsi18;
    struct s12* rdi19;
    struct s13* rsi20;
    struct s14* rdi21;
    struct s15* rsi22;
    struct s16* rdi23;
    struct s17* rsi24;
    struct s18* rdi25;
    struct s19* rsi26;
    struct s20* rdi27;
    struct s21* rsi28;
    struct s22* rdi29;
    struct s23* rsi30;
    struct s24* rdi31;
    struct s25* rsi32;
    struct s26* rdi33;
    struct s27* rsi34;
    struct s28* rdi35;
    struct s29* rsi36;
    struct s30* rdi37;
    struct s31* rsi38;
    struct s32* rdi39;
    struct s33* rsi40;
    struct s34* rdi41;
    struct s35* rsi42;
    struct s36* rdi43;
    struct s37* rsi44;
    struct s38* rdi45;
    struct s39* rsi46;
    struct s40* rdi47;
    struct s41* rsi48;
    struct s42* rdi49;
    struct s43* rsi50;
    struct s44* rdi51;
    struct s45* rsi52;
    struct s46* rdi53;
    struct s47* rsi54;
    struct s48* rdi55;
    struct s49* rsi56;
    struct s50* rdi57;
    struct s51* rsi58;
    struct s52* rdi59;
    struct s53* rsi60;
    struct s54* rdi61;
    struct s55* rsi62;
    struct s56* rdi63;
    struct s57* rsi64;
    struct s58* rdi65;
    struct s59* rsi66;
    int32_t* rdi67;
    int32_t* rsi68;
    int32_t v69;
    int32_t v70;
    int32_t* rdi71;
    int32_t* rsi72;
    int32_t* rdi73;
    int32_t* rsi74;
    int32_t* rdi75;
    int32_t* rsi76;
    int32_t* rdi77;
    int32_t* rsi78;
    int32_t* rdi79;
    int32_t* rsi80;
    int32_t v81;
    int32_t* rdi82;
    int32_t* rsi83;
    int32_t* rdi84;
    int32_t* rsi85;
    int32_t* rdi86;
    int32_t* rsi87;
    int32_t* rdi88;
    int32_t* rsi89;
    int32_t* rdi90;
    int32_t* rsi91;
    int32_t* rdi92;
    int32_t* rsi93;
    int32_t* rdi94;
    int32_t* rsi95;
    int32_t* rdi96;
    int32_t* rsi97;
    int32_t* rdi98;
    int32_t* rsi99;
    int32_t* rdi100;
    int32_t* rsi101;
    int32_t* rdi102;
    int32_t* rsi103;
    int32_t* rdi104;
    int32_t* rsi105;
    int32_t* rdi106;
    int32_t* rsi107;
    int32_t* rdi108;
    int32_t* rsi109;
    int32_t* rdi110;
    int32_t* rsi111;
    int32_t* rdi112;
    int32_t* rsi113;
    int32_t* rdi114;
    int32_t* rsi115;
    int32_t v116;
    int32_t* rdi117;
    int32_t* rsi118;
    int32_t* rdi119;
    int32_t* rsi120;
    int32_t* rdi121;
    int32_t* rsi122;
    int32_t v123;
    int32_t* rdi124;
    int32_t* rsi125;
    int32_t* rdi126;
    int32_t* rsi127;
    int32_t* rdi128;
    int32_t* rsi129;
    int32_t* rdi130;
    int32_t* rsi131;
    int32_t* rdi132;
    int32_t* rsi133;
    int32_t v134;
    int32_t* rdi135;
    int32_t* rsi136;
    int32_t* rdi137;
    int32_t* rsi138;
    int32_t* rdi139;
    int32_t* rsi140;
    int32_t* rdi141;
    int32_t* rsi142;
    int32_t* rdi143;
    int32_t* rsi144;
    int32_t* rdi145;
    int32_t* rsi146;
    int32_t* rdi147;
    int32_t* rsi148;
    int32_t* rdi149;
    int32_t* rsi150;
    int32_t* rdi151;
    int32_t* rsi152;
    int32_t* rdi153;
    int32_t* rsi154;
    int32_t* rdi155;
    int32_t* rsi156;
    int32_t* rdi157;
    int32_t* rsi158;
    int32_t* rdi159;
    int32_t* rsi160;
    int32_t* rdi161;
    int32_t* rsi162;
    int32_t* rdi163;
    int32_t* rsi164;
    int32_t* rdi165;
    int32_t* rsi166;
    int32_t* rdi167;
    int32_t* rsi168;
    int32_t v169;
    int32_t* rdi170;
    int32_t* rsi171;
    int32_t* rdi172;
    int32_t* rsi173;
    int32_t* rdi174;
    int32_t* rsi175;

    v7 = *reinterpret_cast<int32_t*>(&rdi);
    v8 = *reinterpret_cast<int32_t*>(&rsi);
    __asm__("cvtsi2sd xmm1, dword [rbp-0x8]");
    rdi->f0 = rsi->f0;
    rdi9 = reinterpret_cast<struct s2*>(&rdi->f4);
    rsi10 = reinterpret_cast<struct s3*>(&rsi->f4);
    __asm__("divsd xmm0, xmm1");
    rdi9->f0 = rsi10->f0;
    rdi11 = reinterpret_cast<struct s4*>(&rdi9->f4);
    rsi12 = reinterpret_cast<struct s5*>(&rsi10->f4);
    __asm__("cvtsi2sd xmm1, dword [rbp-0x8]");
    rdi11->f0 = rsi12->f0;
    rdi13 = reinterpret_cast<struct s6*>(&rdi11->f4);
    rsi14 = reinterpret_cast<struct s7*>(&rsi12->f4);
    __asm__("divsd xmm0, xmm1");
    rdi13->f0 = rsi14->f0;
    rdi15 = reinterpret_cast<struct s8*>(&rdi13->f4);
    rsi16 = reinterpret_cast<struct s9*>(&rsi14->f4);
    __asm__("cvtsi2sd xmm1, dword [rbp-0x4]");
    rdi15->f0 = rsi16->f0;
    rdi17 = reinterpret_cast<struct s10*>(&rdi15->f4);
    rsi18 = reinterpret_cast<struct s11*>(&rsi16->f4);
    __asm__("divsd xmm0, xmm1");
    rdi17->f0 = rsi18->f0;
    rdi19 = reinterpret_cast<struct s12*>(&rdi17->f4);
    rsi20 = reinterpret_cast<struct s13*>(&rsi18->f4);
    rdi19->f0 = rsi20->f0;
    rdi21 = reinterpret_cast<struct s14*>(&rdi19->f4);
    rsi22 = reinterpret_cast<struct s15*>(&rsi20->f4);
    rdi21->f0 = rsi22->f0;
    rdi23 = reinterpret_cast<struct s16*>(&rdi21->f4);
    rsi24 = reinterpret_cast<struct s17*>(&rsi22->f4);
    rdi23->f0 = rsi24->f0;
    rdi25 = reinterpret_cast<struct s18*>(&rdi23->f4);
    rsi26 = reinterpret_cast<struct s19*>(&rsi24->f4);
    rdi25->f0 = rsi26->f0;
    rdi27 = reinterpret_cast<struct s20*>(&rdi25->f4);
    rsi28 = reinterpret_cast<struct s21*>(&rsi26->f4);
    rdi27->f0 = rsi28->f0;
    rdi29 = reinterpret_cast<struct s22*>(&rdi27->f4);
    rsi30 = reinterpret_cast<struct s23*>(&rsi28->f4);
    __asm__("mulsd xmm0, [rbp-0x50]");
    rdi29->f0 = rsi30->f0;
    rdi31 = reinterpret_cast<struct s24*>(&rdi29->f4);
    rsi32 = reinterpret_cast<struct s25*>(&rsi30->f4);
    __asm__("mulsd xmm1, [rbp-0x40]");
    __asm__("divsd xmm0, xmm1");
    rdi31->f0 = rsi32->f0;
    rdi33 = reinterpret_cast<struct s26*>(&rdi31->f4);
    rsi34 = reinterpret_cast<struct s27*>(&rsi32->f4);
    rdi33->f0 = rsi34->f0;
    rdi35 = reinterpret_cast<struct s28*>(&rdi33->f4);
    rsi36 = reinterpret_cast<struct s29*>(&rsi34->f4);
    __asm__("mulsd xmm0, [rbp-0x50]");
    rdi35->f0 = rsi36->f0;
    rdi37 = reinterpret_cast<struct s30*>(&rdi35->f4);
    rsi38 = reinterpret_cast<struct s31*>(&rsi36->f4);
    __asm__("mulsd xmm1, [rbp-0x48]");
    __asm__("divsd xmm0, xmm1");
    rdi37->f0 = rsi38->f0;
    rdi39 = reinterpret_cast<struct s32*>(&rdi37->f4);
    rsi40 = reinterpret_cast<struct s33*>(&rsi38->f4);
    rdi39->f0 = rsi40->f0;
    rdi41 = reinterpret_cast<struct s34*>(&rdi39->f4);
    rsi42 = reinterpret_cast<struct s35*>(&rsi40->f4);
    __asm__("movd rax, xmm0");
    __asm__("movd xmm0, rax");
    rdi41->f0 = rsi42->f0;
    rdi43 = reinterpret_cast<struct s36*>(&rdi41->f4);
    rsi44 = reinterpret_cast<struct s37*>(&rsi42->f4);
    __asm__("divsd xmm0, xmm1");
    rdi43->f0 = rsi44->f0;
    rdi45 = reinterpret_cast<struct s38*>(&rdi43->f4);
    rsi46 = reinterpret_cast<struct s39*>(&rsi44->f4);
    rdi45->f0 = rsi46->f0;
    rdi47 = reinterpret_cast<struct s40*>(&rdi45->f4);
    rsi48 = reinterpret_cast<struct s41*>(&rsi46->f4);
    __asm__("addsd xmm0, [rbp-0x68]");
    rdi47->f0 = rsi48->f0;
    rdi49 = reinterpret_cast<struct s42*>(&rdi47->f4);
    rsi50 = reinterpret_cast<struct s43*>(&rsi48->f4);
    rdi49->f0 = rsi50->f0;
    rdi51 = reinterpret_cast<struct s44*>(&rdi49->f4);
    rsi52 = reinterpret_cast<struct s45*>(&rsi50->f4);
    rdi51->f0 = rsi52->f0;
    rdi53 = reinterpret_cast<struct s46*>(&rdi51->f4);
    rsi54 = reinterpret_cast<struct s47*>(&rsi52->f4);
    rdi53->f0 = rsi54->f0;
    rdi55 = reinterpret_cast<struct s48*>(&rdi53->f4);
    rsi56 = reinterpret_cast<struct s49*>(&rsi54->f4);
    __asm__("movd rax, xmm0");
    __asm__("movd xmm0, rax");
    rdi55->f0 = rsi56->f0;
    rdi57 = reinterpret_cast<struct s50*>(&rdi55->f4);
    rsi58 = reinterpret_cast<struct s51*>(&rsi56->f4);
    __asm__("divsd xmm0, xmm1");
    rdi57->f0 = rsi58->f0;
    rdi59 = reinterpret_cast<struct s52*>(&rdi57->f4);
    rsi60 = reinterpret_cast<struct s53*>(&rsi58->f4);
    rdi59->f0 = rsi60->f0;
    rdi61 = reinterpret_cast<struct s54*>(&rdi59->f4);
    rsi62 = reinterpret_cast<struct s55*>(&rsi60->f4);
    __asm__("addsd xmm0, [rbp-0x70]");
    rdi61->f0 = rsi62->f0;
    rdi63 = reinterpret_cast<struct s56*>(&rdi61->f4);
    rsi64 = reinterpret_cast<struct s57*>(&rsi62->f4);
    rdi63->f0 = rsi64->f0;
    rdi65 = reinterpret_cast<struct s58*>(&rdi63->f4);
    rsi66 = reinterpret_cast<struct s59*>(&rsi64->f4);
    rdi65->f0 = rsi66->f0;
    rdi67 = &rdi65->f4;
    rsi68 = &rsi66->f4;
    v69 = 1;
    while (v69 <= v7) {
        v70 = 1;
        while (v70 < v8 - 1) {
            *rdi67 = *rsi68;
            rdi71 = rdi67 + 1;
            rsi72 = rsi68 + 1;
            *rdi71 = *rsi72;
            rdi73 = rdi71 + 1;
            rsi74 = rsi72 + 1;
            __asm__("xorps xmm0, xmm0");
            *rdi73 = *rsi74;
            rdi75 = rdi73 + 1;
            rsi76 = rsi74 + 1;
            *rdi75 = *rsi76;
            rdi77 = rdi75 + 1;
            rsi78 = rsi76 + 1;
            *rdi77 = *rsi78;
            rdi79 = rdi77 + 1;
            rsi80 = rsi78 + 1;
            v81 = 1;
            while (v81 < v8 - 1) {
                *rdi79 = *rsi80;
                rdi82 = rdi79 + 1;
                rsi83 = rsi80 + 1;
                __asm__("movd rax, xmm0");
                __asm__("movd xmm0, rax");
                *rdi82 = *rsi83;
                rdi84 = rdi82 + 1;
                rsi85 = rsi83 + 1;
                *rdi84 = *rsi85;
                rdi86 = rdi84 + 1;
                rsi87 = rsi85 + 1;
                *rdi86 = *rsi87;
                rdi88 = rdi86 + 1;
                rsi89 = rsi87 + 1;
                __asm__("mulsd xmm1, xmm3");
                __asm__("addsd xmm1, xmm2");
                __asm__("divsd xmm0, xmm1");
                *rdi88 = *rsi89;
                rdi90 = rdi88 + 1;
                rsi91 = rsi89 + 1;
                *rdi90 = *rsi91;
                rdi92 = rdi90 + 1;
                rsi93 = rsi91 + 1;
                __asm__("movd rax, xmm0");
                __asm__("movd xmm0, rax");
                *rdi92 = *rsi93;
                rdi94 = rdi92 + 1;
                rsi95 = rsi93 + 1;
                *rdi94 = *rsi95;
                rdi96 = rdi94 + 1;
                rsi97 = rsi95 + 1;
                __asm__("addsd xmm1, xmm1");
                *rdi96 = *rsi97;
                rdi98 = rdi96 + 1;
                rsi99 = rsi97 + 1;
                __asm__("addsd xmm1, xmm3");
                __asm__("mulsd xmm1, [rax+rcx*8]");
                __asm__("mulsd xmm0, xmm2");
                __asm__("addsd xmm0, xmm1");
                *rdi98 = *rsi99;
                rdi100 = rdi98 + 1;
                rsi101 = rsi99 + 1;
                *rdi100 = *rsi101;
                rdi102 = rdi100 + 1;
                rsi103 = rsi101 + 1;
                __asm__("movd rax, xmm1");
                __asm__("movd xmm1, rax");
                __asm__("mulsd xmm1, xmm2");
                __asm__("addsd xmm1, xmm0");
                *rdi102 = *rsi103;
                rdi104 = rdi102 + 1;
                rsi105 = rsi103 + 1;
                *rdi104 = *rsi105;
                rdi106 = rdi104 + 1;
                rsi107 = rsi105 + 1;
                __asm__("movd rax, xmm0");
                __asm__("movd xmm0, rax");
                __asm__("mulsd xmm0, xmm2");
                __asm__("addsd xmm0, xmm1");
                *rdi106 = *rsi107;
                rdi108 = rdi106 + 1;
                rsi109 = rsi107 + 1;
                *rdi108 = *rsi109;
                rdi110 = rdi108 + 1;
                rsi111 = rsi109 + 1;
                *rdi110 = *rsi111;
                rdi112 = rdi110 + 1;
                rsi113 = rsi111 + 1;
                __asm__("mulsd xmm1, xmm3");
                __asm__("addsd xmm1, xmm2");
                __asm__("divsd xmm0, xmm1");
                *rdi112 = *rsi113;
                rdi79 = rdi112 + 1;
                rsi80 = rsi113 + 1;
                ++v81;
            }
            *rdi79 = *rsi80;
            rdi114 = rdi79 + 1;
            rsi115 = rsi80 + 1;
            *rdi114 = *rsi115;
            rdi67 = rdi114 + 1;
            rsi68 = rsi115 + 1;
            v116 = v8 - 2;
            while (v116 >= 1) {
                *rdi67 = *rsi68;
                rdi117 = rdi67 + 1;
                rsi118 = rsi68 + 1;
                *rdi117 = *rsi118;
                rdi119 = rdi117 + 1;
                rsi120 = rsi118 + 1;
                *rdi119 = *rsi120;
                rdi121 = rdi119 + 1;
                rsi122 = rsi120 + 1;
                __asm__("mulsd xmm0, xmm2");
                __asm__("addsd xmm0, xmm1");
                *rdi121 = *rsi122;
                rdi67 = rdi121 + 1;
                rsi68 = rsi122 + 1;
                --v116;
            }
            ++v70;
        }
        v123 = 1;
        while (v123 < v8 - 1) {
            *rdi67 = *rsi68;
            rdi124 = rdi67 + 1;
            rsi125 = rsi68 + 1;
            *rdi124 = *rsi125;
            rdi126 = rdi124 + 1;
            rsi127 = rsi125 + 1;
            __asm__("xorps xmm0, xmm0");
            *rdi126 = *rsi127;
            rdi128 = rdi126 + 1;
            rsi129 = rsi127 + 1;
            *rdi128 = *rsi129;
            rdi130 = rdi128 + 1;
            rsi131 = rsi129 + 1;
            *rdi130 = *rsi131;
            rdi132 = rdi130 + 1;
            rsi133 = rsi131 + 1;
            v134 = 1;
            while (v134 < v8 - 1) {
                *rdi132 = *rsi133;
                rdi135 = rdi132 + 1;
                rsi136 = rsi133 + 1;
                __asm__("movd rax, xmm0");
                __asm__("movd xmm0, rax");
                *rdi135 = *rsi136;
                rdi137 = rdi135 + 1;
                rsi138 = rsi136 + 1;
                *rdi137 = *rsi138;
                rdi139 = rdi137 + 1;
                rsi140 = rsi138 + 1;
                *rdi139 = *rsi140;
                rdi141 = rdi139 + 1;
                rsi142 = rsi140 + 1;
                __asm__("mulsd xmm1, xmm3");
                __asm__("addsd xmm1, xmm2");
                __asm__("divsd xmm0, xmm1");
                *rdi141 = *rsi142;
                rdi143 = rdi141 + 1;
                rsi144 = rsi142 + 1;
                *rdi143 = *rsi144;
                rdi145 = rdi143 + 1;
                rsi146 = rsi144 + 1;
                __asm__("movd rax, xmm0");
                __asm__("movd xmm0, rax");
                *rdi145 = *rsi146;
                rdi147 = rdi145 + 1;
                rsi148 = rsi146 + 1;
                *rdi147 = *rsi148;
                rdi149 = rdi147 + 1;
                rsi150 = rsi148 + 1;
                __asm__("addsd xmm1, xmm1");
                *rdi149 = *rsi150;
                rdi151 = rdi149 + 1;
                rsi152 = rsi150 + 1;
                __asm__("addsd xmm1, xmm3");
                __asm__("mulsd xmm1, [rax+rcx*8]");
                __asm__("mulsd xmm0, xmm2");
                __asm__("addsd xmm0, xmm1");
                *rdi151 = *rsi152;
                rdi153 = rdi151 + 1;
                rsi154 = rsi152 + 1;
                *rdi153 = *rsi154;
                rdi155 = rdi153 + 1;
                rsi156 = rsi154 + 1;
                __asm__("movd rax, xmm1");
                __asm__("movd xmm1, rax");
                __asm__("mulsd xmm1, xmm2");
                __asm__("addsd xmm1, xmm0");
                *rdi155 = *rsi156;
                rdi157 = rdi155 + 1;
                rsi158 = rsi156 + 1;
                *rdi157 = *rsi158;
                rdi159 = rdi157 + 1;
                rsi160 = rsi158 + 1;
                __asm__("movd rax, xmm0");
                __asm__("movd xmm0, rax");
                __asm__("mulsd xmm0, xmm2");
                __asm__("addsd xmm0, xmm1");
                *rdi159 = *rsi160;
                rdi161 = rdi159 + 1;
                rsi162 = rsi160 + 1;
                *rdi161 = *rsi162;
                rdi163 = rdi161 + 1;
                rsi164 = rsi162 + 1;
                *rdi163 = *rsi164;
                rdi165 = rdi163 + 1;
                rsi166 = rsi164 + 1;
                __asm__("mulsd xmm1, xmm3");
                __asm__("addsd xmm1, xmm2");
                __asm__("divsd xmm0, xmm1");
                *rdi165 = *rsi166;
                rdi132 = rdi165 + 1;
                rsi133 = rsi166 + 1;
                ++v134;
            }
            *rdi132 = *rsi133;
            rdi167 = rdi132 + 1;
            rsi168 = rsi133 + 1;
            *rdi167 = *rsi168;
            rdi67 = rdi167 + 1;
            rsi68 = rsi168 + 1;
            v169 = v8 - 2;
            while (v169 >= 1) {
                *rdi67 = *rsi68;
                rdi170 = rdi67 + 1;
                rsi171 = rsi68 + 1;
                *rdi170 = *rsi171;
                rdi172 = rdi170 + 1;
                rsi173 = rsi171 + 1;
                *rdi172 = *rsi173;
                rdi174 = rdi172 + 1;
                rsi175 = rsi173 + 1;
                __asm__("mulsd xmm0, xmm2");
                __asm__("addsd xmm0, xmm1");
                *rdi174 = *rsi175;
                rdi67 = rdi174 + 1;
                rsi68 = rsi175 + 1;
                --v169;
            }
            ++v123;
        }
        ++v69;
    }
    return;
}

void init_array(int32_t edi, int32_t* rsi) {
    int32_t* rdi1;
    int32_t v3;
    int32_t v4;
    int32_t v5;

    *reinterpret_cast<int32_t*>(&rdi1) = edi;
    v3 = *reinterpret_cast<int32_t*>(&rdi1);
    v4 = reinterpret_cast<int32_t>(fprintf);
    while (v4 < v3) {
        v5 = reinterpret_cast<int32_t>(fprintf);
        while (v5 < v3) {
            __asm__("cvtsi2sd xmm0, eax");
            __asm__("cvtsi2sd xmm1, dword [rbp-0x4]");
            __asm__("divsd xmm0, xmm1");
            *rdi1 = *rsi;
            ++rdi1;
            ++rsi;
            ++v5;
        }
        ++v4;
    }
    return;
}

