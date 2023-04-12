
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

int64_t* g276 = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_287(int64_t rdi, int64_t rsi);

int64_t* g28e = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_2a6(int64_t rdi);

int64_t* g2d4 = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_2e5(int64_t rdi);

int32_t** g2ec = reinterpret_cast<int32_t**>(0x48f0458b48388b48);

void fun_30a(int64_t rdi);

int64_t* g31f = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_337(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx);

int64_t* g33e = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_34f(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx);

void print_array(int32_t edi, int64_t rsi) {
    int32_t v3;
    int64_t* rax4;
    int64_t rdi5;
    int64_t* rax6;
    int64_t rdi7;
    int32_t* rsi8;
    int32_t v9;
    int64_t* rax10;
    int64_t rdi11;
    int32_t** rax12;
    int32_t* rdi13;
    int64_t rcx14;
    int64_t* rax15;
    int64_t rdi16;
    int64_t* rax17;
    int64_t rdi18;

    v3 = edi;
    rax4 = g276;
    rdi5 = *rax4;
    fun_287(rdi5, 0x280);
    rax6 = g28e;
    rdi7 = *rax6;
    rsi8 = reinterpret_cast<int32_t*>(0x298);
    fun_2a6(rdi7);
    v9 = reinterpret_cast<int32_t>(fprintf);
    while (v9 < v3) {
        __asm__("cdq ");
        if (reinterpret_cast<int1_t>(v9 % 20 == fprintf)) {
            rax10 = g2d4;
            rdi11 = *rax10;
            rsi8 = reinterpret_cast<int32_t*>(0x2de);
            fun_2e5(rdi11);
        }
        rax12 = g2ec;
        rdi13 = *rax12;
        rcx14 = v9;
        *rdi13 = *rsi8;
        rsi8 = reinterpret_cast<int32_t*>(0x303);
        fun_30a(rdi13 + 1);
        ++v9;
    }
    rax15 = g31f;
    rdi16 = *rax15;
    fun_337(rdi16, 0x329, 0x330, rcx14);
    rax17 = g33e;
    rdi18 = *rax17;
    fun_34f(rdi18, 0x348, 0x330, rcx14);
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

void fun_2e5(int64_t rdi) {
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
    int64_t* rax12;
    int64_t rdi13;
    int64_t* rax14;
    int64_t rdi15;
    int64_t* rax16;
    int64_t rdi17;
    int64_t v18;

    while (1) {
        rax2 = g2ec;
        rdi3 = *rax2;
        rcx4 = *reinterpret_cast<int32_t*>(rbp5 - 20);
        *rdi3 = *rsi6;
        rsi6 = reinterpret_cast<int32_t*>(0x303);
        fun_30a(rdi3 + 1);
        *reinterpret_cast<int32_t*>(rbp7 - 20) = *reinterpret_cast<int32_t*>(rbp8 - 20) + 1;
        if (*reinterpret_cast<int32_t*>(rbp9 - 20) >= *reinterpret_cast<int32_t*>(rbp10 - 4)) 
            break;
        __asm__("cdq ");
        if (!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp11 - 20) % 20 == fprintf)) 
            continue;
        rax12 = g2d4;
        rdi13 = *rax12;
        rsi6 = reinterpret_cast<int32_t*>(0x2de);
        fun_2e5(rdi13);
    }
    rax14 = g31f;
    rdi15 = *rax14;
    fun_337(rdi15, 0x329, 0x330, rcx4);
    rax16 = g33e;
    rdi17 = *rax16;
    fun_34f(rdi17, 0x348, 0x330, rcx4);
    goto v18;
}

void fun_30a(int64_t rdi) {
    int64_t rbp2;
    int64_t rbp3;
    int64_t rbp4;
    int64_t rbp5;
    int64_t rbp6;
    int64_t* rax7;
    int64_t rdi8;
    int32_t* rsi9;
    int32_t** rax10;
    int32_t* rdi11;
    int64_t rcx12;
    int64_t rbp13;
    int64_t* rax14;
    int64_t rdi15;
    int64_t* rax16;
    int64_t rdi17;
    int64_t v18;

    while (1) {
        *reinterpret_cast<int32_t*>(rbp2 - 20) = *reinterpret_cast<int32_t*>(rbp3 - 20) + 1;
        if (*reinterpret_cast<int32_t*>(rbp4 - 20) >= *reinterpret_cast<int32_t*>(rbp5 - 4)) 
            break;
        __asm__("cdq ");
        if (reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp6 - 20) % 20 == fprintf)) {
            rax7 = g2d4;
            rdi8 = *rax7;
            rsi9 = reinterpret_cast<int32_t*>(0x2de);
            fun_2e5(rdi8);
        }
        rax10 = g2ec;
        rdi11 = *rax10;
        rcx12 = *reinterpret_cast<int32_t*>(rbp13 - 20);
        *rdi11 = *rsi9;
        rsi9 = reinterpret_cast<int32_t*>(0x303);
        fun_30a(rdi11 + 1);
    }
    rax14 = g31f;
    rdi15 = *rax14;
    fun_337(rdi15, 0x329, 0x330, rcx12);
    rax16 = g33e;
    rdi17 = *rax16;
    fun_34f(rdi17, 0x348, 0x330, rcx12);
    goto v18;
}

void fun_287(int64_t rdi, int64_t rsi) {
    int64_t* rax3;
    int64_t rdi4;
    int32_t* rsi5;
    int64_t rbp6;
    int64_t rbp7;
    int64_t rbp8;
    int64_t rbp9;
    int64_t* rax10;
    int64_t rdi11;
    int32_t** rax12;
    int32_t* rdi13;
    int64_t rcx14;
    int64_t rbp15;
    int64_t rbp16;
    int64_t rbp17;
    int64_t* rax18;
    int64_t rdi19;
    int64_t* rax20;
    int64_t rdi21;
    int64_t v22;

    rax3 = g28e;
    rdi4 = *rax3;
    rsi5 = reinterpret_cast<int32_t*>(0x298);
    fun_2a6(rdi4);
    *reinterpret_cast<int32_t*>(rbp6 - 20) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp7 - 20) < *reinterpret_cast<int32_t*>(rbp8 - 4)) {
        __asm__("cdq ");
        if (reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp9 - 20) % 20 == fprintf)) {
            rax10 = g2d4;
            rdi11 = *rax10;
            rsi5 = reinterpret_cast<int32_t*>(0x2de);
            fun_2e5(rdi11);
        }
        rax12 = g2ec;
        rdi13 = *rax12;
        rcx14 = *reinterpret_cast<int32_t*>(rbp15 - 20);
        *rdi13 = *rsi5;
        rsi5 = reinterpret_cast<int32_t*>(0x303);
        fun_30a(rdi13 + 1);
        *reinterpret_cast<int32_t*>(rbp16 - 20) = *reinterpret_cast<int32_t*>(rbp17 - 20) + 1;
    }
    rax18 = g31f;
    rdi19 = *rax18;
    fun_337(rdi19, 0x329, 0x330, rcx14);
    rax20 = g33e;
    rdi21 = *rax20;
    fun_34f(rdi21, 0x348, 0x330, rcx14);
    goto v22;
}

void fun_aa(int64_t rdi, int64_t rsi) {
    int64_t v3;

    goto v3;
}

void fun_2a6(int64_t rdi) {
    int64_t rbp2;
    int64_t rbp3;
    int64_t rbp4;
    int64_t rbp5;
    int64_t* rax6;
    int64_t rdi7;
    int32_t* rsi8;
    int32_t** rax9;
    int32_t* rdi10;
    int64_t rcx11;
    int64_t rbp12;
    int64_t rbp13;
    int64_t rbp14;
    int64_t* rax15;
    int64_t rdi16;
    int64_t* rax17;
    int64_t rdi18;
    int64_t v19;

    *reinterpret_cast<int32_t*>(rbp2 - 20) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp3 - 20) < *reinterpret_cast<int32_t*>(rbp4 - 4)) {
        __asm__("cdq ");
        if (reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp5 - 20) % 20 == fprintf)) {
            rax6 = g2d4;
            rdi7 = *rax6;
            rsi8 = reinterpret_cast<int32_t*>(0x2de);
            fun_2e5(rdi7);
        }
        rax9 = g2ec;
        rdi10 = *rax9;
        rcx11 = *reinterpret_cast<int32_t*>(rbp12 - 20);
        *rdi10 = *rsi8;
        rsi8 = reinterpret_cast<int32_t*>(0x303);
        fun_30a(rdi10 + 1);
        *reinterpret_cast<int32_t*>(rbp13 - 20) = *reinterpret_cast<int32_t*>(rbp14 - 20) + 1;
    }
    rax15 = g31f;
    rdi16 = *rax15;
    fun_337(rdi16, 0x329, 0x330, rcx11);
    rax17 = g33e;
    rdi18 = *rax17;
    fun_34f(rdi18, 0x348, 0x330, rcx11);
    goto v19;
}

void fun_337(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t* rax5;
    int64_t rdi6;
    int64_t v7;

    rax5 = g33e;
    rdi6 = *rax5;
    fun_34f(rdi6, 0x348, rdx, rcx);
    goto v7;
}

void fun_34f(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
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

void kernel_jacobi_1d(int32_t edi, int32_t esi, int64_t rdx, int64_t rcx) {
    struct s0* rdi1;
    struct s1* rsi2;
    int32_t v5;
    int32_t v6;
    int32_t v7;
    int32_t v8;
    struct s2* rdi9;
    struct s3* rsi10;
    struct s4* rdi11;
    struct s5* rsi12;
    int32_t v13;
    struct s2* rdi14;
    struct s3* rsi15;
    struct s4* rdi16;
    struct s5* rsi17;

    *reinterpret_cast<int32_t*>(&rdi1) = edi;
    *reinterpret_cast<int32_t*>(&rsi2) = esi;
    v5 = *reinterpret_cast<int32_t*>(&rdi1);
    v6 = *reinterpret_cast<int32_t*>(&rsi2);
    v7 = reinterpret_cast<int32_t>(fprintf);
    while (v7 < v5) {
        v8 = 1;
        while (v8 < v6 - 1) {
            rdi1->f0 = rsi2->f0;
            rdi9 = reinterpret_cast<struct s2*>(&rdi1->f4);
            rsi10 = reinterpret_cast<struct s3*>(&rsi2->f4);
            __asm__("addsd xmm1, [rax+rcx*8]");
            __asm__("addsd xmm1, [rax+rcx*8]");
            rdi9->f0 = rsi10->f0;
            rdi11 = reinterpret_cast<struct s4*>(&rdi9->f4);
            rsi12 = reinterpret_cast<struct s5*>(&rsi10->f4);
            __asm__("mulsd xmm0, xmm1");
            rdi11->f0 = rsi12->f0;
            rdi1 = reinterpret_cast<struct s0*>(&rdi11->f4);
            rsi2 = reinterpret_cast<struct s1*>(&rsi12->f4);
            ++v8;
        }
        v13 = 1;
        while (v13 < v6 - 1) {
            rdi1->f0 = rsi2->f0;
            rdi14 = reinterpret_cast<struct s2*>(&rdi1->f4);
            rsi15 = reinterpret_cast<struct s3*>(&rsi2->f4);
            __asm__("addsd xmm1, [rax+rcx*8]");
            __asm__("addsd xmm1, [rax+rcx*8]");
            rdi14->f0 = rsi15->f0;
            rdi16 = reinterpret_cast<struct s4*>(&rdi14->f4);
            rsi17 = reinterpret_cast<struct s5*>(&rsi15->f4);
            __asm__("mulsd xmm0, xmm1");
            rdi16->f0 = rsi17->f0;
            rdi1 = reinterpret_cast<struct s0*>(&rdi16->f4);
            rsi2 = reinterpret_cast<struct s1*>(&rsi17->f4);
            ++v13;
        }
        ++v7;
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

void init_array(int32_t edi, struct s7* rsi, int64_t rdx) {
    struct s6* rdi1;
    int32_t v4;
    int32_t v5;
    struct s8* rdi6;
    struct s9* rsi7;
    struct s10* rdi8;
    struct s11* rsi9;
    struct s12* rdi10;
    struct s13* rsi11;

    *reinterpret_cast<int32_t*>(&rdi1) = edi;
    v4 = *reinterpret_cast<int32_t*>(&rdi1);
    v5 = reinterpret_cast<int32_t>(fprintf);
    while (v5 < v4) {
        __asm__("cvtsi2sd xmm0, dword [rbp-0x1c]");
        rdi1->f0 = rsi->f0;
        rdi6 = reinterpret_cast<struct s8*>(&rdi1->f4);
        rsi7 = reinterpret_cast<struct s9*>(&rsi->f4);
        __asm__("addsd xmm0, xmm1");
        __asm__("cvtsi2sd xmm1, dword [rbp-0x4]");
        __asm__("divsd xmm0, xmm1");
        rdi6->f0 = rsi7->f0;
        rdi8 = reinterpret_cast<struct s10*>(&rdi6->f4);
        rsi9 = reinterpret_cast<struct s11*>(&rsi7->f4);
        __asm__("cvtsi2sd xmm0, dword [rbp-0x1c]");
        rdi8->f0 = rsi9->f0;
        rdi10 = reinterpret_cast<struct s12*>(&rdi8->f4);
        rsi11 = reinterpret_cast<struct s13*>(&rsi9->f4);
        __asm__("addsd xmm0, xmm1");
        __asm__("cvtsi2sd xmm1, dword [rbp-0x4]");
        __asm__("divsd xmm0, xmm1");
        rdi10->f0 = rsi11->f0;
        rdi1 = reinterpret_cast<struct s6*>(&rdi10->f4);
        rsi = reinterpret_cast<struct s7*>(&rsi11->f4);
        ++v5;
    }
    return;
}

