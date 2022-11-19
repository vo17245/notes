修改配置文件的默认选项来方便登入

## 内容

```properties
#主机别名,可以使用ssh [别名] 登入
Host server
  #主机地址
  HostName 121.41.8.157
  #登入的用户
  User root
  #端口
  Port 22
```