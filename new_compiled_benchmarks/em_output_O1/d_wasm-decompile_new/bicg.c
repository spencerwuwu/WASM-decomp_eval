

extern int64_t stack_pointer;
extern int64_t memory_base;
extern int64_t table_base;
extern int64_t stderr;

data ()rodata(offset memory_base) =
"begin ()dump %s\00q\00%0.2lf \00\0aend ()dump %s\0a\00==BEGIN DUMP_ARR"
"AYS==\0a\00==END DUMP_ARRAYS==\0a\00";















void wasm_call_ctors() {
}

void wasm_apply_data_relocs() {
}

void kernel_bicg(int a, int b, int c, int d, int e, int f, int g) {
int64_t j;
int64_t m;
int64_t * o;
if (a < 1) goto B_a;
memset(d, 0, a << 3);
B_a:;
if (b < 1) goto B_b;
int64_t h = a < 1;
int64_t i = 0;
while (1) {
int64_t k = e + (i = (j = i) << 3);
k[0] = 0L;
if (h) goto B_d;
int64_t * l = g + i;
i = 0;
while (1) {
int64_t * n = d + (i = (m = i) << 3);
n[0] = l[0] * (o = c + j * 15200 + i)[0] + n[0];
k[0] = o[0] * (f + (double)i)[0] + (double)k[0];
m = m + 1;
i = m;
if (m != a) //continue L_e;
}
B_d:;
k = j + 1;
i = k;
if (k != b) //continue L_c;
}
B_b:;
}

int submain(int a, int_ptr b) {
int64_t j;
int64_t m;
int64_t * o;
int64_t k;
int64_t* c = stack_pointer - 96;
stack_pointer = c;
int64_t d = legalfunc_polybench_alloc_data(3990000L, 8);
int64_t * e = legalfunc_polybench_alloc_data(1900L, 8);
int64_t f = legalfunc_polybench_alloc_data(2100L, 8);
int64_t g = legalfunc_polybench_alloc_data(1900L, 8);
int64_t h = legalfunc_polybench_alloc_data(2100L, 8);
int64_t i = 0;
while (1) {
g[i = (double)i] = f64_convert_i32_s(i) / 1900.0;
j = i + 1;
i = j;
if (j != 1900) //continue L_a;
}
i = 0;
while (1) {
h[j = (double)i] = f64_convert_i32_s(j) / 2100.0;
k = 0;
while (1) {
(d + j * 15200)[i = (double)k] =
f64_convert_i32_s((i = i + 1) * j % 2100) / 2100.0;
k = i;
if (i != 1900) //continue L_c;
}
j = j + 1;
i = j;
if (j != 2100) //continue L_b;
}
int64_t l = memset(e, 0, 15200);
i = 0;
while (1) {
j = f + (i = (m = i) << 3);
j[0] = 0L;
int64_t * n = h + i;
i = 0;
while (1) {
e = l + (i = (k = i) << 3);
e[0] = n[0] * (o = d + m * 15200 + i)[0] + e[0];
j[0] = o[0] * (g + (double)i)[0] + (double)j[0];
k = k + 1;
i = k;
if (k != 1900) //continue L_e;
}
j = m + 1;
i = j;
if (j != 2100) //continue L_d;
}
if (a < 43) goto B_f;
if (ubyte))((b[0])[0] goto B_f;
j = memory_base;
fwrite(j + 42, 22, 1, i = (int))stderr[0];
c[20] = j + 13;
fiprintf(i, j + 0, c + 80);
j = 0;
while (1) {
j = j;
if (j % 20) goto B_h;
fputc(10, i);
B_h:;
c[8] = (double)l[j];
small_fprintf(i, memory_base + 17, c + 64);
k = j + 1;
j = k;
if (k != 1900) //continue L_g;
}
c[12] = (j = memory_base) + 13;
fiprintf(i, j + 25, c + 48);
c[8] = j + 15;
fiprintf(i, j + 0, c + 32);
j = 0;
while (1) {
j = j;
if (j % 20) goto B_j;
fputc(10, i);
B_j:;
c[2] = (double)f[j];
small_fprintf(i, memory_base + 17, c + 16);
k = j + 1;
j = k;
if (k != 2100) //continue L_i;
}
c[0] = (j = memory_base) + 15;
fiprintf(i, j + 25, c);
fwrite(j + 65, 22, 1, i);
B_f:;
free(d);
free(l);
free(f);
free(g);
free(h);
stack_pointer = c + 96;
return 0;
}

int legalfunc_polybench_alloc_data(long a, int b) {
return legalimport_polybench_alloc_data(i32_wrap_i64(a),
i32_wrap_i64(a >> 32L),
b)
}