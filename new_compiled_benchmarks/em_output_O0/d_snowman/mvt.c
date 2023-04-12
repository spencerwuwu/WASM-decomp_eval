
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

void init_array(int32_t edi, struct s1* rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8) {
    struct s0* rdi1;
    int32_t v9;
    int32_t v10;
    struct s2* rdi11;
    struct s3* rsi12;
    struct s4* rdi13;
    struct s5* rsi14;
    struct s6* rdi15;
    struct s7* rsi16;
    int32_t v17;

    *reinterpret_cast<int32_t*>(&rdi1) = edi;
    v9 = *reinterpret_cast<int32_t*>(&rdi1);
    v10 = reinterpret_cast<int32_t>(fprintf);
    while (v10 < v9) {
        __asm__("cdq ");
        __asm__("cvtsi2sd xmm0, edx");
        __asm__("cvtsi2sd xmm1, dword [rbp-0x4]");
        __asm__("divsd xmm0, xmm1");
        rdi1->f0 = rsi->f0;
        rdi11 = reinterpret_cast<struct s2*>(&rdi1->f4);
        rsi12 = reinterpret_cast<struct s3*>(&rsi->f4);
        __asm__("cdq ");
        __asm__("cvtsi2sd xmm0, edx");
        __asm__("cvtsi2sd xmm1, dword [rbp-0x4]");
        __asm__("divsd xmm0, xmm1");
        rdi11->f0 = rsi12->f0;
        rdi13 = reinterpret_cast<struct s4*>(&rdi11->f4);
        rsi14 = reinterpret_cast<struct s5*>(&rsi12->f4);
        __asm__("cdq ");
        __asm__("cvtsi2sd xmm0, edx");
        __asm__("cvtsi2sd xmm1, dword [rbp-0x4]");
        __asm__("divsd xmm0, xmm1");
        rdi13->f0 = rsi14->f0;
        rdi15 = reinterpret_cast<struct s6*>(&rdi13->f4);
        rsi16 = reinterpret_cast<struct s7*>(&rsi14->f4);
        __asm__("cdq ");
        __asm__("cvtsi2sd xmm0, edx");
        __asm__("cvtsi2sd xmm1, dword [rbp-0x4]");
        __asm__("divsd xmm0, xmm1");
        rdi15->f0 = rsi16->f0;
        rdi1 = reinterpret_cast<struct s0*>(&rdi15->f4);
        rsi = reinterpret_cast<struct s1*>(&rsi16->f4);
        v17 = reinterpret_cast<int32_t>(fprintf);
        while (v17 < v9) {
            __asm__("cdq ");
            __asm__("cvtsi2sd xmm0, edx");
            __asm__("cvtsi2sd xmm1, dword [rbp-0x4]");
            __asm__("divsd xmm0, xmm1");
            rdi1->f0 = rsi->f0;
            rdi1 = reinterpret_cast<struct s0*>(&rdi1->f4);
            rsi = reinterpret_cast<struct s1*>(&rsi->f4);
            ++v17;
        }
        ++v10;
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

struct s14 {
    int32_t f0;
    int32_t f4;
};

struct s15 {
    int32_t f0;
    int32_t f4;
};

void kernel_mvt(int32_t edi, struct s9* rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8) {
    struct s8* rdi1;
    int32_t v9;
    int32_t v10;
    int32_t v11;
    struct s10* rdi12;
    struct s11* rsi13;
    struct s12* rdi14;
    struct s13* rsi15;
    struct s14* rdi16;
    struct s15* rsi17;
    int32_t v18;
    int32_t v19;
    struct s10* rdi20;
    struct s11* rsi21;
    struct s12* rdi22;
    struct s13* rsi23;
    struct s14* rdi24;
    struct s15* rsi25;

    *reinterpret_cast<int32_t*>(&rdi1) = edi;
    v9 = *reinterpret_cast<int32_t*>(&rdi1);
    v10 = reinterpret_cast<int32_t>(fprintf);
    while (v10 < v9) {
        v11 = reinterpret_cast<int32_t>(fprintf);
        while (v11 < v9) {
            rdi1->f0 = rsi->f0;
            rdi12 = reinterpret_cast<struct s10*>(&rdi1->f4);
            rsi13 = reinterpret_cast<struct s11*>(&rsi->f4);
            rdi12->f0 = rsi13->f0;
            rdi14 = reinterpret_cast<struct s12*>(&rdi12->f4);
            rsi15 = reinterpret_cast<struct s13*>(&rsi13->f4);
            rdi14->f0 = rsi15->f0;
            rdi16 = reinterpret_cast<struct s14*>(&rdi14->f4);
            rsi17 = reinterpret_cast<struct s15*>(&rsi15->f4);
            __asm__("mulsd xmm0, xmm2");
            __asm__("addsd xmm0, xmm1");
            rdi16->f0 = rsi17->f0;
            rdi1 = reinterpret_cast<struct s8*>(&rdi16->f4);
            rsi = reinterpret_cast<struct s9*>(&rsi17->f4);
            ++v11;
        }
        ++v10;
    }
    v18 = reinterpret_cast<int32_t>(fprintf);
    while (v18 < v9) {
        v19 = reinterpret_cast<int32_t>(fprintf);
        while (v19 < v9) {
            rdi1->f0 = rsi->f0;
            rdi20 = reinterpret_cast<struct s10*>(&rdi1->f4);
            rsi21 = reinterpret_cast<struct s11*>(&rsi->f4);
            rdi20->f0 = rsi21->f0;
            rdi22 = reinterpret_cast<struct s12*>(&rdi20->f4);
            rsi23 = reinterpret_cast<struct s13*>(&rsi21->f4);
            rdi22->f0 = rsi23->f0;
            rdi24 = reinterpret_cast<struct s14*>(&rdi22->f4);
            rsi25 = reinterpret_cast<struct s15*>(&rsi23->f4);
            __asm__("mulsd xmm0, xmm2");
            __asm__("addsd xmm0, xmm1");
            rdi24->f0 = rsi25->f0;
            rdi1 = reinterpret_cast<struct s8*>(&rdi24->f4);
            rsi = reinterpret_cast<struct s9*>(&rsi25->f4);
            ++v19;
        }
        ++v18;
    }
    return;
}

void print_array(int32_t edi, int64_t rsi, int64_t rdx);

void fun_ec(int64_t rdi, int64_t rsi, int64_t rdx);

void fun_f5(int64_t rdi, int64_t rsi, int64_t rdx);

void fun_fe(int64_t rdi, int64_t rsi, int64_t rdx);

void fun_107(int64_t rdi, int64_t rsi, int64_t rdx);

void fun_110(int64_t rdi, int64_t rsi, int64_t rdx);

void fun_ca(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8) {
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
    int64_t rdi20;
    int64_t rbp21;
    int64_t rdi22;
    int64_t rbp23;
    int64_t v24;

    if (reinterpret_cast<int1_t>(eax9 == fprintf)) {
        edi10 = *reinterpret_cast<int32_t*>(rbp11 - 20);
        rsi = *reinterpret_cast<int64_t*>(rbp12 - 40);
        rdx = *reinterpret_cast<int64_t*>(rbp13 - 48);
        print_array(edi10, rsi, rdx);
    }
    rdi14 = *reinterpret_cast<int64_t*>(rbp15 - 32);
    fun_ec(rdi14, rsi, rdx);
    rdi16 = *reinterpret_cast<int64_t*>(rbp17 - 40);
    fun_f5(rdi16, rsi, rdx);
    rdi18 = *reinterpret_cast<int64_t*>(rbp19 - 48);
    fun_fe(rdi18, rsi, rdx);
    rdi20 = *reinterpret_cast<int64_t*>(rbp21 - 56);
    fun_107(rdi20, rsi, rdx);
    rdi22 = *reinterpret_cast<int64_t*>(rbp23 - 64);
    fun_110(rdi22, rsi, rdx);
    goto v24;
}

int64_t* g3aa = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_3bb(int64_t rdi, int64_t rsi);

int64_t* g3c2 = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_3da(int64_t rdi);

int64_t* g408 = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_419(int64_t rdi);

int32_t** g420 = reinterpret_cast<int32_t**>(0x48f0458b48388b48);

void fun_43e(int64_t rdi);

int64_t* g453 = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_46b(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx);

int64_t* g472 = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_48a(int64_t rdi);

int64_t* g4b8 = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_4c9(int64_t rdi);

int32_t** g4d0 = reinterpret_cast<int32_t**>(0x48e8458b48388b48);

void fun_4ee(int64_t rdi);

int64_t* g503 = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_51b(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx);

int64_t* g522 = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_533(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx);

void print_array(int32_t edi, int64_t rsi, int64_t rdx) {
    int32_t v4;
    int64_t* rax5;
    int64_t rdi6;
    int64_t* rax7;
    int64_t rdi8;
    int32_t* rsi9;
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
    int32_t* rsi20;
    int32_t v21;
    int64_t* rax22;
    int64_t rdi23;
    int32_t** rax24;
    int32_t* rdi25;
    int64_t* rax26;
    int64_t rdi27;
    int64_t* rax28;
    int64_t rdi29;

    v4 = edi;
    rax5 = g3aa;
    rdi6 = *rax5;
    fun_3bb(rdi6, 0x3b4);
    rax7 = g3c2;
    rdi8 = *rax7;
    rsi9 = reinterpret_cast<int32_t*>(0x3cc);
    fun_3da(rdi8);
    v10 = reinterpret_cast<int32_t>(fprintf);
    while (v10 < v4) {
        __asm__("cdq ");
        if (reinterpret_cast<int1_t>(v10 % 20 == fprintf)) {
            rax11 = g408;
            rdi12 = *rax11;
            rsi9 = reinterpret_cast<int32_t*>(0x412);
            fun_419(rdi12);
        }
        rax13 = g420;
        rdi14 = *rax13;
        rcx15 = v10;
        *rdi14 = *rsi9;
        rsi9 = reinterpret_cast<int32_t*>(0x437);
        fun_43e(rdi14 + 1);
        ++v10;
    }
    rax16 = g453;
    rdi17 = *rax16;
    fun_46b(rdi17, 0x45d, 0x464, rcx15);
    rax18 = g472;
    rdi19 = *rax18;
    rsi20 = reinterpret_cast<int32_t*>(0x47c);
    fun_48a(rdi19);
    v21 = reinterpret_cast<int32_t>(fprintf);
    while (v21 < v4) {
        __asm__("cdq ");
        if (reinterpret_cast<int1_t>(v21 % 20 == fprintf)) {
            rax22 = g4b8;
            rdi23 = *rax22;
            rsi20 = reinterpret_cast<int32_t*>(0x4c2);
            fun_4c9(rdi23);
        }
        rax24 = g4d0;
        rdi25 = *rax24;
        rcx15 = v21;
        *rdi25 = *rsi20;
        rsi20 = reinterpret_cast<int32_t*>(0x4e7);
        fun_4ee(rdi25 + 1);
        ++v21;
    }
    rax26 = g503;
    rdi27 = *rax26;
    fun_51b(rdi27, 0x50d, 0x514, rcx15);
    rax28 = g522;
    rdi29 = *rax28;
    fun_533(rdi29, 0x52c, 0x514, rcx15);
    return;
}

void fun_419(int64_t rdi) {
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
    int32_t* rsi18;
    int64_t rbp19;
    int64_t rbp20;
    int64_t rbp21;
    int64_t rbp22;
    int64_t* rax23;
    int64_t rdi24;
    int32_t** rax25;
    int32_t* rdi26;
    int64_t rbp27;
    int64_t rbp28;
    int64_t rbp29;
    int64_t* rax30;
    int64_t rdi31;
    int64_t* rax32;
    int64_t rdi33;
    int64_t v34;

    while (1) {
        rax2 = g420;
        rdi3 = *rax2;
        rcx4 = *reinterpret_cast<int32_t*>(rbp5 - 28);
        *rdi3 = *rsi6;
        rsi6 = reinterpret_cast<int32_t*>(0x437);
        fun_43e(rdi3 + 1);
        *reinterpret_cast<int32_t*>(rbp7 - 28) = *reinterpret_cast<int32_t*>(rbp8 - 28) + 1;
        if (*reinterpret_cast<int32_t*>(rbp9 - 28) >= *reinterpret_cast<int32_t*>(rbp10 - 4)) 
            break;
        __asm__("cdq ");
        if (!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp11 - 28) % 20 == fprintf)) 
            continue;
        rax12 = g408;
        rdi13 = *rax12;
        rsi6 = reinterpret_cast<int32_t*>(0x412);
        fun_419(rdi13);
    }
    rax14 = g453;
    rdi15 = *rax14;
    fun_46b(rdi15, 0x45d, 0x464, rcx4);
    rax16 = g472;
    rdi17 = *rax16;
    rsi18 = reinterpret_cast<int32_t*>(0x47c);
    fun_48a(rdi17);
    *reinterpret_cast<int32_t*>(rbp19 - 28) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp20 - 28) < *reinterpret_cast<int32_t*>(rbp21 - 4)) {
        __asm__("cdq ");
        if (reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp22 - 28) % 20 == fprintf)) {
            rax23 = g4b8;
            rdi24 = *rax23;
            rsi18 = reinterpret_cast<int32_t*>(0x4c2);
            fun_4c9(rdi24);
        }
        rax25 = g4d0;
        rdi26 = *rax25;
        rcx4 = *reinterpret_cast<int32_t*>(rbp27 - 28);
        *rdi26 = *rsi18;
        rsi18 = reinterpret_cast<int32_t*>(0x4e7);
        fun_4ee(rdi26 + 1);
        *reinterpret_cast<int32_t*>(rbp28 - 28) = *reinterpret_cast<int32_t*>(rbp29 - 28) + 1;
    }
    rax30 = g503;
    rdi31 = *rax30;
    fun_51b(rdi31, 0x50d, 0x514, rcx4);
    rax32 = g522;
    rdi33 = *rax32;
    fun_533(rdi33, 0x52c, 0x514, rcx4);
    goto v34;
}

void fun_43e(int64_t rdi) {
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
    int32_t* rsi18;
    int64_t rbp19;
    int64_t rbp20;
    int64_t rbp21;
    int64_t rbp22;
    int64_t* rax23;
    int64_t rdi24;
    int32_t** rax25;
    int32_t* rdi26;
    int64_t rbp27;
    int64_t rbp28;
    int64_t rbp29;
    int64_t* rax30;
    int64_t rdi31;
    int64_t* rax32;
    int64_t rdi33;
    int64_t v34;

    while (1) {
        *reinterpret_cast<int32_t*>(rbp2 - 28) = *reinterpret_cast<int32_t*>(rbp3 - 28) + 1;
        if (*reinterpret_cast<int32_t*>(rbp4 - 28) >= *reinterpret_cast<int32_t*>(rbp5 - 4)) 
            break;
        __asm__("cdq ");
        if (reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp6 - 28) % 20 == fprintf)) {
            rax7 = g408;
            rdi8 = *rax7;
            rsi9 = reinterpret_cast<int32_t*>(0x412);
            fun_419(rdi8);
        }
        rax10 = g420;
        rdi11 = *rax10;
        rcx12 = *reinterpret_cast<int32_t*>(rbp13 - 28);
        *rdi11 = *rsi9;
        rsi9 = reinterpret_cast<int32_t*>(0x437);
        fun_43e(rdi11 + 1);
    }
    rax14 = g453;
    rdi15 = *rax14;
    fun_46b(rdi15, 0x45d, 0x464, rcx12);
    rax16 = g472;
    rdi17 = *rax16;
    rsi18 = reinterpret_cast<int32_t*>(0x47c);
    fun_48a(rdi17);
    *reinterpret_cast<int32_t*>(rbp19 - 28) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp20 - 28) < *reinterpret_cast<int32_t*>(rbp21 - 4)) {
        __asm__("cdq ");
        if (reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp22 - 28) % 20 == fprintf)) {
            rax23 = g4b8;
            rdi24 = *rax23;
            rsi18 = reinterpret_cast<int32_t*>(0x4c2);
            fun_4c9(rdi24);
        }
        rax25 = g4d0;
        rdi26 = *rax25;
        rcx12 = *reinterpret_cast<int32_t*>(rbp27 - 28);
        *rdi26 = *rsi18;
        rsi18 = reinterpret_cast<int32_t*>(0x4e7);
        fun_4ee(rdi26 + 1);
        *reinterpret_cast<int32_t*>(rbp28 - 28) = *reinterpret_cast<int32_t*>(rbp29 - 28) + 1;
    }
    rax30 = g503;
    rdi31 = *rax30;
    fun_51b(rdi31, 0x50d, 0x514, rcx12);
    rax32 = g522;
    rdi33 = *rax32;
    fun_533(rdi33, 0x52c, 0x514, rcx12);
    goto v34;
}

void fun_4c9(int64_t rdi) {
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
        rax2 = g4d0;
        rdi3 = *rax2;
        rcx4 = *reinterpret_cast<int32_t*>(rbp5 - 28);
        *rdi3 = *rsi6;
        rsi6 = reinterpret_cast<int32_t*>(0x4e7);
        fun_4ee(rdi3 + 1);
        *reinterpret_cast<int32_t*>(rbp7 - 28) = *reinterpret_cast<int32_t*>(rbp8 - 28) + 1;
        if (*reinterpret_cast<int32_t*>(rbp9 - 28) >= *reinterpret_cast<int32_t*>(rbp10 - 4)) 
            break;
        __asm__("cdq ");
        if (!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp11 - 28) % 20 == fprintf)) 
            continue;
        rax12 = g4b8;
        rdi13 = *rax12;
        rsi6 = reinterpret_cast<int32_t*>(0x4c2);
        fun_4c9(rdi13);
    }
    rax14 = g503;
    rdi15 = *rax14;
    fun_51b(rdi15, 0x50d, 0x514, rcx4);
    rax16 = g522;
    rdi17 = *rax16;
    fun_533(rdi17, 0x52c, 0x514, rcx4);
    goto v18;
}

void fun_4ee(int64_t rdi) {
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
        *reinterpret_cast<int32_t*>(rbp2 - 28) = *reinterpret_cast<int32_t*>(rbp3 - 28) + 1;
        if (*reinterpret_cast<int32_t*>(rbp4 - 28) >= *reinterpret_cast<int32_t*>(rbp5 - 4)) 
            break;
        __asm__("cdq ");
        if (reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp6 - 28) % 20 == fprintf)) {
            rax7 = g4b8;
            rdi8 = *rax7;
            rsi9 = reinterpret_cast<int32_t*>(0x4c2);
            fun_4c9(rdi8);
        }
        rax10 = g4d0;
        rdi11 = *rax10;
        rcx12 = *reinterpret_cast<int32_t*>(rbp13 - 28);
        *rdi11 = *rsi9;
        rsi9 = reinterpret_cast<int32_t*>(0x4e7);
        fun_4ee(rdi11 + 1);
    }
    rax14 = g503;
    rdi15 = *rax14;
    fun_51b(rdi15, 0x50d, 0x514, rcx12);
    rax16 = g522;
    rdi17 = *rax16;
    fun_533(rdi17, 0x52c, 0x514, rcx12);
    goto v18;
}

void fun_ec(int64_t rdi, int64_t rsi, int64_t rdx) {
    int64_t rdi4;
    int64_t rbp5;
    int64_t rdi6;
    int64_t rbp7;
    int64_t rdi8;
    int64_t rbp9;
    int64_t rdi10;
    int64_t rbp11;
    int64_t v12;

    rdi4 = *reinterpret_cast<int64_t*>(rbp5 - 40);
    fun_f5(rdi4, rsi, rdx);
    rdi6 = *reinterpret_cast<int64_t*>(rbp7 - 48);
    fun_fe(rdi6, rsi, rdx);
    rdi8 = *reinterpret_cast<int64_t*>(rbp9 - 56);
    fun_107(rdi8, rsi, rdx);
    rdi10 = *reinterpret_cast<int64_t*>(rbp11 - 64);
    fun_110(rdi10, rsi, rdx);
    goto v12;
}

void fun_3bb(int64_t rdi, int64_t rsi) {
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
    int32_t* rsi22;
    int64_t rbp23;
    int64_t rbp24;
    int64_t rbp25;
    int64_t rbp26;
    int64_t* rax27;
    int64_t rdi28;
    int32_t** rax29;
    int32_t* rdi30;
    int64_t rbp31;
    int64_t rbp32;
    int64_t rbp33;
    int64_t* rax34;
    int64_t rdi35;
    int64_t* rax36;
    int64_t rdi37;
    int64_t v38;

    rax3 = g3c2;
    rdi4 = *rax3;
    rsi5 = reinterpret_cast<int32_t*>(0x3cc);
    fun_3da(rdi4);
    *reinterpret_cast<int32_t*>(rbp6 - 28) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp7 - 28) < *reinterpret_cast<int32_t*>(rbp8 - 4)) {
        __asm__("cdq ");
        if (reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp9 - 28) % 20 == fprintf)) {
            rax10 = g408;
            rdi11 = *rax10;
            rsi5 = reinterpret_cast<int32_t*>(0x412);
            fun_419(rdi11);
        }
        rax12 = g420;
        rdi13 = *rax12;
        rcx14 = *reinterpret_cast<int32_t*>(rbp15 - 28);
        *rdi13 = *rsi5;
        rsi5 = reinterpret_cast<int32_t*>(0x437);
        fun_43e(rdi13 + 1);
        *reinterpret_cast<int32_t*>(rbp16 - 28) = *reinterpret_cast<int32_t*>(rbp17 - 28) + 1;
    }
    rax18 = g453;
    rdi19 = *rax18;
    fun_46b(rdi19, 0x45d, 0x464, rcx14);
    rax20 = g472;
    rdi21 = *rax20;
    rsi22 = reinterpret_cast<int32_t*>(0x47c);
    fun_48a(rdi21);
    *reinterpret_cast<int32_t*>(rbp23 - 28) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp24 - 28) < *reinterpret_cast<int32_t*>(rbp25 - 4)) {
        __asm__("cdq ");
        if (reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp26 - 28) % 20 == fprintf)) {
            rax27 = g4b8;
            rdi28 = *rax27;
            rsi22 = reinterpret_cast<int32_t*>(0x4c2);
            fun_4c9(rdi28);
        }
        rax29 = g4d0;
        rdi30 = *rax29;
        rcx14 = *reinterpret_cast<int32_t*>(rbp31 - 28);
        *rdi30 = *rsi22;
        rsi22 = reinterpret_cast<int32_t*>(0x4e7);
        fun_4ee(rdi30 + 1);
        *reinterpret_cast<int32_t*>(rbp32 - 28) = *reinterpret_cast<int32_t*>(rbp33 - 28) + 1;
    }
    rax34 = g503;
    rdi35 = *rax34;
    fun_51b(rdi35, 0x50d, 0x514, rcx14);
    rax36 = g522;
    rdi37 = *rax36;
    fun_533(rdi37, 0x52c, 0x514, rcx14);
    goto v38;
}

void fun_f5(int64_t rdi, int64_t rsi, int64_t rdx) {
    int64_t rdi4;
    int64_t rbp5;
    int64_t rdi6;
    int64_t rbp7;
    int64_t rdi8;
    int64_t rbp9;
    int64_t v10;

    rdi4 = *reinterpret_cast<int64_t*>(rbp5 - 48);
    fun_fe(rdi4, rsi, rdx);
    rdi6 = *reinterpret_cast<int64_t*>(rbp7 - 56);
    fun_107(rdi6, rsi, rdx);
    rdi8 = *reinterpret_cast<int64_t*>(rbp9 - 64);
    fun_110(rdi8, rsi, rdx);
    goto v10;
}

void fun_3da(int64_t rdi) {
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
    int32_t* rsi19;
    int64_t rbp20;
    int64_t rbp21;
    int64_t rbp22;
    int64_t rbp23;
    int64_t* rax24;
    int64_t rdi25;
    int32_t** rax26;
    int32_t* rdi27;
    int64_t rbp28;
    int64_t rbp29;
    int64_t rbp30;
    int64_t* rax31;
    int64_t rdi32;
    int64_t* rax33;
    int64_t rdi34;
    int64_t v35;

    *reinterpret_cast<int32_t*>(rbp2 - 28) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp3 - 28) < *reinterpret_cast<int32_t*>(rbp4 - 4)) {
        __asm__("cdq ");
        if (reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp5 - 28) % 20 == fprintf)) {
            rax6 = g408;
            rdi7 = *rax6;
            rsi8 = reinterpret_cast<int32_t*>(0x412);
            fun_419(rdi7);
        }
        rax9 = g420;
        rdi10 = *rax9;
        rcx11 = *reinterpret_cast<int32_t*>(rbp12 - 28);
        *rdi10 = *rsi8;
        rsi8 = reinterpret_cast<int32_t*>(0x437);
        fun_43e(rdi10 + 1);
        *reinterpret_cast<int32_t*>(rbp13 - 28) = *reinterpret_cast<int32_t*>(rbp14 - 28) + 1;
    }
    rax15 = g453;
    rdi16 = *rax15;
    fun_46b(rdi16, 0x45d, 0x464, rcx11);
    rax17 = g472;
    rdi18 = *rax17;
    rsi19 = reinterpret_cast<int32_t*>(0x47c);
    fun_48a(rdi18);
    *reinterpret_cast<int32_t*>(rbp20 - 28) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp21 - 28) < *reinterpret_cast<int32_t*>(rbp22 - 4)) {
        __asm__("cdq ");
        if (reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp23 - 28) % 20 == fprintf)) {
            rax24 = g4b8;
            rdi25 = *rax24;
            rsi19 = reinterpret_cast<int32_t*>(0x4c2);
            fun_4c9(rdi25);
        }
        rax26 = g4d0;
        rdi27 = *rax26;
        rcx11 = *reinterpret_cast<int32_t*>(rbp28 - 28);
        *rdi27 = *rsi19;
        rsi19 = reinterpret_cast<int32_t*>(0x4e7);
        fun_4ee(rdi27 + 1);
        *reinterpret_cast<int32_t*>(rbp29 - 28) = *reinterpret_cast<int32_t*>(rbp30 - 28) + 1;
    }
    rax31 = g503;
    rdi32 = *rax31;
    fun_51b(rdi32, 0x50d, 0x514, rcx11);
    rax33 = g522;
    rdi34 = *rax33;
    fun_533(rdi34, 0x52c, 0x514, rcx11);
    goto v35;
}

void fun_46b(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t* rax5;
    int64_t rdi6;
    int32_t* rsi7;
    int64_t rbp8;
    int64_t rbp9;
    int64_t rbp10;
    int64_t rbp11;
    int64_t* rax12;
    int64_t rdi13;
    int32_t** rax14;
    int32_t* rdi15;
    int64_t rbp16;
    int64_t rbp17;
    int64_t rbp18;
    int64_t* rax19;
    int64_t rdi20;
    int64_t* rax21;
    int64_t rdi22;
    int64_t v23;

    rax5 = g472;
    rdi6 = *rax5;
    rsi7 = reinterpret_cast<int32_t*>(0x47c);
    fun_48a(rdi6);
    *reinterpret_cast<int32_t*>(rbp8 - 28) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp9 - 28) < *reinterpret_cast<int32_t*>(rbp10 - 4)) {
        __asm__("cdq ");
        if (reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp11 - 28) % 20 == fprintf)) {
            rax12 = g4b8;
            rdi13 = *rax12;
            rsi7 = reinterpret_cast<int32_t*>(0x4c2);
            fun_4c9(rdi13);
        }
        rax14 = g4d0;
        rdi15 = *rax14;
        rcx = *reinterpret_cast<int32_t*>(rbp16 - 28);
        *rdi15 = *rsi7;
        rsi7 = reinterpret_cast<int32_t*>(0x4e7);
        fun_4ee(rdi15 + 1);
        *reinterpret_cast<int32_t*>(rbp17 - 28) = *reinterpret_cast<int32_t*>(rbp18 - 28) + 1;
    }
    rax19 = g503;
    rdi20 = *rax19;
    fun_51b(rdi20, 0x50d, 0x514, rcx);
    rax21 = g522;
    rdi22 = *rax21;
    fun_533(rdi22, 0x52c, 0x514, rcx);
    goto v23;
}

void fun_51b(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t* rax5;
    int64_t rdi6;
    int64_t v7;

    rax5 = g522;
    rdi6 = *rax5;
    fun_533(rdi6, 0x52c, rdx, rcx);
    goto v7;
}

void fun_fe(int64_t rdi, int64_t rsi, int64_t rdx) {
    int64_t rdi4;
    int64_t rbp5;
    int64_t rdi6;
    int64_t rbp7;
    int64_t v8;

    rdi4 = *reinterpret_cast<int64_t*>(rbp5 - 56);
    fun_107(rdi4, rsi, rdx);
    rdi6 = *reinterpret_cast<int64_t*>(rbp7 - 64);
    fun_110(rdi6, rsi, rdx);
    goto v8;
}

void fun_48a(int64_t rdi) {
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

    *reinterpret_cast<int32_t*>(rbp2 - 28) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp3 - 28) < *reinterpret_cast<int32_t*>(rbp4 - 4)) {
        __asm__("cdq ");
        if (reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp5 - 28) % 20 == fprintf)) {
            rax6 = g4b8;
            rdi7 = *rax6;
            rsi8 = reinterpret_cast<int32_t*>(0x4c2);
            fun_4c9(rdi7);
        }
        rax9 = g4d0;
        rdi10 = *rax9;
        rcx11 = *reinterpret_cast<int32_t*>(rbp12 - 28);
        *rdi10 = *rsi8;
        rsi8 = reinterpret_cast<int32_t*>(0x4e7);
        fun_4ee(rdi10 + 1);
        *reinterpret_cast<int32_t*>(rbp13 - 28) = *reinterpret_cast<int32_t*>(rbp14 - 28) + 1;
    }
    rax15 = g503;
    rdi16 = *rax15;
    fun_51b(rdi16, 0x50d, 0x514, rcx11);
    rax17 = g522;
    rdi18 = *rax17;
    fun_533(rdi18, 0x52c, 0x514, rcx11);
    goto v19;
}

void fun_533(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t v5;

    goto v5;
}

void fun_107(int64_t rdi, int64_t rsi, int64_t rdx) {
    int64_t rdi4;
    int64_t rbp5;
    int64_t v6;

    rdi4 = *reinterpret_cast<int64_t*>(rbp5 - 64);
    fun_110(rdi4, rsi, rdx);
    goto v6;
}

void fun_110(int64_t rdi, int64_t rsi, int64_t rdx) {
    int64_t v4;

    goto v4;
}

void fprintf() {
}

void fun_70(int32_t edi, struct s1* rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    int64_t rax7;
    int64_t rax8;
    int64_t rbp9;
    int32_t edi10;
    int64_t rbp11;
    struct s9* rsi12;
    int64_t rbp13;
    int64_t rdx14;
    int64_t rbp15;
    int64_t rcx16;
    int64_t rbp17;
    int64_t r8_18;
    int64_t rbp19;
    int64_t r9_20;
    int64_t rbp21;
    int64_t rbp22;
    int64_t rdi23;
    int64_t rbp24;

    *reinterpret_cast<signed char*>(rax7 - 0x77) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(rax8 - 0x77) + *reinterpret_cast<signed char*>(&rcx));
    __asm__("ror byte [r11-0x74b71383], 0x75");
    __asm__("fmul dword [rax-0x75]");
    __asm__("ror byte [rax-0x75], 1");
    __asm__("enter 0x8b4c, 0x45");
    __asm__("ror byte [rbx+rcx*4+0x4d], 0xe0");
    init_array(edi, rsi, rdx, rcx, r8, r9, rbp9, __return_address());
    edi10 = *reinterpret_cast<int32_t*>(rbp11 - 20);
    rsi12 = *reinterpret_cast<struct s9**>(rbp13 - 40);
    rdx14 = *reinterpret_cast<int64_t*>(rbp15 - 48);
    rcx16 = *reinterpret_cast<int64_t*>(rbp17 - 56);
    r8_18 = *reinterpret_cast<int64_t*>(rbp19 - 64);
    r9_20 = *reinterpret_cast<int64_t*>(rbp21 - 32);
    kernel_mvt(edi10, rsi12, rdx14, rcx16, r8_18, r9_20, rbp9, __return_address());
    if (*reinterpret_cast<int32_t*>(rbp22 - 4) <= 42) 
        goto 0xe3;
    rdi23 = **reinterpret_cast<int64_t**>(rbp24 - 16);
    fun_ca(rdi23, 0xc5, rdx14, rcx16, r8_18, r9_20, rbp9, __return_address());
}

