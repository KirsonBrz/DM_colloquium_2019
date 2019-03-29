from modules.classes import *
from modules.N import *
from modules.Z import *
from modules.Q import *


# P-1
def ADD_PP_P(c1, c2):
    m1 = c1.m
    m2 = c2.m
    c = Polinomial()
    c.clear()
    
    if m1 > m2:
        m1, m2 = m2, m1
        c1, c2 = c2, c1
    
    i = 0
    while i <= m2:
        if i <= m1:
            c.append(ADD_QQ_Q(c1[i], c2[i]))
        else:
            c.append(c2[i])
        i += 1
    
    c.m = m2
    return c


# P-2
def SUB_PP_P(C1, C2):
    c1 = C1.copy()
    c2 = C2.copy()
    mul = Rational (
        Integer(1, 0, 1), #-1
        Natural(0, 1) # 1
    )
    c2 = MUL_PQ_P(c2, mul)
    c = ADD_PP_P(c1, c2)
    
    c.m = DEG_P_N(c)
    return c
    

# P-3
def MUL_PQ_P(C, z):
    m = DEG_P_N(C)
    p = Polinomial()
    p.clear()
    
    for i in range(m+1):
        if C[i] == 0:
            p.append(0)
        else:
            p.append(MUL_QQ_Q(C[i], z))
    p.m = m
    return p
    
    
# P-4
def MUL_Pxk_P(a, k):
    m = a.m
    c = a.copy()
    c.extend([Rational() for i in range(k)])
    if c.m != 0 or c[0] != 0:
        for i in range(m, -1, -1):
            c[i+k] = c[i]
        for i in range(k):
            c[i] = Rational()
        c.m = c.m + k
    c.m = DEG_P_N(c)
    return c


# P-5
def LED_P_Q(C):
    return C[DEG_P_N(C)]


# P-6
def DEG_P_N(P):
    i = len(P)-1
    while i > 0 and POZ_Z_D(P[i].m) == 0:
        P.pop()
        i -= 1
    P.m = i 
    return i


# P-7
def FAC_P_Q(p):
    q = Rational()
    if p.m != 0:
        prevk = ABS_Z_N(p[0].m)
        prevd = p[0].n.copy()
        s = p[0].m.copy()
        for i in range(1, p.m + 1):
            prevk = LCM_NN_N(prevk, ABS_Z_N(p[i].m))
            prevd = LCM_NN_N(prevd, p[i].n)
            if p[i] != 0:
                s = MUL_ZZ_Z(s, p[i].m)
        q.m = TRANS_N_Z(DIV_NN_N(ABS_Z_N(s), prevk))
        q.n = prevd
    else:
        q.m = p[0].m
        q.n = p[0].n
    return q


# P-8
def MUL_PP_P(c1, c2):
    c = Polinomial()
    tmp = Polinomial()
    for i in range(c2.m+1):
        tmp = MUL_PQ_P(c1, c2[i])
        tmp = MUL_Pxk_P(tmp, i)
        c = ADD_PP_P(c, tmp)
    c.m = DEG_P_N(c)
    return c


# P-9
def DIV_PP_P(p1, p2):
    if p2.m == 0 and POZ_Z_D(p2[0].m) == 0:
        raise ZeroDivisionError
    else:
        n1 = p1.copy()
        n2 = p2.copy()
        n3 = Polinomial(p1.m, *[Rational() for i in range(p1.m+1)])
        
        while DEG_P_N(n1) >= DEG_P_N(n2) \
                        and \
              (n1.m != 0 or n1[0].m.n != 0 or n1[0].m[0] != 0):
            
            m = n1.m - n2.m
            q = DIV_QQ_Q(n1[n1.m], n2[n2.m])
            sub = MUL_Pxk_P(n2, m)
            sub = MUL_PQ_P(sub, q)
            
            n1 = SUB_PP_P(n1, sub)
            
            n3[m] = q
            
        n3.m = DEG_P_N(n3)
            
        return n3


# P-10
def MOD_PP_P(p1, p2):
    if p2.m == 0 and POZ_Z_D(p2[0].m) == 0:
        raise ZeroDivisionError
    else:
        c1 = p1.copy()
        c2 = p2.copy()
        if c1.m < c2.m:
            r = c1.copy()
        else:
            q = DIV_PP_P(c1, c2)
            c3 = MUL_PP_P(c2, q)
            r = SUB_PP_P(c1, c3)
        return r
    
    
# P-11
def GCF_PP_P(A, B):
    a = A.copy()
    b = B.copy()
    # Пока не (a == 0 или b == 0)
    while not ((a.m == 0 and POZ_Z_D(a[0].m)) \
                                or \
               (b.m == 0 and POZ_Z_D(b[0].m) == 0)):
        
        if a.m > b.m:
            a = MOD_PP_P(a, b)
            a.m = DEG_P_N(a)
        else:
            b = MOD_PP_P(b, a)
            b.m = DEG_P_N(b)
    
    if b.m == 0 and POZ_Z_D(b[0].m) == 0:
        nod = a.copy()
    else:
        nod = b.copy()
    
    
    nod.m = DEG_P_N(nod)
    # 1/nod[nod.m]
    q = DIV_QQ_Q(Rational(Integer(0, 0, 1)), nod[nod.m])
    nod = MUL_PQ_P(nod, q)
    
    return nod
    

# P-12
def DER_P_P(C):
    P = Polinomial()
    if C.m != 0 or (POZ_Z_D(C[0].m) != 0):
        m = DEG_P_N(C)
        
        P.clear()
        I = Integer()
        i = 0
        while i < m:
            I = TRANS_N_Z(ADD_1N_N(TRANS_Z_N(I)))
            z = TRANS_Z_Q(I)
            # вычисление производной
            P.append(MUL_QQ_Q(C[i+1], z))
            i += 1
            
        P.m = DEG_P_N(P)
    return P


# P-13
def NMR_P_P(f):
    if f.m != 0 or (POZ_Z_D(f[0].m) != 0):
        Q = Polinomial(1, 1, 1)
        while Q.m != 0 or Q[0].m.n != 0:
            p = DER_P_P(f)
            Q = GCF_PP_P(f, p)
            f = DIV_PP_P(f, Q)
    return f
