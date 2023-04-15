
int32_t** g2e9 = reinterpret_cast<int32_t**>(0x48f0458b48388b48);

void fun_315(int64_t rdi);

void free();

int64_t* g2d1 = reinterpret_cast<int64_t*>(0x358d48388b48);

int64_t* g33d = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_355(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx);

int64_t* g35c = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_36d(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx);

void fun_2e2(int64_t rdi) {
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
        rax2 = g2e9;
        rdi3 = *rax2;
        rcx4 = *reinterpret_cast<int32_t*>(rbp5 - 24);
        *rdi3 = *rsi6;
        rsi6 = reinterpret_cast<int32_t*>(0x30e);
        fun_315(rdi3 + 1);
        *reinterpret_cast<int32_t*>(rbp7 - 24) = *reinterpret_cast<int32_t*>(rbp8 - 24) + 1;
        while (*reinterpret_cast<int32_t*>(rbp9 - 24) >= *reinterpret_cast<int32_t*>(rbp10 - 8)) {
            *reinterpret_cast<int32_t*>(rbp11 - 20) = *reinterpret_cast<int32_t*>(rbp12 - 20) + 1;
            if (*reinterpret_cast<int32_t*>(rbp13 - 20) >= *reinterpret_cast<int32_t*>(rbp14 - 4)) 
                goto addr_336_10;
            *reinterpret_cast<int32_t*>(rbp15 - 24) = reinterpret_cast<int32_t>(free);
        }
        __asm__("cdq ");
        if (!reinterpret_cast<int1_t>((*reinterpret_cast<int32_t*>(rbp16 - 20) * *reinterpret_cast<int32_t*>(rbp17 - 4) + *reinterpret_cast<int32_t*>(rbp18 - 24)) % 20 == free)) 
            continue;
        rax19 = g2d1;
        rdi20 = *rax19;
        rsi6 = reinterpret_cast<int32_t*>(0x2db);
        fun_2e2(rdi20);
    }
    addr_336_10:
    rax21 = g33d;
    rdi22 = *rax21;
    fun_355(rdi22, 0x347, 0x34e, rcx4);
    rax23 = g35c;
    rdi24 = *rax23;
    fun_36d(rdi24, 0x366, 0x34e, rcx4);
    goto v25;
}

void fun_315(int64_t rdi) {
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
                goto addr_336_6;
            *reinterpret_cast<int32_t*>(rbp10 - 24) = reinterpret_cast<int32_t>(free);
        }
        __asm__("cdq ");
        if (reinterpret_cast<int1_t>((*reinterpret_cast<int32_t*>(rbp11 - 20) * *reinterpret_cast<int32_t*>(rbp12 - 4) + *reinterpret_cast<int32_t*>(rbp13 - 24)) % 20 == free)) {
            rax14 = g2d1;
            rdi15 = *rax14;
            rsi16 = reinterpret_cast<int32_t*>(0x2db);
            fun_2e2(rdi15);
        }
        rax17 = g2e9;
        rdi18 = *rax17;
        rcx19 = *reinterpret_cast<int32_t*>(rbp20 - 24);
        *rdi18 = *rsi16;
        rsi16 = reinterpret_cast<int32_t*>(0x30e);
        fun_315(rdi18 + 1);
    }
    addr_336_6:
    rax21 = g33d;
    rdi22 = *rax21;
    fun_355(rdi22, 0x347, 0x34e, rcx19);
    rax23 = g35c;
    rdi24 = *rax23;
    fun_36d(rdi24, 0x366, 0x34e, rcx19);
    goto v25;
}

void fun_7e5(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12);

void fun_7ee(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12);

void fun_7f7(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12);

void fun_800(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12);

void fun_809(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12);

void fun_812(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12);

void fun_81b(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12);

void fun_824(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12);

int32_t fun_7cd(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12) {
    int32_t eax13;
    int64_t rdi14;
    int64_t rbp15;
    int64_t rbp16;
    int64_t rbp17;
    int64_t rdi18;
    int64_t rbp19;
    int64_t rdi20;
    int64_t rbp21;
    int64_t rdi22;
    int64_t rbp23;
    int64_t rdi24;
    int64_t rbp25;
    int64_t rdi26;
    int64_t rbp27;
    int64_t rdi28;
    int64_t rbp29;
    int64_t rdi30;
    int64_t rbp31;
    int64_t v32;

    if (reinterpret_cast<int1_t>(eax13 == free)) {
        *reinterpret_cast<int32_t*>(&rdi14) = *reinterpret_cast<int32_t*>(rbp15 - 44);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi14) + 4) = reinterpret_cast<int32_t>(free);
        *reinterpret_cast<int32_t*>(&rsi) = *reinterpret_cast<int32_t*>(rbp16 - 56);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi) + 4) = reinterpret_cast<int32_t>(free);
        rdx = *reinterpret_cast<int64_t*>(rbp17 - 0x78);
        fun_7e5(rdi14, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11);
    }
    rdi18 = *reinterpret_cast<int64_t*>(rbp19 - 72);
    fun_7ee(rdi18, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11);
    rdi20 = *reinterpret_cast<int64_t*>(rbp21 - 80);
    fun_7f7(rdi20, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11);
    rdi22 = *reinterpret_cast<int64_t*>(rbp23 - 88);
    fun_800(rdi22, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11);
    rdi24 = *reinterpret_cast<int64_t*>(rbp25 - 96);
    fun_809(rdi24, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11);
    rdi26 = *reinterpret_cast<int64_t*>(rbp27 - 0x68);
    fun_812(rdi26, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11);
    rdi28 = *reinterpret_cast<int64_t*>(rbp29 - 0x70);
    fun_81b(rdi28, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11);
    rdi30 = *reinterpret_cast<int64_t*>(rbp31 - 0x78);
    fun_824(rdi30, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11);
    goto v32;
}

void fun_7e5(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12) {
    int64_t rdi13;
    int64_t rbp14;
    int64_t rdi15;
    int64_t rbp16;
    int64_t rdi17;
    int64_t rbp18;
    int64_t rdi19;
    int64_t rbp20;
    int64_t rdi21;
    int64_t rbp22;
    int64_t rdi23;
    int64_t rbp24;
    int64_t rdi25;
    int64_t rbp26;
    int64_t v27;

    rdi13 = *reinterpret_cast<int64_t*>(rbp14 - 72);
    fun_7ee(rdi13, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11);
    rdi15 = *reinterpret_cast<int64_t*>(rbp16 - 80);
    fun_7f7(rdi15, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11);
    rdi17 = *reinterpret_cast<int64_t*>(rbp18 - 88);
    fun_800(rdi17, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11);
    rdi19 = *reinterpret_cast<int64_t*>(rbp20 - 96);
    fun_809(rdi19, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11);
    rdi21 = *reinterpret_cast<int64_t*>(rbp22 - 0x68);
    fun_812(rdi21, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11);
    rdi23 = *reinterpret_cast<int64_t*>(rbp24 - 0x70);
    fun_81b(rdi23, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11);
    rdi25 = *reinterpret_cast<int64_t*>(rbp26 - 0x78);
    fun_824(rdi25, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11);
    goto v27;
}

void fun_7ee(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12) {
    int64_t rdi13;
    int64_t rbp14;
    int64_t rdi15;
    int64_t rbp16;
    int64_t rdi17;
    int64_t rbp18;
    int64_t rdi19;
    int64_t rbp20;
    int64_t rdi21;
    int64_t rbp22;
    int64_t rdi23;
    int64_t rbp24;
    int64_t v25;

    rdi13 = *reinterpret_cast<int64_t*>(rbp14 - 80);
    fun_7f7(rdi13, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11);
    rdi15 = *reinterpret_cast<int64_t*>(rbp16 - 88);
    fun_800(rdi15, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11);
    rdi17 = *reinterpret_cast<int64_t*>(rbp18 - 96);
    fun_809(rdi17, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11);
    rdi19 = *reinterpret_cast<int64_t*>(rbp20 - 0x68);
    fun_812(rdi19, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11);
    rdi21 = *reinterpret_cast<int64_t*>(rbp22 - 0x70);
    fun_81b(rdi21, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11);
    rdi23 = *reinterpret_cast<int64_t*>(rbp24 - 0x78);
    fun_824(rdi23, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11);
    goto v25;
}

void fun_7f7(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12) {
    int64_t rdi13;
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

    rdi13 = *reinterpret_cast<int64_t*>(rbp14 - 88);
    fun_800(rdi13, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11);
    rdi15 = *reinterpret_cast<int64_t*>(rbp16 - 96);
    fun_809(rdi15, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11);
    rdi17 = *reinterpret_cast<int64_t*>(rbp18 - 0x68);
    fun_812(rdi17, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11);
    rdi19 = *reinterpret_cast<int64_t*>(rbp20 - 0x70);
    fun_81b(rdi19, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11);
    rdi21 = *reinterpret_cast<int64_t*>(rbp22 - 0x78);
    fun_824(rdi21, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11);
    goto v23;
}

void fun_355(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t* rax5;
    int64_t rdi6;
    int64_t v7;

    rax5 = g35c;
    rdi6 = *rax5;
    fun_36d(rdi6, 0x366, rdx, rcx);
    goto v7;
}

void fun_800(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12) {
    int64_t rdi13;
    int64_t rbp14;
    int64_t rdi15;
    int64_t rbp16;
    int64_t rdi17;
    int64_t rbp18;
    int64_t rdi19;
    int64_t rbp20;
    int64_t v21;

    rdi13 = *reinterpret_cast<int64_t*>(rbp14 - 96);
    fun_809(rdi13, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11);
    rdi15 = *reinterpret_cast<int64_t*>(rbp16 - 0x68);
    fun_812(rdi15, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11);
    rdi17 = *reinterpret_cast<int64_t*>(rbp18 - 0x70);
    fun_81b(rdi17, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11);
    rdi19 = *reinterpret_cast<int64_t*>(rbp20 - 0x78);
    fun_824(rdi19, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11);
    goto v21;
}

int64_t* g271 = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_289(int64_t rdi);

void fun_26a(int64_t rdi, int64_t rsi) {
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

    rax3 = g271;
    rdi4 = *rax3;
    rsi5 = reinterpret_cast<int32_t*>(0x27b);
    fun_289(rdi4);
    *reinterpret_cast<int32_t*>(rbp6 - 20) = reinterpret_cast<int32_t>(free);
    while (*reinterpret_cast<int32_t*>(rbp7 - 20) < *reinterpret_cast<int32_t*>(rbp8 - 4)) {
        *reinterpret_cast<int32_t*>(rbp9 - 24) = reinterpret_cast<int32_t>(free);
        while (*reinterpret_cast<int32_t*>(rbp10 - 24) < *reinterpret_cast<int32_t*>(rbp11 - 8)) {
            __asm__("cdq ");
            if (reinterpret_cast<int1_t>((*reinterpret_cast<int32_t*>(rbp12 - 20) * *reinterpret_cast<int32_t*>(rbp13 - 4) + *reinterpret_cast<int32_t*>(rbp14 - 24)) % 20 == free)) {
                rax15 = g2d1;
                rdi16 = *rax15;
                rsi5 = reinterpret_cast<int32_t*>(0x2db);
                fun_2e2(rdi16);
            }
            rax17 = g2e9;
            rdi18 = *rax17;
            rcx19 = *reinterpret_cast<int32_t*>(rbp20 - 24);
            *rdi18 = *rsi5;
            rsi5 = reinterpret_cast<int32_t*>(0x30e);
            fun_315(rdi18 + 1);
            *reinterpret_cast<int32_t*>(rbp21 - 24) = *reinterpret_cast<int32_t*>(rbp22 - 24) + 1;
        }
        *reinterpret_cast<int32_t*>(rbp23 - 20) = *reinterpret_cast<int32_t*>(rbp24 - 20) + 1;
    }
    rax25 = g33d;
    rdi26 = *rax25;
    fun_355(rdi26, 0x347, 0x34e, rcx19);
    rax27 = g35c;
    rdi28 = *rax27;
    fun_36d(rdi28, 0x366, 0x34e, rcx19);
    goto v29;
}

void fun_36d(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t v5;

    goto v5;
}

int64_t fun_6cc(int64_t rdi, int64_t rsi);

int64_t fun_6df(int64_t rdi, int64_t rsi);

int64_t fun_6f2(int64_t rdi, int64_t rsi);

int64_t fun_705(int64_t rdi, int64_t rsi);

int64_t fun_718(int64_t rdi, int64_t rsi);

int64_t fun_72b(int64_t rdi, int64_t rsi);

void fun_762(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9);

void fun_7b0(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12);

void fun_6b9(int64_t rdi, int64_t rsi) {
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
    int64_t rax13;
    int64_t rbp14;
    int64_t rax15;
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
    int64_t r10_29;
    int64_t rbp30;
    int64_t rax31;
    int64_t rbp32;
    int64_t v33;
    int64_t rbp34;
    int64_t rdi35;
    int64_t rbp36;
    int64_t rsi37;
    int64_t rbp38;
    int64_t rdx39;
    int64_t rbp40;
    int64_t rcx41;
    int64_t rbp42;
    int64_t r8_43;
    int64_t rbp44;
    int64_t r9_45;
    int64_t rbp46;
    int64_t r14_47;
    int64_t rbp48;
    int64_t rbx49;
    int64_t rbp50;
    int64_t r11_51;
    int64_t rbp52;
    int64_t r10_53;
    int64_t rbp54;
    int64_t rax55;
    int64_t rbp56;
    int64_t v57;
    int64_t rbp58;
    int64_t rbp59;
    int64_t rdi60;
    int64_t rbp61;
    int64_t rdi62;
    int64_t rbp63;
    int32_t eax64;
    int64_t rdi65;
    int64_t rbp66;
    int64_t rdi67;
    int64_t rbp68;
    int64_t rdi69;
    int64_t rbp70;
    int64_t rdi71;
    int64_t rbp72;
    int64_t rdi73;
    int64_t rbp74;
    int64_t rdi75;
    int64_t rbp76;
    int64_t v77;
    int64_t rdi78;
    int64_t rbp79;
    int64_t rbp80;
    int64_t rbp81;

    *reinterpret_cast<int64_t*>(rbp3 - 72) = rax4;
    rax5 = fun_6cc(0xc3500, 8);
    *reinterpret_cast<int64_t*>(rbp6 - 80) = rax5;
    rax7 = fun_6df(0xdbba0, 8);
    *reinterpret_cast<int64_t*>(rbp8 - 88) = rax7;
    rax9 = fun_6f2(0xf1b30, 8);
    *reinterpret_cast<int64_t*>(rbp10 - 96) = rax9;
    rax11 = fun_705(0x107ac0, 8);
    *reinterpret_cast<int64_t*>(rbp12 - 0x68) = rax11;
    rax13 = fun_718(0x142440, 8);
    *reinterpret_cast<int64_t*>(rbp14 - 0x70) = rax13;
    rax15 = fun_72b(0xd6d80, 8);
    *reinterpret_cast<int64_t*>(rbp16 - 0x78) = rax15;
    *reinterpret_cast<int32_t*>(&rdi17) = *reinterpret_cast<int32_t*>(rbp18 - 44);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi17) + 4) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(&rsi19) = *reinterpret_cast<int32_t*>(rbp20 - 48);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi19) + 4) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(&rdx21) = *reinterpret_cast<int32_t*>(rbp22 - 52);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx21) + 4) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(&rcx23) = *reinterpret_cast<int32_t*>(rbp24 - 56);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx23) + 4) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(&r8_25) = *reinterpret_cast<int32_t*>(rbp26 - 60);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_25) + 4) = reinterpret_cast<int32_t>(free);
    r9_27 = *reinterpret_cast<int64_t*>(rbp28 - 80);
    r10_29 = *reinterpret_cast<int64_t*>(rbp30 - 0x68);
    rax31 = *reinterpret_cast<int64_t*>(rbp32 - 0x70);
    v33 = *reinterpret_cast<int64_t*>(rbp34 - 88);
    fun_762(rdi17, rsi19, rdx21, rcx23, r8_25, r9_27, v33, r10_29, rax31);
    *reinterpret_cast<int32_t*>(&rdi35) = *reinterpret_cast<int32_t*>(rbp36 - 44);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi35) + 4) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(&rsi37) = *reinterpret_cast<int32_t*>(rbp38 - 48);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi37) + 4) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(&rdx39) = *reinterpret_cast<int32_t*>(rbp40 - 52);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx39) + 4) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(&rcx41) = *reinterpret_cast<int32_t*>(rbp42 - 56);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx41) + 4) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(&r8_43) = *reinterpret_cast<int32_t*>(rbp44 - 60);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_43) + 4) = reinterpret_cast<int32_t>(free);
    r9_45 = *reinterpret_cast<int64_t*>(rbp46 - 72);
    r14_47 = *reinterpret_cast<int64_t*>(rbp48 - 88);
    rbx49 = *reinterpret_cast<int64_t*>(rbp50 - 96);
    r11_51 = *reinterpret_cast<int64_t*>(rbp52 - 0x68);
    r10_53 = *reinterpret_cast<int64_t*>(rbp54 - 0x70);
    rax55 = *reinterpret_cast<int64_t*>(rbp56 - 0x78);
    v57 = *reinterpret_cast<int64_t*>(rbp58 - 80);
    fun_7b0(rdi35, rsi37, rdx39, rcx41, r8_43, r9_45, v57, r14_47, rbx49, r11_51, r10_53, rax55);
    if (*reinterpret_cast<int32_t*>(rbp59 - 28) <= 42) {
        addr_7e5_10:
        rdi60 = *reinterpret_cast<int64_t*>(rbp61 - 72);
        fun_7ee(rdi60, rsi37, rdx39, rcx41, r8_43, r9_45, v57, r14_47, rbx49, r11_51, r10_53, rax55);
    } else {
        rdi62 = **reinterpret_cast<int64_t**>(rbp63 - 40);
        rsi37 = 0x7c8;
        eax64 = fun_7cd(rdi62, 0x7c8, rdx39, rcx41, r8_43, r9_45, v57, r14_47, rbx49, r11_51, r10_53, rax55);
        if (!reinterpret_cast<int1_t>(eax64 == free)) 
            goto addr_7e5_10; else 
            goto addr_7d6_13;
    }
    rdi65 = *reinterpret_cast<int64_t*>(rbp66 - 80);
    fun_7f7(rdi65, rsi37, rdx39, rcx41, r8_43, r9_45, v57, r14_47, rbx49, r11_51, r10_53, rax55);
    rdi67 = *reinterpret_cast<int64_t*>(rbp68 - 88);
    fun_800(rdi67, rsi37, rdx39, rcx41, r8_43, r9_45, v57, r14_47, rbx49, r11_51, r10_53, rax55);
    rdi69 = *reinterpret_cast<int64_t*>(rbp70 - 96);
    fun_809(rdi69, rsi37, rdx39, rcx41, r8_43, r9_45, v57, r14_47, rbx49, r11_51, r10_53, rax55);
    rdi71 = *reinterpret_cast<int64_t*>(rbp72 - 0x68);
    fun_812(rdi71, rsi37, rdx39, rcx41, r8_43, r9_45, v57, r14_47, rbx49, r11_51, r10_53, rax55);
    rdi73 = *reinterpret_cast<int64_t*>(rbp74 - 0x70);
    fun_81b(rdi73, rsi37, rdx39, rcx41, r8_43, r9_45, v57, r14_47, rbx49, r11_51, r10_53, rax55);
    rdi75 = *reinterpret_cast<int64_t*>(rbp76 - 0x78);
    fun_824(rdi75, rsi37, rdx39, rcx41, r8_43, r9_45, v57, r14_47, rbx49, r11_51, r10_53, rax55);
    goto v77;
    addr_7d6_13:
    *reinterpret_cast<int32_t*>(&rdi78) = *reinterpret_cast<int32_t*>(rbp79 - 44);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi78) + 4) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(&rsi37) = *reinterpret_cast<int32_t*>(rbp80 - 56);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi37) + 4) = reinterpret_cast<int32_t>(free);
    rdx39 = *reinterpret_cast<int64_t*>(rbp81 - 0x78);
    fun_7e5(rdi78, rsi37, rdx39, rcx41, r8_43, r9_45, v57, r14_47, rbx49, r11_51, r10_53, rax55);
    goto addr_7e5_10;
}

void fun_809(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12) {
    int64_t rdi13;
    int64_t rbp14;
    int64_t rdi15;
    int64_t rbp16;
    int64_t rdi17;
    int64_t rbp18;
    int64_t v19;

    rdi13 = *reinterpret_cast<int64_t*>(rbp14 - 0x68);
    fun_812(rdi13, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11);
    rdi15 = *reinterpret_cast<int64_t*>(rbp16 - 0x70);
    fun_81b(rdi15, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11);
    rdi17 = *reinterpret_cast<int64_t*>(rbp18 - 0x78);
    fun_824(rdi17, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11);
    goto v19;
}

void fun_289(int64_t rdi) {
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
                rax11 = g2d1;
                rdi12 = *rax11;
                rsi13 = reinterpret_cast<int32_t*>(0x2db);
                fun_2e2(rdi12);
            }
            rax14 = g2e9;
            rdi15 = *rax14;
            rcx16 = *reinterpret_cast<int32_t*>(rbp17 - 24);
            *rdi15 = *rsi13;
            rsi13 = reinterpret_cast<int32_t*>(0x30e);
            fun_315(rdi15 + 1);
            *reinterpret_cast<int32_t*>(rbp18 - 24) = *reinterpret_cast<int32_t*>(rbp19 - 24) + 1;
        }
        *reinterpret_cast<int32_t*>(rbp20 - 20) = *reinterpret_cast<int32_t*>(rbp21 - 20) + 1;
    }
    rax22 = g33d;
    rdi23 = *rax22;
    fun_355(rdi23, 0x347, 0x34e, rcx16);
    rax24 = g35c;
    rdi25 = *rax24;
    fun_36d(rdi25, 0x366, 0x34e, rcx16);
    goto v26;
}

int64_t fun_6cc(int64_t rdi, int64_t rsi) {
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
    int64_t rax13;
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
    int64_t r10_27;
    int64_t rbp28;
    int64_t rax29;
    int64_t rbp30;
    int64_t v31;
    int64_t rbp32;
    int64_t rdi33;
    int64_t rbp34;
    int64_t rsi35;
    int64_t rbp36;
    int64_t rdx37;
    int64_t rbp38;
    int64_t rcx39;
    int64_t rbp40;
    int64_t r8_41;
    int64_t rbp42;
    int64_t r9_43;
    int64_t rbp44;
    int64_t r14_45;
    int64_t rbp46;
    int64_t rbx47;
    int64_t rbp48;
    int64_t r11_49;
    int64_t rbp50;
    int64_t r10_51;
    int64_t rbp52;
    int64_t rax53;
    int64_t rbp54;
    int64_t v55;
    int64_t rbp56;
    int64_t rbp57;
    int64_t rdi58;
    int64_t rbp59;
    int64_t rdi60;
    int64_t rbp61;
    int32_t eax62;
    int64_t rdi63;
    int64_t rbp64;
    int64_t rdi65;
    int64_t rbp66;
    int64_t rdi67;
    int64_t rbp68;
    int64_t rdi69;
    int64_t rbp70;
    int64_t rdi71;
    int64_t rbp72;
    int64_t rdi73;
    int64_t rbp74;
    int64_t v75;
    int64_t rdi76;
    int64_t rbp77;
    int64_t rbp78;
    int64_t rbp79;

    *reinterpret_cast<int64_t*>(rbp3 - 80) = rax4;
    rax5 = fun_6df(0xdbba0, 8);
    *reinterpret_cast<int64_t*>(rbp6 - 88) = rax5;
    rax7 = fun_6f2(0xf1b30, 8);
    *reinterpret_cast<int64_t*>(rbp8 - 96) = rax7;
    rax9 = fun_705(0x107ac0, 8);
    *reinterpret_cast<int64_t*>(rbp10 - 0x68) = rax9;
    rax11 = fun_718(0x142440, 8);
    *reinterpret_cast<int64_t*>(rbp12 - 0x70) = rax11;
    rax13 = fun_72b(0xd6d80, 8);
    *reinterpret_cast<int64_t*>(rbp14 - 0x78) = rax13;
    *reinterpret_cast<int32_t*>(&rdi15) = *reinterpret_cast<int32_t*>(rbp16 - 44);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi15) + 4) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(&rsi17) = *reinterpret_cast<int32_t*>(rbp18 - 48);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi17) + 4) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(&rdx19) = *reinterpret_cast<int32_t*>(rbp20 - 52);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx19) + 4) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(&rcx21) = *reinterpret_cast<int32_t*>(rbp22 - 56);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx21) + 4) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(&r8_23) = *reinterpret_cast<int32_t*>(rbp24 - 60);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_23) + 4) = reinterpret_cast<int32_t>(free);
    r9_25 = *reinterpret_cast<int64_t*>(rbp26 - 80);
    r10_27 = *reinterpret_cast<int64_t*>(rbp28 - 0x68);
    rax29 = *reinterpret_cast<int64_t*>(rbp30 - 0x70);
    v31 = *reinterpret_cast<int64_t*>(rbp32 - 88);
    fun_762(rdi15, rsi17, rdx19, rcx21, r8_23, r9_25, v31, r10_27, rax29);
    *reinterpret_cast<int32_t*>(&rdi33) = *reinterpret_cast<int32_t*>(rbp34 - 44);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi33) + 4) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(&rsi35) = *reinterpret_cast<int32_t*>(rbp36 - 48);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi35) + 4) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(&rdx37) = *reinterpret_cast<int32_t*>(rbp38 - 52);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx37) + 4) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(&rcx39) = *reinterpret_cast<int32_t*>(rbp40 - 56);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx39) + 4) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(&r8_41) = *reinterpret_cast<int32_t*>(rbp42 - 60);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_41) + 4) = reinterpret_cast<int32_t>(free);
    r9_43 = *reinterpret_cast<int64_t*>(rbp44 - 72);
    r14_45 = *reinterpret_cast<int64_t*>(rbp46 - 88);
    rbx47 = *reinterpret_cast<int64_t*>(rbp48 - 96);
    r11_49 = *reinterpret_cast<int64_t*>(rbp50 - 0x68);
    r10_51 = *reinterpret_cast<int64_t*>(rbp52 - 0x70);
    rax53 = *reinterpret_cast<int64_t*>(rbp54 - 0x78);
    v55 = *reinterpret_cast<int64_t*>(rbp56 - 80);
    fun_7b0(rdi33, rsi35, rdx37, rcx39, r8_41, r9_43, v55, r14_45, rbx47, r11_49, r10_51, rax53);
    if (*reinterpret_cast<int32_t*>(rbp57 - 28) <= 42) {
        addr_7e5_9:
        rdi58 = *reinterpret_cast<int64_t*>(rbp59 - 72);
        fun_7ee(rdi58, rsi35, rdx37, rcx39, r8_41, r9_43, v55, r14_45, rbx47, r11_49, r10_51, rax53);
    } else {
        rdi60 = **reinterpret_cast<int64_t**>(rbp61 - 40);
        rsi35 = 0x7c8;
        eax62 = fun_7cd(rdi60, 0x7c8, rdx37, rcx39, r8_41, r9_43, v55, r14_45, rbx47, r11_49, r10_51, rax53);
        if (!reinterpret_cast<int1_t>(eax62 == free)) 
            goto addr_7e5_9; else 
            goto addr_7d6_12;
    }
    rdi63 = *reinterpret_cast<int64_t*>(rbp64 - 80);
    fun_7f7(rdi63, rsi35, rdx37, rcx39, r8_41, r9_43, v55, r14_45, rbx47, r11_49, r10_51, rax53);
    rdi65 = *reinterpret_cast<int64_t*>(rbp66 - 88);
    fun_800(rdi65, rsi35, rdx37, rcx39, r8_41, r9_43, v55, r14_45, rbx47, r11_49, r10_51, rax53);
    rdi67 = *reinterpret_cast<int64_t*>(rbp68 - 96);
    fun_809(rdi67, rsi35, rdx37, rcx39, r8_41, r9_43, v55, r14_45, rbx47, r11_49, r10_51, rax53);
    rdi69 = *reinterpret_cast<int64_t*>(rbp70 - 0x68);
    fun_812(rdi69, rsi35, rdx37, rcx39, r8_41, r9_43, v55, r14_45, rbx47, r11_49, r10_51, rax53);
    rdi71 = *reinterpret_cast<int64_t*>(rbp72 - 0x70);
    fun_81b(rdi71, rsi35, rdx37, rcx39, r8_41, r9_43, v55, r14_45, rbx47, r11_49, r10_51, rax53);
    rdi73 = *reinterpret_cast<int64_t*>(rbp74 - 0x78);
    fun_824(rdi73, rsi35, rdx37, rcx39, r8_41, r9_43, v55, r14_45, rbx47, r11_49, r10_51, rax53);
    goto v75;
    addr_7d6_12:
    *reinterpret_cast<int32_t*>(&rdi76) = *reinterpret_cast<int32_t*>(rbp77 - 44);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi76) + 4) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(&rsi35) = *reinterpret_cast<int32_t*>(rbp78 - 56);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi35) + 4) = reinterpret_cast<int32_t>(free);
    rdx37 = *reinterpret_cast<int64_t*>(rbp79 - 0x78);
    fun_7e5(rdi76, rsi35, rdx37, rcx39, r8_41, r9_43, v55, r14_45, rbx47, r11_49, r10_51, rax53);
    goto addr_7e5_9;
}

void fun_812(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12) {
    int64_t rdi13;
    int64_t rbp14;
    int64_t rdi15;
    int64_t rbp16;
    int64_t v17;

    rdi13 = *reinterpret_cast<int64_t*>(rbp14 - 0x70);
    fun_81b(rdi13, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11);
    rdi15 = *reinterpret_cast<int64_t*>(rbp16 - 0x78);
    fun_824(rdi15, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11);
    goto v17;
}

int64_t fun_6df(int64_t rdi, int64_t rsi) {
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
    int64_t r8_21;
    int64_t rbp22;
    int64_t r9_23;
    int64_t rbp24;
    int64_t r10_25;
    int64_t rbp26;
    int64_t rax27;
    int64_t rbp28;
    int64_t v29;
    int64_t rbp30;
    int64_t rdi31;
    int64_t rbp32;
    int64_t rsi33;
    int64_t rbp34;
    int64_t rdx35;
    int64_t rbp36;
    int64_t rcx37;
    int64_t rbp38;
    int64_t r8_39;
    int64_t rbp40;
    int64_t r9_41;
    int64_t rbp42;
    int64_t r14_43;
    int64_t rbp44;
    int64_t rbx45;
    int64_t rbp46;
    int64_t r11_47;
    int64_t rbp48;
    int64_t r10_49;
    int64_t rbp50;
    int64_t rax51;
    int64_t rbp52;
    int64_t v53;
    int64_t rbp54;
    int64_t rbp55;
    int64_t rdi56;
    int64_t rbp57;
    int64_t rdi58;
    int64_t rbp59;
    int32_t eax60;
    int64_t rdi61;
    int64_t rbp62;
    int64_t rdi63;
    int64_t rbp64;
    int64_t rdi65;
    int64_t rbp66;
    int64_t rdi67;
    int64_t rbp68;
    int64_t rdi69;
    int64_t rbp70;
    int64_t rdi71;
    int64_t rbp72;
    int64_t v73;
    int64_t rdi74;
    int64_t rbp75;
    int64_t rbp76;
    int64_t rbp77;

    *reinterpret_cast<int64_t*>(rbp3 - 88) = rax4;
    rax5 = fun_6f2(0xf1b30, 8);
    *reinterpret_cast<int64_t*>(rbp6 - 96) = rax5;
    rax7 = fun_705(0x107ac0, 8);
    *reinterpret_cast<int64_t*>(rbp8 - 0x68) = rax7;
    rax9 = fun_718(0x142440, 8);
    *reinterpret_cast<int64_t*>(rbp10 - 0x70) = rax9;
    rax11 = fun_72b(0xd6d80, 8);
    *reinterpret_cast<int64_t*>(rbp12 - 0x78) = rax11;
    *reinterpret_cast<int32_t*>(&rdi13) = *reinterpret_cast<int32_t*>(rbp14 - 44);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi13) + 4) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(&rsi15) = *reinterpret_cast<int32_t*>(rbp16 - 48);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi15) + 4) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(&rdx17) = *reinterpret_cast<int32_t*>(rbp18 - 52);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx17) + 4) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(&rcx19) = *reinterpret_cast<int32_t*>(rbp20 - 56);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx19) + 4) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(&r8_21) = *reinterpret_cast<int32_t*>(rbp22 - 60);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_21) + 4) = reinterpret_cast<int32_t>(free);
    r9_23 = *reinterpret_cast<int64_t*>(rbp24 - 80);
    r10_25 = *reinterpret_cast<int64_t*>(rbp26 - 0x68);
    rax27 = *reinterpret_cast<int64_t*>(rbp28 - 0x70);
    v29 = *reinterpret_cast<int64_t*>(rbp30 - 88);
    fun_762(rdi13, rsi15, rdx17, rcx19, r8_21, r9_23, v29, r10_25, rax27);
    *reinterpret_cast<int32_t*>(&rdi31) = *reinterpret_cast<int32_t*>(rbp32 - 44);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi31) + 4) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(&rsi33) = *reinterpret_cast<int32_t*>(rbp34 - 48);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi33) + 4) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(&rdx35) = *reinterpret_cast<int32_t*>(rbp36 - 52);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx35) + 4) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(&rcx37) = *reinterpret_cast<int32_t*>(rbp38 - 56);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx37) + 4) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(&r8_39) = *reinterpret_cast<int32_t*>(rbp40 - 60);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_39) + 4) = reinterpret_cast<int32_t>(free);
    r9_41 = *reinterpret_cast<int64_t*>(rbp42 - 72);
    r14_43 = *reinterpret_cast<int64_t*>(rbp44 - 88);
    rbx45 = *reinterpret_cast<int64_t*>(rbp46 - 96);
    r11_47 = *reinterpret_cast<int64_t*>(rbp48 - 0x68);
    r10_49 = *reinterpret_cast<int64_t*>(rbp50 - 0x70);
    rax51 = *reinterpret_cast<int64_t*>(rbp52 - 0x78);
    v53 = *reinterpret_cast<int64_t*>(rbp54 - 80);
    fun_7b0(rdi31, rsi33, rdx35, rcx37, r8_39, r9_41, v53, r14_43, rbx45, r11_47, r10_49, rax51);
    if (*reinterpret_cast<int32_t*>(rbp55 - 28) <= 42) {
        addr_7e5_8:
        rdi56 = *reinterpret_cast<int64_t*>(rbp57 - 72);
        fun_7ee(rdi56, rsi33, rdx35, rcx37, r8_39, r9_41, v53, r14_43, rbx45, r11_47, r10_49, rax51);
    } else {
        rdi58 = **reinterpret_cast<int64_t**>(rbp59 - 40);
        rsi33 = 0x7c8;
        eax60 = fun_7cd(rdi58, 0x7c8, rdx35, rcx37, r8_39, r9_41, v53, r14_43, rbx45, r11_47, r10_49, rax51);
        if (!reinterpret_cast<int1_t>(eax60 == free)) 
            goto addr_7e5_8; else 
            goto addr_7d6_11;
    }
    rdi61 = *reinterpret_cast<int64_t*>(rbp62 - 80);
    fun_7f7(rdi61, rsi33, rdx35, rcx37, r8_39, r9_41, v53, r14_43, rbx45, r11_47, r10_49, rax51);
    rdi63 = *reinterpret_cast<int64_t*>(rbp64 - 88);
    fun_800(rdi63, rsi33, rdx35, rcx37, r8_39, r9_41, v53, r14_43, rbx45, r11_47, r10_49, rax51);
    rdi65 = *reinterpret_cast<int64_t*>(rbp66 - 96);
    fun_809(rdi65, rsi33, rdx35, rcx37, r8_39, r9_41, v53, r14_43, rbx45, r11_47, r10_49, rax51);
    rdi67 = *reinterpret_cast<int64_t*>(rbp68 - 0x68);
    fun_812(rdi67, rsi33, rdx35, rcx37, r8_39, r9_41, v53, r14_43, rbx45, r11_47, r10_49, rax51);
    rdi69 = *reinterpret_cast<int64_t*>(rbp70 - 0x70);
    fun_81b(rdi69, rsi33, rdx35, rcx37, r8_39, r9_41, v53, r14_43, rbx45, r11_47, r10_49, rax51);
    rdi71 = *reinterpret_cast<int64_t*>(rbp72 - 0x78);
    fun_824(rdi71, rsi33, rdx35, rcx37, r8_39, r9_41, v53, r14_43, rbx45, r11_47, r10_49, rax51);
    goto v73;
    addr_7d6_11:
    *reinterpret_cast<int32_t*>(&rdi74) = *reinterpret_cast<int32_t*>(rbp75 - 44);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi74) + 4) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(&rsi33) = *reinterpret_cast<int32_t*>(rbp76 - 56);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi33) + 4) = reinterpret_cast<int32_t>(free);
    rdx35 = *reinterpret_cast<int64_t*>(rbp77 - 0x78);
    fun_7e5(rdi74, rsi33, rdx35, rcx37, r8_39, r9_41, v53, r14_43, rbx45, r11_47, r10_49, rax51);
    goto addr_7e5_8;
}

void fun_81b(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12) {
    int64_t rdi13;
    int64_t rbp14;
    int64_t v15;

    rdi13 = *reinterpret_cast<int64_t*>(rbp14 - 0x78);
    fun_824(rdi13, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11);
    goto v15;
}

int64_t fun_6f2(int64_t rdi, int64_t rsi) {
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
    int64_t r8_19;
    int64_t rbp20;
    int64_t r9_21;
    int64_t rbp22;
    int64_t r10_23;
    int64_t rbp24;
    int64_t rax25;
    int64_t rbp26;
    int64_t v27;
    int64_t rbp28;
    int64_t rdi29;
    int64_t rbp30;
    int64_t rsi31;
    int64_t rbp32;
    int64_t rdx33;
    int64_t rbp34;
    int64_t rcx35;
    int64_t rbp36;
    int64_t r8_37;
    int64_t rbp38;
    int64_t r9_39;
    int64_t rbp40;
    int64_t r14_41;
    int64_t rbp42;
    int64_t rbx43;
    int64_t rbp44;
    int64_t r11_45;
    int64_t rbp46;
    int64_t r10_47;
    int64_t rbp48;
    int64_t rax49;
    int64_t rbp50;
    int64_t v51;
    int64_t rbp52;
    int64_t rbp53;
    int64_t rdi54;
    int64_t rbp55;
    int64_t rdi56;
    int64_t rbp57;
    int32_t eax58;
    int64_t rdi59;
    int64_t rbp60;
    int64_t rdi61;
    int64_t rbp62;
    int64_t rdi63;
    int64_t rbp64;
    int64_t rdi65;
    int64_t rbp66;
    int64_t rdi67;
    int64_t rbp68;
    int64_t rdi69;
    int64_t rbp70;
    int64_t v71;
    int64_t rdi72;
    int64_t rbp73;
    int64_t rbp74;
    int64_t rbp75;

    *reinterpret_cast<int64_t*>(rbp3 - 96) = rax4;
    rax5 = fun_705(0x107ac0, 8);
    *reinterpret_cast<int64_t*>(rbp6 - 0x68) = rax5;
    rax7 = fun_718(0x142440, 8);
    *reinterpret_cast<int64_t*>(rbp8 - 0x70) = rax7;
    rax9 = fun_72b(0xd6d80, 8);
    *reinterpret_cast<int64_t*>(rbp10 - 0x78) = rax9;
    *reinterpret_cast<int32_t*>(&rdi11) = *reinterpret_cast<int32_t*>(rbp12 - 44);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi11) + 4) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(&rsi13) = *reinterpret_cast<int32_t*>(rbp14 - 48);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi13) + 4) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(&rdx15) = *reinterpret_cast<int32_t*>(rbp16 - 52);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx15) + 4) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(&rcx17) = *reinterpret_cast<int32_t*>(rbp18 - 56);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx17) + 4) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(&r8_19) = *reinterpret_cast<int32_t*>(rbp20 - 60);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_19) + 4) = reinterpret_cast<int32_t>(free);
    r9_21 = *reinterpret_cast<int64_t*>(rbp22 - 80);
    r10_23 = *reinterpret_cast<int64_t*>(rbp24 - 0x68);
    rax25 = *reinterpret_cast<int64_t*>(rbp26 - 0x70);
    v27 = *reinterpret_cast<int64_t*>(rbp28 - 88);
    fun_762(rdi11, rsi13, rdx15, rcx17, r8_19, r9_21, v27, r10_23, rax25);
    *reinterpret_cast<int32_t*>(&rdi29) = *reinterpret_cast<int32_t*>(rbp30 - 44);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi29) + 4) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(&rsi31) = *reinterpret_cast<int32_t*>(rbp32 - 48);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi31) + 4) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(&rdx33) = *reinterpret_cast<int32_t*>(rbp34 - 52);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx33) + 4) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(&rcx35) = *reinterpret_cast<int32_t*>(rbp36 - 56);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx35) + 4) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(&r8_37) = *reinterpret_cast<int32_t*>(rbp38 - 60);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_37) + 4) = reinterpret_cast<int32_t>(free);
    r9_39 = *reinterpret_cast<int64_t*>(rbp40 - 72);
    r14_41 = *reinterpret_cast<int64_t*>(rbp42 - 88);
    rbx43 = *reinterpret_cast<int64_t*>(rbp44 - 96);
    r11_45 = *reinterpret_cast<int64_t*>(rbp46 - 0x68);
    r10_47 = *reinterpret_cast<int64_t*>(rbp48 - 0x70);
    rax49 = *reinterpret_cast<int64_t*>(rbp50 - 0x78);
    v51 = *reinterpret_cast<int64_t*>(rbp52 - 80);
    fun_7b0(rdi29, rsi31, rdx33, rcx35, r8_37, r9_39, v51, r14_41, rbx43, r11_45, r10_47, rax49);
    if (*reinterpret_cast<int32_t*>(rbp53 - 28) <= 42) {
        addr_7e5_7:
        rdi54 = *reinterpret_cast<int64_t*>(rbp55 - 72);
        fun_7ee(rdi54, rsi31, rdx33, rcx35, r8_37, r9_39, v51, r14_41, rbx43, r11_45, r10_47, rax49);
    } else {
        rdi56 = **reinterpret_cast<int64_t**>(rbp57 - 40);
        rsi31 = 0x7c8;
        eax58 = fun_7cd(rdi56, 0x7c8, rdx33, rcx35, r8_37, r9_39, v51, r14_41, rbx43, r11_45, r10_47, rax49);
        if (!reinterpret_cast<int1_t>(eax58 == free)) 
            goto addr_7e5_7; else 
            goto addr_7d6_10;
    }
    rdi59 = *reinterpret_cast<int64_t*>(rbp60 - 80);
    fun_7f7(rdi59, rsi31, rdx33, rcx35, r8_37, r9_39, v51, r14_41, rbx43, r11_45, r10_47, rax49);
    rdi61 = *reinterpret_cast<int64_t*>(rbp62 - 88);
    fun_800(rdi61, rsi31, rdx33, rcx35, r8_37, r9_39, v51, r14_41, rbx43, r11_45, r10_47, rax49);
    rdi63 = *reinterpret_cast<int64_t*>(rbp64 - 96);
    fun_809(rdi63, rsi31, rdx33, rcx35, r8_37, r9_39, v51, r14_41, rbx43, r11_45, r10_47, rax49);
    rdi65 = *reinterpret_cast<int64_t*>(rbp66 - 0x68);
    fun_812(rdi65, rsi31, rdx33, rcx35, r8_37, r9_39, v51, r14_41, rbx43, r11_45, r10_47, rax49);
    rdi67 = *reinterpret_cast<int64_t*>(rbp68 - 0x70);
    fun_81b(rdi67, rsi31, rdx33, rcx35, r8_37, r9_39, v51, r14_41, rbx43, r11_45, r10_47, rax49);
    rdi69 = *reinterpret_cast<int64_t*>(rbp70 - 0x78);
    fun_824(rdi69, rsi31, rdx33, rcx35, r8_37, r9_39, v51, r14_41, rbx43, r11_45, r10_47, rax49);
    goto v71;
    addr_7d6_10:
    *reinterpret_cast<int32_t*>(&rdi72) = *reinterpret_cast<int32_t*>(rbp73 - 44);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi72) + 4) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(&rsi31) = *reinterpret_cast<int32_t*>(rbp74 - 56);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi31) + 4) = reinterpret_cast<int32_t>(free);
    rdx33 = *reinterpret_cast<int64_t*>(rbp75 - 0x78);
    fun_7e5(rdi72, rsi31, rdx33, rcx35, r8_37, r9_39, v51, r14_41, rbx43, r11_45, r10_47, rax49);
    goto addr_7e5_7;
}

void fun_824(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12) {
    int64_t v13;

    goto v13;
}

int64_t fun_705(int64_t rdi, int64_t rsi) {
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
    int64_t r8_17;
    int64_t rbp18;
    int64_t r9_19;
    int64_t rbp20;
    int64_t r10_21;
    int64_t rbp22;
    int64_t rax23;
    int64_t rbp24;
    int64_t v25;
    int64_t rbp26;
    int64_t rdi27;
    int64_t rbp28;
    int64_t rsi29;
    int64_t rbp30;
    int64_t rdx31;
    int64_t rbp32;
    int64_t rcx33;
    int64_t rbp34;
    int64_t r8_35;
    int64_t rbp36;
    int64_t r9_37;
    int64_t rbp38;
    int64_t r14_39;
    int64_t rbp40;
    int64_t rbx41;
    int64_t rbp42;
    int64_t r11_43;
    int64_t rbp44;
    int64_t r10_45;
    int64_t rbp46;
    int64_t rax47;
    int64_t rbp48;
    int64_t v49;
    int64_t rbp50;
    int64_t rbp51;
    int64_t rdi52;
    int64_t rbp53;
    int64_t rdi54;
    int64_t rbp55;
    int32_t eax56;
    int64_t rdi57;
    int64_t rbp58;
    int64_t rdi59;
    int64_t rbp60;
    int64_t rdi61;
    int64_t rbp62;
    int64_t rdi63;
    int64_t rbp64;
    int64_t rdi65;
    int64_t rbp66;
    int64_t rdi67;
    int64_t rbp68;
    int64_t v69;
    int64_t rdi70;
    int64_t rbp71;
    int64_t rbp72;
    int64_t rbp73;

    *reinterpret_cast<int64_t*>(rbp3 - 0x68) = rax4;
    rax5 = fun_718(0x142440, 8);
    *reinterpret_cast<int64_t*>(rbp6 - 0x70) = rax5;
    rax7 = fun_72b(0xd6d80, 8);
    *reinterpret_cast<int64_t*>(rbp8 - 0x78) = rax7;
    *reinterpret_cast<int32_t*>(&rdi9) = *reinterpret_cast<int32_t*>(rbp10 - 44);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi9) + 4) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(&rsi11) = *reinterpret_cast<int32_t*>(rbp12 - 48);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi11) + 4) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(&rdx13) = *reinterpret_cast<int32_t*>(rbp14 - 52);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx13) + 4) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(&rcx15) = *reinterpret_cast<int32_t*>(rbp16 - 56);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx15) + 4) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(&r8_17) = *reinterpret_cast<int32_t*>(rbp18 - 60);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_17) + 4) = reinterpret_cast<int32_t>(free);
    r9_19 = *reinterpret_cast<int64_t*>(rbp20 - 80);
    r10_21 = *reinterpret_cast<int64_t*>(rbp22 - 0x68);
    rax23 = *reinterpret_cast<int64_t*>(rbp24 - 0x70);
    v25 = *reinterpret_cast<int64_t*>(rbp26 - 88);
    fun_762(rdi9, rsi11, rdx13, rcx15, r8_17, r9_19, v25, r10_21, rax23);
    *reinterpret_cast<int32_t*>(&rdi27) = *reinterpret_cast<int32_t*>(rbp28 - 44);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi27) + 4) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(&rsi29) = *reinterpret_cast<int32_t*>(rbp30 - 48);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi29) + 4) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(&rdx31) = *reinterpret_cast<int32_t*>(rbp32 - 52);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx31) + 4) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(&rcx33) = *reinterpret_cast<int32_t*>(rbp34 - 56);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx33) + 4) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(&r8_35) = *reinterpret_cast<int32_t*>(rbp36 - 60);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_35) + 4) = reinterpret_cast<int32_t>(free);
    r9_37 = *reinterpret_cast<int64_t*>(rbp38 - 72);
    r14_39 = *reinterpret_cast<int64_t*>(rbp40 - 88);
    rbx41 = *reinterpret_cast<int64_t*>(rbp42 - 96);
    r11_43 = *reinterpret_cast<int64_t*>(rbp44 - 0x68);
    r10_45 = *reinterpret_cast<int64_t*>(rbp46 - 0x70);
    rax47 = *reinterpret_cast<int64_t*>(rbp48 - 0x78);
    v49 = *reinterpret_cast<int64_t*>(rbp50 - 80);
    fun_7b0(rdi27, rsi29, rdx31, rcx33, r8_35, r9_37, v49, r14_39, rbx41, r11_43, r10_45, rax47);
    if (*reinterpret_cast<int32_t*>(rbp51 - 28) <= 42) {
        addr_7e5_6:
        rdi52 = *reinterpret_cast<int64_t*>(rbp53 - 72);
        fun_7ee(rdi52, rsi29, rdx31, rcx33, r8_35, r9_37, v49, r14_39, rbx41, r11_43, r10_45, rax47);
    } else {
        rdi54 = **reinterpret_cast<int64_t**>(rbp55 - 40);
        rsi29 = 0x7c8;
        eax56 = fun_7cd(rdi54, 0x7c8, rdx31, rcx33, r8_35, r9_37, v49, r14_39, rbx41, r11_43, r10_45, rax47);
        if (!reinterpret_cast<int1_t>(eax56 == free)) 
            goto addr_7e5_6; else 
            goto addr_7d6_9;
    }
    rdi57 = *reinterpret_cast<int64_t*>(rbp58 - 80);
    fun_7f7(rdi57, rsi29, rdx31, rcx33, r8_35, r9_37, v49, r14_39, rbx41, r11_43, r10_45, rax47);
    rdi59 = *reinterpret_cast<int64_t*>(rbp60 - 88);
    fun_800(rdi59, rsi29, rdx31, rcx33, r8_35, r9_37, v49, r14_39, rbx41, r11_43, r10_45, rax47);
    rdi61 = *reinterpret_cast<int64_t*>(rbp62 - 96);
    fun_809(rdi61, rsi29, rdx31, rcx33, r8_35, r9_37, v49, r14_39, rbx41, r11_43, r10_45, rax47);
    rdi63 = *reinterpret_cast<int64_t*>(rbp64 - 0x68);
    fun_812(rdi63, rsi29, rdx31, rcx33, r8_35, r9_37, v49, r14_39, rbx41, r11_43, r10_45, rax47);
    rdi65 = *reinterpret_cast<int64_t*>(rbp66 - 0x70);
    fun_81b(rdi65, rsi29, rdx31, rcx33, r8_35, r9_37, v49, r14_39, rbx41, r11_43, r10_45, rax47);
    rdi67 = *reinterpret_cast<int64_t*>(rbp68 - 0x78);
    fun_824(rdi67, rsi29, rdx31, rcx33, r8_35, r9_37, v49, r14_39, rbx41, r11_43, r10_45, rax47);
    goto v69;
    addr_7d6_9:
    *reinterpret_cast<int32_t*>(&rdi70) = *reinterpret_cast<int32_t*>(rbp71 - 44);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi70) + 4) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(&rsi29) = *reinterpret_cast<int32_t*>(rbp72 - 56);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi29) + 4) = reinterpret_cast<int32_t>(free);
    rdx31 = *reinterpret_cast<int64_t*>(rbp73 - 0x78);
    fun_7e5(rdi70, rsi29, rdx31, rcx33, r8_35, r9_37, v49, r14_39, rbx41, r11_43, r10_45, rax47);
    goto addr_7e5_6;
}

int64_t fun_718(int64_t rdi, int64_t rsi) {
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
    int64_t r8_15;
    int64_t rbp16;
    int64_t r9_17;
    int64_t rbp18;
    int64_t r10_19;
    int64_t rbp20;
    int64_t rax21;
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
    int64_t r14_37;
    int64_t rbp38;
    int64_t rbx39;
    int64_t rbp40;
    int64_t r11_41;
    int64_t rbp42;
    int64_t r10_43;
    int64_t rbp44;
    int64_t rax45;
    int64_t rbp46;
    int64_t v47;
    int64_t rbp48;
    int64_t rbp49;
    int64_t rdi50;
    int64_t rbp51;
    int64_t rdi52;
    int64_t rbp53;
    int32_t eax54;
    int64_t rdi55;
    int64_t rbp56;
    int64_t rdi57;
    int64_t rbp58;
    int64_t rdi59;
    int64_t rbp60;
    int64_t rdi61;
    int64_t rbp62;
    int64_t rdi63;
    int64_t rbp64;
    int64_t rdi65;
    int64_t rbp66;
    int64_t v67;
    int64_t rdi68;
    int64_t rbp69;
    int64_t rbp70;
    int64_t rbp71;

    *reinterpret_cast<int64_t*>(rbp3 - 0x70) = rax4;
    rax5 = fun_72b(0xd6d80, 8);
    *reinterpret_cast<int64_t*>(rbp6 - 0x78) = rax5;
    *reinterpret_cast<int32_t*>(&rdi7) = *reinterpret_cast<int32_t*>(rbp8 - 44);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi7) + 4) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(&rsi9) = *reinterpret_cast<int32_t*>(rbp10 - 48);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi9) + 4) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(&rdx11) = *reinterpret_cast<int32_t*>(rbp12 - 52);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx11) + 4) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(&rcx13) = *reinterpret_cast<int32_t*>(rbp14 - 56);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx13) + 4) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(&r8_15) = *reinterpret_cast<int32_t*>(rbp16 - 60);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_15) + 4) = reinterpret_cast<int32_t>(free);
    r9_17 = *reinterpret_cast<int64_t*>(rbp18 - 80);
    r10_19 = *reinterpret_cast<int64_t*>(rbp20 - 0x68);
    rax21 = *reinterpret_cast<int64_t*>(rbp22 - 0x70);
    v23 = *reinterpret_cast<int64_t*>(rbp24 - 88);
    fun_762(rdi7, rsi9, rdx11, rcx13, r8_15, r9_17, v23, r10_19, rax21);
    *reinterpret_cast<int32_t*>(&rdi25) = *reinterpret_cast<int32_t*>(rbp26 - 44);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi25) + 4) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(&rsi27) = *reinterpret_cast<int32_t*>(rbp28 - 48);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi27) + 4) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(&rdx29) = *reinterpret_cast<int32_t*>(rbp30 - 52);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx29) + 4) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(&rcx31) = *reinterpret_cast<int32_t*>(rbp32 - 56);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx31) + 4) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(&r8_33) = *reinterpret_cast<int32_t*>(rbp34 - 60);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_33) + 4) = reinterpret_cast<int32_t>(free);
    r9_35 = *reinterpret_cast<int64_t*>(rbp36 - 72);
    r14_37 = *reinterpret_cast<int64_t*>(rbp38 - 88);
    rbx39 = *reinterpret_cast<int64_t*>(rbp40 - 96);
    r11_41 = *reinterpret_cast<int64_t*>(rbp42 - 0x68);
    r10_43 = *reinterpret_cast<int64_t*>(rbp44 - 0x70);
    rax45 = *reinterpret_cast<int64_t*>(rbp46 - 0x78);
    v47 = *reinterpret_cast<int64_t*>(rbp48 - 80);
    fun_7b0(rdi25, rsi27, rdx29, rcx31, r8_33, r9_35, v47, r14_37, rbx39, r11_41, r10_43, rax45);
    if (*reinterpret_cast<int32_t*>(rbp49 - 28) <= 42) {
        addr_7e5_5:
        rdi50 = *reinterpret_cast<int64_t*>(rbp51 - 72);
        fun_7ee(rdi50, rsi27, rdx29, rcx31, r8_33, r9_35, v47, r14_37, rbx39, r11_41, r10_43, rax45);
    } else {
        rdi52 = **reinterpret_cast<int64_t**>(rbp53 - 40);
        rsi27 = 0x7c8;
        eax54 = fun_7cd(rdi52, 0x7c8, rdx29, rcx31, r8_33, r9_35, v47, r14_37, rbx39, r11_41, r10_43, rax45);
        if (!reinterpret_cast<int1_t>(eax54 == free)) 
            goto addr_7e5_5; else 
            goto addr_7d6_8;
    }
    rdi55 = *reinterpret_cast<int64_t*>(rbp56 - 80);
    fun_7f7(rdi55, rsi27, rdx29, rcx31, r8_33, r9_35, v47, r14_37, rbx39, r11_41, r10_43, rax45);
    rdi57 = *reinterpret_cast<int64_t*>(rbp58 - 88);
    fun_800(rdi57, rsi27, rdx29, rcx31, r8_33, r9_35, v47, r14_37, rbx39, r11_41, r10_43, rax45);
    rdi59 = *reinterpret_cast<int64_t*>(rbp60 - 96);
    fun_809(rdi59, rsi27, rdx29, rcx31, r8_33, r9_35, v47, r14_37, rbx39, r11_41, r10_43, rax45);
    rdi61 = *reinterpret_cast<int64_t*>(rbp62 - 0x68);
    fun_812(rdi61, rsi27, rdx29, rcx31, r8_33, r9_35, v47, r14_37, rbx39, r11_41, r10_43, rax45);
    rdi63 = *reinterpret_cast<int64_t*>(rbp64 - 0x70);
    fun_81b(rdi63, rsi27, rdx29, rcx31, r8_33, r9_35, v47, r14_37, rbx39, r11_41, r10_43, rax45);
    rdi65 = *reinterpret_cast<int64_t*>(rbp66 - 0x78);
    fun_824(rdi65, rsi27, rdx29, rcx31, r8_33, r9_35, v47, r14_37, rbx39, r11_41, r10_43, rax45);
    goto v67;
    addr_7d6_8:
    *reinterpret_cast<int32_t*>(&rdi68) = *reinterpret_cast<int32_t*>(rbp69 - 44);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi68) + 4) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(&rsi27) = *reinterpret_cast<int32_t*>(rbp70 - 56);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi27) + 4) = reinterpret_cast<int32_t>(free);
    rdx29 = *reinterpret_cast<int64_t*>(rbp71 - 0x78);
    fun_7e5(rdi68, rsi27, rdx29, rcx31, r8_33, r9_35, v47, r14_37, rbx39, r11_41, r10_43, rax45);
    goto addr_7e5_5;
}

int64_t fun_72b(int64_t rdi, int64_t rsi) {
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
    int64_t r8_13;
    int64_t rbp14;
    int64_t r9_15;
    int64_t rbp16;
    int64_t r10_17;
    int64_t rbp18;
    int64_t rax19;
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
    int64_t r14_35;
    int64_t rbp36;
    int64_t rbx37;
    int64_t rbp38;
    int64_t r11_39;
    int64_t rbp40;
    int64_t r10_41;
    int64_t rbp42;
    int64_t rax43;
    int64_t rbp44;
    int64_t v45;
    int64_t rbp46;
    int64_t rbp47;
    int64_t rdi48;
    int64_t rbp49;
    int64_t rdi50;
    int64_t rbp51;
    int32_t eax52;
    int64_t rdi53;
    int64_t rbp54;
    int64_t rdi55;
    int64_t rbp56;
    int64_t rdi57;
    int64_t rbp58;
    int64_t rdi59;
    int64_t rbp60;
    int64_t rdi61;
    int64_t rbp62;
    int64_t rdi63;
    int64_t rbp64;
    int64_t v65;
    int64_t rdi66;
    int64_t rbp67;
    int64_t rbp68;
    int64_t rbp69;

    *reinterpret_cast<int64_t*>(rbp3 - 0x78) = rax4;
    *reinterpret_cast<int32_t*>(&rdi5) = *reinterpret_cast<int32_t*>(rbp6 - 44);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi5) + 4) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(&rsi7) = *reinterpret_cast<int32_t*>(rbp8 - 48);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi7) + 4) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(&rdx9) = *reinterpret_cast<int32_t*>(rbp10 - 52);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx9) + 4) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(&rcx11) = *reinterpret_cast<int32_t*>(rbp12 - 56);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx11) + 4) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(&r8_13) = *reinterpret_cast<int32_t*>(rbp14 - 60);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_13) + 4) = reinterpret_cast<int32_t>(free);
    r9_15 = *reinterpret_cast<int64_t*>(rbp16 - 80);
    r10_17 = *reinterpret_cast<int64_t*>(rbp18 - 0x68);
    rax19 = *reinterpret_cast<int64_t*>(rbp20 - 0x70);
    v21 = *reinterpret_cast<int64_t*>(rbp22 - 88);
    fun_762(rdi5, rsi7, rdx9, rcx11, r8_13, r9_15, v21, r10_17, rax19);
    *reinterpret_cast<int32_t*>(&rdi23) = *reinterpret_cast<int32_t*>(rbp24 - 44);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi23) + 4) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(&rsi25) = *reinterpret_cast<int32_t*>(rbp26 - 48);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi25) + 4) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(&rdx27) = *reinterpret_cast<int32_t*>(rbp28 - 52);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx27) + 4) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(&rcx29) = *reinterpret_cast<int32_t*>(rbp30 - 56);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx29) + 4) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(&r8_31) = *reinterpret_cast<int32_t*>(rbp32 - 60);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_31) + 4) = reinterpret_cast<int32_t>(free);
    r9_33 = *reinterpret_cast<int64_t*>(rbp34 - 72);
    r14_35 = *reinterpret_cast<int64_t*>(rbp36 - 88);
    rbx37 = *reinterpret_cast<int64_t*>(rbp38 - 96);
    r11_39 = *reinterpret_cast<int64_t*>(rbp40 - 0x68);
    r10_41 = *reinterpret_cast<int64_t*>(rbp42 - 0x70);
    rax43 = *reinterpret_cast<int64_t*>(rbp44 - 0x78);
    v45 = *reinterpret_cast<int64_t*>(rbp46 - 80);
    fun_7b0(rdi23, rsi25, rdx27, rcx29, r8_31, r9_33, v45, r14_35, rbx37, r11_39, r10_41, rax43);
    if (*reinterpret_cast<int32_t*>(rbp47 - 28) <= 42) {
        addr_7e5_4:
        rdi48 = *reinterpret_cast<int64_t*>(rbp49 - 72);
        fun_7ee(rdi48, rsi25, rdx27, rcx29, r8_31, r9_33, v45, r14_35, rbx37, r11_39, r10_41, rax43);
    } else {
        rdi50 = **reinterpret_cast<int64_t**>(rbp51 - 40);
        rsi25 = 0x7c8;
        eax52 = fun_7cd(rdi50, 0x7c8, rdx27, rcx29, r8_31, r9_33, v45, r14_35, rbx37, r11_39, r10_41, rax43);
        if (!reinterpret_cast<int1_t>(eax52 == free)) 
            goto addr_7e5_4; else 
            goto addr_7d6_7;
    }
    rdi53 = *reinterpret_cast<int64_t*>(rbp54 - 80);
    fun_7f7(rdi53, rsi25, rdx27, rcx29, r8_31, r9_33, v45, r14_35, rbx37, r11_39, r10_41, rax43);
    rdi55 = *reinterpret_cast<int64_t*>(rbp56 - 88);
    fun_800(rdi55, rsi25, rdx27, rcx29, r8_31, r9_33, v45, r14_35, rbx37, r11_39, r10_41, rax43);
    rdi57 = *reinterpret_cast<int64_t*>(rbp58 - 96);
    fun_809(rdi57, rsi25, rdx27, rcx29, r8_31, r9_33, v45, r14_35, rbx37, r11_39, r10_41, rax43);
    rdi59 = *reinterpret_cast<int64_t*>(rbp60 - 0x68);
    fun_812(rdi59, rsi25, rdx27, rcx29, r8_31, r9_33, v45, r14_35, rbx37, r11_39, r10_41, rax43);
    rdi61 = *reinterpret_cast<int64_t*>(rbp62 - 0x70);
    fun_81b(rdi61, rsi25, rdx27, rcx29, r8_31, r9_33, v45, r14_35, rbx37, r11_39, r10_41, rax43);
    rdi63 = *reinterpret_cast<int64_t*>(rbp64 - 0x78);
    fun_824(rdi63, rsi25, rdx27, rcx29, r8_31, r9_33, v45, r14_35, rbx37, r11_39, r10_41, rax43);
    goto v65;
    addr_7d6_7:
    *reinterpret_cast<int32_t*>(&rdi66) = *reinterpret_cast<int32_t*>(rbp67 - 44);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi66) + 4) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(&rsi25) = *reinterpret_cast<int32_t*>(rbp68 - 56);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi25) + 4) = reinterpret_cast<int32_t>(free);
    rdx27 = *reinterpret_cast<int64_t*>(rbp69 - 0x78);
    fun_7e5(rdi66, rsi25, rdx27, rcx29, r8_31, r9_33, v45, r14_35, rbx37, r11_39, r10_41, rax43);
    goto addr_7e5_4;
}

void fun_762(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9) {
    int64_t rdi10;
    int64_t rbp11;
    int64_t rsi12;
    int64_t rbp13;
    int64_t rdx14;
    int64_t rbp15;
    int64_t rcx16;
    int64_t rbp17;
    int64_t r8_18;
    int64_t rbp19;
    int64_t r9_20;
    int64_t rbp21;
    int64_t r14_22;
    int64_t rbp23;
    int64_t rbx24;
    int64_t rbp25;
    int64_t r11_26;
    int64_t rbp27;
    int64_t r10_28;
    int64_t rbp29;
    int64_t rax30;
    int64_t rbp31;
    int64_t v32;
    int64_t rbp33;
    int64_t rbp34;
    int64_t rdi35;
    int64_t rbp36;
    int64_t rdi37;
    int64_t rbp38;
    int32_t eax39;
    int64_t rdi40;
    int64_t rbp41;
    int64_t rdi42;
    int64_t rbp43;
    int64_t rdi44;
    int64_t rbp45;
    int64_t rdi46;
    int64_t rbp47;
    int64_t rdi48;
    int64_t rbp49;
    int64_t rdi50;
    int64_t rbp51;
    int64_t v52;
    int64_t rdi53;
    int64_t rbp54;
    int64_t rbp55;
    int64_t rbp56;

    *reinterpret_cast<int32_t*>(&rdi10) = *reinterpret_cast<int32_t*>(rbp11 - 44);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi10) + 4) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(&rsi12) = *reinterpret_cast<int32_t*>(rbp13 - 48);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi12) + 4) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(&rdx14) = *reinterpret_cast<int32_t*>(rbp15 - 52);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx14) + 4) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(&rcx16) = *reinterpret_cast<int32_t*>(rbp17 - 56);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx16) + 4) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(&r8_18) = *reinterpret_cast<int32_t*>(rbp19 - 60);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_18) + 4) = reinterpret_cast<int32_t>(free);
    r9_20 = *reinterpret_cast<int64_t*>(rbp21 - 72);
    r14_22 = *reinterpret_cast<int64_t*>(rbp23 - 88);
    rbx24 = *reinterpret_cast<int64_t*>(rbp25 - 96);
    r11_26 = *reinterpret_cast<int64_t*>(rbp27 - 0x68);
    r10_28 = *reinterpret_cast<int64_t*>(rbp29 - 0x70);
    rax30 = *reinterpret_cast<int64_t*>(rbp31 - 0x78);
    v32 = *reinterpret_cast<int64_t*>(rbp33 - 80);
    fun_7b0(rdi10, rsi12, rdx14, rcx16, r8_18, r9_20, v32, r14_22, rbx24, r11_26, r10_28, rax30);
    if (*reinterpret_cast<int32_t*>(rbp34 - 28) <= 42) {
        addr_7e5_3:
        rdi35 = *reinterpret_cast<int64_t*>(rbp36 - 72);
        fun_7ee(rdi35, rsi12, rdx14, rcx16, r8_18, r9_20, v32, r14_22, rbx24, r11_26, r10_28, rax30);
    } else {
        rdi37 = **reinterpret_cast<int64_t**>(rbp38 - 40);
        rsi12 = 0x7c8;
        eax39 = fun_7cd(rdi37, 0x7c8, rdx14, rcx16, r8_18, r9_20, v32, r14_22, rbx24, r11_26, r10_28, rax30);
        if (!reinterpret_cast<int1_t>(eax39 == free)) 
            goto addr_7e5_3; else 
            goto addr_7d6_6;
    }
    rdi40 = *reinterpret_cast<int64_t*>(rbp41 - 80);
    fun_7f7(rdi40, rsi12, rdx14, rcx16, r8_18, r9_20, v32, r14_22, rbx24, r11_26, r10_28, rax30);
    rdi42 = *reinterpret_cast<int64_t*>(rbp43 - 88);
    fun_800(rdi42, rsi12, rdx14, rcx16, r8_18, r9_20, v32, r14_22, rbx24, r11_26, r10_28, rax30);
    rdi44 = *reinterpret_cast<int64_t*>(rbp45 - 96);
    fun_809(rdi44, rsi12, rdx14, rcx16, r8_18, r9_20, v32, r14_22, rbx24, r11_26, r10_28, rax30);
    rdi46 = *reinterpret_cast<int64_t*>(rbp47 - 0x68);
    fun_812(rdi46, rsi12, rdx14, rcx16, r8_18, r9_20, v32, r14_22, rbx24, r11_26, r10_28, rax30);
    rdi48 = *reinterpret_cast<int64_t*>(rbp49 - 0x70);
    fun_81b(rdi48, rsi12, rdx14, rcx16, r8_18, r9_20, v32, r14_22, rbx24, r11_26, r10_28, rax30);
    rdi50 = *reinterpret_cast<int64_t*>(rbp51 - 0x78);
    fun_824(rdi50, rsi12, rdx14, rcx16, r8_18, r9_20, v32, r14_22, rbx24, r11_26, r10_28, rax30);
    goto v52;
    addr_7d6_6:
    *reinterpret_cast<int32_t*>(&rdi53) = *reinterpret_cast<int32_t*>(rbp54 - 44);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi53) + 4) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(&rsi12) = *reinterpret_cast<int32_t*>(rbp55 - 56);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi12) + 4) = reinterpret_cast<int32_t>(free);
    rdx14 = *reinterpret_cast<int64_t*>(rbp56 - 0x78);
    fun_7e5(rdi53, rsi12, rdx14, rcx16, r8_18, r9_20, v32, r14_22, rbx24, r11_26, r10_28, rax30);
    goto addr_7e5_3;
}

void fun_7b0(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12) {
    int64_t rbp13;
    int64_t rdi14;
    int64_t rbp15;
    int64_t rdi16;
    int64_t rbp17;
    int32_t eax18;
    int64_t rdi19;
    int64_t rbp20;
    int64_t rdi21;
    int64_t rbp22;
    int64_t rdi23;
    int64_t rbp24;
    int64_t rdi25;
    int64_t rbp26;
    int64_t rdi27;
    int64_t rbp28;
    int64_t rdi29;
    int64_t rbp30;
    int64_t v31;
    int64_t rdi32;
    int64_t rbp33;
    int64_t rbp34;
    int64_t rbp35;

    if (*reinterpret_cast<int32_t*>(rbp13 - 28) <= 42) {
        addr_7e5_2:
        rdi14 = *reinterpret_cast<int64_t*>(rbp15 - 72);
        fun_7ee(rdi14, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11);
    } else {
        rdi16 = **reinterpret_cast<int64_t**>(rbp17 - 40);
        rsi = 0x7c8;
        eax18 = fun_7cd(rdi16, 0x7c8, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11);
        if (!reinterpret_cast<int1_t>(eax18 == free)) 
            goto addr_7e5_2; else 
            goto addr_7d6_5;
    }
    rdi19 = *reinterpret_cast<int64_t*>(rbp20 - 80);
    fun_7f7(rdi19, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11);
    rdi21 = *reinterpret_cast<int64_t*>(rbp22 - 88);
    fun_800(rdi21, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11);
    rdi23 = *reinterpret_cast<int64_t*>(rbp24 - 96);
    fun_809(rdi23, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11);
    rdi25 = *reinterpret_cast<int64_t*>(rbp26 - 0x68);
    fun_812(rdi25, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11);
    rdi27 = *reinterpret_cast<int64_t*>(rbp28 - 0x70);
    fun_81b(rdi27, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11);
    rdi29 = *reinterpret_cast<int64_t*>(rbp30 - 0x78);
    fun_824(rdi29, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11);
    goto v31;
    addr_7d6_5:
    *reinterpret_cast<int32_t*>(&rdi32) = *reinterpret_cast<int32_t*>(rbp33 - 44);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi32) + 4) = reinterpret_cast<int32_t>(free);
    *reinterpret_cast<int32_t*>(&rsi) = *reinterpret_cast<int32_t*>(rbp34 - 56);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi) + 4) = reinterpret_cast<int32_t>(free);
    rdx = *reinterpret_cast<int64_t*>(rbp35 - 0x78);
    fun_7e5(rdi32, rsi, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11);
    goto addr_7e5_2;
}

void free() {
}

void fun_78(int32_t* rdi, int32_t* rsi) {
    int64_t rbp3;
    int64_t rbp4;

    *rdi = *rsi;
    *reinterpret_cast<int32_t*>(rbp3 - 40) = *reinterpret_cast<int32_t*>(rbp4 - 40) + 1;
}

void fun_91() {
    int64_t rbp1;
    int64_t rbp2;

    *reinterpret_cast<int32_t*>(rbp1 - 36) = *reinterpret_cast<int32_t*>(rbp2 - 36) + 1;
}

void fun_a4() {
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
            __asm__("cvtsi2sd xmm1, eax");
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
        while (*reinterpret_cast<int32_t*>(rbp17 - 40) < *reinterpret_cast<int32_t*>(rbp18 - 20)) {
            __asm__("cdq ");
            __asm__("cvtsi2sd xmm0, edx");
            __asm__("cvtsi2sd xmm1, eax");
            __asm__("divsd xmm0, xmm1");
            *rdi7 = *rsi8;
            ++rdi7;
            ++rsi8;
            *reinterpret_cast<int32_t*>(rbp19 - 40) = *reinterpret_cast<int32_t*>(rbp20 - 40) + 1;
        }
        *reinterpret_cast<int32_t*>(rbp21 - 36) = *reinterpret_cast<int32_t*>(rbp22 - 36) + 1;
    }
    *reinterpret_cast<int32_t*>(rbp23 - 36) = reinterpret_cast<int32_t>(free);
    while (*reinterpret_cast<int32_t*>(rbp24 - 36) < *reinterpret_cast<int32_t*>(rbp25 - 20)) {
        *reinterpret_cast<int32_t*>(rbp26 - 40) = reinterpret_cast<int32_t>(free);
        while (*reinterpret_cast<int32_t*>(rbp27 - 40) < *reinterpret_cast<int32_t*>(rbp28 - 16)) {
            __asm__("cdq ");
            __asm__("cvtsi2sd xmm0, edx");
            __asm__("cvtsi2sd xmm1, eax");
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

int64_t* g259 = reinterpret_cast<int64_t*>(0x358d48388b48);

void print_array(int32_t edi, int32_t esi, int64_t rdx) {
    int64_t* rax4;
    int64_t rdi5;

    rax4 = g259;
    rdi5 = *rax4;
    fun_26a(rdi5, 0x263);
}

void submain(int32_t edi, int64_t rsi) {
    fun_6b9(0xafc80, 8);
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

void kernel_3mm(int32_t edi, int32_t esi, int32_t edx, int32_t ecx, int32_t r8d, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12) {
    struct s0* rdi1;
    struct s1* rsi2;
    int32_t v13;
    int32_t v14;
    int32_t v15;
    int32_t v16;
    int32_t v17;
    int32_t v18;
    int32_t v19;
    int32_t v20;
    struct s2* rdi21;
    struct s3* rsi22;
    struct s4* rdi23;
    struct s5* rsi24;
    struct s6* rdi25;
    struct s7* rsi26;
    int32_t v27;
    int32_t v28;
    int32_t v29;
    struct s2* rdi30;
    struct s3* rsi31;
    struct s4* rdi32;
    struct s5* rsi33;
    struct s6* rdi34;
    struct s7* rsi35;
    int32_t v36;
    int32_t v37;
    int32_t v38;
    struct s2* rdi39;
    struct s3* rsi40;
    struct s4* rdi41;
    struct s5* rsi42;
    struct s6* rdi43;
    struct s7* rsi44;

    *reinterpret_cast<int32_t*>(&rdi1) = edi;
    *reinterpret_cast<int32_t*>(&rsi2) = esi;
    v13 = *reinterpret_cast<int32_t*>(&rdi1);
    v14 = *reinterpret_cast<int32_t*>(&rsi2);
    v15 = edx;
    v16 = ecx;
    v17 = r8d;
    v18 = reinterpret_cast<int32_t>(free);
    while (v18 < v13) {
        v19 = reinterpret_cast<int32_t>(free);
        while (v19 < v14) {
            __asm__("xorps xmm0, xmm0");
            rdi1->f0 = rsi2->f0;
            rdi1 = reinterpret_cast<struct s0*>(&rdi1->f4);
            rsi2 = reinterpret_cast<struct s1*>(&rsi2->f4);
            v20 = reinterpret_cast<int32_t>(free);
            while (v20 < v15) {
                rdi1->f0 = rsi2->f0;
                rdi21 = reinterpret_cast<struct s2*>(&rdi1->f4);
                rsi22 = reinterpret_cast<struct s3*>(&rsi2->f4);
                rdi21->f0 = rsi22->f0;
                rdi23 = reinterpret_cast<struct s4*>(&rdi21->f4);
                rsi24 = reinterpret_cast<struct s5*>(&rsi22->f4);
                rdi23->f0 = rsi24->f0;
                rdi25 = reinterpret_cast<struct s6*>(&rdi23->f4);
                rsi26 = reinterpret_cast<struct s7*>(&rsi24->f4);
                __asm__("mulsd xmm0, xmm2");
                __asm__("addsd xmm0, xmm1");
                rdi25->f0 = rsi26->f0;
                rdi1 = reinterpret_cast<struct s0*>(&rdi25->f4);
                rsi2 = reinterpret_cast<struct s1*>(&rsi26->f4);
                ++v20;
            }
            ++v19;
        }
        ++v18;
    }
    v27 = reinterpret_cast<int32_t>(free);
    while (v27 < v14) {
        v28 = reinterpret_cast<int32_t>(free);
        while (v28 < v16) {
            __asm__("xorps xmm0, xmm0");
            rdi1->f0 = rsi2->f0;
            rdi1 = reinterpret_cast<struct s0*>(&rdi1->f4);
            rsi2 = reinterpret_cast<struct s1*>(&rsi2->f4);
            v29 = reinterpret_cast<int32_t>(free);
            while (v29 < v17) {
                rdi1->f0 = rsi2->f0;
                rdi30 = reinterpret_cast<struct s2*>(&rdi1->f4);
                rsi31 = reinterpret_cast<struct s3*>(&rsi2->f4);
                rdi30->f0 = rsi31->f0;
                rdi32 = reinterpret_cast<struct s4*>(&rdi30->f4);
                rsi33 = reinterpret_cast<struct s5*>(&rsi31->f4);
                rdi32->f0 = rsi33->f0;
                rdi34 = reinterpret_cast<struct s6*>(&rdi32->f4);
                rsi35 = reinterpret_cast<struct s7*>(&rsi33->f4);
                __asm__("mulsd xmm0, xmm2");
                __asm__("addsd xmm0, xmm1");
                rdi34->f0 = rsi35->f0;
                rdi1 = reinterpret_cast<struct s0*>(&rdi34->f4);
                rsi2 = reinterpret_cast<struct s1*>(&rsi35->f4);
                ++v29;
            }
            ++v28;
        }
        ++v27;
    }
    v36 = reinterpret_cast<int32_t>(free);
    while (v36 < v13) {
        v37 = reinterpret_cast<int32_t>(free);
        while (v37 < v16) {
            __asm__("xorps xmm0, xmm0");
            rdi1->f0 = rsi2->f0;
            rdi1 = reinterpret_cast<struct s0*>(&rdi1->f4);
            rsi2 = reinterpret_cast<struct s1*>(&rsi2->f4);
            v38 = reinterpret_cast<int32_t>(free);
            while (v38 < v14) {
                rdi1->f0 = rsi2->f0;
                rdi39 = reinterpret_cast<struct s2*>(&rdi1->f4);
                rsi40 = reinterpret_cast<struct s3*>(&rsi2->f4);
                rdi39->f0 = rsi40->f0;
                rdi41 = reinterpret_cast<struct s4*>(&rdi39->f4);
                rsi42 = reinterpret_cast<struct s5*>(&rsi40->f4);
                rdi41->f0 = rsi42->f0;
                rdi43 = reinterpret_cast<struct s6*>(&rdi41->f4);
                rsi44 = reinterpret_cast<struct s7*>(&rsi42->f4);
                __asm__("mulsd xmm0, xmm2");
                __asm__("addsd xmm0, xmm1");
                rdi43->f0 = rsi44->f0;
                rdi1 = reinterpret_cast<struct s0*>(&rdi43->f4);
                rsi2 = reinterpret_cast<struct s1*>(&rsi44->f4);
                ++v38;
            }
            ++v37;
        }
        ++v36;
    }
    return;
}

