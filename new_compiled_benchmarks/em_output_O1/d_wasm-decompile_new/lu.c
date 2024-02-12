

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

void kernel_lu(int a, int b) {
int64_t * h;
int64_t f;
int64_t * i;
double j;
int64_t g;
if (a < 1) goto B_a;
int64_t c = 0;
while (1) {
int64_t * d = 0;
int64_t e = c;
c = e;
if (eqz(e)) goto B_c;
while (1) {
f = d;
if (eqz(f)) goto B_e;
g = b + e * 16000;
i = g + (h = f << 3);
j = i[0];
c = 0;
while (1) {
i[0] = (j = j - g[c = (double)c] * (b + c * 16000 + (double))h)[0];
j = j;
d = c + 1;
c = d;
if (d != f) //continue L_f;
}
B_e:;
d = b + e * 16000 + (c = f << 3);
d[0] = d[0] / (b + f * 16000 + (double)c)[0];
c = f + 1;
d = c;
if (c != e) //continue L_d;
}
c = e;
B_c:;
while (1) {
i = c;
if (eqz(e)) goto B_h;
f = b + e * 16000;
h = f + (g = i << 3);
j = h[0];
c = 0;
while (1) {
h[0] = (j = j - f[c = (double)c] * (b + c * 16000 + (double))g)[0];
j = j;
d = c + 1;
c = d;
if (d != e) //continue L_i;
}
B_h:;
d = i + 1;
c = d;
if (d != a) //continue L_g;
}
d = e + 1;
c = d;
if (d != a) //continue L_b;
}
B_a:;
}

int submain(int a, int_ptr b) {
int64_t k;
int64_t j;
int64_t g;
int64_t * h;
int64_t * i;
double m;
int64_t* c = stack_pointer - 48;
stack_pointer = c;
int64_t d = legalfunc_polybench_alloc_data(4000000L, 8);
int64_t * e = 1;
int64_t f = 0;
while (1) {
g = e;
f = f;
h = f << 3;
i = f * 16008 + 8;
j = 0;
while (1) {
k = d + f * 16000;
k[j = (double)j] = f64_convert_i32_s(0 - j) / 2000.0 + 1.0;
e = j + 1;
j = e;
if (e != g) //continue L_b;
}
j = f + 1;
if (f > 1998) goto B_c;
memset(d + i, 0, 15992 - h);
B_c:;
(k + h)[0] = 4607182418800017408L;
e = g + 1;
f = j;
if (j != 2000) //continue L_a;
}
f = memset(legalfunc_polybench_alloc_data(4000000L, 8), 0, 32000000);
j = 0;
while (1) {
int64_t l = j;
j = 0;
while (1) {
h = d + (g = (i = j) * 16000) + (k = l << 3);
j = 0;
while (1) {
e = f + g + ((j = j) << 3);
e[0] = h[0] * (d + j * 16000 + (double)k)[0] + e[0];
e = j + 1;
j = e;
if (e != 2000) //continue L_f;
}
e = i + 1;
j = e;
if (e != 2000) //continue L_e;
}
e = l + 1;
j = e;
if (e != 2000) //continue L_d;
}
j = 0;
while (1) {
k = j;
j = 0;
while (1) {
(d + (e = k * 16000) + (g = (j = j) << (double)3))[0] =
(f + e + (double)g)[0];
e = j + 1;
j = e;
if (e != 2000) //continue L_h;
}
e = k + 1;
j = e;
if (e != 2000) //continue L_g;
}
free(f);
e = 0;
while (1) {
j = 0;
f = e;
if (eqz(f)) goto B_j;
while (1) {
g = j;
if (eqz(g)) goto B_l;
k = d + f * 16000;
i = k + (h = g << 3);
m = i[0];
j = 0;
while (1) {
i[0] = (m = m - k[j = (double)j] * (d + j * 16000 + (double))h)[0];
m = m;
e = j + 1;
j = e;
if (e != g) //continue L_m;
}
B_l:;
e = d + f * 16000 + (j = g << 3);
e[0] = e[0] / (d + g * 16000 + (double)j)[0];
e = g + 1;
j = e;
if (e != f) //continue L_k;
}
B_j:;
j = f;
while (1) {
i = j;
if (eqz(f)) goto B_o;
g = d + f * 16000;
h = g + (k = i << 3);
m = h[0];
j = 0;
while (1) {
h[0] = (m = m - g[j = (double)j] * (d + j * 16000 + (double))k)[0];
m = m;
e = j + 1;
j = e;
if (e != f) //continue L_p;
}
B_o:;
e = i + 1;
j = e;
if (e != 2000) //continue L_n;
}
j = f + 1;
e = j;
if (j != 2000) //continue L_i;
}
if (a < 43) goto B_q;
if (ubyte))((b[0])[0] goto B_q;
j = memory_base;
fwrite(j + 42, 22, 1, g = (int))stderr[0];
c[8] = j + 15;
fiprintf(g, j + 0, c + 32);
j = 0;
while (1) {
f = j;
k = f * 2000;
j = 0;
while (1) {
j = j;
if ((j + k) % 20) goto B_t;
fputc(10, g);
B_t:;
c[2] = (d + f * (double)16000)[j];
small_fprintf(g, memory_base + 17, c + 16);
e = j + 1;
j = e;
if (e != 2000) //continue L_s;
}
e = f + 1;
j = e;
if (e != 2000) //continue L_r;
}
c[0] = (j = memory_base) + 15;
fiprintf(g, j + 25, c);
fwrite(j + 65, 22, 1, g);
B_q:;
free(d);
stack_pointer = c + 48;
return 0;
}

int legalfunc_polybench_alloc_data(long a, int b) {
return legalimport_polybench_alloc_data(i32_wrap_i64(a),
i32_wrap_i64(a >> 32L),
b)
}