## 创建密匙对

ssh-keygen -f ~/.ssh/id_rsa

-f 参数指定创建密匙对的目录和名称

## 不能使用密钥登入的问题

本地的密钥名字需要是id_rsa，或者在配置文件中指定使用的密钥

使用ssh -vv user@domain 可以在登入时打印debug 信息，其中会显示使用了哪个密钥