

extern int64_t stack_pointer;
extern int64_t memory_base;
extern int64_t table_base;
extern int64_t stderr;

data ()rodata(offset memory_base) =
"y\00begin ()dump %s\00%0.2lf \00\0aend ()dump %s\0a\00==BEGIN DUMP_ARR"
"AYS==\0a\00==END DUMP_ARRAYS==\0a\00";















void wasm_call_ctors() {
}

void wasm_apply_data_relocs() {
}

void init_array(int a, int b, int c, int d) {
int64_t f;
int64_t g;
double e;
if (b <= 0) goto B_a;
e = f64_convert_i32_s(b);
f = 0;
while (1) {
d[f = (double)f] = f64_convert_i32_s(f) / e + 1.0;
g = f + 1;
f = g;
if (g != b) //continue L_b;
}
B_a:;
if (a < 1) goto B_c;
e = f64_convert_i32_s(a * 5);
int64_t h = b < 1;
f = 0;
while (1) {
g = f;
f = 0;
if (h) goto B_e;
while (1) {
(c + g * 16800)[f = (double)f] = f64_convert_i32_s((f + g) % b) / e;
d = f + 1;
f = d;
if (d != b) //continue L_f;
}
B_e:;
g = g + 1;
f = g;
if (g != a) //continue L_d;
}
B_c:;
}

void print_array(int a, int b) {
int64_t e;
int64_t* c = stack_pointer - 48;
stack_pointer = c;
int64_t d = memory_base;
fwrite(d + 42, 22, 1, e = (int))stderr[0];
c[8] = d + 0;
fiprintf(e, d + 2, c + 32);
if (a < 1) goto B_a;
d = 0;
while (1) {
d = d;
if (d % 20) goto B_c;
fputc(10, e);
B_c:;
c[2] = (double)b[d];
small_fprintf(e, memory_base + 17, c + 16);
int64_t f = d + 1;
d = f;
if (f != a) //continue L_b;
}
B_a:;
c[0] = (d = memory_base) + 0;
fiprintf(e, d + 25, c);
fwrite(d + 65, 22, 1, e);
stack_pointer = c + 48;
}

void kernel_atax(int a, int b, int c, int d, int e, int f) {
int64_t l;
int64_t k;
if (b < 1) goto B_a;
memset(e, 0, b << 3);
B_a:;
if (a < 1) goto B_b;
int64_t g = b < 1;
int64_t h = 0;
while (1) {
int64_t i = f + ((h = h) << 3);
i[0] = 0L;
if (g) goto B_d;
double j = (double)i[0];
k = 0;
while (1) {
(double)i[0] =
(j =
(c + h * 16800 + (l = (k = k) << (double)3))[0] * (d + (double)l)[0] +
j);
j = j;
l = k + 1;
k = l;
if (l != b) //continue L_e;
}
B_d:;
k = 0;
if (b <= 0) goto B_f;
while (1) {
int64_t * m = e + (l = (k = k) << 3);
m[0] = (c + h * 16800 + (double)l)[0] * (double)i[0] + m[0];
l = k + 1;
k = l;
if (l != b) //continue L_g;
}
B_f:;
i = h + 1;
h = i;
if (i != a) //continue L_c;
}
B_b:;
}

int submain(int a, int_ptr b) {
int64_t h;
int64_t k;
int64_t i;
int64_t c = legalfunc_polybench_alloc_data(3990000L, 8);
int64_t d = legalfunc_polybench_alloc_data(2100L, 8);
int64_t e = legalfunc_polybench_alloc_data(2100L, 8);
int64_t f = legalfunc_polybench_alloc_data(1900L, 8);
int64_t g = 0;
while (1) {
d[g = (double)g] = f64_convert_i32_s(g) / 2100.0 + 1.0;
h = g + 1;
g = h;
if (h != 2100) //continue L_a;
}
g = 0;
while (1) {
h = g;
g = 0;
while (1) {
(c + h * 16800)[g = (double)g] =
f64_convert_i32_s((g + h) % 2100) / 9500.0;
i = g + 1;
g = i;
if (i != 2100) //continue L_c;
}
h = h + 1;
g = h;
if (h != 1900) //continue L_b;
}
int64_t j = memset(e, 0, 16800);
g = 0;
while (1) {
g = f + ((k = g) << 3);
g[0] = 0L;
double l = 0.0;
h = 0;
while (1) {
(double)g[0] =
(l = ((i = c + k * 16800) + (e = (h = h) << (double)3))[0] *
(d + (double)e)[0] +
l);
l = l;
e = h + 1;
h = e;
if (e != 2100) //continue L_e;
}
h = 0;
while (1) {
int64_t * m = j + (e = (h = h) << 3);
m[0] = (i + (double)e)[0] * (double)g[0] + m[0];
e = h + 1;
h = e;
if (e != 2100) //continue L_f;
}
h = k + 1;
g = h;
if (h != 1900) //continue L_d;
}
if (a < 43) goto B_g;
if (ubyte))((b[0])[0] goto B_g;
print_array(2100, j);
B_g:;
free(c);
free(d);
free(j);
free(f);
return 0;
}

int legalfunc_polybench_alloc_data(long a, int b) {
return legalimport_polybench_alloc_data(i32_wrap_i64(a),
i32_wrap_i64(a >> 32L),
b)
}