
void fprintf(int32_t edi, int32_t esi, int64_t rdx, int64_t rcx);

void print_array(int32_t edi, int64_t rsi, int64_t rdx, int64_t rcx);

void fun_621(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx);

int32_t fun_603(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int32_t eax5;
    int32_t edi6;
    int64_t rbp7;
    int64_t rbp8;
    int64_t rdi9;
    int64_t rbp10;
    int64_t v11;

    if (reinterpret_cast<int1_t>(eax5 == fprintf)) {
        edi6 = *reinterpret_cast<int32_t*>(rbp7 - 20);
        rsi = *reinterpret_cast<int64_t*>(rbp8 - 32);
        print_array(edi6, rsi, rdx, rcx);
    }
    rdi9 = *reinterpret_cast<int64_t*>(rbp10 - 32);
    fun_621(rdi9, rsi, rdx, rcx);
    goto v11;
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

void print_array(int32_t edi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int32_t v5;
    int64_t* rax6;
    int64_t rdi7;
    int64_t* rax8;
    int64_t rdi9;
    int32_t* rsi10;
    int32_t v11;
    int32_t v12;
    int32_t v13;
    int64_t* rax14;
    int64_t rdi15;
    int32_t** rax16;
    int32_t* rdi17;
    int64_t* rax18;
    int64_t rdi19;
    int64_t* rax20;
    int64_t rdi21;

    v5 = edi;
    rax6 = g746;
    rdi7 = *rax6;
    fun_757(rdi7, 0x750);
    rax8 = g75e;
    rdi9 = *rax8;
    rsi10 = reinterpret_cast<int32_t*>(0x768);
    fun_776(rdi9);
    v11 = reinterpret_cast<int32_t>(fprintf);
    while (v11 < v5) {
        v12 = reinterpret_cast<int32_t>(fprintf);
        while (v12 < v5) {
            v13 = reinterpret_cast<int32_t>(fprintf);
            while (v13 < v5) {
                __asm__("cdq ");
                if (reinterpret_cast<int1_t>((v11 * v5 * v5 + v12 * v5 + v13) % 20 == fprintf)) {
                    rax14 = g7de;
                    rdi15 = *rax14;
                    rsi10 = reinterpret_cast<int32_t*>(0x7e8);
                    fun_7ef(rdi15);
                }
                rax16 = g7f6;
                rdi17 = *rax16;
                rcx = v13;
                *rdi17 = *rsi10;
                rsi10 = reinterpret_cast<int32_t*>(0x829);
                fun_830(rdi17 + 1);
                ++v13;
            }
            ++v12;
        }
        ++v11;
    }
    rax18 = g86b;
    rdi19 = *rax18;
    fun_883(rdi19, 0x875, 0x87c, rcx);
    rax20 = g88a;
    rdi21 = *rax20;
    fun_89b(rdi21, 0x894, 0x87c, rcx);
    return;
}

void fun_621(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t v5;

    goto v5;
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

int64_t fun_5bf(int64_t rdi, int64_t rsi);

struct s0 {
    int32_t f0;
    int32_t f4;
};

void init_array(int32_t edi, struct s0* rsi, int64_t rdx);

void fun_5e6(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx);

void fun_5ac(int64_t rdi, int64_t rsi) {
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
    int64_t v27;
    int32_t edi28;
    int64_t rbp29;
    int64_t rbp30;

    *reinterpret_cast<int64_t*>(rbp3 - 32) = rax4;
    rax5 = fun_5bf(0x1a5e00, 8);
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
    fun_5e6(rdi13, rsi15, rdx17, rcx19);
    if (*reinterpret_cast<int32_t*>(rbp21 - 4) <= 42) {
        addr_618_4:
        rdi22 = *reinterpret_cast<int64_t*>(rbp23 - 32);
        fun_621(rdi22, rsi15, rdx17, rcx19);
    } else {
        rdi24 = **reinterpret_cast<int64_t**>(rbp25 - 16);
        rsi15 = 0x5fe;
        eax26 = fun_603(rdi24, 0x5fe, rdx17, rcx19);
        if (!reinterpret_cast<int1_t>(eax26 == fprintf)) 
            goto addr_618_4; else 
            goto addr_60c_7;
    }
    goto v27;
    addr_60c_7:
    edi28 = *reinterpret_cast<int32_t*>(rbp29 - 20);
    rsi15 = *reinterpret_cast<int64_t*>(rbp30 - 32);
    print_array(edi28, rsi15, rdx17, rcx19);
    goto addr_618_4;
}

int64_t fun_5bf(int64_t rdi, int64_t rsi) {
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
    int64_t v25;
    int32_t edi26;
    int64_t rbp27;
    int64_t rbp28;

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
    fun_5e6(rdi11, rsi13, rdx15, rcx17);
    if (*reinterpret_cast<int32_t*>(rbp19 - 4) <= 42) {
        addr_618_3:
        rdi20 = *reinterpret_cast<int64_t*>(rbp21 - 32);
        fun_621(rdi20, rsi13, rdx15, rcx17);
    } else {
        rdi22 = **reinterpret_cast<int64_t**>(rbp23 - 16);
        rsi13 = 0x5fe;
        eax24 = fun_603(rdi22, 0x5fe, rdx15, rcx17);
        if (!reinterpret_cast<int1_t>(eax24 == fprintf)) 
            goto addr_618_3; else 
            goto addr_60c_6;
    }
    goto v25;
    addr_60c_6:
    edi26 = *reinterpret_cast<int32_t*>(rbp27 - 20);
    rsi13 = *reinterpret_cast<int64_t*>(rbp28 - 32);
    print_array(edi26, rsi13, rdx15, rcx17);
    goto addr_618_3;
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

void init_array(int32_t edi, struct s0* rsi, int64_t rdx) {
    struct s1* rdi1;
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
                rdi1 = reinterpret_cast<struct s1*>(&rdi10->f4);
                rsi = reinterpret_cast<struct s0*>(&rsi11->f4);
                ++v7;
            }
            ++v6;
        }
        ++v5;
    }
    return;
}

void fun_5e6(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t rbp5;
    int64_t rdi6;
    int64_t rbp7;
    int64_t rdi8;
    int64_t rbp9;
    int32_t eax10;
    int64_t v11;
    int32_t edi12;
    int64_t rbp13;
    int64_t rbp14;

    if (*reinterpret_cast<int32_t*>(rbp5 - 4) <= 42) {
        addr_618_2:
        rdi6 = *reinterpret_cast<int64_t*>(rbp7 - 32);
        fun_621(rdi6, rsi, rdx, rcx);
    } else {
        rdi8 = **reinterpret_cast<int64_t**>(rbp9 - 16);
        rsi = 0x5fe;
        eax10 = fun_603(rdi8, 0x5fe, rdx, rcx);
        if (!reinterpret_cast<int1_t>(eax10 == fprintf)) 
            goto addr_618_2; else 
            goto addr_60c_5;
    }
    goto v11;
    addr_60c_5:
    edi12 = *reinterpret_cast<int32_t*>(rbp13 - 20);
    rsi = *reinterpret_cast<int64_t*>(rbp14 - 32);
    print_array(edi12, rsi, rdx, rcx);
    goto addr_618_2;
}

void fprintf(int32_t edi, int32_t esi, int64_t rdx, int64_t rcx) {
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

void fun_68(struct s6* rdi, struct s7* rsi) {
    int1_t less3;
    int64_t rbp4;
    int64_t rbp5;
    struct s8* rdi6;
    struct s9* rsi7;
    struct s10* rdi8;
    struct s11* rsi9;
    struct s12* rdi10;
    struct s13* rsi11;
    struct s14* rdi12;
    struct s15* rsi13;
    struct s16* rdi14;
    struct s17* rsi15;
    struct s18* rdi16;
    struct s19* rsi17;
    struct s20* rdi18;
    struct s21* rsi19;
    struct s22* rdi20;
    struct s23* rsi21;
    int64_t rbp22;
    int64_t rbp23;

    if (!less3) {
        *reinterpret_cast<int32_t*>(rbp4 - 36) = *reinterpret_cast<int32_t*>(rbp5 - 36) + 1;
    } else {
        rdi->f0 = rsi->f0;
        rdi6 = reinterpret_cast<struct s8*>(&rdi->f4);
        rsi7 = reinterpret_cast<struct s9*>(&rsi->f4);
        rdi6->f0 = rsi7->f0;
        rdi8 = reinterpret_cast<struct s10*>(&rdi6->f4);
        rsi9 = reinterpret_cast<struct s11*>(&rsi7->f4);
        __asm__("addsd xmm0, xmm0");
        __asm__("subsd xmm1, xmm0");
        __asm__("addsd xmm1, [rax+rcx*8]");
        rdi8->f0 = rsi9->f0;
        rdi10 = reinterpret_cast<struct s12*>(&rdi8->f4);
        rsi11 = reinterpret_cast<struct s13*>(&rsi9->f4);
        rdi10->f0 = rsi11->f0;
        rdi12 = reinterpret_cast<struct s14*>(&rdi10->f4);
        rsi13 = reinterpret_cast<struct s15*>(&rsi11->f4);
        __asm__("addsd xmm0, xmm0");
        __asm__("subsd xmm2, xmm0");
        __asm__("addsd xmm2, [rax+rcx*8]");
        rdi12->f0 = rsi13->f0;
        rdi14 = reinterpret_cast<struct s16*>(&rdi12->f4);
        rsi15 = reinterpret_cast<struct s17*>(&rsi13->f4);
        __asm__("mulsd xmm0, xmm2");
        rdi14->f0 = rsi15->f0;
        rdi16 = reinterpret_cast<struct s18*>(&rdi14->f4);
        rsi17 = reinterpret_cast<struct s19*>(&rsi15->f4);
        __asm__("mulsd xmm1, xmm2");
        __asm__("addsd xmm1, xmm0");
        rdi16->f0 = rsi17->f0;
        rdi18 = reinterpret_cast<struct s20*>(&rdi16->f4);
        rsi19 = reinterpret_cast<struct s21*>(&rsi17->f4);
        rdi18->f0 = rsi19->f0;
        rdi20 = reinterpret_cast<struct s22*>(&rdi18->f4);
        rsi21 = reinterpret_cast<struct s23*>(&rsi19->f4);
        __asm__("addsd xmm2, xmm2");
        __asm__("subsd xmm0, xmm2");
        __asm__("addsd xmm0, [rax+rcx*8]");
        rdi20->f0 = rsi21->f0;
        __asm__("mulsd xmm0, xmm2");
        __asm__("addsd xmm0, xmm1");
        __asm__("addsd xmm0, [rax+rcx*8]");
        rdi20->f4 = rsi21->f4;
        *reinterpret_cast<int32_t*>(rbp22 - 40) = *reinterpret_cast<int32_t*>(rbp23 - 40) + 1;
    }
}

void fun_2b4() {
    int64_t rbp1;
    int64_t rbp2;

    *reinterpret_cast<int32_t*>(rbp1 - 32) = *reinterpret_cast<int32_t*>(rbp2 - 32) + 1;
}

struct s24 {
    int32_t f0;
    int32_t f4;
};

struct s25 {
    int32_t f0;
    int32_t f4;
};

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

struct s34 {
    int32_t f0;
    int32_t f4;
};

struct s35 {
    int32_t f0;
    int32_t f4;
};

struct s36 {
    int32_t f0;
    int32_t f4;
};

struct s37 {
    int32_t f0;
    int32_t f4;
};

struct s38 {
    int32_t f0;
    int32_t f4;
};

struct s39 {
    int32_t f0;
    int32_t f4;
};

struct s40 {
    int32_t f0;
    int32_t f4;
};

struct s41 {
    int32_t f0;
    int32_t f4;
};

struct s42 {
    int32_t f0;
    int32_t f4;
};

struct s43 {
    int32_t f0;
    int32_t f4;
};

void fun_2c7() {
    int64_t rbp1;
    int64_t rbp2;
    int64_t rbp3;
    int64_t rbp4;
    int64_t rbp5;
    int64_t rbp6;
    int64_t rbp7;
    int64_t rbp8;
    int64_t rbp9;
    struct s24* rdi10;
    struct s25* rsi11;
    struct s26* rdi12;
    struct s27* rsi13;
    struct s28* rdi14;
    struct s29* rsi15;
    struct s30* rdi16;
    struct s31* rsi17;
    struct s32* rdi18;
    struct s33* rsi19;
    struct s34* rdi20;
    struct s35* rsi21;
    struct s36* rdi22;
    struct s37* rsi23;
    struct s38* rdi24;
    struct s39* rsi25;
    struct s40* rdi26;
    struct s41* rsi27;
    struct s42* rdi28;
    struct s43* rsi29;
    int64_t rbp30;
    int64_t rbp31;
    int64_t rbp32;
    int64_t rbp33;
    int64_t rbp34;
    int64_t rbp35;
    int64_t rbp36;
    int64_t rbp37;

    *reinterpret_cast<int32_t*>(rbp1 - 32) = 1;
    while (*reinterpret_cast<int32_t*>(rbp2 - 32) < *reinterpret_cast<int32_t*>(rbp3 - 8) - 1) {
        *reinterpret_cast<int32_t*>(rbp4 - 36) = 1;
        while (*reinterpret_cast<int32_t*>(rbp5 - 36) < *reinterpret_cast<int32_t*>(rbp6 - 8) - 1) {
            *reinterpret_cast<int32_t*>(rbp7 - 40) = 1;
            while (*reinterpret_cast<int32_t*>(rbp8 - 40) < *reinterpret_cast<int32_t*>(rbp9 - 8) - 1) {
                rdi10->f0 = rsi11->f0;
                rdi12 = reinterpret_cast<struct s26*>(&rdi10->f4);
                rsi13 = reinterpret_cast<struct s27*>(&rsi11->f4);
                rdi12->f0 = rsi13->f0;
                rdi14 = reinterpret_cast<struct s28*>(&rdi12->f4);
                rsi15 = reinterpret_cast<struct s29*>(&rsi13->f4);
                __asm__("addsd xmm0, xmm0");
                __asm__("subsd xmm1, xmm0");
                __asm__("addsd xmm1, [rax+rcx*8]");
                rdi14->f0 = rsi15->f0;
                rdi16 = reinterpret_cast<struct s30*>(&rdi14->f4);
                rsi17 = reinterpret_cast<struct s31*>(&rsi15->f4);
                rdi16->f0 = rsi17->f0;
                rdi18 = reinterpret_cast<struct s32*>(&rdi16->f4);
                rsi19 = reinterpret_cast<struct s33*>(&rsi17->f4);
                __asm__("addsd xmm0, xmm0");
                __asm__("subsd xmm2, xmm0");
                __asm__("addsd xmm2, [rax+rcx*8]");
                rdi18->f0 = rsi19->f0;
                rdi20 = reinterpret_cast<struct s34*>(&rdi18->f4);
                rsi21 = reinterpret_cast<struct s35*>(&rsi19->f4);
                __asm__("mulsd xmm0, xmm2");
                rdi20->f0 = rsi21->f0;
                rdi22 = reinterpret_cast<struct s36*>(&rdi20->f4);
                rsi23 = reinterpret_cast<struct s37*>(&rsi21->f4);
                __asm__("mulsd xmm1, xmm2");
                __asm__("addsd xmm1, xmm0");
                rdi22->f0 = rsi23->f0;
                rdi24 = reinterpret_cast<struct s38*>(&rdi22->f4);
                rsi25 = reinterpret_cast<struct s39*>(&rsi23->f4);
                rdi24->f0 = rsi25->f0;
                rdi26 = reinterpret_cast<struct s40*>(&rdi24->f4);
                rsi27 = reinterpret_cast<struct s41*>(&rsi25->f4);
                __asm__("addsd xmm2, xmm2");
                __asm__("subsd xmm0, xmm2");
                __asm__("addsd xmm0, [rax+rcx*8]");
                rdi26->f0 = rsi27->f0;
                rdi28 = reinterpret_cast<struct s42*>(&rdi26->f4);
                rsi29 = reinterpret_cast<struct s43*>(&rsi27->f4);
                __asm__("mulsd xmm0, xmm2");
                __asm__("addsd xmm0, xmm1");
                __asm__("addsd xmm0, [rax+rcx*8]");
                rdi28->f0 = rsi29->f0;
                rdi10 = reinterpret_cast<struct s24*>(&rdi28->f4);
                rsi11 = reinterpret_cast<struct s25*>(&rsi29->f4);
                *reinterpret_cast<int32_t*>(rbp30 - 40) = *reinterpret_cast<int32_t*>(rbp31 - 40) + 1;
            }
            *reinterpret_cast<int32_t*>(rbp32 - 36) = *reinterpret_cast<int32_t*>(rbp33 - 36) + 1;
        }
        *reinterpret_cast<int32_t*>(rbp34 - 32) = *reinterpret_cast<int32_t*>(rbp35 - 32) + 1;
    }
    *reinterpret_cast<int32_t*>(rbp36 - 28) = *reinterpret_cast<int32_t*>(rbp37 - 28) + 1;
    goto 25;
}

void fun_57b() {
    int64_t v1;

    goto v1;
}

void submain(int32_t edi, int64_t rsi) {
    fun_5ac(0x1a5e00, 8);
}

