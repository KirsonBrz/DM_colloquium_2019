import console.N, console.Z, console.Q, console.P


def main():
    menu = 1
    while menu:
        print("Добро пожаловать в программу отладки!")
        print("Команды:")
        print("1 - тест модулей N")
        print("2 - тест модулей Z")
        print("3 - тест модулей Q")
        print("4 - тест модулей P")
        print("0 - выход")
        
        menu = int(input())
        
        if menu == 1:
            console.N.main()
        elif menu == 2:
            console.Z.main()
        elif menu == 3:
            console.Q.main()
        elif menu == 4:
            console.P.main()
        elif menu == 0:
            pass
        else:
            print("Неизвестный ввод!")
    
    
if __name__ == "__main__":
    main()
