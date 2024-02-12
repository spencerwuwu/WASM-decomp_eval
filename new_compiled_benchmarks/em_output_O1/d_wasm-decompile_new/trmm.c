

extern int64_t stack_pointer;
extern int64_t memory_base;
extern int64_t table_base;
extern int64_t stderr;

data ()rodata(offset memory_base) =
"begin ()dump %s\00B\00%0.2lf \00\0aend ()dump %s\0a\00==BEGIN DUMP_ARR"
"AYS==\0a\00==END DUMP_ARRAYS==\0a\00";













void wasm_call_ctors() {
}

void wasm_apply_data_relocs() {
}

void kernel_trmm(int a, int b, double c, int d, int e) {
int64_t k;
int64_t n;
if (a < 1) goto B_a;
int64_t f = b < 1;
int64_t * g = 0;
while (1) {
int64_t h = g;
if (f) goto B_c;
int64_t i = h + 1;
g = 0;
while (1) {
int64_t j = g;
if (i >= a) goto B_e;
int64_t * l = e + h * 9600 + (k = j << 3);
double m = l[0];
g = i;
while (1) {
l[0] =
(m = (d + (g = g) * (double)8000)[h] * (e + g * 9600 + (double)k)[0] + m);
m = m;
n = g + 1;
g = n;
if (n != a) //continue L_f;
}
B_e:;
g = e + h * 9600 + (j << 3);
g[0] = g[0] * c;
n = j + 1;
g = n;
if (n != b) //continue L_d;
}
B_c:;
n = h + 1;
g = n;
if (n != a) //continue L_b;
}
B_a:;
}

int submain(int a, int_ptr b) {
int64_t h;
int64_t i;
int64_t g;
int64_t * l;
int64_t* c = stack_pointer - 48;
stack_pointer = c;
int64_t d = legalfunc_polybench_alloc_data(1000000L, 8);
int64_t e = legalfunc_polybench_alloc_data(1200000L, 8);
int64_t * f = 0;
while (1) {
g = 0;
f = f;
if (eqz(f)) goto B_b;
while (1) {
(d + f * 8000)[g = (double)g] =
f64_convert_i32_s((g + f) % 1000) / 1000.0;
h = g + 1;
g = h;
if (h != f) //continue L_c;
}
B_b:;
(d + f * 8000)[f] = 4607182418800017408L;
i = f + 1200;
g = 0;
while (1) {
(e + f * 9600)[g = (double)g] =
f64_convert_i32_s((i - g) % 1200) / 1200.0;
h = g + 1;
g = h;
if (h != 1200) //continue L_d;
}
g = f + 1;
f = g;
if (g != 1000) //continue L_a;
}
f = 0;
while (1) {
h = f;
int64_t j = h + 1;
f = 0;
while (1) {
int64_t k = f;
if (h > 998) goto B_g;
l = e + h * 9600 + (i = k << 3);
double m = l[0];
f = j;
while (1) {
l[0] =
(m = (d + (f = f) * (double)8000)[h] * (e + f * 9600 + (double)i)[0] + m);
m = m;
g = f + 1;
f = g;
if (g != 1000) //continue L_h;
}
B_g:;
f = e + h * 9600 + (k << 3);
f[0] = f[0] * 1.5;
g = k + 1;
f = g;
if (g != 1200) //continue L_f;
}
f = j;
if (j != 1000) //continue L_e;
}
if (a < 43) goto B_i;
if (ubyte))((b[0])[0] goto B_i;
f = memory_base;
fwrite(f + 42, 22, 1, i = (int))stderr[0];
c[8] = f + 15;
fiprintf(i, f + 0, c + 32);
f = 0;
while (1) {
h = f;
l = h * 1000;
f = 0;
while (1) {
f = f;
if ((f + l) % 20) goto B_l;
fputc(10, i);
B_l:;
c[2] = (e + h * (double)9600)[f];
small_fprintf(i, memory_base + 17, c + 16);
g = f + 1;
f = g;
if (g != 1200) //continue L_k;
}
g = h + 1;
f = g;
if (g != 1000) //continue L_j;
}
c[0] = (f = memory_base) + 15;
fiprintf(i, f + 25, c);
fwrite(f + 65, 22, 1, i);
B_i:;
free(d);
free(e);
stack_pointer = c + 48;
return 0;
}

int legalfunc_polybench_alloc_data(long a, int b) {
return legalimport_polybench_alloc_data(i32_wrap_i64(a),
i32_wrap_i64(a >> 32L),
b)
}