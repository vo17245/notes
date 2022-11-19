create table artist(
    id int primary key auto_increment,
    name varchar(50),
    gender char(1),
    age int,
    nickName varchar(128)
);

create table opus(
    id int primary key auto_increment,
    name varchar(50),
    issueDate date,
    fk_artist int,
    constraint fk_opus_artist foreign key (fk_artist) references artist(id)
);

insert into artist value(1,'森羅万象',null,null,null);
insert into artist value(2,'n-buna','男',null,null);
insert into artist value(3,'霜月はるか','女',null,null);

insert into opus value(1,'恋歌宣誓',null,3);
insert into opus value(2,'EXEC_FLIP_FUSIONSPHERE/.',null,3);
insert into opus value(3,'白ゆきの独白',null,2);
insert into opus value(4,'始発とカフカ',null,2);
insert into opus value(5,'Help me, ERINNNNNN!!',null,1);
insert into opus value(6,'Toge',null,1);

/*
检查插入数据与关联是否正确
select * from artist;
select * from opus;
select opus.id,opus.name,artist.name as artist from opus,artist where fk_artist=artist.id;
*/