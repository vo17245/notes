package vo17245;

import org.apache.ibatis.io.Resources;
import org.apache.ibatis.session.SqlSession;
import org.apache.ibatis.session.SqlSessionFactory;
import org.apache.ibatis.session.SqlSessionFactoryBuilder;
import vo17245.mapper.UserMapper;

import java.io.InputStream;
import java.util.ArrayList;
import java.util.List;

public class MyBatisDemo {
    public static void main(String[] args) throws Exception{
        String resource="mybatis-config.xml";
        InputStream inputStream =Resources.getResourceAsStream(resource);
        SqlSessionFactory sqlSessionFactory=new SqlSessionFactoryBuilder().build(inputStream);
        SqlSession sqlSession=sqlSessionFactory.openSession();
        UserMapper userMapper=sqlSession.getMapper(UserMapper.class);
        ArrayList<User> users=userMapper.selectAll();
        for (User user : users) {
            System.out.println(user);
        }
        sqlSession.close();
    }
}
