import sys
from PyQt5 import QtCore, QtGui, QtWidgets
from PyQt5.QtCore import *
from PyQt5.QtGui import *
from PyQt5.QtWidgets import *
from gui.Z_modules_Window import *
from gui.Z_modules_Window_1 import *
from gui.Z_modules_Window_2 import *

from modules.Z import *


class ZModulesWindow(QtWidgets.QMainWindow):
    def __init__(self, parent=None, main=None):
        QtWidgets.QWidget.__init__(self, parent)
        self.ui = Ui_ZModulesWindowMain()
        self.ui.setupUi(self)
        self.main = main
        self.z1 = ZModulesWindow1(main=self)
        self.z2 = ZModulesWindow2(main=self)
        
        self.ui.pushButton_main.clicked.connect(self.button_main_clicked)
        self.ui.pushButton_bin.clicked.connect(self.buttonBin_clicked)
        self.ui.pushButton_other.clicked.connect(self.ButtonOther_clicked)
        
    
    def button_main_clicked(self):
        self.hide()
        self.main.show()
        
    
    def buttonBin_clicked(self):
        self.hide()
        self.z1.show()
        
    
    def ButtonOther_clicked(self):
        self.hide()
        self.z2.show()


class ZModulesWindow1(QtWidgets.QMainWindow):
    def __init__(self, parent=None, main=None):
        QtWidgets.QWidget.__init__(self, parent)
        self.ui = Ui_ZModulesWindow1()
        self.ui.setupUi(self)
        # Инициализация свойств
        self.main = main
        self.operation = 0
        self.n1 = self.ui.line_n1
        self.n2 = self.ui.line_n2
        self.num1 = Integer()
        self.num2 = Integer()
        self.res = self.ui.result
        # Присоеднинение методов
        self.ui.pushButton_return.clicked.connect(self.pushButton_return_clicked)
        self.ui.operations.currentIndexChanged.connect(self.operation_changed)
        self.n1.textEdited.connect(self.n1_changed)
        self.n2.textEdited.connect(self.n2_changed)
        
        
    def pushButton_return_clicked(self):
        self.hide()
        self.main.show()
    
    
    def operation_changed(self, i):
        self.operation = int(i)
        self.count()
    
    
    # Очистка текста
    def __clear_text(self, text):
        b = 0
        if text[0] == '-':
            b = 1
            text = text[1::]
        elif text[0] == '+':
            text = text[1::]
        
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
        elif b == 1:
            cleared = '-' + cleared
        return cleared
    
    
    def n1_changed(self):
        text = self.n1.text()
        text = self.__clear_text(text)
        self.n1.setText(text)
        self.num1.read_from_str(text)
        self.count()
        
    
    def n2_changed(self):
        text = self.n2.text()
        text = self.__clear_text(text)
        self.n2.setText(text)
        self.num2.read_from_str(text)
        self.count()
    
    
    def count(self):
        res = "Error"
        if self.operation == 0:
            res = str(ADD_ZZ_Z(self.num1, self.num2))
        elif self.operation == 1:
            res = str(SUB_ZZ_Z(self.num1, self.num2))
        elif self.operation == 2:
            res = str(MUL_ZZ_Z(self.num1, self.num2))
        elif self.operation == 3:
            if POZ_Z_D(self.num2) == 2:
                res = str(DIV_ZZ_Z(self.num1, self.num2))
        elif self.operation == 4:
            if POZ_Z_D(self.num2) == 2:
                res = str(MOD_ZZ_Z(self.num1, self.num2))
        self.res.setText(res)


class ZModulesWindow2(QtWidgets.QMainWindow):
    def __init__(self, parent=None, main=None):
        QtWidgets.QWidget.__init__(self, parent)
        self.ui = Ui_ZModulesWindow2()
        self.ui.setupUi(self)
        # Инициализация свойств
        self.main = main
        self.operation = 0
        self.n = self.ui.line_n
        self.num = Integer()
        self.res = self.ui.result
        # Присоеднинение методов
        self.ui.pushButton_return.clicked.connect(self.pushButton_return_clicked)
        self.ui.operations.currentIndexChanged.connect(self.operation_changed)
        self.n.textEdited.connect(self.n_changed)
        
        
    def pushButton_return_clicked(self):
        self.hide()
        self.main.show()
    
    
    def operation_changed(self, i):
        self.operation = int(i)
        self.count()
        
    
    # Очистка текста
    def __clear_text(self, text):
        b = 0
        if text[0] == '-':
            b = 1
            text = text[1::]
        elif text[0] == '+':
            text = text[1::]
        
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
        elif b == 1:
            cleared = '-' + cleared
        return cleared
    
    
    def n_changed(self):
        text = self.n.text()
        text = self.__clear_text(text)
        self.n.setText(text)
        self.num.read_from_str(text)
        self.count()
        
    
    def count(self):
        res = "Error"
        if self.operation == 0:
            res = str(ABS_Z_N(self.num))
        elif self.operation == 1:
            res = str(POZ_Z_D(self.num))
            if res == 0:
                res += " (равное нулю)"
            elif res == 1:
                res += " (меньше нуля)"
            else:
                res += " (больше нуля)"
        elif self.operation == 2:
            if POZ_Z_D(self.num) != 0:
                res = str(MUL_ZM_Z(self.num))
        
        self.res.setText(res)
