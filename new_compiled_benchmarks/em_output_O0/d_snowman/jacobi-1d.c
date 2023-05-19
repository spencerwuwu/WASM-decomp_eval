
void fprintf(int32_t edi, int32_t esi, int64_t rdx, int64_t rcx);

void print_array(int32_t edi, int64_t rsi, int64_t rdx, int64_t rcx);

void fun_1c1(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx);

void fun_1ca(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx);

int32_t fun_1a3(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int32_t eax5;
    int32_t edi6;
    int64_t rbp7;
    int64_t rbp8;
    int64_t rdi9;
    int64_t rbp10;
    int64_t rdi11;
    int64_t rbp12;
    int64_t v13;

    if (reinterpret_cast<int1_t>(eax5 == fprintf)) {
        edi6 = *reinterpret_cast<int32_t*>(rbp7 - 20);
        rsi = *reinterpret_cast<int64_t*>(rbp8 - 32);
        print_array(edi6, rsi, rdx, rcx);
    }
    rdi9 = *reinterpret_cast<int64_t*>(rbp10 - 32);
    fun_1c1(rdi9, rsi, rdx, rcx);
    rdi11 = *reinterpret_cast<int64_t*>(rbp12 - 40);
    fun_1ca(rdi11, rsi, rdx, rcx);
    goto v13;
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

void print_array(int32_t edi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int32_t v5;
    int64_t* rax6;
    int64_t rdi7;
    int64_t* rax8;
    int64_t rdi9;
    int32_t* rsi10;
    int32_t v11;
    int64_t* rax12;
    int64_t rdi13;
    int32_t** rax14;
    int32_t* rdi15;
    int64_t* rax16;
    int64_t rdi17;
    int64_t* rax18;
    int64_t rdi19;

    v5 = edi;
    rax6 = g276;
    rdi7 = *rax6;
    fun_287(rdi7, 0x280);
    rax8 = g28e;
    rdi9 = *rax8;
    rsi10 = reinterpret_cast<int32_t*>(0x298);
    fun_2a6(rdi9);
    v11 = reinterpret_cast<int32_t>(fprintf);
    while (v11 < v5) {
        __asm__("cdq ");
        if (reinterpret_cast<int1_t>(v11 % 20 == fprintf)) {
            rax12 = g2d4;
            rdi13 = *rax12;
            rsi10 = reinterpret_cast<int32_t*>(0x2de);
            fun_2e5(rdi13);
        }
        rax14 = g2ec;
        rdi15 = *rax14;
        rcx = v11;
        *rdi15 = *rsi10;
        rsi10 = reinterpret_cast<int32_t*>(0x303);
        fun_30a(rdi15 + 1);
        ++v11;
    }
    rax16 = g31f;
    rdi17 = *rax16;
    fun_337(rdi17, 0x329, 0x330, rcx);
    rax18 = g33e;
    rdi19 = *rax18;
    fun_34f(rdi19, 0x348, 0x330, rcx);
    return;
}

void fun_1c1(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t rdi5;
    int64_t rbp6;
    int64_t v7;

    rdi5 = *reinterpret_cast<int64_t*>(rbp6 - 40);
    fun_1ca(rdi5, rsi, rdx, rcx);
    goto v7;
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

void fun_1ca(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t v5;

    goto v5;
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

int64_t fun_15f(int64_t rdi, int64_t rsi);

struct s0 {
    int32_t f0;
    int32_t f4;
};

void init_array(int32_t edi, struct s0* rsi, int64_t rdx);

void fun_186(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx);

void fun_14c(int64_t rdi, int64_t rsi) {
    int64_t rbp3;
    int64_t rax4;
    int64_t rax5;
    int64_t rbp6;
    int32_t edi7;
    int64_t rbp8;
    struct s0* rsi9;
    int64_t rbp10;
    int64_t rdx11;
    int64_t rbp12;
    int64_t rdi13;
    int64_t rbp14;
    int64_t rsi15;
    int64_t rbp16;
    int64_t rdx17;
    int64_t rbp18;
    int64_t rcx19;
    int64_t rbp20;
    int64_t rbp21;
    int64_t rdi22;
    int64_t rbp23;
    int64_t rdi24;
    int64_t rbp25;
    int32_t eax26;
    int64_t rdi27;
    int64_t rbp28;
    int64_t v29;
    int32_t edi30;
    int64_t rbp31;
    int64_t rbp32;

    *reinterpret_cast<int64_t*>(rbp3 - 32) = rax4;
    rax5 = fun_15f(0x7d0, 8);
    *reinterpret_cast<int64_t*>(rbp6 - 40) = rax5;
    edi7 = *reinterpret_cast<int32_t*>(rbp8 - 20);
    rsi9 = *reinterpret_cast<struct s0**>(rbp10 - 32);
    rdx11 = *reinterpret_cast<int64_t*>(rbp12 - 40);
    init_array(edi7, rsi9, rdx11);
    *reinterpret_cast<int32_t*>(&rdi13) = *reinterpret_cast<int32_t*>(rbp14 - 24);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi13) + 4) = reinterpret_cast<int32_t>(fprintf);
    *reinterpret_cast<int32_t*>(&rsi15) = *reinterpret_cast<int32_t*>(rbp16 - 20);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi15) + 4) = reinterpret_cast<int32_t>(fprintf);
    rdx17 = *reinterpret_cast<int64_t*>(rbp18 - 32);
    rcx19 = *reinterpret_cast<int64_t*>(rbp20 - 40);
    fun_186(rdi13, rsi15, rdx17, rcx19);
    if (*reinterpret_cast<int32_t*>(rbp21 - 4) <= 42) {
        addr_1b8_4:
        rdi22 = *reinterpret_cast<int64_t*>(rbp23 - 32);
        fun_1c1(rdi22, rsi15, rdx17, rcx19);
    } else {
        rdi24 = **reinterpret_cast<int64_t**>(rbp25 - 16);
        rsi15 = 0x19e;
        eax26 = fun_1a3(rdi24, 0x19e, rdx17, rcx19);
        if (!reinterpret_cast<int1_t>(eax26 == fprintf)) 
            goto addr_1b8_4; else 
            goto addr_1ac_7;
    }
    rdi27 = *reinterpret_cast<int64_t*>(rbp28 - 40);
    fun_1ca(rdi27, rsi15, rdx17, rcx19);
    goto v29;
    addr_1ac_7:
    edi30 = *reinterpret_cast<int32_t*>(rbp31 - 20);
    rsi15 = *reinterpret_cast<int64_t*>(rbp32 - 32);
    print_array(edi30, rsi15, rdx17, rcx19);
    goto addr_1b8_4;
}

int64_t fun_15f(int64_t rdi, int64_t rsi) {
    int64_t rbp3;
    int64_t rax4;
    int32_t edi5;
    int64_t rbp6;
    struct s0* rsi7;
    int64_t rbp8;
    int64_t rdx9;
    int64_t rbp10;
    int64_t rdi11;
    int64_t rbp12;
    int64_t rsi13;
    int64_t rbp14;
    int64_t rdx15;
    int64_t rbp16;
    int64_t rcx17;
    int64_t rbp18;
    int64_t rbp19;
    int64_t rdi20;
    int64_t rbp21;
    int64_t rdi22;
    int64_t rbp23;
    int32_t eax24;
    int64_t rdi25;
    int64_t rbp26;
    int64_t v27;
    int32_t edi28;
    int64_t rbp29;
    int64_t rbp30;

    *reinterpret_cast<int64_t*>(rbp3 - 40) = rax4;
    edi5 = *reinterpret_cast<int32_t*>(rbp6 - 20);
    rsi7 = *reinterpret_cast<struct s0**>(rbp8 - 32);
    rdx9 = *reinterpret_cast<int64_t*>(rbp10 - 40);
    init_array(edi5, rsi7, rdx9);
    *reinterpret_cast<int32_t*>(&rdi11) = *reinterpret_cast<int32_t*>(rbp12 - 24);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi11) + 4) = reinterpret_cast<int32_t>(fprintf);
    *reinterpret_cast<int32_t*>(&rsi13) = *reinterpret_cast<int32_t*>(rbp14 - 20);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi13) + 4) = reinterpret_cast<int32_t>(fprintf);
    rdx15 = *reinterpret_cast<int64_t*>(rbp16 - 32);
    rcx17 = *reinterpret_cast<int64_t*>(rbp18 - 40);
    fun_186(rdi11, rsi13, rdx15, rcx17);
    if (*reinterpret_cast<int32_t*>(rbp19 - 4) <= 42) {
        addr_1b8_3:
        rdi20 = *reinterpret_cast<int64_t*>(rbp21 - 32);
        fun_1c1(rdi20, rsi13, rdx15, rcx17);
    } else {
        rdi22 = **reinterpret_cast<int64_t**>(rbp23 - 16);
        rsi13 = 0x19e;
        eax24 = fun_1a3(rdi22, 0x19e, rdx15, rcx17);
        if (!reinterpret_cast<int1_t>(eax24 == fprintf)) 
            goto addr_1b8_3; else 
            goto addr_1ac_6;
    }
    rdi25 = *reinterpret_cast<int64_t*>(rbp26 - 40);
    fun_1ca(rdi25, rsi13, rdx15, rcx17);
    goto v27;
    addr_1ac_6:
    edi28 = *reinterpret_cast<int32_t*>(rbp29 - 20);
    rsi13 = *reinterpret_cast<int64_t*>(rbp30 - 32);
    print_array(edi28, rsi13, rdx15, rcx17);
    goto addr_1b8_3;
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

void init_array(int32_t edi, struct s0* rsi, int64_t rdx) {
    struct s1* rdi1;
    int32_t v4;
    int32_t v5;
    struct s2* rdi6;
    struct s3* rsi7;
    struct s4* rdi8;
    struct s5* rsi9;
    struct s6* rdi10;
    struct s7* rsi11;

    *reinterpret_cast<int32_t*>(&rdi1) = edi;
    v4 = *reinterpret_cast<int32_t*>(&rdi1);
    v5 = reinterpret_cast<int32_t>(fprintf);
    while (v5 < v4) {
        __asm__("cvtsi2sd xmm0, dword [rbp-0x1c]");
        rdi1->f0 = rsi->f0;
        rdi6 = reinterpret_cast<struct s2*>(&rdi1->f4);
        rsi7 = reinterpret_cast<struct s3*>(&rsi->f4);
        __asm__("addsd xmm0, xmm1");
        __asm__("cvtsi2sd xmm1, dword [rbp-0x4]");
        __asm__("divsd xmm0, xmm1");
        rdi6->f0 = rsi7->f0;
        rdi8 = reinterpret_cast<struct s4*>(&rdi6->f4);
        rsi9 = reinterpret_cast<struct s5*>(&rsi7->f4);
        __asm__("cvtsi2sd xmm0, dword [rbp-0x1c]");
        rdi8->f0 = rsi9->f0;
        rdi10 = reinterpret_cast<struct s6*>(&rdi8->f4);
        rsi11 = reinterpret_cast<struct s7*>(&rsi9->f4);
        __asm__("addsd xmm0, xmm1");
        __asm__("cvtsi2sd xmm1, dword [rbp-0x4]");
        __asm__("divsd xmm0, xmm1");
        rdi10->f0 = rsi11->f0;
        rdi1 = reinterpret_cast<struct s1*>(&rdi10->f4);
        rsi = reinterpret_cast<struct s0*>(&rsi11->f4);
        ++v5;
    }
    return;
}

void fun_186(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t rbp5;
    int64_t rdi6;
    int64_t rbp7;
    int64_t rdi8;
    int64_t rbp9;
    int32_t eax10;
    int64_t rdi11;
    int64_t rbp12;
    int64_t v13;
    int32_t edi14;
    int64_t rbp15;
    int64_t rbp16;

    if (*reinterpret_cast<int32_t*>(rbp5 - 4) <= 42) {
        addr_1b8_2:
        rdi6 = *reinterpret_cast<int64_t*>(rbp7 - 32);
        fun_1c1(rdi6, rsi, rdx, rcx);
    } else {
        rdi8 = **reinterpret_cast<int64_t**>(rbp9 - 16);
        rsi = 0x19e;
        eax10 = fun_1a3(rdi8, 0x19e, rdx, rcx);
        if (!reinterpret_cast<int1_t>(eax10 == fprintf)) 
            goto addr_1b8_2; else 
            goto addr_1ac_5;
    }
    rdi11 = *reinterpret_cast<int64_t*>(rbp12 - 40);
    fun_1ca(rdi11, rsi, rdx, rcx);
    goto v13;
    addr_1ac_5:
    edi14 = *reinterpret_cast<int32_t*>(rbp15 - 20);
    rsi = *reinterpret_cast<int64_t*>(rbp16 - 32);
    print_array(edi14, rsi, rdx, rcx);
    goto addr_1b8_2;
}

void fprintf(int32_t edi, int32_t esi, int64_t rdx, int64_t rcx) {
}

void fun_54() {
    __asm__("addsd xmm1, [rax+rcx*8]");
}

struct s8 {
    int32_t f0;
    int32_t f4;
};

struct s9 {
    int32_t f0;
    int32_t f4;
};

void fun_68(struct s8* rdi, struct s9* rsi) {
    int64_t rbp3;
    int64_t* rbp4;

    rbp3 = *rbp4;
    __asm__("addsd xmm1, [rax+rcx*8]");
    rdi->f0 = rsi->f0;
    __asm__("mulsd xmm0, xmm1");
    rdi->f4 = rsi->f4;
    *reinterpret_cast<int32_t*>(rbp3 - 32) = *reinterpret_cast<int32_t*>(rbp3 - 32) + 1;
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

void fun_95() {
    int64_t rbp1;
    int64_t rbp2;
    int64_t rbp3;
    struct s10* rdi4;
    struct s11* rsi5;
    struct s12* rdi6;
    struct s13* rsi7;
    struct s14* rdi8;
    struct s15* rsi9;
    int64_t rbp10;
    int64_t rbp11;
    int64_t rbp12;
    int64_t rbp13;

    *reinterpret_cast<int32_t*>(rbp1 - 32) = 1;
    while (*reinterpret_cast<int32_t*>(rbp2 - 32) < *reinterpret_cast<int32_t*>(rbp3 - 8) - 1) {
        rdi4->f0 = rsi5->f0;
        rdi6 = reinterpret_cast<struct s12*>(&rdi4->f4);
        rsi7 = reinterpret_cast<struct s13*>(&rsi5->f4);
        __asm__("addsd xmm1, [rax+rcx*8]");
        __asm__("addsd xmm1, [rax+rcx*8]");
        rdi6->f0 = rsi7->f0;
        rdi8 = reinterpret_cast<struct s14*>(&rdi6->f4);
        rsi9 = reinterpret_cast<struct s15*>(&rsi7->f4);
        __asm__("mulsd xmm0, xmm1");
        rdi8->f0 = rsi9->f0;
        rdi4 = reinterpret_cast<struct s10*>(&rdi8->f4);
        rsi5 = reinterpret_cast<struct s11*>(&rsi9->f4);
        *reinterpret_cast<int32_t*>(rbp10 - 32) = *reinterpret_cast<int32_t*>(rbp11 - 32) + 1;
    }
    *reinterpret_cast<int32_t*>(rbp12 - 28) = *reinterpret_cast<int32_t*>(rbp13 - 28) + 1;
    goto 25;
}

void fun_118() {
    int64_t v1;

    goto v1;
}

void submain(int32_t edi, int64_t rsi) {
    fun_14c(0x7d0, 8);
}

