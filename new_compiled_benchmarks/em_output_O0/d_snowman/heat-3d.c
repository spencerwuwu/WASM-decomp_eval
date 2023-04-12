
void fprintf();

void print_array(int32_t edi, int64_t rsi);

void fun_a1(int64_t rdi, int64_t rsi);

void fun_83(int64_t rdi, int64_t rsi) {
    int32_t eax3;
    int32_t edi4;
    int64_t rbp5;
    int64_t rbp6;
    int64_t rdi7;
    int64_t rbp8;
    int64_t v9;

    if (reinterpret_cast<int1_t>(eax3 == fprintf)) {
        edi4 = *reinterpret_cast<int32_t*>(rbp5 - 20);
        rsi = *reinterpret_cast<int64_t*>(rbp6 - 32);
        print_array(edi4, rsi);
    }
    rdi7 = *reinterpret_cast<int64_t*>(rbp8 - 32);
    fun_a1(rdi7, rsi);
    goto v9;
}

int64_t* g746 = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_757(int64_t rdi, int64_t rsi);

int64_t* g75e = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_776(int64_t rdi);

int64_t* g7de = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_7ef(int64_t rdi);

int32_t** g7f6 = reinterpret_cast<int32_t**>(0x48f0458b48388b48);

void fun_830(int64_t rdi);

int64_t* g86b = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_883(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx);

int64_t* g88a = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_89b(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx);

void print_array(int32_t edi, int64_t rsi) {
    int32_t v3;
    int64_t* rax4;
    int64_t rdi5;
    int64_t* rax6;
    int64_t rdi7;
    int32_t* rsi8;
    int32_t v9;
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

    v3 = edi;
    rax4 = g746;
    rdi5 = *rax4;
    fun_757(rdi5, 0x750);
    rax6 = g75e;
    rdi7 = *rax6;
    rsi8 = reinterpret_cast<int32_t*>(0x768);
    fun_776(rdi7);
    v9 = reinterpret_cast<int32_t>(fprintf);
    while (v9 < v3) {
        v10 = reinterpret_cast<int32_t>(fprintf);
        while (v10 < v3) {
            v11 = reinterpret_cast<int32_t>(fprintf);
            while (v11 < v3) {
                __asm__("cdq ");
                if (reinterpret_cast<int1_t>((v9 * v3 * v3 + v10 * v3 + v11) % 20 == fprintf)) {
                    rax12 = g7de;
                    rdi13 = *rax12;
                    rsi8 = reinterpret_cast<int32_t*>(0x7e8);
                    fun_7ef(rdi13);
                }
                rax14 = g7f6;
                rdi15 = *rax14;
                rcx16 = v11;
                *rdi15 = *rsi8;
                rsi8 = reinterpret_cast<int32_t*>(0x829);
                fun_830(rdi15 + 1);
                ++v11;
            }
            ++v10;
        }
        ++v9;
    }
    rax17 = g86b;
    rdi18 = *rax17;
    fun_883(rdi18, 0x875, 0x87c, rcx16);
    rax19 = g88a;
    rdi20 = *rax19;
    fun_89b(rdi20, 0x894, 0x87c, rcx16);
    return;
}

void fun_a1(int64_t rdi, int64_t rsi) {
    int64_t v3;

    goto v3;
}

void fun_7ef(int64_t rdi) {
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
    int64_t rbp19;
    int64_t rbp20;
    int64_t rbp21;
    int64_t rbp22;
    int64_t rbp23;
    int64_t rbp24;
    int64_t rbp25;
    int64_t rbp26;
    int64_t* rax27;
    int64_t rdi28;
    int64_t* rax29;
    int64_t rdi30;
    int64_t* rax31;
    int64_t rdi32;
    int64_t v33;

    while (1) {
        rax2 = g7f6;
        rdi3 = *rax2;
        rcx4 = *reinterpret_cast<int32_t*>(rbp5 - 28);
        *rdi3 = *rsi6;
        rsi6 = reinterpret_cast<int32_t*>(0x829);
        fun_830(rdi3 + 1);
        *reinterpret_cast<int32_t*>(rbp7 - 28) = *reinterpret_cast<int32_t*>(rbp8 - 28) + 1;
        while (*reinterpret_cast<int32_t*>(rbp9 - 28) >= *reinterpret_cast<int32_t*>(rbp10 - 4)) {
            *reinterpret_cast<int32_t*>(rbp11 - 24) = *reinterpret_cast<int32_t*>(rbp12 - 24) + 1;
            while (*reinterpret_cast<int32_t*>(rbp13 - 24) >= *reinterpret_cast<int32_t*>(rbp14 - 4)) {
                *reinterpret_cast<int32_t*>(rbp15 - 20) = *reinterpret_cast<int32_t*>(rbp16 - 20) + 1;
                if (*reinterpret_cast<int32_t*>(rbp17 - 20) >= *reinterpret_cast<int32_t*>(rbp18 - 4)) 
                    goto addr_864_13;
                *reinterpret_cast<int32_t*>(rbp19 - 24) = reinterpret_cast<int32_t>(fprintf);
            }
            *reinterpret_cast<int32_t*>(rbp20 - 28) = reinterpret_cast<int32_t>(fprintf);
        }
        __asm__("cdq ");
        if (!reinterpret_cast<int1_t>((*reinterpret_cast<int32_t*>(rbp21 - 20) * *reinterpret_cast<int32_t*>(rbp22 - 4) * *reinterpret_cast<int32_t*>(rbp23 - 4) + *reinterpret_cast<int32_t*>(rbp24 - 24) * *reinterpret_cast<int32_t*>(rbp25 - 4) + *reinterpret_cast<int32_t*>(rbp26 - 28)) % 20 == fprintf)) 
            continue;
        rax27 = g7de;
        rdi28 = *rax27;
        rsi6 = reinterpret_cast<int32_t*>(0x7e8);
        fun_7ef(rdi28);
    }
    addr_864_13:
    rax29 = g86b;
    rdi30 = *rax29;
    fun_883(rdi30, 0x875, 0x87c, rcx4);
    rax31 = g88a;
    rdi32 = *rax31;
    fun_89b(rdi32, 0x894, 0x87c, rcx4);
    goto v33;
}

void fun_830(int64_t rdi) {
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
    int64_t rbp14;
    int64_t rbp15;
    int64_t rbp16;
    int64_t rbp17;
    int64_t rbp18;
    int64_t rbp19;
    int64_t rbp20;
    int64_t rbp21;
    int64_t* rax22;
    int64_t rdi23;
    int32_t* rsi24;
    int32_t** rax25;
    int32_t* rdi26;
    int64_t rcx27;
    int64_t rbp28;
    int64_t* rax29;
    int64_t rdi30;
    int64_t* rax31;
    int64_t rdi32;
    int64_t v33;

    while (1) {
        *reinterpret_cast<int32_t*>(rbp2 - 28) = *reinterpret_cast<int32_t*>(rbp3 - 28) + 1;
        while (*reinterpret_cast<int32_t*>(rbp4 - 28) >= *reinterpret_cast<int32_t*>(rbp5 - 4)) {
            *reinterpret_cast<int32_t*>(rbp6 - 24) = *reinterpret_cast<int32_t*>(rbp7 - 24) + 1;
            while (*reinterpret_cast<int32_t*>(rbp8 - 24) >= *reinterpret_cast<int32_t*>(rbp9 - 4)) {
                *reinterpret_cast<int32_t*>(rbp10 - 20) = *reinterpret_cast<int32_t*>(rbp11 - 20) + 1;
                if (*reinterpret_cast<int32_t*>(rbp12 - 20) >= *reinterpret_cast<int32_t*>(rbp13 - 4)) 
                    goto addr_864_9;
                *reinterpret_cast<int32_t*>(rbp14 - 24) = reinterpret_cast<int32_t>(fprintf);
            }
            *reinterpret_cast<int32_t*>(rbp15 - 28) = reinterpret_cast<int32_t>(fprintf);
        }
        __asm__("cdq ");
        if (reinterpret_cast<int1_t>((*reinterpret_cast<int32_t*>(rbp16 - 20) * *reinterpret_cast<int32_t*>(rbp17 - 4) * *reinterpret_cast<int32_t*>(rbp18 - 4) + *reinterpret_cast<int32_t*>(rbp19 - 24) * *reinterpret_cast<int32_t*>(rbp20 - 4) + *reinterpret_cast<int32_t*>(rbp21 - 28)) % 20 == fprintf)) {
            rax22 = g7de;
            rdi23 = *rax22;
            rsi24 = reinterpret_cast<int32_t*>(0x7e8);
            fun_7ef(rdi23);
        }
        rax25 = g7f6;
        rdi26 = *rax25;
        rcx27 = *reinterpret_cast<int32_t*>(rbp28 - 28);
        *rdi26 = *rsi24;
        rsi24 = reinterpret_cast<int32_t*>(0x829);
        fun_830(rdi26 + 1);
    }
    addr_864_9:
    rax29 = g86b;
    rdi30 = *rax29;
    fun_883(rdi30, 0x875, 0x87c, rcx27);
    rax31 = g88a;
    rdi32 = *rax31;
    fun_89b(rdi32, 0x894, 0x87c, rcx27);
    goto v33;
}

void fun_757(int64_t rdi, int64_t rsi) {
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
    int64_t rbp15;
    int64_t rbp16;
    int64_t rbp17;
    int64_t rbp18;
    int64_t rbp19;
    int64_t rbp20;
    int64_t* rax21;
    int64_t rdi22;
    int32_t** rax23;
    int32_t* rdi24;
    int64_t rcx25;
    int64_t rbp26;
    int64_t rbp27;
    int64_t rbp28;
    int64_t rbp29;
    int64_t rbp30;
    int64_t rbp31;
    int64_t rbp32;
    int64_t* rax33;
    int64_t rdi34;
    int64_t* rax35;
    int64_t rdi36;
    int64_t v37;

    rax3 = g75e;
    rdi4 = *rax3;
    rsi5 = reinterpret_cast<int32_t*>(0x768);
    fun_776(rdi4);
    *reinterpret_cast<int32_t*>(rbp6 - 20) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp7 - 20) < *reinterpret_cast<int32_t*>(rbp8 - 4)) {
        *reinterpret_cast<int32_t*>(rbp9 - 24) = reinterpret_cast<int32_t>(fprintf);
        while (*reinterpret_cast<int32_t*>(rbp10 - 24) < *reinterpret_cast<int32_t*>(rbp11 - 4)) {
            *reinterpret_cast<int32_t*>(rbp12 - 28) = reinterpret_cast<int32_t>(fprintf);
            while (*reinterpret_cast<int32_t*>(rbp13 - 28) < *reinterpret_cast<int32_t*>(rbp14 - 4)) {
                __asm__("cdq ");
                if (reinterpret_cast<int1_t>((*reinterpret_cast<int32_t*>(rbp15 - 20) * *reinterpret_cast<int32_t*>(rbp16 - 4) * *reinterpret_cast<int32_t*>(rbp17 - 4) + *reinterpret_cast<int32_t*>(rbp18 - 24) * *reinterpret_cast<int32_t*>(rbp19 - 4) + *reinterpret_cast<int32_t*>(rbp20 - 28)) % 20 == fprintf)) {
                    rax21 = g7de;
                    rdi22 = *rax21;
                    rsi5 = reinterpret_cast<int32_t*>(0x7e8);
                    fun_7ef(rdi22);
                }
                rax23 = g7f6;
                rdi24 = *rax23;
                rcx25 = *reinterpret_cast<int32_t*>(rbp26 - 28);
                *rdi24 = *rsi5;
                rsi5 = reinterpret_cast<int32_t*>(0x829);
                fun_830(rdi24 + 1);
                *reinterpret_cast<int32_t*>(rbp27 - 28) = *reinterpret_cast<int32_t*>(rbp28 - 28) + 1;
            }
            *reinterpret_cast<int32_t*>(rbp29 - 24) = *reinterpret_cast<int32_t*>(rbp30 - 24) + 1;
        }
        *reinterpret_cast<int32_t*>(rbp31 - 20) = *reinterpret_cast<int32_t*>(rbp32 - 20) + 1;
    }
    rax33 = g86b;
    rdi34 = *rax33;
    fun_883(rdi34, 0x875, 0x87c, rcx25);
    rax35 = g88a;
    rdi36 = *rax35;
    fun_89b(rdi36, 0x894, 0x87c, rcx25);
    goto v37;
}

void fun_776(int64_t rdi) {
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
    int64_t rbp14;
    int64_t rbp15;
    int64_t rbp16;
    int64_t* rax17;
    int64_t rdi18;
    int32_t* rsi19;
    int32_t** rax20;
    int32_t* rdi21;
    int64_t rcx22;
    int64_t rbp23;
    int64_t rbp24;
    int64_t rbp25;
    int64_t rbp26;
    int64_t rbp27;
    int64_t rbp28;
    int64_t rbp29;
    int64_t* rax30;
    int64_t rdi31;
    int64_t* rax32;
    int64_t rdi33;
    int64_t v34;

    *reinterpret_cast<int32_t*>(rbp2 - 20) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp3 - 20) < *reinterpret_cast<int32_t*>(rbp4 - 4)) {
        *reinterpret_cast<int32_t*>(rbp5 - 24) = reinterpret_cast<int32_t>(fprintf);
        while (*reinterpret_cast<int32_t*>(rbp6 - 24) < *reinterpret_cast<int32_t*>(rbp7 - 4)) {
            *reinterpret_cast<int32_t*>(rbp8 - 28) = reinterpret_cast<int32_t>(fprintf);
            while (*reinterpret_cast<int32_t*>(rbp9 - 28) < *reinterpret_cast<int32_t*>(rbp10 - 4)) {
                __asm__("cdq ");
                if (reinterpret_cast<int1_t>((*reinterpret_cast<int32_t*>(rbp11 - 20) * *reinterpret_cast<int32_t*>(rbp12 - 4) * *reinterpret_cast<int32_t*>(rbp13 - 4) + *reinterpret_cast<int32_t*>(rbp14 - 24) * *reinterpret_cast<int32_t*>(rbp15 - 4) + *reinterpret_cast<int32_t*>(rbp16 - 28)) % 20 == fprintf)) {
                    rax17 = g7de;
                    rdi18 = *rax17;
                    rsi19 = reinterpret_cast<int32_t*>(0x7e8);
                    fun_7ef(rdi18);
                }
                rax20 = g7f6;
                rdi21 = *rax20;
                rcx22 = *reinterpret_cast<int32_t*>(rbp23 - 28);
                *rdi21 = *rsi19;
                rsi19 = reinterpret_cast<int32_t*>(0x829);
                fun_830(rdi21 + 1);
                *reinterpret_cast<int32_t*>(rbp24 - 28) = *reinterpret_cast<int32_t*>(rbp25 - 28) + 1;
            }
            *reinterpret_cast<int32_t*>(rbp26 - 24) = *reinterpret_cast<int32_t*>(rbp27 - 24) + 1;
        }
        *reinterpret_cast<int32_t*>(rbp28 - 20) = *reinterpret_cast<int32_t*>(rbp29 - 20) + 1;
    }
    rax30 = g86b;
    rdi31 = *rax30;
    fun_883(rdi31, 0x875, 0x87c, rcx22);
    rax32 = g88a;
    rdi33 = *rax32;
    fun_89b(rdi33, 0x894, 0x87c, rcx22);
    goto v34;
}

void fun_883(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t* rax5;
    int64_t rdi6;
    int64_t v7;

    rax5 = g88a;
    rdi6 = *rax5;
    fun_89b(rdi6, 0x894, rdx, rcx);
    goto v7;
}

void fun_89b(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
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

void init_array(int32_t edi, struct s1* rsi, int64_t rdx) {
    struct s0* rdi1;
    int32_t v4;
    int32_t v5;
    int32_t v6;
    int32_t v7;
    struct s2* rdi8;
    struct s3* rsi9;
    struct s4* rdi10;
    struct s5* rsi11;

    *reinterpret_cast<int32_t*>(&rdi1) = edi;
    v4 = *reinterpret_cast<int32_t*>(&rdi1);
    v5 = reinterpret_cast<int32_t>(fprintf);
    while (v5 < v4) {
        v6 = reinterpret_cast<int32_t>(fprintf);
        while (v6 < v4) {
            v7 = reinterpret_cast<int32_t>(fprintf);
            while (v7 < v4) {
                __asm__("cvtsi2sd xmm0, eax");
                rdi1->f0 = rsi->f0;
                rdi8 = reinterpret_cast<struct s2*>(&rdi1->f4);
                rsi9 = reinterpret_cast<struct s3*>(&rsi->f4);
                __asm__("mulsd xmm0, xmm1");
                __asm__("cvtsi2sd xmm1, dword [rbp-0x4]");
                __asm__("divsd xmm0, xmm1");
                rdi8->f0 = rsi9->f0;
                rdi10 = reinterpret_cast<struct s4*>(&rdi8->f4);
                rsi11 = reinterpret_cast<struct s5*>(&rsi9->f4);
                rdi10->f0 = rsi11->f0;
                rdi1 = reinterpret_cast<struct s0*>(&rdi10->f4);
                rsi = reinterpret_cast<struct s1*>(&rsi11->f4);
                ++v7;
            }
            ++v6;
        }
        ++v5;
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

struct s14 {
    int32_t f0;
    int32_t f4;
};

struct s15 {
    int32_t f0;
    int32_t f4;
};

struct s16 {
    int32_t f0;
    int32_t f4;
};

struct s17 {
    int32_t f0;
    int32_t f4;
};

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

void kernel_heat_3d(int32_t edi, int32_t esi, int64_t rdx, int64_t rcx) {
    struct s6* rdi1;
    struct s7* rsi2;
    int32_t v5;
    int32_t v6;
    int32_t v7;
    int32_t v8;
    int32_t v9;
    struct s8* rdi10;
    struct s9* rsi11;
    struct s10* rdi12;
    struct s11* rsi13;
    struct s12* rdi14;
    struct s13* rsi15;
    struct s14* rdi16;
    struct s15* rsi17;
    struct s16* rdi18;
    struct s17* rsi19;
    struct s18* rdi20;
    struct s19* rsi21;
    struct s20* rdi22;
    struct s21* rsi23;
    struct s22* rdi24;
    struct s23* rsi25;
    struct s24* rdi26;
    struct s25* rsi27;
    int32_t v28;
    int32_t v29;
    int32_t v30;
    struct s8* rdi31;
    struct s9* rsi32;
    struct s10* rdi33;
    struct s11* rsi34;
    struct s12* rdi35;
    struct s13* rsi36;
    struct s14* rdi37;
    struct s15* rsi38;
    struct s16* rdi39;
    struct s17* rsi40;
    struct s18* rdi41;
    struct s19* rsi42;
    struct s20* rdi43;
    struct s21* rsi44;
    struct s22* rdi45;
    struct s23* rsi46;
    struct s24* rdi47;
    struct s25* rsi48;

    *reinterpret_cast<int32_t*>(&rdi1) = edi;
    *reinterpret_cast<int32_t*>(&rsi2) = esi;
    v5 = *reinterpret_cast<int32_t*>(&rsi2);
    v6 = 1;
    while (v6 <= 0x1f4) {
        v7 = 1;
        while (v7 < v5 - 1) {
            v8 = 1;
            while (v8 < v5 - 1) {
                v9 = 1;
                while (v9 < v5 - 1) {
                    rdi1->f0 = rsi2->f0;
                    rdi10 = reinterpret_cast<struct s8*>(&rdi1->f4);
                    rsi11 = reinterpret_cast<struct s9*>(&rsi2->f4);
                    rdi10->f0 = rsi11->f0;
                    rdi12 = reinterpret_cast<struct s10*>(&rdi10->f4);
                    rsi13 = reinterpret_cast<struct s11*>(&rsi11->f4);
                    __asm__("addsd xmm0, xmm0");
                    __asm__("subsd xmm1, xmm0");
                    __asm__("addsd xmm1, [rax+rcx*8]");
                    rdi12->f0 = rsi13->f0;
                    rdi14 = reinterpret_cast<struct s12*>(&rdi12->f4);
                    rsi15 = reinterpret_cast<struct s13*>(&rsi13->f4);
                    rdi14->f0 = rsi15->f0;
                    rdi16 = reinterpret_cast<struct s14*>(&rdi14->f4);
                    rsi17 = reinterpret_cast<struct s15*>(&rsi15->f4);
                    __asm__("addsd xmm0, xmm0");
                    __asm__("subsd xmm2, xmm0");
                    __asm__("addsd xmm2, [rax+rcx*8]");
                    rdi16->f0 = rsi17->f0;
                    rdi18 = reinterpret_cast<struct s16*>(&rdi16->f4);
                    rsi19 = reinterpret_cast<struct s17*>(&rsi17->f4);
                    __asm__("mulsd xmm0, xmm2");
                    rdi18->f0 = rsi19->f0;
                    rdi20 = reinterpret_cast<struct s18*>(&rdi18->f4);
                    rsi21 = reinterpret_cast<struct s19*>(&rsi19->f4);
                    __asm__("mulsd xmm1, xmm2");
                    __asm__("addsd xmm1, xmm0");
                    rdi20->f0 = rsi21->f0;
                    rdi22 = reinterpret_cast<struct s20*>(&rdi20->f4);
                    rsi23 = reinterpret_cast<struct s21*>(&rsi21->f4);
                    rdi22->f0 = rsi23->f0;
                    rdi24 = reinterpret_cast<struct s22*>(&rdi22->f4);
                    rsi25 = reinterpret_cast<struct s23*>(&rsi23->f4);
                    __asm__("addsd xmm2, xmm2");
                    __asm__("subsd xmm0, xmm2");
                    __asm__("addsd xmm0, [rax+rcx*8]");
                    rdi24->f0 = rsi25->f0;
                    rdi26 = reinterpret_cast<struct s24*>(&rdi24->f4);
                    rsi27 = reinterpret_cast<struct s25*>(&rsi25->f4);
                    __asm__("mulsd xmm0, xmm2");
                    __asm__("addsd xmm0, xmm1");
                    __asm__("addsd xmm0, [rax+rcx*8]");
                    rdi26->f0 = rsi27->f0;
                    rdi1 = reinterpret_cast<struct s6*>(&rdi26->f4);
                    rsi2 = reinterpret_cast<struct s7*>(&rsi27->f4);
                    ++v9;
                }
                ++v8;
            }
            ++v7;
        }
        v28 = 1;
        while (v28 < v5 - 1) {
            v29 = 1;
            while (v29 < v5 - 1) {
                v30 = 1;
                while (v30 < v5 - 1) {
                    rdi1->f0 = rsi2->f0;
                    rdi31 = reinterpret_cast<struct s8*>(&rdi1->f4);
                    rsi32 = reinterpret_cast<struct s9*>(&rsi2->f4);
                    rdi31->f0 = rsi32->f0;
                    rdi33 = reinterpret_cast<struct s10*>(&rdi31->f4);
                    rsi34 = reinterpret_cast<struct s11*>(&rsi32->f4);
                    __asm__("addsd xmm0, xmm0");
                    __asm__("subsd xmm1, xmm0");
                    __asm__("addsd xmm1, [rax+rcx*8]");
                    rdi33->f0 = rsi34->f0;
                    rdi35 = reinterpret_cast<struct s12*>(&rdi33->f4);
                    rsi36 = reinterpret_cast<struct s13*>(&rsi34->f4);
                    rdi35->f0 = rsi36->f0;
                    rdi37 = reinterpret_cast<struct s14*>(&rdi35->f4);
                    rsi38 = reinterpret_cast<struct s15*>(&rsi36->f4);
                    __asm__("addsd xmm0, xmm0");
                    __asm__("subsd xmm2, xmm0");
                    __asm__("addsd xmm2, [rax+rcx*8]");
                    rdi37->f0 = rsi38->f0;
                    rdi39 = reinterpret_cast<struct s16*>(&rdi37->f4);
                    rsi40 = reinterpret_cast<struct s17*>(&rsi38->f4);
                    __asm__("mulsd xmm0, xmm2");
                    rdi39->f0 = rsi40->f0;
                    rdi41 = reinterpret_cast<struct s18*>(&rdi39->f4);
                    rsi42 = reinterpret_cast<struct s19*>(&rsi40->f4);
                    __asm__("mulsd xmm1, xmm2");
                    __asm__("addsd xmm1, xmm0");
                    rdi41->f0 = rsi42->f0;
                    rdi43 = reinterpret_cast<struct s20*>(&rdi41->f4);
                    rsi44 = reinterpret_cast<struct s21*>(&rsi42->f4);
                    rdi43->f0 = rsi44->f0;
                    rdi45 = reinterpret_cast<struct s22*>(&rdi43->f4);
                    rsi46 = reinterpret_cast<struct s23*>(&rsi44->f4);
                    __asm__("addsd xmm2, xmm2");
                    __asm__("subsd xmm0, xmm2");
                    __asm__("addsd xmm0, [rax+rcx*8]");
                    rdi45->f0 = rsi46->f0;
                    rdi47 = reinterpret_cast<struct s24*>(&rdi45->f4);
                    rsi48 = reinterpret_cast<struct s25*>(&rsi46->f4);
                    __asm__("mulsd xmm0, xmm2");
                    __asm__("addsd xmm0, xmm1");
                    __asm__("addsd xmm0, [rax+rcx*8]");
                    rdi47->f0 = rsi48->f0;
                    rdi1 = reinterpret_cast<struct s6*>(&rdi47->f4);
                    rsi2 = reinterpret_cast<struct s7*>(&rsi48->f4);
                    ++v30;
                }
                ++v29;
            }
            ++v28;
        }
        ++v6;
    }
    return;
}

