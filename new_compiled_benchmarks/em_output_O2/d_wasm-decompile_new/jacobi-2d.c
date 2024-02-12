

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

void kernel_jacobi_2d(int a, int b, int c, int d) {
int64_t g;
int64_t * k;
int64_t f;
int64_t h;
int64_t j;
int64_t l;
if (a > 0) {
int64_t i = b - 1;
int64_t m = b > 2;
while (1) {
int64_t e = 1;
if (eqz(m)) goto B_c;
while (1) {
j = e - 1;
h = e + 1;
b = 1;
while (1) {
f = b << 3;
(f + d + (g = e * (double)10400))[0] =
((k = (g = c + g) + f)[0] + (k - (double)8)[0] + g[b = b + (double)1] +
(f + c + h * (double)10400)[0] +
(f + c + j * (double))10400)[0] *
0.2;
if (b != i) //continue L_e;
}
e = h;
if (e != i) //continue L_d;
}
e = 1;
if (eqz(m)) goto B_c;
while (1) {
j = e - 1;
h = e + 1;
b = 1;
while (1) {
f = b << 3;
(f + c + (g = e * (double)10400))[0] =
((k = (g = d + g) + f)[0] + (k - (double)8)[0] + g[b = b + (double)1] +
(f + d + h * (double)10400)[0] +
(f + d + j * (double))10400)[0] *
0.2;
if (b != i) //continue L_g;
}
e = h;
if (e != i) //continue L_f;
}
B_c:;
l = l + 1;
if (l != a) //continue L_b;
}
}
}

int submain(int a, int_ptr b) {
int64_t * f;
int64_t e;
int64_t c;
int64_t d;
int64_t k;
int64_t l;
int64_t n;
int64_t* h = stack_pointer - 48;
stack_pointer = h;
int64_t i = legalfunc_polybench_alloc_data(1690000L, 8);
int64_t j = legalfunc_polybench_alloc_data(1690000L, 8);
while (1) {
double m = f64_convert_i32_s(f);
c = 0;
while (1) {
d = c << 3;
(d + i + (e = f * (double)10400))[0] =
(m * f64_convert_i32_s(c + 2) + 2.0) / 1300.0;
(e + j + d)[0] = (m * f64_convert_i32_s(c + 3) + 3.0) / 1300.0;
c = c + 1;
if (c != 1300) //continue L_b;
}
f = f + 1;
if (f != 1300) //continue L_a;
}
while (1) {
int64_t g = 1;
while (1) {
l = g - 1;
c = 1;
k = g + 1;
while (1) {
e = c << 3;
(e + j + (d = g * (double)10400))[0] =
((f = (d = d + i) + e)[0] + (f - (double)8)[0] + d[c = c + (double)1] +
(e + i + k * (double)10400)[0] +
(e + i + l * (double))10400)[0] *
0.2;
if (c != 1299) //continue L_e;
}
g = k;
if (g != 1299) //continue L_d;
}
g = 1;
while (1) {
l = g - 1;
k = g + 1;
c = 1;
while (1) {
e = c << 3;
(e + i + (d = g * (double)10400))[0] =
((f = (d = d + j) + e)[0] + (f - (double)8)[0] + d[c = c + (double)1] +
(e + j + k * (double)10400)[0] +
(e + j + l * (double))10400)[0] *
0.2;
if (c != 1299) //continue L_g;
}
g = k;
if (g != 1299) //continue L_f;
}
n = n + 1;
if (n != 500) //continue L_c;
}
if (a < 43) goto B_h;
if (ubyte))((b[0])[0] goto B_h;
c = memory_base;
fwrite(c + 42, 22, 1, d = (int))stderr[0];
h[8] = c + 15;
fiprintf(d, c, h + 32);
e = 0;
while (1) {
f = e * 1300;
c = 0;
while (1) {
if (eqz((c + f) % 20)) { fputc(10, d) }
h[2] = (i + e * (double)10400)[c];
small_fprintf(d, memory_base + 17, h + 16);
c = c + 1;
if (c != 1300) //continue L_j;
}
e = e + 1;
if (e != 1300) //continue L_i;
}
h[0] = (c = memory_base) + 15;
fiprintf(d, c + 25, h);
fwrite(c + 65, 22, 1, d);
B_h:;
free(i);
free(j);
stack_pointer = h + 48;
return 0;
}

int legalfunc_polybench_alloc_data(long a, int b) {
return legalimport_polybench_alloc_data(i32_wrap_i64(a),
i32_wrap_i64(a >> 32L),
b)
}