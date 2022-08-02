# UI-for-SPaT-Creation

Description: Creates an intuitive Graphical User Interface (GUI) for Signal Phase and Timing (SPaT) creation and transmission.

USAGE:
	python3 program.py -m [.txt file with MAP UPER hex] -s [.txt/.json file with SPAT HEXes] -f [frequency, optional, default 10] -l [use to loop through SPaT file]

SPaT File Format Requirements:
	For .txt file with SPaT Hexes: each UPER Hex should be on a newline

	For .json file with SPaT Hexes: each UPER Hex should be an element of the json file


Program will print number of messages sent, number of messages in SPaT File, time elapsed, and number of times the whole spat file has been sent (loops).

On exit, Program will print the total number of messages sent and the amount of time taken.
