

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

void kernel_symm(int a, int b, double c, double d, int e, int f, int g) {
int64_t o;
int64_t * r;
int64_t * t;
double n;
if (a < 1) goto B_a;
int64_t h = b < 1;
int64_t i = 0;
while (1) {
int64_t j = i;
if (h) goto B_c;
int64_t k = f + j * 8000;
int64_t * l = k + (j << 3);
i = 0;
while (1) {
int64_t m = i;
if (j) goto B_f;
n = 0.0;
goto B_e;
B_f:;
int64_t * p = g + j * 9600 + (o = m << 3);
double q = 0.0;
i = 0;
while (1) {
int64_t * s = e + (r = (i = i) * 9600) + o;
s[0] = p[0] * c * (t = k + (i << 3))[0] + s[0];
n = (g + r + (double)o)[0] * t[0] + q;
q = n;
r = i + 1;
i = r;
n = n;
if (r != j) //continue L_g;
}
B_e:;
r = e + (i = j * 9600) + (o = m << 3);
r[0] = c * n + d * r[0] + (g + i + (double)o)[0] * c * l[0];
o = m + 1;
i = o;
if (o != b) //continue L_d;
}
B_c:;
o = j + 1;
i = o;
if (o != a) //continue L_b;
}
B_a:;
}

int submain(int a, int_ptr b) {
int64_t * j;
int64_t * k;
int64_t h;
int64_t * i;
int64_t l;
double p;
int64_t* c = stack_pointer - 48;
stack_pointer = c;
int64_t d = legalfunc_polybench_alloc_data(1200000L, 8);
int64_t e = legalfunc_polybench_alloc_data(1000000L, 8);
int64_t f = legalfunc_polybench_alloc_data(1200000L, 8);
int64_t g = 0;
while (1) {
h = g;
i = h + 1200;
g = 0;
while (1) {
(d + (j = h * 9600) + (k = (g = g) << (double)3))[0] =
f64_convert_i32_s((g + h) % 100) / 1000.0;
(f + j + k)[0] = f64_convert_i32_s((i - g) % 100) / 1000.0;
j = g + 1;
g = j;
if (j != 1200) //continue L_b;
}
h = h + 1;
g = h;
if (h != 1000) //continue L_a;
}
g = 1;
h = 0;
while (1) {
h = h;
i = g;
g = 0;
while (1) {
k = e + h * 8000;
k[g = (double)g] = f64_convert_i32_s((g + h) % 100) / 1000.0;
j = g + 1;
g = j;
if (j != i) //continue L_d;
}
j = h + 1;
g = j;
if (h > 998) goto B_e;
while (1) {
k[g = (long)g] = -4571373524106608640L;
h = g + 1;
g = h;
if (h != 1000) //continue L_f;
}
B_e:;
g = i + 1;
h = j;
if (j != 1000) //continue L_c;
}
g = 0;
while (1) {
int64_t m = e + (l = g) * 8000;
int64_t * n = m + (l << 3);
g = 0;
while (1) {
int64_t o = g;
if (l) goto B_j;
p = 0.0;
goto B_i;
B_j:;
int64_t * q = f + l * 9600 + (h = o << 3);
double r = 0.0;
g = 0;
while (1) {
k = d + (j = (g = g) * 9600) + h;
k[0] = q[0] * 1.5 * (i = m + (g << 3))[0] + k[0];
p = (f + j + (double)h)[0] * i[0] + r;
r = p;
j = g + 1;
g = j;
p = p;
if (j != l) //continue L_k;
}
B_i:;
j = d + (g = l * 9600) + (h = o << 3);
j[0] = p * 1.5 + j[0] * 1.2 + (f + g + (double)h)[0] * 1.5 * n[0];
h = o + 1;
g = h;
if (h != 1200) //continue L_h;
}
h = l + 1;
g = h;
if (h != 1000) //continue L_g;
}
if (a < 43) goto B_l;
if (ubyte))((b[0])[0] goto B_l;
g = memory_base;
fwrite(g + 42, 22, 1, k = (int))stderr[0];
c[8] = g + 15;
fiprintf(k, g + 0, c + 32);
g = 0;
while (1) {
j = g;
i = j * 1000;
g = 0;
while (1) {
g = g;
if ((g + i) % 20) goto B_o;
fputc(10, k);
B_o:;
c[2] = (d + j * (double)9600)[g];
small_fprintf(k, memory_base + 17, c + 16);
h = g + 1;
g = h;
if (h != 1200) //continue L_n;
}
h = j + 1;
g = h;
if (h != 1000) //continue L_m;
}
c[0] = (g = memory_base) + 15;
fiprintf(k, g + 25, c);
fwrite(g + 65, 22, 1, k);
B_l:;
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