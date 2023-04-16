
void fputc(int32_t edi, int64_t rsi);

int32_t** g37b = reinterpret_cast<int32_t**>(0x3d8d48288b4c);

void fun_397(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx, void* r8, int64_t r9, int32_t* a7, int32_t* a8, int32_t* a9, int32_t* a10, int32_t* a11, int32_t* a12, int32_t* a13, int32_t* a14, int64_t a15);

void fun_3b7();

void fun_3ee();

void fun_411();

void fun_449(int32_t* rdi, int64_t rsi, int64_t rdx, int32_t* rcx, void* r8, int64_t r9, int32_t* a7, int32_t* a8, int32_t* a9, int32_t* a10, int32_t* a11, int32_t* a12, int32_t* a13, int32_t* a14, int32_t* a15);

void fun_462(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx, void* r8, int64_t r9, int32_t* a7, int32_t* a8, int32_t* a9, int32_t* a10, int32_t* a11, int32_t* a12, int32_t* a13, int32_t* a14, int32_t* a15);

void fun_47a();

void fun_4ae();

void fun_4d1();

void fun_509(int32_t* rdi, int64_t rsi, int64_t rdx, int32_t* rcx, void* r8, int64_t r9, int32_t* a7, int32_t* a8, int32_t* a9, int32_t* a10, int32_t* a11, int32_t* a12, int32_t* a13, int32_t* a14, int32_t* a15);

void fun_521();

void fun_55e();

void fun_581();

void fun_5b3(int32_t* rdi, int64_t rsi, int64_t rdx, int32_t* rcx, void* r8, int64_t r9, int32_t* a7, int32_t* a8, int32_t* a9, int32_t* a10, int32_t* a11, int32_t* a12, int32_t* a13, int32_t* a14, int32_t* a15);

void fun_346(int32_t* rdi, int64_t rsi, int64_t rdx, int32_t* rcx, void* r8, int64_t r9, int32_t* a7);

void fun_34e(void* rdi, int64_t rsi, int64_t rdx, int32_t* rcx, void* r8, int64_t r9, int32_t* a7);

void fun_356(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx, void* r8, int64_t r9, int32_t* a7);

void fun_35e(int32_t* rdi, int64_t rsi, int64_t rdx, int32_t* rcx, void* r8, int64_t r9, int32_t* a7);

void fun_330(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx, void* r8, int64_t r9, int32_t* a7) {
    int32_t* v8;
    int32_t ebp9;
    signed char** r13_10;
    int32_t* v11;
    int32_t* r12_12;
    int32_t** rax13;
    int32_t* r13_14;
    int32_t* rcx15;
    int32_t* v16;
    int32_t* v17;
    int32_t* v18;
    int32_t* v19;
    int32_t* v20;
    int64_t v21;
    int32_t* rsi22;
    int64_t r12_23;
    int32_t* v24;
    int32_t* rdi25;
    int64_t rbp26;
    int64_t r13_27;
    int64_t r12_28;
    int32_t* v29;
    int32_t* v30;
    int32_t* v31;
    int32_t* v32;
    int32_t* v33;
    int32_t* v34;
    int32_t* v35;
    int32_t* v36;
    int32_t* v37;
    int32_t* v38;
    int32_t* v39;
    int32_t* v40;
    int32_t* rsi41;
    int32_t* rdi42;
    int64_t rbp43;
    int64_t r13_44;
    int64_t r12_45;
    int32_t* v46;
    int32_t* v47;
    int32_t* v48;
    int32_t* v49;
    int32_t* v50;
    int32_t* v51;
    int32_t* rsi52;
    int32_t* rdi53;
    int64_t rbp54;
    int64_t r13_55;
    int32_t* v56;
    int32_t* v57;
    int32_t* v58;
    int32_t* v59;
    int32_t* v60;
    int32_t* v61;
    int32_t* r12_62;
    int32_t* rbx63;
    void* r14_64;
    int64_t r15_65;
    int64_t v66;

    v8 = reinterpret_cast<int32_t*>(__return_address());
    if (ebp9 >= 43 && **r13_10 == fputc) {
        v11 = r12_12;
        rax13 = g37b;
        r13_14 = *rax13;
        rcx15 = r13_14;
        fun_397(0x385, 22, 1, rcx15, r8, r9, v8, a7, v11, v16, v17, v18, v19, v20, v21);
        rsi22 = reinterpret_cast<int32_t*>(0x39e);
        *reinterpret_cast<int32_t*>(&r12_23) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_23) + 4) = reinterpret_cast<int32_t>(fputc);
        v24 = r13_14;
        rdi25 = r13_14;
        fun_3b7();
        do {
            rbp26 = r12_23 * 0x3e8;
            *reinterpret_cast<int32_t*>(&r13_27) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_27) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("ror eax, 0x2");
                if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r13_27 + rbp26) * 0xcccccccd) <= 0xccccccc) {
                    *reinterpret_cast<int32_t*>(&rdi25) = 10;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi25) + 4) = reinterpret_cast<int32_t>(fputc);
                    rsi22 = v24;
                    fun_3ee();
                }
                *rdi25 = *rsi22;
                rdi25 = v24;
                rsi22 = reinterpret_cast<int32_t*>(0x40a);
                fun_411();
                ++r13_27;
            } while (r13_27 != 0x4b0);
            ++r12_23;
        } while (r12_23 != 0x3e8);
        *reinterpret_cast<int32_t*>(&r12_28) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_28) + 4) = reinterpret_cast<int32_t>(fputc);
        fun_449(v24, 0x430, 0x437, rcx15, r8, r9, v8, v24, v11, v29, v30, v31, v32, v33, v34);
        rcx = v24;
        fun_462(0x450, 22, 1, rcx, r8, r9, v8, v24, v11, v35, v36, v37, v38, v39, v40);
        rsi41 = reinterpret_cast<int32_t*>(0x469);
        rdi42 = v24;
        fun_47a();
        do {
            rbp43 = r12_28 * 0x3e8;
            *reinterpret_cast<int32_t*>(&r13_44) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_44) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("ror eax, 0x2");
                if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r13_44 + rbp43) * 0xcccccccd) <= 0xccccccc) {
                    *reinterpret_cast<int32_t*>(&rdi42) = 10;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi42) + 4) = reinterpret_cast<int32_t>(fputc);
                    rsi41 = v24;
                    fun_4ae();
                }
                *rdi42 = *rsi41;
                rdi42 = v24;
                rsi41 = reinterpret_cast<int32_t*>(0x4ca);
                fun_4d1();
                ++r13_44;
            } while (r13_44 != 0x4b0);
            ++r12_28;
        } while (r12_28 != 0x3e8);
        *reinterpret_cast<int32_t*>(&r12_45) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_45) + 4) = reinterpret_cast<int32_t>(fputc);
        fun_509(v24, 0x4f0, 0x4f7, rcx, r8, r9, v8, v24, v11, v46, v47, v48, v49, v50, v51);
        rsi52 = reinterpret_cast<int32_t*>(0x510);
        rdi53 = v24;
        fun_521();
        do {
            rbp54 = r12_45 * 0x3e8;
            *reinterpret_cast<int32_t*>(&r13_55) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_55) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("ror eax, 0x2");
                if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r13_55 + rbp54) * 0xcccccccd) <= 0xccccccc) {
                    *reinterpret_cast<int32_t*>(&rdi53) = 10;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi53) + 4) = reinterpret_cast<int32_t>(fputc);
                    rsi52 = v24;
                    fun_55e();
                }
                *rdi53 = *rsi52;
                rdi53 = v24;
                rsi52 = reinterpret_cast<int32_t*>(0x57a);
                fun_581();
                ++r13_55;
            } while (r13_55 != 0x4b0);
            ++r12_45;
        } while (r12_45 != 0x3e8);
        rsi = 0x5a0;
        rdx = 0x5a7;
        fun_5b3(v24, 0x5a0, 0x5a7, rcx, r8, r9, v8, v24, v11, v56, v57, v58, v59, v60, v61);
        r12_62 = v11;
    }
    fun_346(rbx63, rsi, rdx, rcx, r8, r9, v8);
    fun_34e(r14_64, rsi, rdx, rcx, r8, r9, v8);
    fun_356(r15_65, rsi, rdx, rcx, r8, r9, v8);
    fun_35e(r12_62, rsi, rdx, rcx, r8, r9, v8);
    goto v66;
}

void fun_346(int32_t* rdi, int64_t rsi, int64_t rdx, int32_t* rcx, void* r8, int64_t r9, int32_t* a7) {
    void* r14_8;
    int64_t r15_9;
    int32_t* r12_10;
    int64_t v11;

    fun_34e(r14_8, rsi, rdx, rcx, r8, r9, __return_address());
    fun_356(r15_9, rsi, rdx, rcx, r8, r9, __return_address());
    fun_35e(r12_10, rsi, rdx, rcx, r8, r9, __return_address());
    goto v11;
}

void fun_3ee() {
    int32_t* v1;
    int32_t* rdi2;
    int32_t* rsi3;
    int32_t* v4;
    int64_t r13_5;
    int64_t r12_6;
    int64_t rbp7;
    int32_t* v8;
    int64_t r12_9;
    int32_t* v10;
    int32_t* rcx11;
    void* r8_12;
    int64_t r9_13;
    int32_t* v14;
    int32_t* v15;
    int32_t* v16;
    int32_t* v17;
    int32_t* v18;
    int32_t* v19;
    int32_t* v20;
    int32_t* v21;
    int32_t* rcx22;
    void* r8_23;
    int64_t r9_24;
    int32_t* v25;
    int32_t* v26;
    int32_t* v27;
    int32_t* v28;
    int32_t* v29;
    int32_t* v30;
    int32_t* v31;
    int32_t* v32;
    int32_t* rsi33;
    int32_t* rdi34;
    int64_t rbp35;
    int64_t r13_36;
    int32_t* v37;
    int32_t* v38;
    int64_t r12_39;
    int32_t* v40;
    void* r8_41;
    int64_t r9_42;
    int32_t* v43;
    int32_t* v44;
    int32_t* v45;
    int32_t* v46;
    int32_t* v47;
    int32_t* v48;
    int32_t* v49;
    int32_t* v50;
    int32_t* rsi51;
    int32_t* rdi52;
    int64_t rbp53;
    int64_t r13_54;
    int32_t* v55;
    int32_t* v56;
    int32_t* v57;
    void* r8_58;
    int64_t r9_59;
    int32_t* v60;
    int32_t* v61;
    int32_t* v62;
    int32_t* v63;
    int32_t* v64;
    int32_t* v65;
    int32_t* v66;
    int32_t* v67;
    int32_t* rbx68;
    void* r8_69;
    int64_t r9_70;
    void* r14_71;
    void* r8_72;
    int64_t r9_73;
    int64_t r15_74;
    void* r8_75;
    int64_t r9_76;
    int32_t* v77;
    void* r8_78;
    int64_t r9_79;
    int64_t v80;

    while (1) {
        v1 = reinterpret_cast<int32_t*>(__return_address());
        *rdi2 = *rsi3;
        rdi2 = v4;
        rsi3 = reinterpret_cast<int32_t*>(0x40a);
        fun_411();
        ++r13_5;
        if (r13_5 == 0x4b0) {
            ++r12_6;
            if (r12_6 == 0x3e8) 
                break;
            rbp7 = r12_6 * 0x3e8;
            *reinterpret_cast<int32_t*>(&r13_5) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_5) + 4) = reinterpret_cast<int32_t>(fputc);
        }
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r13_5 + rbp7) * 0xcccccccd) > 0xccccccc) 
            continue;
        *reinterpret_cast<int32_t*>(&rdi2) = 10;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi2) + 4) = reinterpret_cast<int32_t>(fputc);
        rsi3 = v8;
        fun_3ee();
    }
    *reinterpret_cast<int32_t*>(&r12_9) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_9) + 4) = reinterpret_cast<int32_t>(fputc);
    fun_449(v10, 0x430, 0x437, rcx11, r8_12, r9_13, v1, v14, v15, v16, v17, v18, v19, v20, v21);
    rcx22 = v10;
    fun_462(0x450, 22, 1, rcx22, r8_23, r9_24, v1, v25, v26, v27, v28, v29, v30, v31, v32);
    rsi33 = reinterpret_cast<int32_t*>(0x469);
    rdi34 = v10;
    fun_47a();
    do {
        rbp35 = r12_9 * 0x3e8;
        *reinterpret_cast<int32_t*>(&r13_36) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_36) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r13_36 + rbp35) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi34) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi34) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi33 = v37;
                fun_4ae();
            }
            *rdi34 = *rsi33;
            rdi34 = v38;
            rsi33 = reinterpret_cast<int32_t*>(0x4ca);
            fun_4d1();
            ++r13_36;
        } while (r13_36 != 0x4b0);
        ++r12_9;
    } while (r12_9 != 0x3e8);
    *reinterpret_cast<int32_t*>(&r12_39) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_39) + 4) = reinterpret_cast<int32_t>(fputc);
    fun_509(v40, 0x4f0, 0x4f7, rcx22, r8_41, r9_42, v1, v43, v44, v45, v46, v47, v48, v49, v50);
    rsi51 = reinterpret_cast<int32_t*>(0x510);
    rdi52 = v40;
    fun_521();
    do {
        rbp53 = r12_39 * 0x3e8;
        *reinterpret_cast<int32_t*>(&r13_54) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_54) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r13_54 + rbp53) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi52) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi52) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi51 = v55;
                fun_55e();
            }
            *rdi52 = *rsi51;
            rdi52 = v56;
            rsi51 = reinterpret_cast<int32_t*>(0x57a);
            fun_581();
            ++r13_54;
        } while (r13_54 != 0x4b0);
        ++r12_39;
    } while (r12_39 != 0x3e8);
    fun_5b3(v57, 0x5a0, 0x5a7, rcx22, r8_58, r9_59, v1, v60, v61, v62, v63, v64, v65, v66, v67);
    fun_346(rbx68, 0x5a0, 0x5a7, rcx22, r8_69, r9_70, v1);
    fun_34e(r14_71, 0x5a0, 0x5a7, rcx22, r8_72, r9_73, v1);
    fun_356(r15_74, 0x5a0, 0x5a7, rcx22, r8_75, r9_76, v1);
    fun_35e(v77, 0x5a0, 0x5a7, rcx22, r8_78, r9_79, v1);
    goto v80;
}

void fun_411() {
    int32_t* v1;
    int64_t r13_2;
    int64_t r12_3;
    int64_t rbp4;
    int32_t* rdi5;
    int32_t* rsi6;
    int32_t* v7;
    int32_t* v8;
    int64_t r12_9;
    int32_t* v10;
    int32_t* rcx11;
    void* r8_12;
    int64_t r9_13;
    int32_t* v14;
    int32_t* v15;
    int32_t* v16;
    int32_t* v17;
    int32_t* v18;
    int32_t* v19;
    int32_t* v20;
    int32_t* v21;
    int32_t* rcx22;
    void* r8_23;
    int64_t r9_24;
    int32_t* v25;
    int32_t* v26;
    int32_t* v27;
    int32_t* v28;
    int32_t* v29;
    int32_t* v30;
    int32_t* v31;
    int32_t* v32;
    int32_t* rsi33;
    int32_t* rdi34;
    int64_t rbp35;
    int64_t r13_36;
    int32_t* v37;
    int32_t* v38;
    int64_t r12_39;
    int32_t* v40;
    void* r8_41;
    int64_t r9_42;
    int32_t* v43;
    int32_t* v44;
    int32_t* v45;
    int32_t* v46;
    int32_t* v47;
    int32_t* v48;
    int32_t* v49;
    int32_t* v50;
    int32_t* rsi51;
    int32_t* rdi52;
    int64_t rbp53;
    int64_t r13_54;
    int32_t* v55;
    int32_t* v56;
    int32_t* v57;
    void* r8_58;
    int64_t r9_59;
    int32_t* v60;
    int32_t* v61;
    int32_t* v62;
    int32_t* v63;
    int32_t* v64;
    int32_t* v65;
    int32_t* v66;
    int32_t* v67;
    int32_t* rbx68;
    void* r8_69;
    int64_t r9_70;
    void* r14_71;
    void* r8_72;
    int64_t r9_73;
    int64_t r15_74;
    void* r8_75;
    int64_t r9_76;
    int32_t* v77;
    void* r8_78;
    int64_t r9_79;
    int64_t v80;

    while (1) {
        v1 = reinterpret_cast<int32_t*>(__return_address());
        ++r13_2;
        if (r13_2 == 0x4b0) {
            ++r12_3;
            if (r12_3 == 0x3e8) 
                break;
            rbp4 = r12_3 * 0x3e8;
            *reinterpret_cast<int32_t*>(&r13_2) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_2) + 4) = reinterpret_cast<int32_t>(fputc);
        }
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r13_2 + rbp4) * 0xcccccccd) <= 0xccccccc) {
            *reinterpret_cast<int32_t*>(&rdi5) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi5) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi6 = v7;
            fun_3ee();
        }
        *rdi5 = *rsi6;
        rdi5 = v8;
        rsi6 = reinterpret_cast<int32_t*>(0x40a);
        fun_411();
    }
    *reinterpret_cast<int32_t*>(&r12_9) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_9) + 4) = reinterpret_cast<int32_t>(fputc);
    fun_449(v10, 0x430, 0x437, rcx11, r8_12, r9_13, v1, v14, v15, v16, v17, v18, v19, v20, v21);
    rcx22 = v10;
    fun_462(0x450, 22, 1, rcx22, r8_23, r9_24, v1, v25, v26, v27, v28, v29, v30, v31, v32);
    rsi33 = reinterpret_cast<int32_t*>(0x469);
    rdi34 = v10;
    fun_47a();
    do {
        rbp35 = r12_9 * 0x3e8;
        *reinterpret_cast<int32_t*>(&r13_36) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_36) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r13_36 + rbp35) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi34) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi34) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi33 = v37;
                fun_4ae();
            }
            *rdi34 = *rsi33;
            rdi34 = v38;
            rsi33 = reinterpret_cast<int32_t*>(0x4ca);
            fun_4d1();
            ++r13_36;
        } while (r13_36 != 0x4b0);
        ++r12_9;
    } while (r12_9 != 0x3e8);
    *reinterpret_cast<int32_t*>(&r12_39) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_39) + 4) = reinterpret_cast<int32_t>(fputc);
    fun_509(v40, 0x4f0, 0x4f7, rcx22, r8_41, r9_42, v1, v43, v44, v45, v46, v47, v48, v49, v50);
    rsi51 = reinterpret_cast<int32_t*>(0x510);
    rdi52 = v40;
    fun_521();
    do {
        rbp53 = r12_39 * 0x3e8;
        *reinterpret_cast<int32_t*>(&r13_54) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_54) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r13_54 + rbp53) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi52) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi52) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi51 = v55;
                fun_55e();
            }
            *rdi52 = *rsi51;
            rdi52 = v56;
            rsi51 = reinterpret_cast<int32_t*>(0x57a);
            fun_581();
            ++r13_54;
        } while (r13_54 != 0x4b0);
        ++r12_39;
    } while (r12_39 != 0x3e8);
    fun_5b3(v57, 0x5a0, 0x5a7, rcx22, r8_58, r9_59, v1, v60, v61, v62, v63, v64, v65, v66, v67);
    fun_346(rbx68, 0x5a0, 0x5a7, rcx22, r8_69, r9_70, v1);
    fun_34e(r14_71, 0x5a0, 0x5a7, rcx22, r8_72, r9_73, v1);
    fun_356(r15_74, 0x5a0, 0x5a7, rcx22, r8_75, r9_76, v1);
    fun_35e(v77, 0x5a0, 0x5a7, rcx22, r8_78, r9_79, v1);
    goto v80;
}

void fun_449(int32_t* rdi, int64_t rsi, int64_t rdx, int32_t* rcx, void* r8, int64_t r9, int32_t* a7, int32_t* a8, int32_t* a9, int32_t* a10, int32_t* a11, int32_t* a12, int32_t* a13, int32_t* a14, int32_t* a15) {
    int32_t* v16;
    int32_t* rcx17;
    int32_t* r13_18;
    int32_t* rsi19;
    int32_t* rdi20;
    int32_t* r13_21;
    int64_t rbp22;
    int64_t r12_23;
    int64_t r13_24;
    int64_t r12_25;
    int32_t* rsi26;
    int32_t* rdi27;
    int64_t rbp28;
    int64_t r13_29;
    int32_t* rbx30;
    void* r14_31;
    int64_t r15_32;

    v16 = reinterpret_cast<int32_t*>(__return_address());
    rcx17 = r13_18;
    fun_462(0x450, 22, 1, rcx17, r8, r9, v16, a7, a8, a9, a10, a11, a12, a13, a14);
    rsi19 = reinterpret_cast<int32_t*>(0x469);
    rdi20 = r13_21;
    fun_47a();
    do {
        rbp22 = r12_23 * 0x3e8;
        *reinterpret_cast<int32_t*>(&r13_24) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_24) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r13_24 + rbp22) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi20) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi20) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi19 = a7;
                fun_4ae();
            }
            *rdi20 = *rsi19;
            rdi20 = a7;
            rsi19 = reinterpret_cast<int32_t*>(0x4ca);
            fun_4d1();
            ++r13_24;
        } while (r13_24 != 0x4b0);
        ++r12_23;
    } while (r12_23 != 0x3e8);
    *reinterpret_cast<int32_t*>(&r12_25) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_25) + 4) = reinterpret_cast<int32_t>(fputc);
    fun_509(a7, 0x4f0, 0x4f7, rcx17, r8, r9, v16, a7, a8, a9, a10, a11, a12, a13, a14);
    rsi26 = reinterpret_cast<int32_t*>(0x510);
    rdi27 = a7;
    fun_521();
    do {
        rbp28 = r12_25 * 0x3e8;
        *reinterpret_cast<int32_t*>(&r13_29) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_29) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r13_29 + rbp28) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi27) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi27) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi26 = a7;
                fun_55e();
            }
            *rdi27 = *rsi26;
            rdi27 = a7;
            rsi26 = reinterpret_cast<int32_t*>(0x57a);
            fun_581();
            ++r13_29;
        } while (r13_29 != 0x4b0);
        ++r12_25;
    } while (r12_25 != 0x3e8);
    fun_5b3(a7, 0x5a0, 0x5a7, rcx17, r8, r9, v16, a7, a8, a9, a10, a11, a12, a13, a14);
    fun_346(rbx30, 0x5a0, 0x5a7, rcx17, r8, r9, v16);
    fun_34e(r14_31, 0x5a0, 0x5a7, rcx17, r8, r9, v16);
    fun_356(r15_32, 0x5a0, 0x5a7, rcx17, r8, r9, v16);
    fun_35e(a8, 0x5a0, 0x5a7, rcx17, r8, r9, v16);
    goto a15;
}

void fun_4ae() {
    int32_t* v1;
    int32_t* rdi2;
    int32_t* rsi3;
    int32_t* v4;
    int64_t r13_5;
    int64_t r12_6;
    int64_t rbp7;
    int32_t* v8;
    int64_t r12_9;
    int32_t* v10;
    int32_t* rcx11;
    void* r8_12;
    int64_t r9_13;
    int32_t* v14;
    int32_t* v15;
    int32_t* v16;
    int32_t* v17;
    int32_t* v18;
    int32_t* v19;
    int32_t* v20;
    int32_t* v21;
    int32_t* rsi22;
    int32_t* rdi23;
    int64_t rbp24;
    int64_t r13_25;
    int32_t* v26;
    int32_t* v27;
    int32_t* v28;
    int32_t* rcx29;
    void* r8_30;
    int64_t r9_31;
    int32_t* v32;
    int32_t* v33;
    int32_t* v34;
    int32_t* v35;
    int32_t* v36;
    int32_t* v37;
    int32_t* v38;
    int32_t* v39;
    int32_t* rbx40;
    int32_t* rcx41;
    void* r8_42;
    int64_t r9_43;
    void* r14_44;
    int32_t* rcx45;
    void* r8_46;
    int64_t r9_47;
    int64_t r15_48;
    int32_t* rcx49;
    void* r8_50;
    int64_t r9_51;
    int32_t* v52;
    int32_t* rcx53;
    void* r8_54;
    int64_t r9_55;
    int64_t v56;

    while (1) {
        v1 = reinterpret_cast<int32_t*>(__return_address());
        *rdi2 = *rsi3;
        rdi2 = v4;
        rsi3 = reinterpret_cast<int32_t*>(0x4ca);
        fun_4d1();
        ++r13_5;
        if (r13_5 == 0x4b0) {
            ++r12_6;
            if (r12_6 == 0x3e8) 
                break;
            rbp7 = r12_6 * 0x3e8;
            *reinterpret_cast<int32_t*>(&r13_5) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_5) + 4) = reinterpret_cast<int32_t>(fputc);
        }
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r13_5 + rbp7) * 0xcccccccd) > 0xccccccc) 
            continue;
        *reinterpret_cast<int32_t*>(&rdi2) = 10;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi2) + 4) = reinterpret_cast<int32_t>(fputc);
        rsi3 = v8;
        fun_4ae();
    }
    *reinterpret_cast<int32_t*>(&r12_9) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_9) + 4) = reinterpret_cast<int32_t>(fputc);
    fun_509(v10, 0x4f0, 0x4f7, rcx11, r8_12, r9_13, v1, v14, v15, v16, v17, v18, v19, v20, v21);
    rsi22 = reinterpret_cast<int32_t*>(0x510);
    rdi23 = v10;
    fun_521();
    do {
        rbp24 = r12_9 * 0x3e8;
        *reinterpret_cast<int32_t*>(&r13_25) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_25) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r13_25 + rbp24) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi23) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi23) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi22 = v26;
                fun_55e();
            }
            *rdi23 = *rsi22;
            rdi23 = v27;
            rsi22 = reinterpret_cast<int32_t*>(0x57a);
            fun_581();
            ++r13_25;
        } while (r13_25 != 0x4b0);
        ++r12_9;
    } while (r12_9 != 0x3e8);
    fun_5b3(v28, 0x5a0, 0x5a7, rcx29, r8_30, r9_31, v1, v32, v33, v34, v35, v36, v37, v38, v39);
    fun_346(rbx40, 0x5a0, 0x5a7, rcx41, r8_42, r9_43, v1);
    fun_34e(r14_44, 0x5a0, 0x5a7, rcx45, r8_46, r9_47, v1);
    fun_356(r15_48, 0x5a0, 0x5a7, rcx49, r8_50, r9_51, v1);
    fun_35e(v52, 0x5a0, 0x5a7, rcx53, r8_54, r9_55, v1);
    goto v56;
}

void fun_4d1() {
    int32_t* v1;
    int64_t r13_2;
    int64_t r12_3;
    int64_t rbp4;
    int32_t* rdi5;
    int32_t* rsi6;
    int32_t* v7;
    int32_t* v8;
    int64_t r12_9;
    int32_t* v10;
    int32_t* rcx11;
    void* r8_12;
    int64_t r9_13;
    int32_t* v14;
    int32_t* v15;
    int32_t* v16;
    int32_t* v17;
    int32_t* v18;
    int32_t* v19;
    int32_t* v20;
    int32_t* v21;
    int32_t* rsi22;
    int32_t* rdi23;
    int64_t rbp24;
    int64_t r13_25;
    int32_t* v26;
    int32_t* v27;
    int32_t* v28;
    int32_t* rcx29;
    void* r8_30;
    int64_t r9_31;
    int32_t* v32;
    int32_t* v33;
    int32_t* v34;
    int32_t* v35;
    int32_t* v36;
    int32_t* v37;
    int32_t* v38;
    int32_t* v39;
    int32_t* rbx40;
    int32_t* rcx41;
    void* r8_42;
    int64_t r9_43;
    void* r14_44;
    int32_t* rcx45;
    void* r8_46;
    int64_t r9_47;
    int64_t r15_48;
    int32_t* rcx49;
    void* r8_50;
    int64_t r9_51;
    int32_t* v52;
    int32_t* rcx53;
    void* r8_54;
    int64_t r9_55;
    int64_t v56;

    while (1) {
        v1 = reinterpret_cast<int32_t*>(__return_address());
        ++r13_2;
        if (r13_2 == 0x4b0) {
            ++r12_3;
            if (r12_3 == 0x3e8) 
                break;
            rbp4 = r12_3 * 0x3e8;
            *reinterpret_cast<int32_t*>(&r13_2) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_2) + 4) = reinterpret_cast<int32_t>(fputc);
        }
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r13_2 + rbp4) * 0xcccccccd) <= 0xccccccc) {
            *reinterpret_cast<int32_t*>(&rdi5) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi5) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi6 = v7;
            fun_4ae();
        }
        *rdi5 = *rsi6;
        rdi5 = v8;
        rsi6 = reinterpret_cast<int32_t*>(0x4ca);
        fun_4d1();
    }
    *reinterpret_cast<int32_t*>(&r12_9) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_9) + 4) = reinterpret_cast<int32_t>(fputc);
    fun_509(v10, 0x4f0, 0x4f7, rcx11, r8_12, r9_13, v1, v14, v15, v16, v17, v18, v19, v20, v21);
    rsi22 = reinterpret_cast<int32_t*>(0x510);
    rdi23 = v10;
    fun_521();
    do {
        rbp24 = r12_9 * 0x3e8;
        *reinterpret_cast<int32_t*>(&r13_25) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_25) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r13_25 + rbp24) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi23) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi23) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi22 = v26;
                fun_55e();
            }
            *rdi23 = *rsi22;
            rdi23 = v27;
            rsi22 = reinterpret_cast<int32_t*>(0x57a);
            fun_581();
            ++r13_25;
        } while (r13_25 != 0x4b0);
        ++r12_9;
    } while (r12_9 != 0x3e8);
    fun_5b3(v28, 0x5a0, 0x5a7, rcx29, r8_30, r9_31, v1, v32, v33, v34, v35, v36, v37, v38, v39);
    fun_346(rbx40, 0x5a0, 0x5a7, rcx41, r8_42, r9_43, v1);
    fun_34e(r14_44, 0x5a0, 0x5a7, rcx45, r8_46, r9_47, v1);
    fun_356(r15_48, 0x5a0, 0x5a7, rcx49, r8_50, r9_51, v1);
    fun_35e(v52, 0x5a0, 0x5a7, rcx53, r8_54, r9_55, v1);
    goto v56;
}

void fun_509(int32_t* rdi, int64_t rsi, int64_t rdx, int32_t* rcx, void* r8, int64_t r9, int32_t* a7, int32_t* a8, int32_t* a9, int32_t* a10, int32_t* a11, int32_t* a12, int32_t* a13, int32_t* a14, int32_t* a15) {
    int32_t* v16;
    int32_t* rsi17;
    int32_t* rdi18;
    int32_t* r13_19;
    int64_t rbp20;
    int64_t r12_21;
    int64_t r13_22;
    int32_t* rbx23;
    void* r14_24;
    int64_t r15_25;

    v16 = reinterpret_cast<int32_t*>(__return_address());
    rsi17 = reinterpret_cast<int32_t*>(0x510);
    rdi18 = r13_19;
    fun_521();
    do {
        rbp20 = r12_21 * 0x3e8;
        *reinterpret_cast<int32_t*>(&r13_22) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_22) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r13_22 + rbp20) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi18) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi18) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi17 = a7;
                fun_55e();
            }
            *rdi18 = *rsi17;
            rdi18 = a7;
            rsi17 = reinterpret_cast<int32_t*>(0x57a);
            fun_581();
            ++r13_22;
        } while (r13_22 != 0x4b0);
        ++r12_21;
    } while (r12_21 != 0x3e8);
    fun_5b3(a7, 0x5a0, 0x5a7, rcx, r8, r9, v16, a7, a8, a9, a10, a11, a12, a13, a14);
    fun_346(rbx23, 0x5a0, 0x5a7, rcx, r8, r9, v16);
    fun_34e(r14_24, 0x5a0, 0x5a7, rcx, r8, r9, v16);
    fun_356(r15_25, 0x5a0, 0x5a7, rcx, r8, r9, v16);
    fun_35e(a8, 0x5a0, 0x5a7, rcx, r8, r9, v16);
    goto a15;
}

void fun_55e() {
    int32_t* rdi1;
    int32_t* rsi2;
    int32_t* v3;
    int64_t r13_4;
    int64_t r12_5;
    int64_t rbp6;
    int32_t* v7;
    int32_t* v8;
    int32_t* rcx9;
    void* r8_10;
    int64_t r9_11;
    int32_t* v12;
    int32_t* v13;
    int32_t* v14;
    int32_t* v15;
    int32_t* v16;
    int32_t* v17;
    int32_t* v18;
    int32_t* v19;
    int32_t* rbx20;
    int32_t* rcx21;
    void* r8_22;
    int64_t r9_23;
    void* r14_24;
    int32_t* rcx25;
    void* r8_26;
    int64_t r9_27;
    int64_t r15_28;
    int32_t* rcx29;
    void* r8_30;
    int64_t r9_31;
    int32_t* v32;
    int32_t* rcx33;
    void* r8_34;
    int64_t r9_35;
    int64_t v36;

    while (1) {
        *rdi1 = *rsi2;
        rdi1 = v3;
        rsi2 = reinterpret_cast<int32_t*>(0x57a);
        fun_581();
        ++r13_4;
        if (r13_4 == 0x4b0) {
            ++r12_5;
            if (r12_5 == 0x3e8) 
                break;
            rbp6 = r12_5 * 0x3e8;
            *reinterpret_cast<int32_t*>(&r13_4) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_4) + 4) = reinterpret_cast<int32_t>(fputc);
        }
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r13_4 + rbp6) * 0xcccccccd) > 0xccccccc) 
            continue;
        *reinterpret_cast<int32_t*>(&rdi1) = 10;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi1) + 4) = reinterpret_cast<int32_t>(fputc);
        rsi2 = v7;
        fun_55e();
    }
    fun_5b3(v8, 0x5a0, 0x5a7, rcx9, r8_10, r9_11, __return_address(), v12, v13, v14, v15, v16, v17, v18, v19);
    fun_346(rbx20, 0x5a0, 0x5a7, rcx21, r8_22, r9_23, __return_address());
    fun_34e(r14_24, 0x5a0, 0x5a7, rcx25, r8_26, r9_27, __return_address());
    fun_356(r15_28, 0x5a0, 0x5a7, rcx29, r8_30, r9_31, __return_address());
    fun_35e(v32, 0x5a0, 0x5a7, rcx33, r8_34, r9_35, __return_address());
    goto v36;
}

void fun_581() {
    int64_t r13_1;
    int64_t r12_2;
    int64_t rbp3;
    int32_t* rdi4;
    int32_t* rsi5;
    int32_t* v6;
    int32_t* v7;
    int32_t* v8;
    int32_t* rcx9;
    void* r8_10;
    int64_t r9_11;
    int32_t* v12;
    int32_t* v13;
    int32_t* v14;
    int32_t* v15;
    int32_t* v16;
    int32_t* v17;
    int32_t* v18;
    int32_t* v19;
    int32_t* rbx20;
    int32_t* rcx21;
    void* r8_22;
    int64_t r9_23;
    void* r14_24;
    int32_t* rcx25;
    void* r8_26;
    int64_t r9_27;
    int64_t r15_28;
    int32_t* rcx29;
    void* r8_30;
    int64_t r9_31;
    int32_t* v32;
    int32_t* rcx33;
    void* r8_34;
    int64_t r9_35;
    int64_t v36;

    while (1) {
        ++r13_1;
        if (r13_1 == 0x4b0) {
            ++r12_2;
            if (r12_2 == 0x3e8) 
                break;
            rbp3 = r12_2 * 0x3e8;
            *reinterpret_cast<int32_t*>(&r13_1) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_1) + 4) = reinterpret_cast<int32_t>(fputc);
        }
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r13_1 + rbp3) * 0xcccccccd) <= 0xccccccc) {
            *reinterpret_cast<int32_t*>(&rdi4) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi4) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi5 = v6;
            fun_55e();
        }
        *rdi4 = *rsi5;
        rdi4 = v7;
        rsi5 = reinterpret_cast<int32_t*>(0x57a);
        fun_581();
    }
    fun_5b3(v8, 0x5a0, 0x5a7, rcx9, r8_10, r9_11, __return_address(), v12, v13, v14, v15, v16, v17, v18, v19);
    fun_346(rbx20, 0x5a0, 0x5a7, rcx21, r8_22, r9_23, __return_address());
    fun_34e(r14_24, 0x5a0, 0x5a7, rcx25, r8_26, r9_27, __return_address());
    fun_356(r15_28, 0x5a0, 0x5a7, rcx29, r8_30, r9_31, __return_address());
    fun_35e(v32, 0x5a0, 0x5a7, rcx33, r8_34, r9_35, __return_address());
    goto v36;
}

void fun_5b3(int32_t* rdi, int64_t rsi, int64_t rdx, int32_t* rcx, void* r8, int64_t r9, int32_t* a7, int32_t* a8, int32_t* a9, int32_t* a10, int32_t* a11, int32_t* a12, int32_t* a13, int32_t* a14, int32_t* a15) {
    int32_t* rbx16;
    void* r14_17;
    int64_t r15_18;

    fun_346(rbx16, rsi, rdx, rcx, r8, r9, __return_address());
    fun_34e(r14_17, rsi, rdx, rcx, r8, r9, __return_address());
    fun_356(r15_18, rsi, rdx, rcx, r8, r9, __return_address());
    fun_35e(a8, rsi, rdx, rcx, r8, r9, __return_address());
    goto a15;
}

void fun_397(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx, void* r8, int64_t r9, int32_t* a7, int32_t* a8, int32_t* a9, int32_t* a10, int32_t* a11, int32_t* a12, int32_t* a13, int32_t* a14, int64_t a15) {
    int32_t* v16;
    int32_t* rsi17;
    int64_t r12_18;
    int32_t* v19;
    int32_t* r13_20;
    int32_t* rdi21;
    int32_t* r13_22;
    int64_t rbp23;
    int64_t r13_24;
    int64_t r12_25;
    int32_t* rcx26;
    int32_t* rsi27;
    int32_t* rdi28;
    int64_t rbp29;
    int64_t r13_30;
    int64_t r12_31;
    int32_t* rsi32;
    int32_t* rdi33;
    int64_t rbp34;
    int64_t r13_35;
    int32_t* rbx36;
    void* r14_37;
    int64_t r15_38;

    v16 = reinterpret_cast<int32_t*>(__return_address());
    rsi17 = reinterpret_cast<int32_t*>(0x39e);
    *reinterpret_cast<int32_t*>(&r12_18) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_18) + 4) = reinterpret_cast<int32_t>(fputc);
    v19 = r13_20;
    rdi21 = r13_22;
    fun_3b7();
    do {
        rbp23 = r12_18 * 0x3e8;
        *reinterpret_cast<int32_t*>(&r13_24) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_24) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r13_24 + rbp23) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi21) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi21) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi17 = v19;
                fun_3ee();
            }
            *rdi21 = *rsi17;
            rdi21 = v19;
            rsi17 = reinterpret_cast<int32_t*>(0x40a);
            fun_411();
            ++r13_24;
        } while (r13_24 != 0x4b0);
        ++r12_18;
    } while (r12_18 != 0x3e8);
    *reinterpret_cast<int32_t*>(&r12_25) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_25) + 4) = reinterpret_cast<int32_t>(fputc);
    fun_449(v19, 0x430, 0x437, rcx, r8, r9, v16, v19, a8, a9, a10, a11, a12, a13, a14);
    rcx26 = v19;
    fun_462(0x450, 22, 1, rcx26, r8, r9, v16, v19, a8, a9, a10, a11, a12, a13, a14);
    rsi27 = reinterpret_cast<int32_t*>(0x469);
    rdi28 = v19;
    fun_47a();
    do {
        rbp29 = r12_25 * 0x3e8;
        *reinterpret_cast<int32_t*>(&r13_30) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_30) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r13_30 + rbp29) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi28) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi28) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi27 = v19;
                fun_4ae();
            }
            *rdi28 = *rsi27;
            rdi28 = v19;
            rsi27 = reinterpret_cast<int32_t*>(0x4ca);
            fun_4d1();
            ++r13_30;
        } while (r13_30 != 0x4b0);
        ++r12_25;
    } while (r12_25 != 0x3e8);
    *reinterpret_cast<int32_t*>(&r12_31) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_31) + 4) = reinterpret_cast<int32_t>(fputc);
    fun_509(v19, 0x4f0, 0x4f7, rcx26, r8, r9, v16, v19, a8, a9, a10, a11, a12, a13, a14);
    rsi32 = reinterpret_cast<int32_t*>(0x510);
    rdi33 = v19;
    fun_521();
    do {
        rbp34 = r12_31 * 0x3e8;
        *reinterpret_cast<int32_t*>(&r13_35) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_35) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r13_35 + rbp34) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi33) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi33) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi32 = v19;
                fun_55e();
            }
            *rdi33 = *rsi32;
            rdi33 = v19;
            rsi32 = reinterpret_cast<int32_t*>(0x57a);
            fun_581();
            ++r13_35;
        } while (r13_35 != 0x4b0);
        ++r12_31;
    } while (r12_31 != 0x3e8);
    fun_5b3(v19, 0x5a0, 0x5a7, rcx26, r8, r9, v16, v19, a8, a9, a10, a11, a12, a13, a14);
    fun_346(rbx36, 0x5a0, 0x5a7, rcx26, r8, r9, v16);
    fun_34e(r14_37, 0x5a0, 0x5a7, rcx26, r8, r9, v16);
    fun_356(r15_38, 0x5a0, 0x5a7, rcx26, r8, r9, v16);
    fun_35e(a8, 0x5a0, 0x5a7, rcx26, r8, r9, v16);
    goto a15;
}

void fun_34e(void* rdi, int64_t rsi, int64_t rdx, int32_t* rcx, void* r8, int64_t r9, int32_t* a7) {
    int64_t r15_8;
    int32_t* r12_9;
    int64_t v10;

    fun_356(r15_8, rsi, rdx, rcx, r8, r9, __return_address());
    fun_35e(r12_9, rsi, rdx, rcx, r8, r9, __return_address());
    goto v10;
}

void fun_462(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx, void* r8, int64_t r9, int32_t* a7, int32_t* a8, int32_t* a9, int32_t* a10, int32_t* a11, int32_t* a12, int32_t* a13, int32_t* a14, int32_t* a15) {
    int32_t* v16;
    int32_t* rsi17;
    int32_t* rdi18;
    int32_t* r13_19;
    int64_t rbp20;
    int64_t r12_21;
    int64_t r13_22;
    int64_t r12_23;
    int32_t* rsi24;
    int32_t* rdi25;
    int64_t rbp26;
    int64_t r13_27;
    int32_t* rbx28;
    void* r14_29;
    int64_t r15_30;

    v16 = reinterpret_cast<int32_t*>(__return_address());
    rsi17 = reinterpret_cast<int32_t*>(0x469);
    rdi18 = r13_19;
    fun_47a();
    do {
        rbp20 = r12_21 * 0x3e8;
        *reinterpret_cast<int32_t*>(&r13_22) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_22) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r13_22 + rbp20) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi18) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi18) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi17 = a7;
                fun_4ae();
            }
            *rdi18 = *rsi17;
            rdi18 = a7;
            rsi17 = reinterpret_cast<int32_t*>(0x4ca);
            fun_4d1();
            ++r13_22;
        } while (r13_22 != 0x4b0);
        ++r12_21;
    } while (r12_21 != 0x3e8);
    *reinterpret_cast<int32_t*>(&r12_23) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_23) + 4) = reinterpret_cast<int32_t>(fputc);
    fun_509(a7, 0x4f0, 0x4f7, rcx, r8, r9, v16, a7, a8, a9, a10, a11, a12, a13, a14);
    rsi24 = reinterpret_cast<int32_t*>(0x510);
    rdi25 = a7;
    fun_521();
    do {
        rbp26 = r12_23 * 0x3e8;
        *reinterpret_cast<int32_t*>(&r13_27) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_27) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r13_27 + rbp26) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi25) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi25) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi24 = a7;
                fun_55e();
            }
            *rdi25 = *rsi24;
            rdi25 = a7;
            rsi24 = reinterpret_cast<int32_t*>(0x57a);
            fun_581();
            ++r13_27;
        } while (r13_27 != 0x4b0);
        ++r12_23;
    } while (r12_23 != 0x3e8);
    fun_5b3(a7, 0x5a0, 0x5a7, rcx, r8, r9, v16, a7, a8, a9, a10, a11, a12, a13, a14);
    fun_346(rbx28, 0x5a0, 0x5a7, rcx, r8, r9, v16);
    fun_34e(r14_29, 0x5a0, 0x5a7, rcx, r8, r9, v16);
    fun_356(r15_30, 0x5a0, 0x5a7, rcx, r8, r9, v16);
    fun_35e(a8, 0x5a0, 0x5a7, rcx, r8, r9, v16);
    goto a15;
}

void fun_521() {
    int32_t* v1;
    int64_t rbp2;
    int64_t r12_3;
    int64_t r13_4;
    int32_t* rdi5;
    int32_t* rsi6;
    int32_t* v7;
    int32_t* v8;
    int32_t* v9;
    int32_t* rcx10;
    void* r8_11;
    int64_t r9_12;
    int32_t* v13;
    int32_t* v14;
    int32_t* v15;
    int32_t* v16;
    int32_t* v17;
    int32_t* v18;
    int32_t* v19;
    int32_t* v20;
    int32_t* rbx21;
    int32_t* rcx22;
    void* r8_23;
    int64_t r9_24;
    void* r14_25;
    int32_t* rcx26;
    void* r8_27;
    int64_t r9_28;
    int64_t r15_29;
    int32_t* rcx30;
    void* r8_31;
    int64_t r9_32;
    int32_t* v33;
    int32_t* rcx34;
    void* r8_35;
    int64_t r9_36;
    int64_t v37;

    v1 = reinterpret_cast<int32_t*>(__return_address());
    do {
        rbp2 = r12_3 * 0x3e8;
        *reinterpret_cast<int32_t*>(&r13_4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_4) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r13_4 + rbp2) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi5) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi5) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi6 = v7;
                fun_55e();
            }
            *rdi5 = *rsi6;
            rdi5 = v8;
            rsi6 = reinterpret_cast<int32_t*>(0x57a);
            fun_581();
            ++r13_4;
        } while (r13_4 != 0x4b0);
        ++r12_3;
    } while (r12_3 != 0x3e8);
    fun_5b3(v9, 0x5a0, 0x5a7, rcx10, r8_11, r9_12, v1, v13, v14, v15, v16, v17, v18, v19, v20);
    fun_346(rbx21, 0x5a0, 0x5a7, rcx22, r8_23, r9_24, v1);
    fun_34e(r14_25, 0x5a0, 0x5a7, rcx26, r8_27, r9_28, v1);
    fun_356(r15_29, 0x5a0, 0x5a7, rcx30, r8_31, r9_32, v1);
    fun_35e(v33, 0x5a0, 0x5a7, rcx34, r8_35, r9_36, v1);
    goto v37;
}

void* fun_234(int64_t rdi, int64_t rsi);

int64_t fun_246(int64_t rdi, int64_t rsi);

struct s0 {
    int32_t f0;
    int32_t f4;
};

struct s1 {
    int32_t f0;
    int32_t f4;
};

int32_t* fun_258();

struct s2 {
    int32_t f0;
    int32_t f4;
};

void fun_222(int64_t rdi, int64_t rsi) {
    int32_t* rbx3;
    int32_t* rax4;
    void* rax5;
    void* r14_6;
    int64_t rax7;
    int64_t r15_8;
    struct s0* rdi9;
    struct s1* rsi10;
    int32_t* rax11;
    int32_t* r12_12;
    int64_t rax13;
    int64_t rcx14;
    int64_t rcx15;
    int64_t rdx16;
    struct s2* rsi17;
    int32_t* rsi18;
    int32_t* rdi19;
    int32_t* v20;
    int64_t rsi21;
    int64_t rdx22;
    int32_t* rcx23;
    void* r8_24;
    int64_t r9_25;
    int32_t ebp26;
    signed char** r13_27;
    int32_t* v28;
    int32_t** rax29;
    int32_t* r13_30;
    int32_t* rcx31;
    int32_t* v32;
    int32_t* v33;
    int32_t* v34;
    int32_t* v35;
    int32_t* v36;
    int32_t* v37;
    int64_t v38;
    int32_t* rsi39;
    int64_t r12_40;
    int32_t* v41;
    int32_t* rdi42;
    int64_t rbp43;
    int64_t r13_44;
    int64_t r12_45;
    int32_t* v46;
    int32_t* v47;
    int32_t* v48;
    int32_t* v49;
    int32_t* v50;
    int32_t* v51;
    int32_t* v52;
    int32_t* v53;
    int32_t* v54;
    int32_t* v55;
    int32_t* v56;
    int32_t* v57;
    int32_t* rsi58;
    int32_t* rdi59;
    int64_t rbp60;
    int64_t r13_61;
    int64_t r12_62;
    int32_t* v63;
    int32_t* v64;
    int32_t* v65;
    int32_t* v66;
    int32_t* v67;
    int32_t* v68;
    int32_t* rsi69;
    int32_t* rdi70;
    int64_t rbp71;
    int64_t r13_72;
    int32_t* v73;
    int32_t* v74;
    int32_t* v75;
    int32_t* v76;
    int32_t* v77;
    int32_t* v78;
    int64_t v79;

    rbx3 = rax4;
    rax5 = fun_234(0x124f80, 8);
    r14_6 = rax5;
    rax7 = fun_246(0x124f80, 8);
    r15_8 = rax7;
    *reinterpret_cast<int32_t*>(&rdi9) = 0x1f4;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi9) + 4) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(&rsi10) = 8;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi10) + 4) = reinterpret_cast<int32_t>(fputc);
    rax11 = fun_258();
    r12_12 = rax11;
    *reinterpret_cast<int32_t*>(&rax13) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax13) + 4) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(&rcx14) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx14) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        __asm__("xorps xmm0, xmm0");
        __asm__("cvtsi2sd xmm0, ecx");
        rdi9->f0 = rsi10->f0;
        rdi9 = reinterpret_cast<struct s0*>(&rdi9->f4);
        rsi10 = reinterpret_cast<struct s1*>(&rsi10->f4);
        ++rcx14;
    } while (rcx14 != 0x1f4);
    rdi9->f0 = rsi10->f0;
    rdi9->f4 = rsi10->f4;
    do {
        __asm__("xorps xmm2, xmm2");
        __asm__("cvtsi2sd xmm2, eax");
        *reinterpret_cast<int32_t*>(&rcx15) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx15) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rdx16 = rcx15 + 1;
            __asm__("xorps xmm3, xmm3");
            __asm__("cvtsi2sd xmm3, edx");
            __asm__("mulsd xmm3, xmm2");
            __asm__("divsd xmm3, xmm0");
            rsi17 = reinterpret_cast<struct s2*>(rax13 * 0x2580);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rbx3) + reinterpret_cast<int64_t>(rsi17)) = rsi17->f0;
            rsi18 = &rsi17->f4;
            __asm__("xorps xmm3, xmm3");
            __asm__("cvtsi2sd xmm3, edi");
            __asm__("mulsd xmm3, xmm2");
            __asm__("divsd xmm3, xmm1");
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(r14_6) + reinterpret_cast<int64_t>(rsi18)) = *rsi18;
            *reinterpret_cast<int32_t*>(&rdi19) = static_cast<int32_t>(rcx15 + 3);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi19) + 4) = reinterpret_cast<int32_t>(fputc);
            __asm__("xorps xmm3, xmm3");
            __asm__("cvtsi2sd xmm3, edi");
            __asm__("mulsd xmm3, xmm2");
            __asm__("divsd xmm3, xmm0");
            *rdi19 = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsi18 + 1) + r15_8);
            rcx15 = rdx16;
        } while (rdx16 != 0x4b0);
        ++rax13;
    } while (rax13 != 0x3e8);
    v20 = r12_12;
    *reinterpret_cast<int32_t*>(&rsi21) = 0x3e8;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi21) + 4) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(&rdx22) = 0x4b0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx22) + 4) = reinterpret_cast<int32_t>(fputc);
    rcx23 = rbx3;
    r8_24 = r14_6;
    r9_25 = r15_8;
    fun_330(0x1f4, 0x3e8, 0x4b0, rcx23, r8_24, r9_25, v20);
    if (ebp26 >= 43 && **r13_27 == fputc) {
        v28 = r12_12;
        rax29 = g37b;
        r13_30 = *rax29;
        rcx31 = r13_30;
        fun_397(0x385, 22, 1, rcx31, r8_24, r9_25, v20, v32, v28, v33, v34, v35, v36, v37, v38);
        rsi39 = reinterpret_cast<int32_t*>(0x39e);
        *reinterpret_cast<int32_t*>(&r12_40) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_40) + 4) = reinterpret_cast<int32_t>(fputc);
        v41 = r13_30;
        rdi42 = r13_30;
        fun_3b7();
        do {
            rbp43 = r12_40 * 0x3e8;
            *reinterpret_cast<int32_t*>(&r13_44) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_44) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("ror eax, 0x2");
                if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r13_44 + rbp43) * 0xcccccccd) <= 0xccccccc) {
                    *reinterpret_cast<int32_t*>(&rdi42) = 10;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi42) + 4) = reinterpret_cast<int32_t>(fputc);
                    rsi39 = v41;
                    fun_3ee();
                }
                *rdi42 = *rsi39;
                rdi42 = v41;
                rsi39 = reinterpret_cast<int32_t*>(0x40a);
                fun_411();
                ++r13_44;
            } while (r13_44 != 0x4b0);
            ++r12_40;
        } while (r12_40 != 0x3e8);
        *reinterpret_cast<int32_t*>(&r12_45) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_45) + 4) = reinterpret_cast<int32_t>(fputc);
        fun_449(v41, 0x430, 0x437, rcx31, r8_24, r9_25, v20, v41, v28, v46, v47, v48, v49, v50, v51);
        rcx23 = v41;
        fun_462(0x450, 22, 1, rcx23, r8_24, r9_25, v20, v41, v28, v52, v53, v54, v55, v56, v57);
        rsi58 = reinterpret_cast<int32_t*>(0x469);
        rdi59 = v41;
        fun_47a();
        do {
            rbp60 = r12_45 * 0x3e8;
            *reinterpret_cast<int32_t*>(&r13_61) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_61) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("ror eax, 0x2");
                if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r13_61 + rbp60) * 0xcccccccd) <= 0xccccccc) {
                    *reinterpret_cast<int32_t*>(&rdi59) = 10;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi59) + 4) = reinterpret_cast<int32_t>(fputc);
                    rsi58 = v41;
                    fun_4ae();
                }
                *rdi59 = *rsi58;
                rdi59 = v41;
                rsi58 = reinterpret_cast<int32_t*>(0x4ca);
                fun_4d1();
                ++r13_61;
            } while (r13_61 != 0x4b0);
            ++r12_45;
        } while (r12_45 != 0x3e8);
        *reinterpret_cast<int32_t*>(&r12_62) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_62) + 4) = reinterpret_cast<int32_t>(fputc);
        fun_509(v41, 0x4f0, 0x4f7, rcx23, r8_24, r9_25, v20, v41, v28, v63, v64, v65, v66, v67, v68);
        rsi69 = reinterpret_cast<int32_t*>(0x510);
        rdi70 = v41;
        fun_521();
        do {
            rbp71 = r12_62 * 0x3e8;
            *reinterpret_cast<int32_t*>(&r13_72) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_72) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("ror eax, 0x2");
                if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r13_72 + rbp71) * 0xcccccccd) <= 0xccccccc) {
                    *reinterpret_cast<int32_t*>(&rdi70) = 10;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi70) + 4) = reinterpret_cast<int32_t>(fputc);
                    rsi69 = v41;
                    fun_55e();
                }
                *rdi70 = *rsi69;
                rdi70 = v41;
                rsi69 = reinterpret_cast<int32_t*>(0x57a);
                fun_581();
                ++r13_72;
            } while (r13_72 != 0x4b0);
            ++r12_62;
        } while (r12_62 != 0x3e8);
        rsi21 = 0x5a0;
        rdx22 = 0x5a7;
        fun_5b3(v41, 0x5a0, 0x5a7, rcx23, r8_24, r9_25, v20, v41, v28, v73, v74, v75, v76, v77, v78);
        r12_12 = v28;
    }
    fun_346(rbx3, rsi21, rdx22, rcx23, r8_24, r9_25, v20);
    fun_34e(r14_6, rsi21, rdx22, rcx23, r8_24, r9_25, v20);
    fun_356(r15_8, rsi21, rdx22, rcx23, r8_24, r9_25, v20);
    fun_35e(r12_12, rsi21, rdx22, rcx23, r8_24, r9_25, v20);
    goto v79;
}

void fun_3b7() {
    int32_t* v1;
    int64_t rbp2;
    int64_t r12_3;
    int64_t r13_4;
    int32_t* rdi5;
    int32_t* rsi6;
    int32_t* v7;
    int32_t* v8;
    int64_t r12_9;
    int32_t* v10;
    int32_t* rcx11;
    void* r8_12;
    int64_t r9_13;
    int32_t* v14;
    int32_t* v15;
    int32_t* v16;
    int32_t* v17;
    int32_t* v18;
    int32_t* v19;
    int32_t* v20;
    int32_t* v21;
    int32_t* rcx22;
    void* r8_23;
    int64_t r9_24;
    int32_t* v25;
    int32_t* v26;
    int32_t* v27;
    int32_t* v28;
    int32_t* v29;
    int32_t* v30;
    int32_t* v31;
    int32_t* v32;
    int32_t* rsi33;
    int32_t* rdi34;
    int64_t rbp35;
    int64_t r13_36;
    int32_t* v37;
    int32_t* v38;
    int64_t r12_39;
    int32_t* v40;
    void* r8_41;
    int64_t r9_42;
    int32_t* v43;
    int32_t* v44;
    int32_t* v45;
    int32_t* v46;
    int32_t* v47;
    int32_t* v48;
    int32_t* v49;
    int32_t* v50;
    int32_t* rsi51;
    int32_t* rdi52;
    int64_t rbp53;
    int64_t r13_54;
    int32_t* v55;
    int32_t* v56;
    int32_t* v57;
    void* r8_58;
    int64_t r9_59;
    int32_t* v60;
    int32_t* v61;
    int32_t* v62;
    int32_t* v63;
    int32_t* v64;
    int32_t* v65;
    int32_t* v66;
    int32_t* v67;
    int32_t* rbx68;
    void* r8_69;
    int64_t r9_70;
    void* r14_71;
    void* r8_72;
    int64_t r9_73;
    int64_t r15_74;
    void* r8_75;
    int64_t r9_76;
    int32_t* v77;
    void* r8_78;
    int64_t r9_79;
    int64_t v80;

    v1 = reinterpret_cast<int32_t*>(__return_address());
    do {
        rbp2 = r12_3 * 0x3e8;
        *reinterpret_cast<int32_t*>(&r13_4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_4) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r13_4 + rbp2) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi5) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi5) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi6 = v7;
                fun_3ee();
            }
            *rdi5 = *rsi6;
            rdi5 = v8;
            rsi6 = reinterpret_cast<int32_t*>(0x40a);
            fun_411();
            ++r13_4;
        } while (r13_4 != 0x4b0);
        ++r12_3;
    } while (r12_3 != 0x3e8);
    *reinterpret_cast<int32_t*>(&r12_9) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_9) + 4) = reinterpret_cast<int32_t>(fputc);
    fun_449(v10, 0x430, 0x437, rcx11, r8_12, r9_13, v1, v14, v15, v16, v17, v18, v19, v20, v21);
    rcx22 = v10;
    fun_462(0x450, 22, 1, rcx22, r8_23, r9_24, v1, v25, v26, v27, v28, v29, v30, v31, v32);
    rsi33 = reinterpret_cast<int32_t*>(0x469);
    rdi34 = v10;
    fun_47a();
    do {
        rbp35 = r12_9 * 0x3e8;
        *reinterpret_cast<int32_t*>(&r13_36) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_36) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r13_36 + rbp35) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi34) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi34) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi33 = v37;
                fun_4ae();
            }
            *rdi34 = *rsi33;
            rdi34 = v38;
            rsi33 = reinterpret_cast<int32_t*>(0x4ca);
            fun_4d1();
            ++r13_36;
        } while (r13_36 != 0x4b0);
        ++r12_9;
    } while (r12_9 != 0x3e8);
    *reinterpret_cast<int32_t*>(&r12_39) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_39) + 4) = reinterpret_cast<int32_t>(fputc);
    fun_509(v40, 0x4f0, 0x4f7, rcx22, r8_41, r9_42, v1, v43, v44, v45, v46, v47, v48, v49, v50);
    rsi51 = reinterpret_cast<int32_t*>(0x510);
    rdi52 = v40;
    fun_521();
    do {
        rbp53 = r12_39 * 0x3e8;
        *reinterpret_cast<int32_t*>(&r13_54) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_54) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r13_54 + rbp53) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi52) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi52) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi51 = v55;
                fun_55e();
            }
            *rdi52 = *rsi51;
            rdi52 = v56;
            rsi51 = reinterpret_cast<int32_t*>(0x57a);
            fun_581();
            ++r13_54;
        } while (r13_54 != 0x4b0);
        ++r12_39;
    } while (r12_39 != 0x3e8);
    fun_5b3(v57, 0x5a0, 0x5a7, rcx22, r8_58, r9_59, v1, v60, v61, v62, v63, v64, v65, v66, v67);
    fun_346(rbx68, 0x5a0, 0x5a7, rcx22, r8_69, r9_70, v1);
    fun_34e(r14_71, 0x5a0, 0x5a7, rcx22, r8_72, r9_73, v1);
    fun_356(r15_74, 0x5a0, 0x5a7, rcx22, r8_75, r9_76, v1);
    fun_35e(v77, 0x5a0, 0x5a7, rcx22, r8_78, r9_79, v1);
    goto v80;
}

void fun_356(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx, void* r8, int64_t r9, int32_t* a7) {
    int32_t* r12_8;
    int64_t v9;

    fun_35e(r12_8, rsi, rdx, rcx, r8, r9, __return_address());
    goto v9;
}

void fun_47a() {
    int32_t* v1;
    int64_t rbp2;
    int64_t r12_3;
    int64_t r13_4;
    int32_t* rdi5;
    int32_t* rsi6;
    int32_t* v7;
    int32_t* v8;
    int64_t r12_9;
    int32_t* v10;
    int32_t* rcx11;
    void* r8_12;
    int64_t r9_13;
    int32_t* v14;
    int32_t* v15;
    int32_t* v16;
    int32_t* v17;
    int32_t* v18;
    int32_t* v19;
    int32_t* v20;
    int32_t* v21;
    int32_t* rsi22;
    int32_t* rdi23;
    int64_t rbp24;
    int64_t r13_25;
    int32_t* v26;
    int32_t* v27;
    int32_t* v28;
    int32_t* rcx29;
    void* r8_30;
    int64_t r9_31;
    int32_t* v32;
    int32_t* v33;
    int32_t* v34;
    int32_t* v35;
    int32_t* v36;
    int32_t* v37;
    int32_t* v38;
    int32_t* v39;
    int32_t* rbx40;
    int32_t* rcx41;
    void* r8_42;
    int64_t r9_43;
    void* r14_44;
    int32_t* rcx45;
    void* r8_46;
    int64_t r9_47;
    int64_t r15_48;
    int32_t* rcx49;
    void* r8_50;
    int64_t r9_51;
    int32_t* v52;
    int32_t* rcx53;
    void* r8_54;
    int64_t r9_55;
    int64_t v56;

    v1 = reinterpret_cast<int32_t*>(__return_address());
    do {
        rbp2 = r12_3 * 0x3e8;
        *reinterpret_cast<int32_t*>(&r13_4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_4) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r13_4 + rbp2) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi5) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi5) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi6 = v7;
                fun_4ae();
            }
            *rdi5 = *rsi6;
            rdi5 = v8;
            rsi6 = reinterpret_cast<int32_t*>(0x4ca);
            fun_4d1();
            ++r13_4;
        } while (r13_4 != 0x4b0);
        ++r12_3;
    } while (r12_3 != 0x3e8);
    *reinterpret_cast<int32_t*>(&r12_9) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_9) + 4) = reinterpret_cast<int32_t>(fputc);
    fun_509(v10, 0x4f0, 0x4f7, rcx11, r8_12, r9_13, v1, v14, v15, v16, v17, v18, v19, v20, v21);
    rsi22 = reinterpret_cast<int32_t*>(0x510);
    rdi23 = v10;
    fun_521();
    do {
        rbp24 = r12_9 * 0x3e8;
        *reinterpret_cast<int32_t*>(&r13_25) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_25) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r13_25 + rbp24) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi23) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi23) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi22 = v26;
                fun_55e();
            }
            *rdi23 = *rsi22;
            rdi23 = v27;
            rsi22 = reinterpret_cast<int32_t*>(0x57a);
            fun_581();
            ++r13_25;
        } while (r13_25 != 0x4b0);
        ++r12_9;
    } while (r12_9 != 0x3e8);
    fun_5b3(v28, 0x5a0, 0x5a7, rcx29, r8_30, r9_31, v1, v32, v33, v34, v35, v36, v37, v38, v39);
    fun_346(rbx40, 0x5a0, 0x5a7, rcx41, r8_42, r9_43, v1);
    fun_34e(r14_44, 0x5a0, 0x5a7, rcx45, r8_46, r9_47, v1);
    fun_356(r15_48, 0x5a0, 0x5a7, rcx49, r8_50, r9_51, v1);
    fun_35e(v52, 0x5a0, 0x5a7, rcx53, r8_54, r9_55, v1);
    goto v56;
}

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

void* fun_234(int64_t rdi, int64_t rsi) {
    void* r14_3;
    void* rax4;
    int64_t rax5;
    int64_t r15_6;
    struct s3* rdi7;
    struct s4* rsi8;
    int32_t* rax9;
    int32_t* r12_10;
    int64_t rax11;
    int64_t rcx12;
    int64_t rcx13;
    int64_t rdx14;
    struct s5* rsi15;
    int32_t* rbx16;
    int32_t* rsi17;
    int32_t* rdi18;
    int32_t* v19;
    int64_t rsi20;
    int64_t rdx21;
    int32_t* rcx22;
    int32_t* rbx23;
    void* r8_24;
    int64_t r9_25;
    int32_t ebp26;
    signed char** r13_27;
    int32_t* v28;
    int32_t** rax29;
    int32_t* r13_30;
    int32_t* rcx31;
    int32_t* v32;
    int32_t* v33;
    int32_t* v34;
    int32_t* v35;
    int32_t* v36;
    int32_t* v37;
    int64_t v38;
    int32_t* rsi39;
    int64_t r12_40;
    int32_t* v41;
    int32_t* rdi42;
    int64_t rbp43;
    int64_t r13_44;
    int64_t r12_45;
    int32_t* v46;
    int32_t* v47;
    int32_t* v48;
    int32_t* v49;
    int32_t* v50;
    int32_t* v51;
    int32_t* v52;
    int32_t* v53;
    int32_t* v54;
    int32_t* v55;
    int32_t* v56;
    int32_t* v57;
    int32_t* rsi58;
    int32_t* rdi59;
    int64_t rbp60;
    int64_t r13_61;
    int64_t r12_62;
    int32_t* v63;
    int32_t* v64;
    int32_t* v65;
    int32_t* v66;
    int32_t* v67;
    int32_t* v68;
    int32_t* rsi69;
    int32_t* rdi70;
    int64_t rbp71;
    int64_t r13_72;
    int32_t* v73;
    int32_t* v74;
    int32_t* v75;
    int32_t* v76;
    int32_t* v77;
    int32_t* v78;
    int32_t* rbx79;
    int64_t v80;

    r14_3 = rax4;
    rax5 = fun_246(0x124f80, 8);
    r15_6 = rax5;
    *reinterpret_cast<int32_t*>(&rdi7) = 0x1f4;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi7) + 4) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(&rsi8) = 8;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi8) + 4) = reinterpret_cast<int32_t>(fputc);
    rax9 = fun_258();
    r12_10 = rax9;
    *reinterpret_cast<int32_t*>(&rax11) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax11) + 4) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(&rcx12) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx12) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        __asm__("xorps xmm0, xmm0");
        __asm__("cvtsi2sd xmm0, ecx");
        rdi7->f0 = rsi8->f0;
        rdi7 = reinterpret_cast<struct s3*>(&rdi7->f4);
        rsi8 = reinterpret_cast<struct s4*>(&rsi8->f4);
        ++rcx12;
    } while (rcx12 != 0x1f4);
    rdi7->f0 = rsi8->f0;
    rdi7->f4 = rsi8->f4;
    do {
        __asm__("xorps xmm2, xmm2");
        __asm__("cvtsi2sd xmm2, eax");
        *reinterpret_cast<int32_t*>(&rcx13) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx13) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rdx14 = rcx13 + 1;
            __asm__("xorps xmm3, xmm3");
            __asm__("cvtsi2sd xmm3, edx");
            __asm__("mulsd xmm3, xmm2");
            __asm__("divsd xmm3, xmm0");
            rsi15 = reinterpret_cast<struct s5*>(rax11 * 0x2580);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rbx16) + reinterpret_cast<int64_t>(rsi15)) = rsi15->f0;
            rsi17 = &rsi15->f4;
            __asm__("xorps xmm3, xmm3");
            __asm__("cvtsi2sd xmm3, edi");
            __asm__("mulsd xmm3, xmm2");
            __asm__("divsd xmm3, xmm1");
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(r14_3) + reinterpret_cast<int64_t>(rsi17)) = *rsi17;
            *reinterpret_cast<int32_t*>(&rdi18) = static_cast<int32_t>(rcx13 + 3);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi18) + 4) = reinterpret_cast<int32_t>(fputc);
            __asm__("xorps xmm3, xmm3");
            __asm__("cvtsi2sd xmm3, edi");
            __asm__("mulsd xmm3, xmm2");
            __asm__("divsd xmm3, xmm0");
            *rdi18 = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsi17 + 1) + r15_6);
            rcx13 = rdx14;
        } while (rdx14 != 0x4b0);
        ++rax11;
    } while (rax11 != 0x3e8);
    v19 = r12_10;
    *reinterpret_cast<int32_t*>(&rsi20) = 0x3e8;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi20) + 4) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(&rdx21) = 0x4b0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx21) + 4) = reinterpret_cast<int32_t>(fputc);
    rcx22 = rbx23;
    r8_24 = r14_3;
    r9_25 = r15_6;
    fun_330(0x1f4, 0x3e8, 0x4b0, rcx22, r8_24, r9_25, v19);
    if (ebp26 >= 43 && **r13_27 == fputc) {
        v28 = r12_10;
        rax29 = g37b;
        r13_30 = *rax29;
        rcx31 = r13_30;
        fun_397(0x385, 22, 1, rcx31, r8_24, r9_25, v19, v32, v28, v33, v34, v35, v36, v37, v38);
        rsi39 = reinterpret_cast<int32_t*>(0x39e);
        *reinterpret_cast<int32_t*>(&r12_40) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_40) + 4) = reinterpret_cast<int32_t>(fputc);
        v41 = r13_30;
        rdi42 = r13_30;
        fun_3b7();
        do {
            rbp43 = r12_40 * 0x3e8;
            *reinterpret_cast<int32_t*>(&r13_44) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_44) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("ror eax, 0x2");
                if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r13_44 + rbp43) * 0xcccccccd) <= 0xccccccc) {
                    *reinterpret_cast<int32_t*>(&rdi42) = 10;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi42) + 4) = reinterpret_cast<int32_t>(fputc);
                    rsi39 = v41;
                    fun_3ee();
                }
                *rdi42 = *rsi39;
                rdi42 = v41;
                rsi39 = reinterpret_cast<int32_t*>(0x40a);
                fun_411();
                ++r13_44;
            } while (r13_44 != 0x4b0);
            ++r12_40;
        } while (r12_40 != 0x3e8);
        *reinterpret_cast<int32_t*>(&r12_45) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_45) + 4) = reinterpret_cast<int32_t>(fputc);
        fun_449(v41, 0x430, 0x437, rcx31, r8_24, r9_25, v19, v41, v28, v46, v47, v48, v49, v50, v51);
        rcx22 = v41;
        fun_462(0x450, 22, 1, rcx22, r8_24, r9_25, v19, v41, v28, v52, v53, v54, v55, v56, v57);
        rsi58 = reinterpret_cast<int32_t*>(0x469);
        rdi59 = v41;
        fun_47a();
        do {
            rbp60 = r12_45 * 0x3e8;
            *reinterpret_cast<int32_t*>(&r13_61) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_61) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("ror eax, 0x2");
                if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r13_61 + rbp60) * 0xcccccccd) <= 0xccccccc) {
                    *reinterpret_cast<int32_t*>(&rdi59) = 10;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi59) + 4) = reinterpret_cast<int32_t>(fputc);
                    rsi58 = v41;
                    fun_4ae();
                }
                *rdi59 = *rsi58;
                rdi59 = v41;
                rsi58 = reinterpret_cast<int32_t*>(0x4ca);
                fun_4d1();
                ++r13_61;
            } while (r13_61 != 0x4b0);
            ++r12_45;
        } while (r12_45 != 0x3e8);
        *reinterpret_cast<int32_t*>(&r12_62) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_62) + 4) = reinterpret_cast<int32_t>(fputc);
        fun_509(v41, 0x4f0, 0x4f7, rcx22, r8_24, r9_25, v19, v41, v28, v63, v64, v65, v66, v67, v68);
        rsi69 = reinterpret_cast<int32_t*>(0x510);
        rdi70 = v41;
        fun_521();
        do {
            rbp71 = r12_62 * 0x3e8;
            *reinterpret_cast<int32_t*>(&r13_72) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_72) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("ror eax, 0x2");
                if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r13_72 + rbp71) * 0xcccccccd) <= 0xccccccc) {
                    *reinterpret_cast<int32_t*>(&rdi70) = 10;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi70) + 4) = reinterpret_cast<int32_t>(fputc);
                    rsi69 = v41;
                    fun_55e();
                }
                *rdi70 = *rsi69;
                rdi70 = v41;
                rsi69 = reinterpret_cast<int32_t*>(0x57a);
                fun_581();
                ++r13_72;
            } while (r13_72 != 0x4b0);
            ++r12_62;
        } while (r12_62 != 0x3e8);
        rsi20 = 0x5a0;
        rdx21 = 0x5a7;
        fun_5b3(v41, 0x5a0, 0x5a7, rcx22, r8_24, r9_25, v19, v41, v28, v73, v74, v75, v76, v77, v78);
        r12_10 = v28;
    }
    fun_346(rbx79, rsi20, rdx21, rcx22, r8_24, r9_25, v19);
    fun_34e(r14_3, rsi20, rdx21, rcx22, r8_24, r9_25, v19);
    fun_356(r15_6, rsi20, rdx21, rcx22, r8_24, r9_25, v19);
    fun_35e(r12_10, rsi20, rdx21, rcx22, r8_24, r9_25, v19);
    goto v80;
}

void fun_35e(int32_t* rdi, int64_t rsi, int64_t rdx, int32_t* rcx, void* r8, int64_t r9, int32_t* a7) {
    int64_t v8;

    goto v8;
}

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

int64_t fun_246(int64_t rdi, int64_t rsi) {
    int64_t r15_3;
    int64_t rax4;
    struct s6* rdi5;
    struct s7* rsi6;
    int32_t* rax7;
    int32_t* r12_8;
    int64_t rax9;
    int64_t rcx10;
    int64_t rcx11;
    int64_t rdx12;
    struct s8* rsi13;
    int32_t* rbx14;
    int32_t* rsi15;
    void* r14_16;
    int32_t* rdi17;
    int32_t* v18;
    int64_t rsi19;
    int64_t rdx20;
    int32_t* rcx21;
    int32_t* rbx22;
    void* r8_23;
    void* r14_24;
    int64_t r9_25;
    int32_t ebp26;
    signed char** r13_27;
    int32_t* v28;
    int32_t** rax29;
    int32_t* r13_30;
    int32_t* rcx31;
    int32_t* v32;
    int32_t* v33;
    int32_t* v34;
    int32_t* v35;
    int32_t* v36;
    int32_t* v37;
    int64_t v38;
    int32_t* rsi39;
    int64_t r12_40;
    int32_t* v41;
    int32_t* rdi42;
    int64_t rbp43;
    int64_t r13_44;
    int64_t r12_45;
    int32_t* v46;
    int32_t* v47;
    int32_t* v48;
    int32_t* v49;
    int32_t* v50;
    int32_t* v51;
    int32_t* v52;
    int32_t* v53;
    int32_t* v54;
    int32_t* v55;
    int32_t* v56;
    int32_t* v57;
    int32_t* rsi58;
    int32_t* rdi59;
    int64_t rbp60;
    int64_t r13_61;
    int64_t r12_62;
    int32_t* v63;
    int32_t* v64;
    int32_t* v65;
    int32_t* v66;
    int32_t* v67;
    int32_t* v68;
    int32_t* rsi69;
    int32_t* rdi70;
    int64_t rbp71;
    int64_t r13_72;
    int32_t* v73;
    int32_t* v74;
    int32_t* v75;
    int32_t* v76;
    int32_t* v77;
    int32_t* v78;
    int32_t* rbx79;
    void* r14_80;
    int64_t v81;

    r15_3 = rax4;
    *reinterpret_cast<int32_t*>(&rdi5) = 0x1f4;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi5) + 4) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(&rsi6) = 8;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi6) + 4) = reinterpret_cast<int32_t>(fputc);
    rax7 = fun_258();
    r12_8 = rax7;
    *reinterpret_cast<int32_t*>(&rax9) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax9) + 4) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(&rcx10) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx10) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        __asm__("xorps xmm0, xmm0");
        __asm__("cvtsi2sd xmm0, ecx");
        rdi5->f0 = rsi6->f0;
        rdi5 = reinterpret_cast<struct s6*>(&rdi5->f4);
        rsi6 = reinterpret_cast<struct s7*>(&rsi6->f4);
        ++rcx10;
    } while (rcx10 != 0x1f4);
    rdi5->f0 = rsi6->f0;
    rdi5->f4 = rsi6->f4;
    do {
        __asm__("xorps xmm2, xmm2");
        __asm__("cvtsi2sd xmm2, eax");
        *reinterpret_cast<int32_t*>(&rcx11) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx11) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rdx12 = rcx11 + 1;
            __asm__("xorps xmm3, xmm3");
            __asm__("cvtsi2sd xmm3, edx");
            __asm__("mulsd xmm3, xmm2");
            __asm__("divsd xmm3, xmm0");
            rsi13 = reinterpret_cast<struct s8*>(rax9 * 0x2580);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rbx14) + reinterpret_cast<int64_t>(rsi13)) = rsi13->f0;
            rsi15 = &rsi13->f4;
            __asm__("xorps xmm3, xmm3");
            __asm__("cvtsi2sd xmm3, edi");
            __asm__("mulsd xmm3, xmm2");
            __asm__("divsd xmm3, xmm1");
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(r14_16) + reinterpret_cast<int64_t>(rsi15)) = *rsi15;
            *reinterpret_cast<int32_t*>(&rdi17) = static_cast<int32_t>(rcx11 + 3);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi17) + 4) = reinterpret_cast<int32_t>(fputc);
            __asm__("xorps xmm3, xmm3");
            __asm__("cvtsi2sd xmm3, edi");
            __asm__("mulsd xmm3, xmm2");
            __asm__("divsd xmm3, xmm0");
            *rdi17 = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsi15 + 1) + r15_3);
            rcx11 = rdx12;
        } while (rdx12 != 0x4b0);
        ++rax9;
    } while (rax9 != 0x3e8);
    v18 = r12_8;
    *reinterpret_cast<int32_t*>(&rsi19) = 0x3e8;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi19) + 4) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(&rdx20) = 0x4b0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx20) + 4) = reinterpret_cast<int32_t>(fputc);
    rcx21 = rbx22;
    r8_23 = r14_24;
    r9_25 = r15_3;
    fun_330(0x1f4, 0x3e8, 0x4b0, rcx21, r8_23, r9_25, v18);
    if (ebp26 >= 43 && **r13_27 == fputc) {
        v28 = r12_8;
        rax29 = g37b;
        r13_30 = *rax29;
        rcx31 = r13_30;
        fun_397(0x385, 22, 1, rcx31, r8_23, r9_25, v18, v32, v28, v33, v34, v35, v36, v37, v38);
        rsi39 = reinterpret_cast<int32_t*>(0x39e);
        *reinterpret_cast<int32_t*>(&r12_40) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_40) + 4) = reinterpret_cast<int32_t>(fputc);
        v41 = r13_30;
        rdi42 = r13_30;
        fun_3b7();
        do {
            rbp43 = r12_40 * 0x3e8;
            *reinterpret_cast<int32_t*>(&r13_44) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_44) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("ror eax, 0x2");
                if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r13_44 + rbp43) * 0xcccccccd) <= 0xccccccc) {
                    *reinterpret_cast<int32_t*>(&rdi42) = 10;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi42) + 4) = reinterpret_cast<int32_t>(fputc);
                    rsi39 = v41;
                    fun_3ee();
                }
                *rdi42 = *rsi39;
                rdi42 = v41;
                rsi39 = reinterpret_cast<int32_t*>(0x40a);
                fun_411();
                ++r13_44;
            } while (r13_44 != 0x4b0);
            ++r12_40;
        } while (r12_40 != 0x3e8);
        *reinterpret_cast<int32_t*>(&r12_45) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_45) + 4) = reinterpret_cast<int32_t>(fputc);
        fun_449(v41, 0x430, 0x437, rcx31, r8_23, r9_25, v18, v41, v28, v46, v47, v48, v49, v50, v51);
        rcx21 = v41;
        fun_462(0x450, 22, 1, rcx21, r8_23, r9_25, v18, v41, v28, v52, v53, v54, v55, v56, v57);
        rsi58 = reinterpret_cast<int32_t*>(0x469);
        rdi59 = v41;
        fun_47a();
        do {
            rbp60 = r12_45 * 0x3e8;
            *reinterpret_cast<int32_t*>(&r13_61) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_61) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("ror eax, 0x2");
                if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r13_61 + rbp60) * 0xcccccccd) <= 0xccccccc) {
                    *reinterpret_cast<int32_t*>(&rdi59) = 10;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi59) + 4) = reinterpret_cast<int32_t>(fputc);
                    rsi58 = v41;
                    fun_4ae();
                }
                *rdi59 = *rsi58;
                rdi59 = v41;
                rsi58 = reinterpret_cast<int32_t*>(0x4ca);
                fun_4d1();
                ++r13_61;
            } while (r13_61 != 0x4b0);
            ++r12_45;
        } while (r12_45 != 0x3e8);
        *reinterpret_cast<int32_t*>(&r12_62) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_62) + 4) = reinterpret_cast<int32_t>(fputc);
        fun_509(v41, 0x4f0, 0x4f7, rcx21, r8_23, r9_25, v18, v41, v28, v63, v64, v65, v66, v67, v68);
        rsi69 = reinterpret_cast<int32_t*>(0x510);
        rdi70 = v41;
        fun_521();
        do {
            rbp71 = r12_62 * 0x3e8;
            *reinterpret_cast<int32_t*>(&r13_72) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_72) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("ror eax, 0x2");
                if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r13_72 + rbp71) * 0xcccccccd) <= 0xccccccc) {
                    *reinterpret_cast<int32_t*>(&rdi70) = 10;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi70) + 4) = reinterpret_cast<int32_t>(fputc);
                    rsi69 = v41;
                    fun_55e();
                }
                *rdi70 = *rsi69;
                rdi70 = v41;
                rsi69 = reinterpret_cast<int32_t*>(0x57a);
                fun_581();
                ++r13_72;
            } while (r13_72 != 0x4b0);
            ++r12_62;
        } while (r12_62 != 0x3e8);
        rsi19 = 0x5a0;
        rdx20 = 0x5a7;
        fun_5b3(v41, 0x5a0, 0x5a7, rcx21, r8_23, r9_25, v18, v41, v28, v73, v74, v75, v76, v77, v78);
        r12_8 = v28;
    }
    fun_346(rbx79, rsi19, rdx20, rcx21, r8_23, r9_25, v18);
    fun_34e(r14_80, rsi19, rdx20, rcx21, r8_23, r9_25, v18);
    fun_356(r15_3, rsi19, rdx20, rcx21, r8_23, r9_25, v18);
    fun_35e(r12_8, rsi19, rdx20, rcx21, r8_23, r9_25, v18);
    goto v81;
}

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

int32_t* fun_258() {
    int32_t* r12_1;
    int32_t* rax2;
    int64_t rax3;
    int64_t rcx4;
    struct s9* rdi5;
    struct s10* rsi6;
    int64_t rcx7;
    int64_t rdx8;
    struct s11* rsi9;
    int32_t* rbx10;
    int32_t* rsi11;
    void* r14_12;
    int32_t* rdi13;
    int64_t r15_14;
    int32_t* v15;
    int64_t rsi16;
    int64_t rdx17;
    int32_t* rcx18;
    int32_t* rbx19;
    void* r8_20;
    void* r14_21;
    int64_t r9_22;
    int64_t r15_23;
    int32_t ebp24;
    signed char** r13_25;
    int32_t* v26;
    int32_t** rax27;
    int32_t* r13_28;
    int32_t* rcx29;
    int32_t* v30;
    int32_t* v31;
    int32_t* v32;
    int32_t* v33;
    int32_t* v34;
    int32_t* v35;
    int64_t v36;
    int32_t* rsi37;
    int64_t r12_38;
    int32_t* v39;
    int32_t* rdi40;
    int64_t rbp41;
    int64_t r13_42;
    int64_t r12_43;
    int32_t* v44;
    int32_t* v45;
    int32_t* v46;
    int32_t* v47;
    int32_t* v48;
    int32_t* v49;
    int32_t* v50;
    int32_t* v51;
    int32_t* v52;
    int32_t* v53;
    int32_t* v54;
    int32_t* v55;
    int32_t* rsi56;
    int32_t* rdi57;
    int64_t rbp58;
    int64_t r13_59;
    int64_t r12_60;
    int32_t* v61;
    int32_t* v62;
    int32_t* v63;
    int32_t* v64;
    int32_t* v65;
    int32_t* v66;
    int32_t* rsi67;
    int32_t* rdi68;
    int64_t rbp69;
    int64_t r13_70;
    int32_t* v71;
    int32_t* v72;
    int32_t* v73;
    int32_t* v74;
    int32_t* v75;
    int32_t* v76;
    int32_t* rbx77;
    void* r14_78;
    int64_t r15_79;
    int64_t v80;

    r12_1 = rax2;
    *reinterpret_cast<int32_t*>(&rax3) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax3) + 4) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(&rcx4) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx4) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        __asm__("xorps xmm0, xmm0");
        __asm__("cvtsi2sd xmm0, ecx");
        rdi5->f0 = rsi6->f0;
        rdi5 = reinterpret_cast<struct s9*>(&rdi5->f4);
        rsi6 = reinterpret_cast<struct s10*>(&rsi6->f4);
        ++rcx4;
    } while (rcx4 != 0x1f4);
    rdi5->f0 = rsi6->f0;
    rdi5->f4 = rsi6->f4;
    do {
        __asm__("xorps xmm2, xmm2");
        __asm__("cvtsi2sd xmm2, eax");
        *reinterpret_cast<int32_t*>(&rcx7) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx7) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            rdx8 = rcx7 + 1;
            __asm__("xorps xmm3, xmm3");
            __asm__("cvtsi2sd xmm3, edx");
            __asm__("mulsd xmm3, xmm2");
            __asm__("divsd xmm3, xmm0");
            rsi9 = reinterpret_cast<struct s11*>(rax3 * 0x2580);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rbx10) + reinterpret_cast<int64_t>(rsi9)) = rsi9->f0;
            rsi11 = &rsi9->f4;
            __asm__("xorps xmm3, xmm3");
            __asm__("cvtsi2sd xmm3, edi");
            __asm__("mulsd xmm3, xmm2");
            __asm__("divsd xmm3, xmm1");
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(r14_12) + reinterpret_cast<int64_t>(rsi11)) = *rsi11;
            *reinterpret_cast<int32_t*>(&rdi13) = static_cast<int32_t>(rcx7 + 3);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi13) + 4) = reinterpret_cast<int32_t>(fputc);
            __asm__("xorps xmm3, xmm3");
            __asm__("cvtsi2sd xmm3, edi");
            __asm__("mulsd xmm3, xmm2");
            __asm__("divsd xmm3, xmm0");
            *rdi13 = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsi11 + 1) + r15_14);
            rcx7 = rdx8;
        } while (rdx8 != 0x4b0);
        ++rax3;
    } while (rax3 != 0x3e8);
    v15 = r12_1;
    *reinterpret_cast<int32_t*>(&rsi16) = 0x3e8;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi16) + 4) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(&rdx17) = 0x4b0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx17) + 4) = reinterpret_cast<int32_t>(fputc);
    rcx18 = rbx19;
    r8_20 = r14_21;
    r9_22 = r15_23;
    fun_330(0x1f4, 0x3e8, 0x4b0, rcx18, r8_20, r9_22, v15);
    if (ebp24 >= 43 && **r13_25 == fputc) {
        v26 = r12_1;
        rax27 = g37b;
        r13_28 = *rax27;
        rcx29 = r13_28;
        fun_397(0x385, 22, 1, rcx29, r8_20, r9_22, v15, v30, v26, v31, v32, v33, v34, v35, v36);
        rsi37 = reinterpret_cast<int32_t*>(0x39e);
        *reinterpret_cast<int32_t*>(&r12_38) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_38) + 4) = reinterpret_cast<int32_t>(fputc);
        v39 = r13_28;
        rdi40 = r13_28;
        fun_3b7();
        do {
            rbp41 = r12_38 * 0x3e8;
            *reinterpret_cast<int32_t*>(&r13_42) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_42) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("ror eax, 0x2");
                if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r13_42 + rbp41) * 0xcccccccd) <= 0xccccccc) {
                    *reinterpret_cast<int32_t*>(&rdi40) = 10;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi40) + 4) = reinterpret_cast<int32_t>(fputc);
                    rsi37 = v39;
                    fun_3ee();
                }
                *rdi40 = *rsi37;
                rdi40 = v39;
                rsi37 = reinterpret_cast<int32_t*>(0x40a);
                fun_411();
                ++r13_42;
            } while (r13_42 != 0x4b0);
            ++r12_38;
        } while (r12_38 != 0x3e8);
        *reinterpret_cast<int32_t*>(&r12_43) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_43) + 4) = reinterpret_cast<int32_t>(fputc);
        fun_449(v39, 0x430, 0x437, rcx29, r8_20, r9_22, v15, v39, v26, v44, v45, v46, v47, v48, v49);
        rcx18 = v39;
        fun_462(0x450, 22, 1, rcx18, r8_20, r9_22, v15, v39, v26, v50, v51, v52, v53, v54, v55);
        rsi56 = reinterpret_cast<int32_t*>(0x469);
        rdi57 = v39;
        fun_47a();
        do {
            rbp58 = r12_43 * 0x3e8;
            *reinterpret_cast<int32_t*>(&r13_59) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_59) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("ror eax, 0x2");
                if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r13_59 + rbp58) * 0xcccccccd) <= 0xccccccc) {
                    *reinterpret_cast<int32_t*>(&rdi57) = 10;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi57) + 4) = reinterpret_cast<int32_t>(fputc);
                    rsi56 = v39;
                    fun_4ae();
                }
                *rdi57 = *rsi56;
                rdi57 = v39;
                rsi56 = reinterpret_cast<int32_t*>(0x4ca);
                fun_4d1();
                ++r13_59;
            } while (r13_59 != 0x4b0);
            ++r12_43;
        } while (r12_43 != 0x3e8);
        *reinterpret_cast<int32_t*>(&r12_60) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_60) + 4) = reinterpret_cast<int32_t>(fputc);
        fun_509(v39, 0x4f0, 0x4f7, rcx18, r8_20, r9_22, v15, v39, v26, v61, v62, v63, v64, v65, v66);
        rsi67 = reinterpret_cast<int32_t*>(0x510);
        rdi68 = v39;
        fun_521();
        do {
            rbp69 = r12_60 * 0x3e8;
            *reinterpret_cast<int32_t*>(&r13_70) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_70) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("ror eax, 0x2");
                if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r13_70 + rbp69) * 0xcccccccd) <= 0xccccccc) {
                    *reinterpret_cast<int32_t*>(&rdi68) = 10;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi68) + 4) = reinterpret_cast<int32_t>(fputc);
                    rsi67 = v39;
                    fun_55e();
                }
                *rdi68 = *rsi67;
                rdi68 = v39;
                rsi67 = reinterpret_cast<int32_t*>(0x57a);
                fun_581();
                ++r13_70;
            } while (r13_70 != 0x4b0);
            ++r12_60;
        } while (r12_60 != 0x3e8);
        rsi16 = 0x5a0;
        rdx17 = 0x5a7;
        fun_5b3(v39, 0x5a0, 0x5a7, rcx18, r8_20, r9_22, v15, v39, v26, v71, v72, v73, v74, v75, v76);
        r12_1 = v26;
    }
    fun_346(rbx77, rsi16, rdx17, rcx18, r8_20, r9_22, v15);
    fun_34e(r14_78, rsi16, rdx17, rcx18, r8_20, r9_22, v15);
    fun_356(r15_79, rsi16, rdx17, rcx18, r8_20, r9_22, v15);
    fun_35e(r12_1, rsi16, rdx17, rcx18, r8_20, r9_22, v15);
    goto v80;
}

void fputc(int32_t edi, int64_t rsi) {
}

void fun_19(int32_t edi) {
    int1_t zf2;

    if (zf2) {
    }
}

void fun_f8(uint32_t* rdi) {
    int64_t rbp2;
    int64_t rbp3;
    int32_t edx4;
    uint1_t cf5;
    int64_t r13_6;
    int64_t rbx7;

    rdi[rbp2 * 2] = rdi[rbp3 * 2] + edx4 + cf5;
    if (r13_6 + 1 != rbx7) {
    }
}

struct s12 {
    int32_t f0;
    int32_t f4;
};

struct s13 {
    int32_t f0;
    int32_t f4;
};

void fun_105() {
    int64_t r12_1;
    int64_t r14_2;
    int32_t edx3;
    int32_t edx4;
    int64_t r13_5;
    int64_t rbp6;
    int32_t* r9_7;
    struct s12* rsi8;
    struct s13* rsi9;
    int32_t* r9_10;
    int64_t rbx11;

    while (++r12_1, r12_1 != r14_2) {
        if (reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(edx3 < reinterpret_cast<int32_t>(fputc) == fputc)) | reinterpret_cast<uint1_t>(edx4 == fputc)) 
            continue;
        r13_5 = r12_1 - 1;
        *reinterpret_cast<int32_t*>(&rbp6) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp6) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            r9_7[r12_1 * 0x960] = rsi8->f0;
            rsi9 = reinterpret_cast<struct s13*>(&rsi8->f4);
            __asm__("subsd xmm2, [rdi+rbp*8]");
            __asm__("mulsd xmm2, xmm0");
            __asm__("addsd xmm2, [rax+rbp*8]");
            r9_10[r13_5 * 0x960] = rsi9->f0;
            rsi8 = reinterpret_cast<struct s12*>(&rsi9->f4);
            ++rbp6;
        } while (rbp6 != rbx11);
    }
}

struct s14 {
    int32_t f0;
    int32_t f4;
};

struct s15 {
    int32_t f0;
    int32_t f4;
};

void fun_170() {
    int32_t v1;
    int64_t r12_2;
    int32_t edx3;
    int64_t rbp4;
    int64_t rax5;
    int32_t* rcx6;
    struct s14* rsi7;
    struct s15* rsi8;
    int32_t* r9_9;
    int64_t rax10;
    int64_t r11_11;
    int64_t r10_12;

    if (v1 > 1) {
        *reinterpret_cast<int32_t*>(&r12_2) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_2) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            if (edx3 >= 2) {
                *reinterpret_cast<int32_t*>(&rbp4) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp4) + 4) = reinterpret_cast<int32_t>(fputc);
                do {
                    rax5 = r12_2 * 0x2580;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rcx6) + rax5) = rsi7->f0;
                    rsi8 = reinterpret_cast<struct s15*>(&rsi7->f4);
                    __asm__("subsd xmm2, [rdi+rbp*8]");
                    __asm__("addsd xmm2, [rdi+rbp*8]");
                    __asm__("subsd xmm2, [rax+rbp*8]");
                    __asm__("mulsd xmm2, xmm1");
                    __asm__("addsd xmm2, [rdi+rbp*8]");
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(r9_9) + rax5) = rsi8->f0;
                    rsi7 = reinterpret_cast<struct s14*>(&rsi8->f4);
                    rax10 = rbp4 + 1;
                    rbp4 = rax10;
                } while (rax10 != r11_11);
            }
            ++r12_2;
        } while (r12_2 != r10_12);
    }
}

void fun_1ed() {
    int64_t v1;

    goto v1;
}

void submain(int32_t edi, int64_t rsi) {
    fun_222(0x124f80, 8);
}

