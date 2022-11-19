## 使用官网创建

**1**.在网页中选择版本和依赖
https://start.spring.io/

常用的依赖:
spring web
mybatis
mysql driver


**2**.解压压缩包

**3**.导入idea

作为工程导入
file-->new-->project from existing source
作为模块导入
file-->new-->module from existing source

## 添加controller

例子:
在Application类所在目录下，创建controller包，在controller包下创建TestController类

```java
package com.example.demo.controller;

import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.PathVariable;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RestController;

@RestController
@RequestMapping("/test")
public class TestController {
    @GetMapping("/{id}")
    public String test(@PathVariable Integer id){
        System.out.println(id);
        return "hellow world";
    }
}

```

springboot会自动扫描Application类下面所有的controller

## 运行程序

运行Application类的main方法就可以启动程序
然后就可以访问controller

## 启动后不能开启tomcat程序直接退出的问题

检查pom中tomcat的依赖的scope属性是否为provided
去掉provided属性