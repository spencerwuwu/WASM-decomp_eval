
void fun_17a(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx);

void fun_172(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t r14_5;
    int64_t v6;

    fun_17a(r14_5, rsi, rdx, rcx);
    goto v6;
}

void fputc();

void fun_230(int64_t rdi, int64_t rsi, int64_t rdx);

void fun_270(int64_t rdi, int64_t rsi, int64_t rdx);

void fun_289(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx);

void fun_20f(int64_t rdi, int64_t rsi, int64_t rdx) {
    int64_t rdx4;
    int64_t r15_5;
    int32_t* r14_6;
    int64_t r13_7;
    int64_t v8;
    int32_t r12d9;
    int32_t ebp10;
    int32_t v11;
    int64_t v12;
    int64_t v13;
    int64_t rbx14;
    int64_t r14_15;
    int64_t v16;

    while (1) {
        *reinterpret_cast<int32_t*>(&rdx4) = (r14_6 + r15_5 * 0x9c4)[r13_7];
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx4) + 4) = reinterpret_cast<int32_t>(fputc);
        fun_230(v8, 0x229, rdx4);
        ++r12d9;
        ++r13_7;
        if (r13_7 == 0x9c4) {
            ebp10 = ebp10 + v11;
            ++r15_5;
            if (r15_5 == 0x9c4) 
                break;
            --v11;
            r13_7 = r15_5;
            r12d9 = ebp10;
        }
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(r12d9 * 0xcccccccd + 0x19999998) > 0xccccccc) 
            continue;
        fun_20f(10, v12, rdx4);
    }
    fun_270(v13, 0x25a, 0x261);
    fun_289(0x277, 22, 1, v13);
    fun_172(rbx14, 22, 1, v13);
    fun_17a(r14_15, 22, 1, v13);
    goto v16;
}

void fun_270(int64_t rdi, int64_t rsi, int64_t rdx) {
    int64_t r15_4;
    int64_t rbx5;
    int64_t r14_6;
    int64_t v7;

    fun_289(0x277, 22, 1, r15_4);
    fun_172(rbx5, 22, 1, r15_4);
    fun_17a(r14_6, 22, 1, r15_4);
    goto v7;
}

void fun_1cb(int64_t rdi, int64_t rsi, int64_t rdx);

void fun_1ae(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t rdx5;
    int64_t v6;
    int64_t r15_7;
    int64_t r15_8;
    int32_t eax9;
    int64_t r15_10;
    int32_t ebp11;
    int32_t v12;
    int64_t r13_13;
    int32_t r12d14;
    int32_t* r14_15;
    int64_t rbx16;
    int64_t r14_17;
    int64_t v18;

    rdx5 = 0x1bc;
    v6 = r15_7;
    fun_1cb(r15_8, 0x1b5, 0x1bc);
    eax9 = 0x9c4;
    *reinterpret_cast<int32_t*>(&r15_10) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_10) + 4) = reinterpret_cast<int32_t>(fputc);
    ebp11 = reinterpret_cast<int32_t>(fputc);
    do {
        v12 = eax9;
        r13_13 = r15_10;
        r12d14 = ebp11;
        do {
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>(r12d14 * 0xcccccccd + 0x19999998) <= 0xccccccc) {
                fun_20f(10, v6, rdx5);
            }
            *reinterpret_cast<int32_t*>(&rdx5) = (r14_15 + r15_10 * 0x9c4)[r13_13];
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx5) + 4) = reinterpret_cast<int32_t>(fputc);
            fun_230(v6, 0x229, rdx5);
            ++r12d14;
            ++r13_13;
        } while (r13_13 != 0x9c4);
        ebp11 = ebp11 + v12;
        ++r15_10;
        eax9 = v12 - 1;
    } while (r15_10 != 0x9c4);
    fun_270(v6, 0x25a, 0x261);
    fun_289(0x277, 22, 1, v6);
    fun_172(rbx16, 22, 1, v6);
    fun_17a(r14_17, 22, 1, v6);
    goto v18;
}

void fun_17a(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t v5;

    goto v5;
}

void fun_230(int64_t rdi, int64_t rsi, int64_t rdx) {
    int32_t r12d4;
    int64_t r13_5;
    int32_t ebp6;
    int32_t tmp32_7;
    int64_t r15_8;
    int32_t v9;
    int64_t v10;
    int64_t rdx11;
    int32_t* r14_12;
    int64_t v13;
    int64_t v14;
    int64_t rbx15;
    int64_t r14_16;
    int64_t v17;

    while (1) {
        ++r12d4;
        ++r13_5;
        if (r13_5 == 0x9c4) {
            ebp6 = tmp32_7;
            ++r15_8;
            if (r15_8 == 0x9c4) 
                break;
            --v9;
            r13_5 = r15_8;
            r12d4 = ebp6;
        }
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(r12d4 * 0xcccccccd + 0x19999998) <= 0xccccccc) {
            fun_20f(10, v10, rdx);
        }
        *reinterpret_cast<int32_t*>(&rdx11) = (r14_12 + r15_8 * 0x9c4)[r13_5];
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx11) + 4) = reinterpret_cast<int32_t>(fputc);
        fun_230(v13, 0x229, rdx11);
    }
    fun_270(v14, 0x25a, 0x261);
    fun_289(0x277, 22, 1, v14);
    fun_172(rbx15, 22, 1, v14);
    fun_17a(r14_16, 22, 1, v14);
    goto v17;
}

void fun_289(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t rbx5;
    int64_t r14_6;
    int64_t v7;

    fun_172(rbx5, rsi, rdx, rcx);
    fun_17a(r14_6, rsi, rdx, rcx);
    goto v7;
}

void fun_1cb(int64_t rdi, int64_t rsi, int64_t rdx) {
    int32_t eax4;
    int64_t r15_5;
    int32_t ebp6;
    int32_t v7;
    int64_t r13_8;
    int32_t r12d9;
    int64_t v10;
    int32_t* r14_11;
    int64_t v12;
    int64_t v13;
    int64_t rbx14;
    int64_t r14_15;
    int64_t v16;

    eax4 = 0x9c4;
    *reinterpret_cast<int32_t*>(&r15_5) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_5) + 4) = reinterpret_cast<int32_t>(fputc);
    ebp6 = reinterpret_cast<int32_t>(fputc);
    do {
        v7 = eax4;
        r13_8 = r15_5;
        r12d9 = ebp6;
        do {
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>(r12d9 * 0xcccccccd + 0x19999998) <= 0xccccccc) {
                fun_20f(10, v10, rdx);
            }
            *reinterpret_cast<int32_t*>(&rdx) = (r14_11 + r15_5 * 0x9c4)[r13_8];
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx) + 4) = reinterpret_cast<int32_t>(fputc);
            fun_230(v12, 0x229, rdx);
            ++r12d9;
            ++r13_8;
        } while (r13_8 != 0x9c4);
        ebp6 = ebp6 + v7;
        ++r15_5;
        eax4 = v7 - 1;
    } while (r15_5 != 0x9c4);
    fun_270(v13, 0x25a, 0x261);
    fun_289(0x277, 22, 1, v13);
    fun_172(rbx14, 22, 1, v13);
    fun_17a(r14_15, 22, 1, v13);
    goto v16;
}

void fputc() {
}

void fun_22();

void fun_19() {
    int32_t* rax1;
    int32_t* rax2;
    int32_t eax3;
    signed char* rax4;
    signed char* rax5;
    signed char al6;

    *rax1 = *rax2 + eax3;
    *rax4 = reinterpret_cast<signed char>(*rax5 + al6);
    fun_22();
}

void fun_32() {
    signed char* rax1;
    signed char* rax2;
    signed char al3;

    *rax1 = reinterpret_cast<signed char>(*rax2 + al3);
}

void fun_74() {
}

void fun_90() {
    return;
}

void fun_93(int64_t rdi) {
    signed char dh2;
    uint64_t rdx3;
    int64_t rcx4;
    uint64_t rsi5;
    uint64_t rax6;
    int32_t* rdi7;
    int64_t rcx8;
    int32_t* r14_9;
    int32_t r8d10;
    int32_t* r9_11;
    int32_t* r14_12;
    int32_t r10d13;
    uint64_t rcx14;
    int32_t r9d15;
    void* rbx16;
    int64_t rbx17;
    int64_t rcx18;
    int32_t* r9_19;
    int32_t r8d20;
    uint64_t r10_21;
    uint64_t rax22;
    uint64_t r11_23;
    int32_t r12d24;
    int32_t* r14_25;

    *reinterpret_cast<signed char*>(rdi - 22) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(rdi - 22) + dh2);
    rdx3 = reinterpret_cast<uint64_t>(rcx4 + 1);
    rsi5 = rax6;
    while (1) {
        rdi7 = r14_9 + rcx8 * 0x9c4;
        r8d10 = *(rdi7 + rsi5 - 1);
        if (rdi7[rsi5] > r8d10) {
            r8d10 = rdi7[rsi5];
        }
        rdi7[rsi5] = r8d10;
        r9_11 = r14_12 + rdx3 * 0x9c4;
        if (r8d10 <= r9_11[rsi5]) {
            r8d10 = r9_11[rsi5];
        }
        rdi7[rsi5] = r8d10;
        r10d13 = *(r9_11 + rsi5 - 1);
        if (rcx14 < rsi5 - 1) {
            r9d15 = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<unsigned char*>(&r9d15) = reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rbx16) + rsi5) + *reinterpret_cast<signed char*>(rbx17 + rcx18) == 3);
            r10d13 = r10d13 + r9d15;
        }
        r9_19 = rdi7 + rsi5;
        if (r8d10 > r10d13) {
            r10d13 = r8d10;
        }
        *r9_19 = r10d13;
        if (rdx3 < rsi5) {
            r8d20 = *r9_19;
            r10_21 = rax22;
            do {
                r11_23 = r10_21 + 1;
                r12d24 = (r14_25 + r11_23 * 0x9c4)[rsi5] + rdi7[r10_21];
                if (r8d20 <= r12d24) {
                    r8d20 = r12d24;
                }
                *r9_19 = r8d20;
                r10_21 = r11_23;
            } while (r11_23 != rsi5);
        }
        ++rsi5;
        if (rsi5 == 0x9c4) 
            goto 0x80;
    }
}

int64_t* g192 = reinterpret_cast<int64_t*>(0x3d8d48388b4c);

void fun_15d() {
    int32_t ebp1;
    signed char** r15_2;
    int64_t* rax3;
    int64_t rcx4;

    if (ebp1 < 43) 
        goto 0x16a;
    if (**r15_2 != fputc) 
        goto "???";
    rax3 = g192;
    rcx4 = *rax3;
    fun_1ae(0x19c, 22, 1, rcx4);
}

