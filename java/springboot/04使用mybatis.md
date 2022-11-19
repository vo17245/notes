# 在springboot中使用mybatis

## 添加mybatis mysql的依赖

在官网创建工程时把依赖选上
或在在pom中手动添加
```xml
<dependency>
	<groupId>org.mybatis.spring.boot</groupId>
	<artifactId>mybatis-spring-boot-starter</artifactId>
	<version>2.2.2</version>
</dependency>

<dependency>
	<groupId>mysql</groupId>
	<artifactId>mysql-connector-java</artifactId>
	<scope>runtime</scope>
</dependency>
```

## 在application.yml中添加配置

```yml
server:
  port: 80

spring:
  datasource:
    driver-class-name: com.mysql.cj.jdbc.Driver
    url: jdbc:mysql://localhost:3306/java
    username: root
    passwd: 123456!aA
```



**现在已经可以正常启动程序了**

## 添加数据层





