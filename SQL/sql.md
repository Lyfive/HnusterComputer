```sql
select sno from sc group by sno having avg(grade) < 70;
```

```sql
select distinct sno from sc a where
(select avg(grade) from sc where sno = a.sno) < 70;
```

```sql
select sname,grade from student A,sc B where A.sno=B.sno and 
grade in (select max(grade) from sc,course,student where
student.sno=sc.sno and sc.cno=course.cno and cname='数据库'  and  sdept=A.sdept)
```

```sql
select max(grade) as m_grade from sc,student as stu,course
where stu.sno = sc.sno and course.cname = '数据库' and course.cno = sc.cno
group by stu.sdept
```

```sql
select student.sname,m_grade from student,sc,course,
(select max(grade) as m_grade from sc,student as stu,course
where stu.sno = sc.sno and course.cname = '数据库' and course.cno = sc.cno
group by stu.sdept) as Mx
where student.sno = sc.sno and course.cno = sc.cno and course.cname = '数据库'
and sc.grade = Mx.m_grade;
```

```sql
Create view S_student as
select student.sno, sname, ssex, sage, sdept, cname, grade 
from student,course,sc 
where student.sno = sc.sno and course.cno = sc.cno;
```

```sql
select sdept,cname,avg(grade) from S_student group by sdept,cname;
```

```sql
Create table sc(sno CHAR(10),cno CHAR(3),
grade INT NULL,
constraint PK_SnoCno primary key (sno,cno))
```



1.填空  10个 20分

2.选择  10个 20分

3.判断  10个 10分

4.分析  （关系代数，sql语句）10分+ 20分

5.综合  设计关系数据库的模式（画E-R图？） 20分



1、4、5、6、10、11章考选择，填空，判断 ；

2、3、7章考大题（关系代数、SQL、概念和逻辑设计）

