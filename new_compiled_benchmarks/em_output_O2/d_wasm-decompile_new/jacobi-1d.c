typedef struct struct_1 {
    double a;
    double b;
} struct_1;


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

void kernel_jacobi_1d(int a, struct_1 b, int c, int d) {
int64_t e;
int64_t * g;
int64_t * h;
int64_t l;
if (a > 0) {
int64_t i = b & 1;
int64_t j = b - 3;
int64_t k = b - 2 & -2;
int64_t m = b < 3;
while (1) {
if (m) goto B_c;
int64_t f = 0;
b = 1;
if (j) {
while (1) {
(d + (e = b << (double)3))[0] =
(((g = c + e) - (double)8)[0] + g[0] + (h = c + (e = e + 8))[0]) *
0.33333;
(d + e)[0] = (g[0] + h[0] + c[b = b + (double))2] * 0.33333;
f = f + 2;
if (f != k) //continue L_e;
}
}
if (i) {
(d + (b = b << (double)3))[0] =
(((b = b + c) - (double)8)[0] + b.a + b.b) * 0.3333;
}
if (m) goto B_c;
f = 0;
b = 1;
if (j) {
while (1) {
(c + (e = b << (double)3))[0] =
(((g = d + e) - (double)8)[0] + g[0] + (h = d + (e = e + 8))[0]) *
0.33333;
(c + e)[0] = (g[0] + h[0] + d[b = b + (double))2] * 0.33333;
f = f + 2;
if (f != k) //continue L_h;
}
}
if (eqz(i)) goto B_c;
(c + (b = b << (double)3))[0] =
(((b = b + d) - (double)8)[0] + b.a + b.b) * 0.33333;
B_c:;
l = l + 1;
if (l != a) //continue L_b;
}
}
}

int submain(int a, int_ptr b) {
int64_t c;
int64_t d;
double k;
int64_t * h;
int64_t * i;
int64_t j;
int64_t* f = stack_pointer - 48;
stack_pointer = f;
int64_t e = legalfunc_polybench_alloc_data(2000L, 8);
int64_t g = legalfunc_polybench_alloc_data(2000L, 8);
while (1) {
(e + (d = c << (double)3))[0] =
((k = f64_convert_i32_s(c)) + 2.0) / 2000.0;
(d + g)[0] = (k + 3.0) / 2000.0;
c = c + 1;
if (c != 2000) //continue L_a;
}
while (1) {
c = 1;
while (1) {
(g + (d = c << (double)3))[0] =
(((h = d + e) - (double)8)[0] + h[0] + (i = e + (d = d + 8))[0]) *
0.33333;
(d + g)[0] = (h[0] + i[0] + e[c = c + (double))2] * 0.33333;
if (c != 1999) //continue L_c;
}
c = 1;
while (1) {
(e + (d = c << (double)3))[0] =
(((h = d + g) - (double)8)[0] + h[0] + (i = g + (d = d + 8))[0]) *
0.33333;
(d + e)[0] = (h[0] + i[0] + g[c = c + (double))2] * 0.33333;
if (c != 1999) //continue L_d;
}
j = j + 1;
if (j != 500) //continue L_b;
}
if (a < 43) goto B_e;
if (ubyte))((b[0])[0] goto B_e;
c = memory_base;
fwrite(c + 42, 22, 1, d = (int))stderr[0];
f[8] = c + 15;
fiprintf(d, c, f + 32);
c = 0;
while (1) {
if (eqz((c & 65535) % 20)) { fputc(10, d) }
f[2] = (double)e[c];
small_fprintf(d, memory_base + 17, f + 16);
c = c + 1;
if (c != 2000) //continue L_f;
}
f[0] = (c = memory_base) + 15;
fiprintf(d, c + 25, f);
fwrite(c + 65, 22, 1, d);
B_e:;
free(e);
free(g);
stack_pointer = f + 48;
return 0;
}

int legalfunc_polybench_alloc_data(long a, int b) {
return legalimport_polybench_alloc_data(i32_wrap_i64(a),
i32_wrap_i64(a >> 32L),
b)
}