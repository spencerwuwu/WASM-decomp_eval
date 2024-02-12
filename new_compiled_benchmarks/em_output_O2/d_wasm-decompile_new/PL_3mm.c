

extern int64_t stack_pointer;
extern int64_t memory_base;
extern int64_t stderr;

data ()rodata(offset memory_base) =
"begin ()dump %s\00G\00%0.2lf \00\0aend ()dump %s\0a\00==BEGIN DUMP_ARR"
"AYS==\0a\00==END DUMP_ARRAYS==\0a\00";













void wasm_call_ctors() {
no;
}

void wasm_apply_data_relocs() {
no;
}

void init_array(int a, int b, int c, int d, int e, int f, int g, int h, int i) {
int64_t j;
int64_t o;
int64_t m;
int64_t k;
double l;
int64_t n;
if (a > 0) {
int64_t p = c & -2;
int64_t q = c & 1;
l = f64_convert_i32_s(a * 5);
while (1) {
if (c <= 0) goto B_c;
k = 0;
m = 0;
if (c != 1) {
while (1) {
n = f + j * 8000;
n[k] = f64_convert_i32_s((j * k | 1) % a) / l;
n[o = k | (double)1] = f64_convert_i32_s((j * o + 1) % a) / l;
k = k + 2;
m = m + 2;
if (m != p) //continue L_e;
}
}
if (eqz(q)) goto B_c;
(f + j * 8000)[k] = f64_convert_i32_s((j * k + 1) % a) / l;
B_c:;
j = j + 1;
if (j != a) //continue L_b;
}
}
if (c > 0) {
o = b & -2;
f = b & 1;
l = f64_convert_i32_s(b * 5);
j = 0;
while (1) {
if (b <= 0) goto B_h;
k = 0;
a = 0;
if (b != 1) {
while (1) {
m = g + j * 7200;
m[k] = f64_convert_i32_s(((n = k | 1) * j + 2) % b) / l;
m[n] = f64_convert_i32_s(((k = k + 2) * j + 2) % b) / l;
a = a + 2;
if (a != o) //continue L_j;
}
}
if (eqz(f)) goto B_h;
(g + j * (double)7200)[k] =
f64_convert_i32_s(((k + 1) * j + 2) % b) / l;
B_h:;
j = j + 1;
if (j != c) //continue L_g;
}
}
if (b > 0) {
o = e & -2;
g = e & 1;
l = f64_convert_i32_s(d * 5);
j = 0;
while (1) {
if (e <= 0) goto B_m;
k = 0;
a = 0;
if (e != 1) {
while (1) {
m = h + j * 9600;
(m + (n = k << (double)3))[0] = f64_convert_i32_s((k + 3) * j % d) / l;
(m + (n | 8))[0] = f64_convert_i32_s((k + 4) * j % d) / l;
k = k + 2;
a = a + 2;
if (a != o) //continue L_o;
}
}
if (eqz(g)) goto B_m;
(h + j * 9600)[k] = f64_convert_i32_s((k + 3) * j % d) / l;
B_m:;
j = j + 1;
if (j != b) //continue L_l;
}
}
if (e > 0) {
l = f64_convert_i32_s(c * 5);
j = 0;
b = d <= 0;
while (1) {
k = 0;
if (eqz(b)) {
while (1) {
(i + j * (double)8800)[k] =
f64_convert_i32_s(((k + 2) * j + 2) % c) / l;
k = k + 1;
if (k != d) //continue L_s;
}
}
j = j + 1;
if (j != e) //continue L_q;
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
e[2] = (c + g * (double)8800)[d];
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

void kernel_3mm(int a, int b, int c, int d, int e, int f, int g, int h, int i, int j, int k, int l) {
int64_t o;
int64_t r;
int64_t s;
int64_t p;
int64_t q;
int64_t m;
double n;
int64_t t;
int64_t u;
if (a > 0) {
u = c & -2;
int64_t w = c & 1;
while (1) {
int64_t v = 0;
if (b > 0) {
while (1) {
p = v << 3;
q = p + f + o * 7200;
q[0] = 0L;
if (c <= 0) goto B_e;
m = 0;
n = 0.0;
t = 0;
if (c != 1) {
while (1) {
(double)q[0] =
(n = (r = g + o * (double)8000)[m] * (h + m * 7200 + (double)p)[0] + n);
(double)q[0] =
(n = r[s = m | (double)1] * (h + s * 7200 + (double)p)[0] + n);
m = m + 2;
t = t + 2;
if (t != u) //continue L_g;
}
}
if (eqz(w)) goto B_e;
(double)q[0] =
(g + o * (double)8000)[m] * (h + m * 7200 + (double)p)[0] + n;
B_e:;
v = v + 1;
if (v != b) //continue L_d;
}
}
o = o + 1;
if (o != a) //continue L_b;
}
}
if (b > 0) {
o = e & -2;
u = e & 1;
s = 0;
while (1) {
g = 0;
if (d > 0) {
while (1) {
p = g << 3;
q = p + i + s * 8800;
q[0] = 0L;
if (e <= 0) goto B_l;
m = 0;
n = 0.0;
t = 0;
if (e != 1) {
while (1) {
(double)q[0] =
(n = (h = j + s * (double)9600)[m] * (k + m * 8800 + (double)p)[0] + n);
(double)q[0] =
(n = h[r = m | (double)1] * (k + r * 8800 + (double)p)[0] + n);
m = m + 2;
t = t + 2;
if (t != o) //continue L_n;
}
}
if (eqz(u)) goto B_l;
(double)q[0] =
(j + s * (double)9600)[m] * (k + m * 8800 + (double)p)[0] + n;
B_l:;
g = g + 1;
if (g != d) //continue L_k;
}
}
s = s + 1;
if (s != b) //continue L_i;
}
}
if (a > 0) {
s = b & -2;
j = b & 1;
r = 0;
while (1) {
o = 0;
if (d > 0) {
while (1) {
p = o << 3;
q = p + l + r * 8800;
q[0] = 0L;
if (b <= 0) goto B_s;
m = 0;
n = 0.0;
t = 0;
if (b != 1) {
while (1) {
(double)q[0] =
(n = (k = f + r * (double)7200)[m] * (i + m * 8800 + (double)p)[0] + n);
(double)q[0] =
(n = k[h = m | (double)1] * (i + h * 8800 + (double)p)[0] + n);
m = m + 2;
t = t + 2;
if (t != s) //continue L_u;
}
}
if (eqz(j)) goto B_s;
(double)q[0] =
(f + r * (double)7200)[m] * (i + m * 8800 + (double)p)[0] + n;
B_s:;
o = o + 1;
if (o != d) //continue L_r;
}
}
r = r + 1;
if (r != a) //continue L_p;
}
}
}

int submain(int a, int_ptr b) {
int64_t d;
int64_t * g;
int64_t f;
int64_t c;
int64_t j;
int64_t i;
int64_t h;
double e;
int64_t l = legalfunc_polybench_alloc_data(720000L, 8);
int64_t m = legalfunc_polybench_alloc_data(800000L, 8);
int64_t k = legalfunc_polybench_alloc_data(900000L, 8);
int64_t n = legalfunc_polybench_alloc_data(990000L, 8);
int64_t o = legalfunc_polybench_alloc_data(1080000L, 8);
int64_t p = legalfunc_polybench_alloc_data(1320000L, 8);
int64_t q = legalfunc_polybench_alloc_data(880000L, 8);
while (1) {
c = 0;
while (1) {
f = m + d * 8000;
f[c] = f64_convert_i32_s((c * d | 1) % 800) / 4000.0;
f[g = c | (double)1] = f64_convert_i32_s((d * g + 1) % 800) / 4000.0;
c = c + 2;
if (c != 1000) //continue L_b;
}
d = d + 1;
if (d != 800) //continue L_a;
}
d = 0;
while (1) {
c = 0;
while (1) {
f = k + d * 7200;
f[c] = f64_convert_i32_s(((g = c | 1) * d + 2) % 900) / 4500.0;
f[g] = f64_convert_i32_s(((c = c + 2) * d + 2) % 900) / 4500.0;
if (c != 900) //continue L_d;
}
d = d + 1;
if (d != 1000) //continue L_c;
}
d = 0;
while (1) {
c = 0;
while (1) {
f = o + d * 9600;
(f + (g = c << (double)3))[0] =
f64_convert_i32_s((c + 3) * d % 1100) / 5500.0;
(f + (g | (double)8))[0] =
f64_convert_i32_s((c + 4) * d % 1100) / 5500.0;
c = c + 2;
if (c != 1200) //continue L_f;
}
d = d + 1;
if (d != 900) //continue L_e;
}
d = 0;
while (1) {
c = 0;
while (1) {
(p + d * (double)8800)[c] =
f64_convert_i32_s(((c + 2) * d + 2) % 1000) / 5000.0;
c = c + 1;
if (c != 1100) //continue L_h;
}
d = d + 1;
if (d != 1200) //continue L_g;
}
while (1) {
h = 0;
while (1) {
d = h << 3;
f = d + l + j * 7200;
f[0] = 0L;
e = 0.0;
c = 0;
while (1) {
(double)f[0] =
(e = (g = m + j * (double)8000)[c] * (k + c * 7200 + (double)d)[0] + e);
(double)f[0] =
(e = g[i = c | (double)1] * (k + i * 7200 + (double)d)[0] + e);
c = c + 2;
if (c != 1000) //continue L_k;
}
h = h + 1;
if (h != 900) //continue L_j;
}
j = j + 1;
if (j != 800) //continue L_i;
}
i = 0;
while (1) {
h = 0;
while (1) {
j = h << 3;
d = j + n + i * 8800;
d[0] = 0L;
e = 0.0;
c = 0;
while (1) {
(double)d[0] =
(e =
(f = o + i * 9600 + (c << (double)3))[0] * (g = p + c * 8800 + j)[0] +
e);
d[0] = (e = (double)f[1] * (g + (double)8800)[0] + e);
d[0] = (e = (double)f[2] * (g + (double)17600)[0] + e);
c = c + 3;
if (c != 1200) //continue L_n;
}
h = h + 1;
if (h != 1100) //continue L_m;
}
i = i + 1;
if (i != 900) //continue L_l;
}
i = 0;
while (1) {
h = 0;
while (1) {
j = h << 3;
d = j + q + i * 8800;
d[0] = 0L;
e = 0.0;
c = 0;
while (1) {
(double)d[0] =
(e =
(f = l + i * 7200 + (c << (double)3))[0] * (g = n + c * 8800 + j)[0] +
e);
d[0] = (e = (double)f[1] * (g + (double)8800)[0] + e);
d[0] = (e = (double)f[2] * (g + (double)17600)[0] + e);
c = c + 3;
if (c != 900) //continue L_q;
}
h = h + 1;
if (h != 1100) //continue L_p;
}
i = i + 1;
if (i != 800) //continue L_o;
}
if (a < 43) goto B_r;
if (ubyte))((b[0])[0] goto B_r;
print_array(800, 1100, q);
B_r:;
free(l);
free(m);
free(k);
free(n);
free(o);
free(p);
free(q);
return 0;
}

int legalfunc_polybench_alloc_data(long a, int b) {
return legalimport_polybench_alloc_data(i32_wrap_i64(a),
i32_wrap_i64(a >> 32L),
b)
}