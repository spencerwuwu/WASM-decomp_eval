

extern int64_t stack_pointer;
extern int64_t memory_base;
extern int64_t stderr;

data ()rodata(offset memory_base) =
"begin ()dump %s\00R\00Q\00%0.2lf \00\0aend ()dump %s\0a\00==BEGIN DUMP"
"_ARRAYS==\0a\00==END DUMP_ARRAYS==\0a\00";















void wasm_call_ctors() {
no;
}

void wasm_apply_data_relocs() {
no;
}

void kernel_gramschmidt(int a, int b, int c, int d, int e) {
int64_t o;
double m;
int64_t * g;
int64_t l;
int64_t h;
int64_t s;
int64_t * n;
int64_t f;
double j;
int64_t k;
if (b > 0) {
int64_t p = a & -2;
int64_t q = a & 1;
int64_t v = a & -4;
int64_t u = a & 3;
int64_t r = a - 1;
int64_t w = a < 4;
while (1) {
int64_t i = o;
s = a <= 0;
if (eqz(s)) {
h = 0;
j = 0.0;
f = 0;
k = 0;
if (eqz(w)) {
while (1) {
g = i << 3;
m = (g + c + (f | 3) * (double)9600)[0];
j = m * m +
(m = (c + (f | 2) * 9600 + (double))g)[0] * m +
(m = (c + (f | 1) * 9600 + (double))g)[0] * m +
(m = (c + f * 9600 + (double))g)[0] * m + j;
f = f + 4;
k = k + 4;
if (k != v) //continue L_f;
}
}
if (u) {
while (1) {
m = (c + f * (double)9600)[i];
j = m * m + j;
f = f + 1;
h = h + 1;
if (h != u) //continue L_h;
}
}
f = i << 3;
h = f + d + i * 9600;
h[0] = sqrt(j);
if (s) goto B_c;
g = 0;
k = 0;
if (r) {
while (1) {
(e + (l = g * 9600) + (double)f)[0] =
(c + l + (double)f)[0] / (double)h[0];
(e + (l = (g | 1) * 9600) + (double)f)[0] =
(c + l + (double)f)[0] / (double)h[0];
g = g + 2;
k = k + 2;
if (k != p) //continue L_j;
}
}
if (eqz(q)) goto B_c;
(e + (g = g * 9600) + (double)f)[0] =
(c + g + (double)f)[0] / (double)h[0];
goto B_c;
}
(d + i * 9600)[i] = 0L;
B_c:;
o = i + 1;
int64_t t = o;
if (b > o) {
while (1) {
g = t << 3;
h = g + d + i * 9600;
h[0] = 0L;
if (s) goto B_m;
f = 0;
j = 0.0;
k = 0;
if (r) {
while (1) {
(double)h[0] =
(j =
((n = i << 3) + e + (l = f * (double)9600))[0] * (c + l + (double)g)[0] +
j);
(double)h[0] =
(j =
(e + (l = (f | 1) * 9600) + (double)n)[0] * (c + l + (double)g)[0] + j);
f = f + 2;
k = k + 2;
if (k != p) //continue L_o;
}
}
if (q) {
(double)h[0] =
(e + (f = f * (double)9600))[i] * (c + f + (double)g)[0] + ;
}
if (s) goto B_m;
f = 0;
k = 0;
if (r) {
while (1) {
n = c + (l = f * 9600) + g;
n[0] = n[0] - (e + l + (l = i << (double)3))[0] * (double)h[0];
int64_t * x = c + (n = (f | 1) * 9600) + g;
x[0] = x[0] - (e + n + (double)l)[0] * (double)h[0];
f = f + 2;
k = k + 2;
if (k != p) //continue L_r;
}
}
if (eqz(q)) goto B_m;
g = c + (f = f * 9600) + g;
g[0] = g[0] - (e + (double)f)[i] * (double)h[0];
B_m:;
t = t + 1;
if (t != b) //continue L_l;
}
}
if (b != o) //continue L_b;
}
}
}

int submain(int a, int_ptr b) {
int64_t * d;
int64_t e;
int64_t n;
int64_t c;
int64_t g;
int64_t * m;
int64_t* h = stack_pointer - 96;
stack_pointer = h;
int64_t i = legalfunc_polybench_alloc_data(1200000L, 8);
int64_t f = legalfunc_polybench_alloc_data(1440000L, 8);
int64_t j = legalfunc_polybench_alloc_data(1200000L, 8);
while (1) {
c = 0;
while (1) {
g = c << 3;
(g + i + (e = d * (double)9600))[0] =
f64_convert_i32_s(c * d % 1000) / 1000.0 * 100.0 + 10.0;
(e + j + g)[0] = 0L;
c = c + 1;
if (c != 1200) //continue L_b;
}
d = d + 1;
if (d != 1000) //continue L_a;
}
int64_t o = memset(f, 0, 11520000);
while (1) {
f = n;
double l = 0.0;
e = 0;
while (1) {
c = f << 3;
d = c + i + e * 9600;
double k = (d + (double)38400)[0];
l = k * k +
(k = (d + (double))28800)[0] * k +
(k = (d + (double))19200)[0] * k +
(k = (d + (double))9600)[0] * k + (k = d[0]) * k + l;
e = e + 5;
if (e != 1000) //continue L_d;
}
int64_t q = o + f * 9600;
e = q + c;
e[0] = sqrt(l);
d = 0;
while (1) {
(j + (g = d * 9600) + (double)c)[0] =
(g + i + (double)c)[0] / (double)e[0];
(j + (g = (d | 1) * 9600) + (double)c)[0] =
(g + i + (double)c)[0] / (double)e[0];
d = d + 2;
if (d != 1000) //continue L_e;
}
n = f + 1;
int64_t p = n;
if (f <= 1198) {
while (1) {
e = q + (d = p << 3);
e[0] = 0L;
g = 0;
l = 0.0;
f = 0;
while (1) {
(double)e[0] =
(l = (j + (m = f * 9600) + (double)c)[0] * (i + m + (double)d)[0] + l);
(double)e[0] =
(l =
(j + (m = (f | 1) * 9600) + (double)c)[0] * (i + m + (double)d)[0] + l);
f = f + 2;
if (f != 1000) //continue L_h;
}
while (1) {
m = i + (f = g * 9600) + d;
m[0] = m[0] - (f + j + (double)c)[0] * (double)e[0];
m = i + (f = (g | 1) * 9600) + d;
m[0] = m[0] - (f + j + (double)c)[0] * (double)e[0];
g = g + 2;
if (g != 1000) //continue L_i;
}
p = p + 1;
if (p != 1200) //continue L_g;
}
}
if (n != 1200) //continue L_c;
}
if (a < 43) goto B_j;
if (ubyte))((b[0])[0] goto B_j;
c = memory_base;
fwrite(c + 44, 22, 1, d = (int))stderr[0];
h[20] = c + 15;
fiprintf(d, c, h + 80);
e = 0;
while (1) {
g = e * 1200;
c = 0;
while (1) {
if (eqz((c + g) % 20)) { fputc(10, d) }
h[8] = (o + e * (double)9600)[c];
small_fprintf(d, memory_base + 19, h - -64);
c = c + 1;
if (c != 1200) //continue L_l;
}
e = e + 1;
if (e != 1200) //continue L_k;
}
h[12] = (c = memory_base) + 15;
fiprintf(d, c + 27, h + 48);
h[8] = c + 17;
fiprintf(d, c, h + 32);
e = 0;
while (1) {
g = e * 1200;
c = 0;
while (1) {
if (eqz((c + g) % 20)) { fputc(10, d) }
h[2] = (j + e * (double)9600)[c];
small_fprintf(d, memory_base + 19, h + 16);
c = c + 1;
if (c != 1200) //continue L_o;
}
e = e + 1;
if (e != 1000) //continue L_n;
}
h[0] = (c = memory_base) + 17;
fiprintf(d, c + 27, h);
fwrite(c + 67, 22, 1, d);
B_j:;
free(i);
free(o);
free(j);
stack_pointer = h + 96;
return 0;
}

int legalfunc_polybench_alloc_data(long a, int b) {
return legalimport_polybench_alloc_data(i32_wrap_i64(a),
i32_wrap_i64(a >> 32L),
b)
}