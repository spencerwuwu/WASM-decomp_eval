

extern int64_t stack_pointer;
extern int64_t memory_base;
extern int64_t stderr;

data ()rodata(offset memory_base) =
"begin ()dump %s\00corr\00%0.2lf \00\0aend ()dump %s\0a\00==BEGIN DUMP_"
"ARRAYS==\0a\00==END DUMP_ARRAYS==\0a\00";













void wasm_call_ctors() {
no;
}

void wasm_apply_data_relocs() {
no;
}

void kernel_correlation(int a, int b, double c, int d, int e, int f, int g) {
int64_t p;
int64_t * k;
double h;
int64_t j;
int64_t i;
int64_t l;
double r;
int64_t q;
int64_t n;
int64_t o;
int64_t m;
int64_t s;
if (a <= 0) goto B_a;
o = b & -4;
m = b & 3;
n = b <= 0;
s = b < 4;
while (1) {
j = f + (k = p << 3);
j[0] = 0L;
if (n) {
h = 0.0;
goto B_c;
}
l = 0;
h = 0.0;
i = 0;
q = 0;
if (eqz(s)) {
while (1) {
j[0] = (h = (d + i * 9600 + (double)k)[0] + h);
j[0] = (h = (d + (i | 1) * 9600 + (double)k)[0] + h);
j[0] = (h = (d + (i | 2) * 9600 + (double)k)[0] + h);
j[0] = (h = (d + (i | 3) * 9600 + (double)k)[0] + h);
i = i + 4;
q = q + 4;
if (q != o) //continue L_f;
}
}
if (eqz(m)) goto B_c;
while (1) {
j[0] = (h = (d + i * 9600 + (double)k)[0] + h);
i = i + 1;
l = l + 1;
if (l != m) //continue L_g;
}
B_c:;
j[0] = h / c;
p = p + 1;
if (p != a) //continue L_b;
}
if (a <= 0) goto B_a;
m = b & -2;
p = b & 1;
o = 0;
while (1) {
j = g + (k = o << 3);
j[0] = 0L;
if (b <= 0) {
h = 0.0;
goto B_i;
}
l = f + k;
i = 0;
h = 0.0;
q = 0;
if (b != 1) {
while (1) {
(double)j[0] =
(h = (r = (d + i * 9600 + (double)k)[0] - (double))l[0] * r + h);
(double)j[0] =
(h = (r = (d + (i | 1) * 9600 + (double)k)[0] - (double))l[0] * r + h);
i = i + 2;
q = q + 2;
if (q != m) //continue L_l;
}
}
if (eqz(p)) goto B_i;
(double)j[0] =
(h = (r = (d + i * 9600 + (double)k)[0] - (double))l[0] * r + h);
B_i:;
j[0] = select__if(1.0, h = sqrt(h / c), h <= 0.1);
o = o + 1;
if (o != a) //continue L_h;
}
B_a:;
if (b > 0) {
r = sqrt(c);
l = 0;
while (1) {
i = 0;
if (a > 0) {
while (1) {
j = i << 3;
k = j + d + l * 9600;
k[0] = (h = k[0] - (f + (double))j)[0];
k[0] = h / r * (g + (double)j)[0];
i = i + 1;
if (i != a) //continue L_p;
}
}
l = l + 1;
if (l != b) //continue L_n;
}
}
s = a - 1;
if (a >= 2) {
q = b & -2;
p = b & 1;
n = 0;
while (1) {
o = e + n * 9600;
(o + (j = n << (long)3))[0] = 4607182418800017408L;
n = n + 1;
m = n;
if (a > n) {
while (1) {
l = o + (k = m << 3);
l[0] = 0L;
if (b <= 0) {
h = 0.0;
goto B_u;
}
i = 0;
h = 0.0;
f = 0;
if (b != 1) {
while (1) {
(double)l[0] =
(h = ((g = d + i * 9600) + (double)j)[0] * (g + (double)k)[0] + h);
(double)l[0] =
(h = ((g = d + (i | 1) * 9600) + (double)j)[0] * (g + (double)k)[0] + h);
i = i + 2;
f = f + 2;
if (f != q) //continue L_x;
}
}
if (eqz(p)) goto B_u;
(double)l[0] =
(h = ((i = d + i * 9600) + (double)j)[0] * (i + (double)k)[0] + h);
B_u:;
(e + m * 9600 + j)[0] = h;
m = m + 1;
if (m != a) //continue L_t;
}
}
if (n != s) //continue L_r;
}
}
(e + s * 9600)[s] = 4607182418800017408L;
}

int submain(int a, int_ptr b) {
int64_t d;
int64_t i;
int64_t c;
int64_t f;
int64_t* e = stack_pointer - 48;
stack_pointer = e;
int64_t g = legalfunc_polybench_alloc_data(1680000L, 8);
int64_t h = legalfunc_polybench_alloc_data(1440000L, 8);
int64_t j = legalfunc_polybench_alloc_data(1200L, 8);
int64_t k = legalfunc_polybench_alloc_data(1200L, 8);
while (1) {
double l = f64_convert_i32_s(d);
c = 0;
while (1) {
f = g + d * 9600;
f[c] = f64_convert_i32_s(c * d) / 1200.0 + l;
f[i = c | (double)1] = f64_convert_i32_s(d * i) / 1200.0 + l;
c = c + 2;
if (c != 1200) //continue L_b;
}
d = d + 1;
if (d != 1400) //continue L_a;
}
kernel_correlation(1200, 1400, 1400.0, g, h, j, k);
if (a < 43) goto B_c;
if (ubyte))((b[0])[0] goto B_c;
c = memory_base;
fwrite(c + 45, 22, 1, f = (int))stderr[0];
e[8] = c + 15;
fiprintf(f, c, e + 32);
d = 0;
while (1) {
i = d * 1200;
c = 0;
while (1) {
if (eqz((c + i) % 20)) { fputc(10, f) }
e[2] = (h + d * (double)9600)[c];
small_fprintf(f, memory_base + 20, e + 16);
c = c + 1;
if (c != 1200) //continue L_e;
}
d = d + 1;
if (d != 1200) //continue L_d;
}
e[0] = (c = memory_base) + 15;
fiprintf(f, c + 28, e);
fwrite(c + 68, 22, 1, f);
B_c:;
free(g);
free(h);
free(j);
free(k);
stack_pointer = e + 48;
return 0;
}

int legalfunc_polybench_alloc_data(long a, int b) {
return legalimport_polybench_alloc_data(i32_wrap_i64(a),
i32_wrap_i64(a >> 32L),
b)
}