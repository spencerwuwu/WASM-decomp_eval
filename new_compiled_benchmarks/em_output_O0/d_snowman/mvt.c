
void fprintf(int32_t edi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9);

void print_array(int32_t edi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7);

void fun_22c(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7);

void fun_235(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7);

void fun_23e(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7);

void fun_247(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7);

void fun_250(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7);

int32_t fun_20a(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7) {
    int32_t eax8;
    int32_t edi9;
    int64_t rbp10;
    int64_t rbp11;
    int64_t rbp12;
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

    if (reinterpret_cast<int1_t>(eax8 == fprintf)) {
        edi9 = *reinterpret_cast<int32_t*>(rbp10 - 20);
        rsi = *reinterpret_cast<int64_t*>(rbp11 - 40);
        rdx = *reinterpret_cast<int64_t*>(rbp12 - 48);
        print_array(edi9, rsi, rdx, rcx, r8, r9, __return_address());
    }
    rdi13 = *reinterpret_cast<int64_t*>(rbp14 - 32);
    fun_22c(rdi13, rsi, rdx, rcx, r8, r9, __return_address());
    rdi15 = *reinterpret_cast<int64_t*>(rbp16 - 40);
    fun_235(rdi15, rsi, rdx, rcx, r8, r9, __return_address());
    rdi17 = *reinterpret_cast<int64_t*>(rbp18 - 48);
    fun_23e(rdi17, rsi, rdx, rcx, r8, r9, __return_address());
    rdi19 = *reinterpret_cast<int64_t*>(rbp20 - 56);
    fun_247(rdi19, rsi, rdx, rcx, r8, r9, __return_address());
    rdi21 = *reinterpret_cast<int64_t*>(rbp22 - 64);
    fun_250(rdi21, rsi, rdx, rcx, r8, r9, __return_address());
    goto v23;
}

int64_t* g3aa = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_3bb(int64_t rdi, int64_t rsi);

int64_t* g3c2 = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_3da(int64_t rdi);

int64_t* g408 = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_419(int64_t rdi);

int32_t** g420 = reinterpret_cast<int32_t**>(0x48f0458b48388b48);

void fun_43e(int64_t rdi);

int64_t* g453 = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_46b(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx);

int64_t* g472 = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_48a(int64_t rdi);

int64_t* g4b8 = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_4c9(int64_t rdi);

int32_t** g4d0 = reinterpret_cast<int32_t**>(0x48e8458b48388b48);

void fun_4ee(int64_t rdi);

int64_t* g503 = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_51b(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx);

int64_t* g522 = reinterpret_cast<int64_t*>(0x358d48388b48);

void fun_533(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx);

void print_array(int32_t edi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7) {
    int32_t v8;
    int64_t* rax9;
    int64_t rdi10;
    int64_t* rax11;
    int64_t rdi12;
    int32_t* rsi13;
    int32_t v14;
    int64_t* rax15;
    int64_t rdi16;
    int32_t** rax17;
    int32_t* rdi18;
    int64_t* rax19;
    int64_t rdi20;
    int64_t* rax21;
    int64_t rdi22;
    int32_t* rsi23;
    int32_t v24;
    int64_t* rax25;
    int64_t rdi26;
    int32_t** rax27;
    int32_t* rdi28;
    int64_t* rax29;
    int64_t rdi30;
    int64_t* rax31;
    int64_t rdi32;

    v8 = edi;
    rax9 = g3aa;
    rdi10 = *rax9;
    fun_3bb(rdi10, 0x3b4);
    rax11 = g3c2;
    rdi12 = *rax11;
    rsi13 = reinterpret_cast<int32_t*>(0x3cc);
    fun_3da(rdi12);
    v14 = reinterpret_cast<int32_t>(fprintf);
    while (v14 < v8) {
        __asm__("cdq ");
        if (reinterpret_cast<int1_t>(v14 % 20 == fprintf)) {
            rax15 = g408;
            rdi16 = *rax15;
            rsi13 = reinterpret_cast<int32_t*>(0x412);
            fun_419(rdi16);
        }
        rax17 = g420;
        rdi18 = *rax17;
        rcx = v14;
        *rdi18 = *rsi13;
        rsi13 = reinterpret_cast<int32_t*>(0x437);
        fun_43e(rdi18 + 1);
        ++v14;
    }
    rax19 = g453;
    rdi20 = *rax19;
    fun_46b(rdi20, 0x45d, 0x464, rcx);
    rax21 = g472;
    rdi22 = *rax21;
    rsi23 = reinterpret_cast<int32_t*>(0x47c);
    fun_48a(rdi22);
    v24 = reinterpret_cast<int32_t>(fprintf);
    while (v24 < v8) {
        __asm__("cdq ");
        if (reinterpret_cast<int1_t>(v24 % 20 == fprintf)) {
            rax25 = g4b8;
            rdi26 = *rax25;
            rsi23 = reinterpret_cast<int32_t*>(0x4c2);
            fun_4c9(rdi26);
        }
        rax27 = g4d0;
        rdi28 = *rax27;
        rcx = v24;
        *rdi28 = *rsi23;
        rsi23 = reinterpret_cast<int32_t*>(0x4e7);
        fun_4ee(rdi28 + 1);
        ++v24;
    }
    rax29 = g503;
    rdi30 = *rax29;
    fun_51b(rdi30, 0x50d, 0x514, rcx);
    rax31 = g522;
    rdi32 = *rax31;
    fun_533(rdi32, 0x52c, 0x514, rcx);
    return;
}

void fun_22c(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7) {
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
    fun_235(rdi8, rsi, rdx, rcx, r8, r9, __return_address());
    rdi10 = *reinterpret_cast<int64_t*>(rbp11 - 48);
    fun_23e(rdi10, rsi, rdx, rcx, r8, r9, __return_address());
    rdi12 = *reinterpret_cast<int64_t*>(rbp13 - 56);
    fun_247(rdi12, rsi, rdx, rcx, r8, r9, __return_address());
    rdi14 = *reinterpret_cast<int64_t*>(rbp15 - 64);
    fun_250(rdi14, rsi, rdx, rcx, r8, r9, __return_address());
    goto v16;
}

void fun_419(int64_t rdi) {
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
        rax2 = g420;
        rdi3 = *rax2;
        rcx4 = *reinterpret_cast<int32_t*>(rbp5 - 28);
        *rdi3 = *rsi6;
        rsi6 = reinterpret_cast<int32_t*>(0x437);
        fun_43e(rdi3 + 1);
        *reinterpret_cast<int32_t*>(rbp7 - 28) = *reinterpret_cast<int32_t*>(rbp8 - 28) + 1;
        if (*reinterpret_cast<int32_t*>(rbp9 - 28) >= *reinterpret_cast<int32_t*>(rbp10 - 4)) 
            break;
        __asm__("cdq ");
        if (!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp11 - 28) % 20 == fprintf)) 
            continue;
        rax12 = g408;
        rdi13 = *rax12;
        rsi6 = reinterpret_cast<int32_t*>(0x412);
        fun_419(rdi13);
    }
    rax14 = g453;
    rdi15 = *rax14;
    fun_46b(rdi15, 0x45d, 0x464, rcx4);
    rax16 = g472;
    rdi17 = *rax16;
    rsi18 = reinterpret_cast<int32_t*>(0x47c);
    fun_48a(rdi17);
    *reinterpret_cast<int32_t*>(rbp19 - 28) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp20 - 28) < *reinterpret_cast<int32_t*>(rbp21 - 4)) {
        __asm__("cdq ");
        if (reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp22 - 28) % 20 == fprintf)) {
            rax23 = g4b8;
            rdi24 = *rax23;
            rsi18 = reinterpret_cast<int32_t*>(0x4c2);
            fun_4c9(rdi24);
        }
        rax25 = g4d0;
        rdi26 = *rax25;
        rcx4 = *reinterpret_cast<int32_t*>(rbp27 - 28);
        *rdi26 = *rsi18;
        rsi18 = reinterpret_cast<int32_t*>(0x4e7);
        fun_4ee(rdi26 + 1);
        *reinterpret_cast<int32_t*>(rbp28 - 28) = *reinterpret_cast<int32_t*>(rbp29 - 28) + 1;
    }
    rax30 = g503;
    rdi31 = *rax30;
    fun_51b(rdi31, 0x50d, 0x514, rcx4);
    rax32 = g522;
    rdi33 = *rax32;
    fun_533(rdi33, 0x52c, 0x514, rcx4);
    goto v34;
}

void fun_43e(int64_t rdi) {
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
            rax7 = g408;
            rdi8 = *rax7;
            rsi9 = reinterpret_cast<int32_t*>(0x412);
            fun_419(rdi8);
        }
        rax10 = g420;
        rdi11 = *rax10;
        rcx12 = *reinterpret_cast<int32_t*>(rbp13 - 28);
        *rdi11 = *rsi9;
        rsi9 = reinterpret_cast<int32_t*>(0x437);
        fun_43e(rdi11 + 1);
    }
    rax14 = g453;
    rdi15 = *rax14;
    fun_46b(rdi15, 0x45d, 0x464, rcx12);
    rax16 = g472;
    rdi17 = *rax16;
    rsi18 = reinterpret_cast<int32_t*>(0x47c);
    fun_48a(rdi17);
    *reinterpret_cast<int32_t*>(rbp19 - 28) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp20 - 28) < *reinterpret_cast<int32_t*>(rbp21 - 4)) {
        __asm__("cdq ");
        if (reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp22 - 28) % 20 == fprintf)) {
            rax23 = g4b8;
            rdi24 = *rax23;
            rsi18 = reinterpret_cast<int32_t*>(0x4c2);
            fun_4c9(rdi24);
        }
        rax25 = g4d0;
        rdi26 = *rax25;
        rcx12 = *reinterpret_cast<int32_t*>(rbp27 - 28);
        *rdi26 = *rsi18;
        rsi18 = reinterpret_cast<int32_t*>(0x4e7);
        fun_4ee(rdi26 + 1);
        *reinterpret_cast<int32_t*>(rbp28 - 28) = *reinterpret_cast<int32_t*>(rbp29 - 28) + 1;
    }
    rax30 = g503;
    rdi31 = *rax30;
    fun_51b(rdi31, 0x50d, 0x514, rcx12);
    rax32 = g522;
    rdi33 = *rax32;
    fun_533(rdi33, 0x52c, 0x514, rcx12);
    goto v34;
}

void fun_4c9(int64_t rdi) {
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
        rax2 = g4d0;
        rdi3 = *rax2;
        rcx4 = *reinterpret_cast<int32_t*>(rbp5 - 28);
        *rdi3 = *rsi6;
        rsi6 = reinterpret_cast<int32_t*>(0x4e7);
        fun_4ee(rdi3 + 1);
        *reinterpret_cast<int32_t*>(rbp7 - 28) = *reinterpret_cast<int32_t*>(rbp8 - 28) + 1;
        if (*reinterpret_cast<int32_t*>(rbp9 - 28) >= *reinterpret_cast<int32_t*>(rbp10 - 4)) 
            break;
        __asm__("cdq ");
        if (!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp11 - 28) % 20 == fprintf)) 
            continue;
        rax12 = g4b8;
        rdi13 = *rax12;
        rsi6 = reinterpret_cast<int32_t*>(0x4c2);
        fun_4c9(rdi13);
    }
    rax14 = g503;
    rdi15 = *rax14;
    fun_51b(rdi15, 0x50d, 0x514, rcx4);
    rax16 = g522;
    rdi17 = *rax16;
    fun_533(rdi17, 0x52c, 0x514, rcx4);
    goto v18;
}

void fun_4ee(int64_t rdi) {
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
        if (*reinterpret_cast<int32_t*>(rbp4 - 28) >= *reinterpret_cast<int32_t*>(rbp5 - 4)) 
            break;
        __asm__("cdq ");
        if (reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp6 - 28) % 20 == fprintf)) {
            rax7 = g4b8;
            rdi8 = *rax7;
            rsi9 = reinterpret_cast<int32_t*>(0x4c2);
            fun_4c9(rdi8);
        }
        rax10 = g4d0;
        rdi11 = *rax10;
        rcx12 = *reinterpret_cast<int32_t*>(rbp13 - 28);
        *rdi11 = *rsi9;
        rsi9 = reinterpret_cast<int32_t*>(0x4e7);
        fun_4ee(rdi11 + 1);
    }
    rax14 = g503;
    rdi15 = *rax14;
    fun_51b(rdi15, 0x50d, 0x514, rcx12);
    rax16 = g522;
    rdi17 = *rax16;
    fun_533(rdi17, 0x52c, 0x514, rcx12);
    goto v18;
}

void fun_3bb(int64_t rdi, int64_t rsi) {
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

    rax3 = g3c2;
    rdi4 = *rax3;
    rsi5 = reinterpret_cast<int32_t*>(0x3cc);
    fun_3da(rdi4);
    *reinterpret_cast<int32_t*>(rbp6 - 28) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp7 - 28) < *reinterpret_cast<int32_t*>(rbp8 - 4)) {
        __asm__("cdq ");
        if (reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp9 - 28) % 20 == fprintf)) {
            rax10 = g408;
            rdi11 = *rax10;
            rsi5 = reinterpret_cast<int32_t*>(0x412);
            fun_419(rdi11);
        }
        rax12 = g420;
        rdi13 = *rax12;
        rcx14 = *reinterpret_cast<int32_t*>(rbp15 - 28);
        *rdi13 = *rsi5;
        rsi5 = reinterpret_cast<int32_t*>(0x437);
        fun_43e(rdi13 + 1);
        *reinterpret_cast<int32_t*>(rbp16 - 28) = *reinterpret_cast<int32_t*>(rbp17 - 28) + 1;
    }
    rax18 = g453;
    rdi19 = *rax18;
    fun_46b(rdi19, 0x45d, 0x464, rcx14);
    rax20 = g472;
    rdi21 = *rax20;
    rsi22 = reinterpret_cast<int32_t*>(0x47c);
    fun_48a(rdi21);
    *reinterpret_cast<int32_t*>(rbp23 - 28) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp24 - 28) < *reinterpret_cast<int32_t*>(rbp25 - 4)) {
        __asm__("cdq ");
        if (reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp26 - 28) % 20 == fprintf)) {
            rax27 = g4b8;
            rdi28 = *rax27;
            rsi22 = reinterpret_cast<int32_t*>(0x4c2);
            fun_4c9(rdi28);
        }
        rax29 = g4d0;
        rdi30 = *rax29;
        rcx14 = *reinterpret_cast<int32_t*>(rbp31 - 28);
        *rdi30 = *rsi22;
        rsi22 = reinterpret_cast<int32_t*>(0x4e7);
        fun_4ee(rdi30 + 1);
        *reinterpret_cast<int32_t*>(rbp32 - 28) = *reinterpret_cast<int32_t*>(rbp33 - 28) + 1;
    }
    rax34 = g503;
    rdi35 = *rax34;
    fun_51b(rdi35, 0x50d, 0x514, rcx14);
    rax36 = g522;
    rdi37 = *rax36;
    fun_533(rdi37, 0x52c, 0x514, rcx14);
    goto v38;
}

void fun_235(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7) {
    int64_t rdi8;
    int64_t rbp9;
    int64_t rdi10;
    int64_t rbp11;
    int64_t rdi12;
    int64_t rbp13;
    int64_t v14;

    rdi8 = *reinterpret_cast<int64_t*>(rbp9 - 48);
    fun_23e(rdi8, rsi, rdx, rcx, r8, r9, __return_address());
    rdi10 = *reinterpret_cast<int64_t*>(rbp11 - 56);
    fun_247(rdi10, rsi, rdx, rcx, r8, r9, __return_address());
    rdi12 = *reinterpret_cast<int64_t*>(rbp13 - 64);
    fun_250(rdi12, rsi, rdx, rcx, r8, r9, __return_address());
    goto v14;
}

void fun_3da(int64_t rdi) {
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
            rax6 = g408;
            rdi7 = *rax6;
            rsi8 = reinterpret_cast<int32_t*>(0x412);
            fun_419(rdi7);
        }
        rax9 = g420;
        rdi10 = *rax9;
        rcx11 = *reinterpret_cast<int32_t*>(rbp12 - 28);
        *rdi10 = *rsi8;
        rsi8 = reinterpret_cast<int32_t*>(0x437);
        fun_43e(rdi10 + 1);
        *reinterpret_cast<int32_t*>(rbp13 - 28) = *reinterpret_cast<int32_t*>(rbp14 - 28) + 1;
    }
    rax15 = g453;
    rdi16 = *rax15;
    fun_46b(rdi16, 0x45d, 0x464, rcx11);
    rax17 = g472;
    rdi18 = *rax17;
    rsi19 = reinterpret_cast<int32_t*>(0x47c);
    fun_48a(rdi18);
    *reinterpret_cast<int32_t*>(rbp20 - 28) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp21 - 28) < *reinterpret_cast<int32_t*>(rbp22 - 4)) {
        __asm__("cdq ");
        if (reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp23 - 28) % 20 == fprintf)) {
            rax24 = g4b8;
            rdi25 = *rax24;
            rsi19 = reinterpret_cast<int32_t*>(0x4c2);
            fun_4c9(rdi25);
        }
        rax26 = g4d0;
        rdi27 = *rax26;
        rcx11 = *reinterpret_cast<int32_t*>(rbp28 - 28);
        *rdi27 = *rsi19;
        rsi19 = reinterpret_cast<int32_t*>(0x4e7);
        fun_4ee(rdi27 + 1);
        *reinterpret_cast<int32_t*>(rbp29 - 28) = *reinterpret_cast<int32_t*>(rbp30 - 28) + 1;
    }
    rax31 = g503;
    rdi32 = *rax31;
    fun_51b(rdi32, 0x50d, 0x514, rcx11);
    rax33 = g522;
    rdi34 = *rax33;
    fun_533(rdi34, 0x52c, 0x514, rcx11);
    goto v35;
}

void fun_23e(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7) {
    int64_t rdi8;
    int64_t rbp9;
    int64_t rdi10;
    int64_t rbp11;
    int64_t v12;

    rdi8 = *reinterpret_cast<int64_t*>(rbp9 - 56);
    fun_247(rdi8, rsi, rdx, rcx, r8, r9, __return_address());
    rdi10 = *reinterpret_cast<int64_t*>(rbp11 - 64);
    fun_250(rdi10, rsi, rdx, rcx, r8, r9, __return_address());
    goto v12;
}

void fun_46b(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
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

    rax5 = g472;
    rdi6 = *rax5;
    rsi7 = reinterpret_cast<int32_t*>(0x47c);
    fun_48a(rdi6);
    *reinterpret_cast<int32_t*>(rbp8 - 28) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp9 - 28) < *reinterpret_cast<int32_t*>(rbp10 - 4)) {
        __asm__("cdq ");
        if (reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp11 - 28) % 20 == fprintf)) {
            rax12 = g4b8;
            rdi13 = *rax12;
            rsi7 = reinterpret_cast<int32_t*>(0x4c2);
            fun_4c9(rdi13);
        }
        rax14 = g4d0;
        rdi15 = *rax14;
        rcx = *reinterpret_cast<int32_t*>(rbp16 - 28);
        *rdi15 = *rsi7;
        rsi7 = reinterpret_cast<int32_t*>(0x4e7);
        fun_4ee(rdi15 + 1);
        *reinterpret_cast<int32_t*>(rbp17 - 28) = *reinterpret_cast<int32_t*>(rbp18 - 28) + 1;
    }
    rax19 = g503;
    rdi20 = *rax19;
    fun_51b(rdi20, 0x50d, 0x514, rcx);
    rax21 = g522;
    rdi22 = *rax21;
    fun_533(rdi22, 0x52c, 0x514, rcx);
    goto v23;
}

void fun_51b(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t* rax5;
    int64_t rdi6;
    int64_t v7;

    rax5 = g522;
    rdi6 = *rax5;
    fun_533(rdi6, 0x52c, rdx, rcx);
    goto v7;
}

void fun_247(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7) {
    int64_t rdi8;
    int64_t rbp9;
    int64_t v10;

    rdi8 = *reinterpret_cast<int64_t*>(rbp9 - 64);
    fun_250(rdi8, rsi, rdx, rcx, r8, r9, __return_address());
    goto v10;
}

void fun_48a(int64_t rdi) {
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
    while (*reinterpret_cast<int32_t*>(rbp3 - 28) < *reinterpret_cast<int32_t*>(rbp4 - 4)) {
        __asm__("cdq ");
        if (reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp5 - 28) % 20 == fprintf)) {
            rax6 = g4b8;
            rdi7 = *rax6;
            rsi8 = reinterpret_cast<int32_t*>(0x4c2);
            fun_4c9(rdi7);
        }
        rax9 = g4d0;
        rdi10 = *rax9;
        rcx11 = *reinterpret_cast<int32_t*>(rbp12 - 28);
        *rdi10 = *rsi8;
        rsi8 = reinterpret_cast<int32_t*>(0x4e7);
        fun_4ee(rdi10 + 1);
        *reinterpret_cast<int32_t*>(rbp13 - 28) = *reinterpret_cast<int32_t*>(rbp14 - 28) + 1;
    }
    rax15 = g503;
    rdi16 = *rax15;
    fun_51b(rdi16, 0x50d, 0x514, rcx11);
    rax17 = g522;
    rdi18 = *rax17;
    fun_533(rdi18, 0x52c, 0x514, rcx11);
    goto v19;
}

void fun_533(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t v5;

    goto v5;
}

int64_t fun_178(int64_t rdi, int64_t rsi);

int64_t fun_18b(int64_t rdi, int64_t rsi);

int64_t fun_19e(int64_t rdi, int64_t rsi);

int64_t fun_1b1(int64_t rdi, int64_t rsi);

struct s0 {
    int32_t f0;
    int32_t f4;
};

void init_array(int32_t edi, struct s0* rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7);

void fun_1ed(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7);

/* .L.str.4 */
void L_str_4();

void fun_165(int64_t rdi, int64_t rsi) {
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
    struct s0* rsi15;
    int64_t rbp16;
    int64_t rdx17;
    int64_t rbp18;
    int64_t rcx19;
    int64_t rbp20;
    int64_t r8_21;
    int64_t rbp22;
    int64_t r9_23;
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

    *reinterpret_cast<int64_t*>(rbp3 - 32) = rax4;
    rax5 = fun_178(0x7d0, 8);
    *reinterpret_cast<int64_t*>(rbp6 - 40) = rax5;
    rax7 = fun_18b(0x7d0, 8);
    *reinterpret_cast<int64_t*>(rbp8 - 48) = rax7;
    rax9 = fun_19e(0x7d0, 8);
    *reinterpret_cast<int64_t*>(rbp10 - 56) = rax9;
    rax11 = fun_1b1(0x7d0, 8);
    *reinterpret_cast<int64_t*>(rbp12 - 64) = rax11;
    edi13 = *reinterpret_cast<int32_t*>(rbp14 - 20);
    rsi15 = *reinterpret_cast<struct s0**>(rbp16 - 40);
    rdx17 = *reinterpret_cast<int64_t*>(rbp18 - 48);
    rcx19 = *reinterpret_cast<int64_t*>(rbp20 - 56);
    r8_21 = *reinterpret_cast<int64_t*>(rbp22 - 64);
    r9_23 = *reinterpret_cast<int64_t*>(rbp24 - 32);
    init_array(edi13, rsi15, rdx17, rcx19, r8_21, r9_23, __return_address());
    *reinterpret_cast<int32_t*>(&rdi25) = *reinterpret_cast<int32_t*>(rbp26 - 20);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi25) + 4) = reinterpret_cast<int32_t>(fprintf);
    rsi27 = *reinterpret_cast<int64_t*>(rbp28 - 40);
    rdx29 = *reinterpret_cast<int64_t*>(rbp30 - 48);
    rcx31 = *reinterpret_cast<int64_t*>(rbp32 - 56);
    r8_33 = *reinterpret_cast<int64_t*>(rbp34 - 64);
    r9_35 = *reinterpret_cast<int64_t*>(rbp36 - 32);
    fun_1ed(rdi25, rsi27, rdx29, rcx31, r8_33, r9_35, __return_address());
    if (*reinterpret_cast<int32_t*>(rbp37 - 4) <= reinterpret_cast<int32_t>(L_str_4)) {
        addr_223_7:
        rdi38 = *reinterpret_cast<int64_t*>(rbp39 - 32);
        fun_22c(rdi38, rsi27, rdx29, rcx31, r8_33, r9_35, __return_address());
    } else {
        rdi40 = **reinterpret_cast<int64_t**>(rbp41 - 16);
        rsi27 = 0x205;
        eax42 = fun_20a(rdi40, 0x205, rdx29, rcx31, r8_33, r9_35, __return_address());
        if (!reinterpret_cast<int1_t>(eax42 == fprintf)) 
            goto addr_223_7; else 
            goto addr_213_10;
    }
    rdi43 = *reinterpret_cast<int64_t*>(rbp44 - 40);
    fun_235(rdi43, rsi27, rdx29, rcx31, r8_33, r9_35, __return_address());
    rdi45 = *reinterpret_cast<int64_t*>(rbp46 - 48);
    fun_23e(rdi45, rsi27, rdx29, rcx31, r8_33, r9_35, __return_address());
    rdi47 = *reinterpret_cast<int64_t*>(rbp48 - 56);
    fun_247(rdi47, rsi27, rdx29, rcx31, r8_33, r9_35, __return_address());
    rdi49 = *reinterpret_cast<int64_t*>(rbp50 - 64);
    fun_250(rdi49, rsi27, rdx29, rcx31, r8_33, r9_35, __return_address());
    goto v51;
    addr_213_10:
    edi52 = *reinterpret_cast<int32_t*>(rbp53 - 20);
    rsi27 = *reinterpret_cast<int64_t*>(rbp54 - 40);
    rdx29 = *reinterpret_cast<int64_t*>(rbp55 - 48);
    print_array(edi52, rsi27, rdx29, rcx31, r8_33, r9_35, __return_address());
    goto addr_223_7;
}

void fun_250(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7) {
    int64_t v8;

    goto v8;
}

int64_t fun_178(int64_t rdi, int64_t rsi) {
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
    struct s0* rsi13;
    int64_t rbp14;
    int64_t rdx15;
    int64_t rbp16;
    int64_t rcx17;
    int64_t rbp18;
    int64_t r8_19;
    int64_t rbp20;
    int64_t r9_21;
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

    *reinterpret_cast<int64_t*>(rbp3 - 40) = rax4;
    rax5 = fun_18b(0x7d0, 8);
    *reinterpret_cast<int64_t*>(rbp6 - 48) = rax5;
    rax7 = fun_19e(0x7d0, 8);
    *reinterpret_cast<int64_t*>(rbp8 - 56) = rax7;
    rax9 = fun_1b1(0x7d0, 8);
    *reinterpret_cast<int64_t*>(rbp10 - 64) = rax9;
    edi11 = *reinterpret_cast<int32_t*>(rbp12 - 20);
    rsi13 = *reinterpret_cast<struct s0**>(rbp14 - 40);
    rdx15 = *reinterpret_cast<int64_t*>(rbp16 - 48);
    rcx17 = *reinterpret_cast<int64_t*>(rbp18 - 56);
    r8_19 = *reinterpret_cast<int64_t*>(rbp20 - 64);
    r9_21 = *reinterpret_cast<int64_t*>(rbp22 - 32);
    init_array(edi11, rsi13, rdx15, rcx17, r8_19, r9_21, __return_address());
    *reinterpret_cast<int32_t*>(&rdi23) = *reinterpret_cast<int32_t*>(rbp24 - 20);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi23) + 4) = reinterpret_cast<int32_t>(fprintf);
    rsi25 = *reinterpret_cast<int64_t*>(rbp26 - 40);
    rdx27 = *reinterpret_cast<int64_t*>(rbp28 - 48);
    rcx29 = *reinterpret_cast<int64_t*>(rbp30 - 56);
    r8_31 = *reinterpret_cast<int64_t*>(rbp32 - 64);
    r9_33 = *reinterpret_cast<int64_t*>(rbp34 - 32);
    fun_1ed(rdi23, rsi25, rdx27, rcx29, r8_31, r9_33, __return_address());
    if (*reinterpret_cast<int32_t*>(rbp35 - 4) <= reinterpret_cast<int32_t>(L_str_4)) {
        addr_223_6:
        rdi36 = *reinterpret_cast<int64_t*>(rbp37 - 32);
        fun_22c(rdi36, rsi25, rdx27, rcx29, r8_31, r9_33, __return_address());
    } else {
        rdi38 = **reinterpret_cast<int64_t**>(rbp39 - 16);
        rsi25 = 0x205;
        eax40 = fun_20a(rdi38, 0x205, rdx27, rcx29, r8_31, r9_33, __return_address());
        if (!reinterpret_cast<int1_t>(eax40 == fprintf)) 
            goto addr_223_6; else 
            goto addr_213_9;
    }
    rdi41 = *reinterpret_cast<int64_t*>(rbp42 - 40);
    fun_235(rdi41, rsi25, rdx27, rcx29, r8_31, r9_33, __return_address());
    rdi43 = *reinterpret_cast<int64_t*>(rbp44 - 48);
    fun_23e(rdi43, rsi25, rdx27, rcx29, r8_31, r9_33, __return_address());
    rdi45 = *reinterpret_cast<int64_t*>(rbp46 - 56);
    fun_247(rdi45, rsi25, rdx27, rcx29, r8_31, r9_33, __return_address());
    rdi47 = *reinterpret_cast<int64_t*>(rbp48 - 64);
    fun_250(rdi47, rsi25, rdx27, rcx29, r8_31, r9_33, __return_address());
    goto v49;
    addr_213_9:
    edi50 = *reinterpret_cast<int32_t*>(rbp51 - 20);
    rsi25 = *reinterpret_cast<int64_t*>(rbp52 - 40);
    rdx27 = *reinterpret_cast<int64_t*>(rbp53 - 48);
    print_array(edi50, rsi25, rdx27, rcx29, r8_31, r9_33, __return_address());
    goto addr_223_6;
}

int64_t fun_18b(int64_t rdi, int64_t rsi) {
    int64_t rbp3;
    int64_t rax4;
    int64_t rax5;
    int64_t rbp6;
    int64_t rax7;
    int64_t rbp8;
    int32_t edi9;
    int64_t rbp10;
    struct s0* rsi11;
    int64_t rbp12;
    int64_t rdx13;
    int64_t rbp14;
    int64_t rcx15;
    int64_t rbp16;
    int64_t r8_17;
    int64_t rbp18;
    int64_t r9_19;
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

    *reinterpret_cast<int64_t*>(rbp3 - 48) = rax4;
    rax5 = fun_19e(0x7d0, 8);
    *reinterpret_cast<int64_t*>(rbp6 - 56) = rax5;
    rax7 = fun_1b1(0x7d0, 8);
    *reinterpret_cast<int64_t*>(rbp8 - 64) = rax7;
    edi9 = *reinterpret_cast<int32_t*>(rbp10 - 20);
    rsi11 = *reinterpret_cast<struct s0**>(rbp12 - 40);
    rdx13 = *reinterpret_cast<int64_t*>(rbp14 - 48);
    rcx15 = *reinterpret_cast<int64_t*>(rbp16 - 56);
    r8_17 = *reinterpret_cast<int64_t*>(rbp18 - 64);
    r9_19 = *reinterpret_cast<int64_t*>(rbp20 - 32);
    init_array(edi9, rsi11, rdx13, rcx15, r8_17, r9_19, __return_address());
    *reinterpret_cast<int32_t*>(&rdi21) = *reinterpret_cast<int32_t*>(rbp22 - 20);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi21) + 4) = reinterpret_cast<int32_t>(fprintf);
    rsi23 = *reinterpret_cast<int64_t*>(rbp24 - 40);
    rdx25 = *reinterpret_cast<int64_t*>(rbp26 - 48);
    rcx27 = *reinterpret_cast<int64_t*>(rbp28 - 56);
    r8_29 = *reinterpret_cast<int64_t*>(rbp30 - 64);
    r9_31 = *reinterpret_cast<int64_t*>(rbp32 - 32);
    fun_1ed(rdi21, rsi23, rdx25, rcx27, r8_29, r9_31, __return_address());
    if (*reinterpret_cast<int32_t*>(rbp33 - 4) <= reinterpret_cast<int32_t>(L_str_4)) {
        addr_223_5:
        rdi34 = *reinterpret_cast<int64_t*>(rbp35 - 32);
        fun_22c(rdi34, rsi23, rdx25, rcx27, r8_29, r9_31, __return_address());
    } else {
        rdi36 = **reinterpret_cast<int64_t**>(rbp37 - 16);
        rsi23 = 0x205;
        eax38 = fun_20a(rdi36, 0x205, rdx25, rcx27, r8_29, r9_31, __return_address());
        if (!reinterpret_cast<int1_t>(eax38 == fprintf)) 
            goto addr_223_5; else 
            goto addr_213_8;
    }
    rdi39 = *reinterpret_cast<int64_t*>(rbp40 - 40);
    fun_235(rdi39, rsi23, rdx25, rcx27, r8_29, r9_31, __return_address());
    rdi41 = *reinterpret_cast<int64_t*>(rbp42 - 48);
    fun_23e(rdi41, rsi23, rdx25, rcx27, r8_29, r9_31, __return_address());
    rdi43 = *reinterpret_cast<int64_t*>(rbp44 - 56);
    fun_247(rdi43, rsi23, rdx25, rcx27, r8_29, r9_31, __return_address());
    rdi45 = *reinterpret_cast<int64_t*>(rbp46 - 64);
    fun_250(rdi45, rsi23, rdx25, rcx27, r8_29, r9_31, __return_address());
    goto v47;
    addr_213_8:
    edi48 = *reinterpret_cast<int32_t*>(rbp49 - 20);
    rsi23 = *reinterpret_cast<int64_t*>(rbp50 - 40);
    rdx25 = *reinterpret_cast<int64_t*>(rbp51 - 48);
    print_array(edi48, rsi23, rdx25, rcx27, r8_29, r9_31, __return_address());
    goto addr_223_5;
}

int64_t fun_19e(int64_t rdi, int64_t rsi) {
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
    int64_t rcx13;
    int64_t rbp14;
    int64_t r8_15;
    int64_t rbp16;
    int64_t r9_17;
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
    int64_t rdi41;
    int64_t rbp42;
    int64_t rdi43;
    int64_t rbp44;
    int64_t v45;
    int32_t edi46;
    int64_t rbp47;
    int64_t rbp48;
    int64_t rbp49;

    *reinterpret_cast<int64_t*>(rbp3 - 56) = rax4;
    rax5 = fun_1b1(0x7d0, 8);
    *reinterpret_cast<int64_t*>(rbp6 - 64) = rax5;
    edi7 = *reinterpret_cast<int32_t*>(rbp8 - 20);
    rsi9 = *reinterpret_cast<struct s0**>(rbp10 - 40);
    rdx11 = *reinterpret_cast<int64_t*>(rbp12 - 48);
    rcx13 = *reinterpret_cast<int64_t*>(rbp14 - 56);
    r8_15 = *reinterpret_cast<int64_t*>(rbp16 - 64);
    r9_17 = *reinterpret_cast<int64_t*>(rbp18 - 32);
    init_array(edi7, rsi9, rdx11, rcx13, r8_15, r9_17, __return_address());
    *reinterpret_cast<int32_t*>(&rdi19) = *reinterpret_cast<int32_t*>(rbp20 - 20);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi19) + 4) = reinterpret_cast<int32_t>(fprintf);
    rsi21 = *reinterpret_cast<int64_t*>(rbp22 - 40);
    rdx23 = *reinterpret_cast<int64_t*>(rbp24 - 48);
    rcx25 = *reinterpret_cast<int64_t*>(rbp26 - 56);
    r8_27 = *reinterpret_cast<int64_t*>(rbp28 - 64);
    r9_29 = *reinterpret_cast<int64_t*>(rbp30 - 32);
    fun_1ed(rdi19, rsi21, rdx23, rcx25, r8_27, r9_29, __return_address());
    if (*reinterpret_cast<int32_t*>(rbp31 - 4) <= reinterpret_cast<int32_t>(L_str_4)) {
        addr_223_4:
        rdi32 = *reinterpret_cast<int64_t*>(rbp33 - 32);
        fun_22c(rdi32, rsi21, rdx23, rcx25, r8_27, r9_29, __return_address());
    } else {
        rdi34 = **reinterpret_cast<int64_t**>(rbp35 - 16);
        rsi21 = 0x205;
        eax36 = fun_20a(rdi34, 0x205, rdx23, rcx25, r8_27, r9_29, __return_address());
        if (!reinterpret_cast<int1_t>(eax36 == fprintf)) 
            goto addr_223_4; else 
            goto addr_213_7;
    }
    rdi37 = *reinterpret_cast<int64_t*>(rbp38 - 40);
    fun_235(rdi37, rsi21, rdx23, rcx25, r8_27, r9_29, __return_address());
    rdi39 = *reinterpret_cast<int64_t*>(rbp40 - 48);
    fun_23e(rdi39, rsi21, rdx23, rcx25, r8_27, r9_29, __return_address());
    rdi41 = *reinterpret_cast<int64_t*>(rbp42 - 56);
    fun_247(rdi41, rsi21, rdx23, rcx25, r8_27, r9_29, __return_address());
    rdi43 = *reinterpret_cast<int64_t*>(rbp44 - 64);
    fun_250(rdi43, rsi21, rdx23, rcx25, r8_27, r9_29, __return_address());
    goto v45;
    addr_213_7:
    edi46 = *reinterpret_cast<int32_t*>(rbp47 - 20);
    rsi21 = *reinterpret_cast<int64_t*>(rbp48 - 40);
    rdx23 = *reinterpret_cast<int64_t*>(rbp49 - 48);
    print_array(edi46, rsi21, rdx23, rcx25, r8_27, r9_29, __return_address());
    goto addr_223_4;
}

int64_t fun_1b1(int64_t rdi, int64_t rsi) {
    int64_t rbp3;
    int64_t rax4;
    int32_t edi5;
    int64_t rbp6;
    struct s0* rsi7;
    int64_t rbp8;
    int64_t rdx9;
    int64_t rbp10;
    int64_t rcx11;
    int64_t rbp12;
    int64_t r8_13;
    int64_t rbp14;
    int64_t r9_15;
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
    int64_t rdi39;
    int64_t rbp40;
    int64_t rdi41;
    int64_t rbp42;
    int64_t v43;
    int32_t edi44;
    int64_t rbp45;
    int64_t rbp46;
    int64_t rbp47;

    *reinterpret_cast<int64_t*>(rbp3 - 64) = rax4;
    edi5 = *reinterpret_cast<int32_t*>(rbp6 - 20);
    rsi7 = *reinterpret_cast<struct s0**>(rbp8 - 40);
    rdx9 = *reinterpret_cast<int64_t*>(rbp10 - 48);
    rcx11 = *reinterpret_cast<int64_t*>(rbp12 - 56);
    r8_13 = *reinterpret_cast<int64_t*>(rbp14 - 64);
    r9_15 = *reinterpret_cast<int64_t*>(rbp16 - 32);
    init_array(edi5, rsi7, rdx9, rcx11, r8_13, r9_15, __return_address());
    *reinterpret_cast<int32_t*>(&rdi17) = *reinterpret_cast<int32_t*>(rbp18 - 20);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi17) + 4) = reinterpret_cast<int32_t>(fprintf);
    rsi19 = *reinterpret_cast<int64_t*>(rbp20 - 40);
    rdx21 = *reinterpret_cast<int64_t*>(rbp22 - 48);
    rcx23 = *reinterpret_cast<int64_t*>(rbp24 - 56);
    r8_25 = *reinterpret_cast<int64_t*>(rbp26 - 64);
    r9_27 = *reinterpret_cast<int64_t*>(rbp28 - 32);
    fun_1ed(rdi17, rsi19, rdx21, rcx23, r8_25, r9_27, __return_address());
    if (*reinterpret_cast<int32_t*>(rbp29 - 4) <= reinterpret_cast<int32_t>(L_str_4)) {
        addr_223_3:
        rdi30 = *reinterpret_cast<int64_t*>(rbp31 - 32);
        fun_22c(rdi30, rsi19, rdx21, rcx23, r8_25, r9_27, __return_address());
    } else {
        rdi32 = **reinterpret_cast<int64_t**>(rbp33 - 16);
        rsi19 = 0x205;
        eax34 = fun_20a(rdi32, 0x205, rdx21, rcx23, r8_25, r9_27, __return_address());
        if (!reinterpret_cast<int1_t>(eax34 == fprintf)) 
            goto addr_223_3; else 
            goto addr_213_6;
    }
    rdi35 = *reinterpret_cast<int64_t*>(rbp36 - 40);
    fun_235(rdi35, rsi19, rdx21, rcx23, r8_25, r9_27, __return_address());
    rdi37 = *reinterpret_cast<int64_t*>(rbp38 - 48);
    fun_23e(rdi37, rsi19, rdx21, rcx23, r8_25, r9_27, __return_address());
    rdi39 = *reinterpret_cast<int64_t*>(rbp40 - 56);
    fun_247(rdi39, rsi19, rdx21, rcx23, r8_25, r9_27, __return_address());
    rdi41 = *reinterpret_cast<int64_t*>(rbp42 - 64);
    fun_250(rdi41, rsi19, rdx21, rcx23, r8_25, r9_27, __return_address());
    goto v43;
    addr_213_6:
    edi44 = *reinterpret_cast<int32_t*>(rbp45 - 20);
    rsi19 = *reinterpret_cast<int64_t*>(rbp46 - 40);
    rdx21 = *reinterpret_cast<int64_t*>(rbp47 - 48);
    print_array(edi44, rsi19, rdx21, rcx23, r8_25, r9_27, __return_address());
    goto addr_223_3;
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

struct s6 {
    int32_t f0;
    int32_t f4;
};

struct s7 {
    int32_t f0;
    int32_t f4;
};

void init_array(int32_t edi, struct s0* rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7) {
    struct s1* rdi1;
    int32_t v8;
    int32_t v9;
    struct s2* rdi10;
    struct s3* rsi11;
    struct s4* rdi12;
    struct s5* rsi13;
    struct s6* rdi14;
    struct s7* rsi15;
    int32_t v16;

    *reinterpret_cast<int32_t*>(&rdi1) = edi;
    v8 = *reinterpret_cast<int32_t*>(&rdi1);
    v9 = reinterpret_cast<int32_t>(fprintf);
    while (v9 < v8) {
        __asm__("cdq ");
        __asm__("cvtsi2sd xmm0, edx");
        __asm__("cvtsi2sd xmm1, dword [rbp-0x4]");
        __asm__("divsd xmm0, xmm1");
        rdi1->f0 = rsi->f0;
        rdi10 = reinterpret_cast<struct s2*>(&rdi1->f4);
        rsi11 = reinterpret_cast<struct s3*>(&rsi->f4);
        __asm__("cdq ");
        __asm__("cvtsi2sd xmm0, edx");
        __asm__("cvtsi2sd xmm1, dword [rbp-0x4]");
        __asm__("divsd xmm0, xmm1");
        rdi10->f0 = rsi11->f0;
        rdi12 = reinterpret_cast<struct s4*>(&rdi10->f4);
        rsi13 = reinterpret_cast<struct s5*>(&rsi11->f4);
        __asm__("cdq ");
        __asm__("cvtsi2sd xmm0, edx");
        __asm__("cvtsi2sd xmm1, dword [rbp-0x4]");
        __asm__("divsd xmm0, xmm1");
        rdi12->f0 = rsi13->f0;
        rdi14 = reinterpret_cast<struct s6*>(&rdi12->f4);
        rsi15 = reinterpret_cast<struct s7*>(&rsi13->f4);
        __asm__("cdq ");
        __asm__("cvtsi2sd xmm0, edx");
        __asm__("cvtsi2sd xmm1, dword [rbp-0x4]");
        __asm__("divsd xmm0, xmm1");
        rdi14->f0 = rsi15->f0;
        rdi1 = reinterpret_cast<struct s1*>(&rdi14->f4);
        rsi = reinterpret_cast<struct s0*>(&rsi15->f4);
        v16 = reinterpret_cast<int32_t>(fprintf);
        while (v16 < v8) {
            __asm__("cdq ");
            __asm__("cvtsi2sd xmm0, edx");
            __asm__("cvtsi2sd xmm1, dword [rbp-0x4]");
            __asm__("divsd xmm0, xmm1");
            rdi1->f0 = rsi->f0;
            rdi1 = reinterpret_cast<struct s1*>(&rdi1->f4);
            rsi = reinterpret_cast<struct s0*>(&rsi->f4);
            ++v16;
        }
        ++v9;
    }
    return;
}

void fun_1ed(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7) {
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

    if (*reinterpret_cast<int32_t*>(rbp8 - 4) <= reinterpret_cast<int32_t>(L_str_4)) {
        addr_223_2:
        rdi9 = *reinterpret_cast<int64_t*>(rbp10 - 32);
        fun_22c(rdi9, rsi, rdx, rcx, r8, r9, __return_address());
    } else {
        rdi11 = **reinterpret_cast<int64_t**>(rbp12 - 16);
        rsi = 0x205;
        eax13 = fun_20a(rdi11, 0x205, rdx, rcx, r8, r9, __return_address());
        if (!reinterpret_cast<int1_t>(eax13 == fprintf)) 
            goto addr_223_2; else 
            goto addr_213_5;
    }
    rdi14 = *reinterpret_cast<int64_t*>(rbp15 - 40);
    fun_235(rdi14, rsi, rdx, rcx, r8, r9, __return_address());
    rdi16 = *reinterpret_cast<int64_t*>(rbp17 - 48);
    fun_23e(rdi16, rsi, rdx, rcx, r8, r9, __return_address());
    rdi18 = *reinterpret_cast<int64_t*>(rbp19 - 56);
    fun_247(rdi18, rsi, rdx, rcx, r8, r9, __return_address());
    rdi20 = *reinterpret_cast<int64_t*>(rbp21 - 64);
    fun_250(rdi20, rsi, rdx, rcx, r8, r9, __return_address());
    goto v22;
    addr_213_5:
    edi23 = *reinterpret_cast<int32_t*>(rbp24 - 20);
    rsi = *reinterpret_cast<int64_t*>(rbp25 - 40);
    rdx = *reinterpret_cast<int64_t*>(rbp26 - 48);
    print_array(edi23, rsi, rdx, rcx, r8, r9, __return_address());
    goto addr_223_2;
}

void fprintf(int32_t edi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
}

/* .L.str.4 */
void L_str_4() {
    int1_t less_or_equal1;
}

struct s8 {
    int32_t f0;
    int32_t f4;
};

struct s9 {
    int32_t f0;
    int32_t f4;
};

struct s10 {
    signed char[1] pad1;
    signed char f1;
};

struct s11 {
    signed char[1] pad1;
    signed char f1;
};

void fun_5c(struct s8* rdi, struct s9* rsi) {
    struct s10* rax3;
    struct s11* rax4;
    signed char cl5;
    int64_t rbp6;
    int64_t rbp7;

    rax3->f1 = reinterpret_cast<signed char>(rax4->f1 + cl5);
    __asm__("enter 0x6348, 0x4d");
    __asm__("enter 0xff2, 0x10");
    rdi->f0 = rsi->f0;
    __asm__("mulsd xmm0, xmm2");
    __asm__("addsd xmm0, xmm1");
    rdi->f4 = rsi->f4;
    *reinterpret_cast<int32_t*>(rbp6 - 56) = *reinterpret_cast<int32_t*>(rbp7 - 56) + 1;
}

void fun_99() {
    int64_t rbp1;
    int64_t rbp2;

    *reinterpret_cast<int32_t*>(rbp1 - 52) = *reinterpret_cast<int32_t*>(rbp2 - 52) + 1;
    goto 34;
}

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

void fun_ac() {
    int64_t rbp1;
    int64_t rbp2;
    int64_t rbp3;
    int64_t rbp4;
    int64_t rbp5;
    int64_t rbp6;
    struct s12* rdi7;
    struct s13* rsi8;
    struct s14* rdi9;
    struct s15* rsi10;
    struct s16* rdi11;
    struct s17* rsi12;
    struct s18* rdi13;
    struct s19* rsi14;
    int64_t rbp15;
    int64_t rbp16;
    int64_t rbp17;
    int64_t rbp18;
    int64_t v19;

    *reinterpret_cast<int32_t*>(rbp1 - 52) = reinterpret_cast<int32_t>(fprintf);
    while (*reinterpret_cast<int32_t*>(rbp2 - 52) < *reinterpret_cast<int32_t*>(rbp3 - 4)) {
        *reinterpret_cast<int32_t*>(rbp4 - 56) = reinterpret_cast<int32_t>(fprintf);
        while (*reinterpret_cast<int32_t*>(rbp5 - 56) < *reinterpret_cast<int32_t*>(rbp6 - 4)) {
            rdi7->f0 = rsi8->f0;
            rdi9 = reinterpret_cast<struct s14*>(&rdi7->f4);
            rsi10 = reinterpret_cast<struct s15*>(&rsi8->f4);
            rdi9->f0 = rsi10->f0;
            rdi11 = reinterpret_cast<struct s16*>(&rdi9->f4);
            rsi12 = reinterpret_cast<struct s17*>(&rsi10->f4);
            rdi11->f0 = rsi12->f0;
            rdi13 = reinterpret_cast<struct s18*>(&rdi11->f4);
            rsi14 = reinterpret_cast<struct s19*>(&rsi12->f4);
            __asm__("mulsd xmm0, xmm2");
            __asm__("addsd xmm0, xmm1");
            rdi13->f0 = rsi14->f0;
            rdi7 = reinterpret_cast<struct s12*>(&rdi13->f4);
            rsi8 = reinterpret_cast<struct s13*>(&rsi14->f4);
            *reinterpret_cast<int32_t*>(rbp15 - 56) = *reinterpret_cast<int32_t*>(rbp16 - 56) + 1;
        }
        *reinterpret_cast<int32_t*>(rbp17 - 52) = *reinterpret_cast<int32_t*>(rbp18 - 52) + 1;
    }
    goto v19;
}

void submain(int32_t edi, int64_t rsi) {
    fun_165(0x3d0900, 8);
}

