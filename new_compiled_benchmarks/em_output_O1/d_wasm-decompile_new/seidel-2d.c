

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

void kernel_seidel_2d(int a, int b, int c) {
int64_t n;
int64_t p;
int64_t q;
if (a < 1) goto B_a;
int64_t d = b + -1;
int64_t e = b < 3;
b = 0;
while (1) {
int64_t f = b;
b = 0;
int64_t g = 1;
if (e) goto B_c;
while (1) {
int64_t h = g;
int64_t i = h + 1;
int64_t j = h + -1;
int64_t k = b;
double l = (k * 16000 + c + (double)16000)[0];
b = 1;
while (1) {
int64_t m = c + h * 16000;
int64_t * o = m + (b = (n = b) << 3);
o[0] =
(l =
(((g = c + j * 16000) + (p = b + (double)-8))[0] + (g + (double)b)[0] +
(g + (q = (n = n + 1) << (double)3))[0] +
l +
o[0] +
(m + (double)q)[0] +
((g = c + i * 16000) + (double)p)[0] +
(g + (double)b)[0] +
(g + (double))q)[0] /
9.0);
l = l;
b = n;
if (n != d) //continue L_e;
}
b = k + 1;
n = h + 1;
g = n;
if (n != d) //continue L_d;
}
B_c:;
g = f + 1;
b = g;
if (g != a) //continue L_b;
}
B_a:;
}

int submain(int a, int_ptr b) {
int64_t h;
int64_t p;
int64_t f;
int64_t q;
double g;
int64_t n;
int64_t* c = stack_pointer - 48;
stack_pointer = c;
int64_t d = legalfunc_polybench_alloc_data(4000000L, 8);
int64_t e = 0;
while (1) {
f = e;
g = f64_convert_i32_s(f);
e = 0;
while (1) {
(d + f * 16000)[e = (double)e] =
(g * f64_convert_i32_s(e + 2) + 2.0) / 2000.0;
h = e + 1;
e = h;
if (h != 2000) //continue L_b;
}
h = f + 1;
e = h;
if (h != 2000) //continue L_a;
}
e = 0;
while (1) {
int64_t i = e;
e = 0;
h = 1;
while (1) {
int64_t j = h;
int64_t k = j + 1;
int64_t l = j + -1;
int64_t m = e;
g = (m * 16000 + d + (double)16000)[0];
e = 1;
while (1) {
n = d + j * 16000;
int64_t * o = n + (e = (f = e) << 3);
o[0] =
(g =
(((h = d + l * 16000) + (p = e + (double)-8))[0] + (h + (double)e)[0] +
(h + (q = (f = f + 1) << (double)3))[0] +
g +
o[0] +
(n + (double)q)[0] +
((h = d + k * 16000) + (double)p)[0] +
(h + (double)e)[0] +
(h + (double))q)[0] /
9.0);
g = g;
e = f;
if (f != 1999) //continue L_e;
}
e = m + 1;
h = k;
if (k != 1999) //continue L_d;
}
h = i + 1;
e = h;
if (h != 500) //continue L_c;
}
if (a < 43) goto B_f;
if (ubyte))((b[0])[0] goto B_f;
e = memory_base;
fwrite(e + 42, 22, 1, q = (int))stderr[0];
c[8] = e + 15;
fiprintf(q, e + 0, c + 32);
e = 0;
while (1) {
f = e;
n = f * 2000;
e = 0;
while (1) {
e = e;
if ((e + n) % 20) goto B_i;
fputc(10, q);
B_i:;
c[2] = (d + f * (double)16000)[e];
small_fprintf(q, memory_base + 17, c + 16);
h = e + 1;
e = h;
if (h != 2000) //continue L_h;
}
h = f + 1;
e = h;
if (h != 2000) //continue L_g;
}
c[0] = (e = memory_base) + 15;
fiprintf(q, e + 25, c);
fwrite(e + 65, 22, 1, q);
B_f:;
free(d);
stack_pointer = c + 48;
return 0;
}

int legalfunc_polybench_alloc_data(long a, int b) {
return legalimport_polybench_alloc_data(i32_wrap_i64(a),
i32_wrap_i64(a >> 32L),
b)
}