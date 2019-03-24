# -*- coding: utf-8 -*-

# Form implementation generated from reading ui file '.\Q_modules_Window.ui'
#
# Created by: PyQt5 UI code generator 5.11.3
#
# WARNING! All changes made in this file will be lost!

from PyQt5 import QtCore, QtGui, QtWidgets

class Ui_NModulesWindowMain(object):
    def setupUi(self, NModulesWindowMain):
        NModulesWindowMain.setObjectName("NModulesWindowMain")
        NModulesWindowMain.resize(403, 311)
        NModulesWindowMain.setStyleSheet("background-color: white")
        self.pushButton_main = QtWidgets.QPushButton(NModulesWindowMain)
        self.pushButton_main.setGeometry(QtCore.QRect(0, 0, 101, 31))
        self.pushButton_main.setStyleSheet("background-color: #E80C94; color: white")
        self.pushButton_main.setObjectName("pushButton_main")
        self.pushButton = QtWidgets.QPushButton(NModulesWindowMain)
        self.pushButton.setGeometry(QtCore.QRect(80, 110, 241, 51))
        font = QtGui.QFont()
        font.setPointSize(9)
        self.pushButton.setFont(font)
        self.pushButton.setStyleSheet("background-color: #E80C94; color: white")
        self.pushButton.setObjectName("pushButton")
        self.pushButton_2 = QtWidgets.QPushButton(NModulesWindowMain)
        self.pushButton_2.setGeometry(QtCore.QRect(80, 190, 241, 51))
        font = QtGui.QFont()
        font.setPointSize(9)
        self.pushButton_2.setFont(font)
        self.pushButton_2.setStyleSheet("background-color: #E80C94; color: white")
        self.pushButton_2.setObjectName("pushButton_2")
        self.label = QtWidgets.QLabel(NModulesWindowMain)
        self.label.setGeometry(QtCore.QRect(0, 50, 401, 41))
        font = QtGui.QFont()
        font.setPointSize(14)
        font.setBold(True)
        font.setWeight(75)
        self.label.setFont(font)
        self.label.setStyleSheet("color: #E80C94")
        self.label.setAlignment(QtCore.Qt.AlignCenter)
        self.label.setObjectName("label")

        self.retranslateUi(NModulesWindowMain)
        QtCore.QMetaObject.connectSlotsByName(NModulesWindowMain)

    def retranslateUi(self, NModulesWindowMain):
        _translate = QtCore.QCoreApplication.translate
        NModulesWindowMain.setWindowTitle(_translate("NModulesWindowMain", "Модули N"))
        self.pushButton_main.setText(_translate("NModulesWindowMain", "Главное меню"))
        self.pushButton.setText(_translate("NModulesWindowMain", "Основные бинарные операции"))
        self.pushButton_2.setText(_translate("NModulesWindowMain", "Прочие действия"))
        self.label.setText(_translate("NModulesWindowMain", "Рациональные числа"))


if __name__ == "__main__":
    import sys
    app = QtWidgets.QApplication(sys.argv)
    NModulesWindowMain = QtWidgets.QDialog()
    ui = Ui_NModulesWindowMain()
    ui.setupUi(NModulesWindowMain)
    NModulesWindowMain.show()
    sys.exit(app.exec_())

