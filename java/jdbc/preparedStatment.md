# preparedStatment

## 作用

将参数中的非法字符变为转义字符，防止sql注入

通过预编译提高sql 执行效率(只在第一次执行时检查sql的语法，和将sql 转为函数)

## 注意事项

预编译功能要手动开启
开启方式: 在链接 mysql服务器的时候 在url 后加入
>useServerPrepStmts=true
