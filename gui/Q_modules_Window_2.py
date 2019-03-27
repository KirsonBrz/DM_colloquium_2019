# -*- coding: utf-8 -*-

# Form implementation generated from reading ui file '.\Q_modules_Window_2.ui'
#
# Created by: PyQt5 UI code generator 5.11.3
#
# WARNING! All changes made in this file will be lost!

from PyQt5 import QtCore, QtGui, QtWidgets

class Ui_QModulesWindow2(object):
    def setupUi(self, QModulesWindow2):
        QModulesWindow2.setObjectName("QModulesWindow2")
        QModulesWindow2.resize(400, 311)
        QModulesWindow2.setStyleSheet("background-color: white")
        self.frame = QtWidgets.QFrame(QModulesWindow2)
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
        self.line_qm = QtWidgets.QLineEdit(self.frame)
        self.line_qm.setGeometry(QtCore.QRect(80, 50, 241, 22))
        self.line_qm.setLayoutDirection(QtCore.Qt.LeftToRight)
        self.line_qm.setStyleSheet("color: white; background-color: #E80C94;")
        self.line_qm.setAlignment(QtCore.Qt.AlignRight|QtCore.Qt.AlignTrailing|QtCore.Qt.AlignVCenter)
        self.line_qm.setObjectName("line_qm")
        self.operation = QtWidgets.QComboBox(self.frame)
        self.operation.setGeometry(QtCore.QRect(70, 160, 281, 31))
        self.operation.setStyleSheet("color: white; background-color: #E80C94;")
        self.operation.setObjectName("operation")
        self.operation.addItem("")
        self.operation.addItem("")
        self.operation.addItem("")
        self.label = QtWidgets.QLabel(self.frame)
        self.label.setGeometry(QtCore.QRect(10, 110, 371, 31))
        font = QtGui.QFont()
        font.setPointSize(14)
        self.label.setFont(font)
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
        self.result.setStyleSheet("color: white; background-color: #E80C94;")
        self.result.setFrameShape(QtWidgets.QFrame.Box)
        self.result.setAlignment(QtCore.Qt.AlignRight|QtCore.Qt.AlignTrailing|QtCore.Qt.AlignVCenter)
        self.result.setObjectName("result")
        self.line_qn = QtWidgets.QLineEdit(self.frame)
        self.line_qn.setGeometry(QtCore.QRect(80, 80, 241, 22))
        self.line_qn.setStyleSheet("color: white; background-color: #E80C94;")
        self.line_qn.setAlignment(QtCore.Qt.AlignRight|QtCore.Qt.AlignTrailing|QtCore.Qt.AlignVCenter)
        self.line_qn.setObjectName("line_qn")
        self.pushButton_return = QtWidgets.QToolButton(QModulesWindow2)
        self.pushButton_return.setGeometry(QtCore.QRect(0, 0, 27, 22))
        font = QtGui.QFont()
        font.setPointSize(8)
        self.pushButton_return.setFont(font)
        self.pushButton_return.setStyleSheet("background-color:#E80C94; color: white")
        self.pushButton_return.setObjectName("pushButton_return")

        self.retranslateUi(QModulesWindow2)
        QtCore.QMetaObject.connectSlotsByName(QModulesWindow2)

    def retranslateUi(self, QModulesWindow2):
        _translate = QtCore.QCoreApplication.translate
        QModulesWindow2.setWindowTitle(_translate("QModulesWindow2", "Основные бинарные операции"))
        self.label_3.setText(_translate("QModulesWindow2", "Введите рациональное число:"))
        self.line_qm.setText(_translate("QModulesWindow2", "0"))
        self.operation.setItemText(0, _translate("QModulesWindow2", "Сокращение"))
        self.operation.setItemText(1, _translate("QModulesWindow2", "Проверка на целое"))
        self.operation.setItemText(2, _translate("QModulesWindow2", "Преобразование в целое"))
        self.label.setText(_translate("QModulesWindow2", "Выберите действие:"))
        self.label_2.setText(_translate("QModulesWindow2", "Результат:"))
        self.result.setText(_translate("QModulesWindow2", "0"))
        self.line_qn.setText(_translate("QModulesWindow2", "1"))
        self.pushButton_return.setText(_translate("QModulesWindow2", "<-"))


if __name__ == "__main__":
    import sys
    app = QtWidgets.QApplication(sys.argv)
    QModulesWindow2 = QtWidgets.QDialog()
    ui = Ui_QModulesWindow2()
    ui.setupUi(QModulesWindow2)
    QModulesWindow2.show()
    sys.exit(app.exec_())

