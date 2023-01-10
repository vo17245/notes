# options对象的data属性

## 定义data属性

```html
<template>
</template>

<script>
const options={
    data: function(){
        return {
            name: "威整天",
            sex: "喷气机"
        }
    }
};
export default options;
</script>
```

data属性的值是一个函数,函数的返回值是一个对象，对象的各个属性是可以在vue中使用的数据

## 单向绑定data的值到template


1.在文本部分使用data


在文本部分使用{{var}}  的形式来获取数据 ,当data中的返回的对象的属性的值发生改变时，template中{{var}} 的值也会同时改变

在{{}}中可以进行一些计算，比如{{var+1}} {{var-1}} {{var=="爱丽丝"?"是爱丽丝":"不是爱丽丝"}}

```html
<template>
    <div>
        <h1>name: {{name}}</h1>
        <h1>sex: {{sex}}</h1>
    </div>
</template>

<script>
const options={
    data: function(){
        return {
            name: "威整天",
            sex: "喷气机"
        }
    }
};
export default options;
</script>
```

2.在属性中使用data


在属性部分使用data中数据，只需要在属性前加上v-bind: 把属性值写成数据变量的名称就行了，v-bind: 可以缩写成:
也就是v-bind:属性名="变量名" 或者 :属性名="变量名"的形式

```html
<template>
    <div>
        <input type="text" v-bind:value="name">
        <input type="text" :value="name">
    </div>
</template>

<script>
const options={
    data: function(){
        return {
            name: "威整天",
            sex: "喷气机"
        }
    }
};
export default options;
</script>
```
## 双向绑定data中的值到template input标签的value属性

一般双向绑定主要用于绑定data属性和input标签的value属性

因为双向绑定用于获取用户输入，只有能获取用户输入的标签才需要双向绑定

用法是用v-model代替value属性
也就是原来写value="属性值" 的地方改成 v-model="变量名"

当用户通过输入框改变value内容的时候，data中变量的值会同步发生改变

```html
<template>
    <div>
        <input type="text" v-model="name">
    </div>
</template>

<script>
const options={
    data: function(){
        return {
            name: "威整天",
            sex: "喷气机"  
        }
    }
};
export default options;
</script>
```