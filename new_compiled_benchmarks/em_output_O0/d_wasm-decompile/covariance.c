import memory env_memory;

import global stack_pointer:int;
import global memory_base:int;
import global table_base:int;
import global stderr:int;

data rodata(offset: memory_base) =
  "cov\00begin dump: %s\00%0.2lf \00\0aend   dump: %s\0a\00==BEGIN DUMP_A"
  "RRAYS==\0a\00==END   DUMP_ARRAYS==\0a\00";

import function strcmp(a:int, b:int):int;

import function free(a:int);

import function fprintf(a:int, b:int, c:int):int;

import function legalimport_polybench_alloc_data(a:int, b:int, c:int):int;

export function wasm_call_ctors() {
}

export function wasm_apply_data_relocs() {
}

export function kernel_covariance(a:int, b:int, c:double, d:int, e:int, f:int) {
  var g:int = stack_pointer;
  var h:int = 48;
  var i:int = g - h;
  i[11]:int = a;
  i[10]:int = b;
  i[4]:double = c;
  i[7]:int = d;
  i[6]:int = e;
  i[5]:int = f;
  var j:int = 0;
  i[3]:int = j;
  loop L_b {
    var k:int = i[3]:int;
    var l:int = i[11]:int;
    var m:int = k;
    var n:int = l;
    var o:int = m < n;
    var p:int = 1;
    var q:int = o & p;
    if (eqz(q)) goto B_a;
    var r:int = i[5]:int;
    var s:int = i[3]:int;
    var t:int = 3;
    var u:int = s << t;
    var v:double_ptr = r + u;
    var w:int = 0;
    var x:double = f64_convert_i32_s(w);
    v[0] = x;
    var y:int = 0;
    i[4]:int = y;
    loop L_d {
      var z:int = i[4]:int;
      var aa:int = i[10]:int;
      var ba:int = z;
      var ca:int = aa;
      var da:int = ba < ca;
      var ea:int = 1;
      var fa:int = da & ea;
      if (eqz(fa)) goto B_c;
      var ga:int = i[7]:int;
      var ha:int = i[4]:int;
      var ia:int = 9600;
      var ja:int = ha * ia;
      var ka:int = ga + ja;
      var la:int = i[3]:int;
      var ma:int = 3;
      var na:int = la << ma;
      var oa:double_ptr = ka + na;
      var pa:double = oa[0];
      var qa:int = i[5]:int;
      var ra:int = i[3]:int;
      var sa:int = 3;
      var ta:int = ra << sa;
      var ua:double_ptr = qa + ta;
      var va:double = ua[0];
      var wa:double = va + pa;
      ua[0] = wa;
      var xa:int = i[4]:int;
      var ya:int = 1;
      var za:int = xa + ya;
      i[4]:int = za;
      continue L_d;
    }
    unreachable;
    label B_c:
    var ab:double = i[4]:double;
    var bb:int = i[5]:int;
    var cb:int = i[3]:int;
    var db:int = 3;
    var eb:int = cb << db;
    var fb:double_ptr = bb + eb;
    var gb:double = fb[0];
    var hb:double = gb / ab;
    fb[0] = hb;
    var ib:int = i[3]:int;
    var jb:int = 1;
    var kb:int = ib + jb;
    i[3]:int = kb;
    continue L_b;
  }
  unreachable;
  label B_a:
  var lb:int = 0;
  i[4]:int = lb;
  loop L_f {
    var mb:int = i[4]:int;
    var nb:int = i[10]:int;
    var ob:int = mb;
    var pb:int = nb;
    var qb:int = ob < pb;
    var rb:int = 1;
    var sb:int = qb & rb;
    if (eqz(sb)) goto B_e;
    var tb:int = 0;
    i[3]:int = tb;
    loop L_h {
      var ub:int = i[3]:int;
      var vb:int = i[11]:int;
      var wb:int = ub;
      var xb:int = vb;
      var yb:int = wb < xb;
      var zb:int = 1;
      var ac:int = yb & zb;
      if (eqz(ac)) goto B_g;
      var bc:int = i[5]:int;
      var cc:int = i[3]:int;
      var dc:int = 3;
      var ec:int = cc << dc;
      var fc:double_ptr = bc + ec;
      var gc:double = fc[0];
      var hc:int = i[7]:int;
      var ic:int = i[4]:int;
      var jc:int = 9600;
      var kc:int = ic * jc;
      var lc:int = hc + kc;
      var mc:int = i[3]:int;
      var nc:int = 3;
      var oc:int = mc << nc;
      var pc:double_ptr = lc + oc;
      var qc:double = pc[0];
      var rc:double = qc - gc;
      pc[0] = rc;
      var sc:int = i[3]:int;
      var tc:int = 1;
      var uc:int = sc + tc;
      i[3]:int = uc;
      continue L_h;
    }
    unreachable;
    label B_g:
    var vc:int = i[4]:int;
    var wc:int = 1;
    var xc:int = vc + wc;
    i[4]:int = xc;
    continue L_f;
  }
  unreachable;
  label B_e:
  var yc:int = 0;
  i[4]:int = yc;
  loop L_j {
    var zc:int = i[4]:int;
    var ad:int = i[11]:int;
    var bd:int = zc;
    var cd:int = ad;
    var dd:int = bd < cd;
    var ed:int = 1;
    var fd:int = dd & ed;
    if (eqz(fd)) goto B_i;
    var gd:int = i[4]:int;
    i[3]:int = gd;
    loop L_l {
      var hd:int = i[3]:int;
      var id:int = i[11]:int;
      var jd:int = hd;
      var kd:int = id;
      var ld:int = jd < kd;
      var md:int = 1;
      var nd:int = ld & md;
      if (eqz(nd)) goto B_k;
      var od:int = i[6]:int;
      var pd:int = i[4]:int;
      var qd:int = 9600;
      var rd:int = pd * qd;
      var sd:int = od + rd;
      var td:int = i[3]:int;
      var ud:int = 3;
      var vd:int = td << ud;
      var wd:double_ptr = sd + vd;
      var xd:int = 0;
      var yd:double = f64_convert_i32_s(xd);
      wd[0] = yd;
      var zd:int = 0;
      i[2]:int = zd;
      loop L_n {
        var ae:int = i[2]:int;
        var be:int = i[10]:int;
        var ce:int = ae;
        var de:int = be;
        var ee:int = ce < de;
        var fe:int = 1;
        var ge:int = ee & fe;
        if (eqz(ge)) goto B_m;
        var he:int = i[7]:int;
        var ie:int = i[2]:int;
        var je:int = 9600;
        var ke:int = ie * je;
        var le:int = he + ke;
        var me:int = i[4]:int;
        var ne:int = 3;
        var oe:int = me << ne;
        var pe:double_ptr = le + oe;
        var qe:double = pe[0];
        var re:int = i[7]:int;
        var se:int = i[2]:int;
        var te:int = 9600;
        var ue:int = se * te;
        var ve:int = re + ue;
        var we:int = i[3]:int;
        var xe:int = 3;
        var ye:int = we << xe;
        var ze:double_ptr = ve + ye;
        var af:double = ze[0];
        var bf:int = i[6]:int;
        var cf:int = i[4]:int;
        var df:int = 9600;
        var ef:int = cf * df;
        var ff:int = bf + ef;
        var gf:int = i[3]:int;
        var hf:int = 3;
        var if:int = gf << hf;
        var jf:double_ptr = ff + if;
        var kf:double = jf[0];
        var lf:double = qe * af;
        var mf:double = lf + kf;
        jf[0] = mf;
        var nf:int = i[2]:int;
        var of:int = 1;
        var pf:int = nf + of;
        i[2]:int = pf;
        continue L_n;
      }
      unreachable;
      label B_m:
      var qf:double = i[4]:double;
      var rf:double = 1.0;
      var sf:double = qf - rf;
      var tf:int = i[6]:int;
      var uf:int = i[4]:int;
      var vf:int = 9600;
      var wf:int = uf * vf;
      var xf:int = tf + wf;
      var yf:int = i[3]:int;
      var zf:int = 3;
      var ag:int = yf << zf;
      var bg:double_ptr = xf + ag;
      var cg:double = bg[0];
      var dg:double = cg / sf;
      bg[0] = dg;
      var eg:int = i[6]:int;
      var fg:int = i[4]:int;
      var gg:int = 9600;
      var hg:int = fg * gg;
      var ig:int = eg + hg;
      var jg:int = i[3]:int;
      var kg:int = 3;
      var lg:int = jg << kg;
      var mg:double_ptr = ig + lg;
      var ng:double = mg[0];
      var og:int = i[6]:int;
      var pg:int = i[3]:int;
      var qg:int = 9600;
      var rg:int = pg * qg;
      var sg:int = og + rg;
      var tg:int = i[4]:int;
      var ug:int = 3;
      var vg:int = tg << ug;
      var wg:double_ptr = sg + vg;
      wg[0] = ng;
      var xg:int = i[3]:int;
      var yg:int = 1;
      var zg:int = xg + yg;
      i[3]:int = zg;
      continue L_l;
    }
    unreachable;
    label B_k:
    var ah:int = i[4]:int;
    var bh:int = 1;
    var ch:int = ah + bh;
    i[4]:int = ch;
    continue L_j;
  }
  unreachable;
  label B_i:
}

export function submain(a:int, b:int):int {
  var c:int = stack_pointer;
  var d:int = 48;
  var e:int = c - d;
  stack_pointer = e;
  e[11]:int = a;
  e[10]:int = b;
  var f:int = 1400;
  e[9]:int = f;
  var g:int = 1200;
  e[8]:int = g;
  var h:long = 1680000L;
  var i:int = 8;
  var j:int = legalfunc_polybench_alloc_data(h, i);
  e[5]:int = j;
  var k:long = 1440000L;
  var l:int = 8;
  var m:int = legalfunc_polybench_alloc_data(k, l);
  e[4]:int = m;
  var n:long = 1200L;
  var o:int = 8;
  var p:int = legalfunc_polybench_alloc_data(n, o);
  e[3]:int = p;
  var q:int = e[8]:int;
  var r:int = e[9]:int;
  var s:int = e[5]:int;
  var t:int = 24;
  var u:int = e + t;
  var v:int = u;
  init_array(q, r, v, s);
  var w:int = e[8]:int;
  var x:int = e[9]:int;
  var y:double = e[3]:double;
  var z:int = e[5]:int;
  var aa:int = e[4]:int;
  var ba:int = e[3]:int;
  kernel_covariance(w, x, y, z, aa, ba);
  var ca:int = e[11]:int;
  var da:int = 42;
  var ea:int = ca;
  var fa:int = da;
  var ga:int = ea > fa;
  var ha:int = 1;
  var ia:int = ga & ha;
  if (eqz(ia)) goto B_a;
  var ja:int_ptr = e[10]:int;
  var ka:int = ja[0];
  var la:int = 89;
  var ma:int = memory_base;
  var na:int = ma + la;
  var oa:int = strcmp(ka, na);
  if (oa) goto B_a;
  var pa:int = e[8]:int;
  var qa:int = e[4]:int;
  print_array(pa, qa);
  label B_a:
  var ra:int = e[5]:int;
  free(ra);
  var sa:int = e[4]:int;
  free(sa);
  var ta:int = e[3]:int;
  free(ta);
  var ua:int = 0;
  var va:int = 48;
  var wa:int = e + va;
  stack_pointer = wa;
  return ua;
}

function init_array(a:int, b:int, c:int, d:int) {
  var e:int = stack_pointer;
  var f:int = 32;
  var g:int_ptr = e - f;
  g[7] = a;
  g[6] = b;
  g[5] = c;
  g[4] = d;
  var h:int = g[6];
  var i:double = f64_convert_i32_s(h);
  var j:double_ptr = g[5];
  j[0] = i;
  var k:int = 0;
  g[3] = k;
  loop L_b {
    var l:int = g[3];
    var m:int = 1400;
    var n:int = l;
    var o:int = m;
    var p:int = n < o;
    var q:int = 1;
    var r:int = p & q;
    if (eqz(r)) goto B_a;
    var s:int = 0;
    g[2] = s;
    loop L_d {
      var t:int = g[2];
      var u:int = 1200;
      var v:int = t;
      var w:int = u;
      var x:int = v < w;
      var y:int = 1;
      var z:int = x & y;
      if (eqz(z)) goto B_c;
      var aa:int = g[3];
      var ba:double = f64_convert_i32_s(aa);
      var ca:int = g[2];
      var da:double = f64_convert_i32_s(ca);
      var ea:double = ba * da;
      var fa:double = 1200.0;
      var ga:double = ea / fa;
      var ha:int = g[4];
      var ia:int = g[3];
      var ja:int = 9600;
      var ka:int = ia * ja;
      var la:int = ha + ka;
      var ma:int = g[2];
      var na:int = 3;
      var oa:int = ma << na;
      var pa:double_ptr = la + oa;
      pa[0] = ga;
      var qa:int = g[2];
      var ra:int = 1;
      var sa:int = qa + ra;
      g[2] = sa;
      continue L_d;
    }
    unreachable;
    label B_c:
    var ta:int = g[3];
    var ua:int = 1;
    var va:int = ta + ua;
    g[3] = va;
    continue L_b;
  }
  unreachable;
  label B_a:
}

function print_array(a:int, b:int) {
  var c:int = stack_pointer;
  var d:int = 64;
  var e:int = c - d;
  stack_pointer = e;
  e[15]:int = a;
  e[14]:int = b;
  var f:int_ptr = stderr;
  var g:int = f[0];
  var h:int = 44;
  var i:int = memory_base;
  var j:int = i + h;
  var k:int = 0;
  fprintf(g, j, k);
  var l:int = f[0];
  var m:int = 0;
  var n:int = memory_base;
  var o:int = n + m;
  e[8]:int = o;
  var p:int = 4;
  var q:int = n + p;
  var r:int = 32;
  var s:int = e + r;
  fprintf(l, q, s);
  var t:int = 0;
  e[13]:int = t;
  loop L_b {
    var u:int = e[13]:int;
    var v:int = e[15]:int;
    var w:int = u;
    var x:int = v;
    var y:int = w < x;
    var z:int = 1;
    var aa:int = y & z;
    if (eqz(aa)) goto B_a;
    var ba:int = 0;
    e[12]:int = ba;
    loop L_d {
      var ca:int = e[12]:int;
      var da:int = e[15]:int;
      var ea:int = ca;
      var fa:int = da;
      var ga:int = ea < fa;
      var ha:int = 1;
      var ia:int = ga & ha;
      if (eqz(ia)) goto B_c;
      var ja:int = e[13]:int;
      var ka:int = e[15]:int;
      var la:int = ja * ka;
      var ma:int = e[12]:int;
      var na:int = la + ma;
      var oa:int = 20;
      var pa:int = na % oa;
      if (pa) goto B_e;
      var qa:int_ptr = stderr;
      var ra:int = qa[0];
      var sa:int = 88;
      var ta:int = memory_base;
      var ua:int = ta + sa;
      var va:int = 0;
      fprintf(ra, ua, va);
      label B_e:
      var wa:int_ptr = stderr;
      var xa:int = wa[0];
      var ya:int = e[14]:int;
      var za:int = e[13]:int;
      var ab:int = 9600;
      var bb:int = za * ab;
      var cb:int = ya + bb;
      var db:int = e[12]:int;
      var eb:int = 3;
      var fb:int = db << eb;
      var gb:double_ptr = cb + fb;
      var hb:double = gb[0];
      e[0]:double = hb;
      var ib:int = 19;
      var jb:int = memory_base;
      var kb:int = jb + ib;
      fprintf(xa, kb, e);
      var lb:int = e[12]:int;
      var mb:int = 1;
      var nb:int = lb + mb;
      e[12]:int = nb;
      continue L_d;
    }
    unreachable;
    label B_c:
    var ob:int = e[13]:int;
    var pb:int = 1;
    var qb:int = ob + pb;
    e[13]:int = qb;
    continue L_b;
  }
  unreachable;
  label B_a:
  var rb:int_ptr = stderr;
  var sb:int = rb[0];
  var tb:int = 0;
  var ub:int = memory_base;
  var vb:int = ub + tb;
  e[4]:int = vb;
  var wb:int = 27;
  var xb:int = ub + wb;
  var yb:int = 16;
  var zb:int = e + yb;
  fprintf(sb, xb, zb);
  var ac:int = rb[0];
  var bc:int = 67;
  var cc:int = memory_base;
  var dc:int = cc + bc;
  var ec:int = 0;
  fprintf(ac, dc, ec);
  var fc:int = 64;
  var gc:int = e + fc;
  stack_pointer = gc;
}

function legalfunc_polybench_alloc_data(a:long, b:int):int {
  return legalimport_polybench_alloc_data(i32_wrap_i64(a),
                                          i32_wrap_i64(a >> 32L),
                                          b)
}

