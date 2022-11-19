# 在boot程序中读取yml配置文件

作为示例的application.yml文件
```
server:
    port: 80

age:6

people:
    - alice
    - bob
    - foo
    - boo
```

**1.使用Value注解装配读取**
```java
@Value("${age}")
public int age;

@Value("${server.port}}")
public int port;

@Value("${people[0]}")
public String name;//alice

```

**2.将配置文件作为类整个读取**

```java
@Autowired
private Environment environment;

```
这个类的属性包含了配置文件的所有数据
使用getProperties方法读取
```java
environment.getProperties("age");
environment.getProperties("server.port");
environment.getProperties("people[0]");
```

**3.将数据读取到类中**

创建一个类
```java
@Component
@ConfigrationProperties(prefix="server")
class server{
    public port;
}
```
创建一个这个类的实例
```java
@Autowired
public server server;
```
数据将自动装配