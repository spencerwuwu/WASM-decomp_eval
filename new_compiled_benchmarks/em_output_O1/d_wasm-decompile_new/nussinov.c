

extern int64_t stack_pointer;
extern int64_t memory_base;
extern int64_t table_base;
extern int64_t stderr;

data ()rodata(offset memory_base) =
"begin ()dump %s\00table\00%d \00\0aend ()dump %s\0a\00==BEGIN DUMP_ARR"
"AYS==\0a\00==END DUMP_ARRAYS==\0a\00";













void wasm_call_ctors() {
}

void wasm_apply_data_relocs() {
}

void kernel_nussinov(int a, int b, int c) {
int64_t i;
int64_t j;
int64_t l;
int64_t m;
int64_t n;
if (a <= 0) goto B_a;
int64_t d = a;
while (1) {
int64_t e = d;
int64_t f = e + -1;
if (e >= a) goto B_c;
int64_t * g = b + f;
d = e;
while (1) {
int64_t h = c + f * 10000;
int64_t * k = h + (j = (i = d) << 2);
d = k[0];
if (i < 1) goto B_f;
k[0] = (d = select__if(d, m = (h + (l = j + (int,)-4))[0] d > m));
k[0] =
(d = select__if(d, n = ((m = c + e * 10000) + (int,)j)[0] d > n));
l = (m + (int64_t)l)[0];
if (e >= i) goto B_g;
k[0] = select__if(d, l = l + ((b + (byte)i)[0] + g[0] == 3), d > l);
goto B_e;
B_g:;
k[0] = select__if(d, l, d > l);
goto B_e;
B_f:;
k[0] = select__if(d, l = (c + e * 10000 + (int,)j)[0] d > l);
B_e:;
if (e >= i) goto B_h;
l = k[0];
m = e;
while (1) {
k[0] =
(l =
select__if(l = l,
m = (c + (d = (m = m) + 1) * 10000 + (int64_t)j)[0] + (int,)h[m]
l > m));
l = l;
m = d;
if (d != i) //continue L_i;
}
B_h:;
l = i + 1;
d = l;
if (l != a) //continue L_d;
}
B_c:;
d = f;
if (e >= 2) //continue L_b;
}
B_a:;
}

int submain(int a, int_ptr b) {
int64_t g;
int64_t h;
int64_t i;
int64_t * c = stack_pointer - 48;
stack_pointer = c;
int64_t d = legalfunc_polybench_alloc_data(2500L, 1);
int64_t e = legalfunc_polybench_alloc_data(6250000L, 4);
int64_t f = 0;
while (1) {
(d + (g = (byte)f))[0] = (g = g + 1) & 3;
f = g;
if (g != 2500) //continue L_a;
}
kernel_nussinov(2500, d, h = memset(e, 0, 25000000));
if (a < 43) goto B_b;
if (ubyte))((b[0])[0] goto B_b;
g = memory_base;
fwrite(g + 42, 22, 1, i = (int))stderr[0];
c[8] = g + 15;
fiprintf(i, g + 0, c + 32);
g = 2500;
f = 2499;
a = 2500;
int64_t j = 0;
b = 0;
while (1) {
int64_t k = a;
int64_t l = f;
e = g;
j = j;
f = j;
b = b;
g = b;
while (1) {
g = g;
f = f;
if (f % 20) goto B_e;
fputc(10, i);
B_e:;
c[4] = (h + b * (int64_t)10000)[g];
fiprintf(i, memory_base + 21, c + 16);
a = f + 1;
f = a;
g = g + 1;
if (a != e) //continue L_d;
}
g = l + e;
f = l + -1;
a = k + -1;
j = j + k;
e = b + 1;
b = e;
if (e != 2500) //continue L_c;
}
c[0] = (g = memory_base) + 15;
fiprintf(i, g + 25, c);
fwrite(g + 65, 22, 1, i);
B_b:;
free(d);
free(h);
stack_pointer = c + 48;
return 0;
}

int legalfunc_polybench_alloc_data(long a, int b) {
return legalimport_polybench_alloc_data(i32_wrap_i64(a),
i32_wrap_i64(a >> 32L),
b)
}