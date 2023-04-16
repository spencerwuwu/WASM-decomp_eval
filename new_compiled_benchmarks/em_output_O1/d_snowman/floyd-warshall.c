
void fun_1d8(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t v5;

    goto v5;
}

void fputc(int32_t edi);

void fun_275(int64_t rdi, int64_t rsi, int64_t rdx);

void fun_2a5(int64_t rdi, int64_t rsi, int64_t rdx);

void fun_2be(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx);

void fun_25b(int64_t rdi, int64_t rsi, int64_t rdx) {
    int64_t rdx4;
    int64_t r12_5;
    int32_t* rbx6;
    int64_t rbp7;
    int64_t r14_8;
    int64_t r15_9;
    int64_t r13_10;
    int64_t r14_11;
    int64_t r14_12;
    int64_t r14_13;
    int64_t rbx14;
    int64_t v15;

    while (1) {
        *reinterpret_cast<int32_t*>(&rdx4) = (rbx6 + r12_5 * 0xaf0)[rbp7];
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx4) + 4) = reinterpret_cast<int32_t>(fputc);
        fun_275(r14_8, r15_9, rdx4);
        ++rbp7;
        if (rbp7 == 0xaf0) {
            ++r12_5;
            if (r12_5 == 0xaf0) 
                break;
            r13_10 = r12_5 * 0xaf0;
            *reinterpret_cast<int32_t*>(&rbp7) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp7) + 4) = reinterpret_cast<int32_t>(fputc);
        }
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(static_cast<int32_t>(rbp7 + r13_10) * 0xcccccccd) > 0xccccccc) 
            continue;
        fun_25b(10, r14_11, rdx4);
    }
    fun_2a5(r14_12, 0x294, 0x29b);
    fun_2be(0x2ac, 22, 1, r14_13);
    fun_1d8(rbx14, 22, 1, r14_13);
    goto v15;
}

void fun_2a5(int64_t rdi, int64_t rsi, int64_t rdx) {
    int64_t r14_4;
    int64_t rbx5;
    int64_t v6;

    fun_2be(0x2ac, 22, 1, r14_4);
    fun_1d8(rbx5, 22, 1, r14_4);
    goto v6;
}

void fun_224(int64_t rdi, int64_t rsi, int64_t rdx);

void fun_20c(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t rdx5;
    int64_t r14_6;
    int64_t r12_7;
    int64_t r13_8;
    int64_t rbp9;
    int64_t r14_10;
    int32_t* rbx11;
    int64_t r14_12;
    int64_t r14_13;
    int64_t r14_14;
    int64_t rbx15;
    int64_t v16;

    rdx5 = 0x21a;
    fun_224(r14_6, 0x213, 0x21a);
    *reinterpret_cast<int32_t*>(&r12_7) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_7) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        r13_8 = r12_7 * 0xaf0;
        *reinterpret_cast<int32_t*>(&rbp9) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp9) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>(static_cast<int32_t>(rbp9 + r13_8) * 0xcccccccd) <= 0xccccccc) {
                fun_25b(10, r14_10, rdx5);
            }
            *reinterpret_cast<int32_t*>(&rdx5) = (rbx11 + r12_7 * 0xaf0)[rbp9];
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx5) + 4) = reinterpret_cast<int32_t>(fputc);
            fun_275(r14_12, 0x22b, rdx5);
            ++rbp9;
        } while (rbp9 != 0xaf0);
        ++r12_7;
    } while (r12_7 != 0xaf0);
    fun_2a5(r14_13, 0x294, 0x29b);
    fun_2be(0x2ac, 22, 1, r14_14);
    fun_1d8(rbx15, 22, 1, r14_14);
    goto v16;
}

void fun_275(int64_t rdi, int64_t rsi, int64_t rdx) {
    int64_t rbp4;
    int64_t r12_5;
    int64_t r13_6;
    int64_t r14_7;
    int64_t rdx8;
    int32_t* rbx9;
    int64_t r14_10;
    int64_t r15_11;
    int64_t r14_12;
    int64_t r14_13;
    int64_t rbx14;
    int64_t v15;

    while (1) {
        ++rbp4;
        if (rbp4 == 0xaf0) {
            ++r12_5;
            if (r12_5 == 0xaf0) 
                break;
            r13_6 = r12_5 * 0xaf0;
            *reinterpret_cast<int32_t*>(&rbp4) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp4) + 4) = reinterpret_cast<int32_t>(fputc);
        }
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(static_cast<int32_t>(rbp4 + r13_6) * 0xcccccccd) <= 0xccccccc) {
            fun_25b(10, r14_7, rdx);
        }
        *reinterpret_cast<int32_t*>(&rdx8) = (rbx9 + r12_5 * 0xaf0)[rbp4];
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx8) + 4) = reinterpret_cast<int32_t>(fputc);
        fun_275(r14_10, r15_11, rdx8);
    }
    fun_2a5(r14_12, 0x294, 0x29b);
    fun_2be(0x2ac, 22, 1, r14_13);
    fun_1d8(rbx14, 22, 1, r14_13);
    goto v15;
}

void fun_2be(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t rbx5;
    int64_t v6;

    fun_1d8(rbx5, rsi, rdx, rcx);
    goto v6;
}

void fun_224(int64_t rdi, int64_t rsi, int64_t rdx) {
    int64_t r12_4;
    int64_t r13_5;
    int64_t rbp6;
    int64_t r14_7;
    int32_t* rbx8;
    int64_t r14_9;
    int64_t r14_10;
    int64_t r14_11;
    int64_t rbx12;
    int64_t v13;

    *reinterpret_cast<int32_t*>(&r12_4) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_4) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        r13_5 = r12_4 * 0xaf0;
        *reinterpret_cast<int32_t*>(&rbp6) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp6) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>(static_cast<int32_t>(rbp6 + r13_5) * 0xcccccccd) <= 0xccccccc) {
                fun_25b(10, r14_7, rdx);
            }
            *reinterpret_cast<int32_t*>(&rdx) = (rbx8 + r12_4 * 0xaf0)[rbp6];
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx) + 4) = reinterpret_cast<int32_t>(fputc);
            fun_275(r14_9, 0x22b, rdx);
            ++rbp6;
        } while (rbp6 != 0xaf0);
        ++r12_4;
    } while (r12_4 != 0xaf0);
    fun_2a5(r14_10, 0x294, 0x29b);
    fun_2be(0x2ac, 22, 1, r14_11);
    fun_1d8(rbx12, 22, 1, r14_11);
    goto v13;
}

void fputc(int32_t edi) {
    if (reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(edi < reinterpret_cast<int32_t>(fputc) == fputc)) | reinterpret_cast<uint1_t>(edi == fputc)) {
    }
}

void fun_88() {
}

void fun_92() {
}

struct s0 {
    signed char[999] pad999;
    signed char f3e7;
};

struct s1 {
    signed char[999] pad999;
    signed char f3e7;
};

void fun_a3() {
    struct s0* rcx1;
    struct s1* rcx2;

    rcx1->f3e7 = reinterpret_cast<signed char>(rcx2->f3e7 >> 49);
    __asm__("ror byte [rdi], cl");
}

int64_t* g1f0 = reinterpret_cast<int64_t*>(0x3d8d48308b4c);

void fun_ad() {
    signed char* rax1;
    signed char* rax2;
    signed char r8b3;
    int64_t rsi4;
    int64_t rdi5;
    int64_t rdx6;
    uint64_t r8_7;
    int64_t r9_8;
    uint32_t edi9;
    int32_t r9d10;
    uint32_t ecx11;
    uint32_t ecx12;
    uint32_t ecx13;
    uint32_t* rbx14;
    int64_t rcx15;
    int32_t* rdx16;
    int32_t* rbx17;
    int32_t* rsi18;
    int64_t rax19;
    int64_t rdi20;
    int32_t r8d21;
    int32_t* rbx22;
    int32_t ebp23;
    signed char** r14_24;
    int64_t* rax25;
    int64_t rcx26;

    *rax1 = reinterpret_cast<signed char>(*rax2 + r8b3);
    do {
        *reinterpret_cast<int32_t*>(&rsi4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi4) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            *reinterpret_cast<int32_t*>(&rdi5) = *reinterpret_cast<int32_t*>(&rsi4) * *reinterpret_cast<int32_t*>(&rdx6);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi5) + 4) = reinterpret_cast<int32_t>(fputc);
            r8_7 = reinterpret_cast<uint64_t>(rdi5 * 0x24924925) >> 32;
            *reinterpret_cast<uint32_t*>(&r9_8) = (reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&rdi5) - *reinterpret_cast<int32_t*>(&r8_7)) >> 1) + *reinterpret_cast<int32_t*>(&r8_7) >> 2;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_8) + 4) = reinterpret_cast<int32_t>(fputc);
            edi9 = *reinterpret_cast<int32_t*>(&rdi5) + (*reinterpret_cast<uint32_t*>(&r9_8) - static_cast<int32_t>(r9_8 * 8)) + 1;
            r9d10 = static_cast<int32_t>(rsi4 + rdx6);
            if (reinterpret_cast<uint32_t>(r9d10 * 0xba2e8ba3) < 0x1745d175) {
                edi9 = ecx11;
            }
            if (reinterpret_cast<uint32_t>(r9d10 * 0xb6db6db7) < 0x24924925) {
                edi9 = ecx12;
            }
            if (reinterpret_cast<uint32_t>(r9d10 * 0xc4ec4ec5) < 0x13b13b14) {
                edi9 = ecx13;
            }
            (rbx14 + rdx6 * 0xaf0)[rsi4] = edi9;
            ++rsi4;
        } while (rsi4 != 0xaf0);
        ++rdx6;
    } while (rdx6 != 0xaf0);
    do {
        *reinterpret_cast<int32_t*>(&rcx15) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx15) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rdx16 = rbx17 + rcx15 * 0xaf0;
            rsi18 = rdx16 + rax19;
            *reinterpret_cast<int32_t*>(&rdi20) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi20) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                r8d21 = (rbx22 + rax19 * 0xaf0)[rdi20] + *rsi18;
                if (rdx16[rdi20] < r8d21) {
                    r8d21 = rdx16[rdi20];
                }
                rdx16[rdi20] = r8d21;
                ++rdi20;
            } while (rdi20 != 0xaf0);
            ++rcx15;
        } while (rcx15 != 0xaf0);
        ++rax19;
    } while (rax19 != 0xaf0);
    if (ebp23 < 43) 
        goto 0x1d0;
    if (**r14_24 != fputc) 
        goto "???";
    rax25 = g1f0;
    rcx26 = *rax25;
    fun_20c(0x1fa, 22, 1, rcx26);
}

