from modules.classes import *
from modules.Z import *
from console.N import *


def input_Integer(message=''):
    n = Integer()
    n.pop()
    string = input(message)
    
    if string[0] == '-':
        n.b = 1
        string = string[1::]
    elif string[0] == '+':
        string = string[1::]
        
    for c in string:
        n.append(int(c))
        n.n += 1
    n.reverse()
    n.n -= 1
    
    return n


def print_Integer(n, end='\n'):
    num = n.copy()
    num.reverse()
    if num.b == 1:
        print('-', end='')
    for i in range(num.n+1):
        print(num[i], end='')
    print(end, end='')
    
    
def test_Z_1():
    n = input_Integer("Введите число: ")
    print("Абсолютное значение:")
    print_Natural(ABS_Z_N(n))


def test_Z_2():
    n = input_Integer("Введите число: ")
    print("Результат:")
    res = POZ_Z_D(n)
    if res == 2:
        ans = 'Положительное'
    elif res == 0:
        ans = "Равное нулю"
    else:
        ans = "Отрицательное"
    print(str(res)+' ('+ans+')')


def test_Z_3():
    n = input_Integer("Введите число: ")
    print("Результат:")
    print_Integer(MUL_ZM_Z(n))
    
    
def test_Z_4():
    n = input_Natural("Введите число: ")
    print("Результат:")
    print_Integer(TRANS_N_Z(n))


def test_Z_5():
    n = input_Integer("Введите число: ")
    print("Результат:")
    print_Natural(TRANS_Z_N(n))


def test_Z_6():
    n1 = input_Integer("Введите первое число: ")
    n2 = input_Integer("Введите второе число: ")
    print("Сумма:")
    print_Integer(ADD_ZZ_Z(n1, n2))
    

def test_Z_7():
    n1 = input_Integer("Введите первое число: ")
    n2 = input_Integer("Введите второе число: ")
    print("Разность:")
    print_Integer(SUB_ZZ_Z(n1, n2))
    
    
def test_Z_8():
    n1 = input_Integer("Введите первое число: ")
    n2 = input_Integer("Введите второе число: ")
    print("Произведение:")
    print_Integer(MUL_ZZ_Z(n1, n2))
    
    
def test_Z_9():
    n1 = input_Integer("Введите первое число: ")
    n2 = input_Integer("Введите второе число: ")
    print("Частное от деления:")
    print_Integer(DIV_ZZ_Z(n1, n2))
    
    
def test_Z_10():
    n1 = input_Integer("Введите первое число: ")
    n2 = input_Integer("Введите второе число: ")
    print("Остаток от деления:")
    print_Integer(MOD_ZZ_Z(n1, n2))
    

def main():
    menu = 1
    while menu:
        print("Добро пожаловать в программу отладки модулей Z!")
        print("Команды:")
        print("1 - тест модуля Z-1")
        print("2 - тест модуля Z-2")
        print("3 - тест модуля Z-3")
        print("4 - тест модуля Z-4")
        print("5 - тест модуля Z-5")
        print("6 - тест модуля Z-6")
        print("7 - тест модуля Z-7")
        print("8 - тест модуля Z-8")
        print("9 - тест модуля Z-9")
        print("10 - тест модуля Z-10")

        print("\n0 - выход")
        
        menu = int(input())
        
        if menu == 1:
            test_Z_1()
        elif menu == 2:
            test_Z_2()
        elif menu == 3:
            test_Z_3()
        elif menu == 4:
            test_Z_4()
        elif menu == 5:
            test_Z_5()
        elif menu == 6:
            test_Z_6()
        elif menu == 7:
            test_Z_7()
        elif menu == 8:
            test_Z_8()
        elif menu == 9:
            test_Z_9()
        elif menu == 10:
            test_Z_10()
            
        elif menu == 0:
            pass
        else:
            print("Неизвестный ввод")
        input("\nНажмите enter для продолжения...")


if __name__ == "__main__":
    main()
