

extern int64_t stack_pointer;
extern int64_t memory_base;
extern int64_t table_base;
extern int64_t stderr;

data ()rodata(offset memory_base) =
"begin ()dump %s\00corr\00%0.2lf \00\0aend ()dump %s\0a\00==BEGIN DUMP_"
"ARRAYS==\0a\00==END DUMP_ARRAYS==\0a\00";













void wasm_call_ctors() {
}

void wasm_apply_data_relocs() {
}

void kernel_correlation(int a, int b, double c, int d, int e, int f, int g) {
int64_t * k;
int64_t l;
int64_t * o;
int64_t h;
int64_t j;
double n;
int64_t m;
int64_t i;
h = a < 1;
if (h) goto B_a;
i = b < 1;
j = 0;
while (1) {
m = f + (l = (k = j) << 3);
m[0] = 0L;
if (i) goto B_c;
n = (double)m[0];
j = 0;
while (1) {
m[0] = (n = (d + (j = j) * 9600 + (double)l)[0] + n);
n = n;
o = j + 1;
j = o;
if (o != b) //continue L_d;
}
B_c:;
m[0] = (double)m[0] / c;
o = k + 1;
j = o;
if (o != a) //continue L_b;
}
B_a:;
if (h) goto B_e;
h = b < 1;
j = 0;
while (1) {
j = g + (l = (i = j) << 3);
j[0] = 0L;
if (h) goto B_g;
k = f + l;
o = 0;
while (1) {
(double)j[0] =
(n = (d + (o = o) * 9600 + (double)l)[0] - k[0]) * n + (double)j[0];
m = o + 1;
o = m;
if (m != b) //continue L_h;
}
B_g:;
j[0] = select__if(1.0, n = (double)sqrt(j[0] / c), n <= 0.1);
o = i + 1;
j = o;
if (o != a) //continue L_f;
}
B_e:;
if (b < 1) goto B_i;
c = sqrt(c);
j = 0;
while (1) {
l = j;
j = 0;
if (a <= 0) goto B_k;
while (1) {
o = d + l * 9600 + (j = (m = j) << 3);
o[0] = (n = o[0] - (f + (double))j)[0];
o[0] = n / c * (g + (double)j)[0];
o = m + 1;
j = o;
if (o != a) //continue L_l;
}
B_k:;
o = l + 1;
j = o;
if (o != b) //continue L_j;
}
B_i:;
h = a + -1;
if (a < 2) goto B_m;
j = 0;
while (1) {
k = e + (j = j) * 9600;
(k + (l = j << (long)3))[0] = 4607182418800017408L;
i = j + 1;
j = i;
if (i >= a) goto B_o;
while (1) {
m = k + (f = (g = j) << 3);
m[0] = 0L;
if (b < 1) goto B_q;
n = (double)m[0];
j = 0;
while (1) {
(double)m[0] =
(n = ((o = d + (j = j) * 9600) + (double)l)[0] * (o + (double)f)[0] + n);
n = n;
o = j + 1;
j = o;
if (o != b) //continue L_r;
}
B_q:;
(e + g * 9600 + l)[0] = (double)m[0];
o = g + 1;
j = o;
if (o != a) //continue L_p;
}
B_o:;
j = i;
if (i != h) //continue L_n;
}
B_m:;
(e + h * 9600)[h] = 4607182418800017408L;
}

int submain(int a, int_ptr b) {
int64_t k;
int64_t i;
int64_t* c = stack_pointer - 48;
stack_pointer = c;
int64_t d = legalfunc_polybench_alloc_data(1680000L, 8);
int64_t e = legalfunc_polybench_alloc_data(1440000L, 8);
int64_t f = legalfunc_polybench_alloc_data(1200L, 8);
int64_t g = legalfunc_polybench_alloc_data(1200L, 8);
int64_t h = 0;
while (1) {
i = h;
double j = f64_convert_i32_s(i);
h = 0;
while (1) {
(d + i * 9600)[h = (double)h] = f64_convert_i32_s(h * i) / 1200.0 + j;
k = h + 1;
h = k;
if (k != 1200) //continue L_b;
}
i = i + 1;
h = i;
if (i != 1400) //continue L_a;
}
kernel_correlation(1200, 1400, 1400.0, d, e, f, g);
if (a < 43) goto B_c;
if (ubyte))((b[0])[0] goto B_c;
h = memory_base;
fwrite(h + 45, 22, 1, a = (int))stderr[0];
c[8] = h + 15;
fiprintf(a, h + 0, c + 32);
h = 0;
while (1) {
k = h;
b = k * 1200;
h = 0;
while (1) {
h = h;
if ((h + b) % 20) goto B_f;
fputc(10, a);
B_f:;
c[2] = (e + k * (double)9600)[h];
small_fprintf(a, memory_base + 20, c + 16);
i = h + 1;
h = i;
if (i != 1200) //continue L_e;
}
i = k + 1;
h = i;
if (i != 1200) //continue L_d;
}
c[0] = (h = memory_base) + 15;
fiprintf(a, h + 28, c);
fwrite(h + 68, 22, 1, a);
B_c:;
free(d);
free(e);
free(f);
free(g);
stack_pointer = c + 48;
return 0;
}

int legalfunc_polybench_alloc_data(long a, int b) {
return legalimport_polybench_alloc_data(i32_wrap_i64(a),
i32_wrap_i64(a >> 32L),
b)
}