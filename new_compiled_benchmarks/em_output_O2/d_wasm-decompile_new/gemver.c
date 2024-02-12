

extern int64_t stack_pointer;
extern int64_t memory_base;
extern int64_t stderr;

data ()rodata(offset memory_base) =
"w\00begin ()dump %s\00%0.2lf \00\0aend ()dump %s\0a\00==BEGIN DUMP_ARR"
"AYS==\0a\00==END DUMP_ARRAYS==\0a\00";













void wasm_call_ctors() {
no;
}

void wasm_apply_data_relocs() {
no;
}

void kernel_gemver(int a, double b, double c, int d, int e, int f, int g, double_ptr h, int i, int j, int k, int l) {
int64_t t;
int64_t m;
int64_t * o;
int64_t * n;
int64_t * q;
int64_t * p;
int64_t * s;
double r;
if (a <= 0) goto B_a;
int64_t v = a & -2;
int64_t w = a & 1;
int64_t u = a - 1;
while (1) {
o = g + (m = t << 3);
p = e + m;
n = 0;
q = 0;
if (u) {
while (1) {
s = d + t * 16000;
int64_t * x = s + (m = n << 3);
x[0] = o[0] * (h + (double)m)[0] + p[0] * (f + (double)m)[0] + x[0];
s = s + (m = m | 8);
s[0] = o[0] * (h + (double)m)[0] + p[0] * (f + (double)m)[0] + s[0];
n = n + 2;
q = q + 2;
if (q != v) //continue L_d;
}
}
if (w) {
m = n << 3;
n = m + d + t * 16000;
n[0] = o[0] * (h + (double)m)[0] + p[0] * (f + (double)m)[0] + n[0];
}
t = t + 1;
if (t != a) //continue L_b;
}
if (a <= 0) goto B_a;
h = a & -2;
s = a & 1;
f = 0;
while (1) {
o = j + (n = f << 3);
r = o[0];
m = 0;
p = 0;
if (u) {
while (1) {
o[0] = (r = (d + m * 16000 + (double)n)[0] * c * (double)k[m] + r);
o[0] =
(r = (d + (q = m | 1) * 16000 + (double)n)[0] * c * (double)k[q] + r);
m = m + 2;
p = p + 2;
if (p != h) //continue L_h;
}
}
if (s) { o[0] = (d + m * 16000 + (double)n)[0] * c * (double)k[m] + r }
f = f + 1;
if (f != a) //continue L_f;
}
if (a <= 0) goto B_a;
f = a & 3;
o = 0;
m = 0;
if (a >= 4) {
s = a & -4;
p = 0;
while (1) {
q = j + (n = m << 3);
q[0] = q[0] + (l + (double)n)[0];
h = j + (q = n | 8);
h[0] = h[0] + (l + (double)q)[0];
h = j + (q = n | 16);
h[0] = h[0] + (l + (double)q)[0];
q = j + (n = n | 24);
q[0] = q[0] + (l + (double)n)[0];
m = m + 4;
p = p + 4;
if (p != s) //continue L_k;
}
}
if (f) {
while (1) {
p = j + (n = m << 3);
p[0] = p[0] + (l + (double)n)[0];
m = m + 1;
o = o + 1;
if (o != f) //continue L_m;
}
}
if (a <= 0) goto B_a;
f = a & -2;
s = a & 1;
h = 0;
while (1) {
o = i + (h << 3);
r = o[0];
m = 0;
p = 0;
if (u) {
while (1) {
o[0] =
(r = ((q = d + h * 16000) + (n = m << (double)3))[0] * b *
(j + (double)n)[0] +
r);
o[0] = (r = (q + (n = n | (double)8))[0] * b * (j + (double)n)[0] + r);
m = m + 2;
p = p + 2;
if (p != f) //continue L_p;
}
}
if (s) {
o[0] =
((m = m << 3) + d + h * (double)16000)[0] * b * (j + (double)m)[0] + ;
}
h = h + 1;
if (h != a) //continue L_n;
}
B_a:;
}

int submain(int a, int_ptr b) {
int64_t * f;
int64_t d;
int64_t c;
double g;
int64_t * h;
int64_t q;
int64_t * e;
int64_t* j = stack_pointer - 48;
stack_pointer = j;
int64_t k = legalfunc_polybench_alloc_data(4000000L, 8);
int64_t r = legalfunc_polybench_alloc_data(2000L, 8);
int64_t m = legalfunc_polybench_alloc_data(2000L, 8);
int64_t s = legalfunc_polybench_alloc_data(2000L, 8);
int64_t n = legalfunc_polybench_alloc_data(2000L, 8);
int64_t o = legalfunc_polybench_alloc_data(2000L, 8);
int64_t i = legalfunc_polybench_alloc_data(2000L, 8);
int64_t p = legalfunc_polybench_alloc_data(2000L, 8);
int64_t l = legalfunc_polybench_alloc_data(2000L, 8);
while (1) {
(r + (c = (d = f) << (double)3))[0] = f64_convert_i32_s(d);
(c + s)[0] = (g = f64_convert_i32_s(f = d + 1) / 2000.0) * 0.5;
(c + m)[0] = g * 0.25;
(c + n)[0] = g / 6.0;
(c + p)[0] = g * 0.125;
(c + l)[0] = g / 9.0;
(c + i)[0] = 0L;
(c + o)[0] = 0L;
c = 0;
while (1) {
e = k + d * 16000;
e[c] = f64_convert_i32_s(c * d % 2000) / 2000.0;
e[h = c | (double)1] = f64_convert_i32_s(d * h % 2000) / 2000.0;
c = c + 2;
if (c != 2000) //continue L_b;
}
if (f != 2000) //continue L_a;
}
while (1) {
e = s + (c = q << 3);
h = c + r;
d = 0;
while (1) {
f = k + q * 16000;
int64_t * t = f + (c = d << 3);
t[0] = e[0] * (c + (double)n)[0] + h[0] * (c + (double)m)[0] + t[0];
f = f + (c = c | 8);
f[0] = e[0] * (c + (double)n)[0] + h[0] * (c + (double)m)[0] + f[0];
d = d + 2;
if (d != 2000) //continue L_d;
}
q = q + 1;
if (q != 2000) //continue L_c;
}
f = 0;
while (1) {
e = i + (d = f << 3);
g = e[0];
c = 0;
while (1) {
e[0] = (g = (k + c * 16000 + (double)d)[0] * 1.2 * (double)p[c] + g);
e[0] =
(g = (k + (h = c | 1) * 16000 + (double)d)[0] * 1.2 * (double)p[h] + g);
c = c + 2;
if (c != 2000) //continue L_f;
}
f = f + 1;
if (f != 2000) //continue L_e;
}
d = 0;
while (1) {
e = i + (c = d << 3);
e[0] = e[0] + (c + (double)l)[0];
h = i + (e = c | 8);
h[0] = h[0] + (e + (double)l)[0];
h = i + (e = c | 16);
h[0] = h[0] + (e + (double)l)[0];
e = i + (c = c | 24);
e[0] = e[0] + (c + (double)l)[0];
d = d + 4;
if (d != 2000) //continue L_g;
}
f = 0;
while (1) {
e = o + (f << 3);
g = e[0];
c = 0;
while (1) {
e[0] =
(g = ((h = k + f * 16000) + (d = c << (double)3))[0] * 1.5 *
(d + (double)i)[0] +
g);
e[0] =
(g = (h + (d = d | (double)8))[0] * 1.5 * (d + (double)i)[0] + g);
c = c + 2;
if (c != 2000) //continue L_i;
}
f = f + 1;
if (f != 2000) //continue L_h;
}
if (a < 43) goto B_j;
if (ubyte))((b[0])[0] goto B_j;
c = memory_base;
fwrite(c + 42, 22, 1, d = (int))stderr[0];
j[8] = c;
fiprintf(d, c + 2, j + 32);
c = 0;
while (1) {
if (eqz((c & 65535) % 20)) { fputc(10, d) }
j[2] = (double)o[c];
small_fprintf(d, memory_base + 17, j + 16);
c = c + 1;
if (c != 2000) //continue L_k;
}
j[0] = (c = memory_base);
fiprintf(d, c + 25, j);
fwrite(c + 65, 22, 1, d);
B_j:;
free(k);
free(r);
free(m);
free(s);
free(n);
free(o);
free(i);
free(p);
free(l);
stack_pointer = j + 48;
return 0;
}

int legalfunc_polybench_alloc_data(long a, int b) {
return legalimport_polybench_alloc_data(i32_wrap_i64(a),
i32_wrap_i64(a >> 32L),
b)
}