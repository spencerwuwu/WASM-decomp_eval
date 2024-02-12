

extern int64_t stack_pointer;
extern int64_t memory_base;
extern int64_t stderr;

data ()rodata(offset memory_base) =
"hz\00ey\00ex\00begin ()dump %s\00%0.2lf \00\0aend ()dump %s\0a\00==BEG"
"IN DUMP_ARRAYS==\0a\00==END DUMP_ARRAYS==\0a\00";













void wasm_call_ctors() {
no;
}

void wasm_apply_data_relocs() {
no;
}

void kernel_fdtd_2d(int a, int b, int c, int d, int e, int f, int g) {
int64_t q;
int64_t * j;
int64_t aa;
int64_t * l;
int64_t * i;
int64_t * m;
int64_t * h;
int64_t n;
int64_t p;
int64_t * o;
if (a > 0) {
int64_t u = b - 2;
int64_t v = c & -2;
int64_t w = c & 1;
int64_t x = c & -4;
int64_t r = c & 3;
int64_t s = c - 2;
int64_t t = c - 1;
int64_t y = t & -2;
int64_t z = t & 1;
while (1) {
aa = c <= 0;
if (aa) goto B_c;
i = g + (q << 3);
m = 0;
h = 0;
l = 0;
if (c > 3) {
while (1) {
(e + (j = h << (double)3))[0] = i[0];
(e + (j | 8))[0] = i[0];
(e + (j | 16))[0] = i[0];
(e + (j | 24))[0] = i[0];
h = h + 4;
l = l + 4;
if (l != x) //continue L_e;
}
}
if (eqz(r)) goto B_c;
while (1) {
e[h] = i[0];
h = h + 1;
m = m + 1;
if (m != r) //continue L_f;
}
B_c:;
int64_t k = 1;
if (b > 1) {
while (1) {
if (aa) goto B_i;
p = k - 1;
i = 0;
j = 0;
if (t) {
while (1) {
l = e + (m = k * 9600);
o = l + (h = i << 3);
o[0] =
(((m = f + m) + (double)h)[0] - ((n = f + p * 9600) + (double))h)[0] *
-0.5 +
o[0];
l = l + (h = h | 8);
l[0] = ((h + (double)m)[0] - (h + (double))n)[0] * -0.5 + l[0];
i = i + 2;
j = j + 2;
if (j != v) //continue L_k;
}
}
if (eqz(w)) goto B_i;
h = i << 3;
i = h + e + (j = k * 9600);
i[0] =
((f + j + (double)h)[0] - (f + p * 9600 + (double))h)[0] * -0.5 + i[0];
B_i:;
k = k + 1;
if (k != b) //continue L_h;
}
}
k = 0;
if (b <= 0) goto B_l;
while (1) {
p = c < 2;
if (p) goto B_n;
m = 0;
h = 1;
if (s) {
while (1) {
l = d + (j = k * 9600);
o = l + (i = h << 3);
o[0] = ((j = (n = f + j) + i)[0] - (j - (double))8)[0] * -0.5 + o[0];
l = l + (i = i + 8);
l[0] = ((i + (double)n)[0] - j[0]) * -0.5 + l[0];
h = h + 2;
m = m + 2;
if (m != y) //continue L_p;
}
}
if (eqz(z)) goto B_n;
h = h << 3;
j = h + d + (i = k * 9600);
j[0] = ((h = f + i + h)[0] - (h - (double))8)[0] * -0.5 + j[0];
B_n:;
k = k + 1;
if (k != b) //continue L_m;
}
n = 0;
if (b <= 1) goto B_l;
while (1) {
k = n + 1;
h = 0;
if (eqz(p)) {
while (1) {
i = h << 3;
m = i + f + (j = n * 9600);
m[0] =
((l = d + j)[o = h + (double)1] - (i + (double)l)[0] +
(e + k * 9600 + (double)i)[0] -
(e + j + (double))i)[0] *
-0.7 +
m[0];
i = h != s;
h = o;
if (i) //continue L_s;
}
}
h = n != u;
n = k;
if (h) //continue L_q;
}
B_l:;
q = q + 1;
if (q != a) //continue L_b;
}
}
}

int submain(int a, int_ptr b) {
int64_t d;
int64_t c;
int64_t i;
int64_t h;
int64_t f;
int64_t* e = stack_pointer - 144;
stack_pointer = e;
int64_t j = legalfunc_polybench_alloc_data(1200000L, 8);
int64_t k = legalfunc_polybench_alloc_data(1200000L, 8);
int64_t l = legalfunc_polybench_alloc_data(1200000L, 8);
int64_t g = legalfunc_polybench_alloc_data(500L, 8);
while (1) {
g[d] = f64_convert_i32_s(d);
g[c = d + (double)1] = f64_convert_i32_s(c);
g[c = d + (double)2] = f64_convert_i32_s(c);
g[c = d + (double)3] = f64_convert_i32_s(c);
g[c = d + (double)4] = f64_convert_i32_s(c);
d = d + 5;
if (d != 500) //continue L_a;
}
while (1) {
double m = f64_convert_i32_s(i);
d = 0;
while (1) {
f = d << 3;
(f + j + (c = i * (double)9600))[0] =
m * f64_convert_i32_s(h = d + 1) / 1000.0;
(c + k + f)[0] = m * f64_convert_i32_s(d + 2) / 1200.0;
(c + l + f)[0] = m * f64_convert_i32_s(d + 3) / 1000.0;
d = h;
if (d != 1200) //continue L_c;
}
i = i + 1;
if (i != 1000) //continue L_b;
}
kernel_fdtd_2d(500, 1000, 1200, j, k, l, g);
if (a < 43) goto B_d;
if (ubyte))((b[0])[0] goto B_d;
c = memory_base;
fwrite(c + 49, 22, 1, d = (int))stderr[0];
e[32] = c + 6;
fiprintf(d, c + 9, e + 128);
f = 0;
while (1) {
h = f * 1000;
c = 0;
while (1) {
if (eqz((c + h) % 20)) { fputc(10, d) }
e[14] = (j + f * (double)9600)[c];
small_fprintf(d, memory_base + 24, e + 112);
c = c + 1;
if (c != 1200) //continue L_f;
}
f = f + 1;
if (f != 1000) //continue L_e;
}
e[24] = (c = memory_base) + 6;
fiprintf(d, c + 32, e + 96);
fwrite(c + 72, 22, 1, d);
e[20] = c + 3;
fiprintf(d, c + 9, e + 80);
f = 0;
while (1) {
h = f * 1000;
c = 0;
while (1) {
if (eqz((c + h) % 20)) { fputc(10, d) }
e[8] = (k + f * (double)9600)[c];
small_fprintf(d, memory_base + 24, e - -64);
c = c + 1;
if (c != 1200) //continue L_i;
}
f = f + 1;
if (f != 1000) //continue L_h;
}
e[12] = (c = memory_base) + 3;
fiprintf(d, c + 32, e + 48);
e[8] = c;
fiprintf(d, c + 9, e + 32);
f = 0;
while (1) {
h = f * 1000;
c = 0;
while (1) {
if (eqz((c + h) % 20)) { fputc(10, d) }
e[2] = (l + f * (double)9600)[c];
small_fprintf(d, memory_base + 24, e + 16);
c = c + 1;
if (c != 1200) //continue L_l;
}
f = f + 1;
if (f != 1000) //continue L_k;
}
e[0] = (c = memory_base);
fiprintf(d, c + 32, e);
B_d:;
free(j);
free(k);
free(l);
free(g);
stack_pointer = e + 144;
return 0;
}

int legalfunc_polybench_alloc_data(long a, int b) {
return legalimport_polybench_alloc_data(i32_wrap_i64(a),
i32_wrap_i64(a >> 32L),
b)
}