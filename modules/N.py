from modules.classes import *


# N-1
# Сравнение натуральных чисел
# Мохнаткин Кирилл
def COM_NN_D(n1, n2):
    m = n1.n
    k = n2.n
    if m > k:
        res = 2
    elif k > m:
        res = 1
    else:
        i = m
        while n1[i] == n2[i] and i >= 0:
            i -= 1
        if i < 0:
            res = 0
        elif n1[i] > n2[i]:
            res = 2
        else:
            res = 1 
    return res


# N-2
def NZER_N_B (n):
    return n.n == 0 and n[0] == 0


# N-3
def ADD_1N_N (n1):
    n = n1.copy()
    i = 0
    while i <= n.n and n[i] == 9:
        n[i] = 0
        i += 1
    
    if i > n.n:
        n.append(0)
        n.n += 1
    n[i] += 1
    return n


# N-4
def ADD_NN_N (A, B):
    # Если количество разрядов второго числа больше первого 
    if A.n < B.n:
        A, B = B, A
    
    C = Natural()
    C.clear()
    k = 0
    i = 0
    # Сложение
    while (i <= A.n):
        if i <= B.n:
            C.append(B[i] + A[i] + k)
        else:
            C.append(A[i]+k)
        if C[i] >= 10:
            C[i] = C[i] - 10
            k = 1
        else:
            k = 0
        i += 1
    # Если количество разрядов у суммы больше чем у исходных
    C.n = A.n
    if k == 1:
        C.append(1)
        C.n += 1

    return C


# N-5
def SUB_NN_N (N1, N2):
    n1 = N1.copy()
    n2 = N2.copy()
    n3 = Natural()
    if COM_NN_D(n1, n2) == 2:
        n3 = n1
        for i in range(n2.n+1):
            if n1[i] >= n2[i]:
                n3[i] = n1[i] - n2[i]
            else:
                n3[i] = n1[i] + 10 - n2[i]
                k = i+1
                while n1[k] == 0:
                    n1[k] = 9
                    k += 1
                n1[k] -= 1
    elif COM_NN_D(n1, n2) == 1:
        assert False
        
    i = n3.n
    while i > 0 and n3[i] == 0:
        n3.pop()
        n3.n -= 1
        i -= 1
        
    return n3


# N-6
def MUL_ND_N (B, d):
    C = B.copy()
    k = 0
    i = 0
    
    while i <= B.n:
        C[i] = C[i]*d + k
        k = C[i] // 10
        C[i] = C[i] % 10
        i += 1
    
    if k > 0:
        C.append(k)
        C.n += 1
    
    return C


# N-7
def MUL_Nk_N(N1, k):
    if N1.n != 0 or N1[0] != 0:
        N = N1.copy()
        N.extend([0 for i in range(k)])
        N.n += k
        for i in range(N.n-k, -1, -1):
            N[i+k] = N[i]
        
        for i in range(k):
            N[i] = 0
    else:
        N = Natural()
        
    return N


# N-8
def MUL_NN_N(n1, n2):
    n3 = Natural()
    for i in range(n2.n+1):
        n3 = ADD_NN_N(n3, MUL_Nk_N(MUL_ND_N(n1, n2[i]), i))
    return n3


# N-9
def SUB_NDN_N(A, B, k):
    sub = MUL_ND_N(B, k) # B * k
    # Проверка, что A действительно больше или равно B*k
    if COM_NN_D(A, sub) != 1:
        sub = SUB_NN_N(A, sub)
        return sub
    else:
        assert False
        
        
# N-10
def DIV_NN_Dk(N1, N2):
    A1 = N1.copy()
    A2 = N2.copy()
    t = COM_NN_D(A1, A2) # сравнение чисел
    
    if t == 1: # Если А1 < A2
        d = 0
    else:
        k = A1.n - A2.n # Вычисление степени 10-ки
        
        A2 = MUL_Nk_N(A2, k) # Умножение А2 на 10^k
        
        t = COM_NN_D(A1, A2) # Сравнение чисел
        # Умножение А1 на 10 в случае, 
        # когда после предыдущего шага A1 < A2
        if t == 1:
            A1 = MUL_Nk_N(A1, 1)
        
        # Вычисление первой цифры деления А1 на А2
        r = A1
        d = 0
        while COM_NN_D(r, A2) != 1: # Пока r >= A2
            r = SUB_NN_N(r, A2)
            d += 1
        
    return d
    

# N-11
def DIV_NN_N(A, B):
    k = Natural()
    if NZER_N_B(B): # Проверка делителя на 0
        assert False
    else:
        cA = A.copy()
        while COM_NN_D(cA, B) != 1:
            cA = SUB_NN_N(cA, B) # Вычитаем из числа А число B
            k = ADD_1N_N(k)
    return k


# N-12
def MOD_NN_N(N1, N2):
    n1 = N1.copy()
    n2 = N2.copy()
    div = DIV_NN_N(n1, n2)
    mod = SUB_NN_N(n1, MUL_NN_N(div, n2))
    return mod


# N-13
def GCF_NN_N(n1, n2):
    a = n1.copy()
    b = n2.copy()
    
    while not(NZER_N_B(a) or NZER_N_B(b)):
        if COM_NN_D(a, b) == 2:
            a = MOD_NN_N(a, b)
        else:
            b = MOD_NN_N(b, a)
    
    if NZER_N_B(b):
        return a
    else:
        return b


# N-14
def LCM_NN_N(a, b):
    return DIV_NN_N(MUL_NN_N(a, b), GCF_NN_N(a, b))
