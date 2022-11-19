#import socket module
from genericpath import getsize
from socket import *
import string
import sys # In order to terminate the program
serverSocket = socket(AF_INET, SOCK_STREAM)
#Prepare a sever socket
#Fill in start
serverPort=80
serverAddr="0.0.0.0"
serverSocket.bind((serverAddr,serverPort))
serverSocket.listen(5)
#Fill in end
while True:
 #Establish the connection
 print('Ready to serve...')
 connectionSocket, addr =serverSocket.accept() #Fill in start #Fill in end 
 try:
  message = connectionSocket.recv(2048)#Fill in start #Fill in end 
  filename = message.split()[1] 
  f = open(filename[1:]) 
  #Fill in start
  
  file_size=getsize(filename[1:])
  outputdata = f.read(file_size)

  #Fill in end 
  #Send one HTTP header line into socket
  #Fill in start
  header=""
  header=header+"HTTP/1.1 200 OK\r\n"
  header=header+"Connect: close\r\n"
  header=header+"Content-Type: text/html\r\n"
  header=header+"Content-Length: "+str(file_size)+"\r\n"
  header=header+"\r\n"
  #Fill in end 
  #Send the content of the requested file to the client
  for i in range(0, len(outputdata)): 
   connectionSocket.send(outputdata[i].encode())
   #connectionSocket.send("\r\n".encode())
 
  connectionSocket.close()
 except IOError:
  
 #Send response message for file not found
 #Fill in start 
  print(filename[1:])
  header=""
  header=header+"HTTP/1.1 404 Not Found\r\n"
  header=header+"\r\n"
 #Fill in end
 #Close client socket
 #Fill in start
  connectionSocket.close()
 #Fill in end 
  serverSocket.close()
  sys.exit()#Terminate the program after sending the corresponding data