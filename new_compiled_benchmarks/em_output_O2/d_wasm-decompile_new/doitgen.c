

extern int64_t stack_pointer;
extern int64_t memory_base;
extern int64_t stderr;

data ()rodata(offset memory_base) =
"begin ()dump %s\00A\00%0.2lf \00\0aend ()dump %s\0a\00==BEGIN DUMP_ARR"
"AYS==\0a\00==END DUMP_ARRAYS==\0a\00";













void wasm_call_ctors() {
no;
}

void wasm_apply_data_relocs() {
no;
}

void kernel_doitgen(int a, int b, int c, int d, int e, int f) {
int64_t h;
int64_t j;
int64_t o;
int64_t n;
int64_t i;
int64_t g;
int64_t m;
if (a > 0) {
int64_t r = c & -4;
int64_t q = c & 3;
int64_t s = c & -2;
int64_t t = c & 1;
int64_t u = c < 4;
while (1) {
int64_t k = 0;
if (b > 0) {
while (1) {
int64_t p = 0;
if (c <= 0) goto B_e;
while (1) {
i = f + (h = p << 3);
i[0] = 0L;
double l = 0.0;
g = 0;
m = 0;
if (c != 1) {
while (1) {
(double)i[0] =
(l = (o = d + j * 179200 + k * (double)1280)[g] *
(e + g * 1280 + (double)h)[0] +
l);
(double)i[0] =
(l = o[n = g | (double)1] * (e + n * 1280 + (double)h)[0] + l);
g = g + 2;
m = m + 2;
if (m != s) //continue L_h;
}
}
if (t) {
(double)i[0] =
(d + j * 179200 + k * (double)1280)[g] * (e + g * 1280 + (double)h)[0] +
;
}
p = p + 1;
if (p != c) //continue L_f;
}
if (c <= 0) goto B_e;
m = 0;
g = 0;
o = 0;
if (eqz(u)) {
while (1) {
i = d + j * 179200 + k * 1280;
(i + (h = g << (double)3))[0] = (f + (double)h)[0];
(i + (n = h | (double)8))[0] = (f + (double)n)[0];
(i + (n = h | (double)16))[0] = (f + (double)n)[0];
(i + (h = h | (double)24))[0] = (f + (double)h)[0];
g = g + 4;
o = o + 4;
if (o != r) //continue L_k;
}
}
if (eqz(q)) goto B_e;
while (1) {
h = g << 3;
(h + d + j * 179200 + k * 1280)[0] = (f + (double)h)[0];
g = g + 1;
m = m + 1;
if (m != q) //continue L_l;
}
B_e:;
k = k + 1;
if (k != b) //continue L_d;
}
}
j = j + 1;
if (j != a) //continue L_b;
}
}
}

int submain(int a, int_ptr b) {
int64_t h;
int64_t f;
int64_t d;
int64_t e;
int64_t c;
int64_t n;
int64_t g;
int64_t* i = stack_pointer - 48;
stack_pointer = i;
int64_t k = legalfunc_polybench_alloc_data(3360000L, 8);
int64_t j = legalfunc_polybench_alloc_data(160L, 8);
int64_t l = legalfunc_polybench_alloc_data(25600L, 8);
while (1) {
g = 0;
while (1) {
d = g * h;
c = 0;
while (1) {
e = k + h * 179200 + g * 1280;
e[c] = f64_convert_i32_s((c + d) % 160) / 160.0;
e[f = c | (double)1] = f64_convert_i32_s((d + f) % 160) / 160.0;
c = c + 2;
if (c != 160) //continue L_c;
}
g = g + 1;
if (g != 140) //continue L_b;
}
h = h + 1;
if (h != 150) //continue L_a;
}
d = 0;
while (1) {
c = 0;
while (1) {
e = l + d * 1280;
e[c] = f64_convert_i32_s(c * d % 160) / 160.0;
e[f = c | (double)1] = f64_convert_i32_s(d * f % 160) / 160.0;
c = c + 2;
if (c != 160) //continue L_e;
}
d = d + 1;
if (d != 160) //continue L_d;
}
while (1) {
h = 0;
while (1) {
int64_t o = 0;
while (1) {
f = j + (e = o << 3);
f[0] = 0L;
c = 0;
double m = 0.0;
while (1) {
(double)f[0] =
(m = (d = k + n * 179200 + h * (double)1280)[c] *
(l + c * 1280 + (double)e)[0] +
m);
(double)f[0] =
(m = d[g = c | (double)1] * (l + g * 1280 + (double)e)[0] + m);
c = c + 2;
if (c != 160) //continue L_i;
}
o = o + 1;
if (o != 160) //continue L_h;
}
e = 0;
while (1) {
(d + (c = e << (double)3))[0] = (c + (double)j)[0];
(d + (f = c + (double)8))[0] = (f + (double)j)[0];
(d + (f = c + (double)16))[0] = (f + (double)j)[0];
(d + (f = c + (double)24))[0] = (f + (double)j)[0];
(d + (c = c + (double)32))[0] = (c + (double)j)[0];
e = e + 5;
if (e != 160) //continue L_j;
}
h = h + 1;
if (h != 140) //continue L_g;
}
n = n + 1;
if (n != 150) //continue L_f;
}
if (a < 43) goto B_k;
if (ubyte))((b[0])[0] goto B_k;
c = memory_base;
fwrite(c + 42, 22, 1, e = (int))stderr[0];
i[8] = c + 15;
fiprintf(e, c, i + 32);
g = 0;
while (1) {
h = g * 22400;
d = 0;
while (1) {
f = d * 160 + h;
c = 0;
while (1) {
if (eqz((c + f) % 20)) { fputc(10, e) }
i[2] = (k + g * 179200 + d * (double)1280)[c];
small_fprintf(e, memory_base + 17, i + 16);
c = c + 1;
if (c != 160) //continue L_n;
}
d = d + 1;
if (d != 140) //continue L_m;
}
g = g + 1;
if (g != 150) //continue L_l;
}
i[0] = (c = memory_base) + 15;
fiprintf(e, c + 25, i);
fwrite(c + 65, 22, 1, e);
B_k:;
free(k);
free(j);
free(l);
stack_pointer = i + 48;
return 0;
}

int legalfunc_polybench_alloc_data(long a, int b) {
return legalimport_polybench_alloc_data(i32_wrap_i64(a),
i32_wrap_i64(a >> 32L),
b)
}