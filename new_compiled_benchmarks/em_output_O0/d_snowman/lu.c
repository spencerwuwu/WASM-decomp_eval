
int64_t* g566 = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_577(int64_t rdi, int64_t rsi);

int64_t* g57e = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_596(int64_t rdi);

void fprintf();

int64_t* g5de = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_5ef(int64_t rdi);

int32_t** g5f6 = reinterpret_cast<int32_t**>(0x48f0458b48388b48);

void fun_622(int64_t rdi);

int64_t* g64a = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_662(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx);

int64_t* g669 = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_67a(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx);

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
    rax4 = g566;
    rdi5 = *rax4;
    fun_577(rdi5, 0x570);
    rax6 = g57e;
    rdi7 = *rax6;
    rsi8 = reinterpret_cast<int32_t*>(0x588);
    fun_596(rdi7);
    v9 = reinterpret_cast<int32_t>(fprintf);
    while (v9 < v3) {
        v10 = reinterpret_cast<int32_t>(fprintf);
        while (v10 < v3) {
            __asm__("cdq ");
            if (reinterpret_cast<int1_t>((v9 * v3 + v10) % 20 == fprintf)) {
                rax11 = g5de;
                rdi12 = *rax11;
                rsi8 = reinterpret_cast<int32_t*>(0x5e8);
                fun_5ef(rdi12);
            }
            rax13 = g5f6;
            rdi14 = *rax13;
            rcx15 = v10;
            *rdi14 = *rsi8;
            rsi8 = reinterpret_cast<int32_t*>(0x61b);
            fun_622(rdi14 + 1);
            ++v10;
        }
        ++v9;
    }
    rax16 = g64a;
    rdi17 = *rax16;
    fun_662(rdi17, 0x654, 0x65b, rcx15);
    rax18 = g669;
    rdi19 = *rax18;
    fun_67a(rdi19, 0x673, 0x65b, rcx15);
    return;
}

void fun_7c(int64_t rdi, int64_t rsi) {
    int64_t v3;

    goto v3;
}

void fun_5ef(int64_t rdi) {
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
        rax2 = g5f6;
        rdi3 = *rax2;
        rcx4 = *reinterpret_cast<int32_t*>(rbp5 - 24);
        *rdi3 = *rsi6;
        rsi6 = reinterpret_cast<int32_t*>(0x61b);
        fun_622(rdi3 + 1);
        *reinterpret_cast<int32_t*>(rbp7 - 24) = *reinterpret_cast<int32_t*>(rbp8 - 24) + 1;
        while (*reinterpret_cast<int32_t*>(rbp9 - 24) >= *reinterpret_cast<int32_t*>(rbp10 - 4)) {
            *reinterpret_cast<int32_t*>(rbp11 - 20) = *reinterpret_cast<int32_t*>(rbp12 - 20) + 1;
            if (*reinterpret_cast<int32_t*>(rbp13 - 20) >= *reinterpret_cast<int32_t*>(rbp14 - 4)) 
                goto addr_643_10;
            *reinterpret_cast<int32_t*>(rbp15 - 24) = reinterpret_cast<int32_t>(fprintf);
        }
        __asm__("cdq ");
        if (!reinterpret_cast<int1_t>((*reinterpret_cast<int32_t*>(rbp16 - 20) * *reinterpret_cast<int32_t*>(rbp17 - 4) + *reinterpret_cast<int32_t*>(rbp18 - 24)) % 20 == fprintf)) 
            continue;
        rax19 = g5de;
        rdi20 = *rax19;
        rsi6 = reinterpret_cast<int32_t*>(0x5e8);
        fun_5ef(rdi20);
    }
    addr_643_10:
    rax21 = g64a;
    rdi22 = *rax21;
    fun_662(rdi22, 0x654, 0x65b, rcx4);
    rax23 = g669;
    rdi24 = *rax23;
    fun_67a(rdi24, 0x673, 0x65b, rcx4);
    goto v25;
}

void fun_622(int64_t rdi) {
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
                goto addr_643_6;
            *reinterpret_cast<int32_t*>(rbp10 - 24) = reinterpret_cast<int32_t>(fprintf);
        }
        __asm__("cdq ");
        if (reinterpret_cast<int1_t>((*reinterpret_cast<int32_t*>(rbp11 - 20) * *reinterpret_cast<int32_t*>(rbp12 - 4) + *reinterpret_cast<int32_t*>(rbp13 - 24)) % 20 == fprintf)) {
            rax14 = g5de;
            rdi15 = *rax14;
            rsi16 = reinterpret_cast<int32_t*>(0x5e8);
            fun_5ef(rdi15);
        }
        rax17 = g5f6;
        rdi18 = *rax17;
        rcx19 = *reinterpret_cast<int32_t*>(rbp20 - 24);
        *rdi18 = *rsi16;
        rsi16 = reinterpret_cast<int32_t*>(0x61b);
        fun_622(rdi18 + 1);
    }
    addr_643_6:
    rax21 = g64a;
    rdi22 = *rax21;
    fun_662(rdi22, 0x654, 0x65b, rcx19);
    rax23 = g669;
    rdi24 = *rax23;
    fun_67a(rdi24, 0x673, 0x65b, rcx19);
    goto v25;
}

void fun_577(int64_t rdi, int64_t rsi) {
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

    rax3 = g57e;
    rdi4 = *rax3;
    rsi5 = reinterpret_cast<int32_t*>(0x588);
    fun_596(rdi4);
    *reinterpret_cast<int32_t*>(rbp6 - 20) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp7 - 20) < *reinterpret_cast<int32_t*>(rbp8 - 4)) {
        *reinterpret_cast<int32_t*>(rbp9 - 24) = reinterpret_cast<int32_t>(fprintf);
        while (*reinterpret_cast<int32_t*>(rbp10 - 24) < *reinterpret_cast<int32_t*>(rbp11 - 4)) {
            __asm__("cdq ");
            if (reinterpret_cast<int1_t>((*reinterpret_cast<int32_t*>(rbp12 - 20) * *reinterpret_cast<int32_t*>(rbp13 - 4) + *reinterpret_cast<int32_t*>(rbp14 - 24)) % 20 == fprintf)) {
                rax15 = g5de;
                rdi16 = *rax15;
                rsi5 = reinterpret_cast<int32_t*>(0x5e8);
                fun_5ef(rdi16);
            }
            rax17 = g5f6;
            rdi18 = *rax17;
            rcx19 = *reinterpret_cast<int32_t*>(rbp20 - 24);
            *rdi18 = *rsi5;
            rsi5 = reinterpret_cast<int32_t*>(0x61b);
            fun_622(rdi18 + 1);
            *reinterpret_cast<int32_t*>(rbp21 - 24) = *reinterpret_cast<int32_t*>(rbp22 - 24) + 1;
        }
        *reinterpret_cast<int32_t*>(rbp23 - 20) = *reinterpret_cast<int32_t*>(rbp24 - 20) + 1;
    }
    rax25 = g64a;
    rdi26 = *rax25;
    fun_662(rdi26, 0x654, 0x65b, rcx19);
    rax27 = g669;
    rdi28 = *rax27;
    fun_67a(rdi28, 0x673, 0x65b, rcx19);
    goto v29;
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

void fun_34b(int64_t rdi);

void fun_191(struct s0* rdi, struct s1* rsi, int64_t rdx, int64_t rcx) {
    int64_t rbp5;
    int64_t rax6;
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
    int64_t rbp19;
    int64_t rbp20;
    int64_t rbp21;
    int64_t rbp22;
    int64_t rbp23;
    int64_t rbp24;
    int64_t rbp25;
    struct s2* rdi26;
    struct s3* rsi27;
    struct s0* rdi28;
    struct s1* rsi29;
    struct s2* rdi30;
    struct s3* rsi31;
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
    int64_t rbp42;
    int64_t rbp43;
    struct s2* rdi44;
    struct s3* rsi45;
    int64_t rbp46;
    int64_t rbp47;
    int64_t rbp48;
    int64_t rbp49;
    int64_t rdi50;
    int64_t rbp51;
    int64_t v52;

    *reinterpret_cast<int64_t*>(rbp5 - 48) = rax6;
    *reinterpret_cast<int32_t*>(rbp7 - 28) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp8 - 28) < *reinterpret_cast<int32_t*>(rbp9 - 4)) {
        *reinterpret_cast<int32_t*>(rbp10 - 32) = reinterpret_cast<int32_t>(fprintf);
        while (*reinterpret_cast<int32_t*>(rbp11 - 32) < *reinterpret_cast<int32_t*>(rbp12 - 4)) {
            __asm__("xorps xmm0, xmm0");
            rdi->f0 = rsi->f0;
            rdi = reinterpret_cast<struct s0*>(&rdi->f4);
            rsi = reinterpret_cast<struct s1*>(&rsi->f4);
            *reinterpret_cast<int32_t*>(rbp13 - 32) = *reinterpret_cast<int32_t*>(rbp14 - 32) + 1;
        }
        *reinterpret_cast<int32_t*>(rbp15 - 28) = *reinterpret_cast<int32_t*>(rbp16 - 28) + 1;
    }
    *reinterpret_cast<int32_t*>(rbp17 - 36) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp18 - 36) < *reinterpret_cast<int32_t*>(rbp19 - 4)) {
        *reinterpret_cast<int32_t*>(rbp20 - 28) = reinterpret_cast<int32_t>(fprintf);
        while (*reinterpret_cast<int32_t*>(rbp21 - 28) < *reinterpret_cast<int32_t*>(rbp22 - 4)) {
            *reinterpret_cast<int32_t*>(rbp23 - 32) = reinterpret_cast<int32_t>(fprintf);
            while (*reinterpret_cast<int32_t*>(rbp24 - 32) < *reinterpret_cast<int32_t*>(rbp25 - 4)) {
                rdi->f0 = rsi->f0;
                rdi26 = reinterpret_cast<struct s2*>(&rdi->f4);
                rsi27 = reinterpret_cast<struct s3*>(&rsi->f4);
                rdi26->f0 = rsi27->f0;
                rdi28 = reinterpret_cast<struct s0*>(&rdi26->f4);
                rsi29 = reinterpret_cast<struct s1*>(&rsi27->f4);
                rdi28->f0 = rsi29->f0;
                rdi30 = reinterpret_cast<struct s2*>(&rdi28->f4);
                rsi31 = reinterpret_cast<struct s3*>(&rsi29->f4);
                __asm__("mulsd xmm0, xmm2");
                __asm__("addsd xmm0, xmm1");
                rdi30->f0 = rsi31->f0;
                rdi = reinterpret_cast<struct s0*>(&rdi30->f4);
                rsi = reinterpret_cast<struct s1*>(&rsi31->f4);
                *reinterpret_cast<int32_t*>(rbp32 - 32) = *reinterpret_cast<int32_t*>(rbp33 - 32) + 1;
            }
            *reinterpret_cast<int32_t*>(rbp34 - 28) = *reinterpret_cast<int32_t*>(rbp35 - 28) + 1;
        }
        *reinterpret_cast<int32_t*>(rbp36 - 36) = *reinterpret_cast<int32_t*>(rbp37 - 36) + 1;
    }
    *reinterpret_cast<int32_t*>(rbp38 - 28) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp39 - 28) < *reinterpret_cast<int32_t*>(rbp40 - 4)) {
        *reinterpret_cast<int32_t*>(rbp41 - 32) = reinterpret_cast<int32_t>(fprintf);
        while (*reinterpret_cast<int32_t*>(rbp42 - 32) < *reinterpret_cast<int32_t*>(rbp43 - 4)) {
            rdi->f0 = rsi->f0;
            rdi44 = reinterpret_cast<struct s2*>(&rdi->f4);
            rsi45 = reinterpret_cast<struct s3*>(&rsi->f4);
            rdi44->f0 = rsi45->f0;
            rdi = reinterpret_cast<struct s0*>(&rdi44->f4);
            rsi = reinterpret_cast<struct s1*>(&rsi45->f4);
            *reinterpret_cast<int32_t*>(rbp46 - 32) = *reinterpret_cast<int32_t*>(rbp47 - 32) + 1;
        }
        *reinterpret_cast<int32_t*>(rbp48 - 28) = *reinterpret_cast<int32_t*>(rbp49 - 28) + 1;
    }
    rdi50 = *reinterpret_cast<int64_t*>(rbp51 - 48);
    fun_34b(rdi50);
    goto v52;
}

void fun_596(int64_t rdi) {
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
                rax11 = g5de;
                rdi12 = *rax11;
                rsi13 = reinterpret_cast<int32_t*>(0x5e8);
                fun_5ef(rdi12);
            }
            rax14 = g5f6;
            rdi15 = *rax14;
            rcx16 = *reinterpret_cast<int32_t*>(rbp17 - 24);
            *rdi15 = *rsi13;
            rsi13 = reinterpret_cast<int32_t*>(0x61b);
            fun_622(rdi15 + 1);
            *reinterpret_cast<int32_t*>(rbp18 - 24) = *reinterpret_cast<int32_t*>(rbp19 - 24) + 1;
        }
        *reinterpret_cast<int32_t*>(rbp20 - 20) = *reinterpret_cast<int32_t*>(rbp21 - 20) + 1;
    }
    rax22 = g64a;
    rdi23 = *rax22;
    fun_662(rdi23, 0x654, 0x65b, rcx16);
    rax24 = g669;
    rdi25 = *rax24;
    fun_67a(rdi25, 0x673, 0x65b, rcx16);
    goto v26;
}

void fun_34b(int64_t rdi) {
    int64_t v2;

    goto v2;
}

void fun_662(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t* rax5;
    int64_t rdi6;
    int64_t v7;

    rax5 = g669;
    rdi6 = *rax5;
    fun_67a(rdi6, 0x673, rdx, rcx);
    goto v7;
}

void fun_67a(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t v5;

    goto v5;
}

void fprintf() {
}

void fun_68(int32_t edi) {
    int1_t less2;
    int64_t rsi3;
    int64_t rbp4;
    int64_t rdi5;
    int64_t rbp6;

    if (less2) {
        rsi3 = *reinterpret_cast<int64_t*>(rbp4 - 32);
        print_array(edi, rsi3);
        rdi5 = *reinterpret_cast<int64_t*>(rbp6 - 32);
        fun_7c(rdi5, rsi3);
    }
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

void init_array(int32_t edi, struct s5* rsi) {
    struct s4* rdi1;
    int32_t v3;
    int32_t v4;
    int32_t v5;
    int64_t rdx6;
    struct s6* rdi7;
    struct s7* rsi8;
    int32_t v9;
    int64_t rcx10;
    struct s6* rdi11;
    struct s7* rsi12;

    *reinterpret_cast<int32_t*>(&rdi1) = edi;
    v3 = *reinterpret_cast<int32_t*>(&rdi1);
    v4 = reinterpret_cast<int32_t>(fprintf);
    while (v4 < v3) {
        v5 = reinterpret_cast<int32_t>(fprintf);
        while (v5 <= v4) {
            __asm__("cdq ");
            *reinterpret_cast<int32_t*>(&rdx6) = (reinterpret_cast<int32_t>(fprintf) - v5) % v3;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx6) + 4) = reinterpret_cast<int32_t>(fprintf);
            __asm__("cvtsi2sd xmm0, edx");
            __asm__("cvtsi2sd xmm1, dword [rbp-0x4]");
            __asm__("divsd xmm0, xmm1");
            rdi1->f0 = rsi->f0;
            rdi7 = reinterpret_cast<struct s6*>(&rdi1->f4);
            rsi8 = reinterpret_cast<struct s7*>(&rsi->f4);
            __asm__("addsd xmm0, xmm1");
            rdi7->f0 = rsi8->f0;
            rdi1 = reinterpret_cast<struct s4*>(&rdi7->f4);
            rsi = reinterpret_cast<struct s5*>(&rsi8->f4);
            ++v5;
        }
        v9 = v4 + 1;
        while (v9 < v3) {
            __asm__("xorps xmm0, xmm0");
            rdi1->f0 = rsi->f0;
            rdi1 = reinterpret_cast<struct s4*>(&rdi1->f4);
            rsi = reinterpret_cast<struct s5*>(&rsi->f4);
            ++v9;
        }
        rcx10 = v4;
        rdi1->f0 = rsi->f0;
        rdi11 = reinterpret_cast<struct s6*>(&rdi1->f4);
        rsi12 = reinterpret_cast<struct s7*>(&rsi->f4);
        rdi11->f0 = rsi12->f0;
        rdi1 = reinterpret_cast<struct s4*>(&rdi11->f4);
        rsi = reinterpret_cast<struct s5*>(&rsi12->f4);
        ++v4;
    }
    fun_191(0x3d0900, 8, rdx6, rcx10);
}

struct s8 {
    int32_t f0;
    int32_t f4;
};

struct s9 {
    int32_t f0;
    int32_t f4;
};

int32_t fprintf = 0xe5894855;

struct s10 {
    int32_t f0;
    int32_t f4;
};

void kernel_lu(int32_t edi, struct s8* rsi) {
    int32_t* rdi1;
    int32_t v3;
    int32_t v4;
    int32_t v5;
    int32_t v6;
    int32_t* rdi7;
    struct s9* rsi8;
    int32_t* rdi9;
    int32_t* rdi10;
    int32_t* rdi11;
    struct s9* rsi12;
    int32_t* rdi13;
    struct s10* rsi14;
    int32_t v15;
    int32_t v16;
    int32_t* rdi17;
    struct s9* rsi18;
    int32_t* rdi19;
    int32_t* rdi20;

    *reinterpret_cast<int32_t*>(&rdi1) = edi;
    v3 = *reinterpret_cast<int32_t*>(&rdi1);
    v4 = reinterpret_cast<int32_t>(fprintf);
    while (v4 < v3) {
        v5 = reinterpret_cast<int32_t>(fprintf);
        while (v5 < v4) {
            v6 = reinterpret_cast<int32_t>(fprintf);
            while (v6 < v5) {
                *rdi1 = rsi->f0;
                rdi7 = rdi1 + 1;
                rsi8 = reinterpret_cast<struct s9*>(&rsi->f4);
                *rdi7 = rsi8->f0;
                rdi9 = rdi7 + 1;
                *rdi9 = rsi8->f4;
                rdi10 = rdi9 + 1;
                __asm__("movd rdx, xmm0");
                __asm__("movd xmm0, rdx");
                __asm__("mulsd xmm0, xmm2");
                __asm__("addsd xmm0, xmm1");
                *rdi10 = fprintf;
                rdi1 = rdi10 + 1;
                rsi = reinterpret_cast<struct s8*>(0x8000000000000004);
                ++v6;
            }
            *rdi1 = rsi->f0;
            rdi11 = rdi1 + 1;
            rsi12 = reinterpret_cast<struct s9*>(&rsi->f4);
            *rdi11 = rsi12->f0;
            rdi13 = rdi11 + 1;
            rsi14 = reinterpret_cast<struct s10*>(&rsi12->f4);
            __asm__("divsd xmm0, xmm1");
            *rdi13 = rsi14->f0;
            rdi1 = rdi13 + 1;
            rsi = reinterpret_cast<struct s8*>(&rsi14->f4);
            ++v5;
        }
        v15 = v4;
        while (v15 < v3) {
            v16 = reinterpret_cast<int32_t>(fprintf);
            while (v16 < v4) {
                *rdi1 = rsi->f0;
                rdi17 = rdi1 + 1;
                rsi18 = reinterpret_cast<struct s9*>(&rsi->f4);
                *rdi17 = rsi18->f0;
                rdi19 = rdi17 + 1;
                *rdi19 = rsi18->f4;
                rdi20 = rdi19 + 1;
                __asm__("movd rdx, xmm0");
                __asm__("movd xmm0, rdx");
                __asm__("mulsd xmm0, xmm2");
                __asm__("addsd xmm0, xmm1");
                *rdi20 = fprintf;
                rdi1 = rdi20 + 1;
                rsi = reinterpret_cast<struct s8*>(0x8000000000000004);
                ++v16;
            }
            ++v15;
        }
        ++v4;
    }
    return;
}

