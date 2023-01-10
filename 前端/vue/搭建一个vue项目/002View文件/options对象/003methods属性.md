# method对象的methods属性

## 创建methods属性

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
    }，
    methods:{
        m1:function(){
            console.log("m1 is called");
        }
    }
};
export default options;
</script>
```

methods属性的值是一个对象，对象的每一个属性是一个函数,这些函数在vue中调用

## 在methods的函数中使用data中的数据

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
    }，
    methods:{
        m1:function(){
            console.log(this.name);
            console.log(this.sex);
            let name=this.name;
        }
    }
};
export default options;
</script>
```

在methods属性的函数中，使用this.var 的方式来访问data中的数据

## 在