# linux 下socket 使用

## 头文件

```c++
#include <sys/types.h>         
#include <sys/socket.h>
```

## 创建socket

int socket(int domain, int type, int protocol);

这个函数将创建一个唯一的标识符来表示这个socket

参数:
---

domain: 即协议域，又称为协议族（family）。
---

常用的协议组有：

AF_INET（ipv4地址（32位的）与端口号（16位的）的组合）
AF_INET6（ IPv6 的地址族）
AF_LOCAL（或称AF_UNIX，Unix域socket）（用一个绝对路径名作为地址）
AF_ROUTE

type: 指定socket类型。
---

常用的socket类型有：

SOCK_STREAM
SOCK_DGRAM
SOCK_RAW
SOCK_PACKET
SOCK_SEQPACKET等等

protocol：指定协议。
---

常用的协议有：

IPPROTO_TCP（TCP传输协议）
IPPTOTO_UDP（UDP传输协议）
IPPROTO_SCTP（STCP传输协议）
IPPROTO_TIPC等（TIPC传输协议）

>注意：并不是上面的type和protocol可以随意组合的，如SOCK_STREAM不可以跟IPPROTO_UDP组合。当protocol为0时，会自动选择type类型对应的默认协议。


## 将socket绑定ip

