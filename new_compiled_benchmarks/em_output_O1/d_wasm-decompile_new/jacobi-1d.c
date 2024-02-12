

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

void kernel_jacobi_1d(int a, int b, int c, int d) {
if (a < 1) goto B_a;
int64_t e = b + -1;
int64_t f = b > 2;
b = 0;
while (1) {
int64_t g = b;
int64_t * h = 1;
if (eqz(f)) goto B_c;
while (1) {
(d + (h = (b = h) << (double)3))[0] =
(((h = c + h) + (double)-8)[0] + h[0] + c[b = b + (double))1] * 0.33333;
h = b;
if (b != e) //continue L_d;
}
B_c:;
h = 1;
if (eqz(f)) goto B_e;
while (1) {
(c + (h = (b = h) << (double)3))[0] =
(((h = d + h) + (double)-8)[0] + h[0] + d[b = b + (double))1] * 0.33333;
h = b;
if (b != e) //continue L_f;
}
B_e:;
h = g + 1;
b = h;
if (h != a) //continue L_b;
}
B_a:;
}

int submain(int a, int_ptr b) {
int64_t * g;
double h;
int64_t j;
int64_t* c = stack_pointer - 48;
stack_pointer = c;
int64_t d = legalfunc_polybench_alloc_data(2000L, 8);
int64_t e = legalfunc_polybench_alloc_data(2000L, 8);
int64_t f = 0;
while (1) {
(d + (g = (f = f) << (double)3))[0] =
((h = f64_convert_i32_s(f)) + 2.0) / 2000.0;
(e + g)[0] = (h + 3.0) / 2000.0;
g = f + 1;
f = g;
if (g != 2000) //continue L_a;
}
f = 0;
while (1) {
int64_t i = f;
j = 1;
while (1) {
(e + (g = (f = j) << (double)3))[0] =
(((g = d + g) + (double)-8)[0] + g[0] + d[f = f + (double))1] * 0.33333;
j = f;
g = 1;
if (f != 1999) //continue L_c;
}
while (1) {
(d + (g = (f = g) << (double)3))[0] =
(((g = e + g) + (double)-8)[0] + g[0] + e[f = f + (double))1] * 0.33333;
g = f;
if (f != 1999) //continue L_d;
}
g = i + 1;
f = g;
if (g != 500) //continue L_b;
}
if (a < 43) goto B_e;
if (ubyte))((b[0])[0] goto B_e;
f = memory_base;
fwrite(f + 42, 22, 1, j = (int))stderr[0];
c[8] = f + 15;
fiprintf(j, f + 0, c + 32);
f = 0;
while (1) {
f = f;
if (f % 20) goto B_g;
fputc(10, j);
B_g:;
c[2] = (double)d[f];
small_fprintf(j, memory_base + 17, c + 16);
g = f + 1;
f = g;
if (g != 2000) //continue L_f;
}
c[0] = (f = memory_base) + 15;
fiprintf(j, f + 25, c);
fwrite(f + 65, 22, 1, j);
B_e:;
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