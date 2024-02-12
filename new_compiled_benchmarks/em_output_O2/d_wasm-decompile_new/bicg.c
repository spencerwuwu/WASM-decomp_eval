

extern int64_t stack_pointer;
extern int64_t memory_base;
extern int64_t stderr;

data ()rodata(offset memory_base) =
"begin ()dump %s\00q\00%0.2lf \00\0aend ()dump %s\0a\00==BEGIN DUMP_ARR"
"AYS==\0a\00==END DUMP_ARRAYS==\0a\00";















void wasm_call_ctors() {
no;
}

void wasm_apply_data_relocs() {
no;
}

void kernel_bicg(int a, int b, int c, int d, int e, int f, int g) {
int64_t i;
int64_t h;
int64_t k;
int64_t * o;
if (a > 0) { memset(d, 0, a << 3) }
if (b > 0) {
int64_t l = a <= 0;
while (1) {
int64_t j = e + (h = i << 3);
j[0] = 0L;
if (eqz(l)) {
int64_t * m = g + h;
h = 0;
while (1) {
int64_t * n = d + (k = h << 3);
n[0] = m[0] * (o = c + i * 15200 + k)[0] + n[0];
j[0] = o[0] * (f + (double)k)[0] + (double)j[0];
h = h + 1;
if (h != a) //continue L_e;
}
}
i = i + 1;
if (i != b) //continue L_c;
}
}
}

int submain(int a, int_ptr b) {
int64_t c;
int64_t f;
int64_t d;
int64_t * m;
int64_t h;
int64_t* e = stack_pointer - 96;
stack_pointer = e;
int64_t i = legalfunc_polybench_alloc_data(3990000L, 8);
int64_t * j = legalfunc_polybench_alloc_data(1900L, 8);
int64_t k = legalfunc_polybench_alloc_data(2100L, 8);
int64_t g = legalfunc_polybench_alloc_data(1900L, 8);
int64_t l = legalfunc_polybench_alloc_data(2100L, 8);
while (1) {
g[c] = f64_convert_i32_s(c) / 1900.0;
g[f = c | (double)1] = f64_convert_i32_s(f) / 1900.0;
c = c + 2;
if (c != 1900) //continue L_a;
}
while (1) {
l[d] = f64_convert_i32_s(d) / 2100.0;
c = 0;
while (1) {
f = i + d * 15200;
f[c] = f64_convert_i32_s((m = c | 1) * d % 2100) / 2100.0;
f[m] = f64_convert_i32_s((c = c + 2) * d % 2100) / 2100.0;
if (c != 1900) //continue L_c;
}
d = d + 1;
if (d != 2100) //continue L_b;
}
int64_t n = memset(j, 0, 15200);
while (1) {
f = k + (c = h << 3);
f[0] = 0L;
int64_t * o = c + l;
c = 0;
while (1) {
m = n + (d = c << 3);
m[0] = o[0] * (j = i + h * 15200 + d)[0] + m[0];
f[0] = j[0] * (d + (double)g)[0] + (double)f[0];
c = c + 1;
if (c != 1900) //continue L_e;
}
h = h + 1;
if (h != 2100) //continue L_d;
}
if (a < 43) goto B_f;
if (ubyte))((b[0])[0] goto B_f;
c = memory_base;
fwrite(c + 42, 22, 1, d = (int))stderr[0];
e[20] = c + 13;
fiprintf(d, c, e + 80);
c = 0;
while (1) {
if (eqz((c & 65535) % 20)) { fputc(10, d) }
e[8] = (double)n[c];
small_fprintf(d, memory_base + 17, e - -64);
c = c + 1;
if (c != 1900) //continue L_g;
}
e[12] = (c = memory_base) + 13;
fiprintf(d, c + 25, e + 48);
e[8] = c + 15;
fiprintf(d, c, e + 32);
c = 0;
while (1) {
if (eqz((c & 65535) % 20)) { fputc(10, d) }
e[2] = (double)k[c];
small_fprintf(d, memory_base + 17, e + 16);
c = c + 1;
if (c != 2100) //continue L_i;
}
e[0] = (c = memory_base) + 15;
fiprintf(d, c + 25, e);
fwrite(c + 65, 22, 1, d);
B_f:;
free(i);
free(n);
free(k);
free(g);
free(l);
stack_pointer = e + 96;
return 0;
}

int legalfunc_polybench_alloc_data(long a, int b) {
return legalimport_polybench_alloc_data(i32_wrap_i64(a),
i32_wrap_i64(a >> 32L),
b)
}