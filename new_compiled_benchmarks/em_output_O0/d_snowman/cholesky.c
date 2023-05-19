
struct s0 {
    int32_t f0;
    int32_t f4;
};

void fun_1ce(struct s0* rdi, int32_t* rsi) {
    int64_t rbp3;
    int64_t rbp4;

    rdi->f0 = *rsi;
    *reinterpret_cast<int32_t*>(rbp3 - 20) = *reinterpret_cast<int32_t*>(rbp4 - 20) + 1;
}

void fprintf();

void print_array(int32_t edi, int64_t rsi);

void fun_27c(int64_t rdi, int64_t rsi);

int32_t fun_25e(int64_t rdi, int64_t rsi) {
    int32_t eax3;
    int32_t edi4;
    int64_t rbp5;
    int64_t rbp6;
    int64_t rdi7;
    int64_t rbp8;
    int64_t v9;

    if (reinterpret_cast<int1_t>(eax3 == fprintf)) {
        edi4 = *reinterpret_cast<int32_t*>(rbp5 - 20);
        rsi = *reinterpret_cast<int64_t*>(rbp6 - 32);
        print_array(edi4, rsi);
    }
    rdi7 = *reinterpret_cast<int64_t*>(rbp8 - 32);
    fun_27c(rdi7, rsi);
    goto v9;
}

int64_t* g576 = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_587(int64_t rdi, int64_t rsi);

int64_t* g58e = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_5a6(int64_t rdi);

int64_t* g5ee = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_5ff(int64_t rdi);

int32_t** g606 = reinterpret_cast<int32_t**>(0x48f0458b48388b48);

void fun_632(int64_t rdi);

int64_t* g65a = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_672(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx);

int64_t* g679 = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_68a(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx);

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
    rax4 = g576;
    rdi5 = *rax4;
    fun_587(rdi5, 0x580);
    rax6 = g58e;
    rdi7 = *rax6;
    rsi8 = reinterpret_cast<int32_t*>(0x598);
    fun_5a6(rdi7);
    v9 = reinterpret_cast<int32_t>(fprintf);
    while (v9 < v3) {
        v10 = reinterpret_cast<int32_t>(fprintf);
        while (v10 <= v9) {
            __asm__("cdq ");
            if (reinterpret_cast<int1_t>((v9 * v3 + v10) % 20 == fprintf)) {
                rax11 = g5ee;
                rdi12 = *rax11;
                rsi8 = reinterpret_cast<int32_t*>(0x5f8);
                fun_5ff(rdi12);
            }
            rax13 = g606;
            rdi14 = *rax13;
            rcx15 = v10;
            *rdi14 = *rsi8;
            rsi8 = reinterpret_cast<int32_t*>(0x62b);
            fun_632(rdi14 + 1);
            ++v10;
        }
        ++v9;
    }
    rax16 = g65a;
    rdi17 = *rax16;
    fun_672(rdi17, 0x664, 0x66b, rcx15);
    rax18 = g679;
    rdi19 = *rax18;
    fun_68a(rdi19, 0x683, 0x66b, rcx15);
    return;
}

void fun_27c(int64_t rdi, int64_t rsi) {
    int64_t v3;

    goto v3;
}

void fun_5ff(int64_t rdi) {
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
        rax2 = g606;
        rdi3 = *rax2;
        rcx4 = *reinterpret_cast<int32_t*>(rbp5 - 24);
        *rdi3 = *rsi6;
        rsi6 = reinterpret_cast<int32_t*>(0x62b);
        fun_632(rdi3 + 1);
        *reinterpret_cast<int32_t*>(rbp7 - 24) = *reinterpret_cast<int32_t*>(rbp8 - 24) + 1;
        while (*reinterpret_cast<int32_t*>(rbp9 - 24) > *reinterpret_cast<int32_t*>(rbp10 - 20)) {
            *reinterpret_cast<int32_t*>(rbp11 - 20) = *reinterpret_cast<int32_t*>(rbp12 - 20) + 1;
            if (*reinterpret_cast<int32_t*>(rbp13 - 20) >= *reinterpret_cast<int32_t*>(rbp14 - 4)) 
                goto addr_653_10;
            *reinterpret_cast<int32_t*>(rbp15 - 24) = reinterpret_cast<int32_t>(fprintf);
        }
        __asm__("cdq ");
        if (!reinterpret_cast<int1_t>((*reinterpret_cast<int32_t*>(rbp16 - 20) * *reinterpret_cast<int32_t*>(rbp17 - 4) + *reinterpret_cast<int32_t*>(rbp18 - 24)) % 20 == fprintf)) 
            continue;
        rax19 = g5ee;
        rdi20 = *rax19;
        rsi6 = reinterpret_cast<int32_t*>(0x5f8);
        fun_5ff(rdi20);
    }
    addr_653_10:
    rax21 = g65a;
    rdi22 = *rax21;
    fun_672(rdi22, 0x664, 0x66b, rcx4);
    rax23 = g679;
    rdi24 = *rax23;
    fun_68a(rdi24, 0x683, 0x66b, rcx4);
    goto v25;
}

void fun_632(int64_t rdi) {
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
        while (*reinterpret_cast<int32_t*>(rbp4 - 24) > *reinterpret_cast<int32_t*>(rbp5 - 20)) {
            *reinterpret_cast<int32_t*>(rbp6 - 20) = *reinterpret_cast<int32_t*>(rbp7 - 20) + 1;
            if (*reinterpret_cast<int32_t*>(rbp8 - 20) >= *reinterpret_cast<int32_t*>(rbp9 - 4)) 
                goto addr_653_6;
            *reinterpret_cast<int32_t*>(rbp10 - 24) = reinterpret_cast<int32_t>(fprintf);
        }
        __asm__("cdq ");
        if (reinterpret_cast<int1_t>((*reinterpret_cast<int32_t*>(rbp11 - 20) * *reinterpret_cast<int32_t*>(rbp12 - 4) + *reinterpret_cast<int32_t*>(rbp13 - 24)) % 20 == fprintf)) {
            rax14 = g5ee;
            rdi15 = *rax14;
            rsi16 = reinterpret_cast<int32_t*>(0x5f8);
            fun_5ff(rdi15);
        }
        rax17 = g606;
        rdi18 = *rax17;
        rcx19 = *reinterpret_cast<int32_t*>(rbp20 - 24);
        *rdi18 = *rsi16;
        rsi16 = reinterpret_cast<int32_t*>(0x62b);
        fun_632(rdi18 + 1);
    }
    addr_653_6:
    rax21 = g65a;
    rdi22 = *rax21;
    fun_672(rdi22, 0x664, 0x66b, rcx19);
    rax23 = g679;
    rdi24 = *rax23;
    fun_68a(rdi24, 0x683, 0x66b, rcx19);
    goto v25;
}

void fun_587(int64_t rdi, int64_t rsi) {
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

    rax3 = g58e;
    rdi4 = *rax3;
    rsi5 = reinterpret_cast<int32_t*>(0x598);
    fun_5a6(rdi4);
    *reinterpret_cast<int32_t*>(rbp6 - 20) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp7 - 20) < *reinterpret_cast<int32_t*>(rbp8 - 4)) {
        *reinterpret_cast<int32_t*>(rbp9 - 24) = reinterpret_cast<int32_t>(fprintf);
        while (*reinterpret_cast<int32_t*>(rbp10 - 24) <= *reinterpret_cast<int32_t*>(rbp11 - 20)) {
            __asm__("cdq ");
            if (reinterpret_cast<int1_t>((*reinterpret_cast<int32_t*>(rbp12 - 20) * *reinterpret_cast<int32_t*>(rbp13 - 4) + *reinterpret_cast<int32_t*>(rbp14 - 24)) % 20 == fprintf)) {
                rax15 = g5ee;
                rdi16 = *rax15;
                rsi5 = reinterpret_cast<int32_t*>(0x5f8);
                fun_5ff(rdi16);
            }
            rax17 = g606;
            rdi18 = *rax17;
            rcx19 = *reinterpret_cast<int32_t*>(rbp20 - 24);
            *rdi18 = *rsi5;
            rsi5 = reinterpret_cast<int32_t*>(0x62b);
            fun_632(rdi18 + 1);
            *reinterpret_cast<int32_t*>(rbp21 - 24) = *reinterpret_cast<int32_t*>(rbp22 - 24) + 1;
        }
        *reinterpret_cast<int32_t*>(rbp23 - 20) = *reinterpret_cast<int32_t*>(rbp24 - 20) + 1;
    }
    rax25 = g65a;
    rdi26 = *rax25;
    fun_672(rdi26, 0x664, 0x66b, rcx19);
    rax27 = g679;
    rdi28 = *rax27;
    fun_68a(rdi28, 0x683, 0x66b, rcx19);
    goto v29;
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

void fun_54b(int64_t rdi);

int64_t fun_391() {
    int64_t rbp1;
    int64_t rax2;
    int64_t rbp3;
    int64_t rbp4;
    int64_t rbp5;
    int64_t rbp6;
    int64_t rbp7;
    int64_t rbp8;
    struct s1* rdi9;
    struct s2* rsi10;
    int64_t rbp11;
    int64_t rbp12;
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
    struct s3* rdi24;
    struct s4* rsi25;
    struct s1* rdi26;
    struct s2* rsi27;
    struct s3* rdi28;
    struct s4* rsi29;
    int64_t rbp30;
    int64_t rbp31;
    int64_t rbp32;
    int64_t rbp33;
    int64_t rbp34;
    int64_t rbp35;
    int64_t rbp36;
    int64_t rbp37;
    int64_t rbp38;
    int64_t rbp39;
    int64_t rbp40;
    int64_t rbp41;
    struct s3* rdi42;
    struct s4* rsi43;
    int64_t rbp44;
    int64_t rbp45;
    int64_t rbp46;
    int64_t rbp47;
    int64_t rdi48;
    int64_t rbp49;
    int64_t v50;

    *reinterpret_cast<int64_t*>(rbp1 - 48) = rax2;
    *reinterpret_cast<int32_t*>(rbp3 - 28) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp4 - 28) < *reinterpret_cast<int32_t*>(rbp5 - 4)) {
        *reinterpret_cast<int32_t*>(rbp6 - 32) = reinterpret_cast<int32_t>(fprintf);
        while (*reinterpret_cast<int32_t*>(rbp7 - 32) < *reinterpret_cast<int32_t*>(rbp8 - 4)) {
            __asm__("xorps xmm0, xmm0");
            rdi9->f0 = rsi10->f0;
            rdi9 = reinterpret_cast<struct s1*>(&rdi9->f4);
            rsi10 = reinterpret_cast<struct s2*>(&rsi10->f4);
            *reinterpret_cast<int32_t*>(rbp11 - 32) = *reinterpret_cast<int32_t*>(rbp12 - 32) + 1;
        }
        *reinterpret_cast<int32_t*>(rbp13 - 28) = *reinterpret_cast<int32_t*>(rbp14 - 28) + 1;
    }
    *reinterpret_cast<int32_t*>(rbp15 - 36) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp16 - 36) < *reinterpret_cast<int32_t*>(rbp17 - 4)) {
        *reinterpret_cast<int32_t*>(rbp18 - 28) = reinterpret_cast<int32_t>(fprintf);
        while (*reinterpret_cast<int32_t*>(rbp19 - 28) < *reinterpret_cast<int32_t*>(rbp20 - 4)) {
            *reinterpret_cast<int32_t*>(rbp21 - 32) = reinterpret_cast<int32_t>(fprintf);
            while (*reinterpret_cast<int32_t*>(rbp22 - 32) < *reinterpret_cast<int32_t*>(rbp23 - 4)) {
                rdi9->f0 = rsi10->f0;
                rdi24 = reinterpret_cast<struct s3*>(&rdi9->f4);
                rsi25 = reinterpret_cast<struct s4*>(&rsi10->f4);
                rdi24->f0 = rsi25->f0;
                rdi26 = reinterpret_cast<struct s1*>(&rdi24->f4);
                rsi27 = reinterpret_cast<struct s2*>(&rsi25->f4);
                rdi26->f0 = rsi27->f0;
                rdi28 = reinterpret_cast<struct s3*>(&rdi26->f4);
                rsi29 = reinterpret_cast<struct s4*>(&rsi27->f4);
                __asm__("mulsd xmm0, xmm2");
                __asm__("addsd xmm0, xmm1");
                rdi28->f0 = rsi29->f0;
                rdi9 = reinterpret_cast<struct s1*>(&rdi28->f4);
                rsi10 = reinterpret_cast<struct s2*>(&rsi29->f4);
                *reinterpret_cast<int32_t*>(rbp30 - 32) = *reinterpret_cast<int32_t*>(rbp31 - 32) + 1;
            }
            *reinterpret_cast<int32_t*>(rbp32 - 28) = *reinterpret_cast<int32_t*>(rbp33 - 28) + 1;
        }
        *reinterpret_cast<int32_t*>(rbp34 - 36) = *reinterpret_cast<int32_t*>(rbp35 - 36) + 1;
    }
    *reinterpret_cast<int32_t*>(rbp36 - 28) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp37 - 28) < *reinterpret_cast<int32_t*>(rbp38 - 4)) {
        *reinterpret_cast<int32_t*>(rbp39 - 32) = reinterpret_cast<int32_t>(fprintf);
        while (*reinterpret_cast<int32_t*>(rbp40 - 32) < *reinterpret_cast<int32_t*>(rbp41 - 4)) {
            rdi9->f0 = rsi10->f0;
            rdi42 = reinterpret_cast<struct s3*>(&rdi9->f4);
            rsi43 = reinterpret_cast<struct s4*>(&rsi10->f4);
            rdi42->f0 = rsi43->f0;
            rdi9 = reinterpret_cast<struct s1*>(&rdi42->f4);
            rsi10 = reinterpret_cast<struct s2*>(&rsi43->f4);
            *reinterpret_cast<int32_t*>(rbp44 - 32) = *reinterpret_cast<int32_t*>(rbp45 - 32) + 1;
        }
        *reinterpret_cast<int32_t*>(rbp46 - 28) = *reinterpret_cast<int32_t*>(rbp47 - 28) + 1;
    }
    rdi48 = *reinterpret_cast<int64_t*>(rbp49 - 48);
    fun_54b(rdi48);
    goto v50;
}

struct s5 {
    int32_t f0;
    int32_t f4;
};

void init_array(int32_t edi, struct s5* rsi);

void fun_241(int64_t rdi, int64_t rsi);

void fun_225(int64_t rdi, int64_t rsi) {
    int64_t rbp3;
    int64_t rax4;
    int32_t edi5;
    int64_t rbp6;
    struct s5* rsi7;
    int64_t rbp8;
    int64_t rdi9;
    int64_t rbp10;
    int64_t rsi11;
    int64_t rbp12;
    int64_t rbp13;
    int64_t rdi14;
    int64_t rbp15;
    int64_t rdi16;
    int64_t rbp17;
    int32_t eax18;
    int64_t v19;
    int32_t edi20;
    int64_t rbp21;
    int64_t rbp22;

    *reinterpret_cast<int64_t*>(rbp3 - 32) = rax4;
    edi5 = *reinterpret_cast<int32_t*>(rbp6 - 20);
    rsi7 = *reinterpret_cast<struct s5**>(rbp8 - 32);
    init_array(edi5, rsi7);
    *reinterpret_cast<int32_t*>(&rdi9) = *reinterpret_cast<int32_t*>(rbp10 - 20);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi9) + 4) = reinterpret_cast<int32_t>(fprintf);
    rsi11 = *reinterpret_cast<int64_t*>(rbp12 - 32);
    fun_241(rdi9, rsi11);
    if (*reinterpret_cast<int32_t*>(rbp13 - 4) <= 42) {
        addr_273_3:
        rdi14 = *reinterpret_cast<int64_t*>(rbp15 - 32);
        fun_27c(rdi14, rsi11);
    } else {
        rdi16 = **reinterpret_cast<int64_t**>(rbp17 - 16);
        rsi11 = 0x259;
        eax18 = fun_25e(rdi16, 0x259);
        if (!reinterpret_cast<int1_t>(eax18 == fprintf)) 
            goto addr_273_3; else 
            goto addr_267_6;
    }
    goto v19;
    addr_267_6:
    edi20 = *reinterpret_cast<int32_t*>(rbp21 - 20);
    rsi11 = *reinterpret_cast<int64_t*>(rbp22 - 32);
    print_array(edi20, rsi11);
    goto addr_273_3;
}

void fun_5a6(int64_t rdi) {
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
        while (*reinterpret_cast<int32_t*>(rbp6 - 24) <= *reinterpret_cast<int32_t*>(rbp7 - 20)) {
            __asm__("cdq ");
            if (reinterpret_cast<int1_t>((*reinterpret_cast<int32_t*>(rbp8 - 20) * *reinterpret_cast<int32_t*>(rbp9 - 4) + *reinterpret_cast<int32_t*>(rbp10 - 24)) % 20 == fprintf)) {
                rax11 = g5ee;
                rdi12 = *rax11;
                rsi13 = reinterpret_cast<int32_t*>(0x5f8);
                fun_5ff(rdi12);
            }
            rax14 = g606;
            rdi15 = *rax14;
            rcx16 = *reinterpret_cast<int32_t*>(rbp17 - 24);
            *rdi15 = *rsi13;
            rsi13 = reinterpret_cast<int32_t*>(0x62b);
            fun_632(rdi15 + 1);
            *reinterpret_cast<int32_t*>(rbp18 - 24) = *reinterpret_cast<int32_t*>(rbp19 - 24) + 1;
        }
        *reinterpret_cast<int32_t*>(rbp20 - 20) = *reinterpret_cast<int32_t*>(rbp21 - 20) + 1;
    }
    rax22 = g65a;
    rdi23 = *rax22;
    fun_672(rdi23, 0x664, 0x66b, rcx16);
    rax24 = g679;
    rdi25 = *rax24;
    fun_68a(rdi25, 0x683, 0x66b, rcx16);
    goto v26;
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

void init_array(int32_t edi, struct s5* rsi) {
    struct s6* rdi1;
    int32_t v3;
    int32_t v4;
    int32_t v5;
    struct s7* rdi6;
    struct s8* rsi7;
    int32_t v8;
    struct s7* rdi9;
    struct s8* rsi10;
    struct s9* rdi11;
    struct s10* rsi12;
    int64_t rax13;
    int64_t v14;
    int32_t v15;
    int32_t v16;
    int32_t v17;
    int32_t v18;
    int32_t v19;
    struct s11* rdi20;
    struct s12* rsi21;
    struct s9* rdi22;
    struct s10* rsi23;
    struct s11* rdi24;
    struct s12* rsi25;
    int32_t v26;
    int32_t v27;
    struct s11* rdi28;
    struct s12* rsi29;

    *reinterpret_cast<int32_t*>(&rdi1) = edi;
    v3 = *reinterpret_cast<int32_t*>(&rdi1);
    v4 = reinterpret_cast<int32_t>(fprintf);
    while (v4 < v3) {
        v5 = reinterpret_cast<int32_t>(fprintf);
        while (v5 <= v4) {
            __asm__("cdq ");
            __asm__("cvtsi2sd xmm0, edx");
            __asm__("cvtsi2sd xmm1, dword [rbp-0x4]");
            __asm__("divsd xmm0, xmm1");
            rdi1->f0 = rsi->f0;
            rdi6 = reinterpret_cast<struct s7*>(&rdi1->f4);
            rsi7 = reinterpret_cast<struct s8*>(&rsi->f4);
            __asm__("addsd xmm0, xmm1");
            rdi6->f0 = rsi7->f0;
            rdi1 = reinterpret_cast<struct s6*>(&rdi6->f4);
            rsi = reinterpret_cast<struct s5*>(&rsi7->f4);
            ++v5;
        }
        v8 = v4 + 1;
        while (v8 < v3) {
            __asm__("xorps xmm0, xmm0");
            rdi1->f0 = rsi->f0;
            rdi1 = reinterpret_cast<struct s6*>(&rdi1->f4);
            rsi = reinterpret_cast<struct s5*>(&rsi->f4);
            ++v8;
        }
        rdi1->f0 = rsi->f0;
        rdi9 = reinterpret_cast<struct s7*>(&rdi1->f4);
        rsi10 = reinterpret_cast<struct s8*>(&rsi->f4);
        rdi9->f0 = rsi10->f0;
        rdi1 = reinterpret_cast<struct s6*>(&rdi9->f4);
        rsi = reinterpret_cast<struct s5*>(&rsi10->f4);
        ++v4;
    }
    *reinterpret_cast<int32_t*>(&rdi11) = 0x3d0900;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi11) + 4) = reinterpret_cast<int32_t>(fprintf);
    *reinterpret_cast<int32_t*>(&rsi12) = 8;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi12) + 4) = reinterpret_cast<int32_t>(fprintf);
    rax13 = fun_391();
    v14 = rax13;
    v15 = reinterpret_cast<int32_t>(fprintf);
    while (v15 < v3) {
        v16 = reinterpret_cast<int32_t>(fprintf);
        while (v16 < v3) {
            __asm__("xorps xmm0, xmm0");
            rdi11->f0 = rsi12->f0;
            rdi11 = reinterpret_cast<struct s9*>(&rdi11->f4);
            rsi12 = reinterpret_cast<struct s10*>(&rsi12->f4);
            ++v16;
        }
        ++v15;
    }
    v17 = reinterpret_cast<int32_t>(fprintf);
    while (v17 < v3) {
        v18 = reinterpret_cast<int32_t>(fprintf);
        while (v18 < v3) {
            v19 = reinterpret_cast<int32_t>(fprintf);
            while (v19 < v3) {
                rdi11->f0 = rsi12->f0;
                rdi20 = reinterpret_cast<struct s11*>(&rdi11->f4);
                rsi21 = reinterpret_cast<struct s12*>(&rsi12->f4);
                rdi20->f0 = rsi21->f0;
                rdi22 = reinterpret_cast<struct s9*>(&rdi20->f4);
                rsi23 = reinterpret_cast<struct s10*>(&rsi21->f4);
                rdi22->f0 = rsi23->f0;
                rdi24 = reinterpret_cast<struct s11*>(&rdi22->f4);
                rsi25 = reinterpret_cast<struct s12*>(&rsi23->f4);
                __asm__("mulsd xmm0, xmm2");
                __asm__("addsd xmm0, xmm1");
                rdi24->f0 = rsi25->f0;
                rdi11 = reinterpret_cast<struct s9*>(&rdi24->f4);
                rsi12 = reinterpret_cast<struct s10*>(&rsi25->f4);
                ++v19;
            }
            ++v18;
        }
        ++v17;
    }
    v26 = reinterpret_cast<int32_t>(fprintf);
    while (v26 < v3) {
        v27 = reinterpret_cast<int32_t>(fprintf);
        while (v27 < v3) {
            rdi11->f0 = rsi12->f0;
            rdi28 = reinterpret_cast<struct s11*>(&rdi11->f4);
            rsi29 = reinterpret_cast<struct s12*>(&rsi12->f4);
            rdi28->f0 = rsi29->f0;
            rdi11 = reinterpret_cast<struct s9*>(&rdi28->f4);
            rsi12 = reinterpret_cast<struct s10*>(&rsi29->f4);
            ++v27;
        }
        ++v26;
    }
    fun_54b(v14);
    return;
}

void fun_241(int64_t rdi, int64_t rsi) {
    int64_t rbp3;
    int64_t rdi4;
    int64_t rbp5;
    int64_t rdi6;
    int64_t rbp7;
    int32_t eax8;
    int64_t v9;
    int32_t edi10;
    int64_t rbp11;
    int64_t rbp12;

    if (*reinterpret_cast<int32_t*>(rbp3 - 4) <= 42) {
        addr_273_2:
        rdi4 = *reinterpret_cast<int64_t*>(rbp5 - 32);
        fun_27c(rdi4, rsi);
    } else {
        rdi6 = **reinterpret_cast<int64_t**>(rbp7 - 16);
        rsi = 0x259;
        eax8 = fun_25e(rdi6, 0x259);
        if (!reinterpret_cast<int1_t>(eax8 == fprintf)) 
            goto addr_273_2; else 
            goto addr_267_5;
    }
    goto v9;
    addr_267_5:
    edi10 = *reinterpret_cast<int32_t*>(rbp11 - 20);
    rsi = *reinterpret_cast<int64_t*>(rbp12 - 32);
    print_array(edi10, rsi);
    goto addr_273_2;
}

void fun_54b(int64_t rdi) {
    int64_t v2;

    goto v2;
}

void fun_672(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t* rax5;
    int64_t rdi6;
    int64_t v7;

    rax5 = g679;
    rdi6 = *rax5;
    fun_68a(rdi6, 0x683, rdx, rcx);
    goto v7;
}

void fun_68a(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t v5;

    goto v5;
}

void fprintf() {
}

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

int32_t fprintf = 0xe5894855;

void fun_68(struct s13* rdi, struct s14* rsi, int64_t rdx) {
    struct s15* rdi4;
    int64_t rbp5;
    int64_t rbp6;

    rdi->f0 = rsi->f0;
    rdi4 = reinterpret_cast<struct s15*>(&rdi->f4);
    rdi4->f0 = rsi->f4;
    __asm__("movd rdx, xmm0");
    __asm__("movd xmm0, rdx");
    __asm__("mulsd xmm0, xmm2");
    __asm__("addsd xmm0, xmm1");
    rdi4->f4 = fprintf;
    *reinterpret_cast<int32_t*>(rbp5 - 28) = *reinterpret_cast<int32_t*>(rbp6 - 28) + 1;
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

void fun_cb(struct s16* rdi, struct s17* rsi) {
    struct s18* rdi3;
    struct s19* rsi4;
    int64_t rbp5;
    int64_t rbp6;

    rdi->f0 = rsi->f0;
    rdi3 = reinterpret_cast<struct s18*>(&rdi->f4);
    rsi4 = reinterpret_cast<struct s19*>(&rsi->f4);
    rdi3->f0 = rsi4->f0;
    __asm__("divsd xmm0, xmm1");
    rdi3->f4 = rsi4->f4;
    *reinterpret_cast<int32_t*>(rbp5 - 24) = *reinterpret_cast<int32_t*>(rbp6 - 24) + 1;
}

struct s20 {
    int32_t f0;
    int32_t f4;
};

int32_t g4 = 0x20ec8348;

int32_t g8 = 0x48fc7d89;

struct s21 {
    int32_t f0;
    int32_t f4;
};

int32_t gc = 0xc7f07589;

struct s22 {
    int32_t f0;
    int32_t f4;
};

void fun_118() {
    int64_t rbp1;
    int64_t rbp2;
    int64_t rbp3;
    struct s20* rdi4;
    struct s0* rdi5;
    struct s21* rdi6;
    struct s22* rdi7;
    int64_t rbp8;
    int64_t rbp9;

    *reinterpret_cast<int32_t*>(rbp1 - 28) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp2 - 28) < *reinterpret_cast<int32_t*>(rbp3 - 20)) {
        rdi4->f0 = g4;
        rdi5 = reinterpret_cast<struct s0*>(&rdi4->f4);
        rdi5->f0 = g8;
        rdi6 = reinterpret_cast<struct s21*>(&rdi5->f4);
        rdi6->f0 = gc;
        rdi7 = reinterpret_cast<struct s22*>(&rdi6->f4);
        __asm__("movd rdx, xmm0");
        __asm__("movd xmm0, rdx");
        __asm__("mulsd xmm0, xmm2");
        __asm__("addsd xmm0, xmm1");
        rdi7->f0 = fprintf;
        rdi4 = reinterpret_cast<struct s20*>(&rdi7->f4);
        *reinterpret_cast<int32_t*>(rbp8 - 28) = *reinterpret_cast<int32_t*>(rbp9 - 28) + 1;
    }
    rdi4->f0 = g4;
    fun_1ce(&rdi4->f4, 0x8000000000000008);
}

void fun_1f7() {
    int64_t v1;

    goto v1;
}

void submain(int32_t edi, int64_t rsi) {
    fun_225(0x3d0900, 8);
}

