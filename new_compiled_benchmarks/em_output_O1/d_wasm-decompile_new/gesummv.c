

extern int64_t stack_pointer;
extern int64_t memory_base;
extern int64_t table_base;
extern int64_t stderr;

data ()rodata(offset memory_base) =
"y\00begin ()dump %s\00%0.2lf \00\0aend ()dump %s\0a\00==BEGIN DUMP_ARR"
"AYS==\0a\00==END DUMP_ARRAYS==\0a\00";













void wasm_call_ctors() {
}

void wasm_apply_data_relocs() {
}

void kernel_gesummv(int a, double b, double c, int d, int e, int f, int g, int h) {
int64_t j;
int64_t m;
int64_t n;
int64_t * o;
if (a < 1) goto B_a;
int64_t i = 0;
while (1) {
int64_t k = f + (i = (j = i) << 3);
k[0] = 0L;
int64_t l = h + i;
l[0] = 0L;
i = 0;
while (1) {
(double)k[0] =
(d + (m = j * 10400) + (i = (n = i) << (double)3))[0] * (o = g + i)[0] +
(double)k[0];
l[0] = (e + m + (double)i)[0] * o[0] + (double)l[0];
m = n + 1;
i = m;
if (m != a) //continue L_c;
}
l[0] = b * (double)k[0] + (double)l[0] * c;
l = j + 1;
i = l;
if (l != a) //continue L_b;
}
B_a:;
}

int submain(int a, int_ptr b) {
int64_t j;
int64_t k;
int64_t l;
int64_t m;
int64_t n;
int64_t * o;
double p;
int64_t* c = stack_pointer - 48;
stack_pointer = c;
int64_t d = legalfunc_polybench_alloc_data(1690000L, 8);
int64_t e = legalfunc_polybench_alloc_data(1690000L, 8);
int64_t f = legalfunc_polybench_alloc_data(1300L, 8);
int64_t g = legalfunc_polybench_alloc_data(1300L, 8);
int64_t h = legalfunc_polybench_alloc_data(1300L, 8);
int64_t i = 0;
while (1) {
g[j = (double)i] = f64_convert_i32_s(j) / 1300.0;
i = 0;
while (1) {
(d + (k = j * 10400) + (l = (i = i) << (double)3))[0] =
f64_convert_i32_s(((m = i * j) + 1) % 1300) / 1300.0;
(e + k + l)[0] = f64_convert_i32_s((m + 2) % 1300) / 1300.0;
k = i + 1;
i = k;
if (k != 1300) //continue L_b;
}
j = j + 1;
i = j;
if (j != 1300) //continue L_a;
}
i = 0;
while (1) {
j = f + (i = (n = i) << 3);
j[0] = 0L;
k = h + i;
k[0] = 0L;
i = 0;
while (1) {
(double)j[0] =
(d + (l = n * 10400) + (i = (m = i) << (double)3))[0] * (o = g + i)[0] +
(double)j[0];
k[0] = (p = (e + l + (double)i)[0] * o[0] + (double))k[0];
l = m + 1;
i = l;
if (l != 1300) //continue L_d;
}
k[0] = (double)j[0] * 1.5 + p * 1.2;
j = n + 1;
i = j;
if (j != 1300) //continue L_c;
}
if (a < 43) goto B_e;
if (ubyte))((b[0])[0] goto B_e;
i = memory_base;
fwrite(i + 42, 22, 1, k = (int))stderr[0];
c[8] = i + 0;
fiprintf(k, i + 2, c + 32);
i = 0;
while (1) {
i = i;
if (i % 20) goto B_g;
fputc(10, k);
B_g:;
c[2] = (double)h[i];
small_fprintf(k, memory_base + 17, c + 16);
j = i + 1;
i = j;
if (j != 1300) //continue L_f;
}
c[0] = (i = memory_base) + 0;
fiprintf(k, i + 25, c);
fwrite(i + 65, 22, 1, k);
B_e:;
free(d);
free(e);
free(f);
free(g);
free(h);
stack_pointer = c + 48;
return 0;
}

int legalfunc_polybench_alloc_data(long a, int b) {
return legalimport_polybench_alloc_data(i32_wrap_i64(a),
i32_wrap_i64(a >> 32L),
b)
}