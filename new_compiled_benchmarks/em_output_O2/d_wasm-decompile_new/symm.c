

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

void kernel_symm(int a, int b, double c, double d, int e, int f, int g) {
int64_t h;
int64_t * m;
int64_t * s;
double k;
int64_t l;
int64_t i;
if (a > 0) {
int64_t n = b <= 0;
while (1) {
if (eqz(n)) {
int64_t o = f + h * 8000;
int64_t * p = o + (h << 3);
int64_t j = 0;
while (1) {
if (eqz(h)) {
k = 0.0;
goto B_e;
}
l = j << 3;
int64_t * q = l + g + h * 9600;
i = 0;
k = 0.0;
while (1) {
int64_t * r = e + (m = i * 9600) + l;
r[0] = q[0] * c * (s = o + (i << 3))[0] + r[0];
k = (g + m + (double)l)[0] * s[0] + k;
i = i + 1;
if (i != h) //continue L_g;
}
B_e:;
l = j << 3;
m = l + e + (i = h * 9600);
m[0] = c * k + d * m[0] + (g + i + (double)l)[0] * c * p[0];
j = j + 1;
if (j != b) //continue L_d;
}
}
h = h + 1;
if (h != a) //continue L_b;
}
}
}

int submain(int a, int_ptr b) {
int64_t d;
int64_t * e;
int64_t * k;
int64_t * f;
int64_t * h;
{ c (long,)a (long,)b (long,)c (long,)d (long,)e (long,)f (long,)g (long)h }
int64_t g;
int64_t p;
double o;
int64_t* i = stack_pointer - 48;
stack_pointer = i;
int64_t l = legalfunc_polybench_alloc_data(1200000L, 8);
int64_t j = legalfunc_polybench_alloc_data(1000000L, 8);
int64_t m = legalfunc_polybench_alloc_data(1200000L, 8);
while (1) {
f = d + 1200;
c = 0;
while (1) {
h = c << 3;
(h + l + (e = d * (double)9600))[0] =
f64_convert_i32_s((c + d) % 100) / 1000.0;
(e + m + h)[0] = f64_convert_i32_s((f - c) % 100) / 1000.0;
c = c + 1;
if (c != 1200) //continue L_b;
}
k = 1;
d = d + 1;
if (d != 1000) //continue L_a;
}
f = 0;
while (1) {
p = k & 1;
d = f;
if (eqz(d)) {
c = 0;
goto B_d;
}
g = k & 2147483646;
c = 0;
e = 0;
while (1) {
h = j + d * 8000;
h[c] = f64_convert_i32_s((c + d) % 100) / 1000.0;
h[f = c | (double)1] = f64_convert_i32_s((d + f) % 100) / 1000.0;
c = c + 2;
e = e + 2;
if (e != g) //continue L_f;
}
B_d:;
if (p) { (j + d * 8000)[c] = f64_convert_i32_s((c + d) % 100) / 1000.0 }
f = d + 1;
if (d > 998) goto B_h;
c = 0;
e = f;
h = 7 - d & 7;
if (h) {
while (1) {
(j + d * 8000)[e] = -4571373524106608640L;
e = e + 1;
c = c + 1;
if (c != h) //continue L_j;
}
}
if (d - 992 < 7) goto B_h;
while (1) {
c = j + d * 8000 + (e << 3);
c.a = -4571373524106608640L;
c.b = -4571373524106608640L;
c.c = -4571373524106608640L;
c.d = -4571373524106608640L;
c.e = -4571373524106608640L;
c.f = -4571373524106608640L;
c.g = -4571373524106608640L;
c.h = -4571373524106608640L;
e = e + 8;
if (e != 1000) //continue L_k;
}
B_h:;
k = k + 1;
if (f != 1000) //continue L_c;
}
g = 0;
while (1) {
p = j + g * 8000;
int64_t * q = p + (g << 3);
int64_t n = 0;
while (1) {
if (eqz(g)) {
o = 0.0;
goto B_n;
}
d = n << 3;
k = d + m + g * 9600;
c = 0;
o = 0.0;
while (1) {
h = l + (e = c * 9600) + d;
h[0] = k[0] * 1.5 * (f = p + (c << 3))[0] + h[0];
o = (e + m + (double)d)[0] * f[0] + o;
c = c + 1;
if (c != g) //continue L_p;
}
B_n:;
d = n << 3;
e = d + l + (c = g * 9600);
e[0] = o * 1.5 + e[0] * 1.2 + (c + m + (double)d)[0] * 1.5 * q[0];
n = n + 1;
if (n != 1200) //continue L_m;
}
g = g + 1;
if (g != 1000) //continue L_l;
}
if (a < 43) goto B_q;
if (ubyte))((b[0])[0] goto B_q;
c = memory_base;
fwrite(c + 42, 22, 1, e = (int))stderr[0];
i[8] = c + 15;
fiprintf(e, c, i + 32);
d = 0;
while (1) {
h = d * 1000;
c = 0;
while (1) {
if (eqz((c + h) % 20)) { fputc(10, e) }
i[2] = (l + d * (double)9600)[c];
small_fprintf(e, memory_base + 17, i + 16);
c = c + 1;
if (c != 1200) //continue L_s;
}
d = d + 1;
if (d != 1000) //continue L_r;
}
i[0] = (c = memory_base) + 15;
fiprintf(e, c + 25, i);
fwrite(c + 65, 22, 1, e);
B_q:;
free(l);
free(j);
free(m);
stack_pointer = i + 48;
return 0;
}

int legalfunc_polybench_alloc_data(long a, int b) {
return legalimport_polybench_alloc_data(i32_wrap_i64(a),
i32_wrap_i64(a >> 32L),
b)
}