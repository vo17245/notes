## 环境准备

假设正在运行的nginx版本为1.14.2
需要升级到1.16.2

**下载编译nginx1.16.2**

注意:只执行configure make，但是不执行make install

## 方案一

**使用信号控制升级**

**1**.备份1.14.2版本的可执行文件nginx

**2**.将生成的1.16.2版本下objs/下的nginx替换1.14.2版本的nginx

**3**.发送信号USR2给1.14.2版本的进程 kill -USR2 [PID],这会开启
1.16.2版本的进程

**4**.结束1.14.2版本的进程 kill -QUIT `more /usr/local/logs/nginx.pid.oldbin`

## 方案二(推荐，但需要是默认路径安装)

**使用make命令升级**

**1**.备份1.14.2版本的可执行文件nginx

**2**.将生成的1.16.2版本下objs/下的nginx替换1.14.2版本的nginx

**3**.在1.16.2版本根部录下执行 make upgrade