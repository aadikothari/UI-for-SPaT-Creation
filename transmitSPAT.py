import sys
import time
import socket
import argparse
import os
from pathlib import Path
import signal

try:
	filenameSPAT = sys.argv[1]
	filenameMAP = sys.argv[2]
	ip, port = sys.argv[3].split(":")

except:
	print("\nIncorrect arguments, see -h for help\n")


parser = argparse.ArgumentParser(description='''Python script that reads the UPER hexes from text files and sends them over to the RSU's IP and Port along with the 		header to transmit SPATs''',
	epilog="""--Argonne National Laboratory--"""
	)

parser.add_argument('SPAT.txt', help='text file containing the encoded UPER hex values for SPaT Data')
parser.add_argument('MAP.txt', help='text file containing the encoded UPER hex values for MAP Data')
parser.add_argument('IP:Port', help='IP and port for the RSU separated by a colon')

args = parser.parse_args()
sock = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)

try:
	file = open(filenameSPAT, 'r')
except:
	print("CANNOT OPEN FILE FOR READING")
lines = file.readlines()

for l in lines:
	time.sleep(0.5)
	sendWordMAP = Path('baseMAP.txt').read_text() + "Payload=" + Path('MAP.txt').read_text()
	sock.sendto(sendWordMAP.encode(), (ip, int(port)))

	sendWordSPAT = Path('baseSPAT.txt').read_text() + "Payload=" + l
	sock.sendto(sendWordSPAT.encode(), (ip, int(port)))
	
	# print("Sent:\n", sendWordMAP)
	print("Sent:\n", sendWordSPAT)

print("\nClearing the terminal...")
time.sleep(1.5)
os.system("clear")
# send some signal here maybe
# signal.signal(signal.SIGTERM)
sock.close()	
file.close()
# sys.exit(0)