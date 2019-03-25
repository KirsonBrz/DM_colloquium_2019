import sys
from PyQt5 import QtCore, QtGui, QtWidgets
from PyQt5.QtCore import *
from PyQt5.QtGui import *
from PyQt5.QtWidgets import *
from gui.P_modules_Window import *
from gui.P_modules_Window_1 import *
from gui.P_modules_Window_2 import *
from gui.P_modules_Window_3 import *


from modules.P import *


class PModulesWindow(QtWidgets.QMainWindow):
    def __init__(self, parent=None, main=None):
        QtWidgets.QWidget.__init__(self, parent)
        self.ui = Ui_PModulesWindowMain()
        self.ui.setupUi(self)
        self.main = main
        self.p1 = PModulesWindow1(main=self)
        self.p2 = PModulesWindow2(main=self)
        self.p3 = PModulesWindow3(main=self)
        
        self.ui.pushButton_main.clicked.connect(self.button_main_clicked)
        self.ui.pushButton_bin.clicked.connect(self.buttonBin_clicked)
        self.ui.pushButton_un.clicked.connect(self.buttonUn_clicked)
        self.ui.pushButton_other.clicked.connect(self.ButtonOther_clicked)
        
    
    def button_main_clicked(self):
        self.hide()
        self.main.show()
        
    
    def buttonBin_clicked(self):
        self.hide()
        self.p1.show()
    
    
    def buttonUn_clicked(self):
        self.hide()
        self.p2.show()
        
    
    def ButtonOther_clicked(self):
        self.hide()
        self.p3.show()


class PModulesWindow1(QtWidgets.QMainWindow):
    def __init__(self, parent=None, main=None):
        QtWidgets.QWidget.__init__(self, parent)
        self.ui = Ui_PModulesWindow1()
        self.ui.setupUi(self)
        # Инициализация свойств
        self.main = main
        self.operation = 0
        
        self.res = self.ui.result
        # Присоеднинение методов
        self.ui.pushButton_return.clicked.connect(self.pushButton_return_clicked)
        self.ui.operation.currentIndexChanged.connect(self.operation_changed)
              
        
    def pushButton_return_clicked(self):
        self.hide()
        self.main.show()
    
    
    def operation_changed(self, i):
        self.operation = int(i)
        self.count()
    
    
    def __clear_text(self, text):
        nums = ''
        for c in text:
            if c in "1234567890":
                nums += c
        i = 0
        while i < len(nums)-1 and nums[i] == '0':
            i += 1
        cleared = ''
        for j in range(i, len(nums)):
            cleared += nums[j]
        if cleared == '':
            cleared = '0'
        return cleared
    
    
    # Очистка текста
    def __clear_text_int(self, text):
        b = 0
        if text[0] == '-':
            b = 1
            text = text[1::]
        elif text[0] == '+':
            text = text[1::]
        
        cleared = self.__clear_text(text)
        if cleared != '0' and b == 1:
            cleared = '-' + cleared
        return cleared
    
     
    def count(self):
        res = "Error"
        
        self.res.setText(res)


class PModulesWindow2(QtWidgets.QMainWindow):
    def __init__(self, parent=None, main=None):
        QtWidgets.QWidget.__init__(self, parent)
        self.ui = Ui_PModulesWindow2()
        self.ui.setupUi(self)
        # Инициализация свойств
        self.main = main
        self.operation = 0
        
        self.res = self.ui.result
        # Присоеднинение методов
        self.ui.pushButton_return.clicked.connect(self.pushButton_return_clicked)
        self.ui.operation.currentIndexChanged.connect(self.operation_changed)
        
        
        
    def pushButton_return_clicked(self):
        self.hide()
        self.main.show()
    
    
    def operation_changed(self, i):
        self.operation = int(i)
        self.count()
        
    
    def __clear_text(self, text):
        nums = ''
        for c in text:
            if c in "1234567890":
                nums += c
        i = 0
        while i < len(nums)-1 and nums[i] == '0':
            i += 1
        cleared = ''
        for j in range(i, len(nums)):
            cleared += nums[j]
        if cleared == '':
            cleared = '0'
        return cleared
    
    # Очистка текста
    def __clear_text_int(self, text):
        b = 0
        if text[0] == '-':
            b = 1
            text = text[1::]
        elif text[0] == '+':
            text = text[1::]
        
        cleared = self.__clear_text(text)
        
        if cleared != '0' and b == 1:
            cleared = '-' + cleared
        return cleared 
        
    
    def count(self):
        res = "Error"
        
        self.res.setText(res)



class PModulesWindow3(QtWidgets.QMainWindow):
    def __init__(self, parent=None, main=None):
        QtWidgets.QWidget.__init__(self, parent)
        self.ui = Ui_PModulesWindow3()
        self.ui.setupUi(self)
        # Инициализация свойств
        self.main = main
        self.operation = 0
        
        self.res = self.ui.result
        # Присоеднинение методов
        self.ui.pushButton_return.clicked.connect(self.pushButton_return_clicked)
        self.ui.operation.currentIndexChanged.connect(self.operation_changed)
        
        
        
    def pushButton_return_clicked(self):
        self.hide()
        self.main.show()
    
    
    def operation_changed(self, i):
        self.operation = int(i)
        self.count()
        
    
    def __clear_text(self, text):
        nums = ''
        for c in text:
            if c in "1234567890":
                nums += c
        i = 0
        while i < len(nums)-1 and nums[i] == '0':
            i += 1
        cleared = ''
        for j in range(i, len(nums)):
            cleared += nums[j]
        if cleared == '':
            cleared = '0'
        return cleared
    
    
    # Очистка текста
    def __clear_text_int(self, text):
        b = 0
        if text[0] == '-':
            b = 1
            text = text[1::]
        elif text[0] == '+':
            text = text[1::]
        
        cleared = self.__clear_text(text)
        
        if cleared != '0' and b == 1:
            cleared = '-' + cleared
        return cleared 
        
    
    def count(self):
        res = "Error"
        
        self.res.setText(res)
