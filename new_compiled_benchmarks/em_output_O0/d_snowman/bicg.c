
void fprintf();

void print_array(int32_t edi, int32_t esi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7);

void fun_238(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7);

void fun_241(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7);

void fun_24a(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7);

void fun_253(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7);

void fun_25c(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7);

int32_t fun_213(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7) {
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
    int64_t rdi20;
    int64_t rbp21;
    int64_t rdi22;
    int64_t rbp23;
    int64_t v24;

    if (reinterpret_cast<int1_t>(eax8 == fprintf)) {
        edi9 = *reinterpret_cast<int32_t*>(rbp10 - 24);
        *reinterpret_cast<int32_t*>(&rsi) = *reinterpret_cast<int32_t*>(rbp11 - 20);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi) + 4) = reinterpret_cast<int32_t>(fprintf);
        rdx = *reinterpret_cast<int64_t*>(rbp12 - 40);
        rcx = *reinterpret_cast<int64_t*>(rbp13 - 48);
        print_array(edi9, *reinterpret_cast<int32_t*>(&rsi), rdx, rcx, r8, r9, __return_address());
    }
    rdi14 = *reinterpret_cast<int64_t*>(rbp15 - 32);
    fun_238(rdi14, rsi, rdx, rcx, r8, r9, __return_address());
    rdi16 = *reinterpret_cast<int64_t*>(rbp17 - 40);
    fun_241(rdi16, rsi, rdx, rcx, r8, r9, __return_address());
    rdi18 = *reinterpret_cast<int64_t*>(rbp19 - 48);
    fun_24a(rdi18, rsi, rdx, rcx, r8, r9, __return_address());
    rdi20 = *reinterpret_cast<int64_t*>(rbp21 - 56);
    fun_253(rdi20, rsi, rdx, rcx, r8, r9, __return_address());
    rdi22 = *reinterpret_cast<int64_t*>(rbp23 - 64);
    fun_25c(rdi22, rsi, rdx, rcx, r8, r9, __return_address());
    goto v24;
}

int64_t* g38d = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_39e(int64_t rdi, int64_t rsi);

int64_t* g3a5 = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_3bd(int64_t rdi);

int64_t* g3eb = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_3fc(int64_t rdi);

int32_t** g403 = reinterpret_cast<int32_t**>(0x48f0458b48388b48);

void fun_421(int64_t rdi);

int64_t* g436 = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_44e(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx);

int64_t* g455 = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_46d(int64_t rdi);

int64_t* g49b = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_4ac(int64_t rdi);

int32_t** g4b3 = reinterpret_cast<int32_t**>(0x48e8458b48388b48);

void fun_4d1(int64_t rdi);

int64_t* g4e6 = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_4fe(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx);

int64_t* g505 = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_516(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx);

void print_array(int32_t edi, int32_t esi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7) {
    int32_t v8;
    int32_t v9;
    int64_t* rax10;
    int64_t rdi11;
    int64_t* rax12;
    int64_t rdi13;
    int32_t* rsi14;
    int32_t v15;
    int64_t* rax16;
    int64_t rdi17;
    int32_t** rax18;
    int32_t* rdi19;
    int64_t* rax20;
    int64_t rdi21;
    int64_t* rax22;
    int64_t rdi23;
    int32_t* rsi24;
    int32_t v25;
    int64_t* rax26;
    int64_t rdi27;
    int32_t** rax28;
    int32_t* rdi29;
    int64_t* rax30;
    int64_t rdi31;
    int64_t* rax32;
    int64_t rdi33;

    v8 = edi;
    v9 = esi;
    rax10 = g38d;
    rdi11 = *rax10;
    fun_39e(rdi11, 0x397);
    rax12 = g3a5;
    rdi13 = *rax12;
    rsi14 = reinterpret_cast<int32_t*>(0x3af);
    fun_3bd(rdi13);
    v15 = reinterpret_cast<int32_t>(fprintf);
    while (v15 < v8) {
        __asm__("cdq ");
        if (reinterpret_cast<int1_t>(v15 % 20 == fprintf)) {
            rax16 = g3eb;
            rdi17 = *rax16;
            rsi14 = reinterpret_cast<int32_t*>(0x3f5);
            fun_3fc(rdi17);
        }
        rax18 = g403;
        rdi19 = *rax18;
        rcx = v15;
        *rdi19 = *rsi14;
        rsi14 = reinterpret_cast<int32_t*>(0x41a);
        fun_421(rdi19 + 1);
        ++v15;
    }
    rax20 = g436;
    rdi21 = *rax20;
    fun_44e(rdi21, 0x440, 0x447, rcx);
    rax22 = g455;
    rdi23 = *rax22;
    rsi24 = reinterpret_cast<int32_t*>(0x45f);
    fun_46d(rdi23);
    v25 = reinterpret_cast<int32_t>(fprintf);
    while (v25 < v9) {
        __asm__("cdq ");
        if (reinterpret_cast<int1_t>(v25 % 20 == fprintf)) {
            rax26 = g49b;
            rdi27 = *rax26;
            rsi24 = reinterpret_cast<int32_t*>(0x4a5);
            fun_4ac(rdi27);
        }
        rax28 = g4b3;
        rdi29 = *rax28;
        rcx = v25;
        *rdi29 = *rsi24;
        rsi24 = reinterpret_cast<int32_t*>(0x4ca);
        fun_4d1(rdi29 + 1);
        ++v25;
    }
    rax30 = g4e6;
    rdi31 = *rax30;
    fun_4fe(rdi31, 0x4f0, 0x4f7, rcx);
    rax32 = g505;
    rdi33 = *rax32;
    fun_516(rdi33, 0x50f, 0x4f7, rcx);
    return;
}

void fun_238(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7) {
    int64_t rdi8;
    int64_t rbp9;
    int64_t rdi10;
    int64_t rbp11;
    int64_t rdi12;
    int64_t rbp13;
    int64_t rdi14;
    int64_t rbp15;
    int64_t v16;

    rdi8 = *reinterpret_cast<int64_t*>(rbp9 - 40);
    fun_241(rdi8, rsi, rdx, rcx, r8, r9, __return_address());
    rdi10 = *reinterpret_cast<int64_t*>(rbp11 - 48);
    fun_24a(rdi10, rsi, rdx, rcx, r8, r9, __return_address());
    rdi12 = *reinterpret_cast<int64_t*>(rbp13 - 56);
    fun_253(rdi12, rsi, rdx, rcx, r8, r9, __return_address());
    rdi14 = *reinterpret_cast<int64_t*>(rbp15 - 64);
    fun_25c(rdi14, rsi, rdx, rcx, r8, r9, __return_address());
    goto v16;
}

void fun_3fc(int64_t rdi) {
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
        rax2 = g403;
        rdi3 = *rax2;
        rcx4 = *reinterpret_cast<int32_t*>(rbp5 - 28);
        *rdi3 = *rsi6;
        rsi6 = reinterpret_cast<int32_t*>(0x41a);
        fun_421(rdi3 + 1);
        *reinterpret_cast<int32_t*>(rbp7 - 28) = *reinterpret_cast<int32_t*>(rbp8 - 28) + 1;
        if (*reinterpret_cast<int32_t*>(rbp9 - 28) >= *reinterpret_cast<int32_t*>(rbp10 - 4)) 
            break;
        __asm__("cdq ");
        if (!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp11 - 28) % 20 == fprintf)) 
            continue;
        rax12 = g3eb;
        rdi13 = *rax12;
        rsi6 = reinterpret_cast<int32_t*>(0x3f5);
        fun_3fc(rdi13);
    }
    rax14 = g436;
    rdi15 = *rax14;
    fun_44e(rdi15, 0x440, 0x447, rcx4);
    rax16 = g455;
    rdi17 = *rax16;
    rsi18 = reinterpret_cast<int32_t*>(0x45f);
    fun_46d(rdi17);
    *reinterpret_cast<int32_t*>(rbp19 - 28) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp20 - 28) < *reinterpret_cast<int32_t*>(rbp21 - 8)) {
        __asm__("cdq ");
        if (reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp22 - 28) % 20 == fprintf)) {
            rax23 = g49b;
            rdi24 = *rax23;
            rsi18 = reinterpret_cast<int32_t*>(0x4a5);
            fun_4ac(rdi24);
        }
        rax25 = g4b3;
        rdi26 = *rax25;
        rcx4 = *reinterpret_cast<int32_t*>(rbp27 - 28);
        *rdi26 = *rsi18;
        rsi18 = reinterpret_cast<int32_t*>(0x4ca);
        fun_4d1(rdi26 + 1);
        *reinterpret_cast<int32_t*>(rbp28 - 28) = *reinterpret_cast<int32_t*>(rbp29 - 28) + 1;
    }
    rax30 = g4e6;
    rdi31 = *rax30;
    fun_4fe(rdi31, 0x4f0, 0x4f7, rcx4);
    rax32 = g505;
    rdi33 = *rax32;
    fun_516(rdi33, 0x50f, 0x4f7, rcx4);
    goto v34;
}

void fun_421(int64_t rdi) {
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
            rax7 = g3eb;
            rdi8 = *rax7;
            rsi9 = reinterpret_cast<int32_t*>(0x3f5);
            fun_3fc(rdi8);
        }
        rax10 = g403;
        rdi11 = *rax10;
        rcx12 = *reinterpret_cast<int32_t*>(rbp13 - 28);
        *rdi11 = *rsi9;
        rsi9 = reinterpret_cast<int32_t*>(0x41a);
        fun_421(rdi11 + 1);
    }
    rax14 = g436;
    rdi15 = *rax14;
    fun_44e(rdi15, 0x440, 0x447, rcx12);
    rax16 = g455;
    rdi17 = *rax16;
    rsi18 = reinterpret_cast<int32_t*>(0x45f);
    fun_46d(rdi17);
    *reinterpret_cast<int32_t*>(rbp19 - 28) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp20 - 28) < *reinterpret_cast<int32_t*>(rbp21 - 8)) {
        __asm__("cdq ");
        if (reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp22 - 28) % 20 == fprintf)) {
            rax23 = g49b;
            rdi24 = *rax23;
            rsi18 = reinterpret_cast<int32_t*>(0x4a5);
            fun_4ac(rdi24);
        }
        rax25 = g4b3;
        rdi26 = *rax25;
        rcx12 = *reinterpret_cast<int32_t*>(rbp27 - 28);
        *rdi26 = *rsi18;
        rsi18 = reinterpret_cast<int32_t*>(0x4ca);
        fun_4d1(rdi26 + 1);
        *reinterpret_cast<int32_t*>(rbp28 - 28) = *reinterpret_cast<int32_t*>(rbp29 - 28) + 1;
    }
    rax30 = g4e6;
    rdi31 = *rax30;
    fun_4fe(rdi31, 0x4f0, 0x4f7, rcx12);
    rax32 = g505;
    rdi33 = *rax32;
    fun_516(rdi33, 0x50f, 0x4f7, rcx12);
    goto v34;
}

void fun_4ac(int64_t rdi) {
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
        rax2 = g4b3;
        rdi3 = *rax2;
        rcx4 = *reinterpret_cast<int32_t*>(rbp5 - 28);
        *rdi3 = *rsi6;
        rsi6 = reinterpret_cast<int32_t*>(0x4ca);
        fun_4d1(rdi3 + 1);
        *reinterpret_cast<int32_t*>(rbp7 - 28) = *reinterpret_cast<int32_t*>(rbp8 - 28) + 1;
        if (*reinterpret_cast<int32_t*>(rbp9 - 28) >= *reinterpret_cast<int32_t*>(rbp10 - 8)) 
            break;
        __asm__("cdq ");
        if (!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp11 - 28) % 20 == fprintf)) 
            continue;
        rax12 = g49b;
        rdi13 = *rax12;
        rsi6 = reinterpret_cast<int32_t*>(0x4a5);
        fun_4ac(rdi13);
    }
    rax14 = g4e6;
    rdi15 = *rax14;
    fun_4fe(rdi15, 0x4f0, 0x4f7, rcx4);
    rax16 = g505;
    rdi17 = *rax16;
    fun_516(rdi17, 0x50f, 0x4f7, rcx4);
    goto v18;
}

void fun_4d1(int64_t rdi) {
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
        if (*reinterpret_cast<int32_t*>(rbp4 - 28) >= *reinterpret_cast<int32_t*>(rbp5 - 8)) 
            break;
        __asm__("cdq ");
        if (reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp6 - 28) % 20 == fprintf)) {
            rax7 = g49b;
            rdi8 = *rax7;
            rsi9 = reinterpret_cast<int32_t*>(0x4a5);
            fun_4ac(rdi8);
        }
        rax10 = g4b3;
        rdi11 = *rax10;
        rcx12 = *reinterpret_cast<int32_t*>(rbp13 - 28);
        *rdi11 = *rsi9;
        rsi9 = reinterpret_cast<int32_t*>(0x4ca);
        fun_4d1(rdi11 + 1);
    }
    rax14 = g4e6;
    rdi15 = *rax14;
    fun_4fe(rdi15, 0x4f0, 0x4f7, rcx12);
    rax16 = g505;
    rdi17 = *rax16;
    fun_516(rdi17, 0x50f, 0x4f7, rcx12);
    goto v18;
}

void fun_39e(int64_t rdi, int64_t rsi) {
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

    rax3 = g3a5;
    rdi4 = *rax3;
    rsi5 = reinterpret_cast<int32_t*>(0x3af);
    fun_3bd(rdi4);
    *reinterpret_cast<int32_t*>(rbp6 - 28) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp7 - 28) < *reinterpret_cast<int32_t*>(rbp8 - 4)) {
        __asm__("cdq ");
        if (reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp9 - 28) % 20 == fprintf)) {
            rax10 = g3eb;
            rdi11 = *rax10;
            rsi5 = reinterpret_cast<int32_t*>(0x3f5);
            fun_3fc(rdi11);
        }
        rax12 = g403;
        rdi13 = *rax12;
        rcx14 = *reinterpret_cast<int32_t*>(rbp15 - 28);
        *rdi13 = *rsi5;
        rsi5 = reinterpret_cast<int32_t*>(0x41a);
        fun_421(rdi13 + 1);
        *reinterpret_cast<int32_t*>(rbp16 - 28) = *reinterpret_cast<int32_t*>(rbp17 - 28) + 1;
    }
    rax18 = g436;
    rdi19 = *rax18;
    fun_44e(rdi19, 0x440, 0x447, rcx14);
    rax20 = g455;
    rdi21 = *rax20;
    rsi22 = reinterpret_cast<int32_t*>(0x45f);
    fun_46d(rdi21);
    *reinterpret_cast<int32_t*>(rbp23 - 28) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp24 - 28) < *reinterpret_cast<int32_t*>(rbp25 - 8)) {
        __asm__("cdq ");
        if (reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp26 - 28) % 20 == fprintf)) {
            rax27 = g49b;
            rdi28 = *rax27;
            rsi22 = reinterpret_cast<int32_t*>(0x4a5);
            fun_4ac(rdi28);
        }
        rax29 = g4b3;
        rdi30 = *rax29;
        rcx14 = *reinterpret_cast<int32_t*>(rbp31 - 28);
        *rdi30 = *rsi22;
        rsi22 = reinterpret_cast<int32_t*>(0x4ca);
        fun_4d1(rdi30 + 1);
        *reinterpret_cast<int32_t*>(rbp32 - 28) = *reinterpret_cast<int32_t*>(rbp33 - 28) + 1;
    }
    rax34 = g4e6;
    rdi35 = *rax34;
    fun_4fe(rdi35, 0x4f0, 0x4f7, rcx14);
    rax36 = g505;
    rdi37 = *rax36;
    fun_516(rdi37, 0x50f, 0x4f7, rcx14);
    goto v38;
}

void fun_241(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7) {
    int64_t rdi8;
    int64_t rbp9;
    int64_t rdi10;
    int64_t rbp11;
    int64_t rdi12;
    int64_t rbp13;
    int64_t v14;

    rdi8 = *reinterpret_cast<int64_t*>(rbp9 - 48);
    fun_24a(rdi8, rsi, rdx, rcx, r8, r9, __return_address());
    rdi10 = *reinterpret_cast<int64_t*>(rbp11 - 56);
    fun_253(rdi10, rsi, rdx, rcx, r8, r9, __return_address());
    rdi12 = *reinterpret_cast<int64_t*>(rbp13 - 64);
    fun_25c(rdi12, rsi, rdx, rcx, r8, r9, __return_address());
    goto v14;
}

void fun_3bd(int64_t rdi) {
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
            rax6 = g3eb;
            rdi7 = *rax6;
            rsi8 = reinterpret_cast<int32_t*>(0x3f5);
            fun_3fc(rdi7);
        }
        rax9 = g403;
        rdi10 = *rax9;
        rcx11 = *reinterpret_cast<int32_t*>(rbp12 - 28);
        *rdi10 = *rsi8;
        rsi8 = reinterpret_cast<int32_t*>(0x41a);
        fun_421(rdi10 + 1);
        *reinterpret_cast<int32_t*>(rbp13 - 28) = *reinterpret_cast<int32_t*>(rbp14 - 28) + 1;
    }
    rax15 = g436;
    rdi16 = *rax15;
    fun_44e(rdi16, 0x440, 0x447, rcx11);
    rax17 = g455;
    rdi18 = *rax17;
    rsi19 = reinterpret_cast<int32_t*>(0x45f);
    fun_46d(rdi18);
    *reinterpret_cast<int32_t*>(rbp20 - 28) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp21 - 28) < *reinterpret_cast<int32_t*>(rbp22 - 8)) {
        __asm__("cdq ");
        if (reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp23 - 28) % 20 == fprintf)) {
            rax24 = g49b;
            rdi25 = *rax24;
            rsi19 = reinterpret_cast<int32_t*>(0x4a5);
            fun_4ac(rdi25);
        }
        rax26 = g4b3;
        rdi27 = *rax26;
        rcx11 = *reinterpret_cast<int32_t*>(rbp28 - 28);
        *rdi27 = *rsi19;
        rsi19 = reinterpret_cast<int32_t*>(0x4ca);
        fun_4d1(rdi27 + 1);
        *reinterpret_cast<int32_t*>(rbp29 - 28) = *reinterpret_cast<int32_t*>(rbp30 - 28) + 1;
    }
    rax31 = g4e6;
    rdi32 = *rax31;
    fun_4fe(rdi32, 0x4f0, 0x4f7, rcx11);
    rax33 = g505;
    rdi34 = *rax33;
    fun_516(rdi34, 0x50f, 0x4f7, rcx11);
    goto v35;
}

void fun_24a(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7) {
    int64_t rdi8;
    int64_t rbp9;
    int64_t rdi10;
    int64_t rbp11;
    int64_t v12;

    rdi8 = *reinterpret_cast<int64_t*>(rbp9 - 56);
    fun_253(rdi8, rsi, rdx, rcx, r8, r9, __return_address());
    rdi10 = *reinterpret_cast<int64_t*>(rbp11 - 64);
    fun_25c(rdi10, rsi, rdx, rcx, r8, r9, __return_address());
    goto v12;
}

void fun_44e(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
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

    rax5 = g455;
    rdi6 = *rax5;
    rsi7 = reinterpret_cast<int32_t*>(0x45f);
    fun_46d(rdi6);
    *reinterpret_cast<int32_t*>(rbp8 - 28) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp9 - 28) < *reinterpret_cast<int32_t*>(rbp10 - 8)) {
        __asm__("cdq ");
        if (reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp11 - 28) % 20 == fprintf)) {
            rax12 = g49b;
            rdi13 = *rax12;
            rsi7 = reinterpret_cast<int32_t*>(0x4a5);
            fun_4ac(rdi13);
        }
        rax14 = g4b3;
        rdi15 = *rax14;
        rcx = *reinterpret_cast<int32_t*>(rbp16 - 28);
        *rdi15 = *rsi7;
        rsi7 = reinterpret_cast<int32_t*>(0x4ca);
        fun_4d1(rdi15 + 1);
        *reinterpret_cast<int32_t*>(rbp17 - 28) = *reinterpret_cast<int32_t*>(rbp18 - 28) + 1;
    }
    rax19 = g4e6;
    rdi20 = *rax19;
    fun_4fe(rdi20, 0x4f0, 0x4f7, rcx);
    rax21 = g505;
    rdi22 = *rax21;
    fun_516(rdi22, 0x50f, 0x4f7, rcx);
    goto v23;
}

void fun_4fe(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t* rax5;
    int64_t rdi6;
    int64_t v7;

    rax5 = g505;
    rdi6 = *rax5;
    fun_516(rdi6, 0x50f, rdx, rcx);
    goto v7;
}

void fun_253(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7) {
    int64_t rdi8;
    int64_t rbp9;
    int64_t v10;

    rdi8 = *reinterpret_cast<int64_t*>(rbp9 - 64);
    fun_25c(rdi8, rsi, rdx, rcx, r8, r9, __return_address());
    goto v10;
}

void fun_46d(int64_t rdi) {
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
    while (*reinterpret_cast<int32_t*>(rbp3 - 28) < *reinterpret_cast<int32_t*>(rbp4 - 8)) {
        __asm__("cdq ");
        if (reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp5 - 28) % 20 == fprintf)) {
            rax6 = g49b;
            rdi7 = *rax6;
            rsi8 = reinterpret_cast<int32_t*>(0x4a5);
            fun_4ac(rdi7);
        }
        rax9 = g4b3;
        rdi10 = *rax9;
        rcx11 = *reinterpret_cast<int32_t*>(rbp12 - 28);
        *rdi10 = *rsi8;
        rsi8 = reinterpret_cast<int32_t*>(0x4ca);
        fun_4d1(rdi10 + 1);
        *reinterpret_cast<int32_t*>(rbp13 - 28) = *reinterpret_cast<int32_t*>(rbp14 - 28) + 1;
    }
    rax15 = g4e6;
    rdi16 = *rax15;
    fun_4fe(rdi16, 0x4f0, 0x4f7, rcx11);
    rax17 = g505;
    rdi18 = *rax17;
    fun_516(rdi18, 0x50f, 0x4f7, rcx11);
    goto v19;
}

void fun_516(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t v5;

    goto v5;
}

int64_t fun_17f(int64_t rdi, int64_t rsi);

int64_t fun_192(int64_t rdi, int64_t rsi);

int64_t fun_1a5(int64_t rdi, int64_t rsi);

int64_t fun_1b8(int64_t rdi, int64_t rsi);

void init_array(int32_t edi, int32_t esi, int64_t rdx, int64_t rcx, int64_t r8);

void fun_1f6(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7);

void fun_16c(int64_t rdi, int64_t rsi) {
    int64_t rbp3;
    int64_t rax4;
    int64_t rax5;
    int64_t rbp6;
    int64_t rax7;
    int64_t rbp8;
    int64_t rax9;
    int64_t rbp10;
    int64_t rax11;
    int64_t rbp12;
    int32_t edi13;
    int64_t rbp14;
    int32_t esi15;
    int64_t rbp16;
    int64_t rdx17;
    int64_t rbp18;
    int64_t rcx19;
    int64_t rbp20;
    int64_t r8_21;
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
    int64_t rdi49;
    int64_t rbp50;
    int64_t v51;
    int32_t edi52;
    int64_t rbp53;
    int64_t rbp54;
    int64_t rbp55;
    int64_t rbp56;

    *reinterpret_cast<int64_t*>(rbp3 - 32) = rax4;
    rax5 = fun_17f(0x76c, 8);
    *reinterpret_cast<int64_t*>(rbp6 - 40) = rax5;
    rax7 = fun_192(0x834, 8);
    *reinterpret_cast<int64_t*>(rbp8 - 48) = rax7;
    rax9 = fun_1a5(0x76c, 8);
    *reinterpret_cast<int64_t*>(rbp10 - 56) = rax9;
    rax11 = fun_1b8(0x834, 8);
    *reinterpret_cast<int64_t*>(rbp12 - 64) = rax11;
    edi13 = *reinterpret_cast<int32_t*>(rbp14 - 24);
    esi15 = *reinterpret_cast<int32_t*>(rbp16 - 20);
    rdx17 = *reinterpret_cast<int64_t*>(rbp18 - 32);
    rcx19 = *reinterpret_cast<int64_t*>(rbp20 - 64);
    r8_21 = *reinterpret_cast<int64_t*>(rbp22 - 56);
    init_array(edi13, esi15, rdx17, rcx19, r8_21);
    *reinterpret_cast<int32_t*>(&rdi23) = *reinterpret_cast<int32_t*>(rbp24 - 24);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi23) + 4) = reinterpret_cast<int32_t>(fprintf);
    *reinterpret_cast<int32_t*>(&rsi25) = *reinterpret_cast<int32_t*>(rbp26 - 20);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi25) + 4) = reinterpret_cast<int32_t>(fprintf);
    rdx27 = *reinterpret_cast<int64_t*>(rbp28 - 32);
    rcx29 = *reinterpret_cast<int64_t*>(rbp30 - 40);
    r8_31 = *reinterpret_cast<int64_t*>(rbp32 - 48);
    r9_33 = *reinterpret_cast<int64_t*>(rbp34 - 56);
    v35 = *reinterpret_cast<int64_t*>(rbp36 - 64);
    fun_1f6(rdi23, rsi25, rdx27, rcx29, r8_31, r9_33, v35);
    if (*reinterpret_cast<int32_t*>(rbp37 - 4) <= 42) {
        addr_22f_7:
        rdi38 = *reinterpret_cast<int64_t*>(rbp39 - 32);
        fun_238(rdi38, rsi25, rdx27, rcx29, r8_31, r9_33, v35);
    } else {
        rdi40 = **reinterpret_cast<int64_t**>(rbp41 - 16);
        rsi25 = 0x20e;
        eax42 = fun_213(rdi40, 0x20e, rdx27, rcx29, r8_31, r9_33, v35);
        if (!reinterpret_cast<int1_t>(eax42 == fprintf)) 
            goto addr_22f_7; else 
            goto addr_21c_10;
    }
    rdi43 = *reinterpret_cast<int64_t*>(rbp44 - 40);
    fun_241(rdi43, rsi25, rdx27, rcx29, r8_31, r9_33, v35);
    rdi45 = *reinterpret_cast<int64_t*>(rbp46 - 48);
    fun_24a(rdi45, rsi25, rdx27, rcx29, r8_31, r9_33, v35);
    rdi47 = *reinterpret_cast<int64_t*>(rbp48 - 56);
    fun_253(rdi47, rsi25, rdx27, rcx29, r8_31, r9_33, v35);
    rdi49 = *reinterpret_cast<int64_t*>(rbp50 - 64);
    fun_25c(rdi49, rsi25, rdx27, rcx29, r8_31, r9_33, v35);
    goto v51;
    addr_21c_10:
    edi52 = *reinterpret_cast<int32_t*>(rbp53 - 24);
    *reinterpret_cast<int32_t*>(&rsi25) = *reinterpret_cast<int32_t*>(rbp54 - 20);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi25) + 4) = reinterpret_cast<int32_t>(fprintf);
    rdx27 = *reinterpret_cast<int64_t*>(rbp55 - 40);
    rcx29 = *reinterpret_cast<int64_t*>(rbp56 - 48);
    print_array(edi52, *reinterpret_cast<int32_t*>(&rsi25), rdx27, rcx29, r8_31, r9_33, v35);
    goto addr_22f_7;
}

void fun_25c(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7) {
    int64_t v8;

    goto v8;
}

int64_t fun_17f(int64_t rdi, int64_t rsi) {
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
    int64_t rdi47;
    int64_t rbp48;
    int64_t v49;
    int32_t edi50;
    int64_t rbp51;
    int64_t rbp52;
    int64_t rbp53;
    int64_t rbp54;

    *reinterpret_cast<int64_t*>(rbp3 - 40) = rax4;
    rax5 = fun_192(0x834, 8);
    *reinterpret_cast<int64_t*>(rbp6 - 48) = rax5;
    rax7 = fun_1a5(0x76c, 8);
    *reinterpret_cast<int64_t*>(rbp8 - 56) = rax7;
    rax9 = fun_1b8(0x834, 8);
    *reinterpret_cast<int64_t*>(rbp10 - 64) = rax9;
    edi11 = *reinterpret_cast<int32_t*>(rbp12 - 24);
    esi13 = *reinterpret_cast<int32_t*>(rbp14 - 20);
    rdx15 = *reinterpret_cast<int64_t*>(rbp16 - 32);
    rcx17 = *reinterpret_cast<int64_t*>(rbp18 - 64);
    r8_19 = *reinterpret_cast<int64_t*>(rbp20 - 56);
    init_array(edi11, esi13, rdx15, rcx17, r8_19);
    *reinterpret_cast<int32_t*>(&rdi21) = *reinterpret_cast<int32_t*>(rbp22 - 24);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi21) + 4) = reinterpret_cast<int32_t>(fprintf);
    *reinterpret_cast<int32_t*>(&rsi23) = *reinterpret_cast<int32_t*>(rbp24 - 20);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi23) + 4) = reinterpret_cast<int32_t>(fprintf);
    rdx25 = *reinterpret_cast<int64_t*>(rbp26 - 32);
    rcx27 = *reinterpret_cast<int64_t*>(rbp28 - 40);
    r8_29 = *reinterpret_cast<int64_t*>(rbp30 - 48);
    r9_31 = *reinterpret_cast<int64_t*>(rbp32 - 56);
    v33 = *reinterpret_cast<int64_t*>(rbp34 - 64);
    fun_1f6(rdi21, rsi23, rdx25, rcx27, r8_29, r9_31, v33);
    if (*reinterpret_cast<int32_t*>(rbp35 - 4) <= 42) {
        addr_22f_6:
        rdi36 = *reinterpret_cast<int64_t*>(rbp37 - 32);
        fun_238(rdi36, rsi23, rdx25, rcx27, r8_29, r9_31, v33);
    } else {
        rdi38 = **reinterpret_cast<int64_t**>(rbp39 - 16);
        rsi23 = 0x20e;
        eax40 = fun_213(rdi38, 0x20e, rdx25, rcx27, r8_29, r9_31, v33);
        if (!reinterpret_cast<int1_t>(eax40 == fprintf)) 
            goto addr_22f_6; else 
            goto addr_21c_9;
    }
    rdi41 = *reinterpret_cast<int64_t*>(rbp42 - 40);
    fun_241(rdi41, rsi23, rdx25, rcx27, r8_29, r9_31, v33);
    rdi43 = *reinterpret_cast<int64_t*>(rbp44 - 48);
    fun_24a(rdi43, rsi23, rdx25, rcx27, r8_29, r9_31, v33);
    rdi45 = *reinterpret_cast<int64_t*>(rbp46 - 56);
    fun_253(rdi45, rsi23, rdx25, rcx27, r8_29, r9_31, v33);
    rdi47 = *reinterpret_cast<int64_t*>(rbp48 - 64);
    fun_25c(rdi47, rsi23, rdx25, rcx27, r8_29, r9_31, v33);
    goto v49;
    addr_21c_9:
    edi50 = *reinterpret_cast<int32_t*>(rbp51 - 24);
    *reinterpret_cast<int32_t*>(&rsi23) = *reinterpret_cast<int32_t*>(rbp52 - 20);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi23) + 4) = reinterpret_cast<int32_t>(fprintf);
    rdx25 = *reinterpret_cast<int64_t*>(rbp53 - 40);
    rcx27 = *reinterpret_cast<int64_t*>(rbp54 - 48);
    print_array(edi50, *reinterpret_cast<int32_t*>(&rsi23), rdx25, rcx27, r8_29, r9_31, v33);
    goto addr_22f_6;
}

int64_t fun_192(int64_t rdi, int64_t rsi) {
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
    int64_t rdi45;
    int64_t rbp46;
    int64_t v47;
    int32_t edi48;
    int64_t rbp49;
    int64_t rbp50;
    int64_t rbp51;
    int64_t rbp52;

    *reinterpret_cast<int64_t*>(rbp3 - 48) = rax4;
    rax5 = fun_1a5(0x76c, 8);
    *reinterpret_cast<int64_t*>(rbp6 - 56) = rax5;
    rax7 = fun_1b8(0x834, 8);
    *reinterpret_cast<int64_t*>(rbp8 - 64) = rax7;
    edi9 = *reinterpret_cast<int32_t*>(rbp10 - 24);
    esi11 = *reinterpret_cast<int32_t*>(rbp12 - 20);
    rdx13 = *reinterpret_cast<int64_t*>(rbp14 - 32);
    rcx15 = *reinterpret_cast<int64_t*>(rbp16 - 64);
    r8_17 = *reinterpret_cast<int64_t*>(rbp18 - 56);
    init_array(edi9, esi11, rdx13, rcx15, r8_17);
    *reinterpret_cast<int32_t*>(&rdi19) = *reinterpret_cast<int32_t*>(rbp20 - 24);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi19) + 4) = reinterpret_cast<int32_t>(fprintf);
    *reinterpret_cast<int32_t*>(&rsi21) = *reinterpret_cast<int32_t*>(rbp22 - 20);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi21) + 4) = reinterpret_cast<int32_t>(fprintf);
    rdx23 = *reinterpret_cast<int64_t*>(rbp24 - 32);
    rcx25 = *reinterpret_cast<int64_t*>(rbp26 - 40);
    r8_27 = *reinterpret_cast<int64_t*>(rbp28 - 48);
    r9_29 = *reinterpret_cast<int64_t*>(rbp30 - 56);
    v31 = *reinterpret_cast<int64_t*>(rbp32 - 64);
    fun_1f6(rdi19, rsi21, rdx23, rcx25, r8_27, r9_29, v31);
    if (*reinterpret_cast<int32_t*>(rbp33 - 4) <= 42) {
        addr_22f_5:
        rdi34 = *reinterpret_cast<int64_t*>(rbp35 - 32);
        fun_238(rdi34, rsi21, rdx23, rcx25, r8_27, r9_29, v31);
    } else {
        rdi36 = **reinterpret_cast<int64_t**>(rbp37 - 16);
        rsi21 = 0x20e;
        eax38 = fun_213(rdi36, 0x20e, rdx23, rcx25, r8_27, r9_29, v31);
        if (!reinterpret_cast<int1_t>(eax38 == fprintf)) 
            goto addr_22f_5; else 
            goto addr_21c_8;
    }
    rdi39 = *reinterpret_cast<int64_t*>(rbp40 - 40);
    fun_241(rdi39, rsi21, rdx23, rcx25, r8_27, r9_29, v31);
    rdi41 = *reinterpret_cast<int64_t*>(rbp42 - 48);
    fun_24a(rdi41, rsi21, rdx23, rcx25, r8_27, r9_29, v31);
    rdi43 = *reinterpret_cast<int64_t*>(rbp44 - 56);
    fun_253(rdi43, rsi21, rdx23, rcx25, r8_27, r9_29, v31);
    rdi45 = *reinterpret_cast<int64_t*>(rbp46 - 64);
    fun_25c(rdi45, rsi21, rdx23, rcx25, r8_27, r9_29, v31);
    goto v47;
    addr_21c_8:
    edi48 = *reinterpret_cast<int32_t*>(rbp49 - 24);
    *reinterpret_cast<int32_t*>(&rsi21) = *reinterpret_cast<int32_t*>(rbp50 - 20);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi21) + 4) = reinterpret_cast<int32_t>(fprintf);
    rdx23 = *reinterpret_cast<int64_t*>(rbp51 - 40);
    rcx25 = *reinterpret_cast<int64_t*>(rbp52 - 48);
    print_array(edi48, *reinterpret_cast<int32_t*>(&rsi21), rdx23, rcx25, r8_27, r9_29, v31);
    goto addr_22f_5;
}

int64_t fun_1a5(int64_t rdi, int64_t rsi) {
    int64_t rbp3;
    int64_t rax4;
    int64_t rax5;
    int64_t rbp6;
    int32_t edi7;
    int64_t rbp8;
    int32_t esi9;
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
    int64_t r9_27;
    int64_t rbp28;
    int64_t v29;
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
    int64_t rdi43;
    int64_t rbp44;
    int64_t v45;
    int32_t edi46;
    int64_t rbp47;
    int64_t rbp48;
    int64_t rbp49;
    int64_t rbp50;

    *reinterpret_cast<int64_t*>(rbp3 - 56) = rax4;
    rax5 = fun_1b8(0x834, 8);
    *reinterpret_cast<int64_t*>(rbp6 - 64) = rax5;
    edi7 = *reinterpret_cast<int32_t*>(rbp8 - 24);
    esi9 = *reinterpret_cast<int32_t*>(rbp10 - 20);
    rdx11 = *reinterpret_cast<int64_t*>(rbp12 - 32);
    rcx13 = *reinterpret_cast<int64_t*>(rbp14 - 64);
    r8_15 = *reinterpret_cast<int64_t*>(rbp16 - 56);
    init_array(edi7, esi9, rdx11, rcx13, r8_15);
    *reinterpret_cast<int32_t*>(&rdi17) = *reinterpret_cast<int32_t*>(rbp18 - 24);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi17) + 4) = reinterpret_cast<int32_t>(fprintf);
    *reinterpret_cast<int32_t*>(&rsi19) = *reinterpret_cast<int32_t*>(rbp20 - 20);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi19) + 4) = reinterpret_cast<int32_t>(fprintf);
    rdx21 = *reinterpret_cast<int64_t*>(rbp22 - 32);
    rcx23 = *reinterpret_cast<int64_t*>(rbp24 - 40);
    r8_25 = *reinterpret_cast<int64_t*>(rbp26 - 48);
    r9_27 = *reinterpret_cast<int64_t*>(rbp28 - 56);
    v29 = *reinterpret_cast<int64_t*>(rbp30 - 64);
    fun_1f6(rdi17, rsi19, rdx21, rcx23, r8_25, r9_27, v29);
    if (*reinterpret_cast<int32_t*>(rbp31 - 4) <= 42) {
        addr_22f_4:
        rdi32 = *reinterpret_cast<int64_t*>(rbp33 - 32);
        fun_238(rdi32, rsi19, rdx21, rcx23, r8_25, r9_27, v29);
    } else {
        rdi34 = **reinterpret_cast<int64_t**>(rbp35 - 16);
        rsi19 = 0x20e;
        eax36 = fun_213(rdi34, 0x20e, rdx21, rcx23, r8_25, r9_27, v29);
        if (!reinterpret_cast<int1_t>(eax36 == fprintf)) 
            goto addr_22f_4; else 
            goto addr_21c_7;
    }
    rdi37 = *reinterpret_cast<int64_t*>(rbp38 - 40);
    fun_241(rdi37, rsi19, rdx21, rcx23, r8_25, r9_27, v29);
    rdi39 = *reinterpret_cast<int64_t*>(rbp40 - 48);
    fun_24a(rdi39, rsi19, rdx21, rcx23, r8_25, r9_27, v29);
    rdi41 = *reinterpret_cast<int64_t*>(rbp42 - 56);
    fun_253(rdi41, rsi19, rdx21, rcx23, r8_25, r9_27, v29);
    rdi43 = *reinterpret_cast<int64_t*>(rbp44 - 64);
    fun_25c(rdi43, rsi19, rdx21, rcx23, r8_25, r9_27, v29);
    goto v45;
    addr_21c_7:
    edi46 = *reinterpret_cast<int32_t*>(rbp47 - 24);
    *reinterpret_cast<int32_t*>(&rsi19) = *reinterpret_cast<int32_t*>(rbp48 - 20);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi19) + 4) = reinterpret_cast<int32_t>(fprintf);
    rdx21 = *reinterpret_cast<int64_t*>(rbp49 - 40);
    rcx23 = *reinterpret_cast<int64_t*>(rbp50 - 48);
    print_array(edi46, *reinterpret_cast<int32_t*>(&rsi19), rdx21, rcx23, r8_25, r9_27, v29);
    goto addr_22f_4;
}

int64_t fun_1b8(int64_t rdi, int64_t rsi) {
    int64_t rbp3;
    int64_t rax4;
    int32_t edi5;
    int64_t rbp6;
    int32_t esi7;
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
    int64_t r9_25;
    int64_t rbp26;
    int64_t v27;
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
    int64_t rdi41;
    int64_t rbp42;
    int64_t v43;
    int32_t edi44;
    int64_t rbp45;
    int64_t rbp46;
    int64_t rbp47;
    int64_t rbp48;

    *reinterpret_cast<int64_t*>(rbp3 - 64) = rax4;
    edi5 = *reinterpret_cast<int32_t*>(rbp6 - 24);
    esi7 = *reinterpret_cast<int32_t*>(rbp8 - 20);
    rdx9 = *reinterpret_cast<int64_t*>(rbp10 - 32);
    rcx11 = *reinterpret_cast<int64_t*>(rbp12 - 64);
    r8_13 = *reinterpret_cast<int64_t*>(rbp14 - 56);
    init_array(edi5, esi7, rdx9, rcx11, r8_13);
    *reinterpret_cast<int32_t*>(&rdi15) = *reinterpret_cast<int32_t*>(rbp16 - 24);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi15) + 4) = reinterpret_cast<int32_t>(fprintf);
    *reinterpret_cast<int32_t*>(&rsi17) = *reinterpret_cast<int32_t*>(rbp18 - 20);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi17) + 4) = reinterpret_cast<int32_t>(fprintf);
    rdx19 = *reinterpret_cast<int64_t*>(rbp20 - 32);
    rcx21 = *reinterpret_cast<int64_t*>(rbp22 - 40);
    r8_23 = *reinterpret_cast<int64_t*>(rbp24 - 48);
    r9_25 = *reinterpret_cast<int64_t*>(rbp26 - 56);
    v27 = *reinterpret_cast<int64_t*>(rbp28 - 64);
    fun_1f6(rdi15, rsi17, rdx19, rcx21, r8_23, r9_25, v27);
    if (*reinterpret_cast<int32_t*>(rbp29 - 4) <= 42) {
        addr_22f_3:
        rdi30 = *reinterpret_cast<int64_t*>(rbp31 - 32);
        fun_238(rdi30, rsi17, rdx19, rcx21, r8_23, r9_25, v27);
    } else {
        rdi32 = **reinterpret_cast<int64_t**>(rbp33 - 16);
        rsi17 = 0x20e;
        eax34 = fun_213(rdi32, 0x20e, rdx19, rcx21, r8_23, r9_25, v27);
        if (!reinterpret_cast<int1_t>(eax34 == fprintf)) 
            goto addr_22f_3; else 
            goto addr_21c_6;
    }
    rdi35 = *reinterpret_cast<int64_t*>(rbp36 - 40);
    fun_241(rdi35, rsi17, rdx19, rcx21, r8_23, r9_25, v27);
    rdi37 = *reinterpret_cast<int64_t*>(rbp38 - 48);
    fun_24a(rdi37, rsi17, rdx19, rcx21, r8_23, r9_25, v27);
    rdi39 = *reinterpret_cast<int64_t*>(rbp40 - 56);
    fun_253(rdi39, rsi17, rdx19, rcx21, r8_23, r9_25, v27);
    rdi41 = *reinterpret_cast<int64_t*>(rbp42 - 64);
    fun_25c(rdi41, rsi17, rdx19, rcx21, r8_23, r9_25, v27);
    goto v43;
    addr_21c_6:
    edi44 = *reinterpret_cast<int32_t*>(rbp45 - 24);
    *reinterpret_cast<int32_t*>(&rsi17) = *reinterpret_cast<int32_t*>(rbp46 - 20);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi17) + 4) = reinterpret_cast<int32_t>(fprintf);
    rdx19 = *reinterpret_cast<int64_t*>(rbp47 - 40);
    rcx21 = *reinterpret_cast<int64_t*>(rbp48 - 48);
    print_array(edi44, *reinterpret_cast<int32_t*>(&rsi17), rdx19, rcx21, r8_23, r9_25, v27);
    goto addr_22f_3;
}

void init_array(int32_t edi, int32_t esi, int64_t rdx, int64_t rcx, int64_t r8) {
    int32_t* rdi1;
    int32_t* rsi2;
    int32_t v6;
    int32_t v7;
    int32_t v8;
    int32_t v9;
    int32_t v10;

    *reinterpret_cast<int32_t*>(&rdi1) = edi;
    *reinterpret_cast<int32_t*>(&rsi2) = esi;
    v6 = *reinterpret_cast<int32_t*>(&rdi1);
    v7 = *reinterpret_cast<int32_t*>(&rsi2);
    v8 = reinterpret_cast<int32_t>(fprintf);
    while (v8 < v6) {
        __asm__("cdq ");
        __asm__("cvtsi2sd xmm0, edx");
        __asm__("cvtsi2sd xmm1, dword [rbp-0x4]");
        __asm__("divsd xmm0, xmm1");
        *rdi1 = *rsi2;
        ++rdi1;
        ++rsi2;
        ++v8;
    }
    v9 = reinterpret_cast<int32_t>(fprintf);
    while (v9 < v7) {
        __asm__("cdq ");
        __asm__("cvtsi2sd xmm0, edx");
        __asm__("cvtsi2sd xmm1, dword [rbp-0x8]");
        __asm__("divsd xmm0, xmm1");
        *rdi1 = *rsi2;
        ++rdi1;
        ++rsi2;
        v10 = reinterpret_cast<int32_t>(fprintf);
        while (v10 < v6) {
            __asm__("cdq ");
            __asm__("cvtsi2sd xmm0, edx");
            __asm__("cvtsi2sd xmm1, dword [rbp-0x8]");
            __asm__("divsd xmm0, xmm1");
            *rdi1 = *rsi2;
            ++rdi1;
            ++rsi2;
            ++v10;
        }
        ++v9;
    }
    return;
}

void fun_1f6(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7) {
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
    int64_t rdi20;
    int64_t rbp21;
    int64_t v22;
    int32_t edi23;
    int64_t rbp24;
    int64_t rbp25;
    int64_t rbp26;
    int64_t rbp27;

    if (*reinterpret_cast<int32_t*>(rbp8 - 4) <= 42) {
        addr_22f_2:
        rdi9 = *reinterpret_cast<int64_t*>(rbp10 - 32);
        fun_238(rdi9, rsi, rdx, rcx, r8, r9, __return_address());
    } else {
        rdi11 = **reinterpret_cast<int64_t**>(rbp12 - 16);
        rsi = 0x20e;
        eax13 = fun_213(rdi11, 0x20e, rdx, rcx, r8, r9, __return_address());
        if (!reinterpret_cast<int1_t>(eax13 == fprintf)) 
            goto addr_22f_2; else 
            goto addr_21c_5;
    }
    rdi14 = *reinterpret_cast<int64_t*>(rbp15 - 40);
    fun_241(rdi14, rsi, rdx, rcx, r8, r9, __return_address());
    rdi16 = *reinterpret_cast<int64_t*>(rbp17 - 48);
    fun_24a(rdi16, rsi, rdx, rcx, r8, r9, __return_address());
    rdi18 = *reinterpret_cast<int64_t*>(rbp19 - 56);
    fun_253(rdi18, rsi, rdx, rcx, r8, r9, __return_address());
    rdi20 = *reinterpret_cast<int64_t*>(rbp21 - 64);
    fun_25c(rdi20, rsi, rdx, rcx, r8, r9, __return_address());
    goto v22;
    addr_21c_5:
    edi23 = *reinterpret_cast<int32_t*>(rbp24 - 24);
    *reinterpret_cast<int32_t*>(&rsi) = *reinterpret_cast<int32_t*>(rbp25 - 20);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi) + 4) = reinterpret_cast<int32_t>(fprintf);
    rdx = *reinterpret_cast<int64_t*>(rbp26 - 40);
    rcx = *reinterpret_cast<int64_t*>(rbp27 - 48);
    print_array(edi23, *reinterpret_cast<int32_t*>(&rsi), rdx, rcx, r8, r9, __return_address());
    goto addr_22f_2;
}

void fprintf() {
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

void fun_70() {
    int64_t rbp1;
    int64_t rbp2;
    int64_t rbp3;
    struct s0* rdi4;
    struct s1* rsi5;
    struct s2* rdi6;
    struct s3* rsi7;
    struct s4* rdi8;
    struct s5* rsi9;
    struct s6* rdi10;
    struct s7* rsi11;
    struct s8* rdi12;
    struct s9* rsi13;
    struct s10* rdi14;
    struct s11* rsi15;
    struct s12* rdi16;
    struct s13* rsi17;
    struct s14* rdi18;
    struct s15* rsi19;
    int64_t rbp20;
    int64_t rbp21;
    int64_t rbp22;
    int64_t rbp23;

    *reinterpret_cast<int32_t*>(rbp1 - 48) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp2 - 48) < *reinterpret_cast<int32_t*>(rbp3 - 4)) {
        rdi4->f0 = rsi5->f0;
        rdi6 = reinterpret_cast<struct s2*>(&rdi4->f4);
        rsi7 = reinterpret_cast<struct s3*>(&rsi5->f4);
        rdi6->f0 = rsi7->f0;
        rdi8 = reinterpret_cast<struct s4*>(&rdi6->f4);
        rsi9 = reinterpret_cast<struct s5*>(&rsi7->f4);
        rdi8->f0 = rsi9->f0;
        rdi10 = reinterpret_cast<struct s6*>(&rdi8->f4);
        rsi11 = reinterpret_cast<struct s7*>(&rsi9->f4);
        __asm__("mulsd xmm0, xmm2");
        __asm__("addsd xmm0, xmm1");
        rdi10->f0 = rsi11->f0;
        rdi12 = reinterpret_cast<struct s8*>(&rdi10->f4);
        rsi13 = reinterpret_cast<struct s9*>(&rsi11->f4);
        rdi12->f0 = rsi13->f0;
        rdi14 = reinterpret_cast<struct s10*>(&rdi12->f4);
        rsi15 = reinterpret_cast<struct s11*>(&rsi13->f4);
        rdi14->f0 = rsi15->f0;
        rdi16 = reinterpret_cast<struct s12*>(&rdi14->f4);
        rsi17 = reinterpret_cast<struct s13*>(&rsi15->f4);
        rdi16->f0 = rsi17->f0;
        rdi18 = reinterpret_cast<struct s14*>(&rdi16->f4);
        rsi19 = reinterpret_cast<struct s15*>(&rsi17->f4);
        __asm__("mulsd xmm0, xmm2");
        __asm__("addsd xmm0, xmm1");
        rdi18->f0 = rsi19->f0;
        rdi4 = reinterpret_cast<struct s0*>(&rdi18->f4);
        rsi5 = reinterpret_cast<struct s1*>(&rsi19->f4);
        *reinterpret_cast<int32_t*>(rbp20 - 48) = *reinterpret_cast<int32_t*>(rbp21 - 48) + 1;
    }
    *reinterpret_cast<int32_t*>(rbp22 - 44) = *reinterpret_cast<int32_t*>(rbp23 - 44) + 1;
}

void fun_13a() {
    int64_t v1;

    goto v1;
}

void submain(int32_t edi, int64_t rsi) {
    fun_16c(0x3ce1f0, 8);
}

