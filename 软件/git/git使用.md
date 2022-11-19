## 一些名词

本地仓库: 有.git这个子目录的目录是本地仓库

工作区: 本地仓库除了.git子目录外的其他区域都叫工作区

仓库: 仓库存在于.git目录中,修改进入仓库成为一次提交记录

暂存区: 提交到仓库之前的缓存区

未跟踪: 在工作区中创建一个文件，这个文件没有被git跟踪

已暂存: 执行git add 指令将未跟踪的文件添加到工作区，这个文件称为已暂存

未暂存: 已经被跟踪的文件，被修改后没有添加到暂存区，被称为未暂存(未暂存文件可以使用git add添加到暂存区)

## 一些解释

**暂存区存在的意义**
暂存区的存在是为了实现命令行分组提交功能

比如在一次工作中修改了8个文件，其中3个文件与功能A相关，5个文件与功能B相关，我希望把这两种文件分成两次提交，生成两个提交记录，为每一提交记录添加相应的comment，那么就可以先把那3个文件加入暂存区然后提交，再把那5个文件加入暂存区然后提交

这个设计是为了命令行使用，在GUI下可以直接勾选需要提交的文件




## 初始化本地仓库

进入要作文仓库的目录 
执行git init


## 将修改添加进版本库

**step1.将文件添加到暂存区**

将某个文件添加到暂存区
>git add [filename]

将所有文件添加到暂存区
>git add .

**step2.将暂存区提交到仓库**

>git commit -m "[comment]"

## 查看文件状态

>git status

这个指令会列出没有被提交到仓库的文件的状态

**文件状态**

untracked file: 未跟踪

changes to be committed: 已暂存

changes not staged for commit: 未暂存

## 查看提交记录

>git log

## 版本回退

>git reset --hard [commitID]

commitID 是git log指令输出的中的commit id

## 撤销版本回退

**step1.获取回退前的commitID**

显示出已经删除的提交记录，从中找出回退前的commitID
>git relog

**step2.回退回去**

>git reset [commitID]

## 将工作区中的文件不让管理

在仓库目录下创建 .gitignore文件

内容
```gitignore
# 这是注释
a.txt
b.txt
*.a
.vscode/
```
这个.gitignore文件让a.txt b.txt 与以.a结尾的文件，.vscode子目录不让git管理


如果这个文件已经被git跟踪
如果是单个文件，可以使用如下命令从仓库中删除：
git rm --cached logs/xx.log
如果是整个目录：
git rm --cached -r logs
如果文件很多，那么直接
git rm --cached -r .

然后
git add .
git commit -m "Update .gitignore"

## 查看分支

>git branch 

## 创建分支

>git branch [name]

创建并切换到新创建的分区

>git checkout -b [branchName]

## 切换分支

>git checkout [branchName]

工作区只能属于一个分支，当切换分支时，工作区会变为那个分支的工作区，工作区的文件会变为那个分支最后一次提交的样子

## 删除分支

检查并删除分支
>git branch -d [branchName]

强制删除分支
>git branch -D [branchName]

**需要强制删除的情况**

创建了一个分支，并进行了一次commit，但是没有merge到master，这时删除会不成功，需要强制删除

## 合并分支

将其他分支合并到**当前分支**
>git merge [branchName]


