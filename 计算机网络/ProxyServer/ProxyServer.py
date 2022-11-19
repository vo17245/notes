from socket import *

import sys
import os

if len(sys.argv)<=1:
    print("Usage: \"python ProxyServer.py server_ip: It is the IP Address of Proxy Server\"")
    sys.exit(2)

tcpSerSock=socket(AF_INET,SOCK_STREAM)

server_ip=sys.argv[1]
server_port=17245
tcpSerSock.bind((server_ip,server_port))
tcpSerSock.listen(5)
while True:
    tcpCliSock,addr=tcpSerSock.accept()
    message=tcpCliSock.recv(1024).decode()
    print(message)
    print(message.split()[1])
    filename=message.split()[1].partition("/")[2]
    print(filename)
    fileExist="false"
    filetouse="/"+filename
    print(filetouse)
    try:
        f=open(filetouse[1:],"r")
        outputdata=f.readlines()
        fileExist="true"
        tcpCliSock.send("HTTP/1.0 200 OK\r\n".encode())
        tcpCliSock.send("Content-Type: text/html\r\n".encode())
        
        filename="d:/suiginton.jpg"
        fileinfo=os.stat(filename)
        filesize=fileinfo.st_size
        tcpCliSock.send("Content-Length: ",str(filesize))
        f.close()
        f=open(filetouse[1:],"rb")
        filedata=f.read()
        tcpCliSock.send(filedata)
        f.close()
        print("read from cache")
    
    except IOError:
        if fileExist=="false":
            c=socket(AF_INET,SOCK_STREAM)
            hostn=filename.replace("www.","",1)
            print(hostn)
            try:
                c.connect(hostn)

