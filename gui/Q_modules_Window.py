# -*- coding: utf-8 -*-

# Form implementation generated from reading ui file '.\Q_modules_Window.ui'
#
# Created by: PyQt5 UI code generator 5.11.3
#
# WARNING! All changes made in this file will be lost!

from PyQt5 import QtCore, QtGui, QtWidgets

class Ui_QModulesWindowMain(object):
    def setupUi(self, QModulesWindowMain):
        QModulesWindowMain.setObjectName("QModulesWindowMain")
        QModulesWindowMain.resize(403, 311)
        QModulesWindowMain.setStyleSheet("background-color: white")
        self.pushButton_main = QtWidgets.QPushButton(QModulesWindowMain)
        self.pushButton_main.setGeometry(QtCore.QRect(0, 0, 101, 31))
        self.pushButton_main.setStyleSheet("background-color: #E80C94; color: white")
        self.pushButton_main.setObjectName("pushButton_main")
        self.pushButton_bin = QtWidgets.QPushButton(QModulesWindowMain)
        self.pushButton_bin.setGeometry(QtCore.QRect(80, 110, 241, 51))
        font = QtGui.QFont()
        font.setPointSize(9)
        self.pushButton_bin.setFont(font)
        self.pushButton_bin.setStyleSheet("background-color: #E80C94; color: white")
        self.pushButton_bin.setObjectName("pushButton_bin")
        self.pushButton_other = QtWidgets.QPushButton(QModulesWindowMain)
        self.pushButton_other.setGeometry(QtCore.QRect(80, 190, 241, 51))
        font = QtGui.QFont()
        font.setPointSize(9)
        self.pushButton_other.setFont(font)
        self.pushButton_other.setStyleSheet("background-color: #E80C94; color: white")
        self.pushButton_other.setObjectName("pushButton_other")
        self.label = QtWidgets.QLabel(QModulesWindowMain)
        self.label.setGeometry(QtCore.QRect(0, 50, 401, 41))
        font = QtGui.QFont()
        font.setPointSize(14)
        font.setBold(True)
        font.setWeight(75)
        self.label.setFont(font)
        self.label.setStyleSheet("color: #E80C94")
        self.label.setAlignment(QtCore.Qt.AlignCenter)
        self.label.setObjectName("label")

        self.retranslateUi(QModulesWindowMain)
        QtCore.QMetaObject.connectSlotsByName(QModulesWindowMain)

    def retranslateUi(self, QModulesWindowMain):
        _translate = QtCore.QCoreApplication.translate
        QModulesWindowMain.setWindowTitle(_translate("QModulesWindowMain", "Модули N"))
        self.pushButton_main.setText(_translate("QModulesWindowMain", "Главное меню"))
        self.pushButton_bin.setText(_translate("QModulesWindowMain", "Основные бинарные операции"))
        self.pushButton_other.setText(_translate("QModulesWindowMain", "Прочие действия"))
        self.label.setText(_translate("QModulesWindowMain", "Рациональные числа"))


if __name__ == "__main__":
    import sys
    app = QtWidgets.QApplication(sys.argv)
    QModulesWindowMain = QtWidgets.QDialog()
    ui = Ui_QModulesWindowMain()
    ui.setupUi(QModulesWindowMain)
    QModulesWindowMain.show()
    sys.exit(app.exec_())

