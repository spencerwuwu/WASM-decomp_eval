
void fun_57() {
    __asm__("movss xmm1, [rip+0x0]");
    __asm__("subss xmm1, xmm0");
    __asm__("mulss xmm1, [rsp+0x10]");
    __asm__("movaps [rsp+0x10], xmm1");
    __asm__("movaps xmm0, [rsp+0x40]");
    __asm__("addss xmm0, xmm0");
    __asm__("movaps [rsp+0x50], xmm0");
}

void fun_134();

void fun_144();

void fun_154();

void fputc();

void fun_ef() {
    int64_t rax1;
    int32_t r12d2;
    int64_t rcx3;
    int32_t ebp4;
    int32_t r12d5;
    int32_t r12d6;
    int64_t rdx7;
    int32_t ebp8;
    int32_t ebp9;
    int64_t rsi10;
    int32_t r12d11;
    int32_t r12d12;
    int64_t rdx13;
    int64_t rsi14;
    int32_t ebp15;
    int32_t ebp16;
    int1_t less_or_equal17;
    int32_t r12d18;
    int32_t r12d19;
    int64_t rdx20;
    int32_t ebp21;
    int32_t ebp22;
    int64_t rsi23;
    int32_t ebp24;
    int32_t ebp25;
    int64_t rdx26;
    int32_t r12d27;
    int32_t r12d28;
    int64_t rsi29;
    int32_t ebp30;
    int32_t ebp31;
    int64_t rdx32;
    int64_t rsi33;
    int32_t r12d34;
    int32_t r12d35;
    int1_t less_or_equal36;
    int32_t r12d37;
    int32_t r12d38;
    int64_t rdx39;
    int32_t ebp40;
    int32_t ebp41;
    int64_t rsi42;
    int64_t v43;

    __asm__("movaps xmm2, [rsp+0x10]");
    __asm__("mulss xmm0, xmm2");
    __asm__("movss [rsp+0x8], xmm0");
    __asm__("movaps xmm0, [rsp+0x40]");
    __asm__("movss xmm1, [rsp+0xc]");
    __asm__("addss xmm1, xmm0");
    __asm__("movss [rsp+0xc], xmm1");
    __asm__("movaps xmm1, xmm2");
    __asm__("xorps xmm1, [rip+0x0]");
    __asm__("movaps [rsp+0x60], xmm1");
    __asm__("mulss xmm0, [rip+0x0]");
    __asm__("movaps [rsp+0x40], xmm0");
    fun_134();
    __asm__("movss [rsp+0x50], xmm0");
    __asm__("movaps xmm0, [rsp+0x20]");
    fun_144();
    __asm__("movss [rsp+0x20], xmm0");
    __asm__("movaps xmm0, [rsp+0x40]");
    fun_154();
    __asm__("movss xmm10, [rsp+0x3c]");
    __asm__("movaps xmm9, [rsp+0x10]");
    __asm__("movss xmm8, [rsp+0x20]");
    __asm__("xorps xmm0, [rip+0x0]");
    *reinterpret_cast<int32_t*>(&rax1) = r12d2;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax1) + 4) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(&rcx3) = ebp4;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx3) + 4) = reinterpret_cast<int32_t>(fputc);
    if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(r12d5 < reinterpret_cast<int32_t>(fputc) == fputc)) | reinterpret_cast<uint1_t>(r12d6 == fputc))) {
        *reinterpret_cast<int32_t*>(&rdx7) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx7) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(ebp8 < reinterpret_cast<int32_t>(fputc) == fputc)) | reinterpret_cast<uint1_t>(ebp9 == fputc))) {
                __asm__("xorps xmm2, xmm2");
                *reinterpret_cast<int32_t*>(&rsi10) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi10) + 4) = reinterpret_cast<int32_t>(fputc);
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
                    ++rsi10;
                    __asm__("movaps xmm3, xmm1");
                    __asm__("movaps xmm1, xmm4");
                } while (rsi10 != rcx3);
            }
            ++rdx7;
        } while (rdx7 != rax1);
    }
    __asm__("movss xmm6, [rsp+0xc]");
    __asm__("mulss xmm6, [rsp+0x8]");
    __asm__("movss xmm7, [rsp+0x50]");
    __asm__("mulss xmm7, [rsp+0x60]");
    if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(r12d11 < reinterpret_cast<int32_t>(fputc) == fputc)) | reinterpret_cast<uint1_t>(r12d12 == fputc))) {
        *reinterpret_cast<int32_t*>(&rdx13) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx13) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("xorps xmm4, xmm4");
            rsi14 = rcx3;
            __asm__("xorps xmm3, xmm3");
            __asm__("xorps xmm5, xmm5");
            __asm__("xorps xmm1, xmm1");
            if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(ebp15 < reinterpret_cast<int32_t>(fputc) == fputc)) | reinterpret_cast<uint1_t>(ebp16 == fputc))) {
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
                    less_or_equal17 = rsi14 <= 1;
                    --rsi14;
                    __asm__("movaps xmm5, xmm1");
                    __asm__("movaps xmm1, xmm2");
                } while (!less_or_equal17);
            }
            ++rdx13;
        } while (rdx13 != rax1);
    }
    if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(r12d18 < reinterpret_cast<int32_t>(fputc) == fputc)) | reinterpret_cast<uint1_t>(r12d19 == fputc))) {
        *reinterpret_cast<int32_t*>(&rdx20) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx20) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(ebp21 < reinterpret_cast<int32_t>(fputc) == fputc)) | reinterpret_cast<uint1_t>(ebp22 == fputc))) {
                *reinterpret_cast<int32_t*>(&rsi23) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi23) + 4) = reinterpret_cast<int32_t>(fputc);
                do {
                    __asm__("movss xmm1, [r8+rsi*4]");
                    __asm__("addss xmm1, [r8+rsi*4]");
                    __asm__("movss [rdi+rsi*4], xmm1");
                    ++rsi23;
                } while (rsi23 != rcx3);
            }
            ++rdx20;
        } while (rdx20 != rax1);
    }
    if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(ebp24 < reinterpret_cast<int32_t>(fputc) == fputc)) | reinterpret_cast<uint1_t>(ebp25 == fputc))) {
        *reinterpret_cast<int32_t*>(&rdx26) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx26) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(r12d27 < reinterpret_cast<int32_t>(fputc) == fputc)) | reinterpret_cast<uint1_t>(r12d28 == fputc))) {
                __asm__("xorps xmm2, xmm2");
                *reinterpret_cast<int32_t*>(&rsi29) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi29) + 4) = reinterpret_cast<int32_t>(fputc);
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
                    ++rsi29;
                    __asm__("movaps xmm3, xmm1");
                    __asm__("movaps xmm1, xmm4");
                } while (rsi29 != rax1);
            }
            ++rdx26;
        } while (rdx26 != rcx3);
    }
    if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(ebp30 < reinterpret_cast<int32_t>(fputc) == fputc)) | reinterpret_cast<uint1_t>(ebp31 == fputc))) {
        *reinterpret_cast<int32_t*>(&rdx32) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx32) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("xorps xmm4, xmm4");
            rsi33 = rax1;
            __asm__("xorps xmm3, xmm3");
            __asm__("xorps xmm5, xmm5");
            __asm__("xorps xmm1, xmm1");
            if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(r12d34 < reinterpret_cast<int32_t>(fputc) == fputc)) | reinterpret_cast<uint1_t>(r12d35 == fputc))) {
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
                    less_or_equal36 = rsi33 <= 1;
                    --rsi33;
                } while (!less_or_equal36);
            }
            ++rdx32;
        } while (rdx32 != rcx3);
    }
    if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(r12d37 < reinterpret_cast<int32_t>(fputc) == fputc)) | reinterpret_cast<uint1_t>(r12d38 == fputc))) {
        *reinterpret_cast<int32_t*>(&rdx39) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx39) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(ebp40 < reinterpret_cast<int32_t>(fputc) == fputc)) | reinterpret_cast<uint1_t>(ebp41 == fputc))) {
                *reinterpret_cast<int32_t*>(&rsi42) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi42) + 4) = reinterpret_cast<int32_t>(fputc);
                do {
                    __asm__("movss xmm0, [r8+rsi*4]");
                    __asm__("addss xmm0, [r8+rsi*4]");
                    __asm__("movss [rdi+rsi*4], xmm0");
                    ++rsi42;
                } while (rsi42 != rcx3);
            }
            ++rdx39;
        } while (rdx39 != rax1);
    }
    goto v43;
}

int64_t* g591 = reinterpret_cast<int64_t*>(0x3d8d48288b4c);

void fun_5ad(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15);

void fun_5c8(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15);

void fun_5fb(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15);

void fun_61d(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15);

void fun_64d(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15);

void fun_666(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15);

void fun_556(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9);

void fun_55f(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9);

void fun_567(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7);

void fun_56f(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7);

void fun_540(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
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
        rax14 = g591;
        r13_15 = *rax14;
        rcx16 = r13_15;
        fun_5ad(0x59b, 22, 1, rcx16, r8, r9, v7, v10, v12, v17, v18, v19, v20, v21, v22);
        *reinterpret_cast<int32_t*>(&r15_23) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_23) + 4) = reinterpret_cast<int32_t>(fputc);
        fun_5c8(r13_15, 0x5b4, 0x5bb, rcx16, r8, r9, v7, v10, v12, v24, v25, v26, v27, v28, v29);
        do {
            r12_30 = r15_23 * 0x870;
            *reinterpret_cast<int32_t*>(&r14_31) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_31) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("ror eax, 0x2");
                if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r14_31 + r12_30) * 0xcccccccd) <= 0xccccccc) {
                    fun_5fb(10, r13_15, 0x5bb, rcx16, r8, r9, v7, v10, v12, v32, v33, v34, v35, v36, v37);
                }
                __asm__("movss xmm0, [rax+r14*4]");
                __asm__("cvtss2sd xmm0, xmm0");
                fun_61d(r13_15, 0x5cf, 0x5bb, rcx16, r8, r9, v7, v10, v12, v38, v39, v40, v41, v42, v43);
                ++r14_31;
            } while (r14_31 != 0x870);
            ++r15_23;
        } while (r15_23 != 0x1000);
        fun_64d(r13_15, 0x63c, 0x643, rcx16, r8, r9, v7, v10, v12, v44, v45, v46, v47, v48, v49);
        *reinterpret_cast<int32_t*>(&rsi) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx = r13_15;
        fun_666(0x654, 22, 1, rcx, r8, r9, v7, v10, v12, v50, v51, v52, v53, v54, v55);
        r14_56 = v12;
        r15_57 = v10;
    }
    fun_556(rbx58, rsi, rdx, rcx, r8, r9);
    fun_55f(v7, rsi, rdx, rcx, r8, r9);
    fun_567(r14_56, rsi, rdx, rcx, r8, r9, v7);
    fun_56f(r15_57, rsi, rdx, rcx, r8, r9, v7);
    goto v59;
}

void fun_556(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    int64_t r14_7;
    int64_t r15_8;
    int64_t v9;

    fun_55f(__return_address(), rsi, rdx, rcx, r8, r9);
    fun_567(r14_7, rsi, rdx, rcx, r8, r9, __return_address());
    fun_56f(r15_8, rsi, rdx, rcx, r8, r9, __return_address());
    goto v9;
}

void fun_5fb(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15) {
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
        fun_61d(r13_16, rbp17, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11, a12, a13, a14);
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
        fun_5fb(10, r13_21, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11, a12, a13, a14);
    }
    fun_64d(r13_22, 0x63c, 0x643, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11, a12, a13, a14);
    fun_666(0x654, 22, 1, r13_23, r8, r9, __return_address(), a7, a8, a9, a10, a11, a12, a13, a14);
    fun_556(rbx24, 22, 1, r13_23, r8, r9);
    fun_55f(__return_address(), 22, 1, r13_23, r8, r9);
    fun_567(a8, 22, 1, r13_23, r8, r9, __return_address());
    fun_56f(a7, 22, 1, r13_23, r8, r9, __return_address());
    goto a15;
}

void fun_64d(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15) {
    int64_t r13_16;
    int64_t rbx17;

    fun_666(0x654, 22, 1, r13_16, r8, r9, __return_address(), a7, a8, a9, a10, a11, a12, a13, a14);
    fun_556(rbx17, 22, 1, r13_16, r8, r9);
    fun_55f(__return_address(), 22, 1, r13_16, r8, r9);
    fun_567(a8, 22, 1, r13_16, r8, r9, __return_address());
    fun_56f(a7, 22, 1, r13_16, r8, r9, __return_address());
    goto a15;
}

void fun_134() {
    int64_t rax1;
    int32_t r12d2;
    int64_t rcx3;
    int32_t ebp4;
    int32_t r12d5;
    int32_t r12d6;
    int64_t rdx7;
    int32_t ebp8;
    int32_t ebp9;
    int64_t rsi10;
    int32_t r12d11;
    int32_t r12d12;
    int64_t rdx13;
    int64_t rsi14;
    int32_t ebp15;
    int32_t ebp16;
    int1_t less_or_equal17;
    int32_t r12d18;
    int32_t r12d19;
    int64_t rdx20;
    int32_t ebp21;
    int32_t ebp22;
    int64_t rsi23;
    int32_t ebp24;
    int32_t ebp25;
    int64_t rdx26;
    int32_t r12d27;
    int32_t r12d28;
    int64_t rsi29;
    int32_t ebp30;
    int32_t ebp31;
    int64_t rdx32;
    int64_t rsi33;
    int32_t r12d34;
    int32_t r12d35;
    int1_t less_or_equal36;
    int32_t r12d37;
    int32_t r12d38;
    int64_t rdx39;
    int32_t ebp40;
    int32_t ebp41;
    int64_t rsi42;
    int64_t v43;

    __asm__("movss [rsp+0x50], xmm0");
    __asm__("movaps xmm0, [rsp+0x20]");
    fun_144();
    __asm__("movss [rsp+0x20], xmm0");
    __asm__("movaps xmm0, [rsp+0x40]");
    fun_154();
    __asm__("movss xmm10, [rsp+0x3c]");
    __asm__("movaps xmm9, [rsp+0x10]");
    __asm__("movss xmm8, [rsp+0x20]");
    __asm__("xorps xmm0, [rip+0x0]");
    *reinterpret_cast<int32_t*>(&rax1) = r12d2;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax1) + 4) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(&rcx3) = ebp4;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx3) + 4) = reinterpret_cast<int32_t>(fputc);
    if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(r12d5 < reinterpret_cast<int32_t>(fputc) == fputc)) | reinterpret_cast<uint1_t>(r12d6 == fputc))) {
        *reinterpret_cast<int32_t*>(&rdx7) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx7) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(ebp8 < reinterpret_cast<int32_t>(fputc) == fputc)) | reinterpret_cast<uint1_t>(ebp9 == fputc))) {
                __asm__("xorps xmm2, xmm2");
                *reinterpret_cast<int32_t*>(&rsi10) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi10) + 4) = reinterpret_cast<int32_t>(fputc);
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
                    ++rsi10;
                    __asm__("movaps xmm3, xmm1");
                    __asm__("movaps xmm1, xmm4");
                } while (rsi10 != rcx3);
            }
            ++rdx7;
        } while (rdx7 != rax1);
    }
    __asm__("movss xmm6, [rsp+0xc]");
    __asm__("mulss xmm6, [rsp+0x8]");
    __asm__("movss xmm7, [rsp+0x50]");
    __asm__("mulss xmm7, [rsp+0x60]");
    if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(r12d11 < reinterpret_cast<int32_t>(fputc) == fputc)) | reinterpret_cast<uint1_t>(r12d12 == fputc))) {
        *reinterpret_cast<int32_t*>(&rdx13) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx13) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("xorps xmm4, xmm4");
            rsi14 = rcx3;
            __asm__("xorps xmm3, xmm3");
            __asm__("xorps xmm5, xmm5");
            __asm__("xorps xmm1, xmm1");
            if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(ebp15 < reinterpret_cast<int32_t>(fputc) == fputc)) | reinterpret_cast<uint1_t>(ebp16 == fputc))) {
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
                    less_or_equal17 = rsi14 <= 1;
                    --rsi14;
                    __asm__("movaps xmm5, xmm1");
                    __asm__("movaps xmm1, xmm2");
                } while (!less_or_equal17);
            }
            ++rdx13;
        } while (rdx13 != rax1);
    }
    if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(r12d18 < reinterpret_cast<int32_t>(fputc) == fputc)) | reinterpret_cast<uint1_t>(r12d19 == fputc))) {
        *reinterpret_cast<int32_t*>(&rdx20) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx20) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(ebp21 < reinterpret_cast<int32_t>(fputc) == fputc)) | reinterpret_cast<uint1_t>(ebp22 == fputc))) {
                *reinterpret_cast<int32_t*>(&rsi23) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi23) + 4) = reinterpret_cast<int32_t>(fputc);
                do {
                    __asm__("movss xmm1, [r8+rsi*4]");
                    __asm__("addss xmm1, [r8+rsi*4]");
                    __asm__("movss [rdi+rsi*4], xmm1");
                    ++rsi23;
                } while (rsi23 != rcx3);
            }
            ++rdx20;
        } while (rdx20 != rax1);
    }
    if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(ebp24 < reinterpret_cast<int32_t>(fputc) == fputc)) | reinterpret_cast<uint1_t>(ebp25 == fputc))) {
        *reinterpret_cast<int32_t*>(&rdx26) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx26) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(r12d27 < reinterpret_cast<int32_t>(fputc) == fputc)) | reinterpret_cast<uint1_t>(r12d28 == fputc))) {
                __asm__("xorps xmm2, xmm2");
                *reinterpret_cast<int32_t*>(&rsi29) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi29) + 4) = reinterpret_cast<int32_t>(fputc);
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
                    ++rsi29;
                    __asm__("movaps xmm3, xmm1");
                    __asm__("movaps xmm1, xmm4");
                } while (rsi29 != rax1);
            }
            ++rdx26;
        } while (rdx26 != rcx3);
    }
    if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(ebp30 < reinterpret_cast<int32_t>(fputc) == fputc)) | reinterpret_cast<uint1_t>(ebp31 == fputc))) {
        *reinterpret_cast<int32_t*>(&rdx32) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx32) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("xorps xmm4, xmm4");
            rsi33 = rax1;
            __asm__("xorps xmm3, xmm3");
            __asm__("xorps xmm5, xmm5");
            __asm__("xorps xmm1, xmm1");
            if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(r12d34 < reinterpret_cast<int32_t>(fputc) == fputc)) | reinterpret_cast<uint1_t>(r12d35 == fputc))) {
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
                    less_or_equal36 = rsi33 <= 1;
                    --rsi33;
                } while (!less_or_equal36);
            }
            ++rdx32;
        } while (rdx32 != rcx3);
    }
    if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(r12d37 < reinterpret_cast<int32_t>(fputc) == fputc)) | reinterpret_cast<uint1_t>(r12d38 == fputc))) {
        *reinterpret_cast<int32_t*>(&rdx39) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx39) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(ebp40 < reinterpret_cast<int32_t>(fputc) == fputc)) | reinterpret_cast<uint1_t>(ebp41 == fputc))) {
                *reinterpret_cast<int32_t*>(&rsi42) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi42) + 4) = reinterpret_cast<int32_t>(fputc);
                do {
                    __asm__("movss xmm0, [r8+rsi*4]");
                    __asm__("addss xmm0, [r8+rsi*4]");
                    __asm__("movss [rdi+rsi*4], xmm0");
                    ++rsi42;
                } while (rsi42 != rcx3);
            }
            ++rdx39;
        } while (rdx39 != rax1);
    }
    goto v43;
}

void fun_5ad(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15) {
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
    fun_5c8(r13_18, 0x5b4, 0x5bb, rcx, r8, r9, v16, a7, a8, a9, a10, a11, a12, a13, a14);
    do {
        r12_19 = r15_17 * 0x870;
        *reinterpret_cast<int32_t*>(&r14_20) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_20) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("ror eax, 0x2");
            if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r14_20 + r12_19) * 0xcccccccd) <= 0xccccccc) {
                fun_5fb(10, r13_21, 0x5bb, rcx, r8, r9, v16, a7, a8, a9, a10, a11, a12, a13, a14);
            }
            __asm__("movss xmm0, [rax+r14*4]");
            __asm__("cvtss2sd xmm0, xmm0");
            fun_61d(r13_22, 0x5cf, 0x5bb, rcx, r8, r9, v16, a7, a8, a9, a10, a11, a12, a13, a14);
            ++r14_20;
        } while (r14_20 != 0x870);
        ++r15_17;
    } while (r15_17 != 0x1000);
    fun_64d(r13_23, 0x63c, 0x643, rcx, r8, r9, v16, a7, a8, a9, a10, a11, a12, a13, a14);
    fun_666(0x654, 22, 1, r13_24, r8, r9, v16, a7, a8, a9, a10, a11, a12, a13, a14);
    fun_556(rbx25, 22, 1, r13_24, r8, r9);
    fun_55f(v16, 22, 1, r13_24, r8, r9);
    fun_567(a8, 22, 1, r13_24, r8, r9, v16);
    fun_56f(a7, 22, 1, r13_24, r8, r9, v16);
    goto a15;
}

void fun_55f(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9) {
    int64_t r14_7;
    int64_t r15_8;
    int64_t v9;

    fun_567(r14_7, rsi, rdx, rcx, r8, r9, __return_address());
    fun_56f(r15_8, rsi, rdx, rcx, r8, r9, __return_address());
    goto v9;
}

void fun_61d(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15) {
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
            fun_5fb(10, r13_19, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11, a12, a13, a14);
        }
        __asm__("movss xmm0, [rax+r14*4]");
        __asm__("cvtss2sd xmm0, xmm0");
        fun_61d(r13_20, rbp21, rdx, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11, a12, a13, a14);
    }
    fun_64d(r13_22, 0x63c, 0x643, rcx, r8, r9, __return_address(), a7, a8, a9, a10, a11, a12, a13, a14);
    fun_666(0x654, 22, 1, r13_23, r8, r9, __return_address(), a7, a8, a9, a10, a11, a12, a13, a14);
    fun_556(rbx24, 22, 1, r13_23, r8, r9);
    fun_55f(__return_address(), 22, 1, r13_23, r8, r9);
    fun_567(a8, 22, 1, r13_23, r8, r9, __return_address());
    fun_56f(a7, 22, 1, r13_23, r8, r9, __return_address());
    goto a15;
}

void fun_666(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15) {
    int64_t rbx16;

    fun_556(rbx16, rsi, rdx, rcx, r8, r9);
    fun_55f(__return_address(), rsi, rdx, rcx, r8, r9);
    fun_567(a8, rsi, rdx, rcx, r8, r9, __return_address());
    fun_56f(a7, rsi, rdx, rcx, r8, r9, __return_address());
    goto a15;
}

void fun_144() {
    int64_t rax1;
    int32_t r12d2;
    int64_t rcx3;
    int32_t ebp4;
    int32_t r12d5;
    int32_t r12d6;
    int64_t rdx7;
    int32_t ebp8;
    int32_t ebp9;
    int64_t rsi10;
    int32_t r12d11;
    int32_t r12d12;
    int64_t rdx13;
    int64_t rsi14;
    int32_t ebp15;
    int32_t ebp16;
    int1_t less_or_equal17;
    int32_t r12d18;
    int32_t r12d19;
    int64_t rdx20;
    int32_t ebp21;
    int32_t ebp22;
    int64_t rsi23;
    int32_t ebp24;
    int32_t ebp25;
    int64_t rdx26;
    int32_t r12d27;
    int32_t r12d28;
    int64_t rsi29;
    int32_t ebp30;
    int32_t ebp31;
    int64_t rdx32;
    int64_t rsi33;
    int32_t r12d34;
    int32_t r12d35;
    int1_t less_or_equal36;
    int32_t r12d37;
    int32_t r12d38;
    int64_t rdx39;
    int32_t ebp40;
    int32_t ebp41;
    int64_t rsi42;
    int64_t v43;

    __asm__("movss [rsp+0x20], xmm0");
    __asm__("movaps xmm0, [rsp+0x40]");
    fun_154();
    __asm__("movss xmm10, [rsp+0x3c]");
    __asm__("movaps xmm9, [rsp+0x10]");
    __asm__("movss xmm8, [rsp+0x20]");
    __asm__("xorps xmm0, [rip+0x0]");
    *reinterpret_cast<int32_t*>(&rax1) = r12d2;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax1) + 4) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(&rcx3) = ebp4;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx3) + 4) = reinterpret_cast<int32_t>(fputc);
    if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(r12d5 < reinterpret_cast<int32_t>(fputc) == fputc)) | reinterpret_cast<uint1_t>(r12d6 == fputc))) {
        *reinterpret_cast<int32_t*>(&rdx7) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx7) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(ebp8 < reinterpret_cast<int32_t>(fputc) == fputc)) | reinterpret_cast<uint1_t>(ebp9 == fputc))) {
                __asm__("xorps xmm2, xmm2");
                *reinterpret_cast<int32_t*>(&rsi10) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi10) + 4) = reinterpret_cast<int32_t>(fputc);
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
                    ++rsi10;
                    __asm__("movaps xmm3, xmm1");
                    __asm__("movaps xmm1, xmm4");
                } while (rsi10 != rcx3);
            }
            ++rdx7;
        } while (rdx7 != rax1);
    }
    __asm__("movss xmm6, [rsp+0xc]");
    __asm__("mulss xmm6, [rsp+0x8]");
    __asm__("movss xmm7, [rsp+0x50]");
    __asm__("mulss xmm7, [rsp+0x60]");
    if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(r12d11 < reinterpret_cast<int32_t>(fputc) == fputc)) | reinterpret_cast<uint1_t>(r12d12 == fputc))) {
        *reinterpret_cast<int32_t*>(&rdx13) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx13) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("xorps xmm4, xmm4");
            rsi14 = rcx3;
            __asm__("xorps xmm3, xmm3");
            __asm__("xorps xmm5, xmm5");
            __asm__("xorps xmm1, xmm1");
            if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(ebp15 < reinterpret_cast<int32_t>(fputc) == fputc)) | reinterpret_cast<uint1_t>(ebp16 == fputc))) {
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
                    less_or_equal17 = rsi14 <= 1;
                    --rsi14;
                    __asm__("movaps xmm5, xmm1");
                    __asm__("movaps xmm1, xmm2");
                } while (!less_or_equal17);
            }
            ++rdx13;
        } while (rdx13 != rax1);
    }
    if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(r12d18 < reinterpret_cast<int32_t>(fputc) == fputc)) | reinterpret_cast<uint1_t>(r12d19 == fputc))) {
        *reinterpret_cast<int32_t*>(&rdx20) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx20) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(ebp21 < reinterpret_cast<int32_t>(fputc) == fputc)) | reinterpret_cast<uint1_t>(ebp22 == fputc))) {
                *reinterpret_cast<int32_t*>(&rsi23) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi23) + 4) = reinterpret_cast<int32_t>(fputc);
                do {
                    __asm__("movss xmm1, [r8+rsi*4]");
                    __asm__("addss xmm1, [r8+rsi*4]");
                    __asm__("movss [rdi+rsi*4], xmm1");
                    ++rsi23;
                } while (rsi23 != rcx3);
            }
            ++rdx20;
        } while (rdx20 != rax1);
    }
    if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(ebp24 < reinterpret_cast<int32_t>(fputc) == fputc)) | reinterpret_cast<uint1_t>(ebp25 == fputc))) {
        *reinterpret_cast<int32_t*>(&rdx26) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx26) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(r12d27 < reinterpret_cast<int32_t>(fputc) == fputc)) | reinterpret_cast<uint1_t>(r12d28 == fputc))) {
                __asm__("xorps xmm2, xmm2");
                *reinterpret_cast<int32_t*>(&rsi29) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi29) + 4) = reinterpret_cast<int32_t>(fputc);
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
                    ++rsi29;
                    __asm__("movaps xmm3, xmm1");
                    __asm__("movaps xmm1, xmm4");
                } while (rsi29 != rax1);
            }
            ++rdx26;
        } while (rdx26 != rcx3);
    }
    if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(ebp30 < reinterpret_cast<int32_t>(fputc) == fputc)) | reinterpret_cast<uint1_t>(ebp31 == fputc))) {
        *reinterpret_cast<int32_t*>(&rdx32) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx32) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("xorps xmm4, xmm4");
            rsi33 = rax1;
            __asm__("xorps xmm3, xmm3");
            __asm__("xorps xmm5, xmm5");
            __asm__("xorps xmm1, xmm1");
            if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(r12d34 < reinterpret_cast<int32_t>(fputc) == fputc)) | reinterpret_cast<uint1_t>(r12d35 == fputc))) {
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
                    less_or_equal36 = rsi33 <= 1;
                    --rsi33;
                } while (!less_or_equal36);
            }
            ++rdx32;
        } while (rdx32 != rcx3);
    }
    if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(r12d37 < reinterpret_cast<int32_t>(fputc) == fputc)) | reinterpret_cast<uint1_t>(r12d38 == fputc))) {
        *reinterpret_cast<int32_t*>(&rdx39) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx39) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(ebp40 < reinterpret_cast<int32_t>(fputc) == fputc)) | reinterpret_cast<uint1_t>(ebp41 == fputc))) {
                *reinterpret_cast<int32_t*>(&rsi42) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi42) + 4) = reinterpret_cast<int32_t>(fputc);
                do {
                    __asm__("movss xmm0, [r8+rsi*4]");
                    __asm__("addss xmm0, [r8+rsi*4]");
                    __asm__("movss [rdi+rsi*4], xmm0");
                    ++rsi42;
                } while (rsi42 != rcx3);
            }
            ++rdx39;
        } while (rdx39 != rax1);
    }
    goto v43;
}

int64_t fun_494(int64_t rdi, int64_t rsi);

int64_t fun_4a7(int64_t rdi, int64_t rsi);

int64_t fun_4b9(int64_t rdi, int64_t rsi);

void fun_482(int64_t rdi, int64_t rsi) {
    int64_t rbx3;
    int64_t rax4;
    int64_t rax5;
    int64_t v6;
    int64_t rax7;
    int64_t r14_8;
    int64_t rax9;
    int64_t r15_10;
    int64_t rax11;
    int64_t rdx12;
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
    rax5 = fun_494(0x870000, 4);
    v6 = rax5;
    rax7 = fun_4a7(0x870000, 4);
    r14_8 = rax7;
    rax9 = fun_4b9(0x870000, 4);
    r15_10 = rax9;
    *reinterpret_cast<int32_t*>(&rax11) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax11) + 4) = reinterpret_cast<int32_t>(fputc);
    __asm__("movss xmm0, [rip+0x0]");
    do {
        *reinterpret_cast<int32_t*>(&rdx12) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx12) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("xorps xmm1, xmm1");
            __asm__("cvtsi2ss xmm1, esi");
            __asm__("divss xmm1, xmm0");
            __asm__("movss [rsi+rdx*4], xmm1");
            ++rdx12;
        } while (rdx12 != 0x870);
        ++rax11;
    } while (rax11 != 0x1000);
    __asm__("movss xmm0, [rip+0x0]");
    *reinterpret_cast<int32_t*>(&rsi13) = 0x870;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi13) + 4) = reinterpret_cast<int32_t>(fputc);
    rdx14 = rbx3;
    rcx15 = v6;
    r8_16 = r14_8;
    r9_17 = r15_10;
    fun_540(0x1000, 0x870, rdx14, rcx15, r8_16, r9_17);
    if (ebp18 >= 43 && **r13_19 == fputc) {
        v20 = r15_10;
        v21 = r14_8;
        rax22 = g591;
        r13_23 = *rax22;
        rcx24 = r13_23;
        fun_5ad(0x59b, 22, 1, rcx24, r8_16, r9_17, v6, v20, v21, v25, v26, v27, v28, v29, v30);
        *reinterpret_cast<int32_t*>(&r15_31) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_31) + 4) = reinterpret_cast<int32_t>(fputc);
        fun_5c8(r13_23, 0x5b4, 0x5bb, rcx24, r8_16, r9_17, v6, v20, v21, v32, v33, v34, v35, v36, v37);
        do {
            r12_38 = r15_31 * 0x870;
            *reinterpret_cast<int32_t*>(&r14_39) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_39) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("ror eax, 0x2");
                if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r14_39 + r12_38) * 0xcccccccd) <= 0xccccccc) {
                    fun_5fb(10, r13_23, 0x5bb, rcx24, r8_16, r9_17, v6, v20, v21, v40, v41, v42, v43, v44, v45);
                }
                __asm__("movss xmm0, [rax+r14*4]");
                __asm__("cvtss2sd xmm0, xmm0");
                fun_61d(r13_23, 0x5cf, 0x5bb, rcx24, r8_16, r9_17, v6, v20, v21, v46, v47, v48, v49, v50, v51);
                ++r14_39;
            } while (r14_39 != 0x870);
            ++r15_31;
        } while (r15_31 != 0x1000);
        fun_64d(r13_23, 0x63c, 0x643, rcx24, r8_16, r9_17, v6, v20, v21, v52, v53, v54, v55, v56, v57);
        *reinterpret_cast<int32_t*>(&rsi13) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi13) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx14) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx14) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx15 = r13_23;
        fun_666(0x654, 22, 1, rcx15, r8_16, r9_17, v6, v20, v21, v58, v59, v60, v61, v62, v63);
        r14_8 = v21;
        r15_10 = v20;
    }
    fun_556(rbx3, rsi13, rdx14, rcx15, r8_16, r9_17);
    fun_55f(v6, rsi13, rdx14, rcx15, r8_16, r9_17);
    fun_567(r14_8, rsi13, rdx14, rcx15, r8_16, r9_17, v6);
    fun_56f(r15_10, rsi13, rdx14, rcx15, r8_16, r9_17, v6);
    goto v64;
}

void fun_5c8(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13, int64_t a14, int64_t a15) {
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
                fun_5fb(10, r13_20, rdx, rcx, r8, r9, v16, a7, a8, a9, a10, a11, a12, a13, a14);
            }
            __asm__("movss xmm0, [rax+r14*4]");
            __asm__("cvtss2sd xmm0, xmm0");
            fun_61d(r13_21, 0x5cf, rdx, rcx, r8, r9, v16, a7, a8, a9, a10, a11, a12, a13, a14);
            ++r14_19;
        } while (r14_19 != 0x870);
        ++r15_18;
    } while (r15_18 != 0x1000);
    fun_64d(r13_22, 0x63c, 0x643, rcx, r8, r9, v16, a7, a8, a9, a10, a11, a12, a13, a14);
    fun_666(0x654, 22, 1, r13_23, r8, r9, v16, a7, a8, a9, a10, a11, a12, a13, a14);
    fun_556(rbx24, 22, 1, r13_23, r8, r9);
    fun_55f(v16, 22, 1, r13_23, r8, r9);
    fun_567(a8, 22, 1, r13_23, r8, r9, v16);
    fun_56f(a7, 22, 1, r13_23, r8, r9, v16);
    goto a15;
}

void fun_567(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7) {
    int64_t r15_8;
    int64_t v9;

    fun_56f(r15_8, rsi, rdx, rcx, r8, r9, __return_address());
    goto v9;
}

void fun_154() {
    int64_t rax1;
    int32_t r12d2;
    int64_t rcx3;
    int32_t ebp4;
    int32_t r12d5;
    int32_t r12d6;
    int64_t rdx7;
    int32_t ebp8;
    int32_t ebp9;
    int64_t rsi10;
    int32_t r12d11;
    int32_t r12d12;
    int64_t rdx13;
    int64_t rsi14;
    int32_t ebp15;
    int32_t ebp16;
    int1_t less_or_equal17;
    int32_t r12d18;
    int32_t r12d19;
    int64_t rdx20;
    int32_t ebp21;
    int32_t ebp22;
    int64_t rsi23;
    int32_t ebp24;
    int32_t ebp25;
    int64_t rdx26;
    int32_t r12d27;
    int32_t r12d28;
    int64_t rsi29;
    int32_t ebp30;
    int32_t ebp31;
    int64_t rdx32;
    int64_t rsi33;
    int32_t r12d34;
    int32_t r12d35;
    int1_t less_or_equal36;
    int32_t r12d37;
    int32_t r12d38;
    int64_t rdx39;
    int32_t ebp40;
    int32_t ebp41;
    int64_t rsi42;
    int64_t v43;

    __asm__("movss xmm10, [rsp+0x3c]");
    __asm__("movaps xmm9, [rsp+0x10]");
    __asm__("movss xmm8, [rsp+0x20]");
    __asm__("xorps xmm0, [rip+0x0]");
    *reinterpret_cast<int32_t*>(&rax1) = r12d2;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax1) + 4) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(&rcx3) = ebp4;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx3) + 4) = reinterpret_cast<int32_t>(fputc);
    if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(r12d5 < reinterpret_cast<int32_t>(fputc) == fputc)) | reinterpret_cast<uint1_t>(r12d6 == fputc))) {
        *reinterpret_cast<int32_t*>(&rdx7) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx7) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(ebp8 < reinterpret_cast<int32_t>(fputc) == fputc)) | reinterpret_cast<uint1_t>(ebp9 == fputc))) {
                __asm__("xorps xmm2, xmm2");
                *reinterpret_cast<int32_t*>(&rsi10) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi10) + 4) = reinterpret_cast<int32_t>(fputc);
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
                    ++rsi10;
                    __asm__("movaps xmm3, xmm1");
                    __asm__("movaps xmm1, xmm4");
                } while (rsi10 != rcx3);
            }
            ++rdx7;
        } while (rdx7 != rax1);
    }
    __asm__("movss xmm6, [rsp+0xc]");
    __asm__("mulss xmm6, [rsp+0x8]");
    __asm__("movss xmm7, [rsp+0x50]");
    __asm__("mulss xmm7, [rsp+0x60]");
    if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(r12d11 < reinterpret_cast<int32_t>(fputc) == fputc)) | reinterpret_cast<uint1_t>(r12d12 == fputc))) {
        *reinterpret_cast<int32_t*>(&rdx13) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx13) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("xorps xmm4, xmm4");
            rsi14 = rcx3;
            __asm__("xorps xmm3, xmm3");
            __asm__("xorps xmm5, xmm5");
            __asm__("xorps xmm1, xmm1");
            if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(ebp15 < reinterpret_cast<int32_t>(fputc) == fputc)) | reinterpret_cast<uint1_t>(ebp16 == fputc))) {
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
                    less_or_equal17 = rsi14 <= 1;
                    --rsi14;
                    __asm__("movaps xmm5, xmm1");
                    __asm__("movaps xmm1, xmm2");
                } while (!less_or_equal17);
            }
            ++rdx13;
        } while (rdx13 != rax1);
    }
    if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(r12d18 < reinterpret_cast<int32_t>(fputc) == fputc)) | reinterpret_cast<uint1_t>(r12d19 == fputc))) {
        *reinterpret_cast<int32_t*>(&rdx20) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx20) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(ebp21 < reinterpret_cast<int32_t>(fputc) == fputc)) | reinterpret_cast<uint1_t>(ebp22 == fputc))) {
                *reinterpret_cast<int32_t*>(&rsi23) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi23) + 4) = reinterpret_cast<int32_t>(fputc);
                do {
                    __asm__("movss xmm1, [r8+rsi*4]");
                    __asm__("addss xmm1, [r8+rsi*4]");
                    __asm__("movss [rdi+rsi*4], xmm1");
                    ++rsi23;
                } while (rsi23 != rcx3);
            }
            ++rdx20;
        } while (rdx20 != rax1);
    }
    if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(ebp24 < reinterpret_cast<int32_t>(fputc) == fputc)) | reinterpret_cast<uint1_t>(ebp25 == fputc))) {
        *reinterpret_cast<int32_t*>(&rdx26) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx26) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(r12d27 < reinterpret_cast<int32_t>(fputc) == fputc)) | reinterpret_cast<uint1_t>(r12d28 == fputc))) {
                __asm__("xorps xmm2, xmm2");
                *reinterpret_cast<int32_t*>(&rsi29) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi29) + 4) = reinterpret_cast<int32_t>(fputc);
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
                    ++rsi29;
                    __asm__("movaps xmm3, xmm1");
                    __asm__("movaps xmm1, xmm4");
                } while (rsi29 != rax1);
            }
            ++rdx26;
        } while (rdx26 != rcx3);
    }
    if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(ebp30 < reinterpret_cast<int32_t>(fputc) == fputc)) | reinterpret_cast<uint1_t>(ebp31 == fputc))) {
        *reinterpret_cast<int32_t*>(&rdx32) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx32) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("xorps xmm4, xmm4");
            rsi33 = rax1;
            __asm__("xorps xmm3, xmm3");
            __asm__("xorps xmm5, xmm5");
            __asm__("xorps xmm1, xmm1");
            if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(r12d34 < reinterpret_cast<int32_t>(fputc) == fputc)) | reinterpret_cast<uint1_t>(r12d35 == fputc))) {
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
                    less_or_equal36 = rsi33 <= 1;
                    --rsi33;
                } while (!less_or_equal36);
            }
            ++rdx32;
        } while (rdx32 != rcx3);
    }
    if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(r12d37 < reinterpret_cast<int32_t>(fputc) == fputc)) | reinterpret_cast<uint1_t>(r12d38 == fputc))) {
        *reinterpret_cast<int32_t*>(&rdx39) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx39) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            if (!(reinterpret_cast<uint1_t>(!reinterpret_cast<int1_t>(ebp40 < reinterpret_cast<int32_t>(fputc) == fputc)) | reinterpret_cast<uint1_t>(ebp41 == fputc))) {
                *reinterpret_cast<int32_t*>(&rsi42) = reinterpret_cast<int32_t>(fputc);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi42) + 4) = reinterpret_cast<int32_t>(fputc);
                do {
                    __asm__("movss xmm0, [r8+rsi*4]");
                    __asm__("addss xmm0, [r8+rsi*4]");
                    __asm__("movss [rdi+rsi*4], xmm0");
                    ++rsi42;
                } while (rsi42 != rcx3);
            }
            ++rdx39;
        } while (rdx39 != rax1);
    }
    goto v43;
}

int64_t fun_494(int64_t rdi, int64_t rsi) {
    int64_t v3;
    int64_t rax4;
    int64_t rax5;
    int64_t r14_6;
    int64_t rax7;
    int64_t r15_8;
    int64_t rax9;
    int64_t rdx10;
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
    rax5 = fun_4a7(0x870000, 4);
    r14_6 = rax5;
    rax7 = fun_4b9(0x870000, 4);
    r15_8 = rax7;
    *reinterpret_cast<int32_t*>(&rax9) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax9) + 4) = reinterpret_cast<int32_t>(fputc);
    __asm__("movss xmm0, [rip+0x0]");
    do {
        *reinterpret_cast<int32_t*>(&rdx10) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx10) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("xorps xmm1, xmm1");
            __asm__("cvtsi2ss xmm1, esi");
            __asm__("divss xmm1, xmm0");
            __asm__("movss [rsi+rdx*4], xmm1");
            ++rdx10;
        } while (rdx10 != 0x870);
        ++rax9;
    } while (rax9 != 0x1000);
    __asm__("movss xmm0, [rip+0x0]");
    *reinterpret_cast<int32_t*>(&rsi11) = 0x870;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi11) + 4) = reinterpret_cast<int32_t>(fputc);
    rdx12 = rbx13;
    rcx14 = v3;
    r8_15 = r14_6;
    r9_16 = r15_8;
    fun_540(0x1000, 0x870, rdx12, rcx14, r8_15, r9_16);
    if (ebp17 >= 43 && **r13_18 == fputc) {
        v19 = r15_8;
        v20 = r14_6;
        rax21 = g591;
        r13_22 = *rax21;
        rcx23 = r13_22;
        fun_5ad(0x59b, 22, 1, rcx23, r8_15, r9_16, v3, v19, v20, v24, v25, v26, v27, v28, v29);
        *reinterpret_cast<int32_t*>(&r15_30) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_30) + 4) = reinterpret_cast<int32_t>(fputc);
        fun_5c8(r13_22, 0x5b4, 0x5bb, rcx23, r8_15, r9_16, v3, v19, v20, v31, v32, v33, v34, v35, v36);
        do {
            r12_37 = r15_30 * 0x870;
            *reinterpret_cast<int32_t*>(&r14_38) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_38) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("ror eax, 0x2");
                if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r14_38 + r12_37) * 0xcccccccd) <= 0xccccccc) {
                    fun_5fb(10, r13_22, 0x5bb, rcx23, r8_15, r9_16, v3, v19, v20, v39, v40, v41, v42, v43, v44);
                }
                __asm__("movss xmm0, [rax+r14*4]");
                __asm__("cvtss2sd xmm0, xmm0");
                fun_61d(r13_22, 0x5cf, 0x5bb, rcx23, r8_15, r9_16, v3, v19, v20, v45, v46, v47, v48, v49, v50);
                ++r14_38;
            } while (r14_38 != 0x870);
            ++r15_30;
        } while (r15_30 != 0x1000);
        fun_64d(r13_22, 0x63c, 0x643, rcx23, r8_15, r9_16, v3, v19, v20, v51, v52, v53, v54, v55, v56);
        *reinterpret_cast<int32_t*>(&rsi11) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi11) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx12) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx12) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx14 = r13_22;
        fun_666(0x654, 22, 1, rcx14, r8_15, r9_16, v3, v19, v20, v57, v58, v59, v60, v61, v62);
        r14_6 = v20;
        r15_8 = v19;
    }
    fun_556(rbx63, rsi11, rdx12, rcx14, r8_15, r9_16);
    fun_55f(v3, rsi11, rdx12, rcx14, r8_15, r9_16);
    fun_567(r14_6, rsi11, rdx12, rcx14, r8_15, r9_16, v3);
    fun_56f(r15_8, rsi11, rdx12, rcx14, r8_15, r9_16, v3);
    goto v64;
}

void fun_56f(int64_t rdi, int64_t rsi, int64_t rdx, int64_t rcx, int64_t r8, int64_t r9, int64_t a7) {
    int64_t v8;

    goto v8;
}

int64_t fun_4a7(int64_t rdi, int64_t rsi) {
    int64_t v3;
    int64_t r14_4;
    int64_t rax5;
    int64_t rax6;
    int64_t r15_7;
    int64_t rax8;
    int64_t rdx9;
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
    rax6 = fun_4b9(0x870000, 4);
    r15_7 = rax6;
    *reinterpret_cast<int32_t*>(&rax8) = reinterpret_cast<int32_t>(fputc);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax8) + 4) = reinterpret_cast<int32_t>(fputc);
    __asm__("movss xmm0, [rip+0x0]");
    do {
        *reinterpret_cast<int32_t*>(&rdx9) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx9) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("xorps xmm1, xmm1");
            __asm__("cvtsi2ss xmm1, esi");
            __asm__("divss xmm1, xmm0");
            __asm__("movss [rsi+rdx*4], xmm1");
            ++rdx9;
        } while (rdx9 != 0x870);
        ++rax8;
    } while (rax8 != 0x1000);
    __asm__("movss xmm0, [rip+0x0]");
    *reinterpret_cast<int32_t*>(&rsi10) = 0x870;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi10) + 4) = reinterpret_cast<int32_t>(fputc);
    rdx11 = rbx12;
    rcx13 = v3;
    r8_14 = r14_4;
    r9_15 = r15_7;
    fun_540(0x1000, 0x870, rdx11, rcx13, r8_14, r9_15);
    if (ebp16 >= 43 && **r13_17 == fputc) {
        v18 = r15_7;
        v19 = r14_4;
        rax20 = g591;
        r13_21 = *rax20;
        rcx22 = r13_21;
        fun_5ad(0x59b, 22, 1, rcx22, r8_14, r9_15, v3, v18, v19, v23, v24, v25, v26, v27, v28);
        *reinterpret_cast<int32_t*>(&r15_29) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_29) + 4) = reinterpret_cast<int32_t>(fputc);
        fun_5c8(r13_21, 0x5b4, 0x5bb, rcx22, r8_14, r9_15, v3, v18, v19, v30, v31, v32, v33, v34, v35);
        do {
            r12_36 = r15_29 * 0x870;
            *reinterpret_cast<int32_t*>(&r14_37) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_37) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("ror eax, 0x2");
                if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r14_37 + r12_36) * 0xcccccccd) <= 0xccccccc) {
                    fun_5fb(10, r13_21, 0x5bb, rcx22, r8_14, r9_15, v3, v18, v19, v38, v39, v40, v41, v42, v43);
                }
                __asm__("movss xmm0, [rax+r14*4]");
                __asm__("cvtss2sd xmm0, xmm0");
                fun_61d(r13_21, 0x5cf, 0x5bb, rcx22, r8_14, r9_15, v3, v18, v19, v44, v45, v46, v47, v48, v49);
                ++r14_37;
            } while (r14_37 != 0x870);
            ++r15_29;
        } while (r15_29 != 0x1000);
        fun_64d(r13_21, 0x63c, 0x643, rcx22, r8_14, r9_15, v3, v18, v19, v50, v51, v52, v53, v54, v55);
        *reinterpret_cast<int32_t*>(&rsi10) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi10) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx11) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx11) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx13 = r13_21;
        fun_666(0x654, 22, 1, rcx13, r8_14, r9_15, v3, v18, v19, v56, v57, v58, v59, v60, v61);
        r14_4 = v19;
        r15_7 = v18;
    }
    fun_556(rbx62, rsi10, rdx11, rcx13, r8_14, r9_15);
    fun_55f(v3, rsi10, rdx11, rcx13, r8_14, r9_15);
    fun_567(r14_4, rsi10, rdx11, rcx13, r8_14, r9_15, v3);
    fun_56f(r15_7, rsi10, rdx11, rcx13, r8_14, r9_15, v3);
    goto v63;
}

int64_t fun_4b9(int64_t rdi, int64_t rsi) {
    int64_t v3;
    int64_t r15_4;
    int64_t rax5;
    int64_t rax6;
    int64_t rdx7;
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
    __asm__("movss xmm0, [rip+0x0]");
    do {
        *reinterpret_cast<int32_t*>(&rdx7) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx7) + 4) = reinterpret_cast<int32_t>(fputc);
        do {
            __asm__("xorps xmm1, xmm1");
            __asm__("cvtsi2ss xmm1, esi");
            __asm__("divss xmm1, xmm0");
            __asm__("movss [rsi+rdx*4], xmm1");
            ++rdx7;
        } while (rdx7 != 0x870);
        ++rax6;
    } while (rax6 != 0x1000);
    __asm__("movss xmm0, [rip+0x0]");
    *reinterpret_cast<int32_t*>(&rsi8) = 0x870;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi8) + 4) = reinterpret_cast<int32_t>(fputc);
    rdx9 = rbx10;
    rcx11 = v3;
    r8_12 = r14_13;
    r9_14 = r15_4;
    fun_540(0x1000, 0x870, rdx9, rcx11, r8_12, r9_14);
    if (ebp15 >= 43 && **r13_16 == fputc) {
        v17 = r15_4;
        v18 = r14_19;
        rax20 = g591;
        r13_21 = *rax20;
        rcx22 = r13_21;
        fun_5ad(0x59b, 22, 1, rcx22, r8_12, r9_14, v3, v17, v18, v23, v24, v25, v26, v27, v28);
        *reinterpret_cast<int32_t*>(&r15_29) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_29) + 4) = reinterpret_cast<int32_t>(fputc);
        fun_5c8(r13_21, 0x5b4, 0x5bb, rcx22, r8_12, r9_14, v3, v17, v18, v30, v31, v32, v33, v34, v35);
        do {
            r12_36 = r15_29 * 0x870;
            *reinterpret_cast<int32_t*>(&r14_37) = reinterpret_cast<int32_t>(fputc);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_37) + 4) = reinterpret_cast<int32_t>(fputc);
            do {
                __asm__("ror eax, 0x2");
                if (reinterpret_cast<uint32_t>(static_cast<int32_t>(r14_37 + r12_36) * 0xcccccccd) <= 0xccccccc) {
                    fun_5fb(10, r13_21, 0x5bb, rcx22, r8_12, r9_14, v3, v17, v18, v38, v39, v40, v41, v42, v43);
                }
                __asm__("movss xmm0, [rax+r14*4]");
                __asm__("cvtss2sd xmm0, xmm0");
                fun_61d(r13_21, 0x5cf, 0x5bb, rcx22, r8_12, r9_14, v3, v17, v18, v44, v45, v46, v47, v48, v49);
                ++r14_37;
            } while (r14_37 != 0x870);
            ++r15_29;
        } while (r15_29 != 0x1000);
        fun_64d(r13_21, 0x63c, 0x643, rcx22, r8_12, r9_14, v3, v17, v18, v50, v51, v52, v53, v54, v55);
        *reinterpret_cast<int32_t*>(&rsi8) = 22;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi8) + 4) = reinterpret_cast<int32_t>(fputc);
        *reinterpret_cast<int32_t*>(&rdx9) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx9) + 4) = reinterpret_cast<int32_t>(fputc);
        rcx11 = r13_21;
        fun_666(0x654, 22, 1, rcx11, r8_12, r9_14, v3, v17, v18, v56, v57, v58, v59, v60, v61);
        r14_62 = v18;
        r15_4 = v17;
    }
    fun_556(rbx63, rsi8, rdx9, rcx11, r8_12, r9_14);
    fun_55f(v3, rsi8, rdx9, rcx11, r8_12, r9_14);
    fun_567(r14_62, rsi8, rdx9, rcx11, r8_12, r9_14, v3);
    fun_56f(r15_4, rsi8, rdx9, rcx11, r8_12, r9_14, v3);
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
    __asm__("subss xmm1, xmm0");
    __asm__("movss [rsp+0x10], xmm1");
    __asm__("movaps xmm0, [rsp+0x20]");
    fun_57();
}

void fun_e4() {
    fun_ef();
}

void submain(int32_t edi, int64_t rsi) {
    fun_482(0x870000, 4);
}

