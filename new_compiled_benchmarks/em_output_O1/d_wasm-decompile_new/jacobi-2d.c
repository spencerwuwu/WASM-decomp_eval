

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

void kernel_jacobi_2d(int a, int b, int c, int d) {
int64_t * k;
int64_t l;
int64_t m;
int64_t h;
int64_t j;
int64_t i;
if (a < 1) goto B_a;
int64_t e = b + -1;
int64_t f = b > 2;
b = 0;
while (1) {
int64_t g = b;
b = 1;
if (eqz(f)) goto B_c;
while (1) {
h = b;
i = h + -1;
j = h + 1;
b = 1;
while (1) {
(d + (k = h * 10400) + (b = (l = b) << (double)3))[0] =
((k = (m = c + k) + b)[0] + (k + (double)-8)[0] + m[k = l + (double)1] +
(c + j * 10400 + (double)b)[0] +
(c + i * 10400 + (double))b)[0] *
0.2;
b = k;
if (k != e) //continue L_e;
}
k = h + 1;
b = k;
if (k != e) //continue L_d;
}
B_c:;
b = 1;
if (eqz(f)) goto B_f;
while (1) {
h = b;
i = h + -1;
j = h + 1;
b = 1;
while (1) {
(c + (k = h * 10400) + (b = (l = b) << (double)3))[0] =
((k = (m = d + k) + b)[0] + (k + (double)-8)[0] + m[k = l + (double)1] +
(d + j * 10400 + (double)b)[0] +
(d + i * 10400 + (double))b)[0] *
0.2;
b = k;
if (k != e) //continue L_h;
}
k = h + 1;
b = k;
if (k != e) //continue L_g;
}
B_f:;
k = g + 1;
b = k;
if (k != a) //continue L_b;
}
B_a:;
}

int submain(int a, int_ptr b) {
int64_t i;
int64_t j;
int64_t g;
int64_t* c = stack_pointer - 48;
stack_pointer = c;
int64_t d = legalfunc_polybench_alloc_data(1690000L, 8);
int64_t e = legalfunc_polybench_alloc_data(1690000L, 8);
int64_t f = 0;
while (1) {
g = f;
double h = f64_convert_i32_s(g);
f = 0;
while (1) {
(d + (i = g * 10400) + (j = (f = f) << (double)3))[0] =
(h * f64_convert_i32_s(f + 2) + 2.0) / 1300.0;
(e + i + j)[0] = (h * f64_convert_i32_s(f + 3) + 3.0) / 1300.0;
i = f + 1;
f = i;
if (i != 1300) //continue L_b;
}
i = g + 1;
f = i;
if (i != 1300) //continue L_a;
}
kernel_jacobi_2d(500, 1300, d, e);
if (a < 43) goto B_c;
if (ubyte))((b[0])[0] goto B_c;
f = memory_base;
fwrite(f + 42, 22, 1, g = (int))stderr[0];
c[8] = f + 15;
fiprintf(g, f + 0, c + 32);
f = 0;
while (1) {
j = f;
a = j * 1300;
f = 0;
while (1) {
f = f;
if ((f + a) % 20) goto B_f;
fputc(10, g);
B_f:;
c[2] = (d + j * (double)10400)[f];
small_fprintf(g, memory_base + 17, c + 16);
i = f + 1;
f = i;
if (i != 1300) //continue L_e;
}
i = j + 1;
f = i;
if (i != 1300) //continue L_d;
}
c[0] = (f = memory_base) + 15;
fiprintf(g, f + 25, c);
fwrite(f + 65, 22, 1, g);
B_c:;
free(d);
free(e);
stack_pointer = c + 48;
return 0;
}

int legalfunc_polybench_alloc_data(long a, int b) {
return legalimport_polybench_alloc_data(i32_wrap_i64(a),
i32_wrap_i64(a >> 32L),
b)
}