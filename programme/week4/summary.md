<!--
 * @Date: 2020-05-03 13:53:06
 * @LastEditors: litelte
 * @LastEditTime: 2020-05-03 13:53:17
 * @FilePath: /CProject/zju_c/week4/summary.md
 * @Description: week4的学习概要
 -->

## 初入while循环

```c
/*
 * @Date: 2020-05-03 13:55:21
 * @LastEditors: litelte
 * @LastEditTime: 2020-05-03 14:05:10
 * @FilePath: /CProject/zju_c/week4/1.c
 * @Description: 一个使用while循环的示例程序
 */
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int x;
    int n = 0;
    scanf("%d", &x);
    n++;
    x /= 10; 
    while (x > 0)
    {
        n++;
        x /= 10;
    }
    printf("%d\n", n);
    return 0;
}
```

需要注意的事情是：

- 循环体内是得有循环改变的条件，不然就会形成死循环
- 循环执行之前判断是否继续循环，所以有可能循环一次也没有执行
- 条件成立是循环继续的条件

> 人脑模拟计算机的运行：在纸上列出所有的变量，随着程序的进展不断重新计算变量的值。当程序运行结束时，留在表格最下面的就是程序的最终结果。

验证程序

- 测试程序常使用边界数据，如有效范围两端的数据、特殊的倍数等
- 个位数
- 10
- 0
- 负数

考虑到边界问题后的改进

```c
/*
 * @Date: 2020-05-03 13:55:21
 * @LastEditors: litelte
 * @LastEditTime: 2020-05-03 14:16:48
 * @FilePath: /CProject/zju_c/week4/1.c
 * @Description: 一个使用while循环的示例程序
 */
#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
    int x;
    int n = 0;
    scanf("%d", &x);
    n++;
    x /= 10;
    if (x < 0)
    {
        x = fabs(x);
        while (x > 0)
        {
            n++;
            x /= 10;
        }
        printf("%d\n", n);
    }
    else
    {
        while (x > 0)
        {
            n++;
            x /= 10;
        }
        printf("%d\n", n);
    }

    return 0;
}
```

那么能把while循环外面的移到while循环中呢？

```
n++;
n /= 10;
```

- 答案是否定的，一旦移进去，当输入0时，循环无法启动，最终输出的n为0
- 如果为while的条件设为x >= 0，那么循环就会变成死循环
- 如果解决这个问题呢？？

## do-while循环

```c
do
    {
        /* code */
    } while (/* condition */);
```

do-while和while的区别

- while在进去循环时，会先进行一次判断循环条件是否成立
- do-while在完成一次循环后，再进行循环条件的判断

使用do-while改写前面的例子

```c
/*
 * @Date: 2020-05-03 14:18:24
 * @LastEditors: litelte
 * @LastEditTime: 2020-05-03 14:30:15
 * @FilePath: /CProject/zju_c/week4/2.c
 * @Description: do while循环的练习
 */
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int x;
    scanf("%d", &x);
    int n = 0;
    do
    {
        x /= 10;
        n++;
    } while (x > 0);
    printf("%d\n", n);
    return 0;
}
```

## 使用while实现一个log函数

```c
/*
 * @Date: 2020-05-03 15:34:27
 * @LastEditors: litelte
 * @LastEditTime: 2020-05-03 15:38:06
 * @FilePath: /CProject/zju_c/week4/3.c
 * @Description: 使用循环实现log函数
 */
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int x;
    int ret = 0;
    x = 64;
    while (x > 1)
    {
        x /= 2;
        ret++;
    }
    printf("log2 of %d is %d.\n", x, ret);
    return 0;
}
/* 
    * 输出结果：
    * log2 of 1 is 6.
    * 为什么第一个%d是1，而不是64呢，是因为x参与计算了，不断变化。
    * 解决方法：在计算前先保存原始的值，后面可能会有用
 */
```

## 使用do-while实现一个猜数游戏

```c
/*
 * @Date: 2020-05-03 15:52:13
 * @LastEditors: litelte
 * @LastEditTime: 2020-05-03 16:27:11
 * @FilePath: /CProject/zju_c/week4/4.c
 * @Description: 做一个猜数游戏
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(int argc, char const *argv[])
{
    // 生成随机的数
    srand(time(0));
    // 使用取余运算符来生成一个1-100之间的数
    int number = rand() % 100 + 1;
    // 记录用户猜的次数
    int counts = 0;
    int guessValue = 0;
    printf("我是后门：%d\n", number);
    printf("系统> 猜猜我生成的数什么吧！（输入0退出）\n");
    do
    {
        printf("用户> ");
        scanf("%d", &guessValue);
        if (guessValue == 0)
        {
            printf("您已退出游戏\n");
            break;
        }
        else
        {

            counts++;
            if (guessValue > number)
            {
                printf("系统> 很抱歉哦，您猜大啦😄,再试一次吧！\n");
            }
            else if (guessValue < number)
            {
                printf("系统> 很抱歉哦，您猜小啦😄,再试一次吧！\n");
            }

            else
            {
                printf("系统> 恭喜您，猜对啦，系统生成的数就是：%d.\n系统> 您共猜了%d次！\n", number, counts);
            }
        }
    } while (guessValue != number);

    return 0;
}
```

## 使用循环一次判断构建一个计算平均数的程序

```c
/*
 * @Date: 2020-05-03 16:33:27
 * @LastEditors: litelte
 * @LastEditTime: 2020-05-03 16:37:48
 * @FilePath: /CProject/zju_c/week4/5.c
 * @Description: 使用循环一次判断构建一个计算平均数的程序
 */
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int number;
    int sum = 0;
    int count = 0;
    scanf("%d", &number);
    while (number != -1)
    {
        sum += number;
        count++;
        scanf("%d", &number);
    }

    printf("%f\n", 1.0 * sum / count);
    return 0;
}
```

## 使用循环实现输入的数倒序输出

```c
/*
 * @Date: 2020-05-03 16:41:02
 * @LastEditors: litelte
 * @LastEditTime: 2020-05-03 16:47:43
 * @FilePath: /CProject/zju_c/week4/6.c
 * @Description: 将一个数倒序输出
 */
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int x;
    x = 700;
    int digit;
    int ret = 0;
    while (x > 0)
    {
        digit = x % 10;
        // 纯倒序输出，如果输入770，输出007
        // printf("%d", digit);
        ret = ret * 10 + digit;
        // 详细且规范的输出
        printf("x = %d, digit=%d, ret = %d\n", x, digit, ret);
        x /= 10;
    }

    return 0;
}
```

