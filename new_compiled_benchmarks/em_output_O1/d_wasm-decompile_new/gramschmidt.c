

extern int64_t stack_pointer;
extern int64_t memory_base;
extern int64_t table_base;
extern int64_t stderr;

data ()rodata(offset memory_base) =
"begin ()dump %s\00R\00Q\00%0.2lf \00\0aend ()dump %s\0a\00==BEGIN DUMP"
"_ARRAYS==\0a\00==END DUMP_ARRAYS==\0a\00";















void wasm_call_ctors() {
}

void wasm_apply_data_relocs() {
}

void kernel_gramschmidt(int a, int b, int c, int d, int e) {
int64_t k;
int64_t n;
int64_t p;
if (b < 1) goto B_a;
int64_t f = a < 1;
int64_t g = 0;
while (1) {
int64_t h = g;
double i = 0.0;
g = 0;
if (f) goto B_c;
while (1) {
double j = (c + (g = g) * (double)9600)[h];
i = j * j + i;
k = g + 1;
g = k;
if (k != a) //continue L_d;
}
B_c:;
int64_t l = d + h * 9600;
int64_t * m = l + (g = h << 3);
m[0] = sqrt(i);
k = 0;
if (f) goto B_e;
while (1) {
(e + (n = (k = k) * 9600) + (double)g)[0] =
(c + n + (double)g)[0] / m[0];
n = k + 1;
k = n;
if (n != a) //continue L_f;
}
B_e:;
int64_t o = h + 1;
k = o;
if (o >= b) goto B_g;
while (1) {
k = l + (n = (p = k) << 3);
k[0] = 0L;
if (f) goto B_i;
i = (double)k[0];
h = 0;
while (1) {
(double)k[0] =
(i =
(e + (m = (h = h) * 9600) + (double)g)[0] * (c + m + (double)n)[0] + i);
i = i;
m = h + 1;
h = m;
if (m != a) //continue L_j;
}
B_i:;
h = 0;
if (a <= 0) goto B_k;
while (1) {
int64_t * q = c + (m = (h = h) * 9600) + n;
q[0] = q[0] - (e + m + (double)g)[0] * (double)k[0];
m = h + 1;
h = m;
if (m != a) //continue L_l;
}
B_k:;
n = p + 1;
k = n;
if (n != b) //continue L_h;
}
B_g:;
g = o;
if (o != b) //continue L_b;
}
B_a:;
}

int submain(int a, int_ptr b) {
int64_t i;
int64_t j;
int64_t h;
double m;
int64_t p;
int64_t* c = stack_pointer - 96;
stack_pointer = c;
int64_t d = legalfunc_polybench_alloc_data(1200000L, 8);
int64_t * e = legalfunc_polybench_alloc_data(1440000L, 8);
int64_t f = legalfunc_polybench_alloc_data(1200000L, 8);
int64_t g = 0;
while (1) {
h = g;
g = 0;
while (1) {
(d + (i = h * 9600) + (j = (g = g) << (double)3))[0] =
f64_convert_i32_s(g * h % 1000) / 1000.0 * 100.0 + 10.0;
(f + i + j)[0] = 0L;
i = g + 1;
g = i;
if (i != 1200) //continue L_b;
}
h = h + 1;
g = h;
if (h != 1000) //continue L_a;
}
int64_t k = memset(e, 0, 11520000);
g = 0;
while (1) {
j = g;
double l = 0.0;
h = 0;
while (1) {
m = (d + (h = h) * 9600 + (g = j << (double)3))[0];
m = m * m + l;
l = m;
i = h + 1;
h = i;
if (i != 1000) //continue L_d;
}
int64_t n = k + j * 9600;
e = n + g;
e[0] = sqrt(m);
h = 0;
while (1) {
(f + (i = (h = h) * 9600) + (double)g)[0] =
(d + i + (double)g)[0] / e[0];
i = h + 1;
h = i;
if (i != 1000) //continue L_e;
}
int64_t o = j + 1;
h = o;
if (j > 1198) goto B_f;
while (1) {
i = n + (h = (p = h) << 3);
i[0] = 0L;
l = 0.0;
j = 0;
while (1) {
(double)i[0] =
(l =
(f + (e = (j = j) * 9600) + (double)g)[0] * (d + e + (double)h)[0] + l);
l = l;
e = j + 1;
j = e;
if (e != 1000) //continue L_h;
}
j = 0;
while (1) {
int64_t * q = d + (e = (j = j) * 9600) + h;
q[0] = q[0] - (f + e + (double)g)[0] * (double)i[0];
e = j + 1;
j = e;
if (e != 1000) //continue L_i;
}
i = p + 1;
h = i;
if (i != 1200) //continue L_g;
}
B_f:;
g = o;
if (o != 1200) //continue L_c;
}
if (a < 43) goto B_j;
if (ubyte))((b[0])[0] goto B_j;
h = memory_base;
fwrite(h + 44, 22, 1, g = (int))stderr[0];
c[20] = h + 15;
fiprintf(g, h + 0, c + 80);
h = 0;
while (1) {
j = h;
e = j * 1200;
h = 0;
while (1) {
h = h;
if ((h + e) % 20) goto B_m;
fputc(10, g);
B_m:;
c[8] = (k + j * (double)9600)[h];
small_fprintf(g, memory_base + 19, c + 64);
i = h + 1;
h = i;
if (i != 1200) //continue L_l;
}
i = j + 1;
h = i;
if (i != 1200) //continue L_k;
}
c[12] = (h = memory_base) + 15;
fiprintf(g, h + 27, c + 48);
c[8] = h + 17;
fiprintf(g, h + 0, c + 32);
h = 0;
while (1) {
j = h;
e = j * 1200;
h = 0;
while (1) {
h = h;
if ((h + e) % 20) goto B_p;
fputc(10, g);
B_p:;
c[2] = (f + j * (double)9600)[h];
small_fprintf(g, memory_base + 19, c + 16);
i = h + 1;
h = i;
if (i != 1200) //continue L_o;
}
i = j + 1;
h = i;
if (i != 1000) //continue L_n;
}
c[0] = (h = memory_base) + 17;
fiprintf(g, h + 27, c);
fwrite(h + 67, 22, 1, g);
B_j:;
free(d);
free(k);
free(f);
stack_pointer = c + 96;
return 0;
}

int legalfunc_polybench_alloc_data(long a, int b) {
return legalimport_polybench_alloc_data(i32_wrap_i64(a),
i32_wrap_i64(a >> 32L),
b)
}