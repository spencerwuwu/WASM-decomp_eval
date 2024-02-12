

extern int64_t stack_pointer;
extern int64_t memory_base;
extern int64_t table_base;
extern int64_t stderr;

data ()rodata(offset memory_base) =
"cov\00begin ()dump %s\00%0.2lf \00\0aend ()dump %s\0a\00==BEGIN DUMP_A"
"RRAYS==\0a\00==END DUMP_ARRAYS==\0a\00";













void wasm_call_ctors() {
}

void wasm_apply_data_relocs() {
}

void kernel_covariance(int a, int b, double c, int d, int e, int f) {
int64_t i;
int64_t j;
int64_t m;
int64_t h;
int64_t k;
int64_t g;
double l;
if (a < 1) goto B_a;
g = b < 1;
h = 0;
while (1) {
k = f + (j = (i = h) << 3);
k[0] = 0L;
if (g) goto B_c;
l = (double)k[0];
h = 0;
while (1) {
k[0] = (l = (d + (h = h) * 9600 + (double)j)[0] + l);
l = l;
m = h + 1;
h = m;
if (m != b) //continue L_d;
}
B_c:;
k[0] = (double)k[0] / c;
m = i + 1;
h = m;
if (m != a) //continue L_b;
}
B_a:;
if (b < 1) goto B_e;
h = 0;
while (1) {
j = h;
h = 0;
if (a <= 0) goto B_g;
while (1) {
k = d + j * 9600 + (m = (h = h) << 3);
k[0] = (double)k[0] - (f + (double)m)[0];
m = h + 1;
h = m;
if (m != a) //continue L_h;
}
B_g:;
m = j + 1;
h = m;
if (m != b) //continue L_f;
}
B_e:;
if (a < 1) goto B_i;
c = c + -1.0;
g = b < 1;
h = 0;
while (1) {
j = h;
h = j;
while (1) {
k = e + j * 9600 + (f = (i = h) << 3);
k[0] = 0L;
if (g) goto B_l;
l = (double)k[0];
h = 0;
while (1) {
(double)k[0] =
(l = (m = d + (h = h) * (double)9600)[j] * (m + (double)f)[0] + l);
l = l;
m = h + 1;
h = m;
if (m != b) //continue L_m;
}
B_l:;
k[0] = (l = (double)k[0] / c);
(e + i * 9600)[j] = l;
m = i + 1;
h = m;
if (m < a) //continue L_k;
}
m = j + 1;
h = m;
if (m != a) //continue L_j;
}
B_i:;
}

int submain(int a, int_ptr b) {
int64_t j;
int64_t k;
int64_t l;
int64_t h;
double i;
double m;
int64_t n;
int64_t o;
int64_t* c = stack_pointer - 48;
stack_pointer = c;
int64_t d = legalfunc_polybench_alloc_data(1680000L, 8);
int64_t e = legalfunc_polybench_alloc_data(1440000L, 8);
int64_t f = legalfunc_polybench_alloc_data(1200L, 8);
int64_t g = 0;
while (1) {
h = g;
i = f64_convert_i32_s(h);
g = 0;
while (1) {
(d + h * 9600)[g = (double)g] = i * f64_convert_i32_s(g) / 1200.0;
j = g + 1;
g = j;
if (j != 1200) //continue L_b;
}
j = h + 1;
g = j;
if (j != 1400) //continue L_a;
}
g = 0;
while (1) {
h = f + (l = (k = g) << 3);
h[0] = 0L;
i = 0.0;
g = 0;
while (1) {
h[0] = (m = i + (d + (g = g) * 9600 + (double))l)[0];
i = m;
j = g + 1;
g = j;
if (j != 1400) //continue L_d;
}
h[0] = m / 1400.0;
j = k + 1;
g = j;
if (j != 1200) //continue L_c;
}
g = 0;
while (1) {
l = g;
g = 0;
while (1) {
h = d + l * 9600 + (j = (g = g) << 3);
h[0] = (double)h[0] - (f + (double)j)[0];
j = g + 1;
g = j;
if (j != 1200) //continue L_f;
}
j = l + 1;
g = j;
if (j != 1400) //continue L_e;
}
g = 0;
while (1) {
l = g;
g = l;
while (1) {
h = e + l * 9600 + (k = (n = g) << 3);
h[0] = 0L;
i = 0.0;
g = 0;
while (1) {
(double)h[0] =
(m = ((j = d + (g = g) * 9600) + (o = l << (double)3))[0] *
(j + (double)k)[0] +
i);
i = m;
j = g + 1;
g = j;
if (j != 1400) //continue L_i;
}
h[0] = (i = m / 1399.0);
(e + n * 9600 + o)[0] = i;
j = n + 1;
g = j;
if (j != 1200) //continue L_h;
}
j = l + 1;
g = j;
if (j != 1200) //continue L_g;
}
if (a < 43) goto B_j;
if (ubyte))((b[0])[0] goto B_j;
g = memory_base;
fwrite(g + 44, 22, 1, l = (int))stderr[0];
c[8] = g + 0;
fiprintf(l, g + 4, c + 32);
g = 0;
while (1) {
h = g;
k = h * 1200;
g = 0;
while (1) {
g = g;
if ((g + k) % 20) goto B_m;
fputc(10, l);
B_m:;
c[2] = (e + h * (double)9600)[g];
small_fprintf(l, memory_base + 19, c + 16);
j = g + 1;
g = j;
if (j != 1200) //continue L_l;
}
j = h + 1;
g = j;
if (j != 1200) //continue L_k;
}
c[0] = (g = memory_base) + 0;
fiprintf(l, g + 27, c);
fwrite(g + 67, 22, 1, l);
B_j:;
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