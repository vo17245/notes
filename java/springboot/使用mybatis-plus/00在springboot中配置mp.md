## 修改allication.yml

在application.yml中添加如下内容
```yml
mybatis-plus:
  configuration:
    #在映射实体或者属性时，将数据库中表名和字段名中的下划线去掉，按照驼峰命名法映射
    map-underscore-to-camel-case: true
    log-impl: org.apache.ibatis.logging.stdout.StdOutImpl
  global-config:
    db-config:
      id-type: ASSIGN_ID
```

## 在springboot启动类上添加注解

扫描mapper包
```java
@MapperScan("vo17245.mapper")
```