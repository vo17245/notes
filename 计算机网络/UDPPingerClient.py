from socket import *
import time

sock=socket(AF_INET,SOCK_DGRAM)
sock.settimeout(1)
for i in range(10):
    start=time.time()
    msg=str("hello")
    sock.sendto(msg.encode(),("124.156.1.225",12000))
    try:
        res=sock.recvfrom(1024)
        end=time.time()
        print(i,": ",end-start,"ms")
        print("respone: ",res)
    except:
        print(i,": loss")
        input()
    

    

