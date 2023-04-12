
void fun_899(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx);

void fun_8a1(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx);

void fun_8a9(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx);

void fun_891(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int64_t r14_5;
    int64_t r15_6;
    int64_t r12_7;
    int64_t v8;

    fun_899(r14_5, rsi, rdx, rcx);
    fun_8a1(r15_6, rsi, rdx, rcx);
    fun_8a9(r12_7, rsi, rdx, rcx);
    goto v8;
}

void fun_959();

void fputc(int32_t edi, int64_t rsi);

void fun_990(int32_t* rdi, int64_t rsi, int64_t rdx);

void fun_9a9(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx);

void fun_9c1();

void fun_a06();

void fun_a29();

void fun_a60(int32_t* rdi, int64_t rsi, int64_t rdx, int32_t* rcx);

void fun_a78();

void fun_ab6();

void fun_ad9();

void fun_b0b(int32_t* rdi, int64_t rsi, int64_t rdx, int32_t* rcx);

void fun_936() {
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
        rsi2 = reinterpret_cast<int32_t*>(0x952);
        fun_959();
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
        fun_936();
    }
    *reinterpret_cast<int32_t*>(&rbp9) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp9) + 4) = reinterpret_cast<int32_t>(fputc);
    fun_990(v10, 0x978, 0x97f);
    rcx11 = v10;
    fun_9a9(0x997, 22, 1, rcx11);
    rsi12 = reinterpret_cast<int32_t*>(0x9b0);
    rdi13 = v10;
    fun_9c1();
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
                fun_a06();
            }
            *rdi13 = *rsi12;
            rdi13 = v18;
            rsi12 = reinterpret_cast<int32_t*>(0xa22);
            fun_a29();
            ++r13_15;
        } while (r13_15 != 0x4b0);
        ++rbp9;
    } while (rbp9 != 0x3e8);
    *reinterpret_cast<int32_t*>(&rbp19) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp19) + 4) = reinterpret_cast<int32_t>(fputc);
    fun_a60(v20, 0xa48, 0xa4f, rcx11);
    rsi21 = reinterpret_cast<int32_t*>(0xa67);
    rdi22 = v20;
    fun_a78();
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
                fun_ab6();
            }
            *rdi22 = *rsi21;
            rdi22 = v27;
            rsi21 = reinterpret_cast<int32_t*>(0xad2);
            fun_ad9();
            ++r13_24;
        } while (r13_24 != 0x4b0);
        ++rbp19;
    } while (rbp19 != 0x3e8);
    fun_b0b(v28, 0xaf8, 0xaff, rcx11);
    fun_891(rbx29, 0xaf8, 0xaff, rcx11);
    fun_899(r14_30, 0xaf8, 0xaff, rcx11);
    fun_8a1(r15_31, 0xaf8, 0xaff, rcx11);
    fun_8a9(r12_32, 0xaf8, 0xaff, rcx11);
    goto v33;
}

void fun_959() {
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
            fun_936();
        }
        *rdi5 = *rsi6;
        rdi5 = v8;
        rsi6 = reinterpret_cast<int32_t*>(0x952);
        fun_959();
    }
    *reinterpret_cast<int32_t*>(&rbp9) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp9) + 4) = reinterpret_cast<int32_t>(fputc);
    fun_990(v10, 0x978, 0x97f);
    rcx11 = v10;
    fun_9a9(0x997, 22, 1, rcx11);
    rsi12 = reinterpret_cast<int32_t*>(0x9b0);
    rdi13 = v10;
    fun_9c1();
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
                fun_a06();
            }
            *rdi13 = *rsi12;
            rdi13 = v18;
            rsi12 = reinterpret_cast<int32_t*>(0xa22);
            fun_a29();
            ++r13_15;
        } while (r13_15 != 0x4b0);
        ++rbp9;
    } while (rbp9 != 0x3e8);
    *reinterpret_cast<int32_t*>(&rbp19) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp19) + 4) = reinterpret_cast<int32_t>(fputc);
    fun_a60(v20, 0xa48, 0xa4f, rcx11);
    rsi21 = reinterpret_cast<int32_t*>(0xa67);
    rdi22 = v20;
    fun_a78();
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
                fun_ab6();
            }
            *rdi22 = *rsi21;
            rdi22 = v27;
            rsi21 = reinterpret_cast<int32_t*>(0xad2);
            fun_ad9();
            ++r13_24;
        } while (r13_24 != 0x4b0);
        ++rbp19;
    } while (rbp19 != 0x3e8);
    fun_b0b(v28, 0xaf8, 0xaff, rcx11);
    fun_891(rbx29, 0xaf8, 0xaff, rcx11);
    fun_899(r14_30, 0xaf8, 0xaff, rcx11);
    fun_8a1(r15_31, 0xaf8, 0xaff, rcx11);
    fun_8a9(r12_32, 0xaf8, 0xaff, rcx11);
    goto v33;
}

void fun_990(int32_t* rdi, int64_t rsi, int64_t rdx) {
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
    fun_9a9(0x997, 22, 1, rcx4);
    rsi6 = reinterpret_cast<int32_t*>(0x9b0);
    rdi7 = r13_8;
    fun_9c1();
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
                fun_a06();
            }
            *rdi7 = *rsi6;
            rdi7 = v14;
            rsi6 = reinterpret_cast<int32_t*>(0xa22);
            fun_a29();
            ++r13_11;
        } while (r13_11 != 0x4b0);
        ++rbp10;
    } while (rbp10 != 0x3e8);
    *reinterpret_cast<int32_t*>(&rbp15) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp15) + 4) = reinterpret_cast<int32_t>(fputc);
    fun_a60(v16, 0xa48, 0xa4f, rcx4);
    rsi17 = reinterpret_cast<int32_t*>(0xa67);
    rdi18 = v16;
    fun_a78();
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
                fun_ab6();
            }
            *rdi18 = *rsi17;
            rdi18 = v23;
            rsi17 = reinterpret_cast<int32_t*>(0xad2);
            fun_ad9();
            ++r13_20;
        } while (r13_20 != 0x4b0);
        ++rbp15;
    } while (rbp15 != 0x3e8);
    fun_b0b(v24, 0xaf8, 0xaff, rcx4);
    fun_891(rbx25, 0xaf8, 0xaff, rcx4);
    fun_899(r14_26, 0xaf8, 0xaff, rcx4);
    fun_8a1(r15_27, 0xaf8, 0xaff, rcx4);
    fun_8a9(r12_28, 0xaf8, 0xaff, rcx4);
    goto v29;
}

void fun_a06() {
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
        rsi2 = reinterpret_cast<int32_t*>(0xa22);
        fun_a29();
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
        fun_a06();
    }
    *reinterpret_cast<int32_t*>(&rbp9) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp9) + 4) = reinterpret_cast<int32_t>(fputc);
    fun_a60(v10, 0xa48, 0xa4f, rcx11);
    rsi12 = reinterpret_cast<int32_t*>(0xa67);
    rdi13 = v10;
    fun_a78();
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
                fun_ab6();
            }
            *rdi13 = *rsi12;
            rdi13 = v18;
            rsi12 = reinterpret_cast<int32_t*>(0xad2);
            fun_ad9();
            ++r13_15;
        } while (r13_15 != 0x4b0);
        ++rbp9;
    } while (rbp9 != 0x3e8);
    fun_b0b(v19, 0xaf8, 0xaff, rcx20);
    fun_891(rbx21, 0xaf8, 0xaff, rcx22);
    fun_899(r14_23, 0xaf8, 0xaff, rcx24);
    fun_8a1(r15_25, 0xaf8, 0xaff, rcx26);
    fun_8a9(r12_27, 0xaf8, 0xaff, rcx28);
    goto v29;
}

void fun_a29() {
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
            fun_a06();
        }
        *rdi5 = *rsi6;
        rdi5 = v8;
        rsi6 = reinterpret_cast<int32_t*>(0xa22);
        fun_a29();
    }
    *reinterpret_cast<int32_t*>(&rbp9) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp9) + 4) = reinterpret_cast<int32_t>(fputc);
    fun_a60(v10, 0xa48, 0xa4f, rcx11);
    rsi12 = reinterpret_cast<int32_t*>(0xa67);
    rdi13 = v10;
    fun_a78();
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
                fun_ab6();
            }
            *rdi13 = *rsi12;
            rdi13 = v18;
            rsi12 = reinterpret_cast<int32_t*>(0xad2);
            fun_ad9();
            ++r13_15;
        } while (r13_15 != 0x4b0);
        ++rbp9;
    } while (rbp9 != 0x3e8);
    fun_b0b(v19, 0xaf8, 0xaff, rcx20);
    fun_891(rbx21, 0xaf8, 0xaff, rcx22);
    fun_899(r14_23, 0xaf8, 0xaff, rcx24);
    fun_8a1(r15_25, 0xaf8, 0xaff, rcx26);
    fun_8a9(r12_27, 0xaf8, 0xaff, rcx28);
    goto v29;
}

void fun_a60(int32_t* rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
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

    rsi5 = reinterpret_cast<int32_t*>(0xa67);
    rdi6 = r13_7;
    fun_a78();
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
                fun_ab6();
            }
            *rdi6 = *rsi5;
            rdi6 = v13;
            rsi5 = reinterpret_cast<int32_t*>(0xad2);
            fun_ad9();
            ++r13_10;
        } while (r13_10 != 0x4b0);
        ++rbp9;
    } while (rbp9 != 0x3e8);
    fun_b0b(v14, 0xaf8, 0xaff, rcx);
    fun_891(rbx15, 0xaf8, 0xaff, rcx);
    fun_899(r14_16, 0xaf8, 0xaff, rcx);
    fun_8a1(r15_17, 0xaf8, 0xaff, rcx);
    fun_8a9(r12_18, 0xaf8, 0xaff, rcx);
    goto v19;
}

void fun_ab6() {
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
        rsi2 = reinterpret_cast<int32_t*>(0xad2);
        fun_ad9();
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
        fun_ab6();
    }
    fun_b0b(v9, 0xaf8, 0xaff, rcx10);
    fun_891(rbx11, 0xaf8, 0xaff, rcx12);
    fun_899(r14_13, 0xaf8, 0xaff, rcx14);
    fun_8a1(r15_15, 0xaf8, 0xaff, rcx16);
    fun_8a9(r12_17, 0xaf8, 0xaff, rcx18);
    goto v19;
}

void fun_ad9() {
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
            fun_ab6();
        }
        *rdi5 = *rsi6;
        rdi5 = v8;
        rsi6 = reinterpret_cast<int32_t*>(0xad2);
        fun_ad9();
    }
    fun_b0b(v9, 0xaf8, 0xaff, rcx10);
    fun_891(rbx11, 0xaf8, 0xaff, rcx12);
    fun_899(r14_13, 0xaf8, 0xaff, rcx14);
    fun_8a1(r15_15, 0xaf8, 0xaff, rcx16);
    fun_8a9(r12_17, 0xaf8, 0xaff, rcx18);
    goto v19;
}

void fun_b0b(int32_t* rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int64_t rbx5;
    int64_t r14_6;
    int64_t r15_7;
    int64_t r12_8;
    int64_t v9;

    fun_891(rbx5, rsi, rdx, rcx);
    fun_899(r14_6, rsi, rdx, rcx);
    fun_8a1(r15_7, rsi, rdx, rcx);
    fun_8a9(r12_8, rsi, rdx, rcx);
    goto v9;
}

void fun_8fc();

void fun_8dd(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx) {
    int32_t* rsi5;
    int64_t rbp6;
    int32_t* v7;
    int32_t* r13_8;
    int32_t* rdi9;
    int32_t* r13_10;
    int64_t v11;
    int64_t r13_12;
    int64_t rax13;
    int64_t rbp14;
    int32_t* rcx15;
    int32_t* rsi16;
    int32_t* rdi17;
    int64_t v18;
    int64_t r13_19;
    int64_t rax20;
    int64_t rbp21;
    int32_t* rsi22;
    int32_t* rdi23;
    int64_t v24;
    int64_t r13_25;
    int64_t rax26;
    int64_t rbx27;
    int64_t r14_28;
    int64_t r15_29;
    int64_t r12_30;
    int64_t v31;

    rsi5 = reinterpret_cast<int32_t*>(0x8e4);
    *reinterpret_cast<int32_t*>(&rbp6) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp6) + 4) = reinterpret_cast<int32_t>(fputc);
    v7 = r13_8;
    rdi9 = r13_10;
    fun_8fc();
    do {
        v11 = rbp6 * 0x3e8;
        *reinterpret_cast<int32_t*>(&r13_12) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_12) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rax13 = v11;
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>((*reinterpret_cast<int32_t*>(&rax13) + *reinterpret_cast<int32_t*>(&r13_12)) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi9) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi9) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi5 = v7;
                fun_936();
            }
            *rdi9 = *rsi5;
            rdi9 = v7;
            rsi5 = reinterpret_cast<int32_t*>(0x952);
            fun_959();
            ++r13_12;
        } while (r13_12 != 0x4b0);
        ++rbp6;
    } while (rbp6 != 0x3e8);
    *reinterpret_cast<int32_t*>(&rbp14) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp14) + 4) = reinterpret_cast<int32_t>(fputc);
    fun_990(v7, 0x978, 0x97f);
    rcx15 = v7;
    fun_9a9(0x997, 22, 1, rcx15);
    rsi16 = reinterpret_cast<int32_t*>(0x9b0);
    rdi17 = v7;
    fun_9c1();
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
                rsi16 = v7;
                fun_a06();
            }
            *rdi17 = *rsi16;
            rdi17 = v7;
            rsi16 = reinterpret_cast<int32_t*>(0xa22);
            fun_a29();
            ++r13_19;
        } while (r13_19 != 0x4b0);
        ++rbp14;
    } while (rbp14 != 0x3e8);
    *reinterpret_cast<int32_t*>(&rbp21) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp21) + 4) = reinterpret_cast<int32_t>(fputc);
    fun_a60(v7, 0xa48, 0xa4f, rcx15);
    rsi22 = reinterpret_cast<int32_t*>(0xa67);
    rdi23 = v7;
    fun_a78();
    do {
        v24 = rbp21 * 0x3e8;
        *reinterpret_cast<int32_t*>(&r13_25) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_25) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rax26 = v24;
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>((*reinterpret_cast<int32_t*>(&rax26) + *reinterpret_cast<int32_t*>(&r13_25)) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi23) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi23) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi22 = v7;
                fun_ab6();
            }
            *rdi23 = *rsi22;
            rdi23 = v7;
            rsi22 = reinterpret_cast<int32_t*>(0xad2);
            fun_ad9();
            ++r13_25;
        } while (r13_25 != 0x4b0);
        ++rbp21;
    } while (rbp21 != 0x3e8);
    fun_b0b(v7, 0xaf8, 0xaff, rcx15);
    fun_891(rbx27, 0xaf8, 0xaff, rcx15);
    fun_899(r14_28, 0xaf8, 0xaff, rcx15);
    fun_8a1(r15_29, 0xaf8, 0xaff, rcx15);
    fun_8a9(r12_30, 0xaf8, 0xaff, rcx15);
    goto v31;
}

void fun_899(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int64_t r15_5;
    int64_t r12_6;
    int64_t v7;

    fun_8a1(r15_5, rsi, rdx, rcx);
    fun_8a9(r12_6, rsi, rdx, rcx);
    goto v7;
}

void fun_9a9(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
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

    rsi5 = reinterpret_cast<int32_t*>(0x9b0);
    rdi6 = r13_7;
    fun_9c1();
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
                fun_a06();
            }
            *rdi6 = *rsi5;
            rdi6 = v13;
            rsi5 = reinterpret_cast<int32_t*>(0xa22);
            fun_a29();
            ++r13_10;
        } while (r13_10 != 0x4b0);
        ++rbp9;
    } while (rbp9 != 0x3e8);
    *reinterpret_cast<int32_t*>(&rbp14) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp14) + 4) = reinterpret_cast<int32_t>(fputc);
    fun_a60(v15, 0xa48, 0xa4f, rcx);
    rsi16 = reinterpret_cast<int32_t*>(0xa67);
    rdi17 = v15;
    fun_a78();
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
                fun_ab6();
            }
            *rdi17 = *rsi16;
            rdi17 = v22;
            rsi16 = reinterpret_cast<int32_t*>(0xad2);
            fun_ad9();
            ++r13_19;
        } while (r13_19 != 0x4b0);
        ++rbp14;
    } while (rbp14 != 0x3e8);
    fun_b0b(v23, 0xaf8, 0xaff, rcx);
    fun_891(rbx24, 0xaf8, 0xaff, rcx);
    fun_899(r14_25, 0xaf8, 0xaff, rcx);
    fun_8a1(r15_26, 0xaf8, 0xaff, rcx);
    fun_8a9(r12_27, 0xaf8, 0xaff, rcx);
    goto v28;
}

void fun_a78() {
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
                fun_ab6();
            }
            *rdi5 = *rsi6;
            rdi5 = v8;
            rsi6 = reinterpret_cast<int32_t*>(0xad2);
            fun_ad9();
            ++r13_3;
        } while (r13_3 != 0x4b0);
        ++rbp2;
    } while (rbp2 != 0x3e8);
    fun_b0b(v9, 0xaf8, 0xaff, rcx10);
    fun_891(rbx11, 0xaf8, 0xaff, rcx12);
    fun_899(r14_13, 0xaf8, 0xaff, rcx14);
    fun_8a1(r15_15, 0xaf8, 0xaff, rcx16);
    fun_8a9(r12_17, 0xaf8, 0xaff, rcx18);
    goto v19;
}

void fun_8fc() {
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
                fun_936();
            }
            *rdi5 = *rsi6;
            rdi5 = v8;
            rsi6 = reinterpret_cast<int32_t*>(0x952);
            fun_959();
            ++r13_3;
        } while (r13_3 != 0x4b0);
        ++rbp2;
    } while (rbp2 != 0x3e8);
    *reinterpret_cast<int32_t*>(&rbp9) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp9) + 4) = reinterpret_cast<int32_t>(fputc);
    fun_990(v10, 0x978, 0x97f);
    rcx11 = v10;
    fun_9a9(0x997, 22, 1, rcx11);
    rsi12 = reinterpret_cast<int32_t*>(0x9b0);
    rdi13 = v10;
    fun_9c1();
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
                fun_a06();
            }
            *rdi13 = *rsi12;
            rdi13 = v18;
            rsi12 = reinterpret_cast<int32_t*>(0xa22);
            fun_a29();
            ++r13_15;
        } while (r13_15 != 0x4b0);
        ++rbp9;
    } while (rbp9 != 0x3e8);
    *reinterpret_cast<int32_t*>(&rbp19) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp19) + 4) = reinterpret_cast<int32_t>(fputc);
    fun_a60(v20, 0xa48, 0xa4f, rcx11);
    rsi21 = reinterpret_cast<int32_t*>(0xa67);
    rdi22 = v20;
    fun_a78();
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
                fun_ab6();
            }
            *rdi22 = *rsi21;
            rdi22 = v27;
            rsi21 = reinterpret_cast<int32_t*>(0xad2);
            fun_ad9();
            ++r13_24;
        } while (r13_24 != 0x4b0);
        ++rbp19;
    } while (rbp19 != 0x3e8);
    fun_b0b(v28, 0xaf8, 0xaff, rcx11);
    fun_891(rbx29, 0xaf8, 0xaff, rcx11);
    fun_899(r14_30, 0xaf8, 0xaff, rcx11);
    fun_8a1(r15_31, 0xaf8, 0xaff, rcx11);
    fun_8a9(r12_32, 0xaf8, 0xaff, rcx11);
    goto v33;
}

void fun_8a1(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int64_t r12_5;
    int64_t v6;

    fun_8a9(r12_5, rsi, rdx, rcx);
    goto v6;
}

void fun_9c1() {
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
                fun_a06();
            }
            *rdi5 = *rsi6;
            rdi5 = v8;
            rsi6 = reinterpret_cast<int32_t*>(0xa22);
            fun_a29();
            ++r13_3;
        } while (r13_3 != 0x4b0);
        ++rbp2;
    } while (rbp2 != 0x3e8);
    *reinterpret_cast<int32_t*>(&rbp9) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp9) + 4) = reinterpret_cast<int32_t>(fputc);
    fun_a60(v10, 0xa48, 0xa4f, rcx11);
    rsi12 = reinterpret_cast<int32_t*>(0xa67);
    rdi13 = v10;
    fun_a78();
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
                fun_ab6();
            }
            *rdi13 = *rsi12;
            rdi13 = v18;
            rsi12 = reinterpret_cast<int32_t*>(0xad2);
            fun_ad9();
            ++r13_15;
        } while (r13_15 != 0x4b0);
        ++rbp9;
    } while (rbp9 != 0x3e8);
    fun_b0b(v19, 0xaf8, 0xaff, rcx20);
    fun_891(rbx21, 0xaf8, 0xaff, rcx22);
    fun_899(r14_23, 0xaf8, 0xaff, rcx24);
    fun_8a1(r15_25, 0xaf8, 0xaff, rcx26);
    fun_8a9(r12_27, 0xaf8, 0xaff, rcx28);
    goto v29;
}

void fun_8a9(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx) {
    int64_t v5;

    goto v5;
}

void fputc(int32_t edi, int64_t rsi) {
}

void fun_7c() {
    __asm__("movdqa xmm4, [rip+0x0]");
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

struct s10 {
    int32_t f0;
    int32_t f4;
};

struct s11 {
    int32_t f0;
    int32_t f4;
};

struct s12 {
    int32_t f0;
    int32_t f4;
};

struct s13 {
    int32_t f0;
    int32_t f4;
};

struct s14 {
    int32_t f0;
    int32_t f4;
};

struct s15 {
    int32_t f0;
    int32_t f4;
};

struct s16 {
    int32_t f0;
    int32_t f4;
};

struct s17 {
    int32_t f0;
    int32_t f4;
};

struct s18 {
    int32_t f0;
    int32_t f4;
};

struct s19 {
    int32_t f0;
    int32_t f4;
};

struct s20 {
    int32_t f0;
    int32_t f4;
};

struct s21 {
    int32_t f0;
    int32_t f4;
};

struct s22 {
    int32_t f0;
    int32_t f4;
};

struct s23 {
    int32_t f0;
    int32_t f4;
};

struct s24 {
    int32_t f0;
    int32_t f4;
};

struct s25 {
    int32_t f0;
    int32_t f4;
};

struct s26 {
    int32_t f0;
    int32_t f4;
};

struct s27 {
    int32_t f0;
    int32_t f4;
};

struct s28 {
    int32_t f0;
    int32_t f4;
};

struct s29 {
    int32_t f0;
    int32_t f4;
};

struct s30 {
    int32_t f0;
    int32_t f4;
};

struct s31 {
    int32_t f0;
    int32_t f4;
};

struct s32 {
    int32_t f0;
    int32_t f4;
};

struct s33 {
    int32_t f0;
    int32_t f4;
};

struct s34 {
    int32_t f0;
    int32_t f4;
};

struct s35 {
    int32_t f0;
    int32_t f4;
};

struct s36 {
    int32_t f0;
    int32_t f4;
};

int64_t* g8c1 = reinterpret_cast<int64_t*>(0x3d8d48288b4c);

void fun_f0() {
    void* rcx1;
    int64_t rax2;
    int64_t rdx3;
    int64_t r15_4;
    struct s0* rsi5;
    int32_t* rbx6;
    int64_t rcx7;
    int64_t r14_8;
    struct s1* rdi9;
    struct s1* r8_10;
    struct s2* rdi11;
    struct s3* rsi12;
    struct s4* rsi13;
    uint64_t rax14;
    int64_t r14_15;
    int64_t rcx16;
    struct s2* rdi17;
    struct s3* rsi18;
    struct s5* rdi19;
    struct s4* rsi20;
    uint64_t r14_21;
    int64_t r12_22;
    int64_t r12_23;
    int64_t rdx24;
    int64_t rdx25;
    struct s6* rdi26;
    struct s7* rsi27;
    struct s8* rdi28;
    int32_t* rsi29;
    struct s9* rdi30;
    struct s10* rsi31;
    struct s11* rdi32;
    struct s12* rsi33;
    struct s13* rdi34;
    struct s14* rsi35;
    struct s15* rdi36;
    struct s16* rsi37;
    struct s17* rdi38;
    struct s18* rsi39;
    struct s19* rdi40;
    struct s20* rsi41;
    struct s21* rdi42;
    struct s22* rsi43;
    void* rdx44;
    struct s23* rsi45;
    struct s24* rdi46;
    int64_t r8_47;
    int64_t r14_48;
    int64_t r15_49;
    int64_t r8_50;
    int64_t r9_51;
    int64_t r15_52;
    int64_t r14_53;
    struct s25* rdi54;
    struct s26* rsi55;
    struct s27* rdi56;
    struct s28* rsi57;
    struct s29* rdi58;
    struct s30* rsi59;
    int64_t rdx60;
    int64_t rsi61;
    struct s31* rdi62;
    int32_t* r15_63;
    int64_t rbx64;
    int64_t r15_65;
    int64_t r9_66;
    int64_t r8_67;
    int64_t rbx68;
    struct s32* rsi69;
    int32_t* rbx70;
    struct s33* rdi71;
    struct s34* rsi72;
    int64_t r8_73;
    struct s35* rdi74;
    struct s36* rsi75;
    int64_t rdx76;
    void* rsi77;
    int32_t* r14_78;
    struct s5* r13_79;
    void* r15_80;
    int32_t* r15_81;
    void* rbx82;
    int32_t* rbx83;
    int64_t r10_84;
    int64_t r9_85;
    void* r14_86;
    int64_t r9_87;
    int32_t v88;
    signed char** v89;
    int64_t* rax90;
    int64_t rcx91;

    __asm__("movups xmm2, [rip+0x0]");
    __asm__("movdqa xmm3, [rip+0x0]");
    __asm__("movdqa xmm4, [rip+0x0]");
    __asm__("pcmpeqd xmm5, xmm5");
    __asm__("movapd xmm6, [rip+0x0]");
    __asm__("movapd xmm7, [rip+0x0]");
    __asm__("movdqa xmm8, [rip+0x0]");
    __asm__("movdqa xmm9, [rip+0x0]");
    do {
        __asm__("xorps xmm10, xmm10");
        __asm__("cvtsi2sd xmm10, eax");
        rcx1 = reinterpret_cast<void*>(rax2 * 0x2580);
        rdx3 = reinterpret_cast<int64_t>(rcx1) + r15_4;
        rsi5 = reinterpret_cast<struct s0*>(reinterpret_cast<int64_t>(rcx1) + reinterpret_cast<int64_t>(rbx6));
        rcx7 = reinterpret_cast<int64_t>(rcx1) + r14_8;
        if (rcx7 - reinterpret_cast<uint64_t>(rsi5) < 16 || rdx3 - reinterpret_cast<uint64_t>(rsi5) < 16) {
            *reinterpret_cast<int32_t*>(&rdi9) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi9) + 4) = reinterpret_cast<int32_t>(fputc);
            goto addr_240_4;
        }
        *reinterpret_cast<int32_t*>(&rdi9) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi9) + 4) = reinterpret_cast<int32_t>(fputc);
        if (reinterpret_cast<uint64_t>(rdx3 - rcx7) < 16) {
            do {
                addr_240_4:
                r8_10 = reinterpret_cast<struct s1*>(reinterpret_cast<int64_t>(rdi9) + 1);
                __asm__("xorps xmm11, xmm11");
                __asm__("cvtsi2sd xmm11, r8d");
                __asm__("mulsd xmm11, xmm10");
                __asm__("divsd xmm11, xmm1");
                __asm__("xorps xmm12, xmm12");
                __asm__("cvtsi2sd xmm12, r9d");
                rdi9->f0 = rsi5->f0;
                rdi11 = reinterpret_cast<struct s2*>(&rdi9->f4);
                rsi12 = reinterpret_cast<struct s3*>(&rsi5->f4);
                __asm__("mulsd xmm12, xmm10");
                __asm__("divsd xmm12, xmm2");
                rdi11->f0 = rsi12->f0;
                rsi13 = reinterpret_cast<struct s4*>(&rsi12->f4);
                __asm__("xorps xmm11, xmm11");
                __asm__("cvtsi2sd xmm11, r9d");
                __asm__("mulsd xmm11, xmm10");
                __asm__("divsd xmm11, xmm1");
                rdi11->f4 = rsi13->f0;
                rsi5 = reinterpret_cast<struct s0*>(&rsi13->f4);
                rdi9 = r8_10;
            } while (!reinterpret_cast<int1_t>(r8_10 == 0x4b0));
        } else {
            __asm__("unpcklpd xmm10, xmm10");
            *reinterpret_cast<int32_t*>(&rdi9) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi9) + 4) = reinterpret_cast<int32_t>(fputc);
            __asm__("movdqa xmm11, xmm4");
            __asm__("movdqa xmm13, xmm3");
            __asm__("movdqa xmm12, xmm3");
            do {
                __asm__("pshufd xmm14, xmm11, 0xe8");
                __asm__("psubd xmm14, xmm5");
                __asm__("cvtdq2pd xmm14, xmm14");
                __asm__("mulpd xmm14, xmm10");
                __asm__("divpd xmm14, xmm6");
                __asm__("movupd [rsi+rdi*8], xmm14");
                __asm__("paddd xmm12, xmm0");
                __asm__("cvtdq2pd xmm14, xmm12");
                __asm__("mulpd xmm14, xmm10");
                __asm__("divpd xmm14, xmm7");
                __asm__("paddd xmm13, xmm8");
                __asm__("cvtdq2pd xmm13, xmm13");
                __asm__("movupd [rcx+rdi*8], xmm14");
                __asm__("mulpd xmm13, xmm10");
                __asm__("divpd xmm13, xmm6");
                __asm__("movupd [rdx+rdi*8], xmm13");
                rdi9 = reinterpret_cast<struct s1*>(reinterpret_cast<int64_t>(rdi9) + 2);
                __asm__("paddq xmm11, xmm9");
                __asm__("movdqa xmm13, xmm12");
            } while (!reinterpret_cast<int1_t>(rdi9 == 0x4b0));
            continue;
        }
        ++rax2;
    } while (rax2 != 0x3e8);
    rax14 = reinterpret_cast<uint64_t>(r14_15 + 0x2580);
    *reinterpret_cast<int32_t*>(&rcx16) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx16) + 4) = reinterpret_cast<int32_t>(fputc);
    rdi9->f0 = rsi5->f0;
    rdi17 = reinterpret_cast<struct s2*>(&rdi9->f4);
    rsi18 = reinterpret_cast<struct s3*>(&rsi5->f4);
    rdi17->f0 = rsi18->f0;
    rdi19 = reinterpret_cast<struct s5*>(&rdi17->f4);
    rsi20 = reinterpret_cast<struct s4*>(&rsi18->f4);
    __asm__("movapd xmm2, [rip+0x0]");
    __asm__("movapd xmm3, [rip+0x0]");
    do {
        if (r14_21 >= reinterpret_cast<uint64_t>(r12_22 + rcx16 * 8 + 8) || reinterpret_cast<uint64_t>(r12_23 + rcx16 * 8) >= rax14) {
            __asm__("movq xmm4, [r12+rcx*8]");
            __asm__("punpcklqdq xmm4, xmm4");
            *reinterpret_cast<int32_t*>(&rdx24) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx24) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("movdqu [r14+rdx*8], xmm4");
                __asm__("movdqu [r14+rdx*8+0x10], xmm4");
                __asm__("movdqu [r14+rdi], xmm4");
                __asm__("movdqu [r14+rdi+0x10], xmm4");
                __asm__("movdqu [r14+rdi], xmm4");
                __asm__("movdqu [r14+rdi+0x10], xmm4");
                __asm__("movdqu [r14+rsi], xmm4");
                __asm__("movdqu [r14+rsi+0x10], xmm4");
                rdx24 = rdx24 + 16;
            } while (rdx24 != 0x4b0);
        } else {
            *reinterpret_cast<int32_t*>(&rdx25) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx25) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                rdi19->f0 = rsi20->f0;
                rdi26 = reinterpret_cast<struct s6*>(&rdi19->f4);
                rsi27 = reinterpret_cast<struct s7*>(rdx25 * 8);
                rdi26->f0 = rsi27->f0;
                rdi28 = reinterpret_cast<struct s8*>(&rdi26->f4);
                rsi29 = &rsi27->f4;
                rdi28->f0 = *rsi29;
                rdi30 = reinterpret_cast<struct s9*>(&rdi28->f4);
                rsi31 = reinterpret_cast<struct s10*>(reinterpret_cast<uint64_t>(rsi29 + 1) | 8);
                rdi30->f0 = rsi31->f0;
                rdi32 = reinterpret_cast<struct s11*>(&rdi30->f4);
                rsi33 = reinterpret_cast<struct s12*>(&rsi31->f4);
                rdi32->f0 = rsi33->f0;
                rdi34 = reinterpret_cast<struct s13*>(&rdi32->f4);
                rsi35 = reinterpret_cast<struct s14*>(&rsi33->f4);
                rdi34->f0 = rsi35->f0;
                rdi36 = reinterpret_cast<struct s15*>(&rdi34->f4);
                rsi37 = reinterpret_cast<struct s16*>(&rsi35->f4);
                rdi36->f0 = rsi37->f0;
                rdi38 = reinterpret_cast<struct s17*>(&rdi36->f4);
                rsi39 = reinterpret_cast<struct s18*>(&rsi37->f4);
                rdi38->f0 = rsi39->f0;
                rdi40 = reinterpret_cast<struct s19*>(&rdi38->f4);
                rsi41 = reinterpret_cast<struct s20*>(&rsi39->f4);
                rdi40->f0 = rsi41->f0;
                rdi42 = reinterpret_cast<struct s21*>(&rdi40->f4);
                rsi43 = reinterpret_cast<struct s22*>(&rsi41->f4);
                rdi42->f0 = rsi43->f0;
                rdi19 = reinterpret_cast<struct s5*>(&rdi42->f4);
                rsi20 = reinterpret_cast<struct s4*>(&rsi43->f4);
                __asm__("movq xmm4, [r12+rcx*8]");
                __asm__("movq [r14+rdx*8+0x28], xmm4");
                rdx25 = rdx25 + 6;
            } while (rdx25 != 0x4b0);
        }
        *reinterpret_cast<int32_t*>(&rdx44) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx44) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rsi45) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi45) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rdi46 = reinterpret_cast<struct s24*>(reinterpret_cast<int64_t>(rdx44) - 1);
            r8_47 = reinterpret_cast<int64_t>(rsi45) * 0x2580;
            if (reinterpret_cast<uint64_t>(r8_47 + r14_48 + 0x2580) >= reinterpret_cast<uint64_t>(r15_49 + r8_47 + 0x4b00)) {
                *reinterpret_cast<int32_t*>(&r8_50) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_50) + 4) = reinterpret_cast<int32_t>(fputc);
                goto addr_4e0_66;
            }
            *reinterpret_cast<int32_t*>(&r8_50) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_50) + 4) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(&r9_51) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_51) + 4) = reinterpret_cast<int32_t>(fputc);
            if (reinterpret_cast<uint64_t>(r15_52 + r8_47) >= reinterpret_cast<uint64_t>(r14_53 + r8_47 + 0x4b00)) {
                do {
                    addr_4e0_66:
                    __asm__("movupd xmm4, [r10+r8*8]");
                    __asm__("movupd xmm5, [r10+r8*8+0x10]");
                    __asm__("movupd xmm6, [r9+r8*8]");
                    __asm__("movupd xmm7, [r9+r8*8+0x10]");
                    __asm__("movupd xmm8, [r9+r8*8]");
                    __asm__("subpd xmm6, xmm8");
                    __asm__("movupd xmm8, [r9+r8*8+0x10]");
                    __asm__("subpd xmm7, xmm8");
                    __asm__("mulpd xmm6, xmm3");
                    __asm__("addpd xmm6, xmm4");
                    __asm__("mulpd xmm7, xmm3");
                    __asm__("addpd xmm7, xmm5");
                    __asm__("movupd [r10+r8*8], xmm6");
                    __asm__("movupd [r10+r8*8+0x10], xmm7");
                    r8_50 = r8_50 + 4;
                } while (r8_50 != 0x4b0);
            } else {
                do {
                    rdi46->f0 = rsi45->f0;
                    rdi54 = reinterpret_cast<struct s25*>(&rdi46->f4);
                    rsi55 = reinterpret_cast<struct s26*>(&rsi45->f4);
                    __asm__("subsd xmm4, [r13+r9*8+0x0]");
                    __asm__("mulsd xmm4, xmm0");
                    __asm__("addsd xmm4, [r10+r9*8]");
                    rdi54->f0 = rsi55->f0;
                    rdi56 = reinterpret_cast<struct s27*>(&rdi54->f4);
                    rsi57 = reinterpret_cast<struct s28*>(&rsi55->f4);
                    rdi56->f0 = rsi57->f0;
                    rdi58 = reinterpret_cast<struct s29*>(&rdi56->f4);
                    rsi59 = reinterpret_cast<struct s30*>(&rsi57->f4);
                    __asm__("subsd xmm4, [r11+r13]");
                    __asm__("mulsd xmm4, xmm0");
                    __asm__("addsd xmm4, [r11+r10]");
                    rdi58->f0 = rsi59->f0;
                    rdi46 = reinterpret_cast<struct s24*>(&rdi58->f4);
                    rsi45 = reinterpret_cast<struct s23*>(&rsi59->f4);
                    r9_51 = r9_51 + 2;
                } while (r9_51 != 0x4b0);
                continue;
            }
            rdx44 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rdx44) + 1);
            rsi45 = reinterpret_cast<struct s23*>(reinterpret_cast<int64_t>(rsi45) + 1);
        } while (rdx44 != 0x3e8);
        *reinterpret_cast<int32_t*>(&rdx60) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx60) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rsi61 = rdx60 * 0x2580;
            rdi62 = reinterpret_cast<struct s31*>(reinterpret_cast<int64_t>(r15_63) + rsi61);
            if (reinterpret_cast<uint64_t>(rbx64 + rsi61 + 8) >= reinterpret_cast<uint64_t>(r15_65 + rsi61 + 0x2580)) {
                *reinterpret_cast<int32_t*>(&r9_66) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_66) + 4) = reinterpret_cast<int32_t>(fputc);
            } else {
                *reinterpret_cast<int32_t*>(&r8_67) = 1;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_67) + 4) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(&r9_66) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_66) + 4) = reinterpret_cast<int32_t>(fputc);
                if (reinterpret_cast<uint64_t>(rdi62) < reinterpret_cast<uint64_t>(rbx68 + rsi61 + 0x2580)) {
                    addr_641_89:
                    rsi69 = reinterpret_cast<struct s32*>(rsi61 + reinterpret_cast<int64_t>(rbx70));
                    __asm__("movupd xmm4, [rdi+r8*8-0x8]");
                    __asm__("movapd xmm5, xmm4");
                    __asm__("unpckhpd xmm5, xmm4");
                    __asm__("subsd xmm5, xmm4");
                    __asm__("mulsd xmm5, xmm0");
                    __asm__("addsd xmm5, [rsi+r8*8]");
                    goto label_90;
                }
            }
            do {
                __asm__("movupd xmm4, [r10+r8]");
                __asm__("movupd xmm5, [r10+r8+0x10]");
                __asm__("movupd xmm6, [r10+rdi]");
                __asm__("movupd xmm7, [r10+rdi+0x10]");
                __asm__("movupd xmm8, [rdi+r9*8]");
                __asm__("subpd xmm6, xmm8");
                __asm__("movupd xmm8, [rdi+r9*8+0x10]");
                __asm__("subpd xmm7, xmm8");
                __asm__("mulpd xmm6, xmm3");
                __asm__("addpd xmm6, xmm4");
                __asm__("mulpd xmm7, xmm3");
                __asm__("addpd xmm7, xmm5");
                __asm__("movupd [r10+r8], xmm6");
                __asm__("movupd [r10+r8+0x10], xmm7");
                r9_66 = r9_66 + 4;
            } while (r9_66 != 0x4ac);
            *reinterpret_cast<int32_t*>(&r8_67) = 0x4ad;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_67) + 4) = reinterpret_cast<int32_t>(fputc);
            goto addr_641_89;
            label_90:
            rdi62->f0 = rsi69->f0;
            rdi71 = reinterpret_cast<struct s33*>(&rdi62->f4);
            rsi72 = reinterpret_cast<struct s34*>(&rsi69->f4);
            r8_73 = r8_67 + 1;
            do {
                __asm__("movupd xmm4, [rdi+r8*8-0x8]");
                __asm__("movapd xmm5, xmm4");
                __asm__("unpckhpd xmm5, xmm4");
                __asm__("subsd xmm5, xmm4");
                __asm__("mulsd xmm5, xmm0");
                __asm__("addsd xmm5, [rsi+r8*8]");
                rdi71->f0 = rsi72->f0;
                rdi74 = reinterpret_cast<struct s35*>(&rdi71->f4);
                rsi75 = reinterpret_cast<struct s36*>(&rsi72->f4);
                __asm__("movupd xmm4, [rdi+r8*8]");
                __asm__("movapd xmm5, xmm4");
                __asm__("unpckhpd xmm5, xmm4");
                __asm__("subsd xmm5, xmm4");
                __asm__("mulsd xmm5, xmm0");
                __asm__("addsd xmm5, [rsi+r8*8+0x8]");
                rdi74->f0 = rsi75->f0;
                rdi71 = reinterpret_cast<struct s33*>(&rdi74->f4);
                rsi72 = reinterpret_cast<struct s34*>(&rsi75->f4);
                r8_73 = r8_73 + 2;
            } while (r8_73 != 0x4b0);
            ++rdx60;
        } while (rdx60 != 0x3e8);
        *reinterpret_cast<int32_t*>(&rdx76) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx76) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rsi77 = reinterpret_cast<void*>(rdx76 * 0x2580);
            ++rdx76;
            rdi19 = reinterpret_cast<struct s5*>(reinterpret_cast<int64_t>(r14_78) + reinterpret_cast<int64_t>(rsi77));
            r13_79 = reinterpret_cast<struct s5*>(reinterpret_cast<int64_t>(r15_80) + reinterpret_cast<int64_t>(rsi77) + 0x2578);
            rsi20 = reinterpret_cast<struct s4*>(reinterpret_cast<int64_t>(rsi77) + reinterpret_cast<int64_t>(r15_81));
            if (!reinterpret_cast<int1_t>((static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(rsi20) < reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(rbx82) + reinterpret_cast<int64_t>(rsi77) + 0x2580))) & static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(rbx83) + reinterpret_cast<int64_t>(rsi77)) < reinterpret_cast<uint64_t>(r13_79)))) == fputc)) {
                *reinterpret_cast<int32_t*>(&r10_84) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_84) + 4) = reinterpret_cast<int32_t>(fputc);
            } else {
                *reinterpret_cast<int32_t*>(&r9_85) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_85) + 4) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(&r10_84) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_84) + 4) = reinterpret_cast<int32_t>(fputc);
                if (reinterpret_cast<int1_t>((static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(rsi20) < reinterpret_cast<uint64_t>(reinterpret_cast<int64_t>(r14_86) + reinterpret_cast<int64_t>(rsi77) + 0x4af8))) & static_cast<unsigned char>(reinterpret_cast<uint1_t>(reinterpret_cast<uint64_t>(rdi19) < reinterpret_cast<uint64_t>(r13_79)))) == fputc)) {
                    do {
                        __asm__("movupd xmm5, [rsi+r9*8]");
                        __asm__("movupd xmm4, [rsi+r9*8+0x10]");
                        __asm__("movupd xmm6, [r10+r8]");
                        __asm__("movupd xmm7, [r10+r8+0x10]");
                        __asm__("movupd xmm8, [r8+r9*8]");
                        __asm__("subpd xmm6, xmm8");
                        __asm__("movupd xmm8, [r8+r9*8+0x10]");
                        __asm__("subpd xmm7, xmm8");
                        __asm__("movupd xmm8, [r10+r9*8]");
                        __asm__("addpd xmm8, xmm6");
                        __asm__("movupd xmm6, [r10+r9*8+0x10]");
                        __asm__("addpd xmm6, xmm7");
                        __asm__("movupd xmm7, [rdi+r9*8]");
                        __asm__("subpd xmm8, xmm7");
                        __asm__("movupd xmm7, [rdi+r9*8+0x10]");
                        __asm__("subpd xmm6, xmm7");
                        __asm__("mulpd xmm8, xmm2");
                        __asm__("addpd xmm8, xmm5");
                        __asm__("mulpd xmm6, xmm2");
                        __asm__("addpd xmm6, xmm4");
                        __asm__("movupd [rsi+r9*8], xmm8");
                        __asm__("movupd [rsi+r9*8+0x10], xmm6");
                        r9_85 = r9_85 + 4;
                    } while (r9_85 != 0x4ac);
                    *reinterpret_cast<int32_t*>(&r10_84) = 0x4ac;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_84) + 4) = reinterpret_cast<int32_t>(fputc);
                }
            }
            do {
                __asm__("movupd xmm4, [r8+r10*8]");
                __asm__("movapd xmm5, xmm4");
                __asm__("unpckhpd xmm5, xmm4");
                __asm__("subsd xmm5, xmm4");
                __asm__("addsd xmm5, [r9+r10*8]");
                __asm__("subsd xmm5, [rdi+r10*8]");
                __asm__("mulsd xmm5, xmm1");
                __asm__("addsd xmm5, [rsi+r10*8]");
                rdi19->f0 = rsi20->f0;
                rdi19 = reinterpret_cast<struct s5*>(&rdi19->f4);
                rsi20 = reinterpret_cast<struct s4*>(&rsi20->f4);
                r9_87 = r10_84 + 1;
                r10_84 = r9_87;
            } while (r9_87 != 0x4af);
        } while (rdx76 != 0x3e7);
        ++rcx16;
    } while (rcx16 != 0x1f4);
    if (v88 < 43) 
        goto 0x889;
    if (**v89 != fputc) 
        goto "???";
    rax90 = g8c1;
    rcx91 = *rax90;
    fun_8dd(0x8cb, 22, 1, rcx91);
}

