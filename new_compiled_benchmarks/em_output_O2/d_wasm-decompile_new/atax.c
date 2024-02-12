

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

void init_array(int a, int b, int c, int d) {
int64_t e;
int64_t j;
int64_t g;
double f;
int64_t i;
int64_t h;
if (b <= 0) goto B_a;
f = f64_convert_i32_s(b);
h = b & 1;
if (b != 1) {
i = b & -2;
while (1) {
d[e] = f64_convert_i32_s(e) / f + 1.0;
d[j = e | (double)1] = f64_convert_i32_s(j) / f + 1.0;
e = e + 2;
g = g + 2;
if (g != i) //continue L_c;
}
}
if (eqz(h)) goto B_a;
d[e] = f64_convert_i32_s(e) / f + 1.0;
B_a:;
if (a > 0) {
h = b & -2;
int64_t k = b & 1;
f = f64_convert_i32_s(a * 5);
d = 0;
while (1) {
if (b <= 0) goto B_f;
e = 0;
g = 0;
if (b != 1) {
while (1) {
j = c + d * 16800;
j[e] = f64_convert_i32_s((d + e) % b) / f;
j[i = e | (double)1] = f64_convert_i32_s((d + i) % b) / f;
e = e + 2;
g = g + 2;
if (g != h) //continue L_h;
}
}
if (eqz(k)) goto B_f;
(c + d * 16800)[e] = f64_convert_i32_s((d + e) % b) / f;
B_f:;
d = d + 1;
if (d != a) //continue L_e;
}
}
}

void print_array(int a, int b) {
int64_t e;
int64_t* d = stack_pointer - 48;
stack_pointer = d;
int64_t c = memory_base;
fwrite(c + 42, 22, 1, e = (int))stderr[0];
d[8] = c;
fiprintf(e, c + 2, d + 32);
if (a > 0) {
c = 0;
while (1) {
if (eqz(c % 20)) { fputc(10, e) }
d[2] = (double)b[c];
small_fprintf(e, memory_base + 17, d + 16);
c = c + 1;
if (c != a) //continue L_b;
}
}
d[0] = (c = memory_base);
fiprintf(e, c + 25, d);
fwrite(c + 65, 22, 1, e);
stack_pointer = d + 48;
}

void kernel_atax(int a, int b, int c, int d, int e, int f) {
int64_t i;
int64_t * m;
int64_t * h;
if (b > 0) { memset(e, 0, b << 3) }
if (a > 0) {
int64_t o = b & -2;
int64_t p = b & 1;
int64_t q = b - 1;
while (1) {
int64_t j = f + (i << 3);
j[0] = 0L;
int64_t n = b <= 0;
if (n) goto B_d;
int64_t g = 0;
double k = 0.0;
int64_t l = 0;
if (q) {
while (1) {
(double)j[0] =
(k =
((m = c + i * 16800) + (h = g << (double)3))[0] * (d + (double)h)[0] +
k);
(double)j[0] =
(k = (m + (h = h | (double)8))[0] * (d + (double)h)[0] + k);
g = g + 2;
l = l + 2;
if (l != o) //continue L_f;
}
}
if (p) {
(double)j[0] =
((g = g << 3) + c + i * (double)16800)[0] * (d + (double)g)[0] + ;
}
if (n) goto B_d;
g = 0;
l = 0;
if (q) {
while (1) {
m = e + (h = g << 3);
m[0] = ((n = c + i * 16800) + (double)h)[0] * (double)j[0] + m[0];
m = e + (h = h | 8);
m[0] = (h + (double)n)[0] * (double)j[0] + m[0];
g = g + 2;
l = l + 2;
if (l != o) //continue L_i;
}
}
if (eqz(p)) goto B_d;
h = e + (g = g << 3);
h[0] = (c + i * 16800 + (double)g)[0] * (double)j[0] + h[0];
B_d:;
i = i + 1;
if (i != a) //continue L_c;
}
}
}

int submain(int a, int_ptr b) {
int64_t c;
int64_t d;
int64_t e;
int64_t f;
int64_t k;
int64_t * i;
int64_t l = legalfunc_polybench_alloc_data(3990000L, 8);
int64_t g = legalfunc_polybench_alloc_data(2100L, 8);
int64_t h = legalfunc_polybench_alloc_data(2100L, 8);
int64_t m = legalfunc_polybench_alloc_data(1900L, 8);
while (1) {
g[c] = f64_convert_i32_s(c) / 2100.0 + 1.0;
g[d = c + (double)1] = f64_convert_i32_s(d) / 2100.0 + 1.0;
g[d = c + (double)2] = f64_convert_i32_s(d) / 2100.0 + 1.0;
c = c + 3;
if (c != 2100) //continue L_a;
}
while (1) {
c = 0;
while (1) {
d = l + e * 16800;
d[c] = f64_convert_i32_s((c + e) % 2100) / 9500.0;
d[f = c | (double)1] = f64_convert_i32_s((e + f) % 2100) / 9500.0;
c = c + 2;
if (c != 2100) //continue L_c;
}
e = e + 1;
if (e != 1900) //continue L_b;
}
h = memset(h, 0, 16800);
while (1) {
c = m + (k << 3);
c[0] = 0L;
double j = 0.0;
f = 0;
while (1) {
(double)c[0] =
(j =
((e = l + k * 16800) + (d = f << (double)3))[0] * (d + (double)g)[0] +
j);
(double)c[0] =
(j = (e + (i = d + (double)8))[0] * (g + (double)i)[0] + j);
(double)c[0] =
(j = (e + (d = d + (double)16))[0] * (d + (double)g)[0] + j);
f = f + 3;
if (f != 2100) //continue L_e;
}
f = 0;
while (1) {
i = h + (d = f << 3);
i[0] = (d + (double)e)[0] * (double)c[0] + i[0];
int64_t * n = h + (i = d + 8);
n[0] = (e + (double)i)[0] * (double)c[0] + n[0];
i = h + (d = d + 16);
i[0] = (d + (double)e)[0] * (double)c[0] + i[0];
f = f + 3;
if (f != 2100) //continue L_f;
}
k = k + 1;
if (k != 1900) //continue L_d;
}
if (a < 43) goto B_g;
if (ubyte))((b[0])[0] goto B_g;
print_array(2100, h);
B_g:;
free(l);
free(g);
free(h);
free(m);
return 0;
}

int legalfunc_polybench_alloc_data(long a, int b) {
return legalimport_polybench_alloc_data(i32_wrap_i64(a),
i32_wrap_i64(a >> 32L),
b)
}