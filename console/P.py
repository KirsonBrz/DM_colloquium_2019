from modules.classes import *
from modules.P import *
from console.Z import *
from console.Z import *
from console.Q import *


def input_Polinomial(message=''):
    if message:
        print(message)
    
    m = int(input("Введите степень многочлена: "))
    p = Polinomial(m)
    p.pop()
    for i in range(m+1):
        p.append(input_Rational("Введите коэффициент "+str(p.m-i)+":"))
    p.reverse()
    return p


def print_Polinomial(P, end='\n'):
    p = P.copy()
    p.reverse()
    for i in range(p.m):
        print('(', end='')
        print_Rational(p[i], end='')
        print(")x^"+str(p.m-i), end='')
        print(' + ', end='')
    print_Rational(p[p.m], end=end)
    
    
def test_P_1():
    p1 = input_Polinomial("Введите первый многочлен:")
    p2 = input_Polinomial("Введите второй многочлен:")
    print("Сумма:")
    print_Polinomial(ADD_PP_P(p1, p2))


def test_P_2():
    p1 = input_Polinomial("Введите первый многочлен:")
    p2 = input_Polinomial("Введите второй многочлен:")
    print("Разность:")
    print_Polinomial(SUB_PP_P(p1, p2))


def test_P_3():
    p = input_Polinomial("Введите многочлен:")
    q = input_Rational("Введите рациональное число:")
    print("Произведение:")
    print_Polinomial(MUL_PQ_P(p, q))


def test_P_4():
    p = input_Polinomial("Введите многочлен:")
    k = int(input("Введите тепень k: "))
    print("Многочлен в степени k:")
    print_Polinomial(MUL_Pxk_P(p, k))


def test_P_5():
    p = input_Polinomial("Введите многочлен:")
    print("Старший коэффициент многочлена: ", end='')
    print_Rational(LED_P_Q(p))
    
    
def test_P_6():
    p = input_Polinomial("Введите многочлен:")
    print("Степень многочлена: ", end='')
    print(DEG_P_N(p))


def test_P_7():
    p = input_Polinomial("Введите многочлен:") 
    print("НОД числителей/НОК знаменателей:")
    print_Rational(FAC_P_Q(p))
    

def test_P_8():
    p1 = input_Polinomial("Введите первый многочлен:")
    p2 = input_Polinomial("Введите второй многочлен:")
    print("Произведение:")
    print_Polinomial(MUL_PP_P(p1, p2))
    
    
def test_P_9():
    p1 = input_Polinomial("Введите первый многочлен:")
    p2 = input_Polinomial("Введите второй многочлен:")
    print("Частное от деления:")
    print_Polinomial(DIV_PP_P(p1, p2))


def test_P_10():
    p1 = input_Polinomial("Введите первый многочлен:")
    p2 = input_Polinomial("Введите второй многочлен:")
    print("Остаток от деления:")
    print_Polinomial(MOD_PP_P(p1, p2))


def test_P_11():
    p1 = input_Polinomial("Введите первый многочлен:")
    p2 = input_Polinomial("Введите второй многочлен:")
    print("НОД:")
    print_Polinomial(GCF_PP_P(p1, p2))
    

def test_P_12():
    p = input_Polinomial("Введите многочлен:") 
    print("Производная:")
    print_Polinomial(DER_P_P(p))


def test_P_13():
    p = input_Polinomial("Введите многочлен:")
    print("Сокращение кратных корней:")
    print_Polinomial(NMR_P_P(p))
    

def main():
    menu = 1
    while menu:
        print("Добро пожаловать в программу отладки модулей P!")
        print("Команды:")
        print("1 - тест модуля P-1")
        print("2 - тест модуля P-2")
        print("3 - тест модуля P-3")
        print("4 - тест модуля P-4")
        print("5 - тест модуля P-5")
        print("6 - тест модуля P-6")
        print("7 - тест модуля P-7")
        print("8 - тест модуля P-8")
        print("9 - тест модуля P-9")
        print("10 - тест модуля P-10")
        print("11 - тест модуля P-11")
        print("12 - тест модуля P-12")
        print("13 - тест модуля P-13")
        print("\n0 - выход")
        
        menu = int(input())
        
        if menu == 1:
            test_P_1()
        elif menu == 2:
            test_P_2()
        elif menu == 3:
            test_P_3()
        elif menu == 4:
            test_P_4()
        elif menu == 5:
            test_P_5()
        elif menu == 6:
            test_P_6()
        elif menu == 7:
            test_P_7()
        elif menu == 8:
            test_P_8()
        elif menu == 9:
            test_P_9()
        elif menu == 10:
            test_P_10()
        elif menu == 11:
            test_P_11()
        elif menu == 12:
            test_P_12()
        elif menu == 13:
            test_P_13()
        
        elif menu == 0:
            pass
        else:
            print("Неизвестный ввод")
        input("\nНажмите enter для продолжения...")
    

if __name__ == "__main__":
    main()