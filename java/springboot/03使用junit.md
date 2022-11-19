# 在springboot 中使用junit

## 创建要测试的service

在Application所在目录下创建service包，在service包下创建TestService类

```java
package com.example.demo.service;

import org.springframework.stereotype.Service;

@Service
public class TestService {
    public void test(){
        System.out.println("TestService.test() was called");
    }
}

```

## 创建测试类

在test目录相同目录下创建TestServiceTest类

```java
package com.example.demo.service;

import org.junit.jupiter.api.Test;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.boot.test.context.SpringBootTest;

@SpringBootTest
public class TestServiceTest {
    @Autowired
    private TestService testService;

    @Test
    void testTest(){
        testService.test();
    }
}

```

