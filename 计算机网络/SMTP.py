from socket import *

serverAddr="smtp.163.com"
clientSock=socket(AF_INET,SOCK_STREAM)
clientSock.connect((serverAddr,25))

def send(msg):
    clientSock.send(msg.encode())
    print("c: \r\n",msg)

def recv():
    recv=clientSock.recv(1024)
    print("s: \r\n",recv)
    return recv

data="FROM: vo17245@163.com\r\n"
data=data+"TO: vo17245@163.com\r\n"
data=data+"subject: Searching for the meaning of life.\r\n"
data=data+"\r\n"
data=data+"somebody are screaming.\r\n"
data=data+".\r\n"

recv()
send("EHLO vo17245\r\n")
recv()
send("auth login\r\n")
recv()
send("dm8xNzI0NQ==\r\n")
recv()
send("S0tJVUpMUFlUTlRQTkFFSg==\r\n")
recv()
send("MAIL FROM: <vo17245@163.com>\r\n")
recv()
send("RCPT TO: <vo17245@163.com>\r\n")
recv()
send("DATA\r\n")
recv()
send(data)
recv()
send("QUIT\r\n")
recv()




