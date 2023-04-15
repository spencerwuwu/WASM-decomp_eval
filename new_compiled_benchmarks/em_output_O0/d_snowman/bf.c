
int64_t g24e = 0xec45c7e0458948;

void gettimeofday(int64_t rdi);

void fun_274(int64_t rdi, int64_t rsi);

void fun_214(int64_t rdi, int64_t rsi) {
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
    int64_t rax13;
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
    int64_t v26;

    while (1) {
        (*reinterpret_cast<int64_t**>(rbp3 - 32))[*reinterpret_cast<int32_t*>(rbp4 - 20)] = *reinterpret_cast<int64_t*>(rbp5 - 64);
        (*reinterpret_cast<int64_t**>(rbp6 - 32))[*reinterpret_cast<int32_t*>(rbp7 - 20) + 1] = *reinterpret_cast<int64_t*>(rbp8 - 56);
        *reinterpret_cast<int32_t*>(rbp9 - 20) = *reinterpret_cast<int32_t*>(rbp10 - 20) + 2;
        if (*reinterpret_cast<int32_t*>(rbp11 - 20) >= 18) 
            break;
        fun_214(rbp12 - 64, 1);
    }
    rax13 = g24e;
    *reinterpret_cast<int64_t*>(rbp14 - 32) = rax13;
    *reinterpret_cast<int32_t*>(rbp15 - 20) = reinterpret_cast<int32_t>(gettimeofday);
    while (*reinterpret_cast<int32_t*>(rbp16 - 20) < 0x400) {
        fun_274(rbp17 - 64, 1);
        (*reinterpret_cast<int64_t**>(rbp18 - 32))[*reinterpret_cast<int32_t*>(rbp19 - 20)] = *reinterpret_cast<int64_t*>(rbp20 - 64);
        (*reinterpret_cast<int64_t**>(rbp21 - 32))[*reinterpret_cast<int32_t*>(rbp22 - 20) + 1] = *reinterpret_cast<int64_t*>(rbp23 - 56);
        *reinterpret_cast<int32_t*>(rbp24 - 20) = *reinterpret_cast<int32_t*>(rbp25 - 20) + 2;
    }
    goto v26;
}

void fun_274(int64_t rdi, int64_t rsi) {
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
    int64_t v13;

    while (1) {
        (*reinterpret_cast<int64_t**>(rbp3 - 32))[*reinterpret_cast<int32_t*>(rbp4 - 20)] = *reinterpret_cast<int64_t*>(rbp5 - 64);
        (*reinterpret_cast<int64_t**>(rbp6 - 32))[*reinterpret_cast<int32_t*>(rbp7 - 20) + 1] = *reinterpret_cast<int64_t*>(rbp8 - 56);
        *reinterpret_cast<int32_t*>(rbp9 - 20) = *reinterpret_cast<int32_t*>(rbp10 - 20) + 2;
        if (*reinterpret_cast<int32_t*>(rbp11 - 20) >= 0x400) 
            break;
        fun_274(rbp12 - 64, 1);
    }
    goto v13;
}

void fun_163c(int64_t rdi, int64_t rsi) {
    int64_t rbp3;
    int64_t rbp4;
    int64_t rbp5;
    int64_t rbp6;
    uint64_t rax7;
    int64_t rbp8;
    signed char* rax9;
    int64_t rbp10;
    int64_t rbp11;
    uint64_t rax12;
    int64_t rbp13;
    signed char* rax14;
    int64_t rbp15;
    int64_t rbp16;
    uint64_t rax17;
    int64_t rbp18;
    signed char* rax19;
    int64_t rbp20;
    int64_t rbp21;
    uint64_t rax22;
    int64_t rbp23;
    signed char* rax24;
    int64_t rbp25;
    int64_t rbp26;
    int64_t rbp27;
    int64_t rbp28;
    uint64_t rax29;
    int64_t rbp30;
    signed char* rax31;
    int64_t rbp32;
    int64_t rbp33;
    uint64_t rax34;
    int64_t rbp35;
    signed char* rax36;
    int64_t rbp37;
    int64_t rbp38;
    uint64_t rax39;
    int64_t rbp40;
    signed char* rax41;
    int64_t rbp42;
    int64_t rbp43;
    uint64_t rax44;
    int64_t rbp45;
    signed char* rax46;
    int64_t rbp47;
    int64_t rbp48;
    int64_t rbp49;
    int64_t rbp50;
    unsigned char* rax51;
    int64_t rbp52;
    int64_t rbp53;
    uint32_t eax54;
    int64_t rbp55;
    int64_t rbp56;
    int64_t rbp57;
    signed char cl58;
    int64_t rbp59;
    signed char* rax60;
    int64_t rbp61;
    int64_t rbp62;
    int64_t rbp63;
    int64_t rbp64;
    int64_t rbp65;
    int64_t rbp66;
    int64_t rbp67;
    int64_t rax68;
    int64_t rbp69;
    int64_t rbp70;
    int64_t rbp71;
    unsigned char* rax72;
    int64_t rbp73;
    int64_t rbp74;
    int64_t rax75;
    int64_t rbp76;
    unsigned char* rax77;
    int64_t rbp78;
    int64_t rbp79;
    uint64_t rax80;
    int64_t rbp81;
    int64_t rbp82;
    unsigned char* rax83;
    int64_t rbp84;
    int64_t rbp85;
    uint64_t rax86;
    int64_t rbp87;
    int64_t rbp88;
    unsigned char* rax89;
    int64_t rbp90;
    int64_t rbp91;
    uint64_t rax92;
    int64_t rbp93;
    int64_t rbp94;
    int64_t rbp95;
    int64_t rbp96;
    unsigned char* rax97;
    int64_t rbp98;
    int64_t rbp99;
    int64_t rax100;
    int64_t rbp101;
    unsigned char* rax102;
    int64_t rbp103;
    int64_t rbp104;
    uint64_t rax105;
    int64_t rbp106;
    int64_t rbp107;
    unsigned char* rax108;
    int64_t rbp109;
    int64_t rbp110;
    uint64_t rax111;
    int64_t rbp112;
    int64_t rbp113;
    unsigned char* rax114;
    int64_t rbp115;
    int64_t rbp116;
    uint64_t rax117;
    int64_t rbp118;
    int64_t rbp119;
    int64_t rbp120;
    int64_t rbp121;
    int64_t rbp122;
    int64_t rbp123;
    int64_t rbp124;
    int64_t rbp125;
    int64_t rbp126;
    int64_t rbp127;
    int64_t rbp128;
    int64_t rbp129;
    int64_t rbp130;
    int64_t rbp131;
    int64_t v132;

    while (1) {
        *reinterpret_cast<int64_t*>(rbp3 - 0x78) = *reinterpret_cast<int64_t*>(rbp4 - 32);
        *reinterpret_cast<int64_t*>(rbp5 - 72) = *reinterpret_cast<int64_t*>(rbp6 - 0x70);
        rax7 = *reinterpret_cast<uint64_t*>(rbp8 - 72) >> 24 & 0xff;
        rax9 = *reinterpret_cast<signed char**>(rbp10 - 0x78);
        *reinterpret_cast<int64_t*>(rbp11 - 0x78) = reinterpret_cast<int64_t>(rax9 + 1);
        *rax9 = *reinterpret_cast<signed char*>(&rax7);
        rax12 = *reinterpret_cast<uint64_t*>(rbp13 - 72) >> 16 & 0xff;
        rax14 = *reinterpret_cast<signed char**>(rbp15 - 0x78);
        *reinterpret_cast<int64_t*>(rbp16 - 0x78) = reinterpret_cast<int64_t>(rax14 + 1);
        *rax14 = *reinterpret_cast<signed char*>(&rax12);
        rax17 = *reinterpret_cast<uint64_t*>(rbp18 - 72) >> 8 & 0xff;
        rax19 = *reinterpret_cast<signed char**>(rbp20 - 0x78);
        *reinterpret_cast<int64_t*>(rbp21 - 0x78) = reinterpret_cast<int64_t>(rax19 + 1);
        *rax19 = *reinterpret_cast<signed char*>(&rax17);
        rax22 = *reinterpret_cast<uint64_t*>(rbp23 - 72) & 0xff;
        rax24 = *reinterpret_cast<signed char**>(rbp25 - 0x78);
        *reinterpret_cast<int64_t*>(rbp26 - 0x78) = reinterpret_cast<int64_t>(rax24 + 1);
        *rax24 = *reinterpret_cast<signed char*>(&rax22);
        *reinterpret_cast<int64_t*>(rbp27 - 72) = *reinterpret_cast<int64_t*>(rbp28 - 0x68);
        rax29 = *reinterpret_cast<uint64_t*>(rbp30 - 72) >> 24 & 0xff;
        rax31 = *reinterpret_cast<signed char**>(rbp32 - 0x78);
        *reinterpret_cast<int64_t*>(rbp33 - 0x78) = reinterpret_cast<int64_t>(rax31 + 1);
        *rax31 = *reinterpret_cast<signed char*>(&rax29);
        rax34 = *reinterpret_cast<uint64_t*>(rbp35 - 72) >> 16 & 0xff;
        rax36 = *reinterpret_cast<signed char**>(rbp37 - 0x78);
        *reinterpret_cast<int64_t*>(rbp38 - 0x78) = reinterpret_cast<int64_t>(rax36 + 1);
        *rax36 = *reinterpret_cast<signed char*>(&rax34);
        rax39 = *reinterpret_cast<uint64_t*>(rbp40 - 72) >> 8 & 0xff;
        rax41 = *reinterpret_cast<signed char**>(rbp42 - 0x78);
        *reinterpret_cast<int64_t*>(rbp43 - 0x78) = reinterpret_cast<int64_t>(rax41 + 1);
        *rax41 = *reinterpret_cast<signed char*>(&rax39);
        rax44 = *reinterpret_cast<uint64_t*>(rbp45 - 72) & 0xff;
        rax46 = *reinterpret_cast<signed char**>(rbp47 - 0x78);
        *reinterpret_cast<int64_t*>(rbp48 - 0x78) = reinterpret_cast<int64_t>(rax46 + 1);
        *rax46 = *reinterpret_cast<signed char*>(&rax44);
        *reinterpret_cast<int64_t*>(rbp49 - 0x78) = *reinterpret_cast<int64_t*>(rbp50 - 32);
        do {
            rax51 = *reinterpret_cast<unsigned char**>(rbp52 - 8);
            *reinterpret_cast<int64_t*>(rbp53 - 8) = reinterpret_cast<int64_t>(rax51 + 1);
            eax54 = static_cast<uint32_t>(*rax51) ^ static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(*reinterpret_cast<int64_t*>(rbp55 - 0x78) + *reinterpret_cast<int32_t*>(rbp56 - 76)));
            *reinterpret_cast<signed char*>(rbp57 - 0x79) = *reinterpret_cast<signed char*>(&eax54);
            cl58 = *reinterpret_cast<signed char*>(rbp59 - 0x79);
            rax60 = *reinterpret_cast<signed char**>(rbp61 - 16);
            *reinterpret_cast<int64_t*>(rbp62 - 16) = reinterpret_cast<int64_t>(rax60 + 1);
            *rax60 = cl58;
            *reinterpret_cast<signed char*>(*reinterpret_cast<int64_t*>(rbp63 - 0x78) + *reinterpret_cast<int32_t*>(rbp64 - 76)) = *reinterpret_cast<signed char*>(rbp65 - 0x79);
            *reinterpret_cast<uint32_t*>(rbp66 - 76) = reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(rbp67 - 76) + 1) & 7;
            rax68 = *reinterpret_cast<int64_t*>(rbp69 - 88);
            *reinterpret_cast<int64_t*>(rbp70 - 88) = rax68 - 1;
            if (rax68 == gettimeofday) 
                goto addr_17b2_4;
        } while (!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp71 - 76) == gettimeofday));
        rax72 = *reinterpret_cast<unsigned char**>(rbp73 - 0x78);
        *reinterpret_cast<int64_t*>(rbp74 - 0x78) = reinterpret_cast<int64_t>(rax72 + 1);
        *reinterpret_cast<uint32_t*>(&rax75) = *rax72;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax75) + 4) = reinterpret_cast<int32_t>(gettimeofday);
        *reinterpret_cast<int64_t*>(rbp76 - 56) = rax75 << 24;
        rax77 = *reinterpret_cast<unsigned char**>(rbp78 - 0x78);
        *reinterpret_cast<int64_t*>(rbp79 - 0x78) = reinterpret_cast<int64_t>(rax77 + 1);
        *reinterpret_cast<uint32_t*>(&rax80) = *rax77;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax80) + 4) = reinterpret_cast<int32_t>(gettimeofday);
        *reinterpret_cast<uint64_t*>(rbp81 - 56) = rax80 << 16 | *reinterpret_cast<uint64_t*>(rbp82 - 56);
        rax83 = *reinterpret_cast<unsigned char**>(rbp84 - 0x78);
        *reinterpret_cast<int64_t*>(rbp85 - 0x78) = reinterpret_cast<int64_t>(rax83 + 1);
        *reinterpret_cast<uint32_t*>(&rax86) = *rax83;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax86) + 4) = reinterpret_cast<int32_t>(gettimeofday);
        *reinterpret_cast<uint64_t*>(rbp87 - 56) = rax86 << 8 | *reinterpret_cast<uint64_t*>(rbp88 - 56);
        rax89 = *reinterpret_cast<unsigned char**>(rbp90 - 0x78);
        *reinterpret_cast<int64_t*>(rbp91 - 0x78) = reinterpret_cast<int64_t>(rax89 + 1);
        *reinterpret_cast<uint32_t*>(&rax92) = *rax89;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax92) + 4) = reinterpret_cast<int32_t>(gettimeofday);
        *reinterpret_cast<uint64_t*>(rbp93 - 56) = rax92 | *reinterpret_cast<uint64_t*>(rbp94 - 56);
        *reinterpret_cast<int64_t*>(rbp95 - 0x70) = *reinterpret_cast<int64_t*>(rbp96 - 56);
        rax97 = *reinterpret_cast<unsigned char**>(rbp98 - 0x78);
        *reinterpret_cast<int64_t*>(rbp99 - 0x78) = reinterpret_cast<int64_t>(rax97 + 1);
        *reinterpret_cast<uint32_t*>(&rax100) = *rax97;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax100) + 4) = reinterpret_cast<int32_t>(gettimeofday);
        *reinterpret_cast<int64_t*>(rbp101 - 64) = rax100 << 24;
        rax102 = *reinterpret_cast<unsigned char**>(rbp103 - 0x78);
        *reinterpret_cast<int64_t*>(rbp104 - 0x78) = reinterpret_cast<int64_t>(rax102 + 1);
        *reinterpret_cast<uint32_t*>(&rax105) = *rax102;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax105) + 4) = reinterpret_cast<int32_t>(gettimeofday);
        *reinterpret_cast<uint64_t*>(rbp106 - 64) = rax105 << 16 | *reinterpret_cast<uint64_t*>(rbp107 - 64);
        rax108 = *reinterpret_cast<unsigned char**>(rbp109 - 0x78);
        *reinterpret_cast<int64_t*>(rbp110 - 0x78) = reinterpret_cast<int64_t>(rax108 + 1);
        *reinterpret_cast<uint32_t*>(&rax111) = *rax108;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax111) + 4) = reinterpret_cast<int32_t>(gettimeofday);
        *reinterpret_cast<uint64_t*>(rbp112 - 64) = rax111 << 8 | *reinterpret_cast<uint64_t*>(rbp113 - 64);
        rax114 = *reinterpret_cast<unsigned char**>(rbp115 - 0x78);
        *reinterpret_cast<int64_t*>(rbp116 - 0x78) = reinterpret_cast<int64_t>(rax114 + 1);
        *reinterpret_cast<uint32_t*>(&rax117) = *rax114;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax117) + 4) = reinterpret_cast<int32_t>(gettimeofday);
        *reinterpret_cast<uint64_t*>(rbp118 - 64) = rax117 | *reinterpret_cast<uint64_t*>(rbp119 - 64);
        *reinterpret_cast<int64_t*>(rbp120 - 0x68) = *reinterpret_cast<int64_t*>(rbp121 - 64);
        fun_163c(rbp122 - 0x70, 1);
    }
    addr_17b2_4:
    *reinterpret_cast<signed char*>(rbp123 - 0x7a) = reinterpret_cast<signed char>(gettimeofday);
    *reinterpret_cast<signed char*>(rbp124 - 0x79) = reinterpret_cast<signed char>(gettimeofday);
    *reinterpret_cast<int64_t*>(rbp125 - 72) = reinterpret_cast<int64_t>(gettimeofday);
    *reinterpret_cast<int64_t*>(rbp126 - 0x68) = reinterpret_cast<int64_t>(gettimeofday);
    *reinterpret_cast<int64_t*>(rbp127 - 0x70) = reinterpret_cast<int64_t>(gettimeofday);
    *reinterpret_cast<int64_t*>(rbp128 - 64) = reinterpret_cast<int64_t>(gettimeofday);
    *reinterpret_cast<int64_t*>(rbp129 - 56) = reinterpret_cast<int64_t>(gettimeofday);
    **reinterpret_cast<int32_t**>(rbp130 - 40) = *reinterpret_cast<int32_t*>(rbp131 - 76);
    goto v132;
}

void fun_18dd(int64_t rdi, int64_t rsi) {
    int64_t rbp3;
    int64_t rbp4;
    int64_t rbp5;
    int64_t rbp6;
    uint64_t rax7;
    int64_t rbp8;
    signed char* rax9;
    int64_t rbp10;
    int64_t rbp11;
    uint64_t rax12;
    int64_t rbp13;
    signed char* rax14;
    int64_t rbp15;
    int64_t rbp16;
    uint64_t rax17;
    int64_t rbp18;
    signed char* rax19;
    int64_t rbp20;
    int64_t rbp21;
    uint64_t rax22;
    int64_t rbp23;
    signed char* rax24;
    int64_t rbp25;
    int64_t rbp26;
    int64_t rbp27;
    int64_t rbp28;
    uint64_t rax29;
    int64_t rbp30;
    signed char* rax31;
    int64_t rbp32;
    int64_t rbp33;
    uint64_t rax34;
    int64_t rbp35;
    signed char* rax36;
    int64_t rbp37;
    int64_t rbp38;
    uint64_t rax39;
    int64_t rbp40;
    signed char* rax41;
    int64_t rbp42;
    int64_t rbp43;
    uint64_t rax44;
    int64_t rbp45;
    signed char* rax46;
    int64_t rbp47;
    int64_t rbp48;
    int64_t rbp49;
    int64_t rbp50;
    signed char* rax51;
    int64_t rbp52;
    int64_t rbp53;
    int64_t rbp54;
    int64_t rbp55;
    int64_t rbp56;
    int64_t rbp57;
    int64_t rbp58;
    int64_t rbp59;
    int64_t rbp60;
    uint32_t eax61;
    int64_t rbp62;
    int64_t rbp63;
    signed char* rax64;
    int64_t rbp65;
    int64_t rbp66;
    int64_t rbp67;
    int64_t rbp68;
    int64_t rax69;
    int64_t rbp70;
    int64_t rbp71;
    int64_t rbp72;
    unsigned char* rax73;
    int64_t rbp74;
    int64_t rbp75;
    int64_t rax76;
    int64_t rbp77;
    unsigned char* rax78;
    int64_t rbp79;
    int64_t rbp80;
    uint64_t rax81;
    int64_t rbp82;
    int64_t rbp83;
    unsigned char* rax84;
    int64_t rbp85;
    int64_t rbp86;
    uint64_t rax87;
    int64_t rbp88;
    int64_t rbp89;
    unsigned char* rax90;
    int64_t rbp91;
    int64_t rbp92;
    uint64_t rax93;
    int64_t rbp94;
    int64_t rbp95;
    int64_t rbp96;
    int64_t rbp97;
    unsigned char* rax98;
    int64_t rbp99;
    int64_t rbp100;
    int64_t rax101;
    int64_t rbp102;
    unsigned char* rax103;
    int64_t rbp104;
    int64_t rbp105;
    uint64_t rax106;
    int64_t rbp107;
    int64_t rbp108;
    unsigned char* rax109;
    int64_t rbp110;
    int64_t rbp111;
    uint64_t rax112;
    int64_t rbp113;
    int64_t rbp114;
    unsigned char* rax115;
    int64_t rbp116;
    int64_t rbp117;
    uint64_t rax118;
    int64_t rbp119;
    int64_t rbp120;
    int64_t rbp121;
    int64_t rbp122;
    int64_t rbp123;
    int64_t rbp124;
    int64_t rbp125;
    int64_t rbp126;
    int64_t rbp127;
    int64_t rbp128;
    int64_t rbp129;
    int64_t rbp130;
    int64_t rbp131;
    int64_t rbp132;
    int64_t v133;

    while (1) {
        *reinterpret_cast<int64_t*>(rbp3 - 0x78) = *reinterpret_cast<int64_t*>(rbp4 - 32);
        *reinterpret_cast<int64_t*>(rbp5 - 72) = *reinterpret_cast<int64_t*>(rbp6 - 0x70);
        rax7 = *reinterpret_cast<uint64_t*>(rbp8 - 72) >> 24 & 0xff;
        rax9 = *reinterpret_cast<signed char**>(rbp10 - 0x78);
        *reinterpret_cast<int64_t*>(rbp11 - 0x78) = reinterpret_cast<int64_t>(rax9 + 1);
        *rax9 = *reinterpret_cast<signed char*>(&rax7);
        rax12 = *reinterpret_cast<uint64_t*>(rbp13 - 72) >> 16 & 0xff;
        rax14 = *reinterpret_cast<signed char**>(rbp15 - 0x78);
        *reinterpret_cast<int64_t*>(rbp16 - 0x78) = reinterpret_cast<int64_t>(rax14 + 1);
        *rax14 = *reinterpret_cast<signed char*>(&rax12);
        rax17 = *reinterpret_cast<uint64_t*>(rbp18 - 72) >> 8 & 0xff;
        rax19 = *reinterpret_cast<signed char**>(rbp20 - 0x78);
        *reinterpret_cast<int64_t*>(rbp21 - 0x78) = reinterpret_cast<int64_t>(rax19 + 1);
        *rax19 = *reinterpret_cast<signed char*>(&rax17);
        rax22 = *reinterpret_cast<uint64_t*>(rbp23 - 72) & 0xff;
        rax24 = *reinterpret_cast<signed char**>(rbp25 - 0x78);
        *reinterpret_cast<int64_t*>(rbp26 - 0x78) = reinterpret_cast<int64_t>(rax24 + 1);
        *rax24 = *reinterpret_cast<signed char*>(&rax22);
        *reinterpret_cast<int64_t*>(rbp27 - 72) = *reinterpret_cast<int64_t*>(rbp28 - 0x68);
        rax29 = *reinterpret_cast<uint64_t*>(rbp30 - 72) >> 24 & 0xff;
        rax31 = *reinterpret_cast<signed char**>(rbp32 - 0x78);
        *reinterpret_cast<int64_t*>(rbp33 - 0x78) = reinterpret_cast<int64_t>(rax31 + 1);
        *rax31 = *reinterpret_cast<signed char*>(&rax29);
        rax34 = *reinterpret_cast<uint64_t*>(rbp35 - 72) >> 16 & 0xff;
        rax36 = *reinterpret_cast<signed char**>(rbp37 - 0x78);
        *reinterpret_cast<int64_t*>(rbp38 - 0x78) = reinterpret_cast<int64_t>(rax36 + 1);
        *rax36 = *reinterpret_cast<signed char*>(&rax34);
        rax39 = *reinterpret_cast<uint64_t*>(rbp40 - 72) >> 8 & 0xff;
        rax41 = *reinterpret_cast<signed char**>(rbp42 - 0x78);
        *reinterpret_cast<int64_t*>(rbp43 - 0x78) = reinterpret_cast<int64_t>(rax41 + 1);
        *rax41 = *reinterpret_cast<signed char*>(&rax39);
        rax44 = *reinterpret_cast<uint64_t*>(rbp45 - 72) & 0xff;
        rax46 = *reinterpret_cast<signed char**>(rbp47 - 0x78);
        *reinterpret_cast<int64_t*>(rbp48 - 0x78) = reinterpret_cast<int64_t>(rax46 + 1);
        *rax46 = *reinterpret_cast<signed char*>(&rax44);
        *reinterpret_cast<int64_t*>(rbp49 - 0x78) = *reinterpret_cast<int64_t*>(rbp50 - 32);
        do {
            rax51 = *reinterpret_cast<signed char**>(rbp52 - 8);
            *reinterpret_cast<int64_t*>(rbp53 - 8) = reinterpret_cast<int64_t>(rax51 + 1);
            *reinterpret_cast<signed char*>(rbp54 - 0x7a) = *rax51;
            *reinterpret_cast<signed char*>(rbp55 - 0x79) = *reinterpret_cast<signed char*>(*reinterpret_cast<int64_t*>(rbp56 - 0x78) + *reinterpret_cast<int32_t*>(rbp57 - 76));
            *reinterpret_cast<signed char*>(*reinterpret_cast<int64_t*>(rbp58 - 0x78) + *reinterpret_cast<int32_t*>(rbp59 - 76)) = *reinterpret_cast<signed char*>(rbp60 - 0x7a);
            eax61 = static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(rbp62 - 0x79)) ^ static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(rbp63 - 0x7a));
            rax64 = *reinterpret_cast<signed char**>(rbp65 - 16);
            *reinterpret_cast<int64_t*>(rbp66 - 16) = reinterpret_cast<int64_t>(rax64 + 1);
            *rax64 = *reinterpret_cast<signed char*>(&eax61);
            *reinterpret_cast<uint32_t*>(rbp67 - 76) = reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(rbp68 - 76) + 1) & 7;
            rax69 = *reinterpret_cast<int64_t*>(rbp70 - 88);
            *reinterpret_cast<int64_t*>(rbp71 - 88) = rax69 - 1;
            if (rax69 == gettimeofday) 
                goto addr_1a5b_4;
        } while (!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(rbp72 - 76) == gettimeofday));
        rax73 = *reinterpret_cast<unsigned char**>(rbp74 - 0x78);
        *reinterpret_cast<int64_t*>(rbp75 - 0x78) = reinterpret_cast<int64_t>(rax73 + 1);
        *reinterpret_cast<uint32_t*>(&rax76) = *rax73;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax76) + 4) = reinterpret_cast<int32_t>(gettimeofday);
        *reinterpret_cast<int64_t*>(rbp77 - 56) = rax76 << 24;
        rax78 = *reinterpret_cast<unsigned char**>(rbp79 - 0x78);
        *reinterpret_cast<int64_t*>(rbp80 - 0x78) = reinterpret_cast<int64_t>(rax78 + 1);
        *reinterpret_cast<uint32_t*>(&rax81) = *rax78;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax81) + 4) = reinterpret_cast<int32_t>(gettimeofday);
        *reinterpret_cast<uint64_t*>(rbp82 - 56) = rax81 << 16 | *reinterpret_cast<uint64_t*>(rbp83 - 56);
        rax84 = *reinterpret_cast<unsigned char**>(rbp85 - 0x78);
        *reinterpret_cast<int64_t*>(rbp86 - 0x78) = reinterpret_cast<int64_t>(rax84 + 1);
        *reinterpret_cast<uint32_t*>(&rax87) = *rax84;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax87) + 4) = reinterpret_cast<int32_t>(gettimeofday);
        *reinterpret_cast<uint64_t*>(rbp88 - 56) = rax87 << 8 | *reinterpret_cast<uint64_t*>(rbp89 - 56);
        rax90 = *reinterpret_cast<unsigned char**>(rbp91 - 0x78);
        *reinterpret_cast<int64_t*>(rbp92 - 0x78) = reinterpret_cast<int64_t>(rax90 + 1);
        *reinterpret_cast<uint32_t*>(&rax93) = *rax90;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax93) + 4) = reinterpret_cast<int32_t>(gettimeofday);
        *reinterpret_cast<uint64_t*>(rbp94 - 56) = rax93 | *reinterpret_cast<uint64_t*>(rbp95 - 56);
        *reinterpret_cast<int64_t*>(rbp96 - 0x70) = *reinterpret_cast<int64_t*>(rbp97 - 56);
        rax98 = *reinterpret_cast<unsigned char**>(rbp99 - 0x78);
        *reinterpret_cast<int64_t*>(rbp100 - 0x78) = reinterpret_cast<int64_t>(rax98 + 1);
        *reinterpret_cast<uint32_t*>(&rax101) = *rax98;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax101) + 4) = reinterpret_cast<int32_t>(gettimeofday);
        *reinterpret_cast<int64_t*>(rbp102 - 64) = rax101 << 24;
        rax103 = *reinterpret_cast<unsigned char**>(rbp104 - 0x78);
        *reinterpret_cast<int64_t*>(rbp105 - 0x78) = reinterpret_cast<int64_t>(rax103 + 1);
        *reinterpret_cast<uint32_t*>(&rax106) = *rax103;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax106) + 4) = reinterpret_cast<int32_t>(gettimeofday);
        *reinterpret_cast<uint64_t*>(rbp107 - 64) = rax106 << 16 | *reinterpret_cast<uint64_t*>(rbp108 - 64);
        rax109 = *reinterpret_cast<unsigned char**>(rbp110 - 0x78);
        *reinterpret_cast<int64_t*>(rbp111 - 0x78) = reinterpret_cast<int64_t>(rax109 + 1);
        *reinterpret_cast<uint32_t*>(&rax112) = *rax109;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax112) + 4) = reinterpret_cast<int32_t>(gettimeofday);
        *reinterpret_cast<uint64_t*>(rbp113 - 64) = rax112 << 8 | *reinterpret_cast<uint64_t*>(rbp114 - 64);
        rax115 = *reinterpret_cast<unsigned char**>(rbp116 - 0x78);
        *reinterpret_cast<int64_t*>(rbp117 - 0x78) = reinterpret_cast<int64_t>(rax115 + 1);
        *reinterpret_cast<uint32_t*>(&rax118) = *rax115;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax118) + 4) = reinterpret_cast<int32_t>(gettimeofday);
        *reinterpret_cast<uint64_t*>(rbp119 - 64) = rax118 | *reinterpret_cast<uint64_t*>(rbp120 - 64);
        *reinterpret_cast<int64_t*>(rbp121 - 0x68) = *reinterpret_cast<int64_t*>(rbp122 - 64);
        fun_18dd(rbp123 - 0x70, 1);
    }
    addr_1a5b_4:
    *reinterpret_cast<signed char*>(rbp124 - 0x7a) = reinterpret_cast<signed char>(gettimeofday);
    *reinterpret_cast<signed char*>(rbp125 - 0x79) = reinterpret_cast<signed char>(gettimeofday);
    *reinterpret_cast<int64_t*>(rbp126 - 72) = reinterpret_cast<int64_t>(gettimeofday);
    *reinterpret_cast<int64_t*>(rbp127 - 0x68) = reinterpret_cast<int64_t>(gettimeofday);
    *reinterpret_cast<int64_t*>(rbp128 - 0x70) = reinterpret_cast<int64_t>(gettimeofday);
    *reinterpret_cast<int64_t*>(rbp129 - 64) = reinterpret_cast<int64_t>(gettimeofday);
    *reinterpret_cast<int64_t*>(rbp130 - 56) = reinterpret_cast<int64_t>(gettimeofday);
    **reinterpret_cast<int32_t**>(rbp131 - 40) = *reinterpret_cast<int32_t*>(rbp132 - 76);
    goto v133;
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

void fun_1c8b(int64_t rdi, int64_t rsi);

void fun_1c54(struct s0* rdi, struct s1* rsi) {
    int64_t rbp3;
    int32_t eax4;
    int32_t* rsi5;
    int64_t v6;

    *reinterpret_cast<int32_t*>(rbp3 - 4) = eax4;
    rtclock();
    rdi->f0 = rsi->f0;
    rsi5 = &rsi->f4;
    rdi->f4 = *rsi5;
    __asm__("subsd xmm0, [rax]");
    fun_1c8b(0x1c84, rsi5 + 1);
    goto v6;
}

void fun_1c8b(int64_t rdi, int64_t rsi) {
    int64_t v3;

    goto v3;
}

void fun_1cd3(int32_t* rdi, int32_t* rsi) {
    int64_t v3;

    __asm__("cvtsi2sd xmm1, qword [rbp-0x10]");
    __asm__("cvtsi2sd xmm0, dword [rbp-0x8]");
    *rdi = *rsi;
    __asm__("mulsd xmm0, xmm2");
    __asm__("addsd xmm0, xmm1");
    goto v3;
}

int64_t g1b83 = 0xc28990458b080c8a;

void fun_1bb9(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7);

int64_t g1bea = 0x950fc839110cb60f;

void fun_1b20(int64_t rdi, void* rsi) {
    int64_t v3;
    int64_t rbp4;
    int64_t rbp5;
    int1_t less6;
    int64_t rbp7;
    int64_t rbp8;
    int64_t rbp9;
    int64_t rbp10;
    int64_t rbp11;
    int32_t eax12;
    int64_t rbp13;
    int64_t rbp14;
    int64_t rax15;
    signed char cl16;
    int32_t eax17;
    int64_t rbp18;
    int64_t rbp19;
    int64_t rbp20;
    int64_t rdx21;
    int64_t rbp22;
    int64_t r9_23;
    int64_t rbp24;
    int64_t rbp25;
    int64_t rbp26;
    int64_t rbp27;
    int64_t rbp28;
    int64_t rbp29;
    int64_t rbp30;
    int64_t rbp31;
    uint32_t eax32;
    int64_t rbp33;
    int64_t rbp34;
    int32_t ecx35;
    int64_t rbp36;
    int64_t rbp37;
    int64_t rcx38;
    int64_t rbp39;
    int64_t rbp40;
    int64_t rbp41;
    int64_t rbp42;
    int64_t rbp43;
    int64_t v44;

    v3 = reinterpret_cast<int64_t>(__return_address());
    *reinterpret_cast<int32_t*>(rbp4 - 0x70) = reinterpret_cast<int32_t>(gettimeofday);
    while (*reinterpret_cast<int32_t*>(rbp5 - 0x78) < 0x1450) {
        while (1) {
            less6 = *reinterpret_cast<int32_t*>(rbp7 - 0x78) < 0x1450;
            *reinterpret_cast<signed char*>(rbp8 - 0x85) = reinterpret_cast<signed char>(gettimeofday);
            if (less6) {
                *reinterpret_cast<unsigned char*>(rbp9 - 0x85) = reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(rbp10 - 0x70) < 40);
            }
            if (reinterpret_cast<int1_t>((*reinterpret_cast<unsigned char*>(rbp11 - 0x85) & 1) == gettimeofday)) 
                break;
            eax12 = *reinterpret_cast<int32_t*>(rbp13 - 0x78);
            *reinterpret_cast<int32_t*>(rbp14 - 0x78) = eax12 + 1;
            rax15 = g1b83;
            cl16 = *reinterpret_cast<signed char*>(rax15 + eax12);
            eax17 = *reinterpret_cast<int32_t*>(rbp18 - 0x70);
            *reinterpret_cast<int32_t*>(rbp19 - 0x70) = eax17 + 1;
            *reinterpret_cast<signed char*>(rbp20 + eax17 - 48) = cl16;
        }
        rdx21 = *reinterpret_cast<int32_t*>(rbp22 - 0x70);
        *reinterpret_cast<int32_t*>(&r9_23) = *reinterpret_cast<int32_t*>(rbp24 - 0x80);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_23) + 4) = reinterpret_cast<int32_t>(gettimeofday);
        fun_1bb9(rbp25 - 48, rbp26 - 96, rdx21, rbp27 - 0x68, rbp28 - 0x6c, r9_23, v3);
        *reinterpret_cast<int32_t*>(rbp29 - 0x74) = reinterpret_cast<int32_t>(gettimeofday);
        while (*reinterpret_cast<int32_t*>(rbp30 - 0x74) < *reinterpret_cast<int32_t*>(rbp31 - 0x70)) {
            eax32 = *reinterpret_cast<unsigned char*>(rbp33 + *reinterpret_cast<int32_t*>(rbp34 - 0x74) - 96);
            ecx35 = *reinterpret_cast<int32_t*>(rbp36 - 0x7c);
            *reinterpret_cast<int32_t*>(rbp37 - 0x7c) = ecx35 + 1;
            rcx38 = g1bea;
            *reinterpret_cast<uint32_t*>(rbp39 - 0x84) = reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(eax32 != static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(rcx38 + ecx35)))) & 1) + *reinterpret_cast<int32_t*>(rbp40 - 0x84);
            *reinterpret_cast<int32_t*>(rbp41 - 0x74) = *reinterpret_cast<int32_t*>(rbp42 - 0x74) + 1;
        }
        *reinterpret_cast<int32_t*>(rbp43 - 0x70) = reinterpret_cast<int32_t>(gettimeofday);
    }
    goto v44;
}

void fun_1bb9(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7) {
    int64_t v8;
    int64_t rbp9;
    int64_t rbp10;
    int64_t rbp11;
    uint32_t eax12;
    int64_t rbp13;
    int64_t rbp14;
    int32_t ecx15;
    int64_t rbp16;
    int64_t rbp17;
    int64_t rcx18;
    int64_t rbp19;
    int64_t rbp20;
    int64_t rbp21;
    int64_t rbp22;
    int64_t rbp23;
    int64_t rbp24;
    int1_t less25;
    int64_t rbp26;
    int64_t rbp27;
    int64_t rbp28;
    int64_t rbp29;
    int64_t rbp30;
    int32_t eax31;
    int64_t rbp32;
    int64_t rbp33;
    int64_t rax34;
    signed char cl35;
    int32_t eax36;
    int64_t rbp37;
    int64_t rbp38;
    int64_t rbp39;
    int64_t rdx40;
    int64_t rbp41;
    int64_t r9_42;
    int64_t rbp43;
    int64_t rbp44;
    int64_t rbp45;
    int64_t rbp46;
    int64_t rbp47;
    int64_t v48;

    while (1) {
        v8 = reinterpret_cast<int64_t>(__return_address());
        *reinterpret_cast<int32_t*>(rbp9 - 0x74) = reinterpret_cast<int32_t>(gettimeofday);
        while (*reinterpret_cast<int32_t*>(rbp10 - 0x74) < *reinterpret_cast<int32_t*>(rbp11 - 0x70)) {
            eax12 = *reinterpret_cast<unsigned char*>(rbp13 + *reinterpret_cast<int32_t*>(rbp14 - 0x74) - 96);
            ecx15 = *reinterpret_cast<int32_t*>(rbp16 - 0x7c);
            *reinterpret_cast<int32_t*>(rbp17 - 0x7c) = ecx15 + 1;
            rcx18 = g1bea;
            *reinterpret_cast<uint32_t*>(rbp19 - 0x84) = reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(eax12 != static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(rcx18 + ecx15)))) & 1) + *reinterpret_cast<int32_t*>(rbp20 - 0x84);
            *reinterpret_cast<int32_t*>(rbp21 - 0x74) = *reinterpret_cast<int32_t*>(rbp22 - 0x74) + 1;
        }
        *reinterpret_cast<int32_t*>(rbp23 - 0x70) = reinterpret_cast<int32_t>(gettimeofday);
        if (*reinterpret_cast<int32_t*>(rbp24 - 0x78) >= 0x1450) 
            break;
        while (1) {
            less25 = *reinterpret_cast<int32_t*>(rbp26 - 0x78) < 0x1450;
            *reinterpret_cast<signed char*>(rbp27 - 0x85) = reinterpret_cast<signed char>(gettimeofday);
            if (less25) {
                *reinterpret_cast<unsigned char*>(rbp28 - 0x85) = reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(rbp29 - 0x70) < 40);
            }
            if (reinterpret_cast<int1_t>((*reinterpret_cast<unsigned char*>(rbp30 - 0x85) & 1) == gettimeofday)) 
                break;
            eax31 = *reinterpret_cast<int32_t*>(rbp32 - 0x78);
            *reinterpret_cast<int32_t*>(rbp33 - 0x78) = eax31 + 1;
            rax34 = g1b83;
            cl35 = *reinterpret_cast<signed char*>(rax34 + eax31);
            eax36 = *reinterpret_cast<int32_t*>(rbp37 - 0x70);
            *reinterpret_cast<int32_t*>(rbp38 - 0x70) = eax36 + 1;
            *reinterpret_cast<signed char*>(rbp39 + eax36 - 48) = cl35;
        }
        rdx40 = *reinterpret_cast<int32_t*>(rbp41 - 0x70);
        *reinterpret_cast<int32_t*>(&r9_42) = *reinterpret_cast<int32_t*>(rbp43 - 0x80);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_42) + 4) = reinterpret_cast<int32_t>(gettimeofday);
        fun_1bb9(rbp44 - 48, rbp45 - 96, rdx40, rbp46 - 0x68, rbp47 - 0x6c, r9_42, v8);
    }
    goto v48;
}

int32_t fun_1cb5();

void rtclock() {
    int32_t* rdi1;
    int32_t* rsi2;
    int32_t eax3;

    rdi1 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 16);
    *reinterpret_cast<int32_t*>(&rsi2) = reinterpret_cast<int32_t>(gettimeofday);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi2) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    eax3 = fun_1cb5();
    if (eax3 != gettimeofday) {
        *reinterpret_cast<int32_t*>(&rsi2) = eax3;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi2) + 4) = reinterpret_cast<int32_t>(gettimeofday);
        rdi1 = reinterpret_cast<int32_t*>(0x1ccc);
        fun_1cd3(0x1ccc, rsi2);
    }
    __asm__("cvtsi2sd xmm1, qword [rbp-0x10]");
    __asm__("cvtsi2sd xmm0, dword [rbp-0x8]");
    *rdi1 = *rsi2;
    __asm__("mulsd xmm0, xmm2");
    __asm__("addsd xmm0, xmm1");
    return;
}

int32_t g1ccc = 0xe800b0;

int32_t fun_1cb5() {
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
        fun_1cd3(0x1ccc, rsi4);
    }
    __asm__("cvtsi2sd xmm1, qword [rbp-0x10]");
    __asm__("cvtsi2sd xmm0, dword [rbp-0x8]");
    g1ccc = *rsi4;
    __asm__("mulsd xmm0, xmm2");
    __asm__("addsd xmm0, xmm1");
    goto v6;
}

void gettimeofday(int64_t rdi) {
}

void fun_118() {
    int64_t rbp1;
    int32_t eax2;
    unsigned char* rax3;
    int64_t rbp4;
    int64_t rbp5;
    uint64_t rax6;
    int64_t rbp7;
    int64_t rbp8;
    int64_t rbp9;
    int64_t rbp10;
    int64_t rbp11;
    int64_t rbp12;
    int64_t rbp13;
    int64_t rbp14;
    unsigned char* rax15;
    int64_t rbp16;
    int64_t rbp17;
    uint64_t rax18;
    int64_t rbp19;
    int64_t rbp20;
    int64_t rbp21;
    int64_t rbp22;
    int64_t rbp23;
    int64_t rbp24;
    int64_t rbp25;
    int64_t rbp26;
    unsigned char* rax27;
    int64_t rbp28;
    int64_t rbp29;
    uint64_t rax30;
    int64_t rbp31;
    int64_t rbp32;
    int64_t rbp33;
    int64_t rbp34;
    int64_t rbp35;
    int64_t rbp36;
    int64_t rcx37;
    int64_t rbp38;
    int64_t rbp39;
    int64_t rbp40;
    int64_t rbp41;
    int64_t rbp42;

    *reinterpret_cast<int32_t*>(rbp1 - 40) = eax2;
    rax3 = *reinterpret_cast<unsigned char**>(rbp4 - 72);
    *reinterpret_cast<int64_t*>(rbp5 - 72) = reinterpret_cast<int64_t>(rax3 + 1);
    *reinterpret_cast<uint32_t*>(&rax6) = *rax3;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax6) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    *reinterpret_cast<uint64_t*>(rbp7 - 40) = rax6 | *reinterpret_cast<uint64_t*>(rbp8 - 40);
    if (*reinterpret_cast<uint64_t*>(rbp9 - 72) >= *reinterpret_cast<uint64_t*>(rbp10 - 80)) {
        *reinterpret_cast<int64_t*>(rbp11 - 72) = *reinterpret_cast<int64_t*>(rbp12 - 16);
    }
    *reinterpret_cast<int64_t*>(rbp13 - 40) = *reinterpret_cast<int64_t*>(rbp14 - 40) << 8;
    rax15 = *reinterpret_cast<unsigned char**>(rbp16 - 72);
    *reinterpret_cast<int64_t*>(rbp17 - 72) = reinterpret_cast<int64_t>(rax15 + 1);
    *reinterpret_cast<uint32_t*>(&rax18) = *rax15;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax18) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    *reinterpret_cast<uint64_t*>(rbp19 - 40) = rax18 | *reinterpret_cast<uint64_t*>(rbp20 - 40);
    if (*reinterpret_cast<uint64_t*>(rbp21 - 72) >= *reinterpret_cast<uint64_t*>(rbp22 - 80)) {
        *reinterpret_cast<int64_t*>(rbp23 - 72) = *reinterpret_cast<int64_t*>(rbp24 - 16);
    }
    *reinterpret_cast<int64_t*>(rbp25 - 40) = *reinterpret_cast<int64_t*>(rbp26 - 40) << 8;
    rax27 = *reinterpret_cast<unsigned char**>(rbp28 - 72);
    *reinterpret_cast<int64_t*>(rbp29 - 72) = reinterpret_cast<int64_t>(rax27 + 1);
    *reinterpret_cast<uint32_t*>(&rax30) = *rax27;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax30) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    *reinterpret_cast<uint64_t*>(rbp31 - 40) = rax30 | *reinterpret_cast<uint64_t*>(rbp32 - 40);
    if (*reinterpret_cast<uint64_t*>(rbp33 - 72) >= *reinterpret_cast<uint64_t*>(rbp34 - 80)) {
        *reinterpret_cast<int64_t*>(rbp35 - 72) = *reinterpret_cast<int64_t*>(rbp36 - 16);
    }
    rcx37 = *reinterpret_cast<int32_t*>(rbp38 - 20);
    (*reinterpret_cast<uint64_t**>(rbp39 - 32))[rcx37] = *reinterpret_cast<uint64_t*>(rbp40 - 40) ^ (*reinterpret_cast<uint64_t**>(rbp39 - 32))[rcx37];
    *reinterpret_cast<int32_t*>(rbp41 - 20) = *reinterpret_cast<int32_t*>(rbp42 - 20) + 1;
}

void fun_1e5() {
    int64_t rbp1;
    int64_t rbp2;
    int64_t rbp3;

    *reinterpret_cast<int64_t*>(rbp1 - 64) = reinterpret_cast<int64_t>(gettimeofday);
    *reinterpret_cast<int64_t*>(rbp2 - 56) = reinterpret_cast<int64_t>(gettimeofday);
    *reinterpret_cast<int32_t*>(rbp3 - 20) = reinterpret_cast<int32_t>(gettimeofday);
}

void BF_cfb64_encrypt(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int32_t r9d) {
    if (r9d == gettimeofday) {
        goto 0x17bc;
    } else {
        goto 0x151b;
    }
}

struct s2 {
    uint64_t f0;
    uint64_t f8;
};

struct s3 {
    uint64_t f0;
    uint64_t f8;
    uint64_t f10;
    uint64_t f18;
    uint64_t f20;
    uint64_t f28;
    uint64_t f30;
    uint64_t f38;
    uint64_t f40;
    uint64_t f48;
    uint64_t f50;
    uint64_t f58;
    uint64_t f60;
    uint64_t f68;
    uint64_t f70;
    uint64_t f78;
    uint64_t f80;
    uint64_t f88;
};

struct s3* g2c2 = reinterpret_cast<struct s3*>(0x58b48d8458948);

uint64_t* g2cd = reinterpret_cast<uint64_t*>(0xf8458b48d0458948);

void BF_encrypt(struct s2* rdi, int32_t esi) {
    struct s3* rax3;
    uint64_t* rax4;
    uint64_t v5;
    uint64_t v6;
    uint64_t v7;
    uint64_t v8;
    uint64_t v9;
    uint64_t v10;
    uint64_t v11;
    uint64_t v12;
    uint64_t v13;
    uint64_t v14;
    uint64_t v15;
    uint64_t v16;
    uint64_t v17;
    uint64_t v18;
    uint64_t v19;
    uint64_t v20;
    uint64_t v21;
    uint64_t v22;
    uint64_t v23;
    uint64_t v24;
    uint64_t v25;
    uint64_t v26;
    uint64_t v27;
    uint64_t v28;
    uint64_t v29;
    uint64_t v30;
    uint64_t v31;
    uint64_t v32;
    uint64_t v33;
    uint64_t v34;
    uint64_t v35;
    uint64_t v36;
    uint64_t v37;
    uint64_t v38;
    uint64_t v39;
    uint64_t v40;
    uint64_t v41;
    uint64_t v42;
    uint64_t v43;
    uint64_t v44;
    uint64_t v45;
    uint64_t v46;
    uint64_t v47;
    uint64_t v48;
    uint64_t v49;
    uint64_t v50;
    uint64_t v51;
    uint64_t v52;
    uint64_t v53;
    uint64_t v54;
    uint64_t v55;
    uint64_t v56;
    uint64_t v57;
    uint64_t v58;
    uint64_t v59;
    uint64_t v60;
    uint64_t v61;
    uint64_t v62;
    uint64_t v63;
    uint64_t v64;
    uint64_t v65;
    uint64_t v66;
    uint64_t v67;
    uint64_t v68;
    uint64_t v69;
    uint64_t v70;
    uint64_t v71;
    uint64_t v72;

    rax3 = g2c2;
    rax4 = g2cd;
    v5 = rdi->f0;
    v6 = rdi->f8;
    if (esi == gettimeofday) {
        v7 = rax3->f88 ^ v5;
        v8 = rax3->f80 ^ v6;
        v9 = (rax4[v7 >> 24] + rax4[(v7 >> 16 & 0xff) + 0x100] ^ rax4[(v7 >> 8 & 0xff) + 0x200]) + rax4[(v7 & 0xff) + 0x300] & 0xffffffff ^ v8;
        v10 = *reinterpret_cast<uint64_t*>(reinterpret_cast<int64_t>(rax3) + reinterpret_cast<int64_t>("5")) ^ v7;
        v11 = (rax4[v9 >> 24] + rax4[(v9 >> 16 & 0xff) + 0x100] ^ rax4[(v9 >> 8 & 0xff) + 0x200]) + rax4[(v9 & 0xff) + 0x300] & 0xffffffff ^ v10;
        v12 = rax3->f70 ^ v9;
        v13 = (rax4[v11 >> 24] + rax4[(v11 >> 16 & 0xff) + 0x100] ^ rax4[(v11 >> 8 & 0xff) + 0x200]) + rax4[(v11 & 0xff) + 0x300] & 0xffffffff ^ v12;
        v14 = rax3->f68 ^ v11;
        v15 = (rax4[v13 >> 24] + rax4[(v13 >> 16 & 0xff) + 0x100] ^ rax4[(v13 >> 8 & 0xff) + 0x200]) + rax4[(v13 & 0xff) + 0x300] & 0xffffffff ^ v14;
        v16 = rax3->f60 ^ v13;
        v17 = (rax4[v15 >> 24] + rax4[(v15 >> 16 & 0xff) + 0x100] ^ rax4[(v15 >> 8 & 0xff) + 0x200]) + rax4[(v15 & 0xff) + 0x300] & 0xffffffff ^ v16;
        v18 = rax3->f58 ^ v15;
        v19 = (rax4[v17 >> 24] + rax4[(v17 >> 16 & 0xff) + 0x100] ^ rax4[(v17 >> 8 & 0xff) + 0x200]) + rax4[(v17 & 0xff) + 0x300] & 0xffffffff ^ v18;
        v20 = rax3->f50 ^ v17;
        v21 = (rax4[v19 >> 24] + rax4[(v19 >> 16 & 0xff) + 0x100] ^ rax4[(v19 >> 8 & 0xff) + 0x200]) + rax4[(v19 & 0xff) + 0x300] & 0xffffffff ^ v20;
        v22 = rax3->f48 ^ v19;
        v23 = (rax4[v21 >> 24] + rax4[(v21 >> 16 & 0xff) + 0x100] ^ rax4[(v21 >> 8 & 0xff) + 0x200]) + rax4[(v21 & 0xff) + 0x300] & 0xffffffff ^ v22;
        v24 = rax3->f40 ^ v21;
        v25 = (rax4[v23 >> 24] + rax4[(v23 >> 16 & 0xff) + 0x100] ^ rax4[(v23 >> 8 & 0xff) + 0x200]) + rax4[(v23 & 0xff) + 0x300] & 0xffffffff ^ v24;
        v26 = rax3->f38 ^ v23;
        v27 = (rax4[v25 >> 24] + rax4[(v25 >> 16 & 0xff) + 0x100] ^ rax4[(v25 >> 8 & 0xff) + 0x200]) + rax4[(v25 & 0xff) + 0x300] & 0xffffffff ^ v26;
        v28 = rax3->f30 ^ v25;
        v29 = (rax4[v27 >> 24] + rax4[(v27 >> 16 & 0xff) + 0x100] ^ rax4[(v27 >> 8 & 0xff) + 0x200]) + rax4[(v27 & 0xff) + 0x300] & 0xffffffff ^ v28;
        v30 = rax3->f28 ^ v27;
        v31 = (rax4[v29 >> 24] + rax4[(v29 >> 16 & 0xff) + 0x100] ^ rax4[(v29 >> 8 & 0xff) + 0x200]) + rax4[(v29 & 0xff) + 0x300] & 0xffffffff ^ v30;
        v32 = rax3->f20 ^ v29;
        v33 = (rax4[v31 >> 24] + rax4[(v31 >> 16 & 0xff) + 0x100] ^ rax4[(v31 >> 8 & 0xff) + 0x200]) + rax4[(v31 & 0xff) + 0x300] & 0xffffffff ^ v32;
        v34 = rax3->f18 ^ v31;
        v35 = (rax4[v33 >> 24] + rax4[(v33 >> 16 & 0xff) + 0x100] ^ rax4[(v33 >> 8 & 0xff) + 0x200]) + rax4[(v33 & 0xff) + 0x300] & 0xffffffff ^ v34;
        v36 = rax3->f10 ^ v33;
        v37 = (rax4[v35 >> 24] + rax4[(v35 >> 16 & 0xff) + 0x100] ^ rax4[(v35 >> 8 & 0xff) + 0x200]) + rax4[(v35 & 0xff) + 0x300] & 0xffffffff ^ v36;
        v38 = rax3->f8 ^ v35;
        v39 = (rax4[v37 >> 24] + rax4[(v37 >> 16 & 0xff) + 0x100] ^ rax4[(v37 >> 8 & 0xff) + 0x200]) + rax4[(v37 & 0xff) + 0x300] & 0xffffffff ^ v38;
        v40 = rax3->f0 ^ v37;
    } else {
        v41 = rax3->f0 ^ v5;
        v42 = rax3->f8 ^ v6;
        v43 = (rax4[v41 >> 24] + rax4[(v41 >> 16 & 0xff) + 0x100] ^ rax4[(v41 >> 8 & 0xff) + 0x200]) + rax4[(v41 & 0xff) + 0x300] & 0xffffffff ^ v42;
        v44 = rax3->f10 ^ v41;
        v45 = (rax4[v43 >> 24] + rax4[(v43 >> 16 & 0xff) + 0x100] ^ rax4[(v43 >> 8 & 0xff) + 0x200]) + rax4[(v43 & 0xff) + 0x300] & 0xffffffff ^ v44;
        v46 = rax3->f18 ^ v43;
        v47 = (rax4[v45 >> 24] + rax4[(v45 >> 16 & 0xff) + 0x100] ^ rax4[(v45 >> 8 & 0xff) + 0x200]) + rax4[(v45 & 0xff) + 0x300] & 0xffffffff ^ v46;
        v48 = rax3->f20 ^ v45;
        v49 = (rax4[v47 >> 24] + rax4[(v47 >> 16 & 0xff) + 0x100] ^ rax4[(v47 >> 8 & 0xff) + 0x200]) + rax4[(v47 & 0xff) + 0x300] & 0xffffffff ^ v48;
        v50 = rax3->f28 ^ v47;
        v51 = (rax4[v49 >> 24] + rax4[(v49 >> 16 & 0xff) + 0x100] ^ rax4[(v49 >> 8 & 0xff) + 0x200]) + rax4[(v49 & 0xff) + 0x300] & 0xffffffff ^ v50;
        v52 = rax3->f30 ^ v49;
        v53 = (rax4[v51 >> 24] + rax4[(v51 >> 16 & 0xff) + 0x100] ^ rax4[(v51 >> 8 & 0xff) + 0x200]) + rax4[(v51 & 0xff) + 0x300] & 0xffffffff ^ v52;
        v54 = rax3->f38 ^ v51;
        v55 = (rax4[v53 >> 24] + rax4[(v53 >> 16 & 0xff) + 0x100] ^ rax4[(v53 >> 8 & 0xff) + 0x200]) + rax4[(v53 & 0xff) + 0x300] & 0xffffffff ^ v54;
        v56 = rax3->f40 ^ v53;
        v57 = (rax4[v55 >> 24] + rax4[(v55 >> 16 & 0xff) + 0x100] ^ rax4[(v55 >> 8 & 0xff) + 0x200]) + rax4[(v55 & 0xff) + 0x300] & 0xffffffff ^ v56;
        v58 = rax3->f48 ^ v55;
        v59 = (rax4[v57 >> 24] + rax4[(v57 >> 16 & 0xff) + 0x100] ^ rax4[(v57 >> 8 & 0xff) + 0x200]) + rax4[(v57 & 0xff) + 0x300] & 0xffffffff ^ v58;
        v60 = rax3->f50 ^ v57;
        v61 = (rax4[v59 >> 24] + rax4[(v59 >> 16 & 0xff) + 0x100] ^ rax4[(v59 >> 8 & 0xff) + 0x200]) + rax4[(v59 & 0xff) + 0x300] & 0xffffffff ^ v60;
        v62 = rax3->f58 ^ v59;
        v63 = (rax4[v61 >> 24] + rax4[(v61 >> 16 & 0xff) + 0x100] ^ rax4[(v61 >> 8 & 0xff) + 0x200]) + rax4[(v61 & 0xff) + 0x300] & 0xffffffff ^ v62;
        v64 = rax3->f60 ^ v61;
        v65 = (rax4[v63 >> 24] + rax4[(v63 >> 16 & 0xff) + 0x100] ^ rax4[(v63 >> 8 & 0xff) + 0x200]) + rax4[(v63 & 0xff) + 0x300] & 0xffffffff ^ v64;
        v66 = rax3->f68 ^ v63;
        v67 = (rax4[v65 >> 24] + rax4[(v65 >> 16 & 0xff) + 0x100] ^ rax4[(v65 >> 8 & 0xff) + 0x200]) + rax4[(v65 & 0xff) + 0x300] & 0xffffffff ^ v66;
        v68 = rax3->f70 ^ v65;
        v69 = (rax4[v67 >> 24] + rax4[(v67 >> 16 & 0xff) + 0x100] ^ rax4[(v67 >> 8 & 0xff) + 0x200]) + rax4[(v67 & 0xff) + 0x300] & 0xffffffff ^ v68;
        v70 = *reinterpret_cast<uint64_t*>(reinterpret_cast<int64_t>(rax3) + reinterpret_cast<int64_t>("5")) ^ v67;
        v71 = (rax4[v69 >> 24] + rax4[(v69 >> 16 & 0xff) + 0x100] ^ rax4[(v69 >> 8 & 0xff) + 0x200]) + rax4[(v69 & 0xff) + 0x300] & 0xffffffff ^ v70;
        v72 = rax3->f80 ^ v69;
        v39 = (rax4[v71 >> 24] + rax4[(v71 >> 16 & 0xff) + 0x100] ^ rax4[(v71 >> 8 & 0xff) + 0x200]) + rax4[(v71 & 0xff) + 0x300] & 0xffffffff ^ v72;
        v40 = rax3->f88 ^ v71;
    }
    rdi->f8 = 0xffffffff & v39;
    rdi->f0 = 0xffffffff & v40;
    return;
}

struct s4 {
    int32_t f0;
    int32_t f4;
};

struct s5 {
    int32_t f0;
    int32_t f4;
};

void submain(struct s4* rdi, struct s5* rsi) {
    rtclock();
    rdi->f0 = rsi->f0;
    fun_1c54(&rdi->f4, &rsi->f4);
}

void blowfish_main() {
    void* rbp1;
    int32_t v2;

    rbp1 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8);
    v2 = reinterpret_cast<int32_t>(gettimeofday);
    while (v2 < 8) {
        *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rbp1) + v2 - 8) = reinterpret_cast<signed char>(gettimeofday);
        *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rbp1) + v2 - 0x68) = reinterpret_cast<signed char>(gettimeofday);
        ++v2;
    }
    fun_1b20(8, reinterpret_cast<int64_t>(rbp1) - 8);
}

