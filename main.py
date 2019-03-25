# import debug
import sys
from PyQt5 import QtCore, QtGui, QtWidgets
from PyQt5.QtCore import *
from PyQt5.QtGui import *
from PyQt5.QtWidgets import *
from gui.MainWindow import *
from gui.NWindows import *
from gui.ZWindows import *
from gui.QWindows import *
from gui.PWindows import *


class MainWindow(QtWidgets.QMainWindow):
    def __init__(self, parent=None):
        QtWidgets.QWidget.__init__(self, parent)
        self.ui = Ui_MainWindow()
        self.ui.setupUi(self)
        self.napp = NModulesWindow(main=self)
        self.zapp = ZModulesWindow(main=self)
        self.qapp = QModulesWindow(main=self)
        self.papp = PModulesWindow(main=self)
        
        self.ui.pushButton_N.clicked.connect(self.button_N_clicked)
        self.ui.pushButton_Z.clicked.connect(self.button_Z_clicked)
        self.ui.pushButton_Q.clicked.connect(self.button_Q_clicked)
        self.ui.pushButton_P.clicked.connect(self.button_P_clicked)
    
    
    def button_N_clicked(self):
        self.hide()
        self.napp.show()
        
        
    def button_Z_clicked(self):
        self.hide()
        self.zapp.show()
    
    
    def button_Q_clicked(self):
        self.hide()
        self.qapp.show()
    
    
    def button_P_clicked(self):
        self.hide()
        self.papp.show()   
        

def main():
    app = QtWidgets.QApplication(sys.argv)
    myapp = MainWindow()
    myapp.show()
    sys.exit(app.exec_())
    

if __name__ == "__main__":
    main()
