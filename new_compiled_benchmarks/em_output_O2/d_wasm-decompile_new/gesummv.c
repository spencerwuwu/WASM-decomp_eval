

extern int64_t stack_pointer;
extern int64_t memory_base;
extern int64_t stderr;

data ()rodata(offset memory_base) =
"y\00begin ()dump %s\00%0.2lf \00\0aend ()dump %s\0a\00==BEGIN DUMP_ARR"
"AYS==\0a\00==END DUMP_ARRAYS==\0a\00";













void wasm_call_ctors() {
no;
}

void wasm_apply_data_relocs() {
no;
}

void kernel_gesummv(int a, double b, double c, int d, int e, int f, int g, int h) {
int64_t j;
int64_t i;
int64_t m;
int64_t n;
int64_t * o;
double p;
if (a > 0) {
while (1) {
int64_t k = f + (i = j << 3);
k[0] = 0L;
int64_t l = h + i;
l[0] = 0L;
i = 0;
while (1) {
(double)k[0] =
((m = i << 3) + d + (n = j * (double)10400))[0] * (o = g + m)[0] +
(double)k[0];
l[0] = (p = (e + n + (double)m)[0] * o[0] + (double))l[0];
i = i + 1;
if (i != a) //continue L_c;
}
l[0] = b * (double)k[0] + p * c;
j = j + 1;
if (j != a) //continue L_b;
}
}
}

int submain(int a, int_ptr b) {
int64_t d;
int64_t g;
int64_t m;
int64_t h;
int64_t c;
int64_t f;
int64_t * o;
double p;
int64_t* e = stack_pointer - 48;
stack_pointer = e;
int64_t i = legalfunc_polybench_alloc_data(1690000L, 8);
int64_t j = legalfunc_polybench_alloc_data(1690000L, 8);
int64_t n = legalfunc_polybench_alloc_data(1300L, 8);
int64_t k = legalfunc_polybench_alloc_data(1300L, 8);
int64_t l = legalfunc_polybench_alloc_data(1300L, 8);
while (1) {
k[d] = f64_convert_i32_s(d) / 1300.0;
c = 0;
while (1) {
f = c << 3;
(f + i + (g = d * (double)10400))[0] =
f64_convert_i32_s(((m = c * d) + 1) % 1300) / 1300.0;
(g + j + f)[0] = f64_convert_i32_s((m + 2) % 1300) / 1300.0;
c = c + 1;
if (c != 1300) //continue L_b;
}
d = d + 1;
if (d != 1300) //continue L_a;
}
while (1) {
g = n + (c = h << 3);
g[0] = 0L;
f = c + l;
f[0] = 0L;
c = 0;
while (1) {
(double)g[0] =
((d = c << 3) + i + (m = h * (double)10400))[0] * (o = d + k)[0] +
(double)g[0];
f[0] = (p = (j + m + (double)d)[0] * o[0] + (double))f[0];
c = c + 1;
if (c != 1300) //continue L_d;
}
f[0] = (double)g[0] * 1.5 + p * 1.2;
h = h + 1;
if (h != 1300) //continue L_c;
}
if (a < 43) goto B_e;
if (ubyte))((b[0])[0] goto B_e;
c = memory_base;
fwrite(c + 42, 22, 1, d = (int))stderr[0];
e[8] = c;
fiprintf(d, c + 2, e + 32);
c = 0;
while (1) {
if (eqz((c & 65535) % 20)) { fputc(10, d) }
e[2] = (double)l[c];
small_fprintf(d, memory_base + 17, e + 16);
c = c + 1;
if (c != 1300) //continue L_f;
}
e[0] = (c = memory_base);
fiprintf(d, c + 25, e);
fwrite(c + 65, 22, 1, d);
B_e:;
free(i);
free(j);
free(n);
free(k);
free(l);
stack_pointer = e + 48;
return 0;
}

int legalfunc_polybench_alloc_data(long a, int b) {
return legalimport_polybench_alloc_data(i32_wrap_i64(a),
i32_wrap_i64(a >> 32L),
b)
}