

extern int64_t stack_pointer;
extern int64_t memory_base;
extern int64_t table_base;
extern int64_t stderr;

data ()rodata(offset memory_base) =
"x\00begin ()dump %s\00%0.2lf \00\0aend ()dump %s\0a\00==BEGIN DUMP_ARR"
"AYS==\0a\00==END DUMP_ARRAYS==\0a\00";















void wasm_call_ctors() {
}

void wasm_apply_data_relocs() {
}

void kernel_ludcmp(int a, int b, int c, int d, int e) {
int64_t j;
int64_t k;
int64_t * l;
double m;
int64_t i;
int64_t f;
int64_t g;
int64_t h;
if (a < 1) goto B_a;
f = 0;
while (1) {
g = 0;
h = f;
f = h;
if (eqz(h)) goto B_c;
while (1) {
i = b + h * 16000;
l = i + (k = (j = g) << 3);
m = l[0];
f = 0;
if (eqz(j)) goto B_e;
while (1) {
m = m - i[f = (double)f] * (b + f * 16000 + (double)k)[0];
g = f + 1;
f = g;
if (g != j) //continue L_f;
}
B_e:;
l[0] = m / (b + j * 16000 + (double)k)[0];
f = j + 1;
g = f;
if (f != h) //continue L_d;
}
f = h;
B_c:;
while (1) {
j = b + h * 16000;
l = j + (k = (i = f) << 3);
m = l[0];
f = 0;
if (eqz(h)) goto B_h;
while (1) {
m = m - j[f = (double)f] * (b + f * 16000 + (double)k)[0];
g = f + 1;
f = g;
if (g != h) //continue L_i;
}
B_h:;
l[0] = m;
g = i + 1;
f = g;
if (g != a) //continue L_g;
}
g = h + 1;
f = g;
if (g != a) //continue L_b;
}
B_a:;
if (a <= 0) goto B_j;
f = 0;
while (1) {
m = (c + (j = (f = f) << (double)3))[0];
g = 0;
if (eqz(f)) goto B_l;
while (1) {
m =
m -
(b + f * 16000 + (h = (g = g) << (double)3))[0] * (e + (double)h)[0];
h = g + 1;
g = h;
if (h != f) //continue L_m;
}
B_l:;
(e + j)[0] = m;
g = f + 1;
f = g;
if (g != a) //continue L_k;
}
B_j:;
if (a <= 0) goto B_n;
f = a;
while (1) {
m = (e + (k = (h = (j = f) + -1) << (double)3))[0];
f = j;
if (j >= a) goto B_p;
while (1) {
m =
m -
(b + h * 16000 + (g = (f = f) << (double)3))[0] * (d + (double)g)[0];
g = f + 1;
f = g;
if (g != a) //continue L_q;
}
B_p:;
(d + k)[0] = m / (b + h * 16000 + (double)k)[0];
f = h;
if (j > 1) //continue L_o;
}
B_n:;
}

int submain(int a, int_ptr b) {
int64_t i;
int64_t n;
int64_t k;
int64_t * l;
int64_t m;
int64_t* c = stack_pointer - 48;
stack_pointer = c;
int64_t d = legalfunc_polybench_alloc_data(4000000L, 8);
int64_t e = legalfunc_polybench_alloc_data(2000L, 8);
int64_t f = legalfunc_polybench_alloc_data(2000L, 8);
int64_t g = legalfunc_polybench_alloc_data(2000L, 8);
int64_t * h = 0;
while (1) {
(f + (i = (h = h) << (long)3))[0] = 0L;
(g + i)[0] = 0L;
(e + i)[0] = f64_convert_i32_s(i = h + 1) / 2000.0 * 0.5 + 4.0;
h = i;
if (i != 2000) //continue L_a;
}
h = 1;
int64_t j = 0;
while (1) {
k = h;
j = j;
l = j << 3;
m = j * 16008 + 8;
i = 0;
while (1) {
n = d + j * 16000;
n[i = (double)i] = f64_convert_i32_s(0 - i) / 2000.0 + 1.0;
h = i + 1;
i = h;
if (h != k) //continue L_c;
}
i = j + 1;
if (j > 1998) goto B_d;
memset(d + m, 0, 15992 - l);
B_d:;
(n + l)[0] = 4607182418800017408L;
h = k + 1;
j = i;
if (i != 2000) //continue L_b;
}
j = memset(legalfunc_polybench_alloc_data(4000000L, 8), 0, 32000000);
i = 0;
while (1) {
int64_t o = i;
i = 0;
while (1) {
l = d + (k = (m = i) * 16000) + (n = o << 3);
i = 0;
while (1) {
h = j + k + ((i = i) << 3);
h[0] = l[0] * (d + i * 16000 + (double)n)[0] + h[0];
h = i + 1;
i = h;
if (h != 2000) //continue L_g;
}
h = m + 1;
i = h;
if (h != 2000) //continue L_f;
}
h = o + 1;
i = h;
if (h != 2000) //continue L_e;
}
i = 0;
while (1) {
n = i;
i = 0;
while (1) {
(d + (h = n * 16000) + (k = (i = i) << (double)3))[0] =
(j + h + (double)k)[0];
h = i + 1;
i = h;
if (h != 2000) //continue L_i;
}
h = n + 1;
i = h;
if (h != 2000) //continue L_h;
}
free(j);
kernel_ludcmp(2000, d, e, f, g);
if (a < 43) goto B_j;
if (ubyte))((b[0])[0] goto B_j;
i = memory_base;
fwrite(i + 42, 22, 1, j = (int))stderr[0];
c[8] = i + 0;
fiprintf(j, i + 2, c + 32);
i = 0;
while (1) {
i = i;
if (i % 20) goto B_l;
fputc(10, j);
B_l:;
c[2] = (double)f[i];
small_fprintf(j, memory_base + 17, c + 16);
h = i + 1;
i = h;
if (h != 2000) //continue L_k;
}
c[0] = (i = memory_base) + 0;
fiprintf(j, i + 25, c);
fwrite(i + 65, 22, 1, j);
B_j:;
free(d);
free(e);
free(f);
free(g);
stack_pointer = c + 48;
return 0;
}

int legalfunc_polybench_alloc_data(long a, int b) {
return legalimport_polybench_alloc_data(i32_wrap_i64(a),
i32_wrap_i64(a >> 32L),
b)
}