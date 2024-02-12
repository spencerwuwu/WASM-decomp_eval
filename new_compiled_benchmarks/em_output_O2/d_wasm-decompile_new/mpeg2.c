typedef struct struct_1 {
    byte a;
    byte b;
    byte c;
    byte d;
    byte e;
    byte f;
    byte g;
    byte h;
} struct_1;
typedef struct struct_2 {
    ubyte a;
    ubyte b;
    ubyte c;
    ubyte d;
    ubyte e;
    ubyte f;
    ubyte g;
    ubyte h;
} struct_2;
typedef struct struct_3 {
    int a;
    int b;
} struct_3;
typedef struct struct_4 {
    int a;
    int b;
} struct_4;


extern int64_t stack_pointer;
extern int64_t memory_base;
extern int64_t inRdbfr;
extern int64_t ld_Rdbfr;
extern int64_t ld_Rdptr;
extern int64_t System_Stream_Flag;
extern int64_t ld_Rdmax;
extern int64_t ld_Bfr;
extern int64_t ld_Incnt;
extern int64_t MVtab0;
extern int64_t MVtab1;
extern int64_t MVtab2;
extern int64_t evalue;
extern int64_t inPMV;
extern int64_t startTimer;
extern int64_t endTimer;
int64_t inRdbfr_1 = 0;
int64_t ld_Rdbfr_1 = 4304;
int64_t ld_Rdptr_1 = 6352;
int64_t System_Stream_Flag_1 = 6356;
int64_t ld_Rdmax_1 = 6360;
int64_t ld_Bfr_1 = 6364;
int64_t ld_Incnt_1 = 6368;
int64_t MVtab0_1 = 4192;
int64_t MVtab1_1 = 4208;
int64_t MVtab2_1 = 4224;
int64_t evalue_1 = 6384;
int64_t inPMV_1 = 4096;
int64_t startTimer_1 = 6376;
int64_t endTimer_1 = 6392;
int64_t out_ld_Rdptr = 2048;
int64_t inmvfs = 4128;
int64_t outPMV = 4144;
int64_t outmvfs = 4176;










void wasm_call_ctors() {
no;
}

void wasm_apply_data_relocs() {
no;
}

int read(struct_1 a, struct_2 b, int c) {
int64_t d;
int64_t e;
if (c <= 0) goto B_a;
int64_t f = c & 7;
if (eqz(f)) {
d = c;
goto B_b;
}
d = c;
while (1) {
a.a = b.a;
b = b + 1;
a = a + 1;
d = d - 1;
e = e + 1;
if (e != f) //continue L_d;
}
B_b:;
if (c < 8) goto B_a;
while (1) {
a.a = b.a;
a.b = b.b;
a.c = b.c;
a.d = b.d;
a.e = b.e;
a.f = b.f;
a.g = b.g;
a.h = b.h;
b = b + 8;
a = a + 8;
e = d - 9;
d = d - 8;
if (e < -2) //continue L_e;
}
B_a:;
return c;
}

void Fill_Buffer() {
int64_t * a;
a = memcpy(ld_Rdbfr, a = inRdbfr, 2048);
ld_Rdptr[0] = a;
if (int))(System_Stream_Flag[0] {
a = ld_Rdmax;
a[0] = a[0] - 2048;
}
}

int Show_Bits(int a) {
return (int64_t)ld_Bfr[0] >> 0 - ;
}

int Get_Bits1() {
int64_t f;
int64_t d;
int64_t c;
int64_t * b;
int64_t e;
int64_t a = ld_Bfr;
a[0] = (d = (f = (int))a[0] << 1);
a = ld_Incnt;
a[0] = (c = (a = (int))a[0] - 1);
if (a <= 25) {
a = (int64_t)ld_Rdptr[0];
if (a < (b = ld_Rdbfr) + 2044) {
while (1) {
ld_Rdptr[0] = (b = a + 1);
ld_Bfr[0] = (d = (a = (ubyte))a[0] << 24 - c | d);
e = c < 17;
a = b;
b = c + 8;
c = b;
if (e) //continue L_d;
goto B_b;
}
//unreachable;
}
int64_t g = (int64_t)System_Stream_Flag[0];
e = (int64_t)ld_Rdmax[0];
b = c;
while (1) {
c = b;
if (ld_Rdbfr + 2048 > a) {
b = a;
goto B_f;
}
b = ld_Rdbfr;
memcpy(b, a = inRdbfr, 2048);
if (eqz(g)) goto B_f;
ld_Rdmax[0] = (e = e - 2048);
b = ld_Rdbfr;
B_f:;
ld_Rdptr[0] = (a = b + 1);
ld_Bfr[0] = (d = (b = b[0]) << 24 - c | d);
b = c + 8;
if (c < 17) //continue L_e;
}
B_b:;
ld_Incnt[0] = b;
}
return f >> 31;
}

int Get_Bits(int a) {
int64_t g;
int64_t e;
int64_t d;
int64_t * b;
int64_t f;
int64_t c = ld_Bfr;
c[0] = (e = (g = (int))c[0] << a);
c = ld_Incnt;
c[0] = (d = (int64_t)c[0] - a);
if (d <= 24) {
c = (int64_t)ld_Rdptr[0];
if (c < (b = ld_Rdbfr) + 2044) {
while (1) {
ld_Rdptr[0] = (b = c + 1);
ld_Bfr[0] = (e = (c = (ubyte))c[0] << 24 - d | e);
f = d < 17;
c = b;
b = d + 8;
d = b;
if (f) //continue L_d;
goto B_b;
}
//unreachable;
}
int64_t h = (int64_t)System_Stream_Flag[0];
f = (int64_t)ld_Rdmax[0];
b = d;
while (1) {
d = b;
if (ld_Rdbfr + 2048 > c) {
b = c;
goto B_f;
}
b = ld_Rdbfr;
memcpy(b, c = inRdbfr, 2048);
if (eqz(h)) goto B_f;
ld_Rdmax[0] = (f = f - 2048);
b = ld_Rdbfr;
B_f:;
ld_Rdptr[0] = (c = b + 1);
ld_Bfr[0] = (e = (b = b[0]) << 24 - d | e);
b = d + 8;
if (d < 17) //continue L_e;
}
B_b:;
ld_Incnt[0] = b;
}
return g >> 0 - a;
}

void Flush_Buffer(ubyte_ptr a) {
int64_t d;
int64_t * c;
int64_t e;
int64_t * b = ld_Bfr;
b[0] = (d = b[0] << a);
b = ld_Incnt;
b[0] = (b = b[0] - a);
if (b <= 24) {
a = (int64_t)ld_Rdptr[0];
if (a < (c = ld_Rdbfr) + 2044) {
while (1) {
ld_Rdptr[0] = (c = a + 1);
ld_Bfr[0] = (d = (a = a[0]) << 24 - b | d);
e = b < 17;
a = c;
c = b + 8;
b = c;
if (e) //continue L_d;
goto B_b;
}
//unreachable;
}
int64_t f = (int64_t)System_Stream_Flag[0];
e = (int64_t)ld_Rdmax[0];
c = b;
while (1) {
b = c;
if (ld_Rdbfr + 2048 > a) {
c = a;
goto B_f;
}
c = ld_Rdbfr;
memcpy(c, a = inRdbfr, 2048);
if (eqz(f)) goto B_f;
ld_Rdmax[0] = (e = e - 2048);
c = ld_Rdbfr;
B_f:;
ld_Rdptr[0] = (a = c + 1);
ld_Bfr[0] = (d = (c = c[0]) << 24 - b | d);
c = b + 8;
if (b < 17) //continue L_e;
}
B_b:;
ld_Incnt[0] = c;
}
}

int Get_motion_code() {
{ g (byte,)a (byte)b }
int64_t d;
int64_t c;
int64_t * b;
int64_t * e;
int64_t f;
int64_t a = ld_Bfr;
a[0] = (d = (g = (int))a[0] << 1);
a = ld_Incnt;
a[0] = (c = (a = (int))a[0] - 1);
if (a > 25) {
b = c;
goto B_a;
}
a = (int64_t)ld_Rdptr[0];
if (a < (b = ld_Rdbfr) + 2044) {
while (1) {
ld_Rdptr[0] = (b = a + 1);
ld_Bfr[0] = (d = (a = (ubyte))a[0] << 24 - c | d);
e = c < 17;
a = b;
b = c + 8;
c = b;
if (e) //continue L_e;
goto B_c;
}
//unreachable;
}
f = (int64_t)System_Stream_Flag[0];
e = (int64_t)ld_Rdmax[0];
b = c;
while (1) {
c = b;
if (ld_Rdbfr + 2048 > a) {
b = a;
goto B_g;
}
b = ld_Rdbfr;
memcpy(b, a = inRdbfr, 2048);
if (eqz(f)) goto B_g;
ld_Rdmax[0] = (e = e - 2048);
b = ld_Rdbfr;
B_g:;
ld_Rdptr[0] = (a = b + 1);
ld_Bfr[0] = (d = (b = b[0]) << 24 - c | d);
b = c + 8;
if (c < 17) //continue L_f;
}
B_c:;
ld_Incnt[0] = b;
B_a:;
a = 0;
if (g < 0) goto B_i;
if (d >= 536870912) {
ld_Incnt[0] = (c = b - (a = (g = MVtab0 + (d >> 28 & 14)).b));
ld_Bfr[0] = (d = d << a);
if (c > 24) {
b = c;
goto B_k;
}
a = (int64_t)ld_Rdptr[0];
if (a < (b = ld_Rdbfr) + 2044) {
while (1) {
ld_Rdptr[0] = (b = a + 1);
ld_Bfr[0] = (d = (a = (ubyte))a[0] << 24 - c | d);
e = c < 17;
a = b;
b = c + 8;
c = b;
if (e) //continue L_n;
goto B_k;
}
//unreachable;
}
f = (int64_t)System_Stream_Flag[0];
e = (int64_t)ld_Rdmax[0];
b = c;
while (1) {
c = b;
if (ld_Rdbfr + 2048 > a) {
b = a;
goto B_p;
}
b = ld_Rdbfr;
memcpy(b, a = inRdbfr, 2048);
if (eqz(f)) goto B_p;
ld_Rdmax[0] = (e = e - 2048);
b = ld_Rdbfr;
B_p:;
ld_Rdptr[0] = (a = b + 1);
ld_Bfr[0] = (d = (b = b[0]) << 24 - c | d);
b = c + 8;
if (c < 17) //continue L_o;
}
B_k:;
ld_Incnt[0] = b - 1;
ld_Bfr[0] = (c = d << 1);
if (b <= 25) {
a = (int64_t)ld_Rdptr[0];
if (a < (b = ld_Rdbfr) + 2044) goto B_s;
e = ld_Rdmax;
if (a < (b = ld_Rdbfr) + 2048) goto B_s;
f = e[0];
b = (int64_t)System_Stream_Flag[0];
a = ld_Rdbfr;
memcpy(a, e = inRdbfr, 2048);
if (eqz(b)) goto B_s;
ld_Rdmax[0] = f - 2048;
a = ld_Rdbfr;
B_s:;
ld_Rdptr[0] = a + 1;
a = (ubyte)a[0];
ld_Incnt[0] = 32;
ld_Bfr[0] = a | c;
}
return select__if(0 - (a = g.a), a, d < 0);
}
if (d >= 201326592) {
ld_Incnt[0] = (c = b - (a = (g = MVtab1 + (d >> 25 & 126)).b));
ld_Bfr[0] = (d = d << a);
if (c > 24) {
b = c;
goto B_u;
}
a = (int64_t)ld_Rdptr[0];
if (a < (b = ld_Rdbfr) + 2044) {
while (1) {
ld_Rdptr[0] = (b = a + 1);
ld_Bfr[0] = (d = (a = (ubyte))a[0] << 24 - c | d);
e = c < 17;
a = b;
b = c + 8;
c = b;
if (e) //continue L_x;
goto B_u;
}
//unreachable;
}
f = (int64_t)System_Stream_Flag[0];
e = (int64_t)ld_Rdmax[0];
b = c;
while (1) {
c = b;
if (ld_Rdbfr + 2048 > a) {
b = a;
goto B_z;
}
b = ld_Rdbfr;
memcpy(b, a = inRdbfr, 2048);
if (eqz(f)) goto B_z;
ld_Rdmax[0] = (e = e - 2048);
b = ld_Rdbfr;
B_z:;
ld_Rdptr[0] = (a = b + 1);
ld_Bfr[0] = (d = (b = b[0]) << 24 - c | d);
b = c + 8;
if (c < 17) //continue L_y;
}
B_u:;
ld_Incnt[0] = b - 1;
ld_Bfr[0] = (c = d << 1);
if (b <= 25) {
a = (int64_t)ld_Rdptr[0];
if (a < (b = ld_Rdbfr) + 2044) goto B_ca;
e = ld_Rdmax;
if (a < (b = ld_Rdbfr) + 2048) goto B_ca;
f = e[0];
b = (int64_t)System_Stream_Flag[0];
a = ld_Rdbfr;
memcpy(a, e = inRdbfr, 2048);
if (eqz(b)) goto B_ca;
ld_Rdmax[0] = f - 2048;
a = ld_Rdbfr;
B_ca:;
ld_Rdptr[0] = a + 1;
a = (ubyte)a[0];
ld_Incnt[0] = 32;
ld_Bfr[0] = a | c;
}
return select__if(0 - (a = g.a), a, d < 0);
}
if (d < 100663296) goto B_i;
(int64_t)ld_Incnt[0] =
(c = b - (a = (g = MVtab2 + ((d >> 23) << 1) - 24).b));
ld_Bfr[0] = (d = d << a);
if (c > 24) {
b = c;
goto B_da;
}
a = (int64_t)ld_Rdptr[0];
if (a < (b = ld_Rdbfr) + 2044) {
while (1) {
ld_Rdptr[0] = (b = a + 1);
ld_Bfr[0] = (d = (a = (ubyte))a[0] << 24 - c | d);
e = c < 17;
a = b;
b = c + 8;
c = b;
if (e) //continue L_ga;
goto B_da;
}
//unreachable;
}
f = (int64_t)System_Stream_Flag[0];
e = (int64_t)ld_Rdmax[0];
b = c;
while (1) {
c = b;
if (ld_Rdbfr + 2048 > a) {
b = a;
goto B_ia;
}
b = ld_Rdbfr;
memcpy(b, a = inRdbfr, 2048);
if (eqz(f)) goto B_ia;
ld_Rdmax[0] = (e = e - 2048);
b = ld_Rdbfr;
B_ia:;
ld_Rdptr[0] = (a = b + 1);
ld_Bfr[0] = (d = (b = b[0]) << 24 - c | d);
b = c + 8;
if (c < 17) //continue L_ha;
}
B_da:;
ld_Incnt[0] = b - 1;
ld_Bfr[0] = (c = d << 1);
if (b <= 25) {
a = (int64_t)ld_Rdptr[0];
if (a < (b = ld_Rdbfr) + 2044) goto B_la;
e = ld_Rdmax;
if (a < (b = ld_Rdbfr) + 2048) goto B_la;
f = e[0];
b = (int64_t)System_Stream_Flag[0];
a = ld_Rdbfr;
memcpy(a, e = inRdbfr, 2048);
if (eqz(b)) goto B_la;
ld_Rdmax[0] = f - 2048;
a = ld_Rdbfr;
B_la:;
ld_Rdptr[0] = a + 1;
a = (ubyte)a[0];
ld_Incnt[0] = 32;
ld_Bfr[0] = a | c;
}
a = select__if(0 - (a = g.a), a, d < 0);
B_i:;
return a;
}

int Get_dmvector() {
int64_t g;
int64_t e;
int64_t c;
int64_t * b;
int64_t * d;
int64_t f;
int64_t a = ld_Bfr;
a[0] = (e = (g = (int))a[0] << 1);
a = ld_Incnt;
a[0] = (c = (a = (int))a[0] - 1);
if (a > 25) {
b = c;
goto B_a;
}
a = (int64_t)ld_Rdptr[0];
if (a < (b = ld_Rdbfr) + 2044) {
while (1) {
ld_Rdptr[0] = (b = a + 1);
ld_Bfr[0] = (e = (a = (ubyte))a[0] << 24 - c | e);
d = c < 17;
a = b;
b = c + 8;
c = b;
if (d) //continue L_e;
goto B_c;
}
//unreachable;
}
f = (int64_t)System_Stream_Flag[0];
d = (int64_t)ld_Rdmax[0];
b = c;
while (1) {
c = b;
if (ld_Rdbfr + 2048 > a) {
b = a;
goto B_g;
}
b = ld_Rdbfr;
memcpy(b, a = inRdbfr, 2048);
if (eqz(f)) goto B_g;
ld_Rdmax[0] = (d = d - 2048);
b = ld_Rdbfr;
B_g:;
ld_Rdptr[0] = (a = b + 1);
ld_Bfr[0] = (e = (b = b[0]) << 24 - c | e);
b = c + 8;
if (c < 17) //continue L_f;
}
B_c:;
ld_Incnt[0] = b;
B_a:;
a = 0;
if (g < 0) {
ld_Incnt[0] = b - 1;
ld_Bfr[0] = (c = e << 1);
if (b <= 25) {
a = (int64_t)ld_Rdptr[0];
if (a < (b = ld_Rdbfr) + 2044) goto B_k;
d = ld_Rdmax;
if (a < (b = ld_Rdbfr) + 2048) goto B_k;
f = d[0];
b = (int64_t)System_Stream_Flag[0];
a = ld_Rdbfr;
memcpy(a, d = inRdbfr, 2048);
if (eqz(b)) goto B_k;
ld_Rdmax[0] = f - 2048;
a = ld_Rdbfr;
B_k:;
ld_Rdptr[0] = a + 1;
a = (ubyte)a[0];
ld_Incnt[0] = 32;
ld_Bfr[0] = a | c;
}
a = e >> 31 | 1;
}
return a;
}

void motion_vectors(int a, int b, int c, int d, int e, int f, int g, int h, int i, int j) {
int64_t o;
int64_t l;
int64_t * k;
int64_t m;
int64_t * n;
if (e == 1) {
if (eqz(f | i)) {
e = ld_Bfr;
e[0] = (l = (o = (int))e[0] << 1);
e = ld_Incnt;
e[0] = (f = (e = (int))e[0] - 1);
if (e <= 25) {
e = (int64_t)ld_Rdptr[0];
if (e < (k = ld_Rdbfr) + 2044) {
while (1) {
ld_Rdptr[0] = (k = e + 1);
ld_Bfr[0] = (l = (e = (ubyte))e[0] << 24 - f | l);
m = f < 17;
e = k;
k = f + 8;
f = k;
if (m) //continue L_f;
goto B_d;
}
//unreachable;
}
n = (int64_t)System_Stream_Flag[0];
m = (int64_t)ld_Rdmax[0];
k = f;
while (1) {
f = k;
if (ld_Rdbfr + 2048 > e) {
k = e;
goto B_h;
}
k = ld_Rdbfr;
memcpy(k, e = inRdbfr, 2048);
if (eqz(n)) goto B_h;
ld_Rdmax[0] = (m = m - 2048);
k = ld_Rdbfr;
B_h:;
ld_Rdptr[0] = (e = k + 1);
ld_Bfr[0] = (l = (k = k[0]) << 24 - f | l);
k = f + 8;
if (f < 17) //continue L_g;
}
B_d:;
ld_Incnt[0] = k;
}
e = c + (d << 2);
e[0] = (f = o >> 31);
e[2] = f;
}
e = a + (d << 3);
motion_vector(e, b, g, h, i, j, 0);
e[4] = (long@4)e[0];
return;
}
e = ld_Bfr;
e[0] = (l = (o = (int))e[0] << 1);
e = ld_Incnt;
e[0] = (f = (e = (int))e[0] - 1);
if (e <= 25) {
e = (int64_t)ld_Rdptr[0];
if (e < (k = ld_Rdbfr) + 2044) {
while (1) {
ld_Rdptr[0] = (k = e + 1);
ld_Bfr[0] = (l = (e = (ubyte))e[0] << 24 - f | l);
m = f < 17;
e = k;
k = f + 8;
f = k;
if (m) //continue L_m;
goto B_k;
}
//unreachable;
}
n = (int64_t)System_Stream_Flag[0];
m = (int64_t)ld_Rdmax[0];
k = f;
while (1) {
f = k;
if (ld_Rdbfr + 2048 > e) {
k = e;
goto B_o;
}
k = ld_Rdbfr;
memcpy(k, e = inRdbfr, 2048);
if (eqz(n)) goto B_o;
ld_Rdmax[0] = (m = m - 2048);
k = ld_Rdbfr;
B_o:;
ld_Rdptr[0] = (e = k + 1);
ld_Bfr[0] = (l = (k = k[0]) << 24 - f | l);
k = f + 8;
if (f < 17) //continue L_n;
}
B_k:;
ld_Incnt[0] = k;
}
n = c + (d << 2);
n[0] = o >> 31;
a = a + (d << 3);
motion_vector(a, b, g, h, i, j, 0);
e = ld_Bfr;
e[0] = (l = (c = (int))e[0] << 1);
e = ld_Incnt;
e[0] = (f = (e = (int))e[0] - 1);
if (e <= 25) {
e = (int64_t)ld_Rdptr[0];
if (e < (k = ld_Rdbfr) + 2044) {
while (1) {
ld_Rdptr[0] = (k = e + 1);
ld_Bfr[0] = (l = (e = (ubyte))e[0] << 24 - f | l);
m = f < 17;
e = k;
k = f + 8;
f = k;
if (m) //continue L_t;
goto B_r;
}
//unreachable;
}
d = (int64_t)System_Stream_Flag[0];
m = (int64_t)ld_Rdmax[0];
k = f;
while (1) {
f = k;
if (ld_Rdbfr + 2048 > e) {
k = e;
goto B_v;
}
k = ld_Rdbfr;
memcpy(k, e = inRdbfr, 2048);
if (eqz(d)) goto B_v;
ld_Rdmax[0] = (m = m - 2048);
k = ld_Rdbfr;
B_v:;
ld_Rdptr[0] = (e = k + 1);
ld_Bfr[0] = (l = (k = k[0]) << 24 - f | l);
k = f + 8;
if (f < 17) //continue L_u;
}
B_r:;
ld_Incnt[0] = k;
}
n[2] = c >> 31;
motion_vector(a + 16, b, g, h, i, j, 0);
}

void motion_vector(struct_3 a, struct_4 b, int c, int d, int e, int f, int g) {
int64_t o;
int64_t k;
int64_t j;
int64_t * i;
int64_t l;
int64_t h;
int64_t n;
int64_t m = Get_motion_code();
j = {
0;
if (eqz(c)) goto B_a;
0;
if (eqz(m)) goto B_a;
h = ld_Bfr;
h[0] = (k = (o = (int))h[0] << c);
h = ld_Incnt;
h[0] = (j = (int64_t)h[0] - c);
if (j <= 24) {
h = (int64_t)ld_Rdptr[0];
if (h < (i = ld_Rdbfr) + 2044) {
while (1) {
ld_Rdptr[0] = (i = h + 1);
ld_Bfr[0] = (k = (h = (ubyte))h[0] << 24 - j | k);
l = j < 17;
h = i;
i = j + 8;
j = i;
if (l) //continue L_e;
goto B_c;
}
//unreachable;
}
n = (int64_t)System_Stream_Flag[0];
l = (int64_t)ld_Rdmax[0];
i = j;
while (1) {
j = i;
if (ld_Rdbfr + 2048 > h) {
i = h;
goto B_g;
}
i = ld_Rdbfr;
memcpy(i, h = inRdbfr, 2048);
if (eqz(n)) goto B_g;
ld_Rdmax[0] = (l = l - 2048);
i = ld_Rdbfr;
B_g:;
ld_Rdptr[0] = (h = i + 1);
ld_Bfr[0] = (k = (i = i[0]) << 24 - j | k);
i = j + 8;
if (j < 17) //continue L_f;
}
B_c:;
ld_Incnt[0] = i;
}
o >> 0 - c;
B_a:;
}
h = a.a >> (n = g != 0);
i = 16 << (k = c % 32);
if (m > 0) {
h = (m - 1 << k) + j + h + 1;
if (h < i) goto B_i;
h = h + (-32 << k);
goto B_i;
}
if (m >= 0) goto B_i;
h = h + (j + ((m ^ -1) << k) ^ -1);
if (h >= 0 - i) goto B_i;
h = h + (32 << k);
B_i:;
a.a = h << n;
if (e) { b.a = Get_dmvector() }
c = Get_motion_code();
j = {
j = 0;
j;
if (eqz(d)) goto B_l;
0;
if (eqz(c)) goto B_l;
h = ld_Bfr;
h[0] = (k = (g = (int))h[0] << d);
h = ld_Incnt;
h[0] = (j = (int64_t)h[0] - d);
if (j <= 24) {
h = (int64_t)ld_Rdptr[0];
if (h < (i = ld_Rdbfr) + 2044) {
while (1) {
ld_Rdptr[0] = (i = h + 1);
ld_Bfr[0] = (k = (h = (ubyte))h[0] << 24 - j | k);
l = j < 17;
h = i;
i = j + 8;
j = i;
if (l) //continue L_p;
goto B_n;
}
//unreachable;
}
m = (int64_t)System_Stream_Flag[0];
l = (int64_t)ld_Rdmax[0];
i = j;
while (1) {
j = i;
if (ld_Rdbfr + 2048 > h) {
i = h;
goto B_r;
}
i = ld_Rdbfr;
memcpy(i, h = inRdbfr, 2048);
if (eqz(m)) goto B_r;
ld_Rdmax[0] = (l = l - 2048);
i = ld_Rdbfr;
B_r:;
ld_Rdptr[0] = (h = i + 1);
ld_Bfr[0] = (k = (i = i[0]) << 24 - j | k);
i = j + 8;
if (j < 17) //continue L_q;
}
B_n:;
ld_Incnt[0] = i;
}
g >> 0 - d;
B_l:;
}
i = 16 << (k = d % 32);
h = (a.b >> (f != 0)) >> n;
if (c > 0) {
h = (c - 1 << k) + j + h + 1;
if (h < i) goto B_t;
h = h + (-32 << k);
goto B_t;
}
if (c >= 0) goto B_t;
h = h + (j + ((c ^ -1) << k) ^ -1);
if (h >= 0 - i) goto B_t;
h = h + (32 << k);
B_t:;
a.b = (h << n) << (f != 0);
if (e) { b.b = Get_dmvector() }
}

void Initialize_Buffer() {
int64_t * a;
ld_Rdmax[0] = (a = ld_Rdbfr) + 2048;
int64_t b = (int64_t)System_Stream_Flag[0];
memcpy(a, inRdbfr, 2048);
if (b) { ld_Rdmax[0] = (a = ld_Rdbfr) }
ld_Incnt[0] = 32;
ld_Rdptr[0] = (a = ld_Rdbfr) + 4;
(int64_t)ld_Bfr[0] =
((a[1] << 16 | (b = a[2]) << 8) | (a = a[3])) | 68157440;
}

int submain() {
int64_t c;
int64_t e;
double i;
int64_t* a = stack_pointer - 96;
stack_pointer = a;
{ b (long,)a (long,)b (long,)c (long)d } = gettimeofday(a + 80, 0);
if (b) {
a[8] = b;
iprintf(memory_base + 4248, a + 32);
}
evalue[0] = 0;
System_Stream_Flag[0] = 0;
ld_Rdmax[0] = (c = ld_Rdbfr) + 2048;
(a - -64)[0] = (b = inPMV).c;
int64_t* d = a + 72;
d[0] = b.d;
(double)startTimer[0] =
f64_convert_i32_s(e = (int))a[22] * 0.000001 +
(long))f64_convert_i64_s(a[10];
a[6] = b.a;
a[7] = b.b;
b = memcpy(c, inRdbfr, 2048);
ld_Bfr[0] = 150007904;
ld_Rdptr[0] = b + 4;
ld_Incnt[0] = 31;
motion_vector(a + 48, a + 40, 200, 200, 0, 1, 0);
b = (int64_t)a[19];
c = (int64_t)d[0];
d = (int64_t)a[15];
e = (int64_t)a[14];
int64_t g = (int64_t)a[13];
int64_t h = (int64_t)a[12];
int64_t f = gettimeofday(a + 80, 0);
if (f) {
a[4] = f;
iprintf(memory_base + 4248, a + 16);
}
(double)endTimer[0] =
(i = f64_convert_i32_s(f = (int))a[22] * 0.000001 +
(long)))f64_convert_i64_s(a[10];
a[0] = i - (double)startTimer[0];
small_printf(memory_base + 4283, a);
stack_pointer = a + 96;
retur;
(((h != 1566) << 1) + ((g != 206) << 1) | e != 70) + (d != 41) +
(c != 120) +
(b != 216);
}