### 第1章

一、D D D A

二、

1. 客户端；服务器；浏览器；服务器
2. html；浏览器
3. .asp；.jsp；.php；html；.htm；.html；.shtml
4. 展示信息内容；进行业务逻辑的处理和与数据库的交互等
5. 动态和个性化的交流与互动

### 第2章

一、B C A B C ；B A B D C

二、

1. submit

2. \<form\>

3. \<input type="submit" value="submit"\>

4. \<br\>；\<p\>；\<h1\>；\<center\>

5. font-size: 16px

6. ```tex
   黄鹤楼送孟浩然之广陵
   故人西辞黄鹤楼，烟花三月下扬州。
   孤帆远影碧空尽，唯见长江天际流
   ```

7. width="300px" height="200px"

8. ```css
   <style>
   a{
       color:red;
       font-size:15px;
       font-family:"宋体";
   }
   </style>
   ```

   

9. ```html
   <a href="www.baidu.com">百度</a>
   ```

10. ```html
    <table width="318px" height="167px" border="1" align="center">
        <caption>学生考试成绩单</caption>
        <tr>
        	<td>姓名</td>
        	<td>语文</td>
        	<td>数学</td>
        	<td>英语</td>
        </tr>
        <tr>
        	<td>张三</td>
        	<td>89</td>
        	<td>92</td>
        	<td>87</td>
        </tr>
    </table>
    ```

### 第4章

一、C C A C A；A D A C D；

二、

1. 指定被包含文件路径。

2. 4种

3. jsp:include

4.  jsp:forward

5. <%= %>

6. response

7. application

8. request

9. ```tex
   id参数的值为：001
   name参数的值为：null
   ```

10. ```tex
    1 2
    3 4
    5 6
    7 8
    9 10
    ```


### 第5章

一、getParameter()、AC、AC、C、AB；C A A B D

二、

1. 初始化；运行；销毁

2. doGet

3. init

4. ServletRequest,ServletResponse,FilterChain

5. doPost()、doGet()、doPut()、doDelete()、doHead()、doOptions()、doTrace()

6. filter-name,filter-class,init-param(filter-mapping 里面有filter-name,url-pattern,dispatcher)

7. Servlet实例：MyServlet

8. ```tex
   执行init()
   执行doFilter()
   执行destroy()
   ```

9. 拦截客户端的请求与响应信息

10. 传递给下一个过滤器

### 第7章

一、C A BC D D；ABCD B C A ABD

二、

1. getConnection

2. executeUpdate；executeQuery

3. Driver、DriverManager、Connection、Statement、PreparedStatement、CallableStatement、ResultSet

3. forName()

3. Statement；PreparedStatement；CallableStatement

6. DriverManager.getConnection("jdbc:mysql://127.0.0.1:3306/test","root","123456")

5. ```java
   PreparedStatement pStmt = conn.preparedStatement("select * from stable_name where id = ? and (name = ? or name = ?)");
   pStmt.setString(1,"1");
   pStmt.setString(2,"wgh");
   pStmt.setString(3,"sk");
   ResultSet rs = pStmt.executeQuery();
   ```
   
   
