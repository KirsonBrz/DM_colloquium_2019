import sys
from PyQt5 import QtCore, QtGui, QtWidgets
from PyQt5.QtCore import *
from PyQt5.QtGui import *
from PyQt5.QtWidgets import *
from gui.P_modules_Window import *
from gui.P_modules_Window_1 import *
from gui.P_modules_Window_2 import *
from gui.P_modules_Window_3 import *
from gui.P_modules_Window_input import *

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
        self.nump1 = Polinomial()
        self.nump2 = Polinomial()
        self.output = []
        self.p_inp = 1
        self.input_p_win = PModulesWindowInput(main=self, output=self.output)
        self.input_p1 = self.ui.pushButton_inputp1
        self.input_p2 = self.ui.pushButton_inputp2      
        self.res = self.ui.result
        # Присоеднинение методов
        self.ui.pushButton_return.clicked.connect(self.pushButton_return_clicked)
        self.ui.operation.currentIndexChanged.connect(self.operation_changed)
        self.input_p1.clicked.connect(self.input_p1_clicked)
        self.input_p2.clicked.connect(self.input_p2_clicked)
              
        
    def pushButton_return_clicked(self):
        self.hide()
        self.main.show()
    
    
    def operation_changed(self, i):
        self.operation = int(i)
        self.count()
        
    
    def input_p1_clicked(self):
        self.p_inp = 1        
        self.hide()
        self.input_p_win.show()
        
    
    def input_p2_clicked(self):
        self.p_inp = 2
        self.hide()
        self.input_p_win.show()
    
    
    def p_inputed(self):
        if self.p_inp == 1:
            self.nump1 = self.output[0].copy()
            self.ui.polinomial1.setText(str(self.nump1))
        elif self.p_inp == 2:
            self.nump2 = self.output[0].copy()
            self.ui.polinomial2.setText(str(self.nump2))
        self.output.clear()
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
        if self.operation == 0:
            res = str(ADD_PP_P(self.nump1, self.nump2))
        elif self.operation == 1:
            res = str(SUB_PP_P(self.nump1, self.nump2))
        elif self.operation == 2:
            res = str(MUL_PP_P(self.nump1, self.nump2))
        elif self.operation == 3:
            res = str(DIV_PP_P(self.nump1, self.nump2))
        elif self.operation == 4:
            res = str(MOD_PP_P(self.nump1, self.nump2))
        elif self.operation == 5:
            res = str(GCF_PP_P(self.nump1, self.nump2))
        self.res.setText(res)


class PModulesWindow2(QtWidgets.QMainWindow):
    def __init__(self, parent=None, main=None):
        QtWidgets.QWidget.__init__(self, parent)
        self.ui = Ui_PModulesWindow2()
        self.ui.setupUi(self)
        # Инициализация свойств
        self.main = main
        self.operation = 0
        self.nump = Polinomial()
        self.output = []
        self.input_p_win = PModulesWindowInput(main=self, output=self.output)
        self.input_p = self.ui.pushButton_inputp
        self.res = self.ui.result
        # Присоеднинение методов
        self.ui.pushButton_return.clicked.connect(self.pushButton_return_clicked)
        self.ui.operation.currentIndexChanged.connect(self.operation_changed)
        self.input_p.clicked.connect(self.input_p_clicked)
        
        
    def pushButton_return_clicked(self):
        self.hide()
        self.main.show()
    
    
    def operation_changed(self, i):
        self.operation = int(i)
        self.count()
    
    
    def input_p_clicked(self):
        self.hide()
        self.input_p_win.show()
    
    
    def p_inputed(self):
        self.nump = self.output[0].copy()
        self.output.clear()
        self.ui.polinomial.setText(str(self.nump))
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
        if self.operation == 0:
            res = str(LED_P_Q(self.nump))
        elif self.operation == 1:
            res = str(DEG_P_N(self.nump))
        elif self.operation == 2:
            res = str(FAC_P_Q(self.nump))
        elif self.operation == 3:
            res = str(DER_P_P(self.nump))
        elif self.operation == 4:
            res = str(NMR_P_P(self.nump))
        self.res.setText(res)



class PModulesWindow3(QtWidgets.QMainWindow):
    def __init__(self, parent=None, main=None):
        QtWidgets.QWidget.__init__(self, parent)
        self.ui = Ui_PModulesWindow3()
        self.ui.setupUi(self)
        # Инициализация свойств
        self.main = main
        self.operation = 0
        self.nump = Polinomial()
        self.numq = Rational()
        self.numd = 0
        self.output = []
        self.qm = self.ui.line_qm
        self.qn = self.ui.line_qn
        self.d = self.ui.lind_d
        self.input_p_win = PModulesWindowInput(main=self, output=self.output)
        self.input_p = self.ui.pushButton_inputp
        self.res = self.ui.result
        # Присоеднинение методов
        self.ui.pushButton_return.clicked.connect(self.pushButton_return_clicked)
        self.ui.operation.currentIndexChanged.connect(self.operation_changed)
        self.input_p.clicked.connect(self.input_p_clicked)
        self.qm.textEdited.connect(self.qm_changed)
        self.qn.textEdited.connect(self.qn_changed)
        self.d.textEdited.connect(self.d_changed)  
        
        
    def pushButton_return_clicked(self):
        self.hide()
        self.main.show()
    
    
    def operation_changed(self, i):
        self.operation = int(i)
        if self.operation == 0:
            self.qm.setEnabled(True)
            self.qn.setEnabled(True)
            self.d.setEnabled(False)
        elif self.operation == 1:
            self.qm.setEnabled(False)
            self.qn.setEnabled(False)
            self.d.setEnabled(True)
        self.count()
    
    
    def input_p_clicked(self):
        self.hide()
        self.input_p_win.show()
    
    
    def p_inputed(self):
        self.nump = self.output[0].copy()
        self.output.clear()
        self.ui.polinomial.setText(str(self.nump))
        self.count()
    
    
    def qm_changed(self):
        text = self.qm.text()
        text = self.__clear_text_int(text)
        self.qm.setText(text)
        self.numq.m.read_from_str(text)
        self.count()
    
    
    def qn_changed(self):
        text = self.qn.text()
        text = self.__clear_text(text)
        if text == '0':
            text = '1'        
        self.qn.setText(text)
        self.numq.n.read_from_str(text)
        self.count()
    
    
    def d_changed(self):
        text = self.d.text()
        text = self.__clear_text(text)
        self.numd = int(text)
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
        
    
    def count(self):
        res = "Error"
        if self.operation == 0:
            res = str(MUL_PQ_P(self.nump, self.numq))
        elif self.operation == 1:
            res = str(MUL_Pxk_P(self.nump, self.numd))
        self.res.setText(res)


class PModulesWindowInput(QtWidgets.QMainWindow):
    def __init__(self, parent=None, main=None, output=None):
        QtWidgets.QWidget.__init__(self, parent)
        self.ui = Ui_Polinomial_Input()
        self.ui.setupUi(self)
        # Инициализация свойств
        self.main = main
        self.output = output
        self.qm = self.ui.line_qm
        self.qn = self.ui.line_qn
        self.finish = self.ui.pushButton_finish
        self.back = self.ui.pushButton_back
        self.forward = self.ui.pushButton_forward
        self.res = self.ui.result
        self.clear()
        # Присоеднинение методов
        self.qm.textEdited.connect(self.qm_changed)
        self.qn.textEdited.connect(self.qn_changed)         
        self.finish.clicked.connect(self.finish_clicked)
        self.back.clicked.connect(self.back_clicked)
        self.forward.clicked.connect(self.forward_clicked)
    
    
    def clear(self):
        self.numq = Rational()
        self.nump = Polinomial()
        self.nump[0] = self.numq
        self.qm.setText("0")
        self.qn.setText("1")
        self.res.setText(str(self.nump))
        
        
    def finish_clicked(self):
        self.hide()
        self.output.append(self.nump.copy())
        self.clear()
        self.main.show()
        self.main.p_inputed()
    
    
    def back_clicked(self):
        if self.nump.m != 0:
            self.nump.m -= 1
            self.nump.pop()
            self.numq = self.nump[self.nump.m]
            self.res.setText(str(self.nump))
            self.qm.setText(str(self.numq.m))
            self.qn.setText(str(self.numq.n))
            self.ui.index.setText("Введите коэффициент "+str(self.nump.m))
    
    
    def forward_clicked(self):
        self.nump[self.nump.m] = self.numq.copy()
        self.numq = Rational()
        self.nump.append(self.numq)
        self.nump.m += 1
        self.res.setText(str(self.nump))
        self.qm.setText("0")
        self.qn.setText("1")
        self.ui.index.setText("Введите коэффициент "+str(self.nump.m))
    
    
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
        self.numq.m.read_from_str(text)
        self.nump[self.nump.m] = self.numq
        self.res.setText(str(self.nump))
    
    
    def qn_changed(self):
        text = self.qn.text()
        text = self.__clear_text(text)
        if text == '0':
            text = '1'        
        self.qn.setText(text)
        self.numq.n.read_from_str(text)
        self.nump[self.nump.m] = self.numq
        self.res.setText(str(self.nump))
