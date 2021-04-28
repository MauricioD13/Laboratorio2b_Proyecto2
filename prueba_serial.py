

import serial      

port = serial.Serial('COM9', 19200, timeout=0)
fileA = open("Entrada.txt",'w')
fileB = open("Salida.txt","w")
while True:
    data = port.read(4)
    if data!=b'':
        data = int.from_bytes(data,"big")>>16
        print(data)