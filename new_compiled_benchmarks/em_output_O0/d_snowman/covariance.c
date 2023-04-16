
void fun_2a();

void fun_340(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8);

int32_t fun_322(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8);

void fprintf(int32_t* rdi, int32_t* rsi, int64_t rdx, int64_t rcx, int64_t r8);

void fun_349(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8);

void fun_352(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8);

void print_array(int32_t edi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8);

void fun_305(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8) {
    int64_t rbp6;
    int64_t rdi7;
    int64_t rbp8;
    int64_t rdi9;
    int64_t rbp10;
    int32_t eax11;
    int64_t rdi12;
    int64_t rbp13;
    int64_t rdi14;
    int64_t rbp15;
    int64_t v16;
    int32_t edi17;
    int64_t rbp18;
    int64_t rbp19;

    if (*reinterpret_cast<int32_t*>(rbp6 - 4) <= reinterpret_cast<int32_t>(fun_2a)) {
        addr_337_2:
        rdi7 = *reinterpret_cast<int64_t*>(rbp8 - 40);
        fun_340(rdi7, rsi, rdx, rcx, r8);
    } else {
        rdi9 = **reinterpret_cast<int64_t**>(rbp10 - 16);
        rsi = 0x31d;
        eax11 = fun_322(rdi9, 0x31d, rdx, rcx, r8);
        if (!reinterpret_cast<int1_t>(eax11 == fprintf)) 
            goto addr_337_2; else 
            goto addr_32b_5;
    }
    rdi12 = *reinterpret_cast<int64_t*>(rbp13 - 48);
    fun_349(rdi12, rsi, rdx, rcx, r8);
    rdi14 = *reinterpret_cast<int64_t*>(rbp15 - 56);
    fun_352(rdi14, rsi, rdx, rcx, r8);
    goto v16;
    addr_32b_5:
    edi17 = *reinterpret_cast<int32_t*>(rbp18 - 24);
    rsi = *reinterpret_cast<int64_t*>(rbp19 - 48);
    print_array(edi17, rsi, rdx, rcx, r8);
    goto addr_337_2;
}

int32_t fun_322(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8) {
    int32_t eax6;
    int32_t edi7;
    int64_t rbp8;
    int64_t rbp9;
    int64_t rdi10;
    int64_t rbp11;
    int64_t rdi12;
    int64_t rbp13;
    int64_t rdi14;
    int64_t rbp15;
    int64_t v16;

    if (reinterpret_cast<int1_t>(eax6 == fprintf)) {
        edi7 = *reinterpret_cast<int32_t*>(rbp8 - 24);
        rsi = *reinterpret_cast<int64_t*>(rbp9 - 48);
        print_array(edi7, rsi, rdx, rcx, r8);
    }
    rdi10 = *reinterpret_cast<int64_t*>(rbp11 - 40);
    fun_340(rdi10, rsi, rdx, rcx, r8);
    rdi12 = *reinterpret_cast<int64_t*>(rbp13 - 48);
    fun_349(rdi12, rsi, rdx, rcx, r8);
    rdi14 = *reinterpret_cast<int64_t*>(rbp15 - 56);
    fun_352(rdi14, rsi, rdx, rcx, r8);
    goto v16;
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

void print_array(int32_t edi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8) {
    int32_t v6;
    int64_t* rax7;
    int64_t rdi8;
    int64_t* rax9;
    int64_t rdi10;
    int32_t* rsi11;
    int32_t v12;
    int32_t v13;
    int64_t* rax14;
    int64_t rdi15;
    int32_t** rax16;
    int32_t* rdi17;
    int64_t* rax18;
    int64_t rdi19;
    int64_t* rax20;
    int64_t rdi21;

    v6 = edi;
    rax7 = g416;
    rdi8 = *rax7;
    fun_427(rdi8, 0x420);
    rax9 = g42e;
    rdi10 = *rax9;
    rsi11 = reinterpret_cast<int32_t*>(0x438);
    fun_446(rdi10);
    v12 = reinterpret_cast<int32_t>(fprintf);
    while (v12 < v6) {
        v13 = reinterpret_cast<int32_t>(fprintf);
        while (v13 < v6) {
            __asm__("cdq ");
            if (reinterpret_cast<int1_t>((v12 * v6 + v13) % 20 == fprintf)) {
                rax14 = g48e;
                rdi15 = *rax14;
                rsi11 = reinterpret_cast<int32_t*>(0x498);
                fun_49f(rdi15);
            }
            rax16 = g4a6;
            rdi17 = *rax16;
            rcx = v13;
            *rdi17 = *rsi11;
            rsi11 = reinterpret_cast<int32_t*>(0x4cb);
            fun_4d2(rdi17 + 1);
            ++v13;
        }
        ++v12;
    }
    rax18 = g4fa;
    rdi19 = *rax18;
    fun_512(rdi19, 0x504, 0x50b, rcx);
    rax20 = g519;
    rdi21 = *rax20;
    fun_52a(rdi21, 0x523, 0x50b, rcx);
    return;
}

void fun_340(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8) {
    int64_t rdi6;
    int64_t rbp7;
    int64_t rdi8;
    int64_t rbp9;
    int64_t v10;

    rdi6 = *reinterpret_cast<int64_t*>(rbp7 - 48);
    fun_349(rdi6, rsi, rdx, rcx, r8);
    rdi8 = *reinterpret_cast<int64_t*>(rbp9 - 56);
    fun_352(rdi8, rsi, rdx, rcx, r8);
    goto v10;
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

void fun_349(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8) {
    int64_t rdi6;
    int64_t rbp7;
    int64_t v8;

    rdi6 = *reinterpret_cast<int64_t*>(rbp7 - 56);
    fun_352(rdi6, rsi, rdx, rcx, r8);
    goto v8;
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

void fun_352(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8) {
    int64_t v6;

    goto v6;
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

int64_t fun_2bf(int64_t rdi, int64_t rsi);

int64_t fun_2d2(int64_t rdi, int64_t rsi);

struct s0 {
    int32_t f0;
    int32_t f4;
};

struct s1 {
    int32_t f0;
    int32_t f4;
};

int64_t init_array(struct s0* rdi, struct s1* rsi, int64_t rdx, int64_t rcx);

void fun_2ac(int64_t rdi, int64_t rsi) {
    int64_t rbp3;
    int64_t rax4;
    int64_t rax5;
    int64_t rbp6;
    int64_t rax7;
    int64_t rbp8;
    struct s0* rdi9;
    int64_t rbp10;
    struct s1* rsi11;
    int64_t rbp12;
    int64_t rcx13;
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
    int64_t r8_25;
    int64_t rbp26;
    int64_t rbp27;
    int64_t rdi28;
    int64_t rbp29;
    int64_t rdi30;
    int64_t rbp31;
    int32_t eax32;
    int64_t rdi33;
    int64_t rbp34;
    int64_t rdi35;
    int64_t rbp36;
    int64_t v37;
    int32_t edi38;
    int64_t rbp39;
    int64_t rbp40;

    *reinterpret_cast<int64_t*>(rbp3 - 40) = rax4;
    rax5 = fun_2bf(0x15f900, 8);
    *reinterpret_cast<int64_t*>(rbp6 - 48) = rax5;
    rax7 = fun_2d2(0x4b0, 8);
    *reinterpret_cast<int64_t*>(rbp8 - 56) = rax7;
    *reinterpret_cast<int32_t*>(&rdi9) = *reinterpret_cast<int32_t*>(rbp10 - 24);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi9) + 4) = reinterpret_cast<int32_t>(fprintf);
    *reinterpret_cast<int32_t*>(&rsi11) = *reinterpret_cast<int32_t*>(rbp12 - 20);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi11) + 4) = reinterpret_cast<int32_t>(fprintf);
    rcx13 = *reinterpret_cast<int64_t*>(rbp14 - 40);
    init_array(rdi9, rsi11, rbp15 - 32, rcx13);
    *reinterpret_cast<int32_t*>(&rdi16) = *reinterpret_cast<int32_t*>(rbp17 - 24);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi16) + 4) = reinterpret_cast<int32_t>(fprintf);
    *reinterpret_cast<int32_t*>(&rsi18) = *reinterpret_cast<int32_t*>(rbp19 - 20);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi18) + 4) = reinterpret_cast<int32_t>(fprintf);
    *rdi16 = *rsi18;
    rsi20 = reinterpret_cast<int64_t>(rsi18 + 1);
    rdx21 = *reinterpret_cast<int64_t*>(rbp22 - 40);
    rcx23 = *reinterpret_cast<int64_t*>(rbp24 - 48);
    r8_25 = *reinterpret_cast<int64_t*>(rbp26 - 56);
    fun_305(rdi16 + 1, rsi20, rdx21, rcx23, r8_25);
    if (*reinterpret_cast<int32_t*>(rbp27 - 4) <= reinterpret_cast<int32_t>(fun_2a)) {
        addr_337_8:
        rdi28 = *reinterpret_cast<int64_t*>(rbp29 - 40);
        fun_340(rdi28, rsi20, rdx21, rcx23, r8_25);
    } else {
        rdi30 = **reinterpret_cast<int64_t**>(rbp31 - 16);
        rsi20 = 0x31d;
        eax32 = fun_322(rdi30, 0x31d, rdx21, rcx23, r8_25);
        if (!reinterpret_cast<int1_t>(eax32 == fprintf)) 
            goto addr_337_8; else 
            goto addr_32b_11;
    }
    rdi33 = *reinterpret_cast<int64_t*>(rbp34 - 48);
    fun_349(rdi33, rsi20, rdx21, rcx23, r8_25);
    rdi35 = *reinterpret_cast<int64_t*>(rbp36 - 56);
    fun_352(rdi35, rsi20, rdx21, rcx23, r8_25);
    goto v37;
    addr_32b_11:
    edi38 = *reinterpret_cast<int32_t*>(rbp39 - 24);
    rsi20 = *reinterpret_cast<int64_t*>(rbp40 - 48);
    print_array(edi38, rsi20, rdx21, rcx23, r8_25);
    goto addr_337_8;
}

void fun_52a(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t v5;

    goto v5;
}

int64_t fun_2bf(int64_t rdi, int64_t rsi) {
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
    int64_t r8_23;
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

    *reinterpret_cast<int64_t*>(rbp3 - 48) = rax4;
    rax5 = fun_2d2(0x4b0, 8);
    *reinterpret_cast<int64_t*>(rbp6 - 56) = rax5;
    *reinterpret_cast<int32_t*>(&rdi7) = *reinterpret_cast<int32_t*>(rbp8 - 24);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi7) + 4) = reinterpret_cast<int32_t>(fprintf);
    *reinterpret_cast<int32_t*>(&rsi9) = *reinterpret_cast<int32_t*>(rbp10 - 20);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi9) + 4) = reinterpret_cast<int32_t>(fprintf);
    rcx11 = *reinterpret_cast<int64_t*>(rbp12 - 40);
    init_array(rdi7, rsi9, rbp13 - 32, rcx11);
    *reinterpret_cast<int32_t*>(&rdi14) = *reinterpret_cast<int32_t*>(rbp15 - 24);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi14) + 4) = reinterpret_cast<int32_t>(fprintf);
    *reinterpret_cast<int32_t*>(&rsi16) = *reinterpret_cast<int32_t*>(rbp17 - 20);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi16) + 4) = reinterpret_cast<int32_t>(fprintf);
    *rdi14 = *rsi16;
    rsi18 = reinterpret_cast<int64_t>(rsi16 + 1);
    rdx19 = *reinterpret_cast<int64_t*>(rbp20 - 40);
    rcx21 = *reinterpret_cast<int64_t*>(rbp22 - 48);
    r8_23 = *reinterpret_cast<int64_t*>(rbp24 - 56);
    fun_305(rdi14 + 1, rsi18, rdx19, rcx21, r8_23);
    if (*reinterpret_cast<int32_t*>(rbp25 - 4) <= reinterpret_cast<int32_t>(fun_2a)) {
        addr_337_7:
        rdi26 = *reinterpret_cast<int64_t*>(rbp27 - 40);
        fun_340(rdi26, rsi18, rdx19, rcx21, r8_23);
    } else {
        rdi28 = **reinterpret_cast<int64_t**>(rbp29 - 16);
        rsi18 = 0x31d;
        eax30 = fun_322(rdi28, 0x31d, rdx19, rcx21, r8_23);
        if (!reinterpret_cast<int1_t>(eax30 == fprintf)) 
            goto addr_337_7; else 
            goto addr_32b_10;
    }
    rdi31 = *reinterpret_cast<int64_t*>(rbp32 - 48);
    fun_349(rdi31, rsi18, rdx19, rcx21, r8_23);
    rdi33 = *reinterpret_cast<int64_t*>(rbp34 - 56);
    fun_352(rdi33, rsi18, rdx19, rcx21, r8_23);
    goto v35;
    addr_32b_10:
    edi36 = *reinterpret_cast<int32_t*>(rbp37 - 24);
    rsi18 = *reinterpret_cast<int64_t*>(rbp38 - 48);
    print_array(edi36, rsi18, rdx19, rcx21, r8_23);
    goto addr_337_7;
}

int64_t fun_2d2(int64_t rdi, int64_t rsi) {
    int64_t rbp3;
    int64_t rax4;
    struct s0* rdi5;
    int64_t rbp6;
    struct s1* rsi7;
    int64_t rbp8;
    int64_t rcx9;
    int64_t rbp10;
    int64_t rbp11;
    int32_t* rdi12;
    int64_t rbp13;
    int32_t* rsi14;
    int64_t rbp15;
    int64_t rsi16;
    int64_t rdx17;
    int64_t rbp18;
    int64_t rcx19;
    int64_t rbp20;
    int64_t r8_21;
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

    *reinterpret_cast<int64_t*>(rbp3 - 56) = rax4;
    *reinterpret_cast<int32_t*>(&rdi5) = *reinterpret_cast<int32_t*>(rbp6 - 24);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi5) + 4) = reinterpret_cast<int32_t>(fprintf);
    *reinterpret_cast<int32_t*>(&rsi7) = *reinterpret_cast<int32_t*>(rbp8 - 20);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi7) + 4) = reinterpret_cast<int32_t>(fprintf);
    rcx9 = *reinterpret_cast<int64_t*>(rbp10 - 40);
    init_array(rdi5, rsi7, rbp11 - 32, rcx9);
    *reinterpret_cast<int32_t*>(&rdi12) = *reinterpret_cast<int32_t*>(rbp13 - 24);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi12) + 4) = reinterpret_cast<int32_t>(fprintf);
    *reinterpret_cast<int32_t*>(&rsi14) = *reinterpret_cast<int32_t*>(rbp15 - 20);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi14) + 4) = reinterpret_cast<int32_t>(fprintf);
    *rdi12 = *rsi14;
    rsi16 = reinterpret_cast<int64_t>(rsi14 + 1);
    rdx17 = *reinterpret_cast<int64_t*>(rbp18 - 40);
    rcx19 = *reinterpret_cast<int64_t*>(rbp20 - 48);
    r8_21 = *reinterpret_cast<int64_t*>(rbp22 - 56);
    fun_305(rdi12 + 1, rsi16, rdx17, rcx19, r8_21);
    if (*reinterpret_cast<int32_t*>(rbp23 - 4) <= reinterpret_cast<int32_t>(fun_2a)) {
        addr_337_6:
        rdi24 = *reinterpret_cast<int64_t*>(rbp25 - 40);
        fun_340(rdi24, rsi16, rdx17, rcx19, r8_21);
    } else {
        rdi26 = **reinterpret_cast<int64_t**>(rbp27 - 16);
        rsi16 = 0x31d;
        eax28 = fun_322(rdi26, 0x31d, rdx17, rcx19, r8_21);
        if (!reinterpret_cast<int1_t>(eax28 == fprintf)) 
            goto addr_337_6; else 
            goto addr_32b_9;
    }
    rdi29 = *reinterpret_cast<int64_t*>(rbp30 - 48);
    fun_349(rdi29, rsi16, rdx17, rcx19, r8_21);
    rdi31 = *reinterpret_cast<int64_t*>(rbp32 - 56);
    fun_352(rdi31, rsi16, rdx17, rcx19, r8_21);
    goto v33;
    addr_32b_9:
    edi34 = *reinterpret_cast<int32_t*>(rbp35 - 24);
    rsi16 = *reinterpret_cast<int64_t*>(rbp36 - 48);
    print_array(edi34, rsi16, rdx17, rcx19, r8_21);
    goto addr_337_6;
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

int64_t init_array(struct s0* rdi, struct s1* rsi, int64_t rdx, int64_t rcx) {
    int64_t rax5;
    struct s2* rdi6;
    struct s3* rsi7;
    int32_t v8;
    int32_t v9;
    struct s4* rdi10;
    struct s5* rsi11;

    __asm__("cvtsi2sd xmm0, dword [rbp-0x8]");
    rax5 = rdx;
    rdi->f0 = rsi->f0;
    rdi6 = reinterpret_cast<struct s2*>(&rdi->f4);
    rsi7 = reinterpret_cast<struct s3*>(&rsi->f4);
    v8 = reinterpret_cast<int32_t>(fprintf);
    while (v8 < 0x578) {
        v9 = reinterpret_cast<int32_t>(fprintf);
        while (v9 < 0x4b0) {
            __asm__("cvtsi2sd xmm0, dword [rbp-0x1c]");
            __asm__("cvtsi2sd xmm1, dword [rbp-0x20]");
            __asm__("mulsd xmm0, xmm1");
            rdi6->f0 = rsi7->f0;
            rdi10 = reinterpret_cast<struct s4*>(&rdi6->f4);
            rsi11 = reinterpret_cast<struct s5*>(&rsi7->f4);
            __asm__("divsd xmm0, xmm1");
            rdi10->f0 = rsi11->f0;
            rdi6 = reinterpret_cast<struct s2*>(&rdi10->f4);
            rsi7 = reinterpret_cast<struct s3*>(&rsi11->f4);
            ++v9;
        }
        *reinterpret_cast<int32_t*>(&rax5) = v8 + 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax5) + 4) = reinterpret_cast<int32_t>(fprintf);
        v8 = *reinterpret_cast<int32_t*>(&rax5);
    }
    return rax5;
}

void fprintf(int32_t* rdi, int32_t* rsi, int64_t rdx, int64_t rcx, int64_t r8) {
    *rdi = *rsi;
}

void fun_2a() {
    int32_t* rax1;
    int32_t eax2;

    *rax1 = eax2;
}

struct s6 {
    int32_t f0;
    int32_t f4;
};

struct s7 {
    int32_t f0;
    int32_t f4;
};

void fun_64(struct s6* rdi, struct s7* rsi) {
    int64_t rbp3;
    int64_t rbp4;

    rdi->f0 = rsi->f0;
    __asm__("addsd xmm0, [rax+rcx*8]");
    rdi->f4 = rsi->f4;
    *reinterpret_cast<int32_t*>(rbp3 - 44) = *reinterpret_cast<int32_t*>(rbp4 - 44) + 1;
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

void fun_8c(struct s8* rdi, struct s9* rsi) {
    struct s10* rdi3;
    struct s11* rsi4;
    int64_t rbp5;
    int64_t rbp6;

    rdi->f0 = rsi->f0;
    rdi3 = reinterpret_cast<struct s10*>(&rdi->f4);
    rsi4 = reinterpret_cast<struct s11*>(&rsi->f4);
    rdi3->f0 = rsi4->f0;
    __asm__("divsd xmm0, xmm1");
    rdi3->f4 = rsi4->f4;
    *reinterpret_cast<int32_t*>(rbp5 - 48) = *reinterpret_cast<int32_t*>(rbp6 - 48) + 1;
    goto 34;
}

void fun_b5() {
    int64_t rbp1;
    int64_t rbp2;
    int64_t rbp3;
    int64_t rbp4;
    int64_t rbp5;
    int64_t rbp6;
    int32_t* rdi7;
    int32_t* rsi8;
    int32_t* rdi9;
    int32_t* rsi10;
    int32_t* rdi11;
    int32_t* rsi12;
    int64_t rbp13;
    int64_t rbp14;
    int64_t rbp15;
    int64_t rbp16;
    int64_t rbp17;
    int64_t rbp18;
    int64_t rbp19;
    int64_t rbp20;
    int64_t rbp21;
    int64_t rbp22;
    int64_t rbp23;
    int32_t* rdi24;
    int32_t* rsi25;
    int64_t rbp26;
    int64_t rbp27;
    int64_t rbp28;
    int32_t* rdi29;
    int32_t* rsi30;
    int32_t* rdi31;
    int32_t* rsi32;
    int32_t* rdi33;
    int32_t* rsi34;
    int64_t rbp35;
    int64_t rbp36;
    int32_t* rdi37;
    int32_t* rsi38;
    int32_t* rdi39;
    int32_t* rsi40;
    int32_t* rdi41;
    int32_t* rsi42;
    int32_t* rdi43;
    int32_t* rsi44;
    int32_t* rdi45;
    int32_t* rsi46;
    int64_t rbp47;
    int64_t rbp48;
    int64_t rbp49;
    int64_t rbp50;
    int64_t v51;

    *reinterpret_cast<int32_t*>(rbp1 - 44) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp2 - 44) < *reinterpret_cast<int32_t*>(rbp3 - 8)) {
        *reinterpret_cast<int32_t*>(rbp4 - 48) = reinterpret_cast<int32_t>(fprintf);
        while (*reinterpret_cast<int32_t*>(rbp5 - 48) < *reinterpret_cast<int32_t*>(rbp6 - 4)) {
            *rdi7 = *rsi8;
            rdi9 = rdi7 + 1;
            rsi10 = rsi8 + 1;
            *rdi9 = *rsi10;
            rdi11 = rdi9 + 1;
            rsi12 = rsi10 + 1;
            __asm__("subsd xmm0, xmm1");
            *rdi11 = *rsi12;
            rdi7 = rdi11 + 1;
            rsi8 = rsi12 + 1;
            *reinterpret_cast<int32_t*>(rbp13 - 48) = *reinterpret_cast<int32_t*>(rbp14 - 48) + 1;
        }
        *reinterpret_cast<int32_t*>(rbp15 - 44) = *reinterpret_cast<int32_t*>(rbp16 - 44) + 1;
    }
    *reinterpret_cast<int32_t*>(rbp17 - 44) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp18 - 44) < *reinterpret_cast<int32_t*>(rbp19 - 4)) {
        *reinterpret_cast<int32_t*>(rbp20 - 48) = *reinterpret_cast<int32_t*>(rbp21 - 44);
        while (*reinterpret_cast<int32_t*>(rbp22 - 48) < *reinterpret_cast<int32_t*>(rbp23 - 4)) {
            __asm__("xorps xmm0, xmm0");
            *rdi7 = *rsi8;
            rdi24 = rdi7 + 1;
            rsi25 = rsi8 + 1;
            *reinterpret_cast<int32_t*>(rbp26 - 52) = reinterpret_cast<int32_t>(fprintf);
            while (*reinterpret_cast<int32_t*>(rbp27 - 52) < *reinterpret_cast<int32_t*>(rbp28 - 8)) {
                *rdi24 = *rsi25;
                rdi29 = rdi24 + 1;
                rsi30 = rsi25 + 1;
                *rdi29 = *rsi30;
                rdi31 = rdi29 + 1;
                rsi32 = rsi30 + 1;
                *rdi31 = *rsi32;
                rdi33 = rdi31 + 1;
                rsi34 = rsi32 + 1;
                __asm__("mulsd xmm0, xmm2");
                __asm__("addsd xmm0, xmm1");
                *rdi33 = *rsi34;
                rdi24 = rdi33 + 1;
                rsi25 = rsi34 + 1;
                *reinterpret_cast<int32_t*>(rbp35 - 52) = *reinterpret_cast<int32_t*>(rbp36 - 52) + 1;
            }
            *rdi24 = *rsi25;
            rdi37 = rdi24 + 1;
            rsi38 = rsi25 + 1;
            *rdi37 = *rsi38;
            rdi39 = rdi37 + 1;
            rsi40 = rsi38 + 1;
            __asm__("subsd xmm1, xmm0");
            *rdi39 = *rsi40;
            rdi41 = rdi39 + 1;
            rsi42 = rsi40 + 1;
            __asm__("divsd xmm0, xmm1");
            *rdi41 = *rsi42;
            rdi43 = rdi41 + 1;
            rsi44 = rsi42 + 1;
            *rdi43 = *rsi44;
            rdi45 = rdi43 + 1;
            rsi46 = rsi44 + 1;
            *rdi45 = *rsi46;
            rdi7 = rdi45 + 1;
            rsi8 = rsi46 + 1;
            *reinterpret_cast<int32_t*>(rbp47 - 48) = *reinterpret_cast<int32_t*>(rbp48 - 48) + 1;
        }
        *reinterpret_cast<int32_t*>(rbp49 - 44) = *reinterpret_cast<int32_t*>(rbp50 - 44) + 1;
    }
    goto v51;
}

void submain(int32_t edi, int64_t rsi) {
    fun_2ac(0x19a280, 8);
}

