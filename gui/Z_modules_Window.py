# -*- coding: utf-8 -*-

# Form implementation generated from reading ui file '.\Z_modules_Window.ui'
#
# Created by: PyQt5 UI code generator 5.11.3
#
# WARNING! All changes made in this file will be lost!

from PyQt5 import QtCore, QtGui, QtWidgets

class Ui_ZModulesWindowMain(object):
    def setupUi(self, ZModulesWindowMain):
        ZModulesWindowMain.setObjectName("ZModulesWindowMain")
        ZModulesWindowMain.resize(403, 314)
        sizePolicy = QtWidgets.QSizePolicy(QtWidgets.QSizePolicy.Fixed, QtWidgets.QSizePolicy.Fixed)
        sizePolicy.setHorizontalStretch(0)
        sizePolicy.setVerticalStretch(0)
        sizePolicy.setHeightForWidth(ZModulesWindowMain.sizePolicy().hasHeightForWidth())
        ZModulesWindowMain.setSizePolicy(sizePolicy)
        ZModulesWindowMain.setStyleSheet("background-color: white")
        self.pushButton_main = QtWidgets.QPushButton(ZModulesWindowMain)
        self.pushButton_main.setGeometry(QtCore.QRect(0, 0, 101, 31))
        self.pushButton_main.setStyleSheet("background-color: #2EE800;")
        self.pushButton_main.setObjectName("pushButton_main")
        self.pushButton_bin = QtWidgets.QPushButton(ZModulesWindowMain)
        self.pushButton_bin.setGeometry(QtCore.QRect(80, 110, 241, 51))
        self.pushButton_bin.setStyleSheet("background-color: #2EE800;")
        self.pushButton_bin.setObjectName("pushButton_bin")
        self.pushButton_other = QtWidgets.QPushButton(ZModulesWindowMain)
        self.pushButton_other.setGeometry(QtCore.QRect(80, 190, 241, 51))
        self.pushButton_other.setStyleSheet("background-color: #2EE800;")
        self.pushButton_other.setObjectName("pushButton_other")
        self.label = QtWidgets.QLabel(ZModulesWindowMain)
        self.label.setGeometry(QtCore.QRect(0, 50, 401, 41))
        font = QtGui.QFont()
        font.setPointSize(14)
        font.setBold(True)
        font.setWeight(75)
        self.label.setFont(font)
        self.label.setStyleSheet("color: #2EE800")
        self.label.setAlignment(QtCore.Qt.AlignCenter)
        self.label.setObjectName("label")

        self.retranslateUi(ZModulesWindowMain)
        QtCore.QMetaObject.connectSlotsByName(ZModulesWindowMain)

    def retranslateUi(self, ZModulesWindowMain):
        _translate = QtCore.QCoreApplication.translate
        ZModulesWindowMain.setWindowTitle(_translate("ZModulesWindowMain", "Модули N"))
        self.pushButton_main.setText(_translate("ZModulesWindowMain", "Главное меню"))
        self.pushButton_bin.setText(_translate("ZModulesWindowMain", "Основные бинарные операции"))
        self.pushButton_other.setText(_translate("ZModulesWindowMain", "Прочие действия"))
        self.label.setText(_translate("ZModulesWindowMain", "Целые числа"))


if __name__ == "__main__":
    import sys
    app = QtWidgets.QApplication(sys.argv)
    ZModulesWindowMain = QtWidgets.QDialog()
    ui = Ui_ZModulesWindowMain()
    ui.setupUi(ZModulesWindowMain)
    ZModulesWindowMain.show()
    sys.exit(app.exec_())

