
void printf();

int64_t* g270 = reinterpret_cast<int64_t*>(0x8894808244c8948);

void fun_256(int64_t rdi, int64_t rsi, int64_t rdx) {
    int64_t v4;
    int64_t* rax5;
    int64_t v6;

    v4 = reinterpret_cast<int64_t>(__return_address());
    if (*reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&v4) + 4) != printf) {
        rax5 = g270;
        *rax5 = v6 - 0x800;
    }
}

int64_t* g3c2 = reinterpret_cast<int64_t*>(0x8894810244c8948);

int64_t g3a3 = 0x247c8300000000e8;

int32_t* g30f = reinterpret_cast<int32_t*>(0x4c8b0824448b0889);

void fun_3a8(int64_t rdi, int64_t rsi, int64_t rdx) {
    int32_t v4;
    int64_t rcx5;
    int64_t v6;
    int64_t* rax7;
    unsigned char* rax8;
    unsigned char* r12_9;
    unsigned char* rdx10;
    unsigned char** rbp11;
    uint32_t r13d12;
    int64_t r15_13;
    uint32_t* rbx14;
    int32_t ecx15;
    int1_t less16;
    unsigned char* r14_17;
    int64_t rsi18;
    int64_t r12_19;
    int32_t* rax20;
    int64_t v21;

    while (1) {
        if (v4 != printf) {
            rcx5 = v6 - 0x800;
            rax7 = g3c2;
            v6 = rcx5;
            *rax7 = rcx5;
        }
        rax8 = r12_9;
        do {
            rdx10 = rax8 + 1;
            *rbp11 = rdx10;
            r13d12 = r13d12 | static_cast<uint32_t>(*rax8) << reinterpret_cast<unsigned char>(24 - *reinterpret_cast<signed char*>(&r15_13));
            *rbx14 = r13d12;
            ecx15 = static_cast<int32_t>(r15_13 + 8);
            rax8 = rdx10;
            less16 = *reinterpret_cast<int32_t*>(&r15_13) < 17;
            *reinterpret_cast<int32_t*>(&r15_13) = ecx15;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_13) + 4) = reinterpret_cast<int32_t>(printf);
            if (!less16) 
                goto addr_308_5;
        } while (reinterpret_cast<uint64_t>(rax8) < reinterpret_cast<uint64_t>(r14_17));
        rsi18 = g3a3;
        fun_3a8(r12_19, rsi18, 0x800);
    }
    addr_308_5:
    rax20 = g30f;
    *rax20 = ecx15;
    goto v21;
}

int64_t* g511 = reinterpret_cast<int64_t*>(0x8894810244c8948);

int64_t g4f2 = 0x247c8300000000e8;

int32_t* g45e = reinterpret_cast<int32_t*>(0x415b18c483480889);

void fun_4f7(int64_t rdi, int64_t rsi, int64_t rdx) {
    int32_t v4;
    int64_t rcx5;
    int64_t v6;
    int64_t* rax7;
    unsigned char* rax8;
    unsigned char* r15_9;
    unsigned char* rdx10;
    unsigned char** r14_11;
    uint32_t ebp12;
    int64_t r13_13;
    uint32_t* r12_14;
    int32_t ecx15;
    int1_t less16;
    unsigned char* rbx17;
    int64_t rsi18;
    int64_t r15_19;
    int32_t* rax20;
    int64_t v21;

    while (1) {
        if (v4 != printf) {
            rcx5 = v6 - 0x800;
            rax7 = g511;
            v6 = rcx5;
            *rax7 = rcx5;
        }
        rax8 = r15_9;
        do {
            rdx10 = rax8 + 1;
            *r14_11 = rdx10;
            ebp12 = ebp12 | static_cast<uint32_t>(*rax8) << reinterpret_cast<unsigned char>(24 - *reinterpret_cast<signed char*>(&r13_13));
            *r12_14 = ebp12;
            ecx15 = static_cast<int32_t>(r13_13 + 8);
            rax8 = rdx10;
            less16 = *reinterpret_cast<int32_t*>(&r13_13) < 17;
            *reinterpret_cast<int32_t*>(&r13_13) = ecx15;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_13) + 4) = reinterpret_cast<int32_t>(printf);
            if (!less16) 
                goto addr_457_5;
        } while (reinterpret_cast<uint64_t>(rax8) < reinterpret_cast<uint64_t>(rbx17));
        rsi18 = g4f2;
        fun_4f7(r15_19, rsi18, 0x800);
    }
    addr_457_5:
    rax20 = g45e;
    *rax20 = ecx15;
    goto v21;
}

int64_t* g771 = reinterpret_cast<int64_t*>(0x43e9899aeb20894c);

uint32_t* g71a = reinterpret_cast<uint32_t*>(0x55894901508d48);

int64_t g757 = 0x247c8300000000e8;

uint32_t* g5ac = reinterpret_cast<uint32_t*>(0x244c8b48cd890a89);

void* g854 = reinterpret_cast<void*>(0xe7d34101784cbe0f);

unsigned char** g878 = reinterpret_cast<unsigned char**>(0x7fcb900458b49);

struct s0 {
    signed char[2044] pad2044;
    unsigned char f7fc;
};

struct s0* g888 = reinterpret_cast<struct s0*>(0x30e830fc83948);

int64_t* gba6 = reinterpret_cast<int64_t*>(0xd8b48218b4c);

int32_t* gbb0 = reinterpret_cast<int32_t*>(0xb90c244c89098b);

struct s1 {
    signed char[2048] pad2048;
    unsigned char f800;
};

struct s1* gbc2 = reinterpret_cast<struct s1*>(0x1d8b48ce0149);

unsigned char* gbcc = reinterpret_cast<unsigned char*>(0x48d88948906635eb);

int64_t gc17 = 0x247c8300000000e8;

void fun_c1c(unsigned char* rdi, int64_t rsi, int64_t rdx);

uint32_t* gbda = reinterpret_cast<uint32_t*>(0x55894901508d48);

int64_t* gc31 = reinterpret_cast<int64_t*>(0xf2e669aeb20894c);

int32_t* gad8 = reinterpret_cast<int32_t*>(0x93870f19f9830289);

void* g664 = reinterpret_cast<void*>(0xe7d34101414cbe0f);

unsigned char** g688 = reinterpret_cast<unsigned char**>(0x7fcb900458b49);

struct s2 {
    signed char[2044] pad2044;
    unsigned char f7fc;
};

struct s2* g698 = reinterpret_cast<struct s2*>(0x386830fc83948);

int64_t* ga2e = reinterpret_cast<int64_t*>(0xd8b48218b4c);

int32_t* ga38 = reinterpret_cast<int32_t*>(0xb90c244c89098b);

struct s3 {
    signed char[2048] pad2048;
    unsigned char f800;
};

struct s3* ga4a = reinterpret_cast<struct s3*>(0x1d8b48ce0149);

unsigned char* ga54 = reinterpret_cast<unsigned char*>(0x841f0f2e663deb);

int64_t gaa7 = 0x247c8300000000e8;

void fun_aac(unsigned char* rdi, int64_t rsi, int64_t rdx);

uint32_t* ga6a = reinterpret_cast<uint32_t*>(0x55894901508d48);

int64_t* gac1 = reinterpret_cast<int64_t*>(0x43e9899aeb20894c);

int32_t* g978 = reinterpret_cast<int32_t*>(0x93870f19f9830289);

void* g5d9 = reinterpret_cast<void*>(0xe7d34101784cbe0f);

unsigned char** g5fd = reinterpret_cast<unsigned char**>(0x7fcb900458b49);

struct s4 {
    signed char[2044] pad2044;
    unsigned char f7fc;
};

struct s4* g60d = reinterpret_cast<struct s4*>(0x2b4830fc83948);

int64_t* g8d1 = reinterpret_cast<int64_t*>(0xd8b48218b4c);

int32_t* g8db = reinterpret_cast<int32_t*>(0xb90c244c89098b);

struct s5 {
    signed char[2048] pad2048;
    unsigned char f800;
};

struct s5* g8ed = reinterpret_cast<struct s5*>(0x1d8b48ce0149);

unsigned char* g8f7 = reinterpret_cast<unsigned char*>(0x801f0f3aeb);

int64_t g947 = 0x247c8300000000e8;

void fun_94c(unsigned char* rdi, int64_t rsi, int64_t rdx);

uint32_t* g90a = reinterpret_cast<uint32_t*>(0x55894901508d48);

int64_t* g961 = reinterpret_cast<int64_t*>(0x43e9899aeb20894c);

int32_t* g788 = reinterpret_cast<int32_t*>(0x93870f19f9830289);

unsigned char** gaea = reinterpret_cast<unsigned char**>(0x7fcb81e8b49);

struct s6 {
    signed char[2044] pad2044;
    unsigned char f7fc;
};

struct s6* gaf9 = reinterpret_cast<struct s6*>(0x800b86472c33948);

struct s7 {
    signed char[2048] pad2048;
    unsigned char f800;
};

struct s7* gb0a = reinterpret_cast<struct s7*>(0x58b485372c33948);

int64_t* gb16 = reinterpret_cast<int64_t*>(0x58b48288b4c);

int32_t* gb20 = reinterpret_cast<int32_t*>(0x1d8b48208b44);

uint120_t gb2a = 0xba00000000358b48;

void fun_b3e(unsigned char* rdi, int64_t rsi, int64_t rdx);

uint120_t gb5b = 0x4800000000158b48;

int64_t* gb51 = reinterpret_cast<int64_t*>(0x358b4828894c);

unsigned char** g98a = reinterpret_cast<unsigned char**>(0x7fcb81e8b49);

struct s8 {
    signed char[2044] pad2044;
    unsigned char f7fc;
};

struct s8* g999 = reinterpret_cast<struct s8*>(0x800b86472c33948);

struct s9 {
    signed char[2048] pad2048;
    unsigned char f800;
};

struct s9* g9aa = reinterpret_cast<struct s9*>(0x58b485372c33948);

int64_t* g9b6 = reinterpret_cast<int64_t*>(0x58b48288b4c);

int32_t* g9c0 = reinterpret_cast<int32_t*>(0x1d8b48208b44);

uint120_t g9ca = 0xba00000000358b48;

void fun_9de(unsigned char* rdi, int64_t rsi, int64_t rdx);

uint120_t g9fb = 0x4800000000158b48;

int64_t* g9f1 = reinterpret_cast<int64_t*>(0x358b4828894c);

unsigned char** g79a = reinterpret_cast<unsigned char**>(0x7fcb81e8b49);

struct s10 {
    signed char[2044] pad2044;
    unsigned char f7fc;
};

struct s10* g7a9 = reinterpret_cast<struct s10*>(0x800b86472c33948);

struct s11 {
    signed char[2048] pad2048;
    unsigned char f800;
};

struct s11* g7ba = reinterpret_cast<struct s11*>(0x58b485372c33948);

int64_t* g7c6 = reinterpret_cast<int64_t*>(0x58b48288b4c);

int32_t* g7d0 = reinterpret_cast<int32_t*>(0x1d8b48208b44);

uint120_t g7da = 0xba00000000358b48;

void fun_7ee(unsigned char* rdi, int64_t rsi, int64_t rdx);

uint120_t g80b = 0x4800000000158b48;

int64_t* g801 = reinterpret_cast<int64_t*>(0x358b4828894c);

void fun_75c(int64_t rdi, int64_t rsi, int64_t rdx) {
    int32_t v4;
    int64_t r12_5;
    int64_t tmp64_6;
    int64_t* rax7;
    unsigned char* rax8;
    unsigned char* rbx9;
    uint32_t* rsi10;
    unsigned char* rdx11;
    unsigned char** r13_12;
    uint32_t r15d13;
    int64_t rbp14;
    uint32_t ecx15;
    int1_t less16;
    unsigned char* r14_17;
    int64_t rsi18;
    int64_t rbx19;
    uint32_t* rdx20;
    int64_t rcx21;
    int64_t v22;
    int64_t v23;
    int64_t rdi24;
    void* rax25;
    uint32_t ecx26;
    int64_t r15_27;
    int64_t rbp28;
    int64_t rcx29;
    unsigned char** r13_30;
    unsigned char* rax31;
    unsigned char* tmp64_32;
    int64_t* rcx33;
    int64_t r12_34;
    int32_t* rcx35;
    int32_t v36;
    struct s1* r14_37;
    unsigned char* r14_38;
    unsigned char* rbx39;
    unsigned char* rdx40;
    int1_t less41;
    int64_t rsi42;
    int64_t* rax43;
    unsigned char* rdx44;
    int1_t less45;
    uint32_t ebp46;
    int32_t* rdx47;
    int64_t rax48;
    void* rcx49;
    uint32_t ecx50;
    int64_t rbp51;
    int64_t rcx52;
    unsigned char** r13_53;
    unsigned char* rax54;
    unsigned char* tmp64_55;
    int64_t* rcx56;
    int64_t r12_57;
    int32_t* rcx58;
    int32_t v59;
    struct s3* r14_60;
    unsigned char* r14_61;
    unsigned char* rbx62;
    unsigned char* rdx63;
    int1_t less64;
    int64_t rsi65;
    int64_t* rax66;
    unsigned char* rdx67;
    int1_t less68;
    uint32_t ebp69;
    int32_t* rdx70;
    int64_t rdi71;
    void* rax72;
    uint32_t ecx73;
    int64_t rbp74;
    int64_t rcx75;
    unsigned char** r13_76;
    unsigned char* rax77;
    unsigned char* tmp64_78;
    int64_t* rcx79;
    int64_t r12_80;
    int32_t* rcx81;
    int32_t v82;
    struct s5* r14_83;
    unsigned char* r14_84;
    unsigned char* rbx85;
    unsigned char* rdx86;
    int1_t less87;
    int64_t rsi88;
    int64_t* rax89;
    unsigned char* rdx90;
    int1_t less91;
    uint32_t ebp92;
    int32_t* rdx93;
    unsigned char** r14_94;
    unsigned char* rbx95;
    unsigned char* tmp64_96;
    unsigned char* tmp64_97;
    int64_t* rax98;
    int64_t r13_99;
    int32_t* rax100;
    int32_t r12d101;
    int64_t rsi102;
    int64_t* rax103;
    unsigned char** r14_104;
    unsigned char* rbx105;
    unsigned char* tmp64_106;
    unsigned char* tmp64_107;
    int64_t* rax108;
    int64_t r13_109;
    int32_t* rax110;
    int32_t r12d111;
    int64_t rsi112;
    int64_t* rax113;
    unsigned char** r14_114;
    unsigned char* rbx115;
    unsigned char* tmp64_116;
    unsigned char* tmp64_117;
    int64_t* rax118;
    int64_t r13_119;
    int32_t* rax120;
    int32_t r12d121;
    int64_t rsi122;
    int64_t* rax123;

    while (1) {
        if (v4 != printf) {
            r12_5 = tmp64_6;
            rax7 = g771;
            *rax7 = r12_5;
        }
        rax8 = rbx9;
        rsi10 = g71a;
        do {
            rdx11 = rax8 + 1;
            *r13_12 = rdx11;
            r15d13 = r15d13 | static_cast<uint32_t>(*rax8) << reinterpret_cast<unsigned char>(24 - *reinterpret_cast<signed char*>(&rbp14));
            *rsi10 = r15d13;
            ecx15 = static_cast<uint32_t>(rbp14 + 8);
            rax8 = rdx11;
            less16 = *reinterpret_cast<int32_t*>(&rbp14) < reinterpret_cast<int32_t>(17);
            *reinterpret_cast<uint32_t*>(&rbp14) = ecx15;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp14) + 4) = reinterpret_cast<int32_t>(printf);
            if (!less16) 
                goto addr_5a5_5;
        } while (reinterpret_cast<uint64_t>(rax8) < reinterpret_cast<uint64_t>(r14_17));
        rsi18 = g757;
        fun_75c(rbx19, rsi18, 0x800);
    }
    addr_5a5_5:
    rdx20 = g5ac;
    *rdx20 = ecx15;
    rcx21 = v22;
    if (*reinterpret_cast<int32_t*>(&rcx21) < reinterpret_cast<int32_t>(printf)) 
        goto addr_b90_9;
    if (r15d13 < 0x20000000) {
        if (r15d13 < 0xc000000) {
            if (r15d13 < 0x6000000) {
                addr_b90_9:
                goto v23;
            } else {
                *reinterpret_cast<uint32_t*>(&rdi24) = (r15d13 >> 23) - 12;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi24) + 4) = reinterpret_cast<int32_t>(printf);
                rax25 = g854;
                ecx26 = reinterpret_cast<uint32_t>(static_cast<int32_t>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rax25) + rdi24 * 2 + 1)));
                *reinterpret_cast<uint32_t*>(&r15_27) = r15d13 << *reinterpret_cast<unsigned char*>(&ecx26);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_27) + 4) = reinterpret_cast<int32_t>(printf);
                *rsi10 = *reinterpret_cast<uint32_t*>(&r15_27);
                *reinterpret_cast<uint32_t*>(&rbp28) = ecx15 - ecx26;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp28) + 4) = reinterpret_cast<int32_t>(printf);
                *rdx20 = *reinterpret_cast<uint32_t*>(&rbp28);
                if (*reinterpret_cast<int32_t*>(&rbp28) > reinterpret_cast<int32_t>(24)) {
                    *reinterpret_cast<uint32_t*>(&rcx29) = *reinterpret_cast<uint32_t*>(&rbp28);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx29) + 4) = reinterpret_cast<int32_t>(printf);
                } else {
                    r13_30 = g878;
                    rax31 = *r13_30;
                    tmp64_32 = &g888->f7fc;
                    if (reinterpret_cast<uint64_t>(rax31) >= reinterpret_cast<uint64_t>(tmp64_32)) {
                        rcx33 = gba6;
                        r12_34 = *rcx33;
                        rcx35 = gbb0;
                        v36 = *rcx35;
                        r14_37 = gbc2;
                        r14_38 = &r14_37->f800;
                        rbx39 = gbcc;
                        while (1) {
                            if (reinterpret_cast<uint64_t>(rax31) < reinterpret_cast<uint64_t>(r14_38)) {
                                addr_bda_18:
                                rdx40 = rax31 + 1;
                                *r13_30 = rdx40;
                                *reinterpret_cast<uint32_t*>(&r15_27) = *reinterpret_cast<uint32_t*>(&r15_27) | static_cast<uint32_t>(*rax31) << reinterpret_cast<unsigned char>(24 - *reinterpret_cast<signed char*>(&rbp28));
                                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_27) + 4) = reinterpret_cast<int32_t>(printf);
                                *rsi10 = *reinterpret_cast<uint32_t*>(&r15_27);
                                *reinterpret_cast<uint32_t*>(&rcx29) = static_cast<uint32_t>(rbp28 + 8);
                                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx29) + 4) = reinterpret_cast<int32_t>(printf);
                                rax31 = rdx40;
                                less41 = *reinterpret_cast<int32_t*>(&rbp28) < reinterpret_cast<int32_t>(17);
                                *reinterpret_cast<uint32_t*>(&rbp28) = *reinterpret_cast<uint32_t*>(&rcx29);
                                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp28) + 4) = reinterpret_cast<int32_t>(printf);
                                if (!less41) 
                                    break; else 
                                    continue;
                            } else {
                                rsi42 = gc17;
                                fun_c1c(rbx39, rsi42, 0x800);
                                if (v36 != printf) 
                                    goto addr_c23_21;
                            }
                            addr_bd0_22:
                            rax31 = rbx39;
                            rsi10 = gbda;
                            goto addr_bda_18;
                            addr_c23_21:
                            r12_34 = r12_34 - 0x800;
                            rax43 = gc31;
                            *rax43 = r12_34;
                            goto addr_bd0_22;
                        }
                    } else {
                        do {
                            rdx44 = rax31 + 1;
                            *r13_30 = rdx44;
                            *reinterpret_cast<uint32_t*>(&r15_27) = *reinterpret_cast<uint32_t*>(&r15_27) | static_cast<uint32_t>(*rax31) << reinterpret_cast<unsigned char>(24 - *reinterpret_cast<signed char*>(&rbp28));
                            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_27) + 4) = reinterpret_cast<int32_t>(printf);
                            *rsi10 = *reinterpret_cast<uint32_t*>(&r15_27);
                            *reinterpret_cast<uint32_t*>(&rcx29) = static_cast<uint32_t>(rbp28 + 8);
                            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx29) + 4) = reinterpret_cast<int32_t>(printf);
                            rax31 = rdx44;
                            less45 = *reinterpret_cast<int32_t*>(&rbp28) < reinterpret_cast<int32_t>(17);
                            *reinterpret_cast<uint32_t*>(&rbp28) = *reinterpret_cast<uint32_t*>(&rcx29);
                            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp28) + 4) = reinterpret_cast<int32_t>(printf);
                        } while (less45);
                    }
                }
                ebp46 = static_cast<uint32_t>(r15_27 + r15_27);
                *rsi10 = ebp46;
                rdx47 = gad8;
                *rdx47 = static_cast<int32_t>(rcx29 - 1);
                if (*reinterpret_cast<uint32_t*>(&rcx29) <= 25) 
                    goto addr_ae3_27;
            }
        } else {
            *reinterpret_cast<uint32_t*>(&rax48) = r15d13 >> 26;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax48) + 4) = reinterpret_cast<int32_t>(printf);
            rcx49 = g664;
            ecx50 = reinterpret_cast<uint32_t>(static_cast<int32_t>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rcx49) + rax48 * 2 + 1)));
            *reinterpret_cast<uint32_t*>(&r15_27) = r15d13 << *reinterpret_cast<unsigned char*>(&ecx50);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_27) + 4) = reinterpret_cast<int32_t>(printf);
            *rsi10 = *reinterpret_cast<uint32_t*>(&r15_27);
            *reinterpret_cast<uint32_t*>(&rbp51) = ecx15 - ecx50;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp51) + 4) = reinterpret_cast<int32_t>(printf);
            *rdx20 = *reinterpret_cast<uint32_t*>(&rbp51);
            if (*reinterpret_cast<int32_t*>(&rbp51) > reinterpret_cast<int32_t>(24)) {
                *reinterpret_cast<uint32_t*>(&rcx52) = *reinterpret_cast<uint32_t*>(&rbp51);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx52) + 4) = reinterpret_cast<int32_t>(printf);
            } else {
                r13_53 = g688;
                rax54 = *r13_53;
                tmp64_55 = &g698->f7fc;
                if (reinterpret_cast<uint64_t>(rax54) >= reinterpret_cast<uint64_t>(tmp64_55)) {
                    rcx56 = ga2e;
                    r12_57 = *rcx56;
                    rcx58 = ga38;
                    v59 = *rcx58;
                    r14_60 = ga4a;
                    r14_61 = &r14_60->f800;
                    rbx62 = ga54;
                    while (1) {
                        if (reinterpret_cast<uint64_t>(rax54) < reinterpret_cast<uint64_t>(r14_61)) {
                            addr_a6a_33:
                            rdx63 = rax54 + 1;
                            *r13_53 = rdx63;
                            *reinterpret_cast<uint32_t*>(&r15_27) = *reinterpret_cast<uint32_t*>(&r15_27) | static_cast<uint32_t>(*rax54) << reinterpret_cast<unsigned char>(24 - *reinterpret_cast<signed char*>(&rbp51));
                            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_27) + 4) = reinterpret_cast<int32_t>(printf);
                            *rsi10 = *reinterpret_cast<uint32_t*>(&r15_27);
                            *reinterpret_cast<uint32_t*>(&rcx52) = static_cast<uint32_t>(rbp51 + 8);
                            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx52) + 4) = reinterpret_cast<int32_t>(printf);
                            rax54 = rdx63;
                            less64 = *reinterpret_cast<int32_t*>(&rbp51) < reinterpret_cast<int32_t>(17);
                            *reinterpret_cast<uint32_t*>(&rbp51) = *reinterpret_cast<uint32_t*>(&rcx52);
                            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp51) + 4) = reinterpret_cast<int32_t>(printf);
                            if (!less64) 
                                break; else 
                                continue;
                        } else {
                            rsi65 = gaa7;
                            fun_aac(rbx62, rsi65, 0x800);
                            if (v59 != printf) 
                                goto addr_ab3_36;
                        }
                        addr_a60_37:
                        rax54 = rbx62;
                        rsi10 = ga6a;
                        goto addr_a6a_33;
                        addr_ab3_36:
                        r12_57 = r12_57 - 0x800;
                        rax66 = gac1;
                        *rax66 = r12_57;
                        goto addr_a60_37;
                    }
                } else {
                    do {
                        rdx67 = rax54 + 1;
                        *r13_53 = rdx67;
                        *reinterpret_cast<uint32_t*>(&r15_27) = *reinterpret_cast<uint32_t*>(&r15_27) | static_cast<uint32_t>(*rax54) << reinterpret_cast<unsigned char>(24 - *reinterpret_cast<signed char*>(&rbp51));
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_27) + 4) = reinterpret_cast<int32_t>(printf);
                        *rsi10 = *reinterpret_cast<uint32_t*>(&r15_27);
                        *reinterpret_cast<uint32_t*>(&rcx52) = static_cast<uint32_t>(rbp51 + 8);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx52) + 4) = reinterpret_cast<int32_t>(printf);
                        rax54 = rdx67;
                        less68 = *reinterpret_cast<int32_t*>(&rbp51) < reinterpret_cast<int32_t>(17);
                        *reinterpret_cast<uint32_t*>(&rbp51) = *reinterpret_cast<uint32_t*>(&rcx52);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp51) + 4) = reinterpret_cast<int32_t>(printf);
                    } while (less68);
                }
            }
            ebp69 = static_cast<uint32_t>(r15_27 + r15_27);
            *rsi10 = ebp69;
            rdx70 = g978;
            *rdx70 = static_cast<int32_t>(rcx52 - 1);
            if (*reinterpret_cast<uint32_t*>(&rcx52) > 25) 
                goto addr_a16_42; else 
                goto addr_983_43;
        }
    } else {
        *reinterpret_cast<uint32_t*>(&rdi71) = r15d13 >> 29;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi71) + 4) = reinterpret_cast<int32_t>(printf);
        rax72 = g5d9;
        ecx73 = reinterpret_cast<uint32_t>(static_cast<int32_t>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rax72) + rdi71 * 2 + 1)));
        *reinterpret_cast<uint32_t*>(&r15_27) = r15d13 << *reinterpret_cast<unsigned char*>(&ecx73);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_27) + 4) = reinterpret_cast<int32_t>(printf);
        *rsi10 = *reinterpret_cast<uint32_t*>(&r15_27);
        *reinterpret_cast<uint32_t*>(&rbp74) = ecx15 - ecx73;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp74) + 4) = reinterpret_cast<int32_t>(printf);
        *rdx20 = *reinterpret_cast<uint32_t*>(&rbp74);
        if (*reinterpret_cast<int32_t*>(&rbp74) > reinterpret_cast<int32_t>(24)) {
            *reinterpret_cast<uint32_t*>(&rcx75) = *reinterpret_cast<uint32_t*>(&rbp74);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx75) + 4) = reinterpret_cast<int32_t>(printf);
        } else {
            r13_76 = g5fd;
            rax77 = *r13_76;
            tmp64_78 = &g60d->f7fc;
            if (reinterpret_cast<uint64_t>(rax77) >= reinterpret_cast<uint64_t>(tmp64_78)) {
                rcx79 = g8d1;
                r12_80 = *rcx79;
                rcx81 = g8db;
                v82 = *rcx81;
                r14_83 = g8ed;
                r14_84 = &r14_83->f800;
                rbx85 = g8f7;
                while (1) {
                    if (reinterpret_cast<uint64_t>(rax77) < reinterpret_cast<uint64_t>(r14_84)) {
                        addr_90a_49:
                        rdx86 = rax77 + 1;
                        *r13_76 = rdx86;
                        *reinterpret_cast<uint32_t*>(&r15_27) = *reinterpret_cast<uint32_t*>(&r15_27) | static_cast<uint32_t>(*rax77) << reinterpret_cast<unsigned char>(24 - *reinterpret_cast<signed char*>(&rbp74));
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_27) + 4) = reinterpret_cast<int32_t>(printf);
                        *rsi10 = *reinterpret_cast<uint32_t*>(&r15_27);
                        *reinterpret_cast<uint32_t*>(&rcx75) = static_cast<uint32_t>(rbp74 + 8);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx75) + 4) = reinterpret_cast<int32_t>(printf);
                        rax77 = rdx86;
                        less87 = *reinterpret_cast<int32_t*>(&rbp74) < reinterpret_cast<int32_t>(17);
                        *reinterpret_cast<uint32_t*>(&rbp74) = *reinterpret_cast<uint32_t*>(&rcx75);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp74) + 4) = reinterpret_cast<int32_t>(printf);
                        if (!less87) 
                            break; else 
                            continue;
                    } else {
                        rsi88 = g947;
                        fun_94c(rbx85, rsi88, 0x800);
                        if (v82 != printf) 
                            goto addr_953_52;
                    }
                    addr_900_53:
                    rax77 = rbx85;
                    rsi10 = g90a;
                    goto addr_90a_49;
                    addr_953_52:
                    r12_80 = r12_80 - 0x800;
                    rax89 = g961;
                    *rax89 = r12_80;
                    goto addr_900_53;
                }
            } else {
                do {
                    rdx90 = rax77 + 1;
                    *r13_76 = rdx90;
                    *reinterpret_cast<uint32_t*>(&r15_27) = *reinterpret_cast<uint32_t*>(&r15_27) | static_cast<uint32_t>(*rax77) << reinterpret_cast<unsigned char>(24 - *reinterpret_cast<signed char*>(&rbp74));
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_27) + 4) = reinterpret_cast<int32_t>(printf);
                    *rsi10 = *reinterpret_cast<uint32_t*>(&r15_27);
                    *reinterpret_cast<uint32_t*>(&rcx75) = static_cast<uint32_t>(rbp74 + 8);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx75) + 4) = reinterpret_cast<int32_t>(printf);
                    rax77 = rdx90;
                    less91 = *reinterpret_cast<int32_t*>(&rbp74) < reinterpret_cast<int32_t>(17);
                    *reinterpret_cast<uint32_t*>(&rbp74) = *reinterpret_cast<uint32_t*>(&rcx75);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp74) + 4) = reinterpret_cast<int32_t>(printf);
                } while (less91);
            }
        }
        ebp92 = static_cast<uint32_t>(r15_27 + r15_27);
        *rsi10 = ebp92;
        rdx93 = g788;
        *rdx93 = static_cast<int32_t>(rcx75 - 1);
        if (*reinterpret_cast<uint32_t*>(&rcx75) > 25) 
            goto addr_826_58; else 
            goto addr_793_59;
    }
    addr_b76_60:
    addr_b82_61:
    if (*reinterpret_cast<int32_t*>(&r15_27) >= reinterpret_cast<int32_t>(printf)) {
        goto addr_b90_9;
    }
    addr_ae3_27:
    r14_94 = gaea;
    rbx95 = *r14_94;
    tmp64_96 = &gaf9->f7fc;
    if (reinterpret_cast<uint64_t>(rbx95) < reinterpret_cast<uint64_t>(tmp64_96) || (tmp64_97 = &gb0a->f800, reinterpret_cast<uint64_t>(rbx95) < reinterpret_cast<uint64_t>(tmp64_97))) {
        addr_b62_63:
        *r14_94 = rbx95 + 1;
        *rsi10 = ebp46 | static_cast<uint32_t>(*rbx95);
        *rdx47 = 32;
        goto addr_b76_60;
    } else {
        rax98 = gb16;
        r13_99 = *rax98;
        rax100 = gb20;
        r12d101 = *rax100;
        rbx95 = *reinterpret_cast<unsigned char**>(&gb2a);
        rsi102 = *reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(&gb2a) + 7);
        fun_b3e(rbx95, rsi102, 0x800);
        if (r12d101 != printf) 
            goto addr_b43_66;
    }
    addr_b54_67:
    rsi10 = *reinterpret_cast<uint32_t**>(&gb5b);
    rdx47 = *reinterpret_cast<int32_t**>(reinterpret_cast<int64_t>(&gb5b) + 7);
    goto addr_b62_63;
    addr_b43_66:
    rax103 = gb51;
    *rax103 = r13_99 - 0x800;
    goto addr_b54_67;
    addr_a16_42:
    goto addr_b82_61;
    addr_983_43:
    r14_104 = g98a;
    rbx105 = *r14_104;
    tmp64_106 = &g999->f7fc;
    if (reinterpret_cast<uint64_t>(rbx105) < reinterpret_cast<uint64_t>(tmp64_106) || (tmp64_107 = &g9aa->f800, reinterpret_cast<uint64_t>(rbx105) < reinterpret_cast<uint64_t>(tmp64_107))) {
        addr_a02_68:
        *r14_104 = rbx105 + 1;
        *rsi10 = ebp69 | static_cast<uint32_t>(*rbx105);
        *rdx70 = 32;
        goto addr_a16_42;
    } else {
        rax108 = g9b6;
        r13_109 = *rax108;
        rax110 = g9c0;
        r12d111 = *rax110;
        rbx105 = *reinterpret_cast<unsigned char**>(&g9ca);
        rsi112 = *reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(&g9ca) + 7);
        fun_9de(rbx105, rsi112, 0x800);
        if (r12d111 != printf) 
            goto addr_9e3_71;
    }
    addr_9f4_72:
    rsi10 = *reinterpret_cast<uint32_t**>(&g9fb);
    rdx70 = *reinterpret_cast<int32_t**>(reinterpret_cast<int64_t>(&g9fb) + 7);
    goto addr_a02_68;
    addr_9e3_71:
    rax113 = g9f1;
    *rax113 = r13_109 - 0x800;
    goto addr_9f4_72;
    addr_826_58:
    goto addr_b82_61;
    addr_793_59:
    r14_114 = g79a;
    rbx115 = *r14_114;
    tmp64_116 = &g7a9->f7fc;
    if (reinterpret_cast<uint64_t>(rbx115) < reinterpret_cast<uint64_t>(tmp64_116) || (tmp64_117 = &g7ba->f800, reinterpret_cast<uint64_t>(rbx115) < reinterpret_cast<uint64_t>(tmp64_117))) {
        addr_812_73:
        *r14_114 = rbx115 + 1;
        *rsi10 = ebp92 | static_cast<uint32_t>(*rbx115);
        *rdx93 = 32;
        goto addr_826_58;
    } else {
        rax118 = g7c6;
        r13_119 = *rax118;
        rax120 = g7d0;
        r12d121 = *rax120;
        rbx115 = *reinterpret_cast<unsigned char**>(&g7da);
        rsi122 = *reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(&g7da) + 7);
        fun_7ee(rbx115, rsi122, 0x800);
        if (r12d121 != printf) 
            goto addr_7f3_76;
    }
    addr_804_77:
    rsi10 = *reinterpret_cast<uint32_t**>(&g80b);
    rdx93 = *reinterpret_cast<int32_t**>(reinterpret_cast<int64_t>(&g80b) + 7);
    goto addr_812_73;
    addr_7f3_76:
    rax123 = g801;
    *rax123 = r13_119 - 0x800;
    goto addr_804_77;
}

void fun_7ee(unsigned char* rdi, int64_t rsi, int64_t rdx) {
    int32_t r12d4;
    int64_t* rax5;
    int64_t r13_6;
    uint32_t* rsi7;
    int32_t* rdx8;
    int64_t* r14_9;
    int64_t rbx10;
    uint32_t ebp11;
    unsigned char* rbx12;
    int32_t r15d13;
    int64_t v14;

    if (r12d4 != printf) {
        rax5 = g801;
        *rax5 = r13_6 - 0x800;
    }
    rsi7 = *reinterpret_cast<uint32_t**>(&g80b);
    rdx8 = *reinterpret_cast<int32_t**>(reinterpret_cast<int64_t>(&g80b) + 7);
    *r14_9 = rbx10 + 1;
    *rsi7 = ebp11 | static_cast<uint32_t>(*rbx12);
    *rdx8 = 32;
    if (r15d13 >= reinterpret_cast<int32_t>(printf)) {
    }
    goto v14;
}

void fun_94c(unsigned char* rdi, int64_t rsi, int64_t rdx) {
    int32_t v4;
    int64_t r12_5;
    int64_t tmp64_6;
    int64_t* rax7;
    unsigned char* rax8;
    unsigned char* rbx9;
    uint32_t* rsi10;
    unsigned char* rdx11;
    unsigned char** r13_12;
    int64_t r15_13;
    int64_t rbp14;
    int64_t rcx15;
    int1_t less16;
    unsigned char* r14_17;
    int64_t rsi18;
    unsigned char* rbx19;
    uint32_t ebp20;
    int32_t* rdx21;
    unsigned char** r14_22;
    unsigned char* rbx23;
    unsigned char* tmp64_24;
    unsigned char* tmp64_25;
    int64_t* rax26;
    int64_t r13_27;
    int32_t* rax28;
    int32_t r12d29;
    int64_t rsi30;
    int64_t v31;
    int64_t* rax32;

    while (1) {
        if (v4 != printf) {
            r12_5 = tmp64_6;
            rax7 = g961;
            *rax7 = r12_5;
        }
        rax8 = rbx9;
        rsi10 = g90a;
        do {
            rdx11 = rax8 + 1;
            *r13_12 = rdx11;
            *reinterpret_cast<uint32_t*>(&r15_13) = *reinterpret_cast<uint32_t*>(&r15_13) | static_cast<uint32_t>(*rax8) << reinterpret_cast<unsigned char>(24 - *reinterpret_cast<signed char*>(&rbp14));
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_13) + 4) = reinterpret_cast<int32_t>(printf);
            *rsi10 = *reinterpret_cast<uint32_t*>(&r15_13);
            *reinterpret_cast<uint32_t*>(&rcx15) = static_cast<uint32_t>(rbp14 + 8);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx15) + 4) = reinterpret_cast<int32_t>(printf);
            rax8 = rdx11;
            less16 = *reinterpret_cast<int32_t*>(&rbp14) < reinterpret_cast<int32_t>(17);
            *reinterpret_cast<uint32_t*>(&rbp14) = *reinterpret_cast<uint32_t*>(&rcx15);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp14) + 4) = reinterpret_cast<int32_t>(printf);
            if (!less16) 
                goto addr_778_5;
        } while (reinterpret_cast<uint64_t>(rax8) < reinterpret_cast<uint64_t>(r14_17));
        rsi18 = g947;
        fun_94c(rbx19, rsi18, 0x800);
    }
    addr_778_5:
    ebp20 = static_cast<uint32_t>(r15_13 + r15_13);
    *rsi10 = ebp20;
    rdx21 = g788;
    *rdx21 = static_cast<int32_t>(rcx15 - 1);
    if (*reinterpret_cast<uint32_t*>(&rcx15) > 25) {
        addr_826_8:
    } else {
        r14_22 = g79a;
        rbx23 = *r14_22;
        tmp64_24 = &g7a9->f7fc;
        if (reinterpret_cast<uint64_t>(rbx23) < reinterpret_cast<uint64_t>(tmp64_24) || (tmp64_25 = &g7ba->f800, reinterpret_cast<uint64_t>(rbx23) < reinterpret_cast<uint64_t>(tmp64_25))) {
            addr_812_10:
            *r14_22 = rbx23 + 1;
            *rsi10 = ebp20 | static_cast<uint32_t>(*rbx23);
            *rdx21 = 32;
            goto addr_826_8;
        } else {
            rax26 = g7c6;
            r13_27 = *rax26;
            rax28 = g7d0;
            r12d29 = *rax28;
            rbx23 = *reinterpret_cast<unsigned char**>(&g7da);
            rsi30 = *reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(&g7da) + 7);
            fun_7ee(rbx23, rsi30, 0x800);
            if (r12d29 == printf) 
                goto addr_804_13; else 
                goto addr_7f3_14;
        }
    }
    if (*reinterpret_cast<int32_t*>(&r15_13) >= reinterpret_cast<int32_t>(printf)) {
    }
    goto v31;
    addr_804_13:
    rsi10 = *reinterpret_cast<uint32_t**>(&g80b);
    rdx21 = *reinterpret_cast<int32_t**>(reinterpret_cast<int64_t>(&g80b) + 7);
    goto addr_812_10;
    addr_7f3_14:
    rax32 = g801;
    *rax32 = r13_27 - 0x800;
    goto addr_804_13;
}

void fun_9de(unsigned char* rdi, int64_t rsi, int64_t rdx) {
    int32_t r12d4;
    int64_t* rax5;
    int64_t r13_6;
    uint32_t* rsi7;
    int32_t* rdx8;
    int64_t* r14_9;
    int64_t rbx10;
    uint32_t ebp11;
    unsigned char* rbx12;
    int32_t r15d13;
    int64_t v14;

    if (r12d4 != printf) {
        rax5 = g9f1;
        *rax5 = r13_6 - 0x800;
    }
    rsi7 = *reinterpret_cast<uint32_t**>(&g9fb);
    rdx8 = *reinterpret_cast<int32_t**>(reinterpret_cast<int64_t>(&g9fb) + 7);
    *r14_9 = rbx10 + 1;
    *rsi7 = ebp11 | static_cast<uint32_t>(*rbx12);
    *rdx8 = 32;
    if (r15d13 >= reinterpret_cast<int32_t>(printf)) {
    }
    goto v14;
}

void fun_aac(unsigned char* rdi, int64_t rsi, int64_t rdx) {
    int32_t v4;
    int64_t r12_5;
    int64_t* rax6;
    unsigned char* rax7;
    unsigned char* rbx8;
    uint32_t* rsi9;
    unsigned char* rdx10;
    unsigned char** r13_11;
    int64_t r15_12;
    int64_t rbp13;
    int64_t rcx14;
    int1_t less15;
    unsigned char* r14_16;
    int64_t rsi17;
    unsigned char* rbx18;
    uint32_t ebp19;
    int32_t* rdx20;
    unsigned char** r14_21;
    unsigned char* rbx22;
    unsigned char* tmp64_23;
    unsigned char* tmp64_24;
    int64_t* rax25;
    int64_t r13_26;
    int32_t* rax27;
    int32_t r12d28;
    int64_t rsi29;
    int64_t v30;
    int64_t* rax31;

    while (1) {
        if (v4 != printf) {
            r12_5 = r12_5 - 0x800;
            rax6 = gac1;
            *rax6 = r12_5;
        }
        rax7 = rbx8;
        rsi9 = ga6a;
        do {
            rdx10 = rax7 + 1;
            *r13_11 = rdx10;
            *reinterpret_cast<uint32_t*>(&r15_12) = *reinterpret_cast<uint32_t*>(&r15_12) | static_cast<uint32_t>(*rax7) << reinterpret_cast<unsigned char>(24 - *reinterpret_cast<signed char*>(&rbp13));
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_12) + 4) = reinterpret_cast<int32_t>(printf);
            *rsi9 = *reinterpret_cast<uint32_t*>(&r15_12);
            *reinterpret_cast<uint32_t*>(&rcx14) = static_cast<uint32_t>(rbp13 + 8);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx14) + 4) = reinterpret_cast<int32_t>(printf);
            rax7 = rdx10;
            less15 = *reinterpret_cast<int32_t*>(&rbp13) < reinterpret_cast<int32_t>(17);
            *reinterpret_cast<uint32_t*>(&rbp13) = *reinterpret_cast<uint32_t*>(&rcx14);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp13) + 4) = reinterpret_cast<int32_t>(printf);
            if (!less15) 
                goto addr_968_5;
        } while (reinterpret_cast<uint64_t>(rax7) < reinterpret_cast<uint64_t>(r14_16));
        rsi17 = gaa7;
        fun_aac(rbx18, rsi17, 0x800);
    }
    addr_968_5:
    ebp19 = static_cast<uint32_t>(r15_12 + r15_12);
    *rsi9 = ebp19;
    rdx20 = g978;
    *rdx20 = static_cast<int32_t>(rcx14 - 1);
    if (*reinterpret_cast<uint32_t*>(&rcx14) > 25) {
        addr_a16_8:
    } else {
        r14_21 = g98a;
        rbx22 = *r14_21;
        tmp64_23 = &g999->f7fc;
        if (reinterpret_cast<uint64_t>(rbx22) < reinterpret_cast<uint64_t>(tmp64_23) || (tmp64_24 = &g9aa->f800, reinterpret_cast<uint64_t>(rbx22) < reinterpret_cast<uint64_t>(tmp64_24))) {
            addr_a02_10:
            *r14_21 = rbx22 + 1;
            *rsi9 = ebp19 | static_cast<uint32_t>(*rbx22);
            *rdx20 = 32;
            goto addr_a16_8;
        } else {
            rax25 = g9b6;
            r13_26 = *rax25;
            rax27 = g9c0;
            r12d28 = *rax27;
            rbx22 = *reinterpret_cast<unsigned char**>(&g9ca);
            rsi29 = *reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(&g9ca) + 7);
            fun_9de(rbx22, rsi29, 0x800);
            if (r12d28 == printf) 
                goto addr_9f4_13; else 
                goto addr_9e3_14;
        }
    }
    if (*reinterpret_cast<int32_t*>(&r15_12) >= reinterpret_cast<int32_t>(printf)) {
    }
    goto v30;
    addr_9f4_13:
    rsi9 = *reinterpret_cast<uint32_t**>(&g9fb);
    rdx20 = *reinterpret_cast<int32_t**>(reinterpret_cast<int64_t>(&g9fb) + 7);
    goto addr_a02_10;
    addr_9e3_14:
    rax31 = g9f1;
    *rax31 = r13_26 - 0x800;
    goto addr_9f4_13;
}

void fun_b3e(unsigned char* rdi, int64_t rsi, int64_t rdx) {
    int32_t r12d4;
    int64_t* rax5;
    int64_t r13_6;
    uint32_t* rsi7;
    int32_t* rdx8;
    int64_t* r14_9;
    int64_t rbx10;
    uint32_t ebp11;
    unsigned char* rbx12;
    int32_t r15d13;
    int64_t v14;

    if (r12d4 != printf) {
        rax5 = gb51;
        *rax5 = r13_6 - 0x800;
    }
    rsi7 = *reinterpret_cast<uint32_t**>(&gb5b);
    rdx8 = *reinterpret_cast<int32_t**>(reinterpret_cast<int64_t>(&gb5b) + 7);
    *r14_9 = rbx10 + 1;
    *rsi7 = ebp11 | static_cast<uint32_t>(*rbx12);
    *rdx8 = 32;
    if (r15d13 >= reinterpret_cast<int32_t>(printf)) {
    }
    goto v14;
}

void fun_c1c(unsigned char* rdi, int64_t rsi, int64_t rdx) {
    int32_t v4;
    int64_t r12_5;
    int64_t tmp64_6;
    int64_t* rax7;
    unsigned char* rax8;
    unsigned char* rbx9;
    uint32_t* rsi10;
    unsigned char* rdx11;
    unsigned char** r13_12;
    int64_t r15_13;
    int64_t rbp14;
    int64_t rcx15;
    int1_t less16;
    unsigned char* r14_17;
    int64_t rsi18;
    unsigned char* rbx19;
    uint32_t ebp20;
    int32_t* rdx21;
    unsigned char** r14_22;
    unsigned char* rbx23;
    unsigned char* tmp64_24;
    unsigned char* tmp64_25;
    int64_t* rax26;
    int64_t r13_27;
    int32_t* rax28;
    int32_t r12d29;
    int64_t rsi30;
    int64_t v31;
    int64_t* rax32;

    while (1) {
        if (v4 != printf) {
            r12_5 = tmp64_6;
            rax7 = gc31;
            *rax7 = r12_5;
        }
        rax8 = rbx9;
        rsi10 = gbda;
        do {
            rdx11 = rax8 + 1;
            *r13_12 = rdx11;
            *reinterpret_cast<uint32_t*>(&r15_13) = *reinterpret_cast<uint32_t*>(&r15_13) | static_cast<uint32_t>(*rax8) << reinterpret_cast<unsigned char>(24 - *reinterpret_cast<signed char*>(&rbp14));
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_13) + 4) = reinterpret_cast<int32_t>(printf);
            *rsi10 = *reinterpret_cast<uint32_t*>(&r15_13);
            *reinterpret_cast<uint32_t*>(&rcx15) = static_cast<uint32_t>(rbp14 + 8);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx15) + 4) = reinterpret_cast<int32_t>(printf);
            rax8 = rdx11;
            less16 = *reinterpret_cast<int32_t*>(&rbp14) < reinterpret_cast<int32_t>(17);
            *reinterpret_cast<uint32_t*>(&rbp14) = *reinterpret_cast<uint32_t*>(&rcx15);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp14) + 4) = reinterpret_cast<int32_t>(printf);
            if (!less16) 
                goto addr_ac8_5;
        } while (reinterpret_cast<uint64_t>(rax8) < reinterpret_cast<uint64_t>(r14_17));
        rsi18 = gc17;
        fun_c1c(rbx19, rsi18, 0x800);
    }
    addr_ac8_5:
    ebp20 = static_cast<uint32_t>(r15_13 + r15_13);
    *rsi10 = ebp20;
    rdx21 = gad8;
    *rdx21 = static_cast<int32_t>(rcx15 - 1);
    if (*reinterpret_cast<uint32_t*>(&rcx15) > 25) {
        addr_b76_8:
    } else {
        r14_22 = gaea;
        rbx23 = *r14_22;
        tmp64_24 = &gaf9->f7fc;
        if (reinterpret_cast<uint64_t>(rbx23) < reinterpret_cast<uint64_t>(tmp64_24) || (tmp64_25 = &gb0a->f800, reinterpret_cast<uint64_t>(rbx23) < reinterpret_cast<uint64_t>(tmp64_25))) {
            addr_b62_10:
            *r14_22 = rbx23 + 1;
            *rsi10 = ebp20 | static_cast<uint32_t>(*rbx23);
            *rdx21 = 32;
            goto addr_b76_8;
        } else {
            rax26 = gb16;
            r13_27 = *rax26;
            rax28 = gb20;
            r12d29 = *rax28;
            rbx23 = *reinterpret_cast<unsigned char**>(&gb2a);
            rsi30 = *reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(&gb2a) + 7);
            fun_b3e(rbx23, rsi30, 0x800);
            if (r12d29 == printf) 
                goto addr_b54_13; else 
                goto addr_b43_14;
        }
    }
    if (*reinterpret_cast<int32_t*>(&r15_13) >= reinterpret_cast<int32_t>(printf)) {
    }
    goto v31;
    addr_b54_13:
    rsi10 = *reinterpret_cast<uint32_t**>(&gb5b);
    rdx21 = *reinterpret_cast<int32_t**>(reinterpret_cast<int64_t>(&gb5b) + 7);
    goto addr_b62_10;
    addr_b43_14:
    rax32 = gb51;
    *rax32 = r13_27 - 0x800;
    goto addr_b54_13;
}

int64_t* gd67 = reinterpret_cast<int64_t*>(0x358b4828894c);

uint120_t gd71 = 0x4800000000158b48;

void fun_d54(unsigned char* rdi, int64_t rsi, int64_t rdx) {
    int32_t r12d4;
    int64_t* rax5;
    int64_t r13_6;
    uint32_t* rsi7;
    uint32_t* rdx8;
    int64_t* r14_9;
    int64_t rbx10;
    uint32_t ebp11;
    unsigned char* rbx12;
    int64_t v13;

    if (r12d4 != printf) {
        rax5 = gd67;
        *rax5 = r13_6 - 0x800;
    }
    rsi7 = *reinterpret_cast<uint32_t**>(&gd71);
    rdx8 = *reinterpret_cast<uint32_t**>(reinterpret_cast<int64_t>(&gd71) + 7);
    *r14_9 = rbx10 + 1;
    *rsi7 = ebp11 | static_cast<uint32_t>(*rbx12);
    *rdx8 = 32;
    goto v13;
}

int64_t* ge44 = reinterpret_cast<int64_t*>(0x801f0f97eb30894c);

uint32_t* gdea = reinterpret_cast<uint32_t*>(0x55894801508d48);

int64_t ge2a = 0x247c8300000000e8;

uint32_t* gccf = reinterpret_cast<uint32_t*>(0x7c8b48cd89410a89);

unsigned char** gd00 = reinterpret_cast<unsigned char**>(0x7fcb81e8b49);

struct s12 {
    signed char[2044] pad2044;
    unsigned char f7fc;
};

struct s12* gd0f = reinterpret_cast<struct s12*>(0x800b86472c33948);

struct s13 {
    signed char[2048] pad2048;
    unsigned char f800;
};

struct s13* gd20 = reinterpret_cast<struct s13*>(0x58b485372c33948);

int64_t* gd2c = reinterpret_cast<int64_t*>(0x58b48288b4c);

int32_t* gd36 = reinterpret_cast<int32_t*>(0x1d8b48208b44);

uint120_t gd40 = 0xba00000000358b48;

void fun_e2f(int64_t rdi, int64_t rsi, int64_t rdx) {
    int32_t v4;
    int64_t r14_5;
    int64_t* rax6;
    unsigned char* rax7;
    unsigned char* rbx8;
    uint32_t* rsi9;
    unsigned char* rdx10;
    unsigned char** rbp11;
    int64_t r15_12;
    int64_t r13_13;
    uint32_t ecx14;
    int1_t less15;
    unsigned char* r12_16;
    int64_t rsi17;
    int64_t rbx18;
    uint32_t* rdx19;
    int64_t r13_20;
    int64_t rdi21;
    int64_t v22;
    int64_t v23;
    uint32_t ebp24;
    unsigned char** r14_25;
    unsigned char* rbx26;
    unsigned char* tmp64_27;
    unsigned char* tmp64_28;
    int64_t* rax29;
    int64_t r13_30;
    int32_t* rax31;
    int32_t r12d32;
    int64_t rsi33;
    int64_t* rax34;

    while (1) {
        if (v4 != printf) {
            r14_5 = r14_5 - 0x800;
            rax6 = ge44;
            *rax6 = r14_5;
        }
        rax7 = rbx8;
        rsi9 = gdea;
        do {
            rdx10 = rax7 + 1;
            *rbp11 = rdx10;
            *reinterpret_cast<uint32_t*>(&r15_12) = *reinterpret_cast<uint32_t*>(&r15_12) | static_cast<uint32_t>(*rax7) << reinterpret_cast<unsigned char>(24 - *reinterpret_cast<signed char*>(&r13_13));
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_12) + 4) = reinterpret_cast<int32_t>(printf);
            *rsi9 = *reinterpret_cast<uint32_t*>(&r15_12);
            ecx14 = static_cast<uint32_t>(r13_13 + 8);
            rax7 = rdx10;
            less15 = *reinterpret_cast<int32_t*>(&r13_13) < reinterpret_cast<int32_t>(17);
            *reinterpret_cast<uint32_t*>(&r13_13) = ecx14;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_13) + 4) = reinterpret_cast<int32_t>(printf);
            if (!less15) 
                goto addr_cc8_5;
        } while (reinterpret_cast<uint64_t>(rax7) < reinterpret_cast<uint64_t>(r12_16));
        rsi17 = ge2a;
        fun_e2f(rbx18, rsi17, 0x800);
    }
    addr_cc8_5:
    rdx19 = gccf;
    *rdx19 = ecx14;
    *reinterpret_cast<uint32_t*>(&r13_20) = ecx14;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_20) + 4) = reinterpret_cast<int32_t>(printf);
    rdi21 = v22;
    if (*reinterpret_cast<int32_t*>(&rdi21) >= reinterpret_cast<int32_t>(printf)) {
        addr_d97_9:
        goto v23;
    } else {
        ebp24 = static_cast<uint32_t>(r15_12 + r15_12);
        *rsi9 = ebp24;
        *rdx19 = static_cast<uint32_t>(r13_20 - 1);
        if (*reinterpret_cast<uint32_t*>(&r13_20) > 25) {
            addr_d8c_11:
            goto addr_d97_9;
        } else {
            r14_25 = gd00;
            rbx26 = *r14_25;
            tmp64_27 = &gd0f->f7fc;
            if (reinterpret_cast<uint64_t>(rbx26) < reinterpret_cast<uint64_t>(tmp64_27) || (tmp64_28 = &gd20->f800, reinterpret_cast<uint64_t>(rbx26) < reinterpret_cast<uint64_t>(tmp64_28))) {
                addr_d78_13:
                *r14_25 = rbx26 + 1;
                *rsi9 = ebp24 | static_cast<uint32_t>(*rbx26);
                *rdx19 = 32;
                goto addr_d8c_11;
            } else {
                rax29 = gd2c;
                r13_30 = *rax29;
                rax31 = gd36;
                r12d32 = *rax31;
                rbx26 = *reinterpret_cast<unsigned char**>(&gd40);
                rsi33 = *reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(&gd40) + 7);
                fun_d54(rbx26, rsi33, 0x800);
                if (r12d32 != printf) 
                    goto addr_d59_16;
            }
        }
    }
    addr_d6a_17:
    rsi9 = *reinterpret_cast<uint32_t**>(&gd71);
    rdx19 = *reinterpret_cast<uint32_t**>(reinterpret_cast<int64_t>(&gd71) + 7);
    goto addr_d78_13;
    addr_d59_16:
    rax34 = gd67;
    *rax34 = r13_30 - 0x800;
    goto addr_d6a_17;
}

uint32_t* gfa5 = reinterpret_cast<uint32_t*>(0x4412348d47178b44);

unsigned char** gff0 = reinterpret_cast<unsigned char**>(0x7fcb900458b48);

struct s14 {
    signed char[2044] pad2044;
    unsigned char f7fc;
};

struct s14* inPMV = reinterpret_cast<struct s14*>(0x240830fc83948);

int64_t* g1250 = reinterpret_cast<int64_t*>(0xd8b48398b4c);

int32_t* g125a = reinterpret_cast<int32_t*>(0xb910244c89098b);

struct s15 {
    signed char[2048] pad2048;
    unsigned char f800;
};

struct s15* g126c = reinterpret_cast<struct s15*>(0x1d8b48cc0149);

unsigned char* g1276 = reinterpret_cast<unsigned char*>(0x841f0f3eeb);

int64_t g12ca = 0x247c8300000000e8;

void fun_12cf(unsigned char* rdi, int64_t rsi, int64_t rdx);

uint32_t* g128a = reinterpret_cast<uint32_t*>(0x55894801508d48);

int64_t* g12e4 = reinterpret_cast<int64_t*>(0xd8b4897eb38894c);

int32_t* g103f = reinterpret_cast<int32_t*>(0x98248c8b440889);

void fun_1098();

void fun_f9e() {
    uint32_t* rdi1;
    int64_t r10_2;
    uint32_t r14d3;
    int64_t rax4;
    int32_t* rbx5;
    int64_t r13_6;
    int32_t* rbx7;
    void* rax8;
    void* v9;
    int64_t v10;
    int64_t v11;
    int64_t r12_12;
    unsigned char** rbp13;
    unsigned char* rax14;
    unsigned char* tmp64_15;
    int64_t* rcx16;
    int64_t r15_17;
    int32_t* rcx18;
    int32_t v19;
    struct s15* r12_20;
    unsigned char* r12_21;
    unsigned char* rbx22;
    unsigned char* rdx23;
    int32_t ecx24;
    int1_t less25;
    int64_t rsi26;
    int64_t* rax27;
    unsigned char* rdx28;
    int1_t less29;
    int32_t* rax30;
    void* v31;
    int64_t r12_32;
    int64_t v33;

    rdi1 = gfa5;
    *reinterpret_cast<uint32_t*>(&r10_2) = *rdi1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_2) + 4) = reinterpret_cast<int32_t>(printf);
    r14d3 = static_cast<uint32_t>(r10_2 + r10_2);
    *rdi1 = r14d3;
    *reinterpret_cast<int32_t*>(&rax4) = *rbx5;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax4) + 4) = reinterpret_cast<int32_t>(printf);
    *reinterpret_cast<int32_t*>(&r13_6) = static_cast<int32_t>(rax4 - 1);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_6) + 4) = reinterpret_cast<int32_t>(printf);
    *rbx7 = *reinterpret_cast<int32_t*>(&r13_6);
    rax8 = v9;
    if (*reinterpret_cast<int32_t*>(&rax4) <= 25) {
        v10 = r10_2;
        v11 = r12_12;
        rbp13 = gff0;
        rax14 = *rbp13;
        tmp64_15 = &inPMV->f7fc;
        if (reinterpret_cast<uint64_t>(rax14) >= reinterpret_cast<uint64_t>(tmp64_15)) {
            rcx16 = g1250;
            r15_17 = *rcx16;
            rcx18 = g125a;
            v19 = *rcx18;
            r12_20 = g126c;
            r12_21 = &r12_20->f800;
            rbx22 = g1276;
            while (1) {
                if (reinterpret_cast<uint64_t>(rax14) < reinterpret_cast<uint64_t>(r12_21)) {
                    addr_128a_5:
                    rdx23 = rax14 + 1;
                    *rbp13 = rdx23;
                    r14d3 = r14d3 | static_cast<uint32_t>(*rax14) << reinterpret_cast<unsigned char>(24 - *reinterpret_cast<signed char*>(&r13_6));
                    *rdi1 = r14d3;
                    ecx24 = static_cast<int32_t>(r13_6 + 8);
                    rax14 = rdx23;
                    less25 = *reinterpret_cast<int32_t*>(&r13_6) < 17;
                    *reinterpret_cast<int32_t*>(&r13_6) = ecx24;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_6) + 4) = reinterpret_cast<int32_t>(printf);
                    if (!less25) 
                        break; else 
                        continue;
                } else {
                    rsi26 = g12ca;
                    fun_12cf(rbx22, rsi26, 0x800);
                    if (v19 != printf) 
                        goto addr_12d6_8;
                }
                addr_1280_9:
                rax14 = rbx22;
                rdi1 = g128a;
                goto addr_128a_5;
                addr_12d6_8:
                r15_17 = r15_17 - 0x800;
                rax27 = g12e4;
                *rax27 = r15_17;
                goto addr_1280_9;
            }
        } else {
            do {
                rdx28 = rax14 + 1;
                *rbp13 = rdx28;
                r14d3 = r14d3 | static_cast<uint32_t>(*rax14) << reinterpret_cast<unsigned char>(24 - *reinterpret_cast<signed char*>(&r13_6));
                *rdi1 = r14d3;
                ecx24 = static_cast<int32_t>(r13_6 + 8);
                rax14 = rdx28;
                less29 = *reinterpret_cast<int32_t*>(&r13_6) < 17;
                *reinterpret_cast<int32_t*>(&r13_6) = ecx24;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_6) + 4) = reinterpret_cast<int32_t>(printf);
            } while (less29);
        }
        rax30 = g103f;
        *rax30 = ecx24;
        rax8 = v31;
        r12_32 = v11;
        r10_2 = v10;
    }
    *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rax8) + r12_32 * 4 + 8) = *reinterpret_cast<uint32_t*>(&r10_2) >> 31;
    fun_1098();
    goto v33;
}

void fun_1098() {
    int64_t v1;

    goto v1;
}

int64_t* g1244 = reinterpret_cast<int64_t*>(0xd8b4897eb38894c);

uint32_t* g11ea = reinterpret_cast<uint32_t*>(0x55894801508d48);

int64_t g122a = 0x247c8300000000e8;

int32_t* gf3f = reinterpret_cast<int32_t*>(0x98248c8b440b89);

void fun_122f(int64_t rdi, int64_t rsi, int64_t rdx) {
    int32_t v4;
    int64_t r15_5;
    int64_t tmp64_6;
    int64_t* rax7;
    unsigned char* rax8;
    unsigned char* rbx9;
    uint32_t* r11_10;
    unsigned char* rdx11;
    unsigned char** rbp12;
    uint32_t r12d13;
    int64_t r14_14;
    int32_t ecx15;
    int1_t less16;
    unsigned char* r13_17;
    int64_t rsi18;
    int64_t rbx19;
    int32_t* rbx20;
    int64_t r8_21;
    int64_t v22;
    int64_t r12_23;
    int32_t v24;
    uint32_t* v25;
    uint32_t* rdi26;
    int64_t r10_27;
    uint32_t r14d28;
    int64_t rax29;
    int64_t r13_30;
    void* rax31;
    void* v32;
    int64_t v33;
    int64_t v34;
    unsigned char** rbp35;
    unsigned char* rax36;
    unsigned char* tmp64_37;
    int64_t* rcx38;
    int64_t r15_39;
    int32_t* rcx40;
    int32_t v41;
    struct s15* r12_42;
    unsigned char* r12_43;
    unsigned char* rbx44;
    unsigned char* rdx45;
    int32_t ecx46;
    int1_t less47;
    int64_t rsi48;
    int64_t* rax49;
    unsigned char* rdx50;
    int1_t less51;
    int32_t* rax52;
    void* v53;
    int64_t v54;

    while (1) {
        if (v4 != printf) {
            r15_5 = tmp64_6;
            rax7 = g1244;
            *rax7 = r15_5;
        }
        rax8 = rbx9;
        r11_10 = g11ea;
        do {
            rdx11 = rax8 + 1;
            *rbp12 = rdx11;
            r12d13 = r12d13 | static_cast<uint32_t>(*rax8) << reinterpret_cast<unsigned char>(24 - *reinterpret_cast<signed char*>(&r14_14));
            *r11_10 = r12d13;
            ecx15 = static_cast<int32_t>(r14_14 + 8);
            rax8 = rdx11;
            less16 = *reinterpret_cast<int32_t*>(&r14_14) < 17;
            *reinterpret_cast<int32_t*>(&r14_14) = ecx15;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_14) + 4) = reinterpret_cast<int32_t>(printf);
            if (!less16) 
                goto addr_f38_5;
        } while (reinterpret_cast<uint64_t>(rax8) < reinterpret_cast<uint64_t>(r13_17));
        rsi18 = g122a;
        fun_122f(rbx19, rsi18, 0x800);
    }
    addr_f38_5:
    rbx20 = gf3f;
    *rbx20 = ecx15;
    r8_21 = v22;
    r12_23 = v24;
    v25[r12_23] = *reinterpret_cast<uint32_t*>(&r8_21) >> 31;
    fun_f9e();
    rdi26 = gfa5;
    *reinterpret_cast<uint32_t*>(&r10_27) = *rdi26;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_27) + 4) = reinterpret_cast<int32_t>(printf);
    r14d28 = static_cast<uint32_t>(r10_27 + r10_27);
    *rdi26 = r14d28;
    *reinterpret_cast<int32_t*>(&rax29) = *rbx20;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax29) + 4) = reinterpret_cast<int32_t>(printf);
    *reinterpret_cast<int32_t*>(&r13_30) = static_cast<int32_t>(rax29 - 1);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_30) + 4) = reinterpret_cast<int32_t>(printf);
    *rbx20 = *reinterpret_cast<int32_t*>(&r13_30);
    rax31 = v32;
    if (*reinterpret_cast<int32_t*>(&rax29) <= 25) {
        v33 = r10_27;
        v34 = r12_23;
        rbp35 = gff0;
        rax36 = *rbp35;
        tmp64_37 = &inPMV->f7fc;
        if (reinterpret_cast<uint64_t>(rax36) >= reinterpret_cast<uint64_t>(tmp64_37)) {
            rcx38 = g1250;
            r15_39 = *rcx38;
            rcx40 = g125a;
            v41 = *rcx40;
            r12_42 = g126c;
            r12_43 = &r12_42->f800;
            rbx44 = g1276;
            while (1) {
                if (reinterpret_cast<uint64_t>(rax36) < reinterpret_cast<uint64_t>(r12_43)) {
                    addr_128a_13:
                    rdx45 = rax36 + 1;
                    *rbp35 = rdx45;
                    r14d28 = r14d28 | static_cast<uint32_t>(*rax36) << reinterpret_cast<unsigned char>(24 - *reinterpret_cast<signed char*>(&r13_30));
                    *rdi26 = r14d28;
                    ecx46 = static_cast<int32_t>(r13_30 + 8);
                    rax36 = rdx45;
                    less47 = *reinterpret_cast<int32_t*>(&r13_30) < 17;
                    *reinterpret_cast<int32_t*>(&r13_30) = ecx46;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_30) + 4) = reinterpret_cast<int32_t>(printf);
                    if (!less47) 
                        break; else 
                        continue;
                } else {
                    rsi48 = g12ca;
                    fun_12cf(rbx44, rsi48, 0x800);
                    if (v41 != printf) 
                        goto addr_12d6_16;
                }
                addr_1280_17:
                rax36 = rbx44;
                rdi26 = g128a;
                goto addr_128a_13;
                addr_12d6_16:
                r15_39 = r15_39 - 0x800;
                rax49 = g12e4;
                *rax49 = r15_39;
                goto addr_1280_17;
            }
        } else {
            do {
                rdx50 = rax36 + 1;
                *rbp35 = rdx50;
                r14d28 = r14d28 | static_cast<uint32_t>(*rax36) << reinterpret_cast<unsigned char>(24 - *reinterpret_cast<signed char*>(&r13_30));
                *rdi26 = r14d28;
                ecx46 = static_cast<int32_t>(r13_30 + 8);
                rax36 = rdx50;
                less51 = *reinterpret_cast<int32_t*>(&r13_30) < 17;
                *reinterpret_cast<int32_t*>(&r13_30) = ecx46;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_30) + 4) = reinterpret_cast<int32_t>(printf);
            } while (less51);
        }
        rax52 = g103f;
        *rax52 = ecx46;
        rax31 = v53;
        r12_23 = v34;
        r10_27 = v33;
    }
    *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(rax31) + r12_23 * 4 + 8) = *reinterpret_cast<uint32_t*>(&r10_27) >> 31;
    fun_1098();
    goto v54;
}

void fun_12cf(unsigned char* rdi, int64_t rsi, int64_t rdx) {
    int32_t v4;
    int64_t r15_5;
    int64_t* rax6;
    unsigned char* rax7;
    unsigned char* rbx8;
    uint32_t* rdi9;
    unsigned char* rdx10;
    unsigned char** rbp11;
    uint32_t r14d12;
    int64_t r13_13;
    int32_t ecx14;
    int1_t less15;
    unsigned char* r12_16;
    int64_t rsi17;
    unsigned char* rbx18;
    int32_t* rax19;
    int64_t r10_20;
    int64_t v21;
    void* v22;
    int64_t v23;
    int64_t v24;

    while (1) {
        if (v4 != printf) {
            r15_5 = r15_5 - 0x800;
            rax6 = g12e4;
            *rax6 = r15_5;
        }
        rax7 = rbx8;
        rdi9 = g128a;
        do {
            rdx10 = rax7 + 1;
            *rbp11 = rdx10;
            r14d12 = r14d12 | static_cast<uint32_t>(*rax7) << reinterpret_cast<unsigned char>(24 - *reinterpret_cast<signed char*>(&r13_13));
            *rdi9 = r14d12;
            ecx14 = static_cast<int32_t>(r13_13 + 8);
            rax7 = rdx10;
            less15 = *reinterpret_cast<int32_t*>(&r13_13) < 17;
            *reinterpret_cast<int32_t*>(&r13_13) = ecx14;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_13) + 4) = reinterpret_cast<int32_t>(printf);
            if (!less15) 
                goto addr_1038_5;
        } while (reinterpret_cast<uint64_t>(rax7) < reinterpret_cast<uint64_t>(r12_16));
        rsi17 = g12ca;
        fun_12cf(rbx18, rsi17, 0x800);
    }
    addr_1038_5:
    rax19 = g103f;
    *rax19 = ecx14;
    r10_20 = v21;
    *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(v22) + v23 * 4 + 8) = *reinterpret_cast<uint32_t*>(&r10_20) >> 31;
    fun_1098();
    goto v24;
}

int64_t* g137f = reinterpret_cast<int64_t*>(0x8894810244c8948);

int64_t g1360 = 0x247c8300000000e8;

int32_t* g112c = reinterpret_cast<int32_t*>(0x4838246c8b4c0889);

void fun_118e();

void fun_1365(int64_t rdi, int64_t rsi, int64_t rdx) {
    int32_t v4;
    int64_t rcx5;
    int64_t v6;
    int64_t* rax7;
    unsigned char* rax8;
    unsigned char* r12_9;
    unsigned char* rdx10;
    unsigned char** r15_11;
    uint32_t ebp12;
    int64_t r14_13;
    uint32_t* rbx14;
    int32_t ecx15;
    int1_t less16;
    unsigned char* r13_17;
    int64_t rsi18;
    int64_t r12_19;
    int32_t* rax20;
    int64_t rdi21;
    int64_t v22;
    uint32_t edi23;
    int64_t rbx24;
    int32_t v25;
    uint32_t* v26;
    int64_t* v27;
    int64_t v28;

    while (1) {
        if (v4 != printf) {
            rcx5 = v6 - 0x800;
            rax7 = g137f;
            v6 = rcx5;
            *rax7 = rcx5;
        }
        rax8 = r12_9;
        do {
            rdx10 = rax8 + 1;
            *r15_11 = rdx10;
            ebp12 = ebp12 | static_cast<uint32_t>(*rax8) << reinterpret_cast<unsigned char>(24 - *reinterpret_cast<signed char*>(&r14_13));
            *rbx14 = ebp12;
            ecx15 = static_cast<int32_t>(r14_13 + 8);
            rax8 = rdx10;
            less16 = *reinterpret_cast<int32_t*>(&r14_13) < 17;
            *reinterpret_cast<int32_t*>(&r14_13) = ecx15;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_13) + 4) = reinterpret_cast<int32_t>(printf);
            if (!less16) 
                goto addr_1125_5;
        } while (reinterpret_cast<uint64_t>(rax8) < reinterpret_cast<uint64_t>(r13_17));
        rsi18 = g1360;
        fun_1365(r12_19, rsi18, 0x800);
    }
    addr_1125_5:
    rax20 = g112c;
    *rax20 = ecx15;
    rdi21 = v22;
    edi23 = *reinterpret_cast<uint32_t*>(&rdi21) >> 31;
    rbx24 = v25;
    v26[rbx24] = edi23;
    (v26 + rbx24)[2] = edi23;
    fun_118e();
    (v27 + rbx24)[2] = v27[rbx24];
    goto v28;
}

int64_t fun_150b();

uint32_t* g1529 = reinterpret_cast<uint32_t*>(0xe989f68941308b41);

uint32_t* g153e = reinterpret_cast<uint32_t*>(0x8944ec2941208b44);

struct s16 {
    signed char[4] pad4;
    int32_t f4;
};

unsigned char** g1561 = reinterpret_cast<unsigned char**>(0x7fcb9038b48);

struct s17 {
    signed char[2044] pad2044;
    unsigned char f7fc;
};

struct s17* g1570 = reinterpret_cast<struct s17*>(0x1c4830fc83948);

int64_t* g1744 = reinterpret_cast<int64_t*>(0x20244c8948098b48);

int32_t* g1753 = reinterpret_cast<int32_t*>(0xb938244c89098b);

struct s18 {
    signed char[2048] pad2048;
    unsigned char f800;
};

struct s18* g1765 = reinterpret_cast<struct s18*>(0x2d8b48cf0149);

unsigned char* g176f = reinterpret_cast<unsigned char*>(0x66666666666641eb);

int64_t g17c9 = 0x247c8300000000e8;

void fun_17ce(unsigned char* rdi, int64_t rsi, int64_t rdx);

int64_t* g17e8 = reinterpret_cast<int64_t*>(0x8894820244c8948);

uint32_t* g15af = reinterpret_cast<uint32_t*>(0x4430247c8b4c0889);

struct s19 {
    signed char[4] pad4;
    uint32_t f4;
};

int32_t fun_165c();

int32_t fun_1503() {
    int32_t* r15_1;
    int32_t eax2;
    int64_t rax3;
    uint32_t esi4;
    int32_t ebp5;
    int64_t v6;
    uint32_t* r8_7;
    uint32_t esi8;
    int32_t ecx9;
    int32_t ebp10;
    uint32_t r14d11;
    uint32_t* rax12;
    int64_t r12_13;
    uint32_t ebp14;
    uint32_t v15;
    int32_t v16;
    int32_t r13d17;
    struct s16* v18;
    struct s16* r15_19;
    unsigned char** rbx20;
    unsigned char* rax21;
    unsigned char* tmp64_22;
    int64_t* rcx23;
    int64_t v24;
    int32_t* rcx25;
    int32_t v26;
    struct s18* r15_27;
    unsigned char* r15_28;
    unsigned char* rbp29;
    unsigned char* rdx30;
    uint32_t ecx31;
    int1_t less32;
    int64_t rsi33;
    int64_t rcx34;
    int64_t* rax35;
    unsigned char* rdx36;
    int1_t less37;
    uint32_t* rax38;
    struct s16* r15_39;
    int32_t r13d40;
    int64_t rbp41;
    int64_t v42;
    uint32_t ecx43;
    struct s19* r14_44;
    struct s19* v45;
    int32_t r12d46;
    int32_t v47;
    uint32_t ecx48;
    uint32_t ebp49;
    uint32_t ecx50;
    uint32_t edi51;
    uint32_t ecx52;
    unsigned char v53;
    uint32_t edx54;
    int1_t sf55;
    uint32_t ecx56;
    uint32_t ecx57;
    unsigned char v58;
    uint32_t ecx59;
    int32_t eax60;
    uint32_t eax61;
    uint32_t ecx62;
    int64_t v63;
    uint32_t ecx64;

    *r15_1 = eax2;
    rax3 = fun_150b();
    esi4 = reinterpret_cast<uint32_t>(printf);
    if (ebp5 != printf && *reinterpret_cast<uint32_t*>(&rax3) != printf) {
        v6 = rax3;
        r8_7 = g1529;
        esi8 = *r8_7;
        ecx9 = ebp10;
        r14d11 = esi8 << *reinterpret_cast<unsigned char*>(&ecx9);
        *r8_7 = r14d11;
        rax12 = g153e;
        *reinterpret_cast<uint32_t*>(&r12_13) = *rax12 - ebp14;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_13) + 4) = reinterpret_cast<int32_t>(printf);
        *rax12 = *reinterpret_cast<uint32_t*>(&r12_13);
        if (*reinterpret_cast<int32_t*>(&r12_13) <= reinterpret_cast<int32_t>(24)) {
            v15 = esi8;
            v16 = r13d17;
            v18 = r15_19;
            rbx20 = g1561;
            rax21 = *rbx20;
            tmp64_22 = &g1570->f7fc;
            if (reinterpret_cast<uint64_t>(rax21) >= reinterpret_cast<uint64_t>(tmp64_22)) {
                rcx23 = g1744;
                v24 = *rcx23;
                rcx25 = g1753;
                v26 = *rcx25;
                r15_27 = g1765;
                r15_28 = &r15_27->f800;
                rbp29 = g176f;
                while (1) {
                    if (reinterpret_cast<uint64_t>(rax21) < reinterpret_cast<uint64_t>(r15_28)) {
                        addr_1786_8:
                        rdx30 = rax21 + 1;
                        *rbx20 = rdx30;
                        r14d11 = r14d11 | static_cast<uint32_t>(*rax21) << reinterpret_cast<unsigned char>(24 - *reinterpret_cast<signed char*>(&r12_13));
                        *r8_7 = r14d11;
                        ecx31 = static_cast<uint32_t>(r12_13 + 8);
                        rax21 = rdx30;
                        less32 = *reinterpret_cast<int32_t*>(&r12_13) < reinterpret_cast<int32_t>(17);
                        *reinterpret_cast<uint32_t*>(&r12_13) = ecx31;
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_13) + 4) = reinterpret_cast<int32_t>(printf);
                        if (!less32) 
                            break; else 
                            continue;
                    } else {
                        rsi33 = g17c9;
                        fun_17ce(rbp29, rsi33, 0x800);
                        if (v26 != printf) 
                            goto addr_17d5_11;
                    }
                    addr_1780_12:
                    rax21 = rbp29;
                    r8_7 = r8_7;
                    goto addr_1786_8;
                    addr_17d5_11:
                    rcx34 = v24 - 0x800;
                    rax35 = g17e8;
                    v24 = rcx34;
                    *rax35 = rcx34;
                    goto addr_1780_12;
                }
            } else {
                do {
                    rdx36 = rax21 + 1;
                    *rbx20 = rdx36;
                    r14d11 = r14d11 | static_cast<uint32_t>(*rax21) << reinterpret_cast<unsigned char>(24 - *reinterpret_cast<signed char*>(&r12_13));
                    *r8_7 = r14d11;
                    ecx31 = static_cast<uint32_t>(r12_13 + 8);
                    rax21 = rdx36;
                    less37 = *reinterpret_cast<int32_t*>(&r12_13) < reinterpret_cast<int32_t>(17);
                    *reinterpret_cast<uint32_t*>(&r12_13) = ecx31;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_13) + 4) = reinterpret_cast<int32_t>(printf);
                } while (less37);
            }
            rax38 = g15af;
            *rax38 = ecx31;
            r15_39 = v18;
            r13d40 = v16;
            rbp41 = v42;
            esi8 = v15;
        }
        ecx43 = *reinterpret_cast<uint32_t*>(&rbp41);
        esi4 = esi8 >> -*reinterpret_cast<signed char*>(&ecx43);
        r14_44 = v45;
        r12d46 = v47;
        rax3 = v6;
    }
    ecx48 = static_cast<uint32_t>(rbp41 + 31);
    if (*reinterpret_cast<int32_t*>(&rbp41) >= reinterpret_cast<int32_t>(printf)) {
        ecx48 = *reinterpret_cast<uint32_t*>(&rbp41);
    }
    ebp49 = *reinterpret_cast<uint32_t*>(&rbp41) - (ecx48 & 0xffffffe0);
    ecx50 = ebp49;
    edi51 = 16 << *reinterpret_cast<unsigned char*>(&ecx50);
    ecx52 = v53;
    edx54 = reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(r14_44->f4) >> static_cast<unsigned char>(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(r12d46 == printf))) >> *reinterpret_cast<signed char*>(&ecx52));
    sf55 = *reinterpret_cast<int32_t*>(&rax3) < reinterpret_cast<int32_t>(printf);
    if (reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(sf55 == printf)) | reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&rax3) == printf)) {
        if (!sf55 || (ecx56 = ebp49, *reinterpret_cast<uint32_t*>(&rax3) = ~*reinterpret_cast<uint32_t*>(&rax3) << *reinterpret_cast<unsigned char*>(&ecx56), edx54 = edx54 + ~(esi4 + *reinterpret_cast<uint32_t*>(&rax3)), reinterpret_cast<int32_t>(edx54) >= reinterpret_cast<int32_t>(-edi51))) {
            addr_163d_21:
            *reinterpret_cast<unsigned char*>(&rax3) = reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(r12d46 == printf));
            ecx57 = v58;
            ecx59 = *reinterpret_cast<uint32_t*>(&rax3);
            r14_44->f4 = edx54 << *reinterpret_cast<unsigned char*>(&ecx57) << *reinterpret_cast<unsigned char*>(&ecx59);
            if (r13d40 != printf) {
                eax60 = fun_165c();
                r15_39->f4 = eax60;
            }
        } else {
            eax61 = 32;
            goto addr_161a_25;
        }
    } else {
        ecx62 = ebp49;
        *reinterpret_cast<uint32_t*>(&rax3) = (*reinterpret_cast<uint32_t*>(&rax3) - 1 << *reinterpret_cast<unsigned char*>(&ecx62)) + esi4;
        edx54 = edx54 + *reinterpret_cast<uint32_t*>(&rax3) + 1;
        if (reinterpret_cast<int32_t>(edx54) < reinterpret_cast<int32_t>(edi51)) 
            goto addr_163d_21;
        eax61 = 0xffffffe0;
        goto addr_161a_25;
    }
    goto v63;
    addr_161a_25:
    ecx64 = ebp49;
    *reinterpret_cast<uint32_t*>(&rax3) = eax61 << *reinterpret_cast<unsigned char*>(&ecx64);
    edx54 = edx54 + *reinterpret_cast<uint32_t*>(&rax3);
    goto addr_163d_21;
}

struct s20 {
    signed char[4] pad4;
    int32_t f4;
};

int32_t fun_165c() {
    struct s20* r15_1;
    int32_t eax2;
    int64_t v3;

    r15_1->f4 = eax2;
    goto v3;
}

int64_t* g1733 = reinterpret_cast<int64_t*>(0x8894808244c8948);

int64_t g1714 = 0x247c8300000000e8;

int32_t* g1470 = reinterpret_cast<int32_t*>(0x4430247c8b4c0889);

struct s21 {
    int32_t f0;
    int32_t f4;
};

struct s22 {
    uint32_t f0;
    uint32_t f4;
};

void fun_1719(unsigned char* rdi, int64_t rsi, int64_t rdx) {
    int64_t v4;
    int32_t v5;
    int64_t rcx6;
    int64_t v7;
    int64_t* rax8;
    unsigned char* rax9;
    unsigned char* rbx10;
    unsigned char* rdx11;
    unsigned char** r15_12;
    uint32_t r14d13;
    int64_t r12_14;
    uint32_t* rbp15;
    int32_t ecx16;
    int1_t less17;
    unsigned char* r13_18;
    int64_t rsi19;
    unsigned char* rbx20;
    int32_t* rax21;
    struct s21* r15_22;
    struct s21* v23;
    int32_t r13d24;
    int64_t rbx25;
    int64_t v26;
    uint32_t ecx27;
    uint32_t esi28;
    struct s22* r14_29;
    struct s22* v30;
    int32_t r12d31;
    int32_t v32;
    int64_t rax33;
    int64_t v34;
    uint32_t ecx35;
    uint32_t ebx36;
    uint32_t ecx37;
    uint32_t edx38;
    unsigned char cl39;
    int32_t v40;
    uint32_t edi41;
    unsigned char v42;
    uint32_t edi43;
    int1_t sf44;
    uint32_t ecx45;
    uint32_t ecx46;
    uint32_t ecx47;
    int64_t rbp48;
    int64_t v49;
    uint32_t ecx50;
    int64_t v51;
    uint32_t ecx52;
    int32_t eax53;
    int64_t rax54;
    uint32_t esi55;
    int64_t v56;
    uint32_t* r8_57;
    uint32_t esi58;
    uint32_t ecx59;
    uint32_t r14d60;
    uint32_t* rax61;
    int64_t r12_62;
    uint32_t v63;
    int32_t v64;
    struct s21* v65;
    unsigned char** rbx66;
    unsigned char* rax67;
    unsigned char* tmp64_68;
    int64_t* rcx69;
    int64_t v70;
    int32_t* rcx71;
    int32_t v72;
    struct s18* r15_73;
    unsigned char* r15_74;
    unsigned char* rbp75;
    unsigned char* rdx76;
    uint32_t ecx77;
    int1_t less78;
    int64_t rsi79;
    int64_t rcx80;
    int64_t* rax81;
    unsigned char* rdx82;
    int1_t less83;
    uint32_t* rax84;
    int64_t v85;
    uint32_t ecx86;
    struct s22* v87;
    int32_t v88;
    uint32_t ecx89;
    uint32_t ebp90;
    uint32_t ecx91;
    uint32_t edi92;
    uint32_t ecx93;
    uint32_t edx94;
    int1_t sf95;
    uint32_t ecx96;
    uint32_t ecx97;
    uint32_t ecx98;
    int32_t eax99;
    uint32_t eax100;
    uint32_t ecx101;
    int64_t v102;
    uint32_t ecx103;

    while (1) {
        v4 = reinterpret_cast<int64_t>(__return_address());
        if (v5 != printf) {
            rcx6 = v7 - 0x800;
            rax8 = g1733;
            v7 = rcx6;
            *rax8 = rcx6;
        }
        rax9 = rbx10;
        do {
            rdx11 = rax9 + 1;
            *r15_12 = rdx11;
            r14d13 = r14d13 | static_cast<uint32_t>(*rax9) << reinterpret_cast<unsigned char>(24 - *reinterpret_cast<signed char*>(&r12_14));
            *rbp15 = r14d13;
            ecx16 = static_cast<int32_t>(r12_14 + 8);
            rax9 = rdx11;
            less17 = *reinterpret_cast<int32_t*>(&r12_14) < 17;
            *reinterpret_cast<int32_t*>(&r12_14) = ecx16;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_14) + 4) = reinterpret_cast<int32_t>(printf);
            if (!less17) 
                goto addr_1469_5;
        } while (reinterpret_cast<uint64_t>(rax9) < reinterpret_cast<uint64_t>(r13_18));
        rsi19 = g1714;
        fun_1719(rbx20, rsi19, 0x800);
    }
    addr_1469_5:
    rax21 = g1470;
    *rax21 = ecx16;
    r15_22 = v23;
    r13d24 = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&v4) + 4);
    rbx25 = v26;
    ecx27 = *reinterpret_cast<uint32_t*>(&rbx25);
    esi28 = *reinterpret_cast<uint32_t*>(&v4) >> -*reinterpret_cast<signed char*>(&ecx27);
    r14_29 = v30;
    r12d31 = v32;
    rax33 = v34;
    ecx35 = static_cast<uint32_t>(rbx25 + 31);
    if (*reinterpret_cast<int32_t*>(&rbx25) >= reinterpret_cast<int32_t>(printf)) {
        ecx35 = *reinterpret_cast<uint32_t*>(&rbx25);
    }
    ebx36 = *reinterpret_cast<uint32_t*>(&rbx25) - (ecx35 & 0xffffffe0);
    ecx37 = ebx36;
    edx38 = 16 << *reinterpret_cast<unsigned char*>(&ecx37);
    cl39 = reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(v40 == printf));
    edi41 = r14_29->f0;
    v42 = cl39;
    edi43 = reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(edi41) >> cl39);
    sf44 = *reinterpret_cast<int32_t*>(&rax33) < reinterpret_cast<int32_t>(printf);
    if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(sf44 == printf)) | reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&rax33) == printf))) {
        ecx45 = ebx36;
        edi43 = edi43 + ((*reinterpret_cast<int32_t*>(&rax33) - 1 << *reinterpret_cast<unsigned char*>(&ecx45)) + esi28) + 1;
        if (reinterpret_cast<int32_t>(edi43) >= reinterpret_cast<int32_t>(edx38)) {
            ecx46 = ebx36;
            edi43 = edi43 + (0xffffffe0 << *reinterpret_cast<unsigned char*>(&ecx46));
            goto addr_14ea_14;
        }
    }
    if (sf44) {
        ecx47 = ebx36;
        edi43 = edi43 + ~(esi28 + (reinterpret_cast<uint32_t>(~*reinterpret_cast<int32_t*>(&rax33)) << *reinterpret_cast<unsigned char*>(&ecx47)));
        rbp48 = v49;
        if (reinterpret_cast<int32_t>(edi43) < reinterpret_cast<int32_t>(-edx38)) {
            ecx50 = ebx36;
            edi43 = edi43 + (32 << *reinterpret_cast<unsigned char*>(&ecx50));
        }
    } else {
        addr_14ea_14:
        rbp48 = v51;
    }
    ecx52 = v42;
    r14_29->f0 = edi43 << *reinterpret_cast<unsigned char*>(&ecx52);
    if (r13d24 != printf) {
        eax53 = fun_1503();
        r15_22->f0 = eax53;
    }
    rax54 = fun_150b();
    esi55 = reinterpret_cast<uint32_t>(printf);
    if (*reinterpret_cast<uint32_t*>(&rbp48) != printf && *reinterpret_cast<uint32_t*>(&rax54) != printf) {
        v56 = rax54;
        r8_57 = g1529;
        esi58 = *r8_57;
        ecx59 = *reinterpret_cast<uint32_t*>(&rbp48);
        r14d60 = esi58 << *reinterpret_cast<unsigned char*>(&ecx59);
        *r8_57 = r14d60;
        rax61 = g153e;
        *reinterpret_cast<uint32_t*>(&r12_62) = *rax61 - *reinterpret_cast<uint32_t*>(&rbp48);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_62) + 4) = reinterpret_cast<int32_t>(printf);
        *rax61 = *reinterpret_cast<uint32_t*>(&r12_62);
        if (*reinterpret_cast<int32_t*>(&r12_62) <= reinterpret_cast<int32_t>(24)) {
            v63 = esi58;
            v64 = r13d24;
            v65 = r15_22;
            rbx66 = g1561;
            rax67 = *rbx66;
            tmp64_68 = &g1570->f7fc;
            if (reinterpret_cast<uint64_t>(rax67) >= reinterpret_cast<uint64_t>(tmp64_68)) {
                rcx69 = g1744;
                v70 = *rcx69;
                rcx71 = g1753;
                v72 = *rcx71;
                r15_73 = g1765;
                r15_74 = &r15_73->f800;
                rbp75 = g176f;
                while (1) {
                    if (reinterpret_cast<uint64_t>(rax67) < reinterpret_cast<uint64_t>(r15_74)) {
                        addr_1786_27:
                        rdx76 = rax67 + 1;
                        *rbx66 = rdx76;
                        r14d60 = r14d60 | static_cast<uint32_t>(*rax67) << reinterpret_cast<unsigned char>(24 - *reinterpret_cast<signed char*>(&r12_62));
                        *r8_57 = r14d60;
                        ecx77 = static_cast<uint32_t>(r12_62 + 8);
                        rax67 = rdx76;
                        less78 = *reinterpret_cast<int32_t*>(&r12_62) < reinterpret_cast<int32_t>(17);
                        *reinterpret_cast<uint32_t*>(&r12_62) = ecx77;
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_62) + 4) = reinterpret_cast<int32_t>(printf);
                        if (!less78) 
                            break; else 
                            continue;
                    } else {
                        rsi79 = g17c9;
                        fun_17ce(rbp75, rsi79, 0x800);
                        if (v72 != printf) 
                            goto addr_17d5_30;
                    }
                    addr_1780_31:
                    rax67 = rbp75;
                    r8_57 = r8_57;
                    goto addr_1786_27;
                    addr_17d5_30:
                    rcx80 = v70 - 0x800;
                    rax81 = g17e8;
                    v70 = rcx80;
                    *rax81 = rcx80;
                    goto addr_1780_31;
                }
            } else {
                do {
                    rdx82 = rax67 + 1;
                    *rbx66 = rdx82;
                    r14d60 = r14d60 | static_cast<uint32_t>(*rax67) << reinterpret_cast<unsigned char>(24 - *reinterpret_cast<signed char*>(&r12_62));
                    *r8_57 = r14d60;
                    ecx77 = static_cast<uint32_t>(r12_62 + 8);
                    rax67 = rdx82;
                    less83 = *reinterpret_cast<int32_t*>(&r12_62) < reinterpret_cast<int32_t>(17);
                    *reinterpret_cast<uint32_t*>(&r12_62) = ecx77;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_62) + 4) = reinterpret_cast<int32_t>(printf);
                } while (less83);
            }
            rax84 = g15af;
            *rax84 = ecx77;
            r15_22 = v65;
            r13d24 = v64;
            rbp48 = v85;
            esi58 = v63;
        }
        ecx86 = *reinterpret_cast<uint32_t*>(&rbp48);
        esi55 = esi58 >> -*reinterpret_cast<signed char*>(&ecx86);
        r14_29 = v87;
        r12d31 = v88;
        rax54 = v56;
    }
    ecx89 = static_cast<uint32_t>(rbp48 + 31);
    if (*reinterpret_cast<int32_t*>(&rbp48) >= reinterpret_cast<int32_t>(printf)) {
        ecx89 = *reinterpret_cast<uint32_t*>(&rbp48);
    }
    ebp90 = *reinterpret_cast<uint32_t*>(&rbp48) - (ecx89 & 0xffffffe0);
    ecx91 = ebp90;
    edi92 = 16 << *reinterpret_cast<unsigned char*>(&ecx91);
    ecx93 = v42;
    edx94 = reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(r14_29->f4) >> static_cast<unsigned char>(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(r12d31 == printf))) >> *reinterpret_cast<signed char*>(&ecx93));
    sf95 = *reinterpret_cast<int32_t*>(&rax54) < reinterpret_cast<int32_t>(printf);
    if (reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(sf95 == printf)) | reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&rax54) == printf)) {
        if (!sf95 || (ecx96 = ebp90, *reinterpret_cast<uint32_t*>(&rax54) = ~*reinterpret_cast<uint32_t*>(&rax54) << *reinterpret_cast<unsigned char*>(&ecx96), edx94 = edx94 + ~(esi55 + *reinterpret_cast<uint32_t*>(&rax54)), reinterpret_cast<int32_t>(edx94) >= reinterpret_cast<int32_t>(-edi92))) {
            addr_163d_40:
            *reinterpret_cast<unsigned char*>(&rax54) = reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(r12d31 == printf));
            ecx97 = v42;
            ecx98 = *reinterpret_cast<uint32_t*>(&rax54);
            r14_29->f4 = edx94 << *reinterpret_cast<unsigned char*>(&ecx97) << *reinterpret_cast<unsigned char*>(&ecx98);
            if (r13d24 != printf) {
                eax99 = fun_165c();
                r15_22->f4 = eax99;
            }
        } else {
            eax100 = 32;
            goto addr_161a_44;
        }
    } else {
        ecx101 = ebp90;
        *reinterpret_cast<uint32_t*>(&rax54) = (*reinterpret_cast<uint32_t*>(&rax54) - 1 << *reinterpret_cast<unsigned char*>(&ecx101)) + esi55;
        edx94 = edx94 + *reinterpret_cast<uint32_t*>(&rax54) + 1;
        if (reinterpret_cast<int32_t>(edx94) < reinterpret_cast<int32_t>(edi92)) 
            goto addr_163d_40;
        eax100 = 0xffffffe0;
        goto addr_161a_44;
    }
    goto v102;
    addr_161a_44:
    ecx103 = ebp90;
    *reinterpret_cast<uint32_t*>(&rax54) = eax100 << *reinterpret_cast<unsigned char*>(&ecx103);
    edx94 = edx94 + *reinterpret_cast<uint32_t*>(&rax54);
    goto addr_163d_40;
}

struct s23 {
    signed char[4] pad4;
    uint32_t f4;
};

struct s24 {
    signed char[4] pad4;
    int32_t f4;
};

void fun_17ce(unsigned char* rdi, int64_t rsi, int64_t rdx) {
    int64_t v4;
    int32_t v5;
    int64_t rcx6;
    int64_t v7;
    int64_t* rax8;
    unsigned char* rax9;
    unsigned char* rbp10;
    uint32_t* r8_11;
    unsigned char* rdx12;
    unsigned char** rbx13;
    uint32_t r14d14;
    int64_t r12_15;
    uint32_t ecx16;
    int1_t less17;
    unsigned char* r15_18;
    int64_t rsi19;
    unsigned char* rbp20;
    uint32_t* rax21;
    int64_t rbp22;
    int64_t v23;
    uint32_t ecx24;
    uint32_t esi25;
    int64_t rax26;
    int64_t v27;
    uint32_t ecx28;
    uint32_t ebp29;
    uint32_t ecx30;
    uint32_t edi31;
    uint32_t ecx32;
    unsigned char v33;
    uint32_t edx34;
    struct s23* v35;
    int32_t v36;
    int1_t sf37;
    uint32_t ecx38;
    uint32_t ecx39;
    unsigned char v40;
    uint32_t ecx41;
    int32_t eax42;
    struct s24* v43;
    uint32_t eax44;
    uint32_t ecx45;
    int64_t v46;
    uint32_t ecx47;

    while (1) {
        v4 = reinterpret_cast<int64_t>(__return_address());
        if (v5 != printf) {
            rcx6 = v7 - 0x800;
            rax8 = g17e8;
            v7 = rcx6;
            *rax8 = rcx6;
        }
        rax9 = rbp10;
        r8_11 = r8_11;
        do {
            rdx12 = rax9 + 1;
            *rbx13 = rdx12;
            r14d14 = r14d14 | static_cast<uint32_t>(*rax9) << reinterpret_cast<unsigned char>(24 - *reinterpret_cast<signed char*>(&r12_15));
            *r8_11 = r14d14;
            ecx16 = static_cast<uint32_t>(r12_15 + 8);
            rax9 = rdx12;
            less17 = *reinterpret_cast<int32_t*>(&r12_15) < reinterpret_cast<int32_t>(17);
            *reinterpret_cast<uint32_t*>(&r12_15) = ecx16;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_15) + 4) = reinterpret_cast<int32_t>(printf);
            if (!less17) 
                goto addr_15a8_5;
        } while (reinterpret_cast<uint64_t>(rax9) < reinterpret_cast<uint64_t>(r15_18));
        rsi19 = g17c9;
        fun_17ce(rbp20, rsi19, 0x800);
    }
    addr_15a8_5:
    rax21 = g15af;
    *rax21 = ecx16;
    rbp22 = v23;
    ecx24 = *reinterpret_cast<uint32_t*>(&rbp22);
    esi25 = *reinterpret_cast<uint32_t*>(&v4) >> -*reinterpret_cast<signed char*>(&ecx24);
    rax26 = v27;
    ecx28 = static_cast<uint32_t>(rbp22 + 31);
    if (*reinterpret_cast<int32_t*>(&rbp22) >= reinterpret_cast<int32_t>(printf)) {
        ecx28 = *reinterpret_cast<uint32_t*>(&rbp22);
    }
    ebp29 = *reinterpret_cast<uint32_t*>(&rbp22) - (ecx28 & 0xffffffe0);
    ecx30 = ebp29;
    edi31 = 16 << *reinterpret_cast<unsigned char*>(&ecx30);
    ecx32 = v33;
    edx34 = reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(v35->f4) >> static_cast<unsigned char>(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(v36 == printf))) >> *reinterpret_cast<signed char*>(&ecx32));
    sf37 = *reinterpret_cast<int32_t*>(&rax26) < reinterpret_cast<int32_t>(printf);
    if (reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(sf37 == printf)) | reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&rax26) == printf)) {
        if (!sf37 || (ecx38 = ebp29, *reinterpret_cast<uint32_t*>(&rax26) = ~*reinterpret_cast<uint32_t*>(&rax26) << *reinterpret_cast<unsigned char*>(&ecx38), edx34 = edx34 + ~(esi25 + *reinterpret_cast<uint32_t*>(&rax26)), reinterpret_cast<int32_t>(edx34) >= reinterpret_cast<int32_t>(-edi31))) {
            addr_163d_13:
            *reinterpret_cast<unsigned char*>(&rax26) = reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(v36 == printf));
            ecx39 = v40;
            ecx41 = *reinterpret_cast<uint32_t*>(&rax26);
            v35->f4 = edx34 << *reinterpret_cast<unsigned char*>(&ecx39) << *reinterpret_cast<unsigned char*>(&ecx41);
            if (*reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&v4) + 4) != printf) {
                eax42 = fun_165c();
                v43->f4 = eax42;
            }
        } else {
            eax44 = 32;
            goto addr_161a_17;
        }
    } else {
        ecx45 = ebp29;
        *reinterpret_cast<uint32_t*>(&rax26) = (*reinterpret_cast<uint32_t*>(&rax26) - 1 << *reinterpret_cast<unsigned char*>(&ecx45)) + esi25;
        edx34 = edx34 + *reinterpret_cast<uint32_t*>(&rax26) + 1;
        if (reinterpret_cast<int32_t>(edx34) < reinterpret_cast<int32_t>(edi31)) 
            goto addr_163d_13;
        eax44 = 0xffffffe0;
        goto addr_161a_17;
    }
    goto v46;
    addr_161a_17:
    ecx47 = ebp29;
    *reinterpret_cast<uint32_t*>(&rax26) = eax44 << *reinterpret_cast<unsigned char*>(&ecx47);
    edx34 = edx34 + *reinterpret_cast<uint32_t*>(&rax26);
    goto addr_163d_13;
}

int32_t* g18e4 = reinterpret_cast<int32_t*>(0x8b480000000000c7);

int32_t* g18f1 = reinterpret_cast<int32_t*>(0x8b480000000000c7);

int64_t g1916 = 0x4800000800838d48;

int64_t* g1924 = reinterpret_cast<int64_t*>(0x358b48018948);

int64_t g192e = 0xdf894800000800ba;

void fun_193b(int64_t rdi, int64_t rsi, int64_t rdx);

int64_t* g1946 = reinterpret_cast<int64_t*>(0x58b48188948);

int32_t* g1950 = reinterpret_cast<int32_t*>(0x8b4808f0f06000c7);

int32_t* g195d = reinterpret_cast<int32_t*>(0x4c70000001f00c7);

void fun_198c(void* rdi, void* rsi, int64_t rdx, int64_t rcx);

int32_t fun_19aa();

void fun_19be(int32_t* rdi, int32_t* rsi, int64_t rdx, int64_t rcx);

void fun_1a3e(int64_t rdi, int64_t rsi, int64_t rdx);

void fun_18b8(int32_t* rdi, int32_t* rsi) {
    int32_t* rax3;
    int32_t* rax4;
    int64_t rbx5;
    int64_t* rcx6;
    int64_t rsi7;
    void* rsp8;
    int64_t* rax9;
    int32_t* rax10;
    int32_t* rax11;
    int32_t* rdi12;
    int32_t* rsi13;
    int32_t eax14;
    int64_t v15;

    __asm__("cvtsi2sd xmm0, qword [rsp+0x10]");
    __asm__("cvtsi2sd xmm1, dword [rsp+0x18]");
    __asm__("mulsd xmm1, [rip+0x0]");
    __asm__("addsd xmm1, xmm0");
    *rdi = *rsi;
    rax3 = g18e4;
    *rax3 = reinterpret_cast<int32_t>(printf);
    rax4 = g18f1;
    *rax4 = reinterpret_cast<int32_t>(printf);
    __asm__("movaps xmm0, [rax]");
    __asm__("movaps xmm1, [rax+0x10]");
    __asm__("movaps [rsp+0x10], xmm0");
    __asm__("movaps [rsp+0x20], xmm1");
    rbx5 = g1916;
    rcx6 = g1924;
    *rcx6 = rbx5 + 0x800;
    rsi7 = g192e;
    fun_193b(rbx5, rsi7, 0x800);
    rsp8 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 + 8);
    rax9 = g1946;
    *rax9 = rbx5 + 4;
    rax10 = g1950;
    *rax10 = 0x8f0f060;
    rax11 = g195d;
    *rax11 = 31;
    fun_198c(reinterpret_cast<int64_t>(rsp8) + 16, reinterpret_cast<int64_t>(rsp8) + 88, 0xc8, 0xc8);
    __asm__("movaps xmm0, [rsp+0x10]");
    __asm__("movaps [rsp+0x40], xmm0");
    rdi12 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp8) - 8 + 8 + 48);
    *reinterpret_cast<int32_t*>(&rsi13) = reinterpret_cast<int32_t>(printf);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi13) + 4) = reinterpret_cast<int32_t>(printf);
    eax14 = fun_19aa();
    if (eax14 != printf) {
        rdi12 = reinterpret_cast<int32_t*>(0x19b5);
        *reinterpret_cast<int32_t*>(&rsi13) = eax14;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi13) + 4) = reinterpret_cast<int32_t>(printf);
        fun_19be(0x19b5, rsi13, 0xc8, 0xc8);
    }
    __asm__("movdqa xmm1, [rsp+0x40]");
    __asm__("pcmpeqd xmm1, [rip+0x0]");
    __asm__("pandn xmm1, [rip+0x0]");
    __asm__("pshufd xmm0, xmm1, 0xee");
    __asm__("paddd xmm0, xmm1");
    __asm__("pshufd xmm1, xmm0, 0x55");
    __asm__("paddd xmm1, xmm0");
    __asm__("movd ebx, xmm1");
    __asm__("xorps xmm1, xmm1");
    __asm__("cvtsi2sd xmm1, qword [rsp+0x30]");
    __asm__("xorps xmm0, xmm0");
    __asm__("cvtsi2sd xmm0, dword [rsp+0x38]");
    __asm__("mulsd xmm0, [rip+0x0]");
    __asm__("addsd xmm0, xmm1");
    *rdi12 = *rsi13;
    __asm__("subsd xmm0, [r14]");
    fun_1a3e(0x1a37, rsi13 + 1, 0xc8);
    goto v15;
}

void fun_193b(int64_t rdi, int64_t rsi, int64_t rdx) {
    int64_t* rax4;
    int64_t rbx5;
    int32_t* rax6;
    int32_t* rax7;
    int32_t* rdi8;
    int32_t* rsi9;
    int32_t eax10;
    int64_t v11;

    rax4 = g1946;
    *rax4 = rbx5 + 4;
    rax6 = g1950;
    *rax6 = 0x8f0f060;
    rax7 = g195d;
    *rax7 = 31;
    fun_198c(reinterpret_cast<int64_t>(__zero_stack_offset()) + 16, reinterpret_cast<int64_t>(__zero_stack_offset()) + 88, 0xc8, 0xc8);
    __asm__("movaps xmm0, [rsp+0x10]");
    __asm__("movaps [rsp+0x40], xmm0");
    rdi8 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 + 8 + 48);
    *reinterpret_cast<int32_t*>(&rsi9) = reinterpret_cast<int32_t>(printf);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi9) + 4) = reinterpret_cast<int32_t>(printf);
    eax10 = fun_19aa();
    if (eax10 != printf) {
        rdi8 = reinterpret_cast<int32_t*>(0x19b5);
        *reinterpret_cast<int32_t*>(&rsi9) = eax10;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi9) + 4) = reinterpret_cast<int32_t>(printf);
        fun_19be(0x19b5, rsi9, 0xc8, 0xc8);
    }
    __asm__("movdqa xmm1, [rsp+0x40]");
    __asm__("pcmpeqd xmm1, [rip+0x0]");
    __asm__("pandn xmm1, [rip+0x0]");
    __asm__("pshufd xmm0, xmm1, 0xee");
    __asm__("paddd xmm0, xmm1");
    __asm__("pshufd xmm1, xmm0, 0x55");
    __asm__("paddd xmm1, xmm0");
    __asm__("movd ebx, xmm1");
    __asm__("xorps xmm1, xmm1");
    __asm__("cvtsi2sd xmm1, qword [rsp+0x30]");
    __asm__("xorps xmm0, xmm0");
    __asm__("cvtsi2sd xmm0, dword [rsp+0x38]");
    __asm__("mulsd xmm0, [rip+0x0]");
    __asm__("addsd xmm0, xmm1");
    *rdi8 = *rsi9;
    __asm__("subsd xmm0, [r14]");
    fun_1a3e(0x1a37, rsi9 + 1, 0xc8);
    goto v11;
}

void fun_19be(int32_t* rdi, int32_t* rsi, int64_t rdx, int64_t rcx) {
    int64_t v5;

    __asm__("movdqa xmm1, [rsp+0x40]");
    __asm__("pcmpeqd xmm1, [rip+0x0]");
    __asm__("pandn xmm1, [rip+0x0]");
    __asm__("pshufd xmm0, xmm1, 0xee");
    __asm__("paddd xmm0, xmm1");
    __asm__("pshufd xmm1, xmm0, 0x55");
    __asm__("paddd xmm1, xmm0");
    __asm__("movd ebx, xmm1");
    __asm__("xorps xmm1, xmm1");
    __asm__("cvtsi2sd xmm1, qword [rsp+0x30]");
    __asm__("xorps xmm0, xmm0");
    __asm__("cvtsi2sd xmm0, dword [rsp+0x38]");
    __asm__("mulsd xmm0, [rip+0x0]");
    __asm__("addsd xmm0, xmm1");
    *rdi = *rsi;
    __asm__("subsd xmm0, [r14]");
    fun_1a3e(0x1a37, rsi + 1, rdx);
    goto v5;
}

void fun_1a3e(int64_t rdi, int64_t rsi, int64_t rdx) {
    int64_t v4;

    goto v4;
}

void fun_118e() {
    void* r13_1;
    int64_t rbx2;
    int64_t* r13_3;
    int64_t rbx4;
    int64_t v5;

    *reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(r13_1) + rbx2 * 8 + 16) = r13_3[rbx4];
    goto v5;
}

struct s25 {
    uint32_t f0;
    uint32_t f4;
};

uint32_t* g13de = reinterpret_cast<uint32_t*>(0xd989f6894100758b);

int32_t* g13f4 = reinterpret_cast<int32_t*>(0x28245c8948208b44);

struct s26 {
    int32_t f0;
    int32_t f4;
};

unsigned char** g141c = reinterpret_cast<unsigned char**>(0x7fcb9078b49);

struct s27 {
    signed char[2044] pad2044;
    unsigned char f7fc;
};

struct s27* g142b = reinterpret_cast<struct s27*>(0x266830fc83948);

int64_t* g16a1 = reinterpret_cast<int64_t*>(0x8244c8948098b48);

int32_t* g16b0 = reinterpret_cast<int32_t*>(0xb920244c89098b);

struct s28 {
    signed char[2048] pad2048;
    unsigned char f800;
};

struct s28* g16c2 = reinterpret_cast<struct s28*>(0x1d8b48cd0149);

unsigned char* g16cc = reinterpret_cast<unsigned char*>(0x48d88948906632eb);

void fun_13b6() {
    uint32_t esi1;
    struct s25* v2;
    struct s25* r14_3;
    int32_t v4;
    int32_t r12d5;
    int32_t ebx6;
    int32_t eax7;
    int64_t v8;
    int64_t rax9;
    uint32_t* rbp10;
    uint32_t esi11;
    int32_t ecx12;
    int32_t ebx13;
    uint32_t r14d14;
    int32_t* rax15;
    int32_t r12d16;
    int64_t v17;
    int64_t rbx18;
    int64_t r12_19;
    int32_t ebx20;
    uint32_t v21;
    int32_t v22;
    int32_t r13d23;
    struct s26* v24;
    struct s26* r15_25;
    unsigned char** r15_26;
    unsigned char* rax27;
    unsigned char* tmp64_28;
    int64_t* rcx29;
    int64_t v30;
    int32_t* rcx31;
    int32_t v32;
    struct s28* r13_33;
    unsigned char* r13_34;
    unsigned char* rbx35;
    unsigned char* rdx36;
    int32_t ecx37;
    int1_t less38;
    int64_t rsi39;
    int64_t rcx40;
    int64_t* rax41;
    unsigned char* rdx42;
    int1_t less43;
    int32_t* rax44;
    struct s26* r15_45;
    int32_t r13d46;
    int64_t rbx47;
    uint32_t ecx48;
    struct s25* r14_49;
    int32_t r12d50;
    int64_t rax51;
    uint32_t ecx52;
    uint32_t ebx53;
    uint32_t ecx54;
    uint32_t edx55;
    unsigned char cl56;
    int32_t v57;
    uint32_t edi58;
    unsigned char v59;
    uint32_t edi60;
    int1_t sf61;
    uint32_t ecx62;
    uint32_t ecx63;
    uint32_t ecx64;
    int64_t rbp65;
    int64_t v66;
    uint32_t ecx67;
    int64_t v68;
    uint32_t ecx69;
    int32_t eax70;
    int64_t rax71;
    uint32_t esi72;
    int64_t v73;
    uint32_t* r8_74;
    uint32_t esi75;
    uint32_t ecx76;
    uint32_t r14d77;
    uint32_t* rax78;
    int64_t r12_79;
    uint32_t v80;
    int32_t v81;
    struct s26* v82;
    unsigned char** rbx83;
    unsigned char* rax84;
    unsigned char* tmp64_85;
    int64_t* rcx86;
    int64_t v87;
    int32_t* rcx88;
    int32_t v89;
    struct s18* r15_90;
    unsigned char* r15_91;
    unsigned char* rbp92;
    unsigned char* rdx93;
    uint32_t ecx94;
    int1_t less95;
    int64_t rsi96;
    int64_t rcx97;
    int64_t* rax98;
    unsigned char* rdx99;
    int1_t less100;
    uint32_t* rax101;
    int64_t v102;
    uint32_t ecx103;
    uint32_t ecx104;
    uint32_t ebp105;
    uint32_t ecx106;
    uint32_t edi107;
    uint32_t ecx108;
    uint32_t edx109;
    int1_t sf110;
    uint32_t ecx111;
    uint32_t ecx112;
    uint32_t ecx113;
    int32_t eax114;
    uint32_t eax115;
    uint32_t ecx116;
    int64_t v117;
    uint32_t ecx118;

    esi1 = reinterpret_cast<uint32_t>(printf);
    v2 = r14_3;
    v4 = r12d5;
    if (ebx6 != printf && eax7 != printf) {
        v8 = rax9;
        rbp10 = g13de;
        esi11 = *rbp10;
        ecx12 = ebx13;
        r14d14 = esi11 << *reinterpret_cast<unsigned char*>(&ecx12);
        *rbp10 = r14d14;
        rax15 = g13f4;
        r12d16 = *rax15;
        v17 = rbx18;
        *reinterpret_cast<int32_t*>(&r12_19) = r12d16 - ebx20;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_19) + 4) = reinterpret_cast<int32_t>(printf);
        *rax15 = *reinterpret_cast<int32_t*>(&r12_19);
        if (*reinterpret_cast<int32_t*>(&r12_19) <= 24) {
            v21 = esi11;
            v22 = r13d23;
            v24 = r15_25;
            r15_26 = g141c;
            rax27 = *r15_26;
            tmp64_28 = &g142b->f7fc;
            if (reinterpret_cast<uint64_t>(rax27) >= reinterpret_cast<uint64_t>(tmp64_28)) {
                rcx29 = g16a1;
                v30 = *rcx29;
                rcx31 = g16b0;
                v32 = *rcx31;
                r13_33 = g16c2;
                r13_34 = &r13_33->f800;
                rbx35 = g16cc;
                while (1) {
                    if (reinterpret_cast<uint64_t>(rax27) < reinterpret_cast<uint64_t>(r13_34)) {
                        addr_16d3_6:
                        rdx36 = rax27 + 1;
                        *r15_26 = rdx36;
                        r14d14 = r14d14 | static_cast<uint32_t>(*rax27) << reinterpret_cast<unsigned char>(24 - *reinterpret_cast<signed char*>(&r12_19));
                        *rbp10 = r14d14;
                        ecx37 = static_cast<int32_t>(r12_19 + 8);
                        rax27 = rdx36;
                        less38 = *reinterpret_cast<int32_t*>(&r12_19) < 17;
                        *reinterpret_cast<int32_t*>(&r12_19) = ecx37;
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_19) + 4) = reinterpret_cast<int32_t>(printf);
                        if (!less38) 
                            break; else 
                            continue;
                    } else {
                        rsi39 = g1714;
                        fun_1719(rbx35, rsi39, 0x800);
                        if (v32 != printf) 
                            goto addr_1720_9;
                    }
                    addr_16d0_10:
                    rax27 = rbx35;
                    goto addr_16d3_6;
                    addr_1720_9:
                    rcx40 = v30 - 0x800;
                    rax41 = g1733;
                    v30 = rcx40;
                    *rax41 = rcx40;
                    goto addr_16d0_10;
                }
            } else {
                do {
                    rdx42 = rax27 + 1;
                    *r15_26 = rdx42;
                    r14d14 = r14d14 | static_cast<uint32_t>(*rax27) << reinterpret_cast<unsigned char>(24 - *reinterpret_cast<signed char*>(&r12_19));
                    *rbp10 = r14d14;
                    ecx37 = static_cast<int32_t>(r12_19 + 8);
                    rax27 = rdx42;
                    less43 = *reinterpret_cast<int32_t*>(&r12_19) < 17;
                    *reinterpret_cast<int32_t*>(&r12_19) = ecx37;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_19) + 4) = reinterpret_cast<int32_t>(printf);
                } while (less43);
            }
            rax44 = g1470;
            *rax44 = ecx37;
            r15_45 = v24;
            r13d46 = v22;
            esi11 = v21;
        }
        rbx47 = v17;
        ecx48 = *reinterpret_cast<uint32_t*>(&rbx47);
        esi1 = esi11 >> -*reinterpret_cast<signed char*>(&ecx48);
        r14_49 = v2;
        r12d50 = v4;
        rax51 = v8;
    }
    ecx52 = static_cast<uint32_t>(rbx47 + 31);
    if (*reinterpret_cast<int32_t*>(&rbx47) >= reinterpret_cast<int32_t>(printf)) {
        ecx52 = *reinterpret_cast<uint32_t*>(&rbx47);
    }
    ebx53 = *reinterpret_cast<uint32_t*>(&rbx47) - (ecx52 & 0xffffffe0);
    ecx54 = ebx53;
    edx55 = 16 << *reinterpret_cast<unsigned char*>(&ecx54);
    cl56 = reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(v57 == printf));
    edi58 = r14_49->f0;
    v59 = cl56;
    edi60 = reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(edi58) >> cl56);
    sf61 = *reinterpret_cast<int32_t*>(&rax51) < reinterpret_cast<int32_t>(printf);
    if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(sf61 == printf)) | reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&rax51) == printf))) {
        ecx62 = ebx53;
        edi60 = edi60 + ((*reinterpret_cast<int32_t*>(&rax51) - 1 << *reinterpret_cast<unsigned char*>(&ecx62)) + esi1) + 1;
        if (reinterpret_cast<int32_t>(edi60) >= reinterpret_cast<int32_t>(edx55)) {
            ecx63 = ebx53;
            edi60 = edi60 + (0xffffffe0 << *reinterpret_cast<unsigned char*>(&ecx63));
            goto addr_14ea_20;
        }
    }
    if (sf61) {
        ecx64 = ebx53;
        edi60 = edi60 + ~(esi1 + (reinterpret_cast<uint32_t>(~*reinterpret_cast<int32_t*>(&rax51)) << *reinterpret_cast<unsigned char*>(&ecx64)));
        rbp65 = v66;
        if (reinterpret_cast<int32_t>(edi60) < reinterpret_cast<int32_t>(-edx55)) {
            ecx67 = ebx53;
            edi60 = edi60 + (32 << *reinterpret_cast<unsigned char*>(&ecx67));
        }
    } else {
        addr_14ea_20:
        rbp65 = v68;
    }
    ecx69 = v59;
    r14_49->f0 = edi60 << *reinterpret_cast<unsigned char*>(&ecx69);
    if (r13d46 != printf) {
        eax70 = fun_1503();
        r15_45->f0 = eax70;
    }
    rax71 = fun_150b();
    esi72 = reinterpret_cast<uint32_t>(printf);
    if (*reinterpret_cast<uint32_t*>(&rbp65) != printf && *reinterpret_cast<uint32_t*>(&rax71) != printf) {
        v73 = rax71;
        r8_74 = g1529;
        esi75 = *r8_74;
        ecx76 = *reinterpret_cast<uint32_t*>(&rbp65);
        r14d77 = esi75 << *reinterpret_cast<unsigned char*>(&ecx76);
        *r8_74 = r14d77;
        rax78 = g153e;
        *reinterpret_cast<uint32_t*>(&r12_79) = *rax78 - *reinterpret_cast<uint32_t*>(&rbp65);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_79) + 4) = reinterpret_cast<int32_t>(printf);
        *rax78 = *reinterpret_cast<uint32_t*>(&r12_79);
        if (*reinterpret_cast<int32_t*>(&r12_79) <= reinterpret_cast<int32_t>(24)) {
            v80 = esi75;
            v81 = r13d46;
            v82 = r15_45;
            rbx83 = g1561;
            rax84 = *rbx83;
            tmp64_85 = &g1570->f7fc;
            if (reinterpret_cast<uint64_t>(rax84) >= reinterpret_cast<uint64_t>(tmp64_85)) {
                rcx86 = g1744;
                v87 = *rcx86;
                rcx88 = g1753;
                v89 = *rcx88;
                r15_90 = g1765;
                r15_91 = &r15_90->f800;
                rbp92 = g176f;
                while (1) {
                    if (reinterpret_cast<uint64_t>(rax84) < reinterpret_cast<uint64_t>(r15_91)) {
                        addr_1786_33:
                        rdx93 = rax84 + 1;
                        *rbx83 = rdx93;
                        r14d77 = r14d77 | static_cast<uint32_t>(*rax84) << reinterpret_cast<unsigned char>(24 - *reinterpret_cast<signed char*>(&r12_79));
                        *r8_74 = r14d77;
                        ecx94 = static_cast<uint32_t>(r12_79 + 8);
                        rax84 = rdx93;
                        less95 = *reinterpret_cast<int32_t*>(&r12_79) < reinterpret_cast<int32_t>(17);
                        *reinterpret_cast<uint32_t*>(&r12_79) = ecx94;
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_79) + 4) = reinterpret_cast<int32_t>(printf);
                        if (!less95) 
                            break; else 
                            continue;
                    } else {
                        rsi96 = g17c9;
                        fun_17ce(rbp92, rsi96, 0x800);
                        if (v89 != printf) 
                            goto addr_17d5_36;
                    }
                    addr_1780_37:
                    rax84 = rbp92;
                    r8_74 = r8_74;
                    goto addr_1786_33;
                    addr_17d5_36:
                    rcx97 = v87 - 0x800;
                    rax98 = g17e8;
                    v87 = rcx97;
                    *rax98 = rcx97;
                    goto addr_1780_37;
                }
            } else {
                do {
                    rdx99 = rax84 + 1;
                    *rbx83 = rdx99;
                    r14d77 = r14d77 | static_cast<uint32_t>(*rax84) << reinterpret_cast<unsigned char>(24 - *reinterpret_cast<signed char*>(&r12_79));
                    *r8_74 = r14d77;
                    ecx94 = static_cast<uint32_t>(r12_79 + 8);
                    rax84 = rdx99;
                    less100 = *reinterpret_cast<int32_t*>(&r12_79) < reinterpret_cast<int32_t>(17);
                    *reinterpret_cast<uint32_t*>(&r12_79) = ecx94;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_79) + 4) = reinterpret_cast<int32_t>(printf);
                } while (less100);
            }
            rax101 = g15af;
            *rax101 = ecx94;
            r15_45 = v82;
            r13d46 = v81;
            rbp65 = v102;
            esi75 = v80;
        }
        ecx103 = *reinterpret_cast<uint32_t*>(&rbp65);
        esi72 = esi75 >> -*reinterpret_cast<signed char*>(&ecx103);
        r14_49 = v2;
        r12d50 = v4;
        rax71 = v73;
    }
    ecx104 = static_cast<uint32_t>(rbp65 + 31);
    if (*reinterpret_cast<int32_t*>(&rbp65) >= reinterpret_cast<int32_t>(printf)) {
        ecx104 = *reinterpret_cast<uint32_t*>(&rbp65);
    }
    ebp105 = *reinterpret_cast<uint32_t*>(&rbp65) - (ecx104 & 0xffffffe0);
    ecx106 = ebp105;
    edi107 = 16 << *reinterpret_cast<unsigned char*>(&ecx106);
    ecx108 = v59;
    edx109 = reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(r14_49->f4) >> static_cast<unsigned char>(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(r12d50 == printf))) >> *reinterpret_cast<signed char*>(&ecx108));
    sf110 = *reinterpret_cast<int32_t*>(&rax71) < reinterpret_cast<int32_t>(printf);
    if (reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(sf110 == printf)) | reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&rax71) == printf)) {
        if (!sf110 || (ecx111 = ebp105, *reinterpret_cast<uint32_t*>(&rax71) = ~*reinterpret_cast<uint32_t*>(&rax71) << *reinterpret_cast<unsigned char*>(&ecx111), edx109 = edx109 + ~(esi72 + *reinterpret_cast<uint32_t*>(&rax71)), reinterpret_cast<int32_t>(edx109) >= reinterpret_cast<int32_t>(-edi107))) {
            addr_163d_46:
            *reinterpret_cast<unsigned char*>(&rax71) = reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(r12d50 == printf));
            ecx112 = v59;
            ecx113 = *reinterpret_cast<uint32_t*>(&rax71);
            r14_49->f4 = edx109 << *reinterpret_cast<unsigned char*>(&ecx112) << *reinterpret_cast<unsigned char*>(&ecx113);
            if (r13d46 != printf) {
                eax114 = fun_165c();
                r15_45->f4 = eax114;
            }
        } else {
            eax115 = 32;
            goto addr_161a_50;
        }
    } else {
        ecx116 = ebp105;
        *reinterpret_cast<uint32_t*>(&rax71) = (*reinterpret_cast<uint32_t*>(&rax71) - 1 << *reinterpret_cast<unsigned char*>(&ecx116)) + esi72;
        edx109 = edx109 + *reinterpret_cast<uint32_t*>(&rax71) + 1;
        if (reinterpret_cast<int32_t>(edx109) < reinterpret_cast<int32_t>(edi107)) 
            goto addr_163d_46;
        eax115 = 0xffffffe0;
        goto addr_161a_50;
    }
    goto v117;
    addr_161a_50:
    ecx118 = ebp105;
    *reinterpret_cast<uint32_t*>(&rax71) = eax115 << *reinterpret_cast<unsigned char*>(&ecx118);
    edx109 = edx109 + *reinterpret_cast<uint32_t*>(&rax71);
    goto addr_163d_46;
}

struct s29 {
    signed char[4] pad4;
    int32_t f4;
};

struct s30 {
    signed char[4] pad4;
    uint32_t f4;
};

int64_t fun_150b() {
    uint32_t esi1;
    int32_t ebp2;
    int32_t eax3;
    int64_t v4;
    int64_t rax5;
    uint32_t* r8_6;
    uint32_t esi7;
    int32_t ecx8;
    int32_t ebp9;
    uint32_t r14d10;
    uint32_t* rax11;
    int64_t r12_12;
    uint32_t ebp13;
    uint32_t v14;
    int32_t v15;
    int32_t r13d16;
    struct s29* v17;
    struct s29* r15_18;
    unsigned char** rbx19;
    unsigned char* rax20;
    unsigned char* tmp64_21;
    int64_t* rcx22;
    int64_t v23;
    int32_t* rcx24;
    int32_t v25;
    struct s18* r15_26;
    unsigned char* r15_27;
    unsigned char* rbp28;
    unsigned char* rdx29;
    uint32_t ecx30;
    int1_t less31;
    int64_t rsi32;
    int64_t rcx33;
    int64_t* rax34;
    unsigned char* rdx35;
    int1_t less36;
    uint32_t* rax37;
    struct s29* r15_38;
    int32_t r13d39;
    int64_t rbp40;
    int64_t v41;
    uint32_t ecx42;
    struct s30* r14_43;
    struct s30* v44;
    int32_t r12d45;
    int32_t v46;
    int64_t rax47;
    uint32_t ecx48;
    uint32_t ebp49;
    uint32_t ecx50;
    uint32_t edi51;
    uint32_t ecx52;
    unsigned char v53;
    uint32_t edx54;
    int1_t sf55;
    uint32_t ecx56;
    uint32_t ecx57;
    unsigned char v58;
    uint32_t ecx59;
    int32_t eax60;
    uint32_t eax61;
    uint32_t ecx62;
    int64_t v63;
    uint32_t ecx64;

    esi1 = reinterpret_cast<uint32_t>(printf);
    if (ebp2 != printf && eax3 != printf) {
        v4 = rax5;
        r8_6 = g1529;
        esi7 = *r8_6;
        ecx8 = ebp9;
        r14d10 = esi7 << *reinterpret_cast<unsigned char*>(&ecx8);
        *r8_6 = r14d10;
        rax11 = g153e;
        *reinterpret_cast<uint32_t*>(&r12_12) = *rax11 - ebp13;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_12) + 4) = reinterpret_cast<int32_t>(printf);
        *rax11 = *reinterpret_cast<uint32_t*>(&r12_12);
        if (*reinterpret_cast<int32_t*>(&r12_12) <= reinterpret_cast<int32_t>(24)) {
            v14 = esi7;
            v15 = r13d16;
            v17 = r15_18;
            rbx19 = g1561;
            rax20 = *rbx19;
            tmp64_21 = &g1570->f7fc;
            if (reinterpret_cast<uint64_t>(rax20) >= reinterpret_cast<uint64_t>(tmp64_21)) {
                rcx22 = g1744;
                v23 = *rcx22;
                rcx24 = g1753;
                v25 = *rcx24;
                r15_26 = g1765;
                r15_27 = &r15_26->f800;
                rbp28 = g176f;
                while (1) {
                    if (reinterpret_cast<uint64_t>(rax20) < reinterpret_cast<uint64_t>(r15_27)) {
                        addr_1786_6:
                        rdx29 = rax20 + 1;
                        *rbx19 = rdx29;
                        r14d10 = r14d10 | static_cast<uint32_t>(*rax20) << reinterpret_cast<unsigned char>(24 - *reinterpret_cast<signed char*>(&r12_12));
                        *r8_6 = r14d10;
                        ecx30 = static_cast<uint32_t>(r12_12 + 8);
                        rax20 = rdx29;
                        less31 = *reinterpret_cast<int32_t*>(&r12_12) < reinterpret_cast<int32_t>(17);
                        *reinterpret_cast<uint32_t*>(&r12_12) = ecx30;
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_12) + 4) = reinterpret_cast<int32_t>(printf);
                        if (!less31) 
                            break; else 
                            continue;
                    } else {
                        rsi32 = g17c9;
                        fun_17ce(rbp28, rsi32, 0x800);
                        if (v25 != printf) 
                            goto addr_17d5_9;
                    }
                    addr_1780_10:
                    rax20 = rbp28;
                    r8_6 = r8_6;
                    goto addr_1786_6;
                    addr_17d5_9:
                    rcx33 = v23 - 0x800;
                    rax34 = g17e8;
                    v23 = rcx33;
                    *rax34 = rcx33;
                    goto addr_1780_10;
                }
            } else {
                do {
                    rdx35 = rax20 + 1;
                    *rbx19 = rdx35;
                    r14d10 = r14d10 | static_cast<uint32_t>(*rax20) << reinterpret_cast<unsigned char>(24 - *reinterpret_cast<signed char*>(&r12_12));
                    *r8_6 = r14d10;
                    ecx30 = static_cast<uint32_t>(r12_12 + 8);
                    rax20 = rdx35;
                    less36 = *reinterpret_cast<int32_t*>(&r12_12) < reinterpret_cast<int32_t>(17);
                    *reinterpret_cast<uint32_t*>(&r12_12) = ecx30;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_12) + 4) = reinterpret_cast<int32_t>(printf);
                } while (less36);
            }
            rax37 = g15af;
            *rax37 = ecx30;
            r15_38 = v17;
            r13d39 = v15;
            rbp40 = v41;
            esi7 = v14;
        }
        ecx42 = *reinterpret_cast<uint32_t*>(&rbp40);
        esi1 = esi7 >> -*reinterpret_cast<signed char*>(&ecx42);
        r14_43 = v44;
        r12d45 = v46;
        rax47 = v4;
    }
    ecx48 = static_cast<uint32_t>(rbp40 + 31);
    if (*reinterpret_cast<int32_t*>(&rbp40) >= reinterpret_cast<int32_t>(printf)) {
        ecx48 = *reinterpret_cast<uint32_t*>(&rbp40);
    }
    ebp49 = *reinterpret_cast<uint32_t*>(&rbp40) - (ecx48 & 0xffffffe0);
    ecx50 = ebp49;
    edi51 = 16 << *reinterpret_cast<unsigned char*>(&ecx50);
    ecx52 = v53;
    edx54 = reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(r14_43->f4) >> static_cast<unsigned char>(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(r12d45 == printf))) >> *reinterpret_cast<signed char*>(&ecx52));
    sf55 = *reinterpret_cast<int32_t*>(&rax47) < reinterpret_cast<int32_t>(printf);
    if (reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(sf55 == printf)) | reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&rax47) == printf)) {
        if (!sf55 || (ecx56 = ebp49, *reinterpret_cast<uint32_t*>(&rax47) = ~*reinterpret_cast<uint32_t*>(&rax47) << *reinterpret_cast<unsigned char*>(&ecx56), edx54 = edx54 + ~(esi1 + *reinterpret_cast<uint32_t*>(&rax47)), reinterpret_cast<int32_t>(edx54) >= reinterpret_cast<int32_t>(-edi51))) {
            addr_163d_19:
            *reinterpret_cast<unsigned char*>(&rax47) = reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(r12d45 == printf));
            ecx57 = v58;
            ecx59 = *reinterpret_cast<uint32_t*>(&rax47);
            r14_43->f4 = edx54 << *reinterpret_cast<unsigned char*>(&ecx57) << *reinterpret_cast<unsigned char*>(&ecx59);
            if (r13d39 != printf) {
                eax60 = fun_165c();
                r15_38->f4 = eax60;
            }
        } else {
            eax61 = 32;
            goto addr_161a_23;
        }
    } else {
        ecx62 = ebp49;
        *reinterpret_cast<uint32_t*>(&rax47) = (*reinterpret_cast<uint32_t*>(&rax47) - 1 << *reinterpret_cast<unsigned char*>(&ecx62)) + esi1;
        edx54 = edx54 + *reinterpret_cast<uint32_t*>(&rax47) + 1;
        if (reinterpret_cast<int32_t>(edx54) < reinterpret_cast<int32_t>(edi51)) 
            goto addr_163d_19;
        eax61 = 0xffffffe0;
        goto addr_161a_23;
    }
    goto v63;
    addr_161a_23:
    ecx64 = ebp49;
    *reinterpret_cast<uint32_t*>(&rax47) = eax61 << *reinterpret_cast<unsigned char*>(&ecx64);
    edx54 = edx54 + *reinterpret_cast<uint32_t*>(&rax47);
    goto addr_163d_19;
}

struct s31 {
    signed char[3] pad3;
    unsigned char f3;
};

struct s32 {
    signed char[2] pad2;
    unsigned char f2;
};

struct s33 {
    signed char[1] pad1;
    unsigned char f1;
};

int64_t* g1861 = reinterpret_cast<int64_t*>(0x41000000d198948);

uint32_t* g1870 = reinterpret_cast<uint32_t*>(0x58b480189);

int32_t* g1879 = reinterpret_cast<int32_t*>(0x415b0000002000c7);

void fun_1839(int64_t rdi, int64_t rsi, int64_t rdx) {
    int32_t ebp4;
    int64_t* r14_5;
    int64_t rbx6;
    uint32_t eax7;
    struct s31* rbx8;
    struct s32* rbx9;
    struct s33* rbx10;
    int64_t* rcx11;
    int64_t rbx12;
    uint32_t* rcx13;
    int32_t* rax14;
    int64_t v15;

    if (ebp4 != printf) {
        *r14_5 = rbx6;
    }
    eax7 = static_cast<uint32_t>(rbx8->f3) | (static_cast<uint32_t>(rbx9->f2) << 8 | static_cast<uint32_t>(rbx10->f1) << 16);
    rcx11 = g1861;
    *rcx11 = rbx12 + 4;
    rcx13 = g1870;
    *rcx13 = eax7 | 0x4100000;
    rax14 = g1879;
    *rax14 = 32;
    goto v15;
}

void fun_18a4(int32_t* rdi) {
    void* rsp2;
    int32_t eax3;
    int32_t* rsi4;
    int32_t eax5;
    int32_t* rax6;
    int32_t* rax7;
    int64_t rbx8;
    int64_t* rcx9;
    int64_t rsi10;
    void* rsp11;
    int64_t* rax12;
    int32_t* rax13;
    int32_t* rax14;
    int32_t* rdi15;
    int32_t* rsi16;
    int32_t eax17;
    int64_t v18;

    rsp2 = __zero_stack_offset();
    if (eax3 != printf) {
        rdi = reinterpret_cast<int32_t*>(0x18af);
        *reinterpret_cast<int32_t*>(&rsi4) = eax5;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi4) + 4) = reinterpret_cast<int32_t>(printf);
        fun_18b8(0x18af, rsi4);
        rsp2 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp2) - 8 + 8);
    }
    __asm__("cvtsi2sd xmm0, qword [rsp+0x10]");
    __asm__("cvtsi2sd xmm1, dword [rsp+0x18]");
    __asm__("mulsd xmm1, [rip+0x0]");
    __asm__("addsd xmm1, xmm0");
    *rdi = *rsi4;
    rax6 = g18e4;
    *rax6 = reinterpret_cast<int32_t>(printf);
    rax7 = g18f1;
    *rax7 = reinterpret_cast<int32_t>(printf);
    __asm__("movaps xmm0, [rax]");
    __asm__("movaps xmm1, [rax+0x10]");
    __asm__("movaps [rsp+0x10], xmm0");
    __asm__("movaps [rsp+0x20], xmm1");
    rbx8 = g1916;
    rcx9 = g1924;
    *rcx9 = rbx8 + 0x800;
    rsi10 = g192e;
    fun_193b(rbx8, rsi10, 0x800);
    rsp11 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp2) - 8 + 8);
    rax12 = g1946;
    *rax12 = rbx8 + 4;
    rax13 = g1950;
    *rax13 = 0x8f0f060;
    rax14 = g195d;
    *rax14 = 31;
    fun_198c(reinterpret_cast<int64_t>(rsp11) + 16, reinterpret_cast<int64_t>(rsp11) + 88, 0xc8, 0xc8);
    __asm__("movaps xmm0, [rsp+0x10]");
    __asm__("movaps [rsp+0x40], xmm0");
    rdi15 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp11) - 8 + 8 + 48);
    *reinterpret_cast<int32_t*>(&rsi16) = reinterpret_cast<int32_t>(printf);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi16) + 4) = reinterpret_cast<int32_t>(printf);
    eax17 = fun_19aa();
    if (eax17 != printf) {
        rdi15 = reinterpret_cast<int32_t*>(0x19b5);
        *reinterpret_cast<int32_t*>(&rsi16) = eax17;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi16) + 4) = reinterpret_cast<int32_t>(printf);
        fun_19be(0x19b5, rsi16, 0xc8, 0xc8);
    }
    __asm__("movdqa xmm1, [rsp+0x40]");
    __asm__("pcmpeqd xmm1, [rip+0x0]");
    __asm__("pandn xmm1, [rip+0x0]");
    __asm__("pshufd xmm0, xmm1, 0xee");
    __asm__("paddd xmm0, xmm1");
    __asm__("pshufd xmm1, xmm0, 0x55");
    __asm__("paddd xmm1, xmm0");
    __asm__("movd ebx, xmm1");
    __asm__("xorps xmm1, xmm1");
    __asm__("cvtsi2sd xmm1, qword [rsp+0x30]");
    __asm__("xorps xmm0, xmm0");
    __asm__("cvtsi2sd xmm0, dword [rsp+0x38]");
    __asm__("mulsd xmm0, [rip+0x0]");
    __asm__("addsd xmm0, xmm1");
    *rdi15 = *rsi16;
    __asm__("subsd xmm0, [r14]");
    fun_1a3e(0x1a37, rsi16 + 1, 0xc8);
    goto v18;
}

void fun_198c(void* rdi, void* rsi, int64_t rdx, int64_t rcx) {
    int32_t* rdi5;
    int32_t* rsi6;
    int32_t eax7;
    int64_t v8;

    __asm__("movaps xmm0, [rsp+0x10]");
    __asm__("movaps [rsp+0x40], xmm0");
    rdi5 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(__zero_stack_offset()) + 48);
    *reinterpret_cast<int32_t*>(&rsi6) = reinterpret_cast<int32_t>(printf);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi6) + 4) = reinterpret_cast<int32_t>(printf);
    eax7 = fun_19aa();
    if (eax7 != printf) {
        rdi5 = reinterpret_cast<int32_t*>(0x19b5);
        *reinterpret_cast<int32_t*>(&rsi6) = eax7;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi6) + 4) = reinterpret_cast<int32_t>(printf);
        fun_19be(0x19b5, rsi6, rdx, rcx);
    }
    __asm__("movdqa xmm1, [rsp+0x40]");
    __asm__("pcmpeqd xmm1, [rip+0x0]");
    __asm__("pandn xmm1, [rip+0x0]");
    __asm__("pshufd xmm0, xmm1, 0xee");
    __asm__("paddd xmm0, xmm1");
    __asm__("pshufd xmm1, xmm0, 0x55");
    __asm__("paddd xmm1, xmm0");
    __asm__("movd ebx, xmm1");
    __asm__("xorps xmm1, xmm1");
    __asm__("cvtsi2sd xmm1, qword [rsp+0x30]");
    __asm__("xorps xmm0, xmm0");
    __asm__("cvtsi2sd xmm0, dword [rsp+0x38]");
    __asm__("mulsd xmm0, [rip+0x0]");
    __asm__("addsd xmm0, xmm1");
    *rdi5 = *rsi6;
    __asm__("subsd xmm0, [r14]");
    fun_1a3e(0x1a37, rsi6 + 1, rdx);
    goto v8;
}

int32_t g19b5 = 0xc031c689;

int32_t fun_19aa() {
    int32_t eax1;
    int32_t* rsi2;
    int32_t eax3;
    int64_t rdx4;
    int64_t rcx5;
    int64_t rdx6;
    int64_t v7;

    if (eax1 != printf) {
        *reinterpret_cast<int32_t*>(&rsi2) = eax3;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi2) + 4) = reinterpret_cast<int32_t>(printf);
        fun_19be(0x19b5, rsi2, rdx4, rcx5);
    }
    __asm__("movdqa xmm1, [rsp+0x40]");
    __asm__("pcmpeqd xmm1, [rip+0x0]");
    __asm__("pandn xmm1, [rip+0x0]");
    __asm__("pshufd xmm0, xmm1, 0xee");
    __asm__("paddd xmm0, xmm1");
    __asm__("pshufd xmm1, xmm0, 0x55");
    __asm__("paddd xmm1, xmm0");
    __asm__("movd ebx, xmm1");
    __asm__("xorps xmm1, xmm1");
    __asm__("cvtsi2sd xmm1, qword [rsp+0x30]");
    __asm__("xorps xmm0, xmm0");
    __asm__("cvtsi2sd xmm0, dword [rsp+0x38]");
    __asm__("mulsd xmm0, [rip+0x0]");
    __asm__("addsd xmm0, xmm1");
    g19b5 = *rsi2;
    __asm__("subsd xmm0, [r14]");
    fun_1a3e(0x1a37, rsi2 + 1, rdx6);
    goto v7;
}

void printf() {
    int32_t edx1;
    int32_t edx2;
    uint32_t edx3;

    if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(edx1 < reinterpret_cast<int32_t>(printf) == printf)) | reinterpret_cast<uint1_t>(edx2 == printf))) {
        if (edx3 < 8) {
        }
    }
}

int64_t g251 = 0x247c8300000000e8;

void fun_240() {
    int1_t cf1;
    int64_t rsi2;
    int64_t r15_3;

    if (!cf1) {
        rsi2 = g251;
        fun_256(r15_3, rsi2, 0x800);
    }
}

unsigned char** g2c7 = reinterpret_cast<unsigned char**>(0x7fcb900458b48);

struct s34 {
    signed char[2044] pad2044;
    unsigned char f7fc;
};

struct s34* g2d7 = reinterpret_cast<struct s34*>(0x401f0f5073c83948);

void fun_2c0() {
    unsigned char** rbp1;
    unsigned char* rax2;
    unsigned char* tmp64_3;
    unsigned char* rdx4;
    uint32_t r13d5;
    int64_t r15_6;
    uint32_t* rbx7;
    int1_t less8;

    rbp1 = g2c7;
    rax2 = *rbp1;
    tmp64_3 = &g2d7->f7fc;
    if (reinterpret_cast<uint64_t>(rax2) >= reinterpret_cast<uint64_t>(tmp64_3)) {
        goto 0x38f;
    } else {
        while (1) {
            rdx4 = rax2 + 1;
            *rbp1 = rdx4;
            r13d5 = r13d5 | static_cast<uint32_t>(*rax2) << reinterpret_cast<unsigned char>(24 - *reinterpret_cast<signed char*>(&r15_6));
            *rbx7 = r13d5;
            rax2 = rdx4;
            less8 = *reinterpret_cast<int32_t*>(&r15_6) < 17;
            *reinterpret_cast<int32_t*>(&r15_6) = static_cast<int32_t>(r15_6 + 8);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_6) + 4) = reinterpret_cast<int32_t>(printf);
            if (!less8) 
                goto "???";
        }
    }
}

int32_t* g297 = reinterpret_cast<int32_t*>(0xe5d341c58941038b);

int32_t* g2a9 = reinterpret_cast<int32_t*>(0x8944ff29413a8b44);

void Get_Bits(int32_t edi) {
    int32_t ecx2;
    int32_t* rbx3;
    int32_t* rdx4;
    int32_t r15d5;

    ecx2 = edi;
    rbx3 = g297;
    *rbx3 = *rbx3 << *reinterpret_cast<unsigned char*>(&ecx2);
    rdx4 = g2a9;
    r15d5 = *rdx4 - edi;
    *rdx4 = r15d5;
    if (r15d5 > 24) 
        goto 0x319;
}

uint32_t* g3e7 = reinterpret_cast<uint32_t*>(0x8941e5d3242c8b41);

int32_t* g3f8 = reinterpret_cast<int32_t*>(0x8944fd2941288b44);

unsigned char** g40e = reinterpret_cast<unsigned char**>(0x7fcb9068b49);

struct s35 {
    signed char[2044] pad2044;
    unsigned char f7fc;
};

struct s35* g41d = reinterpret_cast<struct s35*>(0x6666664d73c83948);

void Flush_Buffer(int32_t edi) {
    int32_t ecx2;
    uint32_t* r12_3;
    uint32_t ebp4;
    int32_t* rax5;
    int64_t r13_6;
    unsigned char** r14_7;
    unsigned char* rax8;
    unsigned char* tmp64_9;
    unsigned char* rdx10;
    int1_t less11;

    ecx2 = edi;
    r12_3 = g3e7;
    ebp4 = *r12_3 << *reinterpret_cast<unsigned char*>(&ecx2);
    *r12_3 = ebp4;
    rax5 = g3f8;
    *reinterpret_cast<int32_t*>(&r13_6) = *rax5 - edi;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_6) + 4) = reinterpret_cast<int32_t>(printf);
    *rax5 = *reinterpret_cast<int32_t*>(&r13_6);
    if (*reinterpret_cast<int32_t*>(&r13_6) > 24) 
        goto 0x460;
    r14_7 = g40e;
    rax8 = *r14_7;
    tmp64_9 = &g41d->f7fc;
    if (reinterpret_cast<uint64_t>(rax8) >= reinterpret_cast<uint64_t>(tmp64_9)) {
        goto 0x4de;
    } else {
        while (1) {
            rdx10 = rax8 + 1;
            *r14_7 = rdx10;
            ebp4 = ebp4 | static_cast<uint32_t>(*rax8) << reinterpret_cast<unsigned char>(24 - *reinterpret_cast<signed char*>(&r13_6));
            *r12_3 = ebp4;
            rax8 = rdx10;
            less11 = *reinterpret_cast<int32_t*>(&r13_6) < 17;
            *reinterpret_cast<int32_t*>(&r13_6) = static_cast<int32_t>(r13_6 + 8);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_6) + 4) = reinterpret_cast<int32_t>(printf);
            if (!less11) 
                goto "???";
        }
    }
}

uint32_t* g535 = reinterpret_cast<uint32_t*>(0x8944093c8d440e8b);

int32_t* g545 = reinterpret_cast<int32_t*>(0x832a89ff688d028b);

unsigned char** g55d = reinterpret_cast<unsigned char**>(0x7fcb900458b49);

struct s36 {
    signed char[2044] pad2044;
    unsigned char f7fc;
};

struct s36* g56d = reinterpret_cast<struct s36*>(0x164830fc83948);

void Get_motion_code() {
    uint32_t* rsi1;
    int64_t rcx2;
    uint32_t r15d3;
    int32_t* rdx4;
    int64_t rax5;
    int64_t rbp6;
    unsigned char** r13_7;
    unsigned char* rax8;
    unsigned char* tmp64_9;
    unsigned char* rdx10;
    int1_t less11;

    rsi1 = g535;
    *reinterpret_cast<uint32_t*>(&rcx2) = *rsi1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx2) + 4) = reinterpret_cast<int32_t>(printf);
    r15d3 = static_cast<uint32_t>(rcx2 + rcx2);
    *rsi1 = r15d3;
    rdx4 = g545;
    *reinterpret_cast<int32_t*>(&rax5) = *rdx4;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax5) + 4) = reinterpret_cast<int32_t>(printf);
    *reinterpret_cast<int32_t*>(&rbp6) = static_cast<int32_t>(rax5 - 1);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp6) + 4) = reinterpret_cast<int32_t>(printf);
    *rdx4 = *reinterpret_cast<int32_t*>(&rbp6);
    if (*reinterpret_cast<int32_t*>(&rax5) > 25) 
        goto 0x5b5;
    r13_7 = g55d;
    rax8 = *r13_7;
    tmp64_9 = &g56d->f7fc;
    if (reinterpret_cast<uint64_t>(rax8) >= reinterpret_cast<uint64_t>(tmp64_9)) {
        goto 0x743;
    } else {
        while (1) {
            rdx10 = rax8 + 1;
            *r13_7 = rdx10;
            r15d3 = r15d3 | static_cast<uint32_t>(*rax8) << reinterpret_cast<unsigned char>(24 - *reinterpret_cast<signed char*>(&rbp6));
            *rsi1 = r15d3;
            rax8 = rdx10;
            less11 = *reinterpret_cast<int32_t*>(&rbp6) < 17;
            *reinterpret_cast<int32_t*>(&rbp6) = static_cast<int32_t>(rbp6 + 8);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp6) + 4) = reinterpret_cast<int32_t>(printf);
            if (!less11) 
                goto "???";
        }
    }
}

uint32_t* gc55 = reinterpret_cast<uint32_t*>(0x89443f3c8d443e8b);

int32_t* gc65 = reinterpret_cast<int32_t*>(0x8944ff688d44028b);

unsigned char** gc7a = reinterpret_cast<unsigned char**>(0x7fcb900458b48);

struct s37 {
    signed char[2044] pad2044;
    unsigned char f7fc;
};

struct s37* gc8a = reinterpret_cast<struct s37*>(0x10247c8948c83948);

void Get_dmvector() {
    uint32_t* rsi1;
    int64_t rdi2;
    uint32_t r15d3;
    int32_t* rdx4;
    int64_t rax5;
    int64_t r13_6;
    unsigned char** rbp7;
    unsigned char* rax8;
    unsigned char* tmp64_9;
    unsigned char* rdx10;
    int1_t less11;

    rsi1 = gc55;
    *reinterpret_cast<uint32_t*>(&rdi2) = *rsi1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi2) + 4) = reinterpret_cast<int32_t>(printf);
    r15d3 = static_cast<uint32_t>(rdi2 + rdi2);
    *rsi1 = r15d3;
    rdx4 = gc65;
    *reinterpret_cast<int32_t*>(&rax5) = *rdx4;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax5) + 4) = reinterpret_cast<int32_t>(printf);
    *reinterpret_cast<int32_t*>(&r13_6) = static_cast<int32_t>(rax5 - 1);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_6) + 4) = reinterpret_cast<int32_t>(printf);
    *rdx4 = *reinterpret_cast<int32_t*>(&r13_6);
    if (*reinterpret_cast<int32_t*>(&rax5) > 25) 
        goto 0xcd9;
    rbp7 = gc7a;
    rax8 = *rbp7;
    tmp64_9 = &gc8a->f7fc;
    if (reinterpret_cast<uint64_t>(rax8) >= reinterpret_cast<uint64_t>(tmp64_9)) {
        goto 0xe16;
    } else {
        while (1) {
            rdx10 = rax8 + 1;
            *rbp7 = rdx10;
            r15d3 = r15d3 | static_cast<uint32_t>(*rax8) << reinterpret_cast<unsigned char>(24 - *reinterpret_cast<signed char*>(&r13_6));
            *rsi1 = r15d3;
            rax8 = rdx10;
            less11 = *reinterpret_cast<int32_t*>(&r13_6) < 17;
            *reinterpret_cast<int32_t*>(&r13_6) = static_cast<int32_t>(r13_6 + 8);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_6) + 4) = reinterpret_cast<int32_t>(printf);
            if (!less11) 
                goto "???";
        }
    }
}

uint32_t* gea5 = reinterpret_cast<uint32_t*>(0x4500248d47038b45);

int32_t* geb6 = reinterpret_cast<int32_t*>(0x8944ff708d44038b);

unsigned char** geea = reinterpret_cast<unsigned char**>(0x7fcb900458b48);

struct s38 {
    signed char[2044] pad2044;
    unsigned char f7fc;
};

struct s38* gefa = reinterpret_cast<struct s38*>(0x2a4830fc83948);

uint32_t* g10a9 = reinterpret_cast<uint32_t*>(0x4c2b893f2c8d3b8b);

int32_t* g10b7 = reinterpret_cast<int32_t*>(0x45ff708d44008b41);

unsigned char** g10d6 = reinterpret_cast<unsigned char**>(0x7fcb9078b49);

struct s39 {
    signed char[2044] pad2044;
    unsigned char f7fc;
};

struct s39* g10e5 = reinterpret_cast<struct s39*>(0x38246c894cc83948);

void motion_vectors(int64_t rdi, int64_t rsi, int64_t rdx, int32_t ecx, int32_t r8d, uint32_t r9d, int32_t a7, int32_t a8, uint32_t a9, int32_t a10) {
    uint32_t* r11_11;
    int64_t r8_12;
    uint32_t r12d13;
    int32_t* rbx14;
    int64_t rax15;
    int64_t r14_16;
    unsigned char** rbp17;
    unsigned char* rax18;
    unsigned char* tmp64_19;
    uint32_t* rbx20;
    int64_t rdi21;
    uint32_t ebp22;
    int32_t* r8_23;
    int64_t rax24;
    int64_t r14_25;
    unsigned char** r15_26;
    unsigned char* rax27;
    unsigned char* tmp64_28;
    unsigned char* rdx29;
    int1_t less30;
    unsigned char* rdx31;
    int1_t less32;

    if (r8d != 1) {
        r11_11 = gea5;
        *reinterpret_cast<uint32_t*>(&r8_12) = *r11_11;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_12) + 4) = reinterpret_cast<int32_t>(printf);
        r12d13 = static_cast<uint32_t>(r8_12 + r8_12);
        *r11_11 = r12d13;
        rbx14 = geb6;
        *reinterpret_cast<int32_t*>(&rax15) = *rbx14;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax15) + 4) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<int32_t*>(&r14_16) = static_cast<int32_t>(rax15 - 1);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_16) + 4) = reinterpret_cast<int32_t>(printf);
        *rbx14 = *reinterpret_cast<int32_t*>(&r14_16);
        if (*reinterpret_cast<int32_t*>(&rax15) > 25) 
            goto 0xf77;
        rbp17 = geea;
        rax18 = *rbp17;
        tmp64_19 = &gefa->f7fc;
        if (reinterpret_cast<uint64_t>(rax18) < reinterpret_cast<uint64_t>(tmp64_19)) 
            goto addr_f03_4;
    } else {
        if ((r9d | a9) != printf) {
            goto 0x1171;
        }
        rbx20 = g10a9;
        *reinterpret_cast<uint32_t*>(&rdi21) = *rbx20;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi21) + 4) = reinterpret_cast<int32_t>(printf);
        ebp22 = static_cast<uint32_t>(rdi21 + rdi21);
        *rbx20 = ebp22;
        r8_23 = g10b7;
        *reinterpret_cast<int32_t*>(&rax24) = *r8_23;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax24) + 4) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<int32_t*>(&r14_25) = static_cast<int32_t>(rax24 - 1);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_25) + 4) = reinterpret_cast<int32_t>(printf);
        *r8_23 = *reinterpret_cast<int32_t*>(&r14_25);
        if (*reinterpret_cast<int32_t*>(&rax24) > 25) 
            goto 0x1150;
        r15_26 = g10d6;
        rax27 = *r15_26;
        tmp64_28 = &g10e5->f7fc;
        if (reinterpret_cast<uint64_t>(rax27) >= reinterpret_cast<uint64_t>(tmp64_28)) 
            goto addr_12e9_9; else 
            goto addr_10fd_10;
    }
    goto 0x1216;
    addr_f03_4:
    while (1) {
        rdx29 = rax18 + 1;
        *rbp17 = rdx29;
        r12d13 = r12d13 | static_cast<uint32_t>(*rax18) << reinterpret_cast<unsigned char>(24 - *reinterpret_cast<signed char*>(&r14_16));
        *r11_11 = r12d13;
        rax18 = rdx29;
        less30 = *reinterpret_cast<int32_t*>(&r14_16) < 17;
        *reinterpret_cast<int32_t*>(&r14_16) = static_cast<int32_t>(r14_16 + 8);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_16) + 4) = reinterpret_cast<int32_t>(printf);
        if (!less30) 
            goto "???";
    }
    addr_12e9_9:
    goto 0x134c;
    addr_10fd_10:
    while (1) {
        rdx31 = rax27 + 1;
        *r15_26 = rdx31;
        ebp22 = ebp22 | static_cast<uint32_t>(*rax27) << reinterpret_cast<unsigned char>(24 - *reinterpret_cast<signed char*>(&r14_25));
        *rbx20 = ebp22;
        rax27 = rdx31;
        less32 = *reinterpret_cast<int32_t*>(&r14_25) < 17;
        *reinterpret_cast<int32_t*>(&r14_25) = static_cast<int32_t>(r14_25 + 8);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_25) + 4) = reinterpret_cast<int32_t>(printf);
        if (!less32) 
            goto "???";
    }
}

void motion_vector(int64_t rdi, int64_t rsi, int32_t edx, int64_t rcx, int32_t r8d, int32_t r9d) {
    fun_13b6();
}

int64_t g180b = 0x4c00000800838d48;

int64_t* g1819 = reinterpret_cast<int64_t*>(0x58b48068949);

int64_t g182c = 0xdf894800000800ba;

void Initialize_Buffer() {
    int64_t rbx1;
    int64_t* r14_2;
    int64_t rsi3;

    rbx1 = g180b;
    r14_2 = g1819;
    *r14_2 = rbx1 + 0x800;
    rsi3 = g182c;
    fun_1839(rbx1, rsi3, 0x800);
}

void submain() {
    fun_18a4(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 96 + 16);
}

