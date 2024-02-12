

extern int64_t stack_pointer;
extern int64_t memory_base;
extern int64_t stderr;

data ()rodata(offset memory_base) =
"begin ()dump %s\00A\00%0.2lf \00\0aend ()dump %s\0a\00==BEGIN DUMP_ARR"
"AYS==\0a\00==END DUMP_ARRAYS==\0a\00";















void wasm_call_ctors() {
no;
}

void wasm_apply_data_relocs() {
no;
}

void kernel_lu(int a, int b) {
int64_t f;
int64_t h;
double d;
int64_t m;
int64_t c;
int64_t * g;
int64_t e;
int64_t * i;
int64_t j;
int64_t l;
int64_t k;
if (a > 0) {
while (1) {
if (f) {
g = b + f * 16000;
e = 0;
while (1) {
if (eqz(e)) {
d = g[0];
goto B_e;
}
i = g + (h = e << 3);
d = i[0];
k = e & 1;
c = 0;
if (e != 1) {
l = e & 2147483646;
j = 0;
while (1) {
i[0] = (d = d - (double)g[c] * (b + c * 16000 + (double))h)[0];
i[0] = (d = d - g[m = c | (double)1] * (b + m * 16000 + (double))h)[0];
c = c + 2;
j = j + 2;
if (j != l) //continue L_h;
}
}
if (eqz(k)) goto B_e;
i[0] = (d = d - (double)g[c] * (b + c * 16000 + (double))h)[0];
B_e:;
(g + (c = e << (double)3))[0] = d / (b + e * 16000 + (double)c)[0];
e = e + 1;
if (e != f) //continue L_d;
}
}
l = f & 2147483646;
k = f & 1;
e = f;
while (1) {
if (eqz(f)) goto B_j;
g = b + f * 16000;
i = g + (h = e << 3);
d = i[0];
c = 0;
j = 0;
if (f != 1) {
while (1) {
i[0] = (d = d - (double)g[c] * (b + c * 16000 + (double))h)[0];
i[0] = (d = d - g[m = c | (double)1] * (b + m * 16000 + (double))h)[0];
c = c + 2;
j = j + 2;
if (j != l) //continue L_l;
}
}
if (eqz(k)) goto B_j;
i[0] = d - (double)g[c] * (b + c * 16000 + (double)h)[0];
B_j:;
e = e + 1;
if (e != a) //continue L_i;
}
f = f + 1;
if (f != a) //continue L_b;
}
}
}

int submain(int a, int_ptr b) {
int64_t * e;
int64_t * i;
int64_t * d;
int64_t j;
int64_t h;
int64_t m;
int64_t c;
int64_t * f;
double l;
int64_t o;
int64_t* n = stack_pointer - 48;
stack_pointer = n;
int64_t g = legalfunc_polybench_alloc_data(4000000L, 8);
int64_t k = 1;
while (1) {
h = k & 1;
c = 0;
if (e) {
m = k & 2147483646;
d = 0;
while (1) {
f = g + e * 16000;
(f + (i = c << (double)3))[0] =
f64_convert_i32_s(0 - c) / 2000.0 + 1.0;
(f + (i | 8))[0] = f64_convert_i32_s(c ^ -1) / 2000.0 + 1.0;
c = c + 2;
d = d + 2;
if (d != m) //continue L_c;
}
}
if (h) { (g + e * 16000)[c] = f64_convert_i32_s(0 - c) / 2000.0 + 1.0 }
d = e << 3;
c = e + 1;
if (e <= 1998) { memset(g + e * 16008 + 8, 0, 15992 - d) }
(g + e * 16000 + d)[0] = 4607182418800017408L;
k = k + 1;
e = c;
if (c != 2000) //continue L_a;
}
m = memset(legalfunc_polybench_alloc_data(4000000L, 8), 0, 32000000);
while (1) {
h = 0;
while (1) {
d = j << 3;
f = d + g + (k = h * 16000);
c = 0;
while (1) {
i = k + m;
e = i + (c << 3);
e[0] = f[0] * (g + c * 16000 + (double)d)[0] + e[0];
i = i + ((e = c | 1) << 3);
i[0] = f[0] * (g + e * 16000 + (double)d)[0] + i[0];
c = c + 2;
if (c != 2000) //continue L_h;
}
h = h + 1;
if (h != 2000) //continue L_g;
}
j = j + 1;
if (j != 2000) //continue L_f;
}
k = 0;
while (1) {
i = 0;
while (1) {
d = g + (f = k * 16000);
(d + (c = i << (double)3))[0] = ((f = f + m) + (double)c)[0];
(d + (e = c + (double)8))[0] = (e + (double)f)[0];
(d + (e = c + (double)16))[0] = (e + (double)f)[0];
(d + (e = c + (double)24))[0] = (e + (double)f)[0];
(d + (c = c + (double)32))[0] = (c + (double)f)[0];
i = i + 5;
if (i != 2000) //continue L_j;
}
k = k + 1;
if (k != 2000) //continue L_i;
}
free(m);
j = 0;
while (1) {
if (j) {
d = g + j * 16000;
h = 0;
while (1) {
if (eqz(h)) {
l = d[0];
goto B_n;
}
i = d + (f = h << 3);
l = i[0];
o = h & 1;
c = 0;
if (h != 1) {
k = h & 2147483646;
e = 0;
while (1) {
i[0] = (l = l - (double)d[c] * (g + c * 16000 + (double))f)[0];
i[0] = (l = l - d[m = c | (double)1] * (g + m * 16000 + (double))f)[0];
c = c + 2;
e = e + 2;
if (e != k) //continue L_q;
}
}
if (eqz(o)) goto B_n;
i[0] = (l = l - (double)d[c] * (g + c * 16000 + (double))f)[0];
B_n:;
(d + (c = h << (double)3))[0] = l / (g + h * 16000 + (double)c)[0];
h = h + 1;
if (h != j) //continue L_m;
}
}
k = j & 2147483646;
o = j & 1;
h = j;
while (1) {
if (eqz(j)) goto B_s;
d = g + j * 16000;
i = d + (f = h << 3);
l = i[0];
c = 0;
e = 0;
if (j != 1) {
while (1) {
i[0] = (l = l - (double)d[c] * (g + c * 16000 + (double))f)[0];
i[0] = (l = l - d[m = c | (double)1] * (g + m * 16000 + (double))f)[0];
c = c + 2;
e = e + 2;
if (e != k) //continue L_u;
}
}
if (eqz(o)) goto B_s;
i[0] = l - (double)d[c] * (g + c * 16000 + (double)f)[0];
B_s:;
h = h + 1;
if (h != 2000) //continue L_r;
}
j = j + 1;
if (j != 2000) //continue L_k;
}
if (a < 43) goto B_v;
if (ubyte))((b[0])[0] goto B_v;
c = memory_base;
fwrite(c + 42, 22, 1, f = (int))stderr[0];
n[8] = c + 15;
fiprintf(f, c, n + 32);
d = 0;
while (1) {
i = d * 2000;
c = 0;
while (1) {
if (eqz((c + i) % 20)) { fputc(10, f) }
n[2] = (g + d * (double)16000)[c];
small_fprintf(f, memory_base + 17, n + 16);
c = c + 1;
if (c != 2000) //continue L_x;
}
d = d + 1;
if (d != 2000) //continue L_w;
}
n[0] = (c = memory_base) + 15;
fiprintf(f, c + 25, n);
fwrite(c + 65, 22, 1, f);
B_v:;
free(g);
stack_pointer = n + 48;
return 0;
}

int legalfunc_polybench_alloc_data(long a, int b) {
return legalimport_polybench_alloc_data(i32_wrap_i64(a),
i32_wrap_i64(a >> 32L),
b)
}