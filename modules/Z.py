from modules.classes import *
from modules.N import *

# Z-1
def ABS_Z_N(n):
    n1 = n.copy()
    n1.b = 0
    return TRANS_Z_N(n1)

# Z-2
def POZ_Z_D(b):
    if NZER_N_B(b):
        res = 0
    else:
        if b.b == 1:
            res = 1
        else:
            res = 2
    return res


# Z-3
def MUL_ZM_Z(z):
    num = z.copy()
    if POZ_Z_D(num) != 0:
        if num.b == 0:
            num.b = 1
        else:
            num.b = 0
    return num


# Z-4
def TRANS_N_Z(x):
    z = Integer()
    z.clear()
    z.b = 0
    z.n = x.n
    i = 0
    while i <= x.n:
        z.append(x[i])
        i += 1
    return z


# Z-5
def TRANS_Z_N(x):
    if x.b == 0:
        ans = Natural(x.n, *[x[i] for i in range(x.n+1)])
    else:
        assert False
    return ans


# Z-6
def ADD_ZZ_Z(z1, z2):
    n1 = ABS_Z_N(z1)
    n2 = ABS_Z_N(z2)
    
    # проверка, совпадают ли знаки чисел
    if z1.b == z2.b:
        n = ADD_NN_N(n1, n2)
        res = TRANS_N_Z(n)
        res.b = z1.b
    else:
        # если числа равны по модулю, то ответ 0
        if COM_NN_D(n1, n2) == 0:
            res = Integer()
        # иначе вычитаем модули и определяем знак
        elif COM_NN_D(n1, n2) == 2:
            n = SUB_NN_N(n1, n2)
            res = TRANS_N_Z(n)
            res.b = z1.b
        else:
            n = SUB_NN_N(n2, n1)
            res = TRANS_N_Z(n)
            res.b = z2.b
            
    return res


# Z-7
def SUB_ZZ_Z(z1, z2):
    p = ADD_ZZ_Z(z1, MUL_ZM_Z(z2))
    return p


# Z-8
def MUL_ZZ_Z(z1, z2):
    k = 0
    n1 = ABS_Z_N(z1)
    n2 = ABS_Z_N(z2)
    
    #  Числа разного знака, ни одно из них не 0
    t1 = POZ_Z_D(z1)
    t2 = POZ_Z_D(z2)
    if (t1 != t2) and (t1*t2 != 0):
        k = 1
    
    z3 = TRANS_N_Z(MUL_NN_N(n1, n2))
    if k == 1:
        z3 = MUL_ZM_Z(z3)
    
    return z3


# Z-9
def DIV_ZZ_Z(z1, z2):
    # Правда ли делитель > 0
    if POZ_Z_D(z2) == 2:
        n1 = ABS_Z_N(z1)
        n2 = ABS_Z_N(z2)
        # Нахождение неполного частного модуля делимого на делитель
        g = DIV_NN_N(n1, n2)
        # Если делимое положительно, 
        # преобразуем результат в целое цисло
        if POZ_Z_D(z1) == 2:
            r = TRANS_N_Z(g)
        else:
            # Иначе проверяем, не равно ли оно по модулю делителю
            if (COM_NN_D(n1, n2)):
                g = ADD_1N_N(g)
            r = TRANS_N_Z(g)
            r = MUL_ZM_Z(r)
    else:
        assert False
        
    return r


# Z-10
def MOD_ZZ_Z(z1, z2):
    q = DIV_ZZ_Z(z1, z2)
    qb = MUL_ZZ_Z(q, z2)
    res = SUB_ZZ_Z(z1, qb)
    return res
