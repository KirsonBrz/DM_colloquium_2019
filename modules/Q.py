from modules.classes import *
from modules.N import *
from modules.Z import *


# Q-1
def RED_Q_Q(q1):
    q = q1.copy()
    if POZ_Z_D(q.m) != 0:
        b = q.m.b
        gcf = TRANS_N_Z(GCF_NN_N(ABS_Z_N(q.m), q.n))
        q.m = DIV_ZZ_Z(TRANS_N_Z(ABS_Z_N(q.m)), gcf)
        q.m.b = b
        q.n = TRANS_Z_N(DIV_ZZ_Z(TRANS_N_Z(q.n), gcf))
    else:
        q.n = Natural(0, 1)
    return q


# Q-2
def INT_Q_B(q):
    m = ABS_Z_N(q.m)
    n = q.n.copy()
    d = MOD_NN_N(m, n)
    if NZER_N_B(d):
        A = True
    else:
        A =  False
    return A


# Q-3
def TRANS_Z_Q(k):
    q = Rational()
    q.m = k.copy()
    q.n = Natural(0, 1)
    return q


# Q-4
def TRANS_Q_Z(q):
    q1 = RED_Q_Q(q)
    if q1.n.n == 0 and q1.n[0] == 1:
        p1 = q1.m
        return p1
    else:
        assert False
        

# Q-5
def ADD_QQ_Q(q1, q2):
    nok = LCM_NN_N(q1.n, q2.n) # НОК знаменателей
    
    t = DIV_NN_N(nok, q1.n)
    t = TRANS_N_Z(t)
    p_1 = MUL_ZZ_Z(q1.m, t)
    
    t = DIV_NN_N(nok, q2.n)
    t = TRANS_N_Z(t)
    p_2 = MUL_ZZ_Z (q2.m, t)
    
    p_3 = ADD_ZZ_Z(p_1, p_2)
    
    q3 = Rational()
    q3.m = p_3
    q3.n = nok
    
    q3 = RED_Q_Q(q3)
    
    return q3


# Q-6
def SUB_QQ_Q(q1, q2):
    q3 = q2.copy()
    q3.m = MUL_ZM_Z(q3.m)
    return ADD_QQ_Q(q1, q3)


# Q-7
def MUL_QQ_Q(q1, q2):
    q3 = Rational()
    q3.m = MUL_ZZ_Z(q1.m, q2.m)
    q3.n = MUL_NN_N(q1.n, q2.n)
    q3 = RED_Q_Q(q3)
    return q3


# Q-8
def DIV_QQ_Q(q1, q2):
    q3 = Rational()
    
    n1 = TRANS_N_Z(q1.n)
    n2 = TRANS_N_Z(q2.n)
    
    q3.m = MUL_ZZ_Z(q1.m, n2)
    n3 = MUL_ZZ_Z(n1, q2.m)
    
    if POZ_Z_D(n3) == 1:
        q3.m = MUL_ZM_Z(q3.m)
        n3 = MUL_ZM_Z(n3)
    
    q3.n = ABS_Z_N(n3)
    q3 = RED_Q_Q(q3)
    return q3
