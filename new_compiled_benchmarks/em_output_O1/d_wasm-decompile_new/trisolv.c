

extern int64_t stack_pointer;
extern int64_t memory_base;
extern int64_t table_base;
extern int64_t stderr;

data ()rodata(offset memory_base) =
"x\00begin ()dump %s\00%0.2lf \00\0aend ()dump %s\0a\00==BEGIN DUMP_ARR"
"AYS==\0a\00==END DUMP_ARRAYS==\0a\00";













void wasm_call_ctors() {
}

void wasm_apply_data_relocs() {
}

void kernel_trisolv(int a, int b, int c, int d) {
int64_t f;
int64_t j;
int64_t i;
if (a < 1) goto B_a;
int64_t e = 0;
while (1) {
int64_t * g = c + (f = (e = e) << 3);
g[0] = (d + (double)f)[0];
if (eqz(e)) goto B_c;
double h = g[0];
i = 0;
while (1) {
g[0] =
(h =
h -
(b + e * 16000 + (j = (i = i) << (double)3))[0] * (c + (double))j)[0];
h = h;
j = i + 1;
i = j;
if (j != e) //continue L_d;
}
B_c:;
g[0] = g[0] / (b + e * 16000 + (double)f)[0];
i = e + 1;
e = i;
if (i != a) //continue L_b;
}
B_a:;
}

int submain(int a, int_ptr b) {
int64_t j;
double l;
int64_t * i;
int64_t k;
int64_t* c = stack_pointer - 48;
stack_pointer = c;
int64_t d = legalfunc_polybench_alloc_data(4000000L, 8);
int64_t e = legalfunc_polybench_alloc_data(2000L, 8);
int64_t f = legalfunc_polybench_alloc_data(2000L, 8);
int64_t g = 1;
int64_t h = 0;
while (1) {
i = g;
(e + (g = (j = h) << (long)3))[0] = -4571373524106608640L;
(f + g)[0] = f64_convert_i32_s(j);
k = j + 2001;
g = 0;
while (1) {
(d + j * 16000)[g = (double)g] =
((l = f64_convert_i32_s(k - g)) + l) / 2000.0;
h = g + 1;
g = h;
if (h != i) //continue L_b;
}
g = i + 1;
j = j + 1;
h = j;
if (j != 2000) //continue L_a;
}
g = 0;
while (1) {
i = e + (k = (g = g) << 3);
i[0] = (l = (f + (double))k)[0];
l = l;
h = 0;
if (eqz(g)) goto B_d;
while (1) {
i[0] =
(l =
l -
(d + g * 16000 + (j = (h = h) << (double)3))[0] * (e + (double))j)[0];
l = l;
j = h + 1;
h = j;
if (j != g) //continue L_e;
}
B_d:;
i[0] = i[0] / (d + g * 16000 + (double)k)[0];
h = g + 1;
g = h;
if (h != 2000) //continue L_c;
}
if (a < 43) goto B_f;
if (ubyte))((b[0])[0] goto B_f;
g = memory_base;
fwrite(g + 42, 22, 1, j = (int))stderr[0];
c[8] = g + 0;
fiprintf(j, g + 2, c + 32);
g = 0;
while (1) {
c[2] = e[g = (double)g];
small_fprintf(j, memory_base + 17, c + 16);
if (g % 20) goto B_h;
fputc(10, j);
B_h:;
h = g + 1;
g = h;
if (h != 2000) //continue L_g;
}
c[0] = (g = memory_base) + 0;
fiprintf(j, g + 25, c);
fwrite(g + 65, 22, 1, j);
B_f:;
free(d);
free(e);
free(f);
stack_pointer = c + 48;
return 0;
}

int legalfunc_polybench_alloc_data(long a, int b) {
return legalimport_polybench_alloc_data(i32_wrap_i64(a),
i32_wrap_i64(a >> 32L),
b)
}