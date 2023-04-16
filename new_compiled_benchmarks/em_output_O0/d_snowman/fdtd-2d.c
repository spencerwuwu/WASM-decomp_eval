
void fprintf();

void print_array(int32_t edi, int32_t esi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7);

void fun_41a(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7);

void fun_423(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7);

void fun_42c(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7);

void fun_435(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7);

int32_t fun_3f1(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7) {
    int32_t eax8;
    int32_t edi9;
    int64_t rbp10;
    int64_t rbp11;
    int64_t rbp12;
    int64_t rbp13;
    int64_t rbp14;
    int64_t rdi15;
    int64_t rbp16;
    int64_t rdi17;
    int64_t rbp18;
    int64_t rdi19;
    int64_t rbp20;
    int64_t rdi21;
    int64_t rbp22;
    int64_t v23;

    if (reinterpret_cast<int1_t>(eax8 == fprintf)) {
        edi9 = *reinterpret_cast<int32_t*>(rbp10 - 24);
        *reinterpret_cast<int32_t*>(&rsi) = *reinterpret_cast<int32_t*>(rbp11 - 28);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi) + 4) = reinterpret_cast<int32_t>(fprintf);
        rdx = *reinterpret_cast<int64_t*>(rbp12 - 40);
        rcx = *reinterpret_cast<int64_t*>(rbp13 - 48);
        r8 = *reinterpret_cast<int64_t*>(rbp14 - 56);
        print_array(edi9, *reinterpret_cast<int32_t*>(&rsi), rdx, rcx, r8, r9, __return_address());
    }
    rdi15 = *reinterpret_cast<int64_t*>(rbp16 - 40);
    fun_41a(rdi15, rsi, rdx, rcx, r8, r9, __return_address());
    rdi17 = *reinterpret_cast<int64_t*>(rbp18 - 48);
    fun_423(rdi17, rsi, rdx, rcx, r8, r9, __return_address());
    rdi19 = *reinterpret_cast<int64_t*>(rbp20 - 56);
    fun_42c(rdi19, rsi, rdx, rcx, r8, r9, __return_address());
    rdi21 = *reinterpret_cast<int64_t*>(rbp22 - 64);
    fun_435(rdi21, rsi, rdx, rcx, r8, r9, __return_address());
    goto v23;
}

int64_t* g5a1 = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_5b2(int64_t rdi, int64_t rsi);

int64_t* g5b9 = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_5d1(int64_t rdi);

int64_t* g619 = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_62a(int64_t rdi);

int32_t** g631 = reinterpret_cast<int32_t**>(0x48f0458b48388b48);

void fun_65d(int64_t rdi);

int64_t* g685 = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_69d(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx);

int64_t* g6a4 = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_6b5(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx);

int64_t* g6bc = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_6d4(int64_t rdi);

int64_t* g71c = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_72d(int64_t rdi);

int32_t** g734 = reinterpret_cast<int32_t**>(0x48e8458b48388b48);

void fun_760(int64_t rdi);

int64_t* g788 = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_7a0(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx);

int64_t* g7a7 = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_7bf(int64_t rdi);

int64_t* g807 = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_818(int64_t rdi);

int32_t** g81f = reinterpret_cast<int32_t**>(0x48e0458b48388b48);

void fun_84b(int64_t rdi);

int64_t* g873 = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_88b(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx);

void print_array(int32_t edi, int32_t esi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7) {
    int32_t v8;
    int32_t v9;
    int64_t* rax10;
    int64_t rdi11;
    int64_t* rax12;
    int64_t rdi13;
    int32_t* rsi14;
    int32_t v15;
    int32_t v16;
    int64_t* rax17;
    int64_t rdi18;
    int32_t** rax19;
    int32_t* rdi20;
    int64_t* rax21;
    int64_t rdi22;
    int64_t* rax23;
    int64_t rdi24;
    int64_t* rax25;
    int64_t rdi26;
    int32_t* rsi27;
    int32_t v28;
    int32_t v29;
    int64_t* rax30;
    int64_t rdi31;
    int32_t** rax32;
    int32_t* rdi33;
    int64_t* rax34;
    int64_t rdi35;
    int64_t* rax36;
    int64_t rdi37;
    int32_t* rsi38;
    int32_t v39;
    int32_t v40;
    int64_t* rax41;
    int64_t rdi42;
    int32_t** rax43;
    int32_t* rdi44;
    int64_t* rax45;
    int64_t rdi46;

    v8 = edi;
    v9 = esi;
    rax10 = g5a1;
    rdi11 = *rax10;
    fun_5b2(rdi11, 0x5ab);
    rax12 = g5b9;
    rdi13 = *rax12;
    rsi14 = reinterpret_cast<int32_t*>(0x5c3);
    fun_5d1(rdi13);
    v15 = reinterpret_cast<int32_t>(fprintf);
    while (v15 < v8) {
        v16 = reinterpret_cast<int32_t>(fprintf);
        while (v16 < v9) {
            __asm__("cdq ");
            if (reinterpret_cast<int1_t>((v15 * v8 + v16) % 20 == fprintf)) {
                rax17 = g619;
                rdi18 = *rax17;
                rsi14 = reinterpret_cast<int32_t*>(0x623);
                fun_62a(rdi18);
            }
            rax19 = g631;
            rdi20 = *rax19;
            rcx = v16;
            *rdi20 = *rsi14;
            rsi14 = reinterpret_cast<int32_t*>(0x656);
            fun_65d(rdi20 + 1);
            ++v16;
        }
        ++v15;
    }
    rax21 = g685;
    rdi22 = *rax21;
    fun_69d(rdi22, 0x68f, 0x696, rcx);
    rax23 = g6a4;
    rdi24 = *rax23;
    fun_6b5(rdi24, 0x6ae, 0x696, rcx);
    rax25 = g6bc;
    rdi26 = *rax25;
    rsi27 = reinterpret_cast<int32_t*>(0x6c6);
    fun_6d4(rdi26);
    v28 = reinterpret_cast<int32_t>(fprintf);
    while (v28 < v8) {
        v29 = reinterpret_cast<int32_t>(fprintf);
        while (v29 < v9) {
            __asm__("cdq ");
            if (reinterpret_cast<int1_t>((v28 * v8 + v29) % 20 == fprintf)) {
                rax30 = g71c;
                rdi31 = *rax30;
                rsi27 = reinterpret_cast<int32_t*>(0x726);
                fun_72d(rdi31);
            }
            rax32 = g734;
            rdi33 = *rax32;
            rcx = v29;
            *rdi33 = *rsi27;
            rsi27 = reinterpret_cast<int32_t*>(0x759);
            fun_760(rdi33 + 1);
            ++v29;
        }
        ++v28;
    }
    rax34 = g788;
    rdi35 = *rax34;
    fun_7a0(rdi35, 0x792, 0x799, rcx);
    rax36 = g7a7;
    rdi37 = *rax36;
    rsi38 = reinterpret_cast<int32_t*>(0x7b1);
    fun_7bf(rdi37);
    v39 = reinterpret_cast<int32_t>(fprintf);
    while (v39 < v8) {
        v40 = reinterpret_cast<int32_t>(fprintf);
        while (v40 < v9) {
            __asm__("cdq ");
            if (reinterpret_cast<int1_t>((v39 * v8 + v40) % 20 == fprintf)) {
                rax41 = g807;
                rdi42 = *rax41;
                rsi38 = reinterpret_cast<int32_t*>(0x811);
                fun_818(rdi42);
            }
            rax43 = g81f;
            rdi44 = *rax43;
            rcx = v40;
            *rdi44 = *rsi38;
            rsi38 = reinterpret_cast<int32_t*>(0x844);
            fun_84b(rdi44 + 1);
            ++v40;
        }
        ++v39;
    }
    rax45 = g873;
    rdi46 = *rax45;
    fun_88b(rdi46, 0x87d, 0x884, rcx);
    return;
}

void fun_41a(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7) {
    int64_t rdi8;
    int64_t rbp9;
    int64_t rdi10;
    int64_t rbp11;
    int64_t rdi12;
    int64_t rbp13;
    int64_t v14;

    rdi8 = *reinterpret_cast<int64_t*>(rbp9 - 48);
    fun_423(rdi8, rsi, rdx, rcx, r8, r9, __return_address());
    rdi10 = *reinterpret_cast<int64_t*>(rbp11 - 56);
    fun_42c(rdi10, rsi, rdx, rcx, r8, r9, __return_address());
    rdi12 = *reinterpret_cast<int64_t*>(rbp13 - 64);
    fun_435(rdi12, rsi, rdx, rcx, r8, r9, __return_address());
    goto v14;
}

void fun_62a(int64_t rdi) {
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
    int64_t* rax25;
    int64_t rdi26;
    int32_t* rsi27;
    int64_t rbp28;
    int64_t rbp29;
    int64_t rbp30;
    int64_t rbp31;
    int64_t rbp32;
    int64_t rbp33;
    int64_t rbp34;
    int64_t rbp35;
    int64_t rbp36;
    int64_t* rax37;
    int64_t rdi38;
    int32_t** rax39;
    int32_t* rdi40;
    int64_t rbp41;
    int64_t rbp42;
    int64_t rbp43;
    int64_t rbp44;
    int64_t rbp45;
    int64_t* rax46;
    int64_t rdi47;
    int64_t* rax48;
    int64_t rdi49;
    int32_t* rsi50;
    int64_t rbp51;
    int64_t rbp52;
    int64_t rbp53;
    int64_t rbp54;
    int64_t rbp55;
    int64_t rbp56;
    int64_t rbp57;
    int64_t rbp58;
    int64_t rbp59;
    int64_t* rax60;
    int64_t rdi61;
    int32_t** rax62;
    int32_t* rdi63;
    int64_t rbp64;
    int64_t rbp65;
    int64_t rbp66;
    int64_t rbp67;
    int64_t rbp68;
    int64_t* rax69;
    int64_t rdi70;
    int64_t v71;

    while (1) {
        rax2 = g631;
        rdi3 = *rax2;
        rcx4 = *reinterpret_cast<int32_t*>(rbp5 - 40);
        *rdi3 = *rsi6;
        rsi6 = reinterpret_cast<int32_t*>(0x656);
        fun_65d(rdi3 + 1);
        *reinterpret_cast<int32_t*>(rbp7 - 40) = *reinterpret_cast<int32_t*>(rbp8 - 40) + 1;
        while (*reinterpret_cast<int32_t*>(rbp9 - 40) >= *reinterpret_cast<int32_t*>(rbp10 - 8)) {
            *reinterpret_cast<int32_t*>(rbp11 - 36) = *reinterpret_cast<int32_t*>(rbp12 - 36) + 1;
            if (*reinterpret_cast<int32_t*>(rbp13 - 36) >= *reinterpret_cast<int32_t*>(rbp14 - 4)) 
                goto addr_67e_10;
            *reinterpret_cast<int32_t*>(rbp15 - 40) = reinterpret_cast<int32_t>(fprintf);
        }
        __asm__("cdq ");
        if (!reinterpret_cast<int1_t>((*reinterpret_cast<int32_t*>(rbp16 - 36) * *reinterpret_cast<int32_t*>(rbp17 - 4) + *reinterpret_cast<int32_t*>(rbp18 - 40)) % 20 == fprintf)) 
            continue;
        rax19 = g619;
        rdi20 = *rax19;
        rsi6 = reinterpret_cast<int32_t*>(0x623);
        fun_62a(rdi20);
    }
    addr_67e_10:
    rax21 = g685;
    rdi22 = *rax21;
    fun_69d(rdi22, 0x68f, 0x696, rcx4);
    rax23 = g6a4;
    rdi24 = *rax23;
    fun_6b5(rdi24, 0x6ae, 0x696, rcx4);
    rax25 = g6bc;
    rdi26 = *rax25;
    rsi27 = reinterpret_cast<int32_t*>(0x6c6);
    fun_6d4(rdi26);
    *reinterpret_cast<int32_t*>(rbp28 - 36) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp29 - 36) < *reinterpret_cast<int32_t*>(rbp30 - 4)) {
        *reinterpret_cast<int32_t*>(rbp31 - 40) = reinterpret_cast<int32_t>(fprintf);
        while (*reinterpret_cast<int32_t*>(rbp32 - 40) < *reinterpret_cast<int32_t*>(rbp33 - 8)) {
            __asm__("cdq ");
            if (reinterpret_cast<int1_t>((*reinterpret_cast<int32_t*>(rbp34 - 36) * *reinterpret_cast<int32_t*>(rbp35 - 4) + *reinterpret_cast<int32_t*>(rbp36 - 40)) % 20 == fprintf)) {
                rax37 = g71c;
                rdi38 = *rax37;
                rsi27 = reinterpret_cast<int32_t*>(0x726);
                fun_72d(rdi38);
            }
            rax39 = g734;
            rdi40 = *rax39;
            rcx4 = *reinterpret_cast<int32_t*>(rbp41 - 40);
            *rdi40 = *rsi27;
            rsi27 = reinterpret_cast<int32_t*>(0x759);
            fun_760(rdi40 + 1);
            *reinterpret_cast<int32_t*>(rbp42 - 40) = *reinterpret_cast<int32_t*>(rbp43 - 40) + 1;
        }
        *reinterpret_cast<int32_t*>(rbp44 - 36) = *reinterpret_cast<int32_t*>(rbp45 - 36) + 1;
    }
    rax46 = g788;
    rdi47 = *rax46;
    fun_7a0(rdi47, 0x792, 0x799, rcx4);
    rax48 = g7a7;
    rdi49 = *rax48;
    rsi50 = reinterpret_cast<int32_t*>(0x7b1);
    fun_7bf(rdi49);
    *reinterpret_cast<int32_t*>(rbp51 - 36) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp52 - 36) < *reinterpret_cast<int32_t*>(rbp53 - 4)) {
        *reinterpret_cast<int32_t*>(rbp54 - 40) = reinterpret_cast<int32_t>(fprintf);
        while (*reinterpret_cast<int32_t*>(rbp55 - 40) < *reinterpret_cast<int32_t*>(rbp56 - 8)) {
            __asm__("cdq ");
            if (reinterpret_cast<int1_t>((*reinterpret_cast<int32_t*>(rbp57 - 36) * *reinterpret_cast<int32_t*>(rbp58 - 4) + *reinterpret_cast<int32_t*>(rbp59 - 40)) % 20 == fprintf)) {
                rax60 = g807;
                rdi61 = *rax60;
                rsi50 = reinterpret_cast<int32_t*>(0x811);
                fun_818(rdi61);
            }
            rax62 = g81f;
            rdi63 = *rax62;
            rcx4 = *reinterpret_cast<int32_t*>(rbp64 - 40);
            *rdi63 = *rsi50;
            rsi50 = reinterpret_cast<int32_t*>(0x844);
            fun_84b(rdi63 + 1);
            *reinterpret_cast<int32_t*>(rbp65 - 40) = *reinterpret_cast<int32_t*>(rbp66 - 40) + 1;
        }
        *reinterpret_cast<int32_t*>(rbp67 - 36) = *reinterpret_cast<int32_t*>(rbp68 - 36) + 1;
    }
    rax69 = g873;
    rdi70 = *rax69;
    fun_88b(rdi70, 0x87d, 0x884, rcx4);
    goto v71;
}

void fun_65d(int64_t rdi) {
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
    int64_t* rax25;
    int64_t rdi26;
    int32_t* rsi27;
    int64_t rbp28;
    int64_t rbp29;
    int64_t rbp30;
    int64_t rbp31;
    int64_t rbp32;
    int64_t rbp33;
    int64_t rbp34;
    int64_t rbp35;
    int64_t rbp36;
    int64_t* rax37;
    int64_t rdi38;
    int32_t** rax39;
    int32_t* rdi40;
    int64_t rbp41;
    int64_t rbp42;
    int64_t rbp43;
    int64_t rbp44;
    int64_t rbp45;
    int64_t* rax46;
    int64_t rdi47;
    int64_t* rax48;
    int64_t rdi49;
    int32_t* rsi50;
    int64_t rbp51;
    int64_t rbp52;
    int64_t rbp53;
    int64_t rbp54;
    int64_t rbp55;
    int64_t rbp56;
    int64_t rbp57;
    int64_t rbp58;
    int64_t rbp59;
    int64_t* rax60;
    int64_t rdi61;
    int32_t** rax62;
    int32_t* rdi63;
    int64_t rbp64;
    int64_t rbp65;
    int64_t rbp66;
    int64_t rbp67;
    int64_t rbp68;
    int64_t* rax69;
    int64_t rdi70;
    int64_t v71;

    while (1) {
        *reinterpret_cast<int32_t*>(rbp2 - 40) = *reinterpret_cast<int32_t*>(rbp3 - 40) + 1;
        while (*reinterpret_cast<int32_t*>(rbp4 - 40) >= *reinterpret_cast<int32_t*>(rbp5 - 8)) {
            *reinterpret_cast<int32_t*>(rbp6 - 36) = *reinterpret_cast<int32_t*>(rbp7 - 36) + 1;
            if (*reinterpret_cast<int32_t*>(rbp8 - 36) >= *reinterpret_cast<int32_t*>(rbp9 - 4)) 
                goto addr_67e_6;
            *reinterpret_cast<int32_t*>(rbp10 - 40) = reinterpret_cast<int32_t>(fprintf);
        }
        __asm__("cdq ");
        if (reinterpret_cast<int1_t>((*reinterpret_cast<int32_t*>(rbp11 - 36) * *reinterpret_cast<int32_t*>(rbp12 - 4) + *reinterpret_cast<int32_t*>(rbp13 - 40)) % 20 == fprintf)) {
            rax14 = g619;
            rdi15 = *rax14;
            rsi16 = reinterpret_cast<int32_t*>(0x623);
            fun_62a(rdi15);
        }
        rax17 = g631;
        rdi18 = *rax17;
        rcx19 = *reinterpret_cast<int32_t*>(rbp20 - 40);
        *rdi18 = *rsi16;
        rsi16 = reinterpret_cast<int32_t*>(0x656);
        fun_65d(rdi18 + 1);
    }
    addr_67e_6:
    rax21 = g685;
    rdi22 = *rax21;
    fun_69d(rdi22, 0x68f, 0x696, rcx19);
    rax23 = g6a4;
    rdi24 = *rax23;
    fun_6b5(rdi24, 0x6ae, 0x696, rcx19);
    rax25 = g6bc;
    rdi26 = *rax25;
    rsi27 = reinterpret_cast<int32_t*>(0x6c6);
    fun_6d4(rdi26);
    *reinterpret_cast<int32_t*>(rbp28 - 36) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp29 - 36) < *reinterpret_cast<int32_t*>(rbp30 - 4)) {
        *reinterpret_cast<int32_t*>(rbp31 - 40) = reinterpret_cast<int32_t>(fprintf);
        while (*reinterpret_cast<int32_t*>(rbp32 - 40) < *reinterpret_cast<int32_t*>(rbp33 - 8)) {
            __asm__("cdq ");
            if (reinterpret_cast<int1_t>((*reinterpret_cast<int32_t*>(rbp34 - 36) * *reinterpret_cast<int32_t*>(rbp35 - 4) + *reinterpret_cast<int32_t*>(rbp36 - 40)) % 20 == fprintf)) {
                rax37 = g71c;
                rdi38 = *rax37;
                rsi27 = reinterpret_cast<int32_t*>(0x726);
                fun_72d(rdi38);
            }
            rax39 = g734;
            rdi40 = *rax39;
            rcx19 = *reinterpret_cast<int32_t*>(rbp41 - 40);
            *rdi40 = *rsi27;
            rsi27 = reinterpret_cast<int32_t*>(0x759);
            fun_760(rdi40 + 1);
            *reinterpret_cast<int32_t*>(rbp42 - 40) = *reinterpret_cast<int32_t*>(rbp43 - 40) + 1;
        }
        *reinterpret_cast<int32_t*>(rbp44 - 36) = *reinterpret_cast<int32_t*>(rbp45 - 36) + 1;
    }
    rax46 = g788;
    rdi47 = *rax46;
    fun_7a0(rdi47, 0x792, 0x799, rcx19);
    rax48 = g7a7;
    rdi49 = *rax48;
    rsi50 = reinterpret_cast<int32_t*>(0x7b1);
    fun_7bf(rdi49);
    *reinterpret_cast<int32_t*>(rbp51 - 36) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp52 - 36) < *reinterpret_cast<int32_t*>(rbp53 - 4)) {
        *reinterpret_cast<int32_t*>(rbp54 - 40) = reinterpret_cast<int32_t>(fprintf);
        while (*reinterpret_cast<int32_t*>(rbp55 - 40) < *reinterpret_cast<int32_t*>(rbp56 - 8)) {
            __asm__("cdq ");
            if (reinterpret_cast<int1_t>((*reinterpret_cast<int32_t*>(rbp57 - 36) * *reinterpret_cast<int32_t*>(rbp58 - 4) + *reinterpret_cast<int32_t*>(rbp59 - 40)) % 20 == fprintf)) {
                rax60 = g807;
                rdi61 = *rax60;
                rsi50 = reinterpret_cast<int32_t*>(0x811);
                fun_818(rdi61);
            }
            rax62 = g81f;
            rdi63 = *rax62;
            rcx19 = *reinterpret_cast<int32_t*>(rbp64 - 40);
            *rdi63 = *rsi50;
            rsi50 = reinterpret_cast<int32_t*>(0x844);
            fun_84b(rdi63 + 1);
            *reinterpret_cast<int32_t*>(rbp65 - 40) = *reinterpret_cast<int32_t*>(rbp66 - 40) + 1;
        }
        *reinterpret_cast<int32_t*>(rbp67 - 36) = *reinterpret_cast<int32_t*>(rbp68 - 36) + 1;
    }
    rax69 = g873;
    rdi70 = *rax69;
    fun_88b(rdi70, 0x87d, 0x884, rcx19);
    goto v71;
}

void fun_72d(int64_t rdi) {
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
    int32_t* rsi25;
    int64_t rbp26;
    int64_t rbp27;
    int64_t rbp28;
    int64_t rbp29;
    int64_t rbp30;
    int64_t rbp31;
    int64_t rbp32;
    int64_t rbp33;
    int64_t rbp34;
    int64_t* rax35;
    int64_t rdi36;
    int32_t** rax37;
    int32_t* rdi38;
    int64_t rbp39;
    int64_t rbp40;
    int64_t rbp41;
    int64_t rbp42;
    int64_t rbp43;
    int64_t* rax44;
    int64_t rdi45;
    int64_t v46;

    while (1) {
        rax2 = g734;
        rdi3 = *rax2;
        rcx4 = *reinterpret_cast<int32_t*>(rbp5 - 40);
        *rdi3 = *rsi6;
        rsi6 = reinterpret_cast<int32_t*>(0x759);
        fun_760(rdi3 + 1);
        *reinterpret_cast<int32_t*>(rbp7 - 40) = *reinterpret_cast<int32_t*>(rbp8 - 40) + 1;
        while (*reinterpret_cast<int32_t*>(rbp9 - 40) >= *reinterpret_cast<int32_t*>(rbp10 - 8)) {
            *reinterpret_cast<int32_t*>(rbp11 - 36) = *reinterpret_cast<int32_t*>(rbp12 - 36) + 1;
            if (*reinterpret_cast<int32_t*>(rbp13 - 36) >= *reinterpret_cast<int32_t*>(rbp14 - 4)) 
                goto addr_781_10;
            *reinterpret_cast<int32_t*>(rbp15 - 40) = reinterpret_cast<int32_t>(fprintf);
        }
        __asm__("cdq ");
        if (!reinterpret_cast<int1_t>((*reinterpret_cast<int32_t*>(rbp16 - 36) * *reinterpret_cast<int32_t*>(rbp17 - 4) + *reinterpret_cast<int32_t*>(rbp18 - 40)) % 20 == fprintf)) 
            continue;
        rax19 = g71c;
        rdi20 = *rax19;
        rsi6 = reinterpret_cast<int32_t*>(0x726);
        fun_72d(rdi20);
    }
    addr_781_10:
    rax21 = g788;
    rdi22 = *rax21;
    fun_7a0(rdi22, 0x792, 0x799, rcx4);
    rax23 = g7a7;
    rdi24 = *rax23;
    rsi25 = reinterpret_cast<int32_t*>(0x7b1);
    fun_7bf(rdi24);
    *reinterpret_cast<int32_t*>(rbp26 - 36) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp27 - 36) < *reinterpret_cast<int32_t*>(rbp28 - 4)) {
        *reinterpret_cast<int32_t*>(rbp29 - 40) = reinterpret_cast<int32_t>(fprintf);
        while (*reinterpret_cast<int32_t*>(rbp30 - 40) < *reinterpret_cast<int32_t*>(rbp31 - 8)) {
            __asm__("cdq ");
            if (reinterpret_cast<int1_t>((*reinterpret_cast<int32_t*>(rbp32 - 36) * *reinterpret_cast<int32_t*>(rbp33 - 4) + *reinterpret_cast<int32_t*>(rbp34 - 40)) % 20 == fprintf)) {
                rax35 = g807;
                rdi36 = *rax35;
                rsi25 = reinterpret_cast<int32_t*>(0x811);
                fun_818(rdi36);
            }
            rax37 = g81f;
            rdi38 = *rax37;
            rcx4 = *reinterpret_cast<int32_t*>(rbp39 - 40);
            *rdi38 = *rsi25;
            rsi25 = reinterpret_cast<int32_t*>(0x844);
            fun_84b(rdi38 + 1);
            *reinterpret_cast<int32_t*>(rbp40 - 40) = *reinterpret_cast<int32_t*>(rbp41 - 40) + 1;
        }
        *reinterpret_cast<int32_t*>(rbp42 - 36) = *reinterpret_cast<int32_t*>(rbp43 - 36) + 1;
    }
    rax44 = g873;
    rdi45 = *rax44;
    fun_88b(rdi45, 0x87d, 0x884, rcx4);
    goto v46;
}

void fun_760(int64_t rdi) {
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
    int32_t* rsi25;
    int64_t rbp26;
    int64_t rbp27;
    int64_t rbp28;
    int64_t rbp29;
    int64_t rbp30;
    int64_t rbp31;
    int64_t rbp32;
    int64_t rbp33;
    int64_t rbp34;
    int64_t* rax35;
    int64_t rdi36;
    int32_t** rax37;
    int32_t* rdi38;
    int64_t rbp39;
    int64_t rbp40;
    int64_t rbp41;
    int64_t rbp42;
    int64_t rbp43;
    int64_t* rax44;
    int64_t rdi45;
    int64_t v46;

    while (1) {
        *reinterpret_cast<int32_t*>(rbp2 - 40) = *reinterpret_cast<int32_t*>(rbp3 - 40) + 1;
        while (*reinterpret_cast<int32_t*>(rbp4 - 40) >= *reinterpret_cast<int32_t*>(rbp5 - 8)) {
            *reinterpret_cast<int32_t*>(rbp6 - 36) = *reinterpret_cast<int32_t*>(rbp7 - 36) + 1;
            if (*reinterpret_cast<int32_t*>(rbp8 - 36) >= *reinterpret_cast<int32_t*>(rbp9 - 4)) 
                goto addr_781_6;
            *reinterpret_cast<int32_t*>(rbp10 - 40) = reinterpret_cast<int32_t>(fprintf);
        }
        __asm__("cdq ");
        if (reinterpret_cast<int1_t>((*reinterpret_cast<int32_t*>(rbp11 - 36) * *reinterpret_cast<int32_t*>(rbp12 - 4) + *reinterpret_cast<int32_t*>(rbp13 - 40)) % 20 == fprintf)) {
            rax14 = g71c;
            rdi15 = *rax14;
            rsi16 = reinterpret_cast<int32_t*>(0x726);
            fun_72d(rdi15);
        }
        rax17 = g734;
        rdi18 = *rax17;
        rcx19 = *reinterpret_cast<int32_t*>(rbp20 - 40);
        *rdi18 = *rsi16;
        rsi16 = reinterpret_cast<int32_t*>(0x759);
        fun_760(rdi18 + 1);
    }
    addr_781_6:
    rax21 = g788;
    rdi22 = *rax21;
    fun_7a0(rdi22, 0x792, 0x799, rcx19);
    rax23 = g7a7;
    rdi24 = *rax23;
    rsi25 = reinterpret_cast<int32_t*>(0x7b1);
    fun_7bf(rdi24);
    *reinterpret_cast<int32_t*>(rbp26 - 36) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp27 - 36) < *reinterpret_cast<int32_t*>(rbp28 - 4)) {
        *reinterpret_cast<int32_t*>(rbp29 - 40) = reinterpret_cast<int32_t>(fprintf);
        while (*reinterpret_cast<int32_t*>(rbp30 - 40) < *reinterpret_cast<int32_t*>(rbp31 - 8)) {
            __asm__("cdq ");
            if (reinterpret_cast<int1_t>((*reinterpret_cast<int32_t*>(rbp32 - 36) * *reinterpret_cast<int32_t*>(rbp33 - 4) + *reinterpret_cast<int32_t*>(rbp34 - 40)) % 20 == fprintf)) {
                rax35 = g807;
                rdi36 = *rax35;
                rsi25 = reinterpret_cast<int32_t*>(0x811);
                fun_818(rdi36);
            }
            rax37 = g81f;
            rdi38 = *rax37;
            rcx19 = *reinterpret_cast<int32_t*>(rbp39 - 40);
            *rdi38 = *rsi25;
            rsi25 = reinterpret_cast<int32_t*>(0x844);
            fun_84b(rdi38 + 1);
            *reinterpret_cast<int32_t*>(rbp40 - 40) = *reinterpret_cast<int32_t*>(rbp41 - 40) + 1;
        }
        *reinterpret_cast<int32_t*>(rbp42 - 36) = *reinterpret_cast<int32_t*>(rbp43 - 36) + 1;
    }
    rax44 = g873;
    rdi45 = *rax44;
    fun_88b(rdi45, 0x87d, 0x884, rcx19);
    goto v46;
}

void fun_818(int64_t rdi) {
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
    int64_t v23;

    while (1) {
        rax2 = g81f;
        rdi3 = *rax2;
        rcx4 = *reinterpret_cast<int32_t*>(rbp5 - 40);
        *rdi3 = *rsi6;
        rsi6 = reinterpret_cast<int32_t*>(0x844);
        fun_84b(rdi3 + 1);
        *reinterpret_cast<int32_t*>(rbp7 - 40) = *reinterpret_cast<int32_t*>(rbp8 - 40) + 1;
        while (*reinterpret_cast<int32_t*>(rbp9 - 40) >= *reinterpret_cast<int32_t*>(rbp10 - 8)) {
            *reinterpret_cast<int32_t*>(rbp11 - 36) = *reinterpret_cast<int32_t*>(rbp12 - 36) + 1;
            if (*reinterpret_cast<int32_t*>(rbp13 - 36) >= *reinterpret_cast<int32_t*>(rbp14 - 4)) 
                goto addr_86c_10;
            *reinterpret_cast<int32_t*>(rbp15 - 40) = reinterpret_cast<int32_t>(fprintf);
        }
        __asm__("cdq ");
        if (!reinterpret_cast<int1_t>((*reinterpret_cast<int32_t*>(rbp16 - 36) * *reinterpret_cast<int32_t*>(rbp17 - 4) + *reinterpret_cast<int32_t*>(rbp18 - 40)) % 20 == fprintf)) 
            continue;
        rax19 = g807;
        rdi20 = *rax19;
        rsi6 = reinterpret_cast<int32_t*>(0x811);
        fun_818(rdi20);
    }
    addr_86c_10:
    rax21 = g873;
    rdi22 = *rax21;
    fun_88b(rdi22, 0x87d, 0x884, rcx4);
    goto v23;
}

void fun_84b(int64_t rdi) {
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
    int64_t v23;

    while (1) {
        *reinterpret_cast<int32_t*>(rbp2 - 40) = *reinterpret_cast<int32_t*>(rbp3 - 40) + 1;
        while (*reinterpret_cast<int32_t*>(rbp4 - 40) >= *reinterpret_cast<int32_t*>(rbp5 - 8)) {
            *reinterpret_cast<int32_t*>(rbp6 - 36) = *reinterpret_cast<int32_t*>(rbp7 - 36) + 1;
            if (*reinterpret_cast<int32_t*>(rbp8 - 36) >= *reinterpret_cast<int32_t*>(rbp9 - 4)) 
                goto addr_86c_6;
            *reinterpret_cast<int32_t*>(rbp10 - 40) = reinterpret_cast<int32_t>(fprintf);
        }
        __asm__("cdq ");
        if (reinterpret_cast<int1_t>((*reinterpret_cast<int32_t*>(rbp11 - 36) * *reinterpret_cast<int32_t*>(rbp12 - 4) + *reinterpret_cast<int32_t*>(rbp13 - 40)) % 20 == fprintf)) {
            rax14 = g807;
            rdi15 = *rax14;
            rsi16 = reinterpret_cast<int32_t*>(0x811);
            fun_818(rdi15);
        }
        rax17 = g81f;
        rdi18 = *rax17;
        rcx19 = *reinterpret_cast<int32_t*>(rbp20 - 40);
        *rdi18 = *rsi16;
        rsi16 = reinterpret_cast<int32_t*>(0x844);
        fun_84b(rdi18 + 1);
    }
    addr_86c_6:
    rax21 = g873;
    rdi22 = *rax21;
    fun_88b(rdi22, 0x87d, 0x884, rcx19);
    goto v23;
}

void fun_5b2(int64_t rdi, int64_t rsi) {
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
    int64_t* rax29;
    int64_t rdi30;
    int32_t* rsi31;
    int64_t rbp32;
    int64_t rbp33;
    int64_t rbp34;
    int64_t rbp35;
    int64_t rbp36;
    int64_t rbp37;
    int64_t rbp38;
    int64_t rbp39;
    int64_t rbp40;
    int64_t* rax41;
    int64_t rdi42;
    int32_t** rax43;
    int32_t* rdi44;
    int64_t rbp45;
    int64_t rbp46;
    int64_t rbp47;
    int64_t rbp48;
    int64_t rbp49;
    int64_t* rax50;
    int64_t rdi51;
    int64_t* rax52;
    int64_t rdi53;
    int32_t* rsi54;
    int64_t rbp55;
    int64_t rbp56;
    int64_t rbp57;
    int64_t rbp58;
    int64_t rbp59;
    int64_t rbp60;
    int64_t rbp61;
    int64_t rbp62;
    int64_t rbp63;
    int64_t* rax64;
    int64_t rdi65;
    int32_t** rax66;
    int32_t* rdi67;
    int64_t rbp68;
    int64_t rbp69;
    int64_t rbp70;
    int64_t rbp71;
    int64_t rbp72;
    int64_t* rax73;
    int64_t rdi74;
    int64_t v75;

    rax3 = g5b9;
    rdi4 = *rax3;
    rsi5 = reinterpret_cast<int32_t*>(0x5c3);
    fun_5d1(rdi4);
    *reinterpret_cast<int32_t*>(rbp6 - 36) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp7 - 36) < *reinterpret_cast<int32_t*>(rbp8 - 4)) {
        *reinterpret_cast<int32_t*>(rbp9 - 40) = reinterpret_cast<int32_t>(fprintf);
        while (*reinterpret_cast<int32_t*>(rbp10 - 40) < *reinterpret_cast<int32_t*>(rbp11 - 8)) {
            __asm__("cdq ");
            if (reinterpret_cast<int1_t>((*reinterpret_cast<int32_t*>(rbp12 - 36) * *reinterpret_cast<int32_t*>(rbp13 - 4) + *reinterpret_cast<int32_t*>(rbp14 - 40)) % 20 == fprintf)) {
                rax15 = g619;
                rdi16 = *rax15;
                rsi5 = reinterpret_cast<int32_t*>(0x623);
                fun_62a(rdi16);
            }
            rax17 = g631;
            rdi18 = *rax17;
            rcx19 = *reinterpret_cast<int32_t*>(rbp20 - 40);
            *rdi18 = *rsi5;
            rsi5 = reinterpret_cast<int32_t*>(0x656);
            fun_65d(rdi18 + 1);
            *reinterpret_cast<int32_t*>(rbp21 - 40) = *reinterpret_cast<int32_t*>(rbp22 - 40) + 1;
        }
        *reinterpret_cast<int32_t*>(rbp23 - 36) = *reinterpret_cast<int32_t*>(rbp24 - 36) + 1;
    }
    rax25 = g685;
    rdi26 = *rax25;
    fun_69d(rdi26, 0x68f, 0x696, rcx19);
    rax27 = g6a4;
    rdi28 = *rax27;
    fun_6b5(rdi28, 0x6ae, 0x696, rcx19);
    rax29 = g6bc;
    rdi30 = *rax29;
    rsi31 = reinterpret_cast<int32_t*>(0x6c6);
    fun_6d4(rdi30);
    *reinterpret_cast<int32_t*>(rbp32 - 36) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp33 - 36) < *reinterpret_cast<int32_t*>(rbp34 - 4)) {
        *reinterpret_cast<int32_t*>(rbp35 - 40) = reinterpret_cast<int32_t>(fprintf);
        while (*reinterpret_cast<int32_t*>(rbp36 - 40) < *reinterpret_cast<int32_t*>(rbp37 - 8)) {
            __asm__("cdq ");
            if (reinterpret_cast<int1_t>((*reinterpret_cast<int32_t*>(rbp38 - 36) * *reinterpret_cast<int32_t*>(rbp39 - 4) + *reinterpret_cast<int32_t*>(rbp40 - 40)) % 20 == fprintf)) {
                rax41 = g71c;
                rdi42 = *rax41;
                rsi31 = reinterpret_cast<int32_t*>(0x726);
                fun_72d(rdi42);
            }
            rax43 = g734;
            rdi44 = *rax43;
            rcx19 = *reinterpret_cast<int32_t*>(rbp45 - 40);
            *rdi44 = *rsi31;
            rsi31 = reinterpret_cast<int32_t*>(0x759);
            fun_760(rdi44 + 1);
            *reinterpret_cast<int32_t*>(rbp46 - 40) = *reinterpret_cast<int32_t*>(rbp47 - 40) + 1;
        }
        *reinterpret_cast<int32_t*>(rbp48 - 36) = *reinterpret_cast<int32_t*>(rbp49 - 36) + 1;
    }
    rax50 = g788;
    rdi51 = *rax50;
    fun_7a0(rdi51, 0x792, 0x799, rcx19);
    rax52 = g7a7;
    rdi53 = *rax52;
    rsi54 = reinterpret_cast<int32_t*>(0x7b1);
    fun_7bf(rdi53);
    *reinterpret_cast<int32_t*>(rbp55 - 36) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp56 - 36) < *reinterpret_cast<int32_t*>(rbp57 - 4)) {
        *reinterpret_cast<int32_t*>(rbp58 - 40) = reinterpret_cast<int32_t>(fprintf);
        while (*reinterpret_cast<int32_t*>(rbp59 - 40) < *reinterpret_cast<int32_t*>(rbp60 - 8)) {
            __asm__("cdq ");
            if (reinterpret_cast<int1_t>((*reinterpret_cast<int32_t*>(rbp61 - 36) * *reinterpret_cast<int32_t*>(rbp62 - 4) + *reinterpret_cast<int32_t*>(rbp63 - 40)) % 20 == fprintf)) {
                rax64 = g807;
                rdi65 = *rax64;
                rsi54 = reinterpret_cast<int32_t*>(0x811);
                fun_818(rdi65);
            }
            rax66 = g81f;
            rdi67 = *rax66;
            rcx19 = *reinterpret_cast<int32_t*>(rbp68 - 40);
            *rdi67 = *rsi54;
            rsi54 = reinterpret_cast<int32_t*>(0x844);
            fun_84b(rdi67 + 1);
            *reinterpret_cast<int32_t*>(rbp69 - 40) = *reinterpret_cast<int32_t*>(rbp70 - 40) + 1;
        }
        *reinterpret_cast<int32_t*>(rbp71 - 36) = *reinterpret_cast<int32_t*>(rbp72 - 36) + 1;
    }
    rax73 = g873;
    rdi74 = *rax73;
    fun_88b(rdi74, 0x87d, 0x884, rcx19);
    goto v75;
}

void fun_423(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7) {
    int64_t rdi8;
    int64_t rbp9;
    int64_t rdi10;
    int64_t rbp11;
    int64_t v12;

    rdi8 = *reinterpret_cast<int64_t*>(rbp9 - 56);
    fun_42c(rdi8, rsi, rdx, rcx, r8, r9, __return_address());
    rdi10 = *reinterpret_cast<int64_t*>(rbp11 - 64);
    fun_435(rdi10, rsi, rdx, rcx, r8, r9, __return_address());
    goto v12;
}

void fun_5d1(int64_t rdi) {
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
    int64_t* rax26;
    int64_t rdi27;
    int32_t* rsi28;
    int64_t rbp29;
    int64_t rbp30;
    int64_t rbp31;
    int64_t rbp32;
    int64_t rbp33;
    int64_t rbp34;
    int64_t rbp35;
    int64_t rbp36;
    int64_t rbp37;
    int64_t* rax38;
    int64_t rdi39;
    int32_t** rax40;
    int32_t* rdi41;
    int64_t rbp42;
    int64_t rbp43;
    int64_t rbp44;
    int64_t rbp45;
    int64_t rbp46;
    int64_t* rax47;
    int64_t rdi48;
    int64_t* rax49;
    int64_t rdi50;
    int32_t* rsi51;
    int64_t rbp52;
    int64_t rbp53;
    int64_t rbp54;
    int64_t rbp55;
    int64_t rbp56;
    int64_t rbp57;
    int64_t rbp58;
    int64_t rbp59;
    int64_t rbp60;
    int64_t* rax61;
    int64_t rdi62;
    int32_t** rax63;
    int32_t* rdi64;
    int64_t rbp65;
    int64_t rbp66;
    int64_t rbp67;
    int64_t rbp68;
    int64_t rbp69;
    int64_t* rax70;
    int64_t rdi71;
    int64_t v72;

    *reinterpret_cast<int32_t*>(rbp2 - 36) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp3 - 36) < *reinterpret_cast<int32_t*>(rbp4 - 4)) {
        *reinterpret_cast<int32_t*>(rbp5 - 40) = reinterpret_cast<int32_t>(fprintf);
        while (*reinterpret_cast<int32_t*>(rbp6 - 40) < *reinterpret_cast<int32_t*>(rbp7 - 8)) {
            __asm__("cdq ");
            if (reinterpret_cast<int1_t>((*reinterpret_cast<int32_t*>(rbp8 - 36) * *reinterpret_cast<int32_t*>(rbp9 - 4) + *reinterpret_cast<int32_t*>(rbp10 - 40)) % 20 == fprintf)) {
                rax11 = g619;
                rdi12 = *rax11;
                rsi13 = reinterpret_cast<int32_t*>(0x623);
                fun_62a(rdi12);
            }
            rax14 = g631;
            rdi15 = *rax14;
            rcx16 = *reinterpret_cast<int32_t*>(rbp17 - 40);
            *rdi15 = *rsi13;
            rsi13 = reinterpret_cast<int32_t*>(0x656);
            fun_65d(rdi15 + 1);
            *reinterpret_cast<int32_t*>(rbp18 - 40) = *reinterpret_cast<int32_t*>(rbp19 - 40) + 1;
        }
        *reinterpret_cast<int32_t*>(rbp20 - 36) = *reinterpret_cast<int32_t*>(rbp21 - 36) + 1;
    }
    rax22 = g685;
    rdi23 = *rax22;
    fun_69d(rdi23, 0x68f, 0x696, rcx16);
    rax24 = g6a4;
    rdi25 = *rax24;
    fun_6b5(rdi25, 0x6ae, 0x696, rcx16);
    rax26 = g6bc;
    rdi27 = *rax26;
    rsi28 = reinterpret_cast<int32_t*>(0x6c6);
    fun_6d4(rdi27);
    *reinterpret_cast<int32_t*>(rbp29 - 36) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp30 - 36) < *reinterpret_cast<int32_t*>(rbp31 - 4)) {
        *reinterpret_cast<int32_t*>(rbp32 - 40) = reinterpret_cast<int32_t>(fprintf);
        while (*reinterpret_cast<int32_t*>(rbp33 - 40) < *reinterpret_cast<int32_t*>(rbp34 - 8)) {
            __asm__("cdq ");
            if (reinterpret_cast<int1_t>((*reinterpret_cast<int32_t*>(rbp35 - 36) * *reinterpret_cast<int32_t*>(rbp36 - 4) + *reinterpret_cast<int32_t*>(rbp37 - 40)) % 20 == fprintf)) {
                rax38 = g71c;
                rdi39 = *rax38;
                rsi28 = reinterpret_cast<int32_t*>(0x726);
                fun_72d(rdi39);
            }
            rax40 = g734;
            rdi41 = *rax40;
            rcx16 = *reinterpret_cast<int32_t*>(rbp42 - 40);
            *rdi41 = *rsi28;
            rsi28 = reinterpret_cast<int32_t*>(0x759);
            fun_760(rdi41 + 1);
            *reinterpret_cast<int32_t*>(rbp43 - 40) = *reinterpret_cast<int32_t*>(rbp44 - 40) + 1;
        }
        *reinterpret_cast<int32_t*>(rbp45 - 36) = *reinterpret_cast<int32_t*>(rbp46 - 36) + 1;
    }
    rax47 = g788;
    rdi48 = *rax47;
    fun_7a0(rdi48, 0x792, 0x799, rcx16);
    rax49 = g7a7;
    rdi50 = *rax49;
    rsi51 = reinterpret_cast<int32_t*>(0x7b1);
    fun_7bf(rdi50);
    *reinterpret_cast<int32_t*>(rbp52 - 36) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp53 - 36) < *reinterpret_cast<int32_t*>(rbp54 - 4)) {
        *reinterpret_cast<int32_t*>(rbp55 - 40) = reinterpret_cast<int32_t>(fprintf);
        while (*reinterpret_cast<int32_t*>(rbp56 - 40) < *reinterpret_cast<int32_t*>(rbp57 - 8)) {
            __asm__("cdq ");
            if (reinterpret_cast<int1_t>((*reinterpret_cast<int32_t*>(rbp58 - 36) * *reinterpret_cast<int32_t*>(rbp59 - 4) + *reinterpret_cast<int32_t*>(rbp60 - 40)) % 20 == fprintf)) {
                rax61 = g807;
                rdi62 = *rax61;
                rsi51 = reinterpret_cast<int32_t*>(0x811);
                fun_818(rdi62);
            }
            rax63 = g81f;
            rdi64 = *rax63;
            rcx16 = *reinterpret_cast<int32_t*>(rbp65 - 40);
            *rdi64 = *rsi51;
            rsi51 = reinterpret_cast<int32_t*>(0x844);
            fun_84b(rdi64 + 1);
            *reinterpret_cast<int32_t*>(rbp66 - 40) = *reinterpret_cast<int32_t*>(rbp67 - 40) + 1;
        }
        *reinterpret_cast<int32_t*>(rbp68 - 36) = *reinterpret_cast<int32_t*>(rbp69 - 36) + 1;
    }
    rax70 = g873;
    rdi71 = *rax70;
    fun_88b(rdi71, 0x87d, 0x884, rcx16);
    goto v72;
}

void fun_42c(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7) {
    int64_t rdi8;
    int64_t rbp9;
    int64_t v10;

    rdi8 = *reinterpret_cast<int64_t*>(rbp9 - 64);
    fun_435(rdi8, rsi, rdx, rcx, r8, r9, __return_address());
    goto v10;
}

void fun_435(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7) {
    int64_t v8;

    goto v8;
}

void fun_69d(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t* rax5;
    int64_t rdi6;
    int64_t* rax7;
    int64_t rdi8;
    int32_t* rsi9;
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
    int32_t** rax21;
    int32_t* rdi22;
    int64_t rbp23;
    int64_t rbp24;
    int64_t rbp25;
    int64_t rbp26;
    int64_t rbp27;
    int64_t* rax28;
    int64_t rdi29;
    int64_t* rax30;
    int64_t rdi31;
    int32_t* rsi32;
    int64_t rbp33;
    int64_t rbp34;
    int64_t rbp35;
    int64_t rbp36;
    int64_t rbp37;
    int64_t rbp38;
    int64_t rbp39;
    int64_t rbp40;
    int64_t rbp41;
    int64_t* rax42;
    int64_t rdi43;
    int32_t** rax44;
    int32_t* rdi45;
    int64_t rbp46;
    int64_t rbp47;
    int64_t rbp48;
    int64_t rbp49;
    int64_t rbp50;
    int64_t* rax51;
    int64_t rdi52;
    int64_t v53;

    rax5 = g6a4;
    rdi6 = *rax5;
    fun_6b5(rdi6, 0x6ae, rdx, rcx);
    rax7 = g6bc;
    rdi8 = *rax7;
    rsi9 = reinterpret_cast<int32_t*>(0x6c6);
    fun_6d4(rdi8);
    *reinterpret_cast<int32_t*>(rbp10 - 36) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp11 - 36) < *reinterpret_cast<int32_t*>(rbp12 - 4)) {
        *reinterpret_cast<int32_t*>(rbp13 - 40) = reinterpret_cast<int32_t>(fprintf);
        while (*reinterpret_cast<int32_t*>(rbp14 - 40) < *reinterpret_cast<int32_t*>(rbp15 - 8)) {
            __asm__("cdq ");
            if (reinterpret_cast<int1_t>((*reinterpret_cast<int32_t*>(rbp16 - 36) * *reinterpret_cast<int32_t*>(rbp17 - 4) + *reinterpret_cast<int32_t*>(rbp18 - 40)) % 20 == fprintf)) {
                rax19 = g71c;
                rdi20 = *rax19;
                rsi9 = reinterpret_cast<int32_t*>(0x726);
                fun_72d(rdi20);
            }
            rax21 = g734;
            rdi22 = *rax21;
            rcx = *reinterpret_cast<int32_t*>(rbp23 - 40);
            *rdi22 = *rsi9;
            rsi9 = reinterpret_cast<int32_t*>(0x759);
            fun_760(rdi22 + 1);
            *reinterpret_cast<int32_t*>(rbp24 - 40) = *reinterpret_cast<int32_t*>(rbp25 - 40) + 1;
        }
        *reinterpret_cast<int32_t*>(rbp26 - 36) = *reinterpret_cast<int32_t*>(rbp27 - 36) + 1;
    }
    rax28 = g788;
    rdi29 = *rax28;
    fun_7a0(rdi29, 0x792, 0x799, rcx);
    rax30 = g7a7;
    rdi31 = *rax30;
    rsi32 = reinterpret_cast<int32_t*>(0x7b1);
    fun_7bf(rdi31);
    *reinterpret_cast<int32_t*>(rbp33 - 36) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp34 - 36) < *reinterpret_cast<int32_t*>(rbp35 - 4)) {
        *reinterpret_cast<int32_t*>(rbp36 - 40) = reinterpret_cast<int32_t>(fprintf);
        while (*reinterpret_cast<int32_t*>(rbp37 - 40) < *reinterpret_cast<int32_t*>(rbp38 - 8)) {
            __asm__("cdq ");
            if (reinterpret_cast<int1_t>((*reinterpret_cast<int32_t*>(rbp39 - 36) * *reinterpret_cast<int32_t*>(rbp40 - 4) + *reinterpret_cast<int32_t*>(rbp41 - 40)) % 20 == fprintf)) {
                rax42 = g807;
                rdi43 = *rax42;
                rsi32 = reinterpret_cast<int32_t*>(0x811);
                fun_818(rdi43);
            }
            rax44 = g81f;
            rdi45 = *rax44;
            rcx = *reinterpret_cast<int32_t*>(rbp46 - 40);
            *rdi45 = *rsi32;
            rsi32 = reinterpret_cast<int32_t*>(0x844);
            fun_84b(rdi45 + 1);
            *reinterpret_cast<int32_t*>(rbp47 - 40) = *reinterpret_cast<int32_t*>(rbp48 - 40) + 1;
        }
        *reinterpret_cast<int32_t*>(rbp49 - 36) = *reinterpret_cast<int32_t*>(rbp50 - 36) + 1;
    }
    rax51 = g873;
    rdi52 = *rax51;
    fun_88b(rdi52, 0x87d, 0x884, rcx);
    goto v53;
}

void fun_7a0(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t* rax5;
    int64_t rdi6;
    int32_t* rsi7;
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
    int32_t** rax19;
    int32_t* rdi20;
    int64_t rbp21;
    int64_t rbp22;
    int64_t rbp23;
    int64_t rbp24;
    int64_t rbp25;
    int64_t* rax26;
    int64_t rdi27;
    int64_t v28;

    rax5 = g7a7;
    rdi6 = *rax5;
    rsi7 = reinterpret_cast<int32_t*>(0x7b1);
    fun_7bf(rdi6);
    *reinterpret_cast<int32_t*>(rbp8 - 36) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp9 - 36) < *reinterpret_cast<int32_t*>(rbp10 - 4)) {
        *reinterpret_cast<int32_t*>(rbp11 - 40) = reinterpret_cast<int32_t>(fprintf);
        while (*reinterpret_cast<int32_t*>(rbp12 - 40) < *reinterpret_cast<int32_t*>(rbp13 - 8)) {
            __asm__("cdq ");
            if (reinterpret_cast<int1_t>((*reinterpret_cast<int32_t*>(rbp14 - 36) * *reinterpret_cast<int32_t*>(rbp15 - 4) + *reinterpret_cast<int32_t*>(rbp16 - 40)) % 20 == fprintf)) {
                rax17 = g807;
                rdi18 = *rax17;
                rsi7 = reinterpret_cast<int32_t*>(0x811);
                fun_818(rdi18);
            }
            rax19 = g81f;
            rdi20 = *rax19;
            rcx = *reinterpret_cast<int32_t*>(rbp21 - 40);
            *rdi20 = *rsi7;
            rsi7 = reinterpret_cast<int32_t*>(0x844);
            fun_84b(rdi20 + 1);
            *reinterpret_cast<int32_t*>(rbp22 - 40) = *reinterpret_cast<int32_t*>(rbp23 - 40) + 1;
        }
        *reinterpret_cast<int32_t*>(rbp24 - 36) = *reinterpret_cast<int32_t*>(rbp25 - 36) + 1;
    }
    rax26 = g873;
    rdi27 = *rax26;
    fun_88b(rdi27, 0x87d, 0x884, rcx);
    goto v28;
}

void fun_88b(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t v5;

    goto v5;
}

void fun_6b5(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t* rax5;
    int64_t rdi6;
    int32_t* rsi7;
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
    int32_t** rax19;
    int32_t* rdi20;
    int64_t rbp21;
    int64_t rbp22;
    int64_t rbp23;
    int64_t rbp24;
    int64_t rbp25;
    int64_t* rax26;
    int64_t rdi27;
    int64_t* rax28;
    int64_t rdi29;
    int32_t* rsi30;
    int64_t rbp31;
    int64_t rbp32;
    int64_t rbp33;
    int64_t rbp34;
    int64_t rbp35;
    int64_t rbp36;
    int64_t rbp37;
    int64_t rbp38;
    int64_t rbp39;
    int64_t* rax40;
    int64_t rdi41;
    int32_t** rax42;
    int32_t* rdi43;
    int64_t rbp44;
    int64_t rbp45;
    int64_t rbp46;
    int64_t rbp47;
    int64_t rbp48;
    int64_t* rax49;
    int64_t rdi50;
    int64_t v51;

    rax5 = g6bc;
    rdi6 = *rax5;
    rsi7 = reinterpret_cast<int32_t*>(0x6c6);
    fun_6d4(rdi6);
    *reinterpret_cast<int32_t*>(rbp8 - 36) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp9 - 36) < *reinterpret_cast<int32_t*>(rbp10 - 4)) {
        *reinterpret_cast<int32_t*>(rbp11 - 40) = reinterpret_cast<int32_t>(fprintf);
        while (*reinterpret_cast<int32_t*>(rbp12 - 40) < *reinterpret_cast<int32_t*>(rbp13 - 8)) {
            __asm__("cdq ");
            if (reinterpret_cast<int1_t>((*reinterpret_cast<int32_t*>(rbp14 - 36) * *reinterpret_cast<int32_t*>(rbp15 - 4) + *reinterpret_cast<int32_t*>(rbp16 - 40)) % 20 == fprintf)) {
                rax17 = g71c;
                rdi18 = *rax17;
                rsi7 = reinterpret_cast<int32_t*>(0x726);
                fun_72d(rdi18);
            }
            rax19 = g734;
            rdi20 = *rax19;
            rcx = *reinterpret_cast<int32_t*>(rbp21 - 40);
            *rdi20 = *rsi7;
            rsi7 = reinterpret_cast<int32_t*>(0x759);
            fun_760(rdi20 + 1);
            *reinterpret_cast<int32_t*>(rbp22 - 40) = *reinterpret_cast<int32_t*>(rbp23 - 40) + 1;
        }
        *reinterpret_cast<int32_t*>(rbp24 - 36) = *reinterpret_cast<int32_t*>(rbp25 - 36) + 1;
    }
    rax26 = g788;
    rdi27 = *rax26;
    fun_7a0(rdi27, 0x792, 0x799, rcx);
    rax28 = g7a7;
    rdi29 = *rax28;
    rsi30 = reinterpret_cast<int32_t*>(0x7b1);
    fun_7bf(rdi29);
    *reinterpret_cast<int32_t*>(rbp31 - 36) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp32 - 36) < *reinterpret_cast<int32_t*>(rbp33 - 4)) {
        *reinterpret_cast<int32_t*>(rbp34 - 40) = reinterpret_cast<int32_t>(fprintf);
        while (*reinterpret_cast<int32_t*>(rbp35 - 40) < *reinterpret_cast<int32_t*>(rbp36 - 8)) {
            __asm__("cdq ");
            if (reinterpret_cast<int1_t>((*reinterpret_cast<int32_t*>(rbp37 - 36) * *reinterpret_cast<int32_t*>(rbp38 - 4) + *reinterpret_cast<int32_t*>(rbp39 - 40)) % 20 == fprintf)) {
                rax40 = g807;
                rdi41 = *rax40;
                rsi30 = reinterpret_cast<int32_t*>(0x811);
                fun_818(rdi41);
            }
            rax42 = g81f;
            rdi43 = *rax42;
            rcx = *reinterpret_cast<int32_t*>(rbp44 - 40);
            *rdi43 = *rsi30;
            rsi30 = reinterpret_cast<int32_t*>(0x844);
            fun_84b(rdi43 + 1);
            *reinterpret_cast<int32_t*>(rbp45 - 40) = *reinterpret_cast<int32_t*>(rbp46 - 40) + 1;
        }
        *reinterpret_cast<int32_t*>(rbp47 - 36) = *reinterpret_cast<int32_t*>(rbp48 - 36) + 1;
    }
    rax49 = g873;
    rdi50 = *rax49;
    fun_88b(rdi50, 0x87d, 0x884, rcx);
    goto v51;
}

void fun_7bf(int64_t rdi) {
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
    int64_t v24;

    *reinterpret_cast<int32_t*>(rbp2 - 36) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp3 - 36) < *reinterpret_cast<int32_t*>(rbp4 - 4)) {
        *reinterpret_cast<int32_t*>(rbp5 - 40) = reinterpret_cast<int32_t>(fprintf);
        while (*reinterpret_cast<int32_t*>(rbp6 - 40) < *reinterpret_cast<int32_t*>(rbp7 - 8)) {
            __asm__("cdq ");
            if (reinterpret_cast<int1_t>((*reinterpret_cast<int32_t*>(rbp8 - 36) * *reinterpret_cast<int32_t*>(rbp9 - 4) + *reinterpret_cast<int32_t*>(rbp10 - 40)) % 20 == fprintf)) {
                rax11 = g807;
                rdi12 = *rax11;
                rsi13 = reinterpret_cast<int32_t*>(0x811);
                fun_818(rdi12);
            }
            rax14 = g81f;
            rdi15 = *rax14;
            rcx16 = *reinterpret_cast<int32_t*>(rbp17 - 40);
            *rdi15 = *rsi13;
            rsi13 = reinterpret_cast<int32_t*>(0x844);
            fun_84b(rdi15 + 1);
            *reinterpret_cast<int32_t*>(rbp18 - 40) = *reinterpret_cast<int32_t*>(rbp19 - 40) + 1;
        }
        *reinterpret_cast<int32_t*>(rbp20 - 36) = *reinterpret_cast<int32_t*>(rbp21 - 36) + 1;
    }
    rax22 = g873;
    rdi23 = *rax22;
    fun_88b(rdi23, 0x87d, 0x884, rcx16);
    goto v24;
}

void fun_6d4(int64_t rdi) {
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
    int32_t* rsi26;
    int64_t rbp27;
    int64_t rbp28;
    int64_t rbp29;
    int64_t rbp30;
    int64_t rbp31;
    int64_t rbp32;
    int64_t rbp33;
    int64_t rbp34;
    int64_t rbp35;
    int64_t* rax36;
    int64_t rdi37;
    int32_t** rax38;
    int32_t* rdi39;
    int64_t rbp40;
    int64_t rbp41;
    int64_t rbp42;
    int64_t rbp43;
    int64_t rbp44;
    int64_t* rax45;
    int64_t rdi46;
    int64_t v47;

    *reinterpret_cast<int32_t*>(rbp2 - 36) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp3 - 36) < *reinterpret_cast<int32_t*>(rbp4 - 4)) {
        *reinterpret_cast<int32_t*>(rbp5 - 40) = reinterpret_cast<int32_t>(fprintf);
        while (*reinterpret_cast<int32_t*>(rbp6 - 40) < *reinterpret_cast<int32_t*>(rbp7 - 8)) {
            __asm__("cdq ");
            if (reinterpret_cast<int1_t>((*reinterpret_cast<int32_t*>(rbp8 - 36) * *reinterpret_cast<int32_t*>(rbp9 - 4) + *reinterpret_cast<int32_t*>(rbp10 - 40)) % 20 == fprintf)) {
                rax11 = g71c;
                rdi12 = *rax11;
                rsi13 = reinterpret_cast<int32_t*>(0x726);
                fun_72d(rdi12);
            }
            rax14 = g734;
            rdi15 = *rax14;
            rcx16 = *reinterpret_cast<int32_t*>(rbp17 - 40);
            *rdi15 = *rsi13;
            rsi13 = reinterpret_cast<int32_t*>(0x759);
            fun_760(rdi15 + 1);
            *reinterpret_cast<int32_t*>(rbp18 - 40) = *reinterpret_cast<int32_t*>(rbp19 - 40) + 1;
        }
        *reinterpret_cast<int32_t*>(rbp20 - 36) = *reinterpret_cast<int32_t*>(rbp21 - 36) + 1;
    }
    rax22 = g788;
    rdi23 = *rax22;
    fun_7a0(rdi23, 0x792, 0x799, rcx16);
    rax24 = g7a7;
    rdi25 = *rax24;
    rsi26 = reinterpret_cast<int32_t*>(0x7b1);
    fun_7bf(rdi25);
    *reinterpret_cast<int32_t*>(rbp27 - 36) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp28 - 36) < *reinterpret_cast<int32_t*>(rbp29 - 4)) {
        *reinterpret_cast<int32_t*>(rbp30 - 40) = reinterpret_cast<int32_t>(fprintf);
        while (*reinterpret_cast<int32_t*>(rbp31 - 40) < *reinterpret_cast<int32_t*>(rbp32 - 8)) {
            __asm__("cdq ");
            if (reinterpret_cast<int1_t>((*reinterpret_cast<int32_t*>(rbp33 - 36) * *reinterpret_cast<int32_t*>(rbp34 - 4) + *reinterpret_cast<int32_t*>(rbp35 - 40)) % 20 == fprintf)) {
                rax36 = g807;
                rdi37 = *rax36;
                rsi26 = reinterpret_cast<int32_t*>(0x811);
                fun_818(rdi37);
            }
            rax38 = g81f;
            rdi39 = *rax38;
            rcx16 = *reinterpret_cast<int32_t*>(rbp40 - 40);
            *rdi39 = *rsi26;
            rsi26 = reinterpret_cast<int32_t*>(0x844);
            fun_84b(rdi39 + 1);
            *reinterpret_cast<int32_t*>(rbp41 - 40) = *reinterpret_cast<int32_t*>(rbp42 - 40) + 1;
        }
        *reinterpret_cast<int32_t*>(rbp43 - 36) = *reinterpret_cast<int32_t*>(rbp44 - 36) + 1;
    }
    rax45 = g873;
    rdi46 = *rax45;
    fun_88b(rdi46, 0x87d, 0x884, rcx16);
    goto v47;
}

int64_t fun_366(int64_t rdi, int64_t rsi);

int64_t fun_379(int64_t rdi, int64_t rsi);

int64_t fun_38c(int64_t rdi, int64_t rsi);

void init_array(int32_t edi, int32_t esi, int32_t edx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7);

void fun_3d4(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7);

void fun_353(int64_t rdi, int64_t rsi) {
    int64_t rbp3;
    int64_t rax4;
    int64_t rax5;
    int64_t rbp6;
    int64_t rax7;
    int64_t rbp8;
    int64_t rax9;
    int64_t rbp10;
    int32_t edi11;
    int64_t rbp12;
    int32_t esi13;
    int64_t rbp14;
    int32_t edx15;
    int64_t rbp16;
    int64_t rcx17;
    int64_t rbp18;
    int64_t r8_19;
    int64_t rbp20;
    int64_t r9_21;
    int64_t rbp22;
    int64_t v23;
    int64_t rbp24;
    int64_t rdi25;
    int64_t rbp26;
    int64_t rsi27;
    int64_t rbp28;
    int64_t rdx29;
    int64_t rbp30;
    int64_t rcx31;
    int64_t rbp32;
    int64_t r8_33;
    int64_t rbp34;
    int64_t r9_35;
    int64_t rbp36;
    int64_t v37;
    int64_t rbp38;
    int64_t rbp39;
    int64_t rdi40;
    int64_t rbp41;
    int64_t rdi42;
    int64_t rbp43;
    int32_t eax44;
    int64_t rdi45;
    int64_t rbp46;
    int64_t rdi47;
    int64_t rbp48;
    int64_t rdi49;
    int64_t rbp50;
    int64_t v51;
    int32_t edi52;
    int64_t rbp53;
    int64_t rbp54;
    int64_t rbp55;
    int64_t rbp56;
    int64_t rbp57;

    *reinterpret_cast<int64_t*>(rbp3 - 40) = rax4;
    rax5 = fun_366(0x124f80, 8);
    *reinterpret_cast<int64_t*>(rbp6 - 48) = rax5;
    rax7 = fun_379(0x124f80, 8);
    *reinterpret_cast<int64_t*>(rbp8 - 56) = rax7;
    rax9 = fun_38c(0x1f4, 8);
    *reinterpret_cast<int64_t*>(rbp10 - 64) = rax9;
    edi11 = *reinterpret_cast<int32_t*>(rbp12 - 20);
    esi13 = *reinterpret_cast<int32_t*>(rbp14 - 24);
    edx15 = *reinterpret_cast<int32_t*>(rbp16 - 28);
    rcx17 = *reinterpret_cast<int64_t*>(rbp18 - 40);
    r8_19 = *reinterpret_cast<int64_t*>(rbp20 - 48);
    r9_21 = *reinterpret_cast<int64_t*>(rbp22 - 56);
    v23 = *reinterpret_cast<int64_t*>(rbp24 - 64);
    init_array(edi11, esi13, edx15, rcx17, r8_19, r9_21, v23);
    *reinterpret_cast<int32_t*>(&rdi25) = *reinterpret_cast<int32_t*>(rbp26 - 20);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi25) + 4) = reinterpret_cast<int32_t>(fprintf);
    *reinterpret_cast<int32_t*>(&rsi27) = *reinterpret_cast<int32_t*>(rbp28 - 24);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi27) + 4) = reinterpret_cast<int32_t>(fprintf);
    *reinterpret_cast<int32_t*>(&rdx29) = *reinterpret_cast<int32_t*>(rbp30 - 28);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx29) + 4) = reinterpret_cast<int32_t>(fprintf);
    rcx31 = *reinterpret_cast<int64_t*>(rbp32 - 40);
    r8_33 = *reinterpret_cast<int64_t*>(rbp34 - 48);
    r9_35 = *reinterpret_cast<int64_t*>(rbp36 - 56);
    v37 = *reinterpret_cast<int64_t*>(rbp38 - 64);
    fun_3d4(rdi25, rsi27, rdx29, rcx31, r8_33, r9_35, v37);
    if (*reinterpret_cast<int32_t*>(rbp39 - 4) <= 42) {
        addr_411_6:
        rdi40 = *reinterpret_cast<int64_t*>(rbp41 - 40);
        fun_41a(rdi40, rsi27, rdx29, rcx31, r8_33, r9_35, v37);
    } else {
        rdi42 = **reinterpret_cast<int64_t**>(rbp43 - 16);
        rsi27 = 0x3ec;
        eax44 = fun_3f1(rdi42, 0x3ec, rdx29, rcx31, r8_33, r9_35, v37);
        if (!reinterpret_cast<int1_t>(eax44 == fprintf)) 
            goto addr_411_6; else 
            goto addr_3fa_9;
    }
    rdi45 = *reinterpret_cast<int64_t*>(rbp46 - 48);
    fun_423(rdi45, rsi27, rdx29, rcx31, r8_33, r9_35, v37);
    rdi47 = *reinterpret_cast<int64_t*>(rbp48 - 56);
    fun_42c(rdi47, rsi27, rdx29, rcx31, r8_33, r9_35, v37);
    rdi49 = *reinterpret_cast<int64_t*>(rbp50 - 64);
    fun_435(rdi49, rsi27, rdx29, rcx31, r8_33, r9_35, v37);
    goto v51;
    addr_3fa_9:
    edi52 = *reinterpret_cast<int32_t*>(rbp53 - 24);
    *reinterpret_cast<int32_t*>(&rsi27) = *reinterpret_cast<int32_t*>(rbp54 - 28);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi27) + 4) = reinterpret_cast<int32_t>(fprintf);
    rdx29 = *reinterpret_cast<int64_t*>(rbp55 - 40);
    rcx31 = *reinterpret_cast<int64_t*>(rbp56 - 48);
    r8_33 = *reinterpret_cast<int64_t*>(rbp57 - 56);
    print_array(edi52, *reinterpret_cast<int32_t*>(&rsi27), rdx29, rcx31, r8_33, r9_35, v37);
    goto addr_411_6;
}

int64_t fun_366(int64_t rdi, int64_t rsi) {
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
    int64_t r9_19;
    int64_t rbp20;
    int64_t v21;
    int64_t rbp22;
    int64_t rdi23;
    int64_t rbp24;
    int64_t rsi25;
    int64_t rbp26;
    int64_t rdx27;
    int64_t rbp28;
    int64_t rcx29;
    int64_t rbp30;
    int64_t r8_31;
    int64_t rbp32;
    int64_t r9_33;
    int64_t rbp34;
    int64_t v35;
    int64_t rbp36;
    int64_t rbp37;
    int64_t rdi38;
    int64_t rbp39;
    int64_t rdi40;
    int64_t rbp41;
    int32_t eax42;
    int64_t rdi43;
    int64_t rbp44;
    int64_t rdi45;
    int64_t rbp46;
    int64_t rdi47;
    int64_t rbp48;
    int64_t v49;
    int32_t edi50;
    int64_t rbp51;
    int64_t rbp52;
    int64_t rbp53;
    int64_t rbp54;
    int64_t rbp55;

    *reinterpret_cast<int64_t*>(rbp3 - 48) = rax4;
    rax5 = fun_379(0x124f80, 8);
    *reinterpret_cast<int64_t*>(rbp6 - 56) = rax5;
    rax7 = fun_38c(0x1f4, 8);
    *reinterpret_cast<int64_t*>(rbp8 - 64) = rax7;
    edi9 = *reinterpret_cast<int32_t*>(rbp10 - 20);
    esi11 = *reinterpret_cast<int32_t*>(rbp12 - 24);
    edx13 = *reinterpret_cast<int32_t*>(rbp14 - 28);
    rcx15 = *reinterpret_cast<int64_t*>(rbp16 - 40);
    r8_17 = *reinterpret_cast<int64_t*>(rbp18 - 48);
    r9_19 = *reinterpret_cast<int64_t*>(rbp20 - 56);
    v21 = *reinterpret_cast<int64_t*>(rbp22 - 64);
    init_array(edi9, esi11, edx13, rcx15, r8_17, r9_19, v21);
    *reinterpret_cast<int32_t*>(&rdi23) = *reinterpret_cast<int32_t*>(rbp24 - 20);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi23) + 4) = reinterpret_cast<int32_t>(fprintf);
    *reinterpret_cast<int32_t*>(&rsi25) = *reinterpret_cast<int32_t*>(rbp26 - 24);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi25) + 4) = reinterpret_cast<int32_t>(fprintf);
    *reinterpret_cast<int32_t*>(&rdx27) = *reinterpret_cast<int32_t*>(rbp28 - 28);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx27) + 4) = reinterpret_cast<int32_t>(fprintf);
    rcx29 = *reinterpret_cast<int64_t*>(rbp30 - 40);
    r8_31 = *reinterpret_cast<int64_t*>(rbp32 - 48);
    r9_33 = *reinterpret_cast<int64_t*>(rbp34 - 56);
    v35 = *reinterpret_cast<int64_t*>(rbp36 - 64);
    fun_3d4(rdi23, rsi25, rdx27, rcx29, r8_31, r9_33, v35);
    if (*reinterpret_cast<int32_t*>(rbp37 - 4) <= 42) {
        addr_411_5:
        rdi38 = *reinterpret_cast<int64_t*>(rbp39 - 40);
        fun_41a(rdi38, rsi25, rdx27, rcx29, r8_31, r9_33, v35);
    } else {
        rdi40 = **reinterpret_cast<int64_t**>(rbp41 - 16);
        rsi25 = 0x3ec;
        eax42 = fun_3f1(rdi40, 0x3ec, rdx27, rcx29, r8_31, r9_33, v35);
        if (!reinterpret_cast<int1_t>(eax42 == fprintf)) 
            goto addr_411_5; else 
            goto addr_3fa_8;
    }
    rdi43 = *reinterpret_cast<int64_t*>(rbp44 - 48);
    fun_423(rdi43, rsi25, rdx27, rcx29, r8_31, r9_33, v35);
    rdi45 = *reinterpret_cast<int64_t*>(rbp46 - 56);
    fun_42c(rdi45, rsi25, rdx27, rcx29, r8_31, r9_33, v35);
    rdi47 = *reinterpret_cast<int64_t*>(rbp48 - 64);
    fun_435(rdi47, rsi25, rdx27, rcx29, r8_31, r9_33, v35);
    goto v49;
    addr_3fa_8:
    edi50 = *reinterpret_cast<int32_t*>(rbp51 - 24);
    *reinterpret_cast<int32_t*>(&rsi25) = *reinterpret_cast<int32_t*>(rbp52 - 28);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi25) + 4) = reinterpret_cast<int32_t>(fprintf);
    rdx27 = *reinterpret_cast<int64_t*>(rbp53 - 40);
    rcx29 = *reinterpret_cast<int64_t*>(rbp54 - 48);
    r8_31 = *reinterpret_cast<int64_t*>(rbp55 - 56);
    print_array(edi50, *reinterpret_cast<int32_t*>(&rsi25), rdx27, rcx29, r8_31, r9_33, v35);
    goto addr_411_5;
}

int64_t fun_379(int64_t rdi, int64_t rsi) {
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
    int64_t r9_17;
    int64_t rbp18;
    int64_t v19;
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
    int64_t r9_31;
    int64_t rbp32;
    int64_t v33;
    int64_t rbp34;
    int64_t rbp35;
    int64_t rdi36;
    int64_t rbp37;
    int64_t rdi38;
    int64_t rbp39;
    int32_t eax40;
    int64_t rdi41;
    int64_t rbp42;
    int64_t rdi43;
    int64_t rbp44;
    int64_t rdi45;
    int64_t rbp46;
    int64_t v47;
    int32_t edi48;
    int64_t rbp49;
    int64_t rbp50;
    int64_t rbp51;
    int64_t rbp52;
    int64_t rbp53;

    *reinterpret_cast<int64_t*>(rbp3 - 56) = rax4;
    rax5 = fun_38c(0x1f4, 8);
    *reinterpret_cast<int64_t*>(rbp6 - 64) = rax5;
    edi7 = *reinterpret_cast<int32_t*>(rbp8 - 20);
    esi9 = *reinterpret_cast<int32_t*>(rbp10 - 24);
    edx11 = *reinterpret_cast<int32_t*>(rbp12 - 28);
    rcx13 = *reinterpret_cast<int64_t*>(rbp14 - 40);
    r8_15 = *reinterpret_cast<int64_t*>(rbp16 - 48);
    r9_17 = *reinterpret_cast<int64_t*>(rbp18 - 56);
    v19 = *reinterpret_cast<int64_t*>(rbp20 - 64);
    init_array(edi7, esi9, edx11, rcx13, r8_15, r9_17, v19);
    *reinterpret_cast<int32_t*>(&rdi21) = *reinterpret_cast<int32_t*>(rbp22 - 20);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi21) + 4) = reinterpret_cast<int32_t>(fprintf);
    *reinterpret_cast<int32_t*>(&rsi23) = *reinterpret_cast<int32_t*>(rbp24 - 24);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi23) + 4) = reinterpret_cast<int32_t>(fprintf);
    *reinterpret_cast<int32_t*>(&rdx25) = *reinterpret_cast<int32_t*>(rbp26 - 28);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx25) + 4) = reinterpret_cast<int32_t>(fprintf);
    rcx27 = *reinterpret_cast<int64_t*>(rbp28 - 40);
    r8_29 = *reinterpret_cast<int64_t*>(rbp30 - 48);
    r9_31 = *reinterpret_cast<int64_t*>(rbp32 - 56);
    v33 = *reinterpret_cast<int64_t*>(rbp34 - 64);
    fun_3d4(rdi21, rsi23, rdx25, rcx27, r8_29, r9_31, v33);
    if (*reinterpret_cast<int32_t*>(rbp35 - 4) <= 42) {
        addr_411_4:
        rdi36 = *reinterpret_cast<int64_t*>(rbp37 - 40);
        fun_41a(rdi36, rsi23, rdx25, rcx27, r8_29, r9_31, v33);
    } else {
        rdi38 = **reinterpret_cast<int64_t**>(rbp39 - 16);
        rsi23 = 0x3ec;
        eax40 = fun_3f1(rdi38, 0x3ec, rdx25, rcx27, r8_29, r9_31, v33);
        if (!reinterpret_cast<int1_t>(eax40 == fprintf)) 
            goto addr_411_4; else 
            goto addr_3fa_7;
    }
    rdi41 = *reinterpret_cast<int64_t*>(rbp42 - 48);
    fun_423(rdi41, rsi23, rdx25, rcx27, r8_29, r9_31, v33);
    rdi43 = *reinterpret_cast<int64_t*>(rbp44 - 56);
    fun_42c(rdi43, rsi23, rdx25, rcx27, r8_29, r9_31, v33);
    rdi45 = *reinterpret_cast<int64_t*>(rbp46 - 64);
    fun_435(rdi45, rsi23, rdx25, rcx27, r8_29, r9_31, v33);
    goto v47;
    addr_3fa_7:
    edi48 = *reinterpret_cast<int32_t*>(rbp49 - 24);
    *reinterpret_cast<int32_t*>(&rsi23) = *reinterpret_cast<int32_t*>(rbp50 - 28);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi23) + 4) = reinterpret_cast<int32_t>(fprintf);
    rdx25 = *reinterpret_cast<int64_t*>(rbp51 - 40);
    rcx27 = *reinterpret_cast<int64_t*>(rbp52 - 48);
    r8_29 = *reinterpret_cast<int64_t*>(rbp53 - 56);
    print_array(edi48, *reinterpret_cast<int32_t*>(&rsi23), rdx25, rcx27, r8_29, r9_31, v33);
    goto addr_411_4;
}

int64_t fun_38c(int64_t rdi, int64_t rsi) {
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
    int64_t r9_15;
    int64_t rbp16;
    int64_t v17;
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
    int64_t v31;
    int64_t rbp32;
    int64_t rbp33;
    int64_t rdi34;
    int64_t rbp35;
    int64_t rdi36;
    int64_t rbp37;
    int32_t eax38;
    int64_t rdi39;
    int64_t rbp40;
    int64_t rdi41;
    int64_t rbp42;
    int64_t rdi43;
    int64_t rbp44;
    int64_t v45;
    int32_t edi46;
    int64_t rbp47;
    int64_t rbp48;
    int64_t rbp49;
    int64_t rbp50;
    int64_t rbp51;

    *reinterpret_cast<int64_t*>(rbp3 - 64) = rax4;
    edi5 = *reinterpret_cast<int32_t*>(rbp6 - 20);
    esi7 = *reinterpret_cast<int32_t*>(rbp8 - 24);
    edx9 = *reinterpret_cast<int32_t*>(rbp10 - 28);
    rcx11 = *reinterpret_cast<int64_t*>(rbp12 - 40);
    r8_13 = *reinterpret_cast<int64_t*>(rbp14 - 48);
    r9_15 = *reinterpret_cast<int64_t*>(rbp16 - 56);
    v17 = *reinterpret_cast<int64_t*>(rbp18 - 64);
    init_array(edi5, esi7, edx9, rcx11, r8_13, r9_15, v17);
    *reinterpret_cast<int32_t*>(&rdi19) = *reinterpret_cast<int32_t*>(rbp20 - 20);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi19) + 4) = reinterpret_cast<int32_t>(fprintf);
    *reinterpret_cast<int32_t*>(&rsi21) = *reinterpret_cast<int32_t*>(rbp22 - 24);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi21) + 4) = reinterpret_cast<int32_t>(fprintf);
    *reinterpret_cast<int32_t*>(&rdx23) = *reinterpret_cast<int32_t*>(rbp24 - 28);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx23) + 4) = reinterpret_cast<int32_t>(fprintf);
    rcx25 = *reinterpret_cast<int64_t*>(rbp26 - 40);
    r8_27 = *reinterpret_cast<int64_t*>(rbp28 - 48);
    r9_29 = *reinterpret_cast<int64_t*>(rbp30 - 56);
    v31 = *reinterpret_cast<int64_t*>(rbp32 - 64);
    fun_3d4(rdi19, rsi21, rdx23, rcx25, r8_27, r9_29, v31);
    if (*reinterpret_cast<int32_t*>(rbp33 - 4) <= 42) {
        addr_411_3:
        rdi34 = *reinterpret_cast<int64_t*>(rbp35 - 40);
        fun_41a(rdi34, rsi21, rdx23, rcx25, r8_27, r9_29, v31);
    } else {
        rdi36 = **reinterpret_cast<int64_t**>(rbp37 - 16);
        rsi21 = 0x3ec;
        eax38 = fun_3f1(rdi36, 0x3ec, rdx23, rcx25, r8_27, r9_29, v31);
        if (!reinterpret_cast<int1_t>(eax38 == fprintf)) 
            goto addr_411_3; else 
            goto addr_3fa_6;
    }
    rdi39 = *reinterpret_cast<int64_t*>(rbp40 - 48);
    fun_423(rdi39, rsi21, rdx23, rcx25, r8_27, r9_29, v31);
    rdi41 = *reinterpret_cast<int64_t*>(rbp42 - 56);
    fun_42c(rdi41, rsi21, rdx23, rcx25, r8_27, r9_29, v31);
    rdi43 = *reinterpret_cast<int64_t*>(rbp44 - 64);
    fun_435(rdi43, rsi21, rdx23, rcx25, r8_27, r9_29, v31);
    goto v45;
    addr_3fa_6:
    edi46 = *reinterpret_cast<int32_t*>(rbp47 - 24);
    *reinterpret_cast<int32_t*>(&rsi21) = *reinterpret_cast<int32_t*>(rbp48 - 28);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi21) + 4) = reinterpret_cast<int32_t>(fprintf);
    rdx23 = *reinterpret_cast<int64_t*>(rbp49 - 40);
    rcx25 = *reinterpret_cast<int64_t*>(rbp50 - 48);
    r8_27 = *reinterpret_cast<int64_t*>(rbp51 - 56);
    print_array(edi46, *reinterpret_cast<int32_t*>(&rsi21), rdx23, rcx25, r8_27, r9_29, v31);
    goto addr_411_3;
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

void init_array(int32_t edi, int32_t esi, int32_t edx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7) {
    struct s0* rdi1;
    struct s1* rsi2;
    int32_t v8;
    int32_t v9;
    int32_t v10;
    int32_t v11;
    int32_t v12;
    int32_t v13;
    struct s2* rdi14;
    struct s3* rsi15;
    struct s4* rdi16;
    struct s5* rsi17;

    *reinterpret_cast<int32_t*>(&rdi1) = edi;
    *reinterpret_cast<int32_t*>(&rsi2) = esi;
    v8 = *reinterpret_cast<int32_t*>(&rdi1);
    v9 = *reinterpret_cast<int32_t*>(&rsi2);
    v10 = edx;
    v11 = reinterpret_cast<int32_t>(fprintf);
    while (v11 < v8) {
        __asm__("cvtsi2sd xmm0, dword [rbp-0x2c]");
        rdi1->f0 = rsi2->f0;
        rdi1 = reinterpret_cast<struct s0*>(&rdi1->f4);
        rsi2 = reinterpret_cast<struct s1*>(&rsi2->f4);
        ++v11;
    }
    v12 = reinterpret_cast<int32_t>(fprintf);
    while (v12 < v9) {
        v13 = reinterpret_cast<int32_t>(fprintf);
        while (v13 < v10) {
            __asm__("cvtsi2sd xmm0, dword [rbp-0x2c]");
            __asm__("cvtsi2sd xmm1, eax");
            __asm__("mulsd xmm0, xmm1");
            __asm__("cvtsi2sd xmm1, dword [rbp-0x8]");
            __asm__("divsd xmm0, xmm1");
            rdi1->f0 = rsi2->f0;
            rdi14 = reinterpret_cast<struct s2*>(&rdi1->f4);
            rsi15 = reinterpret_cast<struct s3*>(&rsi2->f4);
            __asm__("cvtsi2sd xmm0, dword [rbp-0x2c]");
            __asm__("cvtsi2sd xmm1, eax");
            __asm__("mulsd xmm0, xmm1");
            __asm__("cvtsi2sd xmm1, dword [rbp-0xc]");
            __asm__("divsd xmm0, xmm1");
            rdi14->f0 = rsi15->f0;
            rdi16 = reinterpret_cast<struct s4*>(&rdi14->f4);
            rsi17 = reinterpret_cast<struct s5*>(&rsi15->f4);
            __asm__("cvtsi2sd xmm0, dword [rbp-0x2c]");
            __asm__("cvtsi2sd xmm1, eax");
            __asm__("mulsd xmm0, xmm1");
            __asm__("cvtsi2sd xmm1, dword [rbp-0x8]");
            __asm__("divsd xmm0, xmm1");
            rdi16->f0 = rsi17->f0;
            rdi1 = reinterpret_cast<struct s0*>(&rdi16->f4);
            rsi2 = reinterpret_cast<struct s1*>(&rsi17->f4);
            ++v13;
        }
        ++v12;
    }
    return;
}

void fun_3d4(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7) {
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
    int64_t rdi18;
    int64_t rbp19;
    int64_t v20;
    int32_t edi21;
    int64_t rbp22;
    int64_t rbp23;
    int64_t rbp24;
    int64_t rbp25;
    int64_t rbp26;

    if (*reinterpret_cast<int32_t*>(rbp8 - 4) <= 42) {
        addr_411_2:
        rdi9 = *reinterpret_cast<int64_t*>(rbp10 - 40);
        fun_41a(rdi9, rsi, rdx, rcx, r8, r9, __return_address());
    } else {
        rdi11 = **reinterpret_cast<int64_t**>(rbp12 - 16);
        rsi = 0x3ec;
        eax13 = fun_3f1(rdi11, 0x3ec, rdx, rcx, r8, r9, __return_address());
        if (!reinterpret_cast<int1_t>(eax13 == fprintf)) 
            goto addr_411_2; else 
            goto addr_3fa_5;
    }
    rdi14 = *reinterpret_cast<int64_t*>(rbp15 - 48);
    fun_423(rdi14, rsi, rdx, rcx, r8, r9, __return_address());
    rdi16 = *reinterpret_cast<int64_t*>(rbp17 - 56);
    fun_42c(rdi16, rsi, rdx, rcx, r8, r9, __return_address());
    rdi18 = *reinterpret_cast<int64_t*>(rbp19 - 64);
    fun_435(rdi18, rsi, rdx, rcx, r8, r9, __return_address());
    goto v20;
    addr_3fa_5:
    edi21 = *reinterpret_cast<int32_t*>(rbp22 - 24);
    *reinterpret_cast<int32_t*>(&rsi) = *reinterpret_cast<int32_t*>(rbp23 - 28);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi) + 4) = reinterpret_cast<int32_t>(fprintf);
    rdx = *reinterpret_cast<int64_t*>(rbp24 - 40);
    rcx = *reinterpret_cast<int64_t*>(rbp25 - 48);
    r8 = *reinterpret_cast<int64_t*>(rbp26 - 56);
    print_array(edi21, *reinterpret_cast<int32_t*>(&rsi), rdx, rcx, r8, r9, __return_address());
    goto addr_411_2;
}

void fprintf() {
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

void fun_78() {
    int1_t less1;
    int64_t rbp2;
    int64_t rbp3;
    int64_t rbp4;
    int64_t rbp5;
    int64_t rbp6;
    int64_t rbp7;
    struct s6* rdi8;
    struct s7* rsi9;
    struct s8* rdi10;
    struct s9* rsi11;
    struct s10* rdi12;
    struct s11* rsi13;
    struct s12* rdi14;
    struct s13* rsi15;
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
    struct s8* rdi26;
    struct s9* rsi27;
    struct s10* rdi28;
    struct s11* rsi29;
    struct s12* rdi30;
    struct s13* rsi31;
    int64_t rbp32;
    int64_t rbp33;
    int64_t rbp34;
    int64_t rbp35;
    int64_t rbp36;
    int64_t rbp37;
    int64_t rbp38;
    int64_t rbp39;
    int64_t rbp40;
    struct s14* rdi41;
    struct s15* rsi42;
    struct s16* rdi43;
    struct s17* rsi44;
    struct s18* rdi45;
    struct s19* rsi46;
    struct s20* rdi47;
    struct s21* rsi48;
    int64_t rbp49;
    int64_t rbp50;
    int64_t rbp51;
    int64_t rbp52;

    if (!less1) {
        *reinterpret_cast<int32_t*>(rbp2 - 48) = reinterpret_cast<int32_t>(fprintf);
        while (*reinterpret_cast<int32_t*>(rbp3 - 48) < *reinterpret_cast<int32_t*>(rbp4 - 8)) {
            *reinterpret_cast<int32_t*>(rbp5 - 52) = 1;
            while (*reinterpret_cast<int32_t*>(rbp6 - 52) < *reinterpret_cast<int32_t*>(rbp7 - 12)) {
                rdi8->f0 = rsi9->f0;
                rdi10 = reinterpret_cast<struct s8*>(&rdi8->f4);
                rsi11 = reinterpret_cast<struct s9*>(&rsi9->f4);
                rdi10->f0 = rsi11->f0;
                rdi12 = reinterpret_cast<struct s10*>(&rdi10->f4);
                rsi13 = reinterpret_cast<struct s11*>(&rsi11->f4);
                __asm__("subsd xmm0, [rax+rcx*8]");
                rdi12->f0 = rsi13->f0;
                rdi14 = reinterpret_cast<struct s12*>(&rdi12->f4);
                rsi15 = reinterpret_cast<struct s13*>(&rsi13->f4);
                __asm__("mulsd xmm0, xmm2");
                __asm__("addsd xmm0, xmm1");
                rdi14->f0 = rsi15->f0;
                rdi8 = reinterpret_cast<struct s6*>(&rdi14->f4);
                rsi9 = reinterpret_cast<struct s7*>(&rsi15->f4);
                *reinterpret_cast<int32_t*>(rbp16 - 52) = *reinterpret_cast<int32_t*>(rbp17 - 52) + 1;
            }
            *reinterpret_cast<int32_t*>(rbp18 - 48) = *reinterpret_cast<int32_t*>(rbp19 - 48) + 1;
        }
        *reinterpret_cast<int32_t*>(rbp20 - 48) = reinterpret_cast<int32_t>(fprintf);
        while (*reinterpret_cast<int32_t*>(rbp21 - 48) < *reinterpret_cast<int32_t*>(rbp22 - 8) - 1) {
            *reinterpret_cast<int32_t*>(rbp23 - 52) = reinterpret_cast<int32_t>(fprintf);
            while (*reinterpret_cast<int32_t*>(rbp24 - 52) < *reinterpret_cast<int32_t*>(rbp25 - 12) - 1) {
                rdi8->f0 = rsi9->f0;
                rdi26 = reinterpret_cast<struct s8*>(&rdi8->f4);
                rsi27 = reinterpret_cast<struct s9*>(&rsi9->f4);
                rdi26->f0 = rsi27->f0;
                rdi28 = reinterpret_cast<struct s10*>(&rdi26->f4);
                rsi29 = reinterpret_cast<struct s11*>(&rsi27->f4);
                __asm__("subsd xmm0, [rax+rcx*8]");
                __asm__("addsd xmm0, [rax+rcx*8]");
                __asm__("subsd xmm0, [rax+rcx*8]");
                rdi28->f0 = rsi29->f0;
                rdi30 = reinterpret_cast<struct s12*>(&rdi28->f4);
                rsi31 = reinterpret_cast<struct s13*>(&rsi29->f4);
                __asm__("mulsd xmm0, xmm2");
                __asm__("addsd xmm0, xmm1");
                rdi30->f0 = rsi31->f0;
                rdi8 = reinterpret_cast<struct s6*>(&rdi30->f4);
                rsi9 = reinterpret_cast<struct s7*>(&rsi31->f4);
                *reinterpret_cast<int32_t*>(rbp32 - 52) = *reinterpret_cast<int32_t*>(rbp33 - 52) + 1;
            }
            *reinterpret_cast<int32_t*>(rbp34 - 48) = *reinterpret_cast<int32_t*>(rbp35 - 48) + 1;
        }
        *reinterpret_cast<int32_t*>(rbp36 - 44) = *reinterpret_cast<int32_t*>(rbp37 - 44) + 1;
    } else {
        *reinterpret_cast<int32_t*>(rbp38 - 52) = reinterpret_cast<int32_t>(fprintf);
        while (*reinterpret_cast<int32_t*>(rbp39 - 52) < *reinterpret_cast<int32_t*>(rbp40 - 12)) {
            rdi41->f0 = rsi42->f0;
            rdi43 = reinterpret_cast<struct s16*>(&rdi41->f4);
            rsi44 = reinterpret_cast<struct s17*>(&rsi42->f4);
            rdi43->f0 = rsi44->f0;
            rdi45 = reinterpret_cast<struct s18*>(&rdi43->f4);
            rsi46 = reinterpret_cast<struct s19*>(&rsi44->f4);
            __asm__("subsd xmm0, [rax+rcx*8]");
            rdi45->f0 = rsi46->f0;
            rdi47 = reinterpret_cast<struct s20*>(&rdi45->f4);
            rsi48 = reinterpret_cast<struct s21*>(&rsi46->f4);
            __asm__("mulsd xmm0, xmm2");
            __asm__("addsd xmm0, xmm1");
            rdi47->f0 = rsi48->f0;
            rdi41 = reinterpret_cast<struct s14*>(&rdi47->f4);
            rsi42 = reinterpret_cast<struct s15*>(&rsi48->f4);
            *reinterpret_cast<int32_t*>(rbp49 - 52) = *reinterpret_cast<int32_t*>(rbp50 - 52) + 1;
        }
        *reinterpret_cast<int32_t*>(rbp51 - 48) = *reinterpret_cast<int32_t*>(rbp52 - 48) + 1;
    }
}

void fun_31b() {
    int64_t v1;

    goto v1;
}

void submain(int32_t edi, int64_t rsi) {
    fun_353(0x124f80, 8);
}

