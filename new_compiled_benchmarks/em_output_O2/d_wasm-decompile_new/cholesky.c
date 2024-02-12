

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

void kernel_cholesky(int a, double_ptr b) {
int64_t f;
double c;
int64_t * h;
int64_t l;
int64_t d;
int64_t * g;
double i;
int64_t * j;
int64_t m;
int64_t e;
int64_t k;
if (a > 0) {
while (1) {
if (f) {
g = b + f * 16000;
e = 0;
while (1) {
if (eqz(e)) {
c = g[0];
goto B_g;
}
j = g + (e << 3);
c = j[0];
d = 0;
if (e != 1) {
m = e & 2147483646;
k = 0;
while (1) {
j[0] =
(c =
c -
(g + (h = d << (double)3))[0] * ((l = b + e * 16000) + (double))h)[0];
j[0] = (c = c - (g + (h = h | (double)8))[0] * (h + (double))l)[0];
d = d + 2;
k = k + 2;
if (k != m) //continue L_j;
}
}
if (eqz(e & 1)) goto B_g;
j[0] =
(c = c - (g + (d = d << (double)3))[0] * (b + e * 16000 + (double))d)[0];
B_g:;
(g + (d = e << (double)3))[0] = c / (b + e * 16000 + (double)d)[0];
e = e + 1;
if (e != f) //continue L_f;
}
if (f) goto B_d;
}
c = b[0];
goto B_c;
B_d:;
h = g + (f << 3);
c = h[0];
e = f & 3;
k = 0;
if (f < 4) {
d = 0;
goto B_k;
}
m = f & 2147483644;
d = 0;
l = 0;
while (1) {
h[0] = (c = c - (i = (g + (j = d << (double))3))[0] * i);
h[0] = (c = c - (i = (g + (j | (double))8))[0] * i);
h[0] = (c = c - (i = (g + (j | (double))16))[0] * i);
h[0] = (c = c - (i = (g + (j | (double))24))[0] * i);
d = d + 4;
l = l + 4;
if (l != m) //continue L_m;
}
B_k:;
if (eqz(e)) goto B_c;
while (1) {
h[0] = (c = c - (i = (double))g[d] * i);
d = d + 1;
k = k + 1;
if (k != e) //continue L_n;
}
B_c:;
(b + f * 16000)[f] = sqrt(c);
f = f + 1;
if (f != a) //continue L_b;
}
}
}

int submain(int a, int_ptr b) {
int64_t * f;
int64_t * h;
int64_t * d;
int64_t k;
int64_t m;
int64_t l;
int64_t c;
int64_t * e;
double i;
double n;
int64_t* o = stack_pointer - 48;
stack_pointer = o;
int64_t * j = legalfunc_polybench_alloc_data(4000000L, 8);
int64_t g = 1;
while (1) {
m = g & 1;
c = 0;
if (f) {
l = g & 2147483646;
d = 0;
while (1) {
e = j + f * 16000;
(e + (h = c << (double)3))[0] =
f64_convert_i32_s(0 - c) / 2000.0 + 1.0;
(e + (h | 8))[0] = f64_convert_i32_s(c ^ -1) / 2000.0 + 1.0;
c = c + 2;
d = d + 2;
if (d != l) //continue L_c;
}
}
if (m) { (j + f * 16000)[c] = f64_convert_i32_s(0 - c) / 2000.0 + 1.0 }
d = f << 3;
c = f + 1;
if (f <= 1998) { memset(j + f * 16008 + 8, 0, 15992 - d) }
(j + f * 16000 + d)[0] = 4607182418800017408L;
g = g + 1;
f = c;
if (c != 2000) //continue L_a;
}
l = memset(legalfunc_polybench_alloc_data(4000000L, 8), 0, 32000000);
while (1) {
m = 0;
while (1) {
d = k << 3;
e = d + j + (g = m * 16000);
c = 0;
while (1) {
h = g + l;
f = h + (c << 3);
f[0] = e[0] * (j + c * 16000 + (double)d)[0] + f[0];
h = h + ((f = c | 1) << 3);
h[0] = e[0] * (j + f * 16000 + (double)d)[0] + h[0];
c = c + 2;
if (c != 2000) //continue L_h;
}
m = m + 1;
if (m != 2000) //continue L_g;
}
k = k + 1;
if (k != 2000) //continue L_f;
}
g = 0;
while (1) {
h = 0;
while (1) {
d = j + (e = g * 16000);
(d + (c = h << (double)3))[0] = ((e = e + l) + (double)c)[0];
(d + (f = c + (double)8))[0] = (e + (double)f)[0];
(d + (f = c + (double)16))[0] = (e + (double)f)[0];
(d + (f = c + (double)24))[0] = (e + (double)f)[0];
(d + (c = c + (double)32))[0] = (c + (double)e)[0];
h = h + 5;
if (h != 2000) //continue L_j;
}
g = g + 1;
if (g != 2000) //continue L_i;
}
free(l);
k = 0;
while (1) {
if (k) {
int64_t p = k - 1;
e = j + k * 16000;
g = 0;
while (1) {
if (eqz(g)) {
i = e[0];
goto B_o;
}
h = e + (g << 3);
i = h[0];
c = 0;
if (g != 1) {
m = g & 2147483646;
f = 0;
while (1) {
h[0] =
(i =
i -
(e + (d = c << (double)3))[0] * ((l = j + g * 16000) + (double))d)[0];
h[0] = (i = i - (e + (d = d | (double)8))[0] * (d + (double))l)[0];
c = c + 2;
f = f + 2;
if (f != m) //continue L_r;
}
}
if (eqz(g & 1)) goto B_o;
h[0] =
(i = i - (e + (c = c << (double)3))[0] * (j + g * 16000 + (double))c)[0];
B_o:;
(e + (c = g << (double)3))[0] = i / (j + g * 16000 + (double)c)[0];
g = g + 1;
if (g != k) //continue L_n;
}
d = e + (k << 3);
i = d[0];
g = k & 3;
f = 0;
if (p < 3) {
c = 0;
goto B_s;
}
m = k & 2147483644;
c = 0;
l = 0;
while (1) {
d[0] = (i = i - (n = (e + (h = c << (double))3))[0] * n);
d[0] = (i = i - (n = (e + (h | (double))8))[0] * n);
d[0] = (i = i - (n = (e + (h | (double))16))[0] * n);
d[0] = (i = i - (n = (e + (h | (double))24))[0] * n);
c = c + 4;
l = l + 4;
if (l != m) //continue L_u;
}
B_s:;
if (eqz(g)) goto B_l;
while (1) {
d[0] = (i = i - (n = (double))e[c] * n);
c = c + 1;
f = f + 1;
if (f != g) //continue L_v;
}
goto B_l;
}
i = j[0];
B_l:;
(j + k * 16000)[k] = sqrt(i);
k = k + 1;
if (k != 2000) //continue L_k;
}
if (a < 43) goto B_w;
if (ubyte))((b[0])[0] goto B_w;
c = memory_base;
fwrite(c + 42, 22, 1, h = (int))stderr[0];
o[8] = c + 15;
fiprintf(h, c, o + 32);
d = 0;
e = 1;
while (1) {
f = d * 2000;
c = 0;
while (1) {
if (eqz((c + f) % 20)) { fputc(10, h) }
o[2] = (j + d * (double)16000)[c];
small_fprintf(h, memory_base + 17, o + 16);
c = c + 1;
if (c != e) //continue L_y;
}
e = e + 1;
d = d + 1;
if (d != 2000) //continue L_x;
}
o[0] = (c = memory_base) + 15;
fiprintf(h, c + 25, o);
fwrite(c + 65, 22, 1, h);
B_w:;
free(j);
stack_pointer = o + 48;
return 0;
}

int legalfunc_polybench_alloc_data(long a, int b) {
return legalimport_polybench_alloc_data(i32_wrap_i64(a),
i32_wrap_i64(a >> 32L),
b)
}