create table course(
    id int primary key auto_increment,
    name varchar(64)
);

create table student(
    id int primary key auto_increment,
    name varchar(64),
    age int,
    gender char(1)
);

create table student_course(
    id int primary key auto_increment,
    student_id int not null,
    course_id int not null,
    constraint fk_student foreign key(student_id) references student (id)
);

insert into course value(1,'cpp');
insert into course value(2,'java');
insert into course value(3,'mysql');
insert into course value(4,'php');

insert into student value(1,'alice',6,'女');
insert into student value(2,'bob',32,'男');
insert into student value(3,'nergier',null,'女');

insert into student_course value(1,1,1);
insert into student_course value(2,1,2);
insert into student_course value(3,1,3);
insert into student_course value(4,2,4);
insert into student_course value(5,3,1);
insert into student_course value(6,3,2);
insert into student_course value(7,3,3);
insert into student_course value(8,3,4);

