
void fun_158(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t v5;

    goto v5;
}

void fputc(int32_t edi, int64_t rsi);

void fun_1f5(int64_t rdi, int64_t rsi, int64_t rdx);

void fun_225(int64_t rdi, int64_t rsi, int64_t rdx);

void fun_23e(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx);

void fun_1db(int64_t rdi, int64_t rsi, int64_t rdx) {
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
        fun_1f5(r14_8, r15_9, rdx4);
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
        fun_1db(10, r14_11, rdx4);
    }
    fun_225(r14_12, 0x214, 0x21b);
    fun_23e(0x22c, 22, 1, r14_13);
    fun_158(rbx14, 22, 1, r14_13);
    goto v15;
}

void fun_225(int64_t rdi, int64_t rsi, int64_t rdx) {
    int64_t r14_4;
    int64_t rbx5;
    int64_t v6;

    fun_23e(0x22c, 22, 1, r14_4);
    fun_158(rbx5, 22, 1, r14_4);
    goto v6;
}

void fun_1a4(int64_t rdi, int64_t rsi, int64_t rdx);

void fun_18c(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
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

    rdx5 = 0x19a;
    fun_1a4(r14_6, 0x193, 0x19a);
    *reinterpret_cast<int32_t*>(&r12_7) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_7) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        r13_8 = r12_7 * 0xaf0;
        *reinterpret_cast<int32_t*>(&rbp9) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp9) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>(static_cast<int32_t>(rbp9 + r13_8) * 0xcccccccd) <= 0xccccccc) {
                fun_1db(10, r14_10, rdx5);
            }
            *reinterpret_cast<int32_t*>(&rdx5) = (rbx11 + r12_7 * 0xaf0)[rbp9];
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx5) + 4) = reinterpret_cast<int32_t>(fputc);
            fun_1f5(r14_12, 0x1ab, rdx5);
            ++rbp9;
        } while (rbp9 != 0xaf0);
        ++r12_7;
    } while (r12_7 != 0xaf0);
    fun_225(r14_13, 0x214, 0x21b);
    fun_23e(0x22c, 22, 1, r14_14);
    fun_158(rbx15, 22, 1, r14_14);
    goto v16;
}

void fun_1f5(int64_t rdi, int64_t rsi, int64_t rdx) {
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
            fun_1db(10, r14_7, rdx);
        }
        *reinterpret_cast<int32_t*>(&rdx8) = (rbx9 + r12_5 * 0xaf0)[rbp4];
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx8) + 4) = reinterpret_cast<int32_t>(fputc);
        fun_1f5(r14_10, r15_11, rdx8);
    }
    fun_225(r14_12, 0x214, 0x21b);
    fun_23e(0x22c, 22, 1, r14_13);
    fun_158(rbx14, 22, 1, r14_13);
    goto v15;
}

void fun_23e(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t rbx5;
    int64_t v6;

    fun_158(rbx5, rsi, rdx, rcx);
    goto v6;
}

void fun_1a4(int64_t rdi, int64_t rsi, int64_t rdx) {
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
                fun_1db(10, r14_7, rdx);
            }
            *reinterpret_cast<int32_t*>(&rdx) = (rbx8 + r12_4 * 0xaf0)[rbp6];
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx) + 4) = reinterpret_cast<int32_t>(fputc);
            fun_1f5(r14_9, 0x1ab, rdx);
            ++rbp6;
        } while (rbp6 != 0xaf0);
        ++r12_4;
    } while (r12_4 != 0xaf0);
    fun_225(r14_10, 0x214, 0x21b);
    fun_23e(0x22c, 22, 1, r14_11);
    fun_158(rbx12, 22, 1, r14_11);
    goto v13;
}

void fputc(int32_t edi, int64_t rsi) {
}

void fun_80() {
    __asm__("rol ebp, 1");
    __asm__("in al, dx");
}

void fun_85() {
    int32_t r9d1;

    if (reinterpret_cast<uint32_t>(r9d1 * 0xba2e8ba3) < 0x1745d175) {
    }
}

int64_t* g170 = reinterpret_cast<int64_t*>(0x3d8d48308b4c);

void fun_ac() {
    int32_t ecx1;
    int1_t cf2;
    int32_t edi3;
    int32_t* r8_4;
    int64_t rsi5;
    int64_t rsi6;
    int64_t rdx7;
    int64_t rcx8;
    int32_t* rdx9;
    int32_t* rbx10;
    int32_t* rsi11;
    int64_t rax12;
    int64_t rdi13;
    int32_t r8d14;
    int32_t* rbx15;
    int32_t ebp16;
    signed char** r14_17;
    int64_t* rax18;
    int64_t rcx19;

    *reinterpret_cast<signed char*>(&ecx1) = reinterpret_cast<signed char>("w");
    if (cf2) {
        edi3 = ecx1;
    }
    r8_4[rsi5] = edi3;
    if (rsi6 + 1 == 0xaf0) {
        if (rdx7 + 1 == 0xaf0) {
            do {
                *reinterpret_cast<int32_t*>(&rcx8) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx8) + 4) = reinterpret_cast<int32_t>(fputc);
                do {
                    rdx9 = rbx10 + rcx8 * 0xaf0;
                    rsi11 = rdx9 + rax12;
                    *reinterpret_cast<int32_t*>(&rdi13) = reinterpret_cast<int32_t>(fputc);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi13) + 4) = reinterpret_cast<int32_t>(fputc);
                    do {
                        r8d14 = (rbx15 + rax12 * 0xaf0)[rdi13] + *rsi11;
                        if (rdx9[rdi13] < r8d14) {
                            r8d14 = rdx9[rdi13];
                        }
                        rdx9[rdi13] = r8d14;
                        ++rdi13;
                    } while (rdi13 != 0xaf0);
                    ++rcx8;
                } while (rcx8 != 0xaf0);
                ++rax12;
            } while (rax12 != 0xaf0);
            if (ebp16 < 43) 
                goto 0x150;
            if (**r14_17 != fputc) 
                goto "???";
            rax18 = g170;
            rcx19 = *rax18;
            fun_18c(0x17a, 22, 1, rcx19);
        }
    }
}

