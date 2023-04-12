
void fprintf();

void print_array(int32_t edi, int32_t esi, int64_t rdx);

void fun_b0(int64_t rdi, int64_t rsi, int64_t rdx);

void fun_b9(int64_t rdi, int64_t rsi, int64_t rdx);

void fun_8f() {
    int32_t eax1;
    int32_t edi2;
    int64_t rbp3;
    int64_t rsi4;
    int64_t rbp5;
    int64_t rdx6;
    int64_t rbp7;
    int64_t rdi8;
    int64_t rbp9;
    int64_t rdi10;
    int64_t rbp11;
    int64_t v12;

    if (reinterpret_cast<int1_t>(eax1 == fprintf)) {
        edi2 = *reinterpret_cast<int32_t*>(rbp3 - 20);
        *reinterpret_cast<int32_t*>(&rsi4) = *reinterpret_cast<int32_t*>(rbp5 - 24);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi4) + 4) = reinterpret_cast<int32_t>(fprintf);
        rdx6 = *reinterpret_cast<int64_t*>(rbp7 - 48);
        print_array(edi2, *reinterpret_cast<int32_t*>(&rsi4), rdx6);
    }
    rdi8 = *reinterpret_cast<int64_t*>(rbp9 - 40);
    fun_b0(rdi8, rsi4, rdx6);
    rdi10 = *reinterpret_cast<int64_t*>(rbp11 - 48);
    fun_b9(rdi10, rsi4, rdx6);
    goto v12;
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

void print_array(int32_t edi, int32_t esi, int64_t rdx) {
    int32_t v4;
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
    int64_t rcx17;
    int64_t* rax18;
    int64_t rdi19;
    int64_t* rax20;
    int64_t rdi21;

    v4 = edi;
    v5 = esi;
    rax6 = g329;
    rdi7 = *rax6;
    fun_33a(rdi7, 0x333);
    rax8 = g341;
    rdi9 = *rax8;
    rsi10 = reinterpret_cast<int32_t*>(0x34b);
    fun_359(rdi9);
    v11 = reinterpret_cast<int32_t>(fprintf);
    while (v11 < v4) {
        v12 = reinterpret_cast<int32_t>(fprintf);
        while (v12 < v5) {
            __asm__("cdq ");
            if (reinterpret_cast<int1_t>((v11 * v4 + v12) % 20 == fprintf)) {
                rax13 = g3a1;
                rdi14 = *rax13;
                rsi10 = reinterpret_cast<int32_t*>(0x3ab);
                fun_3b2(rdi14);
            }
            rax15 = g3b9;
            rdi16 = *rax15;
            rcx17 = v12;
            *rdi16 = *rsi10;
            rsi10 = reinterpret_cast<int32_t*>(0x3de);
            fun_3e5(rdi16 + 1);
            ++v12;
        }
        ++v11;
    }
    rax18 = g40d;
    rdi19 = *rax18;
    fun_425(rdi19, 0x417, 0x41e, rcx17);
    rax20 = g42c;
    rdi21 = *rax20;
    fun_43d(rdi21, 0x436, 0x41e, rcx17);
    return;
}

void fun_b0(int64_t rdi, int64_t rsi, int64_t rdx) {
    int64_t rdi4;
    int64_t rbp5;
    int64_t v6;

    rdi4 = *reinterpret_cast<int64_t*>(rbp5 - 48);
    fun_b9(rdi4, rsi, rdx);
    goto v6;
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

void fun_b9(int64_t rdi, int64_t rsi, int64_t rdx) {
    int64_t v4;

    goto v4;
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

void fun_43d(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t v5;

    goto v5;
}

void fprintf() {
}

void fun_68() {
    int1_t of1;
    unsigned char r8b2;
    signed char* rax3;
    signed char* rax4;
    signed char al5;
    int64_t rbp6;

    __asm__("fmul dword [rax-0x75]");
    if (!(reinterpret_cast<uint1_t>(__undefined() != of1) | reinterpret_cast<uint1_t>(r8b2 >> 1 == fprintf))) {
        *rax3 = reinterpret_cast<signed char>(*rax4 + al5);
    }
    if (*reinterpret_cast<int32_t*>(rbp6 - 4) <= 42) 
        goto 0xa7;
}

void fun_88() {
    signed char* rax1;
    signed char* rax2;
    signed char al3;

    *rax1 = reinterpret_cast<signed char>(*rax2 + al3);
    fun_8f();
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

void kernel_trmm(struct s0* rdi, struct s1* rsi, int64_t rdx, int64_t rcx) {
    int32_t v5;
    int32_t v6;
    struct s2* rdi7;
    struct s3* rsi8;
    int32_t v9;
    int32_t v10;
    int32_t v11;
    struct s4* rdi12;
    struct s5* rsi13;
    struct s2* rdi14;
    struct s3* rsi15;
    struct s4* rdi16;
    struct s5* rsi17;
    struct s4* rdi18;
    struct s5* rsi19;

    v5 = *reinterpret_cast<int32_t*>(&rdi);
    v6 = *reinterpret_cast<int32_t*>(&rsi);
    rdi->f0 = rsi->f0;
    rdi7 = reinterpret_cast<struct s2*>(&rdi->f4);
    rsi8 = reinterpret_cast<struct s3*>(&rsi->f4);
    v9 = reinterpret_cast<int32_t>(fprintf);
    while (v9 < v5) {
        v10 = reinterpret_cast<int32_t>(fprintf);
        while (v10 < v6) {
            v11 = v9 + 1;
            while (v11 < v5) {
                rdi7->f0 = rsi8->f0;
                rdi12 = reinterpret_cast<struct s4*>(&rdi7->f4);
                rsi13 = reinterpret_cast<struct s5*>(&rsi8->f4);
                rdi12->f0 = rsi13->f0;
                rdi14 = reinterpret_cast<struct s2*>(&rdi12->f4);
                rsi15 = reinterpret_cast<struct s3*>(&rsi13->f4);
                rdi14->f0 = rsi15->f0;
                rdi16 = reinterpret_cast<struct s4*>(&rdi14->f4);
                rsi17 = reinterpret_cast<struct s5*>(&rsi15->f4);
                __asm__("mulsd xmm0, xmm2");
                __asm__("addsd xmm0, xmm1");
                rdi16->f0 = rsi17->f0;
                rdi7 = reinterpret_cast<struct s2*>(&rdi16->f4);
                rsi8 = reinterpret_cast<struct s3*>(&rsi17->f4);
                ++v11;
            }
            rdi7->f0 = rsi8->f0;
            rdi18 = reinterpret_cast<struct s4*>(&rdi7->f4);
            rsi19 = reinterpret_cast<struct s5*>(&rsi8->f4);
            __asm__("mulsd xmm0, [rax+rcx*8]");
            rdi18->f0 = rsi19->f0;
            rdi7 = reinterpret_cast<struct s2*>(&rdi18->f4);
            rsi8 = reinterpret_cast<struct s3*>(&rsi19->f4);
            ++v10;
        }
        ++v9;
    }
    return;
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

struct s13 {
    int32_t f0;
    int32_t f4;
};

void init_array(struct s6* rdi, struct s7* rsi, int64_t rdx, int64_t rcx, int64_t r8) {
    int32_t v6;
    int32_t v7;
    struct s8* rdi8;
    struct s9* rsi9;
    struct s10* rdi10;
    struct s11* rsi11;
    int32_t v12;
    int32_t v13;
    struct s12* rdi14;
    struct s13* rsi15;
    int32_t v16;

    v6 = *reinterpret_cast<int32_t*>(&rdi);
    v7 = *reinterpret_cast<int32_t*>(&rsi);
    rdi->f0 = rsi->f0;
    rdi8 = reinterpret_cast<struct s8*>(&rdi->f4);
    rsi9 = reinterpret_cast<struct s9*>(&rsi->f4);
    rdi8->f0 = rsi9->f0;
    rdi10 = reinterpret_cast<struct s10*>(&rdi8->f4);
    rsi11 = reinterpret_cast<struct s11*>(&rsi9->f4);
    v12 = reinterpret_cast<int32_t>(fprintf);
    while (v12 < v6) {
        v13 = reinterpret_cast<int32_t>(fprintf);
        while (v13 < v12) {
            __asm__("cdq ");
            __asm__("cvtsi2sd xmm0, edx");
            __asm__("cvtsi2sd xmm1, dword [rbp-0x4]");
            __asm__("divsd xmm0, xmm1");
            rdi10->f0 = rsi11->f0;
            rdi10 = reinterpret_cast<struct s10*>(&rdi10->f4);
            rsi11 = reinterpret_cast<struct s11*>(&rsi11->f4);
            ++v13;
        }
        rdi10->f0 = rsi11->f0;
        rdi14 = reinterpret_cast<struct s12*>(&rdi10->f4);
        rsi15 = reinterpret_cast<struct s13*>(&rsi11->f4);
        rdi14->f0 = rsi15->f0;
        rdi10 = reinterpret_cast<struct s10*>(&rdi14->f4);
        rsi11 = reinterpret_cast<struct s11*>(&rsi15->f4);
        v16 = reinterpret_cast<int32_t>(fprintf);
        while (v16 < v7) {
            __asm__("cdq ");
            __asm__("cvtsi2sd xmm0, edx");
            __asm__("cvtsi2sd xmm1, dword [rbp-0x8]");
            __asm__("divsd xmm0, xmm1");
            rdi10->f0 = rsi11->f0;
            rdi10 = reinterpret_cast<struct s10*>(&rdi10->f4);
            rsi11 = reinterpret_cast<struct s11*>(&rsi11->f4);
            ++v16;
        }
        ++v12;
    }
    return;
}

