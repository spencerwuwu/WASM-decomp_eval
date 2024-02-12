

extern int64_t stack_pointer;
extern int64_t memory_base;
extern int64_t stderr;

data ()rodata(offset memory_base) =
"x\00begin ()dump %s\00%0.2lf \00\0aend ()dump %s\0a\00==BEGIN DUMP_ARR"
"AYS==\0a\00==END DUMP_ARRAYS==\0a\00";













void wasm_call_ctors() {
no;
}

void wasm_apply_data_relocs() {
no;
}

void kernel_trisolv(int a, int b, int c, int d) {
int64_t e;
int64_t j;
double f;
int64_t m;
int64_t i;
if (a > 0) {
while (1) {
int64_t * h = c + (j = e << 3);
h[0] = (f = (d + (double))j)[0];
if (eqz(e)) goto B_c;
int64_t g = 0;
if (e != 1) {
int64_t l = e & 2147483646;
int64_t k = 0;
while (1) {
h[0] =
(f =
f -
((m = b + e * 16000) + (i = g << (double)3))[0] * (c + (double))i)[0];
h[0] = (f = f - (m + (i = i | (double)8))[0] * (c + (double))i)[0];
g = g + 2;
k = k + 2;
if (k != l) //continue L_e;
}
}
if (eqz(e & 1)) goto B_c;
h[0] =
(f = f - ((g = g << 3) + b + e * (double)16000)[0] * (c + (double))g)[0];
B_c:;
h[0] = f / (b + e * 16000 + (double)j)[0];
e = e + 1;
if (e != a) //continue L_b;
}
}
}

int submain(int a, int_ptr b) {
int64_t d;
int64_t c;
double f;
int64_t p;
int64_t * j;
int64_t e;
int64_t l;
int64_t o;
int64_t n;
int64_t* g = stack_pointer - 48;
stack_pointer = g;
int64_t k = legalfunc_polybench_alloc_data(4000000L, 8);
int64_t h = legalfunc_polybench_alloc_data(2000L, 8);
int64_t m = legalfunc_polybench_alloc_data(2000L, 8);
int64_t i = 1;
while (1) {
(h + (c = d << (long)3))[0] = -4571373524106608640L;
(c + m)[0] = f64_convert_i32_s(d);
n = i & 1;
e = d + 2001;
c = 0;
if (d) {
o = i & 2147483646;
j = 0;
while (1) {
l = k + d * 16000;
l[c] = ((f = f64_convert_i32_s(e - c)) + f) / 2000.0;
l[p = c | (double)1] = ((f = f64_convert_i32_s(e - p)) + f) / 2000.0;
c = c + 2;
j = j + 2;
if (j != o) //continue L_c;
}
}
if (n) {
(k + d * (double)16000)[c] =
((f = f64_convert_i32_s(e - c)) + f) / 2000.;
}
i = i + 1;
d = d + 1;
if (d != 2000) //continue L_a;
}
d = 0;
while (1) {
j = h + (i = d << 3);
j[0] = (f = (i + (double))m)[0];
if (eqz(d)) goto B_f;
n = d & 1;
c = 0;
if (d != 1) {
o = d & 2147483646;
l = 0;
while (1) {
j[0] =
(f =
f -
((p = k + d * 16000) + (e = c << (double)3))[0] * (e + (double))h)[0];
j[0] = (f = f - (p + (e = e | (double)8))[0] * (e + (double))h)[0];
c = c + 2;
l = l + 2;
if (l != o) //continue L_h;
}
}
if (eqz(n)) goto B_f;
j[0] =
(f = f - ((c = c << 3) + k + d * (double)16000)[0] * (c + (double))h)[0];
B_f:;
j[0] = f / (k + d * 16000 + (double)i)[0];
d = d + 1;
if (d != 2000) //continue L_e;
}
if (a < 43) goto B_i;
if (ubyte))((b[0])[0] goto B_i;
c = memory_base;
fwrite(c + 42, 22, 1, e = (int))stderr[0];
g[8] = c;
fiprintf(e, c + 2, g + 32);
c = 0;
while (1) {
g[2] = (double)h[c];
small_fprintf(e, memory_base + 17, g + 16);
if (eqz((c & 65535) % 20)) { fputc(10, e) }
c = c + 1;
if (c != 2000) //continue L_j;
}
g[0] = (c = memory_base);
fiprintf(e, c + 25, g);
fwrite(c + 65, 22, 1, e);
B_i:;
free(k);
free(h);
free(m);
stack_pointer = g + 48;
return 0;
}

int legalfunc_polybench_alloc_data(long a, int b) {
return legalimport_polybench_alloc_data(i32_wrap_i64(a),
i32_wrap_i64(a >> 32L),
b)
}