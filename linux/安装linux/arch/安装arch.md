# 虚拟机安装

## 前言

arch 的安装比较特殊，需要先进入arch live然后在挂载的磁盘上安装arch和引导
在磁盘上安装arch的过程需要联网，下载大约517.99M内容
安装引导程序需要联网，需要下载大约40M内容

这份记录写于2022/7/23

## 环境
```
实体机: windows10 
virtualbox: 
    版本 6.1.36 r152435 (Qt5.6.2)
    启用efi
arch镜像: archlinux-2022.07.01-x86_64.iso
```
注意:一定要在开始之前将virtualbox的efi开启

## 进入arch live

## 挂载硬盘

需要一块efi格式的512M的引导盘，和一块ext4格式的根目录盘
下面以/dev/sda1作为引导盘，/dev/sda2作为根目录盘
引导盘和根目录盘需要在同一块物理盘下，这个物理盘上允许存在更多分区
sda表示这块物理盘

查看所有磁盘以及分区情况
>fdisk -l

将根目录盘挂载到/mnt
>mount /dev/sda2 /mnt

创建/mnt/boot目录
>mkdir /mnt/boot

将引导盘挂载到/mnt/boot
>mount /dev/sda1 /mnt/boot

**注意这几条指令的顺序**


## 安装系统到硬盘

使用网络下载的方式安装

**修改系统镜像源**

进入镜像源的文件
vim /etc/pacman.d/mirrorlist
将带有china注释的一组仓库放到最前面（在这个文件中最前面的优先级最高）


**下载安装系统到硬盘**

除了基本的arch还添加了基本开发套件，私有驱动，内网ip管理
>pacstrap /mnt base base-devel linux linux-firmware dhcpcd


**将挂载关系映射到文件**

自动映射
genfstab -L /mnt >> /mnt/etc/fstab
检查映射是否正确
vim /mnt/etc/fstab

**安装引导程序**

进入安装的系统
>arch-chroot /mnt

下载grub组件，这两个组件配合grub检查存在的系统
>pacman -S os-prober ntfs-3g

下载grub
>pacman -S grub efibootmgr

安装grub
>grub-install --target=x86_64-efi --efi-directory=/boot --bootloader-id=grub

生成配置文件
>grub-mkconfig -o /boot/grub/grub.cfg

## 配置这个安装的系统

arch没有自带的文本编辑器，不换源想下载编辑器连不上国外服务器，想更换源没有编辑器非常麻烦，所以现在先安装上

**安装vim**

**配置root密码** 


## 卸载硬盘

**回到arch live**
>exit

**卸载**

>umount /mnt/boot
umount /mnt

**注意**:先卸载引导盘，再卸载根目录盘

## 重启进入安装的系统

>reboot

## 完成






