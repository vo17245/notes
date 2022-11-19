# jdk缺少ssl安全证书

## 直接使用maven

在指令后加上
>-Dmaven.wagon.http.ssl.insecure=true -Dmaven.wagon.http.ssl.allowall=true -Dmaven.wagon.http.ssl.ignore.validity.dates=true

可以将这段参数添加到maven配置文件 ~/.mavenrc中
>MAVEN_OPTS="-Dmaven.wagon.http.ssl.insecure=true -Dmaven.wagon.http.ssl.allowall=true -Dmaven.wagon.http.ssl.ignore.validity.dates=true"

## 在idea中使用集成的maven

idea版本
```
IntelliJ IDEA 2022.2 (Community Edition)
Build #IC-222.3345.118, built on July 26, 2022
Runtime version: 17.0.3+7-b469.32 amd64
VM: OpenJDK 64-Bit Server VM by JetBrains s.r.o.
Windows 10 10.0
GC: G1 Young Generation, G1 Old Generation
Memory: 1006M
Cores: 8

Kotlin: 222-1.7.10-release-334-IJ3345.118
```

在setting中搜索maven

在importing中的VM options for importer 添加参数:
>-Dmaven.wagon.http.ssl.insecure=true -Dmaven.wagon.http.ssl.allowall=true -Dmaven.wagon.http.ssl.ignore.validity.dates=true

在Runner中的VM options 添加参数:
>-Dmaven.wagon.http.ssl.insecure=true -Dmaven.wagon.http.ssl.allowall=true -Dmaven.wagon.http.ssl.ignore.validity.dates=true -DarchetypeCatalog=internal
