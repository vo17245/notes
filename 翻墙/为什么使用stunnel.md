如果没有中国防火墙，理论上不使用stunnel直接与squid通信是可行的
但是直接与squid通信使用的是http协议，中国防火墙会检测到，然后禁止通信

使用stunnel可以为与squid的通信加密，避免被防火墙检测
