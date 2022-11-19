## 创建数据库的表对应的实体类

使用的数据库为mysql

假设数据库有一个表,建表语句为
```sql
create table person(
    id primary key auto_increment,
    name char(32),
)
```

创建对应的实体类,使用了lombok库添加getter,setter方法和构造器
```java
package vo17245.entity;

import lombok.Data;

@Data
public class Person {
    private Integer id;
    private String name;
}

```

## 创建mapper接口

只需要集成BaseMapper父类并指定Person实体类就可以
```java
package vo17245.mapper;

import com.baomidou.mybatisplus.core.mapper.BaseMapper;
import vo17245.entity.Person;

public interface PersonMapper extends BaseMapper<Person> {
}

```