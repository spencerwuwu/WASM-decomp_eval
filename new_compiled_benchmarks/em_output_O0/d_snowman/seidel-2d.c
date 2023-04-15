
void fprintf(int32_t edi, int32_t esi, int64_t rdx);

void print_array(int32_t edi, int64_t rsi, int64_t rdx);

void fun_276(int64_t rdi, int64_t rsi, int64_t rdx);

int32_t fun_258(int64_t rdi, int64_t rsi, int64_t rdx) {
    int32_t eax4;
    int32_t edi5;
    int64_t rbp6;
    int64_t rbp7;
    int64_t rdi8;
    int64_t rbp9;
    int64_t v10;

    if (reinterpret_cast<int1_t>(eax4 == fprintf)) {
        edi5 = *reinterpret_cast<int32_t*>(rbp6 - 20);
        rsi = *reinterpret_cast<int64_t*>(rbp7 - 32);
        print_array(edi5, rsi, rdx);
    }
    rdi8 = *reinterpret_cast<int64_t*>(rbp9 - 32);
    fun_276(rdi8, rsi, rdx);
    goto v10;
}

int64_t* g336 = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_347(int64_t rdi, int64_t rsi);

int64_t* g34e = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_366(int64_t rdi);

int64_t* g3ae = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_3bf(int64_t rdi);

int32_t** g3c6 = reinterpret_cast<int32_t**>(0x48f0458b48388b48);

void fun_3f2(int64_t rdi);

int64_t* g41a = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_432(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx);

int64_t* g439 = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_44a(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx);

void print_array(int32_t edi, int64_t rsi, int64_t rdx) {
    int32_t v4;
    int64_t* rax5;
    int64_t rdi6;
    int64_t* rax7;
    int64_t rdi8;
    int32_t* rsi9;
    int32_t v10;
    int32_t v11;
    int64_t* rax12;
    int64_t rdi13;
    int32_t** rax14;
    int32_t* rdi15;
    int64_t rcx16;
    int64_t* rax17;
    int64_t rdi18;
    int64_t* rax19;
    int64_t rdi20;

    v4 = edi;
    rax5 = g336;
    rdi6 = *rax5;
    fun_347(rdi6, 0x340);
    rax7 = g34e;
    rdi8 = *rax7;
    rsi9 = reinterpret_cast<int32_t*>(0x358);
    fun_366(rdi8);
    v10 = reinterpret_cast<int32_t>(fprintf);
    while (v10 < v4) {
        v11 = reinterpret_cast<int32_t>(fprintf);
        while (v11 < v4) {
            __asm__("cdq ");
            if (reinterpret_cast<int1_t>((v10 * v4 + v11) % 20 == fprintf)) {
                rax12 = g3ae;
                rdi13 = *rax12;
                rsi9 = reinterpret_cast<int32_t*>(0x3b8);
                fun_3bf(rdi13);
            }
            rax14 = g3c6;
            rdi15 = *rax14;
            rcx16 = v11;
            *rdi15 = *rsi9;
            rsi9 = reinterpret_cast<int32_t*>(0x3eb);
            fun_3f2(rdi15 + 1);
            ++v11;
        }
        ++v10;
    }
    rax17 = g41a;
    rdi18 = *rax17;
    fun_432(rdi18, 0x424, 0x42b, rcx16);
    rax19 = g439;
    rdi20 = *rax19;
    fun_44a(rdi20, 0x443, 0x42b, rcx16);
    return;
}

void fun_276(int64_t rdi, int64_t rsi, int64_t rdx) {
    int64_t v4;

    goto v4;
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

struct s0 {
    int32_t f0;
    int32_t f4;
};

void init_array(int32_t edi, struct s0* rsi);

void fun_23b(int64_t rdi, int64_t rsi, int64_t rdx);

void fun_21c(int64_t rdi, int64_t rsi) {
    int64_t rbp3;
    int64_t rax4;
    int32_t edi5;
    int64_t rbp6;
    struct s0* rsi7;
    int64_t rbp8;
    int64_t rdi9;
    int64_t rbp10;
    int64_t rsi11;
    int64_t rbp12;
    int64_t rdx13;
    int64_t rbp14;
    int64_t rbp15;
    int64_t rdi16;
    int64_t rbp17;
    int64_t rdi18;
    int64_t rbp19;
    int32_t eax20;
    int64_t v21;
    int32_t edi22;
    int64_t rbp23;
    int64_t rbp24;

    *reinterpret_cast<int64_t*>(rbp3 - 32) = rax4;
    edi5 = *reinterpret_cast<int32_t*>(rbp6 - 20);
    rsi7 = *reinterpret_cast<struct s0**>(rbp8 - 32);
    init_array(edi5, rsi7);
    *reinterpret_cast<int32_t*>(&rdi9) = *reinterpret_cast<int32_t*>(rbp10 - 24);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi9) + 4) = reinterpret_cast<int32_t>(fprintf);
    *reinterpret_cast<int32_t*>(&rsi11) = *reinterpret_cast<int32_t*>(rbp12 - 20);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi11) + 4) = reinterpret_cast<int32_t>(fprintf);
    rdx13 = *reinterpret_cast<int64_t*>(rbp14 - 32);
    fun_23b(rdi9, rsi11, rdx13);
    if (*reinterpret_cast<int32_t*>(rbp15 - 4) <= 42) {
        addr_26d_3:
        rdi16 = *reinterpret_cast<int64_t*>(rbp17 - 32);
        fun_276(rdi16, rsi11, rdx13);
    } else {
        rdi18 = **reinterpret_cast<int64_t**>(rbp19 - 16);
        rsi11 = 0x253;
        eax20 = fun_258(rdi18, 0x253, rdx13);
        if (!reinterpret_cast<int1_t>(eax20 == fprintf)) 
            goto addr_26d_3; else 
            goto addr_261_6;
    }
    goto v21;
    addr_261_6:
    edi22 = *reinterpret_cast<int32_t*>(rbp23 - 20);
    rsi11 = *reinterpret_cast<int64_t*>(rbp24 - 32);
    print_array(edi22, rsi11, rdx13);
    goto addr_26d_3;
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

void init_array(int32_t edi, struct s0* rsi) {
    struct s1* rdi1;
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
            rdi1 = reinterpret_cast<struct s1*>(&rdi6->f4);
            rsi = reinterpret_cast<struct s0*>(&rsi7->f4);
            ++v5;
        }
        ++v4;
    }
    return;
}

void fun_23b(int64_t rdi, int64_t rsi, int64_t rdx) {
    int64_t rbp4;
    int64_t rdi5;
    int64_t rbp6;
    int64_t rdi7;
    int64_t rbp8;
    int32_t eax9;
    int64_t v10;
    int32_t edi11;
    int64_t rbp12;
    int64_t rbp13;

    if (*reinterpret_cast<int32_t*>(rbp4 - 4) <= 42) {
        addr_26d_2:
        rdi5 = *reinterpret_cast<int64_t*>(rbp6 - 32);
        fun_276(rdi5, rsi, rdx);
    } else {
        rdi7 = **reinterpret_cast<int64_t**>(rbp8 - 16);
        rsi = 0x253;
        eax9 = fun_258(rdi7, 0x253, rdx);
        if (!reinterpret_cast<int1_t>(eax9 == fprintf)) 
            goto addr_26d_2; else 
            goto addr_261_5;
    }
    goto v10;
    addr_261_5:
    edi11 = *reinterpret_cast<int32_t*>(rbp12 - 20);
    rsi = *reinterpret_cast<int64_t*>(rbp13 - 32);
    print_array(edi11, rsi, rdx);
    goto addr_26d_2;
}

void fprintf(int32_t edi, int32_t esi, int64_t rdx) {
}

void fun_1d(int32_t edi) {
    int32_t* rcx2;
    int32_t* rcx3;

    *rcx2 = *rcx3 + edi;
}

void fun_2e();

/* .L.str.3 */
void L_str_3() {
    fun_2e();
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

void fun_68(struct s4* rdi, struct s5* rsi) {
    signed char* rax3;
    signed char* rax4;
    signed char al5;
    struct s6* rdi6;
    struct s7* rsi7;
    int64_t rbp8;
    int64_t rbp9;

    *rax3 = reinterpret_cast<signed char>(*rax4 + al5);
    rdi->f0 = rsi->f0;
    rdi6 = reinterpret_cast<struct s6*>(&rdi->f4);
    rsi7 = reinterpret_cast<struct s7*>(&rsi->f4);
    __asm__("addsd xmm0, [rax+rcx*8]");
    __asm__("addsd xmm0, [rax+rcx*8]");
    __asm__("addsd xmm0, [rax+rcx*8]");
    __asm__("addsd xmm0, [rax+rcx*8]");
    __asm__("addsd xmm0, [rax+rcx*8]");
    __asm__("addsd xmm0, [rax+rcx*8]");
    __asm__("addsd xmm0, [rax+rcx*8]");
    __asm__("addsd xmm0, [rax+rcx*8]");
    rdi6->f0 = rsi7->f0;
    __asm__("divsd xmm0, xmm1");
    rdi6->f4 = rsi7->f4;
    *reinterpret_cast<int32_t*>(rbp8 - 28) = *reinterpret_cast<int32_t*>(rbp9 - 28) + 1;
}

void fun_1ba() {
    int64_t rbp1;
    int64_t rbp2;

    *reinterpret_cast<int32_t*>(rbp1 - 24) = *reinterpret_cast<int32_t*>(rbp2 - 24) + 1;
    goto 45;
}

void fun_1cd() {
    int64_t rbp1;
    int64_t rbp2;

    *reinterpret_cast<int32_t*>(rbp1 - 20) = *reinterpret_cast<int32_t*>(rbp2 - 20) + 1;
    goto 21;
}

void fun_1e0() {
    int64_t v1;

    goto v1;
}

void submain(int32_t edi, int64_t rsi) {
    fun_21c(0x3d0900, 8);
}

