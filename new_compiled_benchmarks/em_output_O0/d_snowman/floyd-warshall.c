
void fprintf(int32_t edi, int64_t rsi);

void print_array(int32_t edi, int32_t* rsi);

void fun_1bc(int64_t rdi, int32_t* rsi);

int32_t fun_19e(int64_t rdi, int32_t* rsi) {
    int32_t eax3;
    int32_t edi4;
    int64_t rbp5;
    int64_t rbp6;
    int64_t rdi7;
    int64_t rbp8;
    int64_t v9;

    if (reinterpret_cast<int1_t>(eax3 == fprintf)) {
        edi4 = *reinterpret_cast<int32_t*>(rbp5 - 20);
        rsi = *reinterpret_cast<int32_t**>(rbp6 - 32);
        print_array(edi4, rsi);
    }
    rdi7 = *reinterpret_cast<int64_t*>(rbp8 - 32);
    fun_1bc(rdi7, rsi);
    goto v9;
}

int64_t* g2d6 = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_2e7(int64_t rdi, int64_t rsi);

int64_t* g2ee = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_306(int64_t rdi, int64_t rsi, int64_t rdx);

int64_t* g34e = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_35f(int64_t rdi, int64_t rsi);

int64_t* g366 = reinterpret_cast<int64_t*>(0x48f0458b48388b48);

void fun_390(int64_t rdi, int64_t rsi, int64_t rdx);

int64_t* g3b8 = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_3d0(int64_t rdi, int64_t rsi, int64_t rdx);

int64_t* g3d7 = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_3e8(int64_t rdi, int64_t rsi, int64_t rdx);

void print_array(int32_t edi, int32_t* rsi) {
    int32_t v3;
    int32_t* v4;
    int64_t* rax5;
    int64_t rdi6;
    int64_t* rax7;
    int64_t rdi8;
    int32_t v9;
    int32_t v10;
    int64_t* rax11;
    int64_t rdi12;
    int64_t* rax13;
    int64_t rdi14;
    int64_t rdx15;
    int64_t* rax16;
    int64_t rdi17;
    int64_t* rax18;
    int64_t rdi19;

    v3 = edi;
    v4 = rsi;
    rax5 = g2d6;
    rdi6 = *rax5;
    fun_2e7(rdi6, 0x2e0);
    rax7 = g2ee;
    rdi8 = *rax7;
    fun_306(rdi8, 0x2f8, 0x2ff);
    v9 = reinterpret_cast<int32_t>(fprintf);
    while (v9 < v3) {
        v10 = reinterpret_cast<int32_t>(fprintf);
        while (v10 < v3) {
            __asm__("cdq ");
            if (reinterpret_cast<int1_t>((v9 * v3 + v10) % 20 == fprintf)) {
                rax11 = g34e;
                rdi12 = *rax11;
                fun_35f(rdi12, 0x358);
            }
            rax13 = g366;
            rdi14 = *rax13;
            *reinterpret_cast<int32_t*>(&rdx15) = (v4 + v9 * 0xaf0)[v10];
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx15) + 4) = reinterpret_cast<int32_t>(fprintf);
            fun_390(rdi14, 0x389, rdx15);
            ++v10;
        }
        ++v9;
    }
    rax16 = g3b8;
    rdi17 = *rax16;
    fun_3d0(rdi17, 0x3c2, 0x3c9);
    rax18 = g3d7;
    rdi19 = *rax18;
    fun_3e8(rdi19, 0x3e1, 0x3c9);
    return;
}

void fun_1bc(int64_t rdi, int32_t* rsi) {
    int64_t v3;

    goto v3;
}

void fun_35f(int64_t rdi, int64_t rsi) {
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
    int64_t* rax21;
    int64_t rdi22;
    int64_t* rax23;
    int64_t rdi24;
    int64_t* rax25;
    int64_t rdi26;
    int64_t v27;

    while (1) {
        rax3 = g366;
        rdi4 = *rax3;
        *reinterpret_cast<int32_t*>(&rdx5) = (*reinterpret_cast<int32_t**>(rbp6 - 16) + *reinterpret_cast<int32_t*>(rbp7 - 20) * 0xaf0)[*reinterpret_cast<int32_t*>(rbp8 - 24)];
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx5) + 4) = reinterpret_cast<int32_t>(fprintf);
        fun_390(rdi4, 0x389, rdx5);
        *reinterpret_cast<int32_t*>(rbp9 - 24) = *reinterpret_cast<int32_t*>(rbp10 - 24) + 1;
        while (*reinterpret_cast<int32_t*>(rbp11 - 24) >= *reinterpret_cast<int32_t*>(rbp12 - 4)) {
            *reinterpret_cast<int32_t*>(rbp13 - 20) = *reinterpret_cast<int32_t*>(rbp14 - 20) + 1;
            if (*reinterpret_cast<int32_t*>(rbp15 - 20) >= *reinterpret_cast<int32_t*>(rbp16 - 4)) 
                goto addr_3b1_7;
            *reinterpret_cast<int32_t*>(rbp17 - 24) = reinterpret_cast<int32_t>(fprintf);
        }
        __asm__("cdq ");
        if (!reinterpret_cast<int1_t>((*reinterpret_cast<int32_t*>(rbp18 - 20) * *reinterpret_cast<int32_t*>(rbp19 - 4) + *reinterpret_cast<int32_t*>(rbp20 - 24)) % 20 == fprintf)) 
            continue;
        rax21 = g34e;
        rdi22 = *rax21;
        fun_35f(rdi22, 0x358);
    }
    addr_3b1_7:
    rax23 = g3b8;
    rdi24 = *rax23;
    fun_3d0(rdi24, 0x3c2, 0x3c9);
    rax25 = g3d7;
    rdi26 = *rax25;
    fun_3e8(rdi26, 0x3e1, 0x3c9);
    goto v27;
}

void fun_2e7(int64_t rdi, int64_t rsi) {
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
    int64_t rbp13;
    int64_t* rax14;
    int64_t rdi15;
    int64_t* rax16;
    int64_t rdi17;
    int64_t rdx18;
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

    rax3 = g2ee;
    rdi4 = *rax3;
    fun_306(rdi4, 0x2f8, 0x2ff);
    *reinterpret_cast<int32_t*>(rbp5 - 20) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp6 - 20) < *reinterpret_cast<int32_t*>(rbp7 - 4)) {
        *reinterpret_cast<int32_t*>(rbp8 - 24) = reinterpret_cast<int32_t>(fprintf);
        while (*reinterpret_cast<int32_t*>(rbp9 - 24) < *reinterpret_cast<int32_t*>(rbp10 - 4)) {
            __asm__("cdq ");
            if (reinterpret_cast<int1_t>((*reinterpret_cast<int32_t*>(rbp11 - 20) * *reinterpret_cast<int32_t*>(rbp12 - 4) + *reinterpret_cast<int32_t*>(rbp13 - 24)) % 20 == fprintf)) {
                rax14 = g34e;
                rdi15 = *rax14;
                fun_35f(rdi15, 0x358);
            }
            rax16 = g366;
            rdi17 = *rax16;
            *reinterpret_cast<int32_t*>(&rdx18) = (*reinterpret_cast<int32_t**>(rbp19 - 16) + *reinterpret_cast<int32_t*>(rbp20 - 20) * 0xaf0)[*reinterpret_cast<int32_t*>(rbp21 - 24)];
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx18) + 4) = reinterpret_cast<int32_t>(fprintf);
            fun_390(rdi17, 0x389, rdx18);
            *reinterpret_cast<int32_t*>(rbp22 - 24) = *reinterpret_cast<int32_t*>(rbp23 - 24) + 1;
        }
        *reinterpret_cast<int32_t*>(rbp24 - 20) = *reinterpret_cast<int32_t*>(rbp25 - 20) + 1;
    }
    rax26 = g3b8;
    rdi27 = *rax26;
    fun_3d0(rdi27, 0x3c2, 0x3c9);
    rax28 = g3d7;
    rdi29 = *rax28;
    fun_3e8(rdi29, 0x3e1, 0x3c9);
    goto v30;
}

void fun_390(int64_t rdi, int64_t rsi, int64_t rdx) {
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
    int64_t* rax16;
    int64_t rdi17;
    int64_t* rax18;
    int64_t rdi19;
    int64_t rdx20;
    int64_t rbp21;
    int64_t rbp22;
    int64_t rbp23;
    int64_t* rax24;
    int64_t rdi25;
    int64_t* rax26;
    int64_t rdi27;
    int64_t v28;

    while (1) {
        *reinterpret_cast<int32_t*>(rbp4 - 24) = *reinterpret_cast<int32_t*>(rbp5 - 24) + 1;
        while (*reinterpret_cast<int32_t*>(rbp6 - 24) >= *reinterpret_cast<int32_t*>(rbp7 - 4)) {
            *reinterpret_cast<int32_t*>(rbp8 - 20) = *reinterpret_cast<int32_t*>(rbp9 - 20) + 1;
            if (*reinterpret_cast<int32_t*>(rbp10 - 20) >= *reinterpret_cast<int32_t*>(rbp11 - 4)) 
                goto addr_3b1_6;
            *reinterpret_cast<int32_t*>(rbp12 - 24) = reinterpret_cast<int32_t>(fprintf);
        }
        __asm__("cdq ");
        if (reinterpret_cast<int1_t>((*reinterpret_cast<int32_t*>(rbp13 - 20) * *reinterpret_cast<int32_t*>(rbp14 - 4) + *reinterpret_cast<int32_t*>(rbp15 - 24)) % 20 == fprintf)) {
            rax16 = g34e;
            rdi17 = *rax16;
            fun_35f(rdi17, 0x358);
        }
        rax18 = g366;
        rdi19 = *rax18;
        *reinterpret_cast<int32_t*>(&rdx20) = (*reinterpret_cast<int32_t**>(rbp21 - 16) + *reinterpret_cast<int32_t*>(rbp22 - 20) * 0xaf0)[*reinterpret_cast<int32_t*>(rbp23 - 24)];
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx20) + 4) = reinterpret_cast<int32_t>(fprintf);
        fun_390(rdi19, 0x389, rdx20);
    }
    addr_3b1_6:
    rax24 = g3b8;
    rdi25 = *rax24;
    fun_3d0(rdi25, 0x3c2, 0x3c9);
    rax26 = g3d7;
    rdi27 = *rax26;
    fun_3e8(rdi27, 0x3e1, 0x3c9);
    goto v28;
}

void fun_306(int64_t rdi, int64_t rsi, int64_t rdx) {
    int64_t rbp4;
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
    int64_t* rax25;
    int64_t rdi26;
    int64_t* rax27;
    int64_t rdi28;
    int64_t v29;

    *reinterpret_cast<int32_t*>(rbp4 - 20) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp5 - 20) < *reinterpret_cast<int32_t*>(rbp6 - 4)) {
        *reinterpret_cast<int32_t*>(rbp7 - 24) = reinterpret_cast<int32_t>(fprintf);
        while (*reinterpret_cast<int32_t*>(rbp8 - 24) < *reinterpret_cast<int32_t*>(rbp9 - 4)) {
            __asm__("cdq ");
            if (reinterpret_cast<int1_t>((*reinterpret_cast<int32_t*>(rbp10 - 20) * *reinterpret_cast<int32_t*>(rbp11 - 4) + *reinterpret_cast<int32_t*>(rbp12 - 24)) % 20 == fprintf)) {
                rax13 = g34e;
                rdi14 = *rax13;
                fun_35f(rdi14, 0x358);
            }
            rax15 = g366;
            rdi16 = *rax15;
            *reinterpret_cast<int32_t*>(&rdx17) = (*reinterpret_cast<int32_t**>(rbp18 - 16) + *reinterpret_cast<int32_t*>(rbp19 - 20) * 0xaf0)[*reinterpret_cast<int32_t*>(rbp20 - 24)];
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx17) + 4) = reinterpret_cast<int32_t>(fprintf);
            fun_390(rdi16, 0x389, rdx17);
            *reinterpret_cast<int32_t*>(rbp21 - 24) = *reinterpret_cast<int32_t*>(rbp22 - 24) + 1;
        }
        *reinterpret_cast<int32_t*>(rbp23 - 20) = *reinterpret_cast<int32_t*>(rbp24 - 20) + 1;
    }
    rax25 = g3b8;
    rdi26 = *rax25;
    fun_3d0(rdi26, 0x3c2, 0x3c9);
    rax27 = g3d7;
    rdi28 = *rax27;
    fun_3e8(rdi28, 0x3e1, 0x3c9);
    goto v29;
}

void fun_3d0(int64_t rdi, int64_t rsi, int64_t rdx) {
    int64_t* rax4;
    int64_t rdi5;
    int64_t v6;

    rax4 = g3d7;
    rdi5 = *rax4;
    fun_3e8(rdi5, 0x3e1, rdx);
    goto v6;
}

void fun_3e8(int64_t rdi, int64_t rsi, int64_t rdx) {
    int64_t v4;

    goto v4;
}

void init_array(int32_t edi, int32_t* rsi);

void fun_181(int64_t rdi, int32_t* rsi);

void fun_165(int64_t rdi, int64_t rsi) {
    int64_t rbp3;
    int64_t rax4;
    int32_t edi5;
    int64_t rbp6;
    int32_t* rsi7;
    int64_t rbp8;
    int64_t rdi9;
    int64_t rbp10;
    int32_t* rsi11;
    int64_t rbp12;
    int64_t rbp13;
    int64_t rdi14;
    int64_t rbp15;
    int64_t rdi16;
    int64_t rbp17;
    int32_t eax18;
    int64_t v19;
    int32_t edi20;
    int64_t rbp21;
    int64_t rbp22;

    *reinterpret_cast<int64_t*>(rbp3 - 32) = rax4;
    edi5 = *reinterpret_cast<int32_t*>(rbp6 - 20);
    rsi7 = *reinterpret_cast<int32_t**>(rbp8 - 32);
    init_array(edi5, rsi7);
    *reinterpret_cast<int32_t*>(&rdi9) = *reinterpret_cast<int32_t*>(rbp10 - 20);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi9) + 4) = reinterpret_cast<int32_t>(fprintf);
    rsi11 = *reinterpret_cast<int32_t**>(rbp12 - 32);
    fun_181(rdi9, rsi11);
    if (*reinterpret_cast<int32_t*>(rbp13 - 4) <= 42) {
        addr_1b3_3:
        rdi14 = *reinterpret_cast<int64_t*>(rbp15 - 32);
        fun_1bc(rdi14, rsi11);
    } else {
        rdi16 = **reinterpret_cast<int64_t**>(rbp17 - 16);
        rsi11 = reinterpret_cast<int32_t*>(0x199);
        eax18 = fun_19e(rdi16, 0x199);
        if (!reinterpret_cast<int1_t>(eax18 == fprintf)) 
            goto addr_1b3_3; else 
            goto addr_1a7_6;
    }
    goto v19;
    addr_1a7_6:
    edi20 = *reinterpret_cast<int32_t*>(rbp21 - 20);
    rsi11 = *reinterpret_cast<int32_t**>(rbp22 - 32);
    print_array(edi20, rsi11);
    goto addr_1b3_3;
}

void init_array(int32_t edi, int32_t* rsi) {
    int32_t v3;
    int32_t* v4;
    int32_t v5;
    int32_t v6;

    v3 = edi;
    v4 = rsi;
    v5 = reinterpret_cast<int32_t>(fprintf);
    while (v5 < v3) {
        v6 = reinterpret_cast<int32_t>(fprintf);
        while (v6 < v3) {
            __asm__("cdq ");
            (v4 + v5 * 0xaf0)[v6] = v5 * v6 % 7 + 1;
            __asm__("cdq ");
            if ((v5 + v6) % 13 == fprintf || ((v5 + v6) % 7 == fprintf || reinterpret_cast<int1_t>((v5 + v6) % 11 == fprintf))) {
                (v4 + v5 * 0xaf0)[v6] = 0x3e7;
            }
            ++v6;
        }
        ++v5;
    }
    return;
}

void fun_181(int64_t rdi, int32_t* rsi) {
    int64_t rbp3;
    int64_t rdi4;
    int64_t rbp5;
    int64_t rdi6;
    int64_t rbp7;
    int32_t eax8;
    int64_t v9;
    int32_t edi10;
    int64_t rbp11;
    int64_t rbp12;

    if (*reinterpret_cast<int32_t*>(rbp3 - 4) <= 42) {
        addr_1b3_2:
        rdi4 = *reinterpret_cast<int64_t*>(rbp5 - 32);
        fun_1bc(rdi4, rsi);
    } else {
        rdi6 = **reinterpret_cast<int64_t**>(rbp7 - 16);
        rsi = reinterpret_cast<int32_t*>(0x199);
        eax8 = fun_19e(rdi6, 0x199);
        if (!reinterpret_cast<int1_t>(eax8 == fprintf)) 
            goto addr_1b3_2; else 
            goto addr_1a7_5;
    }
    goto v9;
    addr_1a7_5:
    edi10 = *reinterpret_cast<int32_t*>(rbp11 - 20);
    rsi = *reinterpret_cast<int32_t**>(rbp12 - 32);
    print_array(edi10, rsi);
    goto addr_1b3_2;
}

void fprintf(int32_t edi, int64_t rsi) {
}

void fun_1d() {
}

/* .L.str.3 */
void L_str_3() {
    __asm__("in al, dx");
}

struct s0 {
    signed char[1] pad1;
    signed char f1;
};

struct s1 {
    signed char[1] pad1;
    signed char f1;
};

void fun_68() {
    unsigned char* rbx1;
    unsigned char* rbx2;
    struct s0* rax3;
    struct s1* rax4;
    signed char cl5;
    int32_t eax6;
    unsigned char al7;
    int32_t ecx8;
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

    *rbx1 = reinterpret_cast<unsigned char>(*rbx2 >> reinterpret_cast<signed char>(fprintf));
    rax3->f1 = reinterpret_cast<signed char>(rax4->f1 + cl5);
    __asm__("ror dword [rax+0x63], 1");
    __asm__("in al, 0x8b");
    *reinterpret_cast<unsigned char*>(&eax6) = reinterpret_cast<unsigned char>(al7 | 0x91);
    if (eax6 >= ecx8 + (*reinterpret_cast<int32_t**>(rbp9 - 16) + *reinterpret_cast<int32_t*>(rbp10 - 28) * 0xaf0)[*reinterpret_cast<int32_t*>(rbp11 - 24)]) {
        *reinterpret_cast<int32_t*>(rbp12 - 32) = (*reinterpret_cast<int32_t**>(rbp13 - 16) + *reinterpret_cast<int32_t*>(rbp14 - 20) * 0xaf0)[*reinterpret_cast<int32_t*>(rbp15 - 28)] + (*reinterpret_cast<int32_t**>(rbp16 - 16) + *reinterpret_cast<int32_t*>(rbp17 - 28) * 0xaf0)[*reinterpret_cast<int32_t*>(rbp18 - 24)];
    } else {
        *reinterpret_cast<int32_t*>(rbp19 - 32) = (*reinterpret_cast<int32_t**>(rbp20 - 16) + *reinterpret_cast<int32_t*>(rbp21 - 20) * 0xaf0)[*reinterpret_cast<int32_t*>(rbp22 - 24)];
    }
    (*reinterpret_cast<int32_t**>(rbp23 - 16) + *reinterpret_cast<int32_t*>(rbp24 - 20) * 0xaf0)[*reinterpret_cast<int32_t*>(rbp25 - 24)] = *reinterpret_cast<int32_t*>(rbp26 - 32);
    *reinterpret_cast<int32_t*>(rbp27 - 24) = *reinterpret_cast<int32_t*>(rbp28 - 24) + 1;
}

void fun_117() {
    int64_t rbp1;
    int64_t rbp2;

    *reinterpret_cast<int32_t*>(rbp1 - 20) = *reinterpret_cast<int32_t*>(rbp2 - 20) + 1;
}

void fun_12a() {
    int64_t rbp1;
    int64_t rbp2;

    *reinterpret_cast<int32_t*>(rbp1 - 28) = *reinterpret_cast<int32_t*>(rbp2 - 28) + 1;
    goto 18;
}

void fun_13d() {
    int64_t v1;

    goto v1;
}

void submain(int32_t edi, int64_t rsi) {
    fun_165(0x77a100, 4);
}

