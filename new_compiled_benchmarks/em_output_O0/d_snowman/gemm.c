
void fun_22a(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8);

int32_t fun_209(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8);

struct s0 {
    int32_t f0;
    int32_t f4;
};

struct s1 {
    int32_t f0;
    int32_t f4;
};

void fprintf(struct s0* rdi, struct s1* rsi, int32_t edx, int64_t rcx, int64_t r8);

void fun_233(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8);

void fun_23c(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8);

void print_array(int32_t edi, int32_t esi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8);

void fun_1ec(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8) {
    int64_t rbp9;
    int64_t rdi10;
    int64_t rbp11;
    int64_t rdi12;
    int64_t rbp13;
    int32_t eax14;
    int64_t rdi15;
    int64_t rbp16;
    int64_t rdi17;
    int64_t rbp18;
    int64_t v19;
    int32_t edi20;
    int64_t rbp21;
    int64_t rbp22;
    int64_t rbp23;

    if (*reinterpret_cast<int32_t*>(rbp9 - 4) <= 42) {
        addr_221_2:
        rdi10 = *reinterpret_cast<int64_t*>(rbp11 - 56);
        fun_22a(rdi10, rsi, rdx, rcx, r8, r9, __return_address(), a7);
    } else {
        rdi12 = **reinterpret_cast<int64_t**>(rbp13 - 16);
        rsi = 0x204;
        eax14 = fun_209(rdi12, 0x204, rdx, rcx, r8, r9, __return_address(), a7);
        if (!reinterpret_cast<int1_t>(eax14 == fprintf)) 
            goto addr_221_2; else 
            goto addr_212_5;
    }
    rdi15 = *reinterpret_cast<int64_t*>(rbp16 - 64);
    fun_233(rdi15, rsi, rdx, rcx, r8, r9, __return_address(), a7);
    rdi17 = *reinterpret_cast<int64_t*>(rbp18 - 72);
    fun_23c(rdi17, rsi, rdx, rcx, r8, r9, __return_address(), a7);
    goto v19;
    addr_212_5:
    edi20 = *reinterpret_cast<int32_t*>(rbp21 - 20);
    *reinterpret_cast<int32_t*>(&rsi) = *reinterpret_cast<int32_t*>(rbp22 - 24);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi) + 4) = reinterpret_cast<int32_t>(fprintf);
    rdx = *reinterpret_cast<int64_t*>(rbp23 - 56);
    print_array(edi20, *reinterpret_cast<int32_t*>(&rsi), rdx, rcx, r8, r9, __return_address(), a7);
    goto addr_221_2;
}

int32_t fun_209(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8) {
    int32_t eax9;
    int32_t edi10;
    int64_t rbp11;
    int64_t rbp12;
    int64_t rbp13;
    int64_t rdi14;
    int64_t rbp15;
    int64_t rdi16;
    int64_t rbp17;
    int64_t rdi18;
    int64_t rbp19;
    int64_t v20;

    if (reinterpret_cast<int1_t>(eax9 == fprintf)) {
        edi10 = *reinterpret_cast<int32_t*>(rbp11 - 20);
        *reinterpret_cast<int32_t*>(&rsi) = *reinterpret_cast<int32_t*>(rbp12 - 24);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi) + 4) = reinterpret_cast<int32_t>(fprintf);
        rdx = *reinterpret_cast<int64_t*>(rbp13 - 56);
        print_array(edi10, *reinterpret_cast<int32_t*>(&rsi), rdx, rcx, r8, r9, __return_address(), a7);
    }
    rdi14 = *reinterpret_cast<int64_t*>(rbp15 - 56);
    fun_22a(rdi14, rsi, rdx, rcx, r8, r9, __return_address(), a7);
    rdi16 = *reinterpret_cast<int64_t*>(rbp17 - 64);
    fun_233(rdi16, rsi, rdx, rcx, r8, r9, __return_address(), a7);
    rdi18 = *reinterpret_cast<int64_t*>(rbp19 - 72);
    fun_23c(rdi18, rsi, rdx, rcx, r8, r9, __return_address(), a7);
    goto v20;
}

int64_t* g429 = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_43a(int64_t rdi, int64_t rsi);

int64_t* g441 = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_459(int64_t rdi);

int64_t* g4a1 = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_4b2(int64_t rdi);

int32_t** g4b9 = reinterpret_cast<int32_t**>(0x48f0458b48388b48);

void fun_4e5(int64_t rdi);

int64_t* g50d = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_525(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx);

int64_t* g52c = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_53d(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx);

void print_array(int32_t edi, int32_t esi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8) {
    int32_t v9;
    int32_t v10;
    int64_t* rax11;
    int64_t rdi12;
    int64_t* rax13;
    int64_t rdi14;
    int32_t* rsi15;
    int32_t v16;
    int32_t v17;
    int64_t* rax18;
    int64_t rdi19;
    int32_t** rax20;
    int32_t* rdi21;
    int64_t* rax22;
    int64_t rdi23;
    int64_t* rax24;
    int64_t rdi25;

    v9 = edi;
    v10 = esi;
    rax11 = g429;
    rdi12 = *rax11;
    fun_43a(rdi12, 0x433);
    rax13 = g441;
    rdi14 = *rax13;
    rsi15 = reinterpret_cast<int32_t*>(0x44b);
    fun_459(rdi14);
    v16 = reinterpret_cast<int32_t>(fprintf);
    while (v16 < v9) {
        v17 = reinterpret_cast<int32_t>(fprintf);
        while (v17 < v10) {
            __asm__("cdq ");
            if (reinterpret_cast<int1_t>((v16 * v9 + v17) % 20 == fprintf)) {
                rax18 = g4a1;
                rdi19 = *rax18;
                rsi15 = reinterpret_cast<int32_t*>(0x4ab);
                fun_4b2(rdi19);
            }
            rax20 = g4b9;
            rdi21 = *rax20;
            rcx = v17;
            *rdi21 = *rsi15;
            rsi15 = reinterpret_cast<int32_t*>(0x4de);
            fun_4e5(rdi21 + 1);
            ++v17;
        }
        ++v16;
    }
    rax22 = g50d;
    rdi23 = *rax22;
    fun_525(rdi23, 0x517, 0x51e, rcx);
    rax24 = g52c;
    rdi25 = *rax24;
    fun_53d(rdi25, 0x536, 0x51e, rcx);
    return;
}

void fun_22a(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8) {
    int64_t rdi9;
    int64_t rbp10;
    int64_t rdi11;
    int64_t rbp12;
    int64_t v13;

    rdi9 = *reinterpret_cast<int64_t*>(rbp10 - 64);
    fun_233(rdi9, rsi, rdx, rcx, r8, r9, __return_address(), a7);
    rdi11 = *reinterpret_cast<int64_t*>(rbp12 - 72);
    fun_23c(rdi11, rsi, rdx, rcx, r8, r9, __return_address(), a7);
    goto v13;
}

void fun_4b2(int64_t rdi) {
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
        rax2 = g4b9;
        rdi3 = *rax2;
        rcx4 = *reinterpret_cast<int32_t*>(rbp5 - 24);
        *rdi3 = *rsi6;
        rsi6 = reinterpret_cast<int32_t*>(0x4de);
        fun_4e5(rdi3 + 1);
        *reinterpret_cast<int32_t*>(rbp7 - 24) = *reinterpret_cast<int32_t*>(rbp8 - 24) + 1;
        while (*reinterpret_cast<int32_t*>(rbp9 - 24) >= *reinterpret_cast<int32_t*>(rbp10 - 8)) {
            *reinterpret_cast<int32_t*>(rbp11 - 20) = *reinterpret_cast<int32_t*>(rbp12 - 20) + 1;
            if (*reinterpret_cast<int32_t*>(rbp13 - 20) >= *reinterpret_cast<int32_t*>(rbp14 - 4)) 
                goto addr_506_10;
            *reinterpret_cast<int32_t*>(rbp15 - 24) = reinterpret_cast<int32_t>(fprintf);
        }
        __asm__("cdq ");
        if (!reinterpret_cast<int1_t>((*reinterpret_cast<int32_t*>(rbp16 - 20) * *reinterpret_cast<int32_t*>(rbp17 - 4) + *reinterpret_cast<int32_t*>(rbp18 - 24)) % 20 == fprintf)) 
            continue;
        rax19 = g4a1;
        rdi20 = *rax19;
        rsi6 = reinterpret_cast<int32_t*>(0x4ab);
        fun_4b2(rdi20);
    }
    addr_506_10:
    rax21 = g50d;
    rdi22 = *rax21;
    fun_525(rdi22, 0x517, 0x51e, rcx4);
    rax23 = g52c;
    rdi24 = *rax23;
    fun_53d(rdi24, 0x536, 0x51e, rcx4);
    goto v25;
}

void fun_4e5(int64_t rdi) {
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
                goto addr_506_6;
            *reinterpret_cast<int32_t*>(rbp10 - 24) = reinterpret_cast<int32_t>(fprintf);
        }
        __asm__("cdq ");
        if (reinterpret_cast<int1_t>((*reinterpret_cast<int32_t*>(rbp11 - 20) * *reinterpret_cast<int32_t*>(rbp12 - 4) + *reinterpret_cast<int32_t*>(rbp13 - 24)) % 20 == fprintf)) {
            rax14 = g4a1;
            rdi15 = *rax14;
            rsi16 = reinterpret_cast<int32_t*>(0x4ab);
            fun_4b2(rdi15);
        }
        rax17 = g4b9;
        rdi18 = *rax17;
        rcx19 = *reinterpret_cast<int32_t*>(rbp20 - 24);
        *rdi18 = *rsi16;
        rsi16 = reinterpret_cast<int32_t*>(0x4de);
        fun_4e5(rdi18 + 1);
    }
    addr_506_6:
    rax21 = g50d;
    rdi22 = *rax21;
    fun_525(rdi22, 0x517, 0x51e, rcx19);
    rax23 = g52c;
    rdi24 = *rax23;
    fun_53d(rdi24, 0x536, 0x51e, rcx19);
    goto v25;
}

void fun_43a(int64_t rdi, int64_t rsi) {
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

    rax3 = g441;
    rdi4 = *rax3;
    rsi5 = reinterpret_cast<int32_t*>(0x44b);
    fun_459(rdi4);
    *reinterpret_cast<int32_t*>(rbp6 - 20) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp7 - 20) < *reinterpret_cast<int32_t*>(rbp8 - 4)) {
        *reinterpret_cast<int32_t*>(rbp9 - 24) = reinterpret_cast<int32_t>(fprintf);
        while (*reinterpret_cast<int32_t*>(rbp10 - 24) < *reinterpret_cast<int32_t*>(rbp11 - 8)) {
            __asm__("cdq ");
            if (reinterpret_cast<int1_t>((*reinterpret_cast<int32_t*>(rbp12 - 20) * *reinterpret_cast<int32_t*>(rbp13 - 4) + *reinterpret_cast<int32_t*>(rbp14 - 24)) % 20 == fprintf)) {
                rax15 = g4a1;
                rdi16 = *rax15;
                rsi5 = reinterpret_cast<int32_t*>(0x4ab);
                fun_4b2(rdi16);
            }
            rax17 = g4b9;
            rdi18 = *rax17;
            rcx19 = *reinterpret_cast<int32_t*>(rbp20 - 24);
            *rdi18 = *rsi5;
            rsi5 = reinterpret_cast<int32_t*>(0x4de);
            fun_4e5(rdi18 + 1);
            *reinterpret_cast<int32_t*>(rbp21 - 24) = *reinterpret_cast<int32_t*>(rbp22 - 24) + 1;
        }
        *reinterpret_cast<int32_t*>(rbp23 - 20) = *reinterpret_cast<int32_t*>(rbp24 - 20) + 1;
    }
    rax25 = g50d;
    rdi26 = *rax25;
    fun_525(rdi26, 0x517, 0x51e, rcx19);
    rax27 = g52c;
    rdi28 = *rax27;
    fun_53d(rdi28, 0x536, 0x51e, rcx19);
    goto v29;
}

void fun_233(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8) {
    int64_t rdi9;
    int64_t rbp10;
    int64_t v11;

    rdi9 = *reinterpret_cast<int64_t*>(rbp10 - 72);
    fun_23c(rdi9, rsi, rdx, rcx, r8, r9, __return_address(), a7);
    goto v11;
}

void fun_459(int64_t rdi) {
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
                rax11 = g4a1;
                rdi12 = *rax11;
                rsi13 = reinterpret_cast<int32_t*>(0x4ab);
                fun_4b2(rdi12);
            }
            rax14 = g4b9;
            rdi15 = *rax14;
            rcx16 = *reinterpret_cast<int32_t*>(rbp17 - 24);
            *rdi15 = *rsi13;
            rsi13 = reinterpret_cast<int32_t*>(0x4de);
            fun_4e5(rdi15 + 1);
            *reinterpret_cast<int32_t*>(rbp18 - 24) = *reinterpret_cast<int32_t*>(rbp19 - 24) + 1;
        }
        *reinterpret_cast<int32_t*>(rbp20 - 20) = *reinterpret_cast<int32_t*>(rbp21 - 20) + 1;
    }
    rax22 = g50d;
    rdi23 = *rax22;
    fun_525(rdi23, 0x517, 0x51e, rcx16);
    rax24 = g52c;
    rdi25 = *rax24;
    fun_53d(rdi25, 0x536, 0x51e, rcx16);
    goto v26;
}

void fun_23c(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8) {
    int64_t v9;

    goto v9;
}

void fun_525(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t* rax5;
    int64_t rdi6;
    int64_t v7;

    rax5 = g52c;
    rdi6 = *rax5;
    fun_53d(rdi6, 0x536, rdx, rcx);
    goto v7;
}

void fun_53d(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t v5;

    goto v5;
}

int64_t fun_186(int64_t rdi, int64_t rsi);

int64_t fun_199(int64_t rdi, int64_t rsi);

struct s2 {
    int32_t f0;
    int32_t f4;
};

struct s3 {
    int32_t f0;
    int32_t f4;
};

void init_array(struct s2* rdi, struct s3* rsi, int32_t edx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8);

struct s4 {
    int32_t f0;
    int32_t f4;
};

struct s5 {
    int32_t f0;
    int32_t f4;
};

void fun_173(int64_t rdi, int64_t rsi) {
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
    int32_t edx13;
    int64_t rbp14;
    int64_t r9_15;
    int64_t rbp16;
    int64_t rax17;
    int64_t rbp18;
    int64_t v19;
    int64_t rbp20;
    int64_t rbp21;
    int64_t rbp22;
    struct s4* rdi23;
    int64_t rbp24;
    struct s5* rsi25;
    int64_t rbp26;
    int64_t rdx27;
    int64_t rbp28;
    int32_t* rdi29;
    int32_t* rsi30;
    int64_t rsi31;
    int64_t rcx32;
    int64_t rbp33;
    int64_t r8_34;
    int64_t rbp35;
    int64_t r9_36;
    int64_t rbp37;
    int64_t rbp38;
    int64_t rdi39;
    int64_t rbp40;
    int64_t rdi41;
    int64_t rbp42;
    int32_t eax43;
    int64_t rdi44;
    int64_t rbp45;
    int64_t rdi46;
    int64_t rbp47;
    int64_t v48;
    int32_t edi49;
    int64_t rbp50;
    int64_t rbp51;
    int64_t rbp52;

    *reinterpret_cast<int64_t*>(rbp3 - 56) = rax4;
    rax5 = fun_186(0x124f80, 8);
    *reinterpret_cast<int64_t*>(rbp6 - 64) = rax5;
    rax7 = fun_199(0x142440, 8);
    *reinterpret_cast<int64_t*>(rbp8 - 72) = rax7;
    *reinterpret_cast<int32_t*>(&rdi9) = *reinterpret_cast<int32_t*>(rbp10 - 20);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi9) + 4) = reinterpret_cast<int32_t>(fprintf);
    *reinterpret_cast<int32_t*>(&rsi11) = *reinterpret_cast<int32_t*>(rbp12 - 24);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi11) + 4) = reinterpret_cast<int32_t>(fprintf);
    edx13 = *reinterpret_cast<int32_t*>(rbp14 - 28);
    r9_15 = *reinterpret_cast<int64_t*>(rbp16 - 56);
    rax17 = *reinterpret_cast<int64_t*>(rbp18 - 72);
    v19 = *reinterpret_cast<int64_t*>(rbp20 - 64);
    init_array(rdi9, rsi11, edx13, rbp21 - 40, rbp22 - 48, r9_15, v19, rax17);
    *reinterpret_cast<int32_t*>(&rdi23) = *reinterpret_cast<int32_t*>(rbp24 - 20);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi23) + 4) = reinterpret_cast<int32_t>(fprintf);
    *reinterpret_cast<int32_t*>(&rsi25) = *reinterpret_cast<int32_t*>(rbp26 - 24);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi25) + 4) = reinterpret_cast<int32_t>(fprintf);
    *reinterpret_cast<int32_t*>(&rdx27) = *reinterpret_cast<int32_t*>(rbp28 - 28);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx27) + 4) = reinterpret_cast<int32_t>(fprintf);
    rdi23->f0 = rsi25->f0;
    rdi29 = &rdi23->f4;
    rsi30 = &rsi25->f4;
    *rdi29 = *rsi30;
    rsi31 = reinterpret_cast<int64_t>(rsi30 + 1);
    rcx32 = *reinterpret_cast<int64_t*>(rbp33 - 56);
    r8_34 = *reinterpret_cast<int64_t*>(rbp35 - 64);
    r9_36 = *reinterpret_cast<int64_t*>(rbp37 - 72);
    fun_1ec(rdi29 + 1, rsi31, rdx27, rcx32, r8_34, r9_36, v19, rax17);
    if (*reinterpret_cast<int32_t*>(rbp38 - 4) <= 42) {
        addr_221_11:
        rdi39 = *reinterpret_cast<int64_t*>(rbp40 - 56);
        fun_22a(rdi39, rsi31, rdx27, rcx32, r8_34, r9_36, v19, rax17);
    } else {
        rdi41 = **reinterpret_cast<int64_t**>(rbp42 - 16);
        rsi31 = 0x204;
        eax43 = fun_209(rdi41, 0x204, rdx27, rcx32, r8_34, r9_36, v19, rax17);
        if (!reinterpret_cast<int1_t>(eax43 == fprintf)) 
            goto addr_221_11; else 
            goto addr_212_14;
    }
    rdi44 = *reinterpret_cast<int64_t*>(rbp45 - 64);
    fun_233(rdi44, rsi31, rdx27, rcx32, r8_34, r9_36, v19, rax17);
    rdi46 = *reinterpret_cast<int64_t*>(rbp47 - 72);
    fun_23c(rdi46, rsi31, rdx27, rcx32, r8_34, r9_36, v19, rax17);
    goto v48;
    addr_212_14:
    edi49 = *reinterpret_cast<int32_t*>(rbp50 - 20);
    *reinterpret_cast<int32_t*>(&rsi31) = *reinterpret_cast<int32_t*>(rbp51 - 24);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi31) + 4) = reinterpret_cast<int32_t>(fprintf);
    rdx27 = *reinterpret_cast<int64_t*>(rbp52 - 56);
    print_array(edi49, *reinterpret_cast<int32_t*>(&rsi31), rdx27, rcx32, r8_34, r9_36, v19, rax17);
    goto addr_221_11;
}

struct s6 {
    int32_t f0;
    int32_t f4;
};

struct s7 {
    int32_t f0;
    int32_t f4;
};

int64_t fun_186(int64_t rdi, int64_t rsi) {
    int64_t rbp3;
    int64_t rax4;
    int64_t rax5;
    int64_t rbp6;
    struct s2* rdi7;
    int64_t rbp8;
    struct s3* rsi9;
    int64_t rbp10;
    int32_t edx11;
    int64_t rbp12;
    int64_t r9_13;
    int64_t rbp14;
    int64_t rax15;
    int64_t rbp16;
    int64_t v17;
    int64_t rbp18;
    int64_t rbp19;
    int64_t rbp20;
    struct s6* rdi21;
    int64_t rbp22;
    struct s7* rsi23;
    int64_t rbp24;
    int64_t rdx25;
    int64_t rbp26;
    int32_t* rdi27;
    int32_t* rsi28;
    int64_t rsi29;
    int64_t rcx30;
    int64_t rbp31;
    int64_t r8_32;
    int64_t rbp33;
    int64_t r9_34;
    int64_t rbp35;
    int64_t rbp36;
    int64_t rdi37;
    int64_t rbp38;
    int64_t rdi39;
    int64_t rbp40;
    int32_t eax41;
    int64_t rdi42;
    int64_t rbp43;
    int64_t rdi44;
    int64_t rbp45;
    int64_t v46;
    int32_t edi47;
    int64_t rbp48;
    int64_t rbp49;
    int64_t rbp50;

    *reinterpret_cast<int64_t*>(rbp3 - 64) = rax4;
    rax5 = fun_199(0x142440, 8);
    *reinterpret_cast<int64_t*>(rbp6 - 72) = rax5;
    *reinterpret_cast<int32_t*>(&rdi7) = *reinterpret_cast<int32_t*>(rbp8 - 20);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi7) + 4) = reinterpret_cast<int32_t>(fprintf);
    *reinterpret_cast<int32_t*>(&rsi9) = *reinterpret_cast<int32_t*>(rbp10 - 24);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi9) + 4) = reinterpret_cast<int32_t>(fprintf);
    edx11 = *reinterpret_cast<int32_t*>(rbp12 - 28);
    r9_13 = *reinterpret_cast<int64_t*>(rbp14 - 56);
    rax15 = *reinterpret_cast<int64_t*>(rbp16 - 72);
    v17 = *reinterpret_cast<int64_t*>(rbp18 - 64);
    init_array(rdi7, rsi9, edx11, rbp19 - 40, rbp20 - 48, r9_13, v17, rax15);
    *reinterpret_cast<int32_t*>(&rdi21) = *reinterpret_cast<int32_t*>(rbp22 - 20);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi21) + 4) = reinterpret_cast<int32_t>(fprintf);
    *reinterpret_cast<int32_t*>(&rsi23) = *reinterpret_cast<int32_t*>(rbp24 - 24);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi23) + 4) = reinterpret_cast<int32_t>(fprintf);
    *reinterpret_cast<int32_t*>(&rdx25) = *reinterpret_cast<int32_t*>(rbp26 - 28);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx25) + 4) = reinterpret_cast<int32_t>(fprintf);
    rdi21->f0 = rsi23->f0;
    rdi27 = &rdi21->f4;
    rsi28 = &rsi23->f4;
    *rdi27 = *rsi28;
    rsi29 = reinterpret_cast<int64_t>(rsi28 + 1);
    rcx30 = *reinterpret_cast<int64_t*>(rbp31 - 56);
    r8_32 = *reinterpret_cast<int64_t*>(rbp33 - 64);
    r9_34 = *reinterpret_cast<int64_t*>(rbp35 - 72);
    fun_1ec(rdi27 + 1, rsi29, rdx25, rcx30, r8_32, r9_34, v17, rax15);
    if (*reinterpret_cast<int32_t*>(rbp36 - 4) <= 42) {
        addr_221_10:
        rdi37 = *reinterpret_cast<int64_t*>(rbp38 - 56);
        fun_22a(rdi37, rsi29, rdx25, rcx30, r8_32, r9_34, v17, rax15);
    } else {
        rdi39 = **reinterpret_cast<int64_t**>(rbp40 - 16);
        rsi29 = 0x204;
        eax41 = fun_209(rdi39, 0x204, rdx25, rcx30, r8_32, r9_34, v17, rax15);
        if (!reinterpret_cast<int1_t>(eax41 == fprintf)) 
            goto addr_221_10; else 
            goto addr_212_13;
    }
    rdi42 = *reinterpret_cast<int64_t*>(rbp43 - 64);
    fun_233(rdi42, rsi29, rdx25, rcx30, r8_32, r9_34, v17, rax15);
    rdi44 = *reinterpret_cast<int64_t*>(rbp45 - 72);
    fun_23c(rdi44, rsi29, rdx25, rcx30, r8_32, r9_34, v17, rax15);
    goto v46;
    addr_212_13:
    edi47 = *reinterpret_cast<int32_t*>(rbp48 - 20);
    *reinterpret_cast<int32_t*>(&rsi29) = *reinterpret_cast<int32_t*>(rbp49 - 24);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi29) + 4) = reinterpret_cast<int32_t>(fprintf);
    rdx25 = *reinterpret_cast<int64_t*>(rbp50 - 56);
    print_array(edi47, *reinterpret_cast<int32_t*>(&rsi29), rdx25, rcx30, r8_32, r9_34, v17, rax15);
    goto addr_221_10;
}

struct s8 {
    int32_t f0;
    int32_t f4;
};

struct s9 {
    int32_t f0;
    int32_t f4;
};

int64_t fun_199(int64_t rdi, int64_t rsi) {
    int64_t rbp3;
    int64_t rax4;
    struct s2* rdi5;
    int64_t rbp6;
    struct s3* rsi7;
    int64_t rbp8;
    int32_t edx9;
    int64_t rbp10;
    int64_t r9_11;
    int64_t rbp12;
    int64_t rax13;
    int64_t rbp14;
    int64_t v15;
    int64_t rbp16;
    int64_t rbp17;
    int64_t rbp18;
    struct s8* rdi19;
    int64_t rbp20;
    struct s9* rsi21;
    int64_t rbp22;
    int64_t rdx23;
    int64_t rbp24;
    int32_t* rdi25;
    int32_t* rsi26;
    int64_t rsi27;
    int64_t rcx28;
    int64_t rbp29;
    int64_t r8_30;
    int64_t rbp31;
    int64_t r9_32;
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
    int64_t rbp48;

    *reinterpret_cast<int64_t*>(rbp3 - 72) = rax4;
    *reinterpret_cast<int32_t*>(&rdi5) = *reinterpret_cast<int32_t*>(rbp6 - 20);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi5) + 4) = reinterpret_cast<int32_t>(fprintf);
    *reinterpret_cast<int32_t*>(&rsi7) = *reinterpret_cast<int32_t*>(rbp8 - 24);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi7) + 4) = reinterpret_cast<int32_t>(fprintf);
    edx9 = *reinterpret_cast<int32_t*>(rbp10 - 28);
    r9_11 = *reinterpret_cast<int64_t*>(rbp12 - 56);
    rax13 = *reinterpret_cast<int64_t*>(rbp14 - 72);
    v15 = *reinterpret_cast<int64_t*>(rbp16 - 64);
    init_array(rdi5, rsi7, edx9, rbp17 - 40, rbp18 - 48, r9_11, v15, rax13);
    *reinterpret_cast<int32_t*>(&rdi19) = *reinterpret_cast<int32_t*>(rbp20 - 20);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi19) + 4) = reinterpret_cast<int32_t>(fprintf);
    *reinterpret_cast<int32_t*>(&rsi21) = *reinterpret_cast<int32_t*>(rbp22 - 24);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi21) + 4) = reinterpret_cast<int32_t>(fprintf);
    *reinterpret_cast<int32_t*>(&rdx23) = *reinterpret_cast<int32_t*>(rbp24 - 28);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx23) + 4) = reinterpret_cast<int32_t>(fprintf);
    rdi19->f0 = rsi21->f0;
    rdi25 = &rdi19->f4;
    rsi26 = &rsi21->f4;
    *rdi25 = *rsi26;
    rsi27 = reinterpret_cast<int64_t>(rsi26 + 1);
    rcx28 = *reinterpret_cast<int64_t*>(rbp29 - 56);
    r8_30 = *reinterpret_cast<int64_t*>(rbp31 - 64);
    r9_32 = *reinterpret_cast<int64_t*>(rbp33 - 72);
    fun_1ec(rdi25 + 1, rsi27, rdx23, rcx28, r8_30, r9_32, v15, rax13);
    if (*reinterpret_cast<int32_t*>(rbp34 - 4) <= 42) {
        addr_221_9:
        rdi35 = *reinterpret_cast<int64_t*>(rbp36 - 56);
        fun_22a(rdi35, rsi27, rdx23, rcx28, r8_30, r9_32, v15, rax13);
    } else {
        rdi37 = **reinterpret_cast<int64_t**>(rbp38 - 16);
        rsi27 = 0x204;
        eax39 = fun_209(rdi37, 0x204, rdx23, rcx28, r8_30, r9_32, v15, rax13);
        if (!reinterpret_cast<int1_t>(eax39 == fprintf)) 
            goto addr_221_9; else 
            goto addr_212_12;
    }
    rdi40 = *reinterpret_cast<int64_t*>(rbp41 - 64);
    fun_233(rdi40, rsi27, rdx23, rcx28, r8_30, r9_32, v15, rax13);
    rdi42 = *reinterpret_cast<int64_t*>(rbp43 - 72);
    fun_23c(rdi42, rsi27, rdx23, rcx28, r8_30, r9_32, v15, rax13);
    goto v44;
    addr_212_12:
    edi45 = *reinterpret_cast<int32_t*>(rbp46 - 20);
    *reinterpret_cast<int32_t*>(&rsi27) = *reinterpret_cast<int32_t*>(rbp47 - 24);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi27) + 4) = reinterpret_cast<int32_t>(fprintf);
    rdx23 = *reinterpret_cast<int64_t*>(rbp48 - 56);
    print_array(edi45, *reinterpret_cast<int32_t*>(&rsi27), rdx23, rcx28, r8_30, r9_32, v15, rax13);
    goto addr_221_9;
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

void init_array(struct s2* rdi, struct s3* rsi, int32_t edx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8) {
    int32_t v9;
    int32_t v10;
    int32_t v11;
    struct s10* rdi12;
    struct s11* rsi13;
    struct s12* rdi14;
    struct s13* rsi15;
    struct s14* rdi16;
    struct s15* rsi17;
    int32_t* rdi18;
    int32_t* rsi19;
    int32_t v20;
    int32_t v21;
    int32_t v22;
    int32_t v23;
    int32_t v24;
    int32_t v25;

    v9 = *reinterpret_cast<int32_t*>(&rdi);
    v10 = *reinterpret_cast<int32_t*>(&rsi);
    v11 = edx;
    rdi->f0 = rsi->f0;
    rdi12 = reinterpret_cast<struct s10*>(&rdi->f4);
    rsi13 = reinterpret_cast<struct s11*>(&rsi->f4);
    rdi12->f0 = rsi13->f0;
    rdi14 = reinterpret_cast<struct s12*>(&rdi12->f4);
    rsi15 = reinterpret_cast<struct s13*>(&rsi13->f4);
    rdi14->f0 = rsi15->f0;
    rdi16 = reinterpret_cast<struct s14*>(&rdi14->f4);
    rsi17 = reinterpret_cast<struct s15*>(&rsi15->f4);
    rdi16->f0 = rsi17->f0;
    rdi18 = &rdi16->f4;
    rsi19 = &rsi17->f4;
    v20 = reinterpret_cast<int32_t>(fprintf);
    while (v20 < v9) {
        v21 = reinterpret_cast<int32_t>(fprintf);
        while (v21 < v10) {
            __asm__("cdq ");
            __asm__("cvtsi2sd xmm0, edx");
            __asm__("cvtsi2sd xmm1, dword [rbp-0x4]");
            __asm__("divsd xmm0, xmm1");
            *rdi18 = *rsi19;
            ++rdi18;
            ++rsi19;
            ++v21;
        }
        ++v20;
    }
    v22 = reinterpret_cast<int32_t>(fprintf);
    while (v22 < v9) {
        v23 = reinterpret_cast<int32_t>(fprintf);
        while (v23 < v11) {
            __asm__("cdq ");
            __asm__("cvtsi2sd xmm0, edx");
            __asm__("cvtsi2sd xmm1, dword [rbp-0xc]");
            __asm__("divsd xmm0, xmm1");
            *rdi18 = *rsi19;
            ++rdi18;
            ++rsi19;
            ++v23;
        }
        ++v22;
    }
    v24 = reinterpret_cast<int32_t>(fprintf);
    while (v24 < v11) {
        v25 = reinterpret_cast<int32_t>(fprintf);
        while (v25 < v10) {
            __asm__("cdq ");
            __asm__("cvtsi2sd xmm0, edx");
            __asm__("cvtsi2sd xmm1, dword [rbp-0x8]");
            __asm__("divsd xmm0, xmm1");
            *rdi18 = *rsi19;
            ++rdi18;
            ++rsi19;
            ++v25;
        }
        ++v24;
    }
    return;
}

void fprintf(struct s0* rdi, struct s1* rsi, int32_t edx, int64_t rcx, int64_t r8) {
    rdi->f0 = rsi->f0;
    rdi->f4 = rsi->f4;
}

/* .L.str.3 */
void L_str_3() {
    signed char* rax1;
    signed char* rax2;
    signed char al3;
    int64_t rbx4;
    int64_t rbx5;
    signed char cl6;

    *rax1 = reinterpret_cast<signed char>(*rax2 + al3);
    *reinterpret_cast<signed char*>(rbx4 + 0x453bc445) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(rbx5 + 0x453bc445) + cl6);
}

void fun_68() {
    int64_t rbp1;
    int64_t rbp2;

    __asm__("enter 0xff2, 0x11");
    *reinterpret_cast<int32_t*>(rbp1 - 64) = *reinterpret_cast<int32_t*>(rbp2 - 64) + 1;
}

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

void fun_7c() {
    int64_t rbp1;
    int64_t rbp2;
    int64_t rbp3;
    int64_t rbp4;
    int64_t rbp5;
    int64_t rbp6;
    struct s16* rdi7;
    struct s17* rsi8;
    struct s18* rdi9;
    struct s19* rsi10;
    struct s20* rdi11;
    struct s21* rsi12;
    struct s22* rdi13;
    struct s23* rsi14;
    int64_t rbp15;
    int64_t rbp16;
    int64_t rbp17;
    int64_t rbp18;
    int64_t rbp19;
    int64_t rbp20;

    *reinterpret_cast<int32_t*>(rbp1 - 68) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp2 - 68) < *reinterpret_cast<int32_t*>(rbp3 - 12)) {
        *reinterpret_cast<int32_t*>(rbp4 - 64) = reinterpret_cast<int32_t>(fprintf);
        while (*reinterpret_cast<int32_t*>(rbp5 - 64) < *reinterpret_cast<int32_t*>(rbp6 - 8)) {
            rdi7->f0 = rsi8->f0;
            rdi9 = reinterpret_cast<struct s18*>(&rdi7->f4);
            rsi10 = reinterpret_cast<struct s19*>(&rsi8->f4);
            __asm__("mulsd xmm0, [rax+rcx*8]");
            rdi9->f0 = rsi10->f0;
            rdi11 = reinterpret_cast<struct s20*>(&rdi9->f4);
            rsi12 = reinterpret_cast<struct s21*>(&rsi10->f4);
            rdi11->f0 = rsi12->f0;
            rdi13 = reinterpret_cast<struct s22*>(&rdi11->f4);
            rsi14 = reinterpret_cast<struct s23*>(&rsi12->f4);
            __asm__("mulsd xmm0, xmm2");
            __asm__("addsd xmm0, xmm1");
            rdi13->f0 = rsi14->f0;
            rdi7 = reinterpret_cast<struct s16*>(&rdi13->f4);
            rsi8 = reinterpret_cast<struct s17*>(&rsi14->f4);
            *reinterpret_cast<int32_t*>(rbp15 - 64) = *reinterpret_cast<int32_t*>(rbp16 - 64) + 1;
        }
        *reinterpret_cast<int32_t*>(rbp17 - 68) = *reinterpret_cast<int32_t*>(rbp18 - 68) + 1;
    }
    *reinterpret_cast<int32_t*>(rbp19 - 60) = *reinterpret_cast<int32_t*>(rbp20 - 60) + 1;
    goto 42;
}

void fun_139() {
    int64_t v1;

    goto v1;
}

void submain(int32_t edi, int64_t rsi) {
    fun_173(0x10c8e0, 8);
}

