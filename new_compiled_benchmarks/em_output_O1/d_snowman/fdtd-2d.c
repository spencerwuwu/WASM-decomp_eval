
void fun_2bd(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx);

void fun_2c5(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx);

void fun_2cd(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx);

void fun_2b5(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int64_t r14_5;
    int64_t r15_6;
    int64_t r12_7;
    int64_t v8;

    fun_2bd(r14_5, rsi, rdx, rcx);
    fun_2c5(r15_6, rsi, rdx, rcx);
    fun_2cd(r12_7, rsi, rdx, rcx);
    goto v8;
}

void fun_379();

void fputc();

void fun_3b0(int32_t* rdi, int64_t rsi, int64_t rdx);

void fun_3c9(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx);

void fun_3e1();

void fun_426();

void fun_449();

void fun_480(int32_t* rdi, int64_t rsi, int64_t rdx, int32_t* rcx);

void fun_498();

void fun_4d6();

void fun_4f9();

void fun_52b(int32_t* rdi, int64_t rsi, int64_t rdx, int32_t* rcx);

void fun_356() {
    int32_t* rdi1;
    int32_t* rsi2;
    int32_t* v3;
    int64_t r13_4;
    int64_t rbp5;
    int64_t v6;
    int64_t rax7;
    int32_t* v8;
    int64_t rbp9;
    int32_t* v10;
    int32_t* rcx11;
    int32_t* rsi12;
    int32_t* rdi13;
    int64_t v14;
    int64_t r13_15;
    int64_t rax16;
    int32_t* v17;
    int32_t* v18;
    int64_t rbp19;
    int32_t* v20;
    int32_t* rsi21;
    int32_t* rdi22;
    int64_t v23;
    int64_t r13_24;
    int64_t rax25;
    int32_t* v26;
    int32_t* v27;
    int32_t* v28;
    int64_t rbx29;
    int64_t r14_30;
    int64_t r15_31;
    int64_t r12_32;
    int64_t v33;

    while (1) {
        *rdi1 = *rsi2;
        rdi1 = v3;
        rsi2 = reinterpret_cast<int32_t*>(0x372);
        fun_379();
        ++r13_4;
        if (r13_4 == 0x4b0) {
            ++rbp5;
            if (rbp5 == 0x3e8) 
                break;
            v6 = rbp5 * 0x3e8;
            *reinterpret_cast<int32_t*>(&r13_4) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_4) + 4) = reinterpret_cast<int32_t>(fputc);
        }
        rax7 = v6;
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>((*reinterpret_cast<int32_t*>(&rax7) + *reinterpret_cast<int32_t*>(&r13_4)) * 0xcccccccd) > 0xccccccc) 
            continue;
        *reinterpret_cast<int32_t*>(&rdi1) = 10;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi1) + 4) = reinterpret_cast<int32_t>(fputc);
        rsi2 = v8;
        fun_356();
    }
    *reinterpret_cast<int32_t*>(&rbp9) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp9) + 4) = reinterpret_cast<int32_t>(fputc);
    fun_3b0(v10, 0x398, 0x39f);
    rcx11 = v10;
    fun_3c9(0x3b7, 22, 1, rcx11);
    rsi12 = reinterpret_cast<int32_t*>(0x3d0);
    rdi13 = v10;
    fun_3e1();
    do {
        v14 = rbp9 * 0x3e8;
        *reinterpret_cast<int32_t*>(&r13_15) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_15) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rax16 = v14;
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>((*reinterpret_cast<int32_t*>(&rax16) + *reinterpret_cast<int32_t*>(&r13_15)) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi13) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi13) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi12 = v17;
                fun_426();
            }
            *rdi13 = *rsi12;
            rdi13 = v18;
            rsi12 = reinterpret_cast<int32_t*>(0x442);
            fun_449();
            ++r13_15;
        } while (r13_15 != 0x4b0);
        ++rbp9;
    } while (rbp9 != 0x3e8);
    *reinterpret_cast<int32_t*>(&rbp19) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp19) + 4) = reinterpret_cast<int32_t>(fputc);
    fun_480(v20, 0x468, 0x46f, rcx11);
    rsi21 = reinterpret_cast<int32_t*>(0x487);
    rdi22 = v20;
    fun_498();
    do {
        v23 = rbp19 * 0x3e8;
        *reinterpret_cast<int32_t*>(&r13_24) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_24) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rax25 = v23;
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>((*reinterpret_cast<int32_t*>(&rax25) + *reinterpret_cast<int32_t*>(&r13_24)) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi22) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi22) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi21 = v26;
                fun_4d6();
            }
            *rdi22 = *rsi21;
            rdi22 = v27;
            rsi21 = reinterpret_cast<int32_t*>(0x4f2);
            fun_4f9();
            ++r13_24;
        } while (r13_24 != 0x4b0);
        ++rbp19;
    } while (rbp19 != 0x3e8);
    fun_52b(v28, 0x518, 0x51f, rcx11);
    fun_2b5(rbx29, 0x518, 0x51f, rcx11);
    fun_2bd(r14_30, 0x518, 0x51f, rcx11);
    fun_2c5(r15_31, 0x518, 0x51f, rcx11);
    fun_2cd(r12_32, 0x518, 0x51f, rcx11);
    goto v33;
}

void fun_379() {
    int64_t r13_1;
    int64_t rbp2;
    int64_t v3;
    int64_t rax4;
    int32_t* rdi5;
    int32_t* rsi6;
    int32_t* v7;
    int32_t* v8;
    int64_t rbp9;
    int32_t* v10;
    int32_t* rcx11;
    int32_t* rsi12;
    int32_t* rdi13;
    int64_t v14;
    int64_t r13_15;
    int64_t rax16;
    int32_t* v17;
    int32_t* v18;
    int64_t rbp19;
    int32_t* v20;
    int32_t* rsi21;
    int32_t* rdi22;
    int64_t v23;
    int64_t r13_24;
    int64_t rax25;
    int32_t* v26;
    int32_t* v27;
    int32_t* v28;
    int64_t rbx29;
    int64_t r14_30;
    int64_t r15_31;
    int64_t r12_32;
    int64_t v33;

    while (1) {
        ++r13_1;
        if (r13_1 == 0x4b0) {
            ++rbp2;
            if (rbp2 == 0x3e8) 
                break;
            v3 = rbp2 * 0x3e8;
            *reinterpret_cast<int32_t*>(&r13_1) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_1) + 4) = reinterpret_cast<int32_t>(fputc);
        }
        rax4 = v3;
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>((*reinterpret_cast<int32_t*>(&rax4) + *reinterpret_cast<int32_t*>(&r13_1)) * 0xcccccccd) <= 0xccccccc) {
            *reinterpret_cast<int32_t*>(&rdi5) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi5) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi6 = v7;
            fun_356();
        }
        *rdi5 = *rsi6;
        rdi5 = v8;
        rsi6 = reinterpret_cast<int32_t*>(0x372);
        fun_379();
    }
    *reinterpret_cast<int32_t*>(&rbp9) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp9) + 4) = reinterpret_cast<int32_t>(fputc);
    fun_3b0(v10, 0x398, 0x39f);
    rcx11 = v10;
    fun_3c9(0x3b7, 22, 1, rcx11);
    rsi12 = reinterpret_cast<int32_t*>(0x3d0);
    rdi13 = v10;
    fun_3e1();
    do {
        v14 = rbp9 * 0x3e8;
        *reinterpret_cast<int32_t*>(&r13_15) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_15) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rax16 = v14;
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>((*reinterpret_cast<int32_t*>(&rax16) + *reinterpret_cast<int32_t*>(&r13_15)) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi13) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi13) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi12 = v17;
                fun_426();
            }
            *rdi13 = *rsi12;
            rdi13 = v18;
            rsi12 = reinterpret_cast<int32_t*>(0x442);
            fun_449();
            ++r13_15;
        } while (r13_15 != 0x4b0);
        ++rbp9;
    } while (rbp9 != 0x3e8);
    *reinterpret_cast<int32_t*>(&rbp19) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp19) + 4) = reinterpret_cast<int32_t>(fputc);
    fun_480(v20, 0x468, 0x46f, rcx11);
    rsi21 = reinterpret_cast<int32_t*>(0x487);
    rdi22 = v20;
    fun_498();
    do {
        v23 = rbp19 * 0x3e8;
        *reinterpret_cast<int32_t*>(&r13_24) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_24) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rax25 = v23;
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>((*reinterpret_cast<int32_t*>(&rax25) + *reinterpret_cast<int32_t*>(&r13_24)) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi22) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi22) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi21 = v26;
                fun_4d6();
            }
            *rdi22 = *rsi21;
            rdi22 = v27;
            rsi21 = reinterpret_cast<int32_t*>(0x4f2);
            fun_4f9();
            ++r13_24;
        } while (r13_24 != 0x4b0);
        ++rbp19;
    } while (rbp19 != 0x3e8);
    fun_52b(v28, 0x518, 0x51f, rcx11);
    fun_2b5(rbx29, 0x518, 0x51f, rcx11);
    fun_2bd(r14_30, 0x518, 0x51f, rcx11);
    fun_2c5(r15_31, 0x518, 0x51f, rcx11);
    fun_2cd(r12_32, 0x518, 0x51f, rcx11);
    goto v33;
}

void fun_320() {
    int64_t v1;
    int64_t rbp2;
    int64_t r13_3;
    int64_t rax4;
    int32_t* rdi5;
    int32_t* rsi6;
    int32_t* v7;
    int32_t* v8;
    int64_t rbp9;
    int32_t* v10;
    int32_t* rcx11;
    int32_t* rsi12;
    int32_t* rdi13;
    int64_t v14;
    int64_t r13_15;
    int64_t rax16;
    int32_t* v17;
    int32_t* v18;
    int64_t rbp19;
    int32_t* v20;
    int32_t* rsi21;
    int32_t* rdi22;
    int64_t v23;
    int64_t r13_24;
    int64_t rax25;
    int32_t* v26;
    int32_t* v27;
    int32_t* v28;
    int64_t rbx29;
    int64_t r14_30;
    int64_t r15_31;
    int64_t r12_32;
    int64_t v33;

    do {
        v1 = rbp2 * 0x3e8;
        *reinterpret_cast<int32_t*>(&r13_3) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_3) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rax4 = v1;
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>((*reinterpret_cast<int32_t*>(&rax4) + *reinterpret_cast<int32_t*>(&r13_3)) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi5) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi5) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi6 = v7;
                fun_356();
            }
            *rdi5 = *rsi6;
            rdi5 = v8;
            rsi6 = reinterpret_cast<int32_t*>(0x372);
            fun_379();
            ++r13_3;
        } while (r13_3 != 0x4b0);
        ++rbp2;
    } while (rbp2 != 0x3e8);
    *reinterpret_cast<int32_t*>(&rbp9) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp9) + 4) = reinterpret_cast<int32_t>(fputc);
    fun_3b0(v10, 0x398, 0x39f);
    rcx11 = v10;
    fun_3c9(0x3b7, 22, 1, rcx11);
    rsi12 = reinterpret_cast<int32_t*>(0x3d0);
    rdi13 = v10;
    fun_3e1();
    do {
        v14 = rbp9 * 0x3e8;
        *reinterpret_cast<int32_t*>(&r13_15) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_15) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rax16 = v14;
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>((*reinterpret_cast<int32_t*>(&rax16) + *reinterpret_cast<int32_t*>(&r13_15)) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi13) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi13) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi12 = v17;
                fun_426();
            }
            *rdi13 = *rsi12;
            rdi13 = v18;
            rsi12 = reinterpret_cast<int32_t*>(0x442);
            fun_449();
            ++r13_15;
        } while (r13_15 != 0x4b0);
        ++rbp9;
    } while (rbp9 != 0x3e8);
    *reinterpret_cast<int32_t*>(&rbp19) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp19) + 4) = reinterpret_cast<int32_t>(fputc);
    fun_480(v20, 0x468, 0x46f, rcx11);
    rsi21 = reinterpret_cast<int32_t*>(0x487);
    rdi22 = v20;
    fun_498();
    do {
        v23 = rbp19 * 0x3e8;
        *reinterpret_cast<int32_t*>(&r13_24) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_24) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rax25 = v23;
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>((*reinterpret_cast<int32_t*>(&rax25) + *reinterpret_cast<int32_t*>(&r13_24)) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi22) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi22) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi21 = v26;
                fun_4d6();
            }
            *rdi22 = *rsi21;
            rdi22 = v27;
            rsi21 = reinterpret_cast<int32_t*>(0x4f2);
            fun_4f9();
            ++r13_24;
        } while (r13_24 != 0x4b0);
        ++rbp19;
    } while (rbp19 != 0x3e8);
    fun_52b(v28, 0x518, 0x51f, rcx11);
    fun_2b5(rbx29, 0x518, 0x51f, rcx11);
    fun_2bd(r14_30, 0x518, 0x51f, rcx11);
    fun_2c5(r15_31, 0x518, 0x51f, rcx11);
    fun_2cd(r12_32, 0x518, 0x51f, rcx11);
    goto v33;
}

void fun_3b0(int32_t* rdi, int64_t rsi, int64_t rdx) {
    int32_t* rcx4;
    int32_t* r13_5;
    int32_t* rsi6;
    int32_t* rdi7;
    int32_t* r13_8;
    int64_t v9;
    int64_t rbp10;
    int64_t r13_11;
    int64_t rax12;
    int32_t* v13;
    int32_t* v14;
    int64_t rbp15;
    int32_t* v16;
    int32_t* rsi17;
    int32_t* rdi18;
    int64_t v19;
    int64_t r13_20;
    int64_t rax21;
    int32_t* v22;
    int32_t* v23;
    int32_t* v24;
    int64_t rbx25;
    int64_t r14_26;
    int64_t r15_27;
    int64_t r12_28;
    int64_t v29;

    rcx4 = r13_5;
    fun_3c9(0x3b7, 22, 1, rcx4);
    rsi6 = reinterpret_cast<int32_t*>(0x3d0);
    rdi7 = r13_8;
    fun_3e1();
    do {
        v9 = rbp10 * 0x3e8;
        *reinterpret_cast<int32_t*>(&r13_11) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_11) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rax12 = v9;
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>((*reinterpret_cast<int32_t*>(&rax12) + *reinterpret_cast<int32_t*>(&r13_11)) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi7) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi7) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi6 = v13;
                fun_426();
            }
            *rdi7 = *rsi6;
            rdi7 = v14;
            rsi6 = reinterpret_cast<int32_t*>(0x442);
            fun_449();
            ++r13_11;
        } while (r13_11 != 0x4b0);
        ++rbp10;
    } while (rbp10 != 0x3e8);
    *reinterpret_cast<int32_t*>(&rbp15) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp15) + 4) = reinterpret_cast<int32_t>(fputc);
    fun_480(v16, 0x468, 0x46f, rcx4);
    rsi17 = reinterpret_cast<int32_t*>(0x487);
    rdi18 = v16;
    fun_498();
    do {
        v19 = rbp15 * 0x3e8;
        *reinterpret_cast<int32_t*>(&r13_20) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_20) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rax21 = v19;
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>((*reinterpret_cast<int32_t*>(&rax21) + *reinterpret_cast<int32_t*>(&r13_20)) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi18) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi18) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi17 = v22;
                fun_4d6();
            }
            *rdi18 = *rsi17;
            rdi18 = v23;
            rsi17 = reinterpret_cast<int32_t*>(0x4f2);
            fun_4f9();
            ++r13_20;
        } while (r13_20 != 0x4b0);
        ++rbp15;
    } while (rbp15 != 0x3e8);
    fun_52b(v24, 0x518, 0x51f, rcx4);
    fun_2b5(rbx25, 0x518, 0x51f, rcx4);
    fun_2bd(r14_26, 0x518, 0x51f, rcx4);
    fun_2c5(r15_27, 0x518, 0x51f, rcx4);
    fun_2cd(r12_28, 0x518, 0x51f, rcx4);
    goto v29;
}

void fun_426() {
    int32_t* rdi1;
    int32_t* rsi2;
    int32_t* v3;
    int64_t r13_4;
    int64_t rbp5;
    int64_t v6;
    int64_t rax7;
    int32_t* v8;
    int64_t rbp9;
    int32_t* v10;
    int32_t* rcx11;
    int32_t* rsi12;
    int32_t* rdi13;
    int64_t v14;
    int64_t r13_15;
    int64_t rax16;
    int32_t* v17;
    int32_t* v18;
    int32_t* v19;
    int32_t* rcx20;
    int64_t rbx21;
    int32_t* rcx22;
    int64_t r14_23;
    int32_t* rcx24;
    int64_t r15_25;
    int32_t* rcx26;
    int64_t r12_27;
    int32_t* rcx28;
    int64_t v29;

    while (1) {
        *rdi1 = *rsi2;
        rdi1 = v3;
        rsi2 = reinterpret_cast<int32_t*>(0x442);
        fun_449();
        ++r13_4;
        if (r13_4 == 0x4b0) {
            ++rbp5;
            if (rbp5 == 0x3e8) 
                break;
            v6 = rbp5 * 0x3e8;
            *reinterpret_cast<int32_t*>(&r13_4) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_4) + 4) = reinterpret_cast<int32_t>(fputc);
        }
        rax7 = v6;
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>((*reinterpret_cast<int32_t*>(&rax7) + *reinterpret_cast<int32_t*>(&r13_4)) * 0xcccccccd) > 0xccccccc) 
            continue;
        *reinterpret_cast<int32_t*>(&rdi1) = 10;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi1) + 4) = reinterpret_cast<int32_t>(fputc);
        rsi2 = v8;
        fun_426();
    }
    *reinterpret_cast<int32_t*>(&rbp9) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp9) + 4) = reinterpret_cast<int32_t>(fputc);
    fun_480(v10, 0x468, 0x46f, rcx11);
    rsi12 = reinterpret_cast<int32_t*>(0x487);
    rdi13 = v10;
    fun_498();
    do {
        v14 = rbp9 * 0x3e8;
        *reinterpret_cast<int32_t*>(&r13_15) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_15) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rax16 = v14;
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>((*reinterpret_cast<int32_t*>(&rax16) + *reinterpret_cast<int32_t*>(&r13_15)) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi13) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi13) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi12 = v17;
                fun_4d6();
            }
            *rdi13 = *rsi12;
            rdi13 = v18;
            rsi12 = reinterpret_cast<int32_t*>(0x4f2);
            fun_4f9();
            ++r13_15;
        } while (r13_15 != 0x4b0);
        ++rbp9;
    } while (rbp9 != 0x3e8);
    fun_52b(v19, 0x518, 0x51f, rcx20);
    fun_2b5(rbx21, 0x518, 0x51f, rcx22);
    fun_2bd(r14_23, 0x518, 0x51f, rcx24);
    fun_2c5(r15_25, 0x518, 0x51f, rcx26);
    fun_2cd(r12_27, 0x518, 0x51f, rcx28);
    goto v29;
}

void fun_449() {
    int64_t r13_1;
    int64_t rbp2;
    int64_t v3;
    int64_t rax4;
    int32_t* rdi5;
    int32_t* rsi6;
    int32_t* v7;
    int32_t* v8;
    int64_t rbp9;
    int32_t* v10;
    int32_t* rcx11;
    int32_t* rsi12;
    int32_t* rdi13;
    int64_t v14;
    int64_t r13_15;
    int64_t rax16;
    int32_t* v17;
    int32_t* v18;
    int32_t* v19;
    int32_t* rcx20;
    int64_t rbx21;
    int32_t* rcx22;
    int64_t r14_23;
    int32_t* rcx24;
    int64_t r15_25;
    int32_t* rcx26;
    int64_t r12_27;
    int32_t* rcx28;
    int64_t v29;

    while (1) {
        ++r13_1;
        if (r13_1 == 0x4b0) {
            ++rbp2;
            if (rbp2 == 0x3e8) 
                break;
            v3 = rbp2 * 0x3e8;
            *reinterpret_cast<int32_t*>(&r13_1) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_1) + 4) = reinterpret_cast<int32_t>(fputc);
        }
        rax4 = v3;
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>((*reinterpret_cast<int32_t*>(&rax4) + *reinterpret_cast<int32_t*>(&r13_1)) * 0xcccccccd) <= 0xccccccc) {
            *reinterpret_cast<int32_t*>(&rdi5) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi5) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi6 = v7;
            fun_426();
        }
        *rdi5 = *rsi6;
        rdi5 = v8;
        rsi6 = reinterpret_cast<int32_t*>(0x442);
        fun_449();
    }
    *reinterpret_cast<int32_t*>(&rbp9) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp9) + 4) = reinterpret_cast<int32_t>(fputc);
    fun_480(v10, 0x468, 0x46f, rcx11);
    rsi12 = reinterpret_cast<int32_t*>(0x487);
    rdi13 = v10;
    fun_498();
    do {
        v14 = rbp9 * 0x3e8;
        *reinterpret_cast<int32_t*>(&r13_15) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_15) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rax16 = v14;
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>((*reinterpret_cast<int32_t*>(&rax16) + *reinterpret_cast<int32_t*>(&r13_15)) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi13) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi13) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi12 = v17;
                fun_4d6();
            }
            *rdi13 = *rsi12;
            rdi13 = v18;
            rsi12 = reinterpret_cast<int32_t*>(0x4f2);
            fun_4f9();
            ++r13_15;
        } while (r13_15 != 0x4b0);
        ++rbp9;
    } while (rbp9 != 0x3e8);
    fun_52b(v19, 0x518, 0x51f, rcx20);
    fun_2b5(rbx21, 0x518, 0x51f, rcx22);
    fun_2bd(r14_23, 0x518, 0x51f, rcx24);
    fun_2c5(r15_25, 0x518, 0x51f, rcx26);
    fun_2cd(r12_27, 0x518, 0x51f, rcx28);
    goto v29;
}

void fun_480(int32_t* rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int32_t* rsi5;
    int32_t* rdi6;
    int32_t* r13_7;
    int64_t v8;
    int64_t rbp9;
    int64_t r13_10;
    int64_t rax11;
    int32_t* v12;
    int32_t* v13;
    int32_t* v14;
    int64_t rbx15;
    int64_t r14_16;
    int64_t r15_17;
    int64_t r12_18;
    int64_t v19;

    rsi5 = reinterpret_cast<int32_t*>(0x487);
    rdi6 = r13_7;
    fun_498();
    do {
        v8 = rbp9 * 0x3e8;
        *reinterpret_cast<int32_t*>(&r13_10) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_10) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rax11 = v8;
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>((*reinterpret_cast<int32_t*>(&rax11) + *reinterpret_cast<int32_t*>(&r13_10)) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi6) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi6) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi5 = v12;
                fun_4d6();
            }
            *rdi6 = *rsi5;
            rdi6 = v13;
            rsi5 = reinterpret_cast<int32_t*>(0x4f2);
            fun_4f9();
            ++r13_10;
        } while (r13_10 != 0x4b0);
        ++rbp9;
    } while (rbp9 != 0x3e8);
    fun_52b(v14, 0x518, 0x51f, rcx);
    fun_2b5(rbx15, 0x518, 0x51f, rcx);
    fun_2bd(r14_16, 0x518, 0x51f, rcx);
    fun_2c5(r15_17, 0x518, 0x51f, rcx);
    fun_2cd(r12_18, 0x518, 0x51f, rcx);
    goto v19;
}

void fun_4d6() {
    int32_t* rdi1;
    int32_t* rsi2;
    int32_t* v3;
    int64_t r13_4;
    int64_t rbp5;
    int64_t v6;
    int64_t rax7;
    int32_t* v8;
    int32_t* v9;
    int32_t* rcx10;
    int64_t rbx11;
    int32_t* rcx12;
    int64_t r14_13;
    int32_t* rcx14;
    int64_t r15_15;
    int32_t* rcx16;
    int64_t r12_17;
    int32_t* rcx18;
    int64_t v19;

    while (1) {
        *rdi1 = *rsi2;
        rdi1 = v3;
        rsi2 = reinterpret_cast<int32_t*>(0x4f2);
        fun_4f9();
        ++r13_4;
        if (r13_4 == 0x4b0) {
            ++rbp5;
            if (rbp5 == 0x3e8) 
                break;
            v6 = rbp5 * 0x3e8;
            *reinterpret_cast<int32_t*>(&r13_4) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_4) + 4) = reinterpret_cast<int32_t>(fputc);
        }
        rax7 = v6;
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>((*reinterpret_cast<int32_t*>(&rax7) + *reinterpret_cast<int32_t*>(&r13_4)) * 0xcccccccd) > 0xccccccc) 
            continue;
        *reinterpret_cast<int32_t*>(&rdi1) = 10;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi1) + 4) = reinterpret_cast<int32_t>(fputc);
        rsi2 = v8;
        fun_4d6();
    }
    fun_52b(v9, 0x518, 0x51f, rcx10);
    fun_2b5(rbx11, 0x518, 0x51f, rcx12);
    fun_2bd(r14_13, 0x518, 0x51f, rcx14);
    fun_2c5(r15_15, 0x518, 0x51f, rcx16);
    fun_2cd(r12_17, 0x518, 0x51f, rcx18);
    goto v19;
}

void fun_4f9() {
    int64_t r13_1;
    int64_t rbp2;
    int64_t v3;
    int64_t rax4;
    int32_t* rdi5;
    int32_t* rsi6;
    int32_t* v7;
    int32_t* v8;
    int32_t* v9;
    int32_t* rcx10;
    int64_t rbx11;
    int32_t* rcx12;
    int64_t r14_13;
    int32_t* rcx14;
    int64_t r15_15;
    int32_t* rcx16;
    int64_t r12_17;
    int32_t* rcx18;
    int64_t v19;

    while (1) {
        ++r13_1;
        if (r13_1 == 0x4b0) {
            ++rbp2;
            if (rbp2 == 0x3e8) 
                break;
            v3 = rbp2 * 0x3e8;
            *reinterpret_cast<int32_t*>(&r13_1) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_1) + 4) = reinterpret_cast<int32_t>(fputc);
        }
        rax4 = v3;
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>((*reinterpret_cast<int32_t*>(&rax4) + *reinterpret_cast<int32_t*>(&r13_1)) * 0xcccccccd) <= 0xccccccc) {
            *reinterpret_cast<int32_t*>(&rdi5) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi5) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi6 = v7;
            fun_4d6();
        }
        *rdi5 = *rsi6;
        rdi5 = v8;
        rsi6 = reinterpret_cast<int32_t*>(0x4f2);
        fun_4f9();
    }
    fun_52b(v9, 0x518, 0x51f, rcx10);
    fun_2b5(rbx11, 0x518, 0x51f, rcx12);
    fun_2bd(r14_13, 0x518, 0x51f, rcx14);
    fun_2c5(r15_15, 0x518, 0x51f, rcx16);
    fun_2cd(r12_17, 0x518, 0x51f, rcx18);
    goto v19;
}

void fun_52b(int32_t* rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int64_t rbx5;
    int64_t r14_6;
    int64_t r15_7;
    int64_t r12_8;
    int64_t v9;

    fun_2b5(rbx5, rsi, rdx, rcx);
    fun_2bd(r14_6, rsi, rdx, rcx);
    fun_2c5(r15_7, rsi, rdx, rcx);
    fun_2cd(r12_8, rsi, rdx, rcx);
    goto v9;
}

void fun_301(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8) {
    int32_t* rsi6;
    int64_t rbp7;
    int32_t* v8;
    int32_t* r13_9;
    int32_t* rdi10;
    int32_t* r13_11;
    int64_t v12;
    int64_t r13_13;
    int64_t rax14;
    int64_t rbp15;
    int32_t* rcx16;
    int32_t* rsi17;
    int32_t* rdi18;
    int64_t v19;
    int64_t r13_20;
    int64_t rax21;
    int64_t rbp22;
    int32_t* rsi23;
    int32_t* rdi24;
    int64_t v25;
    int64_t r13_26;
    int64_t rax27;
    int64_t rbx28;
    int64_t r14_29;
    int64_t r15_30;
    int64_t r12_31;
    int64_t v32;

    rsi6 = reinterpret_cast<int32_t*>(0x308);
    *reinterpret_cast<int32_t*>(&rbp7) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp7) + 4) = reinterpret_cast<int32_t>(fputc);
    v8 = r13_9;
    rdi10 = r13_11;
    fun_320();
    do {
        v12 = rbp7 * 0x3e8;
        *reinterpret_cast<int32_t*>(&r13_13) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_13) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rax14 = v12;
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>((*reinterpret_cast<int32_t*>(&rax14) + *reinterpret_cast<int32_t*>(&r13_13)) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi10) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi10) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi6 = v8;
                fun_356();
            }
            *rdi10 = *rsi6;
            rdi10 = v8;
            rsi6 = reinterpret_cast<int32_t*>(0x372);
            fun_379();
            ++r13_13;
        } while (r13_13 != 0x4b0);
        ++rbp7;
    } while (rbp7 != 0x3e8);
    *reinterpret_cast<int32_t*>(&rbp15) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp15) + 4) = reinterpret_cast<int32_t>(fputc);
    fun_3b0(v8, 0x398, 0x39f);
    rcx16 = v8;
    fun_3c9(0x3b7, 22, 1, rcx16);
    rsi17 = reinterpret_cast<int32_t*>(0x3d0);
    rdi18 = v8;
    fun_3e1();
    do {
        v19 = rbp15 * 0x3e8;
        *reinterpret_cast<int32_t*>(&r13_20) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_20) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rax21 = v19;
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>((*reinterpret_cast<int32_t*>(&rax21) + *reinterpret_cast<int32_t*>(&r13_20)) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi18) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi18) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi17 = v8;
                fun_426();
            }
            *rdi18 = *rsi17;
            rdi18 = v8;
            rsi17 = reinterpret_cast<int32_t*>(0x442);
            fun_449();
            ++r13_20;
        } while (r13_20 != 0x4b0);
        ++rbp15;
    } while (rbp15 != 0x3e8);
    *reinterpret_cast<int32_t*>(&rbp22) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp22) + 4) = reinterpret_cast<int32_t>(fputc);
    fun_480(v8, 0x468, 0x46f, rcx16);
    rsi23 = reinterpret_cast<int32_t*>(0x487);
    rdi24 = v8;
    fun_498();
    do {
        v25 = rbp22 * 0x3e8;
        *reinterpret_cast<int32_t*>(&r13_26) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_26) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rax27 = v25;
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>((*reinterpret_cast<int32_t*>(&rax27) + *reinterpret_cast<int32_t*>(&r13_26)) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi24) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi24) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi23 = v8;
                fun_4d6();
            }
            *rdi24 = *rsi23;
            rdi24 = v8;
            rsi23 = reinterpret_cast<int32_t*>(0x4f2);
            fun_4f9();
            ++r13_26;
        } while (r13_26 != 0x4b0);
        ++rbp22;
    } while (rbp22 != 0x3e8);
    fun_52b(v8, 0x518, 0x51f, rcx16);
    fun_2b5(rbx28, 0x518, 0x51f, rcx16);
    fun_2bd(r14_29, 0x518, 0x51f, rcx16);
    fun_2c5(r15_30, 0x518, 0x51f, rcx16);
    fun_2cd(r12_31, 0x518, 0x51f, rcx16);
    goto v32;
}

void fun_2bd(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int64_t r15_5;
    int64_t r12_6;
    int64_t v7;

    fun_2c5(r15_5, rsi, rdx, rcx);
    fun_2cd(r12_6, rsi, rdx, rcx);
    goto v7;
}

void fun_3c9(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int32_t* rsi5;
    int32_t* rdi6;
    int32_t* r13_7;
    int64_t v8;
    int64_t rbp9;
    int64_t r13_10;
    int64_t rax11;
    int32_t* v12;
    int32_t* v13;
    int64_t rbp14;
    int32_t* v15;
    int32_t* rsi16;
    int32_t* rdi17;
    int64_t v18;
    int64_t r13_19;
    int64_t rax20;
    int32_t* v21;
    int32_t* v22;
    int32_t* v23;
    int64_t rbx24;
    int64_t r14_25;
    int64_t r15_26;
    int64_t r12_27;
    int64_t v28;

    rsi5 = reinterpret_cast<int32_t*>(0x3d0);
    rdi6 = r13_7;
    fun_3e1();
    do {
        v8 = rbp9 * 0x3e8;
        *reinterpret_cast<int32_t*>(&r13_10) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_10) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rax11 = v8;
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>((*reinterpret_cast<int32_t*>(&rax11) + *reinterpret_cast<int32_t*>(&r13_10)) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi6) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi6) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi5 = v12;
                fun_426();
            }
            *rdi6 = *rsi5;
            rdi6 = v13;
            rsi5 = reinterpret_cast<int32_t*>(0x442);
            fun_449();
            ++r13_10;
        } while (r13_10 != 0x4b0);
        ++rbp9;
    } while (rbp9 != 0x3e8);
    *reinterpret_cast<int32_t*>(&rbp14) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp14) + 4) = reinterpret_cast<int32_t>(fputc);
    fun_480(v15, 0x468, 0x46f, rcx);
    rsi16 = reinterpret_cast<int32_t*>(0x487);
    rdi17 = v15;
    fun_498();
    do {
        v18 = rbp14 * 0x3e8;
        *reinterpret_cast<int32_t*>(&r13_19) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_19) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rax20 = v18;
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>((*reinterpret_cast<int32_t*>(&rax20) + *reinterpret_cast<int32_t*>(&r13_19)) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi17) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi17) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi16 = v21;
                fun_4d6();
            }
            *rdi17 = *rsi16;
            rdi17 = v22;
            rsi16 = reinterpret_cast<int32_t*>(0x4f2);
            fun_4f9();
            ++r13_19;
        } while (r13_19 != 0x4b0);
        ++rbp14;
    } while (rbp14 != 0x3e8);
    fun_52b(v23, 0x518, 0x51f, rcx);
    fun_2b5(rbx24, 0x518, 0x51f, rcx);
    fun_2bd(r14_25, 0x518, 0x51f, rcx);
    fun_2c5(r15_26, 0x518, 0x51f, rcx);
    fun_2cd(r12_27, 0x518, 0x51f, rcx);
    goto v28;
}

void fun_498() {
    int64_t v1;
    int64_t rbp2;
    int64_t r13_3;
    int64_t rax4;
    int32_t* rdi5;
    int32_t* rsi6;
    int32_t* v7;
    int32_t* v8;
    int32_t* v9;
    int32_t* rcx10;
    int64_t rbx11;
    int32_t* rcx12;
    int64_t r14_13;
    int32_t* rcx14;
    int64_t r15_15;
    int32_t* rcx16;
    int64_t r12_17;
    int32_t* rcx18;
    int64_t v19;

    do {
        v1 = rbp2 * 0x3e8;
        *reinterpret_cast<int32_t*>(&r13_3) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_3) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rax4 = v1;
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>((*reinterpret_cast<int32_t*>(&rax4) + *reinterpret_cast<int32_t*>(&r13_3)) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi5) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi5) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi6 = v7;
                fun_4d6();
            }
            *rdi5 = *rsi6;
            rdi5 = v8;
            rsi6 = reinterpret_cast<int32_t*>(0x4f2);
            fun_4f9();
            ++r13_3;
        } while (r13_3 != 0x4b0);
        ++rbp2;
    } while (rbp2 != 0x3e8);
    fun_52b(v9, 0x518, 0x51f, rcx10);
    fun_2b5(rbx11, 0x518, 0x51f, rcx12);
    fun_2bd(r14_13, 0x518, 0x51f, rcx14);
    fun_2c5(r15_15, 0x518, 0x51f, rcx16);
    fun_2cd(r12_17, 0x518, 0x51f, rcx18);
    goto v19;
}

void fun_2c5(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int64_t r12_5;
    int64_t v6;

    fun_2cd(r12_5, rsi, rdx, rcx);
    goto v6;
}

void fun_3e1() {
    int64_t v1;
    int64_t rbp2;
    int64_t r13_3;
    int64_t rax4;
    int32_t* rdi5;
    int32_t* rsi6;
    int32_t* v7;
    int32_t* v8;
    int64_t rbp9;
    int32_t* v10;
    int32_t* rcx11;
    int32_t* rsi12;
    int32_t* rdi13;
    int64_t v14;
    int64_t r13_15;
    int64_t rax16;
    int32_t* v17;
    int32_t* v18;
    int32_t* v19;
    int32_t* rcx20;
    int64_t rbx21;
    int32_t* rcx22;
    int64_t r14_23;
    int32_t* rcx24;
    int64_t r15_25;
    int32_t* rcx26;
    int64_t r12_27;
    int32_t* rcx28;
    int64_t v29;

    do {
        v1 = rbp2 * 0x3e8;
        *reinterpret_cast<int32_t*>(&r13_3) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_3) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rax4 = v1;
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>((*reinterpret_cast<int32_t*>(&rax4) + *reinterpret_cast<int32_t*>(&r13_3)) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi5) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi5) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi6 = v7;
                fun_426();
            }
            *rdi5 = *rsi6;
            rdi5 = v8;
            rsi6 = reinterpret_cast<int32_t*>(0x442);
            fun_449();
            ++r13_3;
        } while (r13_3 != 0x4b0);
        ++rbp2;
    } while (rbp2 != 0x3e8);
    *reinterpret_cast<int32_t*>(&rbp9) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp9) + 4) = reinterpret_cast<int32_t>(fputc);
    fun_480(v10, 0x468, 0x46f, rcx11);
    rsi12 = reinterpret_cast<int32_t*>(0x487);
    rdi13 = v10;
    fun_498();
    do {
        v14 = rbp9 * 0x3e8;
        *reinterpret_cast<int32_t*>(&r13_15) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_15) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rax16 = v14;
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>((*reinterpret_cast<int32_t*>(&rax16) + *reinterpret_cast<int32_t*>(&r13_15)) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi13) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi13) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi12 = v17;
                fun_4d6();
            }
            *rdi13 = *rsi12;
            rdi13 = v18;
            rsi12 = reinterpret_cast<int32_t*>(0x4f2);
            fun_4f9();
            ++r13_15;
        } while (r13_15 != 0x4b0);
        ++rbp9;
    } while (rbp9 != 0x3e8);
    fun_52b(v19, 0x518, 0x51f, rcx20);
    fun_2b5(rbx21, 0x518, 0x51f, rcx22);
    fun_2bd(r14_23, 0x518, 0x51f, rcx24);
    fun_2c5(r15_25, 0x518, 0x51f, rcx26);
    fun_2cd(r12_27, 0x518, 0x51f, rcx28);
    goto v29;
}

void fun_2cd(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int64_t v5;

    goto v5;
}

void fputc() {
}

void fun_22();

void fun_19() {
    unsigned char* rax1;
    unsigned char* rax2;
    unsigned char al3;
    signed char* rax4;
    signed char* rax5;
    signed char al6;

    *rax1 = reinterpret_cast<unsigned char>(*rax2 | al3);
    *rax4 = reinterpret_cast<signed char>(*rax5 + al6);
    fun_22();
}

void fun_32() {
    signed char* rax1;
    signed char* rax2;
    signed char al3;

    *rax1 = reinterpret_cast<signed char>(*rax2 + al3);
}

unsigned char g82 = 0xf2;

void fun_7c(int32_t* rdi, int32_t* rsi) {
    unsigned char tmp8_3;
    signed char al4;
    uint1_t cf5;

    tmp8_3 = reinterpret_cast<unsigned char>(reinterpret_cast<unsigned char>(g82 + al4) + cf5);
    g82 = tmp8_3;
    *rdi = *rsi;
}

void fun_92() {
    __asm__("cvtpi2ps xmm2, mm1");
}

void fun_f0() {
}

struct s0 {
    int32_t f0;
    int32_t f4;
};

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

struct s8 {
    int32_t f0;
    int32_t f4;
};

struct s9 {
    int32_t f0;
    int32_t f4;
};

int64_t* g2e5 = reinterpret_cast<int64_t*>(0x3d8d48288b4c);

void fun_f2(void* rdi, struct s0* rsi) {
    struct s1* rdi3;
    void* r15_4;
    struct s2* rdi5;
    struct s3* rsi6;
    int64_t rcx7;
    struct s4* rdi8;
    struct s5* rsi9;
    int32_t* rdi10;
    int32_t* rsi11;
    int64_t rcx12;
    struct s6* rdi13;
    struct s6* rsi14;
    int64_t rcx15;
    int64_t rdx16;
    struct s7* rsi17;
    int32_t* r15_18;
    int32_t* rsi19;
    int32_t* r15_20;
    int64_t rcx21;
    int64_t rdx22;
    int64_t rsi23;
    struct s8* rdi24;
    int32_t* rbx25;
    struct s9* rsi26;
    int32_t* r15_27;
    int64_t rcx28;
    int64_t rdx29;
    int32_t* rdi30;
    void* rdi31;
    struct s6* rsi32;
    void* r14_33;
    int64_t rax34;
    int32_t ebp35;
    signed char** r13_36;
    int64_t* rax37;
    int64_t rcx38;
    int64_t r15_39;

    __asm__("divsd xmm3, xmm0");
    rdi3 = reinterpret_cast<struct s1*>(reinterpret_cast<int64_t>(rdi) + reinterpret_cast<int64_t>(r15_4));
    rdi3->f0 = rsi->f0;
    rdi5 = reinterpret_cast<struct s2*>(&rdi3->f4);
    rsi6 = reinterpret_cast<struct s3*>(&rsi->f4);
    if (!reinterpret_cast<int1_t>(rsi6 == 0x4b0)) 
        goto 0xa0;
    if (rcx7 + 1 == 0x3e8) {
        rdi5->f0 = rsi6->f0;
        rdi8 = reinterpret_cast<struct s4*>(&rdi5->f4);
        rsi9 = reinterpret_cast<struct s5*>(&rsi6->f4);
        rdi8->f0 = rsi9->f0;
        rdi10 = &rdi8->f4;
        rsi11 = &rsi9->f4;
        do {
            *reinterpret_cast<int32_t*>(&rcx12) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx12) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                *rdi10 = *rsi11;
                rdi13 = reinterpret_cast<struct s6*>(rdi10 + 1);
                rsi14 = reinterpret_cast<struct s6*>(rsi11 + 1);
                rdi13->f0 = rsi14->f0;
                rdi10 = &rdi13->f4;
                rsi11 = &rsi14->f4;
                ++rcx12;
            } while (rcx12 != 0x4b0);
            *reinterpret_cast<int32_t*>(&rcx15) = 1;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx15) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                rdx16 = rcx15 - 1;
                *reinterpret_cast<int32_t*>(&rsi17) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi17) + 4) = reinterpret_cast<int32_t>(fputc);
                do {
                    r15_18[rcx15 * 0x960] = rsi17->f0;
                    rsi19 = &rsi17->f4;
                    __asm__("subsd xmm2, [rdi+rsi*8]");
                    __asm__("mulsd xmm2, xmm0");
                    __asm__("addsd xmm2, [r8+rsi*8]");
                    r15_20[rdx16 * 0x960] = *rsi19;
                    rsi17 = reinterpret_cast<struct s7*>(reinterpret_cast<int64_t>(rsi19 + 1) + 1);
                } while (!reinterpret_cast<int1_t>(rsi17 == 0x4b0));
                ++rcx15;
            } while (rcx15 != 0x3e8);
            *reinterpret_cast<int32_t*>(&rcx21) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx21) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                *reinterpret_cast<int32_t*>(&rdx22) = 1;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx22) + 4) = reinterpret_cast<int32_t>(fputc);
                do {
                    rsi23 = rcx21 * 0x2580;
                    rdi24 = reinterpret_cast<struct s8*>(reinterpret_cast<int64_t>(rbx25) + rsi23);
                    rsi26 = reinterpret_cast<struct s9*>(rsi23 + reinterpret_cast<int64_t>(r15_27));
                    rdi24->f0 = rsi26->f0;
                    __asm__("subsd xmm2, [rsi+rdx*8-0x8]");
                    __asm__("mulsd xmm2, xmm0");
                    __asm__("addsd xmm2, [rdi+rdx*8]");
                    rdi24->f4 = rsi26->f4;
                    ++rdx22;
                } while (rdx22 != 0x4b0);
                ++rcx21;
            } while (rcx21 != 0x3e8);
            *reinterpret_cast<int32_t*>(&rcx28) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx28) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                rdx29 = rcx28 + 1;
                *reinterpret_cast<int32_t*>(&rsi11) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi11) + 4) = reinterpret_cast<int32_t>(fputc);
                do {
                    rdi30 = reinterpret_cast<int32_t*>(rcx28 * 0x2580);
                    *rdi30 = *rsi11;
                    rdi31 = reinterpret_cast<void*>(rdi30 + 1);
                    rsi32 = reinterpret_cast<struct s6*>(rsi11 + 1);
                    __asm__("subsd xmm2, [r8+rsi*8]");
                    __asm__("addsd xmm2, [r8+rsi*8]");
                    __asm__("subsd xmm2, [rdi+rsi*8]");
                    __asm__("mulsd xmm2, xmm1");
                    __asm__("addsd xmm2, [r8+rsi*8]");
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rdi31) + reinterpret_cast<int64_t>(r14_33)) = rsi32->f0;
                    rdi10 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi32->f4) + 1);
                    rsi11 = rdi10;
                } while (!reinterpret_cast<int1_t>(rdi10 == 0x4af));
                rcx28 = rdx29;
            } while (rdx29 != 0x3e7);
            ++rax34;
        } while (rax34 != 0x1f4);
        if (ebp35 < 43) 
            goto 0x2ad;
        if (**r13_36 != fputc) 
            goto "???";
        rax37 = g2e5;
        rcx38 = *rax37;
        fun_301(0x2ef, 22, 1, rcx38, r15_39 + reinterpret_cast<int64_t>(rdi31));
    }
}

