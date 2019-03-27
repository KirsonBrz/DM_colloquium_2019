import sys
from PyQt5 import QtCore, QtGui, QtWidgets
from PyQt5.QtCore import *
from PyQt5.QtGui import *
from PyQt5.QtWidgets import *
from gui.N_modules_Window import *
from gui.N_modules_Window_1 import *
from gui.N_modules_Window_2 import *

from modules.N import *


class NModulesWindow(QtWidgets.QMainWindow):
    def __init__(self, parent=None, main=None):
        QtWidgets.QWidget.__init__(self, parent)
        self.ui = Ui_NModulesWindowMain()
        self.ui.setupUi(self)
        self.main = main
        self.n1 = NModulesWindow1(main=self)
        self.n2 = NModulesWindow2(main=self)
        
        self.ui.pushButton_main.clicked.connect(self.button_main_clicked)
        self.ui.buttonBin.clicked.connect(self.buttonBin_clicked)
        self.ui.ButtonOther.clicked.connect(self.ButtonOther_clicked)
        
    
    def button_main_clicked(self):
        self.hide()
        self.main.show()
        
    
    def buttonBin_clicked(self):
        self.hide()
        self.n1.show()
        
    
    def ButtonOther_clicked(self):
        self.hide()
        self.n2.show()


class NModulesWindow1(QtWidgets.QMainWindow):
    def __init__(self, parent=None, main=None):
        QtWidgets.QWidget.__init__(self, parent)
        self.ui = Ui_NModulesWindow1()
        self.ui.setupUi(self)
        # Инициализация свойств
        self.main = main
        self.operation = 0
        self.n1 = self.ui.line_n1
        self.n2 = self.ui.line_n2
        self.num1 = Natural()
        self.num2 = Natural()
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
            res = str(COM_NN_D(self.num1, self.num2))
            if res == '2':
                res += " (больше)"
            elif res == '0':
                res += " (равно)"
            else:
                res += " (меньше)"
        
        elif self.operation == 1:
            res = str(ADD_NN_N(self.num1, self.num2))
            
        elif self.operation == 2:
            if COM_NN_D(self.num1, self.num2) != 1:
                res = str(SUB_NN_N(self.num1, self.num2))
            
        elif self.operation == 3:
            res = str(MUL_NN_N(self.num1, self.num2))
            
        elif self.operation == 4:
            if self.num2.n != 0 or self.num2[0] != 0:
                res = str(DIV_NN_Dk(self.num1, self.num2))
                
        elif self.operation == 5:
            if self.num2.n != 0 or self.num2[0] != 0:
                res = str(DIV_NN_N(self.num1, self.num2))
                
        elif self.operation == 6:
            if self.num2.n != 0 or self.num2[0] != 0:
                res = str(MOD_NN_N(self.num1, self.num2))
                
        elif self.operation == 7:
            if (self.num1.n != 0 or self.num1[0] != 0) \
                   and \
                (self.num2.n != 0 or self.num2[0] != 0):
                
                res = str(GCF_NN_N(self.num1, self.num2))
        
        elif self.operation == 8:
            if (self.num1.n != 0 or self.num1[0] != 0) \
               and \
                (self.num2.n != 0 or self.num2[0] != 0):
                
                res = str(LCM_NN_N(self.num1, self.num2))

        self.res.setText(res)
        

class NModulesWindow2(QtWidgets.QMainWindow):
    def __init__(self, parent=None, main=None):
        QtWidgets.QWidget.__init__(self, parent)
        self.ui = Ui_NModulesWindow2()
        self.ui.setupUi(self)
        # Инициализация свойств
        self.main = main
        self.operation = 0
        self.numd = 0
        self.n1 = self.ui.line_n1
        self.n2 = self.ui.line_n2
        self.d = self.ui.combo_d
        self.num1 = Natural()
        self.num2 = Natural()
        self.res = self.ui.result
        self.label = self.ui.label_input
        # Присоеднинение методов
        self.ui.pushButton_return.clicked.connect(self.pushButton_return_clicked)
        self.ui.operations.currentIndexChanged.connect(self.operation_changed)
        self.d.currentIndexChanged.connect(self.d_changed)
        self.n1.textEdited.connect(self.n1_changed)
        self.n2.textEdited.connect(self.n2_changed)
    
    
    def pushButton_return_clicked(self):
        self.hide()
        self.main.show()
    
    
    def operation_changed(self, i):
        self.operation = int(i)
        if self.operation == 0 or self.operation == 1:
            self.label.setText("Введите натуральное число:")
            self.n1.setEnabled(True)
            self.n2.setEnabled(False)
            self.d.setEnabled(False)
        elif self.operation == 2 or self.operation == 3:
            self.label.setText("Введите натуральное число и цифру:")
            self.n1.setEnabled(True)
            self.n2.setEnabled(False)
            self.d.setEnabled(True)
        elif self.operation == 4:
            self.label.setText("Введите 2 натуральных числа и цифру:")
            self.n1.setEnabled(True)
            self.n2.setEnabled(True)
            self.d.setEnabled(True)
            
        self.count()
    
    
    def d_changed(self, i):
        self.numd = int(i)
        self.count()
    
    
    # Очистка текста
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
            res = str(NZER_N_B(self.num1))
        elif self.operation == 1:
            res = str(ADD_1N_N(self.num1))
        elif self.operation == 2:
            res = str(MUL_ND_N(self.num1, self.numd))
        elif self.operation == 3:
            res = str(MUL_Nk_N(self.num1, self.numd))
        elif self.operation == 4:
            tmp = MUL_ND_N(self.num2, self.numd)
            if COM_NN_D(self.num1, tmp) != 1:
                res = str(SUB_NDN_N(self.num1, self.num2, self.numd))
        self.res.setText(res)
