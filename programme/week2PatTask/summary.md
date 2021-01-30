<!--
 * @Date: 2020-04-27 18:34:34
 * @LastEditors: litelte
 * @LastEditTime: 2020-04-27 18:35:05
 * @FilePath: /CProject/zju_c/week2PatTask/summary.md
 * @Description: 这个文件里罗列的题目都是我觉得有意思的，简单的题目不考虑。
 -->

## [一个打印倒三角的程序](https://pintia.cn/problem-sets/13/problems/258)

```c
// 一个打印倒三角的程序
/*
 * @Date: 2020-04-28 11:01:23
 * @LastEditors: litelte
 * @LastEditTime: 2020-04-28 11:05:01
 * @FilePath: /CProject/zju_c/week2PatTask/3.c
 * @Description: 不一样的输出法
 */
/* 
* * * *
 * * *
  * *
   *
和2.c不同的是，这次的输出更遵循格式的要求就是每行最后的一个*不能有空格
所以我想到了使用奇偶数不同输出的方法
对于收获的点就是：
1.如果要使用for循环嵌套，那么外层的循环变量和内层的循环变量
是必须得建立练习的，比如本程序的例子：
外层为i，内层j、k，无论怎样都得产生联系
 */
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i, j, k;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < i; j++)
        {
            printf(" ");
        }
        for (k = 1; k <= 7 - (2 * i); k++)
        {
            // 打印次数随i有着变化：7、5、3、1
            //             对应：0、1、2、3
            if (k % 2 == 0)
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}
```

图案输出

```markdown
* * * *
 * * *
  * *
   *
```

## 计算物体下落高度

```c
/*
 * @Date: 2020-04-28 11:12:53
 * @LastEditors: litelte
 * @LastEditTime: 2020-05-05 11:16:38
 * @FilePath: /CProject/zju_c/week2PatTask/5.c
 * @Description: 计算下落高度
 */
/* 
    一个物体从100米的高空自由落下。编写程序，求它在前3秒内下落的垂直距离。设重力加速度为10米/秒²
    输出格式：height = 垂直距离值
 */
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int g = 10;
    int t = 3;
    float height = 0.5 * g * t * t;
    printf("height = %.2f\n", height);
    // printf("Hello World!\n");
    return 0;
}
```

> 这里需要注意的是，浮点数的输出，也就是给浮点数赋值的表达式中必须有浮点数，本题中就为0.5，如果没有的话，就需要添加一个*1.0，这样能起到更待类型的作用，不然全部是整型量参与计算，最后结果必然是整型。

## Math库函数的使用

```c
/*
 * @Date: 2020-04-28 12:10:29
 * @LastEditors: litelte
 * @LastEditTime: 2020-05-04 16:10:23
 * @FilePath: /CProject/zju_c/week2PatTask/9.c
 * @Description: 计算存款利息（非整年）
 */
#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
    // 为了实现幂函数的运算，这里调用了math.h库中的pow函数
    float interest = 0.0, money = 0.0, rate = 0.0, year = 0.0, backMoney = 0.0;
    scanf("%f %f %f", &money, &year, &rate);
    interest = money * pow((1 + rate), year) - money;
    interest = (float)interest;
    printf("interest = %.2f\n", interest);
}
// 在编译程序时，需要加上lm
// 例如：gcc 9.c -lm
//或者：gcc -0 9 9.c -lm
//答案来源：https://stackoverflow.com/questions/12824134/undefined-reference-to-pow-in-c-despite-including-math-h
```

编译时一定要加上-lm

## 关于/和%运算符的妙用

```c
/*
 * @Date: 2020-04-29 11:38:26
 * @LastEditors: litelte
 * @LastEditTime: 2020-05-05 11:31:34
 * @FilePath: /CProject/zju_c/week2PatTask/10.c
 * @Description: 算两个时间的差值
 */
/* 
    输入两个四位的整型数字来表示时间，计算它们的差值
    同时要考虑边界问题
    输出必须为两位数字
 */
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int startTime = 0, stopTime = 0;
    scanf("%d %d", &startTime, &stopTime);
    // 开始的时间比结束的时间大
    if (startTime / 100 > stopTime / 100)
    {
        printf("input error:Hour\n");
    }
    // 输入的两个时间的小时部分相同，分钟部分前面的比后面的大
    else if ((startTime / 100 == stopTime / 100) & (startTime % 100 > stopTime % 100))
    {
        printf("input error:minutes");
    }
    // 先同以换算成分钟，然后相减
    int startTimeInMinutes = (startTime / 100) * 60 + (startTime % 100);
    int stopTimeInMinutes = (stopTime / 100) * 60 + (stopTime % 100);
    int divid = stopTimeInMinutes - startTimeInMinutes;
    // 输出必须为两个数字
    // 这里就非常钦佩/和%的功能了
    printf("%02d:%02d\n", divid / 60, divid % 60);
    return 0;
}
```

当然，除了上面的方法，还可以使用借位的方法

```c
/*
 * @Date: 2020-04-29 11:38:26
 * @LastEditors: litelte
 * @LastEditTime: 2020-05-05 11:51:04
 * @FilePath: /CProject/zju_c/week2PatTask/10.c
 * @Description: 算两个时间的差值
 */
/* 
    输入两个四位的整型数字来表示时间，计算它们的差值
    同时要考虑边界问题
    输出必须为两位数字
 */
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int startTime = 0, stopTime = 0;
    scanf("%d %d", &startTime, &stopTime);
    // 开始的时间比结束的时间大
    if (startTime / 100 > stopTime / 100)
    {
        printf("input error:Hour\n");
    }
    // 输入的两个时间的小时部分相同，分钟部分前面的比后面的大
    else if ((startTime / 100 == stopTime / 100) & (startTime % 100 > stopTime % 100))
    {
        printf("input error:minutes");
    }
    // 当然也可以使用借位运算
    if (stopTime % 100 < startTime % 100)
    {
        int dividMinutes = (stopTime % 100 + 60) - (startTime % 100);
        int dividHours = (stopTime / 100 - 1) - (startTime / 100);
        printf("%02d:%02d\n", dividHours, dividMinutes);
    }
    else
    {
        int dividMinutes = (stopTime % 100) - (startTime % 100);
        int dividHours = (stopTime / 100) - (startTime / 100);
        printf("%02d:%02d\n", dividHours, dividMinutes);
    }
    return 0;
}
```

## 关于for循环的用法

```c
/*
 * @Date: 2020-04-29 13:48:51
 * @LastEditors: litelte
 * @LastEditTime: 2020-04-29 15:18:22
 * @FilePath: /CProject/zju_c/week2PatTask/11.c
 * @Description: 计算前n项奇数的和
 */
/* 
    计算序列 1 + 1/3 + 1/5 + ... 的前N项之和。
    输入在一行中给出一个正整数N。
    在一行中按照“sum = S”的格式输出部分和的值S，精确到小数点后6位。题目保证计算结果不超过双精度范围。
    例如：
    23
    sum = 2.549541
 */
/* 
    容易出错的点：
    * 把前n项算成n以内的奇数，容易出现这样的问题：
    * https://segmentfault.com/q/1010000012456292
    * 熟悉使用for的用法
 */
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    double sum = 0;
    int j = 1;
    scanf("%d", &n);
    if (n <= 0)
    {
        printf("input error\n");
    }
    else
    {
        // 表达式i < n的返回值为0或1，如果为0，则停止循环，如果为1，则循环继续，这里可以被任何返回值为bool类型的表达式替换，比如返回值为bool类型的find
        // 同样，外面的变量也可以在括号内进行运算，比如这个J+=2
        for (int i = 0; i < n; i++, j += 2)
        {
            sum += 1.0 / j;
        }
        printf("sum = %.6f\n", sum);
    }
    return 0;
}
```

## 特定类型输出

经常会要求保留两位小数，以及精简输出，去掉多余的0，这里我们就可以使用

```
浮点型：%.2f
双精度型：%.2lf
去掉多余的0，整型：%02d
......
```



## 实现公式*C(n m)=n!/m!(n−m)!*

```c
/*
 * @Date: 2020-04-29 13:48:51
 * @LastEditors: litelte
 * @LastEditTime: 2020-05-05 12:04:02
 * @FilePath: /CProject/zju_c/week2PatTask/14.c
 * @Description: 实现公式C(n m)=n!/m!(n−m)!
 */
/* 
    * 本题要求编写程序，根据公式C(n m)=n!/m!(n−m)!
    * 算出从n个不同元素中取出m个元素（m≤n）的组合数。
    * 自定义函数fact(n)来计算n!,其中n的类型为int，函数类型为
    * double
    * 输入格式：
    * 输入在一行中给出两个正整数m和n（m≤n），以空格分隔。
    * 输出格式
    * 按照格式“result = 组合数计算结果”输出。题目保证结果在double类型范围内。
    * 输入：
    * 2 7
    * 输出：
    * result = 21
 */
/* 
    * 题目网址链接：https://pintia.cn/problem-sets/13/problems/417
    * 下面的答案为答案1，不是很理解和原答案的差别
 */
// FIXME:理解答案的细节
#include <stdio.h>
double fact(int n);
int main(int argc, char const *argv[])
{
    int m = 0, n = 0;
    scanf("%d %d", &m, &n);
    printf("result = %0.f \n", fact(n) / (fact(m) * fact(n - m)));
    return 0;
}
double fact(int n)
{
    int product = 1;
    for (int i = 2; i <= n; i++)
    {
        product *= i;
    }
    return product;
}
```

另一种答案

```c
/*
 * @Date: 2020-04-29 13:48:51
 * @LastEditors: litelte
 * @LastEditTime: 2020-04-30 12:20:48
 * @FilePath: /CProject/zju_c/week2PatTask/15.c
 * @Description: 
 */
/* 
    * 本题要求编写程序，根据公式C(n m)=n!/m!(n−m)!
    * 算出从n个不同元素中取出m个元素（m≤n）的组合数。
    * 自定义函数fact(n)来计算n!,其中n的类型为int，函数类型为
    * double
    * 输入格式：
    * 输入在一行中给出两个正整数m和n（m≤n），以空格分隔。
    * 输出格式
    * 按照格式“result = 组合数计算结果”输出。题目保证结果在double类型范围内。
    * 输入：
    * 2 7
    * 输出：
    * result = 21
 */
/* 
    * 题目网址链接：https://pintia.cn/problem-sets/13/problems/417
    * 下面的答案为答案2
 */
#include <stdio.h>
double fact(int n);
int main(void)
{
    int i, n, m;
    double result;
    scanf("%d %d", &m, &n);
    result = 1;
    result = fact(n) / (fact(m) * fact(n - m));
    printf("result = %.0f", result);
    return 0;
}
double fact(int n)
{
    int i;
    double x;
    x = 1;
    for (i = 1; i <= n; i++)
    {
        x = x * i;
    }
    return x;
}
```

