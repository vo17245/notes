import os
filename="d:/suiginton.jpg"
f=open(filename,"rb")
data1=f.read(20)
data2=f.read(20)
if data1==data2:
    print("y")
else:
    print("n")

