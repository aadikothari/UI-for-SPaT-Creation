import sys
import time
import socket
import argparse
import os

try:
	filename = sys.argv[1]
	ip, port = sys.argv[2].split(":")
	#print(ip, ':' ,port)
except:
	print("\nIncorrect arguments, see -h for help\n")


parser = argparse.ArgumentParser(description='''Python script that reads the UPER hexes from a text file and sends them over to the RSU's IP and Port along with the 		header to transmit SPATs''',
	epilog="""--Argonne National Laboratory--"""
	)

parser.add_argument('SPAT.txt', help='text file containing the encoded UPER hex values')
parser.add_argument('IP:Port', help='IP and port for the RSU separated by a colon')

args = parser.parse_args()
sock = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)

try:
	file = open(filename, 'r')
except:
	print("CANNOT OPEN FILE FOR READING")
lines = file.readlines()

for l in lines:
	tempWord = "Payload=" + l
	time.sleep(1)
	
	#APPEND
	file_obj = open('base.txt', 'a')
	file_obj.write(tempWord)
	file_obj.close()
	
	#SEND
	file_obj = open('base.txt', 'r')
	data = file_obj.read()
	while(data):
		if(sock.sendto(data.encode(), (ip, int(port)))):
			print("Sent: ", data)
			data = file_obj.read()

	file_obj.close()

	#REMOVE
	file_obj = open('base.txt', 'r')
	filedata = file_obj.read()
	file_obj.close()
	newdata = filedata.replace(tempWord,"")
	file_obj = open('base.txt','w')
	file_obj.write(newdata)

print("\nClearing the terminal...")
time.sleep(1.5)
os.system("clear")
sock.close()	
file_obj.close()
file.close()
sys.exit(0)