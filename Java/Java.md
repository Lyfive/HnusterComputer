# Java复习

## 考试题型

一、选择题（每小题2分，本题共12分）
二、阅读程序题（每小题6分，本题共18分）
三、简答题（每题5分，本题共20分）
四、程序设计题（每小题10分，本题共50分）

## 小Tips

①第八章只有选择题（书上

②第十章可能会有一道程序设计题



## 第一章

### 一、OOP的特点

①简单易用（相比较C++的运算符重载、多重继承更简单

②安全可靠（Java提供了一套可靠的安全机制防止恶意代码的攻击

③跨平台（Java引入虚拟机JVM，使得Java可以在不同操作系统上运行

④面向对象（将世界所有的事物都抽象成对象

⑤支持多线程（Java内置多线程控制

### 二、JDK

$JDK：是有Sun公司提供的一套Java开发环境$

$JDK包括Java编译器、Java运行工具、Java文档生成工具、Java打包工具等$

$JDK1.0发布于1996年1月，现主要用JDK8（后还有JDK9,10）$

### 三、JRE

$JRE是Java运行环境，不包含编译工具，主要提供给普通用户使用$

$JDK包含Java运行工具，为此JDK包含JRE$

### 四、Java运行机制

步骤：

①编写好源文件.java

②编译器编译源文件生成.class字节码文件

③解析器解析字节码文件，并加载到内存并生成机器码文件（过程称之为类加载）

④计算机识别机器码文件开始运行程序



## 第二章

### 一、标识符命名规则

标识符由大小写字母、数字、下划线(\_)、美元符号(\$)组成，同时不能以数字开头，不能为Java自带的关键字。

习惯性规范：

①包名所有字符均小写

②类名和接口名首字母大写

③常量名均大写

④变量名和方法名使用驼峰命名法（首单词小写，其他单词首字母大写）

⑤使用具有意义的命名

### 二、变量类型

**整型**

①byte（字节型）1字节（8bit）

②short（短整型）2字节

③int（整型）4字节

④long（长整型）8字节，以l/L结尾修饰则为long类型。例如：123l、456L

**浮点型**

①float（单精度）4字节，以f/F结尾修饰则为float类型。例如：1.23f、4.56F

②double（双精度）8字节，以d/D结尾修饰则为double类型。例如：1.23d，4.56D

**自动类型转换**

描述：两种数据类型在转换的过程中自动发生的类型变换。

特点：

①小字节类型向大字节类型转换。如：byte、short、int自动转换成long

②整型向浮点型类型转换。如：long转换成float

③字符串"+"拼接自动转换成字符串

**强制类型转换**

描述：不能自动类型转换时，直接赋值导致报错，此时需要强制类型转换

特点：

需要类型兼容：比如String不能强制转换为char，没有继承关系的类Dog不能强制转换成Cat

### 三、变量、常量

**常量**

以**[final](###五、final关键字)**修饰声明是一个不可改变的量

常量池概念：[参考链接](https://www.cnblogs.com/syp172654682/p/8082625.html)

**其他常量**

布尔常量：true、false

字符串常量

null常量

### 四、运算符

注意点："=="对于引用类型，判断的是地址。 test：常用语比较String，对于String字面量用 equals()比较

与C/C++不同，Java的逻辑与有&和&&，逻辑或有**|**和**||**其中，**&&**与**||**支持短路（短路就是&&前面为false那么&&后面就不判，同理||前面为true则后面也不判)

### 五、循环

特殊for循环结构， for( *type* x : *可迭代对象*) 将可迭代对象每次循环赋值一个元素给x

### 六、数组

定义：

①*type*[] name = new *type*[*length*]

②*type*[] name = new *type*[*length*]{*e1*,*e2*,...,$e_{length}$}

③①*type*[] name = {*e1*,*e2*,...}

属性：length（返回数组长度）



## 第三章

### 一、面向对象的特征

**1.封装**

概念：将对象的属性和行为封装起来，不需要让外界知道具体实现细节。

**2.继承**

概念：描述类与类之间的关系，无须通过重新编写原有类的情况下，对原有类的功能进行扩展。

**3.多态**

概念：一个类中定义的属性和功能被其他类继承后，当把子类对象直接赋值给父类引用变量时，相同引用类型的变量调用同一个方法所呈现的多种不同行为特征。

### 二、访问控制符级别

权限大小：**private < default < protected < public**

**1.private**：仅类内成员和方法可以访问，其他类无法访问。

**2.default**：默认修饰符，类成员只能被本包中的其他类访问。

**3.protected**：可以被本包及子类访问

**4.public**：所有类均可访问

### 三、方法重载 重载条件

**意义：**应付相似功能，减少命名压力

**重载条件：**方法名相同、方法参数类型或参数个数不同

### 四、构造方法

**条件：**

①方法名与类名相同

②方法名前面**没有返回值类型**的声明

③不能使用return语句返回一个值，但可以通过return**提前结束方法**

**分类：**

无参构造、有参构造、构造函数重载

### 五、this关键字

**理解：** **this**理解为此类处，指代此实例化对象

**用处：**

①变量名与成员变量同名，用**this**区分

②每一个成员方法的隐含参数。（可以通过**this**调用成员方法

③使用一个构造方法时，调用本类其他构造方法（Test：只能在构造方法的首句使用，且不能相互调用

### 六、static关键字

**注意点：**

①修饰后的成员及方法，仍属实该类，但不能用this调用，同时this不能修饰局部变量。

②静态方法只能调用**静态成员方法**和**静态成员属性**（Test：原因其实很简单，每一个实例化对象的非静态属性可能不一致，会导致1对多的情况，所以限制成这样了）

③静态代码块：

1.定义在主类中时，会优先与main()方法执行；

2.定义在非主类时，会优先于构造方法执行。且当类被加载（**new构造实例化对象**）时，静态代码块会被执行**且只执行一次**。

（Test：和Go的Init()函数一致，可以理解为用于初始化函数）



## 第四章

### 一、单继承 继承实现

**关键词：extends**

只允许一个类单继承另外一个类

**格式：**public *ClassA* **extends** ClassB{}

### 二、重写

**访问权限要求：**重新的子类方法权限$\geq$ 父类方法权限。 如：public > private

**格式要求：**方法名、参数要求一致

### 三、super关键字

**理解：**相比较与[**this**](#五、this关键字)关键字进行理解

**用处：**

①如果有同名成员，可以使用**super.**name访问成员

②在使用构造方法时，可以在**首句**使用**super()**调用父类构造方法（这个时候**super()**和**this()**就不能同时使用了

③创造子类对象时，会自动先调用父类构造方法。（这个时候用**super()**的意义主要为使用父类的其他有参构造

### 四、Object类

**含义：** **Object**类是所有类的父类（意味着**Object**可以对**所有类向下转型**，**所有的类**都含有**Object**的成员

**成员方法：**

①**equals() :** 判断某个对象是否与此对象相等。（实际就是比较**两个对象**是否指向**同一个对象**，即**内存地址**是否相等

②**hashCode():** 返回该对象的哈希值。（就是哈希表的位置

③**getClass():** 返回该对象运行时表现的类（此时是**包名+类名**的全限定名称）。（比如**Animal a = new Cat() **返回就是**Cat**，

④**类名.class.getName():** 输出完整的类名（**包名+类名**

⑤**toString():** 返回该对象的字符串表达形式。（~~具体不明白，只知道**new String() **就输出String~~，对对象重载toString使得println输出的时候执行返回toString的内容。)

### 五、final关键字

**1.修饰变量：** 就是定义常量，需要**第一次赋值**，且**不能再次修改**值。

**2.修饰方法：** 定义一个**最终方法**，最终方法**不能**被后续子类重写（目的可能保持**个性**

**3.修饰类：** 定义一个**最终类**，最终类**不能**被继承。

### 六、抽象类（abstract

**1.abstract关键字：** 被**abstract**修饰后被定义为**抽象类型**，抽象类型则意味**没有细节内容**，**不能**在定义的时候去**实现**。

**2.抽象类：** 抽象类就是被**abstract**修饰的类，该类**不能被实例化**。（理解很简单，细节都没有实例化以后都不知道能做什么

**3.抽象方法：** 被**abstract**修饰的方法，**有抽象方法**的类一定要**是抽象类**。（理解同上，细节有抽象则整体还未完成

**4.子类继承：** 子类**继承抽象类**则必须**完成抽象方法**，否则需**继续**定义为**抽象类**。（理解一致，细节没完成都是抽象的

### 七、接口（interface

**1.定义：** 一个特殊的抽象类，所有方法~~均为抽象方法。~~

**2.修饰符限制：** 接口的**所有成员变量**均使用**public static final**修饰；**所有成员方法**均使用**public abstract**修饰。（原因也很简单，**接口**是**动作的集合**，我要把所有动作都可见（即public），所有后续得到的属性都一致（static final），所有方法均抽象（abstract））

**3.JDK8后特性：** 可以使用**public static（静态）方法**和**public default（默认）方法**，且这些方法允许**有方法体**。（加入这些为接口添加最基础的无需后续子类完成的内容，方便开发）

**4.注意点：**

①实现类（非抽象类）**必须重写**所有抽象成员方法

②一个类**继承类**使用**extends**关键字，**继承接口**使用**implements**关键字

③**抽象类**继承接口后可以完成**部分**接口、**所有**接口或者**都不完成**。

④类可以先**extends**继承一个类，再使用**implements继承多个接口**。

⑤类只能**extends**一个类，接口可以**extends**多个接口，但接口**不能**使用implements继承其他接口。

### 八、多态

**1.前提条件：** 必须是**子类继承父类**、**重写父类方法**（子类特殊性）、**父类引用指向子类对象**（[向上转型](###二、变量类型)）。 如：Animal a = new Cat()

**2.注意细节：**

①**向上转型中**父类**不能**使用子类独特成员，只能使用子类**继承的成员**。

②**向上转型中**父类使用的成员展现的是**子类的特性**。（多态的意义，表现特殊性）

③**向下转型** 需要父类已经**向上转型后** 才能实现。（意思就是父类**指向**了子类，子类再**恢复**成子类的样子。如：Animal a = new Cat(); Cat c = (Cat) a;

**3.instanceof关键字：** 判断两个对象的本质类型**是否一致**。形式上：**a instanceof b**（比如：Animal a = new Cat() 以后a的**本质类型**其实是Cat

### 九、内部类

**1.成员内部类**

**含义：** 在类内再定义一个新的类，此新类为**成员内部类**。

**注意点：**

①外部类可以**直接使用**内部类**静态成员**。

②内部类可以**直接使用**外部类成员。

③其他类也可以**间接**利用外部类使用内部类**静态成员**。

④其他类**访问内部类**需要先构造外部类对象，再利用**外部类**对象**创建内部类**对象。

⑤其他类若想**构造内部类**，内部类需要为**静态类**。

### 十、异常

**1.关键字：** **try、catch、finally**

**2.注意点**

①对于有异常抛出的方法，使用**try**进行**捕获**，若**发生**异常则**try**内其他语句**不会执行**。

②**catch**分析异常，一个**cacth**对于一种异常进行后序控制操作。（**catch(oneExample e){}**

③**finally**是指**try**或**catch**后**必执行**的语句。(如遇见**System.exit()**程序退出，则不会执行

**3.thorws及throw**

**thorws关键字：**

异常不急于处理，通过使用thorws关键字将异常从当前方法中抛出，然后让后续的调用者在使用时再进行异常处理。（支持一次性抛出多种异常

格式： **方法** *thorws* **异常类1** ... **异常类x** 

**Tip：** 很容易看出**thorws**是针对方法，使处理异常延后至使用这个方法的时候。

**throw关键字：**

**手动**在方法体能**抛出**一个异常，此异常相当于某方法抛出异常一样依然需要**try...catch** 或者 **throws**处理

### 十一、垃圾回收

**1.系统线程：** JVM会自动开启一个系统线程监控垃圾回收过程。

**2.垃圾概念：** 无引用指向的对象（通过可恢复状态变成不可用状态

**3.System.gc() :** System类的gc()静态方法进行强制启动垃圾回收（只是催促gc进行检查回收，但不能指定马上回收

## 第五章

### 一、String

**1.初始化**

String() : 初始化一个空串

String(String value) : 初始化一个指定串

String(char[] value) : 根据字符数组初始化一个指定串

**2.常用操作**

**①int indexOf(int ch) :** 返回指定字符在此字符串第一次出现的索引

**②int lastIndexOf(int ch) :**  返回指定字符在此字符串最后一次出现的索引

**③int indexOf(String str) :** 返回指定子字符串在此字符串中第一次出现处的索引。

**④int lastIndexOf(String str) :** 返回指定子字符串在此字符串中最右边出现处的索引。

**⑤char charAt(int index) :** 返回指定索引处的 char 值。

**⑥int length():** 返回字符串的长度

**⑦boolean equals(Object anObject):** 比较此字符串与指定的字符串是否相同

**⑧String substring(int beginIndex,int endIndex) :** 返回 [begin,end)之间的子串

**⑨char[] toCharArray() :** 将字符串转化成一个字符数组

**Tip:** 以上9个最常用，其他常用的方法在书上P156

### 二、StringBuffer

**1.与String的区别**

①String类定义的**字符串是常量**，一旦创建后，内容和长度都无法改变；StringBuffer表示**字符容器**，内容和长度可以进行修改。

②String类**重写**了Object的equals()方法用于比较**字面量**，StringBuffer类**没有**重写，对比的是**对象地址**。

③String类可以使用+进行连接，StringBuffer不能。

**2.常用方法**

**①StringBuffer append(char c) : ** 添加字符到StringBuffer对象的末尾

**②StringBuffer insert(int offset,String str) :** 在指定位置offset插入字符串str

**③StringBuffer deleteCharAt(int index) :** 移除指定索引出的字符

**④StringBuffer delete(int start,int end) :** 移除[start,end)间的字符串

**⑤StringBuffer replace(int start,int end,String s) :** 将[start,end)之间的字符串替换成s （Tip：相当于执行delete + insert

**⑥void setCharAt(int index,char ch) : ** 修改指定索引处的字符

**⑦String toString() :** 返回字符串常量

**⑧StringBuffer reverse() :** 将StringBuffer的串翻转

### 三、Math

**常用方法：**

**①常用三角函数：cos、sin、tan**

**②常用数学函数：abs(绝对值)、sqrt(平方根)、cbrt(立方根)、pow(乘方)**

**③取整函数：ceil(向上取整)、floor(向下取整)、round(小数四舍五入)**

**④比较函数： max、min**

**⑤生成随机数：random(生成一个[0.0,1.0)的随机数)**

Tip：生成一个**[n,m]**范围的**整数** -> **(int)(Math.random() * (m - n+1) + n);  **

**分析：** (int) (Math.random() * (m - n + 1))范围为[0,m-n]，再+n范围为[n,m]

### 四、Random

**1.构造方法**

**①Random() :** 创建默认的生成器，每次实例化对象都生成不同的随机数

**②Random(long seed) :** 使用一个long型的seed(种子)创建伪随机数生成器，seed相同，每次实例化Random对象会生成相同的随机数。

Tip：第一种无参构造本质是随机使用一个long种子 所以每次生成的数是随机的

**2.常用方法**

**①boolean nextBoolean() :** 随机生成一个boolean类型的随机数

**②double nextDouble() :** 随机生成一个double类型的随机数 （生成数据范围 [0,1.0)

**③float nextFloat() :** 随机生成一个float类型的随机数 （生成数据范围 [0,1.0)

**④int nextInt() :** 随机生成int类型的随机数

**⑤int nextInt(int n) : ** 随机生成一个[0,n)的int类型的随机数

**⑥long nextLong() :** 随机生成一个long类型的随机数

### 五、包装类

**1.目的**

为8种数据类型提供面向对象的编程机制（没有属性和方法） Tip：实际就是填补缺少指针的缺陷，指针传入为引用对象，可以在方法内对其进行修改。

**2.八种包装类**

**byte -> Byte**

**char -> Character**

**int -> Integer**

**short -> Short**

**long -> Long**

**float -> Float**

**double -> Double**

**boolean -> Boolean**

**3.引入概念**

包装类和基本数据类型转换时，引入了自动装箱（Autoboxing）的概念，和自动拆箱（AutoUnboxing）的概念。

自动装箱：基础数据类型 赋值给 包装类

自动拆箱：包装类 赋值给 基础数据类型

**4.注意细节**

①包装类重写了Object的toString()方法，返回值是对于基础类型值的字符串形式

②包装类（除Character）有静态方法valueOf() 参数为字符串或基础类型，返回值为包装类。 （Tip：静态方法使用 *类名.方法名使用*

③包装类均有静态方法parseXxx() （Xxx是基础类型）参数为字符串，返回值为基础数据类型

### 六、Date

**1.创建对象方式**

①Date() 无参构造，创建当前日期时间的Date对象

②Date(long date) 有参构造，创建指定时间的Date对象，date参数表示1970年1月1日0时0分0以来的毫秒数（俗称时间戳

**2.获取当前系统时间**

用无参构造后，直接输出Date对象即可。

### 七、格式化类（DateFormat、SimpleDateFormat

**1.DateFormat创建对象**

DateFormat是一个抽象类，不能直接实例化，但可以通过类内的静态方法构造其专用format类。

**①static DateFormat getDateInstance() :** 创建默认语言环境和格式化风格的日期格式器

**②static DateFormat getDateInstance(int style) :** 创建默认语言环境和指定格式风格的日期格式器

**③static DateFormat getDateTimeInstance() :** 创建默认语言环境和格式化风格的日期/时间格式器

**④static DateFormat getDateTimeInstance(int dateStyle,int timeStyle) :**  创建默认语言环境和指定格式化风格的日期/时间格式器

**⑤String format(Date date) :** 将一个Date格式化为日期/时间字符串

**⑥Date parse(String source) : ** 将给定字符串解析成一个日期（局限性在于字符串必须符合日期/时间的格式，否则会抛出异常，**为此使用这个方法需要进行异常处理**。

**2.补充**

DateFormat类的格式常量，用于上述方法的参数：

①FULL 表示完整格式

②LONG 表示长格式

③MEDIUM 表示普通格式

④SHORT 表示段格式

**3.SimpleDataFormat类创建对象**

SimpleDateFormat类是DateFormat的子类，可以进行实例化对象。它是为了更好得格式化日期而出现的。

①实例化对象时，需要一个日期格式模板的字符串参数。如：SimpleDateFormat sdf = new SimpleDateFormat("Gyyyy年MM月dd日：今天是yyyy年的第D天，E");

②SimpleDateFormat会通过模板文件，使用format(str)方法时根据模板进行格式化

## 第六章

### 一、单列集合

根接口：Collection

理解单列集合，就是没有高级索引（“映射关系”）

**List接口分支（有序列表**

- ArrayList\<E\>  array = new ArrayList\<E\>() （E为**泛型**，只能为**引用类型**

  - 方法：

    - add() 末尾添加元素
    - get(int) 获取索引处的元素
    - remove(int) 删除索引处的元素
    - size() 获取数组长度

  - 遍历：

    - for(E e: array){}

    - array.forEach(o -> System.out.printLn(o));  //使用了lambda表达式实现函数式接口（函数式接口参考书籍P132

    - ```java
      Iterator it = array.iterator();
      while (it.hasNext()) {  //hasNext()是否有下一个
          Object obj = it.next(); // next() 获取下一个元素并移位，返回值是Object
          System.out.println(obj);
      }
      ```

**Set接口分支（无序列表**

- HashSet\<E\> hs = new HashSet\<E\>() （E为**泛型**，只能为**引用类型**

  - 方法：

    - add() 添加元素
    - remove(e) 删除指定元素
    - clear() 清空集合
    - size() 返回集合大小

  - 遍历：

    - for(E e: hs){}

    - hs.forEach(o -> System.out.printLn(o));  //使用了lambda表达式

    - ```Java
      Iterator it = hs.iterator();
      while(it.hasNext()){
          Object str = it.next();
          System.out.println(str);
      }
      ```

### 二、双列集合

根接口：Map

理解双列集合就是为集合添加了高级索引（具有“映射关系”，键值对）

**HashMap集合（无序集合**

- HashMap\<k,v\> hm = new HashMap\<k,v\>(); （k,v为**泛型**，只能为**引用类型**

  - 方法

    - put(k,v) 添加元素

    - get(k) 根据键获取值

    - remove(k) 根据键删除元素

    - clear() 清空集合

    - size() 获取集合大小

  - 遍历

    - ~~~java
      Iterator it = hm.keySet().iterator(); //keySet() 获取键集合
      while (it.hasNext()) {
          Object obj = it.next();
          System.out.println("Key:"+obj+",Value:"+hm.get(obj)); //根据键访问数据
      }
      ~~~

    - ```Java
      hm.forEach((key, value) -> System.out.println("Key:" + key + ",Value:" + value));
      ```

### 三、forEach循环

集合对象有forEach遍历元素方法，其参数是需要完成一个函数式接口（自定义函数或lambda表达式

```java
public static void show(String key, String value) {
    System.out.println(key + value);
}
hm.forEach(classname::show);
```

### 四、Arrays工具类

#### 1.Collections集合工具类

（PPT没要求

**添加、排序操作（List代表单列集合：**

- static\<T\> boolean **addAll**(Collection\<e\> c,T...e) 添加多个元素到指定集合c内
- static void **reverse**(List list) 翻转List集合
- static void **shuffle**(List list) 对List集合进行随机排序
- static void **sort**(List list) 根据元素规定的大小关系进行排序（重写Object的equal()方法、Comparable\<Object\>接口compareTo()方法
- static void **swap**(List list,int i,int j) 交换List集合下标i和下标j两个元素

**查找、替换操作：**

- static int **binarySearch**(List list,Object key)  使用二分查找指定元素的索引（前提有序
- static Object **max**(Collection col) 根据元素规定大小关系，返回集合最大元素
- static Object **min**(Collection col) 根据元素规定大小关系，返回集合最小元素

**完成Comparable接口的compareTo()方法实例：**

~~~java
 static class Student implements Comparable<Object> {
     int age;
     String name;
     public Student() {
     }
     public Student(int age, String name) {
         this.age = age;
         this.name = name;
     }
     @Override
     public int compareTo(Object obj) {
         if (!(obj instanceof Student)) {
             return 0;
         }
         Student stu = (Student) obj;
         if (this.age == stu.age) {
             this.name.compareTo(stu.name);
         }
         return this.age - stu.age;
     }
 }
~~~

#### 2.Arrays工具类

- **void sort(type[] array)方法**
  - 参数为普通数组
  - 对整个数组进行排序（从小到大
- **void sort(type[] array,int left,int right)方法**
  - array为普通数组，left为左边界，right为右边界
  - 对[left,right)范围进行排序（从小到大
- **int bianrySearch(type[] array,type t)方法**
  - array为普通数组，t为某个元素
  - 返回值为元素t在array的索引位置，若不存在t则返回负数
- **int bianrySearch(type[] array,int left,int right,type t)方法**
  - array为普通数组，left为左边界，right为右边界，t为某个元素
  - 返回值为元素t在array的[left,right)的索引，若不存在t则返回负数
- **void fill(type[] array,type t)方法**
  - 将array所有元素都替换为t

## 第七章

### 一、字节流

#### 1.InputStream（输入流

作用：用于读取字节信息。

- **FileInputStream**（文件输入流
  - 构造方法**FileInputStream**(String **Filename**) 打开一个文件，没有找到文件会报异常**FileNotFoundException** 需要进行**异常处理**
  - void **close**() throws **IOExcetion**{} 关闭流，会抛出**IOExcetion**异常，需要进行**异常处理**
  - int **read**() throws **IOExcetion**{} 读取返回一个字节的信息，异常同上
  - int **read**(byte[] b) throws **IOExcetion**{} 读取b字节长度的信息写入b中，异常同上

#### 2.OuputStream（输出流

作用：用于输出字节信息。

- **FileOuputStream** （文件输出流
  - 构造方法**FileOutputStream**(String **Filename**) 打开一个文件，没有找到文件会报异常**FileNotFoundException**需要进行**异常处理**
  - void **close**() throws **IOExcetion**{} 关闭流
  - void **write**(int w) throws **IOExcetion**{}  将指定字节信息写入文件
  - void **write**(byte[] b) throws **IOExcetion**{} 将指定字节信息写入文件

### 二、字符流

#### 1.Reader（字符读入流

作用：用于读取字符信息

- **FileReader**
  - 构造方法**FileReader**(String **Filename**)  打开一个文件，没有找到文件会报异常**FileNotFoundException**需要进行**异常处理**
  - void **close**() throws **IOExcetion**{} 关闭流
  - int **read**() throws **IOExcetion**{} 读取返回一个字符信息，异常同上
  - int **read**(char[] c,int **offset**,int lenth) 读取len个字符从字符数组c的offset位置开始写入

- **BufferedReader** （字节缓冲流 为提升读入效率
  - 构造方法**BufferedReader**(**FileReader** fr)  对某一个流进行Buffered提升读取速度构造一个BufferedReader对象
  - **readLine**()  读取一行返回一个String

#### 2.Writer（字符输出流

作用：用于输出字符信息

- **FileWriter**
  - 构造方法**FileWriter**(String **Filename**)  打开一个	文件，没有找到文件会报异常**FileNotFoundException**需要进行**异常处理**
  - void **write**(String str)   //写入字符串。当执行完此方法后，字符数据还并没有写入到目的文件中去。此时字符数据会保存在缓冲区中。
  -  viod **flush**()        //刷新该流中的缓冲。将缓冲区中的字符数据保存到目的文件中去。
  -  viod **close**()        //关闭此流。在关闭前会先刷新此流的缓冲区。在关闭后，再写入或者刷新的话，会抛**IOException**异常。

​		

### 三、File类

File类封装了一个**文件路径**

#### 1.构造方法

- File(String pathname) 通过一个指定路径创建一个文件对象
- File(String parent,String child) 通过一个父路径和一个子路径创建一个文件对象
- File(**File** parent,String child)通过一个父对象和子路径创建一个文件对象

#### 2.常用方法

- String getName() 返回File对象表示的**文件或文件夹的名称**
- String getAbsolutePath() 返回File对象的**绝对路径**
- String getParent() 返回FIle对象的**父级目录**
- boolean createNewFile() 当File对象不存在时，**创建**一个新的File对象指向的文件
- boolean mkdir() 创建File对象指向路径的**目录**

#### 四、实现文件拷贝

```java
File f = new File("input.txt");
FileInputStream in = new FileInputStream(f);
File fcopy = new File("copy.txt");
FileOutputStream out = new FileOutputStream(fcopy);
int len;
while ((len = in.read()) != -1) {
    out.write(len);
}
in.close();
out.close();
```



## 第十章

### 一、创建线程

#### 1.实现多线程的方法：

①继承Thread类，重写run()方法；②实现Runnable接口，重写run()方法；③实现Callable接口，重写call()方法，并使用Future来获取call()方法的返回结果。

#### 2.优劣对比

- 采用实现 Runnable、Callable 接口的方式创建多线程时，线程类只是实现了 Runnable 接口或 Callable 接口，还可以**继承其他类**。
-  使用继承 Thread 类的方式创建多线程时，**编写简单**，如果需要访问当前线程，则无需使用 Thread.currentThread() 方法，直接使用 this 即可获得当前线程。

### 二、继承Thread方式

```java
class myThread extends Thread {
    myThread(String name) {
        super(name);
    }

    @Override
    public void run() {
        System.out.println(super.getName() + "is runing");
    }
}
```

### 三、实现Runnable接口方式

```java
class myThread implements Runnable {
    int num;
    myThread(int i) {
        this.num = i;
    }
    public void run() {
        System.out.println("第" + this.num + "个线程执行ing");
    }
}
public class t {
    public static void main(String[] args) {
        for (int i = 1; i <= 10; i++) {
            myThread m = new myThread(i);
            Thread t = new Thread(m, "thread"); //根据实现Runnable接口实现线程对象 使用run方法
            t.start();
        }
    }
}
```

### 四、状态转换方法

- static void **sleep**(long millis)   静态方法，使用Thread.sleep(time) 使用，用于**阻塞**线程
- static void **yield**() 静态方法，使用Thread.yield()使用，让系统的调度器重新调度一次，使此线程进入**就绪**状态，优先级高、同级的线程将会更有机会执行
- public void **start**() 使线程开始执行，JVM会调用此线程的run()方法
- Object.**wait**() 任何对象都有的方法，使执行的此线程进入等待状态，需要等待其他线程调用notify()或者notifyAll()方法唤醒当前等待的线程

### 五、死锁

产生原因：两个或多个对象占据对方需要的资源，使线程均进入等待状态。

(死锁详解参考 操作系统 P164)

