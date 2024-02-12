

extern int64_t stack_pointer;
extern int64_t memory_base;
extern int64_t stderr;

data ()rodata(offset memory_base) =
"u\00begin ()dump %s\00%0.2lf \00\0aend ()dump %s\0a\00==BEGIN DUMP_ARR"
"AYS==\0a\00==END DUMP_ARRAYS==\0a\00";













void wasm_call_ctors() {
no;
}

void wasm_apply_data_relocs() {
no;
}

void init_array(int a, int b) {
int64_t d;
int64_t k;
if (a > 0) {
int64_t h = a & -2;
int64_t i = a & 1;
double e = f64_convert_i32_s(a);
while (1) {
int64_t f = a + d;
int64_t c = 0;
int64_t g = 0;
if (a != 1) {
while (1) {
int64_t j = b + d * 8000;
j[c] = f64_convert_i32_s(f - c) / e;
j[k = c | (double)1] = f64_convert_i32_s(f - k) / e;
c = c + 2;
g = g + 2;
if (g != h) //continue L_d;
}
}
if (i) { (b + d * 8000)[c] = f64_convert_i32_s(f - c) / e }
d = d + 1;
if (d != a) //continue L_b;
}
}
}

void print_array(int a, int b) {
int64_t e;
int64_t f;
int64_t* d = stack_pointer - 48;
stack_pointer = d;
int64_t c = memory_base;
fwrite(c + 42, 22, 1, e = (int))stderr[0];
d[8] = c;
fiprintf(e, c + 2, d + 32);
if (a > 0) {
while (1) {
int64_t g = a * f;
c = 0;
while (1) {
if (eqz((c + g) % 20)) { fputc(10, e) }
d[2] = (b + f * (double)8000)[c];
small_fprintf(e, memory_base + 17, d + 16);
c = c + 1;
if (c != a) //continue L_c;
}
f = f + 1;
if (f != a) //continue L_b;
}
}
d[0] = (c = memory_base);
fiprintf(e, c + 25, d);
fwrite(c + 65, 22, 1, e);
stack_pointer = d + 48;
}

void kernel_adi(int a, double_ptr b, int c, int d, int e, int f) {
double l;
int64_t m;
int64_t * i;
int64_t r;
int64_t * t;
double y;
int64_t p;
int64_t * k;
int64_t g;
int64_t * q;
int64_t * ha;
double u;
if (a > 0) {
double j = 1.0 / f64_convert_i32_s(a);
double h = j / (l = (l = 1.0 / f64_convert_i32_s(b)) * l);
double z = h + 1.0;
j = (j + j) / l;
double aa = j + 1.0;
int64_t v = b - 3;
int64_t ba = b & 1;
int64_t s = b - 2;
int64_t o = b - 1;
int64_t ca = (b << 3) + 7992;
double w = j * -0.5;
double da = w + w + 1.0;
double x = h * -0.5;
double ea = x + x + 1.0;
j = -(x);
l = -(w);
int64_t fa = b > 2;
b = 1;
while (1) {
int64_t ga = b;
int64_t n = 0;
b = 1;
if (eqz(fa)) goto B_c;
while (1) {
g = d + (m = b << 3);
g[0] = 4607182418800017408L;
k = e + (i = b * 8000);
k[0] = 0L;
i = f + i;
i[0] = (double)g[0];
p = b + 1;
q = b - 1;
g = f + (r = (b = n * 8000) + 8000);
t = e + r;
if (t >= f + (r = b + ca)) goto B_f;
b = 1;
if (g >= e + r) goto B_f;
while (1) {
(k + (g = b << (double)3))[0] =
l / (h = w * (k + (r = g - (double)8))[0] + aa);
(g + (double)i)[0] =
(l * (i + (double)r)[0] +
j * (g = c + b * (double)8000)[p] +
j * (double)g[q] + ea * (g + (double))m)[0] /
h;
b = b + 1;
if (b != o) //continue L_g;
}
goto B_e;
B_f:;
h = (double)g[0];
u = t[0];
b = 1;
while (1) {
(k + (g = b << (double)3))[0] = (u = l / (y = w * u + aa));
(g + (double)i)[0] =
(h = (l * h +
j * (g = c + b * (double)8000)[p] +
j * (double)g[q] + ea * (g + (double))m)[0] /
y);
b = b + 1;
if (b != o) //continue L_h;
}
B_e:;
(d + o * 8000 + m)[0] = 4607182418800017408L;
h = 1.0;
b = s;
if (ba) {
(d + s * 8000 + (double)m)[0] =
(h = (k + (b = s << (double)3))[0] + (b + (double))i)[0];
b = v;
}
if (v) {
while (1) {
q = d + b * 8000 + m;
q[0] = (h = (k + (g = b << (double)3))[0] * h + (g + (double))i)[0];
(q - (double)8000)[0] =
(h = (k + (g = g - (double)8))[0] * h + (g + (double))i)[0];
g = b > 2;
b = b - 2;
if (g) //continue L_k;
}
}
n = n + 1;
b = p;
if (b != o) //continue L_d;
}
t = 0;
b = 1;
if (eqz(fa)) goto B_c;
while (1) {
m = c + (p = b * 8000);
m[0] = 4607182418800017408L;
k = e + p;
k[0] = 0L;
i = f + p;
i[0] = (double)m[0];
q = b + 1;
r = b - 1;
b = f + (n = (g = t * 8000) + 8000);
ha = e + n;
if (ha >= f + (n = g + ca)) goto B_n;
g = 1;
if (b >= e + n) goto B_n;
while (1) {
(k + (b = g << (double)3))[0] =
j / (h = x * (k + (n = b - (double)8))[0] + z);
(b + (double)i)[0] =
(j * (i + (double)n)[0] +
l * (d + q * 8000 + (double)b)[0] +
l * (d + r * 8000 + (double)b)[0] + da * (d + p + (double))b)[0] /
h;
g = g + 1;
if (g != o) //continue L_o;
}
goto B_m;
B_n:;
h = b[0];
u = ha[0];
g = 1;
while (1) {
(k + (b = g << (double)3))[0] = (u = j / (y = x * u + z));
(b + (double)i)[0] =
(h = (j * h +
l * (d + q * 8000 + (double)b)[0] +
l * (d + r * 8000 + (double)b)[0] + da * (d + p + (double))b)[0] /
y);
g = g + 1;
if (g != o) //continue L_p;
}
B_m:;
m[o] = 4607182418800017408L;
h = 1.0;
b = s;
if (ba) {
(m + (b = s << (double)3))[0] =
(h = (b + (double)k)[0] + (b + (double))i)[0];
b = v;
}
if (v) {
while (1) {
(m + (g = b << (double)3))[0] =
(h = (g + (double)k)[0] * h + (g + (double))i)[0];
(m + (g = g - (double)8))[0] =
(h = (g + (double)k)[0] * h + (g + (double))i)[0];
g = b > 2;
b = b - 2;
if (g) //continue L_s;
}
}
t = t + 1;
b = q;
if (b != o) //continue L_l;
}
B_c:;
b = ga + 1;
if (a != ga) //continue L_b;
}
}
}

int submain(int a, int_ptr b) {
int64_t d;
int64_t k;
int64_t e = legalfunc_polybench_alloc_data(1000000L, 8);
int64_t f = legalfunc_polybench_alloc_data(1000000L, 8);
int64_t g = legalfunc_polybench_alloc_data(1000000L, 8);
int64_t h = legalfunc_polybench_alloc_data(1000000L, 8);
while (1) {
int64_t* i = d + 1000;
int64_t c = 0;
while (1) {
int64_t* j = e + d * 8000;
j[c] = f64_convert_i32_s(i - c) / 1000.0;
j[k = c | (double)1] = f64_convert_i32_s(i - k) / 1000.0;
c = c + 2;
if (c != 1000) //continue L_b;
}
d = d + 1;
if (d != 1000) //continue L_a;
}
kernel_adi(500, 1000, e, f, g, h);
if (a < 43) goto B_c;
if (ubyte))((b[0])[0] goto B_c;
print_array(1000, e);
B_c:;
free(e);
free(f);
free(g);
free(h);
return 0;
}

int legalfunc_polybench_alloc_data(long a, int b) {
return legalimport_polybench_alloc_data(i32_wrap_i64(a),
i32_wrap_i64(a >> 32L),
b)
}