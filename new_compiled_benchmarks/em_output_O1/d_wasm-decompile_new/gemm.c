

extern int64_t stack_pointer;
extern int64_t memory_base;
extern int64_t table_base;
extern int64_t stderr;

data ()rodata(offset memory_base) =
"begin ()dump %s\00C\00%0.2lf \00\0aend ()dump %s\0a\00==BEGIN DUMP_ARR"
"AYS==\0a\00==END DUMP_ARRAYS==\0a\00";













void wasm_call_ctors() {
}

void wasm_apply_data_relocs() {
}

void kernel_gemm(int a, int b, int c, double d, double e, int f, int g, int h) {
int64_t * k;
if (a < 1) goto B_a;
int64_t i = 0;
while (1) {
int64_t j = i;
i = 0;
if (b <= 0) goto B_c;
while (1) {
k = f + j * 8800 + ((i = i) << 3);
k[0] = k[0] * e;
k = i + 1;
i = k;
if (k != b) //continue L_d;
}
B_c:;
i = 0;
if (c <= 0) goto B_e;
while (1) {
int64_t l = i;
if (b < 1) goto B_g;
int64_t * m = g + j * 9600 + (l << 3);
i = 0;
while (1) {
int64_t * n = f + j * 8800 + (k = (i = i) << 3);
n[0] = m[0] * d * (h + l * 8800 + (double)k)[0] + n[0];
k = i + 1;
i = k;
if (k != b) //continue L_h;
}
B_g:;
k = l + 1;
i = k;
if (k != c) //continue L_f;
}
B_e:;
k = j + 1;
i = k;
if (k != a) //continue L_b;
}
B_a:;
}

int submain(int a, int_ptr b) {
int64_t * h;
int64_t * i;
int64_t l;
int64_t k;
int64_t* c = stack_pointer - 48;
stack_pointer = c;
int64_t d = legalfunc_polybench_alloc_data(1100000L, 8);
int64_t e = legalfunc_polybench_alloc_data(1200000L, 8);
int64_t f = legalfunc_polybench_alloc_data(1320000L, 8);
int64_t g = 0;
while (1) {
h = g;
g = 0;
while (1) {
(d + h * 8800)[g = (double)g] =
f64_convert_i32_s((g * h + 1) % 1000) / 1000.0;
i = g + 1;
g = i;
if (i != 1100) //continue L_b;
}
h = h + 1;
g = h;
if (h != 1000) //continue L_a;
}
g = 0;
while (1) {
h = g;
i = 0;
while (1) {
(e + h * 9600)[g = (double)i] =
f64_convert_i32_s((g = g + 1) * h % 1200) / 1200.0;
i = g;
if (g != 1200) //continue L_d;
}
h = h + 1;
g = h;
if (h != 1000) //continue L_c;
}
g = 0;
while (1) {
h = g;
g = 0;
while (1) {
(f + h * 8800)[g = (double)g] =
f64_convert_i32_s((g + 2) * h % 1100) / 1100.0;
i = g + 1;
g = i;
if (i != 1100) //continue L_f;
}
h = h + 1;
g = h;
if (h != 1200) //continue L_e;
}
g = 0;
while (1) {
int64_t j = g;
g = 0;
while (1) {
k = d + j * 8800;
h = k + ((g = g) << 3);
h[0] = h[0] * 1.2;
h = g + 1;
g = h;
if (h != 1100) //continue L_h;
}
g = 0;
while (1) {
int64_t * m = e + j * 9600 + ((l = g) << 3);
g = 0;
while (1) {
i = k + (h = (g = g) << 3);
i[0] = m[0] * 1.5 * (f + l * 8800 + (double)h)[0] + i[0];
h = g + 1;
g = h;
if (h != 1100) //continue L_j;
}
h = l + 1;
g = h;
if (h != 1200) //continue L_i;
}
h = j + 1;
g = h;
if (h != 1000) //continue L_g;
}
if (a < 43) goto B_k;
if (ubyte))((b[0])[0] goto B_k;
g = memory_base;
fwrite(g + 42, 22, 1, l = (int))stderr[0];
c[8] = g + 15;
fiprintf(l, g + 0, c + 32);
g = 0;
while (1) {
i = g;
k = i * 1000;
g = 0;
while (1) {
g = g;
if ((g + k) % 20) goto B_n;
fputc(10, l);
B_n:;
c[2] = (d + i * (double)8800)[g];
small_fprintf(l, memory_base + 17, c + 16);
h = g + 1;
g = h;
if (h != 1100) //continue L_m;
}
h = i + 1;
g = h;
if (h != 1000) //continue L_l;
}
c[0] = (g = memory_base) + 15;
fiprintf(l, g + 25, c);
fwrite(g + 65, 22, 1, l);
B_k:;
free(d);
free(e);
free(f);
stack_pointer = c + 48;
return 0;
}

int legalfunc_polybench_alloc_data(long a, int b) {
return legalimport_polybench_alloc_data(i32_wrap_i64(a),
i32_wrap_i64(a >> 32L),
b)
}