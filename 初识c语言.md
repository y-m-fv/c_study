## 一、数据类型

###### 0为假，非0位真

|   **char**    |       字符       |   1   |
| :-----------: | :--------------: | :---: |
|   **short**   |    **短整型**    | **2** |
|    **int**    |     **整形**     | **4** |
|   **long**    |    **长整型**    | **4** |
| **long long** |  **更长的整形**  | **8** |
|   **float**   | **单精度浮点数** | **4** |
|  **double**   | **双精度浮点数** | **8** |

- ###### 类型长度

![image-20240325152158520](C:\Users\fbb\AppData\Roaming\Typora\typora-user-images\image-20240325152158520.png)

- ###### 将%d换成%zu，%zu是指打印一个sizeof返回的无符号整形

![image-20240325152707806](C:\Users\fbb\AppData\Roaming\Typora\typora-user-images\image-20240325152707806.png)

- ###### 单位

```
bit*8 --->  byte
byte*1024  --->  kb
kb*1024  --->  mb
mb*1024  --->  gb
gb*1024  --->  tb
tb*1024  --->  pb
```

## 二、变量

### 全局与局部

![image-20240325165554589](C:\Users\fbb\AppData\Roaming\Typora\typora-user-images\image-20240325165554589.png)

```c++
int main(){//两个数相加的代码
    int num1=0;
    int num2=0;//初始化
    scanf("%d %d",&num1,&num2);
    int sum=num1+num2;
    printf("%d\n",sum);
}

报错：	C4996	'scanf': This function or variable may be unsafe. Consider using scanf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.	Project1	D:\vs2022\code\Project1\test.c	27		

在代码第一行填写#define _CRT_SECURE_NO_WARNINGS解决报错
```

![image-20240325170808851](C:\Users\fbb\AppData\Roaming\Typora\typora-user-images\image-20240325170808851.png)

在此文件里添加#define _CRT_SECURE_NO_WARNINGS

### 作用域与生命周期

#### 1、作用域

- 局部变量的作用域
  - *变量所在的局部范围*

- 全局变量的作用域

  - 整个工程

  <img src="C:\Users\fbb\AppData\Roaming\Typora\typora-user-images\image-20240325172822124.png" alt="image-20240325172822124" style="zoom:50%;" />

#### 2、生命周期

- 局部变量的生命周期
  - 进入作用域生命开始，出作用域生命结束

- 全局变量的生命周期
  - 整个程序的生命周期

## 三、常量

### 1)、字面常量

### 2)、const修饰的常变量

- 变量值不允许被修改

  <img src="C:\Users\fbb\AppData\Roaming\Typora\typora-user-images\image-20240325211742793.png" alt="image-20240325211742793" style="zoom:80%;" />

### 3)、define定义的的标识符常量

- 全局常量

  <img src="C:\Users\fbb\AppData\Roaming\Typora\typora-user-images\image-20240325212642407.png" alt="image-20240325212642407" style="zoom:80%;" />

```
#define Max 100
#define str "adnlkf"
int main(){
	printf("%d\n",Max);
	printf("%s\n",str)
}
输出结果：
100
adnlkf
```

### 4)、枚举常量

- 可以看作是define的优化版本，使得代码更加简洁明了

  <img src="C:\Users\fbb\AppData\Roaming\Typora\typora-user-images\image-20240325214413927.png" alt="image-20240325214413927" style="zoom:80%;" />

## 四、字，转，注

### 1)、字符串

```
#include <string.h>
int main(){
	char ch='w';//字符型，用单引号
	char arr1[]="abcdef\0";//字符串型，存放在字符数组，用双引号，“\0”为结束符号不算字符串内容
	char arr2[]={'a','b','c','d','e','f'};//也可以，但没有结束标志，会一直打印，必须在加一个'\0'结束标志
	int a=strlen(arr1);//求字符串长度，string length,同时需要包含<string.h>头文件
}
```

### 2）转义字符

| 转义字符 |                     释义                     |
| :------: | :------------------------------------------: |
|    \?    | 连续书写多个问号时使用，防止被解析成三字母词 |
|    \’    |               用于表示字符常量               |
|    \”    |        用于表示一个字符串内部的双引号        |
|   \ \    |  用于表示一个反斜杠，防止被解释为转义序列符  |
|    \a    |                警告字符，蜂鸣                |
|    \b    |                    退格符                    |
|    \f    |                    进纸符                    |
|    \n    |                     换行                     |
|    \r    |                     回车                     |
|    \t    |                  水平制表符                  |
|    \v    |                  垂直制表符                  |
|   \ddd   |       表示1~3个八进制的数字。如\130 x        |
|   \xdd   |       表示2个十六进制的数字。如\x30 0        |

### 3）注释

```
两种注释：
/*  asjkhdfkj  */
//asjdhfkj
```

## 五、选择、循环语句

- ###### 选择语句

  ![image-20240325230300964](C:\Users\fbb\AppData\Roaming\Typora\typora-user-images\image-20240325230300964.png)

- ###### 循环语句

  ![image-20240325231526176](C:\Users\fbb\AppData\Roaming\Typora\typora-user-images\image-20240325231526176.png)

## 六、函数

![image-20240325232731469](C:\Users\fbb\AppData\Roaming\Typora\typora-user-images\image-20240325232731469.png)

## 七、数组

- ###### 遍历数组

  ![image-20240325233727969](C:\Users\fbb\AppData\Roaming\Typora\typora-user-images\image-20240325233727969.png)

```
	for循环：
	int arr[5]={1,2,3,4,5};
	for (int i = 0; i < 5; i++) {
		printf("%d ", arr[i]);
	}
```

## 八、操作符

### 1）算数操作符

```
int a=7/2;//得商
printf("%d",a);//输出为3

int b=7%2;//模，得余
printf("%d",b);//输出为1

float c=7/2.0;
printf("%.1f",c);//输出为3.5
```

### 2）移位操作符

### 3）位操作符

### 4）赋值操作符

|      |      |      |      |      |      |
| :--: | ---- | ---- | ---- | ---- | ---- |

- ###### 双目操作符

  - 两个操作数

- ###### 单目操作符

  - 一个操作数

    ```
    !    -    +    &//取地址    sizeof(//操作数类型长度)    ~    --    ++    (类型)//强制转换
    ```

  - <img src="C:\Users\fbb\AppData\Roaming\Typora\typora-user-images\image-20240326153129299.png" alt="image-20240326153129299" style="zoom:80%;" />

### 5）关系操作符

- ```
  >   >=   <   <=   !=   ==
  ```

### 6）逻辑操作符

- ```
  &&与   ||或
  ```

### 7）条件操作符

- ```
  exp1 ？ exp2 : exp3 //为真则输出exp2，为假则输出exp3
  ```

### 8）逗号表达式

- ```
  exp1， exp2， exp3， exp4
  ```

### 9）下标引用、函数调用、结构成员

- ```
  []      ()  .       ->
  ```

## 九、常见关键字

- ![image-20240326155556426](C:\Users\fbb\AppData\Roaming\Typora\typora-user-images\image-20240326155556426.png)

```
register：
	register int num=3;//将3存放进寄存器
```



### 1）关键字typedef

- ###### 类型定义，可以理解为类型重定义

- ##### 将unsigned int 取一个别名 uint

<img src="C:\Users\fbb\AppData\Roaming\Typora\typora-user-images\image-20240326161250076.png" alt="image-20240326161250076" style="zoom: 67%;" />

### 2）关键字static

- ###### 用来修饰变量和函数☟

  - 修饰静态局部变量
        <img src="C:\Users\fbb\AppData\Roaming\Typora\typora-user-images\image-20240326162857363.png" alt="image-20240326162857363" width="350"  /><img src="C:\Users\fbb\AppData\Roaming\Typora\typora-user-images\image-20240326163623762.png" alt="image-20240326163623762" style="zoom: 90%;" />

  - 修饰全局变量

    ```
    static修饰全局变量时，该全局变量的外部连接属性变成了内部连接属性，其它源文件（.c）无法使用
    ```

  - 修饰函数

    ```
    同上，限制了连接属性
    ```

## 十、#define

- ###### 定义常量

  - <img src="C:\Users\fbb\AppData\Roaming\Typora\typora-user-images\image-20240325212642407.png" alt="image-20240325212642407" style="zoom:80%;float:left;"  />

- ###### 定义宏

  - <img src="C:\Users\fbb\AppData\Roaming\Typora\typora-user-images\image-20240326171648591.png" alt="image-20240326171648591" style="float:left;"/>

## 十一、指针

```
printf("%p",&a);//打印变量a的地址
int* p = &a;//将地址存入指针p内，则p为指针变量
```

<img src="C:\Users\fbb\AppData\Roaming\Typora\typora-user-images\image-20240326192149637.png" alt="image-20240326192149637" style="float: left; zoom: 80%;"/>

<img src="C:\Users\fbb\AppData\Roaming\Typora\typora-user-images\image-20240326193820233.png" alt="image-20240326193820233" style="float: left;zoom: 67%;" />

## 十二、结构体

*将单一类型组合在一起的做法*

<img src="C:\Users\fbb\AppData\Roaming\Typora\typora-user-images\image-20240326195758541.png" alt="image-20240326195758541" style="float: left;zoom: 80%;" />
