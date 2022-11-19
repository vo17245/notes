from genericpath import getsize, isfile
from socket import *
import string
import sys 
import os

root="d:/vo17245/"

def worker(clientsock,path):
    try:
        if os.path.exists(path):
            pass

    except:
        pass
    
    response=""
    response=response+"HTTP/1.1 404 Not Found"



serverPort=80
serverAddr="0.0.0.0"
serverSock=socket(AF_INET,SOCK_STREAM)
serverSock.bind((serverAddr,serverPort))
serverSock.listen(5)
