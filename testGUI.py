# -*- coding: utf-8 -*-

# Form implementation generated from reading ui file 'test.ui'
#
# Created by: PyQt5 UI code generator 5.10.1
#
# WARNING! All changes made in this file will be lost!

import os
import subprocess
import signal

from PyQt5 import QtCore, QtGui, QtWidgets
from PyQt5.QtWidgets import QFileDialog

class Ui_UIWindowSPaTGenerator(object):
    def setupUi(self, UIWindowSPaTGenerator):
        UIWindowSPaTGenerator.setObjectName("UIWindowSPaTGenerator")
        UIWindowSPaTGenerator.resize(853, 668)
        UIWindowSPaTGenerator.setInputMethodHints(QtCore.Qt.ImhNone)
        self.intInputValidation = QtGui.QIntValidator()
        self.centralwidget = QtWidgets.QWidget(UIWindowSPaTGenerator)
        self.centralwidget.setObjectName("centralwidget")
        self.TimeLabel = QtWidgets.QLabel(self.centralwidget)
        self.TimeLabel.setGeometry(QtCore.QRect(200, 150, 141, 50))
        self.TimeLabel.setStyleSheet("font: 11pt \"Ubuntu\";")
        self.TimeLabel.setObjectName("TimeLabel")
        self.ConfidenceLabel = QtWidgets.QLabel(self.centralwidget)
        self.ConfidenceLabel.setGeometry(QtCore.QRect(370, 150, 91, 50))
        self.ConfidenceLabel.setStyleSheet("font: 11pt \"Ubuntu\";")
        self.ConfidenceLabel.setObjectName("ConfidenceLabel")
        self.IDLabel = QtWidgets.QLabel(self.centralwidget)
        self.IDLabel.setGeometry(QtCore.QRect(40, 30, 121, 20))
        self.IDLabel.setStyleSheet("font: 11pt \"Ubuntu\";")
        self.IDLabel.setObjectName("IDLabel")
        self.phaseInfoLabel = QtWidgets.QLabel(self.centralwidget)
        self.phaseInfoLabel.setGeometry(QtCore.QRect(630, 210, 141, 31))
        self.phaseInfoLabel.setStyleSheet("font: 11pt \"Ubuntu\";")
        self.phaseInfoLabel.setAlignment(QtCore.Qt.AlignCenter)
        self.phaseInfoLabel.setObjectName("phaseInfoLabel")
        self.phaseInfoChange = QtWidgets.QLabel(self.centralwidget)
        self.phaseInfoChange.setGeometry(QtCore.QRect(565, 238, 272, 140))
        self.phaseInfoChange.setStyleSheet("font: 11pt \"Ubuntu\";")
        self.phaseInfoChange.setAlignment(QtCore.Qt.AlignHCenter|QtCore.Qt.AlignTop)
        self.phaseInfoChange.setObjectName("phaseInfoChange")
        self.label_2 = QtWidgets.QLabel(self.centralwidget)
        self.label_2.setGeometry(QtCore.QRect(30, 160, 51, 30))
        font = QtGui.QFont()
        font.setFamily("Ubuntu")
        font.setPointSize(11)
        font.setBold(False)
        font.setItalic(False)
        font.setWeight(50)
        self.label_2.setFont(font)
        self.label_2.setStyleSheet("font: 11pt \"Ubuntu\";")
        self.label_2.setObjectName("label_2")
        self.label_3 = QtWidgets.QLabel(self.centralwidget)
        self.label_3.setGeometry(QtCore.QRect(40, 80, 131, 20))
        font = QtGui.QFont()
        font.setFamily("Ubuntu")
        font.setPointSize(11)
        font.setBold(False)
        font.setItalic(False)
        font.setWeight(50)
        self.label_3.setFont(font)
        self.label_3.setStyleSheet("font: 11pt \"Ubuntu\";")
        self.label_3.setObjectName("label_3")
        self.label_5 = QtWidgets.QLabel(self.centralwidget)
        self.label_5.setGeometry(QtCore.QRect(470, 30, 101, 20))
        font = QtGui.QFont()
        font.setFamily("Ubuntu")
        font.setPointSize(11)
        font.setBold(False)
        font.setItalic(False)
        font.setWeight(50)
        self.label_5.setFont(font)
        self.label_5.setStyleSheet("font: 11pt \"Ubuntu\";")
        self.label_5.setObjectName("label_5")
        self.selectSPaTsButton = QtWidgets.QPushButton(self.centralwidget)
        self.selectSPaTsButton.setGeometry(QtCore.QRect(40, 530, 380, 25))
        self.selectSPaTsButton.setStyleSheet("font: 11pt \"Ubuntu\";")
        self.selectSPaTsButton.setObjectName("selectSPaTsButton")
        self.intersectionIDInput = QtWidgets.QLineEdit(self.centralwidget)
        self.intersectionIDInput.setGeometry(QtCore.QRect(170, 30, 241, 25))
        self.intersectionIDInput.setObjectName("intersectionIDInput")
        self.signalGroupIDInput = QtWidgets.QLineEdit(self.centralwidget)
        self.signalGroupIDInput.setGeometry(QtCore.QRect(170, 80, 241, 25))
        self.signalGroupIDInput.setObjectName("signalGroupIDInput")
        self.filenameInput = QtWidgets.QLineEdit(self.centralwidget)
        self.filenameInput.setGeometry(QtCore.QRect(580, 30, 241, 25))
        self.filenameInput.setObjectName("filenameInput")
        self.phaseItem1 = QtWidgets.QComboBox(self.centralwidget)
        self.phaseItem1.setGeometry(QtCore.QRect(30, 210, 160, 25))
        self.phaseItem1.setObjectName("phaseItem1")
        self.phaseItem1.addItem("")
        self.phaseItem1.addItem("")
        self.phaseItem1.addItem("")
        self.phaseItem1.addItem("")
        self.phaseItem1.addItem("")
        self.phaseItem1.addItem("")
        self.phaseItem1.addItem("")
        self.phaseItem1.addItem("")
        self.phaseItem1.addItem("")
        self.phaseItem1.addItem("")
        self.lineEdit_6 = QtWidgets.QLineEdit(self.centralwidget)
        self.lineEdit_6.setGeometry(QtCore.QRect(200, 210, 161, 25))
        self.lineEdit_6.setObjectName("lineEdit_6")
        self.lineEdit_7 = QtWidgets.QLineEdit(self.centralwidget)
        self.lineEdit_7.setGeometry(QtCore.QRect(200, 250, 161, 25))
        self.lineEdit_7.setObjectName("lineEdit_7")
        self.lineEdit_8 = QtWidgets.QLineEdit(self.centralwidget)
        self.lineEdit_8.setGeometry(QtCore.QRect(200, 290, 161, 25))
        self.lineEdit_8.setObjectName("lineEdit_8")
        self.lineEdit_9 = QtWidgets.QLineEdit(self.centralwidget)
        self.lineEdit_9.setGeometry(QtCore.QRect(200, 330, 161, 25))
        self.lineEdit_9.setObjectName("lineEdit_9")
        self.lineEdit_10 = QtWidgets.QLineEdit(self.centralwidget)
        self.lineEdit_10.setGeometry(QtCore.QRect(200, 370, 161, 25))
        self.lineEdit_10.setObjectName("lineEdit_10")
        self.phaseItem2 = QtWidgets.QComboBox(self.centralwidget)
        self.phaseItem2.setGeometry(QtCore.QRect(30, 250, 160, 25))
        self.phaseItem2.setObjectName("phaseItem2")
        self.phaseItem2.addItem("")
        self.phaseItem2.addItem("")
        self.phaseItem2.addItem("")
        self.phaseItem2.addItem("")
        self.phaseItem2.addItem("")
        self.phaseItem2.addItem("")
        self.phaseItem2.addItem("")
        self.phaseItem2.addItem("")
        self.phaseItem2.addItem("")
        self.phaseItem2.addItem("")
        self.phaseItem3 = QtWidgets.QComboBox(self.centralwidget)
        self.phaseItem3.setGeometry(QtCore.QRect(30, 290, 160, 25))
        self.phaseItem3.setObjectName("phaseItem3")
        self.phaseItem3.addItem("")
        self.phaseItem3.addItem("")
        self.phaseItem3.addItem("")
        self.phaseItem3.addItem("")
        self.phaseItem3.addItem("")
        self.phaseItem3.addItem("")
        self.phaseItem3.addItem("")
        self.phaseItem3.addItem("")
        self.phaseItem3.addItem("")
        self.phaseItem3.addItem("")
        self.phaseItem4 = QtWidgets.QComboBox(self.centralwidget)
        self.phaseItem4.setGeometry(QtCore.QRect(30, 330, 160, 25))
        self.phaseItem4.setObjectName("phaseItem4")
        self.phaseItem4.addItem("")
        self.phaseItem4.addItem("")
        self.phaseItem4.addItem("")
        self.phaseItem4.addItem("")
        self.phaseItem4.addItem("")
        self.phaseItem4.addItem("")
        self.phaseItem4.addItem("")
        self.phaseItem4.addItem("")
        self.phaseItem4.addItem("")
        self.phaseItem4.addItem("")
        self.phaseItem4.addItem("")
        self.phaseItem5 = QtWidgets.QComboBox(self.centralwidget)
        self.phaseItem5.setGeometry(QtCore.QRect(30, 370, 160, 25))
        self.phaseItem5.setObjectName("phaseItem5")
        self.phaseItem5.addItem("")
        self.phaseItem5.addItem("")
        self.phaseItem5.addItem("")
        self.phaseItem5.addItem("")
        self.phaseItem5.addItem("")
        self.phaseItem5.addItem("")
        self.phaseItem5.addItem("")
        self.phaseItem5.addItem("")
        self.phaseItem5.addItem("")
        self.phaseItem5.addItem("")
        self.phaseItem5.addItem("")
        self.confidenceItem1 = QtWidgets.QComboBox(self.centralwidget)
        self.confidenceItem1.setGeometry(QtCore.QRect(370, 210, 160, 25))
        self.confidenceItem1.setObjectName("confidenceItem1")
        self.confidenceItem1.addItem("")
        self.confidenceItem1.addItem("")
        self.confidenceItem1.addItem("")
        self.confidenceItem1.addItem("")
        self.confidenceItem1.addItem("")
        self.confidenceItem1.addItem("")
        self.confidenceItem1.addItem("")
        self.confidenceItem1.addItem("")
        self.confidenceItem1.addItem("")
        self.confidenceItem1.addItem("")
        self.confidenceItem1.addItem("")
        self.confidenceItem1.addItem("")
        self.confidenceItem1.addItem("")
        self.confidenceItem1.addItem("")
        self.confidenceItem1.addItem("")
        self.confidenceItem1.addItem("")
        self.confidenceItem2 = QtWidgets.QComboBox(self.centralwidget)
        self.confidenceItem2.setGeometry(QtCore.QRect(370, 250, 160, 25))
        self.confidenceItem2.setObjectName("confidenceItem2")
        self.confidenceItem2.addItem("")
        self.confidenceItem2.addItem("")
        self.confidenceItem2.addItem("")
        self.confidenceItem2.addItem("")
        self.confidenceItem2.addItem("")
        self.confidenceItem2.addItem("")
        self.confidenceItem2.addItem("")
        self.confidenceItem2.addItem("")
        self.confidenceItem2.addItem("")
        self.confidenceItem2.addItem("")
        self.confidenceItem2.addItem("")
        self.confidenceItem2.addItem("")
        self.confidenceItem2.addItem("")
        self.confidenceItem2.addItem("")
        self.confidenceItem2.addItem("")
        self.confidenceItem2.addItem("")
        self.confidenceItem4 = QtWidgets.QComboBox(self.centralwidget)
        self.confidenceItem4.setGeometry(QtCore.QRect(370, 330, 160, 25))
        self.confidenceItem4.setObjectName("confidenceItem4")
        self.confidenceItem4.addItem("")
        self.confidenceItem4.addItem("")
        self.confidenceItem4.addItem("")
        self.confidenceItem4.addItem("")
        self.confidenceItem4.addItem("")
        self.confidenceItem4.addItem("")
        self.confidenceItem4.addItem("")
        self.confidenceItem4.addItem("")
        self.confidenceItem4.addItem("")
        self.confidenceItem4.addItem("")
        self.confidenceItem4.addItem("")
        self.confidenceItem4.addItem("")
        self.confidenceItem4.addItem("")
        self.confidenceItem4.addItem("")
        self.confidenceItem4.addItem("")
        self.confidenceItem4.addItem("")
        self.confidenceItem4.addItem("")
        self.confidenceItem3 = QtWidgets.QComboBox(self.centralwidget)
        self.confidenceItem3.setGeometry(QtCore.QRect(370, 290, 160, 25))
        self.confidenceItem3.setObjectName("confidenceItem3")
        self.confidenceItem3.addItem("")
        self.confidenceItem3.addItem("")
        self.confidenceItem3.addItem("")
        self.confidenceItem3.addItem("")
        self.confidenceItem3.addItem("")
        self.confidenceItem3.addItem("")
        self.confidenceItem3.addItem("")
        self.confidenceItem3.addItem("")
        self.confidenceItem3.addItem("")
        self.confidenceItem3.addItem("")
        self.confidenceItem3.addItem("")
        self.confidenceItem3.addItem("")
        self.confidenceItem3.addItem("")
        self.confidenceItem3.addItem("")
        self.confidenceItem3.addItem("")
        self.confidenceItem3.addItem("")
        self.confidenceItem5 = QtWidgets.QComboBox(self.centralwidget)
        self.confidenceItem5.setGeometry(QtCore.QRect(370, 370, 160, 25))
        self.confidenceItem5.setObjectName("confidenceItem5")
        self.confidenceItem5.addItem("")
        self.confidenceItem5.addItem("")
        self.confidenceItem5.addItem("")
        self.confidenceItem5.addItem("")
        self.confidenceItem5.addItem("")
        self.confidenceItem5.addItem("")
        self.confidenceItem5.addItem("")
        self.confidenceItem5.addItem("")
        self.confidenceItem5.addItem("")
        self.confidenceItem5.addItem("")
        self.confidenceItem5.addItem("")
        self.confidenceItem5.addItem("")
        self.confidenceItem5.addItem("")
        self.confidenceItem5.addItem("")
        self.confidenceItem5.addItem("")
        self.confidenceItem5.addItem("")
        self.confidenceItem5.addItem("")
        self.createSPaTButton = QtWidgets.QPushButton(self.centralwidget)
        self.createSPaTButton.setGeometry(QtCore.QRect(510, 100, 111, 25))
        self.createSPaTButton.setStyleSheet("font: 11pt \"Ubuntu\";")
        self.createSPaTButton.setObjectName("createSPaTButton")
        self.clearFieldsButton = QtWidgets.QPushButton(self.centralwidget)
        self.clearFieldsButton.setGeometry(QtCore.QRect(510, 130, 111, 25))
        self.clearFieldsButton.setStyleSheet("font: 11pt \"Ubuntu\";")
        self.clearFieldsButton.setObjectName("clearFieldsButton")
        self.transmitSPaTsButton = QtWidgets.QPushButton(self.centralwidget)
        self.transmitSPaTsButton.setGeometry(QtCore.QRect(440, 530, 380, 25))
        self.transmitSPaTsButton.setStyleSheet("font: 11pt \"Ubuntu\";")
        self.transmitSPaTsButton.setObjectName("transmitSPaTsButton")
        self.rsuPortInput = QtWidgets.QLineEdit(self.centralwidget)
        self.rsuPortInput.setGeometry(QtCore.QRect(580, 480, 241, 25))
        self.rsuPortInput.setObjectName("rsuPortInput")
        self.rsuIPInput = QtWidgets.QLineEdit(self.centralwidget)
        self.rsuIPInput.setGeometry(QtCore.QRect(170, 480, 241, 25))
        self.rsuIPInput.setObjectName("rsuIPInput")
        self.IDLabel_2 = QtWidgets.QLabel(self.centralwidget)
        self.IDLabel_2.setGeometry(QtCore.QRect(40, 480, 121, 20))
        self.IDLabel_2.setStyleSheet("font: 11pt \"Ubuntu\";")
        self.IDLabel_2.setObjectName("IDLabel_2")
        self.label_8 = QtWidgets.QLabel(self.centralwidget)
        self.label_8.setGeometry(QtCore.QRect(470, 480, 101, 20))
        font = QtGui.QFont()
        font.setFamily("Ubuntu")
        font.setPointSize(11)
        font.setBold(False)
        font.setItalic(False)
        font.setWeight(50)
        self.label_8.setFont(font)
        self.label_8.setStyleSheet("font: 11pt \"Ubuntu\";")
        self.label_8.setObjectName("label_8")
        self.line = QtWidgets.QFrame(self.centralwidget)
        self.line.setGeometry(QtCore.QRect(10, 440, 831, 20))
        self.line.setFrameShape(QtWidgets.QFrame.HLine)
        self.line.setFrameShadow(QtWidgets.QFrame.Sunken)
        self.line.setObjectName("line")
        self.frame = QtWidgets.QFrame(self.centralwidget)
        self.frame.setGeometry(QtCore.QRect(650, 100, 181, 51))
        self.frame.setFrameShape(QtWidgets.QFrame.StyledPanel)
        self.frame.setFrameShadow(QtWidgets.QFrame.Raised)
        self.frame.setObjectName("frame")
        self.label_4 = QtWidgets.QLabel(self.frame)
        self.label_4.setGeometry(QtCore.QRect(40, 0, 100, 30))
        self.label_4.setAlignment(QtCore.Qt.AlignCenter)
        self.label_4.setObjectName("label_4")
        self.statusInfoChange = QtWidgets.QLabel(self.frame)
        self.statusInfoChange.setGeometry(QtCore.QRect(40, 20, 100, 30))
        self.statusInfoChange.setAlignment(QtCore.Qt.AlignCenter)
        self.statusInfoChange.setObjectName("statusInfoChange")
        self.frame_2 = QtWidgets.QFrame(self.centralwidget)
        self.frame_2.setGeometry(QtCore.QRect(560, 210, 281, 180))
        self.frame_2.setFrameShape(QtWidgets.QFrame.StyledPanel)
        self.frame_2.setFrameShadow(QtWidgets.QFrame.Raised)
        self.frame_2.setObjectName("frame_2")
        self.frame_3 = QtWidgets.QFrame(self.centralwidget)
        self.frame_3.setGeometry(QtCore.QRect(170, 570, 521, 31))
        self.frame_3.setFrameShape(QtWidgets.QFrame.StyledPanel)
        self.frame_3.setFrameShadow(QtWidgets.QFrame.Raised)
        self.frame_3.setObjectName("frame_3")
        self.label_6 = QtWidgets.QLabel(self.frame_3)
        self.label_6.setGeometry(QtCore.QRect(6, 0, 511, 30))
        self.label_6.setAlignment(QtCore.Qt.AlignCenter)
        self.label_6.setObjectName("label_6")
        UIWindowSPaTGenerator.setCentralWidget(self.centralwidget)
        self.menubar = QtWidgets.QMenuBar(UIWindowSPaTGenerator)
        self.menubar.setGeometry(QtCore.QRect(0, 0, 853, 22))
        self.menubar.setObjectName("menubar")
        self.menuUI_for_SPaT_Creation = QtWidgets.QMenu(self.menubar)
        self.menuUI_for_SPaT_Creation.setObjectName("menuUI_for_SPaT_Creation")
        UIWindowSPaTGenerator.setMenuBar(self.menubar)
        self.statusbar = QtWidgets.QStatusBar(UIWindowSPaTGenerator)
        self.statusbar.setObjectName("statusbar")
        UIWindowSPaTGenerator.setStatusBar(self.statusbar)
        self.menuUI_for_SPaT_Creation.addSeparator()
        self.menubar.addAction(self.menuUI_for_SPaT_Creation.menuAction())

        self.intersectionIDInput.setValidator(self.intInputValidation)
        self.signalGroupIDInput.setValidator(self.intInputValidation)
        self.rsuPortInput.setValidator(self.intInputValidation)
        self.lineEdit_6.setValidator(self.intInputValidation)
        self.lineEdit_7.setValidator(self.intInputValidation)
        self.lineEdit_8.setValidator(self.intInputValidation)
        self.lineEdit_9.setValidator(self.intInputValidation)
        self.lineEdit_10.setValidator(self.intInputValidation)
        self.rsuPortInput.setText("1516")

        self.retranslateUi(UIWindowSPaTGenerator)
        self.confidenceItem1.setCurrentIndex(15)
        self.confidenceItem2.setCurrentIndex(15)
        self.confidenceItem3.setCurrentIndex(15)
        self.clearFieldsButton.clicked.connect(lambda: self.confidenceItem1.setCurrentIndex(15))
        self.clearFieldsButton.clicked.connect(lambda: self.confidenceItem2.setCurrentIndex(15))
        self.clearFieldsButton.clicked.connect(lambda: self.confidenceItem3.setCurrentIndex(15))
        self.clearFieldsButton.clicked.connect(lambda: self.confidenceItem4.setCurrentIndex(0))
        self.clearFieldsButton.clicked.connect(lambda: self.confidenceItem5.setCurrentIndex(0))
        self.clearFieldsButton.clicked.connect(lambda: self.phaseItem1.setCurrentIndex(0))
        self.clearFieldsButton.clicked.connect(lambda: self.phaseItem2.setCurrentIndex(0))
        self.clearFieldsButton.clicked.connect(lambda: self.phaseItem3.setCurrentIndex(0))
        self.clearFieldsButton.clicked.connect(lambda: self.phaseItem4.setCurrentIndex(0))
        self.clearFieldsButton.clicked.connect(lambda: self.phaseItem5.setCurrentIndex(0))
        self.clearFieldsButton.clicked.connect(self.lineEdit_6.clear)
        self.clearFieldsButton.clicked.connect(self.lineEdit_7.clear)
        self.clearFieldsButton.clicked.connect(self.lineEdit_8.clear)
        self.clearFieldsButton.clicked.connect(self.lineEdit_9.clear)
        self.clearFieldsButton.clicked.connect(self.lineEdit_10.clear)
        self.clearFieldsButton.clicked.connect(self.filenameInput.clear)
        self.clearFieldsButton.clicked.connect(self.signalGroupIDInput.clear)
        self.clearFieldsButton.clicked.connect(self.intersectionIDInput.clear)
        self.phaseItem1.activated.connect(self.onClicked)
        self.phaseItem2.activated.connect(self.onClicked)
        self.phaseItem3.activated.connect(self.onClicked)
        self.clearFieldsButton.clicked.connect(lambda: self.phaseInfoChange.setText("(Select a Phase!)"))
        self.createSPaTButton.clicked.connect(self.statusInfoChange.update)
        self.selectSPaTsButton.clicked.connect(self.browseFiles)
        self.transmitSPaTsButton.clicked.connect(self.runTransmitScript)
        QtCore.QMetaObject.connectSlotsByName(UIWindowSPaTGenerator)

    def onClicked(self, item):
        if(item == 0):
            self.phaseInfoChange.setText("-- This state is used for\nunknown or error")

        elif(item == 1):
            self.phaseInfoChange.setText("-- The signal head is dark (unlit)")

        elif(item == 2):
            self.phaseInfoChange.setText("-- Often called ‘flashing red’ in US\n-- Driver Action:\n-- Stop vehicle at stop line.\n-- Do not proceed unless it is safe.\n-- Note that the right to proceed either\nright or left when -- it is safe may be\ncontained in the lane description to \n-- handle what is called a ‘right on red’")

        elif(item == 3):
            self.phaseInfoChange.setText("-- e.g. called 'red light' in US\n-- Driver Action:\n- Stop vehicle at stop line.\n- Do not proceed.\n-- Note that the right to proceed either right or left when\nit is safe may be contained in the\nlane description to handle what is called\na 'right on red'")
    
        elif(item == 4):
            self.phaseInfoChange.setText("-- Not used in the US\nred+yellow partly in EU\n\n-- Driver Action:\n-- Stop vehicle.\n-- Prepare to proceed (pending green)\n-- (Prepare for transition to green/go)")

        elif(item == 5):
            self.phaseInfoChange.setText("-- Often called ‘permissive green’ in US\n\n-- Driver Action:\n-- Proceed with caution, \n-- must yield to all conflicting traffic \n-- Conflicting traffic may be present\n-- in the intersection conflict area")

        elif(item == 6):
            self.phaseInfoChange.setText("-- Often called ‘protected green’ in US\n\n-- Driver Action:\n-- Proceed, tossing caution to the wind,\n-- in indicated (allowed) direction.")

        elif(item == 7):
            self.phaseInfoChange.setText("-- Often called ‘permissive yellow’ in US\n\n-- Driver Action: \n-- Prepare to stop.\n-- Proceed if unable to stop,\n-- Clear Intersection.\n-- Conflicting traffic may be present\n-- in the intersection conflict area")

        elif(item == 8):
            self.phaseInfoChange.setText("-- Often called ‘protected yellow’ in US\n\n-- Driver Action:\n-- Prepare to stop.\n-- Proceed if unable to stop,\n-- in indicated direction (to connected lane)\n-- Clear Intersection.")

        elif(item == 9):
            self.phaseInfoChange.setText("-- Often called ‘flashing yellow’ in US\n-- Often used for extended periods of time\n\n-- Driver Action: \n-- Proceed with caution, \n-- Conflicting traffic may be present\n-- in the intersection conflict area")

    def browseFiles(self):
        filename = QFileDialog.getOpenFileName()
        self.label_6.setText("Selected File: %s" %(filename[0]))

    def stopTransmitScript(self, p):
        print("hi")
        #os.killpg(os.getpgid(p.pid), signal.SIGTERM)
        p.kill()
        self.label_6.setText("Status")
        self.transmitSPaTsButton.setText("Transmit SPaTs")
        self.transmitSPaTsButton.clicked.connect(self.runTransmitScript)


    def runTransmitScript(self):
        filename = self.label_6.text()
        if filename == "Status" or filename == "SELECT A FILE !!":
            self.label_6.setText("SELECT A FILE !!")

        else:
            filename = self.label_6.text().replace("Selected File: ","")
            ipPort = self.rsuIPInput.text() + ':' + self.rsuPortInput.text()
            p = subprocess.Popen(['python3', 'transmitSPAT.py', self.label_6.text().replace("Selected File: ","") , ipPort])
            self.transmitSPaTsButton.setText("Stop Transmitting")
            self.label_6.setText("Transmitting SPaTs from %s" %(filename))
            self.transmitSPaTsButton.clicked.connect(lambda: self.stopTransmitScript(p))
            
        # if(self.transmitSPaTsButton.clicked()):
        #     os.killpg(os.getpgid(subProcess.pid), signal.SIGTERM)

        # try:
        # command = 'python3 transmitSPAT.py ' + self.label_6.text().replace("Selected File: ","") + ' ' + self.rsuIPInput.text() + ':' + self.rsuPortInput.text() 
        # print(command)
        # self.label_6.setText("Transmitting SPaTs to %s:%s" %(self.rsuIPInput.text(), self.rsuPortInput.text()))
        # print("go here?")
        # os.system(command)
        # except:
        # self.label_6.setText("There was an error")

    def retranslateUi(self, UIWindowSPaTGenerator):
        _translate = QtCore.QCoreApplication.translate
        UIWindowSPaTGenerator.setWindowTitle(_translate("UIWindowSPaTGenerator", "UI Window SPaT Generator"))
        self.TimeLabel.setText(_translate("UIWindowSPaTGenerator", "Time (in seconds):"))
        self.ConfidenceLabel.setText(_translate("UIWindowSPaTGenerator", "Confidence:"))
        self.IDLabel.setText(_translate("UIWindowSPaTGenerator", "Intersection ID:"))
        self.phaseInfoLabel.setText(_translate("UIWindowSPaTGenerator", "Phase information"))
        self.phaseInfoChange.setText(_translate("UIWindowSPaTGenerator", "(Select a Phase!)"))
        self.label_2.setText(_translate("UIWindowSPaTGenerator", "Phase:"))
        self.label_3.setText(_translate("UIWindowSPaTGenerator", "Signal Group ID:"))
        self.label_5.setText(_translate("UIWindowSPaTGenerator", "Save SPaT as:"))
        self.selectSPaTsButton.setText(_translate("UIWindowSPaTGenerator", "Select SPATs"))
        self.phaseItem1.setItemText(0, _translate("UIWindowSPaTGenerator", "unavailable (0)"))
        self.phaseItem1.setItemText(1, _translate("UIWindowSPaTGenerator", "dark (1)"))
        self.phaseItem1.setItemText(2, _translate("UIWindowSPaTGenerator", "stop-Then-Proceed (2)"))
        self.phaseItem1.setItemText(3, _translate("UIWindowSPaTGenerator", "stop-And-Remain (3)"))
        self.phaseItem1.setItemText(4, _translate("UIWindowSPaTGenerator", "pre-Movement (4)"))
        self.phaseItem1.setItemText(5, _translate("UIWindowSPaTGenerator", "permissive-Movement-Allowed (5)"))
        self.phaseItem1.setItemText(6, _translate("UIWindowSPaTGenerator", "protected-Movement-Allowed (6)"))
        self.phaseItem1.setItemText(7, _translate("UIWindowSPaTGenerator", "permissive-clearance (7)"))
        self.phaseItem1.setItemText(8, _translate("UIWindowSPaTGenerator", "protected-clearance (8)"))
        self.phaseItem1.setItemText(9, _translate("UIWindowSPaTGenerator", "caution-Conflicting-Traffic (9)"))
        self.phaseItem2.setItemText(0, _translate("UIWindowSPaTGenerator", "unavailable (0)"))
        self.phaseItem2.setItemText(1, _translate("UIWindowSPaTGenerator", "dark (1)"))
        self.phaseItem2.setItemText(2, _translate("UIWindowSPaTGenerator", "stop-Then-Proceed (2)"))
        self.phaseItem2.setItemText(3, _translate("UIWindowSPaTGenerator", "stop-And-Remain (3)"))
        self.phaseItem2.setItemText(4, _translate("UIWindowSPaTGenerator", "pre-Movement (4)"))
        self.phaseItem2.setItemText(5, _translate("UIWindowSPaTGenerator", "permissive-Movement-Allowed (5)"))
        self.phaseItem2.setItemText(6, _translate("UIWindowSPaTGenerator", "protected-Movement-Allowed (6)"))
        self.phaseItem2.setItemText(7, _translate("UIWindowSPaTGenerator", "permissive-clearance (7)"))
        self.phaseItem2.setItemText(8, _translate("UIWindowSPaTGenerator", "protected-clearance (8)"))
        self.phaseItem2.setItemText(9, _translate("UIWindowSPaTGenerator", "caution-Conflicting-Traffic (9)"))
        self.phaseItem3.setItemText(0, _translate("UIWindowSPaTGenerator", "unavailable (0)"))
        self.phaseItem3.setItemText(1, _translate("UIWindowSPaTGenerator", "dark (1)"))
        self.phaseItem3.setItemText(2, _translate("UIWindowSPaTGenerator", "stop-Then-Proceed (2)"))
        self.phaseItem3.setItemText(3, _translate("UIWindowSPaTGenerator", "stop-And-Remain (3)"))
        self.phaseItem3.setItemText(4, _translate("UIWindowSPaTGenerator", "pre-Movement (4)"))
        self.phaseItem3.setItemText(5, _translate("UIWindowSPaTGenerator", "permissive-Movement-Allowed (5)"))
        self.phaseItem3.setItemText(6, _translate("UIWindowSPaTGenerator", "protected-Movement-Allowed (6)"))
        self.phaseItem3.setItemText(7, _translate("UIWindowSPaTGenerator", "permissive-clearance (7)"))
        self.phaseItem3.setItemText(8, _translate("UIWindowSPaTGenerator", "protected-clearance (8)"))
        self.phaseItem3.setItemText(9, _translate("UIWindowSPaTGenerator", "caution-Conflicting-Traffic (9)"))
        self.phaseItem4.setItemText(0, _translate("UIWindowSPaTGenerator", "select option"))
        self.phaseItem4.setItemText(1, _translate("UIWindowSPaTGenerator", "unavailable (0)"))
        self.phaseItem4.setItemText(2, _translate("UIWindowSPaTGenerator", "dark (1)"))
        self.phaseItem4.setItemText(3, _translate("UIWindowSPaTGenerator", "stop-Then-Proceed (2)"))
        self.phaseItem4.setItemText(4, _translate("UIWindowSPaTGenerator", "stop-And-Remain (3)"))
        self.phaseItem4.setItemText(5, _translate("UIWindowSPaTGenerator", "pre-Movement (4)"))
        self.phaseItem4.setItemText(6, _translate("UIWindowSPaTGenerator", "permissive-Movement-Allowed (5)"))
        self.phaseItem4.setItemText(7, _translate("UIWindowSPaTGenerator", "protected-Movement-Allowed (6)"))
        self.phaseItem4.setItemText(8, _translate("UIWindowSPaTGenerator", "permissive-clearance (7)"))
        self.phaseItem4.setItemText(9, _translate("UIWindowSPaTGenerator", "protected-clearance (8)"))
        self.phaseItem4.setItemText(10, _translate("UIWindowSPaTGenerator", "caution-Conflicting-Traffic (9)"))
        self.phaseItem5.setItemText(0, _translate("UIWindowSPaTGenerator", "select option"))
        self.phaseItem5.setItemText(1, _translate("UIWindowSPaTGenerator", "unavailable (0)"))
        self.phaseItem5.setItemText(2, _translate("UIWindowSPaTGenerator", "dark (1)"))
        self.phaseItem5.setItemText(3, _translate("UIWindowSPaTGenerator", "stop-Then-Proceed (2)"))
        self.phaseItem5.setItemText(4, _translate("UIWindowSPaTGenerator", "stop-And-Remain (3)"))
        self.phaseItem5.setItemText(5, _translate("UIWindowSPaTGenerator", "pre-Movement (4)"))
        self.phaseItem5.setItemText(6, _translate("UIWindowSPaTGenerator", "permissive-Movement-Allowed (5)"))
        self.phaseItem5.setItemText(7, _translate("UIWindowSPaTGenerator", "protected-Movement-Allowed (6)"))
        self.phaseItem5.setItemText(8, _translate("UIWindowSPaTGenerator", "permissive-clearance (7)"))
        self.phaseItem5.setItemText(9, _translate("UIWindowSPaTGenerator", "protected-clearance (8)"))
        self.phaseItem5.setItemText(10, _translate("UIWindowSPaTGenerator", "caution-Conflicting-Traffic (9)"))
        self.confidenceItem1.setItemText(0, _translate("UIWindowSPaTGenerator", "0 (21%)"))
        self.confidenceItem1.setItemText(1, _translate("UIWindowSPaTGenerator", "1 (36%)"))
        self.confidenceItem1.setItemText(2, _translate("UIWindowSPaTGenerator", "2 (47%)"))
        self.confidenceItem1.setItemText(3, _translate("UIWindowSPaTGenerator", "3 (56%)"))
        self.confidenceItem1.setItemText(4, _translate("UIWindowSPaTGenerator", "4 (62%)"))
        self.confidenceItem1.setItemText(5, _translate("UIWindowSPaTGenerator", "5 (68%)"))
        self.confidenceItem1.setItemText(6, _translate("UIWindowSPaTGenerator", "6 (73%)"))
        self.confidenceItem1.setItemText(7, _translate("UIWindowSPaTGenerator", "7 (77%)"))
        self.confidenceItem1.setItemText(8, _translate("UIWindowSPaTGenerator", "8 (81%)"))
        self.confidenceItem1.setItemText(9, _translate("UIWindowSPaTGenerator", "9 (85%)"))
        self.confidenceItem1.setItemText(10, _translate("UIWindowSPaTGenerator", "10 (88%)"))
        self.confidenceItem1.setItemText(11, _translate("UIWindowSPaTGenerator", "11 (91%)"))
        self.confidenceItem1.setItemText(12, _translate("UIWindowSPaTGenerator", "12 (94%)"))
        self.confidenceItem1.setItemText(13, _translate("UIWindowSPaTGenerator", "13 (96%)"))
        self.confidenceItem1.setItemText(14, _translate("UIWindowSPaTGenerator", "14 (98%)"))
        self.confidenceItem1.setItemText(15, _translate("UIWindowSPaTGenerator", "15 (100%)"))
        self.confidenceItem2.setItemText(0, _translate("UIWindowSPaTGenerator", "0 (21%)"))
        self.confidenceItem2.setItemText(1, _translate("UIWindowSPaTGenerator", "1 (36%)"))
        self.confidenceItem2.setItemText(2, _translate("UIWindowSPaTGenerator", "2 (47%)"))
        self.confidenceItem2.setItemText(3, _translate("UIWindowSPaTGenerator", "3 (56%)"))
        self.confidenceItem2.setItemText(4, _translate("UIWindowSPaTGenerator", "4 (62%)"))
        self.confidenceItem2.setItemText(5, _translate("UIWindowSPaTGenerator", "5 (68%)"))
        self.confidenceItem2.setItemText(6, _translate("UIWindowSPaTGenerator", "6 (73%)"))
        self.confidenceItem2.setItemText(7, _translate("UIWindowSPaTGenerator", "7 (77%)"))
        self.confidenceItem2.setItemText(8, _translate("UIWindowSPaTGenerator", "8 (81%)"))
        self.confidenceItem2.setItemText(9, _translate("UIWindowSPaTGenerator", "9 (85%)"))
        self.confidenceItem2.setItemText(10, _translate("UIWindowSPaTGenerator", "10 (88%)"))
        self.confidenceItem2.setItemText(11, _translate("UIWindowSPaTGenerator", "11 (91%)"))
        self.confidenceItem2.setItemText(12, _translate("UIWindowSPaTGenerator", "12 (94%)"))
        self.confidenceItem2.setItemText(13, _translate("UIWindowSPaTGenerator", "13 (96%)"))
        self.confidenceItem2.setItemText(14, _translate("UIWindowSPaTGenerator", "14 (98%)"))
        self.confidenceItem2.setItemText(15, _translate("UIWindowSPaTGenerator", "15 (100%)"))
        self.confidenceItem4.setItemText(0, _translate("UIWindowSPaTGenerator", "select option"))
        self.confidenceItem4.setItemText(1, _translate("UIWindowSPaTGenerator", "0 (21%)"))
        self.confidenceItem4.setItemText(2, _translate("UIWindowSPaTGenerator", "1 (36%)"))
        self.confidenceItem4.setItemText(3, _translate("UIWindowSPaTGenerator", "2 (47%)"))
        self.confidenceItem4.setItemText(4, _translate("UIWindowSPaTGenerator", "3 (56%)"))
        self.confidenceItem4.setItemText(5, _translate("UIWindowSPaTGenerator", "4 (62%)"))
        self.confidenceItem4.setItemText(6, _translate("UIWindowSPaTGenerator", "5 (68%)"))
        self.confidenceItem4.setItemText(7, _translate("UIWindowSPaTGenerator", "6 (73%)"))
        self.confidenceItem4.setItemText(8, _translate("UIWindowSPaTGenerator", "7 (77%)"))
        self.confidenceItem4.setItemText(9, _translate("UIWindowSPaTGenerator", "8 (81%)"))
        self.confidenceItem4.setItemText(10, _translate("UIWindowSPaTGenerator", "9 (85%)"))
        self.confidenceItem4.setItemText(11, _translate("UIWindowSPaTGenerator", "10 (88%)"))
        self.confidenceItem4.setItemText(12, _translate("UIWindowSPaTGenerator", "11 (91%)"))
        self.confidenceItem4.setItemText(13, _translate("UIWindowSPaTGenerator", "12 (94%)"))
        self.confidenceItem4.setItemText(14, _translate("UIWindowSPaTGenerator", "13 (96%)"))
        self.confidenceItem4.setItemText(15, _translate("UIWindowSPaTGenerator", "14 (98%)"))
        self.confidenceItem4.setItemText(16, _translate("UIWindowSPaTGenerator", "15 (100%)"))
        self.confidenceItem3.setItemText(0, _translate("UIWindowSPaTGenerator", "0 (21%)"))
        self.confidenceItem3.setItemText(1, _translate("UIWindowSPaTGenerator", "1 (36%)"))
        self.confidenceItem3.setItemText(2, _translate("UIWindowSPaTGenerator", "2 (47%)"))
        self.confidenceItem3.setItemText(3, _translate("UIWindowSPaTGenerator", "3 (56%)"))
        self.confidenceItem3.setItemText(4, _translate("UIWindowSPaTGenerator", "4 (62%)"))
        self.confidenceItem3.setItemText(5, _translate("UIWindowSPaTGenerator", "5 (68%)"))
        self.confidenceItem3.setItemText(6, _translate("UIWindowSPaTGenerator", "6 (73%)"))
        self.confidenceItem3.setItemText(7, _translate("UIWindowSPaTGenerator", "7 (77%)"))
        self.confidenceItem3.setItemText(8, _translate("UIWindowSPaTGenerator", "8 (81%)"))
        self.confidenceItem3.setItemText(9, _translate("UIWindowSPaTGenerator", "9 (85%)"))
        self.confidenceItem3.setItemText(10, _translate("UIWindowSPaTGenerator", "10 (88%)"))
        self.confidenceItem3.setItemText(11, _translate("UIWindowSPaTGenerator", "11 (91%)"))
        self.confidenceItem3.setItemText(12, _translate("UIWindowSPaTGenerator", "12 (94%)"))
        self.confidenceItem3.setItemText(13, _translate("UIWindowSPaTGenerator", "13 (96%)"))
        self.confidenceItem3.setItemText(14, _translate("UIWindowSPaTGenerator", "14 (98%)"))
        self.confidenceItem3.setItemText(15, _translate("UIWindowSPaTGenerator", "15 (100%)"))
        self.confidenceItem5.setItemText(0, _translate("UIWindowSPaTGenerator", "select option"))
        self.confidenceItem5.setItemText(1, _translate("UIWindowSPaTGenerator", "0 (21%)"))
        self.confidenceItem5.setItemText(2, _translate("UIWindowSPaTGenerator", "1 (36%)"))
        self.confidenceItem5.setItemText(3, _translate("UIWindowSPaTGenerator", "2 (47%)"))
        self.confidenceItem5.setItemText(4, _translate("UIWindowSPaTGenerator", "3 (56%)"))
        self.confidenceItem5.setItemText(5, _translate("UIWindowSPaTGenerator", "4 (62%)"))
        self.confidenceItem5.setItemText(6, _translate("UIWindowSPaTGenerator", "5 (68%)"))
        self.confidenceItem5.setItemText(7, _translate("UIWindowSPaTGenerator", "6 (73%)"))
        self.confidenceItem5.setItemText(8, _translate("UIWindowSPaTGenerator", "7 (77%)"))
        self.confidenceItem5.setItemText(9, _translate("UIWindowSPaTGenerator", "8 (81%)"))
        self.confidenceItem5.setItemText(10, _translate("UIWindowSPaTGenerator", "9 (85%)"))
        self.confidenceItem5.setItemText(11, _translate("UIWindowSPaTGenerator", "10 (88%)"))
        self.confidenceItem5.setItemText(12, _translate("UIWindowSPaTGenerator", "11 (91%)"))
        self.confidenceItem5.setItemText(13, _translate("UIWindowSPaTGenerator", "12 (94%)"))
        self.confidenceItem5.setItemText(14, _translate("UIWindowSPaTGenerator", "13 (96%)"))
        self.confidenceItem5.setItemText(15, _translate("UIWindowSPaTGenerator", "14 (98%)"))
        self.confidenceItem5.setItemText(16, _translate("UIWindowSPaTGenerator", "15 (100%)"))
        self.createSPaTButton.setText(_translate("UIWindowSPaTGenerator", "Create SPaTs"))
        self.clearFieldsButton.setText(_translate("UIWindowSPaTGenerator", "Clear Fields"))
        self.transmitSPaTsButton.setText(_translate("UIWindowSPaTGenerator", "Transmit SPaTs"))
        self.IDLabel_2.setText(_translate("UIWindowSPaTGenerator", "RSU IP:"))
        self.label_8.setText(_translate("UIWindowSPaTGenerator", "RSU Port:"))
        self.label_4.setText(_translate("UIWindowSPaTGenerator", "Status:"))
        self.label_6.setText(_translate("UIWindowSPaTGenerator", "Status"))
        self.statusInfoChange.setText(_translate("UIWindowSPaTGenerator", "..."))
        self.menuUI_for_SPaT_Creation.setTitle(_translate("UIWindowSPaTGenerator", " "))

# Main Method
if __name__ == "__main__":
    import sys
    app = QtWidgets.QApplication(sys.argv)
    w = QtWidgets.QMainWindow()
    ui = Ui_UIWindowSPaTGenerator()
    ui.setupUi(w)
    w.show()
    sys.exit(app.exec_())