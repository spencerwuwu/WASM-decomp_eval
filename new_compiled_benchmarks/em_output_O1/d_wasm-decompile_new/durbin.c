

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

void kernel_durbin(int a, double_ptr b, double_ptr c) {
int64_t n;
int64_t* d = stack_pointer - 16000;
stack_pointer = d;
c[0] = -(b[0]);
if (a < 2) goto B_a;
int64_t e = a + -2;
int64_t f = 0;
a = 1;
double g = 1.0;
double h = -(b[0]);
while (1) {
double i = g;
a = a;
double j = 1.0 - (h = h) * h;
int64_t k = f;
int64_t l = (k << 3) + 8;
int64_t m = 0;
h = 0.0;
while (1) {
f = m;
n = f + 1;
m = n;
g = b[a + (f ^ (double)-1)] * (double)c[f] + h;
h = g;
if (n != a) //continue L_c;
}
h = -(g + (b + (n = a << (double))3))[0] / (g = j * i);
f = 0;
while (1) {
(d + (m = (f = f) << (double)3))[0] =
h * c[a + (f ^ (double)-1)] + (c + (double)m)[0];
m = f + 1;
f = m;
if (m != a) //continue L_d;
}
(memcpy(c, d, l) + n)[0] = h;
f = k + 1;
a = a + 1;
g = g;
h = h;
if (k != e) //continue L_b;
}
B_a:;
stack_pointer = d + 16000;
}

int submain(int a, int_ptr b) {
int64_t g;
int64_t p;
int64_t o;
int64_t* c = stack_pointer - 16048;
stack_pointer = c;
int64_t * d = legalfunc_polybench_alloc_data(2000L, 8);
int64_t * e = legalfunc_polybench_alloc_data(2000L, 8);
int64_t f = 0;
while (1) {
d[f = (double)f] = f64_convert_i32_s(2001 - f);
g = f + 1;
f = g;
if (g != 2000) //continue L_a;
}
e[0] = -(d[0]);
g = 0;
f = 1;
double h = 1.0;
double i = -(d[0]);
while (1) {
double j = h;
f = f;
int64_t k = g;
int64_t l = k << 3;
double m = i;
double n = -(m);
o = 0;
i = 0.0;
while (1) {
g = o;
p = g + 1;
o = p;
h = d[f + (g ^ (double)-1)] * (double)e[g] + i;
i = h;
if (p != f) //continue L_c;
}
i = -(h + (d + (p = f << (double))3))[0] / (h = j * (n * m + 1.0));
g = 0;
while (1) {
(c + 48 + (o = (g = g) << (double)3))[0] =
i * e[f + (g ^ (double)-1)] + (e + (double)o)[0];
o = g + 1;
g = o;
if (o != f) //continue L_d;
}
o = memcpy(e, c + 48, l + 8);
(o + p)[0] = i;
g = k + 1;
f = f + 1;
h = h;
i = i;
if (k != 1998) //continue L_b;
}
if (a < 43) goto B_e;
if (ubyte))((b[0])[0] goto B_e;
f = memory_base;
fwrite(f + 42, 22, 1, g = (int))stderr[0];
c[8] = f + 0;
fiprintf(g, f + 2, c + 32);
f = 0;
while (1) {
f = f;
if (f % 20) goto B_g;
fputc(10, g);
B_g:;
c[2] = (double)o[f];
small_fprintf(g, memory_base + 17, c + 16);
e = f + 1;
f = e;
if (e != 2000) //continue L_f;
}
c[0] = (f = memory_base) + 0;
fiprintf(g, f + 25, c);
fwrite(f + 65, 22, 1, g);
B_e:;
free(d);
free(o);
stack_pointer = c + 16048;
return 0;
}

int legalfunc_polybench_alloc_data(long a, int b) {
return legalimport_polybench_alloc_data(i32_wrap_i64(a),
i32_wrap_i64(a >> 32L),
b)
}