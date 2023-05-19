
void fprintf(int32_t edi, int32_t esi, int32_t edx, int64_t rcx);

void print_array(int32_t edi, int32_t esi, int32_t edx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7);

void fun_24e(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7);

void fun_257(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7);

void fun_260(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7);

int32_t fun_22a(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7) {
    int32_t eax8;
    int32_t edi9;
    int64_t rbp10;
    int64_t rbp11;
    int64_t rbp12;
    int64_t rbp13;
    int64_t rdi14;
    int64_t rbp15;
    int64_t rdi16;
    int64_t rbp17;
    int64_t rdi18;
    int64_t rbp19;
    int64_t v20;

    if (reinterpret_cast<int1_t>(eax8 == fprintf)) {
        edi9 = *reinterpret_cast<int32_t*>(rbp10 - 20);
        *reinterpret_cast<int32_t*>(&rsi) = *reinterpret_cast<int32_t*>(rbp11 - 24);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi) + 4) = reinterpret_cast<int32_t>(fprintf);
        *reinterpret_cast<int32_t*>(&rdx) = *reinterpret_cast<int32_t*>(rbp12 - 28);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx) + 4) = reinterpret_cast<int32_t>(fprintf);
        rcx = *reinterpret_cast<int64_t*>(rbp13 - 40);
        print_array(edi9, *reinterpret_cast<int32_t*>(&rsi), *reinterpret_cast<int32_t*>(&rdx), rcx, r8, r9, __return_address());
    }
    rdi14 = *reinterpret_cast<int64_t*>(rbp15 - 40);
    fun_24e(rdi14, rsi, rdx, rcx, r8, r9, __return_address());
    rdi16 = *reinterpret_cast<int64_t*>(rbp17 - 48);
    fun_257(rdi16, rsi, rdx, rcx, r8, r9, __return_address());
    rdi18 = *reinterpret_cast<int64_t*>(rbp19 - 56);
    fun_260(rdi18, rsi, rdx, rcx, r8, r9, __return_address());
    goto v20;
}

int64_t* g3dc = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_3ed(int64_t rdi, int64_t rsi);

int64_t* g3f4 = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_40c(int64_t rdi);

int64_t* g474 = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_485(int64_t rdi);

int32_t** g48c = reinterpret_cast<int32_t**>(0x48e8458b48388b48);

void fun_4c6(int64_t rdi);

int64_t* g501 = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_519(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx);

int64_t* g520 = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_531(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx);

void print_array(int32_t edi, int32_t esi, int32_t edx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7) {
    int32_t v8;
    int32_t v9;
    int32_t v10;
    int64_t* rax11;
    int64_t rdi12;
    int64_t* rax13;
    int64_t rdi14;
    int32_t* rsi15;
    int32_t v16;
    int32_t v17;
    int32_t v18;
    int64_t* rax19;
    int64_t rdi20;
    int32_t** rax21;
    int32_t* rdi22;
    int64_t* rax23;
    int64_t rdi24;
    int64_t* rax25;
    int64_t rdi26;

    v8 = edi;
    v9 = esi;
    v10 = edx;
    rax11 = g3dc;
    rdi12 = *rax11;
    fun_3ed(rdi12, 0x3e6);
    rax13 = g3f4;
    rdi14 = *rax13;
    rsi15 = reinterpret_cast<int32_t*>(0x3fe);
    fun_40c(rdi14);
    v16 = reinterpret_cast<int32_t>(fprintf);
    while (v16 < v8) {
        v17 = reinterpret_cast<int32_t>(fprintf);
        while (v17 < v9) {
            v18 = reinterpret_cast<int32_t>(fprintf);
            while (v18 < v10) {
                __asm__("cdq ");
                if (reinterpret_cast<int1_t>((v16 * v9 * v10 + v17 * v10 + v18) % 20 == fprintf)) {
                    rax19 = g474;
                    rdi20 = *rax19;
                    rsi15 = reinterpret_cast<int32_t*>(0x47e);
                    fun_485(rdi20);
                }
                rax21 = g48c;
                rdi22 = *rax21;
                rcx = v18;
                *rdi22 = *rsi15;
                rsi15 = reinterpret_cast<int32_t*>(0x4bf);
                fun_4c6(rdi22 + 1);
                ++v18;
            }
            ++v17;
        }
        ++v16;
    }
    rax23 = g501;
    rdi24 = *rax23;
    fun_519(rdi24, 0x50b, 0x512, rcx);
    rax25 = g520;
    rdi26 = *rax25;
    fun_531(rdi26, 0x52a, 0x512, rcx);
    return;
}

void fun_24e(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7) {
    int64_t rdi8;
    int64_t rbp9;
    int64_t rdi10;
    int64_t rbp11;
    int64_t v12;

    rdi8 = *reinterpret_cast<int64_t*>(rbp9 - 48);
    fun_257(rdi8, rsi, rdx, rcx, r8, r9, __return_address());
    rdi10 = *reinterpret_cast<int64_t*>(rbp11 - 56);
    fun_260(rdi10, rsi, rdx, rcx, r8, r9, __return_address());
    goto v12;
}

void fun_485(int64_t rdi) {
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
        rax2 = g48c;
        rdi3 = *rax2;
        rcx4 = *reinterpret_cast<int32_t*>(rbp5 - 36);
        *rdi3 = *rsi6;
        rsi6 = reinterpret_cast<int32_t*>(0x4bf);
        fun_4c6(rdi3 + 1);
        *reinterpret_cast<int32_t*>(rbp7 - 36) = *reinterpret_cast<int32_t*>(rbp8 - 36) + 1;
        while (*reinterpret_cast<int32_t*>(rbp9 - 36) >= *reinterpret_cast<int32_t*>(rbp10 - 12)) {
            *reinterpret_cast<int32_t*>(rbp11 - 32) = *reinterpret_cast<int32_t*>(rbp12 - 32) + 1;
            while (*reinterpret_cast<int32_t*>(rbp13 - 32) >= *reinterpret_cast<int32_t*>(rbp14 - 8)) {
                *reinterpret_cast<int32_t*>(rbp15 - 28) = *reinterpret_cast<int32_t*>(rbp16 - 28) + 1;
                if (*reinterpret_cast<int32_t*>(rbp17 - 28) >= *reinterpret_cast<int32_t*>(rbp18 - 4)) 
                    goto addr_4fa_13;
                *reinterpret_cast<int32_t*>(rbp19 - 32) = reinterpret_cast<int32_t>(fprintf);
            }
            *reinterpret_cast<int32_t*>(rbp20 - 36) = reinterpret_cast<int32_t>(fprintf);
        }
        __asm__("cdq ");
        if (!reinterpret_cast<int1_t>((*reinterpret_cast<int32_t*>(rbp21 - 28) * *reinterpret_cast<int32_t*>(rbp22 - 8) * *reinterpret_cast<int32_t*>(rbp23 - 12) + *reinterpret_cast<int32_t*>(rbp24 - 32) * *reinterpret_cast<int32_t*>(rbp25 - 12) + *reinterpret_cast<int32_t*>(rbp26 - 36)) % 20 == fprintf)) 
            continue;
        rax27 = g474;
        rdi28 = *rax27;
        rsi6 = reinterpret_cast<int32_t*>(0x47e);
        fun_485(rdi28);
    }
    addr_4fa_13:
    rax29 = g501;
    rdi30 = *rax29;
    fun_519(rdi30, 0x50b, 0x512, rcx4);
    rax31 = g520;
    rdi32 = *rax31;
    fun_531(rdi32, 0x52a, 0x512, rcx4);
    goto v33;
}

void fun_4c6(int64_t rdi) {
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
        *reinterpret_cast<int32_t*>(rbp2 - 36) = *reinterpret_cast<int32_t*>(rbp3 - 36) + 1;
        while (*reinterpret_cast<int32_t*>(rbp4 - 36) >= *reinterpret_cast<int32_t*>(rbp5 - 12)) {
            *reinterpret_cast<int32_t*>(rbp6 - 32) = *reinterpret_cast<int32_t*>(rbp7 - 32) + 1;
            while (*reinterpret_cast<int32_t*>(rbp8 - 32) >= *reinterpret_cast<int32_t*>(rbp9 - 8)) {
                *reinterpret_cast<int32_t*>(rbp10 - 28) = *reinterpret_cast<int32_t*>(rbp11 - 28) + 1;
                if (*reinterpret_cast<int32_t*>(rbp12 - 28) >= *reinterpret_cast<int32_t*>(rbp13 - 4)) 
                    goto addr_4fa_9;
                *reinterpret_cast<int32_t*>(rbp14 - 32) = reinterpret_cast<int32_t>(fprintf);
            }
            *reinterpret_cast<int32_t*>(rbp15 - 36) = reinterpret_cast<int32_t>(fprintf);
        }
        __asm__("cdq ");
        if (reinterpret_cast<int1_t>((*reinterpret_cast<int32_t*>(rbp16 - 28) * *reinterpret_cast<int32_t*>(rbp17 - 8) * *reinterpret_cast<int32_t*>(rbp18 - 12) + *reinterpret_cast<int32_t*>(rbp19 - 32) * *reinterpret_cast<int32_t*>(rbp20 - 12) + *reinterpret_cast<int32_t*>(rbp21 - 36)) % 20 == fprintf)) {
            rax22 = g474;
            rdi23 = *rax22;
            rsi24 = reinterpret_cast<int32_t*>(0x47e);
            fun_485(rdi23);
        }
        rax25 = g48c;
        rdi26 = *rax25;
        rcx27 = *reinterpret_cast<int32_t*>(rbp28 - 36);
        *rdi26 = *rsi24;
        rsi24 = reinterpret_cast<int32_t*>(0x4bf);
        fun_4c6(rdi26 + 1);
    }
    addr_4fa_9:
    rax29 = g501;
    rdi30 = *rax29;
    fun_519(rdi30, 0x50b, 0x512, rcx27);
    rax31 = g520;
    rdi32 = *rax31;
    fun_531(rdi32, 0x52a, 0x512, rcx27);
    goto v33;
}

void fun_3ed(int64_t rdi, int64_t rsi) {
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

    rax3 = g3f4;
    rdi4 = *rax3;
    rsi5 = reinterpret_cast<int32_t*>(0x3fe);
    fun_40c(rdi4);
    *reinterpret_cast<int32_t*>(rbp6 - 28) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp7 - 28) < *reinterpret_cast<int32_t*>(rbp8 - 4)) {
        *reinterpret_cast<int32_t*>(rbp9 - 32) = reinterpret_cast<int32_t>(fprintf);
        while (*reinterpret_cast<int32_t*>(rbp10 - 32) < *reinterpret_cast<int32_t*>(rbp11 - 8)) {
            *reinterpret_cast<int32_t*>(rbp12 - 36) = reinterpret_cast<int32_t>(fprintf);
            while (*reinterpret_cast<int32_t*>(rbp13 - 36) < *reinterpret_cast<int32_t*>(rbp14 - 12)) {
                __asm__("cdq ");
                if (reinterpret_cast<int1_t>((*reinterpret_cast<int32_t*>(rbp15 - 28) * *reinterpret_cast<int32_t*>(rbp16 - 8) * *reinterpret_cast<int32_t*>(rbp17 - 12) + *reinterpret_cast<int32_t*>(rbp18 - 32) * *reinterpret_cast<int32_t*>(rbp19 - 12) + *reinterpret_cast<int32_t*>(rbp20 - 36)) % 20 == fprintf)) {
                    rax21 = g474;
                    rdi22 = *rax21;
                    rsi5 = reinterpret_cast<int32_t*>(0x47e);
                    fun_485(rdi22);
                }
                rax23 = g48c;
                rdi24 = *rax23;
                rcx25 = *reinterpret_cast<int32_t*>(rbp26 - 36);
                *rdi24 = *rsi5;
                rsi5 = reinterpret_cast<int32_t*>(0x4bf);
                fun_4c6(rdi24 + 1);
                *reinterpret_cast<int32_t*>(rbp27 - 36) = *reinterpret_cast<int32_t*>(rbp28 - 36) + 1;
            }
            *reinterpret_cast<int32_t*>(rbp29 - 32) = *reinterpret_cast<int32_t*>(rbp30 - 32) + 1;
        }
        *reinterpret_cast<int32_t*>(rbp31 - 28) = *reinterpret_cast<int32_t*>(rbp32 - 28) + 1;
    }
    rax33 = g501;
    rdi34 = *rax33;
    fun_519(rdi34, 0x50b, 0x512, rcx25);
    rax35 = g520;
    rdi36 = *rax35;
    fun_531(rdi36, 0x52a, 0x512, rcx25);
    goto v37;
}

void fun_257(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7) {
    int64_t rdi8;
    int64_t rbp9;
    int64_t v10;

    rdi8 = *reinterpret_cast<int64_t*>(rbp9 - 56);
    fun_260(rdi8, rsi, rdx, rcx, r8, r9, __return_address());
    goto v10;
}

void fun_40c(int64_t rdi) {
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

    *reinterpret_cast<int32_t*>(rbp2 - 28) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp3 - 28) < *reinterpret_cast<int32_t*>(rbp4 - 4)) {
        *reinterpret_cast<int32_t*>(rbp5 - 32) = reinterpret_cast<int32_t>(fprintf);
        while (*reinterpret_cast<int32_t*>(rbp6 - 32) < *reinterpret_cast<int32_t*>(rbp7 - 8)) {
            *reinterpret_cast<int32_t*>(rbp8 - 36) = reinterpret_cast<int32_t>(fprintf);
            while (*reinterpret_cast<int32_t*>(rbp9 - 36) < *reinterpret_cast<int32_t*>(rbp10 - 12)) {
                __asm__("cdq ");
                if (reinterpret_cast<int1_t>((*reinterpret_cast<int32_t*>(rbp11 - 28) * *reinterpret_cast<int32_t*>(rbp12 - 8) * *reinterpret_cast<int32_t*>(rbp13 - 12) + *reinterpret_cast<int32_t*>(rbp14 - 32) * *reinterpret_cast<int32_t*>(rbp15 - 12) + *reinterpret_cast<int32_t*>(rbp16 - 36)) % 20 == fprintf)) {
                    rax17 = g474;
                    rdi18 = *rax17;
                    rsi19 = reinterpret_cast<int32_t*>(0x47e);
                    fun_485(rdi18);
                }
                rax20 = g48c;
                rdi21 = *rax20;
                rcx22 = *reinterpret_cast<int32_t*>(rbp23 - 36);
                *rdi21 = *rsi19;
                rsi19 = reinterpret_cast<int32_t*>(0x4bf);
                fun_4c6(rdi21 + 1);
                *reinterpret_cast<int32_t*>(rbp24 - 36) = *reinterpret_cast<int32_t*>(rbp25 - 36) + 1;
            }
            *reinterpret_cast<int32_t*>(rbp26 - 32) = *reinterpret_cast<int32_t*>(rbp27 - 32) + 1;
        }
        *reinterpret_cast<int32_t*>(rbp28 - 28) = *reinterpret_cast<int32_t*>(rbp29 - 28) + 1;
    }
    rax30 = g501;
    rdi31 = *rax30;
    fun_519(rdi31, 0x50b, 0x512, rcx22);
    rax32 = g520;
    rdi33 = *rax32;
    fun_531(rdi33, 0x52a, 0x512, rcx22);
    goto v34;
}

void fun_260(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7) {
    int64_t v8;

    goto v8;
}

void fun_519(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t* rax5;
    int64_t rdi6;
    int64_t v7;

    rax5 = g520;
    rdi6 = *rax5;
    fun_531(rdi6, 0x52a, rdx, rcx);
    goto v7;
}

void fun_531(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t v5;

    goto v5;
}

int64_t fun_1c6(int64_t rdi, int64_t rsi);

int64_t fun_1d9(int64_t rdi, int64_t rsi);

void init_array(int32_t edi, int32_t esi, int32_t edx, int64_t rcx, int64_t r8);

void fun_20d(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7);

void fun_1b3(int64_t rdi, int64_t rsi) {
    int64_t rbp3;
    int64_t rax4;
    int64_t rax5;
    int64_t rbp6;
    int64_t rax7;
    int64_t rbp8;
    int32_t edi9;
    int64_t rbp10;
    int32_t esi11;
    int64_t rbp12;
    int32_t edx13;
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
    int64_t r9_29;
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
    int64_t v41;
    int32_t edi42;
    int64_t rbp43;
    int64_t rbp44;
    int64_t rbp45;
    int64_t rbp46;

    *reinterpret_cast<int64_t*>(rbp3 - 40) = rax4;
    rax5 = fun_1c6(0xa0, 8);
    *reinterpret_cast<int64_t*>(rbp6 - 48) = rax5;
    rax7 = fun_1d9(0x6400, 8);
    *reinterpret_cast<int64_t*>(rbp8 - 56) = rax7;
    edi9 = *reinterpret_cast<int32_t*>(rbp10 - 20);
    esi11 = *reinterpret_cast<int32_t*>(rbp12 - 24);
    edx13 = *reinterpret_cast<int32_t*>(rbp14 - 28);
    rcx15 = *reinterpret_cast<int64_t*>(rbp16 - 40);
    r8_17 = *reinterpret_cast<int64_t*>(rbp18 - 56);
    init_array(edi9, esi11, edx13, rcx15, r8_17);
    *reinterpret_cast<int32_t*>(&rdi19) = *reinterpret_cast<int32_t*>(rbp20 - 20);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi19) + 4) = reinterpret_cast<int32_t>(fprintf);
    *reinterpret_cast<int32_t*>(&rsi21) = *reinterpret_cast<int32_t*>(rbp22 - 24);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi21) + 4) = reinterpret_cast<int32_t>(fprintf);
    *reinterpret_cast<int32_t*>(&rdx23) = *reinterpret_cast<int32_t*>(rbp24 - 28);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx23) + 4) = reinterpret_cast<int32_t>(fprintf);
    rcx25 = *reinterpret_cast<int64_t*>(rbp26 - 40);
    r8_27 = *reinterpret_cast<int64_t*>(rbp28 - 56);
    r9_29 = *reinterpret_cast<int64_t*>(rbp30 - 48);
    fun_20d(rdi19, rsi21, rdx23, rcx25, r8_27, r9_29, __return_address());
    if (*reinterpret_cast<int32_t*>(rbp31 - 4) <= 42) {
        addr_245_5:
        rdi32 = *reinterpret_cast<int64_t*>(rbp33 - 40);
        fun_24e(rdi32, rsi21, rdx23, rcx25, r8_27, r9_29, __return_address());
    } else {
        rdi34 = **reinterpret_cast<int64_t**>(rbp35 - 16);
        rsi21 = 0x225;
        eax36 = fun_22a(rdi34, 0x225, rdx23, rcx25, r8_27, r9_29, __return_address());
        if (!reinterpret_cast<int1_t>(eax36 == fprintf)) 
            goto addr_245_5; else 
            goto addr_233_8;
    }
    rdi37 = *reinterpret_cast<int64_t*>(rbp38 - 48);
    fun_257(rdi37, rsi21, rdx23, rcx25, r8_27, r9_29, __return_address());
    rdi39 = *reinterpret_cast<int64_t*>(rbp40 - 56);
    fun_260(rdi39, rsi21, rdx23, rcx25, r8_27, r9_29, __return_address());
    goto v41;
    addr_233_8:
    edi42 = *reinterpret_cast<int32_t*>(rbp43 - 20);
    *reinterpret_cast<int32_t*>(&rsi21) = *reinterpret_cast<int32_t*>(rbp44 - 24);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi21) + 4) = reinterpret_cast<int32_t>(fprintf);
    *reinterpret_cast<int32_t*>(&rdx23) = *reinterpret_cast<int32_t*>(rbp45 - 28);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx23) + 4) = reinterpret_cast<int32_t>(fprintf);
    rcx25 = *reinterpret_cast<int64_t*>(rbp46 - 40);
    print_array(edi42, *reinterpret_cast<int32_t*>(&rsi21), *reinterpret_cast<int32_t*>(&rdx23), rcx25, r8_27, r9_29, __return_address());
    goto addr_245_5;
}

int64_t fun_1c6(int64_t rdi, int64_t rsi) {
    int64_t rbp3;
    int64_t rax4;
    int64_t rax5;
    int64_t rbp6;
    int32_t edi7;
    int64_t rbp8;
    int32_t esi9;
    int64_t rbp10;
    int32_t edx11;
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
    int64_t r9_27;
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
    int64_t v39;
    int32_t edi40;
    int64_t rbp41;
    int64_t rbp42;
    int64_t rbp43;
    int64_t rbp44;

    *reinterpret_cast<int64_t*>(rbp3 - 48) = rax4;
    rax5 = fun_1d9(0x6400, 8);
    *reinterpret_cast<int64_t*>(rbp6 - 56) = rax5;
    edi7 = *reinterpret_cast<int32_t*>(rbp8 - 20);
    esi9 = *reinterpret_cast<int32_t*>(rbp10 - 24);
    edx11 = *reinterpret_cast<int32_t*>(rbp12 - 28);
    rcx13 = *reinterpret_cast<int64_t*>(rbp14 - 40);
    r8_15 = *reinterpret_cast<int64_t*>(rbp16 - 56);
    init_array(edi7, esi9, edx11, rcx13, r8_15);
    *reinterpret_cast<int32_t*>(&rdi17) = *reinterpret_cast<int32_t*>(rbp18 - 20);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi17) + 4) = reinterpret_cast<int32_t>(fprintf);
    *reinterpret_cast<int32_t*>(&rsi19) = *reinterpret_cast<int32_t*>(rbp20 - 24);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi19) + 4) = reinterpret_cast<int32_t>(fprintf);
    *reinterpret_cast<int32_t*>(&rdx21) = *reinterpret_cast<int32_t*>(rbp22 - 28);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx21) + 4) = reinterpret_cast<int32_t>(fprintf);
    rcx23 = *reinterpret_cast<int64_t*>(rbp24 - 40);
    r8_25 = *reinterpret_cast<int64_t*>(rbp26 - 56);
    r9_27 = *reinterpret_cast<int64_t*>(rbp28 - 48);
    fun_20d(rdi17, rsi19, rdx21, rcx23, r8_25, r9_27, __return_address());
    if (*reinterpret_cast<int32_t*>(rbp29 - 4) <= 42) {
        addr_245_4:
        rdi30 = *reinterpret_cast<int64_t*>(rbp31 - 40);
        fun_24e(rdi30, rsi19, rdx21, rcx23, r8_25, r9_27, __return_address());
    } else {
        rdi32 = **reinterpret_cast<int64_t**>(rbp33 - 16);
        rsi19 = 0x225;
        eax34 = fun_22a(rdi32, 0x225, rdx21, rcx23, r8_25, r9_27, __return_address());
        if (!reinterpret_cast<int1_t>(eax34 == fprintf)) 
            goto addr_245_4; else 
            goto addr_233_7;
    }
    rdi35 = *reinterpret_cast<int64_t*>(rbp36 - 48);
    fun_257(rdi35, rsi19, rdx21, rcx23, r8_25, r9_27, __return_address());
    rdi37 = *reinterpret_cast<int64_t*>(rbp38 - 56);
    fun_260(rdi37, rsi19, rdx21, rcx23, r8_25, r9_27, __return_address());
    goto v39;
    addr_233_7:
    edi40 = *reinterpret_cast<int32_t*>(rbp41 - 20);
    *reinterpret_cast<int32_t*>(&rsi19) = *reinterpret_cast<int32_t*>(rbp42 - 24);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi19) + 4) = reinterpret_cast<int32_t>(fprintf);
    *reinterpret_cast<int32_t*>(&rdx21) = *reinterpret_cast<int32_t*>(rbp43 - 28);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx21) + 4) = reinterpret_cast<int32_t>(fprintf);
    rcx23 = *reinterpret_cast<int64_t*>(rbp44 - 40);
    print_array(edi40, *reinterpret_cast<int32_t*>(&rsi19), *reinterpret_cast<int32_t*>(&rdx21), rcx23, r8_25, r9_27, __return_address());
    goto addr_245_4;
}

int64_t fun_1d9(int64_t rdi, int64_t rsi) {
    int64_t rbp3;
    int64_t rax4;
    int32_t edi5;
    int64_t rbp6;
    int32_t esi7;
    int64_t rbp8;
    int32_t edx9;
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
    int64_t r9_25;
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
    int64_t v37;
    int32_t edi38;
    int64_t rbp39;
    int64_t rbp40;
    int64_t rbp41;
    int64_t rbp42;

    *reinterpret_cast<int64_t*>(rbp3 - 56) = rax4;
    edi5 = *reinterpret_cast<int32_t*>(rbp6 - 20);
    esi7 = *reinterpret_cast<int32_t*>(rbp8 - 24);
    edx9 = *reinterpret_cast<int32_t*>(rbp10 - 28);
    rcx11 = *reinterpret_cast<int64_t*>(rbp12 - 40);
    r8_13 = *reinterpret_cast<int64_t*>(rbp14 - 56);
    init_array(edi5, esi7, edx9, rcx11, r8_13);
    *reinterpret_cast<int32_t*>(&rdi15) = *reinterpret_cast<int32_t*>(rbp16 - 20);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi15) + 4) = reinterpret_cast<int32_t>(fprintf);
    *reinterpret_cast<int32_t*>(&rsi17) = *reinterpret_cast<int32_t*>(rbp18 - 24);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi17) + 4) = reinterpret_cast<int32_t>(fprintf);
    *reinterpret_cast<int32_t*>(&rdx19) = *reinterpret_cast<int32_t*>(rbp20 - 28);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx19) + 4) = reinterpret_cast<int32_t>(fprintf);
    rcx21 = *reinterpret_cast<int64_t*>(rbp22 - 40);
    r8_23 = *reinterpret_cast<int64_t*>(rbp24 - 56);
    r9_25 = *reinterpret_cast<int64_t*>(rbp26 - 48);
    fun_20d(rdi15, rsi17, rdx19, rcx21, r8_23, r9_25, __return_address());
    if (*reinterpret_cast<int32_t*>(rbp27 - 4) <= 42) {
        addr_245_3:
        rdi28 = *reinterpret_cast<int64_t*>(rbp29 - 40);
        fun_24e(rdi28, rsi17, rdx19, rcx21, r8_23, r9_25, __return_address());
    } else {
        rdi30 = **reinterpret_cast<int64_t**>(rbp31 - 16);
        rsi17 = 0x225;
        eax32 = fun_22a(rdi30, 0x225, rdx19, rcx21, r8_23, r9_25, __return_address());
        if (!reinterpret_cast<int1_t>(eax32 == fprintf)) 
            goto addr_245_3; else 
            goto addr_233_6;
    }
    rdi33 = *reinterpret_cast<int64_t*>(rbp34 - 48);
    fun_257(rdi33, rsi17, rdx19, rcx21, r8_23, r9_25, __return_address());
    rdi35 = *reinterpret_cast<int64_t*>(rbp36 - 56);
    fun_260(rdi35, rsi17, rdx19, rcx21, r8_23, r9_25, __return_address());
    goto v37;
    addr_233_6:
    edi38 = *reinterpret_cast<int32_t*>(rbp39 - 20);
    *reinterpret_cast<int32_t*>(&rsi17) = *reinterpret_cast<int32_t*>(rbp40 - 24);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi17) + 4) = reinterpret_cast<int32_t>(fprintf);
    *reinterpret_cast<int32_t*>(&rdx19) = *reinterpret_cast<int32_t*>(rbp41 - 28);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx19) + 4) = reinterpret_cast<int32_t>(fprintf);
    rcx21 = *reinterpret_cast<int64_t*>(rbp42 - 40);
    print_array(edi38, *reinterpret_cast<int32_t*>(&rsi17), *reinterpret_cast<int32_t*>(&rdx19), rcx21, r8_23, r9_25, __return_address());
    goto addr_245_3;
}

void init_array(int32_t edi, int32_t esi, int32_t edx, int64_t rcx, int64_t r8) {
    int32_t* rdi1;
    int32_t* rsi2;
    int32_t v6;
    int32_t v7;
    int32_t v8;
    int32_t v9;
    int32_t v10;
    int32_t v11;
    int32_t v12;
    int32_t v13;

    *reinterpret_cast<int32_t*>(&rdi1) = edi;
    *reinterpret_cast<int32_t*>(&rsi2) = esi;
    v6 = *reinterpret_cast<int32_t*>(&rdi1);
    v7 = *reinterpret_cast<int32_t*>(&rsi2);
    v8 = edx;
    v9 = reinterpret_cast<int32_t>(fprintf);
    while (v9 < v6) {
        v10 = reinterpret_cast<int32_t>(fprintf);
        while (v10 < v7) {
            v11 = reinterpret_cast<int32_t>(fprintf);
            while (v11 < v8) {
                __asm__("cdq ");
                __asm__("cvtsi2sd xmm0, edx");
                __asm__("cvtsi2sd xmm1, dword [rbp-0xc]");
                __asm__("divsd xmm0, xmm1");
                *rdi1 = *rsi2;
                ++rdi1;
                ++rsi2;
                ++v11;
            }
            ++v10;
        }
        ++v9;
    }
    v12 = reinterpret_cast<int32_t>(fprintf);
    while (v12 < v8) {
        v13 = reinterpret_cast<int32_t>(fprintf);
        while (v13 < v8) {
            __asm__("cdq ");
            __asm__("cvtsi2sd xmm0, edx");
            __asm__("cvtsi2sd xmm1, dword [rbp-0xc]");
            __asm__("divsd xmm0, xmm1");
            *rdi1 = *rsi2;
            ++rdi1;
            ++rsi2;
            ++v13;
        }
        ++v12;
    }
    return;
}

void fun_20d(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7) {
    int64_t rbp8;
    int64_t rdi9;
    int64_t rbp10;
    int64_t rdi11;
    int64_t rbp12;
    int32_t eax13;
    int64_t rdi14;
    int64_t rbp15;
    int64_t rdi16;
    int64_t rbp17;
    int64_t v18;
    int32_t edi19;
    int64_t rbp20;
    int64_t rbp21;
    int64_t rbp22;
    int64_t rbp23;

    if (*reinterpret_cast<int32_t*>(rbp8 - 4) <= 42) {
        addr_245_2:
        rdi9 = *reinterpret_cast<int64_t*>(rbp10 - 40);
        fun_24e(rdi9, rsi, rdx, rcx, r8, r9, __return_address());
    } else {
        rdi11 = **reinterpret_cast<int64_t**>(rbp12 - 16);
        rsi = 0x225;
        eax13 = fun_22a(rdi11, 0x225, rdx, rcx, r8, r9, __return_address());
        if (!reinterpret_cast<int1_t>(eax13 == fprintf)) 
            goto addr_245_2; else 
            goto addr_233_5;
    }
    rdi14 = *reinterpret_cast<int64_t*>(rbp15 - 48);
    fun_257(rdi14, rsi, rdx, rcx, r8, r9, __return_address());
    rdi16 = *reinterpret_cast<int64_t*>(rbp17 - 56);
    fun_260(rdi16, rsi, rdx, rcx, r8, r9, __return_address());
    goto v18;
    addr_233_5:
    edi19 = *reinterpret_cast<int32_t*>(rbp20 - 20);
    *reinterpret_cast<int32_t*>(&rsi) = *reinterpret_cast<int32_t*>(rbp21 - 24);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi) + 4) = reinterpret_cast<int32_t>(fprintf);
    *reinterpret_cast<int32_t*>(&rdx) = *reinterpret_cast<int32_t*>(rbp22 - 28);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx) + 4) = reinterpret_cast<int32_t>(fprintf);
    rcx = *reinterpret_cast<int64_t*>(rbp23 - 40);
    print_array(edi19, *reinterpret_cast<int32_t*>(&rsi), *reinterpret_cast<int32_t*>(&rdx), rcx, r8, r9, __return_address());
    goto addr_245_2;
}

void fprintf(int32_t edi, int32_t esi, int32_t edx, int64_t rcx) {
}

void fun_19() {
    int64_t rbp1;

    *reinterpret_cast<int32_t*>(rbp1 - 44) = reinterpret_cast<int32_t>(fprintf);
}

struct s0 {
    int32_t f0;
    int32_t f4;
};

struct s1 {
    int32_t f0;
    int32_t f4;
};

int64_t fun_ffffffffd44d63c5();

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

void fun_70(struct s0* rdi, struct s1* rsi) {
    int64_t rbp3;
    int64_t rax4;
    int64_t rax5;
    int64_t rax6;
    int64_t rax7;
    signed char cl8;
    struct s2* rdi9;
    struct s3* rsi10;
    struct s4* rdi11;
    struct s5* rsi12;

    *reinterpret_cast<int32_t*>(&rbp3) = static_cast<int32_t>(rax4 + rax5);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp3) + 4) = reinterpret_cast<int32_t>(fprintf);
    *reinterpret_cast<signed char*>(rax6 - 0x75) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(rax7 - 0x75) + cl8);
    fun_ffffffffd44d63c5();
    rdi->f0 = rsi->f0;
    rdi9 = reinterpret_cast<struct s2*>(&rdi->f4);
    rsi10 = reinterpret_cast<struct s3*>(&rsi->f4);
    rdi9->f0 = rsi10->f0;
    rdi11 = reinterpret_cast<struct s4*>(&rdi9->f4);
    rsi12 = reinterpret_cast<struct s5*>(&rsi10->f4);
    rdi11->f0 = rsi12->f0;
    __asm__("mulsd xmm0, xmm2");
    __asm__("addsd xmm0, xmm1");
    rdi11->f4 = rsi12->f4;
    *reinterpret_cast<int32_t*>(rbp3 - 56) = *reinterpret_cast<int32_t*>(rbp3 - 56) + 1;
}

void fun_e1() {
    int64_t rbp1;
    int64_t rbp2;

    *reinterpret_cast<int32_t*>(rbp1 - 52) = *reinterpret_cast<int32_t*>(rbp2 - 52) + 1;
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

void fun_f4() {
    int64_t rbp1;
    int64_t rbp2;
    int64_t rbp3;
    struct s6* rdi4;
    struct s7* rsi5;
    struct s8* rdi6;
    struct s9* rsi7;
    int64_t rbp8;
    int64_t rbp9;
    int64_t rbp10;
    int64_t rbp11;

    *reinterpret_cast<int32_t*>(rbp1 - 52) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp2 - 52) < *reinterpret_cast<int32_t*>(rbp3 - 12)) {
        rdi4->f0 = rsi5->f0;
        rdi6 = reinterpret_cast<struct s8*>(&rdi4->f4);
        rsi7 = reinterpret_cast<struct s9*>(&rsi5->f4);
        rdi6->f0 = rsi7->f0;
        rdi4 = reinterpret_cast<struct s6*>(&rdi6->f4);
        rsi5 = reinterpret_cast<struct s7*>(&rsi7->f4);
        *reinterpret_cast<int32_t*>(rbp8 - 52) = *reinterpret_cast<int32_t*>(rbp9 - 52) + 1;
    }
    *reinterpret_cast<int32_t*>(rbp10 - 48) = *reinterpret_cast<int32_t*>(rbp11 - 48) + 1;
}

void fun_15e() {
    int64_t rbp1;
    int64_t rbp2;

    *reinterpret_cast<int32_t*>(rbp1 - 44) = *reinterpret_cast<int32_t*>(rbp2 - 44) + 1;
    goto 32;
}

void fun_171() {
    int64_t v1;

    goto v1;
}

void submain(int32_t edi, int64_t rsi) {
    fun_1b3(0x334500, 8);
}

