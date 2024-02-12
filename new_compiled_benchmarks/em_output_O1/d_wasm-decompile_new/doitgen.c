

extern int64_t stack_pointer;
extern int64_t memory_base;
extern int64_t table_base;
extern int64_t stderr;

data ()rodata(offset memory_base) =
"begin ()dump %s\00A\00%0.2lf \00\0aend ()dump %s\0a\00==BEGIN DUMP_ARR"
"AYS==\0a\00==END DUMP_ARRAYS==\0a\00";













void wasm_call_ctors() {
}

void wasm_apply_data_relocs() {
}

void kernel_doitgen(int a, int b, int c, int d, int e, int f) {
int64_t k;
int64_t l;
int64_t o;
if (a < 1) goto B_a;
int64_t g = b < 1;
int64_t h = 0;
while (1) {
int64_t i = h;
h = 0;
if (g) goto B_c;
while (1) {
int64_t j = h;
h = 0;
if (c <= 0) goto B_e;
while (1) {
int64_t m = f + (l = (k = h) << 3);
m[0] = 0L;
double n = 0.0;
h = 0;
while (1) {
(double)m[0] =
(n = (d + i * 179200 + j * 1280)[h = (double)h] *
(e + h * 1280 + (double)l)[0] +
n);
n = n;
o = h + 1;
h = o;
if (o != c) //continue L_g;
}
o = k + 1;
h = o;
if (o != c) //continue L_f;
}
B_e:;
h = 0;
if (c <= 0) goto B_h;
while (1) {
(d + i * 179200 + j * 1280 + (o = (h = h) << (double)3))[0] =
(f + (double)o)[0];
o = h + 1;
h = o;
if (o != c) //continue L_i;
}
B_h:;
o = j + 1;
h = o;
if (o != b) //continue L_d;
}
B_c:;
o = i + 1;
h = o;
if (o != a) //continue L_b;
}
B_a:;
}

int submain(int a, int_ptr b) {
int64_t k;
int64_t i;
int64_t n;
int64_t h;
int64_t j;
int64_t m;
int64_t l;
int64_t* c = stack_pointer - 48;
stack_pointer = c;
int64_t d = legalfunc_polybench_alloc_data(3360000L, 8);
int64_t e = legalfunc_polybench_alloc_data(160L, 8);
int64_t f = legalfunc_polybench_alloc_data(25600L, 8);
int64_t g = 0;
while (1) {
h = g;
g = 0;
while (1) {
i = g;
j = i * h;
g = 0;
while (1) {
(d + h * 179200 + i * 1280)[g = (double)g] =
f64_convert_i32_s((g + j) % 160) / 160.0;
k = g + 1;
g = k;
if (k != 160) //continue L_c;
}
k = i + 1;
g = k;
if (k != 140) //continue L_b;
}
k = h + 1;
g = k;
if (k != 150) //continue L_a;
}
g = 0;
while (1) {
k = g;
g = 0;
while (1) {
(f + k * 1280)[g = (double)g] = f64_convert_i32_s(g * k % 160) / 160.0;
i = g + 1;
g = i;
if (i != 160) //continue L_e;
}
k = k + 1;
g = k;
if (k != 160) //continue L_d;
}
g = 0;
while (1) {
l = g;
g = 0;
while (1) {
m = g;
g = 0;
while (1) {
h = e + (i = (n = g) << 3);
h[0] = 0L;
double o = 0.0;
g = 0;
while (1) {
(double)h[0] =
(o = (j = d + l * 179200 + m * 1280)[g = (double)g] *
(f + g * 1280 + (double)i)[0] +
o);
o = o;
k = g + 1;
g = k;
if (k != 160) //continue L_i;
}
k = n + 1;
g = k;
if (k != 160) //continue L_h;
}
g = 0;
while (1) {
(j + (k = (g = g) << (double)3))[0] = (e + (double)k)[0];
k = g + 1;
g = k;
if (k != 160) //continue L_j;
}
k = m + 1;
g = k;
if (k != 140) //continue L_g;
}
k = l + 1;
g = k;
if (k != 150) //continue L_f;
}
if (a < 43) goto B_k;
if (ubyte))((b[0])[0] goto B_k;
g = memory_base;
fwrite(g + 42, 22, 1, h = (int))stderr[0];
c[8] = g + 15;
fiprintf(h, g + 0, c + 32);
g = 0;
while (1) {
m = g;
l = m * 22400;
g = 0;
while (1) {
i = g;
j = i * 160 + l;
g = 0;
while (1) {
if ((j + (g = g)) % 20) goto B_o;
fputc(10, h);
B_o:;
c[2] = (d + m * 179200 + i * (double)1280)[g];
small_fprintf(h, memory_base + 17, c + 16);
k = g + 1;
g = k;
if (k != 160) //continue L_n;
}
k = i + 1;
g = k;
if (k != 140) //continue L_m;
}
k = m + 1;
g = k;
if (k != 150) //continue L_l;
}
c[0] = (g = memory_base) + 15;
fiprintf(h, g + 25, c);
fwrite(g + 65, 22, 1, h);
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