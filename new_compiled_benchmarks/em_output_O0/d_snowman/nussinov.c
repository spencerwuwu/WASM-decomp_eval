
void fprintf();

void print_array(int32_t edi, int32_t* rsi);

void fun_97(int64_t rdi, int32_t* rsi);

void fun_a0(int64_t rdi, int32_t* rsi);

void fun_79(int64_t rdi, int32_t* rsi) {
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
        rsi = *reinterpret_cast<int32_t**>(rbp6 - 40);
        print_array(edi4, rsi);
    }
    rdi7 = *reinterpret_cast<int64_t*>(rbp8 - 32);
    fun_97(rdi7, rsi);
    rdi9 = *reinterpret_cast<int64_t*>(rbp10 - 40);
    fun_a0(rdi9, rsi);
    goto v11;
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

void print_array(int32_t edi, int32_t* rsi) {
    int32_t v3;
    int32_t* v4;
    int32_t v5;
    int64_t* rax6;
    int64_t rdi7;
    int64_t* rax8;
    int64_t rdi9;
    int32_t v10;
    int32_t v11;
    int64_t* rax12;
    int64_t rdi13;
    int64_t* rax14;
    int64_t rdi15;
    int64_t rdx16;
    int64_t* rax17;
    int64_t rdi18;
    int64_t* rax19;
    int64_t rdi20;

    v3 = edi;
    v4 = rsi;
    v5 = reinterpret_cast<int32_t>(fprintf);
    rax6 = g5fd;
    rdi7 = *rax6;
    fun_60e(rdi7, 0x607);
    rax8 = g615;
    rdi9 = *rax8;
    fun_62d(rdi9, 0x61f, 0x626);
    v10 = reinterpret_cast<int32_t>(fprintf);
    while (v10 < v3) {
        v11 = v10;
        while (v11 < v3) {
            __asm__("cdq ");
            if (reinterpret_cast<int1_t>(v5 % 20 == fprintf)) {
                rax12 = g66d;
                rdi13 = *rax12;
                fun_67e(rdi13, 0x677);
            }
            rax14 = g685;
            rdi15 = *rax14;
            *reinterpret_cast<int32_t*>(&rdx16) = (v4 + v10 * 0x9c4)[v11];
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx16) + 4) = reinterpret_cast<int32_t>(fprintf);
            fun_6af(rdi15, 0x6a8, rdx16);
            ++v5;
            ++v11;
        }
        ++v10;
    }
    rax17 = g6e0;
    rdi18 = *rax17;
    fun_6f8(rdi18, 0x6ea, 0x6f1);
    rax19 = g6ff;
    rdi20 = *rax19;
    fun_710(rdi20, 0x709, 0x6f1);
    return;
}

void fun_97(int64_t rdi, int32_t* rsi) {
    int64_t rdi3;
    int64_t rbp4;
    int64_t v5;

    rdi3 = *reinterpret_cast<int64_t*>(rbp4 - 40);
    fun_a0(rdi3, rsi);
    goto v5;
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

void fun_a0(int64_t rdi, int32_t* rsi) {
    int64_t v3;

    goto v3;
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

void fprintf() {
}

void fun_68() {
    int64_t rdi1;
    int64_t* rax2;

    rdi1 = *rax2;
    fun_79(rdi1, 0x74);
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

void kernel_nussinov(int32_t edi, int64_t rsi, int32_t* rdx) {
    int32_t v4;
    int64_t v5;
    int32_t* v6;
    int32_t v7;
    int32_t v8;
    int32_t v9;
    int32_t v10;
    int32_t v11;
    int32_t edx12;
    int32_t ecx13;
    int32_t v14;
    int32_t v15;
    int32_t v16;

    v4 = edi;
    v5 = rsi;
    v6 = rdx;
    v7 = v4 - 1;
    while (v7 >= reinterpret_cast<int32_t>(fprintf)) {
        v8 = v7 + 1;
        while (v8 < v4) {
            if (v8 - 1 >= reinterpret_cast<int32_t>(fprintf)) {
                if ((v6 + v7 * 0x9c4)[v8] < (v6 + v7 * 0x9c4)[v8 - 1]) {
                    v9 = (v6 + v7 * 0x9c4)[v8 - 1];
                } else {
                    v9 = (v6 + v7 * 0x9c4)[v8];
                }
                (v6 + v7 * 0x9c4)[v8] = v9;
            }
            if (v7 + 1 < v4) {
                if ((v6 + v7 * 0x9c4)[v8] < (v6 + (v7 + 1) * 0x9c4)[v8]) {
                    v10 = (v6 + (v7 + 1) * 0x9c4)[v8];
                } else {
                    v10 = (v6 + v7 * 0x9c4)[v8];
                }
                (v6 + v7 * 0x9c4)[v8] = v10;
            }
            if (v8 - 1 >= reinterpret_cast<int32_t>(fprintf) && v7 + 1 < v4) {
                if (v7 >= v8 - 1) {
                    if ((v6 + v7 * 0x9c4)[v8] < (v6 + (v7 + 1) * 0x9c4)[v8 - 1]) {
                        v11 = (v6 + (v7 + 1) * 0x9c4)[v8 - 1];
                    } else {
                        v11 = (v6 + v7 * 0x9c4)[v8];
                    }
                    (v6 + v7 * 0x9c4)[v8] = v11;
                } else {
                    edx12 = reinterpret_cast<int32_t>(fprintf);
                    if (*reinterpret_cast<signed char*>(v5 + v7) + *reinterpret_cast<signed char*>(v5 + v8) == 3) {
                        edx12 = 1;
                    }
                    if ((v6 + v7 * 0x9c4)[v8] < (v6 + (v7 + 1) * 0x9c4)[v8 - 1] + edx12) {
                        ecx13 = reinterpret_cast<int32_t>(fprintf);
                        if (*reinterpret_cast<signed char*>(v5 + v7) + *reinterpret_cast<signed char*>(v5 + v8) == 3) {
                            ecx13 = 1;
                        }
                        v14 = (v6 + (v7 + 1) * 0x9c4)[v8 - 1] + ecx13;
                    } else {
                        v14 = (v6 + v7 * 0x9c4)[v8];
                    }
                    (v6 + v7 * 0x9c4)[v8] = v14;
                }
            }
            v15 = v7 + 1;
            while (v15 < v8) {
                if ((v6 + v7 * 0x9c4)[v8] < (v6 + v7 * 0x9c4)[v15] + (v6 + (v15 + 1) * 0x9c4)[v8]) {
                    v16 = (v6 + v7 * 0x9c4)[v15] + (v6 + (v15 + 1) * 0x9c4)[v8];
                } else {
                    v16 = (v6 + v7 * 0x9c4)[v8];
                }
                (v6 + v7 * 0x9c4)[v8] = v16;
                ++v15;
            }
            ++v8;
        }
        --v7;
    }
    return;
}

