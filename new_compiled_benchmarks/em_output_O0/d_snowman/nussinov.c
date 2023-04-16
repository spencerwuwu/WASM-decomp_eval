
void fprintf(int32_t edi, int64_t rsi, int64_t rdx);

void print_array(int32_t edi, int32_t* rsi, int64_t rdx);

void fun_517(int64_t rdi, int32_t* rsi, int64_t rdx);

void fun_520(int64_t rdi, int32_t* rsi, int64_t rdx);

int32_t fun_4f9(int64_t rdi, int32_t* rsi, int64_t rdx) {
    int32_t eax4;
    int32_t edi5;
    int64_t rbp6;
    int64_t rbp7;
    int64_t rdi8;
    int64_t rbp9;
    int64_t rdi10;
    int64_t rbp11;
    int64_t v12;

    if (reinterpret_cast<int1_t>(eax4 == fprintf)) {
        edi5 = *reinterpret_cast<int32_t*>(rbp6 - 20);
        rsi = *reinterpret_cast<int32_t**>(rbp7 - 40);
        print_array(edi5, rsi, rdx);
    }
    rdi8 = *reinterpret_cast<int64_t*>(rbp9 - 32);
    fun_517(rdi8, rsi, rdx);
    rdi10 = *reinterpret_cast<int64_t*>(rbp11 - 40);
    fun_520(rdi10, rsi, rdx);
    goto v12;
}

int64_t* g5fd = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_60e(int64_t rdi, int64_t rsi);

int64_t* g615 = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_62d(int64_t rdi, int64_t rsi, int64_t rdx);

int64_t* g66d = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_67e(int64_t rdi, int64_t rsi);

int64_t* g685 = reinterpret_cast<int64_t*>(0x48f0458b48388b48);

void fun_6af(int64_t rdi, int64_t rsi, int64_t rdx);

int64_t* g6e0 = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_6f8(int64_t rdi, int64_t rsi, int64_t rdx);

int64_t* g6ff = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_710(int64_t rdi, int64_t rsi, int64_t rdx);

void print_array(int32_t edi, int32_t* rsi, int64_t rdx) {
    int32_t v4;
    int32_t* v5;
    int32_t v6;
    int64_t* rax7;
    int64_t rdi8;
    int64_t* rax9;
    int64_t rdi10;
    int32_t v11;
    int32_t v12;
    int64_t* rax13;
    int64_t rdi14;
    int64_t* rax15;
    int64_t rdi16;
    int64_t rdx17;
    int64_t* rax18;
    int64_t rdi19;
    int64_t* rax20;
    int64_t rdi21;

    v4 = edi;
    v5 = rsi;
    v6 = reinterpret_cast<int32_t>(fprintf);
    rax7 = g5fd;
    rdi8 = *rax7;
    fun_60e(rdi8, 0x607);
    rax9 = g615;
    rdi10 = *rax9;
    fun_62d(rdi10, 0x61f, 0x626);
    v11 = reinterpret_cast<int32_t>(fprintf);
    while (v11 < v4) {
        v12 = v11;
        while (v12 < v4) {
            __asm__("cdq ");
            if (reinterpret_cast<int1_t>(v6 % 20 == fprintf)) {
                rax13 = g66d;
                rdi14 = *rax13;
                fun_67e(rdi14, 0x677);
            }
            rax15 = g685;
            rdi16 = *rax15;
            *reinterpret_cast<int32_t*>(&rdx17) = (v5 + v11 * 0x9c4)[v12];
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx17) + 4) = reinterpret_cast<int32_t>(fprintf);
            fun_6af(rdi16, 0x6a8, rdx17);
            ++v6;
            ++v12;
        }
        ++v11;
    }
    rax18 = g6e0;
    rdi19 = *rax18;
    fun_6f8(rdi19, 0x6ea, 0x6f1);
    rax20 = g6ff;
    rdi21 = *rax20;
    fun_710(rdi21, 0x709, 0x6f1);
    return;
}

void fun_517(int64_t rdi, int32_t* rsi, int64_t rdx) {
    int64_t rdi4;
    int64_t rbp5;
    int64_t v6;

    rdi4 = *reinterpret_cast<int64_t*>(rbp5 - 40);
    fun_520(rdi4, rsi, rdx);
    goto v6;
}

void fun_67e(int64_t rdi, int64_t rsi) {
    int64_t* rax3;
    int64_t rdi4;
    int64_t rdx5;
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
    int64_t* rax24;
    int64_t rdi25;
    int64_t* rax26;
    int64_t rdi27;
    int64_t v28;

    while (1) {
        rax3 = g685;
        rdi4 = *rax3;
        *reinterpret_cast<int32_t*>(&rdx5) = (*reinterpret_cast<int32_t**>(rbp6 - 16) + *reinterpret_cast<int32_t*>(rbp7 - 20) * 0x9c4)[*reinterpret_cast<int32_t*>(rbp8 - 24)];
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx5) + 4) = reinterpret_cast<int32_t>(fprintf);
        fun_6af(rdi4, 0x6a8, rdx5);
        *reinterpret_cast<int32_t*>(rbp9 - 28) = *reinterpret_cast<int32_t*>(rbp10 - 28) + 1;
        *reinterpret_cast<int32_t*>(rbp11 - 24) = *reinterpret_cast<int32_t*>(rbp12 - 24) + 1;
        while (*reinterpret_cast<int32_t*>(rbp13 - 24) >= *reinterpret_cast<int32_t*>(rbp14 - 4)) {
            *reinterpret_cast<int32_t*>(rbp15 - 20) = *reinterpret_cast<int32_t*>(rbp16 - 20) + 1;
            if (*reinterpret_cast<int32_t*>(rbp17 - 20) >= *reinterpret_cast<int32_t*>(rbp18 - 4)) 
                goto addr_6d9_7;
            *reinterpret_cast<int32_t*>(rbp19 - 24) = *reinterpret_cast<int32_t*>(rbp20 - 20);
        }
        __asm__("cdq ");
        if (!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp21 - 28) % 20 == fprintf)) 
            continue;
        rax22 = g66d;
        rdi23 = *rax22;
        fun_67e(rdi23, 0x677);
    }
    addr_6d9_7:
    rax24 = g6e0;
    rdi25 = *rax24;
    fun_6f8(rdi25, 0x6ea, 0x6f1);
    rax26 = g6ff;
    rdi27 = *rax26;
    fun_710(rdi27, 0x709, 0x6f1);
    goto v28;
}

void fun_60e(int64_t rdi, int64_t rsi) {
    int64_t* rax3;
    int64_t rdi4;
    int64_t rbp5;
    int64_t rbp6;
    int64_t rbp7;
    int64_t rbp8;
    int64_t rbp9;
    int64_t rbp10;
    int64_t rbp11;
    int64_t rbp12;
    int64_t* rax13;
    int64_t rdi14;
    int64_t* rax15;
    int64_t rdi16;
    int64_t rdx17;
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
    int64_t v31;

    rax3 = g615;
    rdi4 = *rax3;
    fun_62d(rdi4, 0x61f, 0x626);
    *reinterpret_cast<int32_t*>(rbp5 - 20) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp6 - 20) < *reinterpret_cast<int32_t*>(rbp7 - 4)) {
        *reinterpret_cast<int32_t*>(rbp8 - 24) = *reinterpret_cast<int32_t*>(rbp9 - 20);
        while (*reinterpret_cast<int32_t*>(rbp10 - 24) < *reinterpret_cast<int32_t*>(rbp11 - 4)) {
            __asm__("cdq ");
            if (reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp12 - 28) % 20 == fprintf)) {
                rax13 = g66d;
                rdi14 = *rax13;
                fun_67e(rdi14, 0x677);
            }
            rax15 = g685;
            rdi16 = *rax15;
            *reinterpret_cast<int32_t*>(&rdx17) = (*reinterpret_cast<int32_t**>(rbp18 - 16) + *reinterpret_cast<int32_t*>(rbp19 - 20) * 0x9c4)[*reinterpret_cast<int32_t*>(rbp20 - 24)];
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx17) + 4) = reinterpret_cast<int32_t>(fprintf);
            fun_6af(rdi16, 0x6a8, rdx17);
            *reinterpret_cast<int32_t*>(rbp21 - 28) = *reinterpret_cast<int32_t*>(rbp22 - 28) + 1;
            *reinterpret_cast<int32_t*>(rbp23 - 24) = *reinterpret_cast<int32_t*>(rbp24 - 24) + 1;
        }
        *reinterpret_cast<int32_t*>(rbp25 - 20) = *reinterpret_cast<int32_t*>(rbp26 - 20) + 1;
    }
    rax27 = g6e0;
    rdi28 = *rax27;
    fun_6f8(rdi28, 0x6ea, 0x6f1);
    rax29 = g6ff;
    rdi30 = *rax29;
    fun_710(rdi30, 0x709, 0x6f1);
    goto v31;
}

void fun_520(int64_t rdi, int32_t* rsi, int64_t rdx) {
    int64_t v4;

    goto v4;
}

void fun_6af(int64_t rdi, int64_t rsi, int64_t rdx) {
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
    int64_t* rax19;
    int64_t rdi20;
    int64_t rdx21;
    int64_t rbp22;
    int64_t rbp23;
    int64_t rbp24;
    int64_t* rax25;
    int64_t rdi26;
    int64_t* rax27;
    int64_t rdi28;
    int64_t v29;

    while (1) {
        *reinterpret_cast<int32_t*>(rbp4 - 28) = *reinterpret_cast<int32_t*>(rbp5 - 28) + 1;
        *reinterpret_cast<int32_t*>(rbp6 - 24) = *reinterpret_cast<int32_t*>(rbp7 - 24) + 1;
        while (*reinterpret_cast<int32_t*>(rbp8 - 24) >= *reinterpret_cast<int32_t*>(rbp9 - 4)) {
            *reinterpret_cast<int32_t*>(rbp10 - 20) = *reinterpret_cast<int32_t*>(rbp11 - 20) + 1;
            if (*reinterpret_cast<int32_t*>(rbp12 - 20) >= *reinterpret_cast<int32_t*>(rbp13 - 4)) 
                goto addr_6d9_6;
            *reinterpret_cast<int32_t*>(rbp14 - 24) = *reinterpret_cast<int32_t*>(rbp15 - 20);
        }
        __asm__("cdq ");
        if (reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp16 - 28) % 20 == fprintf)) {
            rax17 = g66d;
            rdi18 = *rax17;
            fun_67e(rdi18, 0x677);
        }
        rax19 = g685;
        rdi20 = *rax19;
        *reinterpret_cast<int32_t*>(&rdx21) = (*reinterpret_cast<int32_t**>(rbp22 - 16) + *reinterpret_cast<int32_t*>(rbp23 - 20) * 0x9c4)[*reinterpret_cast<int32_t*>(rbp24 - 24)];
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx21) + 4) = reinterpret_cast<int32_t>(fprintf);
        fun_6af(rdi20, 0x6a8, rdx21);
    }
    addr_6d9_6:
    rax25 = g6e0;
    rdi26 = *rax25;
    fun_6f8(rdi26, 0x6ea, 0x6f1);
    rax27 = g6ff;
    rdi28 = *rax27;
    fun_710(rdi28, 0x709, 0x6f1);
    goto v29;
}

void fun_62d(int64_t rdi, int64_t rsi, int64_t rdx) {
    int64_t rbp4;
    int64_t rbp5;
    int64_t rbp6;
    int64_t rbp7;
    int64_t rbp8;
    int64_t rbp9;
    int64_t rbp10;
    int64_t rbp11;
    int64_t* rax12;
    int64_t rdi13;
    int64_t* rax14;
    int64_t rdi15;
    int64_t rdx16;
    int64_t rbp17;
    int64_t rbp18;
    int64_t rbp19;
    int64_t rbp20;
    int64_t rbp21;
    int64_t rbp22;
    int64_t rbp23;
    int64_t rbp24;
    int64_t rbp25;
    int64_t* rax26;
    int64_t rdi27;
    int64_t* rax28;
    int64_t rdi29;
    int64_t v30;

    *reinterpret_cast<int32_t*>(rbp4 - 20) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp5 - 20) < *reinterpret_cast<int32_t*>(rbp6 - 4)) {
        *reinterpret_cast<int32_t*>(rbp7 - 24) = *reinterpret_cast<int32_t*>(rbp8 - 20);
        while (*reinterpret_cast<int32_t*>(rbp9 - 24) < *reinterpret_cast<int32_t*>(rbp10 - 4)) {
            __asm__("cdq ");
            if (reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp11 - 28) % 20 == fprintf)) {
                rax12 = g66d;
                rdi13 = *rax12;
                fun_67e(rdi13, 0x677);
            }
            rax14 = g685;
            rdi15 = *rax14;
            *reinterpret_cast<int32_t*>(&rdx16) = (*reinterpret_cast<int32_t**>(rbp17 - 16) + *reinterpret_cast<int32_t*>(rbp18 - 20) * 0x9c4)[*reinterpret_cast<int32_t*>(rbp19 - 24)];
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx16) + 4) = reinterpret_cast<int32_t>(fprintf);
            fun_6af(rdi15, 0x6a8, rdx16);
            *reinterpret_cast<int32_t*>(rbp20 - 28) = *reinterpret_cast<int32_t*>(rbp21 - 28) + 1;
            *reinterpret_cast<int32_t*>(rbp22 - 24) = *reinterpret_cast<int32_t*>(rbp23 - 24) + 1;
        }
        *reinterpret_cast<int32_t*>(rbp24 - 20) = *reinterpret_cast<int32_t*>(rbp25 - 20) + 1;
    }
    rax26 = g6e0;
    rdi27 = *rax26;
    fun_6f8(rdi27, 0x6ea, 0x6f1);
    rax28 = g6ff;
    rdi29 = *rax28;
    fun_710(rdi29, 0x709, 0x6f1);
    goto v30;
}

void fun_6f8(int64_t rdi, int64_t rsi, int64_t rdx) {
    int64_t* rax4;
    int64_t rdi5;
    int64_t v6;

    rax4 = g6ff;
    rdi5 = *rax4;
    fun_710(rdi5, 0x709, rdx);
    goto v6;
}

void fun_710(int64_t rdi, int64_t rsi, int64_t rdx) {
    int64_t v4;

    goto v4;
}

int64_t fun_4b8(int64_t rdi, int64_t rsi);

void init_array(int32_t edi, int64_t rsi, int32_t* rdx);

void fun_4dc(int64_t rdi, int32_t* rsi, int64_t rdx);

void fun_4a5(int64_t rdi, int64_t rsi) {
    int64_t rbp3;
    int64_t rax4;
    int64_t rax5;
    int64_t rbp6;
    int32_t edi7;
    int64_t rbp8;
    int64_t rsi9;
    int64_t rbp10;
    int32_t* rdx11;
    int64_t rbp12;
    int64_t rdi13;
    int64_t rbp14;
    int32_t* rsi15;
    int64_t rbp16;
    int64_t rdx17;
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

    *reinterpret_cast<int64_t*>(rbp3 - 32) = rax4;
    rax5 = fun_4b8(0x5f5e10, 4);
    *reinterpret_cast<int64_t*>(rbp6 - 40) = rax5;
    edi7 = *reinterpret_cast<int32_t*>(rbp8 - 20);
    rsi9 = *reinterpret_cast<int64_t*>(rbp10 - 32);
    rdx11 = *reinterpret_cast<int32_t**>(rbp12 - 40);
    init_array(edi7, rsi9, rdx11);
    *reinterpret_cast<int32_t*>(&rdi13) = *reinterpret_cast<int32_t*>(rbp14 - 20);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi13) + 4) = reinterpret_cast<int32_t>(fprintf);
    rsi15 = *reinterpret_cast<int32_t**>(rbp16 - 32);
    rdx17 = *reinterpret_cast<int64_t*>(rbp18 - 40);
    fun_4dc(rdi13, rsi15, rdx17);
    if (*reinterpret_cast<int32_t*>(rbp19 - 4) <= 42) {
        addr_50e_4:
        rdi20 = *reinterpret_cast<int64_t*>(rbp21 - 32);
        fun_517(rdi20, rsi15, rdx17);
    } else {
        rdi22 = **reinterpret_cast<int64_t**>(rbp23 - 16);
        rsi15 = reinterpret_cast<int32_t*>(0x4f4);
        eax24 = fun_4f9(rdi22, 0x4f4, rdx17);
        if (!reinterpret_cast<int1_t>(eax24 == fprintf)) 
            goto addr_50e_4; else 
            goto addr_502_7;
    }
    rdi25 = *reinterpret_cast<int64_t*>(rbp26 - 40);
    fun_520(rdi25, rsi15, rdx17);
    goto v27;
    addr_502_7:
    edi28 = *reinterpret_cast<int32_t*>(rbp29 - 20);
    rsi15 = *reinterpret_cast<int32_t**>(rbp30 - 40);
    print_array(edi28, rsi15, rdx17);
    goto addr_50e_4;
}

int64_t fun_4b8(int64_t rdi, int64_t rsi) {
    int64_t rbp3;
    int64_t rax4;
    int32_t edi5;
    int64_t rbp6;
    int64_t rsi7;
    int64_t rbp8;
    int32_t* rdx9;
    int64_t rbp10;
    int64_t rdi11;
    int64_t rbp12;
    int32_t* rsi13;
    int64_t rbp14;
    int64_t rdx15;
    int64_t rbp16;
    int64_t rbp17;
    int64_t rdi18;
    int64_t rbp19;
    int64_t rdi20;
    int64_t rbp21;
    int32_t eax22;
    int64_t rdi23;
    int64_t rbp24;
    int64_t v25;
    int32_t edi26;
    int64_t rbp27;
    int64_t rbp28;

    *reinterpret_cast<int64_t*>(rbp3 - 40) = rax4;
    edi5 = *reinterpret_cast<int32_t*>(rbp6 - 20);
    rsi7 = *reinterpret_cast<int64_t*>(rbp8 - 32);
    rdx9 = *reinterpret_cast<int32_t**>(rbp10 - 40);
    init_array(edi5, rsi7, rdx9);
    *reinterpret_cast<int32_t*>(&rdi11) = *reinterpret_cast<int32_t*>(rbp12 - 20);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi11) + 4) = reinterpret_cast<int32_t>(fprintf);
    rsi13 = *reinterpret_cast<int32_t**>(rbp14 - 32);
    rdx15 = *reinterpret_cast<int64_t*>(rbp16 - 40);
    fun_4dc(rdi11, rsi13, rdx15);
    if (*reinterpret_cast<int32_t*>(rbp17 - 4) <= 42) {
        addr_50e_3:
        rdi18 = *reinterpret_cast<int64_t*>(rbp19 - 32);
        fun_517(rdi18, rsi13, rdx15);
    } else {
        rdi20 = **reinterpret_cast<int64_t**>(rbp21 - 16);
        rsi13 = reinterpret_cast<int32_t*>(0x4f4);
        eax22 = fun_4f9(rdi20, 0x4f4, rdx15);
        if (!reinterpret_cast<int1_t>(eax22 == fprintf)) 
            goto addr_50e_3; else 
            goto addr_502_6;
    }
    rdi23 = *reinterpret_cast<int64_t*>(rbp24 - 40);
    fun_520(rdi23, rsi13, rdx15);
    goto v25;
    addr_502_6:
    edi26 = *reinterpret_cast<int32_t*>(rbp27 - 20);
    rsi13 = *reinterpret_cast<int32_t**>(rbp28 - 40);
    print_array(edi26, rsi13, rdx15);
    goto addr_50e_3;
}

void init_array(int32_t edi, int64_t rsi, int32_t* rdx) {
    int32_t v4;
    int64_t v5;
    int32_t* v6;
    int32_t v7;
    int32_t edx8;
    int32_t v9;
    int32_t v10;

    v4 = edi;
    v5 = rsi;
    v6 = rdx;
    v7 = reinterpret_cast<int32_t>(fprintf);
    while (v7 < v4) {
        __asm__("cdq ");
        edx8 = (v7 + 1) % 4;
        *reinterpret_cast<signed char*>(v5 + v7) = *reinterpret_cast<signed char*>(&edx8);
        ++v7;
    }
    v9 = reinterpret_cast<int32_t>(fprintf);
    while (v9 < v4) {
        v10 = reinterpret_cast<int32_t>(fprintf);
        while (v10 < v4) {
            (v6 + v9 * 0x9c4)[v10] = reinterpret_cast<int32_t>(fprintf);
            ++v10;
        }
        ++v9;
    }
    return;
}

void fun_4dc(int64_t rdi, int32_t* rsi, int64_t rdx) {
    int64_t rbp4;
    int64_t rdi5;
    int64_t rbp6;
    int64_t rdi7;
    int64_t rbp8;
    int32_t eax9;
    int64_t rdi10;
    int64_t rbp11;
    int64_t v12;
    int32_t edi13;
    int64_t rbp14;
    int64_t rbp15;

    if (*reinterpret_cast<int32_t*>(rbp4 - 4) <= 42) {
        addr_50e_2:
        rdi5 = *reinterpret_cast<int64_t*>(rbp6 - 32);
        fun_517(rdi5, rsi, rdx);
    } else {
        rdi7 = **reinterpret_cast<int64_t**>(rbp8 - 16);
        rsi = reinterpret_cast<int32_t*>(0x4f4);
        eax9 = fun_4f9(rdi7, 0x4f4, rdx);
        if (!reinterpret_cast<int1_t>(eax9 == fprintf)) 
            goto addr_50e_2; else 
            goto addr_502_5;
    }
    rdi10 = *reinterpret_cast<int64_t*>(rbp11 - 40);
    fun_520(rdi10, rsi, rdx);
    goto v12;
    addr_502_5:
    edi13 = *reinterpret_cast<int32_t*>(rbp14 - 20);
    rsi = *reinterpret_cast<int32_t**>(rbp15 - 40);
    print_array(edi13, rsi, rdx);
    goto addr_50e_2;
}

void fprintf(int32_t edi, int64_t rsi, int64_t rdx) {
}

struct s0 {
    signed char[4] pad4;
    uint32_t f4;
};

void fun_1d() {
    struct s0* rax1;
    uint16_t ds2;

    rax1->f4 = ds2;
}

void fun_68() {
    int64_t rdx1;
    int32_t edx2;
    int32_t eax3;
    int32_t* rcx4;
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
    int64_t rbp22;
    int64_t rbp23;
    int64_t rbp24;
    int64_t rbp25;
    int64_t rbp26;
    int64_t rbp27;
    int64_t rbp28;
    int64_t rbp29;
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
    int64_t rbp42;
    int64_t rbp43;
    int64_t rbp44;
    int64_t rbp45;
    int64_t rbp46;
    int64_t rbp47;
    int64_t rbp48;
    int64_t rbp49;
    int64_t rbp50;
    int64_t rbp51;
    int64_t rbp52;
    int64_t rbp53;
    int64_t rbp54;
    int64_t rbp55;
    int64_t rbp56;
    int64_t rbp57;
    int64_t rbp58;
    int64_t rbp59;
    int64_t rbp60;
    int32_t edx61;
    int64_t rbp62;
    int64_t rbp63;
    int64_t rbp64;
    int64_t rbp65;
    int64_t rbp66;
    int64_t rbp67;
    int64_t rbp68;
    int64_t rbp69;
    int64_t rbp70;
    int64_t rbp71;
    int32_t ecx72;
    int64_t rbp73;
    int64_t rbp74;
    int64_t rbp75;
    int64_t rbp76;
    int64_t rbp77;
    int64_t rbp78;
    int64_t rbp79;
    int64_t rbp80;
    int64_t rbp81;
    int64_t rbp82;
    int64_t rbp83;
    int64_t rbp84;
    int64_t rbp85;
    int64_t rbp86;
    int64_t rbp87;
    int64_t rbp88;
    int64_t rbp89;
    int64_t rbp90;
    int64_t rbp91;
    int64_t rbp92;
    int64_t rbp93;
    int64_t rbp94;
    int64_t rbp95;
    int64_t rbp96;
    int64_t rbp97;
    int64_t rbp98;
    int64_t rbp99;
    int64_t rbp100;
    int64_t rbp101;
    int64_t rbp102;
    int64_t rbp103;
    int64_t rbp104;
    int64_t rbp105;
    int64_t rbp106;
    int64_t rbp107;
    int64_t rbp108;
    int64_t rbp109;
    int64_t rbp110;
    int64_t rbp111;
    int64_t rbp112;
    int64_t rbp113;
    int64_t rbp114;
    int64_t rbp115;
    int64_t rbp116;
    int64_t rbp117;
    int64_t rbp118;
    int64_t rbp119;
    int64_t rbp120;

    *reinterpret_cast<int32_t*>(&rdx1) = edx2 * 0x2710;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx1) + 4) = reinterpret_cast<int32_t>(fprintf);
    if (eax3 < *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rcx4) + rdx1 + (*reinterpret_cast<int32_t*>(rbp5 - 32) - 1) * 4)) {
        *reinterpret_cast<int32_t*>(rbp6 - 40) = (*reinterpret_cast<int32_t**>(rbp7 - 24) + *reinterpret_cast<int32_t*>(rbp8 - 28) * 0x9c4)[*reinterpret_cast<int32_t*>(rbp9 - 32) - 1];
    } else {
        *reinterpret_cast<int32_t*>(rbp10 - 40) = (*reinterpret_cast<int32_t**>(rbp11 - 24) + *reinterpret_cast<int32_t*>(rbp12 - 28) * 0x9c4)[*reinterpret_cast<int32_t*>(rbp13 - 32)];
    }
    (*reinterpret_cast<int32_t**>(rbp14 - 24) + *reinterpret_cast<int32_t*>(rbp15 - 28) * 0x9c4)[*reinterpret_cast<int32_t*>(rbp16 - 32)] = *reinterpret_cast<int32_t*>(rbp17 - 40);
    if (*reinterpret_cast<int32_t*>(rbp18 - 28) + 1 < *reinterpret_cast<int32_t*>(rbp19 - 4)) {
        if ((*reinterpret_cast<int32_t**>(rbp20 - 24) + *reinterpret_cast<int32_t*>(rbp21 - 28) * 0x9c4)[*reinterpret_cast<int32_t*>(rbp22 - 32)] < (*reinterpret_cast<int32_t**>(rbp23 - 24) + (*reinterpret_cast<int32_t*>(rbp24 - 28) + 1) * 0x9c4)[*reinterpret_cast<int32_t*>(rbp25 - 32)]) {
            *reinterpret_cast<int32_t*>(rbp26 - 44) = (*reinterpret_cast<int32_t**>(rbp27 - 24) + (*reinterpret_cast<int32_t*>(rbp28 - 28) + 1) * 0x9c4)[*reinterpret_cast<int32_t*>(rbp29 - 32)];
        } else {
            *reinterpret_cast<int32_t*>(rbp30 - 44) = (*reinterpret_cast<int32_t**>(rbp31 - 24) + *reinterpret_cast<int32_t*>(rbp32 - 28) * 0x9c4)[*reinterpret_cast<int32_t*>(rbp33 - 32)];
        }
        (*reinterpret_cast<int32_t**>(rbp34 - 24) + *reinterpret_cast<int32_t*>(rbp35 - 28) * 0x9c4)[*reinterpret_cast<int32_t*>(rbp36 - 32)] = *reinterpret_cast<int32_t*>(rbp37 - 44);
    }
    if (*reinterpret_cast<int32_t*>(rbp38 - 32) - 1 >= reinterpret_cast<int32_t>(fprintf) && *reinterpret_cast<int32_t*>(rbp39 - 28) + 1 < *reinterpret_cast<int32_t*>(rbp40 - 4)) {
        if (*reinterpret_cast<int32_t*>(rbp41 - 28) >= *reinterpret_cast<int32_t*>(rbp42 - 32) - 1) {
            if ((*reinterpret_cast<int32_t**>(rbp43 - 24) + *reinterpret_cast<int32_t*>(rbp44 - 28) * 0x9c4)[*reinterpret_cast<int32_t*>(rbp45 - 32)] < (*reinterpret_cast<int32_t**>(rbp46 - 24) + (*reinterpret_cast<int32_t*>(rbp47 - 28) + 1) * 0x9c4)[*reinterpret_cast<int32_t*>(rbp48 - 32) - 1]) {
                *reinterpret_cast<int32_t*>(rbp49 - 52) = (*reinterpret_cast<int32_t**>(rbp50 - 24) + (*reinterpret_cast<int32_t*>(rbp51 - 28) + 1) * 0x9c4)[*reinterpret_cast<int32_t*>(rbp52 - 32) - 1];
            } else {
                *reinterpret_cast<int32_t*>(rbp53 - 52) = (*reinterpret_cast<int32_t**>(rbp54 - 24) + *reinterpret_cast<int32_t*>(rbp55 - 28) * 0x9c4)[*reinterpret_cast<int32_t*>(rbp56 - 32)];
            }
            (*reinterpret_cast<int32_t**>(rbp57 - 24) + *reinterpret_cast<int32_t*>(rbp58 - 28) * 0x9c4)[*reinterpret_cast<int32_t*>(rbp59 - 32)] = *reinterpret_cast<int32_t*>(rbp60 - 52);
        } else {
            edx61 = reinterpret_cast<int32_t>(fprintf);
            if (*reinterpret_cast<signed char*>(*reinterpret_cast<int64_t*>(rbp62 - 16) + *reinterpret_cast<int32_t*>(rbp63 - 28)) + *reinterpret_cast<signed char*>(*reinterpret_cast<int64_t*>(rbp64 - 16) + *reinterpret_cast<int32_t*>(rbp65 - 32)) == 3) {
                edx61 = 1;
            }
            if ((*reinterpret_cast<int32_t**>(rbp66 - 24) + *reinterpret_cast<int32_t*>(rbp67 - 28) * 0x9c4)[*reinterpret_cast<int32_t*>(rbp68 - 32)] < (*reinterpret_cast<int32_t**>(rbp69 - 24) + (*reinterpret_cast<int32_t*>(rbp70 - 28) + 1) * 0x9c4)[*reinterpret_cast<int32_t*>(rbp71 - 32) - 1] + edx61) {
                ecx72 = reinterpret_cast<int32_t>(fprintf);
                if (*reinterpret_cast<signed char*>(*reinterpret_cast<int64_t*>(rbp73 - 16) + *reinterpret_cast<int32_t*>(rbp74 - 28)) + *reinterpret_cast<signed char*>(*reinterpret_cast<int64_t*>(rbp75 - 16) + *reinterpret_cast<int32_t*>(rbp76 - 32)) == 3) {
                    ecx72 = 1;
                }
                *reinterpret_cast<int32_t*>(rbp77 - 48) = (*reinterpret_cast<int32_t**>(rbp78 - 24) + (*reinterpret_cast<int32_t*>(rbp79 - 28) + 1) * 0x9c4)[*reinterpret_cast<int32_t*>(rbp80 - 32) - 1] + ecx72;
            } else {
                *reinterpret_cast<int32_t*>(rbp81 - 48) = (*reinterpret_cast<int32_t**>(rbp82 - 24) + *reinterpret_cast<int32_t*>(rbp83 - 28) * 0x9c4)[*reinterpret_cast<int32_t*>(rbp84 - 32)];
            }
            (*reinterpret_cast<int32_t**>(rbp85 - 24) + *reinterpret_cast<int32_t*>(rbp86 - 28) * 0x9c4)[*reinterpret_cast<int32_t*>(rbp87 - 32)] = *reinterpret_cast<int32_t*>(rbp88 - 48);
        }
    }
    *reinterpret_cast<int32_t*>(rbp89 - 36) = *reinterpret_cast<int32_t*>(rbp90 - 28) + 1;
    while (*reinterpret_cast<int32_t*>(rbp91 - 36) < *reinterpret_cast<int32_t*>(rbp92 - 32)) {
        if ((*reinterpret_cast<int32_t**>(rbp93 - 24) + *reinterpret_cast<int32_t*>(rbp94 - 28) * 0x9c4)[*reinterpret_cast<int32_t*>(rbp95 - 32)] < (*reinterpret_cast<int32_t**>(rbp96 - 24) + *reinterpret_cast<int32_t*>(rbp97 - 28) * 0x9c4)[*reinterpret_cast<int32_t*>(rbp98 - 36)] + (*reinterpret_cast<int32_t**>(rbp99 - 24) + (*reinterpret_cast<int32_t*>(rbp100 - 36) + 1) * 0x9c4)[*reinterpret_cast<int32_t*>(rbp101 - 32)]) {
            *reinterpret_cast<int32_t*>(rbp102 - 56) = (*reinterpret_cast<int32_t**>(rbp103 - 24) + *reinterpret_cast<int32_t*>(rbp104 - 28) * 0x9c4)[*reinterpret_cast<int32_t*>(rbp105 - 36)] + (*reinterpret_cast<int32_t**>(rbp106 - 24) + (*reinterpret_cast<int32_t*>(rbp107 - 36) + 1) * 0x9c4)[*reinterpret_cast<int32_t*>(rbp108 - 32)];
        } else {
            *reinterpret_cast<int32_t*>(rbp109 - 56) = (*reinterpret_cast<int32_t**>(rbp110 - 24) + *reinterpret_cast<int32_t*>(rbp111 - 28) * 0x9c4)[*reinterpret_cast<int32_t*>(rbp112 - 32)];
        }
        (*reinterpret_cast<int32_t**>(rbp113 - 24) + *reinterpret_cast<int32_t*>(rbp114 - 28) * 0x9c4)[*reinterpret_cast<int32_t*>(rbp115 - 32)] = *reinterpret_cast<int32_t*>(rbp116 - 56);
        *reinterpret_cast<int32_t*>(rbp117 - 36) = *reinterpret_cast<int32_t*>(rbp118 - 36) + 1;
    }
    *reinterpret_cast<int32_t*>(rbp119 - 32) = *reinterpret_cast<int32_t*>(rbp120 - 32) + 1;
}

void fun_467() {
    int64_t rbp1;
    int64_t rbp2;

    *reinterpret_cast<int32_t*>(rbp1 - 28) = *reinterpret_cast<int32_t*>(rbp2 - 28) - 1;
}

void fun_47a() {
    int64_t v1;

    goto v1;
}

void submain(int32_t edi, int64_t rsi) {
    fun_4a5(0x9c4, 1);
}

