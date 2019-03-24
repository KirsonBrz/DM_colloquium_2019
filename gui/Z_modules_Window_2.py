# -*- coding: utf-8 -*-

# Form implementation generated from reading ui file '.\Z_modules_Window_2.ui'
#
# Created by: PyQt5 UI code generator 5.11.3
#
# WARNING! All changes made in this file will be lost!

from PyQt5 import QtCore, QtGui, QtWidgets

class Ui_ZModulesWindow2(object):
    def setupUi(self, ZModulesWindow2):
        ZModulesWindow2.setObjectName("ZModulesWindow2")
        ZModulesWindow2.resize(406, 313)
        self.frame = QtWidgets.QFrame(ZModulesWindow2)
        self.frame.setGeometry(QtCore.QRect(0, 20, 401, 291))
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
        self.operations = QtWidgets.QComboBox(self.frame)
        self.operations.setGeometry(QtCore.QRect(70, 160, 281, 31))
        sizePolicy = QtWidgets.QSizePolicy(QtWidgets.QSizePolicy.Fixed, QtWidgets.QSizePolicy.Fixed)
        sizePolicy.setHorizontalStretch(0)
        sizePolicy.setVerticalStretch(0)
        sizePolicy.setHeightForWidth(self.operations.sizePolicy().hasHeightForWidth())
        self.operations.setSizePolicy(sizePolicy)
        self.operations.setStyleSheet("background-color: #2EE800;")
        self.operations.setObjectName("operations")
        self.operations.addItem("")
        self.operations.addItem("")
        self.operations.addItem("")
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
        self.result = QtWidgets.QLabel(self.frame)
        self.result.setGeometry(QtCore.QRect(10, 240, 371, 31))
        self.result.setFocusPolicy(QtCore.Qt.WheelFocus)
        self.result.setLayoutDirection(QtCore.Qt.LeftToRight)
        self.result.setStyleSheet("background-color: #2EE800;")
        self.result.setFrameShape(QtWidgets.QFrame.Box)
        self.result.setAlignment(QtCore.Qt.AlignRight|QtCore.Qt.AlignTrailing|QtCore.Qt.AlignVCenter)
        self.result.setObjectName("result")
        self.line_n = QtWidgets.QLineEdit(self.frame)
        self.line_n.setGeometry(QtCore.QRect(20, 60, 351, 31))
        self.line_n.setStyleSheet("background-color: #2EE800;")
        self.line_n.setInputMask("")
        self.line_n.setAlignment(QtCore.Qt.AlignRight|QtCore.Qt.AlignTrailing|QtCore.Qt.AlignVCenter)
        self.line_n.setObjectName("line_n")
        self.pushButton_return = QtWidgets.QToolButton(ZModulesWindow2)
        self.pushButton_return.setGeometry(QtCore.QRect(0, 0, 27, 22))
        self.pushButton_return.setStyleSheet("background-color: #2EE800;")
        self.pushButton_return.setObjectName("pushButton_return")

        self.retranslateUi(ZModulesWindow2)
        QtCore.QMetaObject.connectSlotsByName(ZModulesWindow2)

    def retranslateUi(self, ZModulesWindow2):
        _translate = QtCore.QCoreApplication.translate
        ZModulesWindow2.setWindowTitle(_translate("ZModulesWindow2", "Dialog"))
        self.label_3.setText(_translate("ZModulesWindow2", "Введите целое число:"))
        self.operations.setItemText(0, _translate("ZModulesWindow2", "Абсолютная величина"))
        self.operations.setItemText(1, _translate("ZModulesWindow2", "Сравнение с нулем"))
        self.operations.setItemText(2, _translate("ZModulesWindow2", "Умножение на (-1)"))
        self.label.setText(_translate("ZModulesWindow2", "Выберите действие:"))
        self.label_2.setText(_translate("ZModulesWindow2", "Результат:"))
        self.result.setText(_translate("ZModulesWindow2", "0"))
        self.line_n.setText(_translate("ZModulesWindow2", "0"))
        self.pushButton_return.setText(_translate("ZModulesWindow2", "<-"))


if __name__ == "__main__":
    import sys
    app = QtWidgets.QApplication(sys.argv)
    ZModulesWindow2 = QtWidgets.QDialog()
    ui = Ui_ZModulesWindow2()
    ui.setupUi(ZModulesWindow2)
    ZModulesWindow2.show()
    sys.exit(app.exec_())

