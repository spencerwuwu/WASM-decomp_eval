

extern int64_t stack_pointer;
extern int64_t memory_base;
extern int64_t table_base;
extern int64_t stderr;

data ()rodata(offset memory_base) =
"begin ()dump %s\00A\00%0.2lf \00\0aend ()dump %s\0a\00==BEGIN DUMP_ARR"
"AYS==\0a\00==END DUMP_ARRAYS==\0a\00";















void wasm_call_ctors() {
}

void wasm_apply_data_relocs() {
}

void kernel_cholesky(int a, int b) {
int64_t i;
int64_t * f;
double h;
int64_t e;
if (a < 1) goto B_a;
int64_t c = 0;
while (1) {
int64_t * d = 0;
e = c;
if (eqz(e)) goto B_c;
while (1) {
d = d;
if (eqz(d)) goto B_e;
f = b + e * 16000;
int64_t * g = f + (d << 3);
h = g[0];
c = 0;
while (1) {
g[0] =
(h =
h -
(f + (i = (c = c) << (double)3))[0] * (b + d * 16000 + (double))i)[0];
h = h;
i = c + 1;
c = i;
if (i != d) //continue L_f;
}
B_e:;
c = b + e * 16000;
f = c + (i = d << 3);
f[0] = f[0] / (b + d * 16000 + (double)i)[0];
i = d + 1;
d = i;
if (i != e) //continue L_d;
}
f = c + (e << 3);
h = f[0];
d = 0;
while (1) {
f[0] = (h = h - (h = c[d = (double))d] * h);
h = h;
i = d + 1;
d = i;
if (i != e) //continue L_g;
}
B_c:;
d = b + e * 16000 + (e << 3);
d[0] = sqrt(d[0]);
d = e + 1;
c = d;
if (d != a) //continue L_b;
}
B_a:;
}

int submain(int a, int_ptr b) {
int64_t * k;
int64_t * j;
int64_t * g;
int64_t * h;
int64_t i;
double m;
int64_t* c = stack_pointer - 48;
stack_pointer = c;
int64_t d = legalfunc_polybench_alloc_data(4000000L, 8);
int64_t * e = 1;
int64_t f = 0;
while (1) {
g = e;
f = f;
h = f << 3;
i = f * 16008 + 8;
j = 0;
while (1) {
k = d + f * 16000;
k[j = (double)j] = f64_convert_i32_s(0 - j) / 2000.0 + 1.0;
e = j + 1;
j = e;
if (e != g) //continue L_b;
}
j = f + 1;
if (f > 1998) goto B_c;
memset(d + i, 0, 15992 - h);
B_c:;
(k + h)[0] = 4607182418800017408L;
e = g + 1;
f = j;
if (j != 2000) //continue L_a;
}
f = memset(legalfunc_polybench_alloc_data(4000000L, 8), 0, 32000000);
j = 0;
while (1) {
int64_t l = j;
j = 0;
while (1) {
h = d + (g = (i = j) * 16000) + (k = l << 3);
j = 0;
while (1) {
e = f + g + ((j = j) << 3);
e[0] = h[0] * (d + j * 16000 + (double)k)[0] + e[0];
e = j + 1;
j = e;
if (e != 2000) //continue L_f;
}
e = i + 1;
j = e;
if (e != 2000) //continue L_e;
}
e = l + 1;
j = e;
if (e != 2000) //continue L_d;
}
j = 0;
while (1) {
k = j;
j = 0;
while (1) {
(d + (e = k * 16000) + (g = (j = j) << (double)3))[0] =
(f + e + (double)g)[0];
e = j + 1;
j = e;
if (e != 2000) //continue L_h;
}
e = k + 1;
j = e;
if (e != 2000) //continue L_g;
}
free(f);
e = 0;
while (1) {
j = 0;
h = e;
if (eqz(h)) goto B_j;
while (1) {
j = j;
if (eqz(j)) goto B_l;
g = d + h * 16000;
k = g + (j << 3);
m = k[0];
e = 0;
while (1) {
k[0] =
(m =
m -
(g + (f = (e = e) << (double)3))[0] * (d + j * 16000 + (double))f)[0];
m = m;
f = e + 1;
e = f;
if (f != j) //continue L_m;
}
B_l:;
e = d + h * 16000;
g = e + (f = j << 3);
g[0] = g[0] / (d + j * 16000 + (double)f)[0];
f = j + 1;
j = f;
if (f != h) //continue L_k;
}
g = e + (h << 3);
m = g[0];
j = 0;
while (1) {
g[0] = (m = m - (m = e[j = (double))j] * m);
m = m;
f = j + 1;
j = f;
if (f != h) //continue L_n;
}
B_j:;
j = d + h * 16000 + (h << 3);
j[0] = sqrt(j[0]);
j = h + 1;
e = j;
if (j != 2000) //continue L_i;
}
if (a < 43) goto B_o;
if (ubyte))((b[0])[0] goto B_o;
j = memory_base;
fwrite(j + 42, 22, 1, k = (int))stderr[0];
c[8] = j + 15;
fiprintf(k, j + 0, c + 32);
j = 1;
e = 0;
while (1) {
f = j;
g = e;
h = g * 2000;
j = 0;
while (1) {
j = j;
if ((j + h) % 20) goto B_r;
fputc(10, k);
B_r:;
c[2] = (d + g * (double)16000)[j];
small_fprintf(k, memory_base + 17, c + 16);
e = j + 1;
j = e;
if (e != f) //continue L_q;
}
j = f + 1;
f = g + 1;
e = f;
if (f != 2000) //continue L_p;
}
c[0] = (j = memory_base) + 15;
fiprintf(k, j + 25, c);
fwrite(j + 65, 22, 1, k);
B_o:;
free(d);
stack_pointer = c + 48;
return 0;
}

int legalfunc_polybench_alloc_data(long a, int b) {
return legalimport_polybench_alloc_data(i32_wrap_i64(a),
i32_wrap_i64(a >> 32L),
b)
}