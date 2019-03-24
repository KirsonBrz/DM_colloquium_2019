# -*- coding: utf-8 -*-

# Form implementation generated from reading ui file '.\Z_modules_Window_1.ui'
#
# Created by: PyQt5 UI code generator 5.11.3
#
# WARNING! All changes made in this file will be lost!

from PyQt5 import QtCore, QtGui, QtWidgets

class Ui_ZModulesWindowMain(object):
    def setupUi(self, ZModulesWindowMain):
        ZModulesWindowMain.setObjectName("ZModulesWindowMain")
        ZModulesWindowMain.resize(400, 300)
        self.frame = QtWidgets.QFrame(ZModulesWindowMain)
        self.frame.setGeometry(QtCore.QRect(0, 0, 401, 291))
        font = QtGui.QFont()
        font.setPointSize(10)
        self.frame.setFont(font)
        self.frame.setStyleSheet("background-color: white")
        self.frame.setFrameShape(QtWidgets.QFrame.StyledPanel)
        self.frame.setFrameShadow(QtWidgets.QFrame.Raised)
        self.frame.setObjectName("frame")
        self.label_3 = QtWidgets.QLabel(self.frame)
        self.label_3.setGeometry(QtCore.QRect(10, 10, 391, 41))
        font = QtGui.QFont()
        font.setPointSize(14)
        self.label_3.setFont(font)
        self.label_3.setStyleSheet("")
        self.label_3.setAlignment(QtCore.Qt.AlignCenter)
        self.label_3.setObjectName("label_3")
        self.comboBox = QtWidgets.QComboBox(self.frame)
        self.comboBox.setGeometry(QtCore.QRect(70, 160, 281, 31))
        self.comboBox.setStyleSheet("background-color: #2EE800;")
        self.comboBox.setObjectName("comboBox")
        self.comboBox.addItem("")
        self.comboBox.addItem("")
        self.comboBox.addItem("")
        self.label = QtWidgets.QLabel(self.frame)
        self.label.setGeometry(QtCore.QRect(10, 110, 371, 31))
        font = QtGui.QFont()
        font.setPointSize(14)
        self.label.setFont(font)
        self.label.setStyleSheet("background-color: white")
        self.label.setAlignment(QtCore.Qt.AlignCenter)
        self.label.setObjectName("label")
        self.label_2 = QtWidgets.QLabel(self.frame)
        self.label_2.setGeometry(QtCore.QRect(10, 200, 381, 31))
        font = QtGui.QFont()
        font.setPointSize(14)
        self.label_2.setFont(font)
        self.label_2.setAlignment(QtCore.Qt.AlignCenter)
        self.label_2.setObjectName("label_2")
        self.label_4 = QtWidgets.QLabel(self.frame)
        self.label_4.setGeometry(QtCore.QRect(10, 240, 371, 31))
        self.label_4.setFocusPolicy(QtCore.Qt.WheelFocus)
        self.label_4.setLayoutDirection(QtCore.Qt.LeftToRight)
        self.label_4.setStyleSheet("background-color: #2EE800;")
        self.label_4.setFrameShape(QtWidgets.QFrame.Box)
        self.label_4.setAlignment(QtCore.Qt.AlignRight|QtCore.Qt.AlignTrailing|QtCore.Qt.AlignVCenter)
        self.label_4.setObjectName("label_4")
        self.label_5 = QtWidgets.QLabel(self.frame)
        self.label_5.setGeometry(QtCore.QRect(30, 60, 351, 31))
        self.label_5.setFocusPolicy(QtCore.Qt.WheelFocus)
        self.label_5.setLayoutDirection(QtCore.Qt.LeftToRight)
        self.label_5.setStyleSheet("background-color: #2EE800;")
        self.label_5.setFrameShape(QtWidgets.QFrame.Box)
        self.label_5.setAlignment(QtCore.Qt.AlignRight|QtCore.Qt.AlignTrailing|QtCore.Qt.AlignVCenter)
        self.label_5.setObjectName("label_5")

        self.retranslateUi(ZModulesWindowMain)
        QtCore.QMetaObject.connectSlotsByName(ZModulesWindowMain)

    def retranslateUi(self, ZModulesWindowMain):
        _translate = QtCore.QCoreApplication.translate
        ZModulesWindowMain.setWindowTitle(_translate("ZModulesWindowMain", "Dialog"))
        self.label_3.setText(_translate("ZModulesWindowMain", "Введите целое число:"))
        self.comboBox.setItemText(0, _translate("ZModulesWindowMain", "Абсолютная величина"))
        self.comboBox.setItemText(1, _translate("ZModulesWindowMain", "Сравнение с нулем"))
        self.comboBox.setItemText(2, _translate("ZModulesWindowMain", "Умножение на (-1)"))
        self.label.setText(_translate("ZModulesWindowMain", "Выберите действие:"))
        self.label_2.setText(_translate("ZModulesWindowMain", "Результат:"))
        self.label_4.setText(_translate("ZModulesWindowMain", "0"))
        self.label_5.setText(_translate("ZModulesWindowMain", "0"))


if __name__ == "__main__":
    import sys
    app = QtWidgets.QApplication(sys.argv)
    ZModulesWindowMain = QtWidgets.QDialog()
    ui = Ui_ZModulesWindowMain()
    ui.setupUi(ZModulesWindowMain)
    ZModulesWindowMain.show()
    sys.exit(app.exec_())

