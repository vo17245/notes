### 作为实例的文件

add.c
```cpp
int add(int a,int b){
    return a+b;
}
```


add.h
```cpp
int add(int a,int b)
```

main.c
```cpp
#include "add.h"
#include <stdio.h>
int main(){
    int c=add(1,2);
    printf("%d\r\n",c);
    return 0;
}
```

### 编译成.o文件

将add.c文件编译为add.o文件
>gcc -c -o add.o add.c


### 编译为.so文件


将add.c文件编译为libadd.so文件
>gcc --share -o libadd.so add.c


通常动态链接库的名称都是在lib + [name] + .so

### 链接.o文件生成可执行文件

链接add.o与main.c 生成可执行文件

>gcc -o add add.o main.c


### 链接libadd.so文件生成可执行文件

>gcc -o add libadd.so main.c

这个指令生成的可执行文件add运行时将会到系统的动态链接库路径下找libadd.so

也可以在生成的可执行文件中添加寻找动态链接库的路径

>gcc -o add main.c libadd.so -Wl,-rpath=./

这个指令生成的可执行文件add也会在当前文件夹下寻找libadd.so
