

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

void kernel_syr2k(int a, int b, double c, double d, int e, int f, int g) {
int64_t k;
int64_t * j;
int64_t * i;
int64_t * l;
int64_t * o;
if (a > 0) {
int64_t n = 1;
while (1) {
int64_t m = n & 3;
int64_t h = 0;
if (k >= 3) {
int64_t p = n & -4;
o = 0;
while (1) {
i = e + k * 9600;
l = i + (j = h << 3);
l[0] = l[0] * d;
l = i + (j | 8);
l[0] = l[0] * d;
l = i + (j | 16);
l[0] = l[0] * d;
i = i + (j | 24);
i[0] = i[0] * d;
h = h + 4;
o = o + 4;
if (o != p) //continue L_d;
}
}
i = 0;
if (m) {
while (1) {
j = e + k * 9600 + (h << 3);
j[0] = j[0] * d;
h = h + 1;
i = i + 1;
if (i != m) //continue L_f;
}
}
m = 0;
if (b > 0) {
while (1) {
i = m << 3;
o = i + f + (h = k * 8000);
l = g + h + i;
h = 0;
while (1) {
j = e + k * 9600 + (h << 3);
j[0] =
j[0] +
(f + (j = h * 8000) + (double)i)[0] * c * l[0] +
(g + j + (double)i)[0] * c * o[0];
h = h + 1;
if (h != n) //continue L_i;
}
m = m + 1;
if (m != b) //continue L_h;
}
}
n = n + 1;
k = k + 1;
if (k != a) //continue L_b;
}
}
}

int submain(int a, int_ptr b) {
int64_t * d;
int64_t * e;
int64_t * j;
int64_t c;
int64_t f;
int64_t k;
int64_t * g;
int64_t * n;
int64_t* h = stack_pointer - 48;
stack_pointer = h;
int64_t i = legalfunc_polybench_alloc_data(1440000L, 8);
int64_t l = legalfunc_polybench_alloc_data(1200000L, 8);
int64_t m = legalfunc_polybench_alloc_data(1200000L, 8);
while (1) {
c = 0;
while (1) {
f = c << 3;
(f + l + (e = d * (double)8000))[0] =
f64_convert_i32_s(((j = c * d) + 1) % 1200) / 1200.0;
(e + m + f)[0] = f64_convert_i32_s((j + 2) % 1000) / 1000.0;
c = c + 1;
if (c != 1000) //continue L_b;
}
d = d + 1;
if (d != 1200) //continue L_a;
}
d = 0;
while (1) {
c = 0;
while (1) {
e = i + d * 9600;
e[c] = f64_convert_i32_s((c * d + 3) % 1200) / 1000.0;
e[f = c | (double)1] = f64_convert_i32_s((d * f + 3) % 1200) / 1000.0;
c = c + 2;
if (c != 1200) //continue L_d;
}
k = 1;
d = d + 1;
if (d != 1200) //continue L_c;
}
f = 0;
while (1) {
j = 0;
c = 0;
if (f >= 3) {
int64_t o = k & 2147483644;
n = 0;
while (1) {
d = i + f * 9600;
g = d + (e = c << 3);
g[0] = g[0] * 1.2;
g = d + (e | 8);
g[0] = g[0] * 1.2;
g = d + (e | 16);
g[0] = g[0] * 1.2;
d = d + (e | 24);
d[0] = d[0] * 1.2;
c = c + 4;
n = n + 4;
if (n != o) //continue L_g;
}
}
int64_t p = k & 3;
if (p) {
while (1) {
d = i + f * 9600 + (c << 3);
d[0] = d[0] * 1.2;
c = c + 1;
j = j + 1;
if (j != p) //continue L_i;
}
}
g = 0;
while (1) {
d = g << 3;
j = d + l + (c = f * 8000);
n = c + m + d;
c = 0;
while (1) {
e = i + f * 9600 + (c << 3);
e[0] =
e[0] +
(l + (e = c * 8000) + (double)d)[0] * 1.5 * n[0] +
(e + m + (double)d)[0] * 1.5 * j[0];
c = c + 1;
if (c != k) //continue L_k;
}
g = g + 1;
if (g != 1000) //continue L_j;
}
k = k + 1;
f = f + 1;
if (f != 1200) //continue L_e;
}
if (a < 43) goto B_l;
if (ubyte))((b[0])[0] goto B_l;
c = memory_base;
fwrite(c + 42, 22, 1, e = (int))stderr[0];
h[8] = c + 15;
fiprintf(e, c, h + 32);
d = 0;
while (1) {
f = d * 1200;
c = 0;
while (1) {
if (eqz((c + f) % 20)) { fputc(10, e) }
h[2] = (i + d * (double)9600)[c];
small_fprintf(e, memory_base + 17, h + 16);
c = c + 1;
if (c != 1200) //continue L_n;
}
d = d + 1;
if (d != 1200) //continue L_m;
}
h[0] = (c = memory_base) + 15;
fiprintf(e, c + 25, h);
fwrite(c + 65, 22, 1, e);
B_l:;
free(i);
free(l);
free(m);
stack_pointer = h + 48;
return 0;
}

int legalfunc_polybench_alloc_data(long a, int b) {
return legalimport_polybench_alloc_data(i32_wrap_i64(a),
i32_wrap_i64(a >> 32L),
b)
}