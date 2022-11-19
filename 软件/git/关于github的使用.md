## 指定与github进行ssh连接时使用的key

在~/.ssh/config添加

```properties
Host github.com
  HostName github.com
  User vo17245@163.com
  IdentityFile "~/.ssh/key/github"
```

其中User 添加的是git的user.mail