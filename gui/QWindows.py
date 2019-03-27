import sys
from PyQt5 import QtCore, QtGui, QtWidgets
from PyQt5.QtCore import *
from PyQt5.QtGui import *
from PyQt5.QtWidgets import *
from gui.Q_modules_Window import *
from gui.Q_modules_Window_1 import *
from gui.Q_modules_Window_2 import *

from modules.Q import *


class QModulesWindow(QtWidgets.QMainWindow):
    def __init__(self, parent=None, main=None):
        QtWidgets.QWidget.__init__(self, parent)
        self.ui = Ui_QModulesWindowMain()
        self.ui.setupUi(self)
        self.main = main
        self.q1 = QModulesWindow1(main=self)
        self.q2 = QModulesWindow2(main=self)
        
        self.ui.pushButton_main.clicked.connect(self.button_main_clicked)
        self.ui.pushButton_bin.clicked.connect(self.buttonBin_clicked)
        self.ui.pushButton_other.clicked.connect(self.ButtonOther_clicked)
        
    
    def button_main_clicked(self):
        self.hide()
        self.main.show()
        
    
    def buttonBin_clicked(self):
        self.hide()
        self.q1.show()
        
    
    def ButtonOther_clicked(self):
        self.hide()
        self.q2.show()


class QModulesWindow1(QtWidgets.QMainWindow):
    def __init__(self, parent=None, main=None):
        QtWidgets.QWidget.__init__(self, parent)
        self.ui = Ui_QModulesWindow1()
        self.ui.setupUi(self)
        # Инициализация свойств
        self.main = main
        self.operation = 0
        self.q1m = self.ui.line_q1m
        self.q1n = self.ui.line_q1n
        self.q2m = self.ui.line_q2m
        self.q2n = self.ui.line_q2n
        self.num1 = Rational()
        self.num2 = self.num1.copy()
        self.res = self.ui.result
        # Присоеднинение методов
        self.ui.pushButton_return.clicked.connect(self.pushButton_return_clicked)
        self.ui.operation.currentIndexChanged.connect(self.operation_changed)
        self.q1m.textEdited.connect(self.q1m_changed)
        self.q1n.textEdited.connect(self.q1n_changed)
        self.q2m.textEdited.connect(self.q2m_changed)
        self.q2n.textEdited.connect(self.q2n_changed)        
        
        
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
        if text != '':
            if text[0] == '-':
                b = 1
                text = text[1::]
            elif text[0] == '+':
                text = text[1::]
        
        cleared = self.__clear_text(text)
        if cleared != '0' and b == 1:
            cleared = '-' + cleared
        return cleared
    
    
    def q1m_changed(self):
        text = self.q1m.text()
        text = self.__clear_text_int(text)
        self.q1m.setText(text)
        self.num1.m.read_from_str(text)
        self.count()
        
    
    def q1n_changed(self):
        text = self.q1n.text()
        text = self.__clear_text(text)
        if text == '0':
            text = '1'
        self.q1n.setText(text)
        self.num1.n.read_from_str(text)
        self.count()
    
    
    def q2m_changed(self):
        text = self.q2m.text()
        text = self.__clear_text_int(text)
        self.q2m.setText(text)
        self.num2.m.read_from_str(text)
        self.count()
        
    
    def q2n_changed(self):
        text = self.q2n.text()
        text = self.__clear_text(text)
        if text == '0':
            text = '1'        
        self.q2n.setText(text)
        self.num2.n.read_from_str(text)
        self.count()
    
    
    def count(self):
        res = "Error"
        if self.operation == 0:
            res = str(ADD_QQ_Q(self.num1, self.num2))
        elif self.operation == 1:
            res = str(SUB_QQ_Q(self.num1, self.num2))
        elif self.operation == 2:
            res = str(MUL_QQ_Q(self.num1, self.num2))
        elif self.operation == 3:
            if POZ_Z_D(num2.m) != 0:
                res = str(DIV_QQ_Q(self.num1, self.num2))
        self.res.setText(res)


class QModulesWindow2(QtWidgets.QMainWindow):
    def __init__(self, parent=None, main=None):
        QtWidgets.QWidget.__init__(self, parent)
        self.ui = Ui_QModulesWindow2()
        self.ui.setupUi(self)
        # Инициализация свойств
        self.main = main
        self.operation = 0
        self.qm = self.ui.line_qm
        self.qn = self.ui.line_qn
        self.num = Rational()
        self.res = self.ui.result
        # Присоеднинение методов
        self.ui.pushButton_return.clicked.connect(self.pushButton_return_clicked)
        self.ui.operation.currentIndexChanged.connect(self.operation_changed)
        self.qm.textEdited.connect(self.qm_changed)
        self.qn.textEdited.connect(self.qn_changed)
        
        
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
        if text != '':
            if text[0] == '-':
                b = 1
                text = text[1::]
            elif text[0] == '+':
                text = text[1::]
        
        cleared = self.__clear_text(text)
        
        if cleared != '0' and b == 1:
            cleared = '-' + cleared
        return cleared
    
    
    def qm_changed(self):
        text = self.qm.text()
        text = self.__clear_text_int(text)
        self.qm.setText(text)
        self.num.m.read_from_str(text)
        self.count()
    
    
    def qn_changed(self):
        text = self.qn.text()
        text = self.__clear_text(text)
        if text == '0':
            text = '1'        
        self.qn.setText(text)
        self.num.n.read_from_str(text)
        self.count()    
        
    
    def count(self):
        res = "Error"
        if self.operation == 0:
            res = str(RED_Q_Q(self.num))
        elif self.operation == 1:
            res = str(INT_Q_B(self.num))
        elif self.operation == 2:
            if INT_Q_B(self.num):
                res = str(TRANS_Q_Z(self.num))
        self.res.setText(res)
