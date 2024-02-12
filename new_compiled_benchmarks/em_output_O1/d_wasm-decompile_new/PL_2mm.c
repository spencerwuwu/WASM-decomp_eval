

extern int64_t stack_pointer;
extern int64_t memory_base;
extern int64_t table_base;
extern int64_t stderr;

data ()rodata(offset memory_base) =
"begin ()dump %s\00D\00%0.2lf \00\0aend ()dump %s\0a\00==BEGIN DUMP_ARR"
"AYS==\0a\00==END DUMP_ARRAYS==\0a\00";













void wasm_call_ctors() {
}

void wasm_apply_data_relocs() {
}

void init_array(int a, int b, int c, int d, long_ptr e, long_ptr f, int g, int h, int i, int j) {
int64_t l;
double k;
e[0] = 4609434218613702656L;
f[0] = 4608083138725491507L;
if (a < 1) goto B_a;
k = f64_convert_i32_s(a);
e = 0;
while (1) {
f = e;
e = 0;
if (c <= 0) goto B_c;
while (1) {
(g + f * 8800)[e = (double)e] = f64_convert_i32_s((e * f + 1) % a) / k;
l = e + 1;
e = l;
if (l != c) //continue L_d;
}
B_c:;
f = f + 1;
e = f;
if (f != a) //continue L_b;
}
B_a:;
if (c < 1) goto B_e;
k = f64_convert_i32_s(b);
e = 0;
while (1) {
f = e;
l = 0;
if (b <= 0) goto B_g;
while (1) {
(h + f * 7200)[e = (double)l] =
f64_convert_i32_s((e = e + 1) * f % b) / k;
l = e;
if (e != b) //continue L_h;
}
B_g:;
f = f + 1;
e = f;
if (f != c) //continue L_f;
}
B_e:;
if (b < 1) goto B_i;
k = f64_convert_i32_s(d);
e = 0;
while (1) {
f = e;
e = 0;
if (d <= 0) goto B_k;
while (1) {
(i + f * 9600)[e = (double)e] =
f64_convert_i32_s(((e + 3) * f + 1) % d) / k;
l = e + 1;
e = l;
if (l != d) //continue L_l;
}
B_k:;
f = f + 1;
e = f;
if (f != b) //continue L_j;
}
B_i:;
if (a < 1) goto B_m;
k = f64_convert_i32_s(c);
l = d < 1;
e = 0;
while (1) {
b = e;
e = 0;
if (l) goto B_o;
while (1) {
(j + b * 9600)[e = (double)e] = f64_convert_i32_s((e + 2) * b % c) / k;
f = e + 1;
e = f;
if (f != d) //continue L_p;
}
B_o:;
b = b + 1;
e = b;
if (b != a) //continue L_n;
}
B_m:;
}

void print_array(int a, int b, int c) {
int64_t f;
int64_t* d = stack_pointer - 48;
stack_pointer = d;
int64_t e = memory_base;
fwrite(e + 42, 22, 1, f = (int))stderr[0];
d[8] = e + 15;
fiprintf(f, e + 0, d + 32);
if (a < 1) goto B_a;
int64_t g = b < 1;
e = 0;
while (1) {
int64_t h = e;
if (g) goto B_c;
int64_t i = h * a;
e = 0;
while (1) {
e = e;
if ((e + i) % 20) goto B_e;
fputc(10, f);
B_e:;
d[2] = (c + h * (double)9600)[e];
small_fprintf(f, memory_base + 17, d + 16);
int64_t j = e + 1;
e = j;
if (j != b) //continue L_d;
}
B_c:;
h = h + 1;
e = h;
if (h != a) //continue L_b;
}
B_a:;
d[0] = (e = memory_base) + 15;
fiprintf(f, e + 25, d);
fwrite(e + 65, 22, 1, f);
stack_pointer = d + 48;
}

void kernel_2mm(int a, int b, int c, int d, double e, double f, int g, int h, int i, int j, int k) {
int64_t p;
int64_t q;
int64_t t;
int64_t l;
int64_t n;
int64_t o;
int64_t r;
double s;
l = a < 1;
if (l) goto B_a;
int64_t m = c < 1;
n = 0;
while (1) {
o = n;
n = 0;
if (b <= 0) goto B_c;
while (1) {
r = g + o * 7200 + (q = (p = n) << 3);
r[0] = 0L;
if (m) goto B_e;
s = (double)r[0];
n = 0;
while (1) {
(double)r[0] =
(s =
(h + o * 8800)[n = (double)n] * e * (i + n * 7200 + (double)q)[0] + s);
s = s;
t = n + 1;
n = t;
if (t != c) //continue L_f;
}
B_e:;
t = p + 1;
n = t;
if (t != b) //continue L_d;
}
B_c:;
t = o + 1;
n = t;
if (t != a) //continue L_b;
}
B_a:;
if (l) goto B_g;
i = d < 1;
n = 0;
while (1) {
o = n;
n = 0;
if (i) goto B_i;
while (1) {
r = k + o * 9600 + (q = (c = n) << 3);
r[0] = (double)r[0] * f;
if (b < 1) goto B_k;
s = (double)r[0];
n = 0;
while (1) {
(double)r[0] =
(s = (g + o * 7200)[n = (double)n] * (j + n * 9600 + (double)q)[0] + s);
s = s;
t = n + 1;
n = t;
if (t != b) //continue L_l;
}
B_k:;
t = c + 1;
n = t;
if (t != d) //continue L_j;
}
B_i:;
t = o + 1;
n = t;
if (t != a) //continue L_h;
}
B_g:;
}

int submain(int a, int_ptr b) {
int64_t i;
int64_t * j;
int64_t k;
int64_t l;
double n;
int64_t m;
int64_t c = legalfunc_polybench_alloc_data(720000L, 8);
int64_t d = legalfunc_polybench_alloc_data(880000L, 8);
int64_t e = legalfunc_polybench_alloc_data(990000L, 8);
int64_t f = legalfunc_polybench_alloc_data(1080000L, 8);
int64_t g = legalfunc_polybench_alloc_data(960000L, 8);
int64_t h = 0;
while (1) {
i = h;
h = 0;
while (1) {
(d + i * 8800)[h = (double)h] =
f64_convert_i32_s((h * i + 1) % 800) / 800.0;
j = h + 1;
h = j;
if (j != 1100) //continue L_b;
}
i = i + 1;
h = i;
if (i != 800) //continue L_a;
}
h = 0;
while (1) {
i = h;
j = 0;
while (1) {
(e + i * 7200)[h = (double)j] =
f64_convert_i32_s((h = h + 1) * i % 900) / 900.0;
j = h;
if (h != 900) //continue L_d;
}
i = i + 1;
h = i;
if (i != 1100) //continue L_c;
}
h = 0;
while (1) {
i = h;
h = 0;
while (1) {
(f + i * 9600)[h = (double)h] =
f64_convert_i32_s(((h + 3) * i + 1) % 1200) / 1200.0;
j = h + 1;
h = j;
if (j != 1200) //continue L_f;
}
i = i + 1;
h = i;
if (i != 900) //continue L_e;
}
h = 0;
while (1) {
i = h;
h = 0;
while (1) {
(g + i * 9600)[h = (double)h] =
f64_convert_i32_s((h + 2) * i % 1100) / 1100.0;
j = h + 1;
h = j;
if (j != 1200) //continue L_h;
}
i = i + 1;
h = i;
if (i != 800) //continue L_g;
}
h = 0;
while (1) {
j = h;
h = 0;
while (1) {
m = c + j * 7200 + (l = (k = h) << 3);
m[0] = 0L;
n = 0.0;
h = 0;
while (1) {
(double)m[0] =
(n =
(d + j * 8800)[h = (double)h] * 1.5 * (e + h * 7200 + (double)l)[0] + n);
n = n;
i = h + 1;
h = i;
if (i != 1100) //continue L_k;
}
i = k + 1;
h = i;
if (i != 900) //continue L_j;
}
i = j + 1;
h = i;
if (i != 800) //continue L_i;
}
h = 0;
while (1) {
l = h;
h = 0;
while (1) {
j = g + l * 9600 + (m = (k = h) << 3);
j[0] = (n = j[0] * 1.2);
n = n;
h = 0;
while (1) {
j[0] =
(n = (c + l * 7200)[h = (double)h] * (f + h * 9600 + (double)m)[0] + n);
n = n;
i = h + 1;
h = i;
if (i != 900) //continue L_n;
}
i = k + 1;
h = i;
if (i != 1200) //continue L_m;
}
i = l + 1;
h = i;
if (i != 800) //continue L_l;
}
if (a < 43) goto B_o;
if (ubyte))((b[0])[0] goto B_o;
print_array(800, 1200, g);
B_o:;
free(c);
free(d);
free(e);
free(f);
free(g);
return 0;
}

int legalfunc_polybench_alloc_data(long a, int b) {
return legalimport_polybench_alloc_data(i32_wrap_i64(a),
i32_wrap_i64(a >> 32L),
b)
}