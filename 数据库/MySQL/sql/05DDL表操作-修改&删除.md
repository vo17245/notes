# DDL表操作-修改&删除

**添加字段**:
>ALTER TABLE [table name] add [col name] [col value type] comment [comment];

**修改数据类型**:
>ALTER TABLE [table name] MODIFY [col name] [new col value type];

**修改字段名和字段类型**:
>ALTER TABLE [表名] CHANGE [old col name] [new col name] [new col value type] comment [comment];

**删除字段**:
>ALTER TABLE [table] DROP [col name];

**修改表名**
ALTER TABLE [table name] RENAME TO [new table name];

**删除表**:
>DROP TABLE (IF EXISTS) [table name];

**删除指定表，并重新创建该表**:
>TRUNCATE TABLE [table name];

可用于清空表的内容

