
int32_t* g1f7 = reinterpret_cast<int32_t*>(0xe8e8558b308b);

void gettimeofday();

void fun_201(int64_t rdi, int64_t rsi, int64_t rdx);

int32_t* g1cd = reinterpret_cast<int32_t*>(0xfc83909c183098b);

int32_t* g1e5 = reinterpret_cast<int32_t*>(0x4800000000e8308b);

int32_t* g21a = reinterpret_cast<int32_t*>(0x4800000000e8308b);

void fun_221(int64_t rdi, int64_t rsi, int64_t rdx);

void fun_230(int64_t rdi, int64_t rsi, int64_t rdx);

int32_t* g263 = reinterpret_cast<int32_t*>(0x58b480803);

uint32_t* g26c = reinterpret_cast<uint32_t*>(0x1c083e8458b0889);

void fun_1ec(int64_t rdi, int64_t rsi, int64_t rdx) {
    int64_t rdi4;
    int64_t rbp5;
    int32_t* rax6;
    int64_t rsi7;
    int64_t rdx8;
    int64_t rbp9;
    int64_t rbp10;
    int64_t rbp11;
    int32_t* rcx12;
    int64_t rbp13;
    int64_t rdi14;
    int64_t rbp15;
    int32_t* rax16;
    int64_t rsi17;
    int64_t rdi18;
    int64_t rbp19;
    int32_t* rax20;
    int64_t rsi21;
    int64_t rdi22;
    int64_t rbp23;
    int64_t rsi24;
    int64_t rbp25;
    int64_t rdx26;
    int64_t rbp27;
    int64_t rbp28;
    int64_t rbp29;
    int32_t* rax30;
    uint32_t* rax31;
    int64_t rbp32;
    int64_t rbp33;
    int64_t rbp34;
    int64_t rbp35;
    int64_t rbp36;
    int64_t rbp37;
    int64_t v38;

    while (1) {
        rdi4 = *reinterpret_cast<int64_t*>(rbp5 - 8);
        rax6 = g1f7;
        *reinterpret_cast<int32_t*>(&rsi7) = *rax6;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi7) + 4) = reinterpret_cast<int32_t>(gettimeofday);
        *reinterpret_cast<int32_t*>(&rdx8) = *reinterpret_cast<int32_t*>(rbp9 - 24);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx8) + 4) = reinterpret_cast<int32_t>(gettimeofday);
        fun_201(rdi4, rsi7, rdx8);
        *reinterpret_cast<int32_t*>(rbp10 - 24) = *reinterpret_cast<int32_t*>(rbp11 - 24) + 1;
        rcx12 = g1cd;
        if (*reinterpret_cast<int32_t*>(rbp13 - 24) > *rcx12 + 9) 
            break;
        rdi14 = *reinterpret_cast<int64_t*>(rbp15 - 8);
        rax16 = g1e5;
        *reinterpret_cast<int32_t*>(&rsi17) = *rax16;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi17) + 4) = reinterpret_cast<int32_t>(gettimeofday);
        fun_1ec(rdi14, rsi17, rdx8);
    }
    rdi18 = *reinterpret_cast<int64_t*>(rbp19 - 8);
    rax20 = g21a;
    *reinterpret_cast<int32_t*>(&rsi21) = *rax20;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi21) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    fun_221(rdi18, rsi21, rdx8);
    rdi22 = *reinterpret_cast<int64_t*>(rbp23 - 8);
    *reinterpret_cast<int32_t*>(&rsi24) = *reinterpret_cast<int32_t*>(rbp25 - 20);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi24) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    *reinterpret_cast<int32_t*>(&rdx26) = *reinterpret_cast<int32_t*>(rbp27 - 24);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx26) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    fun_230(rdi22, rsi24, rdx26);
    *reinterpret_cast<int32_t*>(rbp28 - 24) = reinterpret_cast<int32_t>(gettimeofday);
    while (*reinterpret_cast<int32_t*>(rbp29 - 24) < 16) {
        rax30 = g263;
        rax31 = g26c;
        *rax31 = reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((*reinterpret_cast<int32_t**>(rbp32 - 8))[*reinterpret_cast<int32_t*>(rbp33 - 24)] != *reinterpret_cast<int32_t*>(rbp34 + *reinterpret_cast<int32_t*>(rbp35 - 24) * 4 - 96))) & 1) + *rax30;
        *reinterpret_cast<int32_t*>(rbp36 - 24) = *reinterpret_cast<int32_t*>(rbp37 - 24) + 1;
    }
    goto v38;
}

uint32_t* g51e = reinterpret_cast<uint32_t*>(0x458bc04589910433);

void* g534 = reinterpret_cast<void*>(0xe8000003c088bc8b);

int32_t fun_540(int64_t rdi);

void* g553 = reinterpret_cast<void*>(0xe8000005a088bc8b);

int32_t fun_55f(int64_t rdi);

int32_t* g572 = reinterpret_cast<int32_t*>(0xe8883c8b);

int32_t fun_57a(int64_t rdi);

int32_t* g59d = reinterpret_cast<int32_t*>(0x458bc0458988048b);

void* g5b3 = reinterpret_cast<void*>(0x89000001e088848b);

void* g5cd = reinterpret_cast<void*>(0x89000003c088848b);

void* g5e7 = reinterpret_cast<void*>(0x89000005a088848b);

int32_t fun_629(int64_t rdi);

uint32_t* g662 = reinterpret_cast<uint32_t*>(0x48000001e0c96948);

uint32_t* g68b = reinterpret_cast<uint32_t*>(0x48000001e0c96948);

void* g4f6 = reinterpret_cast<void*>(0xe8000001e088bc8b);

int32_t fun_502(int64_t rdi) {
    int64_t rbp2;
    int32_t eax3;
    uint32_t* rcx4;
    int64_t rbp5;
    int64_t rbp6;
    int64_t rbp7;
    int64_t rbp8;
    void* rax9;
    int64_t rdi10;
    int64_t rbp11;
    int32_t eax12;
    int64_t rbp13;
    void* rax14;
    int64_t rdi15;
    int64_t rbp16;
    int32_t eax17;
    int64_t rbp18;
    int32_t* rax19;
    int64_t rdi20;
    int64_t rbp21;
    int32_t eax22;
    int64_t rbp23;
    int64_t rbp24;
    int64_t rbp25;
    int32_t* rax26;
    int64_t rbp27;
    int64_t rbp28;
    void* rax29;
    int64_t rbp30;
    int64_t rbp31;
    void* rax32;
    int64_t rbp33;
    int64_t rbp34;
    void* rax35;
    int64_t rbp36;
    int64_t rbp37;
    int64_t rbp38;
    int64_t rbp39;
    int64_t rbp40;
    int64_t rbp41;
    int64_t rbp42;
    int64_t rdi43;
    int64_t rbp44;
    int64_t rbp45;
    int32_t eax46;
    int64_t rbp47;
    int64_t rbp48;
    int64_t rbp49;
    int64_t rbp50;
    int64_t rbp51;
    int64_t rbp52;
    uint32_t* rax53;
    uint32_t* rax54;
    int64_t rbp55;
    int64_t rbp56;
    int64_t rbp57;
    int64_t rbp58;
    int64_t rbp59;
    int64_t rbp60;
    int64_t rbp61;
    int64_t rbp62;
    int64_t rbp63;
    int64_t rbp64;
    int64_t rbp65;
    int64_t rbp66;
    int64_t rbp67;
    int64_t rbp68;
    int64_t rbp69;
    int64_t rbp70;
    void* rax71;
    int64_t rdi72;
    int64_t rbp73;
    int64_t rbp74;
    int64_t v75;

    while (1) {
        *reinterpret_cast<int32_t*>(rbp2 - 72) = eax3;
        __asm__("cdq ");
        rcx4 = g51e;
        *reinterpret_cast<uint32_t*>(rbp5 - 64) = *reinterpret_cast<uint32_t*>(rbp6 - 72) ^ rcx4[*reinterpret_cast<int32_t*>(rbp7 - 36) / *reinterpret_cast<int32_t*>(rbp8 - 20) - 1];
        rax9 = g534;
        *reinterpret_cast<int32_t*>(&rdi10) = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rax9) + (*reinterpret_cast<int32_t*>(rbp11 - 36) - 1) * 4 + 0x3c0);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi10) + 4) = reinterpret_cast<int32_t>(gettimeofday);
        eax12 = fun_540(rdi10);
        *reinterpret_cast<int32_t*>(rbp13 - 60) = eax12;
        rax14 = g553;
        *reinterpret_cast<int32_t*>(&rdi15) = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rax14) + (*reinterpret_cast<int32_t*>(rbp16 - 36) - 1) * 4 + 0x5a0);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi15) + 4) = reinterpret_cast<int32_t>(gettimeofday);
        eax17 = fun_55f(rdi15);
        *reinterpret_cast<int32_t*>(rbp18 - 56) = eax17;
        rax19 = g572;
        *reinterpret_cast<int32_t*>(&rdi20) = rax19[*reinterpret_cast<int32_t*>(rbp21 - 36) - 1];
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi20) + 4) = reinterpret_cast<int32_t>(gettimeofday);
        eax22 = fun_57a(rdi20);
        *reinterpret_cast<int32_t*>(rbp23 - 52) = eax22;
        do {
            __asm__("cdq ");
            if (*reinterpret_cast<int32_t*>(rbp24 - 36) % *reinterpret_cast<int32_t*>(rbp25 - 20) != gettimeofday) {
                rax26 = g59d;
                *reinterpret_cast<int32_t*>(rbp27 - 64) = rax26[*reinterpret_cast<int32_t*>(rbp28 - 36) - 1];
                rax29 = g5b3;
                *reinterpret_cast<int32_t*>(rbp30 - 60) = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rax29) + (*reinterpret_cast<int32_t*>(rbp31 - 36) - 1) * 4 + 0x1e0);
                rax32 = g5cd;
                *reinterpret_cast<int32_t*>(rbp33 - 56) = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rax32) + (*reinterpret_cast<int32_t*>(rbp34 - 36) - 1) * 4 + 0x3c0);
                rax35 = g5e7;
                *reinterpret_cast<int32_t*>(rbp36 - 52) = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rax35) + (*reinterpret_cast<int32_t*>(rbp37 - 36) - 1) * 4 + 0x5a0);
            }
            if (*reinterpret_cast<int32_t*>(rbp38 - 20) > 6 && *reinterpret_cast<int32_t*>(rbp39 - 36) % *reinterpret_cast<int32_t*>(rbp40 - 20) == 4) {
                *reinterpret_cast<int32_t*>(rbp41 - 32) = reinterpret_cast<int32_t>(gettimeofday);
                while (*reinterpret_cast<int32_t*>(rbp42 - 32) < 4) {
                    *reinterpret_cast<int32_t*>(&rdi43) = *reinterpret_cast<int32_t*>(rbp44 + *reinterpret_cast<int32_t*>(rbp45 - 32) * 4 - 64);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi43) + 4) = reinterpret_cast<int32_t>(gettimeofday);
                    eax46 = fun_629(rdi43);
                    *reinterpret_cast<int32_t*>(rbp47 + *reinterpret_cast<int32_t*>(rbp48 - 32) * 4 - 64) = eax46;
                    *reinterpret_cast<int32_t*>(rbp49 - 32) = *reinterpret_cast<int32_t*>(rbp50 - 32) + 1;
                }
            }
            *reinterpret_cast<int32_t*>(rbp51 - 32) = reinterpret_cast<int32_t>(gettimeofday);
            while (*reinterpret_cast<int32_t*>(rbp52 - 32) < 4) {
                rax53 = g662;
                rax54 = g68b;
                (rax54 + *reinterpret_cast<int32_t*>(rbp55 - 32) * 0x78)[*reinterpret_cast<int32_t*>(rbp56 - 36)] = (rax53 + *reinterpret_cast<int32_t*>(rbp57 - 32) * 0x78)[*reinterpret_cast<int32_t*>(rbp58 - 36) - *reinterpret_cast<int32_t*>(rbp59 - 20)] ^ *reinterpret_cast<uint32_t*>(rbp60 + *reinterpret_cast<int32_t*>(rbp61 - 32) * 4 - 64);
                *reinterpret_cast<int32_t*>(rbp62 - 32) = *reinterpret_cast<int32_t*>(rbp63 - 32) + 1;
            }
            *reinterpret_cast<int32_t*>(rbp64 - 36) = *reinterpret_cast<int32_t*>(rbp65 - 36) + 1;
            if (*reinterpret_cast<int32_t*>(rbp66 - 36) >= *reinterpret_cast<int32_t*>(rbp67 - 24) * (*reinterpret_cast<int32_t*>(rbp68 - 28) + 1)) 
                goto addr_6bd_19;
            __asm__("cdq ");
        } while (!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp69 - 36) % *reinterpret_cast<int32_t*>(rbp70 - 20) == gettimeofday));
        rax71 = g4f6;
        *reinterpret_cast<int32_t*>(&rdi72) = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rax71) + (*reinterpret_cast<int32_t*>(rbp73 - 36) - 1) * 4 + 0x1e0);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi72) + 4) = reinterpret_cast<int32_t>(gettimeofday);
        eax3 = fun_502(rdi72);
    }
    addr_6bd_19:
    *reinterpret_cast<int32_t*>(rbp74 - 4) = reinterpret_cast<int32_t>(gettimeofday);
    goto v75;
}

int32_t fun_629(int64_t rdi) {
    int64_t rbp2;
    int64_t rbp3;
    int32_t eax4;
    int64_t rbp5;
    int64_t rbp6;
    int64_t rbp7;
    int64_t rbp8;
    int64_t rbp9;
    uint32_t* rax10;
    uint32_t* rax11;
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
    void* rax28;
    int64_t rdi29;
    int64_t rbp30;
    int32_t eax31;
    int64_t rbp32;
    uint32_t* rcx33;
    int64_t rbp34;
    int64_t rbp35;
    int64_t rbp36;
    int64_t rbp37;
    void* rax38;
    int64_t rdi39;
    int64_t rbp40;
    int32_t eax41;
    int64_t rbp42;
    void* rax43;
    int64_t rdi44;
    int64_t rbp45;
    int32_t eax46;
    int64_t rbp47;
    int32_t* rax48;
    int64_t rdi49;
    int64_t rbp50;
    int32_t eax51;
    int64_t rbp52;
    int64_t rbp53;
    int64_t rbp54;
    int32_t* rax55;
    int64_t rbp56;
    int64_t rbp57;
    void* rax58;
    int64_t rbp59;
    int64_t rbp60;
    void* rax61;
    int64_t rbp62;
    int64_t rbp63;
    void* rax64;
    int64_t rbp65;
    int64_t rbp66;
    int64_t rbp67;
    int64_t rbp68;
    int64_t rbp69;
    int64_t rbp70;
    int64_t rdi71;
    int64_t rbp72;
    int64_t rbp73;
    int64_t rbp74;
    int64_t v75;

    while (1) {
        *reinterpret_cast<int32_t*>(rbp2 + *reinterpret_cast<int32_t*>(rbp3 - 32) * 4 - 64) = eax4;
        *reinterpret_cast<int32_t*>(rbp5 - 32) = *reinterpret_cast<int32_t*>(rbp6 - 32) + 1;
        while (*reinterpret_cast<int32_t*>(rbp7 - 32) >= 4) {
            do {
                *reinterpret_cast<int32_t*>(rbp8 - 32) = reinterpret_cast<int32_t>(gettimeofday);
                while (*reinterpret_cast<int32_t*>(rbp9 - 32) < 4) {
                    rax10 = g662;
                    rax11 = g68b;
                    (rax11 + *reinterpret_cast<int32_t*>(rbp12 - 32) * 0x78)[*reinterpret_cast<int32_t*>(rbp13 - 36)] = (rax10 + *reinterpret_cast<int32_t*>(rbp14 - 32) * 0x78)[*reinterpret_cast<int32_t*>(rbp15 - 36) - *reinterpret_cast<int32_t*>(rbp16 - 20)] ^ *reinterpret_cast<uint32_t*>(rbp17 + *reinterpret_cast<int32_t*>(rbp18 - 32) * 4 - 64);
                    *reinterpret_cast<int32_t*>(rbp19 - 32) = *reinterpret_cast<int32_t*>(rbp20 - 32) + 1;
                }
                *reinterpret_cast<int32_t*>(rbp21 - 36) = *reinterpret_cast<int32_t*>(rbp22 - 36) + 1;
                if (*reinterpret_cast<int32_t*>(rbp23 - 36) >= *reinterpret_cast<int32_t*>(rbp24 - 24) * (*reinterpret_cast<int32_t*>(rbp25 - 28) + 1)) 
                    goto addr_6bd_10;
                __asm__("cdq ");
                if (reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp26 - 36) % *reinterpret_cast<int32_t*>(rbp27 - 20) == gettimeofday)) {
                    rax28 = g4f6;
                    *reinterpret_cast<int32_t*>(&rdi29) = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rax28) + (*reinterpret_cast<int32_t*>(rbp30 - 36) - 1) * 4 + 0x1e0);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi29) + 4) = reinterpret_cast<int32_t>(gettimeofday);
                    eax31 = fun_502(rdi29);
                    *reinterpret_cast<int32_t*>(rbp32 - 72) = eax31;
                    __asm__("cdq ");
                    rcx33 = g51e;
                    *reinterpret_cast<uint32_t*>(rbp34 - 64) = *reinterpret_cast<uint32_t*>(rbp35 - 72) ^ rcx33[*reinterpret_cast<int32_t*>(rbp36 - 36) / *reinterpret_cast<int32_t*>(rbp37 - 20) - 1];
                    rax38 = g534;
                    *reinterpret_cast<int32_t*>(&rdi39) = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rax38) + (*reinterpret_cast<int32_t*>(rbp40 - 36) - 1) * 4 + 0x3c0);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi39) + 4) = reinterpret_cast<int32_t>(gettimeofday);
                    eax41 = fun_540(rdi39);
                    *reinterpret_cast<int32_t*>(rbp42 - 60) = eax41;
                    rax43 = g553;
                    *reinterpret_cast<int32_t*>(&rdi44) = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rax43) + (*reinterpret_cast<int32_t*>(rbp45 - 36) - 1) * 4 + 0x5a0);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi44) + 4) = reinterpret_cast<int32_t>(gettimeofday);
                    eax46 = fun_55f(rdi44);
                    *reinterpret_cast<int32_t*>(rbp47 - 56) = eax46;
                    rax48 = g572;
                    *reinterpret_cast<int32_t*>(&rdi49) = rax48[*reinterpret_cast<int32_t*>(rbp50 - 36) - 1];
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi49) + 4) = reinterpret_cast<int32_t>(gettimeofday);
                    eax51 = fun_57a(rdi49);
                    *reinterpret_cast<int32_t*>(rbp52 - 52) = eax51;
                }
                __asm__("cdq ");
                if (*reinterpret_cast<int32_t*>(rbp53 - 36) % *reinterpret_cast<int32_t*>(rbp54 - 20) != gettimeofday) {
                    rax55 = g59d;
                    *reinterpret_cast<int32_t*>(rbp56 - 64) = rax55[*reinterpret_cast<int32_t*>(rbp57 - 36) - 1];
                    rax58 = g5b3;
                    *reinterpret_cast<int32_t*>(rbp59 - 60) = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rax58) + (*reinterpret_cast<int32_t*>(rbp60 - 36) - 1) * 4 + 0x1e0);
                    rax61 = g5cd;
                    *reinterpret_cast<int32_t*>(rbp62 - 56) = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rax61) + (*reinterpret_cast<int32_t*>(rbp63 - 36) - 1) * 4 + 0x3c0);
                    rax64 = g5e7;
                    *reinterpret_cast<int32_t*>(rbp65 - 52) = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rax64) + (*reinterpret_cast<int32_t*>(rbp66 - 36) - 1) * 4 + 0x5a0);
                }
            } while (*reinterpret_cast<int32_t*>(rbp67 - 20) <= 6 || *reinterpret_cast<int32_t*>(rbp68 - 36) % *reinterpret_cast<int32_t*>(rbp69 - 20) != 4);
            *reinterpret_cast<int32_t*>(rbp70 - 32) = reinterpret_cast<int32_t>(gettimeofday);
        }
        *reinterpret_cast<int32_t*>(&rdi71) = *reinterpret_cast<int32_t*>(rbp72 + *reinterpret_cast<int32_t*>(rbp73 - 32) * 4 - 64);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi71) + 4) = reinterpret_cast<int32_t>(gettimeofday);
        eax4 = fun_629(rdi71);
    }
    addr_6bd_10:
    *reinterpret_cast<int32_t*>(rbp74 - 4) = reinterpret_cast<int32_t>(gettimeofday);
    goto v75;
}

int32_t* g203d = reinterpret_cast<int32_t*>(0x8b00000000e8308b);

void fun_2044(int64_t rdi, int64_t rsi, int64_t rdx);

int32_t* g2028 = reinterpret_cast<int32_t*>(0xe8e8558b308b);

void fun_2060(int64_t rdi, int64_t rsi);

int32_t* g2093 = reinterpret_cast<int32_t*>(0x58b480803);

uint32_t* g209c = reinterpret_cast<uint32_t*>(0x1c083e8458b0889);

void fun_2032(int64_t rdi, int64_t rsi, int64_t rdx) {
    int64_t rdi4;
    int64_t rbp5;
    int32_t* rax6;
    int64_t rsi7;
    int64_t rbp8;
    int64_t rbp9;
    int64_t rbp10;
    int64_t rdi11;
    int64_t rbp12;
    int32_t* rax13;
    int64_t rsi14;
    int64_t rdx15;
    int64_t rbp16;
    int64_t rdi17;
    int64_t rbp18;
    int64_t rsi19;
    int64_t rbp20;
    int64_t rbp21;
    int64_t rbp22;
    int32_t* rax23;
    uint32_t* rax24;
    int64_t rbp25;
    int64_t rbp26;
    int64_t rbp27;
    int64_t rbp28;
    int64_t rbp29;
    int64_t rbp30;
    int64_t v31;

    while (1) {
        rdi4 = *reinterpret_cast<int64_t*>(rbp5 - 8);
        rax6 = g203d;
        *reinterpret_cast<int32_t*>(&rsi7) = *rax6;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi7) + 4) = reinterpret_cast<int32_t>(gettimeofday);
        fun_2044(rdi4, rsi7, rdx);
        *reinterpret_cast<int32_t*>(rbp8 - 24) = *reinterpret_cast<int32_t*>(rbp9 - 24) - 1;
        if (*reinterpret_cast<int32_t*>(rbp10 - 24) < 1) 
            break;
        rdi11 = *reinterpret_cast<int64_t*>(rbp12 - 8);
        rax13 = g2028;
        *reinterpret_cast<int32_t*>(&rsi14) = *rax13;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi14) + 4) = reinterpret_cast<int32_t>(gettimeofday);
        *reinterpret_cast<int32_t*>(&rdx15) = *reinterpret_cast<int32_t*>(rbp16 - 24);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx15) + 4) = reinterpret_cast<int32_t>(gettimeofday);
        fun_2032(rdi11, rsi14, rdx15);
    }
    rdi17 = *reinterpret_cast<int64_t*>(rbp18 - 8);
    *reinterpret_cast<int32_t*>(&rsi19) = *reinterpret_cast<int32_t*>(rbp20 - 20);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi19) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    fun_2060(rdi17, rsi19);
    *reinterpret_cast<int32_t*>(rbp21 - 24) = reinterpret_cast<int32_t>(gettimeofday);
    while (*reinterpret_cast<int32_t*>(rbp22 - 24) < 16) {
        rax23 = g2093;
        rax24 = g209c;
        *rax24 = reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((*reinterpret_cast<int32_t**>(rbp25 - 8))[*reinterpret_cast<int32_t*>(rbp26 - 24)] != *reinterpret_cast<int32_t*>(rbp27 + *reinterpret_cast<int32_t*>(rbp28 - 24) * 4 - 96))) & 1) + *rax23;
        *reinterpret_cast<int32_t*>(rbp29 - 24) = *reinterpret_cast<int32_t*>(rbp30 - 24) + 1;
    }
    goto v31;
}

struct s0 {
    int32_t f0;
    int32_t f4;
};

struct s1 {
    int32_t f0;
    int32_t f4;
};

void rtclock();

void fun_398a(int64_t rdi, int64_t rsi);

void fun_3956(struct s0* rdi, struct s1* rsi) {
    int32_t* rsi3;
    int64_t v4;

    rtclock();
    rdi->f0 = rsi->f0;
    rsi3 = &rsi->f4;
    rdi->f4 = *rsi3;
    __asm__("subsd xmm0, [rax]");
    fun_398a(0x3983, rsi3 + 1);
    goto v4;
}

void fun_398a(int64_t rdi, int64_t rsi) {
    int64_t v3;

    goto v3;
}

void fun_39d3(int32_t* rdi, int32_t* rsi) {
    int64_t v3;

    __asm__("cvtsi2sd xmm1, qword [rbp-0x10]");
    __asm__("cvtsi2sd xmm0, dword [rbp-0x8]");
    *rdi = *rsi;
    __asm__("mulsd xmm0, xmm2");
    __asm__("addsd xmm0, xmm1");
    goto v3;
}

void fun_1bc(int64_t rdi, int64_t rsi) {
    int64_t rbp3;
    int32_t* rcx4;
    int64_t rbp5;
    int64_t rdi6;
    int64_t rbp7;
    int32_t* rax8;
    int64_t rsi9;
    int64_t rdx10;
    int64_t rdi11;
    int64_t rbp12;
    int32_t* rax13;
    int64_t rsi14;
    int64_t rbp15;
    int64_t rbp16;
    int64_t rbp17;
    int64_t rdi18;
    int64_t rbp19;
    int32_t* rax20;
    int64_t rsi21;
    int64_t rdi22;
    int64_t rbp23;
    int64_t rsi24;
    int64_t rbp25;
    int64_t rdx26;
    int64_t rbp27;
    int64_t rbp28;
    int64_t rbp29;
    int32_t* rax30;
    uint32_t* rax31;
    int64_t rbp32;
    int64_t rbp33;
    int64_t rbp34;
    int64_t rbp35;
    int64_t rbp36;
    int64_t rbp37;
    int64_t v38;

    *reinterpret_cast<int32_t*>(rbp3 - 24) = 1;
    while (rcx4 = g1cd, *reinterpret_cast<int32_t*>(rbp5 - 24) <= *rcx4 + 9) {
        rdi6 = *reinterpret_cast<int64_t*>(rbp7 - 8);
        rax8 = g1e5;
        *reinterpret_cast<int32_t*>(&rsi9) = *rax8;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi9) + 4) = reinterpret_cast<int32_t>(gettimeofday);
        fun_1ec(rdi6, rsi9, rdx10);
        rdi11 = *reinterpret_cast<int64_t*>(rbp12 - 8);
        rax13 = g1f7;
        *reinterpret_cast<int32_t*>(&rsi14) = *rax13;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi14) + 4) = reinterpret_cast<int32_t>(gettimeofday);
        *reinterpret_cast<int32_t*>(&rdx10) = *reinterpret_cast<int32_t*>(rbp15 - 24);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx10) + 4) = reinterpret_cast<int32_t>(gettimeofday);
        fun_201(rdi11, rsi14, rdx10);
        *reinterpret_cast<int32_t*>(rbp16 - 24) = *reinterpret_cast<int32_t*>(rbp17 - 24) + 1;
    }
    rdi18 = *reinterpret_cast<int64_t*>(rbp19 - 8);
    rax20 = g21a;
    *reinterpret_cast<int32_t*>(&rsi21) = *rax20;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi21) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    fun_221(rdi18, rsi21, rdx10);
    rdi22 = *reinterpret_cast<int64_t*>(rbp23 - 8);
    *reinterpret_cast<int32_t*>(&rsi24) = *reinterpret_cast<int32_t*>(rbp25 - 20);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi24) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    *reinterpret_cast<int32_t*>(&rdx26) = *reinterpret_cast<int32_t*>(rbp27 - 24);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx26) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    fun_230(rdi22, rsi24, rdx26);
    *reinterpret_cast<int32_t*>(rbp28 - 24) = reinterpret_cast<int32_t>(gettimeofday);
    while (*reinterpret_cast<int32_t*>(rbp29 - 24) < 16) {
        rax30 = g263;
        rax31 = g26c;
        *rax31 = reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((*reinterpret_cast<int32_t**>(rbp32 - 8))[*reinterpret_cast<int32_t*>(rbp33 - 24)] != *reinterpret_cast<int32_t*>(rbp34 + *reinterpret_cast<int32_t*>(rbp35 - 24) * 4 - 96))) & 1) + *rax30;
        *reinterpret_cast<int32_t*>(rbp36 - 24) = *reinterpret_cast<int32_t*>(rbp37 - 24) + 1;
    }
    goto v38;
}

void fun_201(int64_t rdi, int64_t rsi, int64_t rdx) {
    int64_t rbp4;
    int64_t rbp5;
    int32_t* rcx6;
    int64_t rbp7;
    int64_t rdi8;
    int64_t rbp9;
    int32_t* rax10;
    int64_t rsi11;
    int64_t rdi12;
    int64_t rbp13;
    int32_t* rax14;
    int64_t rsi15;
    int64_t rdx16;
    int64_t rbp17;
    int64_t rdi18;
    int64_t rbp19;
    int32_t* rax20;
    int64_t rsi21;
    int64_t rdi22;
    int64_t rbp23;
    int64_t rsi24;
    int64_t rbp25;
    int64_t rdx26;
    int64_t rbp27;
    int64_t rbp28;
    int64_t rbp29;
    int32_t* rax30;
    uint32_t* rax31;
    int64_t rbp32;
    int64_t rbp33;
    int64_t rbp34;
    int64_t rbp35;
    int64_t rbp36;
    int64_t rbp37;
    int64_t v38;

    while (1) {
        *reinterpret_cast<int32_t*>(rbp4 - 24) = *reinterpret_cast<int32_t*>(rbp5 - 24) + 1;
        rcx6 = g1cd;
        if (*reinterpret_cast<int32_t*>(rbp7 - 24) > *rcx6 + 9) 
            break;
        rdi8 = *reinterpret_cast<int64_t*>(rbp9 - 8);
        rax10 = g1e5;
        *reinterpret_cast<int32_t*>(&rsi11) = *rax10;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi11) + 4) = reinterpret_cast<int32_t>(gettimeofday);
        fun_1ec(rdi8, rsi11, rdx);
        rdi12 = *reinterpret_cast<int64_t*>(rbp13 - 8);
        rax14 = g1f7;
        *reinterpret_cast<int32_t*>(&rsi15) = *rax14;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi15) + 4) = reinterpret_cast<int32_t>(gettimeofday);
        *reinterpret_cast<int32_t*>(&rdx16) = *reinterpret_cast<int32_t*>(rbp17 - 24);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx16) + 4) = reinterpret_cast<int32_t>(gettimeofday);
        fun_201(rdi12, rsi15, rdx16);
    }
    rdi18 = *reinterpret_cast<int64_t*>(rbp19 - 8);
    rax20 = g21a;
    *reinterpret_cast<int32_t*>(&rsi21) = *rax20;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi21) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    fun_221(rdi18, rsi21, rdx);
    rdi22 = *reinterpret_cast<int64_t*>(rbp23 - 8);
    *reinterpret_cast<int32_t*>(&rsi24) = *reinterpret_cast<int32_t*>(rbp25 - 20);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi24) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    *reinterpret_cast<int32_t*>(&rdx26) = *reinterpret_cast<int32_t*>(rbp27 - 24);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx26) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    fun_230(rdi22, rsi24, rdx26);
    *reinterpret_cast<int32_t*>(rbp28 - 24) = reinterpret_cast<int32_t>(gettimeofday);
    while (*reinterpret_cast<int32_t*>(rbp29 - 24) < 16) {
        rax30 = g263;
        rax31 = g26c;
        *rax31 = reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((*reinterpret_cast<int32_t**>(rbp32 - 8))[*reinterpret_cast<int32_t*>(rbp33 - 24)] != *reinterpret_cast<int32_t*>(rbp34 + *reinterpret_cast<int32_t*>(rbp35 - 24) * 4 - 96))) & 1) + *rax30;
        *reinterpret_cast<int32_t*>(rbp36 - 24) = *reinterpret_cast<int32_t*>(rbp37 - 24) + 1;
    }
    goto v38;
}

int32_t fun_540(int64_t rdi) {
    int64_t rbp2;
    int32_t eax3;
    void* rax4;
    int64_t rdi5;
    int64_t rbp6;
    int32_t eax7;
    int64_t rbp8;
    int32_t* rax9;
    int64_t rdi10;
    int64_t rbp11;
    int32_t eax12;
    int64_t rbp13;
    int64_t rbp14;
    int64_t rbp15;
    int32_t* rax16;
    int64_t rbp17;
    int64_t rbp18;
    void* rax19;
    int64_t rbp20;
    int64_t rbp21;
    void* rax22;
    int64_t rbp23;
    int64_t rbp24;
    void* rax25;
    int64_t rbp26;
    int64_t rbp27;
    int64_t rbp28;
    int64_t rbp29;
    int64_t rbp30;
    int64_t rbp31;
    int64_t rbp32;
    int64_t rdi33;
    int64_t rbp34;
    int64_t rbp35;
    int32_t eax36;
    int64_t rbp37;
    int64_t rbp38;
    int64_t rbp39;
    int64_t rbp40;
    int64_t rbp41;
    int64_t rbp42;
    uint32_t* rax43;
    uint32_t* rax44;
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
    void* rax61;
    int64_t rdi62;
    int64_t rbp63;
    int32_t eax64;
    int64_t rbp65;
    uint32_t* rcx66;
    int64_t rbp67;
    int64_t rbp68;
    int64_t rbp69;
    int64_t rbp70;
    void* rax71;
    int64_t rdi72;
    int64_t rbp73;
    int64_t rbp74;
    int64_t v75;

    while (1) {
        *reinterpret_cast<int32_t*>(rbp2 - 60) = eax3;
        rax4 = g553;
        *reinterpret_cast<int32_t*>(&rdi5) = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rax4) + (*reinterpret_cast<int32_t*>(rbp6 - 36) - 1) * 4 + 0x5a0);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi5) + 4) = reinterpret_cast<int32_t>(gettimeofday);
        eax7 = fun_55f(rdi5);
        *reinterpret_cast<int32_t*>(rbp8 - 56) = eax7;
        rax9 = g572;
        *reinterpret_cast<int32_t*>(&rdi10) = rax9[*reinterpret_cast<int32_t*>(rbp11 - 36) - 1];
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi10) + 4) = reinterpret_cast<int32_t>(gettimeofday);
        eax12 = fun_57a(rdi10);
        *reinterpret_cast<int32_t*>(rbp13 - 52) = eax12;
        do {
            __asm__("cdq ");
            if (*reinterpret_cast<int32_t*>(rbp14 - 36) % *reinterpret_cast<int32_t*>(rbp15 - 20) != gettimeofday) {
                rax16 = g59d;
                *reinterpret_cast<int32_t*>(rbp17 - 64) = rax16[*reinterpret_cast<int32_t*>(rbp18 - 36) - 1];
                rax19 = g5b3;
                *reinterpret_cast<int32_t*>(rbp20 - 60) = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rax19) + (*reinterpret_cast<int32_t*>(rbp21 - 36) - 1) * 4 + 0x1e0);
                rax22 = g5cd;
                *reinterpret_cast<int32_t*>(rbp23 - 56) = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rax22) + (*reinterpret_cast<int32_t*>(rbp24 - 36) - 1) * 4 + 0x3c0);
                rax25 = g5e7;
                *reinterpret_cast<int32_t*>(rbp26 - 52) = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rax25) + (*reinterpret_cast<int32_t*>(rbp27 - 36) - 1) * 4 + 0x5a0);
            }
            if (*reinterpret_cast<int32_t*>(rbp28 - 20) > 6 && *reinterpret_cast<int32_t*>(rbp29 - 36) % *reinterpret_cast<int32_t*>(rbp30 - 20) == 4) {
                *reinterpret_cast<int32_t*>(rbp31 - 32) = reinterpret_cast<int32_t>(gettimeofday);
                while (*reinterpret_cast<int32_t*>(rbp32 - 32) < 4) {
                    *reinterpret_cast<int32_t*>(&rdi33) = *reinterpret_cast<int32_t*>(rbp34 + *reinterpret_cast<int32_t*>(rbp35 - 32) * 4 - 64);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi33) + 4) = reinterpret_cast<int32_t>(gettimeofday);
                    eax36 = fun_629(rdi33);
                    *reinterpret_cast<int32_t*>(rbp37 + *reinterpret_cast<int32_t*>(rbp38 - 32) * 4 - 64) = eax36;
                    *reinterpret_cast<int32_t*>(rbp39 - 32) = *reinterpret_cast<int32_t*>(rbp40 - 32) + 1;
                }
            }
            *reinterpret_cast<int32_t*>(rbp41 - 32) = reinterpret_cast<int32_t>(gettimeofday);
            while (*reinterpret_cast<int32_t*>(rbp42 - 32) < 4) {
                rax43 = g662;
                rax44 = g68b;
                (rax44 + *reinterpret_cast<int32_t*>(rbp45 - 32) * 0x78)[*reinterpret_cast<int32_t*>(rbp46 - 36)] = (rax43 + *reinterpret_cast<int32_t*>(rbp47 - 32) * 0x78)[*reinterpret_cast<int32_t*>(rbp48 - 36) - *reinterpret_cast<int32_t*>(rbp49 - 20)] ^ *reinterpret_cast<uint32_t*>(rbp50 + *reinterpret_cast<int32_t*>(rbp51 - 32) * 4 - 64);
                *reinterpret_cast<int32_t*>(rbp52 - 32) = *reinterpret_cast<int32_t*>(rbp53 - 32) + 1;
            }
            *reinterpret_cast<int32_t*>(rbp54 - 36) = *reinterpret_cast<int32_t*>(rbp55 - 36) + 1;
            if (*reinterpret_cast<int32_t*>(rbp56 - 36) >= *reinterpret_cast<int32_t*>(rbp57 - 24) * (*reinterpret_cast<int32_t*>(rbp58 - 28) + 1)) 
                goto addr_6bd_18;
            __asm__("cdq ");
        } while (!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp59 - 36) % *reinterpret_cast<int32_t*>(rbp60 - 20) == gettimeofday));
        rax61 = g4f6;
        *reinterpret_cast<int32_t*>(&rdi62) = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rax61) + (*reinterpret_cast<int32_t*>(rbp63 - 36) - 1) * 4 + 0x1e0);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi62) + 4) = reinterpret_cast<int32_t>(gettimeofday);
        eax64 = fun_502(rdi62);
        *reinterpret_cast<int32_t*>(rbp65 - 72) = eax64;
        __asm__("cdq ");
        rcx66 = g51e;
        *reinterpret_cast<uint32_t*>(rbp67 - 64) = *reinterpret_cast<uint32_t*>(rbp68 - 72) ^ rcx66[*reinterpret_cast<int32_t*>(rbp69 - 36) / *reinterpret_cast<int32_t*>(rbp70 - 20) - 1];
        rax71 = g534;
        *reinterpret_cast<int32_t*>(&rdi72) = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rax71) + (*reinterpret_cast<int32_t*>(rbp73 - 36) - 1) * 4 + 0x3c0);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi72) + 4) = reinterpret_cast<int32_t>(gettimeofday);
        eax3 = fun_540(rdi72);
    }
    addr_6bd_18:
    *reinterpret_cast<int32_t*>(rbp74 - 4) = reinterpret_cast<int32_t>(gettimeofday);
    goto v75;
}

int32_t* g1ffd = reinterpret_cast<int32_t*>(0x4800000000e8308b);

void fun_2004(int64_t rdi, int64_t rsi, int64_t rdx);

int32_t* g200b = reinterpret_cast<int32_t*>(0xe8458901e883008b);

void fun_1ff2(int64_t rdi, int64_t rsi, int64_t rdx) {
    int64_t rdi4;
    int64_t rbp5;
    int32_t* rax6;
    int64_t rsi7;
    int32_t* rax8;
    int64_t rbp9;
    int64_t rbp10;
    int64_t rdi11;
    int64_t rbp12;
    int32_t* rax13;
    int64_t rsi14;
    int64_t rdx15;
    int64_t rbp16;
    int64_t rdi17;
    int64_t rbp18;
    int32_t* rax19;
    int64_t rsi20;
    int64_t rbp21;
    int64_t rbp22;
    int64_t rdi23;
    int64_t rbp24;
    int64_t rsi25;
    int64_t rbp26;
    int64_t rbp27;
    int64_t rbp28;
    int32_t* rax29;
    uint32_t* rax30;
    int64_t rbp31;
    int64_t rbp32;
    int64_t rbp33;
    int64_t rbp34;
    int64_t rbp35;
    int64_t rbp36;
    int64_t v37;

    rdi4 = *reinterpret_cast<int64_t*>(rbp5 - 8);
    rax6 = g1ffd;
    *reinterpret_cast<int32_t*>(&rsi7) = *rax6;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi7) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    fun_2004(rdi4, rsi7, rdx);
    rax8 = g200b;
    *reinterpret_cast<int32_t*>(rbp9 - 24) = *rax8 - 1;
    while (*reinterpret_cast<int32_t*>(rbp10 - 24) >= 1) {
        rdi11 = *reinterpret_cast<int64_t*>(rbp12 - 8);
        rax13 = g2028;
        *reinterpret_cast<int32_t*>(&rsi14) = *rax13;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi14) + 4) = reinterpret_cast<int32_t>(gettimeofday);
        *reinterpret_cast<int32_t*>(&rdx15) = *reinterpret_cast<int32_t*>(rbp16 - 24);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx15) + 4) = reinterpret_cast<int32_t>(gettimeofday);
        fun_2032(rdi11, rsi14, rdx15);
        rdi17 = *reinterpret_cast<int64_t*>(rbp18 - 8);
        rax19 = g203d;
        *reinterpret_cast<int32_t*>(&rsi20) = *rax19;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi20) + 4) = reinterpret_cast<int32_t>(gettimeofday);
        fun_2044(rdi17, rsi20, rdx15);
        *reinterpret_cast<int32_t*>(rbp21 - 24) = *reinterpret_cast<int32_t*>(rbp22 - 24) - 1;
    }
    rdi23 = *reinterpret_cast<int64_t*>(rbp24 - 8);
    *reinterpret_cast<int32_t*>(&rsi25) = *reinterpret_cast<int32_t*>(rbp26 - 20);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi25) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    fun_2060(rdi23, rsi25);
    *reinterpret_cast<int32_t*>(rbp27 - 24) = reinterpret_cast<int32_t>(gettimeofday);
    while (*reinterpret_cast<int32_t*>(rbp28 - 24) < 16) {
        rax29 = g2093;
        rax30 = g209c;
        *rax30 = reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((*reinterpret_cast<int32_t**>(rbp31 - 8))[*reinterpret_cast<int32_t*>(rbp32 - 24)] != *reinterpret_cast<int32_t*>(rbp33 + *reinterpret_cast<int32_t*>(rbp34 - 24) * 4 - 96))) & 1) + *rax29;
        *reinterpret_cast<int32_t*>(rbp35 - 24) = *reinterpret_cast<int32_t*>(rbp36 - 24) + 1;
    }
    goto v37;
}

void fun_2044(int64_t rdi, int64_t rsi, int64_t rdx) {
    int64_t rbp4;
    int64_t rbp5;
    int64_t rbp6;
    int64_t rdi7;
    int64_t rbp8;
    int32_t* rax9;
    int64_t rsi10;
    int64_t rdx11;
    int64_t rbp12;
    int64_t rdi13;
    int64_t rbp14;
    int32_t* rax15;
    int64_t rsi16;
    int64_t rdi17;
    int64_t rbp18;
    int64_t rsi19;
    int64_t rbp20;
    int64_t rbp21;
    int64_t rbp22;
    int32_t* rax23;
    uint32_t* rax24;
    int64_t rbp25;
    int64_t rbp26;
    int64_t rbp27;
    int64_t rbp28;
    int64_t rbp29;
    int64_t rbp30;
    int64_t v31;

    while (1) {
        *reinterpret_cast<int32_t*>(rbp4 - 24) = *reinterpret_cast<int32_t*>(rbp5 - 24) - 1;
        if (*reinterpret_cast<int32_t*>(rbp6 - 24) < 1) 
            break;
        rdi7 = *reinterpret_cast<int64_t*>(rbp8 - 8);
        rax9 = g2028;
        *reinterpret_cast<int32_t*>(&rsi10) = *rax9;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi10) + 4) = reinterpret_cast<int32_t>(gettimeofday);
        *reinterpret_cast<int32_t*>(&rdx11) = *reinterpret_cast<int32_t*>(rbp12 - 24);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx11) + 4) = reinterpret_cast<int32_t>(gettimeofday);
        fun_2032(rdi7, rsi10, rdx11);
        rdi13 = *reinterpret_cast<int64_t*>(rbp14 - 8);
        rax15 = g203d;
        *reinterpret_cast<int32_t*>(&rsi16) = *rax15;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi16) + 4) = reinterpret_cast<int32_t>(gettimeofday);
        fun_2044(rdi13, rsi16, rdx11);
    }
    rdi17 = *reinterpret_cast<int64_t*>(rbp18 - 8);
    *reinterpret_cast<int32_t*>(&rsi19) = *reinterpret_cast<int32_t*>(rbp20 - 20);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi19) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    fun_2060(rdi17, rsi19);
    *reinterpret_cast<int32_t*>(rbp21 - 24) = reinterpret_cast<int32_t>(gettimeofday);
    while (*reinterpret_cast<int32_t*>(rbp22 - 24) < 16) {
        rax23 = g2093;
        rax24 = g209c;
        *rax24 = reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((*reinterpret_cast<int32_t**>(rbp25 - 8))[*reinterpret_cast<int32_t*>(rbp26 - 24)] != *reinterpret_cast<int32_t*>(rbp27 + *reinterpret_cast<int32_t*>(rbp28 - 24) * 4 - 96))) & 1) + *rax23;
        *reinterpret_cast<int32_t*>(rbp29 - 24) = *reinterpret_cast<int32_t*>(rbp30 - 24) + 1;
    }
    goto v31;
}

int32_t fun_39b5();

void rtclock() {
    int32_t* rdi1;
    int32_t* rsi2;
    int32_t eax3;

    rdi1 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 16);
    *reinterpret_cast<int32_t*>(&rsi2) = reinterpret_cast<int32_t>(gettimeofday);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi2) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    eax3 = fun_39b5();
    if (eax3 != gettimeofday) {
        *reinterpret_cast<int32_t*>(&rsi2) = eax3;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi2) + 4) = reinterpret_cast<int32_t>(gettimeofday);
        rdi1 = reinterpret_cast<int32_t*>(0x39cc);
        fun_39d3(0x39cc, rsi2);
    }
    __asm__("cvtsi2sd xmm1, qword [rbp-0x10]");
    __asm__("cvtsi2sd xmm0, dword [rbp-0x8]");
    *rdi1 = *rsi2;
    __asm__("mulsd xmm0, xmm2");
    __asm__("addsd xmm0, xmm1");
    return;
}

int32_t fun_55f(int64_t rdi) {
    int64_t rbp2;
    int32_t eax3;
    int32_t* rax4;
    int64_t rdi5;
    int64_t rbp6;
    int32_t eax7;
    int64_t rbp8;
    int64_t rbp9;
    int64_t rbp10;
    int32_t* rax11;
    int64_t rbp12;
    int64_t rbp13;
    void* rax14;
    int64_t rbp15;
    int64_t rbp16;
    void* rax17;
    int64_t rbp18;
    int64_t rbp19;
    void* rax20;
    int64_t rbp21;
    int64_t rbp22;
    int64_t rbp23;
    int64_t rbp24;
    int64_t rbp25;
    int64_t rbp26;
    int64_t rbp27;
    int64_t rdi28;
    int64_t rbp29;
    int64_t rbp30;
    int32_t eax31;
    int64_t rbp32;
    int64_t rbp33;
    int64_t rbp34;
    int64_t rbp35;
    int64_t rbp36;
    int64_t rbp37;
    uint32_t* rax38;
    uint32_t* rax39;
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
    void* rax56;
    int64_t rdi57;
    int64_t rbp58;
    int32_t eax59;
    int64_t rbp60;
    uint32_t* rcx61;
    int64_t rbp62;
    int64_t rbp63;
    int64_t rbp64;
    int64_t rbp65;
    void* rax66;
    int64_t rdi67;
    int64_t rbp68;
    int32_t eax69;
    int64_t rbp70;
    void* rax71;
    int64_t rdi72;
    int64_t rbp73;
    int64_t rbp74;
    int64_t v75;

    while (1) {
        *reinterpret_cast<int32_t*>(rbp2 - 56) = eax3;
        rax4 = g572;
        *reinterpret_cast<int32_t*>(&rdi5) = rax4[*reinterpret_cast<int32_t*>(rbp6 - 36) - 1];
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi5) + 4) = reinterpret_cast<int32_t>(gettimeofday);
        eax7 = fun_57a(rdi5);
        *reinterpret_cast<int32_t*>(rbp8 - 52) = eax7;
        do {
            __asm__("cdq ");
            if (*reinterpret_cast<int32_t*>(rbp9 - 36) % *reinterpret_cast<int32_t*>(rbp10 - 20) != gettimeofday) {
                rax11 = g59d;
                *reinterpret_cast<int32_t*>(rbp12 - 64) = rax11[*reinterpret_cast<int32_t*>(rbp13 - 36) - 1];
                rax14 = g5b3;
                *reinterpret_cast<int32_t*>(rbp15 - 60) = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rax14) + (*reinterpret_cast<int32_t*>(rbp16 - 36) - 1) * 4 + 0x1e0);
                rax17 = g5cd;
                *reinterpret_cast<int32_t*>(rbp18 - 56) = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rax17) + (*reinterpret_cast<int32_t*>(rbp19 - 36) - 1) * 4 + 0x3c0);
                rax20 = g5e7;
                *reinterpret_cast<int32_t*>(rbp21 - 52) = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rax20) + (*reinterpret_cast<int32_t*>(rbp22 - 36) - 1) * 4 + 0x5a0);
            }
            if (*reinterpret_cast<int32_t*>(rbp23 - 20) > 6 && *reinterpret_cast<int32_t*>(rbp24 - 36) % *reinterpret_cast<int32_t*>(rbp25 - 20) == 4) {
                *reinterpret_cast<int32_t*>(rbp26 - 32) = reinterpret_cast<int32_t>(gettimeofday);
                while (*reinterpret_cast<int32_t*>(rbp27 - 32) < 4) {
                    *reinterpret_cast<int32_t*>(&rdi28) = *reinterpret_cast<int32_t*>(rbp29 + *reinterpret_cast<int32_t*>(rbp30 - 32) * 4 - 64);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi28) + 4) = reinterpret_cast<int32_t>(gettimeofday);
                    eax31 = fun_629(rdi28);
                    *reinterpret_cast<int32_t*>(rbp32 + *reinterpret_cast<int32_t*>(rbp33 - 32) * 4 - 64) = eax31;
                    *reinterpret_cast<int32_t*>(rbp34 - 32) = *reinterpret_cast<int32_t*>(rbp35 - 32) + 1;
                }
            }
            *reinterpret_cast<int32_t*>(rbp36 - 32) = reinterpret_cast<int32_t>(gettimeofday);
            while (*reinterpret_cast<int32_t*>(rbp37 - 32) < 4) {
                rax38 = g662;
                rax39 = g68b;
                (rax39 + *reinterpret_cast<int32_t*>(rbp40 - 32) * 0x78)[*reinterpret_cast<int32_t*>(rbp41 - 36)] = (rax38 + *reinterpret_cast<int32_t*>(rbp42 - 32) * 0x78)[*reinterpret_cast<int32_t*>(rbp43 - 36) - *reinterpret_cast<int32_t*>(rbp44 - 20)] ^ *reinterpret_cast<uint32_t*>(rbp45 + *reinterpret_cast<int32_t*>(rbp46 - 32) * 4 - 64);
                *reinterpret_cast<int32_t*>(rbp47 - 32) = *reinterpret_cast<int32_t*>(rbp48 - 32) + 1;
            }
            *reinterpret_cast<int32_t*>(rbp49 - 36) = *reinterpret_cast<int32_t*>(rbp50 - 36) + 1;
            if (*reinterpret_cast<int32_t*>(rbp51 - 36) >= *reinterpret_cast<int32_t*>(rbp52 - 24) * (*reinterpret_cast<int32_t*>(rbp53 - 28) + 1)) 
                goto addr_6bd_17;
            __asm__("cdq ");
        } while (!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp54 - 36) % *reinterpret_cast<int32_t*>(rbp55 - 20) == gettimeofday));
        rax56 = g4f6;
        *reinterpret_cast<int32_t*>(&rdi57) = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rax56) + (*reinterpret_cast<int32_t*>(rbp58 - 36) - 1) * 4 + 0x1e0);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi57) + 4) = reinterpret_cast<int32_t>(gettimeofday);
        eax59 = fun_502(rdi57);
        *reinterpret_cast<int32_t*>(rbp60 - 72) = eax59;
        __asm__("cdq ");
        rcx61 = g51e;
        *reinterpret_cast<uint32_t*>(rbp62 - 64) = *reinterpret_cast<uint32_t*>(rbp63 - 72) ^ rcx61[*reinterpret_cast<int32_t*>(rbp64 - 36) / *reinterpret_cast<int32_t*>(rbp65 - 20) - 1];
        rax66 = g534;
        *reinterpret_cast<int32_t*>(&rdi67) = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rax66) + (*reinterpret_cast<int32_t*>(rbp68 - 36) - 1) * 4 + 0x3c0);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi67) + 4) = reinterpret_cast<int32_t>(gettimeofday);
        eax69 = fun_540(rdi67);
        *reinterpret_cast<int32_t*>(rbp70 - 60) = eax69;
        rax71 = g553;
        *reinterpret_cast<int32_t*>(&rdi72) = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rax71) + (*reinterpret_cast<int32_t*>(rbp73 - 36) - 1) * 4 + 0x5a0);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi72) + 4) = reinterpret_cast<int32_t>(gettimeofday);
        eax3 = fun_55f(rdi72);
    }
    addr_6bd_17:
    *reinterpret_cast<int32_t*>(rbp74 - 4) = reinterpret_cast<int32_t>(gettimeofday);
    goto v75;
}

int32_t* g1f10 = reinterpret_cast<int32_t*>(0x8b480000000a00c7);

int32_t* g1f1d = reinterpret_cast<int32_t*>(0xb5e90000000400c7);

int32_t* g1feb = reinterpret_cast<int32_t*>(0x4800000000e8108b);

int32_t* g1f2f = reinterpret_cast<int32_t*>(0x8b480000000c00c7);

int32_t* g1f3c = reinterpret_cast<int32_t*>(0x96e90000000600c7);

int32_t* g1f6d = reinterpret_cast<int32_t*>(0x8b480000000e00c7);

int32_t* g1f7a = reinterpret_cast<int32_t*>(0x58e90000000800c7);

int32_t* g1f4e = reinterpret_cast<int32_t*>(0x8b480000000c00c7);

int32_t* g1f5b = reinterpret_cast<int32_t*>(0x77e90000000400c7);

int32_t* g1f8c = reinterpret_cast<int32_t*>(0x8b480000000e00c7);

int32_t* g1f99 = reinterpret_cast<int32_t*>(0x39e90000000400c7);

int32_t* g1fab = reinterpret_cast<int32_t*>(0x8b480000000e00c7);

int32_t* g1fb8 = reinterpret_cast<int32_t*>(0x1ae90000000600c7);

int32_t* g1fca = reinterpret_cast<int32_t*>(0x8b480000000e00c7);

int32_t* g1fd7 = reinterpret_cast<int32_t*>(0x8b480000000800c7);

void fun_1e5b(int64_t rdi, int64_t rsi) {
    int32_t eax3;
    int64_t rbp4;
    int64_t rbp5;
    int32_t* rax6;
    int32_t* rax7;
    int64_t rbp8;
    int64_t rdi9;
    int64_t rbp10;
    int64_t rsi11;
    int64_t rbp12;
    int32_t* rax13;
    int64_t rdx14;
    int64_t rdi15;
    int64_t rbp16;
    int32_t* rax17;
    int64_t rsi18;
    int32_t* rax19;
    int64_t rbp20;
    int64_t rbp21;
    int64_t rdi22;
    int64_t rbp23;
    int32_t* rax24;
    int64_t rsi25;
    int64_t rdx26;
    int64_t rbp27;
    int64_t rdi28;
    int64_t rbp29;
    int32_t* rax30;
    int64_t rsi31;
    int64_t rbp32;
    int64_t rbp33;
    int64_t rdi34;
    int64_t rbp35;
    int64_t rsi36;
    int64_t rbp37;
    int64_t rbp38;
    int64_t rbp39;
    int32_t* rax40;
    uint32_t* rax41;
    int64_t rbp42;
    int64_t rbp43;
    int64_t rbp44;
    int64_t rbp45;
    int64_t rbp46;
    int64_t rbp47;
    int64_t v48;
    int32_t* rax49;
    int32_t* rax50;
    int64_t rbp51;
    int32_t* rax52;
    int32_t* rax53;
    int64_t rbp54;
    int32_t* rax55;
    int32_t* rax56;
    int64_t rbp57;
    int64_t rbp58;
    int64_t rbp59;
    int32_t* rax60;
    int32_t* rax61;
    int64_t rbp62;
    int32_t* rax63;
    int32_t* rax64;
    int64_t rbp65;
    int32_t* rax66;
    int32_t* rax67;

    eax3 = *reinterpret_cast<int32_t*>(rbp4 - 20);
    *reinterpret_cast<int32_t*>(rbp5 - 100) = eax3;
    if (eax3 - 0x1f480 == gettimeofday) {
        rax6 = g1f10;
        *rax6 = 10;
        rax7 = g1f1d;
        *rax7 = 4;
    } else {
        if (*reinterpret_cast<int32_t*>(rbp8 - 100) - 0x1f4c0 == gettimeofday) 
            goto addr_1f28_5; else 
            goto addr_1e7f_6;
    }
    addr_1fdd_7:
    rdi9 = *reinterpret_cast<int64_t*>(rbp10 - 8);
    *reinterpret_cast<int32_t*>(&rsi11) = *reinterpret_cast<int32_t*>(rbp12 - 20);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi11) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    rax13 = g1feb;
    *reinterpret_cast<int32_t*>(&rdx14) = *rax13;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx14) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    fun_1ff2(rdi9, rsi11, rdx14);
    rdi15 = *reinterpret_cast<int64_t*>(rbp16 - 8);
    rax17 = g1ffd;
    *reinterpret_cast<int32_t*>(&rsi18) = *rax17;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi18) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    fun_2004(rdi15, rsi18, rdx14);
    rax19 = g200b;
    *reinterpret_cast<int32_t*>(rbp20 - 24) = *rax19 - 1;
    while (*reinterpret_cast<int32_t*>(rbp21 - 24) >= 1) {
        rdi22 = *reinterpret_cast<int64_t*>(rbp23 - 8);
        rax24 = g2028;
        *reinterpret_cast<int32_t*>(&rsi25) = *rax24;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi25) + 4) = reinterpret_cast<int32_t>(gettimeofday);
        *reinterpret_cast<int32_t*>(&rdx26) = *reinterpret_cast<int32_t*>(rbp27 - 24);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx26) + 4) = reinterpret_cast<int32_t>(gettimeofday);
        fun_2032(rdi22, rsi25, rdx26);
        rdi28 = *reinterpret_cast<int64_t*>(rbp29 - 8);
        rax30 = g203d;
        *reinterpret_cast<int32_t*>(&rsi31) = *rax30;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi31) + 4) = reinterpret_cast<int32_t>(gettimeofday);
        fun_2044(rdi28, rsi31, rdx26);
        *reinterpret_cast<int32_t*>(rbp32 - 24) = *reinterpret_cast<int32_t*>(rbp33 - 24) - 1;
    }
    rdi34 = *reinterpret_cast<int64_t*>(rbp35 - 8);
    *reinterpret_cast<int32_t*>(&rsi36) = *reinterpret_cast<int32_t*>(rbp37 - 20);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi36) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    fun_2060(rdi34, rsi36);
    *reinterpret_cast<int32_t*>(rbp38 - 24) = reinterpret_cast<int32_t>(gettimeofday);
    while (*reinterpret_cast<int32_t*>(rbp39 - 24) < 16) {
        rax40 = g2093;
        rax41 = g209c;
        *rax41 = reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((*reinterpret_cast<int32_t**>(rbp42 - 8))[*reinterpret_cast<int32_t*>(rbp43 - 24)] != *reinterpret_cast<int32_t*>(rbp44 + *reinterpret_cast<int32_t*>(rbp45 - 24) * 4 - 96))) & 1) + *rax40;
        *reinterpret_cast<int32_t*>(rbp46 - 24) = *reinterpret_cast<int32_t*>(rbp47 - 24) + 1;
    }
    goto v48;
    addr_1f28_5:
    rax49 = g1f2f;
    *rax49 = 12;
    rax50 = g1f3c;
    *rax50 = 6;
    goto addr_1fdd_7;
    addr_1e7f_6:
    if (*reinterpret_cast<int32_t*>(rbp51 - 100) - 0x1f500 != gettimeofday) 
        goto addr_1e92_20;
    addr_1f66_21:
    rax52 = g1f6d;
    *rax52 = 14;
    rax53 = g1f7a;
    *rax53 = 8;
    goto addr_1fdd_7;
    addr_1e92_20:
    if (*reinterpret_cast<int32_t*>(rbp54 - 100) - 0x2ee80 != gettimeofday) 
        goto addr_1ea5_23;
    rax55 = g1f4e;
    *rax55 = 12;
    rax56 = g1f5b;
    *rax56 = 4;
    goto addr_1fdd_7;
    addr_1ea5_23:
    if (*reinterpret_cast<int32_t*>(rbp57 - 100) - 0x2eec0 == gettimeofday) 
        goto addr_1f28_5;
    if (*reinterpret_cast<int32_t*>(rbp58 - 100) - 0x2ef00 == gettimeofday) 
        goto addr_1f66_21;
    if (*reinterpret_cast<int32_t*>(rbp59 - 100) - 0x3e880 != gettimeofday) 
        goto addr_1ede_30;
    rax60 = g1f8c;
    *rax60 = 14;
    rax61 = g1f99;
    *rax61 = 4;
    goto addr_1fdd_7;
    addr_1ede_30:
    if (*reinterpret_cast<int32_t*>(rbp62 - 100) - 0x3e8c0 != gettimeofday) 
        goto addr_1ef1_33;
    rax63 = g1fab;
    *rax63 = 14;
    rax64 = g1fb8;
    *rax64 = 6;
    goto addr_1fdd_7;
    addr_1ef1_33:
    if (*reinterpret_cast<int32_t*>(rbp65 - 100) - 0x3e900 != gettimeofday) 
        goto addr_1f04_36;
    rax66 = g1fca;
    *rax66 = 14;
    rax67 = g1fd7;
    *rax67 = 8;
    goto addr_1fdd_7;
    addr_1f04_36:
    goto addr_1fdd_7;
}

void fun_2004(int64_t rdi, int64_t rsi, int64_t rdx) {
    int32_t* rax4;
    int64_t rbp5;
    int64_t rbp6;
    int64_t rdi7;
    int64_t rbp8;
    int32_t* rax9;
    int64_t rsi10;
    int64_t rdx11;
    int64_t rbp12;
    int64_t rdi13;
    int64_t rbp14;
    int32_t* rax15;
    int64_t rsi16;
    int64_t rbp17;
    int64_t rbp18;
    int64_t rdi19;
    int64_t rbp20;
    int64_t rsi21;
    int64_t rbp22;
    int64_t rbp23;
    int64_t rbp24;
    int32_t* rax25;
    uint32_t* rax26;
    int64_t rbp27;
    int64_t rbp28;
    int64_t rbp29;
    int64_t rbp30;
    int64_t rbp31;
    int64_t rbp32;
    int64_t v33;

    rax4 = g200b;
    *reinterpret_cast<int32_t*>(rbp5 - 24) = *rax4 - 1;
    while (*reinterpret_cast<int32_t*>(rbp6 - 24) >= 1) {
        rdi7 = *reinterpret_cast<int64_t*>(rbp8 - 8);
        rax9 = g2028;
        *reinterpret_cast<int32_t*>(&rsi10) = *rax9;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi10) + 4) = reinterpret_cast<int32_t>(gettimeofday);
        *reinterpret_cast<int32_t*>(&rdx11) = *reinterpret_cast<int32_t*>(rbp12 - 24);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx11) + 4) = reinterpret_cast<int32_t>(gettimeofday);
        fun_2032(rdi7, rsi10, rdx11);
        rdi13 = *reinterpret_cast<int64_t*>(rbp14 - 8);
        rax15 = g203d;
        *reinterpret_cast<int32_t*>(&rsi16) = *rax15;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi16) + 4) = reinterpret_cast<int32_t>(gettimeofday);
        fun_2044(rdi13, rsi16, rdx11);
        *reinterpret_cast<int32_t*>(rbp17 - 24) = *reinterpret_cast<int32_t*>(rbp18 - 24) - 1;
    }
    rdi19 = *reinterpret_cast<int64_t*>(rbp20 - 8);
    *reinterpret_cast<int32_t*>(&rsi21) = *reinterpret_cast<int32_t*>(rbp22 - 20);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi21) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    fun_2060(rdi19, rsi21);
    *reinterpret_cast<int32_t*>(rbp23 - 24) = reinterpret_cast<int32_t>(gettimeofday);
    while (*reinterpret_cast<int32_t*>(rbp24 - 24) < 16) {
        rax25 = g2093;
        rax26 = g209c;
        *rax26 = reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((*reinterpret_cast<int32_t**>(rbp27 - 8))[*reinterpret_cast<int32_t*>(rbp28 - 24)] != *reinterpret_cast<int32_t*>(rbp29 + *reinterpret_cast<int32_t*>(rbp30 - 24) * 4 - 96))) & 1) + *rax25;
        *reinterpret_cast<int32_t*>(rbp31 - 24) = *reinterpret_cast<int32_t*>(rbp32 - 24) + 1;
    }
    goto v33;
}

int32_t g39cc = 0xe800b0;

int32_t fun_39b5() {
    int64_t rbp1;
    int32_t eax2;
    int64_t rbp3;
    int32_t* rsi4;
    int64_t rbp5;
    int64_t v6;

    *reinterpret_cast<int32_t*>(rbp1 - 20) = eax2;
    if (*reinterpret_cast<int32_t*>(rbp3 - 20) != gettimeofday) {
        *reinterpret_cast<int32_t*>(&rsi4) = *reinterpret_cast<int32_t*>(rbp5 - 20);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi4) + 4) = reinterpret_cast<int32_t>(gettimeofday);
        fun_39d3(0x39cc, rsi4);
    }
    __asm__("cvtsi2sd xmm1, qword [rbp-0x10]");
    __asm__("cvtsi2sd xmm0, dword [rbp-0x8]");
    g39cc = *rsi4;
    __asm__("mulsd xmm0, xmm2");
    __asm__("addsd xmm0, xmm1");
    goto v6;
}

void fun_221(int64_t rdi, int64_t rsi, int64_t rdx) {
    int64_t rdi4;
    int64_t rbp5;
    int64_t rsi6;
    int64_t rbp7;
    int64_t rdx8;
    int64_t rbp9;
    int64_t rbp10;
    int64_t rbp11;
    int32_t* rax12;
    uint32_t* rax13;
    int64_t rbp14;
    int64_t rbp15;
    int64_t rbp16;
    int64_t rbp17;
    int64_t rbp18;
    int64_t rbp19;
    int64_t v20;

    rdi4 = *reinterpret_cast<int64_t*>(rbp5 - 8);
    *reinterpret_cast<int32_t*>(&rsi6) = *reinterpret_cast<int32_t*>(rbp7 - 20);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi6) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    *reinterpret_cast<int32_t*>(&rdx8) = *reinterpret_cast<int32_t*>(rbp9 - 24);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx8) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    fun_230(rdi4, rsi6, rdx8);
    *reinterpret_cast<int32_t*>(rbp10 - 24) = reinterpret_cast<int32_t>(gettimeofday);
    while (*reinterpret_cast<int32_t*>(rbp11 - 24) < 16) {
        rax12 = g263;
        rax13 = g26c;
        *rax13 = reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((*reinterpret_cast<int32_t**>(rbp14 - 8))[*reinterpret_cast<int32_t*>(rbp15 - 24)] != *reinterpret_cast<int32_t*>(rbp16 + *reinterpret_cast<int32_t*>(rbp17 - 24) * 4 - 96))) & 1) + *rax12;
        *reinterpret_cast<int32_t*>(rbp18 - 24) = *reinterpret_cast<int32_t*>(rbp19 - 24) + 1;
    }
    goto v20;
}

int32_t fun_57a(int64_t rdi) {
    int64_t rbp2;
    int32_t eax3;
    int64_t rbp4;
    int64_t rbp5;
    int32_t* rax6;
    int64_t rbp7;
    int64_t rbp8;
    void* rax9;
    int64_t rbp10;
    int64_t rbp11;
    void* rax12;
    int64_t rbp13;
    int64_t rbp14;
    void* rax15;
    int64_t rbp16;
    int64_t rbp17;
    int64_t rbp18;
    int64_t rbp19;
    int64_t rbp20;
    int64_t rbp21;
    int64_t rbp22;
    int64_t rdi23;
    int64_t rbp24;
    int64_t rbp25;
    int32_t eax26;
    int64_t rbp27;
    int64_t rbp28;
    int64_t rbp29;
    int64_t rbp30;
    int64_t rbp31;
    int64_t rbp32;
    uint32_t* rax33;
    uint32_t* rax34;
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
    void* rax51;
    int64_t rdi52;
    int64_t rbp53;
    int32_t eax54;
    int64_t rbp55;
    uint32_t* rcx56;
    int64_t rbp57;
    int64_t rbp58;
    int64_t rbp59;
    int64_t rbp60;
    void* rax61;
    int64_t rdi62;
    int64_t rbp63;
    int32_t eax64;
    int64_t rbp65;
    void* rax66;
    int64_t rdi67;
    int64_t rbp68;
    int32_t eax69;
    int64_t rbp70;
    int32_t* rax71;
    int64_t rdi72;
    int64_t rbp73;
    int64_t rbp74;
    int64_t v75;

    while (1) {
        *reinterpret_cast<int32_t*>(rbp2 - 52) = eax3;
        do {
            __asm__("cdq ");
            if (*reinterpret_cast<int32_t*>(rbp4 - 36) % *reinterpret_cast<int32_t*>(rbp5 - 20) != gettimeofday) {
                rax6 = g59d;
                *reinterpret_cast<int32_t*>(rbp7 - 64) = rax6[*reinterpret_cast<int32_t*>(rbp8 - 36) - 1];
                rax9 = g5b3;
                *reinterpret_cast<int32_t*>(rbp10 - 60) = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rax9) + (*reinterpret_cast<int32_t*>(rbp11 - 36) - 1) * 4 + 0x1e0);
                rax12 = g5cd;
                *reinterpret_cast<int32_t*>(rbp13 - 56) = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rax12) + (*reinterpret_cast<int32_t*>(rbp14 - 36) - 1) * 4 + 0x3c0);
                rax15 = g5e7;
                *reinterpret_cast<int32_t*>(rbp16 - 52) = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rax15) + (*reinterpret_cast<int32_t*>(rbp17 - 36) - 1) * 4 + 0x5a0);
            }
            if (*reinterpret_cast<int32_t*>(rbp18 - 20) > 6 && *reinterpret_cast<int32_t*>(rbp19 - 36) % *reinterpret_cast<int32_t*>(rbp20 - 20) == 4) {
                *reinterpret_cast<int32_t*>(rbp21 - 32) = reinterpret_cast<int32_t>(gettimeofday);
                while (*reinterpret_cast<int32_t*>(rbp22 - 32) < 4) {
                    *reinterpret_cast<int32_t*>(&rdi23) = *reinterpret_cast<int32_t*>(rbp24 + *reinterpret_cast<int32_t*>(rbp25 - 32) * 4 - 64);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi23) + 4) = reinterpret_cast<int32_t>(gettimeofday);
                    eax26 = fun_629(rdi23);
                    *reinterpret_cast<int32_t*>(rbp27 + *reinterpret_cast<int32_t*>(rbp28 - 32) * 4 - 64) = eax26;
                    *reinterpret_cast<int32_t*>(rbp29 - 32) = *reinterpret_cast<int32_t*>(rbp30 - 32) + 1;
                }
            }
            *reinterpret_cast<int32_t*>(rbp31 - 32) = reinterpret_cast<int32_t>(gettimeofday);
            while (*reinterpret_cast<int32_t*>(rbp32 - 32) < 4) {
                rax33 = g662;
                rax34 = g68b;
                (rax34 + *reinterpret_cast<int32_t*>(rbp35 - 32) * 0x78)[*reinterpret_cast<int32_t*>(rbp36 - 36)] = (rax33 + *reinterpret_cast<int32_t*>(rbp37 - 32) * 0x78)[*reinterpret_cast<int32_t*>(rbp38 - 36) - *reinterpret_cast<int32_t*>(rbp39 - 20)] ^ *reinterpret_cast<uint32_t*>(rbp40 + *reinterpret_cast<int32_t*>(rbp41 - 32) * 4 - 64);
                *reinterpret_cast<int32_t*>(rbp42 - 32) = *reinterpret_cast<int32_t*>(rbp43 - 32) + 1;
            }
            *reinterpret_cast<int32_t*>(rbp44 - 36) = *reinterpret_cast<int32_t*>(rbp45 - 36) + 1;
            if (*reinterpret_cast<int32_t*>(rbp46 - 36) >= *reinterpret_cast<int32_t*>(rbp47 - 24) * (*reinterpret_cast<int32_t*>(rbp48 - 28) + 1)) 
                goto addr_6bd_16;
            __asm__("cdq ");
        } while (!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp49 - 36) % *reinterpret_cast<int32_t*>(rbp50 - 20) == gettimeofday));
        rax51 = g4f6;
        *reinterpret_cast<int32_t*>(&rdi52) = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rax51) + (*reinterpret_cast<int32_t*>(rbp53 - 36) - 1) * 4 + 0x1e0);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi52) + 4) = reinterpret_cast<int32_t>(gettimeofday);
        eax54 = fun_502(rdi52);
        *reinterpret_cast<int32_t*>(rbp55 - 72) = eax54;
        __asm__("cdq ");
        rcx56 = g51e;
        *reinterpret_cast<uint32_t*>(rbp57 - 64) = *reinterpret_cast<uint32_t*>(rbp58 - 72) ^ rcx56[*reinterpret_cast<int32_t*>(rbp59 - 36) / *reinterpret_cast<int32_t*>(rbp60 - 20) - 1];
        rax61 = g534;
        *reinterpret_cast<int32_t*>(&rdi62) = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rax61) + (*reinterpret_cast<int32_t*>(rbp63 - 36) - 1) * 4 + 0x3c0);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi62) + 4) = reinterpret_cast<int32_t>(gettimeofday);
        eax64 = fun_540(rdi62);
        *reinterpret_cast<int32_t*>(rbp65 - 60) = eax64;
        rax66 = g553;
        *reinterpret_cast<int32_t*>(&rdi67) = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rax66) + (*reinterpret_cast<int32_t*>(rbp68 - 36) - 1) * 4 + 0x5a0);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi67) + 4) = reinterpret_cast<int32_t>(gettimeofday);
        eax69 = fun_55f(rdi67);
        *reinterpret_cast<int32_t*>(rbp70 - 56) = eax69;
        rax71 = g572;
        *reinterpret_cast<int32_t*>(&rdi72) = rax71[*reinterpret_cast<int32_t*>(rbp73 - 36) - 1];
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi72) + 4) = reinterpret_cast<int32_t>(gettimeofday);
        eax3 = fun_57a(rdi72);
    }
    addr_6bd_16:
    *reinterpret_cast<int32_t*>(rbp74 - 4) = reinterpret_cast<int32_t>(gettimeofday);
    goto v75;
}

void fun_2060(int64_t rdi, int64_t rsi) {
    int64_t rbp3;
    int64_t rbp4;
    int32_t* rax5;
    uint32_t* rax6;
    int64_t rbp7;
    int64_t rbp8;
    int64_t rbp9;
    int64_t rbp10;
    int64_t rbp11;
    int64_t rbp12;
    int64_t v13;

    *reinterpret_cast<int32_t*>(rbp3 - 24) = reinterpret_cast<int32_t>(gettimeofday);
    while (*reinterpret_cast<int32_t*>(rbp4 - 24) < 16) {
        rax5 = g2093;
        rax6 = g209c;
        *rax6 = reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((*reinterpret_cast<int32_t**>(rbp7 - 8))[*reinterpret_cast<int32_t*>(rbp8 - 24)] != *reinterpret_cast<int32_t*>(rbp9 + *reinterpret_cast<int32_t*>(rbp10 - 24) * 4 - 96))) & 1) + *rax5;
        *reinterpret_cast<int32_t*>(rbp11 - 24) = *reinterpret_cast<int32_t*>(rbp12 - 24) + 1;
    }
    goto v13;
}

uint120_t g3911 = 0xba00000000358b48;

void fun_3922(int64_t rdi, int64_t rsi, int64_t rdx);

void fun_390a(int64_t rdi, int64_t rsi, int64_t rdx) {
    int64_t rdi4;
    int64_t rsi5;
    int64_t v6;

    rdi4 = *reinterpret_cast<int64_t*>(&g3911);
    rsi5 = *reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(&g3911) + 7);
    fun_3922(rdi4, rsi5, 0x1f480);
    goto v6;
}

void fun_230(int64_t rdi, int64_t rsi, int64_t rdx) {
    int64_t rbp4;
    int64_t rbp5;
    int32_t* rax6;
    uint32_t* rax7;
    int64_t rbp8;
    int64_t rbp9;
    int64_t rbp10;
    int64_t rbp11;
    int64_t rbp12;
    int64_t rbp13;
    int64_t v14;

    *reinterpret_cast<int32_t*>(rbp4 - 24) = reinterpret_cast<int32_t>(gettimeofday);
    while (*reinterpret_cast<int32_t*>(rbp5 - 24) < 16) {
        rax6 = g263;
        rax7 = g26c;
        *rax7 = reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>((*reinterpret_cast<int32_t**>(rbp8 - 8))[*reinterpret_cast<int32_t*>(rbp9 - 24)] != *reinterpret_cast<int32_t*>(rbp10 + *reinterpret_cast<int32_t*>(rbp11 - 24) * 4 - 96))) & 1) + *rax6;
        *reinterpret_cast<int32_t*>(rbp12 - 24) = *reinterpret_cast<int32_t*>(rbp13 - 24) + 1;
    }
    goto v14;
}

void fun_3922(int64_t rdi, int64_t rsi, int64_t rdx) {
    int64_t v4;

    goto v4;
}

void gettimeofday() {
}

int32_t fun_ffffffff840f00e0();

void fun_d8() {
    fun_ffffffff840f00e0();
}

int32_t* g19b = reinterpret_cast<int32_t*>(0x8b480000000400c7);

int32_t* g1a8 = reinterpret_cast<int32_t*>(0x8b480000000800c7);

void fun_e8() {
    int32_t eax1;
    int32_t* rax2;
    int32_t* rax3;
    int64_t rdi4;
    int64_t rbp5;
    int64_t rsi6;
    int64_t rbp7;

    if (eax1 - 0x3e900 == gettimeofday) {
        rax2 = g19b;
        *rax2 = 4;
        rax3 = g1a8;
        *rax3 = 8;
    }
    rdi4 = *reinterpret_cast<int64_t*>(rbp5 - 8);
    *reinterpret_cast<int32_t*>(&rsi6) = *reinterpret_cast<int32_t*>(rbp7 - 20);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi6) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    fun_1bc(rdi4, rsi6);
}

void fun_108() {
    int32_t* rax1;
    int32_t eax2;

    *reinterpret_cast<int32_t*>(&rax1) = eax2 + reinterpret_cast<int32_t>(gettimeofday);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax1) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    *rax1 = 4;
    goto 0x1ae;
}

void fun_f9() {
}

int32_t* g11f = reinterpret_cast<int32_t*>(0x8b480000000200c7);

int32_t* g12c = reinterpret_cast<int32_t*>(0x77e90000000400c7);

void fun_118() {
    int32_t* rax1;
    int32_t* rax2;

    rax1 = g11f;
    *rax1 = 2;
    rax2 = g12c;
    *rax2 = 4;
    goto 0x1ae;
}

int32_t* g13e = reinterpret_cast<int32_t*>(0x8b480000000400c7);

int32_t* g14b = reinterpret_cast<int32_t*>(0x58e90000000400c7);

void fun_137() {
    int32_t* rax1;
    int32_t* rax2;

    rax1 = g13e;
    *rax1 = 4;
    rax2 = g14b;
    *rax2 = 4;
    goto 0x1ae;
}

int32_t* g487 = reinterpret_cast<int32_t*>(0x48000001e0c96948);

void KeySchedule(int32_t edi, int32_t* rsi) {
    int32_t* v3;
    int32_t v4;
    int32_t v5;
    int32_t v6;
    int32_t* rax7;

    v3 = rsi;
    if (edi - 0x1f480 == gettimeofday) {
        v4 = 4;
    } else {
        if (edi - 0x1f4c0 == gettimeofday) 
            goto addr_367_5; else 
            goto addr_2c3_6;
    }
    addr_443_7:
    v5 = reinterpret_cast<int32_t>(gettimeofday);
    while (v5 < v4) {
        v6 = reinterpret_cast<int32_t>(gettimeofday);
        while (v6 < 4) {
            rax7 = g487;
            (rax7 + v6 * 0x78)[v5] = v3[v6 + (v5 << 2)];
            ++v6;
        }
        ++v5;
    }
    addr_367_5:
    v4 = 4;
    goto addr_443_7;
    addr_2c3_6:
    if (edi - 0x1f500 != gettimeofday) 
        goto addr_2d6_16;
    v4 = 4;
    goto addr_443_7;
    addr_2d6_16:
    if (edi - 0x2ee80 != gettimeofday) 
        goto addr_2e9_19;
    v4 = 6;
    goto addr_443_7;
    addr_2e9_19:
    if (edi - 0x2eec0 != gettimeofday) 
        goto addr_2fc_22;
    v4 = 6;
    goto addr_443_7;
    addr_2fc_22:
    if (edi - 0x2ef00 != gettimeofday) 
        goto addr_30f_25;
    v4 = 6;
    goto addr_443_7;
    addr_30f_25:
    if (edi - 0x3e880 != gettimeofday) 
        goto addr_322_28;
    v4 = 8;
    goto addr_443_7;
    addr_322_28:
    if (edi - 0x3e8c0 != gettimeofday) 
        goto addr_335_31;
    v4 = 8;
    goto addr_443_7;
    addr_335_31:
    if (edi - 0x3e900 != gettimeofday) 
        goto addr_348_34;
    v4 = 8;
    goto addr_443_7;
    addr_348_34:
    goto 0x6c4;
}

struct s2 {
    uint32_t f0;
    uint32_t f4;
    uint32_t f8;
    uint32_t fc;
    uint32_t f10;
    uint32_t f14;
    uint32_t f18;
    uint32_t f1c;
    uint32_t f20;
    uint32_t f24;
    uint32_t f28;
    uint32_t f2c;
    uint32_t f30;
    uint32_t f34;
    uint32_t f38;
    uint32_t f3c;
    uint32_t f40;
    uint32_t f44;
    uint32_t f48;
    uint32_t f4c;
    uint32_t f50;
    uint32_t f54;
    uint32_t f58;
    uint32_t f5c;
    uint32_t f60;
    uint32_t f64;
    uint32_t f68;
    uint32_t f6c;
    uint32_t f70;
    uint32_t f74;
    uint32_t f78;
    uint32_t f7c;
};

uint32_t* g8f5 = reinterpret_cast<uint32_t*>(0x48c8014806e1c148);

uint32_t* g923 = reinterpret_cast<uint32_t*>(0x48c8014806e1c148);

uint32_t* g955 = reinterpret_cast<uint32_t*>(0x48c8014806e1c148);

uint32_t* g987 = reinterpret_cast<uint32_t*>(0x48c8014806e1c148);

uint32_t* g9c3 = reinterpret_cast<uint32_t*>(0x48c8014806e1c148);

uint32_t* g9f1 = reinterpret_cast<uint32_t*>(0x48c8014806e1c148);

uint32_t* ga2d = reinterpret_cast<uint32_t*>(0x48c8014806e1c148);

uint32_t* ga5b = reinterpret_cast<uint32_t*>(0x48c8014806e1c148);

uint32_t* ga97 = reinterpret_cast<uint32_t*>(0x48c8014806e1c148);

uint32_t* gac5 = reinterpret_cast<uint32_t*>(0x48c8014806e1c148);

uint32_t* gaf7 = reinterpret_cast<uint32_t*>(0x48c8014806e1c148);

uint32_t* gb29 = reinterpret_cast<uint32_t*>(0x48c8014806e1c148);

uint32_t* gb64 = reinterpret_cast<uint32_t*>(0x48c8014806e1c148);

uint32_t* gb94 = reinterpret_cast<uint32_t*>(0x48c8014806e1c148);

uint32_t* gbc6 = reinterpret_cast<uint32_t*>(0x48c8014806e1c148);

uint32_t* gbf8 = reinterpret_cast<uint32_t*>(0x48c8014806e1c148);

uint32_t* gc2f = reinterpret_cast<uint32_t*>(0x48c8014806e1c148);

uint32_t* gc5d = reinterpret_cast<uint32_t*>(0x48c8014806e1c148);

uint32_t* gc8f = reinterpret_cast<uint32_t*>(0x48c8014806e1c148);

uint32_t* gcc1 = reinterpret_cast<uint32_t*>(0x48c8014806e1c148);

uint32_t* gcf3 = reinterpret_cast<uint32_t*>(0x48c8014806e1c148);

uint32_t* gd25 = reinterpret_cast<uint32_t*>(0x48c8014806e1c148);

uint32_t* gd61 = reinterpret_cast<uint32_t*>(0x48c8014806e1c148);

uint32_t* gd8f = reinterpret_cast<uint32_t*>(0x48c8014806e1c148);

uint32_t* gdc1 = reinterpret_cast<uint32_t*>(0x48c8014806e1c148);

uint32_t* gdfd = reinterpret_cast<uint32_t*>(0x48c8014806e1c148);

uint32_t* ge2b = reinterpret_cast<uint32_t*>(0x48c8014806e1c148);

uint32_t* ge5d = reinterpret_cast<uint32_t*>(0x48c8014806e1c148);

uint32_t* ge99 = reinterpret_cast<uint32_t*>(0x48c8014806e1c148);

uint32_t* gec7 = reinterpret_cast<uint32_t*>(0x48c8014806e1c148);

uint32_t* gf03 = reinterpret_cast<uint32_t*>(0x48c8014806e1c148);

uint32_t* gf31 = reinterpret_cast<uint32_t*>(0x48c8014806e1c148);

uint32_t* gf6d = reinterpret_cast<uint32_t*>(0x48c8014806e1c148);

uint32_t* gf9b = reinterpret_cast<uint32_t*>(0x48c8014806e1c148);

uint32_t* gfd6 = reinterpret_cast<uint32_t*>(0x48c8014806e1c148);

uint32_t* g1006 = reinterpret_cast<uint32_t*>(0x48c8014806e1c148);

uint32_t* g1038 = reinterpret_cast<uint32_t*>(0x48c8014806e1c148);

uint32_t* g106a = reinterpret_cast<uint32_t*>(0x48c8014806e1c148);

uint32_t* g109c = reinterpret_cast<uint32_t*>(0x48c8014806e1c148);

uint32_t* g10ce = reinterpret_cast<uint32_t*>(0x48c8014806e1c148);

uint32_t* g1105 = reinterpret_cast<uint32_t*>(0x48c8014806e1c148);

uint32_t* g1133 = reinterpret_cast<uint32_t*>(0x48c8014806e1c148);

uint32_t* g1165 = reinterpret_cast<uint32_t*>(0x48c8014806e1c148);

uint32_t* g1197 = reinterpret_cast<uint32_t*>(0x48c8014806e1c148);

uint32_t* g11c9 = reinterpret_cast<uint32_t*>(0x48c8014806e1c148);

uint32_t* g11fb = reinterpret_cast<uint32_t*>(0x48c8014806e1c148);

uint32_t* g122d = reinterpret_cast<uint32_t*>(0x48c8014806e1c148);

uint32_t* g125f = reinterpret_cast<uint32_t*>(0x48c8014806e1c148);

uint32_t* g129b = reinterpret_cast<uint32_t*>(0x48c8014806e1c148);

uint32_t* g12c9 = reinterpret_cast<uint32_t*>(0x48c8014806e1c148);

uint32_t* g12fb = reinterpret_cast<uint32_t*>(0x48c8014806e1c148);

uint32_t* g132d = reinterpret_cast<uint32_t*>(0x48c8014806e1c148);

uint32_t* g135f = reinterpret_cast<uint32_t*>(0x48c8014806e1c148);

uint32_t* g1391 = reinterpret_cast<uint32_t*>(0x48c8014806e1c148);

uint32_t* g13c3 = reinterpret_cast<uint32_t*>(0x48c8014806e1c148);

uint32_t* g13f5 = reinterpret_cast<uint32_t*>(0x48c8014806e1c148);

uint32_t* g1431 = reinterpret_cast<uint32_t*>(0x48c8014806e1c148);

uint32_t* g145f = reinterpret_cast<uint32_t*>(0x48c8014806e1c148);

uint32_t* g149b = reinterpret_cast<uint32_t*>(0x48c8014806e1c148);

uint32_t* g14c9 = reinterpret_cast<uint32_t*>(0x48c8014806e1c148);

uint32_t* g1505 = reinterpret_cast<uint32_t*>(0x48c8014806e1c148);

uint32_t* g1533 = reinterpret_cast<uint32_t*>(0x48c8014806e1c148);

uint32_t* g156f = reinterpret_cast<uint32_t*>(0x48c8014806e1c148);

uint32_t* g159d = reinterpret_cast<uint32_t*>(0x48c8014806e1c148);

uint32_t* g15d8 = reinterpret_cast<uint32_t*>(0x48c8014806e1c148);

uint32_t* g1608 = reinterpret_cast<uint32_t*>(0x48c8014806e1c148);

uint32_t* g163a = reinterpret_cast<uint32_t*>(0x48c8014806e1c148);

uint32_t* g166c = reinterpret_cast<uint32_t*>(0x48c8014806e1c148);

uint32_t* g169e = reinterpret_cast<uint32_t*>(0x48c8014806e1c148);

uint32_t* g16d0 = reinterpret_cast<uint32_t*>(0x48c8014806e1c148);

uint32_t* g1702 = reinterpret_cast<uint32_t*>(0x48c8014806e1c148);

uint32_t* g1734 = reinterpret_cast<uint32_t*>(0x48c8014806e1c148);

void type(struct s2* rdi, int32_t esi) {
    uint32_t* rax3;
    uint32_t v4;
    uint32_t* rax5;
    uint32_t* rax6;
    uint32_t* rax7;
    uint32_t* rax8;
    uint32_t v9;
    uint32_t* rax10;
    uint32_t* rax11;
    uint32_t v12;
    uint32_t* rax13;
    uint32_t* rax14;
    uint32_t v15;
    uint32_t* rax16;
    uint32_t* rax17;
    uint32_t* rax18;
    uint32_t* rax19;
    uint32_t* rax20;
    uint32_t* rax21;
    uint32_t* rax22;
    uint32_t* rax23;
    uint32_t v24;
    uint32_t* rax25;
    uint32_t* rax26;
    uint32_t* rax27;
    uint32_t* rax28;
    uint32_t* rax29;
    uint32_t* rax30;
    uint32_t v31;
    uint32_t* rax32;
    uint32_t* rax33;
    uint32_t* rax34;
    uint32_t v35;
    uint32_t* rax36;
    uint32_t* rax37;
    uint32_t* rax38;
    uint32_t v39;
    uint32_t* rax40;
    uint32_t* rax41;
    uint32_t v42;
    uint32_t* rax43;
    uint32_t* rax44;
    uint32_t v45;
    uint32_t* rax46;
    uint32_t* rax47;
    uint32_t* rax48;
    uint32_t* rax49;
    uint32_t* rax50;
    uint32_t* rax51;
    uint32_t* rax52;
    uint32_t* rax53;
    uint32_t v54;
    uint32_t* rax55;
    uint32_t* rax56;
    uint32_t* rax57;
    uint32_t* rax58;
    uint32_t* rax59;
    uint32_t* rax60;
    uint32_t* rax61;
    uint32_t* rax62;
    uint32_t v63;
    uint32_t* rax64;
    uint32_t* rax65;
    uint32_t* rax66;
    uint32_t* rax67;
    uint32_t* rax68;
    uint32_t* rax69;
    uint32_t* rax70;
    uint32_t* rax71;
    uint32_t v72;
    uint32_t* rax73;
    uint32_t* rax74;
    uint32_t v75;
    uint32_t* rax76;
    uint32_t* rax77;
    uint32_t v78;
    uint32_t* rax79;
    uint32_t* rax80;
    uint32_t v81;
    uint32_t* rax82;
    uint32_t* rax83;
    uint32_t* rax84;
    uint32_t* rax85;
    uint32_t* rax86;
    uint32_t* rax87;
    uint32_t* rax88;
    uint32_t* rax89;
    uint32_t* rax90;

    if (esi - 4 == gettimeofday) {
        rax3 = g8f5;
        v4 = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rax3) + (static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f4) >> 4) << 6) + (rdi->f4 & 15) * 4);
        rax5 = g923;
        rdi->f4 = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rax5) + (static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f14) >> 4) << 6) + (rdi->f14 & 15) * 4);
        rax6 = g955;
        rdi->f14 = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rax6) + (static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f24) >> 4) << 6) + (rdi->f24 & 15) * 4);
        rax7 = g987;
        rdi->f24 = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rax7) + (static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f34) >> 4) << 6) + (rdi->f34 & 15) * 4);
        rdi->f34 = v4;
        rax8 = g9c3;
        v9 = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rax8) + (static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f8) >> 4) << 6) + (rdi->f8 & 15) * 4);
        rax10 = g9f1;
        rdi->f8 = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rax10) + (static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f28) >> 4) << 6) + (rdi->f28 & 15) * 4);
        rdi->f28 = v9;
        rax11 = ga2d;
        v12 = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rax11) + (static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f18) >> 4) << 6) + (rdi->f18 & 15) * 4);
        rax13 = ga5b;
        rdi->f18 = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rax13) + (static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f38) >> 4) << 6) + (rdi->f38 & 15) * 4);
        rdi->f38 = v12;
        rax14 = ga97;
        v15 = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rax14) + (static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->fc) >> 4) << 6) + (rdi->fc & 15) * 4);
        rax16 = gac5;
        rdi->fc = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rax16) + (static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f3c) >> 4) << 6) + (rdi->f3c & 15) * 4);
        rax17 = gaf7;
        rdi->f3c = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rax17) + (static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f2c) >> 4) << 6) + (rdi->f2c & 15) * 4);
        rax18 = gb29;
        rdi->f2c = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rax18) + (static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f1c) >> 4) << 6) + (rdi->f1c & 15) * 4);
        rdi->f1c = v15;
        rax19 = gb64;
        rdi->f0 = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rax19) + (static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f0) >> 4) << 6) + (rdi->f0 & 15) * 4);
        rax20 = gb94;
        rdi->f10 = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rax20) + (static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f10) >> 4) << 6) + (rdi->f10 & 15) * 4);
        rax21 = gbc6;
        rdi->f20 = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rax21) + (static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f20) >> 4) << 6) + (rdi->f20 & 15) * 4);
        rax22 = gbf8;
        rdi->f30 = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rax22) + (static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f30) >> 4) << 6) + (rdi->f30 & 15) * 4);
    } else {
        if (esi - 6 == gettimeofday) 
            goto addr_c1b_5; else 
            goto addr_8cb_6;
    }
    addr_1752_7:
    return;
    addr_c1b_5:
    rax23 = gc2f;
    v24 = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rax23) + (static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f4) >> 4) << 6) + (rdi->f4 & 15) * 4);
    rax25 = gc5d;
    rdi->f4 = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rax25) + (static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f14) >> 4) << 6) + (rdi->f14 & 15) * 4);
    rax26 = gc8f;
    rdi->f14 = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rax26) + (static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f24) >> 4) << 6) + (rdi->f24 & 15) * 4);
    rax27 = gcc1;
    rdi->f24 = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rax27) + (static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f34) >> 4) << 6) + (rdi->f34 & 15) * 4);
    rax28 = gcf3;
    rdi->f34 = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rax28) + (static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f44) >> 4) << 6) + (rdi->f44 & 15) * 4);
    rax29 = gd25;
    rdi->f44 = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rax29) + (static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f54) >> 4) << 6) + (rdi->f54 & 15) * 4);
    rdi->f54 = v24;
    rax30 = gd61;
    v31 = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rax30) + (static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f8) >> 4) << 6) + (rdi->f8 & 15) * 4);
    rax32 = gd8f;
    rdi->f8 = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rax32) + (static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f28) >> 4) << 6) + (rdi->f28 & 15) * 4);
    rax33 = gdc1;
    rdi->f28 = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rax33) + (static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f48) >> 4) << 6) + (rdi->f48 & 15) * 4);
    rdi->f48 = v31;
    rax34 = gdfd;
    v35 = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rax34) + (static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f18) >> 4) << 6) + (rdi->f18 & 15) * 4);
    rax36 = ge2b;
    rdi->f18 = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rax36) + (static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f38) >> 4) << 6) + (rdi->f38 & 15) * 4);
    rax37 = ge5d;
    rdi->f38 = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rax37) + (static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f58) >> 4) << 6) + (rdi->f58 & 15) * 4);
    rdi->f58 = v35;
    rax38 = ge99;
    v39 = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rax38) + (static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->fc) >> 4) << 6) + (rdi->fc & 15) * 4);
    rax40 = gec7;
    rdi->fc = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rax40) + (static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f3c) >> 4) << 6) + (rdi->f3c & 15) * 4);
    rdi->f3c = v39;
    rax41 = gf03;
    v42 = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rax41) + (static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f1c) >> 4) << 6) + (rdi->f1c & 15) * 4);
    rax43 = gf31;
    rdi->f1c = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rax43) + (static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f4c) >> 4) << 6) + (rdi->f4c & 15) * 4);
    rdi->f4c = v42;
    rax44 = gf6d;
    v45 = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rax44) + (static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f2c) >> 4) << 6) + (rdi->f2c & 15) * 4);
    rax46 = gf9b;
    rdi->f2c = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rax46) + (static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f5c) >> 4) << 6) + (rdi->f5c & 15) * 4);
    rdi->f5c = v45;
    rax47 = gfd6;
    rdi->f0 = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rax47) + (static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f0) >> 4) << 6) + (rdi->f0 & 15) * 4);
    rax48 = g1006;
    rdi->f10 = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rax48) + (static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f10) >> 4) << 6) + (rdi->f10 & 15) * 4);
    rax49 = g1038;
    rdi->f20 = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rax49) + (static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f20) >> 4) << 6) + (rdi->f20 & 15) * 4);
    rax50 = g106a;
    rdi->f30 = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rax50) + (static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f30) >> 4) << 6) + (rdi->f30 & 15) * 4);
    rax51 = g109c;
    rdi->f40 = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rax51) + (static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f40) >> 4) << 6) + (rdi->f40 & 15) * 4);
    rax52 = g10ce;
    rdi->f50 = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rax52) + (static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f50) >> 4) << 6) + (rdi->f50 & 15) * 4);
    goto addr_1752_7;
    addr_8cb_6:
    if (esi - 8 != gettimeofday) 
        goto addr_8dc_9;
    rax53 = g1105;
    v54 = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rax53) + (static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f4) >> 4) << 6) + (rdi->f4 & 15) * 4);
    rax55 = g1133;
    rdi->f4 = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rax55) + (static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f14) >> 4) << 6) + (rdi->f14 & 15) * 4);
    rax56 = g1165;
    rdi->f14 = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rax56) + (static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f24) >> 4) << 6) + (rdi->f24 & 15) * 4);
    rax57 = g1197;
    rdi->f24 = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rax57) + (static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f34) >> 4) << 6) + (rdi->f34 & 15) * 4);
    rax58 = g11c9;
    rdi->f34 = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rax58) + (static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f44) >> 4) << 6) + (rdi->f44 & 15) * 4);
    rax59 = g11fb;
    rdi->f44 = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rax59) + (static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f54) >> 4) << 6) + (rdi->f54 & 15) * 4);
    rax60 = g122d;
    rdi->f54 = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rax60) + (static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f64) >> 4) << 6) + (rdi->f64 & 15) * 4);
    rax61 = g125f;
    rdi->f64 = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rax61) + (static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f74) >> 4) << 6) + (rdi->f74 & 15) * 4);
    rdi->f74 = v54;
    rax62 = g129b;
    v63 = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rax62) + (static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f8) >> 4) << 6) + (rdi->f8 & 15) * 4);
    rax64 = g12c9;
    rdi->f8 = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rax64) + (static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f38) >> 4) << 6) + (rdi->f38 & 15) * 4);
    rax65 = g12fb;
    rdi->f38 = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rax65) + (static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f68) >> 4) << 6) + (rdi->f68 & 15) * 4);
    rax66 = g132d;
    rdi->f68 = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rax66) + (static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f18) >> 4) << 6) + (rdi->f18 & 15) * 4);
    rax67 = g135f;
    rdi->f18 = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rax67) + (static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f48) >> 4) << 6) + (rdi->f48 & 15) * 4);
    rax68 = g1391;
    rdi->f48 = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rax68) + (static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f78) >> 4) << 6) + (rdi->f78 & 15) * 4);
    rax69 = g13c3;
    rdi->f78 = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rax69) + (static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f28) >> 4) << 6) + (rdi->f28 & 15) * 4);
    rax70 = g13f5;
    rdi->f28 = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rax70) + (static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f58) >> 4) << 6) + (rdi->f58 & 15) * 4);
    rdi->f58 = v63;
    rax71 = g1431;
    v72 = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rax71) + (static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->fc) >> 4) << 6) + (rdi->fc & 15) * 4);
    rax73 = g145f;
    rdi->fc = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rax73) + (static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f4c) >> 4) << 6) + (rdi->f4c & 15) * 4);
    rdi->f4c = v72;
    rax74 = g149b;
    v75 = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rax74) + (static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f1c) >> 4) << 6) + (rdi->f1c & 15) * 4);
    rax76 = g14c9;
    rdi->f1c = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rax76) + (static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f5c) >> 4) << 6) + (rdi->f5c & 15) * 4);
    rdi->f5c = v75;
    rax77 = g1505;
    v78 = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rax77) + (static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f2c) >> 4) << 6) + (rdi->f2c & 15) * 4);
    rax79 = g1533;
    rdi->f2c = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rax79) + (static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f6c) >> 4) << 6) + (rdi->f6c & 15) * 4);
    rdi->f6c = v78;
    rax80 = g156f;
    v81 = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rax80) + (static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f3c) >> 4) << 6) + (rdi->f3c & 15) * 4);
    rax82 = g159d;
    rdi->f3c = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rax82) + (static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f7c) >> 4) << 6) + (rdi->f7c & 15) * 4);
    rdi->f7c = v81;
    rax83 = g15d8;
    rdi->f0 = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rax83) + (static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f0) >> 4) << 6) + (rdi->f0 & 15) * 4);
    rax84 = g1608;
    rdi->f10 = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rax84) + (static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f10) >> 4) << 6) + (rdi->f10 & 15) * 4);
    rax85 = g163a;
    rdi->f20 = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rax85) + (static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f20) >> 4) << 6) + (rdi->f20 & 15) * 4);
    rax86 = g166c;
    rdi->f30 = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rax86) + (static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f30) >> 4) << 6) + (rdi->f30 & 15) * 4);
    rax87 = g169e;
    rdi->f40 = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rax87) + (static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f40) >> 4) << 6) + (rdi->f40 & 15) * 4);
    rax88 = g16d0;
    rdi->f50 = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rax88) + (static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f50) >> 4) << 6) + (rdi->f50 & 15) * 4);
    rax89 = g1702;
    rdi->f60 = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rax89) + (static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f60) >> 4) << 6) + (rdi->f60 & 15) * 4);
    rax90 = g1734;
    rdi->f70 = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rax90) + (static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f70) >> 4) << 6) + (rdi->f70 & 15) * 4);
    goto addr_1752_7;
    addr_8dc_9:
    goto addr_1752_7;
}

uint32_t* g18c1 = reinterpret_cast<uint32_t*>(0xffff6c858b900c33);

void* g1a22 = reinterpret_cast<void*>(0x8b000001e0908c33);

void* g1b8a = reinterpret_cast<void*>(0x8b000003c0908c33);

void* g1cf2 = reinterpret_cast<void*>(0x8b000005a0908c33);

int64_t MixColumn_AddRoundKey(uint32_t* rdi, int32_t esi, int32_t edx) {
    void* rbp4;
    uint32_t* v5;
    int32_t v6;
    int32_t v7;
    int32_t v8;
    int64_t rax9;
    uint32_t v10;
    uint32_t v11;
    int64_t rax12;
    int64_t rax13;
    uint32_t* rax14;
    int64_t rax15;
    int64_t rax16;
    uint32_t v17;
    uint32_t v18;
    int64_t rax19;
    int64_t rax20;
    void* rax21;
    int64_t rax22;
    int64_t rax23;
    uint32_t v24;
    uint32_t v25;
    int64_t rax26;
    int64_t rax27;
    void* rax28;
    int64_t rax29;
    int64_t rax30;
    uint32_t v31;
    uint32_t v32;
    int64_t rax33;
    int64_t rax34;
    void* rax35;
    int64_t rax36;
    int32_t v37;

    rbp4 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8);
    v5 = rdi;
    v6 = esi;
    v7 = edx;
    v8 = reinterpret_cast<int32_t>(gettimeofday);
    while (v8 < v6) {
        *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbp4) + (v8 << 2) * 4 - 0x90) = v5[v8 << 2] << 1;
        if (*reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rbp4) + (v8 << 2) * 4 - 0x90) >> 8 == 1) {
            rax9 = v8 << 2;
            *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbp4) + rax9 * 4 - 0x90) = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbp4) + rax9 * 4 - 0x90) ^ 0x11b;
        }
        v10 = v5[(v8 << 2) + 1];
        v11 = v10 << 1 ^ v10;
        if (reinterpret_cast<int32_t>(v11) >> 8 != 1) {
            rax12 = v8 << 2;
            *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbp4) + rax12 * 4 - 0x90) = v11 ^ *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbp4) + rax12 * 4 - 0x90);
        } else {
            rax13 = v8 << 2;
            *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbp4) + rax13 * 4 - 0x90) = v11 ^ 0x11b ^ *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbp4) + rax13 * 4 - 0x90);
        }
        rax14 = g18c1;
        rax15 = v8 << 2;
        *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbp4) + rax15 * 4 - 0x90) = v5[(v8 << 2) + 2] ^ v5[(v8 << 2) + 3] ^ rax14[v8 + v6 * v7] ^ *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbp4) + rax15 * 4 - 0x90);
        *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbp4) + ((v8 << 2) + 1) * 4 - 0x90) = v5[(v8 << 2) + 1] << 1;
        if (*reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rbp4) + ((v8 << 2) + 1) * 4 - 0x90) >> 8 == 1) {
            rax16 = (v8 << 2) + 1;
            *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbp4) + rax16 * 4 - 0x90) = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbp4) + rax16 * 4 - 0x90) ^ 0x11b;
        }
        v17 = v5[(v8 << 2) + 2];
        v18 = v17 << 1 ^ v17;
        if (reinterpret_cast<int32_t>(v18) >> 8 != 1) {
            rax19 = (v8 << 2) + 1;
            *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbp4) + rax19 * 4 - 0x90) = v18 ^ *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbp4) + rax19 * 4 - 0x90);
        } else {
            rax20 = (v8 << 2) + 1;
            *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbp4) + rax20 * 4 - 0x90) = v18 ^ 0x11b ^ *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbp4) + rax20 * 4 - 0x90);
        }
        rax21 = g1a22;
        rax22 = (v8 << 2) + 1;
        *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbp4) + rax22 * 4 - 0x90) = v5[(v8 << 2) + 3] ^ v5[v8 << 2] ^ *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rax21) + (v8 + v6 * v7) * 4 + 0x1e0) ^ *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbp4) + rax22 * 4 - 0x90);
        *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbp4) + ((v8 << 2) + 2) * 4 - 0x90) = v5[(v8 << 2) + 2] << 1;
        if (*reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rbp4) + ((v8 << 2) + 2) * 4 - 0x90) >> 8 == 1) {
            rax23 = (v8 << 2) + 2;
            *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbp4) + rax23 * 4 - 0x90) = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbp4) + rax23 * 4 - 0x90) ^ 0x11b;
        }
        v24 = v5[(v8 << 2) + 3];
        v25 = v24 << 1 ^ v24;
        if (reinterpret_cast<int32_t>(v25) >> 8 != 1) {
            rax26 = (v8 << 2) + 2;
            *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbp4) + rax26 * 4 - 0x90) = v25 ^ *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbp4) + rax26 * 4 - 0x90);
        } else {
            rax27 = (v8 << 2) + 2;
            *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbp4) + rax27 * 4 - 0x90) = v25 ^ 0x11b ^ *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbp4) + rax27 * 4 - 0x90);
        }
        rax28 = g1b8a;
        rax29 = (v8 << 2) + 2;
        *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbp4) + rax29 * 4 - 0x90) = v5[v8 << 2] ^ v5[(v8 << 2) + 1] ^ *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rax28) + (v8 + v6 * v7) * 4 + 0x3c0) ^ *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbp4) + rax29 * 4 - 0x90);
        *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbp4) + ((v8 << 2) + 3) * 4 - 0x90) = v5[(v8 << 2) + 3] << 1;
        if (*reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rbp4) + ((v8 << 2) + 3) * 4 - 0x90) >> 8 == 1) {
            rax30 = (v8 << 2) + 3;
            *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbp4) + rax30 * 4 - 0x90) = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbp4) + rax30 * 4 - 0x90) ^ 0x11b;
        }
        v31 = v5[v8 << 2];
        v32 = v31 << 1 ^ v31;
        if (reinterpret_cast<int32_t>(v32) >> 8 != 1) {
            rax33 = (v8 << 2) + 3;
            *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbp4) + rax33 * 4 - 0x90) = v32 ^ *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbp4) + rax33 * 4 - 0x90);
        } else {
            rax34 = (v8 << 2) + 3;
            *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbp4) + rax34 * 4 - 0x90) = v32 ^ 0x11b ^ *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbp4) + rax34 * 4 - 0x90);
        }
        rax35 = g1cf2;
        rax36 = (v8 << 2) + 3;
        *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbp4) + rax36 * 4 - 0x90) = v5[(v8 << 2) + 1] ^ v5[(v8 << 2) + 2] ^ *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rax35) + (v8 + v6 * v7) * 4 + 0x5a0) ^ *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbp4) + rax36 * 4 - 0x90);
        ++v8;
    }
    v37 = reinterpret_cast<int32_t>(gettimeofday);
    while (v37 < v6) {
        v5[v37 << 2] = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbp4) + (v37 << 2) * 4 - 0x90);
        v5[(v37 << 2) + 1] = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbp4) + ((v37 << 2) + 1) * 4 - 0x90);
        v5[(v37 << 2) + 2] = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbp4) + ((v37 << 2) + 2) * 4 - 0x90);
        v5[(v37 << 2) + 3] = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbp4) + ((v37 << 2) + 3) * 4 - 0x90);
        ++v37;
    }
    return gettimeofday;
}

void decrypt(int64_t rdi, int64_t rsi, int32_t edx) {
    int64_t rdi4;

    __asm__("movaps xmm0, [rip+0x0]");
    __asm__("movaps [rbp-0x30], xmm0");
    __asm__("movaps xmm0, [rip+0x0]");
    __asm__("movaps [rbp-0x40], xmm0");
    __asm__("movaps xmm0, [rip+0x0]");
    __asm__("movaps [rbp-0x50], xmm0");
    __asm__("movaps xmm0, [rip+0x0]");
    __asm__("movaps [rbp-0x60], xmm0");
    *reinterpret_cast<int32_t*>(&rdi4) = edx;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi4) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    fun_1e5b(rdi4, rsi);
}

struct s3 {
    uint32_t f0;
    uint32_t f4;
    uint32_t f8;
    uint32_t fc;
    uint32_t f10;
    uint32_t f14;
    uint32_t f18;
    uint32_t f1c;
    uint32_t f20;
    uint32_t f24;
    uint32_t f28;
    uint32_t f2c;
    uint32_t f30;
    uint32_t f34;
    uint32_t f38;
    uint32_t f3c;
    uint32_t f40;
    uint32_t f44;
    uint32_t f48;
    uint32_t f4c;
    uint32_t f50;
    uint32_t f54;
    uint32_t f58;
    uint32_t f5c;
    uint32_t f60;
    uint32_t f64;
    uint32_t f68;
    uint32_t f6c;
    uint32_t f70;
    uint32_t f74;
    uint32_t f78;
    uint32_t f7c;
};

uint32_t* g2115 = reinterpret_cast<uint32_t*>(0x48c8014806e1c148);

uint32_t* g2143 = reinterpret_cast<uint32_t*>(0x48c8014806e1c148);

uint32_t* g2175 = reinterpret_cast<uint32_t*>(0x48c8014806e1c148);

uint32_t* g21a7 = reinterpret_cast<uint32_t*>(0x48c8014806e1c148);

uint32_t* g21e3 = reinterpret_cast<uint32_t*>(0x48c8014806e1c148);

uint32_t* g2211 = reinterpret_cast<uint32_t*>(0x48c8014806e1c148);

uint32_t* g224d = reinterpret_cast<uint32_t*>(0x48c8014806e1c148);

uint32_t* g227b = reinterpret_cast<uint32_t*>(0x48c8014806e1c148);

uint32_t* g22b7 = reinterpret_cast<uint32_t*>(0x48c8014806e1c148);

uint32_t* g22e5 = reinterpret_cast<uint32_t*>(0x48c8014806e1c148);

uint32_t* g2317 = reinterpret_cast<uint32_t*>(0x48c8014806e1c148);

uint32_t* g2349 = reinterpret_cast<uint32_t*>(0x48c8014806e1c148);

uint32_t* g2384 = reinterpret_cast<uint32_t*>(0x48c8014806e1c148);

uint32_t* g23b4 = reinterpret_cast<uint32_t*>(0x48c8014806e1c148);

uint32_t* g23e6 = reinterpret_cast<uint32_t*>(0x48c8014806e1c148);

uint32_t* g2418 = reinterpret_cast<uint32_t*>(0x48c8014806e1c148);

uint32_t* g244f = reinterpret_cast<uint32_t*>(0x48c8014806e1c148);

uint32_t* g247d = reinterpret_cast<uint32_t*>(0x48c8014806e1c148);

uint32_t* g24af = reinterpret_cast<uint32_t*>(0x48c8014806e1c148);

uint32_t* g24e1 = reinterpret_cast<uint32_t*>(0x48c8014806e1c148);

uint32_t* g2513 = reinterpret_cast<uint32_t*>(0x48c8014806e1c148);

uint32_t* g2545 = reinterpret_cast<uint32_t*>(0x48c8014806e1c148);

uint32_t* g2581 = reinterpret_cast<uint32_t*>(0x48c8014806e1c148);

uint32_t* g25af = reinterpret_cast<uint32_t*>(0x48c8014806e1c148);

uint32_t* g25e1 = reinterpret_cast<uint32_t*>(0x48c8014806e1c148);

uint32_t* g261d = reinterpret_cast<uint32_t*>(0x48c8014806e1c148);

uint32_t* g264b = reinterpret_cast<uint32_t*>(0x48c8014806e1c148);

uint32_t* g267d = reinterpret_cast<uint32_t*>(0x48c8014806e1c148);

uint32_t* g26b9 = reinterpret_cast<uint32_t*>(0x48c8014806e1c148);

uint32_t* g26e7 = reinterpret_cast<uint32_t*>(0x48c8014806e1c148);

uint32_t* g2723 = reinterpret_cast<uint32_t*>(0x48c8014806e1c148);

uint32_t* g2751 = reinterpret_cast<uint32_t*>(0x48c8014806e1c148);

uint32_t* g278d = reinterpret_cast<uint32_t*>(0x48c8014806e1c148);

uint32_t* g27bb = reinterpret_cast<uint32_t*>(0x48c8014806e1c148);

uint32_t* g27f6 = reinterpret_cast<uint32_t*>(0x48c8014806e1c148);

uint32_t* g2826 = reinterpret_cast<uint32_t*>(0x48c8014806e1c148);

uint32_t* g2858 = reinterpret_cast<uint32_t*>(0x48c8014806e1c148);

uint32_t* g288a = reinterpret_cast<uint32_t*>(0x48c8014806e1c148);

uint32_t* g28bc = reinterpret_cast<uint32_t*>(0x48c8014806e1c148);

uint32_t* g28ee = reinterpret_cast<uint32_t*>(0x48c8014806e1c148);

uint32_t* g2925 = reinterpret_cast<uint32_t*>(0x48c8014806e1c148);

uint32_t* g2953 = reinterpret_cast<uint32_t*>(0x48c8014806e1c148);

uint32_t* g2985 = reinterpret_cast<uint32_t*>(0x48c8014806e1c148);

uint32_t* g29b7 = reinterpret_cast<uint32_t*>(0x48c8014806e1c148);

uint32_t* g29e9 = reinterpret_cast<uint32_t*>(0x48c8014806e1c148);

uint32_t* g2a1b = reinterpret_cast<uint32_t*>(0x48c8014806e1c148);

uint32_t* g2a4d = reinterpret_cast<uint32_t*>(0x48c8014806e1c148);

uint32_t* g2a7f = reinterpret_cast<uint32_t*>(0x48c8014806e1c148);

uint32_t* g2abb = reinterpret_cast<uint32_t*>(0x48c8014806e1c148);

uint32_t* g2ae9 = reinterpret_cast<uint32_t*>(0x48c8014806e1c148);

uint32_t* g2b1b = reinterpret_cast<uint32_t*>(0x48c8014806e1c148);

uint32_t* g2b4d = reinterpret_cast<uint32_t*>(0x48c8014806e1c148);

uint32_t* g2b7f = reinterpret_cast<uint32_t*>(0x48c8014806e1c148);

uint32_t* g2bb1 = reinterpret_cast<uint32_t*>(0x48c8014806e1c148);

uint32_t* g2be3 = reinterpret_cast<uint32_t*>(0x48c8014806e1c148);

uint32_t* g2c15 = reinterpret_cast<uint32_t*>(0x48c8014806e1c148);

uint32_t* g2c51 = reinterpret_cast<uint32_t*>(0x48c8014806e1c148);

uint32_t* g2c7f = reinterpret_cast<uint32_t*>(0x48c8014806e1c148);

uint32_t* g2cbb = reinterpret_cast<uint32_t*>(0x48c8014806e1c148);

uint32_t* g2ce9 = reinterpret_cast<uint32_t*>(0x48c8014806e1c148);

uint32_t* g2d25 = reinterpret_cast<uint32_t*>(0x48c8014806e1c148);

uint32_t* g2d53 = reinterpret_cast<uint32_t*>(0x48c8014806e1c148);

uint32_t* g2d8f = reinterpret_cast<uint32_t*>(0x48c8014806e1c148);

uint32_t* g2dbd = reinterpret_cast<uint32_t*>(0x48c8014806e1c148);

uint32_t* g2df8 = reinterpret_cast<uint32_t*>(0x48c8014806e1c148);

uint32_t* g2e28 = reinterpret_cast<uint32_t*>(0x48c8014806e1c148);

uint32_t* g2e5a = reinterpret_cast<uint32_t*>(0x48c8014806e1c148);

uint32_t* g2e8c = reinterpret_cast<uint32_t*>(0x48c8014806e1c148);

uint32_t* g2ebe = reinterpret_cast<uint32_t*>(0x48c8014806e1c148);

uint32_t* g2ef0 = reinterpret_cast<uint32_t*>(0x48c8014806e1c148);

uint32_t* g2f22 = reinterpret_cast<uint32_t*>(0x48c8014806e1c148);

uint32_t* g2f54 = reinterpret_cast<uint32_t*>(0x48c8014806e1c148);

void InversShiftRow_ByteSub(struct s3* rdi, int32_t esi) {
    uint32_t* rax3;
    uint32_t v4;
    uint32_t* rax5;
    uint32_t* rax6;
    uint32_t* rax7;
    uint32_t* rax8;
    uint32_t v9;
    uint32_t* rax10;
    uint32_t* rax11;
    uint32_t v12;
    uint32_t* rax13;
    uint32_t* rax14;
    uint32_t v15;
    uint32_t* rax16;
    uint32_t* rax17;
    uint32_t* rax18;
    uint32_t* rax19;
    uint32_t* rax20;
    uint32_t* rax21;
    uint32_t* rax22;
    uint32_t* rax23;
    uint32_t v24;
    uint32_t* rax25;
    uint32_t* rax26;
    uint32_t* rax27;
    uint32_t* rax28;
    uint32_t* rax29;
    uint32_t* rax30;
    uint32_t v31;
    uint32_t* rax32;
    uint32_t* rax33;
    uint32_t* rax34;
    uint32_t v35;
    uint32_t* rax36;
    uint32_t* rax37;
    uint32_t* rax38;
    uint32_t v39;
    uint32_t* rax40;
    uint32_t* rax41;
    uint32_t v42;
    uint32_t* rax43;
    uint32_t* rax44;
    uint32_t v45;
    uint32_t* rax46;
    uint32_t* rax47;
    uint32_t* rax48;
    uint32_t* rax49;
    uint32_t* rax50;
    uint32_t* rax51;
    uint32_t* rax52;
    uint32_t* rax53;
    uint32_t v54;
    uint32_t* rax55;
    uint32_t* rax56;
    uint32_t* rax57;
    uint32_t* rax58;
    uint32_t* rax59;
    uint32_t* rax60;
    uint32_t* rax61;
    uint32_t* rax62;
    uint32_t v63;
    uint32_t* rax64;
    uint32_t* rax65;
    uint32_t* rax66;
    uint32_t* rax67;
    uint32_t* rax68;
    uint32_t* rax69;
    uint32_t* rax70;
    uint32_t* rax71;
    uint32_t v72;
    uint32_t* rax73;
    uint32_t* rax74;
    uint32_t v75;
    uint32_t* rax76;
    uint32_t* rax77;
    uint32_t v78;
    uint32_t* rax79;
    uint32_t* rax80;
    uint32_t v81;
    uint32_t* rax82;
    uint32_t* rax83;
    uint32_t* rax84;
    uint32_t* rax85;
    uint32_t* rax86;
    uint32_t* rax87;
    uint32_t* rax88;
    uint32_t* rax89;
    uint32_t* rax90;

    if (esi - 4 == gettimeofday) {
        rax3 = g2115;
        v4 = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rax3) + (static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f34) >> 4) << 6) + (rdi->f34 & 15) * 4);
        rax5 = g2143;
        rdi->f34 = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rax5) + (static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f24) >> 4) << 6) + (rdi->f24 & 15) * 4);
        rax6 = g2175;
        rdi->f24 = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rax6) + (static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f14) >> 4) << 6) + (rdi->f14 & 15) * 4);
        rax7 = g21a7;
        rdi->f14 = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rax7) + (static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f4) >> 4) << 6) + (rdi->f4 & 15) * 4);
        rdi->f4 = v4;
        rax8 = g21e3;
        v9 = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rax8) + (static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f38) >> 4) << 6) + (rdi->f38 & 15) * 4);
        rax10 = g2211;
        rdi->f38 = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rax10) + (static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f18) >> 4) << 6) + (rdi->f18 & 15) * 4);
        rdi->f18 = v9;
        rax11 = g224d;
        v12 = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rax11) + (static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f8) >> 4) << 6) + (rdi->f8 & 15) * 4);
        rax13 = g227b;
        rdi->f8 = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rax13) + (static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f28) >> 4) << 6) + (rdi->f28 & 15) * 4);
        rdi->f28 = v12;
        rax14 = g22b7;
        v15 = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rax14) + (static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f3c) >> 4) << 6) + (rdi->f3c & 15) * 4);
        rax16 = g22e5;
        rdi->f3c = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rax16) + (static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->fc) >> 4) << 6) + (rdi->fc & 15) * 4);
        rax17 = g2317;
        rdi->fc = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rax17) + (static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f1c) >> 4) << 6) + (rdi->f1c & 15) * 4);
        rax18 = g2349;
        rdi->f1c = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rax18) + (static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f2c) >> 4) << 6) + (rdi->f2c & 15) * 4);
        rdi->f2c = v15;
        rax19 = g2384;
        rdi->f0 = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rax19) + (static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f0) >> 4) << 6) + (rdi->f0 & 15) * 4);
        rax20 = g23b4;
        rdi->f10 = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rax20) + (static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f10) >> 4) << 6) + (rdi->f10 & 15) * 4);
        rax21 = g23e6;
        rdi->f20 = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rax21) + (static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f20) >> 4) << 6) + (rdi->f20 & 15) * 4);
        rax22 = g2418;
        rdi->f30 = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rax22) + (static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f30) >> 4) << 6) + (rdi->f30 & 15) * 4);
    } else {
        if (esi - 6 == gettimeofday) 
            goto addr_243b_5; else 
            goto addr_20eb_6;
    }
    addr_2f72_7:
    return;
    addr_243b_5:
    rax23 = g244f;
    v24 = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rax23) + (static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f54) >> 4) << 6) + (rdi->f54 & 15) * 4);
    rax25 = g247d;
    rdi->f54 = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rax25) + (static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f44) >> 4) << 6) + (rdi->f44 & 15) * 4);
    rax26 = g24af;
    rdi->f44 = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rax26) + (static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f34) >> 4) << 6) + (rdi->f34 & 15) * 4);
    rax27 = g24e1;
    rdi->f34 = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rax27) + (static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f24) >> 4) << 6) + (rdi->f24 & 15) * 4);
    rax28 = g2513;
    rdi->f24 = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rax28) + (static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f14) >> 4) << 6) + (rdi->f14 & 15) * 4);
    rax29 = g2545;
    rdi->f14 = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rax29) + (static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f4) >> 4) << 6) + (rdi->f4 & 15) * 4);
    rdi->f4 = v24;
    rax30 = g2581;
    v31 = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rax30) + (static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f58) >> 4) << 6) + (rdi->f58 & 15) * 4);
    rax32 = g25af;
    rdi->f58 = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rax32) + (static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f38) >> 4) << 6) + (rdi->f38 & 15) * 4);
    rax33 = g25e1;
    rdi->f38 = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rax33) + (static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f18) >> 4) << 6) + (rdi->f18 & 15) * 4);
    rdi->f18 = v31;
    rax34 = g261d;
    v35 = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rax34) + (static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f48) >> 4) << 6) + (rdi->f48 & 15) * 4);
    rax36 = g264b;
    rdi->f48 = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rax36) + (static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f28) >> 4) << 6) + (rdi->f28 & 15) * 4);
    rax37 = g267d;
    rdi->f28 = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rax37) + (static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f8) >> 4) << 6) + (rdi->f8 & 15) * 4);
    rdi->f8 = v35;
    rax38 = g26b9;
    v39 = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rax38) + (static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f3c) >> 4) << 6) + (rdi->f3c & 15) * 4);
    rax40 = g26e7;
    rdi->f3c = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rax40) + (static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->fc) >> 4) << 6) + (rdi->fc & 15) * 4);
    rdi->fc = v39;
    rax41 = g2723;
    v42 = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rax41) + (static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f4c) >> 4) << 6) + (rdi->f4c & 15) * 4);
    rax43 = g2751;
    rdi->f4c = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rax43) + (static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f1c) >> 4) << 6) + (rdi->f1c & 15) * 4);
    rdi->f1c = v42;
    rax44 = g278d;
    v45 = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rax44) + (static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f5c) >> 4) << 6) + (rdi->f5c & 15) * 4);
    rax46 = g27bb;
    rdi->f5c = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rax46) + (static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f2c) >> 4) << 6) + (rdi->f2c & 15) * 4);
    rdi->f2c = v45;
    rax47 = g27f6;
    rdi->f0 = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rax47) + (static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f0) >> 4) << 6) + (rdi->f0 & 15) * 4);
    rax48 = g2826;
    rdi->f10 = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rax48) + (static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f10) >> 4) << 6) + (rdi->f10 & 15) * 4);
    rax49 = g2858;
    rdi->f20 = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rax49) + (static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f20) >> 4) << 6) + (rdi->f20 & 15) * 4);
    rax50 = g288a;
    rdi->f30 = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rax50) + (static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f30) >> 4) << 6) + (rdi->f30 & 15) * 4);
    rax51 = g28bc;
    rdi->f40 = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rax51) + (static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f40) >> 4) << 6) + (rdi->f40 & 15) * 4);
    rax52 = g28ee;
    rdi->f50 = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rax52) + (static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f50) >> 4) << 6) + (rdi->f50 & 15) * 4);
    goto addr_2f72_7;
    addr_20eb_6:
    if (esi - 8 != gettimeofday) 
        goto addr_20fc_9;
    rax53 = g2925;
    v54 = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rax53) + (static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f74) >> 4) << 6) + (rdi->f74 & 15) * 4);
    rax55 = g2953;
    rdi->f74 = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rax55) + (static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f64) >> 4) << 6) + (rdi->f64 & 15) * 4);
    rax56 = g2985;
    rdi->f64 = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rax56) + (static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f54) >> 4) << 6) + (rdi->f54 & 15) * 4);
    rax57 = g29b7;
    rdi->f54 = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rax57) + (static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f44) >> 4) << 6) + (rdi->f44 & 15) * 4);
    rax58 = g29e9;
    rdi->f44 = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rax58) + (static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f34) >> 4) << 6) + (rdi->f34 & 15) * 4);
    rax59 = g2a1b;
    rdi->f34 = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rax59) + (static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f24) >> 4) << 6) + (rdi->f24 & 15) * 4);
    rax60 = g2a4d;
    rdi->f24 = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rax60) + (static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f14) >> 4) << 6) + (rdi->f14 & 15) * 4);
    rax61 = g2a7f;
    rdi->f14 = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rax61) + (static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f4) >> 4) << 6) + (rdi->f4 & 15) * 4);
    rdi->f4 = v54;
    rax62 = g2abb;
    v63 = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rax62) + (static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f78) >> 4) << 6) + (rdi->f78 & 15) * 4);
    rax64 = g2ae9;
    rdi->f78 = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rax64) + (static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f48) >> 4) << 6) + (rdi->f48 & 15) * 4);
    rax65 = g2b1b;
    rdi->f48 = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rax65) + (static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f18) >> 4) << 6) + (rdi->f18 & 15) * 4);
    rax66 = g2b4d;
    rdi->f18 = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rax66) + (static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f68) >> 4) << 6) + (rdi->f68 & 15) * 4);
    rax67 = g2b7f;
    rdi->f68 = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rax67) + (static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f38) >> 4) << 6) + (rdi->f38 & 15) * 4);
    rax68 = g2bb1;
    rdi->f38 = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rax68) + (static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f8) >> 4) << 6) + (rdi->f8 & 15) * 4);
    rax69 = g2be3;
    rdi->f8 = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rax69) + (static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f58) >> 4) << 6) + (rdi->f58 & 15) * 4);
    rax70 = g2c15;
    rdi->f58 = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rax70) + (static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f28) >> 4) << 6) + (rdi->f28 & 15) * 4);
    rdi->f28 = v63;
    rax71 = g2c51;
    v72 = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rax71) + (static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f7c) >> 4) << 6) + (rdi->f7c & 15) * 4);
    rax73 = g2c7f;
    rdi->f7c = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rax73) + (static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f3c) >> 4) << 6) + (rdi->f3c & 15) * 4);
    rdi->f3c = v72;
    rax74 = g2cbb;
    v75 = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rax74) + (static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f6c) >> 4) << 6) + (rdi->f6c & 15) * 4);
    rax76 = g2ce9;
    rdi->f6c = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rax76) + (static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f2c) >> 4) << 6) + (rdi->f2c & 15) * 4);
    rdi->f2c = v75;
    rax77 = g2d25;
    v78 = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rax77) + (static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f5c) >> 4) << 6) + (rdi->f5c & 15) * 4);
    rax79 = g2d53;
    rdi->f5c = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rax79) + (static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f1c) >> 4) << 6) + (rdi->f1c & 15) * 4);
    rdi->f1c = v78;
    rax80 = g2d8f;
    v81 = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rax80) + (static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f4c) >> 4) << 6) + (rdi->f4c & 15) * 4);
    rax82 = g2dbd;
    rdi->f4c = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rax82) + (static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->fc) >> 4) << 6) + (rdi->fc & 15) * 4);
    rdi->fc = v81;
    rax83 = g2df8;
    rdi->f0 = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rax83) + (static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f0) >> 4) << 6) + (rdi->f0 & 15) * 4);
    rax84 = g2e28;
    rdi->f10 = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rax84) + (static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f10) >> 4) << 6) + (rdi->f10 & 15) * 4);
    rax85 = g2e5a;
    rdi->f20 = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rax85) + (static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f20) >> 4) << 6) + (rdi->f20 & 15) * 4);
    rax86 = g2e8c;
    rdi->f30 = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rax86) + (static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f30) >> 4) << 6) + (rdi->f30 & 15) * 4);
    rax87 = g2ebe;
    rdi->f40 = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rax87) + (static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f40) >> 4) << 6) + (rdi->f40 & 15) * 4);
    rax88 = g2ef0;
    rdi->f50 = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rax88) + (static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f50) >> 4) << 6) + (rdi->f50 & 15) * 4);
    rax89 = g2f22;
    rdi->f60 = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rax89) + (static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f60) >> 4) << 6) + (rdi->f60 & 15) * 4);
    rax90 = g2f54;
    rdi->f70 = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rax90) + (static_cast<int64_t>(reinterpret_cast<int32_t>(rdi->f70) >> 4) << 6) + (rdi->f70 & 15) * 4);
    goto addr_2f72_7;
    addr_20fc_9:
    goto addr_2f72_7;
}

uint32_t* g2fc4 = reinterpret_cast<uint32_t*>(0x8bf8458b4888148b);

void* g2ff6 = reinterpret_cast<void*>(0x48000001e088948b);

void* g302f = reinterpret_cast<void*>(0x48000003c088948b);

void* g3068 = reinterpret_cast<void*>(0x48000005a088948b);

int64_t AddRoundKey_InversMixColumn(uint32_t* rdi, int32_t esi, int32_t edx) {
    void* rbp4;
    uint32_t* v5;
    int32_t v6;
    int32_t v7;
    int32_t v8;
    uint32_t* rax9;
    int64_t rcx10;
    void* rax11;
    int64_t rcx12;
    void* rax13;
    int64_t rcx14;
    void* rax15;
    int64_t rcx16;
    int32_t v17;
    int32_t v18;
    uint32_t v19;
    uint32_t v20;
    uint32_t v21;
    uint32_t v22;
    uint32_t v23;
    uint32_t v24;
    uint32_t v25;
    uint32_t v26;
    uint32_t v27;
    uint32_t v28;
    int64_t rax29;
    uint32_t v30;
    uint32_t v31;
    uint32_t v32;
    uint32_t v33;
    uint32_t v34;
    int64_t rax35;
    uint32_t v36;
    uint32_t v37;
    uint32_t v38;
    uint32_t v39;
    int64_t rax40;
    int32_t v41;

    rbp4 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8);
    v5 = rdi;
    v6 = esi;
    v7 = edx;
    v8 = reinterpret_cast<int32_t>(gettimeofday);
    while (v8 < v6) {
        rax9 = g2fc4;
        rcx10 = v8 << 2;
        v5[rcx10] = rax9[v8 + v6 * v7] ^ v5[rcx10];
        rax11 = g2ff6;
        rcx12 = (v8 << 2) + 1;
        v5[rcx12] = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rax11) + (v8 + v6 * v7) * 4 + 0x1e0) ^ v5[rcx12];
        rax13 = g302f;
        rcx14 = (v8 << 2) + 2;
        v5[rcx14] = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rax13) + (v8 + v6 * v7) * 4 + 0x3c0) ^ v5[rcx14];
        rax15 = g3068;
        rcx16 = (v8 << 2) + 3;
        v5[rcx16] = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rax15) + (v8 + v6 * v7) * 4 + 0x5a0) ^ v5[rcx16];
        ++v8;
    }
    v17 = reinterpret_cast<int32_t>(gettimeofday);
    while (v17 < v6) {
        v18 = reinterpret_cast<int32_t>(gettimeofday);
        while (v18 < 4) {
            v19 = v5[v18 + (v17 << 2)] << 1;
            if (reinterpret_cast<int32_t>(v19) >> 8 == 1) {
                v19 = v19 ^ 0x11b;
            }
            v20 = v5[v18 + (v17 << 2)] ^ v19;
            v21 = v20 << 1;
            if (reinterpret_cast<int32_t>(v21) >> 8 == 1) {
                v21 = v21 ^ 0x11b;
            }
            v22 = v5[v18 + (v17 << 2)] ^ v21;
            v23 = v22 << 1;
            if (reinterpret_cast<int32_t>(v23) >> 8 == 1) {
                v23 = v23 ^ 0x11b;
            }
            *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbp4) + (v18 + (v17 << 2)) * 4 - 0x90) = v23;
            __asm__("cdq ");
            v24 = v5[(v18 + 1) % 4 + (v17 << 2)] << 1;
            if (reinterpret_cast<int32_t>(v24) >> 8 == 1) {
                v24 = v24 ^ 0x11b;
            }
            v25 = v24 << 1;
            if (reinterpret_cast<int32_t>(v25) >> 8 == 1) {
                v25 = v25 ^ 0x11b;
            }
            __asm__("cdq ");
            v26 = v5[(v18 + 1) % 4 + (v17 << 2)] ^ v25;
            v27 = v26 << 1;
            if (reinterpret_cast<int32_t>(v27) >> 8 == 1) {
                v27 = v27 ^ 0x11b;
            }
            __asm__("cdq ");
            v28 = v5[(v18 + 1) % 4 + (v17 << 2)] ^ v27;
            rax29 = v18 + (v17 << 2);
            *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbp4) + rax29 * 4 - 0x90) = v28 ^ *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbp4) + rax29 * 4 - 0x90);
            __asm__("cdq ");
            v30 = v5[(v18 + 2) % 4 + (v17 << 2)] << 1;
            if (reinterpret_cast<int32_t>(v30) >> 8 == 1) {
                v30 = v30 ^ 0x11b;
            }
            __asm__("cdq ");
            v31 = v5[(v18 + 2) % 4 + (v17 << 2)] ^ v30;
            v32 = v31 << 1;
            if (reinterpret_cast<int32_t>(v32) >> 8 == 1) {
                v32 = v32 ^ 0x11b;
            }
            v33 = v32 << 1;
            if (reinterpret_cast<int32_t>(v33) >> 8 == 1) {
                v33 = v33 ^ 0x11b;
            }
            __asm__("cdq ");
            v34 = v5[(v18 + 2) % 4 + (v17 << 2)] ^ v33;
            rax35 = v18 + (v17 << 2);
            *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbp4) + rax35 * 4 - 0x90) = v34 ^ *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbp4) + rax35 * 4 - 0x90);
            __asm__("cdq ");
            v36 = v5[(v18 + 3) % 4 + (v17 << 2)] << 1;
            if (reinterpret_cast<int32_t>(v36) >> 8 == 1) {
                v36 = v36 ^ 0x11b;
            }
            v37 = v36 << 1;
            if (reinterpret_cast<int32_t>(v37) >> 8 == 1) {
                v37 = v37 ^ 0x11b;
            }
            v38 = v37 << 1;
            if (reinterpret_cast<int32_t>(v38) >> 8 == 1) {
                v38 = v38 ^ 0x11b;
            }
            __asm__("cdq ");
            v39 = v5[(v18 + 3) % 4 + (v17 << 2)] ^ v38;
            rax40 = v18 + (v17 << 2);
            *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbp4) + rax40 * 4 - 0x90) = v39 ^ *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbp4) + rax40 * 4 - 0x90);
            ++v18;
        }
        ++v17;
    }
    v41 = reinterpret_cast<int32_t>(gettimeofday);
    while (v41 < v6) {
        v5[v41 << 2] = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbp4) + (v41 << 2) * 4 - 0x90);
        v5[(v41 << 2) + 1] = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbp4) + ((v41 << 2) + 1) * 4 - 0x90);
        v5[(v41 << 2) + 2] = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbp4) + ((v41 << 2) + 2) * 4 - 0x90);
        v5[(v41 << 2) + 3] = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rbp4) + ((v41 << 2) + 3) * 4 - 0x90);
        ++v41;
    }
    return gettimeofday;
}

int32_t* g370c = reinterpret_cast<int32_t*>(0x48c8014806e1c148);

int64_t SubByte(int32_t edi) {
    int32_t* rax2;
    int64_t rax3;

    __asm__("cdq ");
    rax2 = g370c;
    __asm__("cdq ");
    *reinterpret_cast<int32_t*>(&rax3) = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rax2) + (static_cast<int64_t>(edi / 16) << 6) + edi % 16 * 4);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax3) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    return rax3;
}

int32_t* g15d = reinterpret_cast<int32_t*>(0x8b480000000200c7);

int32_t* g16a = reinterpret_cast<int32_t*>(0x39e90000000600c7);

void fun_156() {
    int32_t* rax1;
    int32_t* rax2;

    rax1 = g15d;
    *rax1 = 2;
    rax2 = g16a;
    *rax2 = 6;
    goto 0x1ae;
}

uint32_t* g7d4 = reinterpret_cast<uint32_t*>(0x8bf8458b4888148b);

void* g800 = reinterpret_cast<void*>(0x48000001e088948b);

void* g833 = reinterpret_cast<void*>(0x48000003c088948b);

void* g866 = reinterpret_cast<void*>(0x48000005a088948b);

int64_t AddRoundKey(uint32_t* rdi, int32_t esi, int32_t edx) {
    uint32_t* v4;
    int32_t v5;
    int32_t v6;
    int32_t v7;
    uint32_t* rax8;
    int64_t rcx9;
    void* rax10;
    int64_t rcx11;
    void* rax12;
    int64_t rcx13;
    void* rax14;
    int64_t rcx15;

    v4 = rdi;
    v5 = edx;
    if (esi - 0x1f480 == gettimeofday) {
        addr_78c_2:
        v6 = 4;
    } else {
        if (esi - 0x1f4c0 == gettimeofday) 
            goto addr_798_5; else 
            goto addr_702_6;
    }
    addr_7ab_7:
    v7 = reinterpret_cast<int32_t>(gettimeofday);
    while (v7 < v6) {
        rax8 = g7d4;
        rcx9 = v7 << 2;
        v4[rcx9] = rax8[v7 + v6 * v5] ^ v4[rcx9];
        rax10 = g800;
        rcx11 = (v7 << 2) + 1;
        v4[rcx11] = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rax10) + (v7 + v6 * v5) * 4 + 0x1e0) ^ v4[rcx11];
        rax12 = g833;
        rcx13 = (v7 << 2) + 2;
        v4[rcx13] = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rax12) + (v7 + v6 * v5) * 4 + 0x3c0) ^ v4[rcx13];
        rax14 = g866;
        rcx15 = (v7 << 2) + 3;
        v4[rcx15] = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rax14) + (v7 + v6 * v5) * 4 + 0x5a0) ^ v4[rcx15];
        ++v7;
    }
    return gettimeofday;
    addr_798_5:
    v6 = 6;
    goto addr_7ab_7;
    addr_702_6:
    if (esi - 0x1f500 != gettimeofday) 
        goto addr_715_12;
    addr_7a4_13:
    v6 = 8;
    goto addr_7ab_7;
    addr_715_12:
    if (esi - 0x2ee80 == gettimeofday) 
        goto addr_78c_2;
    if (esi - 0x2eec0 == gettimeofday) 
        goto addr_798_5;
    if (esi - 0x2ef00 == gettimeofday) 
        goto addr_7a4_13;
    if (esi - 0x3e880 == gettimeofday) 
        goto addr_78c_2;
    if (esi - 0x3e8c0 == gettimeofday) 
        goto addr_798_5;
    if (esi - 0x3e900 == gettimeofday) 
        goto addr_7a4_13;
    goto addr_7ab_7;
}

int32_t* g373b = reinterpret_cast<int32_t*>(0x8b480000003200c7);

struct s4 {
    signed char[4] pad4;
    int32_t f4;
};

struct s4* g3748 = reinterpret_cast<struct s4*>(0x48000000430440c7);

struct s5 {
    signed char[8] pad8;
    int32_t f8;
};

struct s5* g3756 = reinterpret_cast<struct s5*>(0x48000000f60840c7);

struct s6 {
    signed char[12] pad12;
    int32_t fc;
};

struct s6* g3764 = reinterpret_cast<struct s6*>(0x48000000a80c40c7);

struct s7 {
    signed char[16] pad16;
    int32_t f10;
};

struct s7* g3772 = reinterpret_cast<struct s7*>(0x48000000881040c7);

struct s8 {
    signed char[20] pad20;
    int32_t f14;
};

struct s8* g3780 = reinterpret_cast<struct s8*>(0x480000005a1440c7);

struct s9 {
    signed char[24] pad24;
    int32_t f18;
};

struct s9* g378e = reinterpret_cast<struct s9*>(0x48000000301840c7);

struct s10 {
    signed char[28] pad28;
    int32_t f1c;
};

struct s10* g379c = reinterpret_cast<struct s10*>(0x480000008d1c40c7);

struct s11 {
    signed char[32] pad32;
    int32_t f20;
};

struct s11* g37aa = reinterpret_cast<struct s11*>(0x48000000312040c7);

struct s12 {
    signed char[36] pad36;
    int32_t f24;
};

struct s12* g37b8 = reinterpret_cast<struct s12*>(0x48000000312440c7);

struct s13 {
    signed char[40] pad40;
    int32_t f28;
};

struct s13* g37c6 = reinterpret_cast<struct s13*>(0x48000000982840c7);

struct s14 {
    signed char[44] pad44;
    int32_t f2c;
};

struct s14* g37d4 = reinterpret_cast<struct s14*>(0x48000000a22c40c7);

struct s15 {
    signed char[48] pad48;
    int32_t f30;
};

struct s15* g37e2 = reinterpret_cast<struct s15*>(0x48000000e03040c7);

struct s16 {
    signed char[52] pad52;
    int32_t f34;
};

struct s16* g37f0 = reinterpret_cast<struct s16*>(0x48000000373440c7);

struct s17 {
    signed char[56] pad56;
    int32_t f38;
};

struct s17* g37fe = reinterpret_cast<struct s17*>(0x48000000073840c7);

struct s18 {
    signed char[60] pad60;
    int32_t f3c;
};

struct s18* g380c = reinterpret_cast<struct s18*>(0x48000000343c40c7);

int32_t* g381a = reinterpret_cast<int32_t*>(0x8b480000002b00c7);

struct s19 {
    signed char[4] pad4;
    int32_t f4;
};

struct s19* g3827 = reinterpret_cast<struct s19*>(0x480000007e0440c7);

struct s20 {
    signed char[8] pad8;
    int32_t f8;
};

struct s20* g3835 = reinterpret_cast<struct s20*>(0x48000000150840c7);

struct s21 {
    signed char[12] pad12;
    int32_t fc;
};

struct s21* g3843 = reinterpret_cast<struct s21*>(0x48000000160c40c7);

struct s22 {
    signed char[16] pad16;
    int32_t f10;
};

struct s22* g3851 = reinterpret_cast<struct s22*>(0x48000000281040c7);

struct s23 {
    signed char[20] pad20;
    int32_t f14;
};

struct s23* g385f = reinterpret_cast<struct s23*>(0x48000000ae1440c7);

struct s24 {
    signed char[24] pad24;
    int32_t f18;
};

struct s24* g386d = reinterpret_cast<struct s24*>(0x48000000d21840c7);

struct s25 {
    signed char[28] pad28;
    int32_t f1c;
};

struct s25* g387b = reinterpret_cast<struct s25*>(0x48000000a61c40c7);

struct s26 {
    signed char[32] pad32;
    int32_t f20;
};

struct s26* g3889 = reinterpret_cast<struct s26*>(0x48000000ab2040c7);

struct s27 {
    signed char[36] pad36;
    int32_t f24;
};

struct s27* g3897 = reinterpret_cast<struct s27*>(0x48000000f72440c7);

struct s28 {
    signed char[40] pad40;
    int32_t f28;
};

struct s28* g38a5 = reinterpret_cast<struct s28*>(0x48000000152840c7);

struct s29 {
    signed char[44] pad44;
    int32_t f2c;
};

struct s29* g38b3 = reinterpret_cast<struct s29*>(0x48000000882c40c7);

struct s30 {
    signed char[48] pad48;
    int32_t f30;
};

struct s30* g38c1 = reinterpret_cast<struct s30*>(0x48000000093040c7);

struct s31 {
    signed char[52] pad52;
    int32_t f34;
};

struct s31* g38cf = reinterpret_cast<struct s31*>(0x48000000cf3440c7);

struct s32 {
    signed char[56] pad56;
    int32_t f38;
};

struct s32* g38dd = reinterpret_cast<struct s32*>(0x480000004f3840c7);

struct s33 {
    signed char[60] pad60;
    int32_t f3c;
};

struct s33* g38eb = reinterpret_cast<struct s33*>(0x480000003c3c40c7);

uint120_t g38f9 = 0xba00000000358b48;

void aes_main() {
    int32_t* rax1;
    struct s4* rax2;
    struct s5* rax3;
    struct s6* rax4;
    struct s7* rax5;
    struct s8* rax6;
    struct s9* rax7;
    struct s10* rax8;
    struct s11* rax9;
    struct s12* rax10;
    struct s13* rax11;
    struct s14* rax12;
    struct s15* rax13;
    struct s16* rax14;
    struct s17* rax15;
    struct s18* rax16;
    int32_t* rax17;
    struct s19* rax18;
    struct s20* rax19;
    struct s21* rax20;
    struct s22* rax21;
    struct s23* rax22;
    struct s24* rax23;
    struct s25* rax24;
    struct s26* rax25;
    struct s27* rax26;
    struct s28* rax27;
    struct s29* rax28;
    struct s30* rax29;
    struct s31* rax30;
    struct s32* rax31;
    struct s33* rax32;
    int64_t rdi33;
    int64_t rsi34;

    rax1 = g373b;
    *rax1 = 50;
    rax2 = g3748;
    rax2->f4 = 67;
    rax3 = g3756;
    rax3->f8 = 0xf6;
    rax4 = g3764;
    rax4->fc = 0xa8;
    rax5 = g3772;
    rax5->f10 = 0x88;
    rax6 = g3780;
    rax6->f14 = 90;
    rax7 = g378e;
    rax7->f18 = 48;
    rax8 = g379c;
    rax8->f1c = 0x8d;
    rax9 = g37aa;
    rax9->f20 = 49;
    rax10 = g37b8;
    rax10->f24 = 49;
    rax11 = g37c6;
    rax11->f28 = 0x98;
    rax12 = g37d4;
    rax12->f2c = 0xa2;
    rax13 = g37e2;
    rax13->f30 = 0xe0;
    rax14 = g37f0;
    rax14->f34 = 55;
    rax15 = g37fe;
    rax15->f38 = 7;
    rax16 = g380c;
    rax16->f3c = 52;
    rax17 = g381a;
    *rax17 = 43;
    rax18 = g3827;
    rax18->f4 = 0x7e;
    rax19 = g3835;
    rax19->f8 = 21;
    rax20 = g3843;
    rax20->fc = 22;
    rax21 = g3851;
    rax21->f10 = 40;
    rax22 = g385f;
    rax22->f14 = 0xae;
    rax23 = g386d;
    rax23->f18 = 0xd2;
    rax24 = g387b;
    rax24->f1c = 0xa6;
    rax25 = g3889;
    rax25->f20 = 0xab;
    rax26 = g3897;
    rax26->f24 = 0xf7;
    rax27 = g38a5;
    rax27->f28 = 21;
    rax28 = g38b3;
    rax28->f2c = 0x88;
    rax29 = g38c1;
    rax29->f30 = 9;
    rax30 = g38cf;
    rax30->f34 = 0xcf;
    rax31 = g38dd;
    rax31->f38 = 79;
    rax32 = g38eb;
    rax32->f3c = 60;
    rdi33 = *reinterpret_cast<int64_t*>(&g38f9);
    rsi34 = *reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(&g38f9) + 7);
    fun_390a(rdi33, rsi34, 0x1f480);
}

int32_t* g17c = reinterpret_cast<int32_t*>(0x8b480000000400c7);

int32_t* g189 = reinterpret_cast<int32_t*>(0x1ae90000000600c7);

void fun_175() {
    int32_t* rax1;
    int32_t* rax2;

    rax1 = g17c;
    *rax1 = 4;
    rax2 = g189;
    *rax2 = 6;
    goto 0x1ae;
}

struct s34 {
    int32_t f0;
    int32_t f4;
};

struct s35 {
    int32_t f0;
    int32_t f4;
};

int32_t* g393b = reinterpret_cast<int32_t*>(0x5ae80000000000c7);

void submain(struct s34* rdi, struct s35* rsi) {
    int32_t* rax3;

    rax3 = g393b;
    *rax3 = reinterpret_cast<int32_t>(gettimeofday);
    rtclock();
    rdi->f0 = rsi->f0;
    fun_3956(&rdi->f4, &rsi->f4);
}

