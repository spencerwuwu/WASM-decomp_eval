
void printf();

int64_t* g326 = reinterpret_cast<int64_t*>(0x8894810244c8948);

int64_t g303 = 0x5d894800000000e8;

int32_t* g26f = reinterpret_cast<int32_t*>(0x4c8b0824448b0889);

void fun_308(int64_t rdi, int64_t rsi, int64_t rdx) {
    int64_t* rbp4;
    int64_t rbx5;
    int32_t v6;
    int64_t rcx7;
    int64_t v8;
    int64_t* rax9;
    unsigned char* rax10;
    unsigned char* rbx11;
    unsigned char* rdx12;
    unsigned char** rbp13;
    uint32_t r13d14;
    int64_t r15_15;
    uint32_t* r14_16;
    int32_t ecx17;
    int1_t less18;
    unsigned char* r12_19;
    int64_t rsi20;
    int64_t rbx21;
    int32_t* rax22;
    int64_t v23;

    while (1) {
        *rbp4 = rbx5;
        if (v6 != printf) {
            rcx7 = v8 - 0x800;
            rax9 = g326;
            v8 = rcx7;
            *rax9 = rcx7;
        }
        rax10 = rbx11;
        do {
            rdx12 = rax10 + 1;
            *rbp13 = rdx12;
            r13d14 = r13d14 | static_cast<uint32_t>(*rax10) << reinterpret_cast<unsigned char>(24 - *reinterpret_cast<signed char*>(&r15_15));
            *r14_16 = r13d14;
            ecx17 = static_cast<int32_t>(r15_15 + 8);
            rax10 = rdx12;
            less18 = *reinterpret_cast<int32_t*>(&r15_15) < 17;
            *reinterpret_cast<int32_t*>(&r15_15) = ecx17;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_15) + 4) = reinterpret_cast<int32_t>(printf);
            if (!less18) 
                goto addr_268_5;
        } while (reinterpret_cast<uint64_t>(rax10) < reinterpret_cast<uint64_t>(r12_19));
        rsi20 = g303;
        fun_308(rbx21, rsi20, 0x800);
    }
    addr_268_5:
    rax22 = g26f;
    *rax22 = ecx17;
    goto v23;
}

int64_t* g466 = reinterpret_cast<int64_t*>(0x8894810244c8948);

int64_t g443 = 0x2c894900000000e8;

int32_t* g3ad = reinterpret_cast<int32_t*>(0x415b18c483480889);

void fun_448(int64_t rdi, int64_t rsi, int64_t rdx) {
    int64_t* r12_4;
    int64_t rbp5;
    int32_t v6;
    int64_t rcx7;
    int64_t v8;
    int64_t* rax9;
    unsigned char* rax10;
    unsigned char* rbp11;
    unsigned char* rdx12;
    unsigned char** r12_13;
    uint32_t r14d14;
    int64_t r13_15;
    uint32_t* rbx16;
    int32_t ecx17;
    int1_t less18;
    unsigned char* r15_19;
    int64_t rsi20;
    int64_t rbp21;
    int32_t* rax22;
    int64_t v23;

    while (1) {
        *r12_4 = rbp5;
        if (v6 != printf) {
            rcx7 = v8 - 0x800;
            rax9 = g466;
            v8 = rcx7;
            *rax9 = rcx7;
        }
        rax10 = rbp11;
        do {
            rdx12 = rax10 + 1;
            *r12_13 = rdx12;
            r14d14 = r14d14 | static_cast<uint32_t>(*rax10) << reinterpret_cast<unsigned char>(24 - *reinterpret_cast<signed char*>(&r13_15));
            *rbx16 = r14d14;
            ecx17 = static_cast<int32_t>(r13_15 + 8);
            rax10 = rdx12;
            less18 = *reinterpret_cast<int32_t*>(&r13_15) < 17;
            *reinterpret_cast<int32_t*>(&r13_15) = ecx17;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_15) + 4) = reinterpret_cast<int32_t>(printf);
            if (!less18) 
                goto addr_3a6_5;
        } while (reinterpret_cast<uint64_t>(rax10) < reinterpret_cast<uint64_t>(r15_19));
        rsi20 = g443;
        fun_448(rbp21, rsi20, 0x800);
    }
    addr_3a6_5:
    rax22 = g3ad;
    *rax22 = ecx17;
    goto v23;
}

int64_t* g7f5 = reinterpret_cast<int64_t*>(0xfd814196eb20894c);

uint32_t* g79a = reinterpret_cast<uint32_t*>(0x55894901508d48);

int64_t g7d8 = 0x5d894900000000e8;

int32_t* g4fd = reinterpret_cast<int32_t*>(0x3108244c8b480a89);

void* g817 = reinterpret_cast<void*>(0xd34101784cbe0f41);

unsigned char** g83e = reinterpret_cast<unsigned char**>(0x7fcb900458b48);

struct s0 {
    signed char[2044] pad2044;
    unsigned char f7fc;
};

struct s0* g84e = reinterpret_cast<struct s0*>(0x382830fc83948);

int64_t* gbe0 = reinterpret_cast<int64_t*>(0xd8b48218b4c);

int32_t* gbea = reinterpret_cast<int32_t*>(0x800b9240c89098b);

struct s1 {
    signed char[2048] pad2048;
    unsigned char f800;
};

struct s1* gbfb = reinterpret_cast<struct s1*>(0x1d8b48ce0149);

unsigned char* gc05 = reinterpret_cast<unsigned char*>(0x841f0f663feb);

int64_t gc5a = 0x5d894800000000e8;

void fun_c5f(unsigned char* rdi, int64_t rsi, int64_t rdx);

uint32_t* gc1a = reinterpret_cast<uint32_t*>(0x55894801508d48);

int64_t* gc77 = reinterpret_cast<int64_t*>(0xd8b4894eb20894c);

int32_t* g88f = reinterpret_cast<int32_t*>(0x4c08247c8b480a89);

void* g655 = reinterpret_cast<void*>(0xd34101784cbe0f41);

unsigned char** g67c = reinterpret_cast<unsigned char**>(0x7fcb900458b48);

struct s2 {
    signed char[2044] pad2044;
    unsigned char f7fc;
};

struct s2* g68c = reinterpret_cast<struct s2*>(0x40d830fc83948);

int64_t* gaa9 = reinterpret_cast<int64_t*>(0xd8b48218b4c);

int32_t* gab3 = reinterpret_cast<int32_t*>(0x800b9240c89098b);

struct s3 {
    signed char[2048] pad2048;
    unsigned char f800;
};

struct s3* gac4 = reinterpret_cast<struct s3*>(0x1d8b48ce0149);

unsigned char* gace = reinterpret_cast<unsigned char*>(0x358b48d8894836eb);

int64_t gb1a = 0x5d894800000000e8;

void fun_b1f(unsigned char* rdi, int64_t rsi, int64_t rdx);

uint32_t* gada = reinterpret_cast<uint32_t*>(0x55894801508d48);

int64_t* gb37 = reinterpret_cast<int64_t*>(0xd8b4894eb20894c);

int32_t* g6cf = reinterpret_cast<int32_t*>(0x4c08247c8b480a89);

void* g52c = reinterpret_cast<void*>(0xe5d3016f4cbe0f42);

unsigned char** g54c = reinterpret_cast<unsigned char**>(0x7fcb924048b49);

struct s4 {
    signed char[2044] pad2044;
    unsigned char f7fc;
};

struct s4* g55c = reinterpret_cast<struct s4*>(0x3db830fc83948);

int32_t* g947 = reinterpret_cast<int32_t*>(0x48240c8948098b48);

int32_t* g955 = reinterpret_cast<int32_t*>(0xb908244c89098b);

struct s5 {
    signed char[2048] pad2048;
    unsigned char f800;
};

struct s5* g967 = reinterpret_cast<struct s5*>(0x358b4ccb0148);

unsigned char* g971 = reinterpret_cast<unsigned char*>(0xf2e6666666641eb);

int64_t g9c8 = 0x34894d00000000e8;

void fun_9cd(unsigned char* rdi, int64_t rsi, int64_t rdx);

uint32_t* g98a = reinterpret_cast<uint32_t*>(0x2414894901508d48);

int32_t* g9ea = reinterpret_cast<int32_t*>(0xeb088948240c8948);

int32_t* g59d = reinterpret_cast<int32_t*>(0x3d8b480a89);

unsigned char** g5c3 = reinterpret_cast<unsigned char**>(0x7fcb924048b49);

struct s6 {
    signed char[2044] pad2044;
    unsigned char f7fc;
};

struct s6* g5d3 = reinterpret_cast<struct s6*>(0x102444894cc83948);

int32_t* g9fa = reinterpret_cast<int32_t*>(0x48240c8948098b48);

int32_t* ga08 = reinterpret_cast<int32_t*>(0xb908244c89098b);

struct s7 {
    signed char[2048] pad2048;
    unsigned char f800;
};

struct s7* ga1a = reinterpret_cast<struct s7*>(0x358b4ccb0148);

unsigned char* ga24 = reinterpret_cast<unsigned char*>(0x841f0f2e663deb);

int64_t ga77 = 0x34894d00000000e8;

void fun_a7c(unsigned char* rdi, int64_t rsi, int64_t rdx);

uint32_t* ga3a = reinterpret_cast<uint32_t*>(0x2414894901508d48);

int32_t* ga99 = reinterpret_cast<int32_t*>(0xeb088948240c8948);

int32_t* g61c = reinterpret_cast<int32_t*>(0x3d8b480889);

unsigned char** g8c1 = reinterpret_cast<unsigned char**>(0x7fcb900458b48);

struct s8 {
    signed char[2044] pad2044;
    unsigned char f7fc;
};

struct s8* g8d1 = reinterpret_cast<struct s8*>(0x3a2830fc83948);

int64_t* gc83 = reinterpret_cast<int64_t*>(0xd8b48218b4c);

int32_t* gc8d = reinterpret_cast<int32_t*>(0x800b9240c89098b);

struct s9 {
    signed char[2048] pad2048;
    unsigned char f800;
};

struct s9* gc9e = reinterpret_cast<struct s9*>(0x1d8b48ce0149);

unsigned char* gca8 = reinterpret_cast<unsigned char*>(0x441f0f663ceb);

int64_t gcfa = 0x5d894800000000e8;

void fun_cff(unsigned char* rdi, int64_t rsi, int64_t rdx);

uint32_t* gcba = reinterpret_cast<uint32_t*>(0x55894801508d48);

int64_t* gd17 = reinterpret_cast<int64_t*>(0x401f0f94eb20894c);

int32_t* g90f = reinterpret_cast<int32_t*>(0x4c08247c8b480889);

unsigned char** g6fe = reinterpret_cast<unsigned char**>(0x7fcb900458b49);

struct s10 {
    signed char[2044] pad2044;
    unsigned char f7fc;
};

struct s10* g70e = reinterpret_cast<struct s10*>(0x10244c894cc83948);

int64_t* gb43 = reinterpret_cast<int64_t*>(0xd8b48218b4c);

int32_t* gb4d = reinterpret_cast<int32_t*>(0x800b9240c89098b);

struct s11 {
    signed char[2048] pad2048;
    unsigned char f800;
};

struct s11* gb5e = reinterpret_cast<struct s11*>(0x1d8b48ce0149);

unsigned char* gb68 = reinterpret_cast<unsigned char*>(0x441f0f6639eb);

int64_t gbb7 = 0x5d894900000000e8;

void fun_bbc(unsigned char* rdi, int64_t rsi, int64_t rdx);

uint32_t* gb7a = reinterpret_cast<uint32_t*>(0x55894901508d48);

int64_t* gbd4 = reinterpret_cast<int64_t*>(0xd8b4897eb20894c);

int32_t* g74c = reinterpret_cast<int32_t*>(0x4c08247c8b480889);

void fun_7dd(int64_t rdi, int64_t rsi, int64_t rdx) {
    int64_t v4;
    int64_t* r13_5;
    int64_t rbx6;
    int64_t r12_7;
    int64_t* rax8;
    unsigned char* rax9;
    unsigned char* rbx10;
    uint32_t* rsi11;
    unsigned char* rdx12;
    unsigned char** r13_13;
    uint32_t ebp14;
    int64_t r15_15;
    int32_t ecx16;
    int1_t less17;
    unsigned char* r14_18;
    int64_t rsi19;
    int64_t rbx20;
    int32_t* rdx21;
    int64_t rcx22;
    int64_t v23;
    uint64_t r13_24;
    int64_t v25;
    int64_t rdi26;
    void* r8_27;
    int32_t ecx28;
    uint32_t r13d29;
    int64_t r15_30;
    unsigned char** rbp31;
    unsigned char* rax32;
    unsigned char* tmp64_33;
    int64_t* rcx34;
    int64_t r12_35;
    int32_t* rcx36;
    int32_t v37;
    struct s1* r14_38;
    unsigned char* r14_39;
    unsigned char* rbx40;
    unsigned char* rdx41;
    int32_t ecx42;
    int1_t less43;
    int64_t rsi44;
    int64_t* rax45;
    unsigned char* rdx46;
    int1_t less47;
    int64_t r9_48;
    uint32_t r15d49;
    int64_t rax50;
    int64_t r13_51;
    int32_t ecx52;
    uint32_t r13d53;
    int64_t r15_54;
    unsigned char** rbp55;
    unsigned char* rax56;
    unsigned char* tmp64_57;
    int64_t* rcx58;
    int64_t r12_59;
    int32_t* rcx60;
    int32_t v61;
    struct s3* r14_62;
    unsigned char* r14_63;
    unsigned char* rbx64;
    unsigned char* rdx65;
    int32_t ecx66;
    int1_t less67;
    int64_t rsi68;
    int64_t* rax69;
    unsigned char* rdx70;
    int1_t less71;
    uint32_t r15d72;
    int64_t rax73;
    int64_t rbp74;
    void* rdi75;
    int32_t ecx76;
    uint32_t ebp77;
    int64_t r15_78;
    unsigned char** r12_79;
    unsigned char* rax80;
    unsigned char* tmp64_81;
    int32_t* rcx82;
    int32_t v83;
    int32_t* rcx84;
    int32_t v85;
    struct s5* rbx86;
    unsigned char* rbx87;
    unsigned char* r14_88;
    unsigned char* rdx89;
    int32_t ecx90;
    int1_t less91;
    int64_t rsi92;
    int32_t rcx93;
    int32_t* rax94;
    unsigned char* rdx95;
    int1_t less96;
    int64_t r8_97;
    uint32_t r15d98;
    int64_t rax99;
    int64_t rbp100;
    unsigned char** r12_101;
    unsigned char* rax102;
    unsigned char* tmp64_103;
    int64_t v104;
    int32_t* rcx105;
    int32_t v106;
    int32_t* rcx107;
    int32_t v108;
    struct s7* rbx109;
    unsigned char* rbx110;
    unsigned char* r14_111;
    unsigned char* rdx112;
    int32_t ecx113;
    int1_t less114;
    int64_t rsi115;
    int32_t rcx116;
    int32_t* rax117;
    unsigned char* rdx118;
    int1_t less119;
    int32_t* rax120;
    int1_t sf121;
    int64_t v122;
    unsigned char** rbp123;
    unsigned char* rax124;
    unsigned char* tmp64_125;
    int64_t* rcx126;
    int64_t r12_127;
    int32_t* rcx128;
    int32_t v129;
    struct s9* r14_130;
    unsigned char* r14_131;
    unsigned char* rbx132;
    unsigned char* rdx133;
    int32_t ecx134;
    int1_t less135;
    int64_t rsi136;
    int64_t* rax137;
    unsigned char* rdx138;
    int1_t less139;
    int32_t* rax140;
    unsigned char** r13_141;
    unsigned char* rax142;
    unsigned char* tmp64_143;
    int64_t* rcx144;
    int64_t r12_145;
    int32_t* rcx146;
    int32_t v147;
    struct s11* r14_148;
    unsigned char* r14_149;
    unsigned char* rbx150;
    unsigned char* rdx151;
    int32_t ecx152;
    int1_t less153;
    int64_t rsi154;
    int64_t* rax155;
    unsigned char* rdx156;
    int1_t less157;
    int32_t* rax158;

    while (1) {
        v4 = reinterpret_cast<int64_t>(__return_address());
        *r13_5 = rbx6;
        if (*reinterpret_cast<int32_t*>(&v4) != printf) {
            r12_7 = r12_7 - 0x800;
            rax8 = g7f5;
            *rax8 = r12_7;
        }
        rax9 = rbx10;
        rsi11 = g79a;
        do {
            rdx12 = rax9 + 1;
            *r13_13 = rdx12;
            ebp14 = ebp14 | static_cast<uint32_t>(*rax9) << reinterpret_cast<unsigned char>(24 - *reinterpret_cast<signed char*>(&r15_15));
            *rsi11 = ebp14;
            ecx16 = static_cast<int32_t>(r15_15 + 8);
            rax9 = rdx12;
            less17 = *reinterpret_cast<int32_t*>(&r15_15) < 17;
            *reinterpret_cast<int32_t*>(&r15_15) = ecx16;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_15) + 4) = reinterpret_cast<int32_t>(printf);
            if (!less17) 
                goto addr_4f6_5;
        } while (reinterpret_cast<uint64_t>(rax9) < reinterpret_cast<uint64_t>(r14_18));
        rsi19 = g7d8;
        fun_7dd(rbx20, rsi19, 0x800);
    }
    addr_4f6_5:
    rdx21 = g4fd;
    *rdx21 = ecx16;
    rcx22 = v23;
    if (*reinterpret_cast<int32_t*>(&rcx22) < reinterpret_cast<int32_t>(printf)) 
        goto addr_931_9;
    *reinterpret_cast<uint32_t*>(&r13_24) = *rsi11;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_24) + 4) = reinterpret_cast<int32_t>(printf);
    if (r13_24 < 0x20000000) {
        if (*reinterpret_cast<uint32_t*>(&r13_24) < 0xc000000) {
            if (*reinterpret_cast<uint32_t*>(&r13_24) < 0x6000000) {
                addr_931_9:
                goto v25;
            } else {
                *reinterpret_cast<uint32_t*>(&rdi26) = (*reinterpret_cast<uint32_t*>(&r13_24) >> 23) - 12;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi26) + 4) = reinterpret_cast<int32_t>(printf);
                r8_27 = g817;
                ecx28 = *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(r8_27) + rdi26 * 2 + 1);
                r13d29 = *reinterpret_cast<uint32_t*>(&r13_24) << *reinterpret_cast<unsigned char*>(&ecx28);
                *rsi11 = r13d29;
                *reinterpret_cast<int32_t*>(&r15_30) = *rdx21 - ecx28;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_30) + 4) = reinterpret_cast<int32_t>(printf);
                *rdx21 = *reinterpret_cast<int32_t*>(&r15_30);
                if (*reinterpret_cast<int32_t*>(&r15_30) <= 24) {
                    rbp31 = g83e;
                    rax32 = *rbp31;
                    tmp64_33 = &g84e->f7fc;
                    if (reinterpret_cast<uint64_t>(rax32) >= reinterpret_cast<uint64_t>(tmp64_33)) {
                        rcx34 = gbe0;
                        r12_35 = *rcx34;
                        rcx36 = gbea;
                        v37 = *rcx36;
                        r14_38 = gbfb;
                        r14_39 = &r14_38->f800;
                        rbx40 = gc05;
                        while (1) {
                            if (reinterpret_cast<uint64_t>(rax32) < reinterpret_cast<uint64_t>(r14_39)) {
                                addr_c1a_17:
                                rdx41 = rax32 + 1;
                                *rbp31 = rdx41;
                                r13d29 = r13d29 | static_cast<uint32_t>(*rax32) << reinterpret_cast<unsigned char>(24 - *reinterpret_cast<signed char*>(&r15_30));
                                *rsi11 = r13d29;
                                ecx42 = static_cast<int32_t>(r15_30 + 8);
                                rax32 = rdx41;
                                less43 = *reinterpret_cast<int32_t*>(&r15_30) < 17;
                                *reinterpret_cast<int32_t*>(&r15_30) = ecx42;
                                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_30) + 4) = reinterpret_cast<int32_t>(printf);
                                if (!less43) 
                                    break; else 
                                    continue;
                            } else {
                                rsi44 = gc5a;
                                fun_c5f(rbx40, rsi44, 0x800);
                                *rbp31 = rbx40;
                                if (v37 != printf) 
                                    goto addr_c69_20;
                            }
                            addr_c10_21:
                            rax32 = rbx40;
                            rsi11 = gc1a;
                            goto addr_c1a_17;
                            addr_c69_20:
                            r12_35 = r12_35 - 0x800;
                            rax45 = gc77;
                            *rax45 = r12_35;
                            goto addr_c10_21;
                        }
                    } else {
                        do {
                            rdx46 = rax32 + 1;
                            *rbp31 = rdx46;
                            r13d29 = r13d29 | static_cast<uint32_t>(*rax32) << reinterpret_cast<unsigned char>(24 - *reinterpret_cast<signed char*>(&r15_30));
                            *rsi11 = r13d29;
                            ecx42 = static_cast<int32_t>(r15_30 + 8);
                            rax32 = rdx46;
                            less47 = *reinterpret_cast<int32_t*>(&r15_30) < 17;
                            *reinterpret_cast<int32_t*>(&r15_30) = ecx42;
                            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_30) + 4) = reinterpret_cast<int32_t>(printf);
                        } while (less47);
                    }
                    rdx21 = g88f;
                    *rdx21 = ecx42;
                }
                *reinterpret_cast<uint32_t*>(&r9_48) = *rsi11;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_48) + 4) = reinterpret_cast<int32_t>(printf);
                r15d49 = static_cast<uint32_t>(r9_48 + r9_48);
                *rsi11 = r15d49;
                *reinterpret_cast<int32_t*>(&rax50) = *rdx21;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax50) + 4) = reinterpret_cast<int32_t>(printf);
                *reinterpret_cast<int32_t*>(&r13_51) = static_cast<int32_t>(rax50 - 1);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_51) + 4) = reinterpret_cast<int32_t>(printf);
                *rdx21 = *reinterpret_cast<int32_t*>(&r13_51);
                if (*reinterpret_cast<int32_t*>(&rax50) <= 25) 
                    goto addr_8b5_26;
            }
        } else {
            *reinterpret_cast<uint32_t*>(&rdi26) = *reinterpret_cast<uint32_t*>(&r13_24) >> 26;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi26) + 4) = reinterpret_cast<int32_t>(printf);
            r8_27 = g655;
            ecx52 = *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(r8_27) + rdi26 * 2 + 1);
            r13d53 = *reinterpret_cast<uint32_t*>(&r13_24) << *reinterpret_cast<unsigned char*>(&ecx52);
            *rsi11 = r13d53;
            *reinterpret_cast<int32_t*>(&r15_54) = *rdx21 - ecx52;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_54) + 4) = reinterpret_cast<int32_t>(printf);
            *rdx21 = *reinterpret_cast<int32_t*>(&r15_54);
            if (*reinterpret_cast<int32_t*>(&r15_54) <= 24) {
                rbp55 = g67c;
                rax56 = *rbp55;
                tmp64_57 = &g68c->f7fc;
                if (reinterpret_cast<uint64_t>(rax56) >= reinterpret_cast<uint64_t>(tmp64_57)) {
                    rcx58 = gaa9;
                    r12_59 = *rcx58;
                    rcx60 = gab3;
                    v61 = *rcx60;
                    r14_62 = gac4;
                    r14_63 = &r14_62->f800;
                    rbx64 = gace;
                    while (1) {
                        if (reinterpret_cast<uint64_t>(rax56) < reinterpret_cast<uint64_t>(r14_63)) {
                            addr_ada_31:
                            rdx65 = rax56 + 1;
                            *rbp55 = rdx65;
                            r13d53 = r13d53 | static_cast<uint32_t>(*rax56) << reinterpret_cast<unsigned char>(24 - *reinterpret_cast<signed char*>(&r15_54));
                            *rsi11 = r13d53;
                            ecx66 = static_cast<int32_t>(r15_54 + 8);
                            rax56 = rdx65;
                            less67 = *reinterpret_cast<int32_t*>(&r15_54) < 17;
                            *reinterpret_cast<int32_t*>(&r15_54) = ecx66;
                            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_54) + 4) = reinterpret_cast<int32_t>(printf);
                            if (!less67) 
                                break; else 
                                continue;
                        } else {
                            rsi68 = gb1a;
                            fun_b1f(rbx64, rsi68, 0x800);
                            *rbp55 = rbx64;
                            if (v61 != printf) 
                                goto addr_b29_34;
                        }
                        addr_ad0_35:
                        rax56 = rbx64;
                        rsi11 = gada;
                        goto addr_ada_31;
                        addr_b29_34:
                        r12_59 = r12_59 - 0x800;
                        rax69 = gb37;
                        *rax69 = r12_59;
                        goto addr_ad0_35;
                    }
                } else {
                    do {
                        rdx70 = rax56 + 1;
                        *rbp55 = rdx70;
                        r13d53 = r13d53 | static_cast<uint32_t>(*rax56) << reinterpret_cast<unsigned char>(24 - *reinterpret_cast<signed char*>(&r15_54));
                        *rsi11 = r13d53;
                        ecx66 = static_cast<int32_t>(r15_54 + 8);
                        rax56 = rdx70;
                        less71 = *reinterpret_cast<int32_t*>(&r15_54) < 17;
                        *reinterpret_cast<int32_t*>(&r15_54) = ecx66;
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_54) + 4) = reinterpret_cast<int32_t>(printf);
                    } while (less71);
                }
                rdx21 = g6cf;
                *rdx21 = ecx66;
            }
            *reinterpret_cast<uint32_t*>(&r9_48) = *rsi11;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_48) + 4) = reinterpret_cast<int32_t>(printf);
            r15d72 = static_cast<uint32_t>(r9_48 + r9_48);
            *rsi11 = r15d72;
            *reinterpret_cast<int32_t*>(&rax73) = *rdx21;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax73) + 4) = reinterpret_cast<int32_t>(printf);
            *reinterpret_cast<int32_t*>(&rbp74) = static_cast<int32_t>(rax73 - 1);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp74) + 4) = reinterpret_cast<int32_t>(printf);
            *rdx21 = *reinterpret_cast<int32_t*>(&rbp74);
            if (*reinterpret_cast<int32_t*>(&rax73) <= 25) 
                goto addr_6f7_40;
        }
    } else {
        rdi75 = g52c;
        ecx76 = *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rdi75) + (r13_24 >> 29) * 2 + 1);
        ebp77 = *reinterpret_cast<uint32_t*>(&r13_24) << *reinterpret_cast<unsigned char*>(&ecx76);
        *rsi11 = ebp77;
        *reinterpret_cast<int32_t*>(&r15_78) = *rdx21 - ecx76;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_78) + 4) = reinterpret_cast<int32_t>(printf);
        *rdx21 = *reinterpret_cast<int32_t*>(&r15_78);
        if (*reinterpret_cast<int32_t*>(&r15_78) <= 24) {
            r12_79 = g54c;
            rax80 = *r12_79;
            tmp64_81 = &g55c->f7fc;
            if (reinterpret_cast<uint64_t>(rax80) >= reinterpret_cast<uint64_t>(tmp64_81)) {
                rcx82 = g947;
                v83 = *rcx82;
                rcx84 = g955;
                v85 = *rcx84;
                rbx86 = g967;
                rbx87 = &rbx86->f800;
                r14_88 = g971;
                while (1) {
                    if (reinterpret_cast<uint64_t>(rax80) < reinterpret_cast<uint64_t>(rbx87)) {
                        addr_98a_45:
                        rdx89 = rax80 + 1;
                        *r12_79 = rdx89;
                        ebp77 = ebp77 | static_cast<uint32_t>(*rax80) << reinterpret_cast<unsigned char>(24 - *reinterpret_cast<signed char*>(&r15_78));
                        *rsi11 = ebp77;
                        ecx90 = static_cast<int32_t>(r15_78 + 8);
                        rax80 = rdx89;
                        less91 = *reinterpret_cast<int32_t*>(&r15_78) < 17;
                        *reinterpret_cast<int32_t*>(&r15_78) = ecx90;
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_78) + 4) = reinterpret_cast<int32_t>(printf);
                        if (!less91) 
                            break; else 
                            continue;
                    } else {
                        rsi92 = g9c8;
                        fun_9cd(r14_88, rsi92, 0x800);
                        *r12_79 = r14_88;
                        if (v85 != printf) 
                            goto addr_9d8_48;
                    }
                    addr_980_49:
                    rax80 = r14_88;
                    rsi11 = g98a;
                    goto addr_98a_45;
                    addr_9d8_48:
                    rcx93 = reinterpret_cast<int32_t>(v83 - 0x800);
                    rax94 = g9ea;
                    v83 = rcx93;
                    *rax94 = rcx93;
                    goto addr_980_49;
                }
            } else {
                do {
                    rdx95 = rax80 + 1;
                    *r12_79 = rdx95;
                    ebp77 = ebp77 | static_cast<uint32_t>(*rax80) << reinterpret_cast<unsigned char>(24 - *reinterpret_cast<signed char*>(&r15_78));
                    *rsi11 = ebp77;
                    ecx90 = static_cast<int32_t>(r15_78 + 8);
                    rax80 = rdx95;
                    less96 = *reinterpret_cast<int32_t*>(&r15_78) < 17;
                    *reinterpret_cast<int32_t*>(&r15_78) = ecx90;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_78) + 4) = reinterpret_cast<int32_t>(printf);
                } while (less96);
            }
            rdx21 = g59d;
            *rdx21 = ecx90;
        }
        *reinterpret_cast<uint32_t*>(&r8_97) = *rsi11;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_97) + 4) = reinterpret_cast<int32_t>(printf);
        r15d98 = static_cast<uint32_t>(r8_97 + r8_97);
        *rsi11 = r15d98;
        *reinterpret_cast<int32_t*>(&rax99) = *rdx21;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax99) + 4) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<int32_t*>(&rbp100) = static_cast<int32_t>(rax99 - 1);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp100) + 4) = reinterpret_cast<int32_t>(printf);
        *rdx21 = *reinterpret_cast<int32_t*>(&rbp100);
        if (*reinterpret_cast<int32_t*>(&rax99) <= 25) {
            r12_101 = g5c3;
            rax102 = *r12_101;
            tmp64_103 = &g5d3->f7fc;
            v104 = r8_97;
            if (reinterpret_cast<uint64_t>(rax102) >= reinterpret_cast<uint64_t>(tmp64_103)) {
                rcx105 = g9fa;
                v106 = *rcx105;
                rcx107 = ga08;
                v108 = *rcx107;
                rbx109 = ga1a;
                rbx110 = &rbx109->f800;
                r14_111 = ga24;
                while (1) {
                    if (reinterpret_cast<uint64_t>(rax102) < reinterpret_cast<uint64_t>(rbx110)) {
                        addr_a3a_57:
                        rdx112 = rax102 + 1;
                        *r12_101 = rdx112;
                        r15d98 = r15d98 | static_cast<uint32_t>(*rax102) << reinterpret_cast<unsigned char>(24 - *reinterpret_cast<signed char*>(&rbp100));
                        *rsi11 = r15d98;
                        ecx113 = static_cast<int32_t>(rbp100 + 8);
                        rax102 = rdx112;
                        less114 = *reinterpret_cast<int32_t*>(&rbp100) < 17;
                        *reinterpret_cast<int32_t*>(&rbp100) = ecx113;
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp100) + 4) = reinterpret_cast<int32_t>(printf);
                        if (!less114) 
                            break; else 
                            continue;
                    } else {
                        rsi115 = ga77;
                        fun_a7c(r14_111, rsi115, 0x800);
                        *r12_101 = r14_111;
                        if (v108 != printf) 
                            goto addr_a87_60;
                    }
                    addr_a30_61:
                    rax102 = r14_111;
                    rsi11 = ga3a;
                    goto addr_a3a_57;
                    addr_a87_60:
                    rcx116 = reinterpret_cast<int32_t>(v106 - 0x800);
                    rax117 = ga99;
                    v106 = rcx116;
                    *rax117 = rcx116;
                    goto addr_a30_61;
                }
            } else {
                do {
                    rdx118 = rax102 + 1;
                    *r12_101 = rdx118;
                    r15d98 = r15d98 | static_cast<uint32_t>(*rax102) << reinterpret_cast<unsigned char>(24 - *reinterpret_cast<signed char*>(&rbp100));
                    *rsi11 = r15d98;
                    ecx113 = static_cast<int32_t>(rbp100 + 8);
                    rax102 = rdx118;
                    less119 = *reinterpret_cast<int32_t*>(&rbp100) < 17;
                    *reinterpret_cast<int32_t*>(&rbp100) = ecx113;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp100) + 4) = reinterpret_cast<int32_t>(printf);
                } while (less119);
            }
            rax120 = g61c;
            *rax120 = ecx113;
            r8_97 = v104;
        }
        sf121 = *reinterpret_cast<int32_t*>(&r8_97) < reinterpret_cast<int32_t>(printf);
        goto addr_92e_66;
    }
    addr_922_67:
    sf121 = *reinterpret_cast<int32_t*>(&r9_48) < reinterpret_cast<int32_t>(printf);
    addr_92e_66:
    if (!sf121) {
        goto addr_931_9;
    }
    addr_8b5_26:
    v122 = r9_48;
    rbp123 = g8c1;
    rax124 = *rbp123;
    tmp64_125 = &g8d1->f7fc;
    if (reinterpret_cast<uint64_t>(rax124) >= reinterpret_cast<uint64_t>(tmp64_125)) {
        rcx126 = gc83;
        r12_127 = *rcx126;
        rcx128 = gc8d;
        v129 = *rcx128;
        r14_130 = gc9e;
        r14_131 = &r14_130->f800;
        rbx132 = gca8;
        while (1) {
            if (reinterpret_cast<uint64_t>(rax124) < reinterpret_cast<uint64_t>(r14_131)) {
                addr_cba_71:
                rdx133 = rax124 + 1;
                *rbp123 = rdx133;
                r15d49 = r15d49 | static_cast<uint32_t>(*rax124) << reinterpret_cast<unsigned char>(24 - *reinterpret_cast<signed char*>(&r13_51));
                *rsi11 = r15d49;
                ecx134 = static_cast<int32_t>(r13_51 + 8);
                rax124 = rdx133;
                less135 = *reinterpret_cast<int32_t*>(&r13_51) < 17;
                *reinterpret_cast<int32_t*>(&r13_51) = ecx134;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_51) + 4) = reinterpret_cast<int32_t>(printf);
                if (!less135) 
                    break; else 
                    continue;
            } else {
                rsi136 = gcfa;
                fun_cff(rbx132, rsi136, 0x800);
                *rbp123 = rbx132;
                if (v129 != printf) 
                    goto addr_d09_74;
            }
            addr_cb0_75:
            rax124 = rbx132;
            rsi11 = gcba;
            goto addr_cba_71;
            addr_d09_74:
            r12_127 = r12_127 - 0x800;
            rax137 = gd17;
            *rax137 = r12_127;
            goto addr_cb0_75;
        }
    } else {
        do {
            rdx138 = rax124 + 1;
            *rbp123 = rdx138;
            r15d49 = r15d49 | static_cast<uint32_t>(*rax124) << reinterpret_cast<unsigned char>(24 - *reinterpret_cast<signed char*>(&r13_51));
            *rsi11 = r15d49;
            ecx134 = static_cast<int32_t>(r13_51 + 8);
            rax124 = rdx138;
            less139 = *reinterpret_cast<int32_t*>(&r13_51) < 17;
            *reinterpret_cast<int32_t*>(&r13_51) = ecx134;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_51) + 4) = reinterpret_cast<int32_t>(printf);
        } while (less139);
    }
    rax140 = g90f;
    *rax140 = ecx134;
    addr_91d_79:
    r9_48 = v122;
    goto addr_922_67;
    addr_6f7_40:
    r13_141 = g6fe;
    rax142 = *r13_141;
    tmp64_143 = &g70e->f7fc;
    v122 = r9_48;
    if (reinterpret_cast<uint64_t>(rax142) >= reinterpret_cast<uint64_t>(tmp64_143)) {
        rcx144 = gb43;
        r12_145 = *rcx144;
        rcx146 = gb4d;
        v147 = *rcx146;
        r14_148 = gb5e;
        r14_149 = &r14_148->f800;
        rbx150 = gb68;
        while (1) {
            if (reinterpret_cast<uint64_t>(rax142) < reinterpret_cast<uint64_t>(r14_149)) {
                addr_b7a_82:
                rdx151 = rax142 + 1;
                *r13_141 = rdx151;
                r15d72 = r15d72 | static_cast<uint32_t>(*rax142) << reinterpret_cast<unsigned char>(24 - *reinterpret_cast<signed char*>(&rbp74));
                *rsi11 = r15d72;
                ecx152 = static_cast<int32_t>(rbp74 + 8);
                rax142 = rdx151;
                less153 = *reinterpret_cast<int32_t*>(&rbp74) < 17;
                *reinterpret_cast<int32_t*>(&rbp74) = ecx152;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp74) + 4) = reinterpret_cast<int32_t>(printf);
                if (!less153) 
                    break; else 
                    continue;
            } else {
                rsi154 = gbb7;
                fun_bbc(rbx150, rsi154, 0x800);
                *r13_141 = rbx150;
                if (v147 != printf) 
                    goto addr_bc6_85;
            }
            addr_b70_86:
            rax142 = rbx150;
            rsi11 = gb7a;
            goto addr_b7a_82;
            addr_bc6_85:
            r12_145 = r12_145 - 0x800;
            rax155 = gbd4;
            *rax155 = r12_145;
            goto addr_b70_86;
        }
    } else {
        do {
            rdx156 = rax142 + 1;
            *r13_141 = rdx156;
            r15d72 = r15d72 | static_cast<uint32_t>(*rax142) << reinterpret_cast<unsigned char>(24 - *reinterpret_cast<signed char*>(&rbp74));
            *rsi11 = r15d72;
            ecx152 = static_cast<int32_t>(rbp74 + 8);
            rax142 = rdx156;
            less157 = *reinterpret_cast<int32_t*>(&rbp74) < 17;
            *reinterpret_cast<int32_t*>(&rbp74) = ecx152;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp74) + 4) = reinterpret_cast<int32_t>(printf);
        } while (less157);
    }
    rax158 = g74c;
    *rax158 = ecx152;
    goto addr_91d_79;
}

void fun_9cd(unsigned char* rdi, int64_t rsi, int64_t rdx) {
    int64_t* r12_4;
    int64_t r14_5;
    int32_t v6;
    int32_t* rax7;
    unsigned char* rax8;
    unsigned char* r14_9;
    uint32_t* rsi10;
    unsigned char* rdx11;
    unsigned char** r12_12;
    uint32_t ebp13;
    int64_t r15_14;
    int32_t ecx15;
    int1_t less16;
    unsigned char* rbx17;
    int64_t rsi18;
    unsigned char* r14_19;
    int32_t* rdx20;
    int64_t r8_21;
    uint32_t r15d22;
    int64_t rax23;
    int64_t rbp24;
    unsigned char** r12_25;
    unsigned char* rax26;
    unsigned char* tmp64_27;
    int64_t v28;
    int32_t* rcx29;
    int32_t v30;
    int32_t* rcx31;
    int32_t v32;
    struct s7* rbx33;
    unsigned char* rbx34;
    unsigned char* r14_35;
    unsigned char* rdx36;
    int32_t ecx37;
    int1_t less38;
    int64_t rsi39;
    int32_t rcx40;
    int32_t* rax41;
    unsigned char* rdx42;
    int1_t less43;
    int32_t* rax44;
    int64_t v45;

    while (1) {
        *r12_4 = r14_5;
        if (v6 != printf) {
            rax7 = g9ea;
            *rax7 = reinterpret_cast<int32_t>(reinterpret_cast<int32_t>(__return_address()) - 0x800);
        }
        rax8 = r14_9;
        rsi10 = g98a;
        do {
            rdx11 = rax8 + 1;
            *r12_12 = rdx11;
            ebp13 = ebp13 | static_cast<uint32_t>(*rax8) << reinterpret_cast<unsigned char>(24 - *reinterpret_cast<signed char*>(&r15_14));
            *rsi10 = ebp13;
            ecx15 = static_cast<int32_t>(r15_14 + 8);
            rax8 = rdx11;
            less16 = *reinterpret_cast<int32_t*>(&r15_14) < 17;
            *reinterpret_cast<int32_t*>(&r15_14) = ecx15;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_14) + 4) = reinterpret_cast<int32_t>(printf);
            if (!less16) 
                goto addr_596_5;
        } while (reinterpret_cast<uint64_t>(rax8) < reinterpret_cast<uint64_t>(rbx17));
        rsi18 = g9c8;
        fun_9cd(r14_19, rsi18, 0x800);
    }
    addr_596_5:
    rdx20 = g59d;
    *rdx20 = ecx15;
    *reinterpret_cast<uint32_t*>(&r8_21) = *rsi10;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_21) + 4) = reinterpret_cast<int32_t>(printf);
    r15d22 = static_cast<uint32_t>(r8_21 + r8_21);
    *rsi10 = r15d22;
    *reinterpret_cast<int32_t*>(&rax23) = *rdx20;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax23) + 4) = reinterpret_cast<int32_t>(printf);
    *reinterpret_cast<int32_t*>(&rbp24) = static_cast<int32_t>(rax23 - 1);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp24) + 4) = reinterpret_cast<int32_t>(printf);
    *rdx20 = *reinterpret_cast<int32_t*>(&rbp24);
    if (*reinterpret_cast<int32_t*>(&rax23) <= 25) {
        r12_25 = g5c3;
        rax26 = *r12_25;
        tmp64_27 = &g5d3->f7fc;
        v28 = r8_21;
        if (reinterpret_cast<uint64_t>(rax26) >= reinterpret_cast<uint64_t>(tmp64_27)) {
            rcx29 = g9fa;
            v30 = *rcx29;
            rcx31 = ga08;
            v32 = *rcx31;
            rbx33 = ga1a;
            rbx34 = &rbx33->f800;
            r14_35 = ga24;
            while (1) {
                if (reinterpret_cast<uint64_t>(rax26) < reinterpret_cast<uint64_t>(rbx34)) {
                    addr_a3a_12:
                    rdx36 = rax26 + 1;
                    *r12_25 = rdx36;
                    r15d22 = r15d22 | static_cast<uint32_t>(*rax26) << reinterpret_cast<unsigned char>(24 - *reinterpret_cast<signed char*>(&rbp24));
                    *rsi10 = r15d22;
                    ecx37 = static_cast<int32_t>(rbp24 + 8);
                    rax26 = rdx36;
                    less38 = *reinterpret_cast<int32_t*>(&rbp24) < 17;
                    *reinterpret_cast<int32_t*>(&rbp24) = ecx37;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp24) + 4) = reinterpret_cast<int32_t>(printf);
                    if (!less38) 
                        break; else 
                        continue;
                } else {
                    rsi39 = ga77;
                    fun_a7c(r14_35, rsi39, 0x800);
                    *r12_25 = r14_35;
                    if (v32 != printf) 
                        goto addr_a87_15;
                }
                addr_a30_16:
                rax26 = r14_35;
                rsi10 = ga3a;
                goto addr_a3a_12;
                addr_a87_15:
                rcx40 = reinterpret_cast<int32_t>(v30 - 0x800);
                rax41 = ga99;
                v30 = rcx40;
                *rax41 = rcx40;
                goto addr_a30_16;
            }
        } else {
            do {
                rdx42 = rax26 + 1;
                *r12_25 = rdx42;
                r15d22 = r15d22 | static_cast<uint32_t>(*rax26) << reinterpret_cast<unsigned char>(24 - *reinterpret_cast<signed char*>(&rbp24));
                *rsi10 = r15d22;
                ecx37 = static_cast<int32_t>(rbp24 + 8);
                rax26 = rdx42;
                less43 = *reinterpret_cast<int32_t*>(&rbp24) < 17;
                *reinterpret_cast<int32_t*>(&rbp24) = ecx37;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp24) + 4) = reinterpret_cast<int32_t>(printf);
            } while (less43);
        }
        rax44 = g61c;
        *rax44 = ecx37;
        r8_21 = v28;
    }
    if (*reinterpret_cast<int32_t*>(&r8_21) >= reinterpret_cast<int32_t>(printf)) {
    }
    goto v45;
}

void fun_a7c(unsigned char* rdi, int64_t rsi, int64_t rdx) {
    int64_t* r12_4;
    int64_t r14_5;
    int32_t v6;
    int32_t* rax7;
    unsigned char* rax8;
    unsigned char* r14_9;
    uint32_t* rsi10;
    unsigned char* rdx11;
    unsigned char** r12_12;
    uint32_t r15d13;
    int64_t rbp14;
    int32_t ecx15;
    int1_t less16;
    unsigned char* rbx17;
    int64_t rsi18;
    unsigned char* r14_19;
    int32_t* rax20;
    int64_t r8_21;
    int64_t v22;
    int64_t v23;

    while (1) {
        *r12_4 = r14_5;
        if (v6 != printf) {
            rax7 = ga99;
            *rax7 = reinterpret_cast<int32_t>(reinterpret_cast<int64_t>(__return_address()) - 0x800);
        }
        rax8 = r14_9;
        rsi10 = ga3a;
        do {
            rdx11 = rax8 + 1;
            *r12_12 = rdx11;
            r15d13 = r15d13 | static_cast<uint32_t>(*rax8) << reinterpret_cast<unsigned char>(24 - *reinterpret_cast<signed char*>(&rbp14));
            *rsi10 = r15d13;
            ecx15 = static_cast<int32_t>(rbp14 + 8);
            rax8 = rdx11;
            less16 = *reinterpret_cast<int32_t*>(&rbp14) < 17;
            *reinterpret_cast<int32_t*>(&rbp14) = ecx15;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp14) + 4) = reinterpret_cast<int32_t>(printf);
            if (!less16) 
                goto addr_615_5;
        } while (reinterpret_cast<uint64_t>(rax8) < reinterpret_cast<uint64_t>(rbx17));
        rsi18 = ga77;
        fun_a7c(r14_19, rsi18, 0x800);
    }
    addr_615_5:
    rax20 = g61c;
    *rax20 = ecx15;
    r8_21 = v22;
    if (*reinterpret_cast<int32_t*>(&r8_21) >= reinterpret_cast<int32_t>(printf)) {
    }
    goto v23;
}

void fun_b1f(unsigned char* rdi, int64_t rsi, int64_t rdx) {
    int64_t v4;
    int64_t* rbp5;
    int64_t rbx6;
    int64_t r12_7;
    int64_t* rax8;
    unsigned char* rax9;
    unsigned char* rbx10;
    uint32_t* rsi11;
    unsigned char* rdx12;
    unsigned char** rbp13;
    uint32_t r13d14;
    int64_t r15_15;
    int32_t ecx16;
    int1_t less17;
    unsigned char* r14_18;
    int64_t rsi19;
    unsigned char* rbx20;
    int32_t* rdx21;
    int64_t r9_22;
    uint32_t r15d23;
    int64_t rax24;
    int64_t rbp25;
    unsigned char** r13_26;
    unsigned char* rax27;
    unsigned char* tmp64_28;
    int64_t v29;
    int64_t* rcx30;
    int64_t r12_31;
    int32_t* rcx32;
    int32_t v33;
    struct s11* r14_34;
    unsigned char* r14_35;
    unsigned char* rbx36;
    unsigned char* rdx37;
    int32_t ecx38;
    int1_t less39;
    int64_t rsi40;
    int64_t* rax41;
    unsigned char* rdx42;
    int1_t less43;
    int32_t* rax44;
    int64_t v45;

    while (1) {
        v4 = reinterpret_cast<int64_t>(__return_address());
        *rbp5 = rbx6;
        if (*reinterpret_cast<int32_t*>(&v4) != printf) {
            r12_7 = r12_7 - 0x800;
            rax8 = gb37;
            *rax8 = r12_7;
        }
        rax9 = rbx10;
        rsi11 = gada;
        do {
            rdx12 = rax9 + 1;
            *rbp13 = rdx12;
            r13d14 = r13d14 | static_cast<uint32_t>(*rax9) << reinterpret_cast<unsigned char>(24 - *reinterpret_cast<signed char*>(&r15_15));
            *rsi11 = r13d14;
            ecx16 = static_cast<int32_t>(r15_15 + 8);
            rax9 = rdx12;
            less17 = *reinterpret_cast<int32_t*>(&r15_15) < 17;
            *reinterpret_cast<int32_t*>(&r15_15) = ecx16;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_15) + 4) = reinterpret_cast<int32_t>(printf);
            if (!less17) 
                goto addr_6c8_5;
        } while (reinterpret_cast<uint64_t>(rax9) < reinterpret_cast<uint64_t>(r14_18));
        rsi19 = gb1a;
        fun_b1f(rbx20, rsi19, 0x800);
    }
    addr_6c8_5:
    rdx21 = g6cf;
    *rdx21 = ecx16;
    *reinterpret_cast<uint32_t*>(&r9_22) = *rsi11;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_22) + 4) = reinterpret_cast<int32_t>(printf);
    r15d23 = static_cast<uint32_t>(r9_22 + r9_22);
    *rsi11 = r15d23;
    *reinterpret_cast<int32_t*>(&rax24) = *rdx21;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax24) + 4) = reinterpret_cast<int32_t>(printf);
    *reinterpret_cast<int32_t*>(&rbp25) = static_cast<int32_t>(rax24 - 1);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp25) + 4) = reinterpret_cast<int32_t>(printf);
    *rdx21 = *reinterpret_cast<int32_t*>(&rbp25);
    if (*reinterpret_cast<int32_t*>(&rax24) <= 25) {
        r13_26 = g6fe;
        rax27 = *r13_26;
        tmp64_28 = &g70e->f7fc;
        v29 = r9_22;
        if (reinterpret_cast<uint64_t>(rax27) >= reinterpret_cast<uint64_t>(tmp64_28)) {
            rcx30 = gb43;
            r12_31 = *rcx30;
            rcx32 = gb4d;
            v33 = *rcx32;
            r14_34 = gb5e;
            r14_35 = &r14_34->f800;
            rbx36 = gb68;
            while (1) {
                if (reinterpret_cast<uint64_t>(rax27) < reinterpret_cast<uint64_t>(r14_35)) {
                    addr_b7a_12:
                    rdx37 = rax27 + 1;
                    *r13_26 = rdx37;
                    r15d23 = r15d23 | static_cast<uint32_t>(*rax27) << reinterpret_cast<unsigned char>(24 - *reinterpret_cast<signed char*>(&rbp25));
                    *rsi11 = r15d23;
                    ecx38 = static_cast<int32_t>(rbp25 + 8);
                    rax27 = rdx37;
                    less39 = *reinterpret_cast<int32_t*>(&rbp25) < 17;
                    *reinterpret_cast<int32_t*>(&rbp25) = ecx38;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp25) + 4) = reinterpret_cast<int32_t>(printf);
                    if (!less39) 
                        break; else 
                        continue;
                } else {
                    rsi40 = gbb7;
                    fun_bbc(rbx36, rsi40, 0x800);
                    *r13_26 = rbx36;
                    if (v33 != printf) 
                        goto addr_bc6_15;
                }
                addr_b70_16:
                rax27 = rbx36;
                rsi11 = gb7a;
                goto addr_b7a_12;
                addr_bc6_15:
                r12_31 = r12_31 - 0x800;
                rax41 = gbd4;
                *rax41 = r12_31;
                goto addr_b70_16;
            }
        } else {
            do {
                rdx42 = rax27 + 1;
                *r13_26 = rdx42;
                r15d23 = r15d23 | static_cast<uint32_t>(*rax27) << reinterpret_cast<unsigned char>(24 - *reinterpret_cast<signed char*>(&rbp25));
                *rsi11 = r15d23;
                ecx38 = static_cast<int32_t>(rbp25 + 8);
                rax27 = rdx42;
                less43 = *reinterpret_cast<int32_t*>(&rbp25) < 17;
                *reinterpret_cast<int32_t*>(&rbp25) = ecx38;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp25) + 4) = reinterpret_cast<int32_t>(printf);
            } while (less43);
        }
        rax44 = g74c;
        *rax44 = ecx38;
        r9_22 = v29;
    }
    if (*reinterpret_cast<int32_t*>(&r9_22) >= reinterpret_cast<int32_t>(printf)) {
    }
    goto v45;
}

void fun_bbc(unsigned char* rdi, int64_t rsi, int64_t rdx) {
    int64_t v4;
    int64_t* r13_5;
    int64_t rbx6;
    int64_t r12_7;
    int64_t* rax8;
    unsigned char* rax9;
    unsigned char* rbx10;
    uint32_t* rsi11;
    unsigned char* rdx12;
    unsigned char** r13_13;
    uint32_t r15d14;
    int64_t rbp15;
    int32_t ecx16;
    int1_t less17;
    unsigned char* r14_18;
    int64_t rsi19;
    unsigned char* rbx20;
    int32_t* rax21;
    int64_t r9_22;
    int64_t v23;
    int64_t v24;

    while (1) {
        v4 = reinterpret_cast<int64_t>(__return_address());
        *r13_5 = rbx6;
        if (*reinterpret_cast<int32_t*>(&v4) != printf) {
            r12_7 = r12_7 - 0x800;
            rax8 = gbd4;
            *rax8 = r12_7;
        }
        rax9 = rbx10;
        rsi11 = gb7a;
        do {
            rdx12 = rax9 + 1;
            *r13_13 = rdx12;
            r15d14 = r15d14 | static_cast<uint32_t>(*rax9) << reinterpret_cast<unsigned char>(24 - *reinterpret_cast<signed char*>(&rbp15));
            *rsi11 = r15d14;
            ecx16 = static_cast<int32_t>(rbp15 + 8);
            rax9 = rdx12;
            less17 = *reinterpret_cast<int32_t*>(&rbp15) < 17;
            *reinterpret_cast<int32_t*>(&rbp15) = ecx16;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp15) + 4) = reinterpret_cast<int32_t>(printf);
            if (!less17) 
                goto addr_745_5;
        } while (reinterpret_cast<uint64_t>(rax9) < reinterpret_cast<uint64_t>(r14_18));
        rsi19 = gbb7;
        fun_bbc(rbx20, rsi19, 0x800);
    }
    addr_745_5:
    rax21 = g74c;
    *rax21 = ecx16;
    r9_22 = v23;
    if (*reinterpret_cast<int32_t*>(&r9_22) >= reinterpret_cast<int32_t>(printf)) {
    }
    goto v24;
}

void fun_c5f(unsigned char* rdi, int64_t rsi, int64_t rdx) {
    int64_t v4;
    int64_t* rbp5;
    int64_t rbx6;
    int64_t r12_7;
    int64_t* rax8;
    unsigned char* rax9;
    unsigned char* rbx10;
    uint32_t* rsi11;
    unsigned char* rdx12;
    unsigned char** rbp13;
    uint32_t r13d14;
    int64_t r15_15;
    int32_t ecx16;
    int1_t less17;
    unsigned char* r14_18;
    int64_t rsi19;
    unsigned char* rbx20;
    int32_t* rdx21;
    int64_t r9_22;
    uint32_t r15d23;
    int64_t rax24;
    int64_t r13_25;
    int64_t v26;
    unsigned char** rbp27;
    unsigned char* rax28;
    unsigned char* tmp64_29;
    int64_t* rcx30;
    int64_t r12_31;
    int32_t* rcx32;
    int32_t v33;
    struct s9* r14_34;
    unsigned char* r14_35;
    unsigned char* rbx36;
    unsigned char* rdx37;
    int32_t ecx38;
    int1_t less39;
    int64_t rsi40;
    int64_t* rax41;
    unsigned char* rdx42;
    int1_t less43;
    int32_t* rax44;
    int64_t v45;

    while (1) {
        v4 = reinterpret_cast<int64_t>(__return_address());
        *rbp5 = rbx6;
        if (*reinterpret_cast<int32_t*>(&v4) != printf) {
            r12_7 = r12_7 - 0x800;
            rax8 = gc77;
            *rax8 = r12_7;
        }
        rax9 = rbx10;
        rsi11 = gc1a;
        do {
            rdx12 = rax9 + 1;
            *rbp13 = rdx12;
            r13d14 = r13d14 | static_cast<uint32_t>(*rax9) << reinterpret_cast<unsigned char>(24 - *reinterpret_cast<signed char*>(&r15_15));
            *rsi11 = r13d14;
            ecx16 = static_cast<int32_t>(r15_15 + 8);
            rax9 = rdx12;
            less17 = *reinterpret_cast<int32_t*>(&r15_15) < 17;
            *reinterpret_cast<int32_t*>(&r15_15) = ecx16;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_15) + 4) = reinterpret_cast<int32_t>(printf);
            if (!less17) 
                goto addr_888_5;
        } while (reinterpret_cast<uint64_t>(rax9) < reinterpret_cast<uint64_t>(r14_18));
        rsi19 = gc5a;
        fun_c5f(rbx20, rsi19, 0x800);
    }
    addr_888_5:
    rdx21 = g88f;
    *rdx21 = ecx16;
    *reinterpret_cast<uint32_t*>(&r9_22) = *rsi11;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_22) + 4) = reinterpret_cast<int32_t>(printf);
    r15d23 = static_cast<uint32_t>(r9_22 + r9_22);
    *rsi11 = r15d23;
    *reinterpret_cast<int32_t*>(&rax24) = *rdx21;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax24) + 4) = reinterpret_cast<int32_t>(printf);
    *reinterpret_cast<int32_t*>(&r13_25) = static_cast<int32_t>(rax24 - 1);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_25) + 4) = reinterpret_cast<int32_t>(printf);
    *rdx21 = *reinterpret_cast<int32_t*>(&r13_25);
    if (*reinterpret_cast<int32_t*>(&rax24) <= 25) {
        v26 = r9_22;
        rbp27 = g8c1;
        rax28 = *rbp27;
        tmp64_29 = &g8d1->f7fc;
        if (reinterpret_cast<uint64_t>(rax28) >= reinterpret_cast<uint64_t>(tmp64_29)) {
            rcx30 = gc83;
            r12_31 = *rcx30;
            rcx32 = gc8d;
            v33 = *rcx32;
            r14_34 = gc9e;
            r14_35 = &r14_34->f800;
            rbx36 = gca8;
            while (1) {
                if (reinterpret_cast<uint64_t>(rax28) < reinterpret_cast<uint64_t>(r14_35)) {
                    addr_cba_12:
                    rdx37 = rax28 + 1;
                    *rbp27 = rdx37;
                    r15d23 = r15d23 | static_cast<uint32_t>(*rax28) << reinterpret_cast<unsigned char>(24 - *reinterpret_cast<signed char*>(&r13_25));
                    *rsi11 = r15d23;
                    ecx38 = static_cast<int32_t>(r13_25 + 8);
                    rax28 = rdx37;
                    less39 = *reinterpret_cast<int32_t*>(&r13_25) < 17;
                    *reinterpret_cast<int32_t*>(&r13_25) = ecx38;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_25) + 4) = reinterpret_cast<int32_t>(printf);
                    if (!less39) 
                        break; else 
                        continue;
                } else {
                    rsi40 = gcfa;
                    fun_cff(rbx36, rsi40, 0x800);
                    *rbp27 = rbx36;
                    if (v33 != printf) 
                        goto addr_d09_15;
                }
                addr_cb0_16:
                rax28 = rbx36;
                rsi11 = gcba;
                goto addr_cba_12;
                addr_d09_15:
                r12_31 = r12_31 - 0x800;
                rax41 = gd17;
                *rax41 = r12_31;
                goto addr_cb0_16;
            }
        } else {
            do {
                rdx42 = rax28 + 1;
                *rbp27 = rdx42;
                r15d23 = r15d23 | static_cast<uint32_t>(*rax28) << reinterpret_cast<unsigned char>(24 - *reinterpret_cast<signed char*>(&r13_25));
                *rsi11 = r15d23;
                ecx38 = static_cast<int32_t>(r13_25 + 8);
                rax28 = rdx42;
                less43 = *reinterpret_cast<int32_t*>(&r13_25) < 17;
                *reinterpret_cast<int32_t*>(&r13_25) = ecx38;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_25) + 4) = reinterpret_cast<int32_t>(printf);
            } while (less43);
        }
        rax44 = g90f;
        *rax44 = ecx38;
        r9_22 = v26;
    }
    if (*reinterpret_cast<int32_t*>(&r9_22) >= reinterpret_cast<int32_t>(printf)) {
    }
    goto v45;
}

void fun_cff(unsigned char* rdi, int64_t rsi, int64_t rdx) {
    int64_t v4;
    int64_t* rbp5;
    int64_t rbx6;
    int64_t r12_7;
    int64_t* rax8;
    unsigned char* rax9;
    unsigned char* rbx10;
    uint32_t* rsi11;
    unsigned char* rdx12;
    unsigned char** rbp13;
    uint32_t r15d14;
    int64_t r13_15;
    int32_t ecx16;
    int1_t less17;
    unsigned char* r14_18;
    int64_t rsi19;
    unsigned char* rbx20;
    int32_t* rax21;
    int64_t r9_22;
    int64_t v23;
    int64_t v24;

    while (1) {
        v4 = reinterpret_cast<int64_t>(__return_address());
        *rbp5 = rbx6;
        if (*reinterpret_cast<int32_t*>(&v4) != printf) {
            r12_7 = r12_7 - 0x800;
            rax8 = gd17;
            *rax8 = r12_7;
        }
        rax9 = rbx10;
        rsi11 = gcba;
        do {
            rdx12 = rax9 + 1;
            *rbp13 = rdx12;
            r15d14 = r15d14 | static_cast<uint32_t>(*rax9) << reinterpret_cast<unsigned char>(24 - *reinterpret_cast<signed char*>(&r13_15));
            *rsi11 = r15d14;
            ecx16 = static_cast<int32_t>(r13_15 + 8);
            rax9 = rdx12;
            less17 = *reinterpret_cast<int32_t*>(&r13_15) < 17;
            *reinterpret_cast<int32_t*>(&r13_15) = ecx16;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_15) + 4) = reinterpret_cast<int32_t>(printf);
            if (!less17) 
                goto addr_908_5;
        } while (reinterpret_cast<uint64_t>(rax9) < reinterpret_cast<uint64_t>(r14_18));
        rsi19 = gcfa;
        fun_cff(rbx20, rsi19, 0x800);
    }
    addr_908_5:
    rax21 = g90f;
    *rax21 = ecx16;
    r9_22 = v23;
    if (*reinterpret_cast<int32_t*>(&r9_22) >= reinterpret_cast<int32_t>(printf)) {
    }
    goto v24;
}

int64_t* gee4 = reinterpret_cast<int64_t*>(0xd8b4897eb30894c);

uint32_t* ge8a = reinterpret_cast<uint32_t*>(0xf17894901508d48);

int64_t gec7 = 0x1f894900000000e8;

int32_t* gdac = reinterpret_cast<int32_t*>(0x548b48c189480889);

unsigned char** gddd = reinterpret_cast<unsigned char**>(0x7fcb9078b49);

struct s12 {
    signed char[2044] pad2044;
    unsigned char f7fc;
};

struct s12* gdec = reinterpret_cast<struct s12*>(0xf4830fc83948);

int64_t* gef0 = reinterpret_cast<int64_t*>(0xd8b48318b4c);

int32_t* gefa = reinterpret_cast<int32_t*>(0xb90c244c89098b);

struct s13 {
    signed char[2048] pad2048;
    unsigned char f800;
};

struct s13* gf0c = reinterpret_cast<struct s13*>(0x1d8b48cc0149);

unsigned char* gf16 = reinterpret_cast<unsigned char*>(0x841f0f3beb);

int64_t gf67 = 0x1f894900000000e8;

void fun_f6c(unsigned char* rdi, int64_t rsi, int64_t rdx);

uint32_t* gf2a = reinterpret_cast<uint32_t*>(0xf17894901508d48);

int64_t* gf84 = reinterpret_cast<int64_t*>(0x801f0f97eb30894c);

int32_t* ge2c = reinterpret_cast<int32_t*>(0xc11024448b480889);

void fun_ecc(int64_t rdi, int64_t rsi, int64_t rdx) {
    int64_t* r15_4;
    int64_t rbx5;
    int32_t v6;
    int64_t r14_7;
    int64_t tmp64_8;
    int64_t* rax9;
    unsigned char* rax10;
    unsigned char* rbx11;
    uint32_t* rsi12;
    unsigned char* rdx13;
    unsigned char** r15_14;
    uint32_t ebp15;
    int64_t r13_16;
    int32_t ecx17;
    int1_t less18;
    unsigned char* r12_19;
    int64_t rsi20;
    int64_t rbx21;
    int32_t* rax22;
    int64_t rdx23;
    int64_t v24;
    int64_t rax25;
    uint32_t ebp26;
    int64_t rdx27;
    int64_t r13_28;
    unsigned char** r15_29;
    unsigned char* rax30;
    unsigned char* tmp64_31;
    int64_t* rcx32;
    int64_t r14_33;
    int32_t* rcx34;
    int32_t v35;
    struct s13* r12_36;
    unsigned char* r12_37;
    unsigned char* rbx38;
    unsigned char* rdx39;
    int32_t ecx40;
    int1_t less41;
    int64_t rsi42;
    int64_t* rax43;
    unsigned char* rdx44;
    int1_t less45;
    int32_t* rax46;
    int64_t v47;

    while (1) {
        *r15_4 = rbx5;
        if (v6 != printf) {
            r14_7 = tmp64_8;
            rax9 = gee4;
            *rax9 = r14_7;
        }
        rax10 = rbx11;
        rsi12 = ge8a;
        do {
            rdx13 = rax10 + 1;
            *r15_14 = rdx13;
            ebp15 = ebp15 | static_cast<uint32_t>(*rax10) << reinterpret_cast<unsigned char>(24 - *reinterpret_cast<signed char*>(&r13_16));
            *rsi12 = ebp15;
            ecx17 = static_cast<int32_t>(r13_16 + 8);
            rax10 = rdx13;
            less18 = *reinterpret_cast<int32_t*>(&r13_16) < 17;
            *reinterpret_cast<int32_t*>(&r13_16) = ecx17;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_16) + 4) = reinterpret_cast<int32_t>(printf);
            if (!less18) 
                goto addr_da5_5;
        } while (reinterpret_cast<uint64_t>(rax10) < reinterpret_cast<uint64_t>(r12_19));
        rsi20 = gec7;
        fun_ecc(rbx21, rsi20, 0x800);
    }
    addr_da5_5:
    rax22 = gdac;
    *rax22 = ecx17;
    rdx23 = v24;
    if (*reinterpret_cast<int32_t*>(&rdx23) < reinterpret_cast<int32_t>(printf)) {
        *reinterpret_cast<uint32_t*>(&rax25) = *rsi12;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax25) + 4) = reinterpret_cast<int32_t>(printf);
        ebp26 = static_cast<uint32_t>(rax25 + rax25);
        *rsi12 = ebp26;
        *reinterpret_cast<int32_t*>(&rdx27) = *rax22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx27) + 4) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<int32_t*>(&r13_28) = static_cast<int32_t>(rdx27 - 1);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_28) + 4) = reinterpret_cast<int32_t>(printf);
        *rax22 = *reinterpret_cast<int32_t*>(&r13_28);
        if (*reinterpret_cast<int32_t*>(&rdx27) <= 25) {
            r15_29 = gddd;
            rax30 = *r15_29;
            tmp64_31 = &gdec->f7fc;
            if (reinterpret_cast<uint64_t>(rax30) >= reinterpret_cast<uint64_t>(tmp64_31)) {
                rcx32 = gef0;
                r14_33 = *rcx32;
                rcx34 = gefa;
                v35 = *rcx34;
                r12_36 = gf0c;
                r12_37 = &r12_36->f800;
                rbx38 = gf16;
                while (1) {
                    if (reinterpret_cast<uint64_t>(rax30) < reinterpret_cast<uint64_t>(r12_37)) {
                        addr_f2a_13:
                        rdx39 = rax30 + 1;
                        *r15_29 = rdx39;
                        ebp26 = ebp26 | static_cast<uint32_t>(*rax30) << reinterpret_cast<unsigned char>(24 - *reinterpret_cast<signed char*>(&r13_28));
                        *rsi12 = ebp26;
                        ecx40 = static_cast<int32_t>(r13_28 + 8);
                        rax30 = rdx39;
                        less41 = *reinterpret_cast<int32_t*>(&r13_28) < 17;
                        *reinterpret_cast<int32_t*>(&r13_28) = ecx40;
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_28) + 4) = reinterpret_cast<int32_t>(printf);
                        if (!less41) 
                            break; else 
                            continue;
                    } else {
                        rsi42 = gf67;
                        fun_f6c(rbx38, rsi42, 0x800);
                        *r15_29 = rbx38;
                        if (v35 != printf) 
                            goto addr_f76_16;
                    }
                    addr_f20_17:
                    rax30 = rbx38;
                    rsi12 = gf2a;
                    goto addr_f2a_13;
                    addr_f76_16:
                    r14_33 = r14_33 - 0x800;
                    rax43 = gf84;
                    *rax43 = r14_33;
                    goto addr_f20_17;
                }
            } else {
                do {
                    rdx44 = rax30 + 1;
                    *r15_29 = rdx44;
                    ebp26 = ebp26 | static_cast<uint32_t>(*rax30) << reinterpret_cast<unsigned char>(24 - *reinterpret_cast<signed char*>(&r13_28));
                    *rsi12 = ebp26;
                    ecx40 = static_cast<int32_t>(r13_28 + 8);
                    rax30 = rdx44;
                    less45 = *reinterpret_cast<int32_t*>(&r13_28) < 17;
                    *reinterpret_cast<int32_t*>(&r13_28) = ecx40;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_28) + 4) = reinterpret_cast<int32_t>(printf);
                } while (less45);
            }
            rax46 = ge2c;
            *rax46 = ecx40;
        }
    }
    goto v47;
}

void fun_f6c(unsigned char* rdi, int64_t rsi, int64_t rdx) {
    int64_t* r15_4;
    int64_t rbx5;
    int32_t v6;
    int64_t r14_7;
    int64_t* rax8;
    unsigned char* rax9;
    unsigned char* rbx10;
    uint32_t* rsi11;
    unsigned char* rdx12;
    unsigned char** r15_13;
    uint32_t ebp14;
    int64_t r13_15;
    int32_t ecx16;
    int1_t less17;
    unsigned char* r12_18;
    int64_t rsi19;
    unsigned char* rbx20;
    int32_t* rax21;
    int64_t v22;

    while (1) {
        *r15_4 = rbx5;
        if (v6 != printf) {
            r14_7 = r14_7 - 0x800;
            rax8 = gf84;
            *rax8 = r14_7;
        }
        rax9 = rbx10;
        rsi11 = gf2a;
        do {
            rdx12 = rax9 + 1;
            *r15_13 = rdx12;
            ebp14 = ebp14 | static_cast<uint32_t>(*rax9) << reinterpret_cast<unsigned char>(24 - *reinterpret_cast<signed char*>(&r13_15));
            *rsi11 = ebp14;
            ecx16 = static_cast<int32_t>(r13_15 + 8);
            rax9 = rdx12;
            less17 = *reinterpret_cast<int32_t*>(&r13_15) < 17;
            *reinterpret_cast<int32_t*>(&r13_15) = ecx16;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_15) + 4) = reinterpret_cast<int32_t>(printf);
            if (!less17) 
                goto addr_e25_5;
        } while (reinterpret_cast<uint64_t>(rax9) < reinterpret_cast<uint64_t>(r12_18));
        rsi19 = gf67;
        fun_f6c(rbx20, rsi19, 0x800);
    }
    addr_e25_5:
    rax21 = ge2c;
    *rax21 = ecx16;
    goto v22;
}

uint32_t* g11f4 = reinterpret_cast<uint32_t*>(0x894412348d44178b);

unsigned char** g122f = reinterpret_cast<unsigned char**>(0x7fcb900458b48);

struct s14 {
    signed char[2044] pad2044;
    unsigned char f7fc;
};

struct s14* g123f = reinterpret_cast<struct s14*>(0x145830fc83948);

int64_t* g1394 = reinterpret_cast<int64_t*>(0xd8b48398b4c);

int32_t* g139e = reinterpret_cast<int32_t*>(0xb910244c89098b);

struct s15 {
    signed char[2048] pad2048;
    unsigned char f800;
};

struct s15* g13b0 = reinterpret_cast<struct s15*>(0x258b4ccb0148);

unsigned char* g13ba = reinterpret_cast<unsigned char*>(0x894c00401f0f3aeb);

int64_t g140a = 0x65894c00000000e8;

void fun_140f(unsigned char* rdi, int64_t rsi, int64_t rdx);

uint32_t* g13ca = reinterpret_cast<uint32_t*>(0x55894801508d48);

int64_t* g1428 = reinterpret_cast<int64_t*>(0xd8b4893eb38894c);

int32_t* g127f = reinterpret_cast<int32_t*>(0x98248c8b440889);

void fun_12da();

void fun_11e5() {
    void* r10_1;
    void* v2;
    uint32_t* rdi3;
    int64_t rdx4;
    uint32_t r14d5;
    int64_t rax6;
    int32_t* rbx7;
    int64_t r13_8;
    int32_t* rbx9;
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
    struct s15* rbx20;
    unsigned char* rbx21;
    unsigned char* r12_22;
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

    r10_1 = v2;
    rdi3 = g11f4;
    *reinterpret_cast<uint32_t*>(&rdx4) = *rdi3;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx4) + 4) = reinterpret_cast<int32_t>(printf);
    r14d5 = static_cast<uint32_t>(rdx4 + rdx4);
    *rdi3 = r14d5;
    *reinterpret_cast<int32_t*>(&rax6) = *rbx7;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax6) + 4) = reinterpret_cast<int32_t>(printf);
    *reinterpret_cast<int32_t*>(&r13_8) = static_cast<int32_t>(rax6 - 1);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_8) + 4) = reinterpret_cast<int32_t>(printf);
    *rbx9 = *reinterpret_cast<int32_t*>(&r13_8);
    if (*reinterpret_cast<int32_t*>(&rax6) <= 25) {
        v10 = rdx4;
        v11 = r12_12;
        rbp13 = g122f;
        rax14 = *rbp13;
        tmp64_15 = &g123f->f7fc;
        if (reinterpret_cast<uint64_t>(rax14) >= reinterpret_cast<uint64_t>(tmp64_15)) {
            rcx16 = g1394;
            r15_17 = *rcx16;
            rcx18 = g139e;
            v19 = *rcx18;
            rbx20 = g13b0;
            rbx21 = &rbx20->f800;
            r12_22 = g13ba;
            while (1) {
                if (reinterpret_cast<uint64_t>(rax14) < reinterpret_cast<uint64_t>(rbx21)) {
                    addr_13ca_5:
                    rdx23 = rax14 + 1;
                    *rbp13 = rdx23;
                    r14d5 = r14d5 | static_cast<uint32_t>(*rax14) << reinterpret_cast<unsigned char>(24 - *reinterpret_cast<signed char*>(&r13_8));
                    *rdi3 = r14d5;
                    ecx24 = static_cast<int32_t>(r13_8 + 8);
                    rax14 = rdx23;
                    less25 = *reinterpret_cast<int32_t*>(&r13_8) < 17;
                    *reinterpret_cast<int32_t*>(&r13_8) = ecx24;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_8) + 4) = reinterpret_cast<int32_t>(printf);
                    if (!less25) 
                        break; else 
                        continue;
                } else {
                    rsi26 = g140a;
                    fun_140f(r12_22, rsi26, 0x800);
                    *rbp13 = r12_22;
                    if (v19 != printf) 
                        goto addr_141a_8;
                }
                addr_13c0_9:
                rax14 = r12_22;
                rdi3 = g13ca;
                goto addr_13ca_5;
                addr_141a_8:
                r15_17 = r15_17 - 0x800;
                rax27 = g1428;
                *rax27 = r15_17;
                goto addr_13c0_9;
            }
        } else {
            do {
                rdx28 = rax14 + 1;
                *rbp13 = rdx28;
                r14d5 = r14d5 | static_cast<uint32_t>(*rax14) << reinterpret_cast<unsigned char>(24 - *reinterpret_cast<signed char*>(&r13_8));
                *rdi3 = r14d5;
                ecx24 = static_cast<int32_t>(r13_8 + 8);
                rax14 = rdx28;
                less29 = *reinterpret_cast<int32_t*>(&r13_8) < 17;
                *reinterpret_cast<int32_t*>(&r13_8) = ecx24;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_8) + 4) = reinterpret_cast<int32_t>(printf);
            } while (less29);
        }
        rax30 = g127f;
        *rax30 = ecx24;
        r10_1 = v31;
        r12_32 = v11;
        rdx4 = v10;
    }
    *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(r10_1) + r12_32 * 4 + 8) = *reinterpret_cast<uint32_t*>(&rdx4) >> 31;
    fun_12da();
    goto v33;
}

void fun_12da() {
    int64_t v1;

    goto v1;
}

int64_t* g1388 = reinterpret_cast<int64_t*>(0xd8b4893eb38894c);

uint32_t* g132a = reinterpret_cast<uint32_t*>(0x55894801508d48);

int64_t g136a = 0x6d894c00000000e8;

int32_t* g117f = reinterpret_cast<int32_t*>(0x9824bc8b440b89);

void fun_136f(int64_t rdi, int64_t rsi, int64_t rdx) {
    int64_t* rbp4;
    int64_t r13_5;
    int32_t v6;
    int64_t r15_7;
    int64_t* rax8;
    unsigned char* rax9;
    unsigned char* r13_10;
    uint32_t* rdi11;
    unsigned char* rdx12;
    unsigned char** rbp13;
    uint32_t r12d14;
    int64_t r14_15;
    int32_t ecx16;
    int1_t less17;
    unsigned char* rbx18;
    int64_t rsi19;
    int64_t r13_20;
    int32_t* rbx21;
    int64_t r8_22;
    int64_t v23;
    int64_t r12_24;
    int32_t v25;
    uint32_t* v26;
    void* r10_27;
    void* v28;
    uint32_t* rdi29;
    int64_t rdx30;
    uint32_t r14d31;
    int64_t rax32;
    int64_t r13_33;
    int64_t v34;
    int64_t v35;
    unsigned char** rbp36;
    unsigned char* rax37;
    unsigned char* tmp64_38;
    int64_t* rcx39;
    int64_t r15_40;
    int32_t* rcx41;
    int32_t v42;
    struct s15* rbx43;
    unsigned char* rbx44;
    unsigned char* r12_45;
    unsigned char* rdx46;
    int32_t ecx47;
    int1_t less48;
    int64_t rsi49;
    int64_t* rax50;
    unsigned char* rdx51;
    int1_t less52;
    int32_t* rax53;
    void* v54;
    int64_t v55;

    while (1) {
        *rbp4 = r13_5;
        if (v6 != printf) {
            r15_7 = r15_7 - 0x800;
            rax8 = g1388;
            *rax8 = r15_7;
        }
        rax9 = r13_10;
        rdi11 = g132a;
        do {
            rdx12 = rax9 + 1;
            *rbp13 = rdx12;
            r12d14 = r12d14 | static_cast<uint32_t>(*rax9) << reinterpret_cast<unsigned char>(24 - *reinterpret_cast<signed char*>(&r14_15));
            *rdi11 = r12d14;
            ecx16 = static_cast<int32_t>(r14_15 + 8);
            rax9 = rdx12;
            less17 = *reinterpret_cast<int32_t*>(&r14_15) < 17;
            *reinterpret_cast<int32_t*>(&r14_15) = ecx16;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_15) + 4) = reinterpret_cast<int32_t>(printf);
            if (!less17) 
                goto addr_1178_5;
        } while (reinterpret_cast<uint64_t>(rax9) < reinterpret_cast<uint64_t>(rbx18));
        rsi19 = g136a;
        fun_136f(r13_20, rsi19, 0x800);
    }
    addr_1178_5:
    rbx21 = g117f;
    *rbx21 = ecx16;
    r8_22 = v23;
    r12_24 = v25;
    v26[r12_24] = *reinterpret_cast<uint32_t*>(&r8_22) >> 31;
    fun_11e5();
    r10_27 = v28;
    rdi29 = g11f4;
    *reinterpret_cast<uint32_t*>(&rdx30) = *rdi29;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx30) + 4) = reinterpret_cast<int32_t>(printf);
    r14d31 = static_cast<uint32_t>(rdx30 + rdx30);
    *rdi29 = r14d31;
    *reinterpret_cast<int32_t*>(&rax32) = *rbx21;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax32) + 4) = reinterpret_cast<int32_t>(printf);
    *reinterpret_cast<int32_t*>(&r13_33) = static_cast<int32_t>(rax32 - 1);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_33) + 4) = reinterpret_cast<int32_t>(printf);
    *rbx21 = *reinterpret_cast<int32_t*>(&r13_33);
    if (*reinterpret_cast<int32_t*>(&rax32) <= 25) {
        v34 = rdx30;
        v35 = r12_24;
        rbp36 = g122f;
        rax37 = *rbp36;
        tmp64_38 = &g123f->f7fc;
        if (reinterpret_cast<uint64_t>(rax37) >= reinterpret_cast<uint64_t>(tmp64_38)) {
            rcx39 = g1394;
            r15_40 = *rcx39;
            rcx41 = g139e;
            v42 = *rcx41;
            rbx43 = g13b0;
            rbx44 = &rbx43->f800;
            r12_45 = g13ba;
            while (1) {
                if (reinterpret_cast<uint64_t>(rax37) < reinterpret_cast<uint64_t>(rbx44)) {
                    addr_13ca_13:
                    rdx46 = rax37 + 1;
                    *rbp36 = rdx46;
                    r14d31 = r14d31 | static_cast<uint32_t>(*rax37) << reinterpret_cast<unsigned char>(24 - *reinterpret_cast<signed char*>(&r13_33));
                    *rdi29 = r14d31;
                    ecx47 = static_cast<int32_t>(r13_33 + 8);
                    rax37 = rdx46;
                    less48 = *reinterpret_cast<int32_t*>(&r13_33) < 17;
                    *reinterpret_cast<int32_t*>(&r13_33) = ecx47;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_33) + 4) = reinterpret_cast<int32_t>(printf);
                    if (!less48) 
                        break; else 
                        continue;
                } else {
                    rsi49 = g140a;
                    fun_140f(r12_45, rsi49, 0x800);
                    *rbp36 = r12_45;
                    if (v42 != printf) 
                        goto addr_141a_16;
                }
                addr_13c0_17:
                rax37 = r12_45;
                rdi29 = g13ca;
                goto addr_13ca_13;
                addr_141a_16:
                r15_40 = r15_40 - 0x800;
                rax50 = g1428;
                *rax50 = r15_40;
                goto addr_13c0_17;
            }
        } else {
            do {
                rdx51 = rax37 + 1;
                *rbp36 = rdx51;
                r14d31 = r14d31 | static_cast<uint32_t>(*rax37) << reinterpret_cast<unsigned char>(24 - *reinterpret_cast<signed char*>(&r13_33));
                *rdi29 = r14d31;
                ecx47 = static_cast<int32_t>(r13_33 + 8);
                rax37 = rdx51;
                less52 = *reinterpret_cast<int32_t*>(&r13_33) < 17;
                *reinterpret_cast<int32_t*>(&r13_33) = ecx47;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_33) + 4) = reinterpret_cast<int32_t>(printf);
            } while (less52);
        }
        rax53 = g127f;
        *rax53 = ecx47;
        r10_27 = v54;
        r12_24 = v35;
        rdx30 = v34;
    }
    *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(r10_27) + r12_24 * 4 + 8) = *reinterpret_cast<uint32_t*>(&rdx30) >> 31;
    fun_12da();
    goto v55;
}

void fun_140f(unsigned char* rdi, int64_t rsi, int64_t rdx) {
    int64_t* rbp4;
    int64_t r12_5;
    int32_t v6;
    int64_t r15_7;
    int64_t* rax8;
    unsigned char* rax9;
    unsigned char* r12_10;
    uint32_t* rdi11;
    unsigned char* rdx12;
    unsigned char** rbp13;
    uint32_t r14d14;
    int64_t r13_15;
    int32_t ecx16;
    int1_t less17;
    unsigned char* rbx18;
    int64_t rsi19;
    unsigned char* r12_20;
    int32_t* rax21;
    int64_t rdx22;
    int64_t v23;
    void* v24;
    int64_t v25;
    int64_t v26;

    while (1) {
        *rbp4 = r12_5;
        if (v6 != printf) {
            r15_7 = r15_7 - 0x800;
            rax8 = g1428;
            *rax8 = r15_7;
        }
        rax9 = r12_10;
        rdi11 = g13ca;
        do {
            rdx12 = rax9 + 1;
            *rbp13 = rdx12;
            r14d14 = r14d14 | static_cast<uint32_t>(*rax9) << reinterpret_cast<unsigned char>(24 - *reinterpret_cast<signed char*>(&r13_15));
            *rdi11 = r14d14;
            ecx16 = static_cast<int32_t>(r13_15 + 8);
            rax9 = rdx12;
            less17 = *reinterpret_cast<int32_t*>(&r13_15) < 17;
            *reinterpret_cast<int32_t*>(&r13_15) = ecx16;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_15) + 4) = reinterpret_cast<int32_t>(printf);
            if (!less17) 
                goto addr_1278_5;
        } while (reinterpret_cast<uint64_t>(rax9) < reinterpret_cast<uint64_t>(rbx18));
        rsi19 = g140a;
        fun_140f(r12_20, rsi19, 0x800);
    }
    addr_1278_5:
    rax21 = g127f;
    *rax21 = ecx16;
    rdx22 = v23;
    *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(v24) + v25 * 4 + 8) = *reinterpret_cast<uint32_t*>(&rdx22) >> 31;
    fun_12da();
    goto v26;
}

int64_t* g14d9 = reinterpret_cast<int64_t*>(0x8894810244c8948);

int64_t g14b7 = 0x23894c00000000e8;

int32_t* g106d = reinterpret_cast<int32_t*>(0x9824bc8b440889);

void fun_10d4();

void fun_14bc(int64_t rdi, int64_t rsi, int64_t rdx) {
    int64_t* rbx4;
    int64_t r12_5;
    int32_t v6;
    int64_t rcx7;
    int64_t v8;
    int64_t* rax9;
    unsigned char* rax10;
    unsigned char* r12_11;
    uint32_t* r8_12;
    unsigned char* rdx13;
    unsigned char** rbx14;
    uint32_t ebp15;
    int64_t r14_16;
    int32_t ecx17;
    int1_t less18;
    unsigned char* r15_19;
    int64_t rsi20;
    int64_t r12_21;
    int32_t* rax22;
    int64_t rdi23;
    int64_t v24;
    uint32_t edi25;
    int64_t rax26;
    int32_t v27;
    uint32_t* v28;
    int64_t rbx29;
    int64_t* v30;
    int64_t v31;

    while (1) {
        *rbx4 = r12_5;
        if (v6 != printf) {
            rcx7 = v8 - 0x800;
            rax9 = g14d9;
            v8 = rcx7;
            *rax9 = rcx7;
        }
        rax10 = r12_11;
        r8_12 = r8_12;
        do {
            rdx13 = rax10 + 1;
            *rbx14 = rdx13;
            ebp15 = ebp15 | static_cast<uint32_t>(*rax10) << reinterpret_cast<unsigned char>(24 - *reinterpret_cast<signed char*>(&r14_16));
            *r8_12 = ebp15;
            ecx17 = static_cast<int32_t>(r14_16 + 8);
            rax10 = rdx13;
            less18 = *reinterpret_cast<int32_t*>(&r14_16) < 17;
            *reinterpret_cast<int32_t*>(&r14_16) = ecx17;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_16) + 4) = reinterpret_cast<int32_t>(printf);
            if (!less18) 
                goto addr_1066_5;
        } while (reinterpret_cast<uint64_t>(rax10) < reinterpret_cast<uint64_t>(r15_19));
        rsi20 = g14b7;
        fun_14bc(r12_21, rsi20, 0x800);
    }
    addr_1066_5:
    rax22 = g106d;
    *rax22 = ecx17;
    rdi23 = v24;
    edi25 = *reinterpret_cast<uint32_t*>(&rdi23) >> 31;
    rax26 = v27;
    v28[rax26] = edi25;
    (v28 + rax26)[2] = edi25;
    rbx29 = v27;
    fun_10d4();
    (v30 + rbx29)[2] = v30[rbx29];
    goto v31;
}

int32_t* fun_168e();

uint32_t* g16b2 = reinterpret_cast<uint32_t*>(0xe18944fd89413e8b);

int32_t* g16c7 = reinterpret_cast<int32_t*>(0x2941218b44e0894c);

struct s16 {
    signed char[4] pad4;
    uint32_t f4;
};

struct s17 {
    signed char[4] pad4;
    int32_t f4;
};

unsigned char** g16fb = reinterpret_cast<unsigned char**>(0x7fcb9068b49);

struct s18 {
    signed char[2044] pad2044;
    unsigned char f7fc;
};

struct s18* g170a = reinterpret_cast<struct s18*>(0x1d5830fc83948);

int64_t* g18ef = reinterpret_cast<int64_t*>(0x18244c8948098b48);

int32_t* g18fe = reinterpret_cast<int32_t*>(0xb914244c89098b);

struct s19 {
    signed char[2048] pad2048;
    unsigned char f800;
};

struct s19* g1910 = reinterpret_cast<struct s19*>(0x3d8b4ccb0148);

unsigned char* g191a = reinterpret_cast<unsigned char*>(0x894c00401f0f36eb);

int64_t g1969 = 0x3e894d00000000e8;

void fun_196e(unsigned char* rdi, int64_t rsi, int64_t rdx);

int64_t* g198b = reinterpret_cast<int64_t*>(0x8894818244c8948);

int32_t* g174f = reinterpret_cast<int32_t*>(0x8b30245c8b480889);

int32_t fun_1812();

int32_t fun_1687() {
    int32_t* rbx1;
    int32_t eax2;
    int32_t* rax3;
    uint32_t edi4;
    int32_t* v5;
    int32_t r12d6;
    unsigned char v7;
    unsigned char r13b8;
    uint32_t* rsi9;
    uint32_t edi10;
    int32_t ecx11;
    int32_t r12d12;
    uint32_t r13d13;
    int32_t* rcx14;
    int32_t* r12_15;
    int64_t r12_16;
    uint32_t v17;
    int32_t v18;
    int32_t r14d19;
    struct s16* v20;
    struct s16* r15_21;
    int32_t v22;
    int32_t ebp23;
    struct s17* v24;
    struct s17* rbx25;
    unsigned char** r14_26;
    unsigned char* rax27;
    unsigned char* tmp64_28;
    int64_t* rcx29;
    int64_t v30;
    int32_t* rcx31;
    int32_t v32;
    struct s19* rbx33;
    unsigned char* rbx34;
    unsigned char* r15_35;
    unsigned char* rdx36;
    int32_t ecx37;
    int1_t less38;
    int64_t rsi39;
    int64_t rcx40;
    int64_t* rax41;
    unsigned char* rdx42;
    int1_t less43;
    struct s17* rbx44;
    int32_t ebp45;
    struct s16* r15_46;
    int32_t r14d47;
    int64_t r12_48;
    int64_t v49;
    uint32_t ecx50;
    uint32_t r13d51;
    int32_t v52;
    uint32_t ecx53;
    uint32_t r12d54;
    uint32_t ecx55;
    uint32_t esi56;
    int32_t ecx57;
    uint32_t edx58;
    int32_t* rax59;
    int1_t sf60;
    uint32_t ecx61;
    uint32_t ecx62;
    uint32_t ecx63;
    int32_t eax64;
    uint32_t eax65;
    uint32_t ecx66;
    int64_t v67;
    uint32_t ecx68;

    *rbx1 = eax2;
    rax3 = fun_168e();
    edi4 = reinterpret_cast<uint32_t>(printf);
    v5 = rax3;
    if (r12d6 != printf && *reinterpret_cast<int32_t*>(&rax3) != printf) {
        v7 = r13b8;
        rsi9 = g16b2;
        edi10 = *rsi9;
        ecx11 = r12d12;
        r13d13 = edi10 << *reinterpret_cast<unsigned char*>(&ecx11);
        *rsi9 = r13d13;
        rcx14 = g16c7;
        rax3 = r12_15;
        *reinterpret_cast<int32_t*>(&r12_16) = *rcx14 - *reinterpret_cast<int32_t*>(&rax3);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_16) + 4) = reinterpret_cast<int32_t>(printf);
        *rcx14 = *reinterpret_cast<int32_t*>(&r12_16);
        if (*reinterpret_cast<int32_t*>(&r12_16) <= 24) {
            v17 = edi10;
            v18 = r14d19;
            v20 = r15_21;
            v22 = ebp23;
            v24 = rbx25;
            r14_26 = g16fb;
            rax27 = *r14_26;
            tmp64_28 = &g170a->f7fc;
            if (reinterpret_cast<uint64_t>(rax27) >= reinterpret_cast<uint64_t>(tmp64_28)) {
                rcx29 = g18ef;
                v30 = *rcx29;
                rcx31 = g18fe;
                v32 = *rcx31;
                rbx33 = g1910;
                rbx34 = &rbx33->f800;
                r15_35 = g191a;
                while (1) {
                    if (reinterpret_cast<uint64_t>(rax27) < reinterpret_cast<uint64_t>(rbx34)) {
                        addr_1926_8:
                        rdx36 = rax27 + 1;
                        *r14_26 = rdx36;
                        r13d13 = r13d13 | static_cast<uint32_t>(*rax27) << reinterpret_cast<unsigned char>(24 - *reinterpret_cast<signed char*>(&r12_16));
                        *rsi9 = r13d13;
                        ecx37 = static_cast<int32_t>(r12_16 + 8);
                        rax27 = rdx36;
                        less38 = *reinterpret_cast<int32_t*>(&r12_16) < 17;
                        *reinterpret_cast<int32_t*>(&r12_16) = ecx37;
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_16) + 4) = reinterpret_cast<int32_t>(printf);
                        if (!less38) 
                            break; else 
                            continue;
                    } else {
                        rsi39 = g1969;
                        fun_196e(r15_35, rsi39, 0x800);
                        *r14_26 = r15_35;
                        if (v32 != printf) 
                            goto addr_1978_11;
                    }
                    addr_1920_12:
                    rax27 = r15_35;
                    rsi9 = rsi9;
                    goto addr_1926_8;
                    addr_1978_11:
                    rcx40 = v30 - 0x800;
                    rax41 = g198b;
                    v30 = rcx40;
                    *rax41 = rcx40;
                    goto addr_1920_12;
                }
            } else {
                do {
                    rdx42 = rax27 + 1;
                    *r14_26 = rdx42;
                    r13d13 = r13d13 | static_cast<uint32_t>(*rax27) << reinterpret_cast<unsigned char>(24 - *reinterpret_cast<signed char*>(&r12_16));
                    *rsi9 = r13d13;
                    ecx37 = static_cast<int32_t>(r12_16 + 8);
                    rax27 = rdx42;
                    less43 = *reinterpret_cast<int32_t*>(&r12_16) < 17;
                    *reinterpret_cast<int32_t*>(&r12_16) = ecx37;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_16) + 4) = reinterpret_cast<int32_t>(printf);
                } while (less43);
            }
            rax3 = g174f;
            *rax3 = ecx37;
            rbx44 = v24;
            ebp45 = v22;
            r15_46 = v20;
            r14d47 = v18;
            edi10 = v17;
        }
        r12_48 = v49;
        ecx50 = *reinterpret_cast<uint32_t*>(&r12_48);
        edi4 = edi10 >> -*reinterpret_cast<signed char*>(&ecx50);
        r13d51 = v7;
    }
    if (r14d47 != printf) {
        r15_46->f4 = reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(r15_46->f4) >> 1);
    }
    *reinterpret_cast<unsigned char*>(&rax3) = reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(v52 == printf));
    ecx53 = static_cast<uint32_t>(r12_48 + 31);
    if (*reinterpret_cast<int32_t*>(&r12_48) >= reinterpret_cast<int32_t>(printf)) {
        ecx53 = *reinterpret_cast<uint32_t*>(&r12_48);
    }
    r12d54 = *reinterpret_cast<uint32_t*>(&r12_48) - (ecx53 & 0xffffffe0);
    ecx55 = r12d54;
    esi56 = 16 << *reinterpret_cast<unsigned char*>(&ecx55);
    ecx57 = *reinterpret_cast<int32_t*>(&rax3);
    edx58 = reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(r15_46->f4) >> *reinterpret_cast<signed char*>(&ecx57));
    rax59 = v5;
    sf60 = *reinterpret_cast<int32_t*>(&rax59) < reinterpret_cast<int32_t>(printf);
    if (reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(sf60 == printf)) | reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&rax59) == printf)) {
        if (!sf60 || (ecx61 = r12d54, *reinterpret_cast<uint32_t*>(&rax59) = ~*reinterpret_cast<uint32_t*>(&rax59) << *reinterpret_cast<unsigned char*>(&ecx61), edx58 = edx58 + ~(edi4 + *reinterpret_cast<uint32_t*>(&rax59)), reinterpret_cast<int32_t>(edx58) >= reinterpret_cast<int32_t>(-esi56))) {
            addr_17f6_23:
            *reinterpret_cast<unsigned char*>(&rax59) = reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(r14d47 == printf));
            ecx62 = r13d51;
            ecx63 = *reinterpret_cast<uint32_t*>(&rax59);
            r15_46->f4 = edx58 << *reinterpret_cast<unsigned char*>(&ecx62) << *reinterpret_cast<unsigned char*>(&ecx63);
            if (ebp45 != printf) {
                eax64 = fun_1812();
                rbx44->f4 = eax64;
            }
        } else {
            eax65 = 32;
            goto addr_17d1_27;
        }
    } else {
        ecx66 = r12d54;
        *reinterpret_cast<uint32_t*>(&rax59) = (*reinterpret_cast<uint32_t*>(&rax59) - 1 << *reinterpret_cast<unsigned char*>(&ecx66)) + edi4;
        edx58 = edx58 + *reinterpret_cast<uint32_t*>(&rax59) + 1;
        if (reinterpret_cast<int32_t>(edx58) < reinterpret_cast<int32_t>(esi56)) 
            goto addr_17f6_23;
        eax65 = 0xffffffe0;
        goto addr_17d1_27;
    }
    goto v67;
    addr_17d1_27:
    ecx68 = r12d54;
    *reinterpret_cast<uint32_t*>(&rax59) = eax65 << *reinterpret_cast<unsigned char*>(&ecx68);
    edx58 = edx58 + *reinterpret_cast<uint32_t*>(&rax59);
    goto addr_17f6_23;
}

struct s20 {
    signed char[4] pad4;
    int32_t f4;
};

int32_t fun_1812() {
    struct s20* rbx1;
    int32_t eax2;
    int64_t v3;

    rbx1->f4 = eax2;
    goto v3;
}

int64_t* g18db = reinterpret_cast<int64_t*>(0x8894818244c8948);

int32_t* g15d0 = reinterpret_cast<int32_t*>(0x8b30245c8b480889);

struct s21 {
    int32_t f0;
    int32_t f4;
};

struct s22 {
    uint32_t f0;
    uint32_t f4;
};

void fun_18ba() {
    unsigned char* rdi1;
    unsigned char* r13_2;
    unsigned char** rbp3;
    int32_t v4;
    int64_t rcx5;
    int64_t v6;
    int64_t* rax7;
    unsigned char* rax8;
    uint32_t* rsi9;
    int64_t r13_10;
    unsigned char* r8_11;
    unsigned char* v12;
    unsigned char* rdx13;
    unsigned char** rbp14;
    uint32_t r14d15;
    int64_t r12_16;
    int32_t ecx17;
    int1_t less18;
    int32_t* rax19;
    struct s21* rbx20;
    struct s21* v21;
    int32_t ebp22;
    int32_t v23;
    struct s22* r15_24;
    struct s22* v25;
    uint32_t ecx26;
    uint32_t edi27;
    uint32_t v28;
    int32_t r14d29;
    int32_t v30;
    int32_t* r12_31;
    int32_t* v32;
    uint32_t eax33;
    uint32_t r13d34;
    uint32_t ecx35;
    uint32_t edx36;
    uint32_t eax37;
    int32_t v38;
    int64_t rcx39;
    int64_t v40;
    int1_t sf41;
    int64_t rcx42;
    int64_t rsi43;
    uint32_t ecx44;
    int32_t v45;
    uint32_t ecx46;
    int32_t eax47;
    uint32_t edx48;
    int64_t rcx49;
    int64_t rsi50;
    uint32_t ecx51;
    int32_t* rax52;
    uint32_t edi53;
    int32_t* v54;
    unsigned char v55;
    uint32_t* rsi56;
    uint32_t edi57;
    uint32_t ecx58;
    uint32_t r13d59;
    int32_t* rcx60;
    int64_t r12_61;
    uint32_t v62;
    int32_t v63;
    struct s22* v64;
    int32_t v65;
    struct s21* v66;
    unsigned char** r14_67;
    unsigned char* rax68;
    unsigned char* tmp64_69;
    int64_t* rcx70;
    int64_t v71;
    int32_t* rcx72;
    int32_t v73;
    struct s19* rbx74;
    unsigned char* rbx75;
    unsigned char* r15_76;
    unsigned char* rdx77;
    int32_t ecx78;
    int1_t less79;
    int64_t rsi80;
    int64_t rcx81;
    int64_t* rax82;
    unsigned char* rdx83;
    int1_t less84;
    int32_t* v85;
    uint32_t ecx86;
    int32_t v87;
    uint32_t ecx88;
    uint32_t r12d89;
    uint32_t ecx90;
    uint32_t esi91;
    int32_t ecx92;
    uint32_t edx93;
    int32_t* rax94;
    int1_t sf95;
    uint32_t ecx96;
    uint32_t ecx97;
    uint32_t ecx98;
    int32_t eax99;
    uint32_t eax100;
    uint32_t ecx101;
    int64_t v102;
    uint32_t ecx103;
    uint32_t ecx104;

    while (1) {
        rdi1 = r13_2;
        *rbp3 = r13_2;
        if (v4 != printf) {
            rcx5 = v6 - 0x800;
            rax7 = g18db;
            v6 = rcx5;
            *rax7 = rcx5;
        }
        rax8 = rdi1;
        rsi9 = rsi9;
        r13_10 = r13_10;
        r8_11 = v12;
        do {
            rdx13 = rax8 + 1;
            *rbp14 = rdx13;
            r14d15 = r14d15 | static_cast<uint32_t>(*rax8) << reinterpret_cast<unsigned char>(24 - *reinterpret_cast<signed char*>(&r12_16));
            *rsi9 = r14d15;
            ecx17 = static_cast<int32_t>(r12_16 + 8);
            rax8 = rdx13;
            less18 = *reinterpret_cast<int32_t*>(&r12_16) < 17;
            *reinterpret_cast<int32_t*>(&r12_16) = ecx17;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_16) + 4) = reinterpret_cast<int32_t>(printf);
            if (!less18) 
                goto addr_15c9_5;
        } while (reinterpret_cast<uint64_t>(rax8) < reinterpret_cast<uint64_t>(r8_11));
        r13_2 = rdi1;
        fun_18ba();
    }
    addr_15c9_5:
    rax19 = g15d0;
    *rax19 = ecx17;
    rbx20 = v21;
    ebp22 = v23;
    r15_24 = v25;
    ecx26 = *reinterpret_cast<uint32_t*>(&r13_10);
    edi27 = v28 >> -*reinterpret_cast<signed char*>(&ecx26);
    r14d29 = v30;
    r12_31 = v32;
    eax33 = static_cast<uint32_t>(r13_10 + 31);
    if (*reinterpret_cast<int32_t*>(&r13_10) >= reinterpret_cast<int32_t>(printf)) {
        eax33 = *reinterpret_cast<uint32_t*>(&r13_10);
    }
    r13d34 = *reinterpret_cast<uint32_t*>(&r13_10) - (eax33 & 0xffffffe0);
    ecx35 = r13d34;
    edx36 = 16 << *reinterpret_cast<unsigned char*>(&ecx35);
    eax37 = reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(r15_24->f0) >> static_cast<unsigned char>(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(v38 == printf))));
    rcx39 = v40;
    sf41 = *reinterpret_cast<int32_t*>(&rcx39) < reinterpret_cast<int32_t>(printf);
    if (reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(sf41 == printf)) | reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&rcx39) == printf)) {
        if (!sf41 || (*reinterpret_cast<int32_t*>(&rcx42) = ~*reinterpret_cast<int32_t*>(&rcx39), *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx42) + 4) = reinterpret_cast<int32_t>(printf), rsi43 = rcx42, ecx44 = r13d34, eax37 = eax37 + ~(edi27 + (*reinterpret_cast<uint32_t*>(&rsi43) << *reinterpret_cast<unsigned char*>(&ecx44))), reinterpret_cast<int32_t>(eax37) >= reinterpret_cast<int32_t>(-edx36))) {
            addr_166a_13:
            *reinterpret_cast<unsigned char*>(&r13d34) = reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(v45 == printf));
            ecx46 = r13d34;
            r15_24->f0 = eax37 << *reinterpret_cast<unsigned char*>(&ecx46);
            if (ebp22 != printf) {
                eax47 = fun_1687();
                rbx20->f0 = eax47;
            }
        } else {
            edx48 = 32;
            goto addr_1642_17;
        }
    } else {
        *reinterpret_cast<int32_t*>(&rcx49) = *reinterpret_cast<int32_t*>(&rcx39) - 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx49) + 4) = reinterpret_cast<int32_t>(printf);
        rsi50 = rcx49;
        ecx51 = r13d34;
        eax37 = eax37 + ((*reinterpret_cast<int32_t*>(&rsi50) << *reinterpret_cast<unsigned char*>(&ecx51)) + edi27) + 1;
        if (reinterpret_cast<int32_t>(eax37) < reinterpret_cast<int32_t>(edx36)) 
            goto addr_166a_13;
        edx48 = 0xffffffe0;
        goto addr_1642_17;
    }
    rax52 = fun_168e();
    edi53 = reinterpret_cast<uint32_t>(printf);
    v54 = rax52;
    if (*reinterpret_cast<uint32_t*>(&r12_31) != printf && *reinterpret_cast<int32_t*>(&rax52) != printf) {
        v55 = *reinterpret_cast<unsigned char*>(&r13d34);
        rsi56 = g16b2;
        edi57 = *rsi56;
        ecx58 = *reinterpret_cast<uint32_t*>(&r12_31);
        r13d59 = edi57 << *reinterpret_cast<unsigned char*>(&ecx58);
        *rsi56 = r13d59;
        rcx60 = g16c7;
        rax52 = r12_31;
        *reinterpret_cast<int32_t*>(&r12_61) = *rcx60 - *reinterpret_cast<int32_t*>(&rax52);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_61) + 4) = reinterpret_cast<int32_t>(printf);
        *rcx60 = *reinterpret_cast<int32_t*>(&r12_61);
        if (*reinterpret_cast<int32_t*>(&r12_61) <= 24) {
            v62 = edi57;
            v63 = r14d29;
            v64 = r15_24;
            v65 = ebp22;
            v66 = rbx20;
            r14_67 = g16fb;
            rax68 = *r14_67;
            tmp64_69 = &g170a->f7fc;
            if (reinterpret_cast<uint64_t>(rax68) >= reinterpret_cast<uint64_t>(tmp64_69)) {
                rcx70 = g18ef;
                v71 = *rcx70;
                rcx72 = g18fe;
                v73 = *rcx72;
                rbx74 = g1910;
                rbx75 = &rbx74->f800;
                r15_76 = g191a;
                while (1) {
                    if (reinterpret_cast<uint64_t>(rax68) < reinterpret_cast<uint64_t>(rbx75)) {
                        addr_1926_26:
                        rdx77 = rax68 + 1;
                        *r14_67 = rdx77;
                        r13d59 = r13d59 | static_cast<uint32_t>(*rax68) << reinterpret_cast<unsigned char>(24 - *reinterpret_cast<signed char*>(&r12_61));
                        *rsi56 = r13d59;
                        ecx78 = static_cast<int32_t>(r12_61 + 8);
                        rax68 = rdx77;
                        less79 = *reinterpret_cast<int32_t*>(&r12_61) < 17;
                        *reinterpret_cast<int32_t*>(&r12_61) = ecx78;
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_61) + 4) = reinterpret_cast<int32_t>(printf);
                        if (!less79) 
                            break; else 
                            continue;
                    } else {
                        rsi80 = g1969;
                        fun_196e(r15_76, rsi80, 0x800);
                        *r14_67 = r15_76;
                        if (v73 != printf) 
                            goto addr_1978_29;
                    }
                    addr_1920_30:
                    rax68 = r15_76;
                    rsi56 = rsi56;
                    goto addr_1926_26;
                    addr_1978_29:
                    rcx81 = v71 - 0x800;
                    rax82 = g198b;
                    v71 = rcx81;
                    *rax82 = rcx81;
                    goto addr_1920_30;
                }
            } else {
                do {
                    rdx83 = rax68 + 1;
                    *r14_67 = rdx83;
                    r13d59 = r13d59 | static_cast<uint32_t>(*rax68) << reinterpret_cast<unsigned char>(24 - *reinterpret_cast<signed char*>(&r12_61));
                    *rsi56 = r13d59;
                    ecx78 = static_cast<int32_t>(r12_61 + 8);
                    rax68 = rdx83;
                    less84 = *reinterpret_cast<int32_t*>(&r12_61) < 17;
                    *reinterpret_cast<int32_t*>(&r12_61) = ecx78;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_61) + 4) = reinterpret_cast<int32_t>(printf);
                } while (less84);
            }
            rax52 = g174f;
            *rax52 = ecx78;
            rbx20 = v66;
            ebp22 = v65;
            r15_24 = v64;
            r14d29 = v63;
            edi57 = v62;
        }
        r12_31 = v85;
        ecx86 = *reinterpret_cast<uint32_t*>(&r12_31);
        edi53 = edi57 >> -*reinterpret_cast<signed char*>(&ecx86);
        r13d34 = v55;
    }
    if (r14d29 != printf) {
        r15_24->f4 = reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(r15_24->f4) >> 1);
    }
    *reinterpret_cast<unsigned char*>(&rax52) = reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(v87 == printf));
    ecx88 = static_cast<uint32_t>(reinterpret_cast<int64_t>(r12_31) + 31);
    if (*reinterpret_cast<int32_t*>(&r12_31) >= reinterpret_cast<int32_t>(printf)) {
        ecx88 = *reinterpret_cast<uint32_t*>(&r12_31);
    }
    r12d89 = *reinterpret_cast<uint32_t*>(&r12_31) - (ecx88 & 0xffffffe0);
    ecx90 = r12d89;
    esi91 = 16 << *reinterpret_cast<unsigned char*>(&ecx90);
    ecx92 = *reinterpret_cast<int32_t*>(&rax52);
    edx93 = reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(r15_24->f4) >> *reinterpret_cast<signed char*>(&ecx92));
    rax94 = v54;
    sf95 = *reinterpret_cast<int32_t*>(&rax94) < reinterpret_cast<int32_t>(printf);
    if (reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(sf95 == printf)) | reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&rax94) == printf)) {
        if (!sf95 || (ecx96 = r12d89, *reinterpret_cast<uint32_t*>(&rax94) = ~*reinterpret_cast<uint32_t*>(&rax94) << *reinterpret_cast<unsigned char*>(&ecx96), edx93 = edx93 + ~(edi53 + *reinterpret_cast<uint32_t*>(&rax94)), reinterpret_cast<int32_t>(edx93) >= reinterpret_cast<int32_t>(-esi91))) {
            addr_17f6_41:
            *reinterpret_cast<unsigned char*>(&rax94) = reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(r14d29 == printf));
            ecx97 = r13d34;
            ecx98 = *reinterpret_cast<uint32_t*>(&rax94);
            r15_24->f4 = edx93 << *reinterpret_cast<unsigned char*>(&ecx97) << *reinterpret_cast<unsigned char*>(&ecx98);
            if (ebp22 != printf) {
                eax99 = fun_1812();
                rbx20->f4 = eax99;
            }
        } else {
            eax100 = 32;
            goto addr_17d1_45;
        }
    } else {
        ecx101 = r12d89;
        *reinterpret_cast<uint32_t*>(&rax94) = (*reinterpret_cast<uint32_t*>(&rax94) - 1 << *reinterpret_cast<unsigned char*>(&ecx101)) + edi53;
        edx93 = edx93 + *reinterpret_cast<uint32_t*>(&rax94) + 1;
        if (reinterpret_cast<int32_t>(edx93) < reinterpret_cast<int32_t>(esi91)) 
            goto addr_17f6_41;
        eax100 = 0xffffffe0;
        goto addr_17d1_45;
    }
    goto v102;
    addr_17d1_45:
    ecx103 = r12d89;
    *reinterpret_cast<uint32_t*>(&rax94) = eax100 << *reinterpret_cast<unsigned char*>(&ecx103);
    edx93 = edx93 + *reinterpret_cast<uint32_t*>(&rax94);
    goto addr_17f6_41;
    addr_1642_17:
    ecx104 = r13d34;
    eax37 = eax37 + (edx48 << *reinterpret_cast<unsigned char*>(&ecx104));
    goto addr_166a_13;
}

struct s23 {
    signed char[4] pad4;
    uint32_t f4;
};

struct s24 {
    signed char[4] pad4;
    int32_t f4;
};

void fun_196e(unsigned char* rdi, int64_t rsi, int64_t rdx) {
    int64_t* r14_4;
    int64_t r15_5;
    int32_t v6;
    int64_t rcx7;
    int64_t v8;
    int64_t* rax9;
    unsigned char* rax10;
    unsigned char* r15_11;
    uint32_t* rsi12;
    unsigned char* rdx13;
    unsigned char** r14_14;
    uint32_t r13d15;
    int64_t r12_16;
    int32_t ecx17;
    int1_t less18;
    unsigned char* rbx19;
    int64_t rsi20;
    unsigned char* r15_21;
    int32_t* rax22;
    int64_t r12_23;
    int64_t v24;
    uint32_t ecx25;
    uint32_t edi26;
    uint32_t v27;
    int32_t v28;
    struct s23* v29;
    int32_t v30;
    uint32_t ecx31;
    uint32_t r12d32;
    uint32_t ecx33;
    uint32_t esi34;
    int32_t ecx35;
    uint32_t edx36;
    int64_t rax37;
    int64_t v38;
    int1_t sf39;
    uint32_t ecx40;
    uint32_t ecx41;
    unsigned char v42;
    uint32_t ecx43;
    int32_t v44;
    int32_t eax45;
    struct s24* v46;
    uint32_t eax47;
    uint32_t ecx48;
    int64_t v49;
    uint32_t ecx50;

    while (1) {
        *r14_4 = r15_5;
        if (v6 != printf) {
            rcx7 = v8 - 0x800;
            rax9 = g198b;
            v8 = rcx7;
            *rax9 = rcx7;
        }
        rax10 = r15_11;
        rsi12 = rsi12;
        do {
            rdx13 = rax10 + 1;
            *r14_14 = rdx13;
            r13d15 = r13d15 | static_cast<uint32_t>(*rax10) << reinterpret_cast<unsigned char>(24 - *reinterpret_cast<signed char*>(&r12_16));
            *rsi12 = r13d15;
            ecx17 = static_cast<int32_t>(r12_16 + 8);
            rax10 = rdx13;
            less18 = *reinterpret_cast<int32_t*>(&r12_16) < 17;
            *reinterpret_cast<int32_t*>(&r12_16) = ecx17;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_16) + 4) = reinterpret_cast<int32_t>(printf);
            if (!less18) 
                goto addr_1748_5;
        } while (reinterpret_cast<uint64_t>(rax10) < reinterpret_cast<uint64_t>(rbx19));
        rsi20 = g1969;
        fun_196e(r15_21, rsi20, 0x800);
    }
    addr_1748_5:
    rax22 = g174f;
    *rax22 = ecx17;
    r12_23 = v24;
    ecx25 = *reinterpret_cast<uint32_t*>(&r12_23);
    edi26 = v27 >> -*reinterpret_cast<signed char*>(&ecx25);
    if (v28 != printf) {
        v29->f4 = reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(v29->f4) >> 1);
    }
    *reinterpret_cast<unsigned char*>(&rax22) = reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(v30 == printf));
    ecx31 = static_cast<uint32_t>(r12_23 + 31);
    if (*reinterpret_cast<int32_t*>(&r12_23) >= reinterpret_cast<int32_t>(printf)) {
        ecx31 = *reinterpret_cast<uint32_t*>(&r12_23);
    }
    r12d32 = *reinterpret_cast<uint32_t*>(&r12_23) - (ecx31 & 0xffffffe0);
    ecx33 = r12d32;
    esi34 = 16 << *reinterpret_cast<unsigned char*>(&ecx33);
    ecx35 = *reinterpret_cast<int32_t*>(&rax22);
    edx36 = reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(v29->f4) >> *reinterpret_cast<signed char*>(&ecx35));
    rax37 = v38;
    sf39 = *reinterpret_cast<int32_t*>(&rax37) < reinterpret_cast<int32_t>(printf);
    if (reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(sf39 == printf)) | reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&rax37) == printf)) {
        if (!sf39 || (ecx40 = r12d32, *reinterpret_cast<uint32_t*>(&rax37) = ~*reinterpret_cast<uint32_t*>(&rax37) << *reinterpret_cast<unsigned char*>(&ecx40), edx36 = edx36 + ~(edi26 + *reinterpret_cast<uint32_t*>(&rax37)), reinterpret_cast<int32_t>(edx36) >= reinterpret_cast<int32_t>(-esi34))) {
            addr_17f6_15:
            *reinterpret_cast<unsigned char*>(&rax37) = reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(v28 == printf));
            ecx41 = v42;
            ecx43 = *reinterpret_cast<uint32_t*>(&rax37);
            v29->f4 = edx36 << *reinterpret_cast<unsigned char*>(&ecx41) << *reinterpret_cast<unsigned char*>(&ecx43);
            if (v44 != printf) {
                eax45 = fun_1812();
                v46->f4 = eax45;
            }
        } else {
            eax47 = 32;
            goto addr_17d1_19;
        }
    } else {
        ecx48 = r12d32;
        *reinterpret_cast<uint32_t*>(&rax37) = (*reinterpret_cast<uint32_t*>(&rax37) - 1 << *reinterpret_cast<unsigned char*>(&ecx48)) + edi26;
        edx36 = edx36 + *reinterpret_cast<uint32_t*>(&rax37) + 1;
        if (reinterpret_cast<int32_t>(edx36) < reinterpret_cast<int32_t>(esi34)) 
            goto addr_17f6_15;
        eax47 = 0xffffffe0;
        goto addr_17d1_19;
    }
    goto v49;
    addr_17d1_19:
    ecx50 = r12d32;
    *reinterpret_cast<uint32_t*>(&rax37) = eax47 << *reinterpret_cast<unsigned char*>(&ecx50);
    edx36 = edx36 + *reinterpret_cast<uint32_t*>(&rax37);
    goto addr_17f6_15;
}

int64_t* g1a7d = reinterpret_cast<int64_t*>(0x8894810244c8948);

int64_t g1a5b = 0x2b894800000000e8;

int32_t* g1a8e = reinterpret_cast<int32_t*>(0x83480000002000c7);

void fun_1a60(int64_t rdi, int64_t rsi, int64_t rdx) {
    int64_t* rbx4;
    int64_t rbp5;
    int32_t v6;
    int64_t rcx7;
    int64_t v8;
    int64_t* rax9;
    unsigned char* rax10;
    unsigned char* rbp11;
    uint32_t edx12;
    int64_t r14_13;
    unsigned char** rbx14;
    uint32_t r15d15;
    uint32_t* r13_16;
    int1_t cf17;
    unsigned char* r12_18;
    int64_t rsi19;
    int64_t rbp20;
    int32_t* rax21;
    int64_t v22;

    while (1) {
        *rbx4 = rbp5;
        if (v6 != printf) {
            rcx7 = v8 - 0x800;
            rax9 = g1a7d;
            v8 = rcx7;
            *rax9 = rcx7;
        }
        rax10 = rbp11;
        do {
            edx12 = static_cast<uint32_t>(*rax10) << reinterpret_cast<unsigned char>(24 - *reinterpret_cast<signed char*>(&r14_13));
            ++rax10;
            *rbx14 = rax10;
            r15d15 = r15d15 | edx12;
            *r13_16 = r15d15;
            cf17 = *reinterpret_cast<uint32_t*>(&r14_13) < 17;
            *reinterpret_cast<uint32_t*>(&r14_13) = static_cast<uint32_t>(r14_13 + 8);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_13) + 4) = reinterpret_cast<int32_t>(printf);
            if (!cf17) 
                goto addr_1a87_5;
        } while (reinterpret_cast<uint64_t>(rax10) < reinterpret_cast<uint64_t>(r12_18));
        rsi19 = g1a5b;
        fun_1a60(rbp20, rsi19, 0x800);
    }
    addr_1a87_5:
    rax21 = g1a8e;
    *rax21 = 32;
    goto v22;
}

int32_t* g1b0c = reinterpret_cast<int32_t*>(0x8b480000000000c7);

int32_t* g1b19 = reinterpret_cast<int32_t*>(0xc7480000000000c7);

int32_t* g1b56 = reinterpret_cast<int32_t*>(0xb80000000000c7);

struct s25 {
    signed char[2048] pad2048;
    unsigned char f800;
};

struct s25* g1b68 = reinterpret_cast<struct s25*>(0x2d8b4cc50148);

unsigned char** g1b72 = reinterpret_cast<unsigned char**>(0x58b48006d8949);

unsigned char** g1b7d = reinterpret_cast<unsigned char**>(0x358b4c288948);

uint32_t* g1b87 = reinterpret_cast<uint32_t*>(0x410410000006c741);

unsigned char* g1b9b = reinterpret_cast<unsigned char*>(0x10b60f25ebe88948);

int64_t g1bd9 = 0x5d894900000000e8;

void fun_1bde(unsigned char* rdi, int64_t rsi, int64_t rdx);

int32_t* g1bf5 = reinterpret_cast<int32_t*>(0xc1410000001f00c7);

void fun_1c35(void* rdi, void* rsi, int64_t rdx, int64_t rcx);

int32_t fun_1cf0();

void fun_1d04(int32_t* rdi, int32_t* rsi);

void fun_1d41(int64_t rdi, int64_t rsi);

void fun_1ae1(int32_t* rdi, int32_t* rsi) {
    void* rsp3;
    int32_t* rax4;
    int32_t* rax5;
    int32_t* rax6;
    struct s25* rbp7;
    unsigned char* rbp8;
    unsigned char** r13_9;
    unsigned char** rax10;
    uint32_t* r14_11;
    int64_t r15_12;
    unsigned char* rbx13;
    unsigned char* rax14;
    int64_t rsi15;
    uint32_t edx16;
    int64_t r12_17;
    int1_t cf18;
    int32_t* rax19;
    int64_t r14_20;
    void* rsp21;
    int64_t rdx22;
    int64_t rsi23;
    int1_t zf24;
    int1_t zf25;
    int1_t zf26;
    int32_t* rdi27;
    int32_t* rsi28;
    int32_t eax29;
    int64_t v30;

    rsp3 = __zero_stack_offset();
    __asm__("cvtsi2sd xmm0, qword [rsp+0x10]");
    __asm__("cvtsi2sd xmm1, dword [rsp+0x18]");
    __asm__("mulsd xmm1, [rip+0x0]");
    __asm__("addsd xmm1, xmm0");
    *rdi = *rsi;
    rax4 = g1b0c;
    *rax4 = reinterpret_cast<int32_t>(printf);
    rax5 = g1b19;
    *rax5 = reinterpret_cast<int32_t>(printf);
    __asm__("movaps xmm0, [rax]");
    __asm__("movaps [rsp+0x30], xmm0");
    __asm__("movaps xmm0, [rax]");
    __asm__("movaps xmm1, [rax+0x10]");
    __asm__("movaps [rsp+0x10], xmm0");
    __asm__("movaps [rsp+0x20], xmm1");
    rax6 = g1b56;
    *rax6 = reinterpret_cast<int32_t>(printf);
    rbp7 = g1b68;
    rbp8 = &rbp7->f800;
    r13_9 = g1b72;
    *r13_9 = rbp8;
    rax10 = g1b7d;
    *rax10 = rbp8;
    r14_11 = g1b87;
    *r14_11 = 0x4100000;
    *reinterpret_cast<uint32_t*>(&r15_12) = 0x4100000;
    rbx13 = g1b9b;
    rax14 = rbp8;
    do {
        if (reinterpret_cast<uint64_t>(rax14) >= reinterpret_cast<uint64_t>(rbp8)) {
            rsi15 = g1bd9;
            fun_1bde(rbx13, rsi15, 0x800);
            rsp3 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp3) - 8 + 8);
            *r13_9 = rbx13;
            rax14 = rbx13;
        }
        edx16 = static_cast<uint32_t>(*rax14) << reinterpret_cast<unsigned char>(24 - *reinterpret_cast<signed char*>(&r12_17));
        ++rax14;
        *r13_9 = rax14;
        *reinterpret_cast<uint32_t*>(&r15_12) = *reinterpret_cast<uint32_t*>(&r15_12) | edx16;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_12) + 4) = reinterpret_cast<int32_t>(printf);
        *r14_11 = *reinterpret_cast<uint32_t*>(&r15_12);
        cf18 = *reinterpret_cast<uint32_t*>(&r12_17) < 17;
        *reinterpret_cast<uint32_t*>(&r12_17) = static_cast<uint32_t>(r12_17 + 8);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_17) + 4) = reinterpret_cast<int32_t>(printf);
    } while (cf18);
    *r14_11 = static_cast<uint32_t>(r15_12 + r15_12);
    rax19 = g1bf5;
    *rax19 = 31;
    *reinterpret_cast<int32_t*>(&r14_20) = reinterpret_cast<int32_t>(printf);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_20) + 4) = reinterpret_cast<int32_t>(printf);
    fun_1c35(reinterpret_cast<int64_t>(rsp3) + 16, reinterpret_cast<int64_t>(rsp3) + 64, 0xc8, 0xc8);
    rsp21 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp3) - 8 + 8);
    do {
        *reinterpret_cast<int32_t*>(&rdx22) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx22) + 4) = reinterpret_cast<int32_t>(printf);
        do {
            *reinterpret_cast<int32_t*>(&rsi23) = reinterpret_cast<int32_t>(printf);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi23) + 4) = reinterpret_cast<int32_t>(printf);
            do {
                zf24 = reinterpret_cast<int1_t>(rsi23 == printf);
                ++rsi23;
            } while (zf24);
            zf25 = reinterpret_cast<int1_t>(rdx22 == printf);
            ++rdx22;
        } while (zf25);
        zf26 = reinterpret_cast<int1_t>(r14_20 == printf);
        ++r14_20;
    } while (zf26);
    rdi27 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp21) + 72);
    *reinterpret_cast<int32_t*>(&rsi28) = reinterpret_cast<int32_t>(printf);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi28) + 4) = reinterpret_cast<int32_t>(printf);
    eax29 = fun_1cf0();
    if (eax29 != printf) {
        rdi27 = reinterpret_cast<int32_t*>(0x1cfb);
        *reinterpret_cast<int32_t*>(&rsi28) = eax29;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi28) + 4) = reinterpret_cast<int32_t>(printf);
        fun_1d04(0x1cfb, rsi28);
    }
    __asm__("cvtsi2sd xmm1, qword [rsp+0x48]");
    __asm__("cvtsi2sd xmm0, dword [rsp+0x50]");
    __asm__("mulsd xmm0, [rip+0x0]");
    __asm__("addsd xmm0, xmm1");
    *rdi27 = *rsi28;
    __asm__("subsd xmm0, [rax]");
    fun_1d41(0x1d3a, rsi28 + 1);
    goto v30;
}

void fun_1bde(unsigned char* rdi, int64_t rsi, int64_t rdx) {
    void* rsp4;
    int64_t* r13_5;
    int64_t rbx6;
    unsigned char* rax7;
    unsigned char* rbx8;
    uint32_t edx9;
    int64_t r12_10;
    unsigned char** r13_11;
    int64_t r15_12;
    uint32_t* r14_13;
    int1_t cf14;
    unsigned char* rbp15;
    int64_t rsi16;
    unsigned char* rbx17;
    int32_t* r14_18;
    int32_t* rax19;
    int64_t r14_20;
    void* rsp21;
    int64_t rdx22;
    int64_t rsi23;
    int1_t zf24;
    int1_t zf25;
    int1_t zf26;
    int32_t* rdi27;
    int32_t* rsi28;
    int32_t eax29;
    int64_t v30;

    while (1) {
        rsp4 = __zero_stack_offset();
        *r13_5 = rbx6;
        rax7 = rbx8;
        do {
            edx9 = static_cast<uint32_t>(*rax7) << reinterpret_cast<unsigned char>(24 - *reinterpret_cast<signed char*>(&r12_10));
            ++rax7;
            *r13_11 = rax7;
            *reinterpret_cast<uint32_t*>(&r15_12) = *reinterpret_cast<uint32_t*>(&r15_12) | edx9;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_12) + 4) = reinterpret_cast<int32_t>(printf);
            *r14_13 = *reinterpret_cast<uint32_t*>(&r15_12);
            cf14 = *reinterpret_cast<uint32_t*>(&r12_10) < 17;
            *reinterpret_cast<uint32_t*>(&r12_10) = static_cast<uint32_t>(r12_10 + 8);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_10) + 4) = reinterpret_cast<int32_t>(printf);
            if (!cf14) 
                goto addr_1be7_3;
        } while (reinterpret_cast<uint64_t>(rax7) < reinterpret_cast<uint64_t>(rbp15));
        rsi16 = g1bd9;
        fun_1bde(rbx17, rsi16, 0x800);
    }
    addr_1be7_3:
    *r14_18 = static_cast<int32_t>(r15_12 + r15_12);
    rax19 = g1bf5;
    *rax19 = 31;
    *reinterpret_cast<int32_t*>(&r14_20) = reinterpret_cast<int32_t>(printf);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_20) + 4) = reinterpret_cast<int32_t>(printf);
    fun_1c35(reinterpret_cast<int64_t>(rsp4) + 16, reinterpret_cast<int64_t>(rsp4) + 64, 0xc8, 0xc8);
    rsp21 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp4) - 8 + 8);
    do {
        *reinterpret_cast<int32_t*>(&rdx22) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx22) + 4) = reinterpret_cast<int32_t>(printf);
        do {
            *reinterpret_cast<int32_t*>(&rsi23) = reinterpret_cast<int32_t>(printf);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi23) + 4) = reinterpret_cast<int32_t>(printf);
            do {
                zf24 = reinterpret_cast<int1_t>(rsi23 == printf);
                ++rsi23;
            } while (zf24);
            zf25 = reinterpret_cast<int1_t>(rdx22 == printf);
            ++rdx22;
        } while (zf25);
        zf26 = reinterpret_cast<int1_t>(r14_20 == printf);
        ++r14_20;
    } while (zf26);
    rdi27 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp21) + 72);
    *reinterpret_cast<int32_t*>(&rsi28) = reinterpret_cast<int32_t>(printf);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi28) + 4) = reinterpret_cast<int32_t>(printf);
    eax29 = fun_1cf0();
    if (eax29 != printf) {
        rdi27 = reinterpret_cast<int32_t*>(0x1cfb);
        *reinterpret_cast<int32_t*>(&rsi28) = eax29;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi28) + 4) = reinterpret_cast<int32_t>(printf);
        fun_1d04(0x1cfb, rsi28);
    }
    __asm__("cvtsi2sd xmm1, qword [rsp+0x48]");
    __asm__("cvtsi2sd xmm0, dword [rsp+0x50]");
    __asm__("mulsd xmm0, [rip+0x0]");
    __asm__("addsd xmm0, xmm1");
    *rdi27 = *rsi28;
    __asm__("subsd xmm0, [rax]");
    fun_1d41(0x1d3a, rsi28 + 1);
    goto v30;
}

int32_t g1cfb = 0xc031c689;

int32_t fun_1cf0() {
    int32_t eax1;
    int32_t* rsi2;
    int32_t eax3;
    int64_t v4;

    if (eax1 != printf) {
        *reinterpret_cast<int32_t*>(&rsi2) = eax3;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi2) + 4) = reinterpret_cast<int32_t>(printf);
        fun_1d04(0x1cfb, rsi2);
    }
    __asm__("cvtsi2sd xmm1, qword [rsp+0x48]");
    __asm__("cvtsi2sd xmm0, dword [rsp+0x50]");
    __asm__("mulsd xmm0, [rip+0x0]");
    __asm__("addsd xmm0, xmm1");
    g1cfb = *rsi2;
    __asm__("subsd xmm0, [rax]");
    fun_1d41(0x1d3a, rsi2 + 1);
    goto v4;
}

void fun_1d04(int32_t* rdi, int32_t* rsi) {
    int64_t v3;

    __asm__("cvtsi2sd xmm1, qword [rsp+0x48]");
    __asm__("cvtsi2sd xmm0, dword [rsp+0x50]");
    __asm__("mulsd xmm0, [rip+0x0]");
    __asm__("addsd xmm0, xmm1");
    *rdi = *rsi;
    __asm__("subsd xmm0, [rax]");
    fun_1d41(0x1d3a, rsi + 1);
    goto v3;
}

void fun_1d41(int64_t rdi, int64_t rsi) {
    int64_t v3;

    goto v3;
}

void fun_10d4() {
    void* r13_1;
    int64_t rbx2;
    int64_t* r13_3;
    int64_t rbx4;
    int64_t v5;

    *reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(r13_1) + rbx2 * 8 + 16) = r13_3[rbx4];
    goto v5;
}

uint32_t* g153e = reinterpret_cast<uint32_t*>(0xe98944fe89413e8b);

int32_t* g1553 = reinterpret_cast<int32_t*>(0x8944ec2945208b44);

struct s26 {
    uint32_t f0;
    uint32_t f4;
};

struct s27 {
    int32_t f0;
    int32_t f4;
};

unsigned char** g157f = reinterpret_cast<unsigned char**>(0x7fcb900458b48);

struct s28 {
    signed char[2044] pad2044;
    unsigned char f7fc;
};

struct s28* g158f = reinterpret_cast<struct s28*>(0x28c830fc83948);

int64_t* g182b = reinterpret_cast<int64_t*>(0x18244c8948098b48);

int32_t* g183a = reinterpret_cast<int32_t*>(0xb914244c89098b);

struct s29 {
    signed char[2048] pad2048;
    unsigned char f800;
};

struct s29* g184c = reinterpret_cast<struct s29*>(0x3d8b48c80149);

unsigned char* g1856 = reinterpret_cast<unsigned char*>(0xf3eeb202444894c);

void fun_1515() {
    uint32_t edi1;
    int32_t* v2;
    int32_t* r12_3;
    int64_t v4;
    int64_t rax5;
    int32_t r13d6;
    int32_t eax7;
    int32_t v8;
    int32_t r14d9;
    uint32_t* rsi10;
    uint32_t edi11;
    int32_t ecx12;
    int32_t r13d13;
    uint32_t r14d14;
    int32_t* rax15;
    int64_t r12_16;
    int32_t r13d17;
    uint32_t v18;
    struct s26* v19;
    struct s26* r15_20;
    int32_t v21;
    int32_t ebp22;
    struct s27* v23;
    struct s27* rbx24;
    unsigned char** rbp25;
    unsigned char* rax26;
    unsigned char* tmp64_27;
    int64_t* rcx28;
    int64_t v29;
    int32_t* rcx30;
    int32_t v31;
    struct s29* r8_32;
    unsigned char* r8_33;
    unsigned char* rdi34;
    unsigned char* v35;
    unsigned char* rdx36;
    int32_t ecx37;
    int1_t less38;
    unsigned char* r13_39;
    int64_t r13_40;
    int64_t rcx41;
    int64_t* rax42;
    unsigned char* rdx43;
    int1_t less44;
    int32_t* rax45;
    struct s27* rbx46;
    int32_t ebp47;
    struct s26* r15_48;
    uint32_t ecx49;
    int32_t r14d50;
    int32_t* r12_51;
    uint32_t eax52;
    uint32_t r13d53;
    uint32_t ecx54;
    uint32_t edx55;
    uint32_t eax56;
    int32_t v57;
    int64_t rcx58;
    int1_t sf59;
    int64_t rcx60;
    int64_t rsi61;
    uint32_t ecx62;
    int32_t v63;
    uint32_t ecx64;
    int32_t eax65;
    uint32_t edx66;
    int64_t rcx67;
    int64_t rsi68;
    uint32_t ecx69;
    int32_t* rax70;
    uint32_t edi71;
    int32_t* v72;
    unsigned char v73;
    uint32_t* rsi74;
    uint32_t edi75;
    uint32_t ecx76;
    uint32_t r13d77;
    int32_t* rcx78;
    int64_t r12_79;
    uint32_t v80;
    int32_t v81;
    struct s26* v82;
    int32_t v83;
    struct s27* v84;
    unsigned char** r14_85;
    unsigned char* rax86;
    unsigned char* tmp64_87;
    int64_t* rcx88;
    int64_t v89;
    int32_t* rcx90;
    int32_t v91;
    struct s19* rbx92;
    unsigned char* rbx93;
    unsigned char* r15_94;
    unsigned char* rdx95;
    int32_t ecx96;
    int1_t less97;
    int64_t rsi98;
    int64_t rcx99;
    int64_t* rax100;
    unsigned char* rdx101;
    int1_t less102;
    uint32_t ecx103;
    int32_t v104;
    uint32_t ecx105;
    uint32_t r12d106;
    uint32_t ecx107;
    uint32_t esi108;
    int32_t ecx109;
    uint32_t edx110;
    int32_t* rax111;
    int1_t sf112;
    uint32_t ecx113;
    uint32_t ecx114;
    uint32_t ecx115;
    int32_t eax116;
    uint32_t eax117;
    uint32_t ecx118;
    int64_t v119;
    uint32_t ecx120;
    uint32_t ecx121;

    edi1 = reinterpret_cast<uint32_t>(printf);
    v2 = r12_3;
    v4 = rax5;
    if (r13d6 != printf && eax7 != printf) {
        v8 = r14d9;
        rsi10 = g153e;
        edi11 = *rsi10;
        ecx12 = r13d13;
        r14d14 = edi11 << *reinterpret_cast<unsigned char*>(&ecx12);
        *rsi10 = r14d14;
        rax15 = g1553;
        *reinterpret_cast<int32_t*>(&r12_16) = *rax15 - r13d17;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_16) + 4) = reinterpret_cast<int32_t>(printf);
        *rax15 = *reinterpret_cast<int32_t*>(&r12_16);
        if (*reinterpret_cast<int32_t*>(&r12_16) <= 24) {
            v18 = edi11;
            v19 = r15_20;
            v21 = ebp22;
            v23 = rbx24;
            rbp25 = g157f;
            rax26 = *rbp25;
            tmp64_27 = &g158f->f7fc;
            if (reinterpret_cast<uint64_t>(rax26) >= reinterpret_cast<uint64_t>(tmp64_27)) {
                rcx28 = g182b;
                v29 = *rcx28;
                rcx30 = g183a;
                v31 = *rcx30;
                r8_32 = g184c;
                r8_33 = &r8_32->f800;
                rdi34 = g1856;
                v35 = r8_33;
                while (1) {
                    if (reinterpret_cast<uint64_t>(rax26) < reinterpret_cast<uint64_t>(r8_33)) {
                        addr_186e_6:
                        rdx36 = rax26 + 1;
                        *rbp25 = rdx36;
                        r14d14 = r14d14 | static_cast<uint32_t>(*rax26) << reinterpret_cast<unsigned char>(24 - *reinterpret_cast<signed char*>(&r12_16));
                        *rsi10 = r14d14;
                        ecx37 = static_cast<int32_t>(r12_16 + 8);
                        rax26 = rdx36;
                        less38 = *reinterpret_cast<int32_t*>(&r12_16) < 17;
                        *reinterpret_cast<int32_t*>(&r12_16) = ecx37;
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_16) + 4) = reinterpret_cast<int32_t>(printf);
                        if (!less38) 
                            break; else 
                            continue;
                    } else {
                        r13_39 = rdi34;
                        fun_18ba();
                        rdi34 = r13_39;
                        *rbp25 = r13_39;
                        if (v31 != printf) 
                            goto addr_18c8_9;
                    }
                    addr_1860_10:
                    rax26 = rdi34;
                    rsi10 = rsi10;
                    r13_40 = r13_40;
                    r8_33 = v35;
                    goto addr_186e_6;
                    addr_18c8_9:
                    rcx41 = v29 - 0x800;
                    rax42 = g18db;
                    v29 = rcx41;
                    *rax42 = rcx41;
                    goto addr_1860_10;
                }
            } else {
                do {
                    rdx43 = rax26 + 1;
                    *rbp25 = rdx43;
                    r14d14 = r14d14 | static_cast<uint32_t>(*rax26) << reinterpret_cast<unsigned char>(24 - *reinterpret_cast<signed char*>(&r12_16));
                    *rsi10 = r14d14;
                    ecx37 = static_cast<int32_t>(r12_16 + 8);
                    rax26 = rdx43;
                    less44 = *reinterpret_cast<int32_t*>(&r12_16) < 17;
                    *reinterpret_cast<int32_t*>(&r12_16) = ecx37;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_16) + 4) = reinterpret_cast<int32_t>(printf);
                } while (less44);
            }
            rax45 = g15d0;
            *rax45 = ecx37;
            rbx46 = v23;
            ebp47 = v21;
            r15_48 = v19;
            edi11 = v18;
        }
        ecx49 = *reinterpret_cast<uint32_t*>(&r13_40);
        edi1 = edi11 >> -*reinterpret_cast<signed char*>(&ecx49);
        r14d50 = v8;
        r12_51 = v2;
    }
    eax52 = static_cast<uint32_t>(r13_40 + 31);
    if (*reinterpret_cast<int32_t*>(&r13_40) >= reinterpret_cast<int32_t>(printf)) {
        eax52 = *reinterpret_cast<uint32_t*>(&r13_40);
    }
    r13d53 = *reinterpret_cast<uint32_t*>(&r13_40) - (eax52 & 0xffffffe0);
    ecx54 = r13d53;
    edx55 = 16 << *reinterpret_cast<unsigned char*>(&ecx54);
    eax56 = reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(r15_48->f0) >> static_cast<unsigned char>(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(v57 == printf))));
    rcx58 = v4;
    sf59 = *reinterpret_cast<int32_t*>(&rcx58) < reinterpret_cast<int32_t>(printf);
    if (reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(sf59 == printf)) | reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&rcx58) == printf)) {
        if (!sf59 || (*reinterpret_cast<int32_t*>(&rcx60) = ~*reinterpret_cast<int32_t*>(&rcx58), *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx60) + 4) = reinterpret_cast<int32_t>(printf), rsi61 = rcx60, ecx62 = r13d53, eax56 = eax56 + ~(edi1 + (*reinterpret_cast<uint32_t*>(&rsi61) << *reinterpret_cast<unsigned char*>(&ecx62))), reinterpret_cast<int32_t>(eax56) >= reinterpret_cast<int32_t>(-edx55))) {
            addr_166a_19:
            *reinterpret_cast<unsigned char*>(&r13d53) = reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(v63 == printf));
            ecx64 = r13d53;
            r15_48->f0 = eax56 << *reinterpret_cast<unsigned char*>(&ecx64);
            if (ebp47 != printf) {
                eax65 = fun_1687();
                rbx46->f0 = eax65;
            }
        } else {
            edx66 = 32;
            goto addr_1642_23;
        }
    } else {
        *reinterpret_cast<int32_t*>(&rcx67) = *reinterpret_cast<int32_t*>(&rcx58) - 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx67) + 4) = reinterpret_cast<int32_t>(printf);
        rsi68 = rcx67;
        ecx69 = r13d53;
        eax56 = eax56 + ((*reinterpret_cast<int32_t*>(&rsi68) << *reinterpret_cast<unsigned char*>(&ecx69)) + edi1) + 1;
        if (reinterpret_cast<int32_t>(eax56) < reinterpret_cast<int32_t>(edx55)) 
            goto addr_166a_19;
        edx66 = 0xffffffe0;
        goto addr_1642_23;
    }
    rax70 = fun_168e();
    edi71 = reinterpret_cast<uint32_t>(printf);
    v72 = rax70;
    if (*reinterpret_cast<uint32_t*>(&r12_51) != printf && *reinterpret_cast<int32_t*>(&rax70) != printf) {
        v73 = *reinterpret_cast<unsigned char*>(&r13d53);
        rsi74 = g16b2;
        edi75 = *rsi74;
        ecx76 = *reinterpret_cast<uint32_t*>(&r12_51);
        r13d77 = edi75 << *reinterpret_cast<unsigned char*>(&ecx76);
        *rsi74 = r13d77;
        rcx78 = g16c7;
        rax70 = r12_51;
        *reinterpret_cast<int32_t*>(&r12_79) = *rcx78 - *reinterpret_cast<int32_t*>(&rax70);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_79) + 4) = reinterpret_cast<int32_t>(printf);
        *rcx78 = *reinterpret_cast<int32_t*>(&r12_79);
        if (*reinterpret_cast<int32_t*>(&r12_79) <= 24) {
            v80 = edi75;
            v81 = r14d50;
            v82 = r15_48;
            v83 = ebp47;
            v84 = rbx46;
            r14_85 = g16fb;
            rax86 = *r14_85;
            tmp64_87 = &g170a->f7fc;
            if (reinterpret_cast<uint64_t>(rax86) >= reinterpret_cast<uint64_t>(tmp64_87)) {
                rcx88 = g18ef;
                v89 = *rcx88;
                rcx90 = g18fe;
                v91 = *rcx90;
                rbx92 = g1910;
                rbx93 = &rbx92->f800;
                r15_94 = g191a;
                while (1) {
                    if (reinterpret_cast<uint64_t>(rax86) < reinterpret_cast<uint64_t>(rbx93)) {
                        addr_1926_32:
                        rdx95 = rax86 + 1;
                        *r14_85 = rdx95;
                        r13d77 = r13d77 | static_cast<uint32_t>(*rax86) << reinterpret_cast<unsigned char>(24 - *reinterpret_cast<signed char*>(&r12_79));
                        *rsi74 = r13d77;
                        ecx96 = static_cast<int32_t>(r12_79 + 8);
                        rax86 = rdx95;
                        less97 = *reinterpret_cast<int32_t*>(&r12_79) < 17;
                        *reinterpret_cast<int32_t*>(&r12_79) = ecx96;
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_79) + 4) = reinterpret_cast<int32_t>(printf);
                        if (!less97) 
                            break; else 
                            continue;
                    } else {
                        rsi98 = g1969;
                        fun_196e(r15_94, rsi98, 0x800);
                        *r14_85 = r15_94;
                        if (v91 != printf) 
                            goto addr_1978_35;
                    }
                    addr_1920_36:
                    rax86 = r15_94;
                    rsi74 = rsi74;
                    goto addr_1926_32;
                    addr_1978_35:
                    rcx99 = v89 - 0x800;
                    rax100 = g198b;
                    v89 = rcx99;
                    *rax100 = rcx99;
                    goto addr_1920_36;
                }
            } else {
                do {
                    rdx101 = rax86 + 1;
                    *r14_85 = rdx101;
                    r13d77 = r13d77 | static_cast<uint32_t>(*rax86) << reinterpret_cast<unsigned char>(24 - *reinterpret_cast<signed char*>(&r12_79));
                    *rsi74 = r13d77;
                    ecx96 = static_cast<int32_t>(r12_79 + 8);
                    rax86 = rdx101;
                    less102 = *reinterpret_cast<int32_t*>(&r12_79) < 17;
                    *reinterpret_cast<int32_t*>(&r12_79) = ecx96;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_79) + 4) = reinterpret_cast<int32_t>(printf);
                } while (less102);
            }
            rax70 = g174f;
            *rax70 = ecx96;
            rbx46 = v84;
            ebp47 = v83;
            r15_48 = v82;
            r14d50 = v81;
            edi75 = v80;
        }
        r12_51 = v2;
        ecx103 = *reinterpret_cast<uint32_t*>(&r12_51);
        edi71 = edi75 >> -*reinterpret_cast<signed char*>(&ecx103);
        r13d53 = v73;
    }
    if (r14d50 != printf) {
        r15_48->f4 = reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(r15_48->f4) >> 1);
    }
    *reinterpret_cast<unsigned char*>(&rax70) = reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(v104 == printf));
    ecx105 = static_cast<uint32_t>(reinterpret_cast<int64_t>(r12_51) + 31);
    if (*reinterpret_cast<int32_t*>(&r12_51) >= reinterpret_cast<int32_t>(printf)) {
        ecx105 = *reinterpret_cast<uint32_t*>(&r12_51);
    }
    r12d106 = *reinterpret_cast<uint32_t*>(&r12_51) - (ecx105 & 0xffffffe0);
    ecx107 = r12d106;
    esi108 = 16 << *reinterpret_cast<unsigned char*>(&ecx107);
    ecx109 = *reinterpret_cast<int32_t*>(&rax70);
    edx110 = reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(r15_48->f4) >> *reinterpret_cast<signed char*>(&ecx109));
    rax111 = v72;
    sf112 = *reinterpret_cast<int32_t*>(&rax111) < reinterpret_cast<int32_t>(printf);
    if (reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(sf112 == printf)) | reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&rax111) == printf)) {
        if (!sf112 || (ecx113 = r12d106, *reinterpret_cast<uint32_t*>(&rax111) = ~*reinterpret_cast<uint32_t*>(&rax111) << *reinterpret_cast<unsigned char*>(&ecx113), edx110 = edx110 + ~(edi71 + *reinterpret_cast<uint32_t*>(&rax111)), reinterpret_cast<int32_t>(edx110) >= reinterpret_cast<int32_t>(-esi108))) {
            addr_17f6_47:
            *reinterpret_cast<unsigned char*>(&rax111) = reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(r14d50 == printf));
            ecx114 = r13d53;
            ecx115 = *reinterpret_cast<uint32_t*>(&rax111);
            r15_48->f4 = edx110 << *reinterpret_cast<unsigned char*>(&ecx114) << *reinterpret_cast<unsigned char*>(&ecx115);
            if (ebp47 != printf) {
                eax116 = fun_1812();
                rbx46->f4 = eax116;
            }
        } else {
            eax117 = 32;
            goto addr_17d1_51;
        }
    } else {
        ecx118 = r12d106;
        *reinterpret_cast<uint32_t*>(&rax111) = (*reinterpret_cast<uint32_t*>(&rax111) - 1 << *reinterpret_cast<unsigned char*>(&ecx118)) + edi71;
        edx110 = edx110 + *reinterpret_cast<uint32_t*>(&rax111) + 1;
        if (reinterpret_cast<int32_t>(edx110) < reinterpret_cast<int32_t>(esi108)) 
            goto addr_17f6_47;
        eax117 = 0xffffffe0;
        goto addr_17d1_51;
    }
    goto v119;
    addr_17d1_51:
    ecx120 = r12d106;
    *reinterpret_cast<uint32_t*>(&rax111) = eax117 << *reinterpret_cast<unsigned char*>(&ecx120);
    edx110 = edx110 + *reinterpret_cast<uint32_t*>(&rax111);
    goto addr_17f6_47;
    addr_1642_23:
    ecx121 = r13d53;
    eax56 = eax56 + (edx66 << *reinterpret_cast<unsigned char*>(&ecx121));
    goto addr_166a_19;
}

struct s30 {
    signed char[4] pad4;
    uint32_t f4;
};

struct s31 {
    signed char[4] pad4;
    int32_t f4;
};

int32_t* fun_168e() {
    uint32_t edi1;
    int64_t v2;
    int64_t rax3;
    int32_t r12d4;
    int32_t eax5;
    unsigned char v6;
    unsigned char r13b7;
    uint32_t* rsi8;
    uint32_t edi9;
    int32_t ecx10;
    int32_t r12d11;
    uint32_t r13d12;
    int32_t* rcx13;
    int32_t* rax14;
    int32_t* r12_15;
    int64_t r12_16;
    uint32_t v17;
    int32_t v18;
    int32_t r14d19;
    struct s30* v20;
    struct s30* r15_21;
    int32_t v22;
    int32_t ebp23;
    struct s31* v24;
    struct s31* rbx25;
    unsigned char** r14_26;
    unsigned char* rax27;
    unsigned char* tmp64_28;
    int64_t* rcx29;
    int64_t v30;
    int32_t* rcx31;
    int32_t v32;
    struct s19* rbx33;
    unsigned char* rbx34;
    unsigned char* r15_35;
    unsigned char* rdx36;
    int32_t ecx37;
    int1_t less38;
    int64_t rsi39;
    int64_t rcx40;
    int64_t* rax41;
    unsigned char* rdx42;
    int1_t less43;
    struct s31* rbx44;
    int32_t ebp45;
    struct s30* r15_46;
    int32_t r14d47;
    int64_t r12_48;
    int64_t v49;
    uint32_t ecx50;
    uint32_t r13d51;
    int32_t v52;
    uint32_t ecx53;
    uint32_t r12d54;
    uint32_t ecx55;
    uint32_t esi56;
    int32_t ecx57;
    uint32_t edx58;
    int64_t rax59;
    int1_t sf60;
    uint32_t ecx61;
    uint32_t ecx62;
    uint32_t ecx63;
    int32_t eax64;
    uint32_t eax65;
    uint32_t ecx66;
    int64_t v67;
    uint32_t ecx68;

    edi1 = reinterpret_cast<uint32_t>(printf);
    v2 = rax3;
    if (r12d4 != printf && eax5 != printf) {
        v6 = r13b7;
        rsi8 = g16b2;
        edi9 = *rsi8;
        ecx10 = r12d11;
        r13d12 = edi9 << *reinterpret_cast<unsigned char*>(&ecx10);
        *rsi8 = r13d12;
        rcx13 = g16c7;
        rax14 = r12_15;
        *reinterpret_cast<int32_t*>(&r12_16) = *rcx13 - *reinterpret_cast<int32_t*>(&rax14);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_16) + 4) = reinterpret_cast<int32_t>(printf);
        *rcx13 = *reinterpret_cast<int32_t*>(&r12_16);
        if (*reinterpret_cast<int32_t*>(&r12_16) <= 24) {
            v17 = edi9;
            v18 = r14d19;
            v20 = r15_21;
            v22 = ebp23;
            v24 = rbx25;
            r14_26 = g16fb;
            rax27 = *r14_26;
            tmp64_28 = &g170a->f7fc;
            if (reinterpret_cast<uint64_t>(rax27) >= reinterpret_cast<uint64_t>(tmp64_28)) {
                rcx29 = g18ef;
                v30 = *rcx29;
                rcx31 = g18fe;
                v32 = *rcx31;
                rbx33 = g1910;
                rbx34 = &rbx33->f800;
                r15_35 = g191a;
                while (1) {
                    if (reinterpret_cast<uint64_t>(rax27) < reinterpret_cast<uint64_t>(rbx34)) {
                        addr_1926_6:
                        rdx36 = rax27 + 1;
                        *r14_26 = rdx36;
                        r13d12 = r13d12 | static_cast<uint32_t>(*rax27) << reinterpret_cast<unsigned char>(24 - *reinterpret_cast<signed char*>(&r12_16));
                        *rsi8 = r13d12;
                        ecx37 = static_cast<int32_t>(r12_16 + 8);
                        rax27 = rdx36;
                        less38 = *reinterpret_cast<int32_t*>(&r12_16) < 17;
                        *reinterpret_cast<int32_t*>(&r12_16) = ecx37;
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_16) + 4) = reinterpret_cast<int32_t>(printf);
                        if (!less38) 
                            break; else 
                            continue;
                    } else {
                        rsi39 = g1969;
                        fun_196e(r15_35, rsi39, 0x800);
                        *r14_26 = r15_35;
                        if (v32 != printf) 
                            goto addr_1978_9;
                    }
                    addr_1920_10:
                    rax27 = r15_35;
                    rsi8 = rsi8;
                    goto addr_1926_6;
                    addr_1978_9:
                    rcx40 = v30 - 0x800;
                    rax41 = g198b;
                    v30 = rcx40;
                    *rax41 = rcx40;
                    goto addr_1920_10;
                }
            } else {
                do {
                    rdx42 = rax27 + 1;
                    *r14_26 = rdx42;
                    r13d12 = r13d12 | static_cast<uint32_t>(*rax27) << reinterpret_cast<unsigned char>(24 - *reinterpret_cast<signed char*>(&r12_16));
                    *rsi8 = r13d12;
                    ecx37 = static_cast<int32_t>(r12_16 + 8);
                    rax27 = rdx42;
                    less43 = *reinterpret_cast<int32_t*>(&r12_16) < 17;
                    *reinterpret_cast<int32_t*>(&r12_16) = ecx37;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_16) + 4) = reinterpret_cast<int32_t>(printf);
                } while (less43);
            }
            rax14 = g174f;
            *rax14 = ecx37;
            rbx44 = v24;
            ebp45 = v22;
            r15_46 = v20;
            r14d47 = v18;
            edi9 = v17;
        }
        r12_48 = v49;
        ecx50 = *reinterpret_cast<uint32_t*>(&r12_48);
        edi1 = edi9 >> -*reinterpret_cast<signed char*>(&ecx50);
        r13d51 = v6;
    }
    if (r14d47 != printf) {
        r15_46->f4 = reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(r15_46->f4) >> 1);
    }
    *reinterpret_cast<unsigned char*>(&rax14) = reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(v52 == printf));
    ecx53 = static_cast<uint32_t>(r12_48 + 31);
    if (*reinterpret_cast<int32_t*>(&r12_48) >= reinterpret_cast<int32_t>(printf)) {
        ecx53 = *reinterpret_cast<uint32_t*>(&r12_48);
    }
    r12d54 = *reinterpret_cast<uint32_t*>(&r12_48) - (ecx53 & 0xffffffe0);
    ecx55 = r12d54;
    esi56 = 16 << *reinterpret_cast<unsigned char*>(&ecx55);
    ecx57 = *reinterpret_cast<int32_t*>(&rax14);
    edx58 = reinterpret_cast<uint32_t>(reinterpret_cast<int32_t>(r15_46->f4) >> *reinterpret_cast<signed char*>(&ecx57));
    rax59 = v2;
    sf60 = *reinterpret_cast<int32_t*>(&rax59) < reinterpret_cast<int32_t>(printf);
    if (reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(sf60 == printf)) | reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&rax59) == printf)) {
        if (!sf60 || (ecx61 = r12d54, *reinterpret_cast<uint32_t*>(&rax59) = ~*reinterpret_cast<uint32_t*>(&rax59) << *reinterpret_cast<unsigned char*>(&ecx61), edx58 = edx58 + ~(edi1 + *reinterpret_cast<uint32_t*>(&rax59)), reinterpret_cast<int32_t>(edx58) >= reinterpret_cast<int32_t>(-esi56))) {
            addr_17f6_21:
            *reinterpret_cast<unsigned char*>(&rax59) = reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(r14d47 == printf));
            ecx62 = r13d51;
            ecx63 = *reinterpret_cast<uint32_t*>(&rax59);
            r15_46->f4 = edx58 << *reinterpret_cast<unsigned char*>(&ecx62) << *reinterpret_cast<unsigned char*>(&ecx63);
            if (ebp45 != printf) {
                eax64 = fun_1812();
                rbx44->f4 = eax64;
            }
        } else {
            eax65 = 32;
            goto addr_17d1_25;
        }
    } else {
        ecx66 = r12d54;
        *reinterpret_cast<uint32_t*>(&rax59) = (*reinterpret_cast<uint32_t*>(&rax59) - 1 << *reinterpret_cast<unsigned char*>(&ecx66)) + edi1;
        edx58 = edx58 + *reinterpret_cast<uint32_t*>(&rax59) + 1;
        if (reinterpret_cast<int32_t>(edx58) < reinterpret_cast<int32_t>(esi56)) 
            goto addr_17f6_21;
        eax65 = 0xffffffe0;
        goto addr_17d1_25;
    }
    goto v67;
    addr_17d1_25:
    ecx68 = r12d54;
    *reinterpret_cast<uint32_t*>(&rax59) = eax65 << *reinterpret_cast<unsigned char*>(&ecx68);
    edx58 = edx58 + *reinterpret_cast<uint32_t*>(&rax59);
    goto addr_17f6_21;
}

void fun_1acd(int32_t* rdi) {
    void* rsp2;
    int32_t eax3;
    int32_t* rsi4;
    int32_t eax5;
    int32_t* rax6;
    int32_t* rax7;
    int32_t* rax8;
    struct s25* rbp9;
    unsigned char* rbp10;
    unsigned char** r13_11;
    unsigned char** rax12;
    uint32_t* r14_13;
    int64_t r15_14;
    unsigned char* rbx15;
    unsigned char* rax16;
    int64_t rsi17;
    uint32_t edx18;
    int64_t r12_19;
    int1_t cf20;
    int32_t* rax21;
    int64_t r14_22;
    void* rsp23;
    int64_t rdx24;
    int64_t rsi25;
    int1_t zf26;
    int1_t zf27;
    int1_t zf28;
    int32_t* rdi29;
    int32_t* rsi30;
    int32_t eax31;
    int64_t v32;

    rsp2 = __zero_stack_offset();
    if (eax3 != printf) {
        rdi = reinterpret_cast<int32_t*>(0x1ad8);
        *reinterpret_cast<int32_t*>(&rsi4) = eax5;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi4) + 4) = reinterpret_cast<int32_t>(printf);
        fun_1ae1(0x1ad8, rsi4);
        rsp2 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp2) - 8 + 8);
    }
    __asm__("cvtsi2sd xmm0, qword [rsp+0x10]");
    __asm__("cvtsi2sd xmm1, dword [rsp+0x18]");
    __asm__("mulsd xmm1, [rip+0x0]");
    __asm__("addsd xmm1, xmm0");
    *rdi = *rsi4;
    rax6 = g1b0c;
    *rax6 = reinterpret_cast<int32_t>(printf);
    rax7 = g1b19;
    *rax7 = reinterpret_cast<int32_t>(printf);
    __asm__("movaps xmm0, [rax]");
    __asm__("movaps [rsp+0x30], xmm0");
    __asm__("movaps xmm0, [rax]");
    __asm__("movaps xmm1, [rax+0x10]");
    __asm__("movaps [rsp+0x10], xmm0");
    __asm__("movaps [rsp+0x20], xmm1");
    rax8 = g1b56;
    *rax8 = reinterpret_cast<int32_t>(printf);
    rbp9 = g1b68;
    rbp10 = &rbp9->f800;
    r13_11 = g1b72;
    *r13_11 = rbp10;
    rax12 = g1b7d;
    *rax12 = rbp10;
    r14_13 = g1b87;
    *r14_13 = 0x4100000;
    *reinterpret_cast<uint32_t*>(&r15_14) = 0x4100000;
    rbx15 = g1b9b;
    rax16 = rbp10;
    do {
        if (reinterpret_cast<uint64_t>(rax16) >= reinterpret_cast<uint64_t>(rbp10)) {
            rsi17 = g1bd9;
            fun_1bde(rbx15, rsi17, 0x800);
            rsp2 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp2) - 8 + 8);
            *r13_11 = rbx15;
            rax16 = rbx15;
        }
        edx18 = static_cast<uint32_t>(*rax16) << reinterpret_cast<unsigned char>(24 - *reinterpret_cast<signed char*>(&r12_19));
        ++rax16;
        *r13_11 = rax16;
        *reinterpret_cast<uint32_t*>(&r15_14) = *reinterpret_cast<uint32_t*>(&r15_14) | edx18;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_14) + 4) = reinterpret_cast<int32_t>(printf);
        *r14_13 = *reinterpret_cast<uint32_t*>(&r15_14);
        cf20 = *reinterpret_cast<uint32_t*>(&r12_19) < 17;
        *reinterpret_cast<uint32_t*>(&r12_19) = static_cast<uint32_t>(r12_19 + 8);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_19) + 4) = reinterpret_cast<int32_t>(printf);
    } while (cf20);
    *r14_13 = static_cast<uint32_t>(r15_14 + r15_14);
    rax21 = g1bf5;
    *rax21 = 31;
    *reinterpret_cast<int32_t*>(&r14_22) = reinterpret_cast<int32_t>(printf);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_22) + 4) = reinterpret_cast<int32_t>(printf);
    fun_1c35(reinterpret_cast<int64_t>(rsp2) + 16, reinterpret_cast<int64_t>(rsp2) + 64, 0xc8, 0xc8);
    rsp23 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp2) - 8 + 8);
    do {
        *reinterpret_cast<int32_t*>(&rdx24) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx24) + 4) = reinterpret_cast<int32_t>(printf);
        do {
            *reinterpret_cast<int32_t*>(&rsi25) = reinterpret_cast<int32_t>(printf);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi25) + 4) = reinterpret_cast<int32_t>(printf);
            do {
                zf26 = reinterpret_cast<int1_t>(rsi25 == printf);
                ++rsi25;
            } while (zf26);
            zf27 = reinterpret_cast<int1_t>(rdx24 == printf);
            ++rdx24;
        } while (zf27);
        zf28 = reinterpret_cast<int1_t>(r14_22 == printf);
        ++r14_22;
    } while (zf28);
    rdi29 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp23) + 72);
    *reinterpret_cast<int32_t*>(&rsi30) = reinterpret_cast<int32_t>(printf);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi30) + 4) = reinterpret_cast<int32_t>(printf);
    eax31 = fun_1cf0();
    if (eax31 != printf) {
        rdi29 = reinterpret_cast<int32_t*>(0x1cfb);
        *reinterpret_cast<int32_t*>(&rsi30) = eax31;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi30) + 4) = reinterpret_cast<int32_t>(printf);
        fun_1d04(0x1cfb, rsi30);
    }
    __asm__("cvtsi2sd xmm1, qword [rsp+0x48]");
    __asm__("cvtsi2sd xmm0, dword [rsp+0x50]");
    __asm__("mulsd xmm0, [rip+0x0]");
    __asm__("addsd xmm0, xmm1");
    *rdi29 = *rsi30;
    __asm__("subsd xmm0, [rax]");
    fun_1d41(0x1d3a, rsi30 + 1);
    goto v32;
}

void fun_1c35(void* rdi, void* rsi, int64_t rdx, int64_t rcx) {
    void* rsp5;
    int64_t rdx6;
    int64_t rsi7;
    int1_t zf8;
    int1_t zf9;
    int1_t zf10;
    int64_t r14_11;
    int32_t* rdi12;
    int32_t* rsi13;
    int32_t eax14;
    int64_t v15;

    rsp5 = __zero_stack_offset();
    do {
        *reinterpret_cast<int32_t*>(&rdx6) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx6) + 4) = reinterpret_cast<int32_t>(printf);
        do {
            *reinterpret_cast<int32_t*>(&rsi7) = reinterpret_cast<int32_t>(printf);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi7) + 4) = reinterpret_cast<int32_t>(printf);
            do {
                zf8 = reinterpret_cast<int1_t>(rsi7 == printf);
                ++rsi7;
            } while (zf8);
            zf9 = reinterpret_cast<int1_t>(rdx6 == printf);
            ++rdx6;
        } while (zf9);
        zf10 = reinterpret_cast<int1_t>(r14_11 == printf);
        ++r14_11;
    } while (zf10);
    rdi12 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp5) + 72);
    *reinterpret_cast<int32_t*>(&rsi13) = reinterpret_cast<int32_t>(printf);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi13) + 4) = reinterpret_cast<int32_t>(printf);
    eax14 = fun_1cf0();
    if (eax14 != printf) {
        rdi12 = reinterpret_cast<int32_t*>(0x1cfb);
        *reinterpret_cast<int32_t*>(&rsi13) = eax14;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi13) + 4) = reinterpret_cast<int32_t>(printf);
        fun_1d04(0x1cfb, rsi13);
    }
    __asm__("cvtsi2sd xmm1, qword [rsp+0x48]");
    __asm__("cvtsi2sd xmm0, dword [rsp+0x50]");
    __asm__("mulsd xmm0, [rip+0x0]");
    __asm__("addsd xmm0, xmm1");
    *rdi12 = *rsi13;
    __asm__("subsd xmm0, [rax]");
    fun_1d41(0x1d3a, rsi13 + 1);
    goto v15;
}

void printf() {
    int32_t edx1;
    int32_t edx2;

    if (reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(edx1 < reinterpret_cast<int32_t>(printf) == printf)) | reinterpret_cast<uint1_t>(edx2 == printf)) {
    }
}

void fun_28c() {
    goto 0x2ef;
}

uint32_t* g347 = reinterpret_cast<uint32_t*>(0x58b4823d3);

int32_t* g350 = reinterpret_cast<int32_t*>(0x8944fd2941288b44);

unsigned char** g366 = reinterpret_cast<unsigned char**>(0x7fcb924048b49);

struct s32 {
    signed char[2044] pad2044;
    unsigned char f7fc;
};

struct s32* g376 = reinterpret_cast<struct s32*>(0xf138b4373c83948);

void Flush_Buffer(int32_t edi) {
    int32_t ecx2;
    uint32_t* rbx3;
    int32_t* rax4;
    int64_t r13_5;
    unsigned char** r12_6;
    unsigned char* rax7;
    unsigned char* tmp64_8;
    uint32_t edx9;
    unsigned char* rsi10;
    int1_t less11;

    ecx2 = edi;
    rbx3 = g347;
    *rbx3 = *rbx3 << *reinterpret_cast<unsigned char*>(&ecx2);
    rax4 = g350;
    *reinterpret_cast<int32_t*>(&r13_5) = *rax4 - edi;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_5) + 4) = reinterpret_cast<int32_t>(printf);
    *rax4 = *reinterpret_cast<int32_t*>(&r13_5);
    if (*reinterpret_cast<int32_t*>(&r13_5) > 24) 
        goto 0x3af;
    r12_6 = g366;
    rax7 = *r12_6;
    tmp64_8 = &g376->f7fc;
    if (reinterpret_cast<uint64_t>(rax7) >= reinterpret_cast<uint64_t>(tmp64_8)) {
        goto 0x42f;
    } else {
        edx9 = *rbx3;
        while (1) {
            rsi10 = rax7 + 1;
            *r12_6 = rsi10;
            edx9 = edx9 | static_cast<uint32_t>(*rax7) << reinterpret_cast<unsigned char>(24 - *reinterpret_cast<signed char*>(&r13_5));
            *rbx3 = edx9;
            rax7 = rsi10;
            less11 = *reinterpret_cast<int32_t*>(&r13_5) < 17;
            *reinterpret_cast<int32_t*>(&r13_5) = static_cast<int32_t>(r13_5 + 8);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_5) + 4) = reinterpret_cast<int32_t>(printf);
            if (!less11) 
                goto "???";
        }
    }
}

uint32_t* g485 = reinterpret_cast<uint32_t*>(0x482e89092c8d0e8b);

int32_t* g493 = reinterpret_cast<int32_t*>(0x8944ff788d44028b);

unsigned char** g4ad = reinterpret_cast<unsigned char**>(0x7fcb900458b49);

struct s33 {
    signed char[2044] pad2044;
    unsigned char f7fc;
};

struct s33* g4bd = reinterpret_cast<struct s33*>(0x299830fc83948);

void Get_motion_code() {
    uint32_t* rsi1;
    int64_t rcx2;
    uint32_t ebp3;
    int32_t* rdx4;
    int64_t rax5;
    int64_t r15_6;
    unsigned char** r13_7;
    unsigned char* rax8;
    unsigned char* tmp64_9;
    unsigned char* rdx10;
    int1_t less11;

    rsi1 = g485;
    *reinterpret_cast<uint32_t*>(&rcx2) = *rsi1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx2) + 4) = reinterpret_cast<int32_t>(printf);
    ebp3 = static_cast<uint32_t>(rcx2 + rcx2);
    *rsi1 = ebp3;
    rdx4 = g493;
    *reinterpret_cast<int32_t*>(&rax5) = *rdx4;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax5) + 4) = reinterpret_cast<int32_t>(printf);
    *reinterpret_cast<int32_t*>(&r15_6) = static_cast<int32_t>(rax5 - 1);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_6) + 4) = reinterpret_cast<int32_t>(printf);
    *rdx4 = *reinterpret_cast<int32_t*>(&r15_6);
    if (*reinterpret_cast<int32_t*>(&rax5) > 25) 
        goto 0x504;
    r13_7 = g4ad;
    rax8 = *r13_7;
    tmp64_9 = &g4bd->f7fc;
    if (reinterpret_cast<uint64_t>(rax8) >= reinterpret_cast<uint64_t>(tmp64_9)) {
        goto 0x7c4;
    } else {
        while (1) {
            rdx10 = rax8 + 1;
            *r13_7 = rdx10;
            ebp3 = ebp3 | static_cast<uint32_t>(*rax8) << reinterpret_cast<unsigned char>(24 - *reinterpret_cast<signed char*>(&r15_6));
            *rsi1 = ebp3;
            rax8 = rdx10;
            less11 = *reinterpret_cast<int32_t*>(&r15_6) < 17;
            *reinterpret_cast<int32_t*>(&r15_6) = static_cast<int32_t>(r15_6 + 8);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_6) + 4) = reinterpret_cast<int32_t>(printf);
            if (!less11) 
                goto "???";
        }
    }
}

uint32_t* gd35 = reinterpret_cast<uint32_t*>(0x482e89122c8d168b);

int32_t* gd43 = reinterpret_cast<int32_t*>(0x8944ff688d44018b);

unsigned char** gd5d = reinterpret_cast<unsigned char**>(0x7fcb9078b49);

struct s34 {
    signed char[2044] pad2044;
    unsigned char f7fc;
};

struct s34* gd6c = reinterpret_cast<struct s34*>(0xd3830fc83948);

void Get_dmvector() {
    uint32_t* rsi1;
    int64_t rdx2;
    uint32_t ebp3;
    int32_t* rcx4;
    int64_t rax5;
    int64_t r13_6;
    unsigned char** r15_7;
    unsigned char* rax8;
    unsigned char* tmp64_9;
    unsigned char* rdx10;
    int1_t less11;

    rsi1 = gd35;
    *reinterpret_cast<uint32_t*>(&rdx2) = *rsi1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx2) + 4) = reinterpret_cast<int32_t>(printf);
    ebp3 = static_cast<uint32_t>(rdx2 + rdx2);
    *rsi1 = ebp3;
    rcx4 = gd43;
    *reinterpret_cast<int32_t*>(&rax5) = *rcx4;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax5) + 4) = reinterpret_cast<int32_t>(printf);
    *reinterpret_cast<int32_t*>(&r13_6) = static_cast<int32_t>(rax5 - 1);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_6) + 4) = reinterpret_cast<int32_t>(printf);
    *rcx4 = *reinterpret_cast<int32_t*>(&r13_6);
    if (*reinterpret_cast<int32_t*>(&rax5) > 25) 
        goto 0xdb6;
    r15_7 = gd5d;
    rax8 = *r15_7;
    tmp64_9 = &gd6c->f7fc;
    if (reinterpret_cast<uint64_t>(rax8) >= reinterpret_cast<uint64_t>(tmp64_9)) {
        goto 0xeb3;
    } else {
        while (1) {
            rdx10 = rax8 + 1;
            *r15_7 = rdx10;
            ebp3 = ebp3 | static_cast<uint32_t>(*rax8) << reinterpret_cast<unsigned char>(24 - *reinterpret_cast<signed char*>(&r13_6));
            *rsi1 = ebp3;
            rax8 = rdx10;
            less11 = *reinterpret_cast<int32_t*>(&r13_6) < 17;
            *reinterpret_cast<int32_t*>(&r13_6) = static_cast<int32_t>(r13_6 + 8);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_6) + 4) = reinterpret_cast<int32_t>(printf);
            if (!less11) 
                goto "???";
        }
    }
}

uint32_t* g10ea = reinterpret_cast<uint32_t*>(0x4400248d47078b44);

int32_t* g10fb = reinterpret_cast<int32_t*>(0x8944ff708d44038b);

unsigned char** g112d = reinterpret_cast<unsigned char**>(0x7fcb900458b48);

struct s35 {
    signed char[2044] pad2044;
    unsigned char f7fc;
};

struct s35* g113d = reinterpret_cast<struct s35*>(0x1a3830fc83948);

uint32_t* gfde = reinterpret_cast<uint32_t*>(0x89413f2c8d388b41);

int32_t* gfee = reinterpret_cast<int32_t*>(0x45ff708d44018b41);

unsigned char** g1008 = reinterpret_cast<unsigned char**>(0x7fcb9038b48);

struct s36 {
    signed char[2044] pad2044;
    unsigned char f7fc;
};

struct s36* g1017 = reinterpret_cast<struct s36*>(0x38246c894cc83948);

void motion_vectors(int64_t rdi, int64_t rsi, int64_t rdx, int32_t ecx, int32_t r8d, uint32_t r9d, int32_t a7, int32_t a8, uint32_t a9, int32_t a10) {
    uint32_t* rdi11;
    int64_t r8_12;
    uint32_t r12d13;
    int32_t* rbx14;
    int64_t rax15;
    int64_t r14_16;
    unsigned char** rbp17;
    unsigned char* rax18;
    unsigned char* tmp64_19;
    uint32_t* r8_20;
    int64_t rdi21;
    uint32_t ebp22;
    int32_t* r9_23;
    int64_t rax24;
    int64_t r14_25;
    unsigned char** rbx26;
    unsigned char* rax27;
    unsigned char* tmp64_28;
    unsigned char* rdx29;
    int1_t less30;
    unsigned char* rdx31;
    int1_t less32;

    if (r8d != 1) {
        rdi11 = g10ea;
        *reinterpret_cast<uint32_t*>(&r8_12) = *rdi11;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_12) + 4) = reinterpret_cast<int32_t>(printf);
        r12d13 = static_cast<uint32_t>(r8_12 + r8_12);
        *rdi11 = r12d13;
        rbx14 = g10fb;
        *reinterpret_cast<int32_t*>(&rax15) = *rbx14;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax15) + 4) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<int32_t*>(&r14_16) = static_cast<int32_t>(rax15 - 1);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_16) + 4) = reinterpret_cast<int32_t>(printf);
        *rbx14 = *reinterpret_cast<int32_t*>(&r14_16);
        if (*reinterpret_cast<int32_t*>(&rax15) > 25) 
            goto 0x11b7;
        rbp17 = g112d;
        rax18 = *rbp17;
        tmp64_19 = &g113d->f7fc;
        if (reinterpret_cast<uint64_t>(rax18) < reinterpret_cast<uint64_t>(tmp64_19)) 
            goto addr_1146_4;
    } else {
        if (!reinterpret_cast<int1_t>((r9d | a9) == printf)) 
            goto 0x10b4;
        r8_20 = gfde;
        *reinterpret_cast<uint32_t*>(&rdi21) = *r8_20;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi21) + 4) = reinterpret_cast<int32_t>(printf);
        ebp22 = static_cast<uint32_t>(rdi21 + rdi21);
        *r8_20 = ebp22;
        r9_23 = gfee;
        *reinterpret_cast<int32_t*>(&rax24) = *r9_23;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax24) + 4) = reinterpret_cast<int32_t>(printf);
        *reinterpret_cast<int32_t*>(&r14_25) = static_cast<int32_t>(rax24 - 1);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_25) + 4) = reinterpret_cast<int32_t>(printf);
        *r9_23 = *reinterpret_cast<int32_t*>(&r14_25);
        if (*reinterpret_cast<int32_t*>(&rax24) > 25) 
            goto 0x109e;
        rbx26 = g1008;
        rax27 = *rbx26;
        tmp64_28 = &g1017->f7fc;
        if (reinterpret_cast<uint64_t>(rax27) >= reinterpret_cast<uint64_t>(tmp64_28)) 
            goto addr_142d_8; else 
            goto addr_1039_9;
    }
    goto 0x1356;
    addr_1146_4:
    while (1) {
        rdx29 = rax18 + 1;
        *rbp17 = rdx29;
        r12d13 = r12d13 | static_cast<uint32_t>(*rax18) << reinterpret_cast<unsigned char>(24 - *reinterpret_cast<signed char*>(&r14_16));
        *rdi11 = r12d13;
        rax18 = rdx29;
        less30 = *reinterpret_cast<int32_t*>(&r14_16) < 17;
        *reinterpret_cast<int32_t*>(&r14_16) = static_cast<int32_t>(r14_16 + 8);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_16) + 4) = reinterpret_cast<int32_t>(printf);
        if (!less30) 
            goto "???";
    }
    addr_142d_8:
    goto 0x14a0;
    addr_1039_9:
    while (1) {
        rdx31 = rax27 + 1;
        *rbx26 = rdx31;
        ebp22 = ebp22 | static_cast<uint32_t>(*rax27) << reinterpret_cast<unsigned char>(24 - *reinterpret_cast<signed char*>(&r14_25));
        *r8_20 = ebp22;
        rax27 = rdx31;
        less32 = *reinterpret_cast<int32_t*>(&r14_25) < 17;
        *reinterpret_cast<int32_t*>(&r14_25) = static_cast<int32_t>(r14_25 + 8);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_25) + 4) = reinterpret_cast<int32_t>(printf);
        if (!less32) 
            goto "???";
    }
}

void motion_vector(int64_t rdi, int64_t rsi, int32_t edx, int32_t ecx, int32_t r8d, int32_t r9d) {
    fun_1515();
}

int32_t* g19b5 = reinterpret_cast<int32_t*>(0xb80000000000c7);

int64_t g19c7 = 0x1d8b48c40149;

int64_t* g19d1 = reinterpret_cast<int64_t*>(0x58b4823894c);

int64_t* g19db = reinterpret_cast<int64_t*>(0x2d8b4c20894c);

int32_t* g19e5 = reinterpret_cast<int32_t*>(0x41000000045c741);

void Initialize_Buffer() {
    int32_t* rax1;
    int64_t r12_2;
    int64_t r12_3;
    int64_t* rbx4;
    int64_t* rax5;
    int32_t* r13_6;

    rax1 = g19b5;
    *rax1 = reinterpret_cast<int32_t>(printf);
    r12_2 = g19c7;
    r12_3 = r12_2 + 0x800;
    rbx4 = g19d1;
    *rbx4 = r12_3;
    rax5 = g19db;
    *rax5 = r12_3;
    r13_6 = g19e5;
    *r13_6 = 0x4100000;
    goto 0x1a47;
}

void submain() {
    fun_1acd(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 - 8 - 8 - 88 + 16);
}

