

extern int64_t stack_pointer;
extern int64_t memory_base;
extern int64_t stderr;

data ()rodata(offset memory_base) =
"begin ()dump %s\00C\00%0.2lf \00\0aend ()dump %s\0a\00==BEGIN DUMP_ARR"
"AYS==\0a\00==END DUMP_ARRAYS==\0a\00";













void wasm_call_ctors() {
no;
}

void wasm_apply_data_relocs() {
no;
}

void kernel_syrk(int a, int b, double c, double d, int e, int f) {
int64_t i;
int64_t * j;
int64_t * h;
int64_t * k;
int64_t * l;
int64_t o;
if (a > 0) {
int64_t m = 1;
while (1) {
int64_t * n = m & 3;
int64_t g = 0;
if (i >= 3) {
o = m & -4;
l = 0;
while (1) {
h = e + i * 9600;
k = h + (j = g << 3);
k[0] = k[0] * d;
k = h + (j | 8);
k[0] = k[0] * d;
k = h + (j | 16);
k[0] = k[0] * d;
h = h + (j | 24);
h[0] = h[0] * d;
g = g + 4;
l = l + 4;
if (l != o) //continue L_d;
}
}
h = 0;
if (n) {
while (1) {
j = e + i * 9600 + (g << 3);
j[0] = j[0] * d;
g = g + 1;
h = h + 1;
if (h != n) //continue L_f;
}
}
if (b > 0) {
o = m & -2;
int64_t q = m & 1;
int64_t p = 0;
while (1) {
h = p << 3;
j = h + f + i * 8000;
g = 0;
l = 0;
if (i) {
while (1) {
k = e + i * 9600;
n = k + (g << 3);
n[0] = j[0] * c * (f + g * 8000 + (double)h)[0] + n[0];
k = k + ((n = g | 1) << 3);
k[0] = j[0] * c * (f + n * 8000 + (double)h)[0] + k[0];
g = g + 2;
l = l + 2;
if (l != o) //continue L_j;
}
}
if (q) {
l = e + i * 9600 + (g << 3);
l[0] = j[0] * c * (f + g * 8000 + (double)h)[0] + l[0];
}
p = p + 1;
if (p != b) //continue L_h;
}
}
m = m + 1;
i = i + 1;
if (i != a) //continue L_b;
}
}
}

int submain(int a, int_ptr b) {
int64_t * d;
int64_t * f;
int64_t * e;
int64_t c;
int64_t l;
int64_t g;
int64_t n;
int64_t * m;
int64_t * h;
int64_t* i = stack_pointer - 48;
stack_pointer = i;
int64_t j = legalfunc_polybench_alloc_data(1440000L, 8);
int64_t k = legalfunc_polybench_alloc_data(1200000L, 8);
while (1) {
c = 0;
while (1) {
e = k + d * 8000;
e[c] = f64_convert_i32_s((c * d | 1) % 1200) / 1200.0;
e[f = c | (double)1] = f64_convert_i32_s((d * f + 1) % 1200) / 1200.0;
c = c + 2;
if (c != 1000) //continue L_b;
}
d = d + 1;
if (d != 1200) //continue L_a;
}
d = 0;
while (1) {
c = 0;
while (1) {
e = j + d * 9600;
e[c] = f64_convert_i32_s((c * d + 2) % 1000) / 1000.0;
e[f = c | (double)1] = f64_convert_i32_s((d * f + 2) % 1000) / 1000.0;
c = c + 2;
if (c != 1200) //continue L_d;
}
l = 1;
d = d + 1;
if (d != 1200) //continue L_c;
}
while (1) {
int64_t o = l & 3;
f = 0;
c = 0;
if (g >= 3) {
n = l & 2147483644;
m = 0;
while (1) {
d = j + g * 9600;
h = d + (e = c << 3);
h[0] = h[0] * 1.2;
h = d + (e | 8);
h[0] = h[0] * 1.2;
h = d + (e | 16);
h[0] = h[0] * 1.2;
d = d + (e | 24);
d[0] = d[0] * 1.2;
c = c + 4;
m = m + 4;
if (m != n) //continue L_g;
}
}
if (o) {
while (1) {
d = j + g * 9600 + (c << 3);
d[0] = d[0] * 1.2;
c = c + 1;
f = f + 1;
if (f != o) //continue L_i;
}
}
o = l & 2147483646;
int64_t p = l & 1;
n = 0;
while (1) {
d = n << 3;
e = d + k + g * 8000;
c = 0;
f = 0;
if (g) {
while (1) {
m = j + g * 9600;
h = m + (c << 3);
h[0] = e[0] * 1.5 * (k + c * 8000 + (double)d)[0] + h[0];
m = m + ((h = c | 1) << 3);
m[0] = e[0] * 1.5 * (k + h * 8000 + (double)d)[0] + m[0];
c = c + 2;
f = f + 2;
if (f != o) //continue L_l;
}
}
if (p) {
f = j + g * 9600 + (c << 3);
f[0] = e[0] * 1.5 * (k + c * 8000 + (double)d)[0] + f[0];
}
n = n + 1;
if (n != 1000) //continue L_j;
}
l = l + 1;
g = g + 1;
if (g != 1200) //continue L_e;
}
if (a < 43) goto B_n;
if (ubyte))((b[0])[0] goto B_n;
c = memory_base;
fwrite(c + 42, 22, 1, e = (int))stderr[0];
i[8] = c + 15;
fiprintf(e, c, i + 32);
d = 0;
while (1) {
f = d * 1200;
c = 0;
while (1) {
if (eqz((c + f) % 20)) { fputc(10, e) }
i[2] = (j + d * (double)9600)[c];
small_fprintf(e, memory_base + 17, i + 16);
c = c + 1;
if (c != 1200) //continue L_p;
}
d = d + 1;
if (d != 1200) //continue L_o;
}
i[0] = (c = memory_base) + 15;
fiprintf(e, c + 25, i);
fwrite(c + 65, 22, 1, e);
B_n:;
free(j);
free(k);
stack_pointer = i + 48;
return 0;
}

int legalfunc_polybench_alloc_data(long a, int b) {
return legalimport_polybench_alloc_data(i32_wrap_i64(a),
i32_wrap_i64(a >> 32L),
b)
}