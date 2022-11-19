# 在maven结构下使用mybatis

## maven 项目的文件结构

[maven项目文件结构](../maven/maven%E9%A1%B9%E7%9B%AE%E7%9A%84%E7%BB%93%E6%9E%84.md)

## 使用步骤

1.在project/src/main/resources下创建 mybatis-config.xml
这个配置文件用于链接数据库

2.在project/src/main/java下创建映射接口，接口的名称通常为 数据库名+Mapper,如UserMapper

3.在resources 下与java 下映射接口同路径的位置创建映射文件文件名要和接口一致,如UserMapper.xml

4.初始化获取sqlSession

>String resource="mybatis-config.xml";
        InputStream inputStream =Resources.getResourceAsStream(resource);
        SqlSessionFactory sqlSessionFactory=new SqlSessionFactoryBuilder().build(inputStream);
        SqlSession sqlSession=sqlSessionFactory.openSession();

5.获取操作数据库的接口实现类

>UserMapper userMapper=sqlSession.getMapper(UserMapper.class);

## 注意事项

1.xml文件中mapper标签的namespace属性要与路径相符,
如
路径为vo17245/mapper/UserMapper.xml
namespace 为 vo17245.mapper.UserMapper

2.在mybatis-config.xml 中加载mapepr xml 文件
