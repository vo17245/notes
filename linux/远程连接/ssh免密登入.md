使用密码登入和使用密钥同样安全，只是为了不输入密码比较方便

## 在本地创建密钥

ssh-keygen -t rsa

## 将公钥上传到远程主机

ssh-copy-id -i [公钥路径] [username]@[remotehost]

**如果出现**
```
ssh-copy-id : 无法将“ssh-copy-id”项识别为 cmdlet、函数、脚本文件或可运行程序的名称。请检查名称的拼写，如果包括路径，请确保路径正确，然后再试一次。
所在位置 行:1 字符: 1
+ ssh-copy-id -i ~/.ssh/id_rsa.pub root@121.41.8.157
+ ~~~~~~~~~~~
    + CategoryInfo          : ObjectNotFound: (ssh-copy-id:String) [], CommandNotFoundException
    + FullyQualifiedErrorId : CommandNotFoundException
```

**解决**
**方法一(推荐)**
手动将公钥复制到远程主机~/.ssh/authorized_keys中

**方法二**
如果路径都是默认的
先运行

```sh
function ssh-copy-id([string]$userAtMachine, $args){   
    $publicKey = "$ENV:USERPROFILE" + "/.ssh/id_rsa.pub"
    if (!(Test-Path "$publicKey")){
        Write-Error "ERROR: failed to open ID file '$publicKey': No such file"            
    }
    else {
        & cat "$publicKey" | ssh $args $userAtMachine "umask 077; test -d .ssh || mkdir .ssh ; cat >> .ssh/authorized_keys || exit 1"      
    }
}
```
然后再执行
ssh-copy-id -i [公钥路径] [username]@[remotehost]


 
