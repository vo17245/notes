## 隐藏执行的指令

每条shell指令被执行时会输出执行的指令
在脚本开头添加:
>@echo off 

可以不输出这些信息

## 前台与后台运行程序

直接运行程序是前台执行，在程序执行时cmd窗口会一直存在知道程序退出
比如,前台执行stunnel
>D:\ProgramFiles\stunnel\bin\stunnel.exe

在程序路径前面加上start时后台执行，窗口不会阻塞在这个执行程序的语句这里
比如
>start D:\ProgramFiles\stunnel\bin\stunnel.exe