# import debug
import sys
from PyQt5 import QtCore, QtGui, QtWidgets
from PyQt5.QtCore import *
from PyQt5.QtGui import *
from PyQt5.QtWidgets import *
from gui.MainWindow import *
from gui.N_modules_Window import *
import debug_N, debug_Z, debug_Q, debug_P


class NModulesWindow(QtWidgets.QMainWindow):
    def __init__(self, parent=None, main=None):
        QtWidgets.QWidget.__init__(self, parent)
        self.ui = Ui_N_modules()
        self.ui.setupUi(self)
        self.main = main
        
        self.ui.pushButton_main.clicked.connect(self.button_main_clicked)
        
    
    def button_main_clicked(self):
        self.hide()
        self.main.show()
        

class MainWindow(QtWidgets.QMainWindow):
    def __init__(self, parent=None):
        QtWidgets.QWidget.__init__(self, parent)
        self.ui = Ui_MainWindow()
        self.ui.setupUi(self)
        self.napp = NModulesWindow(main=self)
        
        self.ui.pushButton_N.clicked.connect(self.button_N_clicked)
        self.ui.pushButton_Z.clicked.connect(self.button_Q_clicked)
        self.ui.pushButton_Q.clicked.connect(self.button_Z_clicked)
        self.ui.pushButton_P.clicked.connect(self.button_P_clicked)
    
    
    def button_N_clicked(self):
        self.hide()
        self.napp.show()
        
        
    def button_Z_clicked(self):
        self.h()
        debug_Z.main()
    
    
    def button_Q_clicked(self):
        self.close()
        debug_Q.main()
    
    
    def button_P_clicked(self):
        self.close()
        debug_P.main()    
        

def main():
    # debug.main()
    app = QtWidgets.QApplication(sys.argv)
    myapp = MainWindow()
    myapp.show()
    sys.exit(app.exec_())
    

if __name__ == "__main__":
    main()
