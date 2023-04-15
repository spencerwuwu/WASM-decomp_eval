
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

void fputc();

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

void fun_348() {
    int64_t v1;
    struct s0* rdi2;
    struct s1* rsi3;
    struct s2* rdi4;
    struct s3* rsi5;
    struct s2* rdi6;
    struct s3* rsi7;
    struct s0* rdi8;
    struct s1* rsi9;
    int64_t rbp10;
    int64_t v11;
    int64_t rbx12;
    int64_t v13;
    int32_t v14;
    uint64_t r13_15;
    struct s2* rdi16;
    struct s3* rsi17;
    int64_t r14_18;
    int64_t rdx19;
    int64_t v20;
    int32_t ecx21;
    int64_t* rbp22;
    int64_t* v23;
    int32_t r13d24;
    uint64_t rdx25;
    int64_t rsi26;
    int64_t v27;
    struct s4* rsi28;
    struct s5* rdi29;
    uint64_t r8_30;
    int64_t* r10_31;
    struct s5* r11_32;
    uint64_t v33;
    struct s4* r12_34;
    struct s6* rdi35;
    struct s7* rsi36;
    struct s5* rdi37;
    struct s4* rsi38;
    struct s6* rdi39;
    struct s7* rsi40;
    unsigned char v41;
    struct s6* rdi42;
    struct s7* rsi43;
    struct s5* v44;
    int64_t rcx45;
    int64_t v46;

    while (1) {
        v1 = reinterpret_cast<int64_t>(__return_address());
        __asm__("xorpd xmm4, xmm4");
        rdi2->f0 = rsi3->f0;
        rdi4 = reinterpret_cast<struct s2*>(&rdi2->f4);
        rsi5 = reinterpret_cast<struct s3*>(&rsi3->f4);
        rdi4->f0 = rsi5->f0;
        rdi2 = reinterpret_cast<struct s0*>(&rdi4->f4);
        rsi3 = reinterpret_cast<struct s1*>(&rsi5->f4);
        do {
            __asm__("mulsd xmm0, [r15+rbp*8]");
            rdi2->f0 = rsi3->f0;
            rdi6 = reinterpret_cast<struct s2*>(&rdi2->f4);
            rsi7 = reinterpret_cast<struct s3*>(&rsi3->f4);
            __asm__("divsd xmm1, xmm0");
            rdi6->f0 = rsi7->f0;
            rdi8 = reinterpret_cast<struct s0*>(&rdi6->f4);
            rsi9 = reinterpret_cast<struct s1*>(&rsi7->f4);
            ++rbp10;
            if (rbp10 == v11) {
                do {
                    ++rbx12;
                    if (rbx12 == v13) 
                        goto addr_35a_16;
                } while (v14 <= reinterpret_cast<int32_t>(fputc));
                *reinterpret_cast<int32_t*>(&rbp10) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp10) + 4) = reinterpret_cast<int32_t>(fputc);
            }
            r13_15 = reinterpret_cast<uint64_t>(rbx12 * 0x2580);
            rdi8->f0 = rsi9->f0;
            rdi16 = reinterpret_cast<struct s2*>(&rdi8->f4);
            rsi17 = reinterpret_cast<struct s3*>(&rsi9->f4);
            __asm__("subsd xmm0, [r12+rbp*8]");
            rdi16->f0 = rsi17->f0;
            rdi2 = reinterpret_cast<struct s0*>(&rdi16->f4);
            rsi3 = reinterpret_cast<struct s1*>(&rsi17->f4);
            __asm__("ucomisd xmm2, xmm4");
            __asm__("movapd xmm0, xmm3");
        } while (r13_15 + r14_18 >= r13_15);
        __asm__("movapd xmm0, xmm2");
        fun_348();
    }
    addr_35a_16:
    rdx19 = v20;
    ecx21 = static_cast<int32_t>(rdx19 - 1);
    rbp22 = v23;
    r13d24 = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&v1) + 4);
    if (*reinterpret_cast<int32_t*>(&rdx19) >= 2) {
        *reinterpret_cast<int32_t*>(&rdx25) = ecx21;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx25) + 4) = reinterpret_cast<int32_t>(fputc);
        rsi26 = v27;
        *reinterpret_cast<uint32_t*>(&rsi28) = *reinterpret_cast<uint32_t*>(&rsi26) & 0xfffffffe;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi28) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdi29) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi29) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&r8_30) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_30) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            r10_31 = rbp22 + r8_30 * 0x4b0;
            r10_31[r8_30] = 0x3ff0000000000000;
            ++r8_30;
            r11_32 = rdi29;
            if (r8_30 < v33) {
                do {
                    r10_31[static_cast<int64_t>(r11_32)] = reinterpret_cast<int64_t>(fputc);
                    if (reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(r13d24 < reinterpret_cast<int32_t>(fputc) == fputc)) | reinterpret_cast<uint1_t>(r13d24 == fputc)) {
                        __asm__("xorpd xmm0, xmm0");
                    } else {
                        __asm__("xorpd xmm0, xmm0");
                        *reinterpret_cast<int32_t*>(&r12_34) = reinterpret_cast<int32_t>(fputc);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_34) + 4) = reinterpret_cast<int32_t>(fputc);
                        if (r13d24 != 1) {
                            do {
                                rdi29->f0 = rsi28->f0;
                                rdi35 = reinterpret_cast<struct s6*>(&rdi29->f4);
                                rsi36 = reinterpret_cast<struct s7*>(&rsi28->f4);
                                __asm__("mulsd xmm1, [r13+r11*8+0x0]");
                                __asm__("addsd xmm1, xmm0");
                                rdi35->f0 = rsi36->f0;
                                rdi37 = reinterpret_cast<struct s5*>(&rdi35->f4);
                                rsi38 = reinterpret_cast<struct s4*>(&rsi36->f4);
                                rdi37->f0 = rsi38->f0;
                                rdi39 = reinterpret_cast<struct s6*>(&rdi37->f4);
                                rsi40 = reinterpret_cast<struct s7*>(&rsi38->f4);
                                __asm__("mulsd xmm0, [r13+r11*8+0x0]");
                                __asm__("addsd xmm0, xmm1");
                                rdi39->f0 = rsi40->f0;
                                rdi29 = reinterpret_cast<struct s5*>(&rdi39->f4);
                                rsi28 = reinterpret_cast<struct s4*>(&rsi40->f4);
                                r12_34 = reinterpret_cast<struct s4*>(reinterpret_cast<int64_t>(r12_34) + 2);
                            } while (r12_34 != rsi28);
                        }
                        r13d24 = *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&v1) + 4);
                        if ((v41 & 1) != fputc) {
                            rdi29->f0 = rsi28->f0;
                            rdi42 = reinterpret_cast<struct s6*>(&rdi29->f4);
                            rsi43 = reinterpret_cast<struct s7*>(&rsi28->f4);
                            __asm__("mulsd xmm1, [r15+r11*8]");
                            __asm__("addsd xmm0, xmm1");
                            rdi42->f0 = rsi43->f0;
                            rdi29 = reinterpret_cast<struct s5*>(&rdi42->f4);
                            rsi28 = reinterpret_cast<struct s4*>(&rsi43->f4);
                        }
                    }
                    rdi29->f0 = rsi28->f0;
                    rdi29 = reinterpret_cast<struct s5*>(&rdi29->f4);
                    rsi28 = reinterpret_cast<struct s4*>(&rsi28->f4);
                    r11_32 = reinterpret_cast<struct s5*>(reinterpret_cast<int64_t>(r11_32) + 1);
                } while (r11_32 != v44);
            }
            rdi29 = reinterpret_cast<struct s5*>(reinterpret_cast<int64_t>(rdi29) + 1);
        } while (r8_30 != rdx25);
    }
    rcx45 = ecx21;
    (rbp22 + rcx45 * 0x4b0)[rcx45] = 0x3ff0000000000000;
    goto v46;
}

int32_t** g629 = reinterpret_cast<int32_t**>(0x3d8d48288b4c);

void fun_645(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx, int32_t* r8, int32_t* r9, int32_t* a7, int32_t* a8, int32_t* a9, int32_t* a10, int32_t* a11, int32_t* a12, int32_t* a13, int32_t* a14, int64_t a15);

void fun_660();

void fun_69b();

void fun_6b9();

void fun_6e9(int32_t* rdi, int64_t rsi, int64_t rdx, int32_t* rcx, int32_t* r8, int32_t* r9, int32_t* a7, int32_t* a8, int32_t* a9, int32_t* a10, int32_t* a11, int32_t* a12, int32_t* a13, int32_t* a14, int32_t* a15);

void fun_702(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx, int32_t* r8, int32_t* r9, int32_t* a7, int32_t* a8, int32_t* a9, int32_t* a10, int32_t* a11, int32_t* a12, int32_t* a13, int32_t* a14, int32_t* a15);

void fun_5ee(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx, int32_t* r8, int32_t* r9);

void fun_5f7(int32_t* rdi, int64_t rsi, int64_t rdx, int32_t* rcx, int32_t* r8, int32_t* r9);

void fun_5ff(int32_t* rdi, int64_t rsi, int64_t rdx, int32_t* rcx, int32_t* r8, int32_t* r9, int32_t* a7);

void fun_607(int32_t* rdi, int64_t rsi, int64_t rdx, int32_t* rcx, int32_t* r8, int32_t* r9, int32_t* a7);

void fun_5d8(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx, int32_t* r8, int32_t* r9) {
    int32_t* v7;
    int32_t ebp8;
    signed char** r13_9;
    int32_t* v10;
    int32_t* r15_11;
    int32_t* v12;
    int32_t* r14_13;
    int32_t** rax14;
    int32_t* r13_15;
    int32_t* rcx16;
    int32_t* v17;
    int32_t* v18;
    int32_t* v19;
    int32_t* v20;
    int32_t* v21;
    int64_t v22;
    int32_t* rsi23;
    int64_t r15_24;
    int32_t* rdi25;
    int64_t r12_26;
    int64_t r14_27;
    int32_t* v28;
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
    int32_t* r14_40;
    int32_t* r15_41;
    int64_t rbx42;
    int64_t v43;

    v7 = reinterpret_cast<int32_t*>(__return_address());
    if (ebp8 >= 43 && **r13_9 == fputc) {
        v10 = r15_11;
        v12 = r14_13;
        rax14 = g629;
        r13_15 = *rax14;
        rcx16 = r13_15;
        fun_645(0x633, 22, 1, rcx16, r8, r9, v7, v10, v12, v17, v18, v19, v20, v21, v22);
        rsi23 = reinterpret_cast<int32_t*>(0x64c);
        *reinterpret_cast<int32_t*>(&r15_24) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_24) + 4) = reinterpret_cast<int32_t>(fputc);
        rdi25 = r13_15;
        fun_660();
        do {
            r12_26 = r15_24 * 0x4b0;
            *reinterpret_cast<int32_t*>(&r14_27) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_27) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("ror eax, 0x2");
                if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r14_27 + r12_26) * 0xcccccccd) <= 0xccccccc) {
                    *reinterpret_cast<int32_t*>(&rdi25) = 10;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi25) + 4) = reinterpret_cast<int32_t>(fputc);
                    rsi23 = r13_15;
                    fun_69b();
                }
                *rdi25 = *rsi23;
                rdi25 = r13_15;
                rsi23 = reinterpret_cast<int32_t*>(0x667);
                fun_6b9();
                ++r14_27;
            } while (r14_27 != 0x4b0);
            ++r15_24;
        } while (r15_24 != 0x4b0);
        fun_6e9(r13_15, 0x6d8, 0x6df, rcx16, r8, r9, v7, v10, v12, v28, v29, v30, v31, v32, v33);
        *reinterpret_cast<int32_t*>(&rsi) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx = r13_15;
        fun_702(0x6f0, 22, 1, rcx, r8, r9, v7, v10, v12, v34, v35, v36, v37, v38, v39);
        r14_40 = v12;
        r15_41 = v10;
    }
    fun_5ee(rbx42, rsi, rdx, rcx, r8, r9);
    fun_5f7(v7, rsi, rdx, rcx, r8, r9);
    fun_5ff(r14_40, rsi, rdx, rcx, r8, r9, v7);
    fun_607(r15_41, rsi, rdx, rcx, r8, r9, v7);
    goto v43;
}

void fun_5ee(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx, int32_t* r8, int32_t* r9) {
    int32_t* r14_7;
    int32_t* r15_8;
    int64_t v9;

    fun_5f7(__return_address(), rsi, rdx, rcx, r8, r9);
    fun_5ff(r14_7, rsi, rdx, rcx, r8, r9, __return_address());
    fun_607(r15_8, rsi, rdx, rcx, r8, r9, __return_address());
    goto v9;
}

void fun_69b() {
    int32_t* rdi1;
    int32_t* rsi2;
    int32_t* r13_3;
    int32_t* rbp4;
    int64_t r14_5;
    int64_t r15_6;
    int64_t r12_7;
    int32_t* r13_8;
    int32_t* r13_9;
    int32_t* rcx10;
    int32_t* r8_11;
    int32_t* r9_12;
    int32_t* v13;
    int32_t* v14;
    int32_t* v15;
    int32_t* v16;
    int32_t* v17;
    int32_t* v18;
    int32_t* v19;
    int32_t* v20;
    int32_t* r13_21;
    int32_t* r8_22;
    int32_t* r9_23;
    int32_t* v24;
    int32_t* v25;
    int32_t* v26;
    int32_t* v27;
    int32_t* v28;
    int32_t* v29;
    int32_t* v30;
    int32_t* v31;
    int64_t rbx32;
    int32_t* r8_33;
    int32_t* r9_34;
    int32_t* r8_35;
    int32_t* r9_36;
    int32_t* v37;
    int32_t* r8_38;
    int32_t* r9_39;
    int32_t* v40;
    int32_t* r8_41;
    int32_t* r9_42;
    int64_t v43;

    while (1) {
        *rdi1 = *rsi2;
        rdi1 = r13_3;
        rsi2 = rbp4;
        fun_6b9();
        ++r14_5;
        if (r14_5 == 0x4b0) {
            ++r15_6;
            if (r15_6 == 0x4b0) 
                break;
            r12_7 = r15_6 * 0x4b0;
            *reinterpret_cast<int32_t*>(&r14_5) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_5) + 4) = reinterpret_cast<int32_t>(fputc);
        }
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r14_5 + r12_7) * 0xcccccccd) > 0xccccccc) 
            continue;
        *reinterpret_cast<int32_t*>(&rdi1) = 10;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi1) + 4) = reinterpret_cast<int32_t>(fputc);
        rsi2 = r13_8;
        fun_69b();
    }
    fun_6e9(r13_9, 0x6d8, 0x6df, rcx10, r8_11, r9_12, __return_address(), v13, v14, v15, v16, v17, v18, v19, v20);
    fun_702(0x6f0, 22, 1, r13_21, r8_22, r9_23, __return_address(), v24, v25, v26, v27, v28, v29, v30, v31);
    fun_5ee(rbx32, 22, 1, r13_21, r8_33, r9_34);
    fun_5f7(__return_address(), 22, 1, r13_21, r8_35, r9_36);
    fun_5ff(v37, 22, 1, r13_21, r8_38, r9_39, __return_address());
    fun_607(v40, 22, 1, r13_21, r8_41, r9_42, __return_address());
    goto v43;
}

void fun_6b9() {
    int64_t r14_1;
    int64_t r15_2;
    int64_t r12_3;
    int32_t* rdi4;
    int32_t* rsi5;
    int32_t* r13_6;
    int32_t* r13_7;
    int32_t* rbp8;
    int32_t* r13_9;
    int32_t* rcx10;
    int32_t* r8_11;
    int32_t* r9_12;
    int32_t* v13;
    int32_t* v14;
    int32_t* v15;
    int32_t* v16;
    int32_t* v17;
    int32_t* v18;
    int32_t* v19;
    int32_t* v20;
    int32_t* r13_21;
    int32_t* r8_22;
    int32_t* r9_23;
    int32_t* v24;
    int32_t* v25;
    int32_t* v26;
    int32_t* v27;
    int32_t* v28;
    int32_t* v29;
    int32_t* v30;
    int32_t* v31;
    int64_t rbx32;
    int32_t* r8_33;
    int32_t* r9_34;
    int32_t* r8_35;
    int32_t* r9_36;
    int32_t* v37;
    int32_t* r8_38;
    int32_t* r9_39;
    int32_t* v40;
    int32_t* r8_41;
    int32_t* r9_42;
    int64_t v43;

    while (1) {
        ++r14_1;
        if (r14_1 == 0x4b0) {
            ++r15_2;
            if (r15_2 == 0x4b0) 
                break;
            r12_3 = r15_2 * 0x4b0;
            *reinterpret_cast<int32_t*>(&r14_1) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_1) + 4) = reinterpret_cast<int32_t>(fputc);
        }
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r14_1 + r12_3) * 0xcccccccd) <= 0xccccccc) {
            *reinterpret_cast<int32_t*>(&rdi4) = 10;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi4) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi5 = r13_6;
            fun_69b();
        }
        *rdi4 = *rsi5;
        rdi4 = r13_7;
        rsi5 = rbp8;
        fun_6b9();
    }
    fun_6e9(r13_9, 0x6d8, 0x6df, rcx10, r8_11, r9_12, __return_address(), v13, v14, v15, v16, v17, v18, v19, v20);
    fun_702(0x6f0, 22, 1, r13_21, r8_22, r9_23, __return_address(), v24, v25, v26, v27, v28, v29, v30, v31);
    fun_5ee(rbx32, 22, 1, r13_21, r8_33, r9_34);
    fun_5f7(__return_address(), 22, 1, r13_21, r8_35, r9_36);
    fun_5ff(v37, 22, 1, r13_21, r8_38, r9_39, __return_address());
    fun_607(v40, 22, 1, r13_21, r8_41, r9_42, __return_address());
    goto v43;
}

void fun_6e9(int32_t* rdi, int64_t rsi, int64_t rdx, int32_t* rcx, int32_t* r8, int32_t* r9, int32_t* a7, int32_t* a8, int32_t* a9, int32_t* a10, int32_t* a11, int32_t* a12, int32_t* a13, int32_t* a14, int32_t* a15) {
    int32_t* r13_16;
    int64_t rbx17;

    fun_702(0x6f0, 22, 1, r13_16, r8, r9, __return_address(), a7, a8, a9, a10, a11, a12, a13, a14);
    fun_5ee(rbx17, 22, 1, r13_16, r8, r9);
    fun_5f7(__return_address(), 22, 1, r13_16, r8, r9);
    fun_5ff(a8, 22, 1, r13_16, r8, r9, __return_address());
    fun_607(a7, 22, 1, r13_16, r8, r9, __return_address());
    goto a15;
}

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

void fun_1a5() {
    int64_t v1;
    int32_t* rdi2;
    int32_t* rsi3;
    int32_t* rdi4;
    int32_t* rsi5;
    int32_t* rdi6;
    int32_t* rsi7;
    int64_t rbx8;
    int64_t v9;
    int64_t* r15_10;
    int1_t cf11;
    int64_t rax12;
    int64_t rcx13;
    int32_t* rdi14;
    int32_t* rsi15;
    int32_t* rdi16;
    int32_t* rsi17;
    int32_t* rdi18;
    int32_t* rsi19;
    int64_t rbp20;
    unsigned char v21;
    uint64_t rax22;
    int64_t r14_23;
    int32_t* rdi24;
    int32_t* rsi25;
    int64_t* v26;
    int64_t* r13_27;
    int64_t rbx28;
    int32_t* rdi29;
    int32_t* rsi30;
    int32_t v31;
    int64_t rbp32;
    uint64_t r13_33;
    int32_t* rdi34;
    int32_t* rsi35;
    int32_t* rdi36;
    int32_t* rsi37;
    int64_t r14_38;
    int32_t* rdi39;
    int32_t* rsi40;
    int32_t* rdi41;
    int32_t* rsi42;
    int64_t v43;
    int64_t v44;
    int64_t rdx45;
    int64_t v46;
    int32_t ecx47;
    int64_t* rbp48;
    uint32_t r13d49;
    uint64_t rdx50;
    int64_t rsi51;
    int64_t v52;
    struct s8* rsi53;
    struct s9* rdi54;
    uint64_t r8_55;
    int64_t* r10_56;
    struct s9* r11_57;
    uint64_t v58;
    struct s8* r12_59;
    struct s10* rdi60;
    struct s11* rsi61;
    struct s9* rdi62;
    struct s8* rsi63;
    struct s10* rdi64;
    struct s11* rsi65;
    unsigned char v66;
    struct s10* rdi67;
    struct s11* rsi68;
    struct s9* v69;
    int64_t rcx70;
    int64_t v71;

    while (1) {
        v1 = reinterpret_cast<int64_t>(__return_address());
        *rdi2 = *rsi3;
        rdi4 = rdi2 + 1;
        rsi5 = rsi3 + 1;
        *rdi4 = *rsi5;
        rdi6 = rdi4 + 1;
        rsi7 = rsi5 + 1;
        __asm__("xorpd xmm3, xmm3");
        *rdi6 = *rsi7;
        rdi2 = rdi6 + 1;
        rsi3 = rsi7 + 1;
        while (1) {
            __asm__("movapd xmm1, xmm0");
            ++rdi2;
            ++rsi3;
            __asm__("andpd xmm0, xmm1");
            __asm__("andnpd xmm1, xmm5");
            __asm__("orpd xmm1, xmm0");
            __asm__("movlpd [r15+rbx*8], xmm1");
            ++rbx8;
            if (rbx8 == v9) 
                goto addr_2ab_14;
            r15_10[rbx8] = reinterpret_cast<int64_t>(fputc);
            __asm__("xorpd xmm0, xmm0");
            cf11 = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(&v1) + 4) < reinterpret_cast<uint32_t>(fputc);
            if (*reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&v1) + 4) > reinterpret_cast<int32_t>(fputc)) {
                *reinterpret_cast<int32_t*>(&rax12) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax12) + 4) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(&rcx13) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx13) + 4) = reinterpret_cast<int32_t>(fputc);
                if (*reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(&v1) + 4) != 1) {
                    do {
                        *rdi2 = *rsi3;
                        rdi14 = rdi2 + 1;
                        rsi15 = rsi3 + 1;
                        __asm__("subsd xmm1, [r12+rbx*8]");
                        __asm__("mulsd xmm1, xmm1");
                        __asm__("addsd xmm1, xmm0");
                        *rdi14 = *rsi15;
                        rdi16 = rdi14 + 1;
                        rsi17 = rsi15 + 1;
                        *rdi16 = *rsi17;
                        rdi18 = rdi16 + 1;
                        rsi19 = rsi17 + 1;
                        __asm__("subsd xmm0, [r12+rbx*8]");
                        __asm__("mulsd xmm0, xmm0");
                        __asm__("addsd xmm0, xmm1");
                        *rdi18 = *rsi19;
                        rdi2 = rdi18 + 1;
                        rsi3 = rsi19 + 1;
                        rax12 = rax12 + 2;
                        rcx13 = rcx13 + 2;
                    } while (rcx13 != rbp20);
                }
                cf11 = reinterpret_cast<int1_t>(fputc);
                if ((v21 & 1) != fputc) {
                    rax22 = reinterpret_cast<uint64_t>(rax12 * 0x2580);
                    cf11 = rax22 + r14_23 < rax22;
                    *rdi2 = *rsi3;
                    rdi24 = rdi2 + 1;
                    rsi25 = rsi3 + 1;
                    __asm__("subsd xmm1, [r12+rbx*8]");
                    __asm__("mulsd xmm1, xmm1");
                    __asm__("addsd xmm0, xmm1");
                    *rdi24 = *rsi25;
                    rdi2 = rdi24 + 1;
                    rsi3 = rsi25 + 1;
                }
            }
            __asm__("divsd xmm0, xmm2");
            __asm__("ucomisd xmm0, xmm3");
            if (cf11) 
                break;
            __asm__("sqrtsd xmm0, xmm0");
        }
        fun_1a5();
    }
    addr_2ab_14:
    v26 = r13_27;
    if (*reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&v1) + 4) > reinterpret_cast<int32_t>(fputc)) {
        *reinterpret_cast<int32_t*>(&rbx28) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx28) + 4) = reinterpret_cast<int32_t>(fputc);
        __asm__("xorps xmm3, xmm3");
        __asm__("sqrtsd xmm3, xmm2");
        __asm__("xorpd xmm4, xmm4");
        *rdi2 = *rsi3;
        rdi29 = rdi2 + 1;
        rsi30 = rsi3 + 1;
        do {
            if (v31 > reinterpret_cast<int32_t>(fputc)) {
                *reinterpret_cast<int32_t*>(&rbp32) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp32) + 4) = reinterpret_cast<int32_t>(fputc);
                do {
                    r13_33 = reinterpret_cast<uint64_t>(rbx28 * 0x2580);
                    *rdi29 = *rsi30;
                    rdi34 = rdi29 + 1;
                    rsi35 = rsi30 + 1;
                    __asm__("subsd xmm0, [r12+rbp*8]");
                    *rdi34 = *rsi35;
                    rdi36 = rdi34 + 1;
                    rsi37 = rsi35 + 1;
                    __asm__("ucomisd xmm2, xmm4");
                    __asm__("movapd xmm0, xmm3");
                    if (r13_33 + r14_38 < r13_33) {
                        __asm__("movapd xmm0, xmm2");
                        fun_348();
                        __asm__("xorpd xmm4, xmm4");
                        *rdi36 = *rsi37;
                        rdi39 = rdi36 + 1;
                        rsi40 = rsi37 + 1;
                        *rdi39 = *rsi40;
                        rdi36 = rdi39 + 1;
                        rsi37 = rsi40 + 1;
                    }
                    __asm__("mulsd xmm0, [r15+rbp*8]");
                    *rdi36 = *rsi37;
                    rdi41 = rdi36 + 1;
                    rsi42 = rsi37 + 1;
                    __asm__("divsd xmm1, xmm0");
                    *rdi41 = *rsi42;
                    rdi29 = rdi41 + 1;
                    rsi30 = rsi42 + 1;
                    ++rbp32;
                } while (rbp32 != v43);
            }
            ++rbx28;
        } while (rbx28 != v44);
    }
    rdx45 = v46;
    ecx47 = static_cast<int32_t>(rdx45 - 1);
    rbp48 = v26;
    r13d49 = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(&v1) + 4);
    if (*reinterpret_cast<int32_t*>(&rdx45) >= 2) {
        *reinterpret_cast<int32_t*>(&rdx50) = ecx47;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx50) + 4) = reinterpret_cast<int32_t>(fputc);
        rsi51 = v52;
        *reinterpret_cast<uint32_t*>(&rsi53) = *reinterpret_cast<uint32_t*>(&rsi51) & 0xfffffffe;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi53) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdi54) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi54) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&r8_55) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_55) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            r10_56 = rbp48 + r8_55 * 0x4b0;
            r10_56[r8_55] = 0x3ff0000000000000;
            ++r8_55;
            r11_57 = rdi54;
            if (r8_55 < v58) {
                do {
                    r10_56[static_cast<int64_t>(r11_57)] = reinterpret_cast<int64_t>(fputc);
                    if (reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(reinterpret_cast<int32_t>(r13d49) < reinterpret_cast<int32_t>(fputc) == fputc)) | reinterpret_cast<uint1_t>(r13d49 == fputc)) {
                        __asm__("xorpd xmm0, xmm0");
                    } else {
                        __asm__("xorpd xmm0, xmm0");
                        *reinterpret_cast<int32_t*>(&r12_59) = reinterpret_cast<int32_t>(fputc);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_59) + 4) = reinterpret_cast<int32_t>(fputc);
                        if (r13d49 != 1) {
                            do {
                                rdi54->f0 = rsi53->f0;
                                rdi60 = reinterpret_cast<struct s10*>(&rdi54->f4);
                                rsi61 = reinterpret_cast<struct s11*>(&rsi53->f4);
                                __asm__("mulsd xmm1, [r13+r11*8+0x0]");
                                __asm__("addsd xmm1, xmm0");
                                rdi60->f0 = rsi61->f0;
                                rdi62 = reinterpret_cast<struct s9*>(&rdi60->f4);
                                rsi63 = reinterpret_cast<struct s8*>(&rsi61->f4);
                                rdi62->f0 = rsi63->f0;
                                rdi64 = reinterpret_cast<struct s10*>(&rdi62->f4);
                                rsi65 = reinterpret_cast<struct s11*>(&rsi63->f4);
                                __asm__("mulsd xmm0, [r13+r11*8+0x0]");
                                __asm__("addsd xmm0, xmm1");
                                rdi64->f0 = rsi65->f0;
                                rdi54 = reinterpret_cast<struct s9*>(&rdi64->f4);
                                rsi53 = reinterpret_cast<struct s8*>(&rsi65->f4);
                                r12_59 = reinterpret_cast<struct s8*>(reinterpret_cast<int64_t>(r12_59) + 2);
                            } while (r12_59 != rsi53);
                        }
                        r13d49 = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(&v1) + 4);
                        if ((v66 & 1) != fputc) {
                            rdi54->f0 = rsi53->f0;
                            rdi67 = reinterpret_cast<struct s10*>(&rdi54->f4);
                            rsi68 = reinterpret_cast<struct s11*>(&rsi53->f4);
                            __asm__("mulsd xmm1, [r15+r11*8]");
                            __asm__("addsd xmm0, xmm1");
                            rdi67->f0 = rsi68->f0;
                            rdi54 = reinterpret_cast<struct s9*>(&rdi67->f4);
                            rsi53 = reinterpret_cast<struct s8*>(&rsi68->f4);
                        }
                    }
                    rdi54->f0 = rsi53->f0;
                    rdi54 = reinterpret_cast<struct s9*>(&rdi54->f4);
                    rsi53 = reinterpret_cast<struct s8*>(&rsi53->f4);
                    r11_57 = reinterpret_cast<struct s9*>(reinterpret_cast<int64_t>(r11_57) + 1);
                } while (r11_57 != v69);
            }
            rdi54 = reinterpret_cast<struct s9*>(reinterpret_cast<int64_t>(rdi54) + 1);
        } while (r8_55 != rdx50);
    }
    rcx70 = ecx47;
    (rbp48 + rcx70 * 0x4b0)[rcx70] = 0x3ff0000000000000;
    goto v71;
}

void fun_645(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx, int32_t* r8, int32_t* r9, int32_t* a7, int32_t* a8, int32_t* a9, int32_t* a10, int32_t* a11, int32_t* a12, int32_t* a13, int32_t* a14, int64_t a15) {
    int32_t* v16;
    int32_t* rsi17;
    int64_t r15_18;
    int32_t* rdi19;
    int32_t* r13_20;
    int64_t r12_21;
    int64_t r14_22;
    int32_t* r13_23;
    int32_t* r13_24;
    int32_t* r13_25;
    int32_t* r13_26;
    int64_t rbx27;

    v16 = reinterpret_cast<int32_t*>(__return_address());
    rsi17 = reinterpret_cast<int32_t*>(0x64c);
    *reinterpret_cast<int32_t*>(&r15_18) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_18) + 4) = reinterpret_cast<int32_t>(fputc);
    rdi19 = r13_20;
    fun_660();
    do {
        r12_21 = r15_18 * 0x4b0;
        *reinterpret_cast<int32_t*>(&r14_22) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_22) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r14_22 + r12_21) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi19) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi19) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi17 = r13_23;
                fun_69b();
            }
            *rdi19 = *rsi17;
            rdi19 = r13_24;
            rsi17 = reinterpret_cast<int32_t*>(0x667);
            fun_6b9();
            ++r14_22;
        } while (r14_22 != 0x4b0);
        ++r15_18;
    } while (r15_18 != 0x4b0);
    fun_6e9(r13_25, 0x6d8, 0x6df, rcx, r8, r9, v16, a7, a8, a9, a10, a11, a12, a13, a14);
    fun_702(0x6f0, 22, 1, r13_26, r8, r9, v16, a7, a8, a9, a10, a11, a12, a13, a14);
    fun_5ee(rbx27, 22, 1, r13_26, r8, r9);
    fun_5f7(v16, 22, 1, r13_26, r8, r9);
    fun_5ff(a8, 22, 1, r13_26, r8, r9, v16);
    fun_607(a7, 22, 1, r13_26, r8, r9, v16);
    goto a15;
}

void fun_5f7(int32_t* rdi, int64_t rsi, int64_t rdx, int32_t* rcx, int32_t* r8, int32_t* r9) {
    int32_t* r14_7;
    int32_t* r15_8;
    int64_t v9;

    fun_5ff(r14_7, rsi, rdx, rcx, r8, r9, __return_address());
    fun_607(r15_8, rsi, rdx, rcx, r8, r9, __return_address());
    goto v9;
}

void fun_702(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx, int32_t* r8, int32_t* r9, int32_t* a7, int32_t* a8, int32_t* a9, int32_t* a10, int32_t* a11, int32_t* a12, int32_t* a13, int32_t* a14, int32_t* a15) {
    int64_t rbx16;

    fun_5ee(rbx16, rsi, rdx, rcx, r8, r9);
    fun_5f7(__return_address(), rsi, rdx, rcx, r8, r9);
    fun_5ff(a8, rsi, rdx, rcx, r8, r9, __return_address());
    fun_607(a7, rsi, rdx, rcx, r8, r9, __return_address());
    goto a15;
}

int32_t* fun_504(int64_t rdi, int64_t rsi);

int32_t* fun_517(int64_t rdi, int64_t rsi);

int32_t* fun_529(int32_t* rdi, int32_t* rsi);

int32_t g4b0 = 0xd5014800;

/* .LCPI0_1 */
int32_t LCPI0_1 = 0x83485354;

void fun_4f2(int64_t rdi, int64_t rsi) {
    int64_t rbx3;
    int64_t rax4;
    int32_t* rax5;
    int32_t* v6;
    int32_t* rax7;
    int32_t* r14_8;
    int32_t* rax9;
    int32_t* r15_10;
    int64_t rax11;
    int64_t rcx12;
    int64_t rsi13;
    int64_t rdx14;
    int32_t* rcx15;
    int32_t* r8_16;
    int32_t* r9_17;
    int32_t ebp18;
    signed char** r13_19;
    int32_t* v20;
    int32_t* v21;
    int32_t** rax22;
    int32_t* r13_23;
    int32_t* rcx24;
    int32_t* v25;
    int32_t* v26;
    int32_t* v27;
    int32_t* v28;
    int32_t* v29;
    int64_t v30;
    int32_t* rsi31;
    int64_t r15_32;
    int32_t* rdi33;
    int64_t r12_34;
    int64_t r14_35;
    int32_t* v36;
    int32_t* v37;
    int32_t* v38;
    int32_t* v39;
    int32_t* v40;
    int32_t* v41;
    int32_t* v42;
    int32_t* v43;
    int32_t* v44;
    int32_t* v45;
    int32_t* v46;
    int32_t* v47;
    int64_t v48;

    rbx3 = rax4;
    rax5 = fun_504(0x15f900, 8);
    v6 = rax5;
    rax7 = fun_517(0x4b0, 8);
    r14_8 = rax7;
    rax9 = fun_529(0x4b0, 8);
    r15_10 = rax9;
    *reinterpret_cast<int32_t*>(&rax11) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax11) + 4) = reinterpret_cast<int32_t>(fputc);
    __asm__("movdqa xmm0, [rip+0x0]");
    __asm__("movapd xmm1, [rip+0x0]");
    __asm__("movdqa xmm2, [rip+0x0]");
    do {
        __asm__("xorps xmm3, xmm3");
        __asm__("cvtsi2sd xmm3, eax");
        __asm__("movd xmm4, rax");
        __asm__("pshufd xmm4, xmm4, 0x44");
        __asm__("unpcklpd xmm3, xmm3");
        *reinterpret_cast<int32_t*>(&rcx12) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx12) + 4) = reinterpret_cast<int32_t>(fputc);
        __asm__("movdqa xmm5, xmm0");
        do {
            __asm__("movdqa xmm6, xmm5");
            __asm__("pmuludq xmm6, xmm4");
            __asm__("pshufd xmm6, xmm6, 0xe8");
            __asm__("cvtdq2pd xmm6, xmm6");
            __asm__("divpd xmm6, xmm1");
            __asm__("addpd xmm6, xmm3");
            __asm__("movupd [rdx+rcx*8], xmm6");
            rcx12 = rcx12 + 2;
            __asm__("paddq xmm5, xmm2");
        } while (rcx12 != 0x4b0);
        ++rax11;
    } while (rax11 != 0x578);
    g4b0 = LCPI0_1;
    *reinterpret_cast<int32_t*>(&rsi13) = 0x578;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi13) + 4) = reinterpret_cast<int32_t>(fputc);
    rdx14 = rbx3;
    rcx15 = v6;
    r8_16 = r14_8;
    r9_17 = r15_10;
    fun_5d8(0x4b0, 0x578, rdx14, rcx15, r8_16, r9_17);
    if (ebp18 >= 43 && **r13_19 == fputc) {
        v20 = r15_10;
        v21 = r14_8;
        rax22 = g629;
        r13_23 = *rax22;
        rcx24 = r13_23;
        fun_645(0x633, 22, 1, rcx24, r8_16, r9_17, v6, v20, v21, v25, v26, v27, v28, v29, v30);
        rsi31 = reinterpret_cast<int32_t*>(0x64c);
        *reinterpret_cast<int32_t*>(&r15_32) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_32) + 4) = reinterpret_cast<int32_t>(fputc);
        rdi33 = r13_23;
        fun_660();
        do {
            r12_34 = r15_32 * 0x4b0;
            *reinterpret_cast<int32_t*>(&r14_35) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_35) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("ror eax, 0x2");
                if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r14_35 + r12_34) * 0xcccccccd) <= 0xccccccc) {
                    *reinterpret_cast<int32_t*>(&rdi33) = 10;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi33) + 4) = reinterpret_cast<int32_t>(fputc);
                    rsi31 = r13_23;
                    fun_69b();
                }
                *rdi33 = *rsi31;
                rdi33 = r13_23;
                rsi31 = reinterpret_cast<int32_t*>(0x667);
                fun_6b9();
                ++r14_35;
            } while (r14_35 != 0x4b0);
            ++r15_32;
        } while (r15_32 != 0x4b0);
        fun_6e9(r13_23, 0x6d8, 0x6df, rcx24, r8_16, r9_17, v6, v20, v21, v36, v37, v38, v39, v40, v41);
        *reinterpret_cast<int32_t*>(&rsi13) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi13) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx14) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx14) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx15 = r13_23;
        fun_702(0x6f0, 22, 1, rcx15, r8_16, r9_17, v6, v20, v21, v42, v43, v44, v45, v46, v47);
        r14_8 = v21;
        r15_10 = v20;
    }
    fun_5ee(rbx3, rsi13, rdx14, rcx15, r8_16, r9_17);
    fun_5f7(v6, rsi13, rdx14, rcx15, r8_16, r9_17);
    fun_5ff(r14_8, rsi13, rdx14, rcx15, r8_16, r9_17, v6);
    fun_607(r15_10, rsi13, rdx14, rcx15, r8_16, r9_17, v6);
    goto v48;
}

void fun_660() {
    int32_t* v1;
    int64_t r12_2;
    int64_t r15_3;
    int64_t r14_4;
    int32_t* rdi5;
    int32_t* rsi6;
    int32_t* r13_7;
    int32_t* r13_8;
    int32_t* r13_9;
    int32_t* rcx10;
    int32_t* r8_11;
    int32_t* r9_12;
    int32_t* v13;
    int32_t* v14;
    int32_t* v15;
    int32_t* v16;
    int32_t* v17;
    int32_t* v18;
    int32_t* v19;
    int32_t* v20;
    int32_t* r13_21;
    int32_t* r8_22;
    int32_t* r9_23;
    int32_t* v24;
    int32_t* v25;
    int32_t* v26;
    int32_t* v27;
    int32_t* v28;
    int32_t* v29;
    int32_t* v30;
    int32_t* v31;
    int64_t rbx32;
    int32_t* r8_33;
    int32_t* r9_34;
    int32_t* r8_35;
    int32_t* r9_36;
    int32_t* v37;
    int32_t* r8_38;
    int32_t* r9_39;
    int32_t* v40;
    int32_t* r8_41;
    int32_t* r9_42;
    int64_t v43;

    v1 = reinterpret_cast<int32_t*>(__return_address());
    do {
        r12_2 = r15_3 * 0x4b0;
        *reinterpret_cast<int32_t*>(&r14_4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_4) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r14_4 + r12_2) * 0xcccccccd) <= 0xccccccc) {
                *reinterpret_cast<int32_t*>(&rdi5) = 10;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi5) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi6 = r13_7;
                fun_69b();
            }
            *rdi5 = *rsi6;
            rdi5 = r13_8;
            rsi6 = reinterpret_cast<int32_t*>(0x667);
            fun_6b9();
            ++r14_4;
        } while (r14_4 != 0x4b0);
        ++r15_3;
    } while (r15_3 != 0x4b0);
    fun_6e9(r13_9, 0x6d8, 0x6df, rcx10, r8_11, r9_12, v1, v13, v14, v15, v16, v17, v18, v19, v20);
    fun_702(0x6f0, 22, 1, r13_21, r8_22, r9_23, v1, v24, v25, v26, v27, v28, v29, v30, v31);
    fun_5ee(rbx32, 22, 1, r13_21, r8_33, r9_34);
    fun_5f7(v1, 22, 1, r13_21, r8_35, r9_36);
    fun_5ff(v37, 22, 1, r13_21, r8_38, r9_39, v1);
    fun_607(v40, 22, 1, r13_21, r8_41, r9_42, v1);
    goto v43;
}

void fun_5ff(int32_t* rdi, int64_t rsi, int64_t rdx, int32_t* rcx, int32_t* r8, int32_t* r9, int32_t* a7) {
    int32_t* r15_8;
    int64_t v9;

    fun_607(r15_8, rsi, rdx, rcx, r8, r9, __return_address());
    goto v9;
}

int32_t* fun_504(int64_t rdi, int64_t rsi) {
    int32_t* v3;
    int32_t* rax4;
    int32_t* rax5;
    int32_t* r14_6;
    int32_t* rax7;
    int32_t* r15_8;
    int64_t rax9;
    int64_t rcx10;
    int64_t rsi11;
    int64_t rdx12;
    int64_t rbx13;
    int32_t* rcx14;
    int32_t* r8_15;
    int32_t* r9_16;
    int32_t ebp17;
    signed char** r13_18;
    int32_t* v19;
    int32_t* v20;
    int32_t** rax21;
    int32_t* r13_22;
    int32_t* rcx23;
    int32_t* v24;
    int32_t* v25;
    int32_t* v26;
    int32_t* v27;
    int32_t* v28;
    int64_t v29;
    int32_t* rsi30;
    int64_t r15_31;
    int32_t* rdi32;
    int64_t r12_33;
    int64_t r14_34;
    int32_t* v35;
    int32_t* v36;
    int32_t* v37;
    int32_t* v38;
    int32_t* v39;
    int32_t* v40;
    int32_t* v41;
    int32_t* v42;
    int32_t* v43;
    int32_t* v44;
    int32_t* v45;
    int32_t* v46;
    int64_t rbx47;
    int64_t v48;

    v3 = rax4;
    rax5 = fun_517(0x4b0, 8);
    r14_6 = rax5;
    rax7 = fun_529(0x4b0, 8);
    r15_8 = rax7;
    *reinterpret_cast<int32_t*>(&rax9) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax9) + 4) = reinterpret_cast<int32_t>(fputc);
    __asm__("movdqa xmm0, [rip+0x0]");
    __asm__("movapd xmm1, [rip+0x0]");
    __asm__("movdqa xmm2, [rip+0x0]");
    do {
        __asm__("xorps xmm3, xmm3");
        __asm__("cvtsi2sd xmm3, eax");
        __asm__("movd xmm4, rax");
        __asm__("pshufd xmm4, xmm4, 0x44");
        __asm__("unpcklpd xmm3, xmm3");
        *reinterpret_cast<int32_t*>(&rcx10) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx10) + 4) = reinterpret_cast<int32_t>(fputc);
        __asm__("movdqa xmm5, xmm0");
        do {
            __asm__("movdqa xmm6, xmm5");
            __asm__("pmuludq xmm6, xmm4");
            __asm__("pshufd xmm6, xmm6, 0xe8");
            __asm__("cvtdq2pd xmm6, xmm6");
            __asm__("divpd xmm6, xmm1");
            __asm__("addpd xmm6, xmm3");
            __asm__("movupd [rdx+rcx*8], xmm6");
            rcx10 = rcx10 + 2;
            __asm__("paddq xmm5, xmm2");
        } while (rcx10 != 0x4b0);
        ++rax9;
    } while (rax9 != 0x578);
    g4b0 = LCPI0_1;
    *reinterpret_cast<int32_t*>(&rsi11) = 0x578;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi11) + 4) = reinterpret_cast<int32_t>(fputc);
    rdx12 = rbx13;
    rcx14 = v3;
    r8_15 = r14_6;
    r9_16 = r15_8;
    fun_5d8(0x4b0, 0x578, rdx12, rcx14, r8_15, r9_16);
    if (ebp17 >= 43 && **r13_18 == fputc) {
        v19 = r15_8;
        v20 = r14_6;
        rax21 = g629;
        r13_22 = *rax21;
        rcx23 = r13_22;
        fun_645(0x633, 22, 1, rcx23, r8_15, r9_16, v3, v19, v20, v24, v25, v26, v27, v28, v29);
        rsi30 = reinterpret_cast<int32_t*>(0x64c);
        *reinterpret_cast<int32_t*>(&r15_31) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_31) + 4) = reinterpret_cast<int32_t>(fputc);
        rdi32 = r13_22;
        fun_660();
        do {
            r12_33 = r15_31 * 0x4b0;
            *reinterpret_cast<int32_t*>(&r14_34) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_34) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("ror eax, 0x2");
                if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r14_34 + r12_33) * 0xcccccccd) <= 0xccccccc) {
                    *reinterpret_cast<int32_t*>(&rdi32) = 10;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi32) + 4) = reinterpret_cast<int32_t>(fputc);
                    rsi30 = r13_22;
                    fun_69b();
                }
                *rdi32 = *rsi30;
                rdi32 = r13_22;
                rsi30 = reinterpret_cast<int32_t*>(0x667);
                fun_6b9();
                ++r14_34;
            } while (r14_34 != 0x4b0);
            ++r15_31;
        } while (r15_31 != 0x4b0);
        fun_6e9(r13_22, 0x6d8, 0x6df, rcx23, r8_15, r9_16, v3, v19, v20, v35, v36, v37, v38, v39, v40);
        *reinterpret_cast<int32_t*>(&rsi11) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi11) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx12) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx12) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx14 = r13_22;
        fun_702(0x6f0, 22, 1, rcx14, r8_15, r9_16, v3, v19, v20, v41, v42, v43, v44, v45, v46);
        r14_6 = v20;
        r15_8 = v19;
    }
    fun_5ee(rbx47, rsi11, rdx12, rcx14, r8_15, r9_16);
    fun_5f7(v3, rsi11, rdx12, rcx14, r8_15, r9_16);
    fun_5ff(r14_6, rsi11, rdx12, rcx14, r8_15, r9_16, v3);
    fun_607(r15_8, rsi11, rdx12, rcx14, r8_15, r9_16, v3);
    goto v48;
}

void fun_607(int32_t* rdi, int64_t rsi, int64_t rdx, int32_t* rcx, int32_t* r8, int32_t* r9, int32_t* a7) {
    int64_t v8;

    goto v8;
}

int32_t* fun_517(int64_t rdi, int64_t rsi) {
    int32_t* v3;
    int32_t* r14_4;
    int32_t* rax5;
    int32_t* rax6;
    int32_t* r15_7;
    int64_t rax8;
    int64_t rcx9;
    int64_t rsi10;
    int64_t rdx11;
    int64_t rbx12;
    int32_t* rcx13;
    int32_t* r8_14;
    int32_t* r9_15;
    int32_t ebp16;
    signed char** r13_17;
    int32_t* v18;
    int32_t* v19;
    int32_t** rax20;
    int32_t* r13_21;
    int32_t* rcx22;
    int32_t* v23;
    int32_t* v24;
    int32_t* v25;
    int32_t* v26;
    int32_t* v27;
    int64_t v28;
    int32_t* rsi29;
    int64_t r15_30;
    int32_t* rdi31;
    int64_t r12_32;
    int64_t r14_33;
    int32_t* v34;
    int32_t* v35;
    int32_t* v36;
    int32_t* v37;
    int32_t* v38;
    int32_t* v39;
    int32_t* v40;
    int32_t* v41;
    int32_t* v42;
    int32_t* v43;
    int32_t* v44;
    int32_t* v45;
    int64_t rbx46;
    int64_t v47;

    v3 = reinterpret_cast<int32_t*>(__return_address());
    r14_4 = rax5;
    rax6 = fun_529(0x4b0, 8);
    r15_7 = rax6;
    *reinterpret_cast<int32_t*>(&rax8) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax8) + 4) = reinterpret_cast<int32_t>(fputc);
    __asm__("movdqa xmm0, [rip+0x0]");
    __asm__("movapd xmm1, [rip+0x0]");
    __asm__("movdqa xmm2, [rip+0x0]");
    do {
        __asm__("xorps xmm3, xmm3");
        __asm__("cvtsi2sd xmm3, eax");
        __asm__("movd xmm4, rax");
        __asm__("pshufd xmm4, xmm4, 0x44");
        __asm__("unpcklpd xmm3, xmm3");
        *reinterpret_cast<int32_t*>(&rcx9) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx9) + 4) = reinterpret_cast<int32_t>(fputc);
        __asm__("movdqa xmm5, xmm0");
        do {
            __asm__("movdqa xmm6, xmm5");
            __asm__("pmuludq xmm6, xmm4");
            __asm__("pshufd xmm6, xmm6, 0xe8");
            __asm__("cvtdq2pd xmm6, xmm6");
            __asm__("divpd xmm6, xmm1");
            __asm__("addpd xmm6, xmm3");
            __asm__("movupd [rdx+rcx*8], xmm6");
            rcx9 = rcx9 + 2;
            __asm__("paddq xmm5, xmm2");
        } while (rcx9 != 0x4b0);
        ++rax8;
    } while (rax8 != 0x578);
    g4b0 = LCPI0_1;
    *reinterpret_cast<int32_t*>(&rsi10) = 0x578;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi10) + 4) = reinterpret_cast<int32_t>(fputc);
    rdx11 = rbx12;
    rcx13 = v3;
    r8_14 = r14_4;
    r9_15 = r15_7;
    fun_5d8(0x4b0, 0x578, rdx11, rcx13, r8_14, r9_15);
    if (ebp16 >= 43 && **r13_17 == fputc) {
        v18 = r15_7;
        v19 = r14_4;
        rax20 = g629;
        r13_21 = *rax20;
        rcx22 = r13_21;
        fun_645(0x633, 22, 1, rcx22, r8_14, r9_15, v3, v18, v19, v23, v24, v25, v26, v27, v28);
        rsi29 = reinterpret_cast<int32_t*>(0x64c);
        *reinterpret_cast<int32_t*>(&r15_30) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_30) + 4) = reinterpret_cast<int32_t>(fputc);
        rdi31 = r13_21;
        fun_660();
        do {
            r12_32 = r15_30 * 0x4b0;
            *reinterpret_cast<int32_t*>(&r14_33) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_33) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("ror eax, 0x2");
                if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r14_33 + r12_32) * 0xcccccccd) <= 0xccccccc) {
                    *reinterpret_cast<int32_t*>(&rdi31) = 10;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi31) + 4) = reinterpret_cast<int32_t>(fputc);
                    rsi29 = r13_21;
                    fun_69b();
                }
                *rdi31 = *rsi29;
                rdi31 = r13_21;
                rsi29 = reinterpret_cast<int32_t*>(0x667);
                fun_6b9();
                ++r14_33;
            } while (r14_33 != 0x4b0);
            ++r15_30;
        } while (r15_30 != 0x4b0);
        fun_6e9(r13_21, 0x6d8, 0x6df, rcx22, r8_14, r9_15, v3, v18, v19, v34, v35, v36, v37, v38, v39);
        *reinterpret_cast<int32_t*>(&rsi10) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi10) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx11) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx11) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx13 = r13_21;
        fun_702(0x6f0, 22, 1, rcx13, r8_14, r9_15, v3, v18, v19, v40, v41, v42, v43, v44, v45);
        r14_4 = v19;
        r15_7 = v18;
    }
    fun_5ee(rbx46, rsi10, rdx11, rcx13, r8_14, r9_15);
    fun_5f7(v3, rsi10, rdx11, rcx13, r8_14, r9_15);
    fun_5ff(r14_4, rsi10, rdx11, rcx13, r8_14, r9_15, v3);
    fun_607(r15_7, rsi10, rdx11, rcx13, r8_14, r9_15, v3);
    goto v47;
}

int32_t* fun_529(int32_t* rdi, int32_t* rsi) {
    int32_t* v3;
    int32_t* r15_4;
    int32_t* rax5;
    int64_t rax6;
    int64_t rcx7;
    int64_t rsi8;
    int64_t rdx9;
    int64_t rbx10;
    int32_t* rcx11;
    int32_t* r8_12;
    int32_t* r14_13;
    int32_t* r9_14;
    int32_t ebp15;
    signed char** r13_16;
    int32_t* v17;
    int32_t* v18;
    int32_t* r14_19;
    int32_t** rax20;
    int32_t* r13_21;
    int32_t* rcx22;
    int32_t* v23;
    int32_t* v24;
    int32_t* v25;
    int32_t* v26;
    int32_t* v27;
    int64_t v28;
    int32_t* rsi29;
    int64_t r15_30;
    int32_t* rdi31;
    int64_t r12_32;
    int64_t r14_33;
    int32_t* v34;
    int32_t* v35;
    int32_t* v36;
    int32_t* v37;
    int32_t* v38;
    int32_t* v39;
    int32_t* v40;
    int32_t* v41;
    int32_t* v42;
    int32_t* v43;
    int32_t* v44;
    int32_t* v45;
    int32_t* r14_46;
    int64_t rbx47;
    int64_t v48;

    v3 = reinterpret_cast<int32_t*>(__return_address());
    r15_4 = rax5;
    *reinterpret_cast<int32_t*>(&rax6) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax6) + 4) = reinterpret_cast<int32_t>(fputc);
    __asm__("movdqa xmm0, [rip+0x0]");
    __asm__("movapd xmm1, [rip+0x0]");
    __asm__("movdqa xmm2, [rip+0x0]");
    do {
        __asm__("xorps xmm3, xmm3");
        __asm__("cvtsi2sd xmm3, eax");
        __asm__("movd xmm4, rax");
        __asm__("pshufd xmm4, xmm4, 0x44");
        __asm__("unpcklpd xmm3, xmm3");
        *reinterpret_cast<int32_t*>(&rcx7) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx7) + 4) = reinterpret_cast<int32_t>(fputc);
        __asm__("movdqa xmm5, xmm0");
        do {
            __asm__("movdqa xmm6, xmm5");
            __asm__("pmuludq xmm6, xmm4");
            __asm__("pshufd xmm6, xmm6, 0xe8");
            __asm__("cvtdq2pd xmm6, xmm6");
            __asm__("divpd xmm6, xmm1");
            __asm__("addpd xmm6, xmm3");
            __asm__("movupd [rdx+rcx*8], xmm6");
            rcx7 = rcx7 + 2;
            __asm__("paddq xmm5, xmm2");
        } while (rcx7 != 0x4b0);
        ++rax6;
    } while (rax6 != 0x578);
    *rdi = *rsi;
    *reinterpret_cast<int32_t*>(&rsi8) = 0x578;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi8) + 4) = reinterpret_cast<int32_t>(fputc);
    rdx9 = rbx10;
    rcx11 = v3;
    r8_12 = r14_13;
    r9_14 = r15_4;
    fun_5d8(0x4b0, 0x578, rdx9, rcx11, r8_12, r9_14);
    if (ebp15 >= 43 && **r13_16 == fputc) {
        v17 = r15_4;
        v18 = r14_19;
        rax20 = g629;
        r13_21 = *rax20;
        rcx22 = r13_21;
        fun_645(0x633, 22, 1, rcx22, r8_12, r9_14, v3, v17, v18, v23, v24, v25, v26, v27, v28);
        rsi29 = reinterpret_cast<int32_t*>(0x64c);
        *reinterpret_cast<int32_t*>(&r15_30) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_30) + 4) = reinterpret_cast<int32_t>(fputc);
        rdi31 = r13_21;
        fun_660();
        do {
            r12_32 = r15_30 * 0x4b0;
            *reinterpret_cast<int32_t*>(&r14_33) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_33) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("ror eax, 0x2");
                if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r14_33 + r12_32) * 0xcccccccd) <= 0xccccccc) {
                    *reinterpret_cast<int32_t*>(&rdi31) = 10;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi31) + 4) = reinterpret_cast<int32_t>(fputc);
                    rsi29 = r13_21;
                    fun_69b();
                }
                *rdi31 = *rsi29;
                rdi31 = r13_21;
                rsi29 = reinterpret_cast<int32_t*>(0x667);
                fun_6b9();
                ++r14_33;
            } while (r14_33 != 0x4b0);
            ++r15_30;
        } while (r15_30 != 0x4b0);
        fun_6e9(r13_21, 0x6d8, 0x6df, rcx22, r8_12, r9_14, v3, v17, v18, v34, v35, v36, v37, v38, v39);
        *reinterpret_cast<int32_t*>(&rsi8) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi8) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx9) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx9) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx11 = r13_21;
        fun_702(0x6f0, 22, 1, rcx11, r8_12, r9_14, v3, v17, v18, v40, v41, v42, v43, v44, v45);
        r14_46 = v18;
        r15_4 = v17;
    }
    fun_5ee(rbx47, rsi8, rdx9, rcx11, r8_12, r9_14);
    fun_5f7(v3, rsi8, rdx9, rcx11, r8_12, r9_14);
    fun_5ff(r14_46, rsi8, rdx9, rcx11, r8_12, r9_14, v3);
    fun_607(r15_4, rsi8, rdx9, rcx11, r8_12, r9_14, v3);
    goto v48;
}

void fputc() {
}

void fun_1a(int32_t edi) {
    __asm__("movapd xmm2, xmm0");
}

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

void fun_c8(struct s12* rdi, struct s13* rsi) {
    struct s14* rdi3;
    struct s15* rsi4;
    int32_t* rdi5;
    int32_t* rsi6;
    int32_t* rsi7;
    int64_t rcx8;
    int64_t rax9;
    int32_t* rdi10;
    int32_t* rax11;

    __asm__("addsd xmm0, [r8+rdx*8]");
    rdi->f0 = rsi->f0;
    rdi3 = reinterpret_cast<struct s14*>(&rdi->f4);
    rsi4 = reinterpret_cast<struct s15*>(&rsi->f4);
    __asm__("addsd xmm0, [r8+rdx*8]");
    rdi3->f0 = rsi4->f0;
    rdi5 = &rdi3->f4;
    rsi6 = &rsi4->f4;
    __asm__("addsd xmm0, [r8+rdx*8]");
    *rdi5 = *rsi6;
    rsi7 = rsi6 + 1 + 1;
    if (reinterpret_cast<int1_t>(rdi5 + 1 + 1 == rcx8)) {
        if (rax9 != fputc) {
            *reinterpret_cast<int32_t*>(&rdi10) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi10) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("addsd xmm0, [r8+rdx*8]");
                *rdi10 = *rsi7;
                rsi7 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsi7 + 1) + 1);
                rdi10 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rdi10 + 1) + 1);
            } while (rdi10 != rax11);
        }
    }
}

struct s16 {
    int32_t f0;
    int32_t f4;
};

struct s17 {
    int32_t f0;
    int32_t f4;
};

void fun_166(struct s16* rdi, struct s17* rsi) {
    int32_t v3;

    if (v3 <= reinterpret_cast<int32_t>(fputc)) 
        goto 0x2ab;
    __asm__("xorpd xmm3, xmm3");
    rdi->f0 = rsi->f0;
    rdi->f4 = rsi->f4;
    goto 0x1e8;
}

void submain(int32_t edi, int64_t rsi) {
    fun_4f2(0x19a280, 8);
}

