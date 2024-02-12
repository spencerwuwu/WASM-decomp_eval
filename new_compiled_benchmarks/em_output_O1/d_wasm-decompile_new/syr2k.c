

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

void kernel_syr2k(int a, int b, double c, double d, int e, int f, int g) {
int64_t * m;
int64_t n;
int64_t l;
if (a < 1) goto B_a;
int64_t h = 1;
int64_t * i = 0;
while (1) {
int64_t j = i;
int64_t k = h;
h = 0;
while (1) {
l = e + j * 9600;
i = l + ((h = h) << 3);
i[0] = i[0] * d;
i = h + 1;
h = i;
if (i != k) //continue L_c;
}
h = 0;
if (b <= 0) goto B_d;
while (1) {
int64_t * o = f + (m = j * 8000) + (i = (n = h) << 3);
int64_t * p = g + m + i;
h = 0;
while (1) {
m = l + ((h = h) << 3);
m[0] =
m[0] +
(f + (m = h * 8000) + (double)i)[0] * c * p[0] +
(g + m + (double)i)[0] * c * o[0];
m = h + 1;
h = m;
if (m != k) //continue L_f;
}
i = n + 1;
h = i;
if (i != b) //continue L_e;
}
B_d:;
h = k + 1;
m = j + 1;
i = m;
if (m != a) //continue L_b;
}
B_a:;
}

int submain(int a, int_ptr b) {
int64_t * i;
int64_t j;
int64_t k;
int64_t * h;
int64_t m;
int64_t* c = stack_pointer - 48;
stack_pointer = c;
int64_t d = legalfunc_polybench_alloc_data(1440000L, 8);
int64_t e = legalfunc_polybench_alloc_data(1200000L, 8);
int64_t f = legalfunc_polybench_alloc_data(1200000L, 8);
int64_t g = 0;
while (1) {
h = g;
g = 0;
while (1) {
(e + (i = h * 8000) + (j = (g = g) << (double)3))[0] =
f64_convert_i32_s(((k = g * h) + 1) % 1200) / 1200.0;
(f + i + j)[0] = f64_convert_i32_s((k + 2) % 1000) / 1000.0;
i = g + 1;
g = i;
if (i != 1000) //continue L_b;
}
h = h + 1;
g = h;
if (h != 1200) //continue L_a;
}
g = 0;
while (1) {
h = g;
g = 0;
while (1) {
(d + h * 9600)[g = (double)g] =
f64_convert_i32_s((g * h + 3) % 1200) / 1000.0;
i = g + 1;
g = i;
if (i != 1200) //continue L_d;
}
h = h + 1;
g = h;
if (h != 1200) //continue L_c;
}
g = 1;
h = 0;
while (1) {
int64_t l = h;
j = g;
g = 0;
while (1) {
k = d + l * 9600;
h = k + ((g = g) << 3);
h[0] = h[0] * 1.2;
h = g + 1;
g = h;
if (h != j) //continue L_f;
}
g = 0;
while (1) {
int64_t * n = e + (i = l * 8000) + (h = (m = g) << 3);
int64_t * o = f + i + h;
g = 0;
while (1) {
i = k + ((g = g) << 3);
i[0] =
i[0] +
(e + (i = g * 8000) + (double)h)[0] * 1.5 * o[0] +
(f + i + (double)h)[0] * 1.5 * n[0];
i = g + 1;
g = i;
if (i != j) //continue L_h;
}
h = m + 1;
g = h;
if (h != 1000) //continue L_g;
}
g = j + 1;
i = l + 1;
h = i;
if (i != 1200) //continue L_e;
}
if (a < 43) goto B_i;
if (ubyte))((b[0])[0] goto B_i;
g = memory_base;
fwrite(g + 42, 22, 1, j = (int))stderr[0];
c[8] = g + 15;
fiprintf(j, g + 0, c + 32);
g = 0;
while (1) {
i = g;
k = i * 1200;
g = 0;
while (1) {
g = g;
if ((g + k) % 20) goto B_l;
fputc(10, j);
B_l:;
c[2] = (d + i * (double)9600)[g];
small_fprintf(j, memory_base + 17, c + 16);
h = g + 1;
g = h;
if (h != 1200) //continue L_k;
}
h = i + 1;
g = h;
if (h != 1200) //continue L_j;
}
c[0] = (g = memory_base) + 15;
fiprintf(j, g + 25, c);
fwrite(g + 65, 22, 1, j);
B_i:;
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