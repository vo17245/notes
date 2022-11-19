### 创建一个list

```python
a=[1,2,3] #一个int列表
b=["somebody","are","screaming"]#一个string 列表
c=[]#一个空列表
d=[1,"this is a string",3.14]# 元素类型不同的列表
```

### 查看list大小

```python
a=[1,2,3]
list_size=len(a)
```

### 在list末尾追加元素

```python
a=[1,2,3]
a.append(4)
```

### 访问第i个元素

```python
a=[1,2,3]
i=0
a[i]
```

### 内部实现与时间复杂度

python list使用的实现与c++ vector类似，拥有一块连续的空间来保存对象的id

由于保存的是对象的id 并且python在运行时存储对象的信息 所以list中的元素不必是类型相同的

随机访问的时间复杂度为O(1)

在末尾追加的时间复杂度为O(1)  (假设空间够大不进行重新分配空间)


