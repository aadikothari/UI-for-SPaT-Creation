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

intersectionID = sys.argv[1]
signalGroupID = sys.argv[2]
filename = sys.argv[3]
phaseOne, timeOne, confidenceOne = sys.argv[4].split(",")

if len(sys.argv) >= 6:
	phaseTwo, timeTwo, confidenceTwo = sys.argv[5].split(",")

if len(sys.argv) >= 7:
	phaseTwo, timeTwo, confidenceTwo = sys.argv[5].split(",")
	phaseThree, timeThree, confidenceThree = sys.argv[6].split(",")

if len(sys.argv) >= 8:
	phaseTwo, timeTwo, confidenceTwo = sys.argv[5].split(",")
	phaseThree, timeThree, confidenceThree = sys.argv[6].split(",")
	phaseFour, timeFour, confidenceFour = sys.argv[7].split(",")

if len(sys.argv) >= 9:
	phaseTwo, timeTwo, confidenceTwo = sys.argv[5].split(",")
	phaseThree, timeThree, confidenceThree = sys.argv[6].split(",")
	phaseFour, timeFour, confidenceFour = sys.argv[7].split(",")
	phaseFive, timeFive, confidenceFive = sys.argv[8].split(",")
	
filename = "SPATs/" + filename
print(filename)

"""ADD OPTIONAL ARGUMENTS FOUR AND FIVE"""

open(filename, 'w').close()
exampleJsonFile = 'base/test.json'


"""FIRST SET"""
for x in range(1, int(timeOne)+1):
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

	cls = v2x.MessageFrame
	buf = cls.from_json(inp_data, verbose=False)

	print("Converted to UPER HEX --for PHASE:", phaseOne, "--with CONFIDENCE:", confidenceOne, "--and TIME (das):", str(int(timeOne) - x), ":", binascii.hexlify(buf))
	with open(filename, 'ab') as file:
		file.write(binascii.hexlify(buf))
		file.write(b'\n')

	file.close()


"""SECOND SET"""
if len(sys.argv) >= 6:
	for x in range(1, int(timeTwo)+1):
		inp_data = Path(exampleJsonFile).read_text()

		for r in (
			('"minEndTime":x,', '"minEndTime":' + str(int(timeTwo) - x) + ','),
		('"maxEndTime":x,', '"maxEndTime":' + str(int(timeTwo) - x) + ','),
		('"likelyTime":x,', '"likelyTime":' + str(int(timeTwo) - x) + ','),
		('"confidence":x,','"confidence":' + str(int(confidenceTwo)) + ','),
		('"eventState":x,', '"eventState":' + '"' + phaseTwo + '",'),
		('"signalGroup":x,','"signalGroup":' + signalGroupID + ','),
		('"id":x','"id":' + intersectionID)
		):
			inp_data = inp_data.replace(*r)

		cls = v2x.MessageFrame
		buf = cls.from_json(inp_data, verbose=False)
		print("Converted to UPER HEX --for PHASE:", phaseTwo, "--with CONFIDENCE:", confidenceTwo, "--and TIME (das):", str(int(timeTwo) - x), ":", binascii.hexlify(buf))
		with open(filename, 'ab') as file:
			file.write(binascii.hexlify(buf))
			file.write(b'\n')

		file.close()



"""THIRD SET"""
if len(sys.argv) >= 7:
	for x in range(1, int(timeThree)+1):
		inp_data = Path(exampleJsonFile).read_text()

		for r in (
			('"minEndTime":x,', '"minEndTime":' + str(int(timeThree) - x) + ','),
		('"maxEndTime":x,', '"maxEndTime":' + str(int(timeThree) - x) + ','),
		('"likelyTime":x,', '"likelyTime":' + str(int(timeThree) - x) + ','),
		('"confidence":x,','"confidence":' + str(int(confidenceThree)) + ','),
		('"eventState":x,', '"eventState":' + '"' + phaseThree + '",'),
		('"signalGroup":x,','"signalGroup":' + signalGroupID + ','),
		('"id":x','"id":' + intersectionID)
		):
			inp_data = inp_data.replace(*r)

		cls = v2x.MessageFrame
		buf = cls.from_json(inp_data, verbose=False)
		print("Converted to UPER HEX --for PHASE:", phaseThree, "--with CONFIDENCE:", confidenceThree, "--and TIME (das):", str(int(timeThree) - x), ":", binascii.hexlify(buf))
		with open(filename, 'ab') as file:
			file.write(binascii.hexlify(buf))
			file.write(b'\n')

		file.close()

"""FOURTH SET"""
if len(sys.argv) >= 8:
	for x in range(1, int(timeFour)+1):
		inp_data = Path(exampleJsonFile).read_text()

		for r in (
			('"minEndTime":x,', '"minEndTime":' + str(int(timeFour) - x) + ','),
		('"maxEndTime":x,', '"maxEndTime":' + str(int(timeFour) - x) + ','),
		('"likelyTime":x,', '"likelyTime":' + str(int(timeFour) - x) + ','),
		('"confidence":x,','"confidence":' + str(int(confidenceFour)) + ','),
		('"eventState":x,', '"eventState":' + '"' + phaseFour + '",'),
		('"signalGroup":x,','"signalGroup":' + signalGroupID + ','),
		('"id":x','"id":' + intersectionID)
		):
			inp_data = inp_data.replace(*r)

		cls = v2x.MessageFrame
		buf = cls.from_json(inp_data, verbose=False)
		print("Converted to UPER HEX --for PHASE:", phaseFour, "--with CONFIDENCE:", confidenceFour, "--and TIME (das):", str(int(timeFour) - x), ":", binascii.hexlify(buf))
		with open(filename, 'ab') as file:
			file.write(binascii.hexlify(buf))
			file.write(b'\n')

		file.close()


"""FIFTH SET"""
if len(sys.argv) >= 9:
	for x in range(1, int(timeFive)+1):
		inp_data = Path(exampleJsonFile).read_text()

		for r in (
			('"minEndTime":x,', '"minEndTime":' + str(int(timeFive) - x) + ','),
		('"maxEndTime":x,', '"maxEndTime":' + str(int(timeFive) - x) + ','),
		('"likelyTime":x,', '"likelyTime":' + str(int(timeFive) - x) + ','),
		('"confidence":x,','"confidence":' + str(int(confidenceFive)) + ','),
		('"eventState":x,', '"eventState":' + '"' + phaseFive + '",'),
		('"signalGroup":x,','"signalGroup":' + signalGroupID + ','),
		('"id":x','"id":' + intersectionID)
		):
			inp_data = inp_data.replace(*r)

		cls = v2x.MessageFrame
		buf = cls.from_json(inp_data, verbose=False)
		print("Converted to UPER HEX --for PHASE:", phaseFive, "--with CONFIDENCE:", confidenceFive, "--and TIME (das):", str(int(timeFive) - x), ":", binascii.hexlify(buf))
		with open(filename, 'ab') as file:
			file.write(binascii.hexlify(buf))
			file.write(b'\n')

		file.close()

