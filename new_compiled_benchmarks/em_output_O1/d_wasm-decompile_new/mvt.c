

extern int64_t stack_pointer;
extern int64_t memory_base;
extern int64_t table_base;
extern int64_t stderr;

data ()rodata(offset memory_base) =
"begin ()dump %s\00x2\00x1\00%0.2lf \00\0aend ()dump %s\0a\00==BEGIN DU"
"MP_ARRAYS==\0a\00==END DUMP_ARRAYS==\0a\00";













void wasm_call_ctors() {
}

void wasm_apply_data_relocs() {
}

void kernel_mvt(int a, int b, int c, int d, int e, int f) {
int64_t h;
int64_t k;
int64_t g;
int64_t * i;
double j;
if (a < 1) goto B_a;
g = 0;
while (1) {
i = b + ((h = g) << 3);
j = i[0];
g = 0;
while (1) {
i[0] =
(j =
(f + h * 16000 + (k = (g = g) << (double)3))[0] * (d + (double)k)[0] +
j);
j = j;
k = g + 1;
g = k;
if (k != a) //continue L_c;
}
k = h + 1;
g = k;
if (k != a) //continue L_b;
}
B_a:;
if (a <= 0) goto B_d;
g = 0;
while (1) {
i = c + (h = (d = g) << 3);
j = i[0];
g = 0;
while (1) {
i[0] = (j = (f + (g = g) * 16000 + (double)h)[0] * (double)e[g] + j);
j = j;
k = g + 1;
g = k;
if (k != a) //continue L_f;
}
k = d + 1;
g = k;
if (k != a) //continue L_e;
}
B_d:;
}

int submain(int a, int_ptr b) {
int64_t j;
int64_t * k;
int64_t l;
int64_t m;
double n;
int64_t* c = stack_pointer - 96;
stack_pointer = c;
int64_t d = legalfunc_polybench_alloc_data(4000000L, 8);
int64_t e = legalfunc_polybench_alloc_data(2000L, 8);
int64_t f = legalfunc_polybench_alloc_data(2000L, 8);
int64_t g = legalfunc_polybench_alloc_data(2000L, 8);
int64_t h = legalfunc_polybench_alloc_data(2000L, 8);
int64_t i = 0;
while (1) {
(e + (i = (j = i) << (double)3))[0] = f64_convert_i32_s(j) / 2000.0;
(f + (double)i)[0] =
f64_convert_i32_s(select__if(0, k = j + 1, l = k == 2000)) / 2000.0;
(g + i)[0] = f64_convert_i32_s((j + 3) % 2000) / 2000.0;
(h + i)[0] = f64_convert_i32_s((j + 4) % 2000) / 2000.0;
i = 0;
while (1) {
(d + j * 16000)[i = (double)i] =
f64_convert_i32_s(i * j % 2000) / 2000.0;
m = i + 1;
i = m;
if (m != 2000) //continue L_b;
}
i = k;
if (eqz(l)) //continue L_a;
}
i = 0;
while (1) {
k = e + ((m = i) << 3);
n = k[0];
i = 0;
while (1) {
k[0] =
(n =
(d + m * 16000 + (j = (i = i) << (double)3))[0] * (g + (double)j)[0] +
n);
n = n;
j = i + 1;
i = j;
if (j != 2000) //continue L_d;
}
j = m + 1;
i = j;
if (j != 2000) //continue L_c;
}
i = 0;
while (1) {
k = f + (m = (l = i) << 3);
n = k[0];
i = 0;
while (1) {
k[0] = (n = (d + (i = i) * 16000 + (double)m)[0] * (double)h[i] + n);
n = n;
j = i + 1;
i = j;
if (j != 2000) //continue L_f;
}
j = l + 1;
i = j;
if (j != 2000) //continue L_e;
}
if (a < 43) goto B_g;
if (ubyte))((b[0])[0] goto B_g;
j = memory_base;
fwrite(j + 46, 22, 1, i = (int))stderr[0];
c[20] = j + 18;
fiprintf(i, j + 0, c + 80);
j = 0;
while (1) {
j = j;
if (j % 20) goto B_i;
fputc(10, i);
B_i:;
c[8] = (double)e[j];
small_fprintf(i, memory_base + 21, c + 64);
m = j + 1;
j = m;
if (m != 2000) //continue L_h;
}
c[12] = (j = memory_base) + 18;
fiprintf(i, j + 29, c + 48);
c[8] = j + 15;
fiprintf(i, j + 0, c + 32);
j = 0;
while (1) {
j = j;
if (j % 20) goto B_k;
fputc(10, i);
B_k:;
c[2] = (double)f[j];
small_fprintf(i, memory_base + 21, c + 16);
m = j + 1;
j = m;
if (m != 2000) //continue L_j;
}
c[0] = (j = memory_base) + 15;
fiprintf(i, j + 29, c);
fwrite(j + 69, 22, 1, i);
B_g:;
free(d);
free(e);
free(f);
free(g);
free(h);
stack_pointer = c + 96;
return 0;
}

int legalfunc_polybench_alloc_data(long a, int b) {
return legalimport_polybench_alloc_data(i32_wrap_i64(a),
i32_wrap_i64(a >> 32L),
b)
}