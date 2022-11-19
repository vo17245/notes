create table world(
    id int primary key auto_increment,
    name varchar(64)
);
create table roster(
    id int primary key auto_increment,
    name varchar(64),
    age int,
    gender char(1),
    cute_capacity int,
    job varchar(64),
    fk_world int,
    constraint fk_roster_world foreign key(fk_world) references world (id)
);
insert into world value(1,'魔兽世界');
insert into world value(2,'怪物猎人');
insert into world value(3,'蔷薇少女');
insert into world value(4,'植物大战僵尸');
insert into world value(5,'地球online');
insert into roster value(1,'爱丽丝',6,'女',173,'js',5);
insert into roster value(2,'涅伽尔',453,'女',453,'龙',2);
insert into roster value(3,'鲍勃',32,'男',-1,'中年猥琐男',5);
insert into roster value(4,'mea',32,'女',97,'两个孩子的妈,32岁单亲母亲',5);
insert into roster value(5,'水银灯',495,'女',777,'daughter',3);
insert into roster value(6,'小喷菇',1,'女',53,'小喷菇',4);
insert into roster value(7,'希尔瓦娜斯',null,'女',53,'部落首领',1);
insert into roster value(8,'安度因',null,'男',53,'小王子',1);


