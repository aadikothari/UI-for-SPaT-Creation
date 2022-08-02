import sys
import time
import socket
import argparse
import os
from pathlib import Path

try:
	filenameSPAT = sys.argv[1]
	valMAP = sys.argv[2]
	ip, port = sys.argv[3].split(":")

except:
	print("\nIncorrect arguments, see -h for help\n")


parser = argparse.ArgumentParser(description='''Python script that reads the UPER hexes from text files and sends them over to the RSU's IP and Port along with the 		header to transmit SPATs''',
	epilog="""--Argonne National Laboratory--"""
	)

parser.add_argument('SPAT.txt', help='text file containing the encoded UPER hex values for SPaT Data')
parser.add_argument('MAP', help='encoded UPER hex value for MAP Data')
parser.add_argument('IP:Port', help='IP and port for the RSU separated by a colon')

args = parser.parse_args()
sock = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)

try:
	file = open(filenameSPAT, 'r')
except:
	print("CANNOT OPEN FILE FOR READING")
lines = file.readlines()

mapInterval = 0

for l in lines:
	time.sleep(1)
	mapInterval = mapInterval + 1

	sendWordSPAT = Path('base/baseSPAT.txt').read_text() + "Payload=" + l
	sock.sendto(sendWordSPAT.encode(), (ip, int(port)))
	
	# Send a MAP for every 10 SPaTs
	if mapInterval % 10 == 0:
		sendWordMAP = Path('base/baseMAP.txt').read_text() + "Payload=" + valMAP
		sock.sendto(sendWordMAP.encode(), (ip, int(port)))
		print("Sent:\n", sendWordMAP)

	print("Sent:\n", sendWordSPAT)

# End of process clears terminal and closes files and socket.
print("\nClearing the terminal...")
time.sleep(1.5)
os.system("clear")
sock.close()	
file.close()