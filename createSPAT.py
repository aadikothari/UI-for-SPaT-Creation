#!/usr/bin/env python
#-*- coding: utf-8 -*-
##
# A sample program for using the V2X DLL, compatible with Python 2.7.12.  See
# the usage statement or help(main) for details on how to call the main
# function of this module.
##

from __future__ import print_function
from cmath import phase

import sys
import binascii
from pathlib import Path

# set up the environment
import os
import xdrlib

# file present in the environment
from osys import v2x


"""CHANGE THESE ARGUMENTs"""
# first, second, third, fourth = sys.argv[1].split(":")

# time = first

# if second == 'R' or second == 'r':
# 	state = 3
# elif second == 'G' or second == 'g':
# 	state = 6
# elif second == 'Y' or second == 'y':
# 	state = 8
# else:
# 	raise ValueError("Incorrect State Entered")

# id = third
# confidence = fourth

# print(time)
# print(state)
# print(id)
# print(confidence)

# python3 createSPAT.py intersecID signGrpID [tuple1] [tuple2] [tuple3]
# where tuple = phase, time, confidence

intersectionID = sys.argv[1]
signalGroupID = sys.argv[2]
filename = sys.argv[3]
phaseOne, timeOne, confidenceOne = sys.argv[4].split(",")
# pairTwo = list(sys.argv[5])
# pairThree = list(sys.argv[6])
# pairFour = list(sys.argv[7])
# pairFive = list(sys.argv[8])

# print(phaseOne, timeOne, confidenceOne)


"""
REWRITE SPAT JSON or ASN.1 FILE
"""

open(filename, 'w').close()
exampleJsonFile = 'test.json'

for x in range(0, int(timeOne)):
	inp_data = Path(exampleJsonFile).read_text()

	for r in (
		('"minEndTime":x,', '"minEndTime":' + str(int(timeOne) - x) + ','),
	('"maxEndTime":x,', '"maxEndTime":' + str(int(timeOne) - x) + ','),
	('"likelyTime":x,', '"likelyTime":' + str(int(timeOne) - x) + ','),
	('"confidence":x,','"confidence":' + str(int(confidenceOne)) + ','),
	('"eventState":x,', '"eventState":' + '"' + phaseOne + '",'),
	('"signalGroup":x,','"signalGroup":' + signalGroupID + ','),
	('"id":x','"id":' + intersectionID)
	):
		inp_data = inp_data.replace(*r)

	print(inp_data)
	cls = v2x.MessageFrame
	buf = cls.from_json(inp_data, verbose=False)
	print("Converted to UPER HEX for",str(int(timeOne) - x), ":", binascii.hexlify(buf))
	with open(filename, 'ab') as file:
		file.write(binascii.hexlify(buf))
		file.write(b'\n')

	file.close()

# inp_data = Path(filename).read_text().replace('"minEndTime":30,', '"minEndTime":' + timeOne + ',')


# cls = v2x.MessageFrame
# buf = cls.from_json(inp_data, verbose=False)

# print("Converted to UPER HEX: ", binascii.hexlify(buf))
# print("\nwriting to file...")


"""Writing TO FILE"""

# file.close()



