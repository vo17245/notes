## 删除预装的mysql8，如果有的话

sudo apt-get autoremove --purge mysql-server
sudo apt-get remove mysql-common
sudo rm -rf /etc/mysql /var/lib/mysql
