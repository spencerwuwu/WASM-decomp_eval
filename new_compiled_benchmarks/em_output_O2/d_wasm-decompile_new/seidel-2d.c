

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

void kernel_seidel_2d(int a, int b, double_ptr c) {
double q;
int64_t r;
int64_t g;
if (a > 0) {
int64_t f = b - 1;
int64_t n = b < 3;
while (1) {
if (eqz(n)) {
double e = c[0];
b = 1;
while (1) {
int64_t h = b + 1;
int64_t o = b - 1;
{ d (double,)a (double)b } = c + b * 16000;
double i = d.b;
double j = (d + (double)16008)[0];
double k = (d + (double)16000)[0];
double l = (d - (double)15992)[0];
double p = d.a;
double m = p;
b = 1;
while (1) {
(double)d[b] =
(m = (e + (q = l) +
(l = ((b = (r = b + 1) << 3) + c + o * (double))16000)[0] +
m +
i +
(i = (b + (double))d)[0] +
k +
(e = j) +
(j = (c + h * 16000 + (double)))b)[0] /
9.0);
k = e;
e = q;
b = r;
if (b != f) //continue L_e;
}
e = p;
b = h;
if (b != f) //continue L_d;
}
}
g = g + 1;
if (g != a) //continue L_b;
}
}
}

int submain(int a, int_ptr b) {
int64_t h;
int64_t i;
int64_t e;
{ d (double,)a (double)b }
int64_t c;
double j;
double s;
int64_t l;
int64_t* f = stack_pointer - 48;
stack_pointer = f;
int64_t * g = legalfunc_polybench_alloc_data(4000000L, 8);
while (1) {
j = f64_convert_i32_s(h);
c = 0;
while (1) {
d = g + h * 16000;
(d + (i = c << (double)3))[0] =
(j * f64_convert_i32_s(e = c + 2) + 2.0) / 2000.0;
(d + (i | (double)8))[0] =
(j * f64_convert_i32_s(c + 3) + 2.0) / 2000.0;
c = e;
if (c != 2000) //continue L_b;
}
h = h + 1;
if (h != 2000) //continue L_a;
}
while (1) {
double k = g[0];
e = 1;
while (1) {
c = 1;
i = e + 1;
h = e - 1;
d = g + e * 16000;
double m = d.b;
double n = (d + (double)16008)[0];
double o = (d + (double)16000)[0];
double p = (d - (double)15992)[0];
double r = d.a;
double q = r;
while (1) {
j = n;
(double)d[c] =
(q = ((n = ((c = (e = c + 1) << 3) + g + i * (double))16000)[0] +
j +
o +
m + q + (s = p) + k + (p = (g + h * 16000 + (double))c)[0] +
(m = (c + (double)))d)[0] /
9.0);
o = j;
k = s;
c = e;
if (c != 1999) //continue L_e;
}
k = r;
e = i;
if (e != 1999) //continue L_d;
}
l = l + 1;
if (l != 500) //continue L_c;
}
if (a < 43) goto B_f;
if (ubyte))((b[0])[0] goto B_f;
c = memory_base;
fwrite(c + 42, 22, 1, d = (int))stderr[0];
f[8] = c + 15;
fiprintf(d, c, f + 32);
e = 0;
while (1) {
i = e * 2000;
c = 0;
while (1) {
if (eqz((c + i) % 20)) { fputc(10, d) }
f[2] = (g + e * (double)16000)[c];
small_fprintf(d, memory_base + 17, f + 16);
c = c + 1;
if (c != 2000) //continue L_h;
}
e = e + 1;
if (e != 2000) //continue L_g;
}
f[0] = (c = memory_base) + 15;
fiprintf(d, c + 25, f);
fwrite(c + 65, 22, 1, d);
B_f:;
free(g);
stack_pointer = f + 48;
return 0;
}

int legalfunc_polybench_alloc_data(long a, int b) {
return legalimport_polybench_alloc_data(i32_wrap_i64(a),
i32_wrap_i64(a >> 32L),
b)
}