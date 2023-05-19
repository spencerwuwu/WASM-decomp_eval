
void fprintf(int32_t edi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8);

void print_array(int32_t edi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8);

void fun_47d(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8);

void fun_486(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8);

void fun_48f(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8);

void fun_498(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8);

int32_t fun_45f(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8) {
    int32_t eax6;
    int32_t edi7;
    int64_t rbp8;
    int64_t rbp9;
    int64_t rdi10;
    int64_t rbp11;
    int64_t rdi12;
    int64_t rbp13;
    int64_t rdi14;
    int64_t rbp15;
    int64_t rdi16;
    int64_t rbp17;
    int64_t v18;

    if (reinterpret_cast<int1_t>(eax6 == fprintf)) {
        edi7 = *reinterpret_cast<int32_t*>(rbp8 - 20);
        rsi = *reinterpret_cast<int64_t*>(rbp9 - 48);
        print_array(edi7, rsi, rdx, rcx, r8);
    }
    rdi10 = *reinterpret_cast<int64_t*>(rbp11 - 32);
    fun_47d(rdi10, rsi, rdx, rcx, r8);
    rdi12 = *reinterpret_cast<int64_t*>(rbp13 - 40);
    fun_486(rdi12, rsi, rdx, rcx, r8);
    rdi14 = *reinterpret_cast<int64_t*>(rbp15 - 48);
    fun_48f(rdi14, rsi, rdx, rcx, r8);
    rdi16 = *reinterpret_cast<int64_t*>(rbp17 - 56);
    fun_498(rdi16, rsi, rdx, rcx, r8);
    goto v18;
}

int64_t* g806 = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_817(int64_t rdi, int64_t rsi);

int64_t* g81e = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_836(int64_t rdi);

int64_t* g864 = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_875(int64_t rdi);

int32_t** g87c = reinterpret_cast<int32_t**>(0x48f0458b48388b48);

void fun_89a(int64_t rdi);

int64_t* g8af = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_8c7(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx);

int64_t* g8ce = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_8df(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx);

void print_array(int32_t edi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8) {
    int32_t v6;
    int64_t* rax7;
    int64_t rdi8;
    int64_t* rax9;
    int64_t rdi10;
    int32_t* rsi11;
    int32_t v12;
    int64_t* rax13;
    int64_t rdi14;
    int32_t** rax15;
    int32_t* rdi16;
    int64_t* rax17;
    int64_t rdi18;
    int64_t* rax19;
    int64_t rdi20;

    v6 = edi;
    rax7 = g806;
    rdi8 = *rax7;
    fun_817(rdi8, 0x810);
    rax9 = g81e;
    rdi10 = *rax9;
    rsi11 = reinterpret_cast<int32_t*>(0x828);
    fun_836(rdi10);
    v12 = reinterpret_cast<int32_t>(fprintf);
    while (v12 < v6) {
        __asm__("cdq ");
        if (reinterpret_cast<int1_t>(v12 % 20 == fprintf)) {
            rax13 = g864;
            rdi14 = *rax13;
            rsi11 = reinterpret_cast<int32_t*>(0x86e);
            fun_875(rdi14);
        }
        rax15 = g87c;
        rdi16 = *rax15;
        rcx = v12;
        *rdi16 = *rsi11;
        rsi11 = reinterpret_cast<int32_t*>(0x893);
        fun_89a(rdi16 + 1);
        ++v12;
    }
    rax17 = g8af;
    rdi18 = *rax17;
    fun_8c7(rdi18, 0x8b9, 0x8c0, rcx);
    rax19 = g8ce;
    rdi20 = *rax19;
    fun_8df(rdi20, 0x8d8, 0x8c0, rcx);
    return;
}

void fun_47d(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8) {
    int64_t rdi6;
    int64_t rbp7;
    int64_t rdi8;
    int64_t rbp9;
    int64_t rdi10;
    int64_t rbp11;
    int64_t v12;

    rdi6 = *reinterpret_cast<int64_t*>(rbp7 - 40);
    fun_486(rdi6, rsi, rdx, rcx, r8);
    rdi8 = *reinterpret_cast<int64_t*>(rbp9 - 48);
    fun_48f(rdi8, rsi, rdx, rcx, r8);
    rdi10 = *reinterpret_cast<int64_t*>(rbp11 - 56);
    fun_498(rdi10, rsi, rdx, rcx, r8);
    goto v12;
}

void fun_875(int64_t rdi) {
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
        rax2 = g87c;
        rdi3 = *rax2;
        rcx4 = *reinterpret_cast<int32_t*>(rbp5 - 20);
        *rdi3 = *rsi6;
        rsi6 = reinterpret_cast<int32_t*>(0x893);
        fun_89a(rdi3 + 1);
        *reinterpret_cast<int32_t*>(rbp7 - 20) = *reinterpret_cast<int32_t*>(rbp8 - 20) + 1;
        if (*reinterpret_cast<int32_t*>(rbp9 - 20) >= *reinterpret_cast<int32_t*>(rbp10 - 4)) 
            break;
        __asm__("cdq ");
        if (!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp11 - 20) % 20 == fprintf)) 
            continue;
        rax12 = g864;
        rdi13 = *rax12;
        rsi6 = reinterpret_cast<int32_t*>(0x86e);
        fun_875(rdi13);
    }
    rax14 = g8af;
    rdi15 = *rax14;
    fun_8c7(rdi15, 0x8b9, 0x8c0, rcx4);
    rax16 = g8ce;
    rdi17 = *rax16;
    fun_8df(rdi17, 0x8d8, 0x8c0, rcx4);
    goto v18;
}

void fun_89a(int64_t rdi) {
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
            rax7 = g864;
            rdi8 = *rax7;
            rsi9 = reinterpret_cast<int32_t*>(0x86e);
            fun_875(rdi8);
        }
        rax10 = g87c;
        rdi11 = *rax10;
        rcx12 = *reinterpret_cast<int32_t*>(rbp13 - 20);
        *rdi11 = *rsi9;
        rsi9 = reinterpret_cast<int32_t*>(0x893);
        fun_89a(rdi11 + 1);
    }
    rax14 = g8af;
    rdi15 = *rax14;
    fun_8c7(rdi15, 0x8b9, 0x8c0, rcx12);
    rax16 = g8ce;
    rdi17 = *rax16;
    fun_8df(rdi17, 0x8d8, 0x8c0, rcx12);
    goto v18;
}

void fun_817(int64_t rdi, int64_t rsi) {
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

    rax3 = g81e;
    rdi4 = *rax3;
    rsi5 = reinterpret_cast<int32_t*>(0x828);
    fun_836(rdi4);
    *reinterpret_cast<int32_t*>(rbp6 - 20) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp7 - 20) < *reinterpret_cast<int32_t*>(rbp8 - 4)) {
        __asm__("cdq ");
        if (reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp9 - 20) % 20 == fprintf)) {
            rax10 = g864;
            rdi11 = *rax10;
            rsi5 = reinterpret_cast<int32_t*>(0x86e);
            fun_875(rdi11);
        }
        rax12 = g87c;
        rdi13 = *rax12;
        rcx14 = *reinterpret_cast<int32_t*>(rbp15 - 20);
        *rdi13 = *rsi5;
        rsi5 = reinterpret_cast<int32_t*>(0x893);
        fun_89a(rdi13 + 1);
        *reinterpret_cast<int32_t*>(rbp16 - 20) = *reinterpret_cast<int32_t*>(rbp17 - 20) + 1;
    }
    rax18 = g8af;
    rdi19 = *rax18;
    fun_8c7(rdi19, 0x8b9, 0x8c0, rcx14);
    rax20 = g8ce;
    rdi21 = *rax20;
    fun_8df(rdi21, 0x8d8, 0x8c0, rcx14);
    goto v22;
}

void fun_486(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8) {
    int64_t rdi6;
    int64_t rbp7;
    int64_t rdi8;
    int64_t rbp9;
    int64_t v10;

    rdi6 = *reinterpret_cast<int64_t*>(rbp7 - 48);
    fun_48f(rdi6, rsi, rdx, rcx, r8);
    rdi8 = *reinterpret_cast<int64_t*>(rbp9 - 56);
    fun_498(rdi8, rsi, rdx, rcx, r8);
    goto v10;
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

void fun_7e6(int64_t rdi);

int64_t fun_62c() {
    int64_t rbp1;
    int64_t rax2;
    int64_t rbp3;
    int64_t rbp4;
    int64_t rbp5;
    int64_t rbp6;
    int64_t rbp7;
    int64_t rbp8;
    struct s0* rdi9;
    struct s1* rsi10;
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
    struct s2* rdi24;
    struct s3* rsi25;
    struct s0* rdi26;
    struct s1* rsi27;
    struct s2* rdi28;
    struct s3* rsi29;
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
    struct s2* rdi42;
    struct s3* rsi43;
    int64_t rbp44;
    int64_t rbp45;
    int64_t rbp46;
    int64_t rbp47;
    int64_t rdi48;
    int64_t rbp49;
    int64_t v50;

    *reinterpret_cast<int64_t*>(rbp1 - 80) = rax2;
    *reinterpret_cast<int32_t*>(rbp3 - 60) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp4 - 60) < *reinterpret_cast<int32_t*>(rbp5 - 4)) {
        *reinterpret_cast<int32_t*>(rbp6 - 64) = reinterpret_cast<int32_t>(fprintf);
        while (*reinterpret_cast<int32_t*>(rbp7 - 64) < *reinterpret_cast<int32_t*>(rbp8 - 4)) {
            __asm__("xorps xmm0, xmm0");
            rdi9->f0 = rsi10->f0;
            rdi9 = reinterpret_cast<struct s0*>(&rdi9->f4);
            rsi10 = reinterpret_cast<struct s1*>(&rsi10->f4);
            *reinterpret_cast<int32_t*>(rbp11 - 64) = *reinterpret_cast<int32_t*>(rbp12 - 64) + 1;
        }
        *reinterpret_cast<int32_t*>(rbp13 - 60) = *reinterpret_cast<int32_t*>(rbp14 - 60) + 1;
    }
    *reinterpret_cast<int32_t*>(rbp15 - 68) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp16 - 68) < *reinterpret_cast<int32_t*>(rbp17 - 4)) {
        *reinterpret_cast<int32_t*>(rbp18 - 60) = reinterpret_cast<int32_t>(fprintf);
        while (*reinterpret_cast<int32_t*>(rbp19 - 60) < *reinterpret_cast<int32_t*>(rbp20 - 4)) {
            *reinterpret_cast<int32_t*>(rbp21 - 64) = reinterpret_cast<int32_t>(fprintf);
            while (*reinterpret_cast<int32_t*>(rbp22 - 64) < *reinterpret_cast<int32_t*>(rbp23 - 4)) {
                rdi9->f0 = rsi10->f0;
                rdi24 = reinterpret_cast<struct s2*>(&rdi9->f4);
                rsi25 = reinterpret_cast<struct s3*>(&rsi10->f4);
                rdi24->f0 = rsi25->f0;
                rdi26 = reinterpret_cast<struct s0*>(&rdi24->f4);
                rsi27 = reinterpret_cast<struct s1*>(&rsi25->f4);
                rdi26->f0 = rsi27->f0;
                rdi28 = reinterpret_cast<struct s2*>(&rdi26->f4);
                rsi29 = reinterpret_cast<struct s3*>(&rsi27->f4);
                __asm__("mulsd xmm0, xmm2");
                __asm__("addsd xmm0, xmm1");
                rdi28->f0 = rsi29->f0;
                rdi9 = reinterpret_cast<struct s0*>(&rdi28->f4);
                rsi10 = reinterpret_cast<struct s1*>(&rsi29->f4);
                *reinterpret_cast<int32_t*>(rbp30 - 64) = *reinterpret_cast<int32_t*>(rbp31 - 64) + 1;
            }
            *reinterpret_cast<int32_t*>(rbp32 - 60) = *reinterpret_cast<int32_t*>(rbp33 - 60) + 1;
        }
        *reinterpret_cast<int32_t*>(rbp34 - 68) = *reinterpret_cast<int32_t*>(rbp35 - 68) + 1;
    }
    *reinterpret_cast<int32_t*>(rbp36 - 60) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp37 - 60) < *reinterpret_cast<int32_t*>(rbp38 - 4)) {
        *reinterpret_cast<int32_t*>(rbp39 - 64) = reinterpret_cast<int32_t>(fprintf);
        while (*reinterpret_cast<int32_t*>(rbp40 - 64) < *reinterpret_cast<int32_t*>(rbp41 - 4)) {
            rdi9->f0 = rsi10->f0;
            rdi42 = reinterpret_cast<struct s2*>(&rdi9->f4);
            rsi43 = reinterpret_cast<struct s3*>(&rsi10->f4);
            rdi42->f0 = rsi43->f0;
            rdi9 = reinterpret_cast<struct s0*>(&rdi42->f4);
            rsi10 = reinterpret_cast<struct s1*>(&rsi43->f4);
            *reinterpret_cast<int32_t*>(rbp44 - 64) = *reinterpret_cast<int32_t*>(rbp45 - 64) + 1;
        }
        *reinterpret_cast<int32_t*>(rbp46 - 60) = *reinterpret_cast<int32_t*>(rbp47 - 60) + 1;
    }
    rdi48 = *reinterpret_cast<int64_t*>(rbp49 - 80);
    fun_7e6(rdi48);
    goto v50;
}

int64_t fun_3e8(int64_t rdi, int64_t rsi);

int64_t fun_3fb(int64_t rdi, int64_t rsi);

int64_t fun_40e(int64_t rdi, int64_t rsi);

struct s4 {
    int32_t f0;
    int32_t f4;
};

struct s5 {
    int32_t f0;
    int32_t f4;
};

void init_array(struct s4* rdi, struct s5* rsi, int64_t rdx, int64_t rcx, int64_t r8);

void fun_442(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8);

void fun_3d5(int64_t rdi, int64_t rsi) {
    int64_t rbp3;
    int64_t rax4;
    int64_t rax5;
    int64_t rbp6;
    int64_t rax7;
    int64_t rbp8;
    int64_t rax9;
    int64_t rbp10;
    struct s4* rdi11;
    int64_t rbp12;
    struct s5* rsi13;
    int64_t rbp14;
    int64_t rdx15;
    int64_t rbp16;
    int64_t rcx17;
    int64_t rbp18;
    int64_t r8_19;
    int64_t rbp20;
    int64_t rdi21;
    int64_t rbp22;
    int64_t rsi23;
    int64_t rbp24;
    int64_t rdx25;
    int64_t rbp26;
    int64_t rcx27;
    int64_t rbp28;
    int64_t r8_29;
    int64_t rbp30;
    int64_t rbp31;
    int64_t rdi32;
    int64_t rbp33;
    int64_t rdi34;
    int64_t rbp35;
    int32_t eax36;
    int64_t rdi37;
    int64_t rbp38;
    int64_t rdi39;
    int64_t rbp40;
    int64_t rdi41;
    int64_t rbp42;
    int64_t v43;
    int32_t edi44;
    int64_t rbp45;
    int64_t rbp46;

    *reinterpret_cast<int64_t*>(rbp3 - 32) = rax4;
    rax5 = fun_3e8(0x7d0, 8);
    *reinterpret_cast<int64_t*>(rbp6 - 40) = rax5;
    rax7 = fun_3fb(0x7d0, 8);
    *reinterpret_cast<int64_t*>(rbp8 - 48) = rax7;
    rax9 = fun_40e(0x7d0, 8);
    *reinterpret_cast<int64_t*>(rbp10 - 56) = rax9;
    *reinterpret_cast<int32_t*>(&rdi11) = *reinterpret_cast<int32_t*>(rbp12 - 20);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi11) + 4) = reinterpret_cast<int32_t>(fprintf);
    rsi13 = *reinterpret_cast<struct s5**>(rbp14 - 32);
    rdx15 = *reinterpret_cast<int64_t*>(rbp16 - 40);
    rcx17 = *reinterpret_cast<int64_t*>(rbp18 - 48);
    r8_19 = *reinterpret_cast<int64_t*>(rbp20 - 56);
    init_array(rdi11, rsi13, rdx15, rcx17, r8_19);
    *reinterpret_cast<int32_t*>(&rdi21) = *reinterpret_cast<int32_t*>(rbp22 - 20);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi21) + 4) = reinterpret_cast<int32_t>(fprintf);
    rsi23 = *reinterpret_cast<int64_t*>(rbp24 - 32);
    rdx25 = *reinterpret_cast<int64_t*>(rbp26 - 40);
    rcx27 = *reinterpret_cast<int64_t*>(rbp28 - 48);
    r8_29 = *reinterpret_cast<int64_t*>(rbp30 - 56);
    fun_442(rdi21, rsi23, rdx25, rcx27, r8_29);
    if (*reinterpret_cast<int32_t*>(rbp31 - 4) <= 42) {
        addr_474_6:
        rdi32 = *reinterpret_cast<int64_t*>(rbp33 - 32);
        fun_47d(rdi32, rsi23, rdx25, rcx27, r8_29);
    } else {
        rdi34 = **reinterpret_cast<int64_t**>(rbp35 - 16);
        rsi23 = 0x45a;
        eax36 = fun_45f(rdi34, 0x45a, rdx25, rcx27, r8_29);
        if (!reinterpret_cast<int1_t>(eax36 == fprintf)) 
            goto addr_474_6; else 
            goto addr_468_9;
    }
    rdi37 = *reinterpret_cast<int64_t*>(rbp38 - 40);
    fun_486(rdi37, rsi23, rdx25, rcx27, r8_29);
    rdi39 = *reinterpret_cast<int64_t*>(rbp40 - 48);
    fun_48f(rdi39, rsi23, rdx25, rcx27, r8_29);
    rdi41 = *reinterpret_cast<int64_t*>(rbp42 - 56);
    fun_498(rdi41, rsi23, rdx25, rcx27, r8_29);
    goto v43;
    addr_468_9:
    edi44 = *reinterpret_cast<int32_t*>(rbp45 - 20);
    rsi23 = *reinterpret_cast<int64_t*>(rbp46 - 48);
    print_array(edi44, rsi23, rdx25, rcx27, r8_29);
    goto addr_474_6;
}

void fun_836(int64_t rdi) {
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
            rax6 = g864;
            rdi7 = *rax6;
            rsi8 = reinterpret_cast<int32_t*>(0x86e);
            fun_875(rdi7);
        }
        rax9 = g87c;
        rdi10 = *rax9;
        rcx11 = *reinterpret_cast<int32_t*>(rbp12 - 20);
        *rdi10 = *rsi8;
        rsi8 = reinterpret_cast<int32_t*>(0x893);
        fun_89a(rdi10 + 1);
        *reinterpret_cast<int32_t*>(rbp13 - 20) = *reinterpret_cast<int32_t*>(rbp14 - 20) + 1;
    }
    rax15 = g8af;
    rdi16 = *rax15;
    fun_8c7(rdi16, 0x8b9, 0x8c0, rcx11);
    rax17 = g8ce;
    rdi18 = *rax17;
    fun_8df(rdi18, 0x8d8, 0x8c0, rcx11);
    goto v19;
}

void fun_48f(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8) {
    int64_t rdi6;
    int64_t rbp7;
    int64_t v8;

    rdi6 = *reinterpret_cast<int64_t*>(rbp7 - 56);
    fun_498(rdi6, rsi, rdx, rcx, r8);
    goto v8;
}

void fun_8c7(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t* rax5;
    int64_t rdi6;
    int64_t v7;

    rax5 = g8ce;
    rdi6 = *rax5;
    fun_8df(rdi6, 0x8d8, rdx, rcx);
    goto v7;
}

int64_t fun_3e8(int64_t rdi, int64_t rsi) {
    int64_t rbp3;
    int64_t rax4;
    int64_t rax5;
    int64_t rbp6;
    int64_t rax7;
    int64_t rbp8;
    struct s4* rdi9;
    int64_t rbp10;
    struct s5* rsi11;
    int64_t rbp12;
    int64_t rdx13;
    int64_t rbp14;
    int64_t rcx15;
    int64_t rbp16;
    int64_t r8_17;
    int64_t rbp18;
    int64_t rdi19;
    int64_t rbp20;
    int64_t rsi21;
    int64_t rbp22;
    int64_t rdx23;
    int64_t rbp24;
    int64_t rcx25;
    int64_t rbp26;
    int64_t r8_27;
    int64_t rbp28;
    int64_t rbp29;
    int64_t rdi30;
    int64_t rbp31;
    int64_t rdi32;
    int64_t rbp33;
    int32_t eax34;
    int64_t rdi35;
    int64_t rbp36;
    int64_t rdi37;
    int64_t rbp38;
    int64_t rdi39;
    int64_t rbp40;
    int64_t v41;
    int32_t edi42;
    int64_t rbp43;
    int64_t rbp44;

    *reinterpret_cast<int64_t*>(rbp3 - 40) = rax4;
    rax5 = fun_3fb(0x7d0, 8);
    *reinterpret_cast<int64_t*>(rbp6 - 48) = rax5;
    rax7 = fun_40e(0x7d0, 8);
    *reinterpret_cast<int64_t*>(rbp8 - 56) = rax7;
    *reinterpret_cast<int32_t*>(&rdi9) = *reinterpret_cast<int32_t*>(rbp10 - 20);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi9) + 4) = reinterpret_cast<int32_t>(fprintf);
    rsi11 = *reinterpret_cast<struct s5**>(rbp12 - 32);
    rdx13 = *reinterpret_cast<int64_t*>(rbp14 - 40);
    rcx15 = *reinterpret_cast<int64_t*>(rbp16 - 48);
    r8_17 = *reinterpret_cast<int64_t*>(rbp18 - 56);
    init_array(rdi9, rsi11, rdx13, rcx15, r8_17);
    *reinterpret_cast<int32_t*>(&rdi19) = *reinterpret_cast<int32_t*>(rbp20 - 20);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi19) + 4) = reinterpret_cast<int32_t>(fprintf);
    rsi21 = *reinterpret_cast<int64_t*>(rbp22 - 32);
    rdx23 = *reinterpret_cast<int64_t*>(rbp24 - 40);
    rcx25 = *reinterpret_cast<int64_t*>(rbp26 - 48);
    r8_27 = *reinterpret_cast<int64_t*>(rbp28 - 56);
    fun_442(rdi19, rsi21, rdx23, rcx25, r8_27);
    if (*reinterpret_cast<int32_t*>(rbp29 - 4) <= 42) {
        addr_474_5:
        rdi30 = *reinterpret_cast<int64_t*>(rbp31 - 32);
        fun_47d(rdi30, rsi21, rdx23, rcx25, r8_27);
    } else {
        rdi32 = **reinterpret_cast<int64_t**>(rbp33 - 16);
        rsi21 = 0x45a;
        eax34 = fun_45f(rdi32, 0x45a, rdx23, rcx25, r8_27);
        if (!reinterpret_cast<int1_t>(eax34 == fprintf)) 
            goto addr_474_5; else 
            goto addr_468_8;
    }
    rdi35 = *reinterpret_cast<int64_t*>(rbp36 - 40);
    fun_486(rdi35, rsi21, rdx23, rcx25, r8_27);
    rdi37 = *reinterpret_cast<int64_t*>(rbp38 - 48);
    fun_48f(rdi37, rsi21, rdx23, rcx25, r8_27);
    rdi39 = *reinterpret_cast<int64_t*>(rbp40 - 56);
    fun_498(rdi39, rsi21, rdx23, rcx25, r8_27);
    goto v41;
    addr_468_8:
    edi42 = *reinterpret_cast<int32_t*>(rbp43 - 20);
    rsi21 = *reinterpret_cast<int64_t*>(rbp44 - 48);
    print_array(edi42, rsi21, rdx23, rcx25, r8_27);
    goto addr_474_5;
}

void fun_498(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8) {
    int64_t v6;

    goto v6;
}

void fun_7e6(int64_t rdi) {
    int64_t v2;

    goto v2;
}

void fun_8df(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t v5;

    goto v5;
}

int64_t fun_3fb(int64_t rdi, int64_t rsi) {
    int64_t rbp3;
    int64_t rax4;
    int64_t rax5;
    int64_t rbp6;
    struct s4* rdi7;
    int64_t rbp8;
    struct s5* rsi9;
    int64_t rbp10;
    int64_t rdx11;
    int64_t rbp12;
    int64_t rcx13;
    int64_t rbp14;
    int64_t r8_15;
    int64_t rbp16;
    int64_t rdi17;
    int64_t rbp18;
    int64_t rsi19;
    int64_t rbp20;
    int64_t rdx21;
    int64_t rbp22;
    int64_t rcx23;
    int64_t rbp24;
    int64_t r8_25;
    int64_t rbp26;
    int64_t rbp27;
    int64_t rdi28;
    int64_t rbp29;
    int64_t rdi30;
    int64_t rbp31;
    int32_t eax32;
    int64_t rdi33;
    int64_t rbp34;
    int64_t rdi35;
    int64_t rbp36;
    int64_t rdi37;
    int64_t rbp38;
    int64_t v39;
    int32_t edi40;
    int64_t rbp41;
    int64_t rbp42;

    *reinterpret_cast<int64_t*>(rbp3 - 48) = rax4;
    rax5 = fun_40e(0x7d0, 8);
    *reinterpret_cast<int64_t*>(rbp6 - 56) = rax5;
    *reinterpret_cast<int32_t*>(&rdi7) = *reinterpret_cast<int32_t*>(rbp8 - 20);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi7) + 4) = reinterpret_cast<int32_t>(fprintf);
    rsi9 = *reinterpret_cast<struct s5**>(rbp10 - 32);
    rdx11 = *reinterpret_cast<int64_t*>(rbp12 - 40);
    rcx13 = *reinterpret_cast<int64_t*>(rbp14 - 48);
    r8_15 = *reinterpret_cast<int64_t*>(rbp16 - 56);
    init_array(rdi7, rsi9, rdx11, rcx13, r8_15);
    *reinterpret_cast<int32_t*>(&rdi17) = *reinterpret_cast<int32_t*>(rbp18 - 20);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi17) + 4) = reinterpret_cast<int32_t>(fprintf);
    rsi19 = *reinterpret_cast<int64_t*>(rbp20 - 32);
    rdx21 = *reinterpret_cast<int64_t*>(rbp22 - 40);
    rcx23 = *reinterpret_cast<int64_t*>(rbp24 - 48);
    r8_25 = *reinterpret_cast<int64_t*>(rbp26 - 56);
    fun_442(rdi17, rsi19, rdx21, rcx23, r8_25);
    if (*reinterpret_cast<int32_t*>(rbp27 - 4) <= 42) {
        addr_474_4:
        rdi28 = *reinterpret_cast<int64_t*>(rbp29 - 32);
        fun_47d(rdi28, rsi19, rdx21, rcx23, r8_25);
    } else {
        rdi30 = **reinterpret_cast<int64_t**>(rbp31 - 16);
        rsi19 = 0x45a;
        eax32 = fun_45f(rdi30, 0x45a, rdx21, rcx23, r8_25);
        if (!reinterpret_cast<int1_t>(eax32 == fprintf)) 
            goto addr_474_4; else 
            goto addr_468_7;
    }
    rdi33 = *reinterpret_cast<int64_t*>(rbp34 - 40);
    fun_486(rdi33, rsi19, rdx21, rcx23, r8_25);
    rdi35 = *reinterpret_cast<int64_t*>(rbp36 - 48);
    fun_48f(rdi35, rsi19, rdx21, rcx23, r8_25);
    rdi37 = *reinterpret_cast<int64_t*>(rbp38 - 56);
    fun_498(rdi37, rsi19, rdx21, rcx23, r8_25);
    goto v39;
    addr_468_7:
    edi40 = *reinterpret_cast<int32_t*>(rbp41 - 20);
    rsi19 = *reinterpret_cast<int64_t*>(rbp42 - 48);
    print_array(edi40, rsi19, rdx21, rcx23, r8_25);
    goto addr_474_4;
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

void init_array(struct s4* rdi, struct s5* rsi, int64_t rdx, int64_t rcx, int64_t r8) {
    int32_t v6;
    int32_t* rdi7;
    int32_t* rsi8;
    int32_t v9;
    int32_t* rdi10;
    int32_t* rsi11;
    int32_t* rdi12;
    int32_t* rsi13;
    int32_t* rdi14;
    int32_t* rsi15;
    int32_t* rdi16;
    int32_t* rsi17;
    int32_t v18;
    int32_t v19;
    int32_t* rdi20;
    int32_t* rsi21;
    int32_t v22;
    int32_t* rdi23;
    int32_t* rsi24;
    struct s6* rdi25;
    struct s7* rsi26;
    int64_t rax27;
    int64_t v28;
    int32_t v29;
    int32_t v30;
    int32_t v31;
    int32_t v32;
    int32_t v33;
    struct s8* rdi34;
    struct s9* rsi35;
    struct s6* rdi36;
    struct s7* rsi37;
    struct s8* rdi38;
    struct s9* rsi39;
    int32_t v40;
    int32_t v41;
    struct s8* rdi42;
    struct s9* rsi43;

    v6 = *reinterpret_cast<int32_t*>(&rdi);
    __asm__("cvtsi2sd xmm0, dword [rbp-0x4]");
    rdi->f0 = rsi->f0;
    rdi7 = &rdi->f4;
    rsi8 = &rsi->f4;
    v9 = reinterpret_cast<int32_t>(fprintf);
    while (v9 < v6) {
        __asm__("xorps xmm0, xmm0");
        *rdi7 = *rsi8;
        rdi10 = rdi7 + 1;
        rsi11 = rsi8 + 1;
        __asm__("xorps xmm0, xmm0");
        *rdi10 = *rsi11;
        rdi12 = rdi10 + 1;
        rsi13 = rsi11 + 1;
        __asm__("cvtsi2sd xmm0, eax");
        __asm__("divsd xmm0, [rbp-0x38]");
        *rdi12 = *rsi13;
        rdi14 = rdi12 + 1;
        rsi15 = rsi13 + 1;
        __asm__("divsd xmm0, xmm1");
        *rdi14 = *rsi15;
        rdi16 = rdi14 + 1;
        rsi17 = rsi15 + 1;
        __asm__("addsd xmm0, xmm1");
        *rdi16 = *rsi17;
        rdi7 = rdi16 + 1;
        rsi8 = rsi17 + 1;
        ++v9;
    }
    v18 = reinterpret_cast<int32_t>(fprintf);
    while (v18 < v6) {
        v19 = reinterpret_cast<int32_t>(fprintf);
        while (v19 <= v18) {
            __asm__("cdq ");
            __asm__("cvtsi2sd xmm0, edx");
            __asm__("cvtsi2sd xmm1, dword [rbp-0x4]");
            __asm__("divsd xmm0, xmm1");
            *rdi7 = *rsi8;
            rdi20 = rdi7 + 1;
            rsi21 = rsi8 + 1;
            __asm__("addsd xmm0, xmm1");
            *rdi20 = *rsi21;
            rdi7 = rdi20 + 1;
            rsi8 = rsi21 + 1;
            ++v19;
        }
        v22 = v18 + 1;
        while (v22 < v6) {
            __asm__("xorps xmm0, xmm0");
            *rdi7 = *rsi8;
            ++rdi7;
            ++rsi8;
            ++v22;
        }
        *rdi7 = *rsi8;
        rdi23 = rdi7 + 1;
        rsi24 = rsi8 + 1;
        *rdi23 = *rsi24;
        rdi7 = rdi23 + 1;
        rsi8 = rsi24 + 1;
        ++v18;
    }
    *reinterpret_cast<int32_t*>(&rdi25) = 0x3d0900;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi25) + 4) = reinterpret_cast<int32_t>(fprintf);
    *reinterpret_cast<int32_t*>(&rsi26) = 8;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi26) + 4) = reinterpret_cast<int32_t>(fprintf);
    rax27 = fun_62c();
    v28 = rax27;
    v29 = reinterpret_cast<int32_t>(fprintf);
    while (v29 < v6) {
        v30 = reinterpret_cast<int32_t>(fprintf);
        while (v30 < v6) {
            __asm__("xorps xmm0, xmm0");
            rdi25->f0 = rsi26->f0;
            rdi25 = reinterpret_cast<struct s6*>(&rdi25->f4);
            rsi26 = reinterpret_cast<struct s7*>(&rsi26->f4);
            ++v30;
        }
        ++v29;
    }
    v31 = reinterpret_cast<int32_t>(fprintf);
    while (v31 < v6) {
        v32 = reinterpret_cast<int32_t>(fprintf);
        while (v32 < v6) {
            v33 = reinterpret_cast<int32_t>(fprintf);
            while (v33 < v6) {
                rdi25->f0 = rsi26->f0;
                rdi34 = reinterpret_cast<struct s8*>(&rdi25->f4);
                rsi35 = reinterpret_cast<struct s9*>(&rsi26->f4);
                rdi34->f0 = rsi35->f0;
                rdi36 = reinterpret_cast<struct s6*>(&rdi34->f4);
                rsi37 = reinterpret_cast<struct s7*>(&rsi35->f4);
                rdi36->f0 = rsi37->f0;
                rdi38 = reinterpret_cast<struct s8*>(&rdi36->f4);
                rsi39 = reinterpret_cast<struct s9*>(&rsi37->f4);
                __asm__("mulsd xmm0, xmm2");
                __asm__("addsd xmm0, xmm1");
                rdi38->f0 = rsi39->f0;
                rdi25 = reinterpret_cast<struct s6*>(&rdi38->f4);
                rsi26 = reinterpret_cast<struct s7*>(&rsi39->f4);
                ++v33;
            }
            ++v32;
        }
        ++v31;
    }
    v40 = reinterpret_cast<int32_t>(fprintf);
    while (v40 < v6) {
        v41 = reinterpret_cast<int32_t>(fprintf);
        while (v41 < v6) {
            rdi25->f0 = rsi26->f0;
            rdi42 = reinterpret_cast<struct s8*>(&rdi25->f4);
            rsi43 = reinterpret_cast<struct s9*>(&rsi26->f4);
            rdi42->f0 = rsi43->f0;
            rdi25 = reinterpret_cast<struct s6*>(&rdi42->f4);
            rsi26 = reinterpret_cast<struct s7*>(&rsi43->f4);
            ++v41;
        }
        ++v40;
    }
    fun_7e6(v28);
    return;
}

int64_t fun_40e(int64_t rdi, int64_t rsi) {
    int64_t rbp3;
    int64_t rax4;
    struct s4* rdi5;
    int64_t rbp6;
    struct s5* rsi7;
    int64_t rbp8;
    int64_t rdx9;
    int64_t rbp10;
    int64_t rcx11;
    int64_t rbp12;
    int64_t r8_13;
    int64_t rbp14;
    int64_t rdi15;
    int64_t rbp16;
    int64_t rsi17;
    int64_t rbp18;
    int64_t rdx19;
    int64_t rbp20;
    int64_t rcx21;
    int64_t rbp22;
    int64_t r8_23;
    int64_t rbp24;
    int64_t rbp25;
    int64_t rdi26;
    int64_t rbp27;
    int64_t rdi28;
    int64_t rbp29;
    int32_t eax30;
    int64_t rdi31;
    int64_t rbp32;
    int64_t rdi33;
    int64_t rbp34;
    int64_t rdi35;
    int64_t rbp36;
    int64_t v37;
    int32_t edi38;
    int64_t rbp39;
    int64_t rbp40;

    *reinterpret_cast<int64_t*>(rbp3 - 56) = rax4;
    *reinterpret_cast<int32_t*>(&rdi5) = *reinterpret_cast<int32_t*>(rbp6 - 20);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi5) + 4) = reinterpret_cast<int32_t>(fprintf);
    rsi7 = *reinterpret_cast<struct s5**>(rbp8 - 32);
    rdx9 = *reinterpret_cast<int64_t*>(rbp10 - 40);
    rcx11 = *reinterpret_cast<int64_t*>(rbp12 - 48);
    r8_13 = *reinterpret_cast<int64_t*>(rbp14 - 56);
    init_array(rdi5, rsi7, rdx9, rcx11, r8_13);
    *reinterpret_cast<int32_t*>(&rdi15) = *reinterpret_cast<int32_t*>(rbp16 - 20);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi15) + 4) = reinterpret_cast<int32_t>(fprintf);
    rsi17 = *reinterpret_cast<int64_t*>(rbp18 - 32);
    rdx19 = *reinterpret_cast<int64_t*>(rbp20 - 40);
    rcx21 = *reinterpret_cast<int64_t*>(rbp22 - 48);
    r8_23 = *reinterpret_cast<int64_t*>(rbp24 - 56);
    fun_442(rdi15, rsi17, rdx19, rcx21, r8_23);
    if (*reinterpret_cast<int32_t*>(rbp25 - 4) <= 42) {
        addr_474_3:
        rdi26 = *reinterpret_cast<int64_t*>(rbp27 - 32);
        fun_47d(rdi26, rsi17, rdx19, rcx21, r8_23);
    } else {
        rdi28 = **reinterpret_cast<int64_t**>(rbp29 - 16);
        rsi17 = 0x45a;
        eax30 = fun_45f(rdi28, 0x45a, rdx19, rcx21, r8_23);
        if (!reinterpret_cast<int1_t>(eax30 == fprintf)) 
            goto addr_474_3; else 
            goto addr_468_6;
    }
    rdi31 = *reinterpret_cast<int64_t*>(rbp32 - 40);
    fun_486(rdi31, rsi17, rdx19, rcx21, r8_23);
    rdi33 = *reinterpret_cast<int64_t*>(rbp34 - 48);
    fun_48f(rdi33, rsi17, rdx19, rcx21, r8_23);
    rdi35 = *reinterpret_cast<int64_t*>(rbp36 - 56);
    fun_498(rdi35, rsi17, rdx19, rcx21, r8_23);
    goto v37;
    addr_468_6:
    edi38 = *reinterpret_cast<int32_t*>(rbp39 - 20);
    rsi17 = *reinterpret_cast<int64_t*>(rbp40 - 48);
    print_array(edi38, rsi17, rdx19, rcx21, r8_23);
    goto addr_474_3;
}

void fun_442(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8) {
    int64_t rbp6;
    int64_t rdi7;
    int64_t rbp8;
    int64_t rdi9;
    int64_t rbp10;
    int32_t eax11;
    int64_t rdi12;
    int64_t rbp13;
    int64_t rdi14;
    int64_t rbp15;
    int64_t rdi16;
    int64_t rbp17;
    int64_t v18;
    int32_t edi19;
    int64_t rbp20;
    int64_t rbp21;

    if (*reinterpret_cast<int32_t*>(rbp6 - 4) <= 42) {
        addr_474_2:
        rdi7 = *reinterpret_cast<int64_t*>(rbp8 - 32);
        fun_47d(rdi7, rsi, rdx, rcx, r8);
    } else {
        rdi9 = **reinterpret_cast<int64_t**>(rbp10 - 16);
        rsi = 0x45a;
        eax11 = fun_45f(rdi9, 0x45a, rdx, rcx, r8);
        if (!reinterpret_cast<int1_t>(eax11 == fprintf)) 
            goto addr_474_2; else 
            goto addr_468_5;
    }
    rdi12 = *reinterpret_cast<int64_t*>(rbp13 - 40);
    fun_486(rdi12, rsi, rdx, rcx, r8);
    rdi14 = *reinterpret_cast<int64_t*>(rbp15 - 48);
    fun_48f(rdi14, rsi, rdx, rcx, r8);
    rdi16 = *reinterpret_cast<int64_t*>(rbp17 - 56);
    fun_498(rdi16, rsi, rdx, rcx, r8);
    goto v18;
    addr_468_5:
    edi19 = *reinterpret_cast<int32_t*>(rbp20 - 20);
    rsi = *reinterpret_cast<int64_t*>(rbp21 - 48);
    print_array(edi19, rsi, rdx, rcx, r8);
    goto addr_474_2;
}

void fprintf(int32_t edi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8) {
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

void fun_74(struct s10* rdi, struct s11* rsi) {
    struct s12* rdi3;
    struct s13* rsi4;
    struct s14* rdi5;
    struct s15* rsi6;
    int64_t rbp7;
    int64_t rbp8;

    rdi->f0 = rsi->f0;
    rdi3 = reinterpret_cast<struct s12*>(&rdi->f4);
    rsi4 = reinterpret_cast<struct s13*>(&rsi->f4);
    rdi3->f0 = rsi4->f0;
    rdi5 = reinterpret_cast<struct s14*>(&rdi3->f4);
    rsi6 = reinterpret_cast<struct s15*>(&rsi4->f4);
    rdi5->f0 = rsi6->f0;
    __asm__("movd rax, xmm0");
    __asm__("movd xmm0, rax");
    __asm__("mulsd xmm0, xmm2");
    __asm__("addsd xmm0, xmm1");
    rdi5->f4 = rsi6->f4;
    *reinterpret_cast<int32_t*>(rbp7 - 52) = *reinterpret_cast<int32_t*>(rbp8 - 52) + 1;
}

struct s16 {
    int32_t f0;
    int32_t f4;
};

struct s17 {
    int32_t f0;
    int32_t f4;
};

void fun_dd(struct s16* rdi, struct s17* rsi) {
    int64_t rbp3;
    int64_t rbp4;

    rdi->f0 = rsi->f0;
    __asm__("divsd xmm0, [rax+rcx*8]");
    rdi->f4 = rsi->f4;
    *reinterpret_cast<int32_t*>(rbp3 - 48) = *reinterpret_cast<int32_t*>(rbp4 - 48) + 1;
}

struct s18 {
    int32_t f0;
    int32_t f4;
};

struct s19 {
    int32_t f0;
    int32_t f4;
};

struct s20 {
    int32_t f0;
    int32_t f4;
};

struct s21 {
    int32_t f0;
    int32_t f4;
};

struct s22 {
    int32_t f0;
    int32_t f4;
};

struct s23 {
    int32_t f0;
    int32_t f4;
};

struct s24 {
    int32_t f0;
    int32_t f4;
};

struct s25 {
    int32_t f0;
    int32_t f4;
};

void fun_126() {
    int64_t rbp1;
    int64_t rbp2;
    int64_t rbp3;
    int64_t rbp4;
    struct s18* rdi5;
    struct s19* rsi6;
    struct s20* rdi7;
    struct s21* rsi8;
    struct s22* rdi9;
    struct s23* rsi10;
    int64_t rbp11;
    int64_t rbp12;
    int64_t rbp13;
    struct s24* rdi14;
    struct s25* rsi15;
    struct s18* rdi16;
    struct s19* rsi17;
    struct s20* rdi18;
    struct s21* rsi19;
    int64_t rbp20;
    int64_t rbp21;
    struct s24* rdi22;
    struct s25* rsi23;
    int64_t rbp24;
    int64_t rbp25;
    int64_t rbp26;
    int64_t rbp27;

    *reinterpret_cast<int32_t*>(rbp1 - 48) = *reinterpret_cast<int32_t*>(rbp2 - 44);
    while (*reinterpret_cast<int32_t*>(rbp3 - 48) < *reinterpret_cast<int32_t*>(rbp4 - 4)) {
        rdi5->f0 = rsi6->f0;
        rdi7 = reinterpret_cast<struct s20*>(&rdi5->f4);
        rsi8 = reinterpret_cast<struct s21*>(&rsi6->f4);
        rdi7->f0 = rsi8->f0;
        rdi9 = reinterpret_cast<struct s22*>(&rdi7->f4);
        rsi10 = reinterpret_cast<struct s23*>(&rsi8->f4);
        *reinterpret_cast<int32_t*>(rbp11 - 52) = reinterpret_cast<int32_t>(fprintf);
        while (*reinterpret_cast<int32_t*>(rbp12 - 52) < *reinterpret_cast<int32_t*>(rbp13 - 44)) {
            rdi9->f0 = rsi10->f0;
            rdi14 = reinterpret_cast<struct s24*>(&rdi9->f4);
            rsi15 = reinterpret_cast<struct s25*>(&rsi10->f4);
            rdi14->f0 = rsi15->f0;
            rdi16 = reinterpret_cast<struct s18*>(&rdi14->f4);
            rsi17 = reinterpret_cast<struct s19*>(&rsi15->f4);
            rdi16->f0 = rsi17->f0;
            rdi18 = reinterpret_cast<struct s20*>(&rdi16->f4);
            rsi19 = reinterpret_cast<struct s21*>(&rsi17->f4);
            __asm__("movd rax, xmm0");
            __asm__("movd xmm0, rax");
            __asm__("mulsd xmm0, xmm2");
            __asm__("addsd xmm0, xmm1");
            rdi18->f0 = rsi19->f0;
            rdi9 = reinterpret_cast<struct s22*>(&rdi18->f4);
            rsi10 = reinterpret_cast<struct s23*>(&rsi19->f4);
            *reinterpret_cast<int32_t*>(rbp20 - 52) = *reinterpret_cast<int32_t*>(rbp21 - 52) + 1;
        }
        rdi9->f0 = rsi10->f0;
        rdi22 = reinterpret_cast<struct s24*>(&rdi9->f4);
        rsi23 = reinterpret_cast<struct s25*>(&rsi10->f4);
        rdi22->f0 = rsi23->f0;
        rdi5 = reinterpret_cast<struct s18*>(&rdi22->f4);
        rsi6 = reinterpret_cast<struct s19*>(&rsi23->f4);
        *reinterpret_cast<int32_t*>(rbp24 - 48) = *reinterpret_cast<int32_t*>(rbp25 - 48) + 1;
    }
    *reinterpret_cast<int32_t*>(rbp26 - 44) = *reinterpret_cast<int32_t*>(rbp27 - 44) + 1;
    goto 30;
}

void submain(int32_t edi, int64_t rsi) {
    fun_3d5(0x3d0900, 8);
}

struct s26 {
    int32_t f0;
    int32_t f4;
};

struct s27 {
    int32_t f0;
    int32_t f4;
};

struct s28 {
    int32_t f0;
    int32_t f4;
};

struct s29 {
    int32_t f0;
    int32_t f4;
};

struct s30 {
    int32_t f0;
    int32_t f4;
};

struct s31 {
    int32_t f0;
    int32_t f4;
};

struct s32 {
    int32_t f0;
    int32_t f4;
};

struct s33 {
    int32_t f0;
    int32_t f4;
};

void fun_219() {
    int64_t rbp1;
    int64_t rbp2;
    int64_t rbp3;
    struct s26* rdi4;
    struct s27* rsi5;
    struct s28* rdi6;
    struct s29* rsi7;
    struct s30* rdi8;
    struct s31* rsi9;
    int64_t rbp10;
    int64_t rbp11;
    int64_t rbp12;
    struct s32* rdi13;
    struct s33* rsi14;
    struct s26* rdi15;
    struct s27* rsi16;
    struct s28* rdi17;
    struct s29* rsi18;
    int64_t rbp19;
    int64_t rbp20;
    struct s32* rdi21;
    struct s33* rsi22;
    int64_t rbp23;
    int64_t rbp24;
    int64_t rbp25;
    int64_t rbp26;
    int64_t rbp27;
    struct s28* rdi28;
    struct s29* rsi29;
    struct s30* rdi30;
    struct s31* rsi31;
    int64_t rbp32;
    int64_t rbp33;
    int64_t rbp34;
    int64_t rbp35;
    struct s32* rdi36;
    struct s33* rsi37;
    struct s26* rdi38;
    struct s27* rsi39;
    struct s28* rdi40;
    struct s29* rsi41;
    int64_t rbp42;
    int64_t rbp43;
    struct s32* rdi44;
    struct s33* rsi45;
    int64_t rbp46;
    int64_t rbp47;
    int64_t v48;

    *reinterpret_cast<int32_t*>(rbp1 - 44) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp2 - 44) < *reinterpret_cast<int32_t*>(rbp3 - 4)) {
        rdi4->f0 = rsi5->f0;
        rdi6 = reinterpret_cast<struct s28*>(&rdi4->f4);
        rsi7 = reinterpret_cast<struct s29*>(&rsi5->f4);
        rdi6->f0 = rsi7->f0;
        rdi8 = reinterpret_cast<struct s30*>(&rdi6->f4);
        rsi9 = reinterpret_cast<struct s31*>(&rsi7->f4);
        *reinterpret_cast<int32_t*>(rbp10 - 48) = reinterpret_cast<int32_t>(fprintf);
        while (*reinterpret_cast<int32_t*>(rbp11 - 48) < *reinterpret_cast<int32_t*>(rbp12 - 44)) {
            rdi8->f0 = rsi9->f0;
            rdi13 = reinterpret_cast<struct s32*>(&rdi8->f4);
            rsi14 = reinterpret_cast<struct s33*>(&rsi9->f4);
            rdi13->f0 = rsi14->f0;
            rdi15 = reinterpret_cast<struct s26*>(&rdi13->f4);
            rsi16 = reinterpret_cast<struct s27*>(&rsi14->f4);
            rdi15->f0 = rsi16->f0;
            rdi17 = reinterpret_cast<struct s28*>(&rdi15->f4);
            rsi18 = reinterpret_cast<struct s29*>(&rsi16->f4);
            __asm__("movd rax, xmm0");
            __asm__("movd xmm0, rax");
            __asm__("mulsd xmm0, xmm2");
            __asm__("addsd xmm0, xmm1");
            rdi17->f0 = rsi18->f0;
            rdi8 = reinterpret_cast<struct s30*>(&rdi17->f4);
            rsi9 = reinterpret_cast<struct s31*>(&rsi18->f4);
            *reinterpret_cast<int32_t*>(rbp19 - 48) = *reinterpret_cast<int32_t*>(rbp20 - 48) + 1;
        }
        rdi8->f0 = rsi9->f0;
        rdi21 = reinterpret_cast<struct s32*>(&rdi8->f4);
        rsi22 = reinterpret_cast<struct s33*>(&rsi9->f4);
        rdi21->f0 = rsi22->f0;
        rdi4 = reinterpret_cast<struct s26*>(&rdi21->f4);
        rsi5 = reinterpret_cast<struct s27*>(&rsi22->f4);
        *reinterpret_cast<int32_t*>(rbp23 - 44) = *reinterpret_cast<int32_t*>(rbp24 - 44) + 1;
    }
    *reinterpret_cast<int32_t*>(rbp25 - 44) = *reinterpret_cast<int32_t*>(rbp26 - 4) - 1;
    while (*reinterpret_cast<int32_t*>(rbp27 - 44) >= reinterpret_cast<int32_t>(fprintf)) {
        rdi4->f0 = rsi5->f0;
        rdi28 = reinterpret_cast<struct s28*>(&rdi4->f4);
        rsi29 = reinterpret_cast<struct s29*>(&rsi5->f4);
        rdi28->f0 = rsi29->f0;
        rdi30 = reinterpret_cast<struct s30*>(&rdi28->f4);
        rsi31 = reinterpret_cast<struct s31*>(&rsi29->f4);
        *reinterpret_cast<int32_t*>(rbp32 - 48) = *reinterpret_cast<int32_t*>(rbp33 - 44) + 1;
        while (*reinterpret_cast<int32_t*>(rbp34 - 48) < *reinterpret_cast<int32_t*>(rbp35 - 4)) {
            rdi30->f0 = rsi31->f0;
            rdi36 = reinterpret_cast<struct s32*>(&rdi30->f4);
            rsi37 = reinterpret_cast<struct s33*>(&rsi31->f4);
            rdi36->f0 = rsi37->f0;
            rdi38 = reinterpret_cast<struct s26*>(&rdi36->f4);
            rsi39 = reinterpret_cast<struct s27*>(&rsi37->f4);
            rdi38->f0 = rsi39->f0;
            rdi40 = reinterpret_cast<struct s28*>(&rdi38->f4);
            rsi41 = reinterpret_cast<struct s29*>(&rsi39->f4);
            __asm__("movd rax, xmm0");
            __asm__("movd xmm0, rax");
            __asm__("mulsd xmm0, xmm2");
            __asm__("addsd xmm0, xmm1");
            rdi40->f0 = rsi41->f0;
            rdi30 = reinterpret_cast<struct s30*>(&rdi40->f4);
            rsi31 = reinterpret_cast<struct s31*>(&rsi41->f4);
            *reinterpret_cast<int32_t*>(rbp42 - 48) = *reinterpret_cast<int32_t*>(rbp43 - 48) + 1;
        }
        rdi30->f0 = rsi31->f0;
        rdi44 = reinterpret_cast<struct s32*>(&rdi30->f4);
        rsi45 = reinterpret_cast<struct s33*>(&rsi31->f4);
        __asm__("divsd xmm0, [rax+rcx*8]");
        rdi44->f0 = rsi45->f0;
        rdi4 = reinterpret_cast<struct s26*>(&rdi44->f4);
        rsi5 = reinterpret_cast<struct s27*>(&rsi45->f4);
        *reinterpret_cast<int32_t*>(rbp46 - 44) = *reinterpret_cast<int32_t*>(rbp47 - 44) - 1;
    }
    goto v48;
}

