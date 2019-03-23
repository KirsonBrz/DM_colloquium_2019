# -*- coding: utf-8 -*-

# Form implementation generated from reading ui file '.\N_modules_Window.ui'
#
# Created by: PyQt5 UI code generator 5.11.3
#
# WARNING! All changes made in this file will be lost!

from PyQt5 import QtCore, QtGui, QtWidgets

class Ui_N_modules(object):
    def setupUi(self, N_modules):
        N_modules.setObjectName("N_modules")
        N_modules.resize(421, 366)
        N_modules.setStyleSheet("color: #FFB037; background-color: white")
        self.frame = QtWidgets.QFrame(N_modules)
        self.frame.setGeometry(QtCore.QRect(0, 30, 421, 331))
        font = QtGui.QFont()
        font.setPointSize(10)
        self.frame.setFont(font)
        self.frame.setFrameShape(QtWidgets.QFrame.StyledPanel)
        self.frame.setFrameShadow(QtWidgets.QFrame.Raised)
        self.frame.setObjectName("frame")
        self.label = QtWidgets.QLabel(self.frame)
        self.label.setGeometry(QtCore.QRect(4, 20, 411, 41))
        font = QtGui.QFont()
        font.setPointSize(14)
        self.label.setFont(font)
        self.label.setAlignment(QtCore.Qt.AlignCenter)
        self.label.setObjectName("label")
        self.lineEdit = QtWidgets.QLineEdit(self.frame)
        self.lineEdit.setGeometry(QtCore.QRect(20, 80, 171, 22))
        self.lineEdit.setLayoutDirection(QtCore.Qt.LeftToRight)
        self.lineEdit.setAlignment(QtCore.Qt.AlignRight|QtCore.Qt.AlignTrailing|QtCore.Qt.AlignVCenter)
        self.lineEdit.setObjectName("lineEdit")
        self.lineEdit_2 = QtWidgets.QLineEdit(self.frame)
        self.lineEdit_2.setGeometry(QtCore.QRect(210, 80, 171, 22))
        self.lineEdit_2.setAlignment(QtCore.Qt.AlignRight|QtCore.Qt.AlignTrailing|QtCore.Qt.AlignVCenter)
        self.lineEdit_2.setObjectName("lineEdit_2")
        self.label_2 = QtWidgets.QLabel(self.frame)
        self.label_2.setGeometry(QtCore.QRect(20, 130, 55, 16))
        self.label_2.setObjectName("label_2")
        self.label_3 = QtWidgets.QLabel(self.frame)
        self.label_3.setGeometry(QtCore.QRect(20, 150, 71, 16))
        self.label_3.setObjectName("label_3")
        self.label_4 = QtWidgets.QLabel(self.frame)
        self.label_4.setGeometry(QtCore.QRect(20, 170, 101, 16))
        self.label_4.setObjectName("label_4")
        self.label_5 = QtWidgets.QLabel(self.frame)
        self.label_5.setGeometry(QtCore.QRect(20, 190, 131, 16))
        self.label_5.setObjectName("label_5")
        self.label_6 = QtWidgets.QLabel(self.frame)
        self.label_6.setGeometry(QtCore.QRect(20, 210, 131, 16))
        self.label_6.setObjectName("label_6")
        self.label_7 = QtWidgets.QLabel(self.frame)
        self.label_7.setGeometry(QtCore.QRect(20, 230, 55, 16))
        self.label_7.setObjectName("label_7")
        self.label_8 = QtWidgets.QLabel(self.frame)
        self.label_8.setGeometry(QtCore.QRect(20, 250, 55, 16))
        font = QtGui.QFont()
        font.setPointSize(8)
        self.label_8.setFont(font)
        self.label_8.setObjectName("label_8")
        self.pushButton_main = QtWidgets.QPushButton(N_modules)
        self.pushButton_main.setGeometry(QtCore.QRect(0, 0, 101, 31))
        self.pushButton_main.setStyleSheet("color: white; background-color: #FFB037")
        self.pushButton_main.setObjectName("pushButton_main")

        self.retranslateUi(N_modules)
        QtCore.QMetaObject.connectSlotsByName(N_modules)

    def retranslateUi(self, N_modules):
        _translate = QtCore.QCoreApplication.translate
        N_modules.setWindowTitle(_translate("N_modules", "Модули N"))
        self.label.setText(_translate("N_modules", "Введите 2 натуральных числа:"))
        self.lineEdit.setText(_translate("N_modules", "0"))
        self.lineEdit_2.setText(_translate("N_modules", "0"))
        self.label_2.setText(_translate("N_modules", "Сумма:"))
        self.label_3.setText(_translate("N_modules", "Разность"))
        self.label_4.setText(_translate("N_modules", "Произведение:"))
        self.label_5.setText(_translate("N_modules", "Частное от деления:"))
        self.label_6.setText(_translate("N_modules", "Остаток от деления:"))
        self.label_7.setText(_translate("N_modules", "НОД:"))
        self.label_8.setText(_translate("N_modules", "НОК:"))
        self.pushButton_main.setText(_translate("N_modules", "Главное меню"))


if __name__ == "__main__":
    import sys
    app = QtWidgets.QApplication(sys.argv)
    N_modules = QtWidgets.QDialog()
    ui = Ui_N_modules()
    ui.setupUi(N_modules)
    N_modules.show()
    sys.exit(app.exec_())

