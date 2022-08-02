# UI-for-SPaT-Creation

DESCRIPTION:
	An intuitive Graphical User Interface (GUI) for Signal Phase and Timing (SPaT) UPER encoded hex creation and transmission to the RSU.

USAGE:
	python3 UI_SPATGen.py

FILES:
	requirements.txt - Contains the dependencies for the project. Run a 'pip3 install -r requirements.txt'
	base/ - Contains headers for SPaT/MAP messages. DO NOT CUSTOMIZE
	osys/ - OBJ_SYS API Important files. DO NOT CUSTOMIZE
	SPATs/ - Stores the saved SPaT UPER encoded hexes here. Select files for transmission from here.
	v2x_api_76100_lb/ - OBJ_SYS API Important files. DO NOT CUSTOMIZE
	test.ui - Qt Designer UI file that has the GUI design. Customizations were made beyond the working UI.
	createSPAT.py - Python script that creates SPaT messages. Stores base in a string, replaces 'x' variables from baseSPAT & baseMAP files with user entered variables and stores it in the file specified. Loops till last SPaT has been created.
	transmitSPAT.py - Python script that transmits SPaT/MAPs. Sends 10 SPaTs and 1 MAP over an interval of 1 second. Uses UDP protocol to send SPATs from file specified and MAP from the entered value. Takes RSU's IP/Port as inputs.
	
	UI_SPATGen.py - Python script that runs the GUI. The GUI has several functionalities. 
	The first tab is responsible for automated SPaT UPER hex creation - it can take user input for SPaT parameters. If a required parameter is missing, it will notify that using the Status bar. The Phase Information tab also changes dynamically to display the information about the selected phase. It can take upto 5 combinations of phase, time, and confidence value - but at least one is REQUIRED. Once 'Create SPaTs' button is hit, it runs the createSPAT.py script as a subprocess in the system so that it does not interfere with the main thread of the UI. SPaTs are stored in SPATs/ with the custom file name (.txt is needed). Clear fields will reset the values for another use.
	The second tab is responsible for customized transmission of SPaT/MAP UPER Hexes. The RSU's port defaults to 1516 but can be changed if needed. IP address can be customized for the RSU. Hitting the Select SPATs button will open file explorer and prompt to select a file. This selected file goes into the status bar. The program identifies the file with the help of the status bar, so unselecting a file or resetting it will prompt you to select the file again. The file can be in any python-readable format, but needs to have the SPaTs line-by-line. MAP UPER Hexes are simply plugged in the line edit box titled 'MAP UPER encoded hex'. Hitting 'Transmit SPaTs' will run the transmitSPAT.py script as a subprocess in the system so that it does not interfere with the main thread of the UI. Once transmission has finished, hit the 'Stop Transmit' button to reset the GUI to its original state.
