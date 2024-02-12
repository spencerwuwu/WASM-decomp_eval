

extern int64_t stack_pointer;
extern int64_t memory_base;
extern int64_t table_base;
extern int64_t stderr;

data ()rodata(offset memory_base) =
"begin ()dump %s\00C\00%0.2lf \00\0aend ()dump %s\0a\00==BEGIN DUMP_ARR"
"AYS==\0a\00==END DUMP_ARRAYS==\0a\00";













void wasm_call_ctors() {
}

void wasm_apply_data_relocs() {
}

void kernel_syrk(int a, int b, double c, double d, int e, int f) {
int64_t l;
int64_t m;
int64_t k;
if (a < 1) goto B_a;
int64_t g = 1;
int64_t * h = 0;
while (1) {
int64_t i = h;
int64_t j = g;
g = 0;
while (1) {
k = e + i * 9600;
h = k + ((g = g) << 3);
h[0] = h[0] * d;
h = g + 1;
g = h;
if (h != j) //continue L_c;
}
g = 0;
if (b <= 0) goto B_d;
while (1) {
int64_t * n = f + i * 8000 + (m = (l = g) << 3);
g = 0;
while (1) {
h = k + ((g = g) << 3);
h[0] = n[0] * c * (f + g * 8000 + (double)m)[0] + h[0];
h = g + 1;
g = h;
if (h != j) //continue L_f;
}
h = l + 1;
g = h;
if (h != b) //continue L_e;
}
B_d:;
g = j + 1;
j = i + 1;
h = j;
if (j != a) //continue L_b;
}
B_a:;
}

int submain(int a, int_ptr b) {
int64_t * g;
int64_t h;
int64_t k;
int64_t l;
int64_t j;
int64_t* c = stack_pointer - 48;
stack_pointer = c;
int64_t d = legalfunc_polybench_alloc_data(1440000L, 8);
int64_t e = legalfunc_polybench_alloc_data(1200000L, 8);
int64_t f = 0;
while (1) {
g = f;
f = 0;
while (1) {
(e + g * 8000)[f = (double)f] =
f64_convert_i32_s((f * g + 1) % 1200) / 1200.0;
h = f + 1;
f = h;
if (h != 1000) //continue L_b;
}
g = g + 1;
f = g;
if (g != 1200) //continue L_a;
}
f = 0;
while (1) {
g = f;
f = 0;
while (1) {
(d + g * 9600)[f = (double)f] =
f64_convert_i32_s((f * g + 2) % 1000) / 1000.0;
h = f + 1;
f = h;
if (h != 1200) //continue L_d;
}
g = g + 1;
f = g;
if (g != 1200) //continue L_c;
}
f = 1;
g = 0;
while (1) {
int64_t i = g;
h = f;
f = 0;
while (1) {
j = d + i * 9600;
g = j + ((f = f) << 3);
g[0] = g[0] * 1.2;
g = f + 1;
f = g;
if (g != h) //continue L_f;
}
f = 0;
while (1) {
int64_t * m = e + i * 8000 + (l = (k = f) << 3);
f = 0;
while (1) {
g = j + ((f = f) << 3);
g[0] = m[0] * 1.5 * (e + f * 8000 + (double)l)[0] + g[0];
g = f + 1;
f = g;
if (g != h) //continue L_h;
}
g = k + 1;
f = g;
if (g != 1000) //continue L_g;
}
f = h + 1;
h = i + 1;
g = h;
if (h != 1200) //continue L_e;
}
if (a < 43) goto B_i;
if (ubyte))((b[0])[0] goto B_i;
f = memory_base;
fwrite(f + 42, 22, 1, j = (int))stderr[0];
c[8] = f + 15;
fiprintf(j, f + 0, c + 32);
f = 0;
while (1) {
h = f;
l = h * 1200;
f = 0;
while (1) {
f = f;
if ((f + l) % 20) goto B_l;
fputc(10, j);
B_l:;
c[2] = (d + h * (double)9600)[f];
small_fprintf(j, memory_base + 17, c + 16);
g = f + 1;
f = g;
if (g != 1200) //continue L_k;
}
g = h + 1;
f = g;
if (g != 1200) //continue L_j;
}
c[0] = (f = memory_base) + 15;
fiprintf(j, f + 25, c);
fwrite(f + 65, 22, 1, j);
B_i:;
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