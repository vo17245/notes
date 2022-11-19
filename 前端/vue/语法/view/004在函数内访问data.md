### 访问data

在methods 的成员函数中，this表示data

```js
<template>
    <div>
        <input type="button" v-on:click="m1" value="click to i++"/>
        <input type="button" v-on:click="m2" value="click to i--"/>
        i: {{i}}
    </div>
    
</template>

<script>
    const options={
        data:function(){
            return{i:0}
        },
        methods:{
            m1:function(){
                this.i=this.i+1
            },
            m2:function(){
                this.i=this.i-1
            }
        }
    }
    export default options
</script>
```