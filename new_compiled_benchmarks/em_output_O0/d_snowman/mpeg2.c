
unsigned char** g2fe = reinterpret_cast<unsigned char**>(0x8348c28948008b48);

int64_t* g30f = reinterpret_cast<int64_t*>(0x18b900b60f118948);

uint32_t* g328 = reinterpret_cast<uint32_t*>(0x58b48080b);

uint32_t* g331 = reinterpret_cast<uint32_t*>(0x8c083f8458b0889);

int64_t g2db = 0x4800000800c18148;

uint64_t* g2e9 = reinterpret_cast<uint64_t*>(0x5820f083948);

int32_t* g355 = reinterpret_cast<int32_t*>(0xc35d10c483480889);

void fun_2f7() {
    unsigned char** rax1;
    unsigned char* rax2;
    int64_t* rcx3;
    int32_t ecx4;
    int64_t rbp5;
    uint32_t* rax6;
    uint32_t* rax7;
    int64_t rbp8;
    int64_t rbp9;
    int64_t rbp10;
    int64_t rcx11;
    uint64_t* rax12;
    int32_t* rax13;
    int64_t rbp14;
    int64_t v15;

    while (rax1 = g2fe, rax2 = *rax1, rcx3 = g30f, *rcx3 = reinterpret_cast<int64_t>(rax2 + 1), ecx4 = 24 - *reinterpret_cast<int32_t*>(rbp5 - 8), rax6 = g328, rax7 = g331, *rax7 = static_cast<uint32_t>(*rax2) << *reinterpret_cast<unsigned char*>(&ecx4) | *rax6, *reinterpret_cast<int32_t*>(rbp8 - 8) = *reinterpret_cast<int32_t*>(rbp9 - 8) + 8, *reinterpret_cast<int32_t*>(rbp10 - 8) <= 24) {
        rcx11 = g2db;
        rax12 = g2e9;
        if (*rax12 < reinterpret_cast<uint64_t>(rcx11 + 0x800)) 
            continue;
        fun_2f7();
    }
    rax13 = g355;
    *rax13 = *reinterpret_cast<int32_t*>(rbp14 - 8);
    goto v15;
}

int32_t fun_3bb(int64_t rdi);

void gettimeofday(int64_t rdi);

signed char* g3ea = reinterpret_cast<signed char*>(0x8bf445894804be0f);

signed char* g3cf = reinterpret_cast<signed char*>(0xc829c031480cbe0f);

void fun_3b6(int64_t rdi) {
    int32_t eax2;
    signed char* rax3;
    int64_t rbp4;
    int64_t rbp5;
    signed char* rax6;
    int64_t rbp7;
    int64_t rbp8;
    int64_t rbp9;
    int64_t rbp10;
    int64_t v11;

    eax2 = fun_3bb(rdi);
    if (eax2 == gettimeofday) {
        rax3 = g3ea;
        *reinterpret_cast<int32_t*>(rbp4 - 12) = rax3[*reinterpret_cast<int32_t*>(rbp5 - 8) * 2];
    } else {
        rax6 = g3cf;
        *reinterpret_cast<int32_t*>(rbp7 - 12) = reinterpret_cast<int32_t>(gettimeofday) - rax6[*reinterpret_cast<int32_t*>(rbp8 - 8) * 2];
    }
    *reinterpret_cast<int32_t*>(rbp9 - 4) = *reinterpret_cast<int32_t*>(rbp10 - 12);
    goto v11;
}

int32_t fun_429(int64_t rdi);

signed char* g458 = reinterpret_cast<signed char*>(0x8bf045894804be0f);

signed char* g43d = reinterpret_cast<signed char*>(0xc829c031480cbe0f);

void fun_424(int64_t rdi) {
    int32_t eax2;
    signed char* rax3;
    int64_t rbp4;
    int64_t rbp5;
    signed char* rax6;
    int64_t rbp7;
    int64_t rbp8;
    int64_t rbp9;
    int64_t rbp10;
    int64_t v11;

    eax2 = fun_429(rdi);
    if (eax2 == gettimeofday) {
        rax3 = g458;
        *reinterpret_cast<int32_t*>(rbp4 - 16) = rax3[*reinterpret_cast<int32_t*>(rbp5 - 8) * 2];
    } else {
        rax6 = g43d;
        *reinterpret_cast<int32_t*>(rbp7 - 16) = reinterpret_cast<int32_t>(gettimeofday) - rax6[*reinterpret_cast<int32_t*>(rbp8 - 8) * 2];
    }
    *reinterpret_cast<int32_t*>(rbp9 - 4) = *reinterpret_cast<int32_t*>(rbp10 - 16);
    goto v11;
}

int32_t fun_515(int64_t rdi) {
    int32_t eax2;
    int32_t eax3;
    int64_t rbp4;
    int64_t v5;

    eax2 = 1;
    if (!reinterpret_cast<int1_t>(eax3 == gettimeofday)) {
        eax2 = -1;
    }
    *reinterpret_cast<int32_t*>(rbp4 - 4) = eax2;
    goto v5;
}

void fun_5db();

void fun_593(int64_t rdi) {
    int64_t rbp2;
    int64_t rbp3;
    int32_t eax4;
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
    int64_t v15;

    (*reinterpret_cast<int32_t**>(rbp2 - 24))[*reinterpret_cast<int32_t*>(rbp3 - 28)] = eax4;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(*reinterpret_cast<void**>(rbp5 - 24)) + *reinterpret_cast<int32_t*>(rbp6 - 28) * 4 + 8) = eax4;
    fun_5db();
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(*reinterpret_cast<void**>(rbp7 - 8)) + *reinterpret_cast<int32_t*>(rbp8 - 28) * 8 + 16) = (*reinterpret_cast<int32_t**>(rbp9 - 8))[*reinterpret_cast<int32_t*>(rbp10 - 28) * 2];
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(*reinterpret_cast<void**>(rbp11 - 8)) + *reinterpret_cast<int32_t*>(rbp12 - 28) * 8 + 20) = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(*reinterpret_cast<void**>(rbp13 - 8)) + *reinterpret_cast<int32_t*>(rbp14 - 28) * 8 + 4);
    goto v15;
}

struct s0 {
    signed char[16] pad16;
    int32_t f10;
};

void decode_motion_vector(int32_t* rdi, int32_t esi, int32_t edx, int32_t ecx, int32_t r8d);

int32_t fun_732(int32_t* rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8);

int32_t fun_73f(int32_t* rdi, int64_t rsi, int64_t rdx, ...);

int32_t fun_75e(int64_t rdi, int64_t rsi, int64_t rdx, ...);

struct s1 {
    signed char[4] pad4;
    int32_t f4;
};

struct s2 {
    signed char[4] pad4;
    int32_t f4;
};

struct s3 {
    signed char[16] pad16;
    int32_t f10;
};

struct s4 {
    signed char[4] pad4;
    int32_t f4;
};

int32_t fun_7cd();

struct s5 {
    signed char[4] pad4;
    int32_t f4;
};

int32_t fun_6f5(int64_t rdi) {
    int64_t rbp2;
    int32_t eax3;
    int64_t rbp4;
    int64_t rbp5;
    int32_t* rdi6;
    int64_t rbp7;
    int64_t rsi8;
    int64_t rbp9;
    int64_t rdx10;
    int64_t rbp11;
    int64_t rcx12;
    int64_t rbp13;
    int64_t r8_14;
    struct s0* rbp15;
    int64_t rbp16;
    int32_t eax17;
    int64_t rbp18;
    int32_t eax19;
    int64_t rbp20;
    int64_t rbp21;
    int64_t rbp22;
    int64_t rbp23;
    int64_t rdi24;
    int64_t rbp25;
    int32_t eax26;
    int64_t rbp27;
    int64_t rbp28;
    int64_t rbp29;
    int64_t rbp30;
    int64_t rbp31;
    int32_t* rdi32;
    int64_t rbp33;
    int32_t esi34;
    int64_t rbp35;
    int32_t edx36;
    int64_t rbp37;
    int32_t ecx38;
    int64_t rbp39;
    int32_t r8d40;
    struct s3* rbp41;
    int64_t rbp42;
    int64_t rbp43;
    int64_t rbp44;
    int32_t eax45;
    int64_t rbp46;
    int64_t v47;

    *reinterpret_cast<int32_t*>(rbp2 - 44) = eax3;
    *reinterpret_cast<int32_t*>(rbp4 - 40) = *reinterpret_cast<int32_t*>(rbp5 - 44);
    rdi6 = *reinterpret_cast<int32_t**>(rbp7 - 8);
    *reinterpret_cast<int32_t*>(&rsi8) = *reinterpret_cast<int32_t*>(rbp9 - 20);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi8) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    *reinterpret_cast<int32_t*>(&rdx10) = *reinterpret_cast<int32_t*>(rbp11 - 36);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx10) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    *reinterpret_cast<int32_t*>(&rcx12) = *reinterpret_cast<int32_t*>(rbp13 - 40);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx12) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    *reinterpret_cast<int32_t*>(&r8_14) = rbp15->f10;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_14) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    decode_motion_vector(rdi6, *reinterpret_cast<int32_t*>(&rsi8), *reinterpret_cast<int32_t*>(&rdx10), *reinterpret_cast<int32_t*>(&rcx12), *reinterpret_cast<int32_t*>(&r8_14));
    if (*reinterpret_cast<int32_t*>(rbp16 - 28) != gettimeofday) {
        eax17 = fun_732(rdi6, rsi8, rdx10, rcx12, r8_14);
        **reinterpret_cast<int32_t**>(rbp18 - 16) = eax17;
    }
    eax19 = fun_73f(rdi6, rsi8, rdx10, rdi6, rsi8, rdx10);
    *reinterpret_cast<int32_t*>(rbp20 - 36) = eax19;
    if (*reinterpret_cast<int32_t*>(rbp21 - 24) == gettimeofday || *reinterpret_cast<int32_t*>(rbp22 - 36) == gettimeofday) {
        *reinterpret_cast<int32_t*>(rbp23 - 48) = reinterpret_cast<int32_t>(gettimeofday);
    } else {
        *reinterpret_cast<int32_t*>(&rdi24) = *reinterpret_cast<int32_t*>(rbp25 - 24);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi24) + 4) = reinterpret_cast<int32_t>(gettimeofday);
        eax26 = fun_75e(rdi24, rsi8, rdx10, rdi24, rsi8, rdx10);
        *reinterpret_cast<int32_t*>(rbp27 - 48) = eax26;
    }
    *reinterpret_cast<int32_t*>(rbp28 - 40) = *reinterpret_cast<int32_t*>(rbp29 - 48);
    if (*reinterpret_cast<int32_t*>(rbp30 - 32) != gettimeofday) {
        (*reinterpret_cast<struct s1**>(rbp31 - 8))->f4 = (*reinterpret_cast<struct s1**>(rbp31 - 8))->f4 >> 1;
    }
    rdi32 = &(*reinterpret_cast<struct s2**>(rbp33 - 8))->f4;
    esi34 = *reinterpret_cast<int32_t*>(rbp35 - 24);
    edx36 = *reinterpret_cast<int32_t*>(rbp37 - 36);
    ecx38 = *reinterpret_cast<int32_t*>(rbp39 - 40);
    r8d40 = rbp41->f10;
    decode_motion_vector(rdi32, esi34, edx36, ecx38, r8d40);
    if (*reinterpret_cast<int32_t*>(rbp42 - 32) != gettimeofday) {
        (*reinterpret_cast<struct s4**>(rbp43 - 8))->f4 = (*reinterpret_cast<struct s4**>(rbp43 - 8))->f4 << 1;
    }
    if (*reinterpret_cast<int32_t*>(rbp44 - 28) != gettimeofday) {
        eax45 = fun_7cd();
        (*reinterpret_cast<struct s5**>(rbp46 - 16))->f4 = eax45;
    }
    goto v47;
}

struct s6 {
    signed char[4] pad4;
    int32_t f4;
};

struct s7 {
    signed char[4] pad4;
    int32_t f4;
};

struct s8 {
    signed char[16] pad16;
    int32_t f10;
};

struct s9 {
    signed char[4] pad4;
    int32_t f4;
};

struct s10 {
    signed char[4] pad4;
    int32_t f4;
};

int32_t fun_732(int32_t* rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8) {
    int64_t rbp6;
    int32_t eax7;
    int32_t eax8;
    int64_t rbp9;
    int64_t rbp10;
    int64_t rbp11;
    int64_t rbp12;
    int64_t rdi13;
    int64_t rbp14;
    int32_t eax15;
    int64_t rbp16;
    int64_t rbp17;
    int64_t rbp18;
    int64_t rbp19;
    int64_t rbp20;
    int32_t* rdi21;
    int64_t rbp22;
    int32_t esi23;
    int64_t rbp24;
    int32_t edx25;
    int64_t rbp26;
    int32_t ecx27;
    int64_t rbp28;
    int32_t r8d29;
    struct s8* rbp30;
    int64_t rbp31;
    int64_t rbp32;
    int64_t rbp33;
    int32_t eax34;
    int64_t rbp35;
    int64_t v36;

    **reinterpret_cast<int32_t**>(rbp6 - 16) = eax7;
    eax8 = fun_73f(rdi, rsi, rdx);
    *reinterpret_cast<int32_t*>(rbp9 - 36) = eax8;
    if (*reinterpret_cast<int32_t*>(rbp10 - 24) == gettimeofday || *reinterpret_cast<int32_t*>(rbp11 - 36) == gettimeofday) {
        *reinterpret_cast<int32_t*>(rbp12 - 48) = reinterpret_cast<int32_t>(gettimeofday);
    } else {
        *reinterpret_cast<int32_t*>(&rdi13) = *reinterpret_cast<int32_t*>(rbp14 - 24);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi13) + 4) = reinterpret_cast<int32_t>(gettimeofday);
        eax15 = fun_75e(rdi13, rsi, rdx);
        *reinterpret_cast<int32_t*>(rbp16 - 48) = eax15;
    }
    *reinterpret_cast<int32_t*>(rbp17 - 40) = *reinterpret_cast<int32_t*>(rbp18 - 48);
    if (*reinterpret_cast<int32_t*>(rbp19 - 32) != gettimeofday) {
        (*reinterpret_cast<struct s6**>(rbp20 - 8))->f4 = (*reinterpret_cast<struct s6**>(rbp20 - 8))->f4 >> 1;
    }
    rdi21 = &(*reinterpret_cast<struct s7**>(rbp22 - 8))->f4;
    esi23 = *reinterpret_cast<int32_t*>(rbp24 - 24);
    edx25 = *reinterpret_cast<int32_t*>(rbp26 - 36);
    ecx27 = *reinterpret_cast<int32_t*>(rbp28 - 40);
    r8d29 = rbp30->f10;
    decode_motion_vector(rdi21, esi23, edx25, ecx27, r8d29);
    if (*reinterpret_cast<int32_t*>(rbp31 - 32) != gettimeofday) {
        (*reinterpret_cast<struct s9**>(rbp32 - 8))->f4 = (*reinterpret_cast<struct s9**>(rbp32 - 8))->f4 << 1;
    }
    if (*reinterpret_cast<int32_t*>(rbp33 - 28) != gettimeofday) {
        eax34 = fun_7cd();
        (*reinterpret_cast<struct s10**>(rbp35 - 16))->f4 = eax34;
    }
    goto v36;
}

struct s11 {
    signed char[4] pad4;
    int32_t f4;
};

struct s12 {
    signed char[4] pad4;
    int32_t f4;
};

struct s13 {
    signed char[16] pad16;
    int32_t f10;
};

struct s14 {
    signed char[4] pad4;
    int32_t f4;
};

struct s15 {
    signed char[4] pad4;
    int32_t f4;
};

int32_t fun_75e(int64_t rdi, int64_t rsi, int64_t rdx, ...) {
    int64_t rbp4;
    int32_t eax5;
    int64_t rbp6;
    int64_t rbp7;
    int64_t rbp8;
    int64_t rbp9;
    int32_t* rdi10;
    int64_t rbp11;
    int32_t esi12;
    int64_t rbp13;
    int32_t edx14;
    int64_t rbp15;
    int32_t ecx16;
    int64_t rbp17;
    int32_t r8d18;
    struct s13* rbp19;
    int64_t rbp20;
    int64_t rbp21;
    int64_t rbp22;
    int32_t eax23;
    int64_t rbp24;
    int64_t v25;

    *reinterpret_cast<int32_t*>(rbp4 - 48) = eax5;
    *reinterpret_cast<int32_t*>(rbp6 - 40) = *reinterpret_cast<int32_t*>(rbp7 - 48);
    if (*reinterpret_cast<int32_t*>(rbp8 - 32) != gettimeofday) {
        (*reinterpret_cast<struct s11**>(rbp9 - 8))->f4 = (*reinterpret_cast<struct s11**>(rbp9 - 8))->f4 >> 1;
    }
    rdi10 = &(*reinterpret_cast<struct s12**>(rbp11 - 8))->f4;
    esi12 = *reinterpret_cast<int32_t*>(rbp13 - 24);
    edx14 = *reinterpret_cast<int32_t*>(rbp15 - 36);
    ecx16 = *reinterpret_cast<int32_t*>(rbp17 - 40);
    r8d18 = rbp19->f10;
    decode_motion_vector(rdi10, esi12, edx14, ecx16, r8d18);
    if (*reinterpret_cast<int32_t*>(rbp20 - 32) != gettimeofday) {
        (*reinterpret_cast<struct s14**>(rbp21 - 8))->f4 = (*reinterpret_cast<struct s14**>(rbp21 - 8))->f4 << 1;
    }
    if (*reinterpret_cast<int32_t*>(rbp22 - 28) != gettimeofday) {
        eax23 = fun_7cd();
        (*reinterpret_cast<struct s15**>(rbp24 - 16))->f4 = eax23;
    }
    goto v25;
}

void decode_motion_vector(int32_t* rdi, int32_t esi, int32_t edx, int32_t ecx, int32_t r8d) {
    int32_t v6;
    int32_t ecx7;
    int32_t v8;
    int32_t v9;
    int32_t v10;
    int32_t ecx11;
    int32_t ecx12;
    int32_t v13;

    __asm__("cdq ");
    v6 = esi % 32;
    ecx7 = v6;
    v8 = 16 << *reinterpret_cast<unsigned char*>(&ecx7);
    if (r8d == gettimeofday) {
        v9 = *rdi;
    } else {
        v9 = *rdi >> 1;
    }
    v10 = v9;
    if (edx <= reinterpret_cast<int32_t>(gettimeofday)) {
        if (edx < reinterpret_cast<int32_t>(gettimeofday)) {
            ecx11 = v6;
            v10 = v10 - ((reinterpret_cast<int32_t>(gettimeofday) - edx - 1 << *reinterpret_cast<unsigned char*>(&ecx11)) + ecx + 1);
            if (v10 < reinterpret_cast<int32_t>(gettimeofday) - v8) {
                v10 = v8 + v8 + v10;
            }
        }
    } else {
        ecx12 = v6;
        v10 = (edx - 1 << *reinterpret_cast<unsigned char*>(&ecx12)) + ecx + 1 + v10;
        if (v10 >= v8) {
            v10 = v10 - (v8 + v8);
        }
    }
    if (r8d == gettimeofday) {
        v13 = v10;
    } else {
        v13 = v10 << 1;
    }
    *rdi = v13;
    return;
}

struct s16 {
    signed char[4] pad4;
    int32_t f4;
};

int32_t fun_7cd() {
    int64_t rbp1;
    int32_t eax2;
    int64_t v3;

    (*reinterpret_cast<struct s16**>(rbp1 - 16))->f4 = eax2;
    goto v3;
}

void fun_c10(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx, int64_t r8, int64_t r9, int64_t a7, int32_t a8, int32_t a9, int32_t a10) {
    int64_t v11;

    goto v11;
}

void fun_c53(int32_t* rdi, int32_t* rsi) {
    int64_t v3;

    __asm__("cvtsi2sd xmm1, qword [rbp-0x10]");
    __asm__("cvtsi2sd xmm0, dword [rbp-0x8]");
    *rdi = *rsi;
    __asm__("mulsd xmm0, xmm2");
    __asm__("addsd xmm0, xmm1");
    goto v3;
}

void* g493 = reinterpret_cast<void*>(0xe801487cbe0f);

void fun_49d(int64_t rdi);

int32_t fun_4a2(int64_t rdi);

void* g41a = reinterpret_cast<void*>(0xe801487cbe0f);

void* g3ac = reinterpret_cast<void*>(0xe801487cbe0f);

signed char* g4d1 = reinterpret_cast<signed char*>(0x8bec45894804be0f);

signed char* g4b6 = reinterpret_cast<signed char*>(0xc829c031480cbe0f);

int32_t fun_38c(int64_t rdi) {
    int64_t rbp2;
    int32_t eax3;
    int32_t eax4;
    int64_t rbp5;
    int32_t eax6;
    int64_t rbp7;
    int64_t rbp8;
    void* rax9;
    int64_t rdi10;
    int64_t rbp11;
    int32_t eax12;
    int64_t rbp13;
    int64_t rbp14;
    int64_t rbp15;
    void* rax16;
    int64_t rdi17;
    int64_t rbp18;
    int32_t eax19;
    int64_t rbp20;
    int64_t rbp21;
    void* rax22;
    int64_t rdi23;
    int64_t rbp24;
    int32_t eax25;
    signed char* rax26;
    int64_t rbp27;
    int64_t rbp28;
    int64_t rbp29;
    int64_t rbp30;
    int64_t v31;
    signed char* rax32;
    int64_t rbp33;
    int64_t rbp34;
    signed char* rax35;
    int64_t rbp36;
    int64_t rbp37;
    int64_t rbp38;
    int64_t rbp39;
    signed char* rax40;
    int64_t rbp41;
    int64_t rbp42;
    signed char* rax43;
    int64_t rbp44;
    int64_t rbp45;
    int64_t rbp46;
    int64_t rbp47;
    signed char* rax48;
    int64_t rbp49;
    int64_t rbp50;

    *reinterpret_cast<int32_t*>(rbp2 - 8) = eax3;
    if (eax4 < 64) {
        if (*reinterpret_cast<int32_t*>(rbp5 - 8) < 24) {
            eax6 = *reinterpret_cast<int32_t*>(rbp7 - 8) - 12;
            *reinterpret_cast<int32_t*>(rbp8 - 8) = eax6;
            if (eax6 >= reinterpret_cast<int32_t>(gettimeofday)) {
                rax9 = g493;
                *reinterpret_cast<int32_t*>(&rdi10) = *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rax9) + *reinterpret_cast<int32_t*>(rbp11 - 8) * 2 + 1);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi10) + 4) = reinterpret_cast<int32_t>(gettimeofday);
                fun_49d(rdi10);
                eax12 = fun_4a2(rdi10);
                if (eax12 != gettimeofday) 
                    goto addr_4ab_7;
            } else {
                *reinterpret_cast<int32_t*>(rbp13 - 4) = reinterpret_cast<int32_t>(gettimeofday);
                goto addr_4de_9;
            }
        } else {
            *reinterpret_cast<int32_t*>(rbp14 - 8) = *reinterpret_cast<int32_t*>(rbp15 - 8) >> 3;
            rax16 = g41a;
            *reinterpret_cast<int32_t*>(&rdi17) = *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rax16) + *reinterpret_cast<int32_t*>(rbp18 - 8) * 2 + 1);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi17) + 4) = reinterpret_cast<int32_t>(gettimeofday);
            fun_424(rdi17);
            eax19 = fun_429(rdi17);
            if (eax19 == gettimeofday) 
                goto addr_44d_13; else 
                goto addr_432_14;
        }
    } else {
        *reinterpret_cast<int32_t*>(rbp20 - 8) = *reinterpret_cast<int32_t*>(rbp21 - 8) >> 6;
        rax22 = g3ac;
        *reinterpret_cast<int32_t*>(&rdi23) = *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rax22) + *reinterpret_cast<int32_t*>(rbp24 - 8) * 2 + 1);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi23) + 4) = reinterpret_cast<int32_t>(gettimeofday);
        fun_3b6(rdi23);
        eax25 = fun_3bb(rdi23);
        if (eax25 == gettimeofday) 
            goto addr_3df_18; else 
            goto addr_3c4_19;
    }
    rax26 = g4d1;
    *reinterpret_cast<int32_t*>(rbp27 - 20) = rax26[*reinterpret_cast<int32_t*>(rbp28 - 8) * 2];
    addr_4d8_21:
    *reinterpret_cast<int32_t*>(rbp29 - 4) = *reinterpret_cast<int32_t*>(rbp30 - 20);
    addr_4de_9:
    goto v31;
    addr_4ab_7:
    rax32 = g4b6;
    *reinterpret_cast<int32_t*>(rbp33 - 20) = reinterpret_cast<int32_t>(gettimeofday) - rax32[*reinterpret_cast<int32_t*>(rbp34 - 8) * 2];
    goto addr_4d8_21;
    addr_44d_13:
    rax35 = g458;
    *reinterpret_cast<int32_t*>(rbp36 - 16) = rax35[*reinterpret_cast<int32_t*>(rbp37 - 8) * 2];
    addr_45f_22:
    *reinterpret_cast<int32_t*>(rbp38 - 4) = *reinterpret_cast<int32_t*>(rbp39 - 16);
    goto addr_4de_9;
    addr_432_14:
    rax40 = g43d;
    *reinterpret_cast<int32_t*>(rbp41 - 16) = reinterpret_cast<int32_t>(gettimeofday) - rax40[*reinterpret_cast<int32_t*>(rbp42 - 8) * 2];
    goto addr_45f_22;
    addr_3df_18:
    rax43 = g3ea;
    *reinterpret_cast<int32_t*>(rbp44 - 12) = rax43[*reinterpret_cast<int32_t*>(rbp45 - 8) * 2];
    addr_3f1_23:
    *reinterpret_cast<int32_t*>(rbp46 - 4) = *reinterpret_cast<int32_t*>(rbp47 - 12);
    goto addr_4de_9;
    addr_3c4_19:
    rax48 = g3cf;
    *reinterpret_cast<int32_t*>(rbp49 - 12) = reinterpret_cast<int32_t>(gettimeofday) - rax48[*reinterpret_cast<int32_t*>(rbp50 - 8) * 2];
    goto addr_3f1_23;
}

int32_t fun_3bb(int64_t rdi) {
    int32_t eax2;
    signed char* rax3;
    int64_t rbp4;
    int64_t rbp5;
    signed char* rax6;
    int64_t rbp7;
    int64_t rbp8;
    int64_t rbp9;
    int64_t rbp10;
    int64_t v11;

    if (eax2 == gettimeofday) {
        rax3 = g3ea;
        *reinterpret_cast<int32_t*>(rbp4 - 12) = rax3[*reinterpret_cast<int32_t*>(rbp5 - 8) * 2];
    } else {
        rax6 = g3cf;
        *reinterpret_cast<int32_t*>(rbp7 - 12) = reinterpret_cast<int32_t>(gettimeofday) - rax6[*reinterpret_cast<int32_t*>(rbp8 - 8) * 2];
    }
    *reinterpret_cast<int32_t*>(rbp9 - 4) = *reinterpret_cast<int32_t*>(rbp10 - 12);
    goto v11;
}

int32_t fun_429(int64_t rdi) {
    int32_t eax2;
    signed char* rax3;
    int64_t rbp4;
    int64_t rbp5;
    signed char* rax6;
    int64_t rbp7;
    int64_t rbp8;
    int64_t rbp9;
    int64_t rbp10;
    int64_t v11;

    if (eax2 == gettimeofday) {
        rax3 = g458;
        *reinterpret_cast<int32_t*>(rbp4 - 16) = rax3[*reinterpret_cast<int32_t*>(rbp5 - 8) * 2];
    } else {
        rax6 = g43d;
        *reinterpret_cast<int32_t*>(rbp7 - 16) = reinterpret_cast<int32_t>(gettimeofday) - rax6[*reinterpret_cast<int32_t*>(rbp8 - 8) * 2];
    }
    *reinterpret_cast<int32_t*>(rbp9 - 4) = *reinterpret_cast<int32_t*>(rbp10 - 16);
    goto v11;
}

void fun_49d(int64_t rdi) {
    int32_t eax2;
    signed char* rax3;
    int64_t rbp4;
    int64_t rbp5;
    signed char* rax6;
    int64_t rbp7;
    int64_t rbp8;
    int64_t rbp9;
    int64_t rbp10;
    int64_t v11;

    eax2 = fun_4a2(rdi);
    if (eax2 == gettimeofday) {
        rax3 = g4d1;
        *reinterpret_cast<int32_t*>(rbp4 - 20) = rax3[*reinterpret_cast<int32_t*>(rbp5 - 8) * 2];
    } else {
        rax6 = g4b6;
        *reinterpret_cast<int32_t*>(rbp7 - 20) = reinterpret_cast<int32_t>(gettimeofday) - rax6[*reinterpret_cast<int32_t*>(rbp8 - 8) * 2];
    }
    *reinterpret_cast<int32_t*>(rbp9 - 4) = *reinterpret_cast<int32_t*>(rbp10 - 20);
    goto v11;
}

void fun_5db() {
    int64_t rbp1;
    int64_t rbp2;
    int64_t rbp3;
    int64_t rbp4;
    int64_t rbp5;
    int64_t rbp6;
    int64_t rbp7;
    int64_t rbp8;
    int64_t v9;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(*reinterpret_cast<void**>(rbp1 - 8)) + *reinterpret_cast<int32_t*>(rbp2 - 28) * 8 + 16) = (*reinterpret_cast<int32_t**>(rbp3 - 8))[*reinterpret_cast<int32_t*>(rbp4 - 28) * 2];
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(*reinterpret_cast<void**>(rbp5 - 8)) + *reinterpret_cast<int32_t*>(rbp6 - 28) * 8 + 20) = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(*reinterpret_cast<void**>(rbp7 - 8)) + *reinterpret_cast<int32_t*>(rbp8 - 28) * 8 + 4);
    goto v9;
}

struct s17 {
    signed char[4] pad4;
    int32_t f4;
};

struct s18 {
    signed char[4] pad4;
    int32_t f4;
};

struct s19 {
    signed char[16] pad16;
    int32_t f10;
};

struct s20 {
    signed char[4] pad4;
    int32_t f4;
};

struct s21 {
    signed char[4] pad4;
    int32_t f4;
};

int32_t fun_73f(int32_t* rdi, int64_t rsi, int64_t rdx, ...) {
    int64_t rbp4;
    int32_t eax5;
    int64_t rbp6;
    int64_t rbp7;
    int64_t rbp8;
    int64_t rdi9;
    int64_t rbp10;
    int32_t eax11;
    int64_t rbp12;
    int64_t rbp13;
    int64_t rbp14;
    int64_t rbp15;
    int64_t rbp16;
    int32_t* rdi17;
    int64_t rbp18;
    int32_t esi19;
    int64_t rbp20;
    int32_t edx21;
    int64_t rbp22;
    int32_t ecx23;
    int64_t rbp24;
    int32_t r8d25;
    struct s19* rbp26;
    int64_t rbp27;
    int64_t rbp28;
    int64_t rbp29;
    int32_t eax30;
    int64_t rbp31;
    int64_t v32;

    *reinterpret_cast<int32_t*>(rbp4 - 36) = eax5;
    if (*reinterpret_cast<int32_t*>(rbp6 - 24) == gettimeofday || *reinterpret_cast<int32_t*>(rbp7 - 36) == gettimeofday) {
        *reinterpret_cast<int32_t*>(rbp8 - 48) = reinterpret_cast<int32_t>(gettimeofday);
    } else {
        *reinterpret_cast<int32_t*>(&rdi9) = *reinterpret_cast<int32_t*>(rbp10 - 24);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi9) + 4) = reinterpret_cast<int32_t>(gettimeofday);
        eax11 = fun_75e(rdi9, rsi, rdx);
        *reinterpret_cast<int32_t*>(rbp12 - 48) = eax11;
    }
    *reinterpret_cast<int32_t*>(rbp13 - 40) = *reinterpret_cast<int32_t*>(rbp14 - 48);
    if (*reinterpret_cast<int32_t*>(rbp15 - 32) != gettimeofday) {
        (*reinterpret_cast<struct s17**>(rbp16 - 8))->f4 = (*reinterpret_cast<struct s17**>(rbp16 - 8))->f4 >> 1;
    }
    rdi17 = &(*reinterpret_cast<struct s18**>(rbp18 - 8))->f4;
    esi19 = *reinterpret_cast<int32_t*>(rbp20 - 24);
    edx21 = *reinterpret_cast<int32_t*>(rbp22 - 36);
    ecx23 = *reinterpret_cast<int32_t*>(rbp24 - 40);
    r8d25 = rbp26->f10;
    decode_motion_vector(rdi17, esi19, edx21, ecx23, r8d25);
    if (*reinterpret_cast<int32_t*>(rbp27 - 32) != gettimeofday) {
        (*reinterpret_cast<struct s20**>(rbp28 - 8))->f4 = (*reinterpret_cast<struct s20**>(rbp28 - 8))->f4 << 1;
    }
    if (*reinterpret_cast<int32_t*>(rbp29 - 28) != gettimeofday) {
        eax30 = fun_7cd();
        (*reinterpret_cast<struct s21**>(rbp31 - 16))->f4 = eax30;
    }
    goto v32;
}

struct s22 {
    int32_t f0;
    int32_t f4;
};

struct s23 {
    int32_t f0;
    int32_t f4;
};

void fun_ae5(struct s22* rdi, struct s23* rsi, int64_t rdx, int32_t* rcx, int64_t r8, int64_t r9, int32_t a7, int32_t a8, int32_t a9, int32_t a10);

int32_t* gb28 = reinterpret_cast<int32_t*>(0x48d1014803e2c148);

int32_t* gb81 = reinterpret_cast<int32_t*>(0x48d1014804e2c148);

void rtclock();

void fun_aaa(int64_t rdi, int64_t rsi) {
    int64_t v3;
    struct s22* rdi4;
    int64_t rbp5;
    struct s23* rsi6;
    int64_t rbp7;
    int64_t rdx8;
    int64_t rbp9;
    int32_t* rcx10;
    int64_t rbp11;
    int64_t r8_12;
    int64_t rbp13;
    int64_t r9_14;
    int64_t rbp15;
    int32_t r11d16;
    int64_t rbp17;
    int32_t r10d18;
    int64_t rbp19;
    int32_t eax20;
    int64_t rbp21;
    int64_t rbp22;
    int32_t v23;
    int32_t v24;
    int32_t v25;
    int64_t rbp26;
    int64_t rbp27;
    int64_t rbp28;
    int64_t rbp29;
    int32_t* rcx30;
    int64_t rbp31;
    int64_t rbp32;
    int64_t rbp33;
    int64_t rbp34;
    int64_t rbp35;
    int64_t rbp36;
    int64_t rbp37;
    int64_t rbp38;
    int64_t rbp39;
    int32_t* rcx40;
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
    int32_t* rsi56;
    int64_t v57;

    v3 = reinterpret_cast<int64_t>(__return_address());
    rdi4 = reinterpret_cast<struct s22*>(rbp5 - 64);
    rsi6 = reinterpret_cast<struct s23*>(rbp7 - 72);
    rdx8 = rbp9 - 96;
    *reinterpret_cast<int32_t*>(&rcx10) = *reinterpret_cast<int32_t*>(rbp11 - 100);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx10) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    *reinterpret_cast<int32_t*>(&r8_12) = *reinterpret_cast<int32_t*>(rbp13 - 0x68);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_12) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    *reinterpret_cast<int32_t*>(&r9_14) = *reinterpret_cast<int32_t*>(rbp15 - 0x6c);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_14) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    r11d16 = *reinterpret_cast<int32_t*>(rbp17 - 0x74);
    r10d18 = *reinterpret_cast<int32_t*>(rbp19 - 0x78);
    eax20 = *reinterpret_cast<int32_t*>(rbp21 - 0x7c);
    *reinterpret_cast<int32_t*>(&v3) = *reinterpret_cast<int32_t*>(rbp22 - 0x70);
    v23 = r11d16;
    v24 = r10d18;
    v25 = eax20;
    fun_ae5(rdi4, rsi6, rdx8, rcx10, r8_12, r9_14, *reinterpret_cast<int32_t*>(&v3), v23, v24, v25);
    *reinterpret_cast<int32_t*>(rbp26 - 12) = reinterpret_cast<int32_t>(gettimeofday);
    while (*reinterpret_cast<int32_t*>(rbp27 - 12) < 2) {
        *reinterpret_cast<int32_t*>(rbp28 - 16) = reinterpret_cast<int32_t>(gettimeofday);
        while (*reinterpret_cast<int32_t*>(rbp29 - 16) < 2) {
            rcx30 = gb28;
            rcx10 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rcx30) + (static_cast<int64_t>(*reinterpret_cast<int32_t*>(rbp31 - 12)) << 3));
            rdx8 = *reinterpret_cast<int32_t*>(rbp32 - 16);
            *reinterpret_cast<uint32_t*>(rbp33 - 24) = reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(rbp34 - 96 + (static_cast<int64_t>(*reinterpret_cast<int32_t*>(rbp35 - 12)) << 3) + *reinterpret_cast<int32_t*>(rbp36 - 16) * 4) != rcx10[rdx8])) & 1) + *reinterpret_cast<int32_t*>(rbp37 - 24);
            *reinterpret_cast<int32_t*>(rbp38 - 20) = reinterpret_cast<int32_t>(gettimeofday);
            while (*reinterpret_cast<int32_t*>(rbp39 - 20) < 2) {
                rcx40 = gb81;
                rcx10 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rcx40) + (static_cast<int64_t>(*reinterpret_cast<int32_t*>(rbp41 - 12)) << 4) + (static_cast<int64_t>(*reinterpret_cast<int32_t*>(rbp42 - 16)) << 3));
                rdx8 = *reinterpret_cast<int32_t*>(rbp43 - 20);
                *reinterpret_cast<uint32_t*>(rbp44 - 24) = reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(rbp45 - 64 + (static_cast<int64_t>(*reinterpret_cast<int32_t*>(rbp46 - 12)) << 4) + (static_cast<int64_t>(*reinterpret_cast<int32_t*>(rbp47 - 16)) << 3) + *reinterpret_cast<int32_t*>(rbp48 - 20) * 4) != rcx10[rdx8])) & 1) + *reinterpret_cast<int32_t*>(rbp49 - 24);
                *reinterpret_cast<int32_t*>(rbp50 - 20) = *reinterpret_cast<int32_t*>(rbp51 - 20) + 1;
            }
            *reinterpret_cast<int32_t*>(rbp52 - 16) = *reinterpret_cast<int32_t*>(rbp53 - 16) + 1;
        }
        *reinterpret_cast<int32_t*>(rbp54 - 12) = *reinterpret_cast<int32_t*>(rbp55 - 12) + 1;
    }
    rtclock();
    rdi4->f0 = rsi6->f0;
    rsi56 = &rsi6->f4;
    rdi4->f4 = *rsi56;
    __asm__("subsd xmm0, [rax]");
    fun_c10(0xc09, rsi56 + 1, rdx8, rcx10, r8_12, r9_14, v3, v23, v24, v25);
    goto v57;
}

void fun_1de(int64_t rdi) {
    int64_t v2;

    goto v2;
}

void fun_36d() {
    int32_t eax1;
    int32_t eax2;
    int64_t rbp3;
    int64_t rbp4;
    int64_t rbp5;
    int32_t eax6;
    int64_t rbp7;
    int64_t rbp8;
    void* rax9;
    int64_t rdi10;
    int64_t rbp11;
    int32_t eax12;
    int64_t rbp13;
    int64_t rbp14;
    int64_t rbp15;
    void* rax16;
    int64_t rdi17;
    int64_t rbp18;
    int32_t eax19;
    signed char* rax20;
    int64_t rbp21;
    int64_t rbp22;
    int64_t rbp23;
    int64_t rbp24;
    int64_t v25;
    signed char* rax26;
    int64_t rbp27;
    int64_t rbp28;
    signed char* rax29;
    int64_t rbp30;
    int64_t rbp31;
    int64_t rbp32;
    int64_t rbp33;
    signed char* rax34;
    int64_t rbp35;
    int64_t rbp36;
    int64_t rbp37;
    int64_t rbp38;
    void* rax39;
    int64_t rdi40;
    int64_t rbp41;
    int32_t eax42;
    signed char* rax43;
    int64_t rbp44;
    int64_t rbp45;
    int64_t rbp46;
    int64_t rbp47;
    signed char* rax48;
    int64_t rbp49;
    int64_t rbp50;

    if (eax1 == gettimeofday) {
        eax2 = fun_38c(9);
        *reinterpret_cast<int32_t*>(rbp3 - 8) = eax2;
        if (eax2 >= 64) 
            goto addr_398_4;
    } else {
        *reinterpret_cast<int32_t*>(rbp4 - 4) = reinterpret_cast<int32_t>(gettimeofday);
        goto addr_4de_6;
    }
    if (*reinterpret_cast<int32_t*>(rbp5 - 8) < 24) {
        eax6 = *reinterpret_cast<int32_t*>(rbp7 - 8) - 12;
        *reinterpret_cast<int32_t*>(rbp8 - 8) = eax6;
        if (eax6 >= reinterpret_cast<int32_t>(gettimeofday)) {
            rax9 = g493;
            *reinterpret_cast<int32_t*>(&rdi10) = *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rax9) + *reinterpret_cast<int32_t*>(rbp11 - 8) * 2 + 1);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi10) + 4) = reinterpret_cast<int32_t>(gettimeofday);
            fun_49d(rdi10);
            eax12 = fun_4a2(rdi10);
            if (eax12 != gettimeofday) 
                goto addr_4ab_12;
        } else {
            *reinterpret_cast<int32_t*>(rbp13 - 4) = reinterpret_cast<int32_t>(gettimeofday);
            goto addr_4de_6;
        }
    } else {
        *reinterpret_cast<int32_t*>(rbp14 - 8) = *reinterpret_cast<int32_t*>(rbp15 - 8) >> 3;
        rax16 = g41a;
        *reinterpret_cast<int32_t*>(&rdi17) = *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rax16) + *reinterpret_cast<int32_t*>(rbp18 - 8) * 2 + 1);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi17) + 4) = reinterpret_cast<int32_t>(gettimeofday);
        fun_424(rdi17);
        eax19 = fun_429(rdi17);
        if (eax19 == gettimeofday) 
            goto addr_44d_17; else 
            goto addr_432_18;
    }
    rax20 = g4d1;
    *reinterpret_cast<int32_t*>(rbp21 - 20) = rax20[*reinterpret_cast<int32_t*>(rbp22 - 8) * 2];
    addr_4d8_20:
    *reinterpret_cast<int32_t*>(rbp23 - 4) = *reinterpret_cast<int32_t*>(rbp24 - 20);
    addr_4de_6:
    goto v25;
    addr_4ab_12:
    rax26 = g4b6;
    *reinterpret_cast<int32_t*>(rbp27 - 20) = reinterpret_cast<int32_t>(gettimeofday) - rax26[*reinterpret_cast<int32_t*>(rbp28 - 8) * 2];
    goto addr_4d8_20;
    addr_44d_17:
    rax29 = g458;
    *reinterpret_cast<int32_t*>(rbp30 - 16) = rax29[*reinterpret_cast<int32_t*>(rbp31 - 8) * 2];
    addr_45f_21:
    *reinterpret_cast<int32_t*>(rbp32 - 4) = *reinterpret_cast<int32_t*>(rbp33 - 16);
    goto addr_4de_6;
    addr_432_18:
    rax34 = g43d;
    *reinterpret_cast<int32_t*>(rbp35 - 16) = reinterpret_cast<int32_t>(gettimeofday) - rax34[*reinterpret_cast<int32_t*>(rbp36 - 8) * 2];
    goto addr_45f_21;
    addr_398_4:
    *reinterpret_cast<int32_t*>(rbp37 - 8) = *reinterpret_cast<int32_t*>(rbp38 - 8) >> 6;
    rax39 = g3ac;
    *reinterpret_cast<int32_t*>(&rdi40) = *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rax39) + *reinterpret_cast<int32_t*>(rbp41 - 8) * 2 + 1);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi40) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    fun_3b6(rdi40);
    eax42 = fun_3bb(rdi40);
    if (eax42 != gettimeofday) 
        goto addr_3c4_24;
    rax43 = g3ea;
    *reinterpret_cast<int32_t*>(rbp44 - 12) = rax43[*reinterpret_cast<int32_t*>(rbp45 - 8) * 2];
    addr_3f1_26:
    *reinterpret_cast<int32_t*>(rbp46 - 4) = *reinterpret_cast<int32_t*>(rbp47 - 12);
    goto addr_4de_6;
    addr_3c4_24:
    rax48 = g3cf;
    *reinterpret_cast<int32_t*>(rbp49 - 12) = reinterpret_cast<int32_t>(gettimeofday) - rax48[*reinterpret_cast<int32_t*>(rbp50 - 8) * 2];
    goto addr_3f1_26;
}

void fun_502(int64_t rdi) {
    int32_t eax2;
    int64_t rbp3;
    int32_t eax4;
    int32_t eax5;
    int64_t v6;
    int64_t rbp7;

    if (eax2 == gettimeofday) {
        *reinterpret_cast<int32_t*>(rbp3 - 4) = reinterpret_cast<int32_t>(gettimeofday);
    } else {
        eax4 = fun_515(1);
        eax5 = 1;
        if (!reinterpret_cast<int1_t>(eax4 == gettimeofday)) 
            goto label_5; else 
            goto addr_527_6;
    }
    addr_536_7:
    goto v6;
    label_5:
    eax5 = -1;
    addr_527_6:
    *reinterpret_cast<int32_t*>(rbp7 - 4) = eax5;
    goto addr_536_7;
}

int32_t fun_4a2(int64_t rdi) {
    int32_t eax2;
    signed char* rax3;
    int64_t rbp4;
    int64_t rbp5;
    signed char* rax6;
    int64_t rbp7;
    int64_t rbp8;
    int64_t rbp9;
    int64_t rbp10;
    int64_t v11;

    if (eax2 == gettimeofday) {
        rax3 = g4d1;
        *reinterpret_cast<int32_t*>(rbp4 - 20) = rax3[*reinterpret_cast<int32_t*>(rbp5 - 8) * 2];
    } else {
        rax6 = g4b6;
        *reinterpret_cast<int32_t*>(rbp7 - 20) = reinterpret_cast<int32_t>(gettimeofday) - rax6[*reinterpret_cast<int32_t*>(rbp8 - 8) * 2];
    }
    *reinterpret_cast<int32_t*>(rbp9 - 4) = *reinterpret_cast<int32_t*>(rbp10 - 20);
    goto v11;
}

void fun_6a0() {
    int64_t v1;

    goto v1;
}

void fun_941() {
    int64_t v1;

    goto v1;
}

void fun_ae5(struct s22* rdi, struct s23* rsi, int64_t rdx, int32_t* rcx, int64_t r8, int64_t r9, int32_t a7, int32_t a8, int32_t a9, int32_t a10) {
    int64_t v11;
    int64_t rbp12;
    int64_t rbp13;
    int64_t rbp14;
    int64_t rbp15;
    int32_t* rcx16;
    int64_t rbp17;
    int64_t rbp18;
    int64_t rbp19;
    int64_t rbp20;
    int64_t rbp21;
    int64_t rbp22;
    int64_t rbp23;
    int64_t rbp24;
    int64_t rbp25;
    int32_t* rcx26;
    int64_t rbp27;
    int64_t rbp28;
    int64_t rbp29;
    int64_t rbp30;
    int64_t rbp31;
    int64_t rbp32;
    int64_t rbp33;
    int64_t rbp34;
    int64_t rbp35;
    int64_t rbp36;
    int64_t rbp37;
    int64_t rbp38;
    int64_t rbp39;
    int64_t rbp40;
    int64_t rbp41;
    int32_t* rsi42;
    int64_t v43;

    v11 = reinterpret_cast<int64_t>(__return_address());
    *reinterpret_cast<int32_t*>(rbp12 - 12) = reinterpret_cast<int32_t>(gettimeofday);
    while (*reinterpret_cast<int32_t*>(rbp13 - 12) < 2) {
        *reinterpret_cast<int32_t*>(rbp14 - 16) = reinterpret_cast<int32_t>(gettimeofday);
        while (*reinterpret_cast<int32_t*>(rbp15 - 16) < 2) {
            rcx16 = gb28;
            rcx = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rcx16) + (static_cast<int64_t>(*reinterpret_cast<int32_t*>(rbp17 - 12)) << 3));
            rdx = *reinterpret_cast<int32_t*>(rbp18 - 16);
            *reinterpret_cast<uint32_t*>(rbp19 - 24) = reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(rbp20 - 96 + (static_cast<int64_t>(*reinterpret_cast<int32_t*>(rbp21 - 12)) << 3) + *reinterpret_cast<int32_t*>(rbp22 - 16) * 4) != rcx[rdx])) & 1) + *reinterpret_cast<int32_t*>(rbp23 - 24);
            *reinterpret_cast<int32_t*>(rbp24 - 20) = reinterpret_cast<int32_t>(gettimeofday);
            while (*reinterpret_cast<int32_t*>(rbp25 - 20) < 2) {
                rcx26 = gb81;
                rcx = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rcx26) + (static_cast<int64_t>(*reinterpret_cast<int32_t*>(rbp27 - 12)) << 4) + (static_cast<int64_t>(*reinterpret_cast<int32_t*>(rbp28 - 16)) << 3));
                rdx = *reinterpret_cast<int32_t*>(rbp29 - 20);
                *reinterpret_cast<uint32_t*>(rbp30 - 24) = reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(rbp31 - 64 + (static_cast<int64_t>(*reinterpret_cast<int32_t*>(rbp32 - 12)) << 4) + (static_cast<int64_t>(*reinterpret_cast<int32_t*>(rbp33 - 16)) << 3) + *reinterpret_cast<int32_t*>(rbp34 - 20) * 4) != rcx[rdx])) & 1) + *reinterpret_cast<int32_t*>(rbp35 - 24);
                *reinterpret_cast<int32_t*>(rbp36 - 20) = *reinterpret_cast<int32_t*>(rbp37 - 20) + 1;
            }
            *reinterpret_cast<int32_t*>(rbp38 - 16) = *reinterpret_cast<int32_t*>(rbp39 - 16) + 1;
        }
        *reinterpret_cast<int32_t*>(rbp40 - 12) = *reinterpret_cast<int32_t*>(rbp41 - 12) + 1;
    }
    rtclock();
    rdi->f0 = rsi->f0;
    rsi42 = &rsi->f4;
    rdi->f4 = *rsi42;
    __asm__("subsd xmm0, [rax]");
    fun_c10(0xc09, rsi42 + 1, rdx, rcx, r8, r9, v11, a7, a8, a9);
    goto v43;
}

int32_t gc4c = 0xe800b0;

int32_t fun_c35() {
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
        fun_c53(0xc4c, rsi4);
    }
    __asm__("cvtsi2sd xmm1, qword [rbp-0x10]");
    __asm__("cvtsi2sd xmm0, dword [rbp-0x8]");
    gc4c = *rsi4;
    __asm__("mulsd xmm0, xmm2");
    __asm__("addsd xmm0, xmm1");
    goto v6;
}

struct s24 {
    signed char[16] pad16;
    int32_t f10;
};

struct s25 {
    signed char[24] pad24;
    int32_t f18;
};

struct s26 {
    signed char[32] pad32;
    int32_t f20;
};

struct s27 {
    signed char[40] pad40;
    int32_t f28;
};

void fun_655();

int32_t fun_65f(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7);

void fun_619(int64_t rdi) {
    int64_t v2;
    int64_t rbp3;
    int64_t rbp4;
    int32_t eax5;
    int64_t rsi6;
    int64_t rbp7;
    int64_t rdx8;
    struct s24* rbp9;
    int64_t rcx10;
    struct s25* rbp11;
    int64_t r8_12;
    struct s26* rbp13;
    int64_t r9_14;
    struct s27* rbp15;
    int32_t eax16;
    int64_t rbp17;
    int64_t rbp18;
    int64_t v19;

    v2 = reinterpret_cast<int64_t>(__return_address());
    (*reinterpret_cast<int32_t**>(rbp3 - 24))[*reinterpret_cast<int32_t*>(rbp4 - 28)] = eax5;
    rsi6 = *reinterpret_cast<int64_t*>(rbp7 - 16);
    *reinterpret_cast<int32_t*>(&rdx8) = rbp9->f10;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx8) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    *reinterpret_cast<int32_t*>(&rcx10) = rbp11->f18;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx10) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    *reinterpret_cast<int32_t*>(&r8_12) = rbp13->f20;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_12) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    *reinterpret_cast<int32_t*>(&r9_14) = rbp15->f28;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_14) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    *reinterpret_cast<int32_t*>(&v2) = reinterpret_cast<int32_t>(gettimeofday);
    fun_655();
    eax16 = fun_65f(1, rsi6, rdx8, rcx10, r8_12, r9_14, v2);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(*reinterpret_cast<void**>(rbp17 - 24)) + *reinterpret_cast<int32_t*>(rbp18 - 28) * 4 + 8) = eax16;
    fun_6a0();
    goto v19;
}

void rtclock() {
    int32_t* rdi1;
    int32_t* rsi2;
    int32_t eax3;

    rdi1 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 16);
    *reinterpret_cast<int32_t*>(&rsi2) = reinterpret_cast<int32_t>(gettimeofday);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi2) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    eax3 = fun_c35();
    if (eax3 != gettimeofday) {
        *reinterpret_cast<int32_t*>(&rsi2) = eax3;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi2) + 4) = reinterpret_cast<int32_t>(gettimeofday);
        rdi1 = reinterpret_cast<int32_t*>(0xc4c);
        fun_c53(0xc4c, rsi2);
    }
    __asm__("cvtsi2sd xmm1, qword [rbp-0x10]");
    __asm__("cvtsi2sd xmm0, dword [rbp-0x8]");
    *rdi1 = *rsi2;
    __asm__("mulsd xmm0, xmm2");
    __asm__("addsd xmm0, xmm1");
    return;
}

void fun_1fe(int64_t rdi);

void fun_1f3(int64_t rdi) {
    int64_t rbp2;
    int32_t eax3;
    int64_t rdi4;
    int64_t rbp5;
    int64_t v6;

    *reinterpret_cast<int32_t*>(rbp2 - 8) = eax3;
    *reinterpret_cast<int32_t*>(&rdi4) = *reinterpret_cast<int32_t*>(rbp5 - 4);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi4) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    fun_1fe(rdi4);
    goto v6;
}

void fun_655() {
    int64_t rsi1;
    int64_t rdx2;
    int64_t rcx3;
    int64_t r8_4;
    int64_t r9_5;
    int32_t eax6;
    int64_t rbp7;
    int64_t rbp8;
    int64_t v9;

    eax6 = fun_65f(1, rsi1, rdx2, rcx3, r8_4, r9_5, __return_address());
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(*reinterpret_cast<void**>(rbp7 - 24)) + *reinterpret_cast<int32_t*>(rbp8 - 28) * 4 + 8) = eax6;
    fun_6a0();
    goto v9;
}

struct s28 {
    signed char[16] pad16;
    int32_t f10;
};

struct s29 {
    signed char[4] pad4;
    int32_t f4;
};

struct s30 {
    signed char[4] pad4;
    int32_t f4;
};

struct s31 {
    signed char[16] pad16;
    int32_t f10;
};

struct s32 {
    signed char[4] pad4;
    int32_t f4;
};

struct s33 {
    signed char[4] pad4;
    int32_t f4;
};

void fun_6d6() {
    int64_t rbp1;
    int32_t eax2;
    int64_t rbp3;
    int64_t rbp4;
    int64_t rbp5;
    int64_t rdi6;
    int64_t rbp7;
    int32_t eax8;
    int64_t rbp9;
    int64_t rbp10;
    int64_t rbp11;
    int32_t* rdi12;
    int64_t rbp13;
    int64_t rsi14;
    int64_t rbp15;
    int64_t rdx16;
    int64_t rbp17;
    int64_t rcx18;
    int64_t rbp19;
    int64_t r8_20;
    struct s28* rbp21;
    int64_t rbp22;
    int32_t eax23;
    int64_t rbp24;
    int32_t eax25;
    int64_t rbp26;
    int64_t rbp27;
    int64_t rbp28;
    int64_t rbp29;
    int64_t rdi30;
    int64_t rbp31;
    int32_t eax32;
    int64_t rbp33;
    int64_t rbp34;
    int64_t rbp35;
    int64_t rbp36;
    int64_t rbp37;
    int32_t* rdi38;
    int64_t rbp39;
    int32_t esi40;
    int64_t rbp41;
    int32_t edx42;
    int64_t rbp43;
    int32_t ecx44;
    int64_t rbp45;
    int32_t r8d46;
    struct s31* rbp47;
    int64_t rbp48;
    int64_t rbp49;
    int64_t rbp50;
    int32_t eax51;
    int64_t rbp52;
    int64_t v53;

    *reinterpret_cast<int32_t*>(rbp1 - 36) = eax2;
    if (*reinterpret_cast<int32_t*>(rbp3 - 20) == gettimeofday || *reinterpret_cast<int32_t*>(rbp4 - 36) == gettimeofday) {
        *reinterpret_cast<int32_t*>(rbp5 - 44) = reinterpret_cast<int32_t>(gettimeofday);
    } else {
        *reinterpret_cast<int32_t*>(&rdi6) = *reinterpret_cast<int32_t*>(rbp7 - 20);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi6) + 4) = reinterpret_cast<int32_t>(gettimeofday);
        eax8 = fun_6f5(rdi6);
        *reinterpret_cast<int32_t*>(rbp9 - 44) = eax8;
    }
    *reinterpret_cast<int32_t*>(rbp10 - 40) = *reinterpret_cast<int32_t*>(rbp11 - 44);
    rdi12 = *reinterpret_cast<int32_t**>(rbp13 - 8);
    *reinterpret_cast<int32_t*>(&rsi14) = *reinterpret_cast<int32_t*>(rbp15 - 20);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi14) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    *reinterpret_cast<int32_t*>(&rdx16) = *reinterpret_cast<int32_t*>(rbp17 - 36);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx16) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    *reinterpret_cast<int32_t*>(&rcx18) = *reinterpret_cast<int32_t*>(rbp19 - 40);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx18) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    *reinterpret_cast<int32_t*>(&r8_20) = rbp21->f10;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_20) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    decode_motion_vector(rdi12, *reinterpret_cast<int32_t*>(&rsi14), *reinterpret_cast<int32_t*>(&rdx16), *reinterpret_cast<int32_t*>(&rcx18), *reinterpret_cast<int32_t*>(&r8_20));
    if (*reinterpret_cast<int32_t*>(rbp22 - 28) != gettimeofday) {
        eax23 = fun_732(rdi12, rsi14, rdx16, rcx18, r8_20);
        **reinterpret_cast<int32_t**>(rbp24 - 16) = eax23;
    }
    eax25 = fun_73f(rdi12, rsi14, rdx16, rdi12, rsi14, rdx16);
    *reinterpret_cast<int32_t*>(rbp26 - 36) = eax25;
    if (*reinterpret_cast<int32_t*>(rbp27 - 24) == gettimeofday || *reinterpret_cast<int32_t*>(rbp28 - 36) == gettimeofday) {
        *reinterpret_cast<int32_t*>(rbp29 - 48) = reinterpret_cast<int32_t>(gettimeofday);
    } else {
        *reinterpret_cast<int32_t*>(&rdi30) = *reinterpret_cast<int32_t*>(rbp31 - 24);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi30) + 4) = reinterpret_cast<int32_t>(gettimeofday);
        eax32 = fun_75e(rdi30, rsi14, rdx16, rdi30, rsi14, rdx16);
        *reinterpret_cast<int32_t*>(rbp33 - 48) = eax32;
    }
    *reinterpret_cast<int32_t*>(rbp34 - 40) = *reinterpret_cast<int32_t*>(rbp35 - 48);
    if (*reinterpret_cast<int32_t*>(rbp36 - 32) != gettimeofday) {
        (*reinterpret_cast<struct s29**>(rbp37 - 8))->f4 = (*reinterpret_cast<struct s29**>(rbp37 - 8))->f4 >> 1;
    }
    rdi38 = &(*reinterpret_cast<struct s30**>(rbp39 - 8))->f4;
    esi40 = *reinterpret_cast<int32_t*>(rbp41 - 24);
    edx42 = *reinterpret_cast<int32_t*>(rbp43 - 36);
    ecx44 = *reinterpret_cast<int32_t*>(rbp45 - 40);
    r8d46 = rbp47->f10;
    decode_motion_vector(rdi38, esi40, edx42, ecx44, r8d46);
    if (*reinterpret_cast<int32_t*>(rbp48 - 32) != gettimeofday) {
        (*reinterpret_cast<struct s32**>(rbp49 - 8))->f4 = (*reinterpret_cast<struct s32**>(rbp49 - 8))->f4 << 1;
    }
    if (*reinterpret_cast<int32_t*>(rbp50 - 28) != gettimeofday) {
        eax51 = fun_7cd();
        (*reinterpret_cast<struct s33**>(rbp52 - 16))->f4 = eax51;
    }
    goto v53;
}

void fun_1fe(int64_t rdi) {
    int64_t v2;

    goto v2;
}

int32_t fun_65f(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7) {
    int64_t rbp8;
    int64_t rbp9;
    int32_t eax10;
    int64_t v11;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(*reinterpret_cast<void**>(rbp8 - 24)) + *reinterpret_cast<int32_t*>(rbp9 - 28) * 4 + 8) = eax10;
    fun_6a0();
    goto v11;
}

void gettimeofday(int64_t rdi) {
}

void fun_150() {
    int64_t rbx1;
    int64_t rbx2;
    signed char cl3;
    int64_t rbp4;
    int32_t ecx5;

    *reinterpret_cast<signed char*>(rbx1 - 0x3e7603bb) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(rbx2 - 0x3e7603bb) + cl3);
    *reinterpret_cast<int32_t*>(rbp4 - 4) = ecx5 + 1;
}

int64_t g183 = 0x89fc458b010804c6;

int64_t g19c = 0xffff8ae9b70804c6;

void fun_168() {
    signed char* rax1;
    signed char* rax2;
    signed char al3;
    int64_t rax4;
    int64_t rcx5;
    int32_t eax6;
    int64_t rbp7;
    int64_t rbp8;
    int64_t rax9;
    int32_t eax10;
    int64_t rbp11;
    int64_t rbp12;
    int64_t rax13;

    *rax1 = reinterpret_cast<signed char>(*rax2 + al3);
    *reinterpret_cast<signed char*>(rax4 + rcx5) = reinterpret_cast<signed char>(gettimeofday);
    eax6 = *reinterpret_cast<int32_t*>(rbp7 - 4);
    *reinterpret_cast<int32_t*>(rbp8 - 4) = eax6 + 1;
    rax9 = g183;
    *reinterpret_cast<signed char*>(rax9 + eax6) = 1;
    eax10 = *reinterpret_cast<int32_t*>(rbp11 - 4);
    *reinterpret_cast<int32_t*>(rbp12 - 4) = eax10 + 1;
    rax13 = g19c;
    *reinterpret_cast<signed char*>(rax13 + eax10) = reinterpret_cast<signed char>("8");
}

void fun_1a8() {
    signed char* rax1;
    signed char* rax2;
    signed char al3;
    int64_t v4;

    *rax1 = reinterpret_cast<signed char>(*rax2 + al3);
    goto v4;
}

uint32_t* g1be = reinterpret_cast<uint32_t*>(0x2b00000020b9008b);

int64_t Show_Bits(int32_t edi) {
    uint32_t* rax2;
    uint32_t ecx3;
    int64_t rax4;

    rax2 = g1be;
    ecx3 = reinterpret_cast<uint32_t>(32 - edi) & 31;
    *reinterpret_cast<uint32_t*>(&rax4) = *rax2 >> *reinterpret_cast<signed char*>(&ecx3);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax4) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    return rax4;
}

void Get_Bits1() {
    fun_1de(1);
}

void Get_motion_code() {
    fun_36d();
}

void Get_dmvector() {
    fun_502(1);
}

void motion_vectors(int64_t rdi, int64_t rsi, int64_t rdx, int32_t ecx, int32_t r8d, int32_t r9d, int32_t a7, int32_t a8, int32_t a9, int32_t a10) {
    if (r8d != 1) {
        fun_619(1);
    } else {
        if (!reinterpret_cast<int1_t>(r9d == gettimeofday)) 
            goto 0x5ac;
        if (!reinterpret_cast<int1_t>(a9 == gettimeofday)) 
            goto 0x5ac;
        fun_593(1);
    }
}

int32_t* g8fb = reinterpret_cast<int32_t*>(0x8b480000000000c7);

uint120_t g908 = 0x48000000000d8b48;

int64_t* g920 = reinterpret_cast<int64_t*>(0x58b48088b48);

int64_t* g92a = reinterpret_cast<int64_t*>(0x58b48088948);

int32_t* g934 = reinterpret_cast<int32_t*>(0xff310410000000c7);

void Initialize_Buffer() {
    int32_t* rax1;
    int64_t* rax2;
    int64_t rcx3;
    int64_t* rax4;
    int64_t* rax5;
    int32_t* rax6;

    rax1 = g8fb;
    *rax1 = reinterpret_cast<int32_t>(gettimeofday);
    rax2 = *reinterpret_cast<int64_t**>(&g908);
    rcx3 = *reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(&g908) + 7);
    *rax2 = rcx3 + 0x800;
    rax4 = g920;
    rax5 = g92a;
    *rax5 = *rax4;
    rax6 = g934;
    *rax6 = 0x4100000;
    fun_941();
}

void Get_Bits(int32_t edi) {
    int64_t rdi2;

    *reinterpret_cast<int32_t*>(&rdi2) = edi;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi2) + 4) = reinterpret_cast<int32_t>(gettimeofday);
    fun_1f3(rdi2);
}

void motion_vector(int64_t rdi, int64_t rsi, int32_t edx, int32_t ecx, int32_t r8d, int32_t r9d, int32_t a7) {
    fun_6d6();
}

int32_t* g97a = reinterpret_cast<int32_t*>(0x8b480000000000c7);

int32_t* g987 = reinterpret_cast<int32_t*>(0x45c70000000000c7);

int32_t* g9f7 = reinterpret_cast<int32_t*>(0x48c8014803e1c148);

int32_t* ga37 = reinterpret_cast<int32_t*>(0x48c8014804e1c148);

void submain(int32_t* rdi, int32_t* rsi) {
    void* rbp3;
    int64_t rdi4;
    int64_t rsi5;
    int32_t* rax6;
    int32_t* rax7;
    int32_t v8;
    int32_t v9;
    int32_t* rax10;
    int32_t v11;
    int32_t* rax12;

    rbp3 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8);
    rtclock();
    *rdi = *rsi;
    rdi4 = reinterpret_cast<int64_t>(rdi + 1);
    rsi5 = reinterpret_cast<int64_t>(rsi + 1);
    rax6 = g97a;
    *rax6 = reinterpret_cast<int32_t>(gettimeofday);
    rax7 = g987;
    *rax7 = reinterpret_cast<int32_t>(gettimeofday);
    v8 = reinterpret_cast<int32_t>(gettimeofday);
    while (v8 < 2) {
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rbp3) + v8 * 4 - 72) = reinterpret_cast<int32_t>(gettimeofday);
        v9 = reinterpret_cast<int32_t>(gettimeofday);
        while (v9 < 2) {
            rax10 = g9f7;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rbp3) - 96 + (static_cast<int64_t>(v8) << 3) + v9 * 4) = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rax10) + (static_cast<int64_t>(v8) << 3) + v9 * 4);
            v11 = reinterpret_cast<int32_t>(gettimeofday);
            while (v11 < 2) {
                rax12 = ga37;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rbp3) - 64 + (static_cast<int64_t>(v8) << 4) + (static_cast<int64_t>(v9) << 3) + v11 * 4) = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rax12) + (static_cast<int64_t>(v8) << 4) + (static_cast<int64_t>(v9) << 3) + v11 * 4);
                ++v11;
            }
            ++v9;
        }
        ++v8;
    }
    fun_aaa(rdi4, rsi5);
}

int32_t* g225 = reinterpret_cast<int32_t*>(0x8b48c189e0d3008b);

int32_t* g232 = reinterpret_cast<int32_t*>(0x58b48fc4d8b0889);

int32_t* g23e = reinterpret_cast<int32_t*>(0xd8b48c829008b);

int32_t* g249 = reinterpret_cast<int32_t*>(0xf87d83f845890189);

int64_t g25f = 0x48000007fcc18148;

uint64_t* g26d = reinterpret_cast<uint64_t*>(0x59830f083948);

unsigned char** g282 = reinterpret_cast<unsigned char**>(0x8348c28948008b48);

int64_t* g293 = reinterpret_cast<int64_t*>(0x18b900b60f118948);

uint32_t* g2ac = reinterpret_cast<uint32_t*>(0x58b48080b);

uint32_t* g2b5 = reinterpret_cast<uint32_t*>(0x8c083f8458b0889);

void Flush_Buffer(int32_t edi) {
    int32_t ecx2;
    int32_t* rax3;
    int32_t* rax4;
    int32_t* rax5;
    int32_t eax6;
    int32_t* rcx7;
    int32_t v8;
    int64_t rcx9;
    uint64_t* rax10;
    unsigned char** rax11;
    unsigned char* rax12;
    int64_t* rcx13;
    int32_t ecx14;
    uint32_t* rax15;
    uint32_t* rax16;

    ecx2 = edi;
    rax3 = g225;
    rax4 = g232;
    *rax4 = *rax3 << *reinterpret_cast<unsigned char*>(&ecx2);
    rax5 = g23e;
    eax6 = *rax5 - edi;
    rcx7 = g249;
    *rcx7 = eax6;
    v8 = eax6;
    if (v8 > 24) 
        goto 0x357;
    rcx9 = g25f;
    rax10 = g26d;
    if (*rax10 >= reinterpret_cast<uint64_t>(rcx9 + 0x7fc)) {
        goto 0x2d4;
    } else {
        do {
            rax11 = g282;
            rax12 = *rax11;
            rcx13 = g293;
            *rcx13 = reinterpret_cast<int64_t>(rax12 + 1);
            ecx14 = 24 - v8;
            rax15 = g2ac;
            rax16 = g2b5;
            *rax16 = static_cast<uint32_t>(*rax12) << *reinterpret_cast<unsigned char*>(&ecx14) | *rax15;
            v8 = v8 + 8;
        } while (v8 <= 24);
        goto 0x34b;
    }
}

