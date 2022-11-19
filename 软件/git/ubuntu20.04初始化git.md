# ubuntu20.04上初始化git

## 安装git

```shell
sudo apt update
sudo apt install git
```

## 查看git是否安装成功

```shell
git --version
```

## git 全局配置用户

```shell
git config --global user.name "vo17245"
git config --global user.email "vo17245@163.com"
```

## 初始化一个已有仓库

进入仓库目录

```shell
git init
git add.
git commit -m"first commit"
```

## 在github上创建同名仓库

## 将本地openssh的公钥添加到github

## 查看公钥是否添加成功

```shell
ssh -T git@github.com
```

## 添加远程仓库

1.复制github仓库地址


2.添加远程仓库

```
git remote add [repoName] [remoteAddress]
```

## 将本地分支关联到远程仓库的分支


>git push --set-upstream [repoName] [localbranchName]:[remotebranchName]

这个指令将让远程分支merge本地分支，并将本地分支与远程分支合并，如果远程分支不存在那么将创建远程分支

