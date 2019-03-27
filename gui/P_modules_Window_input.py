# -*- coding: utf-8 -*-

# Form implementation generated from reading ui file '.\P_modules_Window_input.ui'
#
# Created by: PyQt5 UI code generator 5.11.3
#
# WARNING! All changes made in this file will be lost!

from PyQt5 import QtCore, QtGui, QtWidgets

class Ui_Polinomial_Input(object):
    def setupUi(self, Polinomial_Input):
        Polinomial_Input.setObjectName("Polinomial_Input")
        Polinomial_Input.resize(400, 308)
        self.PModulesWindowInput = QtWidgets.QFrame(Polinomial_Input)
        self.PModulesWindowInput.setGeometry(QtCore.QRect(0, 0, 401, 311))
        font = QtGui.QFont()
        font.setPointSize(10)
        self.PModulesWindowInput.setFont(font)
        self.PModulesWindowInput.setStyleSheet("background-color: white")
        self.PModulesWindowInput.setFrameShape(QtWidgets.QFrame.StyledPanel)
        self.PModulesWindowInput.setFrameShadow(QtWidgets.QFrame.Raised)
        self.PModulesWindowInput.setObjectName("PModulesWindowInput")
        self.label_3 = QtWidgets.QLabel(self.PModulesWindowInput)
        self.label_3.setGeometry(QtCore.QRect(10, 10, 391, 41))
        font = QtGui.QFont()
        font.setPointSize(16)
        font.setBold(True)
        font.setWeight(75)
        self.label_3.setFont(font)
        self.label_3.setStyleSheet("color: #0D66FF")
        self.label_3.setAlignment(QtCore.Qt.AlignCenter)
        self.label_3.setObjectName("label_3")
        self.label_2 = QtWidgets.QLabel(self.PModulesWindowInput)
        self.label_2.setGeometry(QtCore.QRect(10, 60, 381, 31))
        font = QtGui.QFont()
        font.setPointSize(14)
        self.label_2.setFont(font)
        self.label_2.setAlignment(QtCore.Qt.AlignCenter)
        self.label_2.setObjectName("label_2")
        self.result = QtWidgets.QLabel(self.PModulesWindowInput)
        self.result.setGeometry(QtCore.QRect(10, 100, 371, 31))
        self.result.setFocusPolicy(QtCore.Qt.WheelFocus)
        self.result.setLayoutDirection(QtCore.Qt.LeftToRight)
        self.result.setStyleSheet("color: white; background-color: #0D66FF;")
        self.result.setFrameShape(QtWidgets.QFrame.Box)
        self.result.setAlignment(QtCore.Qt.AlignRight|QtCore.Qt.AlignTrailing|QtCore.Qt.AlignVCenter)
        self.result.setObjectName("result")
        self.line_qm = QtWidgets.QLineEdit(self.PModulesWindowInput)
        self.line_qm.setGeometry(QtCore.QRect(50, 180, 291, 31))
        self.line_qm.setStyleSheet("color: white; background-color: #0D66FF;")
        self.line_qm.setAlignment(QtCore.Qt.AlignRight|QtCore.Qt.AlignTrailing|QtCore.Qt.AlignVCenter)
        self.line_qm.setObjectName("line_qm")
        self.line_qn = QtWidgets.QLineEdit(self.PModulesWindowInput)
        self.line_qn.setGeometry(QtCore.QRect(50, 220, 291, 31))
        self.line_qn.setStyleSheet("color: white; background-color: #0D66FF;")
        self.line_qn.setAlignment(QtCore.Qt.AlignRight|QtCore.Qt.AlignTrailing|QtCore.Qt.AlignVCenter)
        self.line_qn.setObjectName("line_qn")
        self.index = QtWidgets.QLabel(self.PModulesWindowInput)
        self.index.setGeometry(QtCore.QRect(10, 140, 381, 31))
        font = QtGui.QFont()
        font.setPointSize(14)
        self.index.setFont(font)
        self.index.setAlignment(QtCore.Qt.AlignCenter)
        self.index.setObjectName("index")
        self.pushButton_back = QtWidgets.QPushButton(self.PModulesWindowInput)
        self.pushButton_back.setGeometry(QtCore.QRect(200, 270, 93, 28))
        self.pushButton_back.setStyleSheet("color: white; background-color: #0D66FF;")
        self.pushButton_back.setObjectName("pushButton_back")
        self.pushButton_forward = QtWidgets.QPushButton(self.PModulesWindowInput)
        self.pushButton_forward.setGeometry(QtCore.QRect(300, 270, 93, 28))
        self.pushButton_forward.setStyleSheet("color: white; background-color: #0D66FF;")
        self.pushButton_forward.setObjectName("pushButton_forward")
        self.pushButton_finish = QtWidgets.QPushButton(self.PModulesWindowInput)
        self.pushButton_finish.setGeometry(QtCore.QRect(10, 270, 93, 28))
        self.pushButton_finish.setStyleSheet("color: white; background-color: #0D66FF;")
        self.pushButton_finish.setObjectName("pushButton_finish")

        self.retranslateUi(Polinomial_Input)
        QtCore.QMetaObject.connectSlotsByName(Polinomial_Input)

    def retranslateUi(self, Polinomial_Input):
        _translate = QtCore.QCoreApplication.translate
        Polinomial_Input.setWindowTitle(_translate("Polinomial_Input", "Dialog"))
        self.label_3.setText(_translate("Polinomial_Input", "Ввод многочлена"))
        self.label_2.setText(_translate("Polinomial_Input", "Текущий многочлен:"))
        self.result.setText(_translate("Polinomial_Input", "0"))
        self.line_qm.setText(_translate("Polinomial_Input", "0"))
        self.line_qn.setText(_translate("Polinomial_Input", "1"))
        self.index.setText(_translate("Polinomial_Input", "Введите коэффициент 0"))
        self.pushButton_back.setText(_translate("Polinomial_Input", "Назад"))
        self.pushButton_forward.setText(_translate("Polinomial_Input", "Далее"))
        self.pushButton_finish.setText(_translate("Polinomial_Input", "Закончить"))


if __name__ == "__main__":
    import sys
    app = QtWidgets.QApplication(sys.argv)
    Polinomial_Input = QtWidgets.QDialog()
    ui = Ui_Polinomial_Input()
    ui.setupUi(Polinomial_Input)
    Polinomial_Input.show()
    sys.exit(app.exec_())

