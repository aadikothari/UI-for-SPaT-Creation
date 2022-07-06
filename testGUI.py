# Argonne National Laboratory

from PyQt5 import QtCore, QtGui, QtWidgets
# from PyQt5.QtWidgets import QMessageBox

class Ui_MainWindow(object):
    def setupUi(self, MainWindow):
        MainWindow.setObjectName("MainWindow")
        MainWindow.resize(800, 600)
        MainWindow.setInputMethodHints(QtCore.Qt.ImhNone)
        
        self.centralwidget = QtWidgets.QWidget(MainWindow)
        self.centralwidget.setObjectName("centralwidget")
        
        self.runScript = QtWidgets.QPushButton(self.centralwidget)
        self.runScript.setGeometry(QtCore.QRect(530, 360, 191, 51))
        self.runScript.setStyleSheet("")
        self.runScript.setObjectName("runScript")
        
        self.Reset = QtWidgets.QPushButton(self.centralwidget)
        self.Reset.setGeometry(QtCore.QRect(530, 420, 191, 31))
        self.Reset.setStyleSheet("QPushButton {\n"
"    background-color: red;\n"
"    border-style: outset;\n"
"    border-width: 2px;\n"
"    border-color: beige;\n"
"}")
        self.Reset.setObjectName("Reset")
        
        self.TimeLabel = QtWidgets.QLabel(self.centralwidget)
        self.TimeLabel.setGeometry(QtCore.QRect(80, 130, 171, 50))
        self.TimeLabel.setStyleSheet("QLabel{font-size: 16pt;}")
        self.TimeLabel.setObjectName("TimeLabel")
        
        self.ConfidenceLabel = QtWidgets.QLabel(self.centralwidget)
        self.ConfidenceLabel.setGeometry(QtCore.QRect(80, 170, 121, 41))
        self.ConfidenceLabel.setStyleSheet("QLabel{font-size: 16pt;}")
        self.ConfidenceLabel.setObjectName("ConfidenceLabel")
        
        self.IDLabel = QtWidgets.QLabel(self.centralwidget)
        self.IDLabel.setGeometry(QtCore.QRect(80, 110, 161, 17))
        self.IDLabel.setStyleSheet("QLabel{font-size: 16pt;}")
        self.IDLabel.setObjectName("IDLabel")
        
        self.confidenceItems = QtWidgets.QComboBox(self.centralwidget)
        self.confidenceItems.setGeometry(QtCore.QRect(280, 180, 120, 25))
        self.confidenceItems.setObjectName("confidenceItems")
        self.confidenceItems.addItem("")
        self.confidenceItems.addItem("")
        self.confidenceItems.addItem("")
        self.confidenceItems.addItem("")
        self.confidenceItems.addItem("")
        self.confidenceItems.addItem("")
        self.confidenceItems.addItem("")
        self.confidenceItems.addItem("")
        self.confidenceItems.addItem("")
        self.confidenceItems.addItem("")
        self.confidenceItems.addItem("")
        self.confidenceItems.addItem("")
        self.confidenceItems.addItem("")
        self.confidenceItems.addItem("")
        self.confidenceItems.addItem("")
        self.confidenceItems.addItem("")
        
        self.phaseInfoLabel = QtWidgets.QLabel(self.centralwidget)
        self.phaseInfoLabel.setGeometry(QtCore.QRect(170, 260, 141, 31))
        self.phaseInfoLabel.setStyleSheet("font: 13pt \"Ubuntu\";")
        self.phaseInfoLabel.setObjectName("phaseInfoLabel")
        
        self.phaseInfoChange = QtWidgets.QLabel(self.centralwidget)
        self.phaseInfoChange.setGeometry(QtCore.QRect(30, 330, 441, 201))
        self.phaseInfoChange.setStyleSheet("")
        self.phaseInfoChange.setAlignment(QtCore.Qt.AlignCenter)
        self.phaseInfoChange.setObjectName("phaseInfoChange")
        
        self.runScript_2 = QtWidgets.QPushButton(self.centralwidget)
        self.runScript_2.setGeometry(QtCore.QRect(530, 460, 191, 51))
        self.runScript_2.setStyleSheet("")
        self.runScript_2.setObjectName("runScript_2")
        
        self.listWidget = QtWidgets.QListWidget(self.centralwidget)
        self.listWidget.setGeometry(QtCore.QRect(450, 90, 321, 231))
        
        font = QtGui.QFont()
        font.setPointSize(14)
        self.listWidget.setFont(font)
        self.listWidget.setFocusPolicy(QtCore.Qt.StrongFocus)
        self.listWidget.setContextMenuPolicy(QtCore.Qt.DefaultContextMenu)
        self.listWidget.setAutoFillBackground(False)
        self.listWidget.setFrameShape(QtWidgets.QFrame.StyledPanel)
        self.listWidget.setFrameShadow(QtWidgets.QFrame.Raised)
        self.listWidget.setSelectionMode(QtWidgets.QAbstractItemView.MultiSelection)
        self.listWidget.setProperty("isWrapping", False)
        self.listWidget.setObjectName("listWidget")
        
        item = QtWidgets.QListWidgetItem()
        item.setTextAlignment(QtCore.Qt.AlignCenter)
        self.listWidget.addItem(item)
        item = QtWidgets.QListWidgetItem()
        item.setTextAlignment(QtCore.Qt.AlignCenter)
        self.listWidget.addItem(item)
        item = QtWidgets.QListWidgetItem()
        item.setTextAlignment(QtCore.Qt.AlignCenter)
        self.listWidget.addItem(item)
        item = QtWidgets.QListWidgetItem()
        item.setTextAlignment(QtCore.Qt.AlignCenter)
        self.listWidget.addItem(item)
        item = QtWidgets.QListWidgetItem()
        item.setTextAlignment(QtCore.Qt.AlignCenter)
        self.listWidget.addItem(item)
        item = QtWidgets.QListWidgetItem()
        item.setTextAlignment(QtCore.Qt.AlignCenter)
        self.listWidget.addItem(item)
        item = QtWidgets.QListWidgetItem()
        item.setTextAlignment(QtCore.Qt.AlignCenter)
        self.listWidget.addItem(item)
        item = QtWidgets.QListWidgetItem()
        item.setTextAlignment(QtCore.Qt.AlignCenter)
        self.listWidget.addItem(item)
        item = QtWidgets.QListWidgetItem()
        item.setTextAlignment(QtCore.Qt.AlignCenter)
        self.listWidget.addItem(item)
        item = QtWidgets.QListWidgetItem()
        item.setTextAlignment(QtCore.Qt.AlignCenter)
        self.listWidget.addItem(item)

        # Accept only Integers
        self.intInputValidation=QtGui.QIntValidator()

        self.IDInput = QtWidgets.QLineEdit(self.centralwidget)
        self.IDInput.setGeometry(QtCore.QRect(280, 100, 121, 31))
        self.IDInput.setObjectName("IDInput")
        
        #For Intersection ID Input, we only need integers
        self.IDInput.setValidator(self.intInputValidation)
        
        self.TimeInput = QtWidgets.QLineEdit(self.centralwidget)
        self.TimeInput.setGeometry(QtCore.QRect(280, 140, 121, 31))
        self.TimeInput.setObjectName("TimeInput")

        # For Time Input, we only need integers
        self.TimeInput.setValidator(self.intInputValidation)

        self.label = QtWidgets.QLabel(self.centralwidget)
        self.label.setGeometry(QtCore.QRect(140, 280, 211, 31))
        self.label.setStyleSheet("\n"
"font: 57 10pt \"Ubuntu\";")
        self.label.setObjectName("label")

        #???
        MainWindow.setCentralWidget(self.centralwidget)

        self.menubar = QtWidgets.QMenuBar(MainWindow)
        self.menubar.setGeometry(QtCore.QRect(0, 0, 800, 22))
        self.menubar.setObjectName("menubar")
        
        self.menuUI_for_SPaT_Creation = QtWidgets.QMenu(self.menubar)
        self.menuUI_for_SPaT_Creation.setObjectName("menuUI_for_SPaT_Creation")
        
        MainWindow.setMenuBar(self.menubar)
        
        self.statusbar = QtWidgets.QStatusBar(MainWindow)
        self.statusbar.setObjectName("statusbar")
        
        MainWindow.setStatusBar(self.statusbar)
        
        self.menubar.addAction(self.menuUI_for_SPaT_Creation.menuAction())

        #SIGNALS AND SLOTS
        self.retranslateUi(MainWindow)
        
        # self.confidenceItems.setCurrentIndex(15)
        # self.Reset.clicked.connect(self.listWidget.clearSelection)
        # self.listWidget.clicked['QModelIndex'].connect(self.phaseInfoChange.setFocus)
        # self.listWidget.doubleClicked['QModelIndex'].connect(self.phaseInfoChange.show)
        # self.Reset.clicked.connect(self.phaseInfoChange.update)

        self.confidenceItems.setCurrentIndex(15)
        self.Reset.clicked.connect(self.IDInput.clear)
        self.Reset.clicked.connect(self.listWidget.clearSelection)
        self.Reset.clicked.connect(lambda: self.confidenceItems.setCurrentIndex(15))
        self.Reset.clicked.connect(self.TimeInput.clear)
        self.listWidget.itemDoubleClicked.connect(self.onClicked)
        self.Reset.clicked.connect(lambda: self.phaseInfoChange.setText("Select an option!"))

        QtCore.QMetaObject.connectSlotsByName(MainWindow)

    # Mess with this for SIGNAL INFORMATION
    def onClicked(self, item):
        if(item.text() == "unavailable (0)"):
            self.phaseInfoChange.setText("set description here0")

        elif(item.text() == "dark (1)"):
            self.phaseInfoChange.setText("set description here1")

        elif(item.text() == "stop-Then-Proceed (2)"):
            self.phaseInfoChange.setText("set description here2")

        elif(item.text() == "stop-And-Remain (3)"):
            self.phaseInfoChange.setText("-- e.g. called 'red light' in US\n-- Driver Action:\n- Stop vehicle at stop line.\n- Do not proceed.\n-- Note that the right to proceed either right or left when\nit is safe may be contained in the\nlane description to handle what is called a 'right on red'")
    
        elif(item.text() == "pre-Movement (4)"):
            self.phaseInfoChange.setText("set description here4")

        elif(item.text() == "permissive-Movement-Allowed (5)"):
            self.phaseInfoChange.setText("set description here5")

        elif(item.text() == "protected-Movement-Allowed (6)"):
            self.phaseInfoChange.setText("set description here6")

        elif(item.text() == "permissive-clearance (7)"):
            self.phaseInfoChange.setText("set description here7")

        elif(item.text() == "protected-clearance (8)"):
            self.phaseInfoChange.setText("set description here8")

        elif(item.text() == "caution-Conflicting-Traffic (9)"):
            self.phaseInfoChange.setText("set description here9")


    def retranslateUi(self, MainWindow):
        _translate = QtCore.QCoreApplication.translate
        MainWindow.setWindowTitle(_translate("MainWindow", "MainWindow"))
        self.runScript.setText(_translate("MainWindow", "Create SPATs"))
        self.Reset.setText(_translate("MainWindow", "RESET"))
        self.TimeLabel.setText(_translate("MainWindow", "Time (in seconds):"))
        self.ConfidenceLabel.setText(_translate("MainWindow", "Confidence:"))
        self.IDLabel.setText(_translate("MainWindow", "Intersection ID:"))
        self.confidenceItems.setItemText(0, _translate("MainWindow", "0 (21%)"))
        self.confidenceItems.setItemText(1, _translate("MainWindow", "1 (36%)"))
        self.confidenceItems.setItemText(2, _translate("MainWindow", "2 (47%)"))
        self.confidenceItems.setItemText(3, _translate("MainWindow", "3 (56%)"))
        self.confidenceItems.setItemText(4, _translate("MainWindow", "4 (62%)"))
        self.confidenceItems.setItemText(5, _translate("MainWindow", "5 (68%)"))
        self.confidenceItems.setItemText(6, _translate("MainWindow", "6 (73%)"))
        self.confidenceItems.setItemText(7, _translate("MainWindow", "7 (77%)"))
        self.confidenceItems.setItemText(8, _translate("MainWindow", "8 (81%)"))
        self.confidenceItems.setItemText(9, _translate("MainWindow", "9 (85%)"))
        self.confidenceItems.setItemText(10, _translate("MainWindow", "10 (88%)"))
        self.confidenceItems.setItemText(11, _translate("MainWindow", "11 (91%)"))
        self.confidenceItems.setItemText(12, _translate("MainWindow", "12 (94%)"))
        self.confidenceItems.setItemText(13, _translate("MainWindow", "13 (96%)"))
        self.confidenceItems.setItemText(14, _translate("MainWindow", "14 (98%)"))
        self.confidenceItems.setItemText(15, _translate("MainWindow", "15 (100%)"))
        self.phaseInfoLabel.setText(_translate("MainWindow", "Phase information"))
        self.phaseInfoChange.setText(_translate("MainWindow", "Select a Phase!"))
        self.runScript_2.setText(_translate("MainWindow", "Transmit SPATs"))
        __sortingEnabled = self.listWidget.isSortingEnabled()
        self.listWidget.setSortingEnabled(False)
        item = self.listWidget.item(0)
        item.setText(_translate("MainWindow", "unavailable (0)"))
        item = self.listWidget.item(1)
        item.setText(_translate("MainWindow", "dark (1)"))
        item = self.listWidget.item(2)
        item.setText(_translate("MainWindow", "stop-Then-Proceed (2)"))
        item = self.listWidget.item(3)
        item.setText(_translate("MainWindow", "stop-And-Remain (3)"))
        item = self.listWidget.item(4)
        item.setText(_translate("MainWindow", "pre-Movement (4)"))
        item = self.listWidget.item(5)
        item.setText(_translate("MainWindow", "permissive-Movement-Allowed (5)"))
        item = self.listWidget.item(6)
        item.setText(_translate("MainWindow", "protected-Movement-Allowed (6)"))
        item = self.listWidget.item(7)
        item.setText(_translate("MainWindow", "permissive-clearance (7)"))
        item = self.listWidget.item(8)
        item.setText(_translate("MainWindow", "protected-clearance (8)"))
        item = self.listWidget.item(9)
        item.setText(_translate("MainWindow", "caution-Conflicting-Traffic (9)"))
        self.listWidget.setSortingEnabled(__sortingEnabled)
        self.label.setText(_translate("MainWindow", "Double tap on a phase to see more!"))
        self.menuUI_for_SPaT_Creation.setTitle(_translate("MainWindow", "UI for SPaT Creation"))

# Main Method
if __name__ == "__main__":
    import sys
    app = QtWidgets.QApplication(sys.argv)
    w = QtWidgets.QMainWindow()
    ui = Ui_MainWindow()
    ui.setupUi(w)
    w.show()
    sys.exit(app.exec_())