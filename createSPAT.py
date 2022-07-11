#!/usr/bin/env python
#-*- coding: utf-8 -*-
##
# A sample program for using the V2X DLL, compatible with Python 2.7.12.  See
# the usage statement or help(main) for details on how to call the main
# function of this module.
##

from __future__ import print_function

import sys
import binascii

# set up the environment
import os

# file present in the environment
from osys import v2x

first, second, third, fourth = sys.argv[1].split(":")

time = first

if second == 'R' or second == 'r':
	state = 3
elif second == 'G' or second == 'g':
	state = 6
elif second == 'Y' or second == 'y':
	state = 8
else:
	raise ValueError("Incorrect State Entered")

id = third
confidence = fourth

print(time)
print(state)
print(id)
print(confidence)

"""
REWRITE SPAT JSON or ASN.1 FILE
"""

filename = "personalMessages/message.json"


inp_data = open(filename, 'r').read()
print(inp_data)

cls = v2x.MessageFrame
buf = cls.from_json(inp_data, verbose=False)


print("Converted to UPER HEX: ", binascii.hexlify(buf))
print("\nwriting to file...")

with open('SPAT.txt', 'wb') as file:
	file.write(binascii.hexlify(buf))
	file.write(b'\n')
	file.write(binascii.hexlify(buf))

file.close()



