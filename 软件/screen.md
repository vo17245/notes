## 安装

apt-get install screen

## 使用

**创建一个名为a的会话，并进入**
>screen -S a

**离开这个会话**
ctrl+a ctrl+d

**查看所有会话**
>screen -ls

**进入名为a的会话**
>screen -r a

**销毁一个会话**
进入要销毁的会话，然后
>exit
