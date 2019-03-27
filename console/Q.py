from modules.classes import *
from modules.Q import *
from console.N import *
from console.Z import *


def input_Rational(message=''):
    if message:
        print(message)
    m = input_Integer("Числитель: ")
    n = input_Natural("Знаменатель: ")
    q = Rational(m, n)
    return q


def print_Rational(q, end='\n'):
    print_Integer(q.m, end='')
    print('/', end='')
    print_Natural(q.n, end='')
    print(end, end='')


def test_Q_1():
    q = input_Rational("Введите дробь:")
    print("Сокращенная дробь:")
    print_Rational(RED_Q_Q(q))
    
    
def test_Q_2():
    q = input_Rational("Введите дробь:")
    print("Является ли дробь целым числом:")
    if INT_Q_B(q):
        print("Да")
    else:
        print("Нет")
        

def test_Q_3():
    z = input_Integer("Введите целое: ")
    print("Дробь:")
    print_Rational(TRANS_Z_Q(z))
    

def test_Q_4():
    q = input_Rational("Введите дробь:")
    print("Число:")
    print_Integer(TRANS_Q_Z(q))
    
    
def test_Q_5():
    q1 = input_Rational("Введите первую дробь:")
    q2 = input_Rational("Введите вторую дробь:")
    print("Сумма:")
    print_Rational(ADD_QQ_Q(q1, q2))


def test_Q_6():
    q1 = input_Rational("Введите первую дробь:")
    q2 = input_Rational("Введите вторую дробь:")
    print("Разность:")
    print_Rational(SUB_QQ_Q(q1, q2))


def test_Q_7():
    q1 = input_Rational("Введите первую дробь:")
    q2 = input_Rational("Введите вторую дробь:")
    print("Произведение:")
    print_Rational(MUL_QQ_Q(q1, q2))
    
    
def test_Q_8():
    q1 = input_Rational("Введите первую дробь:")
    q2 = input_Rational("Введите вторую дробь:")
    print("Частное:")
    print_Rational(DIV_QQ_Q(q1, q2))
    

def main():
    menu = 1
    while menu:
        print("Добро пожаловать в программу отладки модулей Q!")
        print("Команды:")
        print("1 - тест модуля Q-1")
        print("2 - тест модуля Q-2")
        print("3 - тест модуля Q-3")
        print("4 - тест модуля Q-4")
        print("5 - тест модуля Q-5")
        print("6 - тест модуля Q-6")
        print("7 - тест модуля Q-7")
        print("8 - тест модуля Q-8")
        
        print("\n0 - выход")
        
        menu = int(input())
        
        if menu == 1:
            test_Q_1()
        elif menu == 2:
            test_Q_2()
        elif menu == 3:
            test_Q_3()
        elif menu == 4:
            test_Q_4()
        elif menu == 5:
            test_Q_5()
        elif menu == 6:
            test_Q_6()
        elif menu == 7:
            test_Q_7()
        elif menu == 8:
            test_Q_8()
        
        elif menu == 0:
            pass
        else:
            print("Неизвестный ввод")
        input("\nНажмите enter для продолжения...")
    
if __name__ == "__main__":
    main()
    