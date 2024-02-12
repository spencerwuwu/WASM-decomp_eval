

extern int64_t stack_pointer;
extern int64_t memory_base;
extern int64_t stderr;

data ()rodata(offset memory_base) =
"begin ()dump %s\00D\00%0.2lf \00\0aend ()dump %s\0a\00==BEGIN DUMP_ARR"
"AYS==\0a\00==END DUMP_ARRAYS==\0a\00";













void wasm_call_ctors() {
no;
}

void wasm_apply_data_relocs() {
no;
}

void init_array(int a, int b, int c, int d, long_ptr e, long_ptr f, int g, int h, int i, int j) {
int64_t n;
int64_t m;
double k;
int64_t l;
int64_t o;
e[0] = 4609434218613702656L;
f[0] = 4608083138725491507L;
if (a > 0) {
o = c & -2;
int64_t p = c & 1;
k = f64_convert_i32_s(a);
f = 0;
while (1) {
if (c <= 0) goto B_c;
e = 0;
l = 0;
if (c != 1) {
while (1) {
m = g + f * 8800;
m[e] = f64_convert_i32_s((e * f | 1) % a) / k;
m[n = e | (double)1] = f64_convert_i32_s((f * n + 1) % a) / k;
e = e + 2;
l = l + 2;
if (l != o) //continue L_e;
}
}
if (eqz(p)) goto B_c;
(g + f * 8800)[e] = f64_convert_i32_s((e * f + 1) % a) / k;
B_c:;
f = f + 1;
if (f != a) //continue L_b;
}
}
if (c > 0) {
g = b & -2;
o = b & 1;
k = f64_convert_i32_s(b);
f = 0;
while (1) {
if (b <= 0) goto B_h;
e = 0;
l = 0;
if (b != 1) {
while (1) {
m = h + f * 7200;
m[e] = f64_convert_i32_s((n = e | 1) * f % b) / k;
m[n] = f64_convert_i32_s((e = e + 2) * f % b) / k;
l = l + 2;
if (l != g) //continue L_j;
}
}
if (eqz(o)) goto B_h;
(h + f * 7200)[e] = f64_convert_i32_s((e + 1) * f % b) / k;
B_h:;
f = f + 1;
if (f != c) //continue L_g;
}
}
if (b > 0) {
k = f64_convert_i32_s(d);
f = 0;
while (1) {
e = 0;
if (d > 0) {
while (1) {
(i + f * (double)9600)[e] =
f64_convert_i32_s(((e + 3) * f + 1) % d) / k;
e = e + 1;
if (e != d) //continue L_n;
}
}
f = f + 1;
if (f != b) //continue L_l;
}
}
if (a > 0) {
n = d & -2;
h = d & 1;
k = f64_convert_i32_s(c);
f = 0;
while (1) {
if (d <= 0) goto B_q;
e = 0;
b = 0;
if (d != 1) {
while (1) {
l = j + f * 9600;
(l + (i = e << (double)3))[0] =
f64_convert_i32_s((m = e + 2) * f % c) / k;
(l + (i | 8))[0] = f64_convert_i32_s((e + 3) * f % c) / k;
e = m;
b = b + 2;
if (b != n) //continue L_s;
}
}
if (eqz(h)) goto B_q;
(j + f * 9600)[e] = f64_convert_i32_s((e + 2) * f % c) / k;
B_q:;
f = f + 1;
if (f != a) //continue L_p;
}
}
}

void print_array(int a, int b, int c) {
int64_t f;
int64_t g;
int64_t* e = stack_pointer - 48;
stack_pointer = e;
int64_t d = memory_base;
fwrite(d + 42, 22, 1, f = (int))stderr[0];
e[8] = d + 15;
fiprintf(f, d, e + 32);
if (a > 0) {
int64_t h = b <= 0;
while (1) {
if (eqz(h)) {
int64_t i = a * g;
d = 0;
while (1) {
if (eqz((d + i) % 20)) { fputc(10, f) }
e[2] = (c + g * (double)9600)[d];
small_fprintf(f, memory_base + 17, e + 16);
d = d + 1;
if (d != b) //continue L_d;
}
}
g = g + 1;
if (g != a) //continue L_b;
}
}
e[0] = (d = memory_base) + 15;
fiprintf(f, d + 25, e);
fwrite(d + 65, 22, 1, f);
stack_pointer = e + 48;
}

void kernel_2mm(int a, int b, int c, int d, double e, double f, int g, int h, int i, int j, int k) {
int64_t o;
int64_t u;
int64_t q;
int64_t p;
int64_t * n;
int64_t l;
double m;
int64_t r;
if (a <= 0) goto B_a;
int64_t s = c & -2;
int64_t v = c & 1;
while (1) {
int64_t t = 0;
if (b > 0) {
while (1) {
n = t << 3;
p = n + g + o * 7200;
p[0] = 0L;
if (c <= 0) goto B_e;
l = 0;
m = 0.0;
r = 0;
if (c != 1) {
while (1) {
(double)p[0] =
(m =
(u = h + o * (double)8800)[l] * e * (i + l * 7200 + (double)n)[0] + m);
(double)p[0] =
(m = u[q = l | (double)1] * e * (i + q * 7200 + (double)n)[0] + m);
l = l + 2;
r = r + 2;
if (r != s) //continue L_g;
}
}
if (eqz(v)) goto B_e;
(double)p[0] =
(h + o * (double)8800)[l] * e * (i + l * 7200 + (double)n)[0] + m;
B_e:;
t = t + 1;
if (t != b) //continue L_d;
}
}
o = o + 1;
if (o != a) //continue L_b;
}
if (a <= 0) goto B_a;
o = b & -2;
s = b & 1;
q = 0;
while (1) {
h = 0;
if (d > 0) {
while (1) {
p = h << 3;
n = p + k + q * 9600;
n[0] = (m = n[0] * f);
if (b <= 0) goto B_k;
l = 0;
r = 0;
if (b != 1) {
while (1) {
n[0] =
(m = (i = g + q * (double)7200)[l] * (j + l * 9600 + (double)p)[0] + m);
n[0] = (m = i[u = l | (double)1] * (j + u * 9600 + (double)p)[0] + m);
l = l + 2;
r = r + 2;
if (r != o) //continue L_m;
}
}
if (eqz(s)) goto B_k;
n[0] = (g + q * (double)7200)[l] * (j + l * 9600 + (double)p)[0] + m;
B_k:;
h = h + 1;
if (h != d) //continue L_j;
}
}
q = q + 1;
if (q != a) //continue L_h;
}
B_a:;
}

int submain(int a, int_ptr b) {
int64_t * d;
int64_t * g;
int64_t e;
int64_t c;
int64_t h;
int64_t j;
int64_t i;
double f;
int64_t m = legalfunc_polybench_alloc_data(720000L, 8);
int64_t n = legalfunc_polybench_alloc_data(880000L, 8);
int64_t k = legalfunc_polybench_alloc_data(990000L, 8);
int64_t o = legalfunc_polybench_alloc_data(1080000L, 8);
int64_t l = legalfunc_polybench_alloc_data(960000L, 8);
while (1) {
c = 0;
while (1) {
e = n + d * 8800;
e[c] = f64_convert_i32_s((c * d | 1) % 800) / 800.0;
e[g = c | (double)1] = f64_convert_i32_s((d * g + 1) % 800) / 800.0;
c = c + 2;
if (c != 1100) //continue L_b;
}
d = d + 1;
if (d != 800) //continue L_a;
}
d = 0;
while (1) {
c = 0;
while (1) {
e = k + d * 7200;
e[c] = f64_convert_i32_s((g = c | 1) * d % 900) / 900.0;
e[g] = f64_convert_i32_s((c = c + 2) * d % 900) / 900.0;
if (c != 900) //continue L_d;
}
d = d + 1;
if (d != 1100) //continue L_c;
}
d = 0;
while (1) {
c = 0;
while (1) {
(o + d * (double)9600)[c] =
f64_convert_i32_s(((c + 3) * d + 1) % 1200) / 1200.0;
c = c + 1;
if (c != 1200) //continue L_f;
}
d = d + 1;
if (d != 900) //continue L_e;
}
d = 0;
while (1) {
c = 0;
while (1) {
g = l + d * 9600;
(g + (h = c << (double)3))[0] =
f64_convert_i32_s((e = c + 2) * d % 1100) / 1100.0;
(g + (h | (double)8))[0] =
f64_convert_i32_s((c + 3) * d % 1100) / 1100.0;
c = e;
if (c != 1200) //continue L_h;
}
d = d + 1;
if (d != 800) //continue L_g;
}
while (1) {
i = 0;
while (1) {
d = i << 3;
e = d + m + j * 7200;
e[0] = 0L;
f = 0.0;
c = 0;
while (1) {
(double)e[0] =
(f =
(g = n + j * (double)8800)[c] * 1.5 * (k + c * 7200 + (double)d)[0] + f);
(double)e[0] =
(f = g[h = c | (double)1] * 1.5 * (k + h * 7200 + (double)d)[0] + f);
c = c + 2;
if (c != 1100) //continue L_k;
}
i = i + 1;
if (i != 900) //continue L_j;
}
j = j + 1;
if (j != 800) //continue L_i;
}
h = 0;
while (1) {
i = 0;
while (1) {
j = i << 3;
d = j + l + h * 9600;
d[0] = (f = d[0] * 1.2);
c = 0;
while (1) {
d[0] =
(f =
(e = m + h * 7200 + (c << (double)3))[0] * (g = o + c * 9600 + j)[0] +
f);
d[0] = (f = (double)e[1] * (g + (double)9600)[0] + f);
d[0] = (f = (double)e[2] * (g + (double)19200)[0] + f);
c = c + 3;
if (c != 900) //continue L_n;
}
i = i + 1;
if (i != 1200) //continue L_m;
}
h = h + 1;
if (h != 800) //continue L_l;
}
if (a < 43) goto B_o;
if (ubyte))((b[0])[0] goto B_o;
print_array(800, 1200, l);
B_o:;
free(m);
free(n);
free(k);
free(o);
free(l);
return 0;
}

int legalfunc_polybench_alloc_data(long a, int b) {
return legalimport_polybench_alloc_data(i32_wrap_i64(a),
i32_wrap_i64(a >> 32L),
b)
}