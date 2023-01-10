## 指定编译jdk路径

```xml
<project>
  [...]
  <build>
    [...]
    <plugins>
      <plugin>
        <groupId>org.apache.maven.plugins</groupId>
        <artifactId>maven-compiler-plugin</artifactId>
        <version>3.7.0</version>
        <configuration>
          <verbose>true</verbose>
          <fork>true</fork>
          <executable><!-- path-to-javac --></executable>
          <compilerVersion>1.3</compilerVersion>
        </configuration>
      </plugin>
    </plugins>
    [...]
  </build>
  [...]
</project>
```

这个配置将指定javac的路径，确保编译使用的jdk版本正确