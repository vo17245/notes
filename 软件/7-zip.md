# 7-zip使用

## 压缩文件

**1**.基本压缩
7z a [dest path] [src path] 

**2**.压缩时添加密码
7z a [dest path] [src path] -p{password}

## 解压文件

**1**.基本解压
7z x [src path] -o[dest path]

**注意**: -o[dest path] 中间没有空格

**2**.解压时使用密码

7z x [src path] -o[dest path] -p{password}

## 计算哈希

**1**.使用默认CRC32哈希算法

7z h [src path]

**2**.使用指定的算法

-scrc参数指定计算的方法，支持的方法有 CRC32, CRC64, SHA1, SHA256. 默认是 CRC32.

示例：

使用sha256算法
7z h -scrcsha256 [src path]