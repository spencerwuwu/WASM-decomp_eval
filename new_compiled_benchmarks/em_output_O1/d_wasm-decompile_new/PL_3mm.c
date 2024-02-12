

extern int64_t stack_pointer;
extern int64_t memory_base;
extern int64_t table_base;
extern int64_t stderr;

data ()rodata(offset memory_base) =
"begin ()dump %s\00G\00%0.2lf \00\0aend ()dump %s\0a\00==BEGIN DUMP_ARR"
"AYS==\0a\00==END DUMP_ARRAYS==\0a\00";













void wasm_call_ctors() {
}

void wasm_apply_data_relocs() {
}

void init_array(int a, int b, int c, int d, int e, int f, int g, int h, int i) {
int64_t k;
int64_t l;
int64_t m;
double j;
if (a < 1) goto B_a;
j = f64_convert_i32_s(a * 5);
k = 0;
while (1) {
l = k;
k = 0;
if (c <= 0) goto B_c;
while (1) {
(f + l * 8000)[k = (double)k] = f64_convert_i32_s((k * l + 1) % a) / j;
m = k + 1;
k = m;
if (m != c) //continue L_d;
}
B_c:;
l = l + 1;
k = l;
if (l != a) //continue L_b;
}
B_a:;
if (c < 1) goto B_e;
j = f64_convert_i32_s(b * 5);
k = 0;
while (1) {
l = k;
m = 0;
if (b <= 0) goto B_g;
while (1) {
(g + l * 7200)[k = (double)m] =
f64_convert_i32_s(((k = k + 1) * l + 2) % b) / j;
m = k;
if (k != b) //continue L_h;
}
B_g:;
l = l + 1;
k = l;
if (l != c) //continue L_f;
}
B_e:;
if (b < 1) goto B_i;
j = f64_convert_i32_s(d * 5);
k = 0;
while (1) {
l = k;
k = 0;
if (e <= 0) goto B_k;
while (1) {
(h + l * 9600)[k = (double)k] = f64_convert_i32_s((k + 3) * l % d) / j;
m = k + 1;
k = m;
if (m != e) //continue L_l;
}
B_k:;
l = l + 1;
k = l;
if (l != b) //continue L_j;
}
B_i:;
if (e < 1) goto B_m;
j = f64_convert_i32_s(c * 5);
m = d < 1;
k = 0;
while (1) {
b = k;
k = 0;
if (m) goto B_o;
while (1) {
(i + b * 8800)[k = (double)k] =
f64_convert_i32_s(((k + 2) * b + 2) % c) / j;
l = k + 1;
k = l;
if (l != d) //continue L_p;
}
B_o:;
b = b + 1;
k = b;
if (b != e) //continue L_n;
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
d[2] = (c + h * (double)8800)[e];
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

void kernel_3mm(int a, int b, int c, int d, int e, int f, int g, int h, int i, int j, int k, int l) {
int64_t p;
int64_t q;
int64_t t;
int64_t n;
int64_t o;
int64_t r;
double s;
if (a < 1) goto B_a;
int64_t m = c < 1;
n = 0;
while (1) {
o = n;
n = 0;
if (b <= 0) goto B_c;
while (1) {
r = f + o * 7200 + (q = (p = n) << 3);
r[0] = 0L;
if (m) goto B_e;
s = (double)r[0];
n = 0;
while (1) {
(double)r[0] =
(s = (g + o * 8000)[n = (double)n] * (h + n * 7200 + (double)q)[0] + s);
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
if (b < 1) goto B_g;
h = e < 1;
n = 0;
while (1) {
o = n;
n = 0;
if (d <= 0) goto B_i;
while (1) {
r = i + o * 8800 + (q = (c = n) << 3);
r[0] = 0L;
if (h) goto B_k;
s = (double)r[0];
n = 0;
while (1) {
(double)r[0] =
(s = (j + o * 9600)[n = (double)n] * (k + n * 8800 + (double)q)[0] + s);
s = s;
t = n + 1;
n = t;
if (t != e) //continue L_l;
}
B_k:;
t = c + 1;
n = t;
if (t != d) //continue L_j;
}
B_i:;
t = o + 1;
n = t;
if (t != b) //continue L_h;
}
B_g:;
if (a < 1) goto B_m;
c = d < 1;
n = 0;
while (1) {
o = n;
n = 0;
if (c) goto B_o;
while (1) {
r = l + o * 8800 + (q = (e = n) << 3);
r[0] = 0L;
if (b < 1) goto B_q;
s = (double)r[0];
n = 0;
while (1) {
(double)r[0] =
(s = (f + o * 7200)[n = (double)n] * (i + n * 8800 + (double)q)[0] + s);
s = s;
t = n + 1;
n = t;
if (t != b) //continue L_r;
}
B_q:;
t = e + 1;
n = t;
if (t != d) //continue L_p;
}
B_o:;
t = o + 1;
n = t;
if (t != a) //continue L_n;
}
B_m:;
}

int submain(int a, int_ptr b) {
int64_t k;
int64_t l;
int64_t m;
int64_t n;
int64_t o;
double p;
int64_t c = legalfunc_polybench_alloc_data(720000L, 8);
int64_t d = legalfunc_polybench_alloc_data(800000L, 8);
int64_t e = legalfunc_polybench_alloc_data(900000L, 8);
int64_t f = legalfunc_polybench_alloc_data(990000L, 8);
int64_t g = legalfunc_polybench_alloc_data(1080000L, 8);
int64_t h = legalfunc_polybench_alloc_data(1320000L, 8);
int64_t i = legalfunc_polybench_alloc_data(880000L, 8);
int64_t j = 0;
while (1) {
k = j;
j = 0;
while (1) {
(d + k * 8000)[j = (double)j] =
f64_convert_i32_s((j * k + 1) % 800) / 4000.0;
l = j + 1;
j = l;
if (l != 1000) //continue L_b;
}
k = k + 1;
j = k;
if (k != 800) //continue L_a;
}
j = 0;
while (1) {
k = j;
l = 0;
while (1) {
(e + k * 7200)[j = (double)l] =
f64_convert_i32_s(((j = j + 1) * k + 2) % 900) / 4500.0;
l = j;
if (j != 900) //continue L_d;
}
k = k + 1;
j = k;
if (k != 1000) //continue L_c;
}
j = 0;
while (1) {
k = j;
j = 0;
while (1) {
(g + k * 9600)[j = (double)j] =
f64_convert_i32_s((j + 3) * k % 1100) / 5500.0;
l = j + 1;
j = l;
if (l != 1200) //continue L_f;
}
k = k + 1;
j = k;
if (k != 900) //continue L_e;
}
j = 0;
while (1) {
k = j;
j = 0;
while (1) {
(h + k * 8800)[j = (double)j] =
f64_convert_i32_s(((j + 2) * k + 2) % 1000) / 5000.0;
l = j + 1;
j = l;
if (l != 1100) //continue L_h;
}
k = k + 1;
j = k;
if (k != 1200) //continue L_g;
}
j = 0;
while (1) {
l = j;
j = 0;
while (1) {
o = c + l * 7200 + (n = (m = j) << 3);
o[0] = 0L;
p = 0.0;
j = 0;
while (1) {
(double)o[0] =
(p = (d + l * 8000)[j = (double)j] * (e + j * 7200 + (double)n)[0] + p);
p = p;
k = j + 1;
j = k;
if (k != 1000) //continue L_k;
}
k = m + 1;
j = k;
if (k != 900) //continue L_j;
}
k = l + 1;
j = k;
if (k != 800) //continue L_i;
}
j = 0;
while (1) {
l = j;
j = 0;
while (1) {
o = f + l * 8800 + (n = (m = j) << 3);
o[0] = 0L;
p = 0.0;
j = 0;
while (1) {
(double)o[0] =
(p = (g + l * 9600)[j = (double)j] * (h + j * 8800 + (double)n)[0] + p);
p = p;
k = j + 1;
j = k;
if (k != 1200) //continue L_n;
}
k = m + 1;
j = k;
if (k != 1100) //continue L_m;
}
k = l + 1;
j = k;
if (k != 900) //continue L_l;
}
j = 0;
while (1) {
l = j;
j = 0;
while (1) {
o = i + l * 8800 + (n = (m = j) << 3);
o[0] = 0L;
p = 0.0;
j = 0;
while (1) {
(double)o[0] =
(p = (c + l * 7200)[j = (double)j] * (f + j * 8800 + (double)n)[0] + p);
p = p;
k = j + 1;
j = k;
if (k != 900) //continue L_q;
}
k = m + 1;
j = k;
if (k != 1100) //continue L_p;
}
k = l + 1;
j = k;
if (k != 800) //continue L_o;
}
if (a < 43) goto B_r;
if (ubyte))((b[0])[0] goto B_r;
print_array(800, 1100, i);
B_r:;
free(c);
free(d);
free(e);
free(f);
free(g);
free(h);
free(i);
return 0;
}

int legalfunc_polybench_alloc_data(long a, int b) {
return legalimport_polybench_alloc_data(i32_wrap_i64(a),
i32_wrap_i64(a >> 32L),
b)
}