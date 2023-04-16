
void fun_1ac(int64_t rdi, int64_t rsi, int32_t* rdx);

void fputc();

int64_t* g1e8 = reinterpret_cast<int64_t*>(0x3d8d48388b4c);

void fun_204(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx);

void fun_21c(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx);

void fun_258(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx);

void fun_279(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx);

void fun_2b0(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx);

void fun_2c9(int64_t rdi, int64_t rsi, int32_t* rdx, int64_t rcx);

void fun_1c1(int64_t rdi, int64_t rsi, int32_t* rdx, int64_t rcx);

void fun_1cb(int32_t* rdi, int64_t rsi, int32_t* rdx, int64_t rcx);

void fun_19c(int32_t* rdi) {
    int64_t rsi2;
    int64_t rbx3;
    int32_t* rdx4;
    int32_t* r14_5;
    int32_t ebp6;
    signed char** r15_7;
    int64_t v8;
    int64_t rbx9;
    int64_t* rax10;
    int64_t r15_11;
    int64_t rcx12;
    int64_t rdx13;
    int32_t ebp14;
    int64_t r12_15;
    int32_t r14d16;
    int64_t r13_17;
    int32_t ebx18;
    int32_t* v19;
    int64_t rcx20;
    int64_t rbx21;
    int32_t* v22;
    int64_t v23;

    rsi2 = rbx3;
    rdx4 = r14_5;
    fun_1ac(0x9c4, rsi2, rdx4);
    if (ebp6 >= 43 && **r15_7 == fputc) {
        v8 = rbx9;
        rax10 = g1e8;
        r15_11 = *rax10;
        rcx12 = r15_11;
        fun_204(0x1f2, 22, 1, rcx12);
        rdx13 = 0x212;
        fun_21c(r15_11, 0x20b, 0x212, rcx12);
        ebp14 = 0x9c4;
        *reinterpret_cast<int32_t*>(&r12_15) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_15) + 4) = reinterpret_cast<int32_t>(fputc);
        r14d16 = reinterpret_cast<int32_t>(fputc);
        do {
            r13_17 = r12_15;
            ebx18 = r14d16;
            do {
                __asm__("ror eax, 0x2");
                if (reinterpret_cast<uint32_t>(ebx18 * 0xcccccccd + 0x19999998) <= 0xccccccc) {
                    fun_258(10, r15_11, rdx13, rcx12);
                }
                *reinterpret_cast<int32_t*>(&rdx13) = (v19 + r12_15 * 0x9c4)[r13_17];
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx13) + 4) = reinterpret_cast<int32_t>(fputc);
                fun_279(r15_11, 0x272, rdx13, rcx12);
                ++ebx18;
                ++r13_17;
            } while (r13_17 != 0x9c4);
            r14d16 = r14d16 + ebp14;
            ++r12_15;
            --ebp14;
        } while (r12_15 != 0x9c4);
        fun_2b0(r15_11, 0x29f, 0x2a6, rcx12);
        *reinterpret_cast<int32_t*>(&rsi2) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi2) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx4) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx4) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx20 = r15_11;
        fun_2c9(0x2b7, 22, 1, rcx20);
        rbx21 = v8;
    }
    fun_1c1(rbx21, rsi2, rdx4, rcx20);
    fun_1cb(v22, rsi2, rdx4, rcx20);
    goto v23;
}

void fun_1c1(int64_t rdi, int64_t rsi, int32_t* rdx, int64_t rcx) {
    int32_t* v5;
    int64_t v6;

    fun_1cb(v5, rsi, rdx, rcx);
    goto v6;
}

void fun_258(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t rdx5;
    int64_t r12_6;
    int32_t* v7;
    int64_t r13_8;
    int64_t r15_9;
    int32_t ebx10;
    int32_t r14d11;
    int32_t ebp12;
    int64_t r15_13;
    int64_t r15_14;
    int64_t r15_15;
    int64_t v16;
    int32_t* v17;
    int64_t v18;

    while (1) {
        *reinterpret_cast<int32_t*>(&rdx5) = (v7 + r12_6 * 0x9c4)[r13_8];
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx5) + 4) = reinterpret_cast<int32_t>(fputc);
        fun_279(r15_9, 0x272, rdx5, rcx);
        ++ebx10;
        ++r13_8;
        if (r13_8 == 0x9c4) {
            r14d11 = r14d11 + ebp12;
            ++r12_6;
            --ebp12;
            if (r12_6 == 0x9c4) 
                break;
            r13_8 = r12_6;
            ebx10 = r14d11;
        }
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(ebx10 * 0xcccccccd + 0x19999998) > 0xccccccc) 
            continue;
        fun_258(10, r15_13, rdx5, rcx);
    }
    fun_2b0(r15_14, 0x29f, 0x2a6, rcx);
    fun_2c9(0x2b7, 22, 1, r15_15);
    fun_1c1(v16, 22, 1, r15_15);
    fun_1cb(v17, 22, 1, r15_15);
    goto v18;
}

void fun_2b0(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t r15_5;
    int64_t v6;
    int32_t* v7;
    int64_t v8;

    fun_2c9(0x2b7, 22, 1, r15_5);
    fun_1c1(v6, 22, 1, r15_5);
    fun_1cb(v7, 22, 1, r15_5);
    goto v8;
}

void fun_1ac(int64_t rdi, int64_t rsi, int32_t* rdx) {
    int32_t ebp4;
    signed char** r15_5;
    int64_t v6;
    int64_t rbx7;
    int64_t* rax8;
    int64_t r15_9;
    int64_t rcx10;
    int64_t rdx11;
    int32_t ebp12;
    int64_t r12_13;
    int32_t r14d14;
    int64_t r13_15;
    int32_t ebx16;
    int32_t* v17;
    int64_t rcx18;
    int64_t rbx19;
    int32_t* v20;
    int64_t v21;

    if (ebp4 >= 43 && **r15_5 == fputc) {
        v6 = rbx7;
        rax8 = g1e8;
        r15_9 = *rax8;
        rcx10 = r15_9;
        fun_204(0x1f2, 22, 1, rcx10);
        rdx11 = 0x212;
        fun_21c(r15_9, 0x20b, 0x212, rcx10);
        ebp12 = 0x9c4;
        *reinterpret_cast<int32_t*>(&r12_13) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_13) + 4) = reinterpret_cast<int32_t>(fputc);
        r14d14 = reinterpret_cast<int32_t>(fputc);
        do {
            r13_15 = r12_13;
            ebx16 = r14d14;
            do {
                __asm__("ror eax, 0x2");
                if (reinterpret_cast<uint32_t>(ebx16 * 0xcccccccd + 0x19999998) <= 0xccccccc) {
                    fun_258(10, r15_9, rdx11, rcx10);
                }
                *reinterpret_cast<int32_t*>(&rdx11) = (v17 + r12_13 * 0x9c4)[r13_15];
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx11) + 4) = reinterpret_cast<int32_t>(fputc);
                fun_279(r15_9, 0x272, rdx11, rcx10);
                ++ebx16;
                ++r13_15;
            } while (r13_15 != 0x9c4);
            r14d14 = r14d14 + ebp12;
            ++r12_13;
            --ebp12;
        } while (r12_13 != 0x9c4);
        fun_2b0(r15_9, 0x29f, 0x2a6, rcx10);
        *reinterpret_cast<int32_t*>(&rsi) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx18 = r15_9;
        fun_2c9(0x2b7, 22, 1, rcx18);
        rbx19 = v6;
    }
    fun_1c1(rbx19, rsi, rdx, rcx18);
    fun_1cb(v20, rsi, rdx, rcx18);
    goto v21;
}

void fun_204(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int64_t rdx5;
    int64_t r15_6;
    int32_t ebp7;
    int64_t r12_8;
    int32_t r14d9;
    int64_t r13_10;
    int32_t ebx11;
    int64_t r15_12;
    int32_t* v13;
    int64_t r15_14;
    int64_t r15_15;
    int64_t r15_16;
    int64_t v17;
    int32_t* v18;
    int64_t v19;

    rdx5 = 0x212;
    fun_21c(r15_6, 0x20b, 0x212, rcx);
    ebp7 = 0x9c4;
    *reinterpret_cast<int32_t*>(&r12_8) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_8) + 4) = reinterpret_cast<int32_t>(fputc);
    r14d9 = reinterpret_cast<int32_t>(fputc);
    do {
        r13_10 = r12_8;
        ebx11 = r14d9;
        do {
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>(ebx11 * 0xcccccccd + 0x19999998) <= 0xccccccc) {
                fun_258(10, r15_12, rdx5, rcx);
            }
            *reinterpret_cast<int32_t*>(&rdx5) = (v13 + r12_8 * 0x9c4)[r13_10];
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx5) + 4) = reinterpret_cast<int32_t>(fputc);
            fun_279(r15_14, 0x272, rdx5, rcx);
            ++ebx11;
            ++r13_10;
        } while (r13_10 != 0x9c4);
        r14d9 = r14d9 + ebp7;
        ++r12_8;
        --ebp7;
    } while (r12_8 != 0x9c4);
    fun_2b0(r15_15, 0x29f, 0x2a6, rcx);
    fun_2c9(0x2b7, 22, 1, r15_16);
    fun_1c1(v17, 22, 1, r15_16);
    fun_1cb(v18, 22, 1, r15_16);
    goto v19;
}

void fun_1cb(int32_t* rdi, int64_t rsi, int32_t* rdx, int64_t rcx) {
    int64_t v5;

    goto v5;
}

void fun_279(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int32_t ebx5;
    int64_t r13_6;
    int32_t r14d7;
    int32_t tmp32_8;
    int64_t r12_9;
    int32_t ebp10;
    int64_t r15_11;
    int64_t rdx12;
    int32_t* v13;
    int64_t r15_14;
    int64_t r15_15;
    int64_t r15_16;
    int64_t v17;
    int32_t* v18;
    int64_t v19;

    while (1) {
        ++ebx5;
        ++r13_6;
        if (r13_6 == 0x9c4) {
            r14d7 = tmp32_8;
            ++r12_9;
            --ebp10;
            if (r12_9 == 0x9c4) 
                break;
            r13_6 = r12_9;
            ebx5 = r14d7;
        }
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(ebx5 * 0xcccccccd + 0x19999998) <= 0xccccccc) {
            fun_258(10, r15_11, rdx, rcx);
        }
        *reinterpret_cast<int32_t*>(&rdx12) = (v13 + r12_9 * 0x9c4)[r13_6];
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx12) + 4) = reinterpret_cast<int32_t>(fputc);
        fun_279(r15_14, 0x272, rdx12, rcx);
    }
    fun_2b0(r15_15, 0x29f, 0x2a6, rcx);
    fun_2c9(0x2b7, 22, 1, r15_16);
    fun_1c1(v17, 22, 1, r15_16);
    fun_1cb(v18, 22, 1, r15_16);
    goto v19;
}

void fun_2c9(int64_t rdi, int64_t rsi, int32_t* rdx, int64_t rcx) {
    int64_t v5;
    int32_t* v6;
    int64_t v7;

    fun_1c1(v5, rsi, rdx, rcx);
    fun_1cb(v6, rsi, rdx, rcx);
    goto v7;
}

int32_t* fun_164(int64_t rdi, int64_t rsi);

void fun_152(int64_t rdi, int64_t rsi) {
    int64_t rbx3;
    int64_t rax4;
    int32_t* rax5;
    int32_t* v6;
    int64_t rax7;
    int64_t rcx8;
    int32_t edx9;
    int64_t rsi10;
    int32_t* rdx11;
    int32_t ebp12;
    signed char** r15_13;
    int64_t v14;
    int64_t* rax15;
    int64_t r15_16;
    int64_t rcx17;
    int64_t rdx18;
    int32_t ebp19;
    int64_t r12_20;
    int32_t r14d21;
    int64_t r13_22;
    int32_t ebx23;
    int64_t v24;

    rbx3 = rax4;
    rax5 = fun_164(0x5f5e10, 4);
    v6 = rax5;
    *reinterpret_cast<int32_t*>(&rax7) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax7) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        rcx8 = rax7 + 1;
        edx9 = *reinterpret_cast<int32_t*>(&rcx8);
        *reinterpret_cast<unsigned char*>(rbx3 + rax7) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&edx9) & 3);
        rax7 = rcx8;
    } while (rcx8 != 0x9c4);
    fun_19c(v6);
    rsi10 = rbx3;
    rdx11 = v6;
    fun_1ac(0x9c4, rsi10, rdx11);
    if (ebp12 >= 43 && **r15_13 == fputc) {
        v14 = rbx3;
        rax15 = g1e8;
        r15_16 = *rax15;
        rcx17 = r15_16;
        fun_204(0x1f2, 22, 1, rcx17);
        rdx18 = 0x212;
        fun_21c(r15_16, 0x20b, 0x212, rcx17);
        ebp19 = 0x9c4;
        *reinterpret_cast<int32_t*>(&r12_20) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_20) + 4) = reinterpret_cast<int32_t>(fputc);
        r14d21 = reinterpret_cast<int32_t>(fputc);
        do {
            r13_22 = r12_20;
            ebx23 = r14d21;
            do {
                __asm__("ror eax, 0x2");
                if (reinterpret_cast<uint32_t>(ebx23 * 0xcccccccd + 0x19999998) <= 0xccccccc) {
                    fun_258(10, r15_16, rdx18, rcx17);
                }
                *reinterpret_cast<int32_t*>(&rdx18) = (v6 + r12_20 * 0x9c4)[r13_22];
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx18) + 4) = reinterpret_cast<int32_t>(fputc);
                fun_279(r15_16, 0x272, rdx18, rcx17);
                ++ebx23;
                ++r13_22;
            } while (r13_22 != 0x9c4);
            r14d21 = r14d21 + ebp19;
            ++r12_20;
            --ebp19;
        } while (r12_20 != 0x9c4);
        fun_2b0(r15_16, 0x29f, 0x2a6, rcx17);
        *reinterpret_cast<int32_t*>(&rsi10) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi10) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx11) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx11) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx8 = r15_16;
        fun_2c9(0x2b7, 22, 1, rcx8);
        rbx3 = v14;
    }
    fun_1c1(rbx3, rsi10, rdx11, rcx8);
    fun_1cb(v6, rsi10, rdx11, rcx8);
    goto v24;
}

void fun_21c(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int32_t ebp5;
    int64_t r12_6;
    int32_t r14d7;
    int64_t r13_8;
    int32_t ebx9;
    int64_t r15_10;
    int32_t* v11;
    int64_t r15_12;
    int64_t r15_13;
    int64_t r15_14;
    int64_t v15;
    int32_t* v16;
    int64_t v17;

    ebp5 = 0x9c4;
    *reinterpret_cast<int32_t*>(&r12_6) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_6) + 4) = reinterpret_cast<int32_t>(fputc);
    r14d7 = reinterpret_cast<int32_t>(fputc);
    do {
        r13_8 = r12_6;
        ebx9 = r14d7;
        do {
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>(ebx9 * 0xcccccccd + 0x19999998) <= 0xccccccc) {
                fun_258(10, r15_10, rdx, rcx);
            }
            *reinterpret_cast<int32_t*>(&rdx) = (v11 + r12_6 * 0x9c4)[r13_8];
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx) + 4) = reinterpret_cast<int32_t>(fputc);
            fun_279(r15_12, 0x272, rdx, rcx);
            ++ebx9;
            ++r13_8;
        } while (r13_8 != 0x9c4);
        r14d7 = r14d7 + ebp5;
        ++r12_6;
        --ebp5;
    } while (r12_6 != 0x9c4);
    fun_2b0(r15_13, 0x29f, 0x2a6, rcx);
    fun_2c9(0x2b7, 22, 1, r15_14);
    fun_1c1(v15, 22, 1, r15_14);
    fun_1cb(v16, 22, 1, r15_14);
    goto v17;
}

int32_t* fun_164(int64_t rdi, int64_t rsi) {
    int32_t* v3;
    int32_t* rax4;
    int64_t rax5;
    int64_t rcx6;
    int32_t edx7;
    int64_t rbx8;
    int64_t rsi9;
    int64_t rbx10;
    int32_t* rdx11;
    int32_t ebp12;
    signed char** r15_13;
    int64_t v14;
    int64_t rbx15;
    int64_t* rax16;
    int64_t r15_17;
    int64_t rcx18;
    int64_t rdx19;
    int32_t ebp20;
    int64_t r12_21;
    int32_t r14d22;
    int64_t r13_23;
    int32_t ebx24;
    int64_t rbx25;
    int64_t v26;

    v3 = rax4;
    *reinterpret_cast<int32_t*>(&rax5) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax5) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        rcx6 = rax5 + 1;
        edx7 = *reinterpret_cast<int32_t*>(&rcx6);
        *reinterpret_cast<unsigned char*>(rbx8 + rax5) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&edx7) & 3);
        rax5 = rcx6;
    } while (rcx6 != 0x9c4);
    fun_19c(v3);
    rsi9 = rbx10;
    rdx11 = v3;
    fun_1ac(0x9c4, rsi9, rdx11);
    if (ebp12 >= 43 && **r15_13 == fputc) {
        v14 = rbx15;
        rax16 = g1e8;
        r15_17 = *rax16;
        rcx18 = r15_17;
        fun_204(0x1f2, 22, 1, rcx18);
        rdx19 = 0x212;
        fun_21c(r15_17, 0x20b, 0x212, rcx18);
        ebp20 = 0x9c4;
        *reinterpret_cast<int32_t*>(&r12_21) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_21) + 4) = reinterpret_cast<int32_t>(fputc);
        r14d22 = reinterpret_cast<int32_t>(fputc);
        do {
            r13_23 = r12_21;
            ebx24 = r14d22;
            do {
                __asm__("ror eax, 0x2");
                if (reinterpret_cast<uint32_t>(ebx24 * 0xcccccccd + 0x19999998) <= 0xccccccc) {
                    fun_258(10, r15_17, rdx19, rcx18);
                }
                *reinterpret_cast<int32_t*>(&rdx19) = (v3 + r12_21 * 0x9c4)[r13_23];
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx19) + 4) = reinterpret_cast<int32_t>(fputc);
                fun_279(r15_17, 0x272, rdx19, rcx18);
                ++ebx24;
                ++r13_23;
            } while (r13_23 != 0x9c4);
            r14d22 = r14d22 + ebp20;
            ++r12_21;
            --ebp20;
        } while (r12_21 != 0x9c4);
        fun_2b0(r15_17, 0x29f, 0x2a6, rcx18);
        *reinterpret_cast<int32_t*>(&rsi9) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi9) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx11) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx11) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx6 = r15_17;
        fun_2c9(0x2b7, 22, 1, rcx6);
        rbx25 = v14;
    }
    fun_1c1(rbx25, rsi9, rdx11, rcx6);
    fun_1cb(v3, rsi9, rdx11, rcx6);
    goto v26;
}

void fputc() {
}

void fun_99() {
    int32_t r14d1;
    int32_t r15d2;
    int32_t r14d3;
    int32_t ebp4;
    int32_t ebp5;
    int32_t ebx6;
    int32_t ebx7;
    int32_t* r11_8;
    int64_t r8_9;
    int64_t r9_10;
    int32_t ebx11;
    int32_t* r10_12;
    int64_t r9_13;
    int64_t r14_14;
    int64_t r8_15;
    int64_t r15_16;
    int32_t ebp17;
    int32_t* rdx18;
    int64_t r9_19;
    int32_t* r10_20;
    int32_t* r11_21;
    int32_t r9d22;

    r14d1 = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<unsigned char*>(&r14d1) = reinterpret_cast<uint1_t>(r15d2 + r14d3 == 3);
    ebp4 = ebp5 + r14d1;
    if (ebx6 > ebp4) {
        ebp4 = ebx7;
    }
    *r11_8 = ebp4;
    if (r8_9 < r9_10) {
        ebx11 = r10_12[r9_13];
        r14_14 = r8_15;
        do {
            r15_16 = r14_14 + 1;
            ebp17 = (rdx18 + r15_16 * 0x9c4)[r9_19] + r10_20[r14_14];
            if (ebx11 <= ebp17) {
                ebx11 = ebp17;
            }
            *r11_21 = ebx11;
            r14_14 = r15_16;
        } while (*reinterpret_cast<int32_t*>(&r15_16) != r9d22);
    }
}

void fun_c0() {
    int32_t ebx1;
    int64_t r8_2;
    int32_t* rdx3;
    int64_t r9_4;
    int32_t ebp5;
    int32_t ebp6;
    int32_t* r11_7;
    int64_t r8_8;
    int64_t r9_9;

    ebx1 = (rdx3 + r8_2 * 0x9c4)[r9_4];
    if (ebp5 > ebx1) {
        ebx1 = ebp6;
    }
    *r11_7 = ebx1;
    if (r8_8 >= r9_9) 
        goto 64; else 
        goto "???";
}

void fun_11b() {
    int64_t v1;

    goto v1;
}

void submain(int32_t edi, int64_t rsi) {
    fun_152(0x9c4, 1);
}

