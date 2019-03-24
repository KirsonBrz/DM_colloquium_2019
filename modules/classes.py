class Natural (list):
    def __init__ (self, n = 0, a1=0, *args):
        self.n = n
        args = list(args)
        args.insert(0, a1)
        super().__init__(args)
    
    
    def copy(self):
        return Natural(self.n, *super().copy())
    
    
    def del_0s(self):
        i = self.n
        while i > 0 and self[i] == 0:
            self.pop()
            self.n -= 1
            i -= 1
    
    # Перевод в строку
    def __str__(self):
        num = self.copy()
        num.reverse()
        string = ''
        for i in range(num.n+1):
            string += str(num[i])
        return string
    
    
    # Обновление из строки
    def read_from_str(self, string):
        self.clear()
        self.n = 0
        for c in string:
            self.append(int(c))
            self.n += 1
        self.reverse()
        self.n -= 1
        

class Integer(Natural):
    def __init__(self, b = 0, n = 0, a1=0, *args):
        self.b = b
        args = list(args)
        super().__init__(n, a1, *args)
    
    
    def copy(self):
        return Integer(self.b, self.n, *super().copy())


class Rational:
    def __init__(self, m = Integer(), n = Natural(0, 1)):
        self.m = m
        self.n = n
    
    
    def copy(self):
        return Rational(self.m.copy(), self.n.copy())
        

class Polinomial (list):
    def __init__ (self, m = 0, a0=Rational(), *args):
        self.m = m
        args = list(args)
        args.insert(0, a0)
        super().__init__(args)
        
    
    def copy(self):
        return Polinomial(self.m, *super().copy())
