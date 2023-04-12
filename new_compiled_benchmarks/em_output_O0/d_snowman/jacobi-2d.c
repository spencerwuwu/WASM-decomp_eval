
void fprintf();

void print_array(int32_t edi, int64_t rsi);

void fun_a1(int64_t rdi, int64_t rsi);

void fun_aa(int64_t rdi, int64_t rsi);

void fun_83(int64_t rdi, int64_t rsi) {
    int32_t eax3;
    int32_t edi4;
    int64_t rbp5;
    int64_t rbp6;
    int64_t rdi7;
    int64_t rbp8;
    int64_t rdi9;
    int64_t rbp10;
    int64_t v11;

    if (reinterpret_cast<int1_t>(eax3 == fprintf)) {
        edi4 = *reinterpret_cast<int32_t*>(rbp5 - 20);
        rsi = *reinterpret_cast<int64_t*>(rbp6 - 32);
        print_array(edi4, rsi);
    }
    rdi7 = *reinterpret_cast<int64_t*>(rbp8 - 32);
    fun_a1(rdi7, rsi);
    rdi9 = *reinterpret_cast<int64_t*>(rbp10 - 40);
    fun_aa(rdi9, rsi);
    goto v11;
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
    rax4 = g416;
    rdi5 = *rax4;
    fun_427(rdi5, 0x420);
    rax6 = g42e;
    rdi7 = *rax6;
    rsi8 = reinterpret_cast<int32_t*>(0x438);
    fun_446(rdi7);
    v9 = reinterpret_cast<int32_t>(fprintf);
    while (v9 < v3) {
        v10 = reinterpret_cast<int32_t>(fprintf);
        while (v10 < v3) {
            __asm__("cdq ");
            if (reinterpret_cast<int1_t>((v9 * v3 + v10) % 20 == fprintf)) {
                rax11 = g48e;
                rdi12 = *rax11;
                rsi8 = reinterpret_cast<int32_t*>(0x498);
                fun_49f(rdi12);
            }
            rax13 = g4a6;
            rdi14 = *rax13;
            rcx15 = v10;
            *rdi14 = *rsi8;
            rsi8 = reinterpret_cast<int32_t*>(0x4cb);
            fun_4d2(rdi14 + 1);
            ++v10;
        }
        ++v9;
    }
    rax16 = g4fa;
    rdi17 = *rax16;
    fun_512(rdi17, 0x504, 0x50b, rcx15);
    rax18 = g519;
    rdi19 = *rax18;
    fun_52a(rdi19, 0x523, 0x50b, rcx15);
    return;
}

void fun_a1(int64_t rdi, int64_t rsi) {
    int64_t rdi3;
    int64_t rbp4;
    int64_t v5;

    rdi3 = *reinterpret_cast<int64_t*>(rbp4 - 40);
    fun_aa(rdi3, rsi);
    goto v5;
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

void fun_aa(int64_t rdi, int64_t rsi) {
    int64_t v3;

    goto v3;
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

void fprintf() {
}

void fun_68(signed char* rdi) {
    signed char cl2;
    signed char cl3;
    signed char* rax4;
    signed char* rax5;
    signed char al6;
    int64_t rax7;
    int64_t rax8;
    int64_t rdi9;
    int64_t* rax10;

    cl2 = reinterpret_cast<signed char>(cl3 - *rdi);
    *rax4 = reinterpret_cast<signed char>(*rax5 + al6);
    *reinterpret_cast<signed char*>(rax7 - 0x75) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(rax8 - 0x75) + cl2);
    rdi9 = *rax10;
    fun_83(rdi9, 0x7e);
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

void init_array(int32_t edi, struct s1* rsi, int64_t rdx) {
    struct s0* rdi1;
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
            rdi1 = reinterpret_cast<struct s0*>(&rdi11->f4);
            rsi = reinterpret_cast<struct s1*>(&rsi12->f4);
            ++v6;
        }
        ++v5;
    }
    return;
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

void kernel_jacobi_2d(int32_t edi, int32_t esi, int64_t rdx, int64_t rcx) {
    struct s8* rdi1;
    struct s9* rsi2;
    int32_t v5;
    int32_t v6;
    int32_t v7;
    int32_t v8;
    int32_t v9;
    struct s10* rdi10;
    struct s11* rsi11;
    struct s12* rdi12;
    struct s13* rsi13;
    int32_t v14;
    int32_t v15;
    struct s10* rdi16;
    struct s11* rsi17;
    struct s12* rdi18;
    struct s13* rsi19;

    *reinterpret_cast<int32_t*>(&rdi1) = edi;
    *reinterpret_cast<int32_t*>(&rsi2) = esi;
    v5 = *reinterpret_cast<int32_t*>(&rdi1);
    v6 = *reinterpret_cast<int32_t*>(&rsi2);
    v7 = reinterpret_cast<int32_t>(fprintf);
    while (v7 < v5) {
        v8 = 1;
        while (v8 < v6 - 1) {
            v9 = 1;
            while (v9 < v6 - 1) {
                rdi1->f0 = rsi2->f0;
                rdi10 = reinterpret_cast<struct s10*>(&rdi1->f4);
                rsi11 = reinterpret_cast<struct s11*>(&rsi2->f4);
                __asm__("addsd xmm1, [rax+rcx*8]");
                __asm__("addsd xmm1, [rax+rcx*8]");
                __asm__("addsd xmm1, [rax+rcx*8]");
                __asm__("addsd xmm1, [rax+rcx*8]");
                rdi10->f0 = rsi11->f0;
                rdi12 = reinterpret_cast<struct s12*>(&rdi10->f4);
                rsi13 = reinterpret_cast<struct s13*>(&rsi11->f4);
                __asm__("mulsd xmm0, xmm1");
                rdi12->f0 = rsi13->f0;
                rdi1 = reinterpret_cast<struct s8*>(&rdi12->f4);
                rsi2 = reinterpret_cast<struct s9*>(&rsi13->f4);
                ++v9;
            }
            ++v8;
        }
        v14 = 1;
        while (v14 < v6 - 1) {
            v15 = 1;
            while (v15 < v6 - 1) {
                rdi1->f0 = rsi2->f0;
                rdi16 = reinterpret_cast<struct s10*>(&rdi1->f4);
                rsi17 = reinterpret_cast<struct s11*>(&rsi2->f4);
                __asm__("addsd xmm1, [rax+rcx*8]");
                __asm__("addsd xmm1, [rax+rcx*8]");
                __asm__("addsd xmm1, [rax+rcx*8]");
                __asm__("addsd xmm1, [rax+rcx*8]");
                rdi16->f0 = rsi17->f0;
                rdi18 = reinterpret_cast<struct s12*>(&rdi16->f4);
                rsi19 = reinterpret_cast<struct s13*>(&rsi17->f4);
                __asm__("mulsd xmm0, xmm1");
                rdi18->f0 = rsi19->f0;
                rdi1 = reinterpret_cast<struct s8*>(&rdi18->f4);
                rsi2 = reinterpret_cast<struct s9*>(&rsi19->f4);
                ++v15;
            }
            ++v14;
        }
        ++v7;
    }
    return;
}

