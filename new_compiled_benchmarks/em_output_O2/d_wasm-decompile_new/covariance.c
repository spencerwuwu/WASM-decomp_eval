

extern int64_t stack_pointer;
extern int64_t memory_base;
extern int64_t stderr;

data ()rodata(offset memory_base) =
"cov\00begin ()dump %s\00%0.2lf \00\0aend ()dump %s\0a\00==BEGIN DUMP_A"
"RRAYS==\0a\00==END DUMP_ARRAYS==\0a\00";













void wasm_call_ctors() {
no;
}

void wasm_apply_data_relocs() {
no;
}

void kernel_covariance(int a, int b, double c, int d, int e, int f) {
int64_t * l;
int64_t * j;
double h;
int64_t o;
int64_t g;
int64_t * m;
int64_t i;
int64_t k;
int64_t q;
int64_t p;
int64_t n;
if (a > 0) {
m = b & -4;
k = b & 3;
p = b <= 0;
q = b < 4;
while (1) {
i = f + (j = l << 3);
i[0] = 0L;
if (p) {
h = 0.0;
goto B_c;
}
n = 0;
h = 0.0;
g = 0;
o = 0;
if (eqz(q)) {
while (1) {
i[0] = (h = (d + g * 9600 + (double)j)[0] + h);
i[0] = (h = (d + (g | 1) * 9600 + (double)j)[0] + h);
i[0] = (h = (d + (g | 2) * 9600 + (double)j)[0] + h);
i[0] = (h = (d + (g | 3) * 9600 + (double)j)[0] + h);
g = g + 4;
o = o + 4;
if (o != m) //continue L_f;
}
}
if (eqz(k)) goto B_c;
while (1) {
i[0] = (h = (d + g * 9600 + (double)j)[0] + h);
g = g + 1;
n = n + 1;
if (n != k) //continue L_g;
}
B_c:;
i[0] = h / c;
l = l + 1;
if (l != a) //continue L_b;
}
}
if (b > 0) {
q = a & -4;
p = a & 3;
o = 0;
int64_t r = a <= 0;
int64_t s = a < 4;
while (1) {
if (r) goto B_j;
n = 0;
g = 0;
k = 0;
if (eqz(s)) {
while (1) {
j = d + o * 9600;
m = j + (i = g << 3);
m[0] = m[0] - (f + (double)i)[0];
l = j + (m = i | 8);
l[0] = l[0] - (f + (double)m)[0];
l = j + (m = i | 16);
l[0] = l[0] - (f + (double)m)[0];
j = j + (i = i | 24);
j[0] = j[0] - (f + (double)i)[0];
g = g + 4;
k = k + 4;
if (k != q) //continue L_l;
}
}
if (eqz(p)) goto B_j;
while (1) {
i = g << 3;
j = i + d + o * 9600;
j[0] = j[0] - (f + (double)i)[0];
g = g + 1;
n = n + 1;
if (n != p) //continue L_m;
}
B_j:;
o = o + 1;
if (o != b) //continue L_i;
}
}
if (a > 0) {
m = b & -2;
p = b & 1;
c = c + -1.0;
k = 0;
while (1) {
l = k;
while (1) {
f = l << 3;
i = f + e + k * 9600;
i[0] = 0L;
if (b <= 0) {
h = 0.0;
goto B_q;
}
g = 0;
h = 0.0;
j = 0;
if (b != 1) {
while (1) {
(double)i[0] =
(h =
((n = d + g * 9600) + (o = k << (double)3))[0] * (f + (double)n)[0] + h);
(double)i[0] =
(h = ((n = d + (g | 1) * 9600) + (double)o)[0] * (f + (double)n)[0] + h);
g = g + 2;
j = j + 2;
if (j != m) //continue L_t;
}
}
if (eqz(p)) goto B_q;
(double)i[0] =
(h = (g = d + g * (double)9600)[k] * (f + (double)g)[0] + h);
B_q:;
i[0] = (h = h / c);
(e + l * 9600)[k] = h;
l = l + 1;
if (l < a) //continue L_p;
}
k = k + 1;
if (k != a) //continue L_o;
}
}
}

int submain(int a, int_ptr b) {
int64_t * g;
int64_t f;
int64_t * h;
int64_t c;
double d;
int64_t e;
int64_t i;
int64_t* j = stack_pointer - 48;
stack_pointer = j;
int64_t k = legalfunc_polybench_alloc_data(1680000L, 8);
int64_t m = legalfunc_polybench_alloc_data(1440000L, 8);
int64_t l = legalfunc_polybench_alloc_data(1200L, 8);
while (1) {
d = f64_convert_i32_s(g);
c = 0;
while (1) {
e = k + g * 9600;
e[c] = d * f64_convert_i32_s(c) / 1200.0;
e[f = c + (double)1] = d * f64_convert_i32_s(f) / 1200.0;
e[f = c + (double)2] = d * f64_convert_i32_s(f) / 1200.0;
c = c + 3;
if (c != 1200) //continue L_b;
}
g = g + 1;
if (g != 1400) //continue L_a;
}
while (1) {
c = l + (g = h << 3);
c[0] = 0L;
f = 0;
d = 0.0;
while (1) {
c[0] = (d = d + (e = k + f * 9600 + (double))g)[0];
c[0] = (d = d + (e + (double))9600)[0];
c[0] = (d = d + (e + (double))19200)[0];
c[0] = (d = d + (e + (double))28800)[0];
c[0] = (d = d + (e + (double))38400)[0];
f = f + 5;
if (f != 1400) //continue L_d;
}
c[0] = d / 1400.0;
h = h + 1;
if (h != 1200) //continue L_c;
}
while (1) {
f = 0;
while (1) {
e = k + i * 9600;
g = e + (c = f << 3);
g[0] = g[0] - (c + (double)l)[0];
h = e + (g = c | 8);
h[0] = h[0] - (g + (double)l)[0];
h = e + (g = c | 16);
h[0] = h[0] - (g + (double)l)[0];
e = e + (c = c | 24);
e[0] = (double)e[0] - (c + (double)l)[0];
f = f + 4;
if (f != 1200) //continue L_f;
}
i = i + 1;
if (i != 1400) //continue L_e;
}
i = 0;
while (1) {
int64_t n = i;
while (1) {
f = n << 3;
e = f + m + i * 9600;
e[0] = 0L;
c = 0;
d = 0.0;
while (1) {
(double)e[0] =
(d =
((h = k + c * 9600) + (g = i << (double)3))[0] * (f + (double)h)[0] + d);
(double)e[0] =
(d = ((h = k + (c | 1) * 9600) + (double)g)[0] * (f + (double)h)[0] + d);
c = c + 2;
if (c != 1400) //continue L_i;
}
e[0] = (d = d / 1399.0);
(m + n * 9600 + g)[0] = d;
n = n + 1;
if (n != 1200) //continue L_h;
}
i = i + 1;
if (i != 1200) //continue L_g;
}
if (a < 43) goto B_j;
if (ubyte))((b[0])[0] goto B_j;
c = memory_base;
fwrite(c + 44, 22, 1, f = (int))stderr[0];
j[8] = c;
fiprintf(f, c + 4, j + 32);
e = 0;
while (1) {
g = e * 1200;
c = 0;
while (1) {
if (eqz((c + g) % 20)) { fputc(10, f) }
j[2] = (m + e * (double)9600)[c];
small_fprintf(f, memory_base + 19, j + 16);
c = c + 1;
if (c != 1200) //continue L_l;
}
e = e + 1;
if (e != 1200) //continue L_k;
}
j[0] = (c = memory_base);
fiprintf(f, c + 27, j);
fwrite(c + 67, 22, 1, f);
B_j:;
free(k);
free(m);
free(l);
stack_pointer = j + 48;
return 0;
}

int legalfunc_polybench_alloc_data(long a, int b) {
return legalimport_polybench_alloc_data(i32_wrap_i64(a),
i32_wrap_i64(a >> 32L),
b)
}