
void fputc();

void fun_210();

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

void fun_d5() {
    int64_t v1;
    int32_t* rdi2;
    int32_t* rsi3;
    int32_t* rdi4;
    int32_t* rsi5;
    int32_t* rdi6;
    int32_t* rsi7;
    int64_t* r9_8;
    int64_t* v9;
    int32_t* rdi10;
    int32_t* rsi11;
    int64_t rbp12;
    int64_t v13;
    int1_t cf14;
    uint64_t rax15;
    int32_t* rdi16;
    int32_t* rsi17;
    uint64_t rbx18;
    uint64_t rbx19;
    int64_t rbp20;
    int64_t v21;
    int64_t r15_22;
    int32_t* rdi23;
    int32_t* rsi24;
    int64_t r15_25;
    int64_t r15_26;
    uint64_t r12_27;
    int32_t* rdi28;
    int32_t* rsi29;
    int32_t* rdi30;
    int32_t* rsi31;
    int64_t r14_32;
    int32_t* rdi33;
    int32_t* rsi34;
    int32_t* rdi35;
    int32_t* rsi36;
    int64_t v37;
    int64_t rbx38;
    int32_t ecx39;
    int64_t* rbp40;
    int64_t* v41;
    struct s0* rdx42;
    struct s0* rsi43;
    struct s1* rdi44;
    struct s0* r8_45;
    int64_t* r10_46;
    struct s1* r11_47;
    int64_t r12_48;
    struct s2* rdi49;
    struct s3* rsi50;
    int64_t rbx51;
    struct s2* rdi52;
    struct s3* rsi53;
    struct s1* v54;
    int64_t rcx55;
    int64_t v56;

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
        r9_8 = v9;
        while (1) {
            __asm__("movapd xmm1, xmm0");
            rdi10 = rdi2 + 1;
            rsi11 = rsi3 + 1;
            __asm__("andpd xmm0, xmm1");
            __asm__("andnpd xmm1, xmm5");
            __asm__("orpd xmm1, xmm0");
            __asm__("movlpd [r9+rbp*8], xmm1");
            ++rbp12;
            if (rbp12 == v13) 
                goto addr_17b_15;
            r9_8[rbp12] = reinterpret_cast<int64_t>(fputc);
            cf14 = *reinterpret_cast<uint32_t*>(reinterpret_cast<int64_t>(&v1) + 4) < reinterpret_cast<uint32_t>(fputc);
            if (*reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&v1) + 4) > reinterpret_cast<int32_t>(fputc)) {
                *reinterpret_cast<int32_t*>(&rax15) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax15) + 4) = reinterpret_cast<int32_t>(fputc);
                do {
                    *rdi10 = *rsi11;
                    rdi16 = rdi10 + 1;
                    rsi17 = rsi11 + 1;
                    __asm__("subsd xmm0, [r13+rbp*8+0x0]");
                    __asm__("mulsd xmm0, xmm0");
                    __asm__("addsd xmm0, [r9+rbp*8]");
                    *rdi16 = *rsi17;
                    rdi10 = rdi16 + 1;
                    rsi11 = rsi17 + 1;
                    ++rax15;
                    cf14 = rax15 < rbx18;
                } while (rax15 != rbx19);
            }
            *rdi10 = *rsi11;
            rdi2 = rdi10 + 1;
            rsi3 = rsi11 + 1;
            __asm__("divsd xmm0, xmm2");
            __asm__("ucomisd xmm0, xmm3");
            if (cf14) 
                break;
            __asm__("sqrtsd xmm0, xmm0");
        }
        fun_d5();
    }
    addr_17b_15:
    if (*reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&v1) + 4) > reinterpret_cast<int32_t>(fputc)) {
        *reinterpret_cast<int32_t*>(&rbp20) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp20) + 4) = reinterpret_cast<int32_t>(fputc);
        __asm__("xorps xmm3, xmm3");
        __asm__("sqrtsd xmm3, xmm2");
        __asm__("xorpd xmm4, xmm4");
        v21 = r15_22;
        *rdi10 = *rsi11;
        rdi23 = rdi10 + 1;
        rsi24 = rsi11 + 1;
        do {
            if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(&r15_25) < reinterpret_cast<int32_t>(fputc) == fputc)) | reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&r15_25) == fputc))) {
                *reinterpret_cast<int32_t*>(&r15_26) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_26) + 4) = reinterpret_cast<int32_t>(fputc);
                do {
                    r12_27 = reinterpret_cast<uint64_t>(rbp20 * 0x2580);
                    *rdi23 = *rsi24;
                    rdi28 = rdi23 + 1;
                    rsi29 = rsi24 + 1;
                    __asm__("subsd xmm0, [r13+r15*8+0x0]");
                    *rdi28 = *rsi29;
                    rdi30 = rdi28 + 1;
                    rsi31 = rsi29 + 1;
                    __asm__("ucomisd xmm2, xmm4");
                    __asm__("movapd xmm0, xmm3");
                    if (r12_27 + r14_32 < r12_27) {
                        __asm__("movapd xmm0, xmm2");
                        fun_210();
                        __asm__("xorpd xmm4, xmm4");
                        *rdi30 = *rsi31;
                        rdi33 = rdi30 + 1;
                        rsi34 = rsi31 + 1;
                        *rdi33 = *rsi34;
                        rdi30 = rdi33 + 1;
                        rsi31 = rsi34 + 1;
                    }
                    __asm__("mulsd xmm0, [r9+r15*8]");
                    *rdi30 = *rsi31;
                    rdi35 = rdi30 + 1;
                    rsi36 = rsi31 + 1;
                    __asm__("divsd xmm1, xmm0");
                    *rdi35 = *rsi36;
                    rdi23 = rdi35 + 1;
                    rsi24 = rsi36 + 1;
                    ++r15_26;
                } while (r15_26 != v37);
            }
            ++rbp20;
            r15_25 = v21;
        } while (rbp20 != rbx38);
    }
    ecx39 = static_cast<int32_t>(r15_25 - 1);
    rbp40 = v41;
    if (*reinterpret_cast<int32_t*>(&r15_25) >= 2) {
        rdx42 = reinterpret_cast<struct s0*>(static_cast<int64_t>(*reinterpret_cast<int32_t*>(&r15_25)));
        *reinterpret_cast<int32_t*>(&rsi43) = ecx39;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi43) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdi44) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi44) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&r8_45) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_45) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            r10_46 = rbp40 + reinterpret_cast<int64_t>(r8_45) * 0x4b0;
            r10_46[static_cast<int64_t>(r8_45)] = 0x3ff0000000000000;
            r8_45 = reinterpret_cast<struct s0*>(reinterpret_cast<int64_t>(r8_45) + 1);
            r11_47 = rdi44;
            if (reinterpret_cast<int64_t>(r8_45) < reinterpret_cast<int64_t>(rdx42)) {
                do {
                    r10_46[static_cast<int64_t>(r11_47)] = reinterpret_cast<int64_t>(fputc);
                    if (*reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&v1) + 4) > reinterpret_cast<int32_t>(fputc)) {
                        rdi44->f0 = rsi43->f0;
                        rdi44 = reinterpret_cast<struct s1*>(&rdi44->f4);
                        rsi43 = reinterpret_cast<struct s0*>(&rsi43->f4);
                        *reinterpret_cast<int32_t*>(&r12_48) = reinterpret_cast<int32_t>(fputc);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_48) + 4) = reinterpret_cast<int32_t>(fputc);
                        do {
                            rdi44->f0 = rsi43->f0;
                            rdi49 = reinterpret_cast<struct s2*>(&rdi44->f4);
                            rsi50 = reinterpret_cast<struct s3*>(&rsi43->f4);
                            __asm__("mulsd xmm1, [r13+r11*8+0x0]");
                            __asm__("addsd xmm0, xmm1");
                            rdi49->f0 = rsi50->f0;
                            rdi44 = reinterpret_cast<struct s1*>(&rdi49->f4);
                            rsi43 = reinterpret_cast<struct s0*>(&rsi50->f4);
                            ++r12_48;
                        } while (r12_48 != rbx51);
                    }
                    rdi44->f0 = rsi43->f0;
                    rdi52 = reinterpret_cast<struct s2*>(&rdi44->f4);
                    rsi53 = reinterpret_cast<struct s3*>(&rsi43->f4);
                    rdi52->f0 = rsi53->f0;
                    rdi44 = reinterpret_cast<struct s1*>(&rdi52->f4);
                    rsi43 = reinterpret_cast<struct s0*>(&rsi53->f4);
                    r11_47 = reinterpret_cast<struct s1*>(reinterpret_cast<int64_t>(r11_47) + 1);
                } while (r11_47 != v54);
            }
            rdi44 = reinterpret_cast<struct s1*>(reinterpret_cast<int64_t>(rdi44) + 1);
        } while (r8_45 != rsi43);
    }
    rcx55 = ecx39;
    (rbp40 + rcx55 * 0x4b0)[rcx55] = 0x3ff0000000000000;
    goto v56;
}

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

void fun_210() {
    int64_t v1;
    struct s4* rdi2;
    struct s5* rsi3;
    struct s6* rdi4;
    struct s7* rsi5;
    struct s6* rdi6;
    struct s7* rsi7;
    struct s4* rdi8;
    struct s5* rsi9;
    int64_t r15_10;
    int64_t v11;
    int64_t rbp12;
    int64_t r15_13;
    int64_t v14;
    int64_t rbx15;
    uint64_t r12_16;
    struct s6* rdi17;
    struct s7* rsi18;
    int64_t r14_19;
    int32_t ecx20;
    int64_t* rbp21;
    int64_t* v22;
    struct s8* rdx23;
    struct s8* rsi24;
    struct s9* rdi25;
    struct s8* r8_26;
    int64_t* r10_27;
    struct s9* r11_28;
    int64_t r12_29;
    struct s10* rdi30;
    struct s11* rsi31;
    int64_t rbx32;
    struct s10* rdi33;
    struct s11* rsi34;
    struct s9* v35;
    int64_t rcx36;
    int64_t v37;

    while (1) {
        v1 = reinterpret_cast<int64_t>(__return_address());
        __asm__("xorpd xmm4, xmm4");
        rdi2->f0 = rsi3->f0;
        rdi4 = reinterpret_cast<struct s6*>(&rdi2->f4);
        rsi5 = reinterpret_cast<struct s7*>(&rsi3->f4);
        rdi4->f0 = rsi5->f0;
        rdi2 = reinterpret_cast<struct s4*>(&rdi4->f4);
        rsi3 = reinterpret_cast<struct s5*>(&rsi5->f4);
        do {
            __asm__("mulsd xmm0, [r9+r15*8]");
            rdi2->f0 = rsi3->f0;
            rdi6 = reinterpret_cast<struct s6*>(&rdi2->f4);
            rsi7 = reinterpret_cast<struct s7*>(&rsi3->f4);
            __asm__("divsd xmm1, xmm0");
            rdi6->f0 = rsi7->f0;
            rdi8 = reinterpret_cast<struct s4*>(&rdi6->f4);
            rsi9 = reinterpret_cast<struct s5*>(&rsi7->f4);
            ++r15_10;
            if (r15_10 == v11) {
                do {
                    ++rbp12;
                    r15_13 = v14;
                    if (rbp12 == rbx15) 
                        goto addr_227_16;
                } while (reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(*reinterpret_cast<int32_t*>(&r15_13) < reinterpret_cast<int32_t>(fputc) == fputc)) | reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&r15_13) == fputc));
                *reinterpret_cast<int32_t*>(&r15_10) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_10) + 4) = reinterpret_cast<int32_t>(fputc);
            }
            r12_16 = reinterpret_cast<uint64_t>(rbp12 * 0x2580);
            rdi8->f0 = rsi9->f0;
            rdi17 = reinterpret_cast<struct s6*>(&rdi8->f4);
            rsi18 = reinterpret_cast<struct s7*>(&rsi9->f4);
            __asm__("subsd xmm0, [r13+r15*8+0x0]");
            rdi17->f0 = rsi18->f0;
            rdi2 = reinterpret_cast<struct s4*>(&rdi17->f4);
            rsi3 = reinterpret_cast<struct s5*>(&rsi18->f4);
            __asm__("ucomisd xmm2, xmm4");
            __asm__("movapd xmm0, xmm3");
        } while (r12_16 + r14_19 >= r12_16);
        __asm__("movapd xmm0, xmm2");
        fun_210();
    }
    addr_227_16:
    ecx20 = static_cast<int32_t>(r15_13 - 1);
    rbp21 = v22;
    if (*reinterpret_cast<int32_t*>(&r15_13) >= 2) {
        rdx23 = reinterpret_cast<struct s8*>(static_cast<int64_t>(*reinterpret_cast<int32_t*>(&r15_13)));
        *reinterpret_cast<int32_t*>(&rsi24) = ecx20;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi24) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdi25) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi25) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&r8_26) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_26) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            r10_27 = rbp21 + reinterpret_cast<int64_t>(r8_26) * 0x4b0;
            r10_27[static_cast<int64_t>(r8_26)] = 0x3ff0000000000000;
            r8_26 = reinterpret_cast<struct s8*>(reinterpret_cast<int64_t>(r8_26) + 1);
            r11_28 = rdi25;
            if (reinterpret_cast<int64_t>(r8_26) < reinterpret_cast<int64_t>(rdx23)) {
                do {
                    r10_27[static_cast<int64_t>(r11_28)] = reinterpret_cast<int64_t>(fputc);
                    if (*reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&v1) + 4) > reinterpret_cast<int32_t>(fputc)) {
                        rdi25->f0 = rsi24->f0;
                        rdi25 = reinterpret_cast<struct s9*>(&rdi25->f4);
                        rsi24 = reinterpret_cast<struct s8*>(&rsi24->f4);
                        *reinterpret_cast<int32_t*>(&r12_29) = reinterpret_cast<int32_t>(fputc);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_29) + 4) = reinterpret_cast<int32_t>(fputc);
                        do {
                            rdi25->f0 = rsi24->f0;
                            rdi30 = reinterpret_cast<struct s10*>(&rdi25->f4);
                            rsi31 = reinterpret_cast<struct s11*>(&rsi24->f4);
                            __asm__("mulsd xmm1, [r13+r11*8+0x0]");
                            __asm__("addsd xmm0, xmm1");
                            rdi30->f0 = rsi31->f0;
                            rdi25 = reinterpret_cast<struct s9*>(&rdi30->f4);
                            rsi24 = reinterpret_cast<struct s8*>(&rsi31->f4);
                            ++r12_29;
                        } while (r12_29 != rbx32);
                    }
                    rdi25->f0 = rsi24->f0;
                    rdi33 = reinterpret_cast<struct s10*>(&rdi25->f4);
                    rsi34 = reinterpret_cast<struct s11*>(&rsi24->f4);
                    rdi33->f0 = rsi34->f0;
                    rdi25 = reinterpret_cast<struct s9*>(&rdi33->f4);
                    rsi24 = reinterpret_cast<struct s8*>(&rsi34->f4);
                    r11_28 = reinterpret_cast<struct s9*>(reinterpret_cast<int64_t>(r11_28) + 1);
                } while (r11_28 != v35);
            }
            rdi25 = reinterpret_cast<struct s9*>(reinterpret_cast<int64_t>(rdi25) + 1);
        } while (r8_26 != rsi24);
    }
    rcx36 = ecx20;
    (rbp21 + rcx36 * 0x4b0)[rcx36] = 0x3ff0000000000000;
    goto v37;
}

int32_t** g44f = reinterpret_cast<int32_t**>(0x3d8d48288b4c);

void fun_46b(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx, int32_t* r8, int32_t* r9, int32_t* a7, int32_t* a8, int32_t* a9, int32_t* a10, int32_t* a11, int32_t* a12, int32_t* a13, int32_t* a14, int64_t a15);

void fun_486();

void fun_4bb();

void fun_4d9();

void fun_509(int32_t* rdi, int64_t rsi, int64_t rdx, int32_t* rcx, int32_t* r8, int32_t* r9, int32_t* a7, int32_t* a8, int32_t* a9, int32_t* a10, int32_t* a11, int32_t* a12, int32_t* a13, int32_t* a14, int32_t* a15);

void fun_522(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx, int32_t* r8, int32_t* r9, int32_t* a7, int32_t* a8, int32_t* a9, int32_t* a10, int32_t* a11, int32_t* a12, int32_t* a13, int32_t* a14, int32_t* a15);

void fun_414(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx, int32_t* r8, int32_t* r9);

void fun_41d(int32_t* rdi, int64_t rsi, int64_t rdx, int32_t* rcx, int32_t* r8, int32_t* r9);

void fun_425(int32_t* rdi, int64_t rsi, int64_t rdx, int32_t* rcx, int32_t* r8, int32_t* r9, int32_t* a7);

void fun_42d(int32_t* rdi, int64_t rsi, int64_t rdx, int32_t* rcx, int32_t* r8, int32_t* r9, int32_t* a7);

void fun_3fe(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx, int32_t* r8, int32_t* r9) {
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
        rax14 = g44f;
        r13_15 = *rax14;
        rcx16 = r13_15;
        fun_46b(0x459, 22, 1, rcx16, r8, r9, v7, v10, v12, v17, v18, v19, v20, v21, v22);
        rsi23 = reinterpret_cast<int32_t*>(0x472);
        *reinterpret_cast<int32_t*>(&r15_24) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_24) + 4) = reinterpret_cast<int32_t>(fputc);
        rdi25 = r13_15;
        fun_486();
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
                    fun_4bb();
                }
                *rdi25 = *rsi23;
                rdi25 = r13_15;
                rsi23 = reinterpret_cast<int32_t*>(0x48d);
                fun_4d9();
                ++r14_27;
            } while (r14_27 != 0x4b0);
            ++r15_24;
        } while (r15_24 != 0x4b0);
        fun_509(r13_15, 0x4f8, 0x4ff, rcx16, r8, r9, v7, v10, v12, v28, v29, v30, v31, v32, v33);
        *reinterpret_cast<int32_t*>(&rsi) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx = r13_15;
        fun_522(0x510, 22, 1, rcx, r8, r9, v7, v10, v12, v34, v35, v36, v37, v38, v39);
        r14_40 = v12;
        r15_41 = v10;
    }
    fun_414(rbx42, rsi, rdx, rcx, r8, r9);
    fun_41d(v7, rsi, rdx, rcx, r8, r9);
    fun_425(r14_40, rsi, rdx, rcx, r8, r9, v7);
    fun_42d(r15_41, rsi, rdx, rcx, r8, r9, v7);
    goto v43;
}

void fun_414(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx, int32_t* r8, int32_t* r9) {
    int32_t* r14_7;
    int32_t* r15_8;
    int64_t v9;

    fun_41d(__return_address(), rsi, rdx, rcx, r8, r9);
    fun_425(r14_7, rsi, rdx, rcx, r8, r9, __return_address());
    fun_42d(r15_8, rsi, rdx, rcx, r8, r9, __return_address());
    goto v9;
}

void fun_4bb() {
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
        fun_4d9();
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
        fun_4bb();
    }
    fun_509(r13_9, 0x4f8, 0x4ff, rcx10, r8_11, r9_12, __return_address(), v13, v14, v15, v16, v17, v18, v19, v20);
    fun_522(0x510, 22, 1, r13_21, r8_22, r9_23, __return_address(), v24, v25, v26, v27, v28, v29, v30, v31);
    fun_414(rbx32, 22, 1, r13_21, r8_33, r9_34);
    fun_41d(__return_address(), 22, 1, r13_21, r8_35, r9_36);
    fun_425(v37, 22, 1, r13_21, r8_38, r9_39, __return_address());
    fun_42d(v40, 22, 1, r13_21, r8_41, r9_42, __return_address());
    goto v43;
}

void fun_4d9() {
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
            fun_4bb();
        }
        *rdi4 = *rsi5;
        rdi4 = r13_7;
        rsi5 = rbp8;
        fun_4d9();
    }
    fun_509(r13_9, 0x4f8, 0x4ff, rcx10, r8_11, r9_12, __return_address(), v13, v14, v15, v16, v17, v18, v19, v20);
    fun_522(0x510, 22, 1, r13_21, r8_22, r9_23, __return_address(), v24, v25, v26, v27, v28, v29, v30, v31);
    fun_414(rbx32, 22, 1, r13_21, r8_33, r9_34);
    fun_41d(__return_address(), 22, 1, r13_21, r8_35, r9_36);
    fun_425(v37, 22, 1, r13_21, r8_38, r9_39, __return_address());
    fun_42d(v40, 22, 1, r13_21, r8_41, r9_42, __return_address());
    goto v43;
}

void fun_509(int32_t* rdi, int64_t rsi, int64_t rdx, int32_t* rcx, int32_t* r8, int32_t* r9, int32_t* a7, int32_t* a8, int32_t* a9, int32_t* a10, int32_t* a11, int32_t* a12, int32_t* a13, int32_t* a14, int32_t* a15) {
    int32_t* r13_16;
    int64_t rbx17;

    fun_522(0x510, 22, 1, r13_16, r8, r9, __return_address(), a7, a8, a9, a10, a11, a12, a13, a14);
    fun_414(rbx17, 22, 1, r13_16, r8, r9);
    fun_41d(__return_address(), 22, 1, r13_16, r8, r9);
    fun_425(a8, 22, 1, r13_16, r8, r9, __return_address());
    fun_42d(a7, 22, 1, r13_16, r8, r9, __return_address());
    goto a15;
}

void fun_46b(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx, int32_t* r8, int32_t* r9, int32_t* a7, int32_t* a8, int32_t* a9, int32_t* a10, int32_t* a11, int32_t* a12, int32_t* a13, int32_t* a14, int64_t a15) {
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
    rsi17 = reinterpret_cast<int32_t*>(0x472);
    *reinterpret_cast<int32_t*>(&r15_18) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_18) + 4) = reinterpret_cast<int32_t>(fputc);
    rdi19 = r13_20;
    fun_486();
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
                fun_4bb();
            }
            *rdi19 = *rsi17;
            rdi19 = r13_24;
            rsi17 = reinterpret_cast<int32_t*>(0x48d);
            fun_4d9();
            ++r14_22;
        } while (r14_22 != 0x4b0);
        ++r15_18;
    } while (r15_18 != 0x4b0);
    fun_509(r13_25, 0x4f8, 0x4ff, rcx, r8, r9, v16, a7, a8, a9, a10, a11, a12, a13, a14);
    fun_522(0x510, 22, 1, r13_26, r8, r9, v16, a7, a8, a9, a10, a11, a12, a13, a14);
    fun_414(rbx27, 22, 1, r13_26, r8, r9);
    fun_41d(v16, 22, 1, r13_26, r8, r9);
    fun_425(a8, 22, 1, r13_26, r8, r9, v16);
    fun_42d(a7, 22, 1, r13_26, r8, r9, v16);
    goto a15;
}

void fun_41d(int32_t* rdi, int64_t rsi, int64_t rdx, int32_t* rcx, int32_t* r8, int32_t* r9) {
    int32_t* r14_7;
    int32_t* r15_8;
    int64_t v9;

    fun_425(r14_7, rsi, rdx, rcx, r8, r9, __return_address());
    fun_42d(r15_8, rsi, rdx, rcx, r8, r9, __return_address());
    goto v9;
}

void fun_522(int64_t rdi, int64_t rsi, int64_t rdx, int32_t* rcx, int32_t* r8, int32_t* r9, int32_t* a7, int32_t* a8, int32_t* a9, int32_t* a10, int32_t* a11, int32_t* a12, int32_t* a13, int32_t* a14, int32_t* a15) {
    int64_t rbx16;

    fun_414(rbx16, rsi, rdx, rcx, r8, r9);
    fun_41d(__return_address(), rsi, rdx, rcx, r8, r9);
    fun_425(a8, rsi, rdx, rcx, r8, r9, __return_address());
    fun_42d(a7, rsi, rdx, rcx, r8, r9, __return_address());
    goto a15;
}

int32_t* fun_354(int64_t rdi, int64_t rsi);

int32_t* fun_367(int64_t rdi, int64_t rsi);

struct s12 {
    int32_t f0;
    int32_t f4;
};

struct s13 {
    int32_t f0;
    int32_t f4;
};

int32_t* fun_379(struct s12* rdi, struct s13* rsi);

int32_t g4b0 = 0x4c000000;

/* .LCPI0_1 */
int32_t LCPI0_1 = 0x83485354;

void fun_342(int64_t rdi, int64_t rsi) {
    int64_t rbx3;
    int64_t rax4;
    int32_t* rax5;
    int32_t* v6;
    int32_t* rax7;
    int32_t* r14_8;
    int32_t* rax9;
    int32_t* r15_10;
    int64_t rax11;
    int32_t* rdi12;
    int32_t* rsi13;
    int64_t rcx14;
    int64_t rsi15;
    int64_t rdx16;
    int32_t* rcx17;
    int32_t* r8_18;
    int32_t* r9_19;
    int32_t ebp20;
    signed char** r13_21;
    int32_t* v22;
    int32_t* v23;
    int32_t** rax24;
    int32_t* r13_25;
    int32_t* rcx26;
    int32_t* v27;
    int32_t* v28;
    int32_t* v29;
    int32_t* v30;
    int32_t* v31;
    int64_t v32;
    int32_t* rsi33;
    int64_t r15_34;
    int32_t* rdi35;
    int64_t r12_36;
    int64_t r14_37;
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
    int32_t* v48;
    int32_t* v49;
    int64_t v50;

    rbx3 = rax4;
    rax5 = fun_354(0x15f900, 8);
    v6 = rax5;
    rax7 = fun_367(0x4b0, 8);
    r14_8 = rax7;
    rax9 = fun_379(0x4b0, 8);
    r15_10 = rax9;
    *reinterpret_cast<int32_t*>(&rax11) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax11) + 4) = reinterpret_cast<int32_t>(fputc);
    g4b0 = LCPI0_1;
    rdi12 = reinterpret_cast<int32_t*>(0x4b4);
    rsi13 = reinterpret_cast<int32_t*>(12);
    do {
        __asm__("xorps xmm1, xmm1");
        __asm__("cvtsi2sd xmm1, eax");
        *reinterpret_cast<int32_t*>(&rcx14) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx14) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("xorps xmm2, xmm2");
            __asm__("cvtsi2sd xmm2, edx");
            __asm__("divsd xmm2, xmm0");
            __asm__("addsd xmm2, xmm1");
            *rdi12 = *rsi13;
            ++rdi12;
            ++rsi13;
            ++rcx14;
        } while (rcx14 != 0x4b0);
        ++rax11;
    } while (rax11 != 0x578);
    *rdi12 = *rsi13;
    *reinterpret_cast<int32_t*>(&rsi15) = 0x578;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi15) + 4) = reinterpret_cast<int32_t>(fputc);
    rdx16 = rbx3;
    rcx17 = v6;
    r8_18 = r14_8;
    r9_19 = r15_10;
    fun_3fe(0x4b0, 0x578, rdx16, rcx17, r8_18, r9_19);
    if (ebp20 >= 43 && **r13_21 == fputc) {
        v22 = r15_10;
        v23 = r14_8;
        rax24 = g44f;
        r13_25 = *rax24;
        rcx26 = r13_25;
        fun_46b(0x459, 22, 1, rcx26, r8_18, r9_19, v6, v22, v23, v27, v28, v29, v30, v31, v32);
        rsi33 = reinterpret_cast<int32_t*>(0x472);
        *reinterpret_cast<int32_t*>(&r15_34) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_34) + 4) = reinterpret_cast<int32_t>(fputc);
        rdi35 = r13_25;
        fun_486();
        do {
            r12_36 = r15_34 * 0x4b0;
            *reinterpret_cast<int32_t*>(&r14_37) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_37) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("ror eax, 0x2");
                if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r14_37 + r12_36) * 0xcccccccd) <= 0xccccccc) {
                    *reinterpret_cast<int32_t*>(&rdi35) = 10;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi35) + 4) = reinterpret_cast<int32_t>(fputc);
                    rsi33 = r13_25;
                    fun_4bb();
                }
                *rdi35 = *rsi33;
                rdi35 = r13_25;
                rsi33 = reinterpret_cast<int32_t*>(0x48d);
                fun_4d9();
                ++r14_37;
            } while (r14_37 != 0x4b0);
            ++r15_34;
        } while (r15_34 != 0x4b0);
        fun_509(r13_25, 0x4f8, 0x4ff, rcx26, r8_18, r9_19, v6, v22, v23, v38, v39, v40, v41, v42, v43);
        *reinterpret_cast<int32_t*>(&rsi15) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi15) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx16) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx16) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx17 = r13_25;
        fun_522(0x510, 22, 1, rcx17, r8_18, r9_19, v6, v22, v23, v44, v45, v46, v47, v48, v49);
        r14_8 = v23;
        r15_10 = v22;
    }
    fun_414(rbx3, rsi15, rdx16, rcx17, r8_18, r9_19);
    fun_41d(v6, rsi15, rdx16, rcx17, r8_18, r9_19);
    fun_425(r14_8, rsi15, rdx16, rcx17, r8_18, r9_19, v6);
    fun_42d(r15_10, rsi15, rdx16, rcx17, r8_18, r9_19, v6);
    goto v50;
}

void fun_486() {
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
                fun_4bb();
            }
            *rdi5 = *rsi6;
            rdi5 = r13_8;
            rsi6 = reinterpret_cast<int32_t*>(0x48d);
            fun_4d9();
            ++r14_4;
        } while (r14_4 != 0x4b0);
        ++r15_3;
    } while (r15_3 != 0x4b0);
    fun_509(r13_9, 0x4f8, 0x4ff, rcx10, r8_11, r9_12, v1, v13, v14, v15, v16, v17, v18, v19, v20);
    fun_522(0x510, 22, 1, r13_21, r8_22, r9_23, v1, v24, v25, v26, v27, v28, v29, v30, v31);
    fun_414(rbx32, 22, 1, r13_21, r8_33, r9_34);
    fun_41d(v1, 22, 1, r13_21, r8_35, r9_36);
    fun_425(v37, 22, 1, r13_21, r8_38, r9_39, v1);
    fun_42d(v40, 22, 1, r13_21, r8_41, r9_42, v1);
    goto v43;
}

void fun_425(int32_t* rdi, int64_t rsi, int64_t rdx, int32_t* rcx, int32_t* r8, int32_t* r9, int32_t* a7) {
    int32_t* r15_8;
    int64_t v9;

    fun_42d(r15_8, rsi, rdx, rcx, r8, r9, __return_address());
    goto v9;
}

int32_t* fun_354(int64_t rdi, int64_t rsi) {
    int32_t* v3;
    int32_t* rax4;
    int32_t* rax5;
    int32_t* r14_6;
    int32_t* rax7;
    int32_t* r15_8;
    int64_t rax9;
    int32_t* rdi10;
    int32_t* rsi11;
    int64_t rcx12;
    int64_t rsi13;
    int64_t rdx14;
    int64_t rbx15;
    int32_t* rcx16;
    int32_t* r8_17;
    int32_t* r9_18;
    int32_t ebp19;
    signed char** r13_20;
    int32_t* v21;
    int32_t* v22;
    int32_t** rax23;
    int32_t* r13_24;
    int32_t* rcx25;
    int32_t* v26;
    int32_t* v27;
    int32_t* v28;
    int32_t* v29;
    int32_t* v30;
    int64_t v31;
    int32_t* rsi32;
    int64_t r15_33;
    int32_t* rdi34;
    int64_t r12_35;
    int64_t r14_36;
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
    int32_t* v48;
    int64_t rbx49;
    int64_t v50;

    v3 = rax4;
    rax5 = fun_367(0x4b0, 8);
    r14_6 = rax5;
    rax7 = fun_379(0x4b0, 8);
    r15_8 = rax7;
    *reinterpret_cast<int32_t*>(&rax9) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax9) + 4) = reinterpret_cast<int32_t>(fputc);
    g4b0 = LCPI0_1;
    rdi10 = reinterpret_cast<int32_t*>(0x4b4);
    rsi11 = reinterpret_cast<int32_t*>(12);
    do {
        __asm__("xorps xmm1, xmm1");
        __asm__("cvtsi2sd xmm1, eax");
        *reinterpret_cast<int32_t*>(&rcx12) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx12) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("xorps xmm2, xmm2");
            __asm__("cvtsi2sd xmm2, edx");
            __asm__("divsd xmm2, xmm0");
            __asm__("addsd xmm2, xmm1");
            *rdi10 = *rsi11;
            ++rdi10;
            ++rsi11;
            ++rcx12;
        } while (rcx12 != 0x4b0);
        ++rax9;
    } while (rax9 != 0x578);
    *rdi10 = *rsi11;
    *reinterpret_cast<int32_t*>(&rsi13) = 0x578;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi13) + 4) = reinterpret_cast<int32_t>(fputc);
    rdx14 = rbx15;
    rcx16 = v3;
    r8_17 = r14_6;
    r9_18 = r15_8;
    fun_3fe(0x4b0, 0x578, rdx14, rcx16, r8_17, r9_18);
    if (ebp19 >= 43 && **r13_20 == fputc) {
        v21 = r15_8;
        v22 = r14_6;
        rax23 = g44f;
        r13_24 = *rax23;
        rcx25 = r13_24;
        fun_46b(0x459, 22, 1, rcx25, r8_17, r9_18, v3, v21, v22, v26, v27, v28, v29, v30, v31);
        rsi32 = reinterpret_cast<int32_t*>(0x472);
        *reinterpret_cast<int32_t*>(&r15_33) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_33) + 4) = reinterpret_cast<int32_t>(fputc);
        rdi34 = r13_24;
        fun_486();
        do {
            r12_35 = r15_33 * 0x4b0;
            *reinterpret_cast<int32_t*>(&r14_36) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_36) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("ror eax, 0x2");
                if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r14_36 + r12_35) * 0xcccccccd) <= 0xccccccc) {
                    *reinterpret_cast<int32_t*>(&rdi34) = 10;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi34) + 4) = reinterpret_cast<int32_t>(fputc);
                    rsi32 = r13_24;
                    fun_4bb();
                }
                *rdi34 = *rsi32;
                rdi34 = r13_24;
                rsi32 = reinterpret_cast<int32_t*>(0x48d);
                fun_4d9();
                ++r14_36;
            } while (r14_36 != 0x4b0);
            ++r15_33;
        } while (r15_33 != 0x4b0);
        fun_509(r13_24, 0x4f8, 0x4ff, rcx25, r8_17, r9_18, v3, v21, v22, v37, v38, v39, v40, v41, v42);
        *reinterpret_cast<int32_t*>(&rsi13) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi13) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx14) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx14) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx16 = r13_24;
        fun_522(0x510, 22, 1, rcx16, r8_17, r9_18, v3, v21, v22, v43, v44, v45, v46, v47, v48);
        r14_6 = v22;
        r15_8 = v21;
    }
    fun_414(rbx49, rsi13, rdx14, rcx16, r8_17, r9_18);
    fun_41d(v3, rsi13, rdx14, rcx16, r8_17, r9_18);
    fun_425(r14_6, rsi13, rdx14, rcx16, r8_17, r9_18, v3);
    fun_42d(r15_8, rsi13, rdx14, rcx16, r8_17, r9_18, v3);
    goto v50;
}

void fun_42d(int32_t* rdi, int64_t rsi, int64_t rdx, int32_t* rcx, int32_t* r8, int32_t* r9, int32_t* a7) {
    int64_t v8;

    goto v8;
}

int32_t* fun_367(int64_t rdi, int64_t rsi) {
    int32_t* v3;
    int32_t* r14_4;
    int32_t* rax5;
    int32_t* rax6;
    int32_t* r15_7;
    int64_t rax8;
    int32_t* rdi9;
    int32_t* rsi10;
    int64_t rcx11;
    int64_t rsi12;
    int64_t rdx13;
    int64_t rbx14;
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
    int64_t rbx48;
    int64_t v49;

    v3 = reinterpret_cast<int32_t*>(__return_address());
    r14_4 = rax5;
    rax6 = fun_379(0x4b0, 8);
    r15_7 = rax6;
    *reinterpret_cast<int32_t*>(&rax8) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax8) + 4) = reinterpret_cast<int32_t>(fputc);
    g4b0 = LCPI0_1;
    rdi9 = reinterpret_cast<int32_t*>(0x4b4);
    rsi10 = reinterpret_cast<int32_t*>(12);
    do {
        __asm__("xorps xmm1, xmm1");
        __asm__("cvtsi2sd xmm1, eax");
        *reinterpret_cast<int32_t*>(&rcx11) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx11) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("xorps xmm2, xmm2");
            __asm__("cvtsi2sd xmm2, edx");
            __asm__("divsd xmm2, xmm0");
            __asm__("addsd xmm2, xmm1");
            *rdi9 = *rsi10;
            ++rdi9;
            ++rsi10;
            ++rcx11;
        } while (rcx11 != 0x4b0);
        ++rax8;
    } while (rax8 != 0x578);
    *rdi9 = *rsi10;
    *reinterpret_cast<int32_t*>(&rsi12) = 0x578;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi12) + 4) = reinterpret_cast<int32_t>(fputc);
    rdx13 = rbx14;
    rcx15 = v3;
    r8_16 = r14_4;
    r9_17 = r15_7;
    fun_3fe(0x4b0, 0x578, rdx13, rcx15, r8_16, r9_17);
    if (ebp18 >= 43 && **r13_19 == fputc) {
        v20 = r15_7;
        v21 = r14_4;
        rax22 = g44f;
        r13_23 = *rax22;
        rcx24 = r13_23;
        fun_46b(0x459, 22, 1, rcx24, r8_16, r9_17, v3, v20, v21, v25, v26, v27, v28, v29, v30);
        rsi31 = reinterpret_cast<int32_t*>(0x472);
        *reinterpret_cast<int32_t*>(&r15_32) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_32) + 4) = reinterpret_cast<int32_t>(fputc);
        rdi33 = r13_23;
        fun_486();
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
                    fun_4bb();
                }
                *rdi33 = *rsi31;
                rdi33 = r13_23;
                rsi31 = reinterpret_cast<int32_t*>(0x48d);
                fun_4d9();
                ++r14_35;
            } while (r14_35 != 0x4b0);
            ++r15_32;
        } while (r15_32 != 0x4b0);
        fun_509(r13_23, 0x4f8, 0x4ff, rcx24, r8_16, r9_17, v3, v20, v21, v36, v37, v38, v39, v40, v41);
        *reinterpret_cast<int32_t*>(&rsi12) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi12) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx13) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx13) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx15 = r13_23;
        fun_522(0x510, 22, 1, rcx15, r8_16, r9_17, v3, v20, v21, v42, v43, v44, v45, v46, v47);
        r14_4 = v21;
        r15_7 = v20;
    }
    fun_414(rbx48, rsi12, rdx13, rcx15, r8_16, r9_17);
    fun_41d(v3, rsi12, rdx13, rcx15, r8_16, r9_17);
    fun_425(r14_4, rsi12, rdx13, rcx15, r8_16, r9_17, v3);
    fun_42d(r15_7, rsi12, rdx13, rcx15, r8_16, r9_17, v3);
    goto v49;
}

int32_t* fun_379(struct s12* rdi, struct s13* rsi) {
    int32_t* v3;
    int32_t* r15_4;
    int32_t* rax5;
    int64_t rax6;
    int32_t* rdi7;
    int32_t* rsi8;
    int64_t rcx9;
    int64_t rsi10;
    int64_t rdx11;
    int64_t rbx12;
    int32_t* rcx13;
    int32_t* r8_14;
    int32_t* r14_15;
    int32_t* r9_16;
    int32_t ebp17;
    signed char** r13_18;
    int32_t* v19;
    int32_t* v20;
    int32_t* r14_21;
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
    int32_t* r14_48;
    int64_t rbx49;
    int64_t v50;

    v3 = reinterpret_cast<int32_t*>(__return_address());
    r15_4 = rax5;
    *reinterpret_cast<int32_t*>(&rax6) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax6) + 4) = reinterpret_cast<int32_t>(fputc);
    rdi->f0 = rsi->f0;
    rdi7 = &rdi->f4;
    rsi8 = &rsi->f4;
    do {
        __asm__("xorps xmm1, xmm1");
        __asm__("cvtsi2sd xmm1, eax");
        *reinterpret_cast<int32_t*>(&rcx9) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx9) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("xorps xmm2, xmm2");
            __asm__("cvtsi2sd xmm2, edx");
            __asm__("divsd xmm2, xmm0");
            __asm__("addsd xmm2, xmm1");
            *rdi7 = *rsi8;
            ++rdi7;
            ++rsi8;
            ++rcx9;
        } while (rcx9 != 0x4b0);
        ++rax6;
    } while (rax6 != 0x578);
    *rdi7 = *rsi8;
    *reinterpret_cast<int32_t*>(&rsi10) = 0x578;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi10) + 4) = reinterpret_cast<int32_t>(fputc);
    rdx11 = rbx12;
    rcx13 = v3;
    r8_14 = r14_15;
    r9_16 = r15_4;
    fun_3fe(0x4b0, 0x578, rdx11, rcx13, r8_14, r9_16);
    if (ebp17 >= 43 && **r13_18 == fputc) {
        v19 = r15_4;
        v20 = r14_21;
        rax22 = g44f;
        r13_23 = *rax22;
        rcx24 = r13_23;
        fun_46b(0x459, 22, 1, rcx24, r8_14, r9_16, v3, v19, v20, v25, v26, v27, v28, v29, v30);
        rsi31 = reinterpret_cast<int32_t*>(0x472);
        *reinterpret_cast<int32_t*>(&r15_32) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_32) + 4) = reinterpret_cast<int32_t>(fputc);
        rdi33 = r13_23;
        fun_486();
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
                    fun_4bb();
                }
                *rdi33 = *rsi31;
                rdi33 = r13_23;
                rsi31 = reinterpret_cast<int32_t*>(0x48d);
                fun_4d9();
                ++r14_35;
            } while (r14_35 != 0x4b0);
            ++r15_32;
        } while (r15_32 != 0x4b0);
        fun_509(r13_23, 0x4f8, 0x4ff, rcx24, r8_14, r9_16, v3, v19, v20, v36, v37, v38, v39, v40, v41);
        *reinterpret_cast<int32_t*>(&rsi10) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi10) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx11) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx11) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx13 = r13_23;
        fun_522(0x510, 22, 1, rcx13, r8_14, r9_16, v3, v19, v20, v42, v43, v44, v45, v46, v47);
        r14_48 = v20;
        r15_4 = v19;
    }
    fun_414(rbx49, rsi10, rdx11, rcx13, r8_14, r9_16);
    fun_41d(v3, rsi10, rdx11, rcx13, r8_14, r9_16);
    fun_425(r14_48, rsi10, rdx11, rcx13, r8_14, r9_16, v3);
    fun_42d(r15_4, rsi10, rdx11, rcx13, r8_14, r9_16, v3);
    goto v50;
}

void fputc() {
}

void fun_19(int32_t edi) {
}

void fun_32(int32_t* rdi, int32_t* rsi) {
    int64_t rax3;
    int64_t v4;

    __asm__("movups xmm0, [rbp+rax*8+0x0]");
    __asm__("divsd xmm0, xmm2");
    *rdi = *rsi;
    if (rax3 + 1 == v4) {
    }
}

void fun_85() {
    int64_t rax1;
    int64_t rax2;
    signed char cl3;

    *reinterpret_cast<signed char*>(rax1 - 1) = reinterpret_cast<signed char>(*reinterpret_cast<signed char*>(rax2 - 1) + cl3);
}

void submain(int32_t edi, int64_t rsi) {
    fun_342(0x19a280, 8);
}

