## 安装

sudo apt-get -y install tinyproxy

## 开关

启动 TinyProxy
service tinyproxy start

停止 TinyProxy
service tinyproxy stop

重启 TinyProxy
service tinyproxy restart

## 配置

TinyProxy 默认配置文件路径为 /etc/tinyproxy/tinyproxy.conf。如果你要自定义配置文件位置，可以在启动 TinyProxy 时 通过 -c 参数来指定。