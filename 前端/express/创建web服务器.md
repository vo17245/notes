## 创建

进入要创建express的目录下

npm install express --save-dev

## 修改package.json

package.json 中添加"type":"module",使能够使用import方式导入包

```json
{
  "type":"module",
  "devDependencies": {
    "express": "^4.18.2"
  }
}

```

## 创建启动脚本

```js
import express from "express"

const app = express()//获取服务器实例
app.listen(7070)//监听7070端口
app.use(express.static("./public"))//映射静态资源


```

