## 在ubuntu 20.04上使用自带的软件库安装mysql

这将不会安装最新版本,但是问题不大


**安装**

>sudo apt install mysql-server -y

**验证安装**

>sudo systemctl status mysql.service

**设置密码**

进入mysql
>sudo mysql

在mysql下修改root密码为passwd
>ALTER USER 'root'@'localhost' IDENTIFIED WITH mysql_native_password by 'passwd';

**配置和保护mysql**

>sudo mysql_secure_installation

第一个选项为是否限定密码为强密码，任意选择
接下来的所有选项分别是
“ 移除匿名用户(remove anonymous user)”，“ 禁止 root 远程登录(disallow root login remotely)”，“ 移除测试数据库及其访问(remove test database and access to it)”。“ 重新载入权限表(reload privilege tables now)”。
全部选择yes

**检查是否能登入mysql**

>mysql -h 127.0.0.1 -u root -p

**完成!**