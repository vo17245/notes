# DQL分页查询

## 语法

>select [字段列表] from [表名] limit [起始索引],[查询数];

分页查询是数据库的方言，不同数据库有不同的实现，在mysql中为limit
查询的如果是第一页数据，起始索引可以不写，简写为limit [查询数]
起始索引从0开始
