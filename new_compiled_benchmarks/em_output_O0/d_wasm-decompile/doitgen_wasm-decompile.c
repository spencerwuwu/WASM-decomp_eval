import memory env_memory;

import global stack_pointer:int;
import global memory_base:int;
import global table_base:int;
import global stderr:int;

data rodata(offset: memory_base) =
  "begin dump: %s\00A\00%0.2lf \00\0aend   dump: %s\0a\00==BEGIN DUMP_ARR"
  "AYS==\0a\00==END   DUMP_ARRAYS==\0a\00";

import function strcmp(a:int, b:int):int;

import function free(a:int);

import function fprintf(a:int, b:int, c:int):int;

import function legalimport_polybench_alloc_data(a:int, b:int, c:int):int;

export function wasm_call_ctors() {
}

export function wasm_apply_data_relocs() {
}

export function kernel_doitgen(a:int, b:int, c:int, d:int, e:int, f:int) {
  var g:int = stack_pointer;
  var h:int = 48;
  var i:int_ptr = g - h;
  i[11] = a;
  i[10] = b;
  i[9] = c;
  i[8] = d;
  i[7] = e;
  i[6] = f;
  var j:int = 0;
  i[5] = j;
  loop L_b {
    var k:int = i[5];
    var l:int = i[11];
    var m:int = k;
    var n:int = l;
    var o:int = m < n;
    var p:int = 1;
    var q:int = o & p;
    if (eqz(q)) goto B_a;
    var r:int = 0;
    i[4] = r;
    loop L_d {
      var s:int = i[4];
      var t:int = i[10];
      var u:int = s;
      var v:int = t;
      var w:int = u < v;
      var x:int = 1;
      var y:int = w & x;
      if (eqz(y)) goto B_c;
      var z:int = 0;
      i[3] = z;
      loop L_f {
        var aa:int = i[3];
        var ba:int = i[9];
        var ca:int = aa;
        var da:int = ba;
        var ea:int = ca < da;
        var fa:int = 1;
        var ga:int = ea & fa;
        if (eqz(ga)) goto B_e;
        var ha:int = i[6];
        var ia:int = i[3];
        var ja:int = 3;
        var ka:int = ia << ja;
        var la:double_ptr = ha + ka;
        var ma:int = 0;
        var na:double = f64_convert_i32_s(ma);
        la[0] = na;
        var oa:int = 0;
        i[2] = oa;
        loop L_h {
          var pa:int = i[2];
          var qa:int = i[9];
          var ra:int = pa;
          var sa:int = qa;
          var ta:int = ra < sa;
          var ua:int = 1;
          var va:int = ta & ua;
          if (eqz(va)) goto B_g;
          var wa:int = i[8];
          var xa:int = i[5];
          var ya:int = 179200;
          var za:int = xa * ya;
          var ab:int = wa + za;
          var bb:int = i[4];
          var cb:int = 1280;
          var db:int = bb * cb;
          var eb:int = ab + db;
          var fb:int = i[2];
          var gb:int = 3;
          var hb:int = fb << gb;
          var ib:double_ptr = eb + hb;
          var jb:double = ib[0];
          var kb:int = i[7];
          var lb:int = i[2];
          var mb:int = 1280;
          var nb:int = lb * mb;
          var ob:int = kb + nb;
          var pb:int = i[3];
          var qb:int = 3;
          var rb:int = pb << qb;
          var sb:double_ptr = ob + rb;
          var tb:double = sb[0];
          var ub:int = i[6];
          var vb:int = i[3];
          var wb:int = 3;
          var xb:int = vb << wb;
          var yb:double_ptr = ub + xb;
          var zb:double = yb[0];
          var ac:double = jb * tb;
          var bc:double = ac + zb;
          yb[0] = bc;
          var cc:int = i[2];
          var dc:int = 1;
          var ec:int = cc + dc;
          i[2] = ec;
          continue L_h;
        }
        unreachable;
        label B_g:
        var fc:int = i[3];
        var gc:int = 1;
        var hc:int = fc + gc;
        i[3] = hc;
        continue L_f;
      }
      unreachable;
      label B_e:
      var ic:int = 0;
      i[3] = ic;
      loop L_j {
        var jc:int = i[3];
        var kc:int = i[9];
        var lc:int = jc;
        var mc:int = kc;
        var nc:int = lc < mc;
        var oc:int = 1;
        var pc:int = nc & oc;
        if (eqz(pc)) goto B_i;
        var qc:int = i[6];
        var rc:int = i[3];
        var sc:int = 3;
        var tc:int = rc << sc;
        var uc:double_ptr = qc + tc;
        var vc:double = uc[0];
        var wc:int = i[8];
        var xc:int = i[5];
        var yc:int = 179200;
        var zc:int = xc * yc;
        var ad:int = wc + zc;
        var bd:int = i[4];
        var cd:int = 1280;
        var dd:int = bd * cd;
        var ed:int = ad + dd;
        var fd:int = i[3];
        var gd:int = 3;
        var hd:int = fd << gd;
        var id:double_ptr = ed + hd;
        id[0] = vc;
        var jd:int = i[3];
        var kd:int = 1;
        var ld:int = jd + kd;
        i[3] = ld;
        continue L_j;
      }
      unreachable;
      label B_i:
      var md:int = i[4];
      var nd:int = 1;
      var od:int = md + nd;
      i[4] = od;
      continue L_d;
    }
    unreachable;
    label B_c:
    var pd:int = i[5];
    var qd:int = 1;
    var rd:int = pd + qd;
    i[5] = rd;
    continue L_b;
  }
  unreachable;
  label B_a:
}

export function submain(a:int, b:int):int {
  var c:int = stack_pointer;
  var d:int = 32;
  var e:{ a:int, b:int, c:int, d:int, e:int, f:int, g:int, h:int } = 
    c - d;
  stack_pointer = e;
  e.h = a;
  e.g = b;
  var f:int = 150;
  e.f = f;
  var g:int = 140;
  e.e = g;
  var h:int = 160;
  e.d = h;
  var i:long = 3360000L;
  var j:int = 8;
  var k:int = legalfunc_polybench_alloc_data(i, j);
  e.c = k;
  var l:long = 160L;
  var m:int = 8;
  var n:int = legalfunc_polybench_alloc_data(l, m);
  e.b = n;
  var o:long = 25600L;
  var p:int = 8;
  var q:int = legalfunc_polybench_alloc_data(o, p);
  e.a = q;
  var r:int = e.f;
  var s:int = e.e;
  var t:int = e.d;
  var u:int = e.c;
  var v:int = e.a;
  init_array(r, s, t, u, v);
  var w:int = e.f;
  var x:int = e.e;
  var y:int = e.d;
  var z:int = e.c;
  var aa:int = e.a;
  var ba:int = e.b;
  kernel_doitgen(w, x, y, z, aa, ba);
  var ca:int = e.h;
  var da:int = 42;
  var ea:int = ca;
  var fa:int = da;
  var ga:int = ea > fa;
  var ha:int = 1;
  var ia:int = ga & ha;
  if (eqz(ia)) goto B_a;
  var ja:int_ptr = e.g;
  var ka:int = ja[0];
  var la:int = 87;
  var ma:int = memory_base;
  var na:int = ma + la;
  var oa:int = strcmp(ka, na);
  if (oa) goto B_a;
  var pa:int = e.f;
  var qa:int = e.e;
  var ra:int = e.d;
  var sa:int = e.c;
  print_array(pa, qa, ra, sa);
  label B_a:
  var ta:int = e.c;
  free(ta);
  var ua:int = e.b;
  free(ua);
  var va:int = e.a;
  free(va);
  var wa:int = 0;
  var xa:int = 32;
  var ya:int = e + xa;
  stack_pointer = ya;
  return wa;
}

function init_array(a:int, b:int, c:int, d:int, e:int) {
  var f:int = stack_pointer;
  var g:int = 32;
  var h:{ a:int, b:int, c:int, d:int, e:int, f:int, g:int, h:int } = 
    f - g;
  h.h = a;
  h.g = b;
  h.f = c;
  h.e = d;
  h.d = e;
  var i:int = 0;
  h.c = i;
  loop L_b {
    var j:int = h.c;
    var k:int = h.h;
    var l:int = j;
    var m:int = k;
    var n:int = l < m;
    var o:int = 1;
    var p:int = n & o;
    if (eqz(p)) goto B_a;
    var q:int = 0;
    h.b = q;
    loop L_d {
      var r:int = h.b;
      var s:int = h.g;
      var t:int = r;
      var u:int = s;
      var v:int = t < u;
      var w:int = 1;
      var x:int = v & w;
      if (eqz(x)) goto B_c;
      var y:int = 0;
      h.a = y;
      loop L_f {
        var z:int = h.a;
        var aa:int = h.f;
        var ba:int = z;
        var ca:int = aa;
        var da:int = ba < ca;
        var ea:int = 1;
        var fa:int = da & ea;
        if (eqz(fa)) goto B_e;
        var ga:int = h.c;
        var ha:int = h.b;
        var ia:int = ga * ha;
        var ja:int = h.a;
        var ka:int = ia + ja;
        var la:int = h.f;
        var ma:int = ka % la;
        var na:double = f64_convert_i32_s(ma);
        var oa:int = h.f;
        var pa:double = f64_convert_i32_s(oa);
        var qa:double = na / pa;
        var ra:int = h.e;
        var sa:int = h.c;
        var ta:int = 179200;
        var ua:int = sa * ta;
        var va:int = ra + ua;
        var wa:int = h.b;
        var xa:int = 1280;
        var ya:int = wa * xa;
        var za:int = va + ya;
        var ab:int = h.a;
        var bb:int = 3;
        var cb:int = ab << bb;
        var db:double_ptr = za + cb;
        db[0] = qa;
        var eb:int = h.a;
        var fb:int = 1;
        var gb:int = eb + fb;
        h.a = gb;
        continue L_f;
      }
      unreachable;
      label B_e:
      var hb:int = h.b;
      var ib:int = 1;
      var jb:int = hb + ib;
      h.b = jb;
      continue L_d;
    }
    unreachable;
    label B_c:
    var kb:int = h.c;
    var lb:int = 1;
    var mb:int = kb + lb;
    h.c = mb;
    continue L_b;
  }
  unreachable;
  label B_a:
  var nb:int = 0;
  h.c = nb;
  loop L_h {
    var ob:int = h.c;
    var pb:int = h.f;
    var qb:int = ob;
    var rb:int = pb;
    var sb:int = qb < rb;
    var tb:int = 1;
    var ub:int = sb & tb;
    if (eqz(ub)) goto B_g;
    var vb:int = 0;
    h.b = vb;
    loop L_j {
      var wb:int = h.b;
      var xb:int = h.f;
      var yb:int = wb;
      var zb:int = xb;
      var ac:int = yb < zb;
      var bc:int = 1;
      var cc:int = ac & bc;
      if (eqz(cc)) goto B_i;
      var dc:int = h.c;
      var ec:int = h.b;
      var fc:int = dc * ec;
      var gc:int = h.f;
      var hc:int = fc % gc;
      var ic:double = f64_convert_i32_s(hc);
      var jc:int = h.f;
      var kc:double = f64_convert_i32_s(jc);
      var lc:double = ic / kc;
      var mc:int = h.d;
      var nc:int = h.c;
      var oc:int = 1280;
      var pc:int = nc * oc;
      var qc:int = mc + pc;
      var rc:int = h.b;
      var sc:int = 3;
      var tc:int = rc << sc;
      var uc:double_ptr = qc + tc;
      uc[0] = lc;
      var vc:int = h.b;
      var wc:int = 1;
      var xc:int = vc + wc;
      h.b = xc;
      continue L_j;
    }
    unreachable;
    label B_i:
    var yc:int = h.c;
    var zc:int = 1;
    var ad:int = yc + zc;
    h.c = ad;
    continue L_h;
  }
  unreachable;
  label B_g:
}

function print_array(a:int, b:int, c:int, d:int) {
  var e:int = stack_pointer;
  var f:int = 64;
  var g:int = e - f;
  stack_pointer = g;
  g[15]:int = a;
  g[14]:int = b;
  g[13]:int = c;
  g[12]:int = d;
  var h:int_ptr = stderr;
  var i:int = h[0];
  var j:int = 42;
  var k:int = memory_base;
  var l:int = k + j;
  var m:int = 0;
  fprintf(i, l, m);
  var n:int = h[0];
  var o:int = 15;
  var p:int = memory_base;
  var q:int = p + o;
  g[8]:int = q;
  var r:int = 0;
  var s:int = p + r;
  var t:int = 32;
  var u:int = g + t;
  fprintf(n, s, u);
  var v:int = 0;
  g[11]:int = v;
  loop L_b {
    var w:int = g[11]:int;
    var x:int = g[15]:int;
    var y:int = w;
    var z:int = x;
    var aa:int = y < z;
    var ba:int = 1;
    var ca:int = aa & ba;
    if (eqz(ca)) goto B_a;
    var da:int = 0;
    g[10]:int = da;
    loop L_d {
      var ea:int = g[10]:int;
      var fa:int = g[14]:int;
      var ga:int = ea;
      var ha:int = fa;
      var ia:int = ga < ha;
      var ja:int = 1;
      var ka:int = ia & ja;
      if (eqz(ka)) goto B_c;
      var la:int = 0;
      g[9]:int = la;
      loop L_f {
        var ma:int = g[9]:int;
        var na:int = g[13]:int;
        var oa:int = ma;
        var pa:int = na;
        var qa:int = oa < pa;
        var ra:int = 1;
        var sa:int = qa & ra;
        if (eqz(sa)) goto B_e;
        var ta:int = g[11]:int;
        var ua:int = g[14]:int;
        var va:int = ta * ua;
        var wa:int = g[13]:int;
        var xa:int = va * wa;
        var ya:int = g[10]:int;
        var za:int = g[13]:int;
        var ab:int = ya * za;
        var bb:int = xa + ab;
        var cb:int = g[9]:int;
        var db:int = bb + cb;
        var eb:int = 20;
        var fb:int = db % eb;
        if (fb) goto B_g;
        var gb:int_ptr = stderr;
        var hb:int = gb[0];
        var ib:int = 86;
        var jb:int = memory_base;
        var kb:int = jb + ib;
        var lb:int = 0;
        fprintf(hb, kb, lb);
        label B_g:
        var mb:int_ptr = stderr;
        var nb:int = mb[0];
        var ob:int = g[12]:int;
        var pb:int = g[11]:int;
        var qb:int = 179200;
        var rb:int = pb * qb;
        var sb:int = ob + rb;
        var tb:int = g[10]:int;
        var ub:int = 1280;
        var vb:int = tb * ub;
        var wb:int = sb + vb;
        var xb:int = g[9]:int;
        var yb:int = 3;
        var zb:int = xb << yb;
        var ac:double_ptr = wb + zb;
        var bc:double = ac[0];
        g[0]:double = bc;
        var cc:int = 17;
        var dc:int = memory_base;
        var ec:int = dc + cc;
        fprintf(nb, ec, g);
        var fc:int = g[9]:int;
        var gc:int = 1;
        var hc:int = fc + gc;
        g[9]:int = hc;
        continue L_f;
      }
      unreachable;
      label B_e:
      var ic:int = g[10]:int;
      var jc:int = 1;
      var kc:int = ic + jc;
      g[10]:int = kc;
      continue L_d;
    }
    unreachable;
    label B_c:
    var lc:int = g[11]:int;
    var mc:int = 1;
    var nc:int = lc + mc;
    g[11]:int = nc;
    continue L_b;
  }
  unreachable;
  label B_a:
  var oc:int_ptr = stderr;
  var pc:int = oc[0];
  var qc:int = 15;
  var rc:int = memory_base;
  var sc:int = rc + qc;
  g[4]:int = sc;
  var tc:int = 25;
  var uc:int = rc + tc;
  var vc:int = 16;
  var wc:int = g + vc;
  fprintf(pc, uc, wc);
  var xc:int = oc[0];
  var yc:int = 65;
  var zc:int = memory_base;
  var ad:int = zc + yc;
  var bd:int = 0;
  fprintf(xc, ad, bd);
  var cd:int = 64;
  var dd:int = g + cd;
  stack_pointer = dd;
}

function legalfunc_polybench_alloc_data(a:long, b:int):int {
  return legalimport_polybench_alloc_data(i32_wrap_i64(a),
                                          i32_wrap_i64(a >> 32L),
                                          b)
}

