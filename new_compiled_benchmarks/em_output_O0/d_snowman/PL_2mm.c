
int32_t** g2f9 = reinterpret_cast<int32_t**>(0x48f0458b48388b48);

void fun_325(int64_t rdi);

void free();

int64_t* g2e1 = reinterpret_cast<int64_t*>(0x358d48388b48);

int64_t* g34d = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_365(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx);

int64_t* g36c = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_37d(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx);

void fun_2f2(int64_t rdi) {
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
        rax2 = g2f9;
        rdi3 = *rax2;
        rcx4 = *reinterpret_cast<int32_t*>(rbp5 - 24);
        *rdi3 = *rsi6;
        rsi6 = reinterpret_cast<int32_t*>(0x31e);
        fun_325(rdi3 + 1);
        *reinterpret_cast<int32_t*>(rbp7 - 24) = *reinterpret_cast<int32_t*>(rbp8 - 24) + 1;
        while (*reinterpret_cast<int32_t*>(rbp9 - 24) >= *reinterpret_cast<int32_t*>(rbp10 - 8)) {
            *reinterpret_cast<int32_t*>(rbp11 - 20) = *reinterpret_cast<int32_t*>(rbp12 - 20) + 1;
            if (*reinterpret_cast<int32_t*>(rbp13 - 20) >= *reinterpret_cast<int32_t*>(rbp14 - 4)) 
                goto addr_346_10;
            *reinterpret_cast<int32_t*>(rbp15 - 24) = reinterpret_cast<int32_t>(free);
        }
        __asm__("cdq ");
        if (!reinterpret_cast<int1_t>((*reinterpret_cast<int32_t*>(rbp16 - 20) * *reinterpret_cast<int32_t*>(rbp17 - 4) + *reinterpret_cast<int32_t*>(rbp18 - 24)) % 20 == free)) 
            continue;
        rax19 = g2e1;
        rdi20 = *rax19;
        rsi6 = reinterpret_cast<int32_t*>(0x2eb);
        fun_2f2(rdi20);
    }
    addr_346_10:
    rax21 = g34d;
    rdi22 = *rax21;
    fun_365(rdi22, 0x357, 0x35e, rcx4);
    rax23 = g36c;
    rdi24 = *rax23;
    fun_37d(rdi24, 0x376, 0x35e, rcx4);
    goto v25;
}

void fun_325(int64_t rdi) {
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
        while (*reinterpret_cast<int32_t*>(rbp4 - 24) >= *reinterpret_cast<int32_t*>(rbp5 - 8)) {
            *reinterpret_cast<int32_t*>(rbp6 - 20) = *reinterpret_cast<int32_t*>(rbp7 - 20) + 1;
            if (*reinterpret_cast<int32_t*>(rbp8 - 20) >= *reinterpret_cast<int32_t*>(rbp9 - 4)) 
                goto addr_346_6;
            *reinterpret_cast<int32_t*>(rbp10 - 24) = reinterpret_cast<int32_t>(free);
        }
        __asm__("cdq ");
        if (reinterpret_cast<int1_t>((*reinterpret_cast<int32_t*>(rbp11 - 20) * *reinterpret_cast<int32_t*>(rbp12 - 4) + *reinterpret_cast<int32_t*>(rbp13 - 24)) % 20 == free)) {
            rax14 = g2e1;
            rdi15 = *rax14;
            rsi16 = reinterpret_cast<int32_t*>(0x2eb);
            fun_2f2(rdi15);
        }
        rax17 = g2f9;
        rdi18 = *rax17;
        rcx19 = *reinterpret_cast<int32_t*>(rbp20 - 24);
        *rdi18 = *rsi16;
        rsi16 = reinterpret_cast<int32_t*>(0x31e);
        fun_325(rdi18 + 1);
    }
    addr_346_6:
    rax21 = g34d;
    rdi22 = *rax21;
    fun_365(rdi22, 0x357, 0x35e, rcx19);
    rax23 = g36c;
    rdi24 = *rax23;
    fun_37d(rdi24, 0x376, 0x35e, rcx19);
    goto v25;
}

void fun_6e2(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10);

int32_t fun_6c1(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10);

void fun_6eb(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10);

void fun_6f4(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10);

void fun_6fd(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10);

void fun_706(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10);

void fun_6d9(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10);

void fun_6a4(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10) {
    int64_t rbp11;
    int64_t rdi12;
    int64_t rbp13;
    int64_t rdi14;
    int64_t rbp15;
    int32_t eax16;
    int64_t rdi17;
    int64_t rbp18;
    int64_t rdi19;
    int64_t rbp20;
    int64_t rdi21;
    int64_t rbp22;
    int64_t rdi23;
    int64_t rbp24;
    int64_t v25;
    int64_t rdi26;
    int64_t rbp27;
    int64_t rbp28;
    int64_t rbp29;

    if (*reinterpret_cast<int32_t*>(rbp11 - 12) <= 42) {
        addr_6d9_2:
        rdi12 = *reinterpret_cast<int64_t*>(rbp13 - 64);
        fun_6e2(rdi12, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9);
    } else {
        rdi14 = **reinterpret_cast<int64_t**>(rbp15 - 24);
        rsi = 0x6bc;
        eax16 = fun_6c1(rdi14, 0x6bc, rdx, rcx, r8, r9, __return_address(), a7, a8, a9);
        if (!reinterpret_cast<int1_t>(eax16 == free)) 
            goto addr_6d9_2; else 
            goto addr_6ca_5;
    }
    rdi17 = *reinterpret_cast<int64_t*>(rbp18 - 72);
    fun_6eb(rdi17, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9);
    rdi19 = *reinterpret_cast<int64_t*>(rbp20 - 80);
    fun_6f4(rdi19, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9);
    rdi21 = *reinterpret_cast<int64_t*>(rbp22 - 88);
    fun_6fd(rdi21, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9);
    rdi23 = *reinterpret_cast<int64_t*>(rbp24 - 96);
    fun_706(rdi23, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9);
    goto v25;
    addr_6ca_5:
    *reinterpret_cast<int32_t*>(&rdi26) = *reinterpret_cast<int32_t*>(rbp27 - 28);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi26) + 4) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(&rsi) = *reinterpret_cast<int32_t*>(rbp28 - 40);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi) + 4) = reinterpret_cast<int32_t>(free);
    rdx = *reinterpret_cast<int64_t*>(rbp29 - 96);
    fun_6d9(rdi26, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9);
    goto addr_6d9_2;
}

int32_t fun_6c1(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10) {
    int32_t eax11;
    int64_t rdi12;
    int64_t rbp13;
    int64_t rbp14;
    int64_t rbp15;
    int64_t rdi16;
    int64_t rbp17;
    int64_t rdi18;
    int64_t rbp19;
    int64_t rdi20;
    int64_t rbp21;
    int64_t rdi22;
    int64_t rbp23;
    int64_t rdi24;
    int64_t rbp25;
    int64_t v26;

    if (reinterpret_cast<int1_t>(eax11 == free)) {
        *reinterpret_cast<int32_t*>(&rdi12) = *reinterpret_cast<int32_t*>(rbp13 - 28);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi12) + 4) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(&rsi) = *reinterpret_cast<int32_t*>(rbp14 - 40);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi) + 4) = reinterpret_cast<int32_t>(free);
        rdx = *reinterpret_cast<int64_t*>(rbp15 - 96);
        fun_6d9(rdi12, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9);
    }
    rdi16 = *reinterpret_cast<int64_t*>(rbp17 - 64);
    fun_6e2(rdi16, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9);
    rdi18 = *reinterpret_cast<int64_t*>(rbp19 - 72);
    fun_6eb(rdi18, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9);
    rdi20 = *reinterpret_cast<int64_t*>(rbp21 - 80);
    fun_6f4(rdi20, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9);
    rdi22 = *reinterpret_cast<int64_t*>(rbp23 - 88);
    fun_6fd(rdi22, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9);
    rdi24 = *reinterpret_cast<int64_t*>(rbp25 - 96);
    fun_706(rdi24, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9);
    goto v26;
}

void fun_6d9(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10) {
    int64_t rdi11;
    int64_t rbp12;
    int64_t rdi13;
    int64_t rbp14;
    int64_t rdi15;
    int64_t rbp16;
    int64_t rdi17;
    int64_t rbp18;
    int64_t rdi19;
    int64_t rbp20;
    int64_t v21;

    rdi11 = *reinterpret_cast<int64_t*>(rbp12 - 64);
    fun_6e2(rdi11, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9);
    rdi13 = *reinterpret_cast<int64_t*>(rbp14 - 72);
    fun_6eb(rdi13, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9);
    rdi15 = *reinterpret_cast<int64_t*>(rbp16 - 80);
    fun_6f4(rdi15, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9);
    rdi17 = *reinterpret_cast<int64_t*>(rbp18 - 88);
    fun_6fd(rdi17, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9);
    rdi19 = *reinterpret_cast<int64_t*>(rbp20 - 96);
    fun_706(rdi19, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9);
    goto v21;
}

void fun_6e2(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10) {
    int64_t rdi11;
    int64_t rbp12;
    int64_t rdi13;
    int64_t rbp14;
    int64_t rdi15;
    int64_t rbp16;
    int64_t rdi17;
    int64_t rbp18;
    int64_t v19;

    rdi11 = *reinterpret_cast<int64_t*>(rbp12 - 72);
    fun_6eb(rdi11, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9);
    rdi13 = *reinterpret_cast<int64_t*>(rbp14 - 80);
    fun_6f4(rdi13, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9);
    rdi15 = *reinterpret_cast<int64_t*>(rbp16 - 88);
    fun_6fd(rdi15, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9);
    rdi17 = *reinterpret_cast<int64_t*>(rbp18 - 96);
    fun_706(rdi17, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9);
    goto v19;
}

void fun_6eb(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10) {
    int64_t rdi11;
    int64_t rbp12;
    int64_t rdi13;
    int64_t rbp14;
    int64_t rdi15;
    int64_t rbp16;
    int64_t v17;

    rdi11 = *reinterpret_cast<int64_t*>(rbp12 - 80);
    fun_6f4(rdi11, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9);
    rdi13 = *reinterpret_cast<int64_t*>(rbp14 - 88);
    fun_6fd(rdi13, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9);
    rdi15 = *reinterpret_cast<int64_t*>(rbp16 - 96);
    fun_706(rdi15, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9);
    goto v17;
}

void fun_365(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t* rax5;
    int64_t rdi6;
    int64_t v7;

    rax5 = g36c;
    rdi6 = *rax5;
    fun_37d(rdi6, 0x376, rdx, rcx);
    goto v7;
}

int64_t fun_5ee(int64_t rdi, int64_t rsi);

int64_t fun_601(int64_t rdi, int64_t rsi);

int64_t fun_614(int64_t rdi, int64_t rsi);

int64_t fun_627(int64_t rdi, int64_t rsi);

void fun_667(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10);

struct s0 {
    int32_t f0;
    int32_t f4;
};

struct s1 {
    int32_t f0;
    int32_t f4;
};

void fun_5db(int64_t rdi, int64_t rsi) {
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
    int64_t rdi13;
    int64_t rbp14;
    int64_t rsi15;
    int64_t rbp16;
    int64_t rdx17;
    int64_t rbp18;
    int64_t rcx19;
    int64_t rbp20;
    int64_t r11_21;
    int64_t rbp22;
    int64_t r10_23;
    int64_t rbp24;
    int64_t rax25;
    int64_t rbp26;
    int64_t v27;
    int64_t rbp28;
    int64_t rbp29;
    int64_t rbp30;
    struct s0* rdi31;
    int64_t rbp32;
    struct s1* rsi33;
    int64_t rbp34;
    int64_t rdx35;
    int64_t rbp36;
    int64_t rcx37;
    int64_t rbp38;
    int32_t* rdi39;
    int32_t* rsi40;
    int64_t rsi41;
    int64_t r8_42;
    int64_t rbp43;
    int64_t r9_44;
    int64_t rbp45;
    int64_t r10_46;
    int64_t rbp47;
    int64_t rax48;
    int64_t rbp49;
    int64_t v50;
    int64_t rbp51;
    int64_t rbp52;
    int64_t rdi53;
    int64_t rbp54;
    int64_t rdi55;
    int64_t rbp56;
    int32_t eax57;
    int64_t rdi58;
    int64_t rbp59;
    int64_t rdi60;
    int64_t rbp61;
    int64_t rdi62;
    int64_t rbp63;
    int64_t rdi64;
    int64_t rbp65;
    int64_t v66;
    int64_t rdi67;
    int64_t rbp68;
    int64_t rbp69;
    int64_t rbp70;

    *reinterpret_cast<int64_t*>(rbp3 - 64) = rax4;
    rax5 = fun_5ee(0xd6d80, 8);
    *reinterpret_cast<int64_t*>(rbp6 - 72) = rax5;
    rax7 = fun_601(0xf1b30, 8);
    *reinterpret_cast<int64_t*>(rbp8 - 80) = rax7;
    rax9 = fun_614(0x107ac0, 8);
    *reinterpret_cast<int64_t*>(rbp10 - 88) = rax9;
    rax11 = fun_627(0xea600, 8);
    *reinterpret_cast<int64_t*>(rbp12 - 96) = rax11;
    *reinterpret_cast<int32_t*>(&rdi13) = *reinterpret_cast<int32_t*>(rbp14 - 28);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi13) + 4) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(&rsi15) = *reinterpret_cast<int32_t*>(rbp16 - 32);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi15) + 4) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(&rdx17) = *reinterpret_cast<int32_t*>(rbp18 - 36);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx17) + 4) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(&rcx19) = *reinterpret_cast<int32_t*>(rbp20 - 40);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx19) + 4) = reinterpret_cast<int32_t>(free);
    r11_21 = *reinterpret_cast<int64_t*>(rbp22 - 80);
    r10_23 = *reinterpret_cast<int64_t*>(rbp24 - 88);
    rax25 = *reinterpret_cast<int64_t*>(rbp26 - 96);
    v27 = *reinterpret_cast<int64_t*>(rbp28 - 72);
    fun_667(rdi13, rsi15, rdx17, rcx19, rbp29 - 48, rbp30 - 56, v27, r11_21, r10_23, rax25);
    *reinterpret_cast<int32_t*>(&rdi31) = *reinterpret_cast<int32_t*>(rbp32 - 28);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi31) + 4) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(&rsi33) = *reinterpret_cast<int32_t*>(rbp34 - 32);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi33) + 4) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(&rdx35) = *reinterpret_cast<int32_t*>(rbp36 - 36);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx35) + 4) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(&rcx37) = *reinterpret_cast<int32_t*>(rbp38 - 40);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx37) + 4) = reinterpret_cast<int32_t>(free);
    rdi31->f0 = rsi33->f0;
    rdi39 = &rdi31->f4;
    rsi40 = &rsi33->f4;
    *rdi39 = *rsi40;
    rsi41 = reinterpret_cast<int64_t>(rsi40 + 1);
    r8_42 = *reinterpret_cast<int64_t*>(rbp43 - 64);
    r9_44 = *reinterpret_cast<int64_t*>(rbp45 - 72);
    r10_46 = *reinterpret_cast<int64_t*>(rbp47 - 88);
    rax48 = *reinterpret_cast<int64_t*>(rbp49 - 96);
    v50 = *reinterpret_cast<int64_t*>(rbp51 - 80);
    fun_6a4(rdi39 + 1, rsi41, rdx35, rcx37, r8_42, r9_44, v50, r10_46, rax48, rax25);
    if (*reinterpret_cast<int32_t*>(rbp52 - 12) <= 42) {
        addr_6d9_14:
        rdi53 = *reinterpret_cast<int64_t*>(rbp54 - 64);
        fun_6e2(rdi53, rsi41, rdx35, rcx37, r8_42, r9_44, v50, r10_46, rax48, rax25);
    } else {
        rdi55 = **reinterpret_cast<int64_t**>(rbp56 - 24);
        rsi41 = 0x6bc;
        eax57 = fun_6c1(rdi55, 0x6bc, rdx35, rcx37, r8_42, r9_44, v50, r10_46, rax48, rax25);
        if (!reinterpret_cast<int1_t>(eax57 == free)) 
            goto addr_6d9_14; else 
            goto addr_6ca_17;
    }
    rdi58 = *reinterpret_cast<int64_t*>(rbp59 - 72);
    fun_6eb(rdi58, rsi41, rdx35, rcx37, r8_42, r9_44, v50, r10_46, rax48, rax25);
    rdi60 = *reinterpret_cast<int64_t*>(rbp61 - 80);
    fun_6f4(rdi60, rsi41, rdx35, rcx37, r8_42, r9_44, v50, r10_46, rax48, rax25);
    rdi62 = *reinterpret_cast<int64_t*>(rbp63 - 88);
    fun_6fd(rdi62, rsi41, rdx35, rcx37, r8_42, r9_44, v50, r10_46, rax48, rax25);
    rdi64 = *reinterpret_cast<int64_t*>(rbp65 - 96);
    fun_706(rdi64, rsi41, rdx35, rcx37, r8_42, r9_44, v50, r10_46, rax48, rax25);
    goto v66;
    addr_6ca_17:
    *reinterpret_cast<int32_t*>(&rdi67) = *reinterpret_cast<int32_t*>(rbp68 - 28);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi67) + 4) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(&rsi41) = *reinterpret_cast<int32_t*>(rbp69 - 40);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi41) + 4) = reinterpret_cast<int32_t>(free);
    rdx35 = *reinterpret_cast<int64_t*>(rbp70 - 96);
    fun_6d9(rdi67, rsi41, rdx35, rcx37, r8_42, r9_44, v50, r10_46, rax48, rax25);
    goto addr_6d9_14;
}

void fun_6f4(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10) {
    int64_t rdi11;
    int64_t rbp12;
    int64_t rdi13;
    int64_t rbp14;
    int64_t v15;

    rdi11 = *reinterpret_cast<int64_t*>(rbp12 - 88);
    fun_6fd(rdi11, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9);
    rdi13 = *reinterpret_cast<int64_t*>(rbp14 - 96);
    fun_706(rdi13, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9);
    goto v15;
}

int64_t* g281 = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_299(int64_t rdi);

void fun_27a(int64_t rdi, int64_t rsi) {
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

    rax3 = g281;
    rdi4 = *rax3;
    rsi5 = reinterpret_cast<int32_t*>(0x28b);
    fun_299(rdi4);
    *reinterpret_cast<int32_t*>(rbp6 - 20) = reinterpret_cast<int32_t>(free);
    while (*reinterpret_cast<int32_t*>(rbp7 - 20) < *reinterpret_cast<int32_t*>(rbp8 - 4)) {
        *reinterpret_cast<int32_t*>(rbp9 - 24) = reinterpret_cast<int32_t>(free);
        while (*reinterpret_cast<int32_t*>(rbp10 - 24) < *reinterpret_cast<int32_t*>(rbp11 - 8)) {
            __asm__("cdq ");
            if (reinterpret_cast<int1_t>((*reinterpret_cast<int32_t*>(rbp12 - 20) * *reinterpret_cast<int32_t*>(rbp13 - 4) + *reinterpret_cast<int32_t*>(rbp14 - 24)) % 20 == free)) {
                rax15 = g2e1;
                rdi16 = *rax15;
                rsi5 = reinterpret_cast<int32_t*>(0x2eb);
                fun_2f2(rdi16);
            }
            rax17 = g2f9;
            rdi18 = *rax17;
            rcx19 = *reinterpret_cast<int32_t*>(rbp20 - 24);
            *rdi18 = *rsi5;
            rsi5 = reinterpret_cast<int32_t*>(0x31e);
            fun_325(rdi18 + 1);
            *reinterpret_cast<int32_t*>(rbp21 - 24) = *reinterpret_cast<int32_t*>(rbp22 - 24) + 1;
        }
        *reinterpret_cast<int32_t*>(rbp23 - 20) = *reinterpret_cast<int32_t*>(rbp24 - 20) + 1;
    }
    rax25 = g34d;
    rdi26 = *rax25;
    fun_365(rdi26, 0x357, 0x35e, rcx19);
    rax27 = g36c;
    rdi28 = *rax27;
    fun_37d(rdi28, 0x376, 0x35e, rcx19);
    goto v29;
}

void fun_37d(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t v5;

    goto v5;
}

struct s2 {
    int32_t f0;
    int32_t f4;
};

struct s3 {
    int32_t f0;
    int32_t f4;
};

int64_t fun_5ee(int64_t rdi, int64_t rsi) {
    int64_t rbp3;
    int64_t rax4;
    int64_t rax5;
    int64_t rbp6;
    int64_t rax7;
    int64_t rbp8;
    int64_t rax9;
    int64_t rbp10;
    int64_t rdi11;
    int64_t rbp12;
    int64_t rsi13;
    int64_t rbp14;
    int64_t rdx15;
    int64_t rbp16;
    int64_t rcx17;
    int64_t rbp18;
    int64_t r11_19;
    int64_t rbp20;
    int64_t r10_21;
    int64_t rbp22;
    int64_t rax23;
    int64_t rbp24;
    int64_t v25;
    int64_t rbp26;
    int64_t rbp27;
    int64_t rbp28;
    struct s2* rdi29;
    int64_t rbp30;
    struct s3* rsi31;
    int64_t rbp32;
    int64_t rdx33;
    int64_t rbp34;
    int64_t rcx35;
    int64_t rbp36;
    int32_t* rdi37;
    int32_t* rsi38;
    int64_t rsi39;
    int64_t r8_40;
    int64_t rbp41;
    int64_t r9_42;
    int64_t rbp43;
    int64_t r10_44;
    int64_t rbp45;
    int64_t rax46;
    int64_t rbp47;
    int64_t v48;
    int64_t rbp49;
    int64_t rbp50;
    int64_t rdi51;
    int64_t rbp52;
    int64_t rdi53;
    int64_t rbp54;
    int32_t eax55;
    int64_t rdi56;
    int64_t rbp57;
    int64_t rdi58;
    int64_t rbp59;
    int64_t rdi60;
    int64_t rbp61;
    int64_t rdi62;
    int64_t rbp63;
    int64_t v64;
    int64_t rdi65;
    int64_t rbp66;
    int64_t rbp67;
    int64_t rbp68;

    *reinterpret_cast<int64_t*>(rbp3 - 72) = rax4;
    rax5 = fun_601(0xf1b30, 8);
    *reinterpret_cast<int64_t*>(rbp6 - 80) = rax5;
    rax7 = fun_614(0x107ac0, 8);
    *reinterpret_cast<int64_t*>(rbp8 - 88) = rax7;
    rax9 = fun_627(0xea600, 8);
    *reinterpret_cast<int64_t*>(rbp10 - 96) = rax9;
    *reinterpret_cast<int32_t*>(&rdi11) = *reinterpret_cast<int32_t*>(rbp12 - 28);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi11) + 4) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(&rsi13) = *reinterpret_cast<int32_t*>(rbp14 - 32);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi13) + 4) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(&rdx15) = *reinterpret_cast<int32_t*>(rbp16 - 36);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx15) + 4) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(&rcx17) = *reinterpret_cast<int32_t*>(rbp18 - 40);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx17) + 4) = reinterpret_cast<int32_t>(free);
    r11_19 = *reinterpret_cast<int64_t*>(rbp20 - 80);
    r10_21 = *reinterpret_cast<int64_t*>(rbp22 - 88);
    rax23 = *reinterpret_cast<int64_t*>(rbp24 - 96);
    v25 = *reinterpret_cast<int64_t*>(rbp26 - 72);
    fun_667(rdi11, rsi13, rdx15, rcx17, rbp27 - 48, rbp28 - 56, v25, r11_19, r10_21, rax23);
    *reinterpret_cast<int32_t*>(&rdi29) = *reinterpret_cast<int32_t*>(rbp30 - 28);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi29) + 4) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(&rsi31) = *reinterpret_cast<int32_t*>(rbp32 - 32);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi31) + 4) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(&rdx33) = *reinterpret_cast<int32_t*>(rbp34 - 36);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx33) + 4) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(&rcx35) = *reinterpret_cast<int32_t*>(rbp36 - 40);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx35) + 4) = reinterpret_cast<int32_t>(free);
    rdi29->f0 = rsi31->f0;
    rdi37 = &rdi29->f4;
    rsi38 = &rsi31->f4;
    *rdi37 = *rsi38;
    rsi39 = reinterpret_cast<int64_t>(rsi38 + 1);
    r8_40 = *reinterpret_cast<int64_t*>(rbp41 - 64);
    r9_42 = *reinterpret_cast<int64_t*>(rbp43 - 72);
    r10_44 = *reinterpret_cast<int64_t*>(rbp45 - 88);
    rax46 = *reinterpret_cast<int64_t*>(rbp47 - 96);
    v48 = *reinterpret_cast<int64_t*>(rbp49 - 80);
    fun_6a4(rdi37 + 1, rsi39, rdx33, rcx35, r8_40, r9_42, v48, r10_44, rax46, rax23);
    if (*reinterpret_cast<int32_t*>(rbp50 - 12) <= 42) {
        addr_6d9_13:
        rdi51 = *reinterpret_cast<int64_t*>(rbp52 - 64);
        fun_6e2(rdi51, rsi39, rdx33, rcx35, r8_40, r9_42, v48, r10_44, rax46, rax23);
    } else {
        rdi53 = **reinterpret_cast<int64_t**>(rbp54 - 24);
        rsi39 = 0x6bc;
        eax55 = fun_6c1(rdi53, 0x6bc, rdx33, rcx35, r8_40, r9_42, v48, r10_44, rax46, rax23);
        if (!reinterpret_cast<int1_t>(eax55 == free)) 
            goto addr_6d9_13; else 
            goto addr_6ca_16;
    }
    rdi56 = *reinterpret_cast<int64_t*>(rbp57 - 72);
    fun_6eb(rdi56, rsi39, rdx33, rcx35, r8_40, r9_42, v48, r10_44, rax46, rax23);
    rdi58 = *reinterpret_cast<int64_t*>(rbp59 - 80);
    fun_6f4(rdi58, rsi39, rdx33, rcx35, r8_40, r9_42, v48, r10_44, rax46, rax23);
    rdi60 = *reinterpret_cast<int64_t*>(rbp61 - 88);
    fun_6fd(rdi60, rsi39, rdx33, rcx35, r8_40, r9_42, v48, r10_44, rax46, rax23);
    rdi62 = *reinterpret_cast<int64_t*>(rbp63 - 96);
    fun_706(rdi62, rsi39, rdx33, rcx35, r8_40, r9_42, v48, r10_44, rax46, rax23);
    goto v64;
    addr_6ca_16:
    *reinterpret_cast<int32_t*>(&rdi65) = *reinterpret_cast<int32_t*>(rbp66 - 28);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi65) + 4) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(&rsi39) = *reinterpret_cast<int32_t*>(rbp67 - 40);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi39) + 4) = reinterpret_cast<int32_t>(free);
    rdx33 = *reinterpret_cast<int64_t*>(rbp68 - 96);
    fun_6d9(rdi65, rsi39, rdx33, rcx35, r8_40, r9_42, v48, r10_44, rax46, rax23);
    goto addr_6d9_13;
}

void fun_6fd(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10) {
    int64_t rdi11;
    int64_t rbp12;
    int64_t v13;

    rdi11 = *reinterpret_cast<int64_t*>(rbp12 - 96);
    fun_706(rdi11, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9);
    goto v13;
}

void fun_299(int64_t rdi) {
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

    *reinterpret_cast<int32_t*>(rbp2 - 20) = reinterpret_cast<int32_t>(free);
    while (*reinterpret_cast<int32_t*>(rbp3 - 20) < *reinterpret_cast<int32_t*>(rbp4 - 4)) {
        *reinterpret_cast<int32_t*>(rbp5 - 24) = reinterpret_cast<int32_t>(free);
        while (*reinterpret_cast<int32_t*>(rbp6 - 24) < *reinterpret_cast<int32_t*>(rbp7 - 8)) {
            __asm__("cdq ");
            if (reinterpret_cast<int1_t>((*reinterpret_cast<int32_t*>(rbp8 - 20) * *reinterpret_cast<int32_t*>(rbp9 - 4) + *reinterpret_cast<int32_t*>(rbp10 - 24)) % 20 == free)) {
                rax11 = g2e1;
                rdi12 = *rax11;
                rsi13 = reinterpret_cast<int32_t*>(0x2eb);
                fun_2f2(rdi12);
            }
            rax14 = g2f9;
            rdi15 = *rax14;
            rcx16 = *reinterpret_cast<int32_t*>(rbp17 - 24);
            *rdi15 = *rsi13;
            rsi13 = reinterpret_cast<int32_t*>(0x31e);
            fun_325(rdi15 + 1);
            *reinterpret_cast<int32_t*>(rbp18 - 24) = *reinterpret_cast<int32_t*>(rbp19 - 24) + 1;
        }
        *reinterpret_cast<int32_t*>(rbp20 - 20) = *reinterpret_cast<int32_t*>(rbp21 - 20) + 1;
    }
    rax22 = g34d;
    rdi23 = *rax22;
    fun_365(rdi23, 0x357, 0x35e, rcx16);
    rax24 = g36c;
    rdi25 = *rax24;
    fun_37d(rdi25, 0x376, 0x35e, rcx16);
    goto v26;
}

struct s4 {
    int32_t f0;
    int32_t f4;
};

struct s5 {
    int32_t f0;
    int32_t f4;
};

int64_t fun_601(int64_t rdi, int64_t rsi) {
    int64_t rbp3;
    int64_t rax4;
    int64_t rax5;
    int64_t rbp6;
    int64_t rax7;
    int64_t rbp8;
    int64_t rdi9;
    int64_t rbp10;
    int64_t rsi11;
    int64_t rbp12;
    int64_t rdx13;
    int64_t rbp14;
    int64_t rcx15;
    int64_t rbp16;
    int64_t r11_17;
    int64_t rbp18;
    int64_t r10_19;
    int64_t rbp20;
    int64_t rax21;
    int64_t rbp22;
    int64_t v23;
    int64_t rbp24;
    int64_t rbp25;
    int64_t rbp26;
    struct s4* rdi27;
    int64_t rbp28;
    struct s5* rsi29;
    int64_t rbp30;
    int64_t rdx31;
    int64_t rbp32;
    int64_t rcx33;
    int64_t rbp34;
    int32_t* rdi35;
    int32_t* rsi36;
    int64_t rsi37;
    int64_t r8_38;
    int64_t rbp39;
    int64_t r9_40;
    int64_t rbp41;
    int64_t r10_42;
    int64_t rbp43;
    int64_t rax44;
    int64_t rbp45;
    int64_t v46;
    int64_t rbp47;
    int64_t rbp48;
    int64_t rdi49;
    int64_t rbp50;
    int64_t rdi51;
    int64_t rbp52;
    int32_t eax53;
    int64_t rdi54;
    int64_t rbp55;
    int64_t rdi56;
    int64_t rbp57;
    int64_t rdi58;
    int64_t rbp59;
    int64_t rdi60;
    int64_t rbp61;
    int64_t v62;
    int64_t rdi63;
    int64_t rbp64;
    int64_t rbp65;
    int64_t rbp66;

    *reinterpret_cast<int64_t*>(rbp3 - 80) = rax4;
    rax5 = fun_614(0x107ac0, 8);
    *reinterpret_cast<int64_t*>(rbp6 - 88) = rax5;
    rax7 = fun_627(0xea600, 8);
    *reinterpret_cast<int64_t*>(rbp8 - 96) = rax7;
    *reinterpret_cast<int32_t*>(&rdi9) = *reinterpret_cast<int32_t*>(rbp10 - 28);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi9) + 4) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(&rsi11) = *reinterpret_cast<int32_t*>(rbp12 - 32);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi11) + 4) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(&rdx13) = *reinterpret_cast<int32_t*>(rbp14 - 36);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx13) + 4) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(&rcx15) = *reinterpret_cast<int32_t*>(rbp16 - 40);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx15) + 4) = reinterpret_cast<int32_t>(free);
    r11_17 = *reinterpret_cast<int64_t*>(rbp18 - 80);
    r10_19 = *reinterpret_cast<int64_t*>(rbp20 - 88);
    rax21 = *reinterpret_cast<int64_t*>(rbp22 - 96);
    v23 = *reinterpret_cast<int64_t*>(rbp24 - 72);
    fun_667(rdi9, rsi11, rdx13, rcx15, rbp25 - 48, rbp26 - 56, v23, r11_17, r10_19, rax21);
    *reinterpret_cast<int32_t*>(&rdi27) = *reinterpret_cast<int32_t*>(rbp28 - 28);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi27) + 4) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(&rsi29) = *reinterpret_cast<int32_t*>(rbp30 - 32);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi29) + 4) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(&rdx31) = *reinterpret_cast<int32_t*>(rbp32 - 36);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx31) + 4) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(&rcx33) = *reinterpret_cast<int32_t*>(rbp34 - 40);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx33) + 4) = reinterpret_cast<int32_t>(free);
    rdi27->f0 = rsi29->f0;
    rdi35 = &rdi27->f4;
    rsi36 = &rsi29->f4;
    *rdi35 = *rsi36;
    rsi37 = reinterpret_cast<int64_t>(rsi36 + 1);
    r8_38 = *reinterpret_cast<int64_t*>(rbp39 - 64);
    r9_40 = *reinterpret_cast<int64_t*>(rbp41 - 72);
    r10_42 = *reinterpret_cast<int64_t*>(rbp43 - 88);
    rax44 = *reinterpret_cast<int64_t*>(rbp45 - 96);
    v46 = *reinterpret_cast<int64_t*>(rbp47 - 80);
    fun_6a4(rdi35 + 1, rsi37, rdx31, rcx33, r8_38, r9_40, v46, r10_42, rax44, rax21);
    if (*reinterpret_cast<int32_t*>(rbp48 - 12) <= 42) {
        addr_6d9_12:
        rdi49 = *reinterpret_cast<int64_t*>(rbp50 - 64);
        fun_6e2(rdi49, rsi37, rdx31, rcx33, r8_38, r9_40, v46, r10_42, rax44, rax21);
    } else {
        rdi51 = **reinterpret_cast<int64_t**>(rbp52 - 24);
        rsi37 = 0x6bc;
        eax53 = fun_6c1(rdi51, 0x6bc, rdx31, rcx33, r8_38, r9_40, v46, r10_42, rax44, rax21);
        if (!reinterpret_cast<int1_t>(eax53 == free)) 
            goto addr_6d9_12; else 
            goto addr_6ca_15;
    }
    rdi54 = *reinterpret_cast<int64_t*>(rbp55 - 72);
    fun_6eb(rdi54, rsi37, rdx31, rcx33, r8_38, r9_40, v46, r10_42, rax44, rax21);
    rdi56 = *reinterpret_cast<int64_t*>(rbp57 - 80);
    fun_6f4(rdi56, rsi37, rdx31, rcx33, r8_38, r9_40, v46, r10_42, rax44, rax21);
    rdi58 = *reinterpret_cast<int64_t*>(rbp59 - 88);
    fun_6fd(rdi58, rsi37, rdx31, rcx33, r8_38, r9_40, v46, r10_42, rax44, rax21);
    rdi60 = *reinterpret_cast<int64_t*>(rbp61 - 96);
    fun_706(rdi60, rsi37, rdx31, rcx33, r8_38, r9_40, v46, r10_42, rax44, rax21);
    goto v62;
    addr_6ca_15:
    *reinterpret_cast<int32_t*>(&rdi63) = *reinterpret_cast<int32_t*>(rbp64 - 28);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi63) + 4) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(&rsi37) = *reinterpret_cast<int32_t*>(rbp65 - 40);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi37) + 4) = reinterpret_cast<int32_t>(free);
    rdx31 = *reinterpret_cast<int64_t*>(rbp66 - 96);
    fun_6d9(rdi63, rsi37, rdx31, rcx33, r8_38, r9_40, v46, r10_42, rax44, rax21);
    goto addr_6d9_12;
}

void fun_706(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10) {
    int64_t v11;

    goto v11;
}

struct s6 {
    int32_t f0;
    int32_t f4;
};

struct s7 {
    int32_t f0;
    int32_t f4;
};

int64_t fun_614(int64_t rdi, int64_t rsi) {
    int64_t rbp3;
    int64_t rax4;
    int64_t rax5;
    int64_t rbp6;
    int64_t rdi7;
    int64_t rbp8;
    int64_t rsi9;
    int64_t rbp10;
    int64_t rdx11;
    int64_t rbp12;
    int64_t rcx13;
    int64_t rbp14;
    int64_t r11_15;
    int64_t rbp16;
    int64_t r10_17;
    int64_t rbp18;
    int64_t rax19;
    int64_t rbp20;
    int64_t v21;
    int64_t rbp22;
    int64_t rbp23;
    int64_t rbp24;
    struct s6* rdi25;
    int64_t rbp26;
    struct s7* rsi27;
    int64_t rbp28;
    int64_t rdx29;
    int64_t rbp30;
    int64_t rcx31;
    int64_t rbp32;
    int32_t* rdi33;
    int32_t* rsi34;
    int64_t rsi35;
    int64_t r8_36;
    int64_t rbp37;
    int64_t r9_38;
    int64_t rbp39;
    int64_t r10_40;
    int64_t rbp41;
    int64_t rax42;
    int64_t rbp43;
    int64_t v44;
    int64_t rbp45;
    int64_t rbp46;
    int64_t rdi47;
    int64_t rbp48;
    int64_t rdi49;
    int64_t rbp50;
    int32_t eax51;
    int64_t rdi52;
    int64_t rbp53;
    int64_t rdi54;
    int64_t rbp55;
    int64_t rdi56;
    int64_t rbp57;
    int64_t rdi58;
    int64_t rbp59;
    int64_t v60;
    int64_t rdi61;
    int64_t rbp62;
    int64_t rbp63;
    int64_t rbp64;

    *reinterpret_cast<int64_t*>(rbp3 - 88) = rax4;
    rax5 = fun_627(0xea600, 8);
    *reinterpret_cast<int64_t*>(rbp6 - 96) = rax5;
    *reinterpret_cast<int32_t*>(&rdi7) = *reinterpret_cast<int32_t*>(rbp8 - 28);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi7) + 4) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(&rsi9) = *reinterpret_cast<int32_t*>(rbp10 - 32);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi9) + 4) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(&rdx11) = *reinterpret_cast<int32_t*>(rbp12 - 36);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx11) + 4) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(&rcx13) = *reinterpret_cast<int32_t*>(rbp14 - 40);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx13) + 4) = reinterpret_cast<int32_t>(free);
    r11_15 = *reinterpret_cast<int64_t*>(rbp16 - 80);
    r10_17 = *reinterpret_cast<int64_t*>(rbp18 - 88);
    rax19 = *reinterpret_cast<int64_t*>(rbp20 - 96);
    v21 = *reinterpret_cast<int64_t*>(rbp22 - 72);
    fun_667(rdi7, rsi9, rdx11, rcx13, rbp23 - 48, rbp24 - 56, v21, r11_15, r10_17, rax19);
    *reinterpret_cast<int32_t*>(&rdi25) = *reinterpret_cast<int32_t*>(rbp26 - 28);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi25) + 4) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(&rsi27) = *reinterpret_cast<int32_t*>(rbp28 - 32);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi27) + 4) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(&rdx29) = *reinterpret_cast<int32_t*>(rbp30 - 36);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx29) + 4) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(&rcx31) = *reinterpret_cast<int32_t*>(rbp32 - 40);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx31) + 4) = reinterpret_cast<int32_t>(free);
    rdi25->f0 = rsi27->f0;
    rdi33 = &rdi25->f4;
    rsi34 = &rsi27->f4;
    *rdi33 = *rsi34;
    rsi35 = reinterpret_cast<int64_t>(rsi34 + 1);
    r8_36 = *reinterpret_cast<int64_t*>(rbp37 - 64);
    r9_38 = *reinterpret_cast<int64_t*>(rbp39 - 72);
    r10_40 = *reinterpret_cast<int64_t*>(rbp41 - 88);
    rax42 = *reinterpret_cast<int64_t*>(rbp43 - 96);
    v44 = *reinterpret_cast<int64_t*>(rbp45 - 80);
    fun_6a4(rdi33 + 1, rsi35, rdx29, rcx31, r8_36, r9_38, v44, r10_40, rax42, rax19);
    if (*reinterpret_cast<int32_t*>(rbp46 - 12) <= 42) {
        addr_6d9_11:
        rdi47 = *reinterpret_cast<int64_t*>(rbp48 - 64);
        fun_6e2(rdi47, rsi35, rdx29, rcx31, r8_36, r9_38, v44, r10_40, rax42, rax19);
    } else {
        rdi49 = **reinterpret_cast<int64_t**>(rbp50 - 24);
        rsi35 = 0x6bc;
        eax51 = fun_6c1(rdi49, 0x6bc, rdx29, rcx31, r8_36, r9_38, v44, r10_40, rax42, rax19);
        if (!reinterpret_cast<int1_t>(eax51 == free)) 
            goto addr_6d9_11; else 
            goto addr_6ca_14;
    }
    rdi52 = *reinterpret_cast<int64_t*>(rbp53 - 72);
    fun_6eb(rdi52, rsi35, rdx29, rcx31, r8_36, r9_38, v44, r10_40, rax42, rax19);
    rdi54 = *reinterpret_cast<int64_t*>(rbp55 - 80);
    fun_6f4(rdi54, rsi35, rdx29, rcx31, r8_36, r9_38, v44, r10_40, rax42, rax19);
    rdi56 = *reinterpret_cast<int64_t*>(rbp57 - 88);
    fun_6fd(rdi56, rsi35, rdx29, rcx31, r8_36, r9_38, v44, r10_40, rax42, rax19);
    rdi58 = *reinterpret_cast<int64_t*>(rbp59 - 96);
    fun_706(rdi58, rsi35, rdx29, rcx31, r8_36, r9_38, v44, r10_40, rax42, rax19);
    goto v60;
    addr_6ca_14:
    *reinterpret_cast<int32_t*>(&rdi61) = *reinterpret_cast<int32_t*>(rbp62 - 28);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi61) + 4) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(&rsi35) = *reinterpret_cast<int32_t*>(rbp63 - 40);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi35) + 4) = reinterpret_cast<int32_t>(free);
    rdx29 = *reinterpret_cast<int64_t*>(rbp64 - 96);
    fun_6d9(rdi61, rsi35, rdx29, rcx31, r8_36, r9_38, v44, r10_40, rax42, rax19);
    goto addr_6d9_11;
}

struct s8 {
    int32_t f0;
    int32_t f4;
};

struct s9 {
    int32_t f0;
    int32_t f4;
};

int64_t fun_627(int64_t rdi, int64_t rsi) {
    int64_t rbp3;
    int64_t rax4;
    int64_t rdi5;
    int64_t rbp6;
    int64_t rsi7;
    int64_t rbp8;
    int64_t rdx9;
    int64_t rbp10;
    int64_t rcx11;
    int64_t rbp12;
    int64_t r11_13;
    int64_t rbp14;
    int64_t r10_15;
    int64_t rbp16;
    int64_t rax17;
    int64_t rbp18;
    int64_t v19;
    int64_t rbp20;
    int64_t rbp21;
    int64_t rbp22;
    struct s8* rdi23;
    int64_t rbp24;
    struct s9* rsi25;
    int64_t rbp26;
    int64_t rdx27;
    int64_t rbp28;
    int64_t rcx29;
    int64_t rbp30;
    int32_t* rdi31;
    int32_t* rsi32;
    int64_t rsi33;
    int64_t r8_34;
    int64_t rbp35;
    int64_t r9_36;
    int64_t rbp37;
    int64_t r10_38;
    int64_t rbp39;
    int64_t rax40;
    int64_t rbp41;
    int64_t v42;
    int64_t rbp43;
    int64_t rbp44;
    int64_t rdi45;
    int64_t rbp46;
    int64_t rdi47;
    int64_t rbp48;
    int32_t eax49;
    int64_t rdi50;
    int64_t rbp51;
    int64_t rdi52;
    int64_t rbp53;
    int64_t rdi54;
    int64_t rbp55;
    int64_t rdi56;
    int64_t rbp57;
    int64_t v58;
    int64_t rdi59;
    int64_t rbp60;
    int64_t rbp61;
    int64_t rbp62;

    *reinterpret_cast<int64_t*>(rbp3 - 96) = rax4;
    *reinterpret_cast<int32_t*>(&rdi5) = *reinterpret_cast<int32_t*>(rbp6 - 28);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi5) + 4) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(&rsi7) = *reinterpret_cast<int32_t*>(rbp8 - 32);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi7) + 4) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(&rdx9) = *reinterpret_cast<int32_t*>(rbp10 - 36);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx9) + 4) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(&rcx11) = *reinterpret_cast<int32_t*>(rbp12 - 40);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx11) + 4) = reinterpret_cast<int32_t>(free);
    r11_13 = *reinterpret_cast<int64_t*>(rbp14 - 80);
    r10_15 = *reinterpret_cast<int64_t*>(rbp16 - 88);
    rax17 = *reinterpret_cast<int64_t*>(rbp18 - 96);
    v19 = *reinterpret_cast<int64_t*>(rbp20 - 72);
    fun_667(rdi5, rsi7, rdx9, rcx11, rbp21 - 48, rbp22 - 56, v19, r11_13, r10_15, rax17);
    *reinterpret_cast<int32_t*>(&rdi23) = *reinterpret_cast<int32_t*>(rbp24 - 28);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi23) + 4) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(&rsi25) = *reinterpret_cast<int32_t*>(rbp26 - 32);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi25) + 4) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(&rdx27) = *reinterpret_cast<int32_t*>(rbp28 - 36);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx27) + 4) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(&rcx29) = *reinterpret_cast<int32_t*>(rbp30 - 40);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx29) + 4) = reinterpret_cast<int32_t>(free);
    rdi23->f0 = rsi25->f0;
    rdi31 = &rdi23->f4;
    rsi32 = &rsi25->f4;
    *rdi31 = *rsi32;
    rsi33 = reinterpret_cast<int64_t>(rsi32 + 1);
    r8_34 = *reinterpret_cast<int64_t*>(rbp35 - 64);
    r9_36 = *reinterpret_cast<int64_t*>(rbp37 - 72);
    r10_38 = *reinterpret_cast<int64_t*>(rbp39 - 88);
    rax40 = *reinterpret_cast<int64_t*>(rbp41 - 96);
    v42 = *reinterpret_cast<int64_t*>(rbp43 - 80);
    fun_6a4(rdi31 + 1, rsi33, rdx27, rcx29, r8_34, r9_36, v42, r10_38, rax40, rax17);
    if (*reinterpret_cast<int32_t*>(rbp44 - 12) <= 42) {
        addr_6d9_10:
        rdi45 = *reinterpret_cast<int64_t*>(rbp46 - 64);
        fun_6e2(rdi45, rsi33, rdx27, rcx29, r8_34, r9_36, v42, r10_38, rax40, rax17);
    } else {
        rdi47 = **reinterpret_cast<int64_t**>(rbp48 - 24);
        rsi33 = 0x6bc;
        eax49 = fun_6c1(rdi47, 0x6bc, rdx27, rcx29, r8_34, r9_36, v42, r10_38, rax40, rax17);
        if (!reinterpret_cast<int1_t>(eax49 == free)) 
            goto addr_6d9_10; else 
            goto addr_6ca_13;
    }
    rdi50 = *reinterpret_cast<int64_t*>(rbp51 - 72);
    fun_6eb(rdi50, rsi33, rdx27, rcx29, r8_34, r9_36, v42, r10_38, rax40, rax17);
    rdi52 = *reinterpret_cast<int64_t*>(rbp53 - 80);
    fun_6f4(rdi52, rsi33, rdx27, rcx29, r8_34, r9_36, v42, r10_38, rax40, rax17);
    rdi54 = *reinterpret_cast<int64_t*>(rbp55 - 88);
    fun_6fd(rdi54, rsi33, rdx27, rcx29, r8_34, r9_36, v42, r10_38, rax40, rax17);
    rdi56 = *reinterpret_cast<int64_t*>(rbp57 - 96);
    fun_706(rdi56, rsi33, rdx27, rcx29, r8_34, r9_36, v42, r10_38, rax40, rax17);
    goto v58;
    addr_6ca_13:
    *reinterpret_cast<int32_t*>(&rdi59) = *reinterpret_cast<int32_t*>(rbp60 - 28);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi59) + 4) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(&rsi33) = *reinterpret_cast<int32_t*>(rbp61 - 40);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi33) + 4) = reinterpret_cast<int32_t>(free);
    rdx27 = *reinterpret_cast<int64_t*>(rbp62 - 96);
    fun_6d9(rdi59, rsi33, rdx27, rcx29, r8_34, r9_36, v42, r10_38, rax40, rax17);
    goto addr_6d9_10;
}

struct s10 {
    int32_t f0;
    int32_t f4;
};

struct s11 {
    int32_t f0;
    int32_t f4;
};

void fun_667(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10) {
    struct s10* rdi11;
    int64_t rbp12;
    struct s11* rsi13;
    int64_t rbp14;
    int64_t rdx15;
    int64_t rbp16;
    int64_t rcx17;
    int64_t rbp18;
    int32_t* rdi19;
    int32_t* rsi20;
    int64_t rsi21;
    int64_t r8_22;
    int64_t rbp23;
    int64_t r9_24;
    int64_t rbp25;
    int64_t r10_26;
    int64_t rbp27;
    int64_t rax28;
    int64_t rbp29;
    int64_t v30;
    int64_t rbp31;
    int64_t rbp32;
    int64_t rdi33;
    int64_t rbp34;
    int64_t rdi35;
    int64_t rbp36;
    int32_t eax37;
    int64_t rdi38;
    int64_t rbp39;
    int64_t rdi40;
    int64_t rbp41;
    int64_t rdi42;
    int64_t rbp43;
    int64_t rdi44;
    int64_t rbp45;
    int64_t v46;
    int64_t rdi47;
    int64_t rbp48;
    int64_t rbp49;
    int64_t rbp50;

    *reinterpret_cast<int32_t*>(&rdi11) = *reinterpret_cast<int32_t*>(rbp12 - 28);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi11) + 4) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(&rsi13) = *reinterpret_cast<int32_t*>(rbp14 - 32);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi13) + 4) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(&rdx15) = *reinterpret_cast<int32_t*>(rbp16 - 36);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx15) + 4) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(&rcx17) = *reinterpret_cast<int32_t*>(rbp18 - 40);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx17) + 4) = reinterpret_cast<int32_t>(free);
    rdi11->f0 = rsi13->f0;
    rdi19 = &rdi11->f4;
    rsi20 = &rsi13->f4;
    *rdi19 = *rsi20;
    rsi21 = reinterpret_cast<int64_t>(rsi20 + 1);
    r8_22 = *reinterpret_cast<int64_t*>(rbp23 - 64);
    r9_24 = *reinterpret_cast<int64_t*>(rbp25 - 72);
    r10_26 = *reinterpret_cast<int64_t*>(rbp27 - 88);
    rax28 = *reinterpret_cast<int64_t*>(rbp29 - 96);
    v30 = *reinterpret_cast<int64_t*>(rbp31 - 80);
    fun_6a4(rdi19 + 1, rsi21, rdx15, rcx17, r8_22, r9_24, v30, r10_26, rax28, a9);
    if (*reinterpret_cast<int32_t*>(rbp32 - 12) <= 42) {
        addr_6d9_9:
        rdi33 = *reinterpret_cast<int64_t*>(rbp34 - 64);
        fun_6e2(rdi33, rsi21, rdx15, rcx17, r8_22, r9_24, v30, r10_26, rax28, a9);
    } else {
        rdi35 = **reinterpret_cast<int64_t**>(rbp36 - 24);
        rsi21 = 0x6bc;
        eax37 = fun_6c1(rdi35, 0x6bc, rdx15, rcx17, r8_22, r9_24, v30, r10_26, rax28, a9);
        if (!reinterpret_cast<int1_t>(eax37 == free)) 
            goto addr_6d9_9; else 
            goto addr_6ca_12;
    }
    rdi38 = *reinterpret_cast<int64_t*>(rbp39 - 72);
    fun_6eb(rdi38, rsi21, rdx15, rcx17, r8_22, r9_24, v30, r10_26, rax28, a9);
    rdi40 = *reinterpret_cast<int64_t*>(rbp41 - 80);
    fun_6f4(rdi40, rsi21, rdx15, rcx17, r8_22, r9_24, v30, r10_26, rax28, a9);
    rdi42 = *reinterpret_cast<int64_t*>(rbp43 - 88);
    fun_6fd(rdi42, rsi21, rdx15, rcx17, r8_22, r9_24, v30, r10_26, rax28, a9);
    rdi44 = *reinterpret_cast<int64_t*>(rbp45 - 96);
    fun_706(rdi44, rsi21, rdx15, rcx17, r8_22, r9_24, v30, r10_26, rax28, a9);
    goto v46;
    addr_6ca_12:
    *reinterpret_cast<int32_t*>(&rdi47) = *reinterpret_cast<int32_t*>(rbp48 - 28);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi47) + 4) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(&rsi21) = *reinterpret_cast<int32_t*>(rbp49 - 40);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi21) + 4) = reinterpret_cast<int32_t>(free);
    rdx15 = *reinterpret_cast<int64_t*>(rbp50 - 96);
    fun_6d9(rdi47, rsi21, rdx15, rcx17, r8_22, r9_24, v30, r10_26, rax28, a9);
    goto addr_6d9_9;
}

void free() {
}

void fun_78() {
    __asm__("cdq ");
    __asm__("cvtsi2sd xmm0, edx");
}

struct s12 {
    signed char[99] pad99;
    unsigned char f63;
};

struct s13 {
    signed char[99] pad99;
    signed char f63;
};

void fun_88() {
    struct s12* rax1;
    struct s13* rax2;
    signed char cl3;
    uint1_t cf4;

    __asm__("ror dword [rax-0x75], 0x45");
    rax1->f63 = reinterpret_cast<unsigned char>(reinterpret_cast<signed char>(rax2->f63 + cl3) + cf4);
    __asm__("fmul qword [r8+0x69]");
}

struct s14 {
    signed char[1] pad1;
    signed char f1;
};

void fun_95() {
    struct s14* rax1;
    unsigned char al2;
    unsigned char* rax3;
    signed char cl4;
    int64_t rbp5;
    int64_t rbp6;

    *reinterpret_cast<unsigned char*>(&rax1) = reinterpret_cast<unsigned char>(al2 & *rax3);
    rax1->f1 = reinterpret_cast<signed char>(rax1->f1 + cl4);
    __asm__("enter 0x6348, 0x4d");
    __asm__("fdiv st0, st2");
    __asm__("movups [rax+rcx*8], xmm0");
    *reinterpret_cast<int32_t*>(rbp5 - 40) = *reinterpret_cast<int32_t*>(rbp6 - 40) + 1;
}

void fun_b2() {
    int64_t rbp1;
    int64_t rbp2;

    *reinterpret_cast<int32_t*>(rbp1 - 36) = *reinterpret_cast<int32_t*>(rbp2 - 36) + 1;
}

void fun_c5() {
    int64_t rbp1;
    int64_t rbp2;
    int64_t rbp3;
    int64_t rbp4;
    int64_t rbp5;
    int64_t rbp6;
    int32_t* rdi7;
    int32_t* rsi8;
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
    int64_t v33;

    *reinterpret_cast<int32_t*>(rbp1 - 36) = reinterpret_cast<int32_t>(free);
    while (*reinterpret_cast<int32_t*>(rbp2 - 36) < *reinterpret_cast<int32_t*>(rbp3 - 12)) {
        *reinterpret_cast<int32_t*>(rbp4 - 40) = reinterpret_cast<int32_t>(free);
        while (*reinterpret_cast<int32_t*>(rbp5 - 40) < *reinterpret_cast<int32_t*>(rbp6 - 8)) {
            __asm__("cdq ");
            __asm__("cvtsi2sd xmm0, edx");
            __asm__("cvtsi2sd xmm1, dword [rbp-0x8]");
            __asm__("divsd xmm0, xmm1");
            *rdi7 = *rsi8;
            ++rdi7;
            ++rsi8;
            *reinterpret_cast<int32_t*>(rbp9 - 40) = *reinterpret_cast<int32_t*>(rbp10 - 40) + 1;
        }
        *reinterpret_cast<int32_t*>(rbp11 - 36) = *reinterpret_cast<int32_t*>(rbp12 - 36) + 1;
    }
    *reinterpret_cast<int32_t*>(rbp13 - 36) = reinterpret_cast<int32_t>(free);
    while (*reinterpret_cast<int32_t*>(rbp14 - 36) < *reinterpret_cast<int32_t*>(rbp15 - 8)) {
        *reinterpret_cast<int32_t*>(rbp16 - 40) = reinterpret_cast<int32_t>(free);
        while (*reinterpret_cast<int32_t*>(rbp17 - 40) < *reinterpret_cast<int32_t*>(rbp18 - 16)) {
            __asm__("cdq ");
            __asm__("cvtsi2sd xmm0, edx");
            __asm__("cvtsi2sd xmm1, dword [rbp-0x10]");
            __asm__("divsd xmm0, xmm1");
            *rdi7 = *rsi8;
            ++rdi7;
            ++rsi8;
            *reinterpret_cast<int32_t*>(rbp19 - 40) = *reinterpret_cast<int32_t*>(rbp20 - 40) + 1;
        }
        *reinterpret_cast<int32_t*>(rbp21 - 36) = *reinterpret_cast<int32_t*>(rbp22 - 36) + 1;
    }
    *reinterpret_cast<int32_t*>(rbp23 - 36) = reinterpret_cast<int32_t>(free);
    while (*reinterpret_cast<int32_t*>(rbp24 - 36) < *reinterpret_cast<int32_t*>(rbp25 - 4)) {
        *reinterpret_cast<int32_t*>(rbp26 - 40) = reinterpret_cast<int32_t>(free);
        while (*reinterpret_cast<int32_t*>(rbp27 - 40) < *reinterpret_cast<int32_t*>(rbp28 - 16)) {
            __asm__("cdq ");
            __asm__("cvtsi2sd xmm0, edx");
            __asm__("cvtsi2sd xmm1, dword [rbp-0xc]");
            __asm__("divsd xmm0, xmm1");
            *rdi7 = *rsi8;
            ++rdi7;
            ++rsi8;
            *reinterpret_cast<int32_t*>(rbp29 - 40) = *reinterpret_cast<int32_t*>(rbp30 - 40) + 1;
        }
        *reinterpret_cast<int32_t*>(rbp31 - 36) = *reinterpret_cast<int32_t*>(rbp32 - 36) + 1;
    }
    goto v33;
}

void submain(int32_t edi, int64_t rsi) {
    fun_5db(0xafc80, 8);
}

int64_t* g269 = reinterpret_cast<int64_t*>(0x358d48388b48);

void print_array(int32_t edi, int32_t esi, int64_t rdx) {
    int64_t* rax4;
    int64_t rdi5;

    rax4 = g269;
    rdi5 = *rax4;
    fun_27a(rdi5, 0x273);
}

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

void kernel_2mm(struct s15* rdi, struct s16* rsi, int32_t edx, int32_t ecx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9) {
    int32_t v10;
    int32_t v11;
    int32_t v12;
    int32_t v13;
    struct s17* rdi14;
    struct s18* rsi15;
    struct s19* rdi16;
    struct s20* rsi17;
    int32_t v18;
    int32_t v19;
    int32_t v20;
    struct s21* rdi21;
    struct s22* rsi22;
    struct s19* rdi23;
    struct s20* rsi24;
    struct s21* rdi25;
    struct s22* rsi26;
    int32_t v27;
    int32_t v28;
    struct s21* rdi29;
    struct s22* rsi30;
    int32_t v31;
    struct s21* rdi32;
    struct s22* rsi33;
    struct s19* rdi34;
    struct s20* rsi35;
    struct s21* rdi36;
    struct s22* rsi37;

    v10 = *reinterpret_cast<int32_t*>(&rdi);
    v11 = *reinterpret_cast<int32_t*>(&rsi);
    v12 = edx;
    v13 = ecx;
    rdi->f0 = rsi->f0;
    rdi14 = reinterpret_cast<struct s17*>(&rdi->f4);
    rsi15 = reinterpret_cast<struct s18*>(&rsi->f4);
    rdi14->f0 = rsi15->f0;
    rdi16 = reinterpret_cast<struct s19*>(&rdi14->f4);
    rsi17 = reinterpret_cast<struct s20*>(&rsi15->f4);
    v18 = reinterpret_cast<int32_t>(free);
    while (v18 < v10) {
        v19 = reinterpret_cast<int32_t>(free);
        while (v19 < v11) {
            __asm__("xorps xmm0, xmm0");
            rdi16->f0 = rsi17->f0;
            rdi16 = reinterpret_cast<struct s19*>(&rdi16->f4);
            rsi17 = reinterpret_cast<struct s20*>(&rsi17->f4);
            v20 = reinterpret_cast<int32_t>(free);
            while (v20 < v12) {
                rdi16->f0 = rsi17->f0;
                rdi21 = reinterpret_cast<struct s21*>(&rdi16->f4);
                rsi22 = reinterpret_cast<struct s22*>(&rsi17->f4);
                __asm__("mulsd xmm0, [rax+rcx*8]");
                rdi21->f0 = rsi22->f0;
                rdi23 = reinterpret_cast<struct s19*>(&rdi21->f4);
                rsi24 = reinterpret_cast<struct s20*>(&rsi22->f4);
                rdi23->f0 = rsi24->f0;
                rdi25 = reinterpret_cast<struct s21*>(&rdi23->f4);
                rsi26 = reinterpret_cast<struct s22*>(&rsi24->f4);
                __asm__("mulsd xmm0, xmm2");
                __asm__("addsd xmm0, xmm1");
                rdi25->f0 = rsi26->f0;
                rdi16 = reinterpret_cast<struct s19*>(&rdi25->f4);
                rsi17 = reinterpret_cast<struct s20*>(&rsi26->f4);
                ++v20;
            }
            ++v19;
        }
        ++v18;
    }
    v27 = reinterpret_cast<int32_t>(free);
    while (v27 < v10) {
        v28 = reinterpret_cast<int32_t>(free);
        while (v28 < v13) {
            rdi16->f0 = rsi17->f0;
            rdi29 = reinterpret_cast<struct s21*>(&rdi16->f4);
            rsi30 = reinterpret_cast<struct s22*>(&rsi17->f4);
            __asm__("mulsd xmm0, [rax+rcx*8]");
            rdi29->f0 = rsi30->f0;
            rdi16 = reinterpret_cast<struct s19*>(&rdi29->f4);
            rsi17 = reinterpret_cast<struct s20*>(&rsi30->f4);
            v31 = reinterpret_cast<int32_t>(free);
            while (v31 < v11) {
                rdi16->f0 = rsi17->f0;
                rdi32 = reinterpret_cast<struct s21*>(&rdi16->f4);
                rsi33 = reinterpret_cast<struct s22*>(&rsi17->f4);
                rdi32->f0 = rsi33->f0;
                rdi34 = reinterpret_cast<struct s19*>(&rdi32->f4);
                rsi35 = reinterpret_cast<struct s20*>(&rsi33->f4);
                rdi34->f0 = rsi35->f0;
                rdi36 = reinterpret_cast<struct s21*>(&rdi34->f4);
                rsi37 = reinterpret_cast<struct s22*>(&rsi35->f4);
                __asm__("mulsd xmm0, xmm2");
                __asm__("addsd xmm0, xmm1");
                rdi36->f0 = rsi37->f0;
                rdi16 = reinterpret_cast<struct s19*>(&rdi36->f4);
                rsi17 = reinterpret_cast<struct s20*>(&rsi37->f4);
                ++v31;
            }
            ++v28;
        }
        ++v27;
    }
    return;
}

