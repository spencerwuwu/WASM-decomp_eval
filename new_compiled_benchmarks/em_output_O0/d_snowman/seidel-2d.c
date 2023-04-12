
int64_t* g336 = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_347(int64_t rdi, int64_t rsi);

int64_t* g34e = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_366(int64_t rdi);

void fprintf();

int64_t* g3ae = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_3bf(int64_t rdi);

int32_t** g3c6 = reinterpret_cast<int32_t**>(0x48f0458b48388b48);

void fun_3f2(int64_t rdi);

int64_t* g41a = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_432(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx);

int64_t* g439 = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_44a(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx);

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
    rax4 = g336;
    rdi5 = *rax4;
    fun_347(rdi5, 0x340);
    rax6 = g34e;
    rdi7 = *rax6;
    rsi8 = reinterpret_cast<int32_t*>(0x358);
    fun_366(rdi7);
    v9 = reinterpret_cast<int32_t>(fprintf);
    while (v9 < v3) {
        v10 = reinterpret_cast<int32_t>(fprintf);
        while (v10 < v3) {
            __asm__("cdq ");
            if (reinterpret_cast<int1_t>((v9 * v3 + v10) % 20 == fprintf)) {
                rax11 = g3ae;
                rdi12 = *rax11;
                rsi8 = reinterpret_cast<int32_t*>(0x3b8);
                fun_3bf(rdi12);
            }
            rax13 = g3c6;
            rdi14 = *rax13;
            rcx15 = v10;
            *rdi14 = *rsi8;
            rsi8 = reinterpret_cast<int32_t*>(0x3eb);
            fun_3f2(rdi14 + 1);
            ++v10;
        }
        ++v9;
    }
    rax16 = g41a;
    rdi17 = *rax16;
    fun_432(rdi17, 0x424, 0x42b, rcx15);
    rax18 = g439;
    rdi19 = *rax18;
    fun_44a(rdi19, 0x443, 0x42b, rcx15);
    return;
}

void fun_3bf(int64_t rdi) {
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
        rax2 = g3c6;
        rdi3 = *rax2;
        rcx4 = *reinterpret_cast<int32_t*>(rbp5 - 24);
        *rdi3 = *rsi6;
        rsi6 = reinterpret_cast<int32_t*>(0x3eb);
        fun_3f2(rdi3 + 1);
        *reinterpret_cast<int32_t*>(rbp7 - 24) = *reinterpret_cast<int32_t*>(rbp8 - 24) + 1;
        while (*reinterpret_cast<int32_t*>(rbp9 - 24) >= *reinterpret_cast<int32_t*>(rbp10 - 4)) {
            *reinterpret_cast<int32_t*>(rbp11 - 20) = *reinterpret_cast<int32_t*>(rbp12 - 20) + 1;
            if (*reinterpret_cast<int32_t*>(rbp13 - 20) >= *reinterpret_cast<int32_t*>(rbp14 - 4)) 
                goto addr_413_10;
            *reinterpret_cast<int32_t*>(rbp15 - 24) = reinterpret_cast<int32_t>(fprintf);
        }
        __asm__("cdq ");
        if (!reinterpret_cast<int1_t>((*reinterpret_cast<int32_t*>(rbp16 - 20) * *reinterpret_cast<int32_t*>(rbp17 - 4) + *reinterpret_cast<int32_t*>(rbp18 - 24)) % 20 == fprintf)) 
            continue;
        rax19 = g3ae;
        rdi20 = *rax19;
        rsi6 = reinterpret_cast<int32_t*>(0x3b8);
        fun_3bf(rdi20);
    }
    addr_413_10:
    rax21 = g41a;
    rdi22 = *rax21;
    fun_432(rdi22, 0x424, 0x42b, rcx4);
    rax23 = g439;
    rdi24 = *rax23;
    fun_44a(rdi24, 0x443, 0x42b, rcx4);
    goto v25;
}

void fun_3f2(int64_t rdi) {
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
                goto addr_413_6;
            *reinterpret_cast<int32_t*>(rbp10 - 24) = reinterpret_cast<int32_t>(fprintf);
        }
        __asm__("cdq ");
        if (reinterpret_cast<int1_t>((*reinterpret_cast<int32_t*>(rbp11 - 20) * *reinterpret_cast<int32_t*>(rbp12 - 4) + *reinterpret_cast<int32_t*>(rbp13 - 24)) % 20 == fprintf)) {
            rax14 = g3ae;
            rdi15 = *rax14;
            rsi16 = reinterpret_cast<int32_t*>(0x3b8);
            fun_3bf(rdi15);
        }
        rax17 = g3c6;
        rdi18 = *rax17;
        rcx19 = *reinterpret_cast<int32_t*>(rbp20 - 24);
        *rdi18 = *rsi16;
        rsi16 = reinterpret_cast<int32_t*>(0x3eb);
        fun_3f2(rdi18 + 1);
    }
    addr_413_6:
    rax21 = g41a;
    rdi22 = *rax21;
    fun_432(rdi22, 0x424, 0x42b, rcx19);
    rax23 = g439;
    rdi24 = *rax23;
    fun_44a(rdi24, 0x443, 0x42b, rcx19);
    goto v25;
}

void fun_86(int64_t rdi, int64_t rsi) {
    int64_t v3;

    goto v3;
}

void fun_347(int64_t rdi, int64_t rsi) {
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

    rax3 = g34e;
    rdi4 = *rax3;
    rsi5 = reinterpret_cast<int32_t*>(0x358);
    fun_366(rdi4);
    *reinterpret_cast<int32_t*>(rbp6 - 20) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp7 - 20) < *reinterpret_cast<int32_t*>(rbp8 - 4)) {
        *reinterpret_cast<int32_t*>(rbp9 - 24) = reinterpret_cast<int32_t>(fprintf);
        while (*reinterpret_cast<int32_t*>(rbp10 - 24) < *reinterpret_cast<int32_t*>(rbp11 - 4)) {
            __asm__("cdq ");
            if (reinterpret_cast<int1_t>((*reinterpret_cast<int32_t*>(rbp12 - 20) * *reinterpret_cast<int32_t*>(rbp13 - 4) + *reinterpret_cast<int32_t*>(rbp14 - 24)) % 20 == fprintf)) {
                rax15 = g3ae;
                rdi16 = *rax15;
                rsi5 = reinterpret_cast<int32_t*>(0x3b8);
                fun_3bf(rdi16);
            }
            rax17 = g3c6;
            rdi18 = *rax17;
            rcx19 = *reinterpret_cast<int32_t*>(rbp20 - 24);
            *rdi18 = *rsi5;
            rsi5 = reinterpret_cast<int32_t*>(0x3eb);
            fun_3f2(rdi18 + 1);
            *reinterpret_cast<int32_t*>(rbp21 - 24) = *reinterpret_cast<int32_t*>(rbp22 - 24) + 1;
        }
        *reinterpret_cast<int32_t*>(rbp23 - 20) = *reinterpret_cast<int32_t*>(rbp24 - 20) + 1;
    }
    rax25 = g41a;
    rdi26 = *rax25;
    fun_432(rdi26, 0x424, 0x42b, rcx19);
    rax27 = g439;
    rdi28 = *rax27;
    fun_44a(rdi28, 0x443, 0x42b, rcx19);
    goto v29;
}

void fun_366(int64_t rdi) {
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
                rax11 = g3ae;
                rdi12 = *rax11;
                rsi13 = reinterpret_cast<int32_t*>(0x3b8);
                fun_3bf(rdi12);
            }
            rax14 = g3c6;
            rdi15 = *rax14;
            rcx16 = *reinterpret_cast<int32_t*>(rbp17 - 24);
            *rdi15 = *rsi13;
            rsi13 = reinterpret_cast<int32_t*>(0x3eb);
            fun_3f2(rdi15 + 1);
            *reinterpret_cast<int32_t*>(rbp18 - 24) = *reinterpret_cast<int32_t*>(rbp19 - 24) + 1;
        }
        *reinterpret_cast<int32_t*>(rbp20 - 20) = *reinterpret_cast<int32_t*>(rbp21 - 20) + 1;
    }
    rax22 = g41a;
    rdi23 = *rax22;
    fun_432(rdi23, 0x424, 0x42b, rcx16);
    rax24 = g439;
    rdi25 = *rax24;
    fun_44a(rdi25, 0x443, 0x42b, rcx16);
    goto v26;
}

void fun_432(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t* rax5;
    int64_t rdi6;
    int64_t v7;

    rax5 = g439;
    rdi6 = *rax5;
    fun_44a(rdi6, 0x443, rdx, rcx);
    goto v7;
}

void fun_44a(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t v5;

    goto v5;
}

void fprintf() {
}

void fun_68() {
    int32_t eax1;
    int32_t edi2;
    int64_t rbp3;
    int64_t rsi4;
    int64_t rbp5;
    int64_t rdi6;
    int64_t rbp7;

    if (reinterpret_cast<int1_t>(eax1 == fprintf)) {
        edi2 = *reinterpret_cast<int32_t*>(rbp3 - 20);
        rsi4 = *reinterpret_cast<int64_t*>(rbp5 - 32);
        print_array(edi2, rsi4);
    }
    rdi6 = *reinterpret_cast<int64_t*>(rbp7 - 32);
    fun_86(rdi6, rsi4);
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

void init_array(int32_t edi, struct s1* rsi) {
    struct s0* rdi1;
    int32_t v3;
    int32_t v4;
    int32_t v5;
    struct s2* rdi6;
    struct s3* rsi7;

    *reinterpret_cast<int32_t*>(&rdi1) = edi;
    v3 = *reinterpret_cast<int32_t*>(&rdi1);
    v4 = reinterpret_cast<int32_t>(fprintf);
    while (v4 < v3) {
        v5 = reinterpret_cast<int32_t>(fprintf);
        while (v5 < v3) {
            __asm__("cvtsi2sd xmm0, dword [rbp-0x14]");
            __asm__("cvtsi2sd xmm1, eax");
            __asm__("mulsd xmm0, xmm1");
            rdi1->f0 = rsi->f0;
            rdi6 = reinterpret_cast<struct s2*>(&rdi1->f4);
            rsi7 = reinterpret_cast<struct s3*>(&rsi->f4);
            __asm__("addsd xmm0, xmm1");
            __asm__("cvtsi2sd xmm1, dword [rbp-0x4]");
            __asm__("divsd xmm0, xmm1");
            rdi6->f0 = rsi7->f0;
            rdi1 = reinterpret_cast<struct s0*>(&rdi6->f4);
            rsi = reinterpret_cast<struct s1*>(&rsi7->f4);
            ++v5;
        }
        ++v4;
    }
    return;
}

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

void kernel_seidel_2d(int32_t edi, int32_t esi, int64_t rdx) {
    struct s4* rdi1;
    struct s5* rsi2;
    int32_t v4;
    int32_t v5;
    int32_t v6;
    int32_t v7;
    int32_t v8;
    struct s6* rdi9;
    struct s7* rsi10;
    struct s8* rdi11;
    struct s9* rsi12;

    *reinterpret_cast<int32_t*>(&rdi1) = edi;
    *reinterpret_cast<int32_t*>(&rsi2) = esi;
    v4 = *reinterpret_cast<int32_t*>(&rdi1);
    v5 = *reinterpret_cast<int32_t*>(&rsi2);
    v6 = reinterpret_cast<int32_t>(fprintf);
    while (v6 <= v4 - 1) {
        v7 = 1;
        while (v7 <= v5 - 2) {
            v8 = 1;
            while (v8 <= v5 - 2) {
                rdi1->f0 = rsi2->f0;
                rdi9 = reinterpret_cast<struct s6*>(&rdi1->f4);
                rsi10 = reinterpret_cast<struct s7*>(&rsi2->f4);
                __asm__("addsd xmm0, [rax+rcx*8]");
                __asm__("addsd xmm0, [rax+rcx*8]");
                __asm__("addsd xmm0, [rax+rcx*8]");
                __asm__("addsd xmm0, [rax+rcx*8]");
                __asm__("addsd xmm0, [rax+rcx*8]");
                __asm__("addsd xmm0, [rax+rcx*8]");
                __asm__("addsd xmm0, [rax+rcx*8]");
                __asm__("addsd xmm0, [rax+rcx*8]");
                rdi9->f0 = rsi10->f0;
                rdi11 = reinterpret_cast<struct s8*>(&rdi9->f4);
                rsi12 = reinterpret_cast<struct s9*>(&rsi10->f4);
                __asm__("divsd xmm0, xmm1");
                rdi11->f0 = rsi12->f0;
                rdi1 = reinterpret_cast<struct s4*>(&rdi11->f4);
                rsi2 = reinterpret_cast<struct s5*>(&rsi12->f4);
                ++v8;
            }
            ++v7;
        }
        ++v6;
    }
    return;
}

