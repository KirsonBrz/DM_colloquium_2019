# -*- coding: utf-8 -*-

# Form implementation generated from reading ui file '.\P_modules_Window.ui'
#
# Created by: PyQt5 UI code generator 5.11.3
#
# WARNING! All changes made in this file will be lost!

from PyQt5 import QtCore, QtGui, QtWidgets

class Ui_PModulesWindowMain(object):
    def setupUi(self, PModulesWindowMain):
        PModulesWindowMain.setObjectName("PModulesWindowMain")
        PModulesWindowMain.resize(403, 352)
        PModulesWindowMain.setStyleSheet("background-color: white")
        self.pushButton_main = QtWidgets.QPushButton(PModulesWindowMain)
        self.pushButton_main.setGeometry(QtCore.QRect(0, 0, 101, 31))
        self.pushButton_main.setStyleSheet("color: white; background-color: #0D66FF;")
        self.pushButton_main.setObjectName("pushButton_main")
        self.pushButton_bin = QtWidgets.QPushButton(PModulesWindowMain)
        self.pushButton_bin.setGeometry(QtCore.QRect(80, 110, 241, 51))
        font = QtGui.QFont()
        font.setPointSize(9)
        self.pushButton_bin.setFont(font)
        self.pushButton_bin.setStyleSheet("color: white; background-color: #0D66FF;")
        self.pushButton_bin.setObjectName("pushButton_bin")
        self.pushButton_un = QtWidgets.QPushButton(PModulesWindowMain)
        self.pushButton_un.setGeometry(QtCore.QRect(80, 180, 241, 51))
        font = QtGui.QFont()
        font.setPointSize(9)
        self.pushButton_un.setFont(font)
        self.pushButton_un.setStyleSheet("color: white; background-color: #0D66FF;")
        self.pushButton_un.setObjectName("pushButton_un")
        self.label = QtWidgets.QLabel(PModulesWindowMain)
        self.label.setGeometry(QtCore.QRect(0, 50, 401, 41))
        font = QtGui.QFont()
        font.setPointSize(14)
        font.setBold(True)
        font.setWeight(75)
        self.label.setFont(font)
        self.label.setStyleSheet("color: #0D66FF;")
        self.label.setAlignment(QtCore.Qt.AlignCenter)
        self.label.setObjectName("label")
        self.pushButton_other = QtWidgets.QPushButton(PModulesWindowMain)
        self.pushButton_other.setGeometry(QtCore.QRect(80, 250, 241, 51))
        font = QtGui.QFont()
        font.setPointSize(9)
        self.pushButton_other.setFont(font)
        self.pushButton_other.setStyleSheet("color: white; background-color: #0D66FF;")
        self.pushButton_other.setObjectName("pushButton_other")

        self.retranslateUi(PModulesWindowMain)
        QtCore.QMetaObject.connectSlotsByName(PModulesWindowMain)

    def retranslateUi(self, PModulesWindowMain):
        _translate = QtCore.QCoreApplication.translate
        PModulesWindowMain.setWindowTitle(_translate("PModulesWindowMain", "Модули P"))
        self.pushButton_main.setText(_translate("PModulesWindowMain", "Главное меню"))
        self.pushButton_bin.setText(_translate("PModulesWindowMain", "Основные бинарные операции"))
        self.pushButton_un.setText(_translate("PModulesWindowMain", "Преобразования многочлена"))
        self.label.setText(_translate("PModulesWindowMain", "Многочлены"))
        self.pushButton_other.setText(_translate("PModulesWindowMain", "Прочие действия"))


if __name__ == "__main__":
    import sys
    app = QtWidgets.QApplication(sys.argv)
    PModulesWindowMain = QtWidgets.QDialog()
    ui = Ui_PModulesWindowMain()
    ui.setupUi(PModulesWindowMain)
    PModulesWindowMain.show()
    sys.exit(app.exec_())

