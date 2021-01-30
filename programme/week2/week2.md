<!--

 * @Date: 2020-04-19 12:20:43
 * @LastEditors: litelte
 * @LastEditTime: 2020-04-19 12:20:57
 * @FilePath: /CProject/zju_c/week2/week2.md
 * @Description: 第二周中需要记录的知识点
 -->

### 变量

- 变量需要名字，变量的名字叫做标识符
- 标识符有命名规则
  - 只能由字母、数字和下划线组成
  - 首个字符不能是数字
  - 关键字（保留字）不能做标识符

```c
{
    // 变量的命名：
    // 关键字 标识符(设置初始值[可选])
    int price = 0; //变量初始化，=为赋值符号
    printf("请输入金额（元）：");
    scanf("%d", &price);
    int change = 100 - price;
    printf("找您%d元。\n", change);
    return 0;
}
```

C语言中的所有关键字（保留字）

| auto     | break   | case   | char     | const  |
| -------- | ------- | ------ | -------- | ------ |
| continue | default | do     | double   | else   |
| enum     | extern  | float  | for      | goto   |
| if       | int     | long   | register | return |
| short    | signed  | sizeof | static   | struct |
| switch   | typedef | union  | unsigned | void   |
| volatile | while   | inline | restrict |        |

### 变量初始化

```c
// int i;   // i不赋初值的话，在部分编译器中会出现乱码，或者长串的数字
// 出现乱码的原因，是因为变量都保存在内存中，由于未实现定义，系统会随机存取，并相加，所有会出现乱码
    int i = 0;
    int j;
    j = i + 10;
    printf("%d\n", j);
    printf("Hello World");
    return 0;
```

- <类型名称><变量名称>=<初始值>
- int price = 0;
- int amount = 100;
- 组合变量定义时，也可以在这个定义中单独给单个变量赋初值
- int price = 0,amount = 100

### 表达式

含有运算符的式子成为表达式

- "="是赋值运算符，有运算符的式子叫做表达式
- price = 0
- change = 100 - price

### C99与ANSI的差异

ANSI只能在开头处定义变量，而C99可在任何地方定义变量

###  常量

常量的关键字为const，定义后则无法改变

```c
{
    const int AMOUNT = 100;
    int price = 0;
    // 常量为只读，无法改变。
    // AMOUNT = 90;
    printf("请输入金额（元）：");
    scanf("%d",&price);
    int change =  AMOUNT - price;
    printf("找您%d元。\n",change);
    printf("Hello World!\n");
    return 0;
}
```

### scanf函数

事例程序：

```c
{
    int a, b;
    printf("请输入两个整数：");
    scanf("%d %d", &a, &b);
    printf("%d + %d = %d\n", a, b, a + b);
    printf("Hello World!\n");
    return 0;
}
```

在执行程序时，系统总是等待你输入两次

```shell
请输入两个整数：2





5
2 + 5 = 7
```

### 浮点数

```c
/*
 * @Date: 2020-04-19 13:27:44
 * @LastEditors: litelte
 * @LastEditTime: 2020-04-19 13:30:43
 * @FilePath: /CProject/zju_c/week2/6.c
 * @Description: 浮点数，计算身高的程序
 */
#include <stdio.h>
int main(int argc, char const *argv[])
{
    printf("请分别输入身高的英尺和英寸，"
           "如输入\"5 7\"表示5英尺7英寸：");
    int foot;
    int inch;
    scanf("%d %d", &foot, &inch);
    printf("身高是%f米。\n", ((foot + inch / 12) * 0.3048));
    printf("Hello World!\n");
    return 0;
}
/*
分别输入身高的英尺和英寸，如输入"5 7"表示5英尺7英寸：5 7
身高是1.524000米。
Hello World!
答案应该是1.7018
(5+7÷12)x0.3048=1.7018
*/
```

这个时候出现了问题，分析问题：

```shell
请分别输入身高的英尺和英寸，如输入"5 7"表示5英尺7英寸：5 9
身高是1.524000米。
请分别输入身高的英尺和英寸，如输入"5 7"表示5英尺7英寸：5 0
身高是1.524000米。
请分别输入身高的英尺和英寸，如输入"5 7"表示5英尺7英寸：6 7
身高是1.828800米。
请分别输入身高的英尺和英寸，如输入"5 7"表示5英尺7英寸：6 2
身高是1.828800米。
```

结果分析：

- 因为两个整数的运算的结果只能是整数
  - 10/3*3=？ 结果应为9
- 10和10.0在C中是完全不同的数
- 10.0是浮点数

再看另外一个例子：

```c
/*
 * @Date: 2020-04-19 13:38:08
 * @LastEditors: litelte
 * @LastEditTime: 2020-04-19 13:38:49
 * @FilePath: /CProject/zju_c/week2/7.c
 * @Description: 一个测试整数相除的例子
 */
#include <stdio.h>
int main(int argc, char const *argv[])
{
    printf("%d\n",14/3);
    printf("Hello World!\n");
    return 0;
}
/*
运行结果：
4
Hello World!
*/
```

```c
/*
 * @Date: 2020-04-19 13:38:08
 * @LastEditors: litelte
 * @LastEditTime: 2020-04-19 13:43:17
 * @FilePath: /CProject/zju_c/week2/7.c
 * @Description: 一个测试整数相除的例子
 */
#include <stdio.h>
int main(int argc, char const *argv[])
{
    printf("%f\n",14.0/3);
    printf("Hello World!\n");
    return 0;
}
/*
运行结果：
4.666667
Hello World!
*/
```

由此，我们算是认识了浮点数

> 浮点数就是带小数点的数值。浮点这个词的本意就是带小数点是浮动的，是计算机内部表达非整数（包含分数和无理数）的一种方式。
>
> 另一种方式叫定点数，不过在C语言中你不会遇到定点数。人们借用浮点数这个词来表达所有的带小数点的数

我们再回看开头的程序，做了一下的改进，将12改成12.0，因为：

**当浮点数和整数放到一起运算时，C会将整数转换成浮点数，然后进行浮点数的运算**

```shell
请分别输入身高的英尺和英寸，如输入"5 7"表示5英尺7英寸：5 7
身高是1.701800米。
Hello World!
结果恢复正常
```

### double

> inch是定义为int类型的变量，如果把int换成double，我们就把它改成double类型的浮点数变量了。
>
> double的意思是“双”，它本来是“双精度浮点数”的第一个单词，人们用来表示浮点数类型。除了double，还有float（意思是浮点）表示单精度浮点数

```c
/*
 * @Date: 2020-04-19 13:55:29
 * @LastEditors: litelte
 * @LastEditTime: 2020-04-19 14:01:16
 * @FilePath: /CProject/zju_c/week2/9.c
 * @Description: 使用double定义的变量
 */
#include <stdio.h>
int main(int argc, char const *argv[])
{
    printf("请分别输入身高的英尺和英寸，""如输入\"5 7\"表示5英尺7英寸：");
    double foot;
    double inch;
    // 对于double型变量，我们在输入的时候使用lf
    scanf("%lf %lf",&foot,&inch);
    printf("身高是%f米。\n",((foot+inch /12)*0.3048));
    // 这个时候便不需要再改动12为12.0了
    printf("Hello World!\n");
    return 0;
}
/*
请分别输入身高的英尺和英寸，如输入"5 7"表示5英尺7英寸：5 7
身高是1.701800米。
Hello World!
*/
```

### 小结

| 整数                | 带小数点的数                           |
| ------------------- | -------------------------------------- |
| int                 | double/float                           |
| printf("%d",......) | printf("%f",......)                    |
| scanf("%d",......)  | scanf("%lf",......)/scanf("%f",......) |

## 表达式

表达式由运算符和算子组成

- 运算符(operator)：是指进行运算的动作，比如加法运算符“+”，减法运算符“-”

- 算子(operand)：指参与运算的值，这个值可能是常数，也可能是变量，还可能是一个方法的返回值。

  ```markdown
  a = b + 5
  +和=都为运算符，a、b、5都为算子
  ```

一个程序示例

```c
/*
 * @Date: 2020-04-27 14:44:01
 * @LastEditors: litelte
 * @LastEditTime: 2020-04-27 14:57:50
 * @FilePath: /CProject/zju_c/week2/10.c
 * @Description: 应用表达式，计算时间差
 */
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int hour1, minute1;
    int hour2, minute2;
    printf("请输入一个时间：eg:1点20分：1 20\n");
    scanf("%d %d", &hour1, &minute1);
    printf("请再输入一个时间：eg:1点20分：1 20\n");
    scanf("%d %d", &hour2, &minute2);
    int time1 = 60 * hour1 + minute1;
    int time2 = 60 * hour2 + minute2;
    int time_minus;
    if (time1 >= time2)
    {
        time_minus = time1 - time2;
    }
    else
    {
        time_minus = time2 - time1;
    }
    printf("相差时间为：%d分,即%d时%d分 \n", time_minus, (time_minus / 60), (time_minus % 60));

    // printf("Hello World!\n");
    return 0;
}
```

### 运算符优先级

先来看一个程序例子

```c
/*
 * @Date: 2020-04-27 14:59:12
 * @LastEditors: litelte
 * @LastEditTime: 2020-04-27 15:02:37
 * @FilePath: /CProject/zju_c/week2/11.c
 * @Description: 求平均值
 */
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a,b;
    printf("请输入两个数：\n");
    scanf("%d %d",&a,&b);
    // 除以2的话，结果仍为整型，为了保证精确度，应除以2.0
    // 运算符是有优先级的，必要时要加括号
    double c = (a+b)/2.0;
    printf("%d和%d的平均值=%f\n",a,b,c);
    // printf("Hello World!\n");
    return 0;
}
```

| 优先级 | 运算符 | 运算     | 结合关系 | 举例 |
| ------ | ------ | -------- | -------- | ---- |
| 1      | +      | 单目不变 | 自右向左 | a*+b |
| 1      | -      | 单目取负 | 自右向左 | a*-b |
| 2      | *      | 乘       | 自左向右 | a*b  |
| 2      | /      | 除       | 自左向右 | a/b  |
| 2      | %      | 取余     | 自左向右 | a%b  |
| 3      | +      | 加       | 自左向右 | a+b  |
| 3      | -      | 减       | 自左向右 | a-b  |
| 4      | =      | 赋值     | 自右向左 | a=b  |

赋值运算符

- 赋值也是运算，也有结果
- a=6的结果是a被赋予的值，也就是6
- a=b=6 --> a=(b=6)

*嵌入式赋值*

```c
int a = 6;
int b;
int c = 1+(b=a);
// 不利于阅读
// 容易产生错误，不推荐使用
```

*结合关系*

```c
// 一般自左向右
// 单目+-和赋值=自右向左
result = a = b = 3+c;
result = 2;
result = (result = result *2) * 6 *(result = 3 +result);
// 不要写出这样的式子
```

一个程序示例

```c
/*
 * @Date: 2020-04-27 15:14:26
 * @LastEditors: litelte
 * @LastEditTime: 2020-04-27 15:28:27
 * @FilePath: /CProject/zju_c/week2/12.c
 * @Description: 计算复利程序
 */
/* 
    在银行存定期的时候，可以选择到期后自动转存，并将到期的利息计入本金
    合并转存。如果一年期的定期利率是3.3%，那么连续自动转存3年后，最初
    存入的X元定期会得到多少本息金额
 */
#include <stdio.h>
int main(int argc, char const *argv[])
{
    printf("请输入您要存的本金金额：\n");
    float base_Money = 0.0;
    scanf("%f", &base_Money);
    double allMoneyNYear;
    int N;
    // N = 3;
    printf("请输入您要存的年限：");
    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        allMoneyNYear = base_Money * (1 + 0.033);
        base_Money = allMoneyNYear;
    }
    printf("最终的钱为：%f", base_Money);

    // float allMoneyTwoYear = allMoneyFirYear(1+0.033);
    // float allMoneyThrYear = allMoneyTwoYear(1+0.033);

    // printf("Hello World!\n");
    return 0;
}
```

交换变量

```c
int a = 6,b = 5;
a  = b;
b = a;
// 上面的做法不会，完成交换需要一个中间变量
```

示例程序

```c
/*
 * @Date: 2020-04-27 15:42:20
 * @LastEditors: litelte
 * @LastEditTime: 2020-04-27 15:44:29
 * @FilePath: /CProject/zju_c/week2/13.c
 * @Description: 练习交换变量
 */
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a = 5, b = 6;
    printf("交换前的值：a = %d,b = %d \n", a, b);
    int t;
    t = a;
    a = b;
    b = t;
    printf("交换后的值：a = %d,b = %d \n", a, b);
    // printf("Hello World!\n");
    return 0;
}
```

复合赋值

- 5个算数运算符，+ - * / %，可以和赋值运算符**“=”**结合起来，形成复合赋值运算符：
  - +=
  - -=
  - *=
  - /=
  - %=
- 注意两个运算符中间不要有空格

递增递减运算符

- ++
- --
- 它们都是单目运算符
- 可以放到前面，也可以放到后面

示例程序

```c
/*
 * @Date: 2020-04-27 15:53:07
 * @LastEditors: litelte
 * @LastEditTime: 2020-04-27 15:55:38
 * @FilePath: /CProject/zju_c/week2/14.c
 * @Description: 使用递增递减运算符
 */
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a;
    a = 10;
    printf("a++ = %d\n", a++);
    printf("a = %d\n", a);
    printf("++a = %d\n", ++a);
    printf("a = %d\n", a);

    // printf("Hello World!\n");
    return 0;
}
```

运行结果

```shell
a++ = 10
a = 11
++a = 12
a = 12
[1] + Done  
```

需要注意的是，不要将它们组合起来：

```c
++i++
// 类似这样的
```

下来就是使用PAT平台的一些注意事项：

- 严格遵守输出样例

- 每一行输出语句都要加\n换行符

- 对于scanf()语句中的内容一定要慎之又慎

  - ```c
    // 对于scanf()语句的输出注意
    /*
     * @Date: 2020-04-27 18:13:29
     * @LastEditors: litelte
     * @LastEditTime: 2020-04-27 18:16:55
     * @FilePath: /CProject/zju_c/week2/15.c
     * @Description: 关于PAT练习平台中的scanf函数的注意事项
     */
    #include <stdio.h>
    int main(int argc, char const *argv[])
    {
        printf("请输入：\n");
        int a, b;
        scanf("%d %d", &a, &b);
        printf("您输入的是：%d和%d\n", a, b);
        printf("请输入：,记得输完加空格\n");
        scanf("%d %d ", &a, &b);
        printf("您输入的内容为：%d和%d \n", a, b);
        // printf("Hello World!\n");
        return 0;
    }
    
    //运行结果
    请输入：
    1 2
    您输入的是：1和2
    请输入：,记得输完加空格
    1 3
    2
    您输入的内容为：1和3
    ```

    第二周的学习到此结束，对应的是Bilibili上[浙江大学翁恺C语言程序设计](https://www.bilibili.com/video/BV1Bx411u7qY?p=131)网课的[P9](https://www.bilibili.com/video/BV1Bx411u7qY?p=9)~[P20](https://www.bilibili.com/video/BV1Bx411u7qY?p=20)

