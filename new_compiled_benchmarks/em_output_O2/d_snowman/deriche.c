
void fun_12e();

void fun_144();

void fun_154();

void fputc();

void fun_e9() {
    int64_t rax1;
    int32_t r12d2;
    uint64_t rcx3;
    uint32_t ebp4;
    int32_t r12d5;
    int32_t r12d6;
    int32_t ebp7;
    int32_t ebp8;
    int32_t r12d9;
    uint64_t rdx10;
    int64_t rsi11;
    int64_t rdi12;
    int32_t ebp13;
    int32_t ebp14;
    int64_t r8_15;
    int64_t r9_16;
    int64_t r15_17;
    uint32_t ebp18;
    int64_t r14_19;
    uint64_t r12_20;
    uint64_t r11_21;
    int64_t rbx22;
    uint64_t r11_23;
    uint64_t rdx24;
    int64_t rsi25;
    int32_t ebp26;
    int32_t ebp27;
    int64_t rdx28;
    int32_t ebp29;
    int32_t ebp30;
    uint64_t rsi31;
    int32_t r12d32;
    int32_t r12d33;
    int64_t v34;
    uint64_t rdx35;
    int64_t rsi36;
    int1_t less_or_equal37;
    int64_t rdx38;
    uint64_t rsi39;
    int32_t ebp40;
    int32_t ebp41;
    int1_t less_or_equal42;
    int32_t r12d43;
    int32_t r12d44;
    uint64_t rdx45;
    int64_t rsi46;
    int64_t rdi47;
    int32_t v48;
    int32_t r12d49;
    int32_t ebp50;
    int32_t ebp51;
    int64_t r8_52;
    int64_t r9_53;
    int64_t r15_54;
    uint32_t ebp55;
    int64_t r14_56;
    uint64_t r13_57;
    uint64_t r11_58;
    int64_t rbx59;
    uint64_t r11_60;

    __asm__("movaps xmm3, [rsp+0x10]");
    __asm__("mulss xmm0, xmm3");
    __asm__("movaps xmm1, [rsp+0x40]");
    __asm__("movss xmm2, [rip+0x0]");
    __asm__("addss xmm2, xmm1");
    __asm__("mulss xmm2, xmm0");
    __asm__("movss [rsp+0xc], xmm2");
    __asm__("xorps xmm3, [rip+0x0]");
    __asm__("movaps [rsp+0x50], xmm3");
    __asm__("mulss xmm1, [rip+0x0]");
    __asm__("movaps [rsp+0x40], xmm1");
    __asm__("movaps xmm0, xmm1");
    fun_12e();
    __asm__("mulss xmm0, [rsp+0x50]");
    __asm__("movss [rsp+0x50], xmm0");
    __asm__("movaps xmm0, [rsp+0x20]");
    fun_144();
    __asm__("movss [rsp+0x20], xmm0");
    __asm__("movaps xmm0, [rsp+0x40]");
    fun_154();
    __asm__("movss xmm10, [rsp+0x60]");
    __asm__("movaps xmm9, [rsp+0x10]");
    __asm__("movss xmm8, [rsp+0x20]");
    __asm__("movss xmm7, [rsp+0x50]");
    __asm__("movss xmm6, [rsp+0xc]");
    __asm__("xorps xmm0, [rip+0x0]");
    *reinterpret_cast<int32_t*>(&rax1) = r12d2;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax1) + 4) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<uint32_t*>(&rcx3) = ebp4;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx3) + 4) = reinterpret_cast<int32_t>(fputc);
    if (reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(r12d5 < reinterpret_cast<int32_t>(fputc) == fputc)) | reinterpret_cast<uint1_t>(r12d6 == fputc)) {
        addr_3c5_5:
        if (reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(ebp7 < reinterpret_cast<int32_t>(fputc) == fputc)) | reinterpret_cast<uint1_t>(ebp8 == fputc)) {
            addr_4db_6:
            if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(r12d9 < reinterpret_cast<int32_t>(fputc) == fputc)) | reinterpret_cast<uint1_t>(r12d9 == fputc))) {
                *reinterpret_cast<uint32_t*>(&rdx10) = *reinterpret_cast<uint32_t*>(&rcx3) & 0xfffffff8;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx10) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi11 = reinterpret_cast<int64_t>(-rcx3);
                *reinterpret_cast<int32_t*>(&rdi12) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi12) + 4) = reinterpret_cast<int32_t>(fputc);
                while (1) {
                    if (reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(ebp13 < reinterpret_cast<int32_t>(fputc) == fputc)) | reinterpret_cast<uint1_t>(ebp14 == fputc)) {
                        addr_500_9:
                        ++rdi12;
                        if (rdi12 == rax1) 
                            break; else 
                            continue;
                    } else {
                        r8_15 = rdi12 * 0x21c0;
                        r9_16 = r8_15 + r15_17;
                        if (ebp18 < 8 || reinterpret_cast<uint64_t>(r9_16 - (r8_15 + r14_19)) < 32) {
                            *reinterpret_cast<int32_t*>(&r12_20) = reinterpret_cast<int32_t>(fputc);
                            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_20) + 4) = reinterpret_cast<int32_t>(fputc);
                            goto addr_593_12;
                        }
                        *reinterpret_cast<int32_t*>(&r11_21) = reinterpret_cast<int32_t>(fputc);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_21) + 4) = reinterpret_cast<int32_t>(fputc);
                        *reinterpret_cast<int32_t*>(&r12_20) = reinterpret_cast<int32_t>(fputc);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_20) + 4) = reinterpret_cast<int32_t>(fputc);
                        if (reinterpret_cast<uint64_t>(r9_16 - (r8_15 + rbx22)) < 32) {
                            addr_593_12:
                            r11_23 = r12_20;
                            if ((*reinterpret_cast<unsigned char*>(&rcx3) & 1) != fputc) {
                                __asm__("movss xmm0, [r10+r12*4]");
                                __asm__("addss xmm0, [r8+r12*4]");
                                __asm__("movss [r9+r12*4], xmm0");
                                r11_23 = r12_20 | 1;
                            }
                        } else {
                            do {
                                __asm__("movups xmm0, [r10+r11*4]");
                                __asm__("movups xmm1, [r10+r11*4+0x10]");
                                __asm__("movups xmm2, [r8+r11*4]");
                                __asm__("addps xmm2, xmm0");
                                __asm__("movups xmm0, [r8+r11*4+0x10]");
                                __asm__("addps xmm0, xmm1");
                                __asm__("movups [r9+r11*4], xmm2");
                                __asm__("movups [r9+r11*4+0x10], xmm0");
                                r11_21 = r11_21 + 8;
                            } while (r11_21 != rdx10);
                            r12_20 = rdx10;
                            if (rdx10 == rcx3) 
                                goto addr_500_9; else 
                                goto addr_58c_18;
                        }
                    }
                    if (~r12_20 != rsi11) {
                        do {
                            __asm__("movss xmm0, [r10+r11*4]");
                            __asm__("addss xmm0, [r8+r11*4]");
                            __asm__("movss [r9+r11*4], xmm0");
                            __asm__("movss xmm0, [r10+r11*4+0x4]");
                            __asm__("addss xmm0, [r8+r11*4+0x4]");
                            __asm__("movss [r9+r11*4+0x4], xmm0");
                            r11_23 = r11_23 + 2;
                        } while (r11_23 != rcx3);
                        goto addr_500_9;
                    }
                    addr_58c_18:
                    goto addr_593_12;
                }
            }
        } else {
            *reinterpret_cast<int32_t*>(&rdx24) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx24) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(r12d9 < reinterpret_cast<int32_t>(fputc) == fputc)) | reinterpret_cast<uint1_t>(r12d9 == fputc))) {
                    __asm__("xorps xmm2, xmm2");
                    *reinterpret_cast<int32_t*>(&rsi25) = reinterpret_cast<int32_t>(fputc);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi25) + 4) = reinterpret_cast<int32_t>(fputc);
                    __asm__("xorps xmm3, xmm3");
                    __asm__("xorps xmm1, xmm1");
                    do {
                        __asm__("movaps xmm4, xmm3");
                        __asm__("mulss xmm2, xmm10");
                        __asm__("movss xmm3, [r8+rdx*4]");
                        __asm__("mulss xmm3, xmm9");
                        __asm__("addss xmm3, xmm2");
                        __asm__("movaps xmm2, xmm8");
                        __asm__("mulss xmm2, xmm4");
                        __asm__("addss xmm2, xmm3");
                        __asm__("mulss xmm1, xmm0");
                        __asm__("addss xmm1, xmm2");
                        __asm__("movss [rdi+rdx*4], xmm1");
                        __asm__("movss xmm2, [r8+rdx*4]");
                        ++rsi25;
                        __asm__("movaps xmm3, xmm1");
                        __asm__("movaps xmm1, xmm4");
                    } while (rsi25 != rax1);
                }
                ++rdx24;
            } while (rdx24 != rcx3);
            if (reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(ebp26 < reinterpret_cast<int32_t>(fputc) == fputc)) | reinterpret_cast<uint1_t>(ebp27 == fputc)) 
                goto addr_4db_6; else 
                goto addr_45c_29;
        }
    } else {
        *reinterpret_cast<int32_t*>(&rdx28) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx28) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(ebp29 < reinterpret_cast<int32_t>(fputc) == fputc)) | reinterpret_cast<uint1_t>(ebp30 == fputc))) {
                __asm__("xorps xmm2, xmm2");
                *reinterpret_cast<int32_t*>(&rsi31) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi31) + 4) = reinterpret_cast<int32_t>(fputc);
                __asm__("xorps xmm3, xmm3");
                __asm__("xorps xmm1, xmm1");
                do {
                    __asm__("movaps xmm4, xmm3");
                    __asm__("mulss xmm2, xmm10");
                    __asm__("movss xmm3, [r8+rsi*4]");
                    __asm__("mulss xmm3, xmm9");
                    __asm__("addss xmm3, xmm2");
                    __asm__("movaps xmm2, xmm8");
                    __asm__("mulss xmm2, xmm4");
                    __asm__("addss xmm2, xmm3");
                    __asm__("mulss xmm1, xmm0");
                    __asm__("addss xmm1, xmm2");
                    __asm__("movss [rdi+rsi*4], xmm1");
                    __asm__("movss xmm2, [r8+rsi*4]");
                    ++rsi31;
                    __asm__("movaps xmm3, xmm1");
                    __asm__("movaps xmm1, xmm4");
                } while (rsi31 != rcx3);
            }
            ++rdx28;
        } while (rdx28 != rax1);
        if (reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(r12d32 < reinterpret_cast<int32_t>(fputc) == fputc)) | reinterpret_cast<uint1_t>(r12d33 == fputc)) 
            goto addr_3c5_5; else 
            goto addr_20d_37;
    }
    goto v34;
    addr_45c_29:
    *reinterpret_cast<int32_t*>(&rdx35) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx35) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        __asm__("xorps xmm4, xmm4");
        rsi36 = rax1;
        __asm__("xorps xmm3, xmm3");
        __asm__("xorps xmm5, xmm5");
        __asm__("xorps xmm1, xmm1");
        if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(r12d9 < reinterpret_cast<int32_t>(fputc) == fputc)) | reinterpret_cast<uint1_t>(r12d9 == fputc))) {
            do {
                __asm__("movaps xmm2, xmm5");
                __asm__("mulss xmm3, xmm7");
                __asm__("movaps xmm5, xmm6");
                __asm__("mulss xmm5, xmm4");
                __asm__("addss xmm5, xmm3");
                __asm__("movaps xmm3, xmm8");
                __asm__("mulss xmm3, xmm2");
                __asm__("addss xmm3, xmm5");
                __asm__("mulss xmm1, xmm0");
                __asm__("addss xmm1, xmm3");
                __asm__("movss [r9+rdx*4], xmm1");
                __asm__("movaps xmm3, xmm4");
                __asm__("movss xmm4, [r8+rdx*4]");
                __asm__("movaps xmm5, xmm1");
                __asm__("movaps xmm1, xmm2");
                less_or_equal37 = rsi36 <= 1;
                --rsi36;
            } while (!less_or_equal37);
        }
        ++rdx35;
    } while (rdx35 != rcx3);
    goto addr_4db_6;
    addr_20d_37:
    *reinterpret_cast<int32_t*>(&rdx38) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx38) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        __asm__("xorps xmm4, xmm4");
        rsi39 = rcx3;
        __asm__("xorps xmm3, xmm3");
        __asm__("xorps xmm5, xmm5");
        __asm__("xorps xmm1, xmm1");
        if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(ebp40 < reinterpret_cast<int32_t>(fputc) == fputc)) | reinterpret_cast<uint1_t>(ebp41 == fputc))) {
            do {
                __asm__("movaps xmm2, xmm5");
                __asm__("mulss xmm3, xmm7");
                __asm__("movaps xmm5, xmm6");
                __asm__("mulss xmm5, xmm4");
                __asm__("addss xmm5, xmm3");
                __asm__("movaps xmm3, xmm8");
                __asm__("mulss xmm3, xmm2");
                __asm__("addss xmm3, xmm5");
                __asm__("mulss xmm1, xmm0");
                __asm__("addss xmm1, xmm3");
                __asm__("movss [r10+r8*4], xmm1");
                __asm__("movaps xmm3, xmm4");
                __asm__("movss xmm4, [r9+r8*4]");
                less_or_equal42 = reinterpret_cast<int64_t>(rsi39) <= reinterpret_cast<int64_t>(1);
                --rsi39;
                __asm__("movaps xmm5, xmm1");
                __asm__("movaps xmm1, xmm2");
            } while (!less_or_equal42);
        }
        ++rdx38;
    } while (rdx38 != rax1);
    if (reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(r12d43 < reinterpret_cast<int32_t>(fputc) == fputc)) | reinterpret_cast<uint1_t>(r12d44 == fputc)) 
        goto addr_3c5_5;
    *reinterpret_cast<uint32_t*>(&rdx45) = *reinterpret_cast<uint32_t*>(&rcx3) & 0xfffffff8;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx45) + 4) = reinterpret_cast<int32_t>(fputc);
    rsi46 = reinterpret_cast<int64_t>(-rcx3);
    *reinterpret_cast<int32_t*>(&rdi47) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi47) + 4) = reinterpret_cast<int32_t>(fputc);
    v48 = r12d49;
    while (1) {
        if (reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(ebp50 < reinterpret_cast<int32_t>(fputc) == fputc)) | reinterpret_cast<uint1_t>(ebp51 == fputc)) {
            addr_2c0_52:
            ++rdi47;
            if (rdi47 == rax1) 
                goto addr_3c5_5; else 
                continue;
        } else {
            r8_52 = rdi47 * 0x21c0;
            r9_53 = r8_52 + r15_54;
            if (ebp55 < 8 || reinterpret_cast<uint64_t>(r9_53 - (r8_52 + r14_56)) < 32) {
                *reinterpret_cast<int32_t*>(&r13_57) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_57) + 4) = reinterpret_cast<int32_t>(fputc);
                goto addr_363_55;
            }
            *reinterpret_cast<int32_t*>(&r11_58) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_58) + 4) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(&r13_57) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_57) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi46 = rsi46;
            r12d9 = v48;
            if (reinterpret_cast<uint64_t>(r9_53 - (r8_52 + rbx59)) < 32) {
                addr_363_55:
                r11_60 = r13_57;
                if ((*reinterpret_cast<unsigned char*>(&rcx3) & 1) != fputc) {
                    __asm__("movss xmm1, [r10+r13*4]");
                    __asm__("addss xmm1, [r8+r13*4]");
                    __asm__("movss [r9+r13*4], xmm1");
                    r11_60 = r13_57 | 1;
                }
            } else {
                do {
                    __asm__("movups xmm1, [r10+r11*4]");
                    __asm__("movups xmm2, [r10+r11*4+0x10]");
                    __asm__("movups xmm3, [r8+r11*4]");
                    __asm__("addps xmm3, xmm1");
                    __asm__("movups xmm1, [r8+r11*4+0x10]");
                    __asm__("addps xmm1, xmm2");
                    __asm__("movups [r9+r11*4], xmm3");
                    __asm__("movups [r9+r11*4+0x10], xmm1");
                    r11_58 = r11_58 + 8;
                } while (r11_58 != rdx45);
                r13_57 = rdx45;
                if (rdx45 == rcx3) 
                    goto addr_2c0_52; else 
                    goto addr_35c_61;
            }
        }
        if (~r13_57 != rsi46) {
            do {
                __asm__("movss xmm1, [r10+r11*4]");
                __asm__("addss xmm1, [r8+r11*4]");
                __asm__("movss [r9+r11*4], xmm1");
                __asm__("movss xmm1, [r10+r11*4+0x4]");
                __asm__("addss xmm1, [r8+r11*4+0x4]");
                __asm__("movss [r9+r11*4+0x4], xmm1");
                r11_60 = r11_60 + 2;
            } while (r11_60 != rcx3);
            goto addr_2c0_52;
        }
        addr_35c_61:
        goto addr_363_55;
    }
}

int64_t* g794 = reinterpret_cast<int64_t*>(0x3d8d48288b4c);

void fun_7b0(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15);

void fun_7cb(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15);

void fun_80b(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15);

void fun_82d(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15);

void fun_85d(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15);

void fun_876(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15);

void fun_759(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9);

void fun_762(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9);

void fun_76a(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7);

void fun_772(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7);

void fun_743(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    int64_t v7;
    int32_t ebp8;
    signed char** r13_9;
    int64_t v10;
    int64_t r15_11;
    int64_t v12;
    int64_t r14_13;
    int64_t* rax14;
    int64_t r13_15;
    int64_t rcx16;
    int64_t v17;
    int64_t v18;
    int64_t v19;
    int64_t v20;
    int64_t v21;
    int64_t v22;
    int64_t r15_23;
    int64_t v24;
    int64_t v25;
    int64_t v26;
    int64_t v27;
    int64_t v28;
    int64_t v29;
    int64_t r12_30;
    int64_t r14_31;
    int64_t v32;
    int64_t v33;
    int64_t v34;
    int64_t v35;
    int64_t v36;
    int64_t v37;
    int64_t v38;
    int64_t v39;
    int64_t v40;
    int64_t v41;
    int64_t v42;
    int64_t v43;
    int64_t v44;
    int64_t v45;
    int64_t v46;
    int64_t v47;
    int64_t v48;
    int64_t v49;
    int64_t v50;
    int64_t v51;
    int64_t v52;
    int64_t v53;
    int64_t v54;
    int64_t v55;
    int64_t r14_56;
    int64_t r15_57;
    int64_t rbx58;
    int64_t v59;

    v7 = reinterpret_cast<int64_t>(__return_address());
    if (ebp8 >= 43 && **r13_9 == fputc) {
        v10 = r15_11;
        v12 = r14_13;
        rax14 = g794;
        r13_15 = *rax14;
        rcx16 = r13_15;
        fun_7b0(0x79e, 22, 1, rcx16, r8, r9, v7, v10, v12, v17, v18, v19, v20, v21, v22);
        *reinterpret_cast<int32_t*>(&r15_23) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_23) + 4) = reinterpret_cast<int32_t>(fputc);
        fun_7cb(r13_15, 0x7b7, 0x7be, rcx16, r8, r9, v7, v10, v12, v24, v25, v26, v27, v28, v29);
        do {
            r12_30 = r15_23 * 0x870;
            *reinterpret_cast<int32_t*>(&r14_31) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_31) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("ror eax, 0x2");
                if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r14_31 + r12_30) * 0xcccccccd) <= 0xccccccc) {
                    fun_80b(10, r13_15, 0x7be, rcx16, r8, r9, v7, v10, v12, v32, v33, v34, v35, v36, v37);
                }
                __asm__("movss xmm0, [rax+r14*4]");
                __asm__("cvtss2sd xmm0, xmm0");
                fun_82d(r13_15, 0x7d2, 0x7be, rcx16, r8, r9, v7, v10, v12, v38, v39, v40, v41, v42, v43);
                ++r14_31;
            } while (r14_31 != 0x870);
            ++r15_23;
        } while (r15_23 != 0x1000);
        fun_85d(r13_15, 0x84c, 0x853, rcx16, r8, r9, v7, v10, v12, v44, v45, v46, v47, v48, v49);
        *reinterpret_cast<int32_t*>(&rsi) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx = r13_15;
        fun_876(0x864, 22, 1, rcx, r8, r9, v7, v10, v12, v50, v51, v52, v53, v54, v55);
        r14_56 = v12;
        r15_57 = v10;
    }
    fun_759(rbx58, rsi, rdx, rcx, r8, r9);
    fun_762(v7, rsi, rdx, rcx, r8, r9);
    fun_76a(r14_56, rsi, rdx, rcx, r8, r9, v7);
    fun_772(r15_57, rsi, rdx, rcx, r8, r9, v7);
    goto v59;
}

void fun_759(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    int64_t r14_7;
    int64_t r15_8;
    int64_t v9;

    fun_762(__return_address(), rsi, rdx, rcx, r8, r9);
    fun_76a(r14_7, rsi, rdx, rcx, r8, r9, __return_address());
    fun_772(r15_8, rsi, rdx, rcx, r8, r9, __return_address());
    goto v9;
}

void fun_80b(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15) {
    int64_t r13_16;
    int64_t rbp17;
    int64_t r14_18;
    int64_t r15_19;
    int64_t r12_20;
    int64_t r13_21;
    int64_t r13_22;
    int64_t r13_23;
    int64_t rbx24;

    while (1) {
        __asm__("movss xmm0, [rax+r14*4]");
        __asm__("cvtss2sd xmm0, xmm0");
        fun_82d(r13_16, rbp17, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11, a12, a13, a14);
        ++r14_18;
        if (r14_18 == 0x870) {
            ++r15_19;
            if (r15_19 == 0x1000) 
                break;
            r12_20 = r15_19 * 0x870;
            *reinterpret_cast<int32_t*>(&r14_18) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_18) + 4) = reinterpret_cast<int32_t>(fputc);
        }
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r14_18 + r12_20) * 0xcccccccd) > 0xccccccc) 
            continue;
        fun_80b(10, r13_21, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11, a12, a13, a14);
    }
    fun_85d(r13_22, 0x84c, 0x853, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11, a12, a13, a14);
    fun_876(0x864, 22, 1, r13_23, r8, r9, __return_address(), a7, a8, a9, a10, a11, a12, a13, a14);
    fun_759(rbx24, 22, 1, r13_23, r8, r9);
    fun_762(__return_address(), 22, 1, r13_23, r8, r9);
    fun_76a(a8, 22, 1, r13_23, r8, r9, __return_address());
    fun_772(a7, 22, 1, r13_23, r8, r9, __return_address());
    goto a15;
}

void fun_85d(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15) {
    int64_t r13_16;
    int64_t rbx17;

    fun_876(0x864, 22, 1, r13_16, r8, r9, __return_address(), a7, a8, a9, a10, a11, a12, a13, a14);
    fun_759(rbx17, 22, 1, r13_16, r8, r9);
    fun_762(__return_address(), 22, 1, r13_16, r8, r9);
    fun_76a(a8, 22, 1, r13_16, r8, r9, __return_address());
    fun_772(a7, 22, 1, r13_16, r8, r9, __return_address());
    goto a15;
}

void fun_12e() {
    int64_t rax1;
    int32_t r12d2;
    uint64_t rcx3;
    uint32_t ebp4;
    int32_t r12d5;
    int32_t r12d6;
    int32_t ebp7;
    int32_t ebp8;
    int32_t r12d9;
    uint64_t rdx10;
    int64_t rsi11;
    int64_t rdi12;
    int32_t ebp13;
    int32_t ebp14;
    int64_t r8_15;
    int64_t r9_16;
    int64_t r15_17;
    uint32_t ebp18;
    int64_t r14_19;
    uint64_t r12_20;
    uint64_t r11_21;
    int64_t rbx22;
    uint64_t r11_23;
    uint64_t rdx24;
    int64_t rsi25;
    int32_t ebp26;
    int32_t ebp27;
    int64_t rdx28;
    int32_t ebp29;
    int32_t ebp30;
    uint64_t rsi31;
    int32_t r12d32;
    int32_t r12d33;
    int64_t v34;
    uint64_t rdx35;
    int64_t rsi36;
    int1_t less_or_equal37;
    int64_t rdx38;
    uint64_t rsi39;
    int32_t ebp40;
    int32_t ebp41;
    int1_t less_or_equal42;
    int32_t r12d43;
    int32_t r12d44;
    uint64_t rdx45;
    int64_t rsi46;
    int64_t rdi47;
    int32_t v48;
    int32_t r12d49;
    int32_t ebp50;
    int32_t ebp51;
    int64_t r8_52;
    int64_t r9_53;
    int64_t r15_54;
    uint32_t ebp55;
    int64_t r14_56;
    uint64_t r13_57;
    uint64_t r11_58;
    int64_t rbx59;
    uint64_t r11_60;

    __asm__("mulss xmm0, [rsp+0x50]");
    __asm__("movss [rsp+0x50], xmm0");
    __asm__("movaps xmm0, [rsp+0x20]");
    fun_144();
    __asm__("movss [rsp+0x20], xmm0");
    __asm__("movaps xmm0, [rsp+0x40]");
    fun_154();
    __asm__("movss xmm10, [rsp+0x60]");
    __asm__("movaps xmm9, [rsp+0x10]");
    __asm__("movss xmm8, [rsp+0x20]");
    __asm__("movss xmm7, [rsp+0x50]");
    __asm__("movss xmm6, [rsp+0xc]");
    __asm__("xorps xmm0, [rip+0x0]");
    *reinterpret_cast<int32_t*>(&rax1) = r12d2;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax1) + 4) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<uint32_t*>(&rcx3) = ebp4;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx3) + 4) = reinterpret_cast<int32_t>(fputc);
    if (reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(r12d5 < reinterpret_cast<int32_t>(fputc) == fputc)) | reinterpret_cast<uint1_t>(r12d6 == fputc)) {
        addr_3c5_4:
        if (reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(ebp7 < reinterpret_cast<int32_t>(fputc) == fputc)) | reinterpret_cast<uint1_t>(ebp8 == fputc)) {
            addr_4db_5:
            if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(r12d9 < reinterpret_cast<int32_t>(fputc) == fputc)) | reinterpret_cast<uint1_t>(r12d9 == fputc))) {
                *reinterpret_cast<uint32_t*>(&rdx10) = *reinterpret_cast<uint32_t*>(&rcx3) & 0xfffffff8;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx10) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi11 = reinterpret_cast<int64_t>(-rcx3);
                *reinterpret_cast<int32_t*>(&rdi12) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi12) + 4) = reinterpret_cast<int32_t>(fputc);
                while (1) {
                    if (reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(ebp13 < reinterpret_cast<int32_t>(fputc) == fputc)) | reinterpret_cast<uint1_t>(ebp14 == fputc)) {
                        addr_500_8:
                        ++rdi12;
                        if (rdi12 == rax1) 
                            break; else 
                            continue;
                    } else {
                        r8_15 = rdi12 * 0x21c0;
                        r9_16 = r8_15 + r15_17;
                        if (ebp18 < 8 || reinterpret_cast<uint64_t>(r9_16 - (r8_15 + r14_19)) < 32) {
                            *reinterpret_cast<int32_t*>(&r12_20) = reinterpret_cast<int32_t>(fputc);
                            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_20) + 4) = reinterpret_cast<int32_t>(fputc);
                            goto addr_593_11;
                        }
                        *reinterpret_cast<int32_t*>(&r11_21) = reinterpret_cast<int32_t>(fputc);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_21) + 4) = reinterpret_cast<int32_t>(fputc);
                        *reinterpret_cast<int32_t*>(&r12_20) = reinterpret_cast<int32_t>(fputc);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_20) + 4) = reinterpret_cast<int32_t>(fputc);
                        if (reinterpret_cast<uint64_t>(r9_16 - (r8_15 + rbx22)) < 32) {
                            addr_593_11:
                            r11_23 = r12_20;
                            if ((*reinterpret_cast<unsigned char*>(&rcx3) & 1) != fputc) {
                                __asm__("movss xmm0, [r10+r12*4]");
                                __asm__("addss xmm0, [r8+r12*4]");
                                __asm__("movss [r9+r12*4], xmm0");
                                r11_23 = r12_20 | 1;
                            }
                        } else {
                            do {
                                __asm__("movups xmm0, [r10+r11*4]");
                                __asm__("movups xmm1, [r10+r11*4+0x10]");
                                __asm__("movups xmm2, [r8+r11*4]");
                                __asm__("addps xmm2, xmm0");
                                __asm__("movups xmm0, [r8+r11*4+0x10]");
                                __asm__("addps xmm0, xmm1");
                                __asm__("movups [r9+r11*4], xmm2");
                                __asm__("movups [r9+r11*4+0x10], xmm0");
                                r11_21 = r11_21 + 8;
                            } while (r11_21 != rdx10);
                            r12_20 = rdx10;
                            if (rdx10 == rcx3) 
                                goto addr_500_8; else 
                                goto addr_58c_17;
                        }
                    }
                    if (~r12_20 != rsi11) {
                        do {
                            __asm__("movss xmm0, [r10+r11*4]");
                            __asm__("addss xmm0, [r8+r11*4]");
                            __asm__("movss [r9+r11*4], xmm0");
                            __asm__("movss xmm0, [r10+r11*4+0x4]");
                            __asm__("addss xmm0, [r8+r11*4+0x4]");
                            __asm__("movss [r9+r11*4+0x4], xmm0");
                            r11_23 = r11_23 + 2;
                        } while (r11_23 != rcx3);
                        goto addr_500_8;
                    }
                    addr_58c_17:
                    goto addr_593_11;
                }
            }
        } else {
            *reinterpret_cast<int32_t*>(&rdx24) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx24) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(r12d9 < reinterpret_cast<int32_t>(fputc) == fputc)) | reinterpret_cast<uint1_t>(r12d9 == fputc))) {
                    __asm__("xorps xmm2, xmm2");
                    *reinterpret_cast<int32_t*>(&rsi25) = reinterpret_cast<int32_t>(fputc);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi25) + 4) = reinterpret_cast<int32_t>(fputc);
                    __asm__("xorps xmm3, xmm3");
                    __asm__("xorps xmm1, xmm1");
                    do {
                        __asm__("movaps xmm4, xmm3");
                        __asm__("mulss xmm2, xmm10");
                        __asm__("movss xmm3, [r8+rdx*4]");
                        __asm__("mulss xmm3, xmm9");
                        __asm__("addss xmm3, xmm2");
                        __asm__("movaps xmm2, xmm8");
                        __asm__("mulss xmm2, xmm4");
                        __asm__("addss xmm2, xmm3");
                        __asm__("mulss xmm1, xmm0");
                        __asm__("addss xmm1, xmm2");
                        __asm__("movss [rdi+rdx*4], xmm1");
                        __asm__("movss xmm2, [r8+rdx*4]");
                        ++rsi25;
                        __asm__("movaps xmm3, xmm1");
                        __asm__("movaps xmm1, xmm4");
                    } while (rsi25 != rax1);
                }
                ++rdx24;
            } while (rdx24 != rcx3);
            if (reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(ebp26 < reinterpret_cast<int32_t>(fputc) == fputc)) | reinterpret_cast<uint1_t>(ebp27 == fputc)) 
                goto addr_4db_5; else 
                goto addr_45c_28;
        }
    } else {
        *reinterpret_cast<int32_t*>(&rdx28) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx28) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(ebp29 < reinterpret_cast<int32_t>(fputc) == fputc)) | reinterpret_cast<uint1_t>(ebp30 == fputc))) {
                __asm__("xorps xmm2, xmm2");
                *reinterpret_cast<int32_t*>(&rsi31) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi31) + 4) = reinterpret_cast<int32_t>(fputc);
                __asm__("xorps xmm3, xmm3");
                __asm__("xorps xmm1, xmm1");
                do {
                    __asm__("movaps xmm4, xmm3");
                    __asm__("mulss xmm2, xmm10");
                    __asm__("movss xmm3, [r8+rsi*4]");
                    __asm__("mulss xmm3, xmm9");
                    __asm__("addss xmm3, xmm2");
                    __asm__("movaps xmm2, xmm8");
                    __asm__("mulss xmm2, xmm4");
                    __asm__("addss xmm2, xmm3");
                    __asm__("mulss xmm1, xmm0");
                    __asm__("addss xmm1, xmm2");
                    __asm__("movss [rdi+rsi*4], xmm1");
                    __asm__("movss xmm2, [r8+rsi*4]");
                    ++rsi31;
                    __asm__("movaps xmm3, xmm1");
                    __asm__("movaps xmm1, xmm4");
                } while (rsi31 != rcx3);
            }
            ++rdx28;
        } while (rdx28 != rax1);
        if (reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(r12d32 < reinterpret_cast<int32_t>(fputc) == fputc)) | reinterpret_cast<uint1_t>(r12d33 == fputc)) 
            goto addr_3c5_4; else 
            goto addr_20d_36;
    }
    goto v34;
    addr_45c_28:
    *reinterpret_cast<int32_t*>(&rdx35) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx35) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        __asm__("xorps xmm4, xmm4");
        rsi36 = rax1;
        __asm__("xorps xmm3, xmm3");
        __asm__("xorps xmm5, xmm5");
        __asm__("xorps xmm1, xmm1");
        if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(r12d9 < reinterpret_cast<int32_t>(fputc) == fputc)) | reinterpret_cast<uint1_t>(r12d9 == fputc))) {
            do {
                __asm__("movaps xmm2, xmm5");
                __asm__("mulss xmm3, xmm7");
                __asm__("movaps xmm5, xmm6");
                __asm__("mulss xmm5, xmm4");
                __asm__("addss xmm5, xmm3");
                __asm__("movaps xmm3, xmm8");
                __asm__("mulss xmm3, xmm2");
                __asm__("addss xmm3, xmm5");
                __asm__("mulss xmm1, xmm0");
                __asm__("addss xmm1, xmm3");
                __asm__("movss [r9+rdx*4], xmm1");
                __asm__("movaps xmm3, xmm4");
                __asm__("movss xmm4, [r8+rdx*4]");
                __asm__("movaps xmm5, xmm1");
                __asm__("movaps xmm1, xmm2");
                less_or_equal37 = rsi36 <= 1;
                --rsi36;
            } while (!less_or_equal37);
        }
        ++rdx35;
    } while (rdx35 != rcx3);
    goto addr_4db_5;
    addr_20d_36:
    *reinterpret_cast<int32_t*>(&rdx38) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx38) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        __asm__("xorps xmm4, xmm4");
        rsi39 = rcx3;
        __asm__("xorps xmm3, xmm3");
        __asm__("xorps xmm5, xmm5");
        __asm__("xorps xmm1, xmm1");
        if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(ebp40 < reinterpret_cast<int32_t>(fputc) == fputc)) | reinterpret_cast<uint1_t>(ebp41 == fputc))) {
            do {
                __asm__("movaps xmm2, xmm5");
                __asm__("mulss xmm3, xmm7");
                __asm__("movaps xmm5, xmm6");
                __asm__("mulss xmm5, xmm4");
                __asm__("addss xmm5, xmm3");
                __asm__("movaps xmm3, xmm8");
                __asm__("mulss xmm3, xmm2");
                __asm__("addss xmm3, xmm5");
                __asm__("mulss xmm1, xmm0");
                __asm__("addss xmm1, xmm3");
                __asm__("movss [r10+r8*4], xmm1");
                __asm__("movaps xmm3, xmm4");
                __asm__("movss xmm4, [r9+r8*4]");
                less_or_equal42 = reinterpret_cast<int64_t>(rsi39) <= reinterpret_cast<int64_t>(1);
                --rsi39;
                __asm__("movaps xmm5, xmm1");
                __asm__("movaps xmm1, xmm2");
            } while (!less_or_equal42);
        }
        ++rdx38;
    } while (rdx38 != rax1);
    if (reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(r12d43 < reinterpret_cast<int32_t>(fputc) == fputc)) | reinterpret_cast<uint1_t>(r12d44 == fputc)) 
        goto addr_3c5_4;
    *reinterpret_cast<uint32_t*>(&rdx45) = *reinterpret_cast<uint32_t*>(&rcx3) & 0xfffffff8;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx45) + 4) = reinterpret_cast<int32_t>(fputc);
    rsi46 = reinterpret_cast<int64_t>(-rcx3);
    *reinterpret_cast<int32_t*>(&rdi47) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi47) + 4) = reinterpret_cast<int32_t>(fputc);
    v48 = r12d49;
    while (1) {
        if (reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(ebp50 < reinterpret_cast<int32_t>(fputc) == fputc)) | reinterpret_cast<uint1_t>(ebp51 == fputc)) {
            addr_2c0_51:
            ++rdi47;
            if (rdi47 == rax1) 
                goto addr_3c5_4; else 
                continue;
        } else {
            r8_52 = rdi47 * 0x21c0;
            r9_53 = r8_52 + r15_54;
            if (ebp55 < 8 || reinterpret_cast<uint64_t>(r9_53 - (r8_52 + r14_56)) < 32) {
                *reinterpret_cast<int32_t*>(&r13_57) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_57) + 4) = reinterpret_cast<int32_t>(fputc);
                goto addr_363_54;
            }
            *reinterpret_cast<int32_t*>(&r11_58) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_58) + 4) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(&r13_57) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_57) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi46 = rsi46;
            r12d9 = v48;
            if (reinterpret_cast<uint64_t>(r9_53 - (r8_52 + rbx59)) < 32) {
                addr_363_54:
                r11_60 = r13_57;
                if ((*reinterpret_cast<unsigned char*>(&rcx3) & 1) != fputc) {
                    __asm__("movss xmm1, [r10+r13*4]");
                    __asm__("addss xmm1, [r8+r13*4]");
                    __asm__("movss [r9+r13*4], xmm1");
                    r11_60 = r13_57 | 1;
                }
            } else {
                do {
                    __asm__("movups xmm1, [r10+r11*4]");
                    __asm__("movups xmm2, [r10+r11*4+0x10]");
                    __asm__("movups xmm3, [r8+r11*4]");
                    __asm__("addps xmm3, xmm1");
                    __asm__("movups xmm1, [r8+r11*4+0x10]");
                    __asm__("addps xmm1, xmm2");
                    __asm__("movups [r9+r11*4], xmm3");
                    __asm__("movups [r9+r11*4+0x10], xmm1");
                    r11_58 = r11_58 + 8;
                } while (r11_58 != rdx45);
                r13_57 = rdx45;
                if (rdx45 == rcx3) 
                    goto addr_2c0_51; else 
                    goto addr_35c_60;
            }
        }
        if (~r13_57 != rsi46) {
            do {
                __asm__("movss xmm1, [r10+r11*4]");
                __asm__("addss xmm1, [r8+r11*4]");
                __asm__("movss [r9+r11*4], xmm1");
                __asm__("movss xmm1, [r10+r11*4+0x4]");
                __asm__("addss xmm1, [r8+r11*4+0x4]");
                __asm__("movss [r9+r11*4+0x4], xmm1");
                r11_60 = r11_60 + 2;
            } while (r11_60 != rcx3);
            goto addr_2c0_51;
        }
        addr_35c_60:
        goto addr_363_54;
    }
}

void fun_7b0(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15) {
    int64_t v16;
    int64_t r15_17;
    int64_t r13_18;
    int64_t r12_19;
    int64_t r14_20;
    int64_t r13_21;
    int64_t r13_22;
    int64_t r13_23;
    int64_t r13_24;
    int64_t rbx25;

    v16 = reinterpret_cast<int64_t>(__return_address());
    *reinterpret_cast<int32_t*>(&r15_17) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_17) + 4) = reinterpret_cast<int32_t>(fputc);
    fun_7cb(r13_18, 0x7b7, 0x7be, rcx, r8, r9, v16, a7, a8, a9, a10, a11, a12, a13, a14);
    do {
        r12_19 = r15_17 * 0x870;
        *reinterpret_cast<int32_t*>(&r14_20) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_20) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r14_20 + r12_19) * 0xcccccccd) <= 0xccccccc) {
                fun_80b(10, r13_21, 0x7be, rcx, r8, r9, v16, a7, a8, a9, a10, a11, a12, a13, a14);
            }
            __asm__("movss xmm0, [rax+r14*4]");
            __asm__("cvtss2sd xmm0, xmm0");
            fun_82d(r13_22, 0x7d2, 0x7be, rcx, r8, r9, v16, a7, a8, a9, a10, a11, a12, a13, a14);
            ++r14_20;
        } while (r14_20 != 0x870);
        ++r15_17;
    } while (r15_17 != 0x1000);
    fun_85d(r13_23, 0x84c, 0x853, rcx, r8, r9, v16, a7, a8, a9, a10, a11, a12, a13, a14);
    fun_876(0x864, 22, 1, r13_24, r8, r9, v16, a7, a8, a9, a10, a11, a12, a13, a14);
    fun_759(rbx25, 22, 1, r13_24, r8, r9);
    fun_762(v16, 22, 1, r13_24, r8, r9);
    fun_76a(a8, 22, 1, r13_24, r8, r9, v16);
    fun_772(a7, 22, 1, r13_24, r8, r9, v16);
    goto a15;
}

void fun_762(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    int64_t r14_7;
    int64_t r15_8;
    int64_t v9;

    fun_76a(r14_7, rsi, rdx, rcx, r8, r9, __return_address());
    fun_772(r15_8, rsi, rdx, rcx, r8, r9, __return_address());
    goto v9;
}

void fun_82d(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15) {
    int64_t r14_16;
    int64_t r15_17;
    int64_t r12_18;
    int64_t r13_19;
    int64_t r13_20;
    int64_t rbp21;
    int64_t r13_22;
    int64_t r13_23;
    int64_t rbx24;

    while (1) {
        ++r14_16;
        if (r14_16 == 0x870) {
            ++r15_17;
            if (r15_17 == 0x1000) 
                break;
            r12_18 = r15_17 * 0x870;
            *reinterpret_cast<int32_t*>(&r14_16) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_16) + 4) = reinterpret_cast<int32_t>(fputc);
        }
        __asm__("ror eax, 0x2");
        if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r14_16 + r12_18) * 0xcccccccd) <= 0xccccccc) {
            fun_80b(10, r13_19, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11, a12, a13, a14);
        }
        __asm__("movss xmm0, [rax+r14*4]");
        __asm__("cvtss2sd xmm0, xmm0");
        fun_82d(r13_20, rbp21, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11, a12, a13, a14);
    }
    fun_85d(r13_22, 0x84c, 0x853, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11, a12, a13, a14);
    fun_876(0x864, 22, 1, r13_23, r8, r9, __return_address(), a7, a8, a9, a10, a11, a12, a13, a14);
    fun_759(rbx24, 22, 1, r13_23, r8, r9);
    fun_762(__return_address(), 22, 1, r13_23, r8, r9);
    fun_76a(a8, 22, 1, r13_23, r8, r9, __return_address());
    fun_772(a7, 22, 1, r13_23, r8, r9, __return_address());
    goto a15;
}

void fun_876(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15) {
    int64_t rbx16;

    fun_759(rbx16, rsi, rdx, rcx, r8, r9);
    fun_762(__return_address(), rsi, rdx, rcx, r8, r9);
    fun_76a(a8, rsi, rdx, rcx, r8, r9, __return_address());
    fun_772(a7, rsi, rdx, rcx, r8, r9, __return_address());
    goto a15;
}

void fun_144() {
    int64_t rax1;
    int32_t r12d2;
    uint64_t rcx3;
    uint32_t ebp4;
    int32_t r12d5;
    int32_t r12d6;
    int32_t ebp7;
    int32_t ebp8;
    int32_t r12d9;
    uint64_t rdx10;
    int64_t rsi11;
    int64_t rdi12;
    int32_t ebp13;
    int32_t ebp14;
    int64_t r8_15;
    int64_t r9_16;
    int64_t r15_17;
    uint32_t ebp18;
    int64_t r14_19;
    uint64_t r12_20;
    uint64_t r11_21;
    int64_t rbx22;
    uint64_t r11_23;
    uint64_t rdx24;
    int64_t rsi25;
    int32_t ebp26;
    int32_t ebp27;
    int64_t rdx28;
    int32_t ebp29;
    int32_t ebp30;
    uint64_t rsi31;
    int32_t r12d32;
    int32_t r12d33;
    int64_t v34;
    uint64_t rdx35;
    int64_t rsi36;
    int1_t less_or_equal37;
    int64_t rdx38;
    uint64_t rsi39;
    int32_t ebp40;
    int32_t ebp41;
    int1_t less_or_equal42;
    int32_t r12d43;
    int32_t r12d44;
    uint64_t rdx45;
    int64_t rsi46;
    int64_t rdi47;
    int32_t v48;
    int32_t r12d49;
    int32_t ebp50;
    int32_t ebp51;
    int64_t r8_52;
    int64_t r9_53;
    int64_t r15_54;
    uint32_t ebp55;
    int64_t r14_56;
    uint64_t r13_57;
    uint64_t r11_58;
    int64_t rbx59;
    uint64_t r11_60;

    __asm__("movss [rsp+0x20], xmm0");
    __asm__("movaps xmm0, [rsp+0x40]");
    fun_154();
    __asm__("movss xmm10, [rsp+0x60]");
    __asm__("movaps xmm9, [rsp+0x10]");
    __asm__("movss xmm8, [rsp+0x20]");
    __asm__("movss xmm7, [rsp+0x50]");
    __asm__("movss xmm6, [rsp+0xc]");
    __asm__("xorps xmm0, [rip+0x0]");
    *reinterpret_cast<int32_t*>(&rax1) = r12d2;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax1) + 4) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<uint32_t*>(&rcx3) = ebp4;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx3) + 4) = reinterpret_cast<int32_t>(fputc);
    if (reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(r12d5 < reinterpret_cast<int32_t>(fputc) == fputc)) | reinterpret_cast<uint1_t>(r12d6 == fputc)) {
        addr_3c5_3:
        if (reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(ebp7 < reinterpret_cast<int32_t>(fputc) == fputc)) | reinterpret_cast<uint1_t>(ebp8 == fputc)) {
            addr_4db_4:
            if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(r12d9 < reinterpret_cast<int32_t>(fputc) == fputc)) | reinterpret_cast<uint1_t>(r12d9 == fputc))) {
                *reinterpret_cast<uint32_t*>(&rdx10) = *reinterpret_cast<uint32_t*>(&rcx3) & 0xfffffff8;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx10) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi11 = reinterpret_cast<int64_t>(-rcx3);
                *reinterpret_cast<int32_t*>(&rdi12) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi12) + 4) = reinterpret_cast<int32_t>(fputc);
                while (1) {
                    if (reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(ebp13 < reinterpret_cast<int32_t>(fputc) == fputc)) | reinterpret_cast<uint1_t>(ebp14 == fputc)) {
                        addr_500_7:
                        ++rdi12;
                        if (rdi12 == rax1) 
                            break; else 
                            continue;
                    } else {
                        r8_15 = rdi12 * 0x21c0;
                        r9_16 = r8_15 + r15_17;
                        if (ebp18 < 8 || reinterpret_cast<uint64_t>(r9_16 - (r8_15 + r14_19)) < 32) {
                            *reinterpret_cast<int32_t*>(&r12_20) = reinterpret_cast<int32_t>(fputc);
                            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_20) + 4) = reinterpret_cast<int32_t>(fputc);
                            goto addr_593_10;
                        }
                        *reinterpret_cast<int32_t*>(&r11_21) = reinterpret_cast<int32_t>(fputc);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_21) + 4) = reinterpret_cast<int32_t>(fputc);
                        *reinterpret_cast<int32_t*>(&r12_20) = reinterpret_cast<int32_t>(fputc);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_20) + 4) = reinterpret_cast<int32_t>(fputc);
                        if (reinterpret_cast<uint64_t>(r9_16 - (r8_15 + rbx22)) < 32) {
                            addr_593_10:
                            r11_23 = r12_20;
                            if ((*reinterpret_cast<unsigned char*>(&rcx3) & 1) != fputc) {
                                __asm__("movss xmm0, [r10+r12*4]");
                                __asm__("addss xmm0, [r8+r12*4]");
                                __asm__("movss [r9+r12*4], xmm0");
                                r11_23 = r12_20 | 1;
                            }
                        } else {
                            do {
                                __asm__("movups xmm0, [r10+r11*4]");
                                __asm__("movups xmm1, [r10+r11*4+0x10]");
                                __asm__("movups xmm2, [r8+r11*4]");
                                __asm__("addps xmm2, xmm0");
                                __asm__("movups xmm0, [r8+r11*4+0x10]");
                                __asm__("addps xmm0, xmm1");
                                __asm__("movups [r9+r11*4], xmm2");
                                __asm__("movups [r9+r11*4+0x10], xmm0");
                                r11_21 = r11_21 + 8;
                            } while (r11_21 != rdx10);
                            r12_20 = rdx10;
                            if (rdx10 == rcx3) 
                                goto addr_500_7; else 
                                goto addr_58c_16;
                        }
                    }
                    if (~r12_20 != rsi11) {
                        do {
                            __asm__("movss xmm0, [r10+r11*4]");
                            __asm__("addss xmm0, [r8+r11*4]");
                            __asm__("movss [r9+r11*4], xmm0");
                            __asm__("movss xmm0, [r10+r11*4+0x4]");
                            __asm__("addss xmm0, [r8+r11*4+0x4]");
                            __asm__("movss [r9+r11*4+0x4], xmm0");
                            r11_23 = r11_23 + 2;
                        } while (r11_23 != rcx3);
                        goto addr_500_7;
                    }
                    addr_58c_16:
                    goto addr_593_10;
                }
            }
        } else {
            *reinterpret_cast<int32_t*>(&rdx24) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx24) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(r12d9 < reinterpret_cast<int32_t>(fputc) == fputc)) | reinterpret_cast<uint1_t>(r12d9 == fputc))) {
                    __asm__("xorps xmm2, xmm2");
                    *reinterpret_cast<int32_t*>(&rsi25) = reinterpret_cast<int32_t>(fputc);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi25) + 4) = reinterpret_cast<int32_t>(fputc);
                    __asm__("xorps xmm3, xmm3");
                    __asm__("xorps xmm1, xmm1");
                    do {
                        __asm__("movaps xmm4, xmm3");
                        __asm__("mulss xmm2, xmm10");
                        __asm__("movss xmm3, [r8+rdx*4]");
                        __asm__("mulss xmm3, xmm9");
                        __asm__("addss xmm3, xmm2");
                        __asm__("movaps xmm2, xmm8");
                        __asm__("mulss xmm2, xmm4");
                        __asm__("addss xmm2, xmm3");
                        __asm__("mulss xmm1, xmm0");
                        __asm__("addss xmm1, xmm2");
                        __asm__("movss [rdi+rdx*4], xmm1");
                        __asm__("movss xmm2, [r8+rdx*4]");
                        ++rsi25;
                        __asm__("movaps xmm3, xmm1");
                        __asm__("movaps xmm1, xmm4");
                    } while (rsi25 != rax1);
                }
                ++rdx24;
            } while (rdx24 != rcx3);
            if (reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(ebp26 < reinterpret_cast<int32_t>(fputc) == fputc)) | reinterpret_cast<uint1_t>(ebp27 == fputc)) 
                goto addr_4db_4; else 
                goto addr_45c_27;
        }
    } else {
        *reinterpret_cast<int32_t*>(&rdx28) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx28) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(ebp29 < reinterpret_cast<int32_t>(fputc) == fputc)) | reinterpret_cast<uint1_t>(ebp30 == fputc))) {
                __asm__("xorps xmm2, xmm2");
                *reinterpret_cast<int32_t*>(&rsi31) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi31) + 4) = reinterpret_cast<int32_t>(fputc);
                __asm__("xorps xmm3, xmm3");
                __asm__("xorps xmm1, xmm1");
                do {
                    __asm__("movaps xmm4, xmm3");
                    __asm__("mulss xmm2, xmm10");
                    __asm__("movss xmm3, [r8+rsi*4]");
                    __asm__("mulss xmm3, xmm9");
                    __asm__("addss xmm3, xmm2");
                    __asm__("movaps xmm2, xmm8");
                    __asm__("mulss xmm2, xmm4");
                    __asm__("addss xmm2, xmm3");
                    __asm__("mulss xmm1, xmm0");
                    __asm__("addss xmm1, xmm2");
                    __asm__("movss [rdi+rsi*4], xmm1");
                    __asm__("movss xmm2, [r8+rsi*4]");
                    ++rsi31;
                    __asm__("movaps xmm3, xmm1");
                    __asm__("movaps xmm1, xmm4");
                } while (rsi31 != rcx3);
            }
            ++rdx28;
        } while (rdx28 != rax1);
        if (reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(r12d32 < reinterpret_cast<int32_t>(fputc) == fputc)) | reinterpret_cast<uint1_t>(r12d33 == fputc)) 
            goto addr_3c5_3; else 
            goto addr_20d_35;
    }
    goto v34;
    addr_45c_27:
    *reinterpret_cast<int32_t*>(&rdx35) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx35) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        __asm__("xorps xmm4, xmm4");
        rsi36 = rax1;
        __asm__("xorps xmm3, xmm3");
        __asm__("xorps xmm5, xmm5");
        __asm__("xorps xmm1, xmm1");
        if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(r12d9 < reinterpret_cast<int32_t>(fputc) == fputc)) | reinterpret_cast<uint1_t>(r12d9 == fputc))) {
            do {
                __asm__("movaps xmm2, xmm5");
                __asm__("mulss xmm3, xmm7");
                __asm__("movaps xmm5, xmm6");
                __asm__("mulss xmm5, xmm4");
                __asm__("addss xmm5, xmm3");
                __asm__("movaps xmm3, xmm8");
                __asm__("mulss xmm3, xmm2");
                __asm__("addss xmm3, xmm5");
                __asm__("mulss xmm1, xmm0");
                __asm__("addss xmm1, xmm3");
                __asm__("movss [r9+rdx*4], xmm1");
                __asm__("movaps xmm3, xmm4");
                __asm__("movss xmm4, [r8+rdx*4]");
                __asm__("movaps xmm5, xmm1");
                __asm__("movaps xmm1, xmm2");
                less_or_equal37 = rsi36 <= 1;
                --rsi36;
            } while (!less_or_equal37);
        }
        ++rdx35;
    } while (rdx35 != rcx3);
    goto addr_4db_4;
    addr_20d_35:
    *reinterpret_cast<int32_t*>(&rdx38) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx38) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        __asm__("xorps xmm4, xmm4");
        rsi39 = rcx3;
        __asm__("xorps xmm3, xmm3");
        __asm__("xorps xmm5, xmm5");
        __asm__("xorps xmm1, xmm1");
        if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(ebp40 < reinterpret_cast<int32_t>(fputc) == fputc)) | reinterpret_cast<uint1_t>(ebp41 == fputc))) {
            do {
                __asm__("movaps xmm2, xmm5");
                __asm__("mulss xmm3, xmm7");
                __asm__("movaps xmm5, xmm6");
                __asm__("mulss xmm5, xmm4");
                __asm__("addss xmm5, xmm3");
                __asm__("movaps xmm3, xmm8");
                __asm__("mulss xmm3, xmm2");
                __asm__("addss xmm3, xmm5");
                __asm__("mulss xmm1, xmm0");
                __asm__("addss xmm1, xmm3");
                __asm__("movss [r10+r8*4], xmm1");
                __asm__("movaps xmm3, xmm4");
                __asm__("movss xmm4, [r9+r8*4]");
                less_or_equal42 = reinterpret_cast<int64_t>(rsi39) <= reinterpret_cast<int64_t>(1);
                --rsi39;
                __asm__("movaps xmm5, xmm1");
                __asm__("movaps xmm1, xmm2");
            } while (!less_or_equal42);
        }
        ++rdx38;
    } while (rdx38 != rax1);
    if (reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(r12d43 < reinterpret_cast<int32_t>(fputc) == fputc)) | reinterpret_cast<uint1_t>(r12d44 == fputc)) 
        goto addr_3c5_3;
    *reinterpret_cast<uint32_t*>(&rdx45) = *reinterpret_cast<uint32_t*>(&rcx3) & 0xfffffff8;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx45) + 4) = reinterpret_cast<int32_t>(fputc);
    rsi46 = reinterpret_cast<int64_t>(-rcx3);
    *reinterpret_cast<int32_t*>(&rdi47) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi47) + 4) = reinterpret_cast<int32_t>(fputc);
    v48 = r12d49;
    while (1) {
        if (reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(ebp50 < reinterpret_cast<int32_t>(fputc) == fputc)) | reinterpret_cast<uint1_t>(ebp51 == fputc)) {
            addr_2c0_50:
            ++rdi47;
            if (rdi47 == rax1) 
                goto addr_3c5_3; else 
                continue;
        } else {
            r8_52 = rdi47 * 0x21c0;
            r9_53 = r8_52 + r15_54;
            if (ebp55 < 8 || reinterpret_cast<uint64_t>(r9_53 - (r8_52 + r14_56)) < 32) {
                *reinterpret_cast<int32_t*>(&r13_57) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_57) + 4) = reinterpret_cast<int32_t>(fputc);
                goto addr_363_53;
            }
            *reinterpret_cast<int32_t*>(&r11_58) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_58) + 4) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(&r13_57) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_57) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi46 = rsi46;
            r12d9 = v48;
            if (reinterpret_cast<uint64_t>(r9_53 - (r8_52 + rbx59)) < 32) {
                addr_363_53:
                r11_60 = r13_57;
                if ((*reinterpret_cast<unsigned char*>(&rcx3) & 1) != fputc) {
                    __asm__("movss xmm1, [r10+r13*4]");
                    __asm__("addss xmm1, [r8+r13*4]");
                    __asm__("movss [r9+r13*4], xmm1");
                    r11_60 = r13_57 | 1;
                }
            } else {
                do {
                    __asm__("movups xmm1, [r10+r11*4]");
                    __asm__("movups xmm2, [r10+r11*4+0x10]");
                    __asm__("movups xmm3, [r8+r11*4]");
                    __asm__("addps xmm3, xmm1");
                    __asm__("movups xmm1, [r8+r11*4+0x10]");
                    __asm__("addps xmm1, xmm2");
                    __asm__("movups [r9+r11*4], xmm3");
                    __asm__("movups [r9+r11*4+0x10], xmm1");
                    r11_58 = r11_58 + 8;
                } while (r11_58 != rdx45);
                r13_57 = rdx45;
                if (rdx45 == rcx3) 
                    goto addr_2c0_50; else 
                    goto addr_35c_59;
            }
        }
        if (~r13_57 != rsi46) {
            do {
                __asm__("movss xmm1, [r10+r11*4]");
                __asm__("addss xmm1, [r8+r11*4]");
                __asm__("movss [r9+r11*4], xmm1");
                __asm__("movss xmm1, [r10+r11*4+0x4]");
                __asm__("addss xmm1, [r8+r11*4+0x4]");
                __asm__("movss [r9+r11*4+0x4], xmm1");
                r11_60 = r11_60 + 2;
            } while (r11_60 != rcx3);
            goto addr_2c0_50;
        }
        addr_35c_59:
        goto addr_363_53;
    }
}

int64_t fun_644(int64_t rdi, int64_t rsi);

int64_t fun_657(int64_t rdi, int64_t rsi);

int64_t fun_669(int64_t rdi, int64_t rsi);

void fun_632(int64_t rdi, int64_t rsi) {
    int64_t rbx3;
    int64_t rax4;
    int64_t rax5;
    int64_t v6;
    int64_t rax7;
    int64_t r14_8;
    int64_t rax9;
    int64_t r15_10;
    int64_t rax11;
    int64_t rcx12;
    int64_t rsi13;
    int64_t rdx14;
    int64_t rcx15;
    int64_t r8_16;
    int64_t r9_17;
    int32_t ebp18;
    signed char** r13_19;
    int64_t v20;
    int64_t v21;
    int64_t* rax22;
    int64_t r13_23;
    int64_t rcx24;
    int64_t v25;
    int64_t v26;
    int64_t v27;
    int64_t v28;
    int64_t v29;
    int64_t v30;
    int64_t r15_31;
    int64_t v32;
    int64_t v33;
    int64_t v34;
    int64_t v35;
    int64_t v36;
    int64_t v37;
    int64_t r12_38;
    int64_t r14_39;
    int64_t v40;
    int64_t v41;
    int64_t v42;
    int64_t v43;
    int64_t v44;
    int64_t v45;
    int64_t v46;
    int64_t v47;
    int64_t v48;
    int64_t v49;
    int64_t v50;
    int64_t v51;
    int64_t v52;
    int64_t v53;
    int64_t v54;
    int64_t v55;
    int64_t v56;
    int64_t v57;
    int64_t v58;
    int64_t v59;
    int64_t v60;
    int64_t v61;
    int64_t v62;
    int64_t v63;
    int64_t v64;

    rbx3 = rax4;
    rax5 = fun_644(0x870000, 4);
    v6 = rax5;
    rax7 = fun_657(0x870000, 4);
    r14_8 = rax7;
    rax9 = fun_669(0x870000, 4);
    r15_10 = rax9;
    *reinterpret_cast<int32_t*>(&rax11) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax11) + 4) = reinterpret_cast<int32_t>(fputc);
    __asm__("movdqa xmm0, [rip+0x0]");
    __asm__("movdqa xmm1, [rip+0x0]");
    __asm__("movdqa xmm2, [rip+0x0]");
    __asm__("movaps xmm3, [rip+0x0]");
    __asm__("movaps xmm4, [rip+0x0]");
    __asm__("movdqa xmm5, [rip+0x0]");
    do {
        __asm__("movd xmm6, rcx");
        __asm__("pshufd xmm6, xmm6, 0x44");
        *reinterpret_cast<int32_t*>(&rcx12) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx12) + 4) = reinterpret_cast<int32_t>(fputc);
        __asm__("movdqa xmm7, xmm1");
        __asm__("movdqa xmm8, xmm0");
        do {
            __asm__("movdqa xmm9, xmm8");
            __asm__("pmuludq xmm9, xmm2");
            __asm__("movdqa xmm10, xmm7");
            __asm__("pmuludq xmm10, xmm2");
            __asm__("paddq xmm10, xmm6");
            __asm__("paddq xmm9, xmm6");
            __asm__("shufps xmm10, xmm9, 0x88");
            __asm__("andps xmm10, xmm3");
            __asm__("cvtdq2ps xmm9, xmm10");
            __asm__("divps xmm9, xmm4");
            __asm__("movups [rdx+rcx*4], xmm9");
            rcx12 = rcx12 + 4;
            __asm__("paddq xmm7, xmm5");
            __asm__("paddq xmm8, xmm5");
        } while (rcx12 != 0x870);
        ++rax11;
    } while (rax11 != 0x1000);
    __asm__("movss xmm0, [rip+0x0]");
    *reinterpret_cast<int32_t*>(&rsi13) = 0x870;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi13) + 4) = reinterpret_cast<int32_t>(fputc);
    rdx14 = rbx3;
    rcx15 = v6;
    r8_16 = r14_8;
    r9_17 = r15_10;
    fun_743(0x1000, 0x870, rdx14, rcx15, r8_16, r9_17);
    if (ebp18 >= 43 && **r13_19 == fputc) {
        v20 = r15_10;
        v21 = r14_8;
        rax22 = g794;
        r13_23 = *rax22;
        rcx24 = r13_23;
        fun_7b0(0x79e, 22, 1, rcx24, r8_16, r9_17, v6, v20, v21, v25, v26, v27, v28, v29, v30);
        *reinterpret_cast<int32_t*>(&r15_31) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_31) + 4) = reinterpret_cast<int32_t>(fputc);
        fun_7cb(r13_23, 0x7b7, 0x7be, rcx24, r8_16, r9_17, v6, v20, v21, v32, v33, v34, v35, v36, v37);
        do {
            r12_38 = r15_31 * 0x870;
            *reinterpret_cast<int32_t*>(&r14_39) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_39) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("ror eax, 0x2");
                if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r14_39 + r12_38) * 0xcccccccd) <= 0xccccccc) {
                    fun_80b(10, r13_23, 0x7be, rcx24, r8_16, r9_17, v6, v20, v21, v40, v41, v42, v43, v44, v45);
                }
                __asm__("movss xmm0, [rax+r14*4]");
                __asm__("cvtss2sd xmm0, xmm0");
                fun_82d(r13_23, 0x7d2, 0x7be, rcx24, r8_16, r9_17, v6, v20, v21, v46, v47, v48, v49, v50, v51);
                ++r14_39;
            } while (r14_39 != 0x870);
            ++r15_31;
        } while (r15_31 != 0x1000);
        fun_85d(r13_23, 0x84c, 0x853, rcx24, r8_16, r9_17, v6, v20, v21, v52, v53, v54, v55, v56, v57);
        *reinterpret_cast<int32_t*>(&rsi13) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi13) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx14) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx14) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx15 = r13_23;
        fun_876(0x864, 22, 1, rcx15, r8_16, r9_17, v6, v20, v21, v58, v59, v60, v61, v62, v63);
        r14_8 = v21;
        r15_10 = v20;
    }
    fun_759(rbx3, rsi13, rdx14, rcx15, r8_16, r9_17);
    fun_762(v6, rsi13, rdx14, rcx15, r8_16, r9_17);
    fun_76a(r14_8, rsi13, rdx14, rcx15, r8_16, r9_17, v6);
    fun_772(r15_10, rsi13, rdx14, rcx15, r8_16, r9_17, v6);
    goto v64;
}

void fun_7cb(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15) {
    int64_t v16;
    int64_t r12_17;
    int64_t r15_18;
    int64_t r14_19;
    int64_t r13_20;
    int64_t r13_21;
    int64_t r13_22;
    int64_t r13_23;
    int64_t rbx24;

    v16 = reinterpret_cast<int64_t>(__return_address());
    do {
        r12_17 = r15_18 * 0x870;
        *reinterpret_cast<int32_t*>(&r14_19) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_19) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r14_19 + r12_17) * 0xcccccccd) <= 0xccccccc) {
                fun_80b(10, r13_20, rdx, rcx, r8, r9, v16, a7, a8, a9, a10, a11, a12, a13, a14);
            }
            __asm__("movss xmm0, [rax+r14*4]");
            __asm__("cvtss2sd xmm0, xmm0");
            fun_82d(r13_21, 0x7d2, rdx, rcx, r8, r9, v16, a7, a8, a9, a10, a11, a12, a13, a14);
            ++r14_19;
        } while (r14_19 != 0x870);
        ++r15_18;
    } while (r15_18 != 0x1000);
    fun_85d(r13_22, 0x84c, 0x853, rcx, r8, r9, v16, a7, a8, a9, a10, a11, a12, a13, a14);
    fun_876(0x864, 22, 1, r13_23, r8, r9, v16, a7, a8, a9, a10, a11, a12, a13, a14);
    fun_759(rbx24, 22, 1, r13_23, r8, r9);
    fun_762(v16, 22, 1, r13_23, r8, r9);
    fun_76a(a8, 22, 1, r13_23, r8, r9, v16);
    fun_772(a7, 22, 1, r13_23, r8, r9, v16);
    goto a15;
}

void fun_76a(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7) {
    int64_t r15_8;
    int64_t v9;

    fun_772(r15_8, rsi, rdx, rcx, r8, r9, __return_address());
    goto v9;
}

void fun_154() {
    int64_t rax1;
    int32_t r12d2;
    uint64_t rcx3;
    uint32_t ebp4;
    int32_t r12d5;
    int32_t r12d6;
    int32_t ebp7;
    int32_t ebp8;
    int32_t r12d9;
    uint64_t rdx10;
    int64_t rsi11;
    int64_t rdi12;
    int32_t ebp13;
    int32_t ebp14;
    int64_t r8_15;
    int64_t r9_16;
    int64_t r15_17;
    uint32_t ebp18;
    int64_t r14_19;
    uint64_t r12_20;
    uint64_t r11_21;
    int64_t rbx22;
    uint64_t r11_23;
    uint64_t rdx24;
    int64_t rsi25;
    int32_t ebp26;
    int32_t ebp27;
    int64_t rdx28;
    int32_t ebp29;
    int32_t ebp30;
    uint64_t rsi31;
    int32_t r12d32;
    int32_t r12d33;
    int64_t v34;
    uint64_t rdx35;
    int64_t rsi36;
    int1_t less_or_equal37;
    int64_t rdx38;
    uint64_t rsi39;
    int32_t ebp40;
    int32_t ebp41;
    int1_t less_or_equal42;
    int32_t r12d43;
    int32_t r12d44;
    uint64_t rdx45;
    int64_t rsi46;
    int64_t rdi47;
    int32_t v48;
    int32_t r12d49;
    int32_t ebp50;
    int32_t ebp51;
    int64_t r8_52;
    int64_t r9_53;
    int64_t r15_54;
    uint32_t ebp55;
    int64_t r14_56;
    uint64_t r13_57;
    uint64_t r11_58;
    int64_t rbx59;
    uint64_t r11_60;

    __asm__("movss xmm10, [rsp+0x60]");
    __asm__("movaps xmm9, [rsp+0x10]");
    __asm__("movss xmm8, [rsp+0x20]");
    __asm__("movss xmm7, [rsp+0x50]");
    __asm__("movss xmm6, [rsp+0xc]");
    __asm__("xorps xmm0, [rip+0x0]");
    *reinterpret_cast<int32_t*>(&rax1) = r12d2;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax1) + 4) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<uint32_t*>(&rcx3) = ebp4;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx3) + 4) = reinterpret_cast<int32_t>(fputc);
    if (reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(r12d5 < reinterpret_cast<int32_t>(fputc) == fputc)) | reinterpret_cast<uint1_t>(r12d6 == fputc)) {
        addr_3c5_2:
        if (reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(ebp7 < reinterpret_cast<int32_t>(fputc) == fputc)) | reinterpret_cast<uint1_t>(ebp8 == fputc)) {
            addr_4db_3:
            if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(r12d9 < reinterpret_cast<int32_t>(fputc) == fputc)) | reinterpret_cast<uint1_t>(r12d9 == fputc))) {
                *reinterpret_cast<uint32_t*>(&rdx10) = *reinterpret_cast<uint32_t*>(&rcx3) & 0xfffffff8;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx10) + 4) = reinterpret_cast<int32_t>(fputc);
                rsi11 = reinterpret_cast<int64_t>(-rcx3);
                *reinterpret_cast<int32_t*>(&rdi12) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi12) + 4) = reinterpret_cast<int32_t>(fputc);
                while (1) {
                    if (reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(ebp13 < reinterpret_cast<int32_t>(fputc) == fputc)) | reinterpret_cast<uint1_t>(ebp14 == fputc)) {
                        addr_500_6:
                        ++rdi12;
                        if (rdi12 == rax1) 
                            break; else 
                            continue;
                    } else {
                        r8_15 = rdi12 * 0x21c0;
                        r9_16 = r8_15 + r15_17;
                        if (ebp18 < 8 || reinterpret_cast<uint64_t>(r9_16 - (r8_15 + r14_19)) < 32) {
                            *reinterpret_cast<int32_t*>(&r12_20) = reinterpret_cast<int32_t>(fputc);
                            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_20) + 4) = reinterpret_cast<int32_t>(fputc);
                            goto addr_593_9;
                        }
                        *reinterpret_cast<int32_t*>(&r11_21) = reinterpret_cast<int32_t>(fputc);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_21) + 4) = reinterpret_cast<int32_t>(fputc);
                        *reinterpret_cast<int32_t*>(&r12_20) = reinterpret_cast<int32_t>(fputc);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_20) + 4) = reinterpret_cast<int32_t>(fputc);
                        if (reinterpret_cast<uint64_t>(r9_16 - (r8_15 + rbx22)) < 32) {
                            addr_593_9:
                            r11_23 = r12_20;
                            if ((*reinterpret_cast<unsigned char*>(&rcx3) & 1) != fputc) {
                                __asm__("movss xmm0, [r10+r12*4]");
                                __asm__("addss xmm0, [r8+r12*4]");
                                __asm__("movss [r9+r12*4], xmm0");
                                r11_23 = r12_20 | 1;
                            }
                        } else {
                            do {
                                __asm__("movups xmm0, [r10+r11*4]");
                                __asm__("movups xmm1, [r10+r11*4+0x10]");
                                __asm__("movups xmm2, [r8+r11*4]");
                                __asm__("addps xmm2, xmm0");
                                __asm__("movups xmm0, [r8+r11*4+0x10]");
                                __asm__("addps xmm0, xmm1");
                                __asm__("movups [r9+r11*4], xmm2");
                                __asm__("movups [r9+r11*4+0x10], xmm0");
                                r11_21 = r11_21 + 8;
                            } while (r11_21 != rdx10);
                            r12_20 = rdx10;
                            if (rdx10 == rcx3) 
                                goto addr_500_6; else 
                                goto addr_58c_15;
                        }
                    }
                    if (~r12_20 != rsi11) {
                        do {
                            __asm__("movss xmm0, [r10+r11*4]");
                            __asm__("addss xmm0, [r8+r11*4]");
                            __asm__("movss [r9+r11*4], xmm0");
                            __asm__("movss xmm0, [r10+r11*4+0x4]");
                            __asm__("addss xmm0, [r8+r11*4+0x4]");
                            __asm__("movss [r9+r11*4+0x4], xmm0");
                            r11_23 = r11_23 + 2;
                        } while (r11_23 != rcx3);
                        goto addr_500_6;
                    }
                    addr_58c_15:
                    goto addr_593_9;
                }
            }
        } else {
            *reinterpret_cast<int32_t*>(&rdx24) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx24) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(r12d9 < reinterpret_cast<int32_t>(fputc) == fputc)) | reinterpret_cast<uint1_t>(r12d9 == fputc))) {
                    __asm__("xorps xmm2, xmm2");
                    *reinterpret_cast<int32_t*>(&rsi25) = reinterpret_cast<int32_t>(fputc);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi25) + 4) = reinterpret_cast<int32_t>(fputc);
                    __asm__("xorps xmm3, xmm3");
                    __asm__("xorps xmm1, xmm1");
                    do {
                        __asm__("movaps xmm4, xmm3");
                        __asm__("mulss xmm2, xmm10");
                        __asm__("movss xmm3, [r8+rdx*4]");
                        __asm__("mulss xmm3, xmm9");
                        __asm__("addss xmm3, xmm2");
                        __asm__("movaps xmm2, xmm8");
                        __asm__("mulss xmm2, xmm4");
                        __asm__("addss xmm2, xmm3");
                        __asm__("mulss xmm1, xmm0");
                        __asm__("addss xmm1, xmm2");
                        __asm__("movss [rdi+rdx*4], xmm1");
                        __asm__("movss xmm2, [r8+rdx*4]");
                        ++rsi25;
                        __asm__("movaps xmm3, xmm1");
                        __asm__("movaps xmm1, xmm4");
                    } while (rsi25 != rax1);
                }
                ++rdx24;
            } while (rdx24 != rcx3);
            if (reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(ebp26 < reinterpret_cast<int32_t>(fputc) == fputc)) | reinterpret_cast<uint1_t>(ebp27 == fputc)) 
                goto addr_4db_3; else 
                goto addr_45c_26;
        }
    } else {
        *reinterpret_cast<int32_t*>(&rdx28) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx28) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(ebp29 < reinterpret_cast<int32_t>(fputc) == fputc)) | reinterpret_cast<uint1_t>(ebp30 == fputc))) {
                __asm__("xorps xmm2, xmm2");
                *reinterpret_cast<int32_t*>(&rsi31) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi31) + 4) = reinterpret_cast<int32_t>(fputc);
                __asm__("xorps xmm3, xmm3");
                __asm__("xorps xmm1, xmm1");
                do {
                    __asm__("movaps xmm4, xmm3");
                    __asm__("mulss xmm2, xmm10");
                    __asm__("movss xmm3, [r8+rsi*4]");
                    __asm__("mulss xmm3, xmm9");
                    __asm__("addss xmm3, xmm2");
                    __asm__("movaps xmm2, xmm8");
                    __asm__("mulss xmm2, xmm4");
                    __asm__("addss xmm2, xmm3");
                    __asm__("mulss xmm1, xmm0");
                    __asm__("addss xmm1, xmm2");
                    __asm__("movss [rdi+rsi*4], xmm1");
                    __asm__("movss xmm2, [r8+rsi*4]");
                    ++rsi31;
                    __asm__("movaps xmm3, xmm1");
                    __asm__("movaps xmm1, xmm4");
                } while (rsi31 != rcx3);
            }
            ++rdx28;
        } while (rdx28 != rax1);
        if (reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(r12d32 < reinterpret_cast<int32_t>(fputc) == fputc)) | reinterpret_cast<uint1_t>(r12d33 == fputc)) 
            goto addr_3c5_2; else 
            goto addr_20d_34;
    }
    goto v34;
    addr_45c_26:
    *reinterpret_cast<int32_t*>(&rdx35) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx35) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        __asm__("xorps xmm4, xmm4");
        rsi36 = rax1;
        __asm__("xorps xmm3, xmm3");
        __asm__("xorps xmm5, xmm5");
        __asm__("xorps xmm1, xmm1");
        if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(r12d9 < reinterpret_cast<int32_t>(fputc) == fputc)) | reinterpret_cast<uint1_t>(r12d9 == fputc))) {
            do {
                __asm__("movaps xmm2, xmm5");
                __asm__("mulss xmm3, xmm7");
                __asm__("movaps xmm5, xmm6");
                __asm__("mulss xmm5, xmm4");
                __asm__("addss xmm5, xmm3");
                __asm__("movaps xmm3, xmm8");
                __asm__("mulss xmm3, xmm2");
                __asm__("addss xmm3, xmm5");
                __asm__("mulss xmm1, xmm0");
                __asm__("addss xmm1, xmm3");
                __asm__("movss [r9+rdx*4], xmm1");
                __asm__("movaps xmm3, xmm4");
                __asm__("movss xmm4, [r8+rdx*4]");
                __asm__("movaps xmm5, xmm1");
                __asm__("movaps xmm1, xmm2");
                less_or_equal37 = rsi36 <= 1;
                --rsi36;
            } while (!less_or_equal37);
        }
        ++rdx35;
    } while (rdx35 != rcx3);
    goto addr_4db_3;
    addr_20d_34:
    *reinterpret_cast<int32_t*>(&rdx38) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx38) + 4) = reinterpret_cast<int32_t>(fputc);
    do {
        __asm__("xorps xmm4, xmm4");
        rsi39 = rcx3;
        __asm__("xorps xmm3, xmm3");
        __asm__("xorps xmm5, xmm5");
        __asm__("xorps xmm1, xmm1");
        if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(ebp40 < reinterpret_cast<int32_t>(fputc) == fputc)) | reinterpret_cast<uint1_t>(ebp41 == fputc))) {
            do {
                __asm__("movaps xmm2, xmm5");
                __asm__("mulss xmm3, xmm7");
                __asm__("movaps xmm5, xmm6");
                __asm__("mulss xmm5, xmm4");
                __asm__("addss xmm5, xmm3");
                __asm__("movaps xmm3, xmm8");
                __asm__("mulss xmm3, xmm2");
                __asm__("addss xmm3, xmm5");
                __asm__("mulss xmm1, xmm0");
                __asm__("addss xmm1, xmm3");
                __asm__("movss [r10+r8*4], xmm1");
                __asm__("movaps xmm3, xmm4");
                __asm__("movss xmm4, [r9+r8*4]");
                less_or_equal42 = reinterpret_cast<int64_t>(rsi39) <= reinterpret_cast<int64_t>(1);
                --rsi39;
                __asm__("movaps xmm5, xmm1");
                __asm__("movaps xmm1, xmm2");
            } while (!less_or_equal42);
        }
        ++rdx38;
    } while (rdx38 != rax1);
    if (reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(r12d43 < reinterpret_cast<int32_t>(fputc) == fputc)) | reinterpret_cast<uint1_t>(r12d44 == fputc)) 
        goto addr_3c5_2;
    *reinterpret_cast<uint32_t*>(&rdx45) = *reinterpret_cast<uint32_t*>(&rcx3) & 0xfffffff8;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx45) + 4) = reinterpret_cast<int32_t>(fputc);
    rsi46 = reinterpret_cast<int64_t>(-rcx3);
    *reinterpret_cast<int32_t*>(&rdi47) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi47) + 4) = reinterpret_cast<int32_t>(fputc);
    v48 = r12d49;
    while (1) {
        if (reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(ebp50 < reinterpret_cast<int32_t>(fputc) == fputc)) | reinterpret_cast<uint1_t>(ebp51 == fputc)) {
            addr_2c0_49:
            ++rdi47;
            if (rdi47 == rax1) 
                goto addr_3c5_2; else 
                continue;
        } else {
            r8_52 = rdi47 * 0x21c0;
            r9_53 = r8_52 + r15_54;
            if (ebp55 < 8 || reinterpret_cast<uint64_t>(r9_53 - (r8_52 + r14_56)) < 32) {
                *reinterpret_cast<int32_t*>(&r13_57) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_57) + 4) = reinterpret_cast<int32_t>(fputc);
                goto addr_363_52;
            }
            *reinterpret_cast<int32_t*>(&r11_58) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_58) + 4) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(&r13_57) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_57) + 4) = reinterpret_cast<int32_t>(fputc);
            rsi46 = rsi46;
            r12d9 = v48;
            if (reinterpret_cast<uint64_t>(r9_53 - (r8_52 + rbx59)) < 32) {
                addr_363_52:
                r11_60 = r13_57;
                if ((*reinterpret_cast<unsigned char*>(&rcx3) & 1) != fputc) {
                    __asm__("movss xmm1, [r10+r13*4]");
                    __asm__("addss xmm1, [r8+r13*4]");
                    __asm__("movss [r9+r13*4], xmm1");
                    r11_60 = r13_57 | 1;
                }
            } else {
                do {
                    __asm__("movups xmm1, [r10+r11*4]");
                    __asm__("movups xmm2, [r10+r11*4+0x10]");
                    __asm__("movups xmm3, [r8+r11*4]");
                    __asm__("addps xmm3, xmm1");
                    __asm__("movups xmm1, [r8+r11*4+0x10]");
                    __asm__("addps xmm1, xmm2");
                    __asm__("movups [r9+r11*4], xmm3");
                    __asm__("movups [r9+r11*4+0x10], xmm1");
                    r11_58 = r11_58 + 8;
                } while (r11_58 != rdx45);
                r13_57 = rdx45;
                if (rdx45 == rcx3) 
                    goto addr_2c0_49; else 
                    goto addr_35c_58;
            }
        }
        if (~r13_57 != rsi46) {
            do {
                __asm__("movss xmm1, [r10+r11*4]");
                __asm__("addss xmm1, [r8+r11*4]");
                __asm__("movss [r9+r11*4], xmm1");
                __asm__("movss xmm1, [r10+r11*4+0x4]");
                __asm__("addss xmm1, [r8+r11*4+0x4]");
                __asm__("movss [r9+r11*4+0x4], xmm1");
                r11_60 = r11_60 + 2;
            } while (r11_60 != rcx3);
            goto addr_2c0_49;
        }
        addr_35c_58:
        goto addr_363_52;
    }
}

int64_t fun_644(int64_t rdi, int64_t rsi) {
    int64_t v3;
    int64_t rax4;
    int64_t rax5;
    int64_t r14_6;
    int64_t rax7;
    int64_t r15_8;
    int64_t rax9;
    int64_t rcx10;
    int64_t rsi11;
    int64_t rdx12;
    int64_t rbx13;
    int64_t rcx14;
    int64_t r8_15;
    int64_t r9_16;
    int32_t ebp17;
    signed char** r13_18;
    int64_t v19;
    int64_t v20;
    int64_t* rax21;
    int64_t r13_22;
    int64_t rcx23;
    int64_t v24;
    int64_t v25;
    int64_t v26;
    int64_t v27;
    int64_t v28;
    int64_t v29;
    int64_t r15_30;
    int64_t v31;
    int64_t v32;
    int64_t v33;
    int64_t v34;
    int64_t v35;
    int64_t v36;
    int64_t r12_37;
    int64_t r14_38;
    int64_t v39;
    int64_t v40;
    int64_t v41;
    int64_t v42;
    int64_t v43;
    int64_t v44;
    int64_t v45;
    int64_t v46;
    int64_t v47;
    int64_t v48;
    int64_t v49;
    int64_t v50;
    int64_t v51;
    int64_t v52;
    int64_t v53;
    int64_t v54;
    int64_t v55;
    int64_t v56;
    int64_t v57;
    int64_t v58;
    int64_t v59;
    int64_t v60;
    int64_t v61;
    int64_t v62;
    int64_t rbx63;
    int64_t v64;

    v3 = rax4;
    rax5 = fun_657(0x870000, 4);
    r14_6 = rax5;
    rax7 = fun_669(0x870000, 4);
    r15_8 = rax7;
    *reinterpret_cast<int32_t*>(&rax9) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax9) + 4) = reinterpret_cast<int32_t>(fputc);
    __asm__("movdqa xmm0, [rip+0x0]");
    __asm__("movdqa xmm1, [rip+0x0]");
    __asm__("movdqa xmm2, [rip+0x0]");
    __asm__("movaps xmm3, [rip+0x0]");
    __asm__("movaps xmm4, [rip+0x0]");
    __asm__("movdqa xmm5, [rip+0x0]");
    do {
        __asm__("movd xmm6, rcx");
        __asm__("pshufd xmm6, xmm6, 0x44");
        *reinterpret_cast<int32_t*>(&rcx10) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx10) + 4) = reinterpret_cast<int32_t>(fputc);
        __asm__("movdqa xmm7, xmm1");
        __asm__("movdqa xmm8, xmm0");
        do {
            __asm__("movdqa xmm9, xmm8");
            __asm__("pmuludq xmm9, xmm2");
            __asm__("movdqa xmm10, xmm7");
            __asm__("pmuludq xmm10, xmm2");
            __asm__("paddq xmm10, xmm6");
            __asm__("paddq xmm9, xmm6");
            __asm__("shufps xmm10, xmm9, 0x88");
            __asm__("andps xmm10, xmm3");
            __asm__("cvtdq2ps xmm9, xmm10");
            __asm__("divps xmm9, xmm4");
            __asm__("movups [rdx+rcx*4], xmm9");
            rcx10 = rcx10 + 4;
            __asm__("paddq xmm7, xmm5");
            __asm__("paddq xmm8, xmm5");
        } while (rcx10 != 0x870);
        ++rax9;
    } while (rax9 != 0x1000);
    __asm__("movss xmm0, [rip+0x0]");
    *reinterpret_cast<int32_t*>(&rsi11) = 0x870;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi11) + 4) = reinterpret_cast<int32_t>(fputc);
    rdx12 = rbx13;
    rcx14 = v3;
    r8_15 = r14_6;
    r9_16 = r15_8;
    fun_743(0x1000, 0x870, rdx12, rcx14, r8_15, r9_16);
    if (ebp17 >= 43 && **r13_18 == fputc) {
        v19 = r15_8;
        v20 = r14_6;
        rax21 = g794;
        r13_22 = *rax21;
        rcx23 = r13_22;
        fun_7b0(0x79e, 22, 1, rcx23, r8_15, r9_16, v3, v19, v20, v24, v25, v26, v27, v28, v29);
        *reinterpret_cast<int32_t*>(&r15_30) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_30) + 4) = reinterpret_cast<int32_t>(fputc);
        fun_7cb(r13_22, 0x7b7, 0x7be, rcx23, r8_15, r9_16, v3, v19, v20, v31, v32, v33, v34, v35, v36);
        do {
            r12_37 = r15_30 * 0x870;
            *reinterpret_cast<int32_t*>(&r14_38) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_38) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("ror eax, 0x2");
                if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r14_38 + r12_37) * 0xcccccccd) <= 0xccccccc) {
                    fun_80b(10, r13_22, 0x7be, rcx23, r8_15, r9_16, v3, v19, v20, v39, v40, v41, v42, v43, v44);
                }
                __asm__("movss xmm0, [rax+r14*4]");
                __asm__("cvtss2sd xmm0, xmm0");
                fun_82d(r13_22, 0x7d2, 0x7be, rcx23, r8_15, r9_16, v3, v19, v20, v45, v46, v47, v48, v49, v50);
                ++r14_38;
            } while (r14_38 != 0x870);
            ++r15_30;
        } while (r15_30 != 0x1000);
        fun_85d(r13_22, 0x84c, 0x853, rcx23, r8_15, r9_16, v3, v19, v20, v51, v52, v53, v54, v55, v56);
        *reinterpret_cast<int32_t*>(&rsi11) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi11) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx12) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx12) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx14 = r13_22;
        fun_876(0x864, 22, 1, rcx14, r8_15, r9_16, v3, v19, v20, v57, v58, v59, v60, v61, v62);
        r14_6 = v20;
        r15_8 = v19;
    }
    fun_759(rbx63, rsi11, rdx12, rcx14, r8_15, r9_16);
    fun_762(v3, rsi11, rdx12, rcx14, r8_15, r9_16);
    fun_76a(r14_6, rsi11, rdx12, rcx14, r8_15, r9_16, v3);
    fun_772(r15_8, rsi11, rdx12, rcx14, r8_15, r9_16, v3);
    goto v64;
}

void fun_772(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7) {
    int64_t v8;

    goto v8;
}

int64_t fun_657(int64_t rdi, int64_t rsi) {
    int64_t v3;
    int64_t r14_4;
    int64_t rax5;
    int64_t rax6;
    int64_t r15_7;
    int64_t rax8;
    int64_t rcx9;
    int64_t rsi10;
    int64_t rdx11;
    int64_t rbx12;
    int64_t rcx13;
    int64_t r8_14;
    int64_t r9_15;
    int32_t ebp16;
    signed char** r13_17;
    int64_t v18;
    int64_t v19;
    int64_t* rax20;
    int64_t r13_21;
    int64_t rcx22;
    int64_t v23;
    int64_t v24;
    int64_t v25;
    int64_t v26;
    int64_t v27;
    int64_t v28;
    int64_t r15_29;
    int64_t v30;
    int64_t v31;
    int64_t v32;
    int64_t v33;
    int64_t v34;
    int64_t v35;
    int64_t r12_36;
    int64_t r14_37;
    int64_t v38;
    int64_t v39;
    int64_t v40;
    int64_t v41;
    int64_t v42;
    int64_t v43;
    int64_t v44;
    int64_t v45;
    int64_t v46;
    int64_t v47;
    int64_t v48;
    int64_t v49;
    int64_t v50;
    int64_t v51;
    int64_t v52;
    int64_t v53;
    int64_t v54;
    int64_t v55;
    int64_t v56;
    int64_t v57;
    int64_t v58;
    int64_t v59;
    int64_t v60;
    int64_t v61;
    int64_t rbx62;
    int64_t v63;

    v3 = reinterpret_cast<int64_t>(__return_address());
    r14_4 = rax5;
    rax6 = fun_669(0x870000, 4);
    r15_7 = rax6;
    *reinterpret_cast<int32_t*>(&rax8) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax8) + 4) = reinterpret_cast<int32_t>(fputc);
    __asm__("movdqa xmm0, [rip+0x0]");
    __asm__("movdqa xmm1, [rip+0x0]");
    __asm__("movdqa xmm2, [rip+0x0]");
    __asm__("movaps xmm3, [rip+0x0]");
    __asm__("movaps xmm4, [rip+0x0]");
    __asm__("movdqa xmm5, [rip+0x0]");
    do {
        __asm__("movd xmm6, rcx");
        __asm__("pshufd xmm6, xmm6, 0x44");
        *reinterpret_cast<int32_t*>(&rcx9) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx9) + 4) = reinterpret_cast<int32_t>(fputc);
        __asm__("movdqa xmm7, xmm1");
        __asm__("movdqa xmm8, xmm0");
        do {
            __asm__("movdqa xmm9, xmm8");
            __asm__("pmuludq xmm9, xmm2");
            __asm__("movdqa xmm10, xmm7");
            __asm__("pmuludq xmm10, xmm2");
            __asm__("paddq xmm10, xmm6");
            __asm__("paddq xmm9, xmm6");
            __asm__("shufps xmm10, xmm9, 0x88");
            __asm__("andps xmm10, xmm3");
            __asm__("cvtdq2ps xmm9, xmm10");
            __asm__("divps xmm9, xmm4");
            __asm__("movups [rdx+rcx*4], xmm9");
            rcx9 = rcx9 + 4;
            __asm__("paddq xmm7, xmm5");
            __asm__("paddq xmm8, xmm5");
        } while (rcx9 != 0x870);
        ++rax8;
    } while (rax8 != 0x1000);
    __asm__("movss xmm0, [rip+0x0]");
    *reinterpret_cast<int32_t*>(&rsi10) = 0x870;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi10) + 4) = reinterpret_cast<int32_t>(fputc);
    rdx11 = rbx12;
    rcx13 = v3;
    r8_14 = r14_4;
    r9_15 = r15_7;
    fun_743(0x1000, 0x870, rdx11, rcx13, r8_14, r9_15);
    if (ebp16 >= 43 && **r13_17 == fputc) {
        v18 = r15_7;
        v19 = r14_4;
        rax20 = g794;
        r13_21 = *rax20;
        rcx22 = r13_21;
        fun_7b0(0x79e, 22, 1, rcx22, r8_14, r9_15, v3, v18, v19, v23, v24, v25, v26, v27, v28);
        *reinterpret_cast<int32_t*>(&r15_29) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_29) + 4) = reinterpret_cast<int32_t>(fputc);
        fun_7cb(r13_21, 0x7b7, 0x7be, rcx22, r8_14, r9_15, v3, v18, v19, v30, v31, v32, v33, v34, v35);
        do {
            r12_36 = r15_29 * 0x870;
            *reinterpret_cast<int32_t*>(&r14_37) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_37) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("ror eax, 0x2");
                if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r14_37 + r12_36) * 0xcccccccd) <= 0xccccccc) {
                    fun_80b(10, r13_21, 0x7be, rcx22, r8_14, r9_15, v3, v18, v19, v38, v39, v40, v41, v42, v43);
                }
                __asm__("movss xmm0, [rax+r14*4]");
                __asm__("cvtss2sd xmm0, xmm0");
                fun_82d(r13_21, 0x7d2, 0x7be, rcx22, r8_14, r9_15, v3, v18, v19, v44, v45, v46, v47, v48, v49);
                ++r14_37;
            } while (r14_37 != 0x870);
            ++r15_29;
        } while (r15_29 != 0x1000);
        fun_85d(r13_21, 0x84c, 0x853, rcx22, r8_14, r9_15, v3, v18, v19, v50, v51, v52, v53, v54, v55);
        *reinterpret_cast<int32_t*>(&rsi10) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi10) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx11) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx11) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx13 = r13_21;
        fun_876(0x864, 22, 1, rcx13, r8_14, r9_15, v3, v18, v19, v56, v57, v58, v59, v60, v61);
        r14_4 = v19;
        r15_7 = v18;
    }
    fun_759(rbx62, rsi10, rdx11, rcx13, r8_14, r9_15);
    fun_762(v3, rsi10, rdx11, rcx13, r8_14, r9_15);
    fun_76a(r14_4, rsi10, rdx11, rcx13, r8_14, r9_15, v3);
    fun_772(r15_7, rsi10, rdx11, rcx13, r8_14, r9_15, v3);
    goto v63;
}

int64_t fun_669(int64_t rdi, int64_t rsi) {
    int64_t v3;
    int64_t r15_4;
    int64_t rax5;
    int64_t rax6;
    int64_t rcx7;
    int64_t rsi8;
    int64_t rdx9;
    int64_t rbx10;
    int64_t rcx11;
    int64_t r8_12;
    int64_t r14_13;
    int64_t r9_14;
    int32_t ebp15;
    signed char** r13_16;
    int64_t v17;
    int64_t v18;
    int64_t r14_19;
    int64_t* rax20;
    int64_t r13_21;
    int64_t rcx22;
    int64_t v23;
    int64_t v24;
    int64_t v25;
    int64_t v26;
    int64_t v27;
    int64_t v28;
    int64_t r15_29;
    int64_t v30;
    int64_t v31;
    int64_t v32;
    int64_t v33;
    int64_t v34;
    int64_t v35;
    int64_t r12_36;
    int64_t r14_37;
    int64_t v38;
    int64_t v39;
    int64_t v40;
    int64_t v41;
    int64_t v42;
    int64_t v43;
    int64_t v44;
    int64_t v45;
    int64_t v46;
    int64_t v47;
    int64_t v48;
    int64_t v49;
    int64_t v50;
    int64_t v51;
    int64_t v52;
    int64_t v53;
    int64_t v54;
    int64_t v55;
    int64_t v56;
    int64_t v57;
    int64_t v58;
    int64_t v59;
    int64_t v60;
    int64_t v61;
    int64_t r14_62;
    int64_t rbx63;
    int64_t v64;

    v3 = reinterpret_cast<int64_t>(__return_address());
    r15_4 = rax5;
    *reinterpret_cast<int32_t*>(&rax6) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax6) + 4) = reinterpret_cast<int32_t>(fputc);
    __asm__("movdqa xmm0, [rip+0x0]");
    __asm__("movdqa xmm1, [rip+0x0]");
    __asm__("movdqa xmm2, [rip+0x0]");
    __asm__("movaps xmm3, [rip+0x0]");
    __asm__("movaps xmm4, [rip+0x0]");
    __asm__("movdqa xmm5, [rip+0x0]");
    do {
        __asm__("movd xmm6, rcx");
        __asm__("pshufd xmm6, xmm6, 0x44");
        *reinterpret_cast<int32_t*>(&rcx7) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx7) + 4) = reinterpret_cast<int32_t>(fputc);
        __asm__("movdqa xmm7, xmm1");
        __asm__("movdqa xmm8, xmm0");
        do {
            __asm__("movdqa xmm9, xmm8");
            __asm__("pmuludq xmm9, xmm2");
            __asm__("movdqa xmm10, xmm7");
            __asm__("pmuludq xmm10, xmm2");
            __asm__("paddq xmm10, xmm6");
            __asm__("paddq xmm9, xmm6");
            __asm__("shufps xmm10, xmm9, 0x88");
            __asm__("andps xmm10, xmm3");
            __asm__("cvtdq2ps xmm9, xmm10");
            __asm__("divps xmm9, xmm4");
            __asm__("movups [rdx+rcx*4], xmm9");
            rcx7 = rcx7 + 4;
            __asm__("paddq xmm7, xmm5");
            __asm__("paddq xmm8, xmm5");
        } while (rcx7 != 0x870);
        ++rax6;
    } while (rax6 != 0x1000);
    __asm__("movss xmm0, [rip+0x0]");
    *reinterpret_cast<int32_t*>(&rsi8) = 0x870;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi8) + 4) = reinterpret_cast<int32_t>(fputc);
    rdx9 = rbx10;
    rcx11 = v3;
    r8_12 = r14_13;
    r9_14 = r15_4;
    fun_743(0x1000, 0x870, rdx9, rcx11, r8_12, r9_14);
    if (ebp15 >= 43 && **r13_16 == fputc) {
        v17 = r15_4;
        v18 = r14_19;
        rax20 = g794;
        r13_21 = *rax20;
        rcx22 = r13_21;
        fun_7b0(0x79e, 22, 1, rcx22, r8_12, r9_14, v3, v17, v18, v23, v24, v25, v26, v27, v28);
        *reinterpret_cast<int32_t*>(&r15_29) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_29) + 4) = reinterpret_cast<int32_t>(fputc);
        fun_7cb(r13_21, 0x7b7, 0x7be, rcx22, r8_12, r9_14, v3, v17, v18, v30, v31, v32, v33, v34, v35);
        do {
            r12_36 = r15_29 * 0x870;
            *reinterpret_cast<int32_t*>(&r14_37) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_37) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("ror eax, 0x2");
                if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r14_37 + r12_36) * 0xcccccccd) <= 0xccccccc) {
                    fun_80b(10, r13_21, 0x7be, rcx22, r8_12, r9_14, v3, v17, v18, v38, v39, v40, v41, v42, v43);
                }
                __asm__("movss xmm0, [rax+r14*4]");
                __asm__("cvtss2sd xmm0, xmm0");
                fun_82d(r13_21, 0x7d2, 0x7be, rcx22, r8_12, r9_14, v3, v17, v18, v44, v45, v46, v47, v48, v49);
                ++r14_37;
            } while (r14_37 != 0x870);
            ++r15_29;
        } while (r15_29 != 0x1000);
        fun_85d(r13_21, 0x84c, 0x853, rcx22, r8_12, r9_14, v3, v17, v18, v50, v51, v52, v53, v54, v55);
        *reinterpret_cast<int32_t*>(&rsi8) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi8) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx9) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx9) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx11 = r13_21;
        fun_876(0x864, 22, 1, rcx11, r8_12, r9_14, v3, v17, v18, v56, v57, v58, v59, v60, v61);
        r14_62 = v18;
        r15_4 = v17;
    }
    fun_759(rbx63, rsi8, rdx9, rcx11, r8_12, r9_14);
    fun_762(v3, rsi8, rdx9, rcx11, r8_12, r9_14);
    fun_76a(r14_62, rsi8, rdx9, rcx11, r8_12, r9_14, v3);
    fun_772(r15_4, rsi8, rdx9, rcx11, r8_12, r9_14, v3);
    goto v64;
}

void fputc() {
}

void fun_1a() {
    __asm__("movaps [rsp+0x40], xmm0");
}

void fun_2f() {
}

void fun_41() {
    __asm__("movss [rsp+0x10], xmm1");
    __asm__("movaps xmm0, [rsp+0x20]");
}

void fun_e4() {
    fun_e9();
}

void submain(int32_t edi, int64_t rsi) {
    fun_632(0x870000, 4);
}

