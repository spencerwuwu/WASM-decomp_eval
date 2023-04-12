
struct s0 {
    int32_t f0;
    int32_t f4;
};

struct s1 {
    int32_t f0;
    int32_t f4;
};

void fprintf();

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

int32_t fprintf = 0xe5894855;

void kernel_trisolv(int32_t edi, struct s1* rsi, int64_t rdx, int64_t rcx) {
    struct s0* rdi1;
    int32_t v5;
    int32_t v6;
    struct s2* rdi7;
    struct s3* rsi8;
    struct s4* rdi9;
    struct s5* rsi10;
    int32_t v11;
    struct s6* rdi12;
    struct s7* rsi13;
    struct s0* rdi14;
    struct s2* rdi15;
    struct s6* rdi16;
    struct s7* rsi17;

    *reinterpret_cast<int32_t*>(&rdi1) = edi;
    v5 = *reinterpret_cast<int32_t*>(&rdi1);
    v6 = reinterpret_cast<int32_t>(fprintf);
    while (v6 < v5) {
        rdi1->f0 = rsi->f0;
        rdi7 = reinterpret_cast<struct s2*>(&rdi1->f4);
        rsi8 = reinterpret_cast<struct s3*>(&rsi->f4);
        rdi7->f0 = rsi8->f0;
        rdi9 = reinterpret_cast<struct s4*>(&rdi7->f4);
        rsi10 = reinterpret_cast<struct s5*>(&rsi8->f4);
        v11 = reinterpret_cast<int32_t>(fprintf);
        while (v11 < v6) {
            rdi9->f0 = rsi10->f0;
            rdi12 = reinterpret_cast<struct s6*>(&rdi9->f4);
            rsi13 = reinterpret_cast<struct s7*>(&rsi10->f4);
            rdi12->f0 = rsi13->f0;
            rdi14 = reinterpret_cast<struct s0*>(&rdi12->f4);
            rdi14->f0 = rsi13->f4;
            rdi15 = reinterpret_cast<struct s2*>(&rdi14->f4);
            __asm__("movd rdx, xmm0");
            __asm__("movd xmm0, rdx");
            __asm__("mulsd xmm0, xmm2");
            __asm__("addsd xmm0, xmm1");
            rdi15->f0 = fprintf;
            rdi9 = reinterpret_cast<struct s4*>(&rdi15->f4);
            rsi10 = reinterpret_cast<struct s5*>(0x8000000000000004);
            ++v11;
        }
        rdi9->f0 = rsi10->f0;
        rdi16 = reinterpret_cast<struct s6*>(&rdi9->f4);
        rsi17 = reinterpret_cast<struct s7*>(&rsi10->f4);
        __asm__("divsd xmm0, [rax+rcx*8]");
        rdi16->f0 = rsi17->f0;
        rdi1 = reinterpret_cast<struct s0*>(&rdi16->f4);
        rsi = reinterpret_cast<struct s1*>(&rsi17->f4);
        ++v6;
    }
    return;
}

void print_array(int32_t edi, int64_t rsi);

void fun_b2(int64_t rdi, int64_t rsi);

void fun_bb(int64_t rdi, int64_t rsi);

void fun_c4(int64_t rdi, int64_t rsi);

void fun_94(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int32_t eax5;
    int32_t edi6;
    int64_t rbp7;
    int64_t rbp8;
    int64_t rdi9;
    int64_t rbp10;
    int64_t rdi11;
    int64_t rbp12;
    int64_t rdi13;
    int64_t rbp14;
    int64_t v15;

    if (reinterpret_cast<int1_t>(eax5 == fprintf)) {
        edi6 = *reinterpret_cast<int32_t*>(rbp7 - 20);
        rsi = *reinterpret_cast<int64_t*>(rbp8 - 40);
        print_array(edi6, rsi);
    }
    rdi9 = *reinterpret_cast<int64_t*>(rbp10 - 32);
    fun_b2(rdi9, rsi);
    rdi11 = *reinterpret_cast<int64_t*>(rbp12 - 40);
    fun_bb(rdi11, rsi);
    rdi13 = *reinterpret_cast<int64_t*>(rbp14 - 48);
    fun_c4(rdi13, rsi);
    goto v15;
}

int64_t* g2b6 = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_2c7(int64_t rdi, int64_t rsi);

int64_t* g2ce = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_2e6(int64_t rdi);

int32_t** g300 = reinterpret_cast<int32_t**>(0x48f0458b48388b48);

void fun_31e(int64_t rdi, ...);

int64_t* g339 = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_34a(int64_t rdi);

int64_t* g364 = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_37c(int64_t rdi, int64_t rsi, int64_t rdx);

int64_t* g383 = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_394(int64_t rdi, int64_t rsi, int64_t rdx);

void print_array(int32_t edi, int64_t rsi) {
    int32_t v3;
    int64_t* rax4;
    int64_t rdi5;
    int64_t* rax6;
    int64_t rdi7;
    int32_t* rsi8;
    int32_t v9;
    int32_t** rax10;
    int32_t* rdi11;
    int64_t rdi12;
    int64_t* rax13;
    int64_t rdi14;
    int64_t* rax15;
    int64_t rdi16;
    int64_t* rax17;
    int64_t rdi18;

    v3 = edi;
    rax4 = g2b6;
    rdi5 = *rax4;
    fun_2c7(rdi5, 0x2c0);
    rax6 = g2ce;
    rdi7 = *rax6;
    rsi8 = reinterpret_cast<int32_t*>(0x2d8);
    fun_2e6(rdi7);
    v9 = reinterpret_cast<int32_t>(fprintf);
    while (v9 < v3) {
        rax10 = g300;
        rdi11 = *rax10;
        *rdi11 = *rsi8;
        rdi12 = reinterpret_cast<int64_t>(rdi11 + 1);
        rsi8 = reinterpret_cast<int32_t*>(0x317);
        fun_31e(rdi12, rdi12);
        __asm__("cdq ");
        if (reinterpret_cast<int1_t>(v9 % 20 == fprintf)) {
            rax13 = g339;
            rdi14 = *rax13;
            rsi8 = reinterpret_cast<int32_t*>(0x343);
            fun_34a(rdi14);
        }
        ++v9;
    }
    rax15 = g364;
    rdi16 = *rax15;
    fun_37c(rdi16, 0x36e, 0x375);
    rax17 = g383;
    rdi18 = *rax17;
    fun_394(rdi18, 0x38d, 0x375);
    return;
}

void fun_31e(int64_t rdi, ...) {
    int64_t rbp2;
    int64_t* rax3;
    int64_t rdi4;
    int32_t* rsi5;
    int64_t rbp6;
    int64_t rbp7;
    int64_t rbp8;
    int64_t rbp9;
    int32_t** rax10;
    int32_t* rdi11;
    int64_t* rax12;
    int64_t rdi13;
    int64_t* rax14;
    int64_t rdi15;
    int64_t v16;

    while (1) {
        __asm__("cdq ");
        if (reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp2 - 20) % 20 == fprintf)) {
            rax3 = g339;
            rdi4 = *rax3;
            rsi5 = reinterpret_cast<int32_t*>(0x343);
            fun_34a(rdi4);
        }
        *reinterpret_cast<int32_t*>(rbp6 - 20) = *reinterpret_cast<int32_t*>(rbp7 - 20) + 1;
        if (*reinterpret_cast<int32_t*>(rbp8 - 20) >= *reinterpret_cast<int32_t*>(rbp9 - 4)) 
            break;
        rax10 = g300;
        rdi11 = *rax10;
        *rdi11 = *rsi5;
        rsi5 = reinterpret_cast<int32_t*>(0x317);
        fun_31e(rdi11 + 1);
    }
    rax12 = g364;
    rdi13 = *rax12;
    fun_37c(rdi13, 0x36e, 0x375);
    rax14 = g383;
    rdi15 = *rax14;
    fun_394(rdi15, 0x38d, 0x375);
    goto v16;
}

void fun_34a(int64_t rdi) {
    int64_t rbp2;
    int64_t rbp3;
    int64_t rbp4;
    int64_t rbp5;
    int32_t** rax6;
    int32_t* rdi7;
    int32_t* rsi8;
    int64_t rbp9;
    int64_t* rax10;
    int64_t rdi11;
    int64_t* rax12;
    int64_t rdi13;
    int64_t* rax14;
    int64_t rdi15;
    int64_t v16;

    while (1) {
        *reinterpret_cast<int32_t*>(rbp2 - 20) = *reinterpret_cast<int32_t*>(rbp3 - 20) + 1;
        if (*reinterpret_cast<int32_t*>(rbp4 - 20) >= *reinterpret_cast<int32_t*>(rbp5 - 4)) 
            break;
        rax6 = g300;
        rdi7 = *rax6;
        *rdi7 = *rsi8;
        rsi8 = reinterpret_cast<int32_t*>(0x317);
        fun_31e(rdi7 + 1);
        __asm__("cdq ");
        if (!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp9 - 20) % 20 == fprintf)) 
            continue;
        rax10 = g339;
        rdi11 = *rax10;
        rsi8 = reinterpret_cast<int32_t*>(0x343);
        fun_34a(rdi11);
    }
    rax12 = g364;
    rdi13 = *rax12;
    fun_37c(rdi13, 0x36e, 0x375);
    rax14 = g383;
    rdi15 = *rax14;
    fun_394(rdi15, 0x38d, 0x375);
    goto v16;
}

void fun_b2(int64_t rdi, int64_t rsi) {
    int64_t rdi3;
    int64_t rbp4;
    int64_t rdi5;
    int64_t rbp6;
    int64_t v7;

    rdi3 = *reinterpret_cast<int64_t*>(rbp4 - 40);
    fun_bb(rdi3, rsi);
    rdi5 = *reinterpret_cast<int64_t*>(rbp6 - 48);
    fun_c4(rdi5, rsi);
    goto v7;
}

void fun_2c7(int64_t rdi, int64_t rsi) {
    int64_t* rax3;
    int64_t rdi4;
    int32_t* rsi5;
    int64_t rbp6;
    int64_t rbp7;
    int64_t rbp8;
    int32_t** rax9;
    int32_t* rdi10;
    int64_t rdi11;
    int64_t rbp12;
    int64_t* rax13;
    int64_t rdi14;
    int64_t rbp15;
    int64_t rbp16;
    int64_t* rax17;
    int64_t rdi18;
    int64_t* rax19;
    int64_t rdi20;
    int64_t v21;

    rax3 = g2ce;
    rdi4 = *rax3;
    rsi5 = reinterpret_cast<int32_t*>(0x2d8);
    fun_2e6(rdi4);
    *reinterpret_cast<int32_t*>(rbp6 - 20) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp7 - 20) < *reinterpret_cast<int32_t*>(rbp8 - 4)) {
        rax9 = g300;
        rdi10 = *rax9;
        *rdi10 = *rsi5;
        rdi11 = reinterpret_cast<int64_t>(rdi10 + 1);
        rsi5 = reinterpret_cast<int32_t*>(0x317);
        fun_31e(rdi11, rdi11);
        __asm__("cdq ");
        if (reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp12 - 20) % 20 == fprintf)) {
            rax13 = g339;
            rdi14 = *rax13;
            rsi5 = reinterpret_cast<int32_t*>(0x343);
            fun_34a(rdi14);
        }
        *reinterpret_cast<int32_t*>(rbp15 - 20) = *reinterpret_cast<int32_t*>(rbp16 - 20) + 1;
    }
    rax17 = g364;
    rdi18 = *rax17;
    fun_37c(rdi18, 0x36e, 0x375);
    rax19 = g383;
    rdi20 = *rax19;
    fun_394(rdi20, 0x38d, 0x375);
    goto v21;
}

void fun_bb(int64_t rdi, int64_t rsi) {
    int64_t rdi3;
    int64_t rbp4;
    int64_t v5;

    rdi3 = *reinterpret_cast<int64_t*>(rbp4 - 48);
    fun_c4(rdi3, rsi);
    goto v5;
}

void fun_2e6(int64_t rdi) {
    int64_t rbp2;
    int64_t rbp3;
    int64_t rbp4;
    int32_t** rax5;
    int32_t* rdi6;
    int32_t* rsi7;
    int64_t rbp8;
    int64_t* rax9;
    int64_t rdi10;
    int64_t rbp11;
    int64_t rbp12;
    int64_t* rax13;
    int64_t rdi14;
    int64_t* rax15;
    int64_t rdi16;
    int64_t v17;

    *reinterpret_cast<int32_t*>(rbp2 - 20) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp3 - 20) < *reinterpret_cast<int32_t*>(rbp4 - 4)) {
        rax5 = g300;
        rdi6 = *rax5;
        *rdi6 = *rsi7;
        rsi7 = reinterpret_cast<int32_t*>(0x317);
        fun_31e(rdi6 + 1);
        __asm__("cdq ");
        if (reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp8 - 20) % 20 == fprintf)) {
            rax9 = g339;
            rdi10 = *rax9;
            rsi7 = reinterpret_cast<int32_t*>(0x343);
            fun_34a(rdi10);
        }
        *reinterpret_cast<int32_t*>(rbp11 - 20) = *reinterpret_cast<int32_t*>(rbp12 - 20) + 1;
    }
    rax13 = g364;
    rdi14 = *rax13;
    fun_37c(rdi14, 0x36e, 0x375);
    rax15 = g383;
    rdi16 = *rax15;
    fun_394(rdi16, 0x38d, 0x375);
    goto v17;
}

void fun_c4(int64_t rdi, int64_t rsi) {
    int64_t v3;

    goto v3;
}

void fun_37c(int64_t rdi, int64_t rsi, int64_t rdx) {
    int64_t* rax4;
    int64_t rdi5;
    int64_t v6;

    rax4 = g383;
    rdi5 = *rax4;
    fun_394(rdi5, 0x38d, rdx);
    goto v6;
}

void fun_394(int64_t rdi, int64_t rsi, int64_t rdx) {
    int64_t v4;

    goto v4;
}

void fprintf() {
}

void fun_68(int32_t edi, struct s1* rsi) {
    int1_t zf3;
    int64_t rdx4;
    int64_t rbp5;
    int64_t rcx6;
    int64_t rbp7;
    int64_t rbp8;
    int64_t rdi9;
    int64_t rbp10;

    if (zf3) {
        rdx4 = *reinterpret_cast<int64_t*>(rbp5 - 40);
        rcx6 = *reinterpret_cast<int64_t*>(rbp7 - 48);
        kernel_trisolv(edi, rsi, rdx4, rcx6);
        if (*reinterpret_cast<int32_t*>(rbp8 - 4) <= 42) 
            goto 0xa9;
        rdi9 = **reinterpret_cast<int64_t**>(rbp10 - 16);
        fun_94(rdi9, 0x8f, rdx4, rcx6);
    }
}

void init_array(int32_t edi, int32_t* rsi, int64_t rdx, int64_t rcx) {
    int32_t* rdi1;
    int32_t v5;
    int32_t v6;
    int32_t* rdi7;
    int32_t* rsi8;
    int32_t* rdi9;
    int32_t* rsi10;
    int32_t v11;
    int32_t* rdi12;
    int32_t* rsi13;

    *reinterpret_cast<int32_t*>(&rdi1) = edi;
    v5 = *reinterpret_cast<int32_t*>(&rdi1);
    v6 = reinterpret_cast<int32_t>(fprintf);
    while (v6 < v5) {
        *rdi1 = *rsi;
        rdi7 = rdi1 + 1;
        rsi8 = rsi + 1;
        *rdi7 = *rsi8;
        rdi9 = rdi7 + 1;
        rsi10 = rsi8 + 1;
        __asm__("cvtsi2sd xmm0, dword [rbp-0x24]");
        *rdi9 = *rsi10;
        rdi1 = rdi9 + 1;
        rsi = rsi10 + 1;
        v11 = reinterpret_cast<int32_t>(fprintf);
        while (v11 <= v6) {
            __asm__("cvtsi2sd xmm0, eax");
            *rdi1 = *rsi;
            rdi12 = rdi1 + 1;
            rsi13 = rsi + 1;
            __asm__("mulsd xmm0, xmm1");
            __asm__("cvtsi2sd xmm1, dword [rbp-0x4]");
            __asm__("divsd xmm0, xmm1");
            *rdi12 = *rsi13;
            rdi1 = rdi12 + 1;
            rsi = rsi13 + 1;
            ++v11;
        }
        ++v6;
    }
    return;
}

