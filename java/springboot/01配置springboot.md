## 配置文件的类型
类型由三种:properties yml yaml
三种配置文件同时存在时,优先级:properties>yml>yaml

本文使用yml文件配置springboot

## 使文件生效

将application.yml文件放到resource下，自动生效


## 配置文件格式

```yml
#设置启动的环境
spring:
    profiles:
        active: test

#使用"---"作为环境分隔符

---

server:
    port: 80
spring:
    profiles: dev #这个环境的标识符

---

spring:
    profiles: test
server:
    port: 8080

```
