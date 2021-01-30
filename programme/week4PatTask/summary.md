<!--

 * @Date: 2020-05-12 11:25:59
 * @LastEditors: litelte
 * @LastEditTime: 2020-05-12 11:26:21
 * @FilePath: /CProject/zju_c/week4PatTask/summary.md
 * @Description:week4PatTask Summary
 -->

---

## 1.计算最小公倍数和最大公约数

首先是得明白什么是最小公倍数和最大公约数

- 最小公倍数，这个数得大于两个数之间的数，并小于等于这两个数的乘积，并且是这两个数的整数倍数，满足这个三个条件，且是最小的数，便是最小公倍数
  - 举例：2和4，最小公倍数为4；
  - 4和6，最小公倍数为12
- 最大公约数，两个数中共有的约数，且这个约数是最大的。
  - 2和4，最大公约数为2
  - 11和10，最大公约数为1
- 当然，最大公约数和最小公约数有一定的关系：最小公倍数=两个数的乘积/最大公约数

当然我们可以通过求取最小公倍数，来获得最大公因数。算法：利用最小公倍数肯定大于两个数最大的那个，并且小于等于它们的乘积，使用循环逐个数进行遍历

- 比较两个数的大小，获得最大的那个数，作为循环的起点
- 取两个数的乘积，作为循环的终点
- 让循环变量分别除以两个数，如果同时为0，则表示以找出最小的公倍数
- 跳出循环
- 根据公式，算出最大公约数

```c
/*
 * @Date: 2020-05-03 23:48:37
 * @LastEditors: litelte
 * @LastEditTime: 2020-05-04 13:53:39
 * @FilePath: /CProject/zju_c/week4PatTask/1.c
 * @Description: 计算最大公约数和最小公倍数
 * 相关链接：https://pintia.cn/problem-sets/13/problems/435
 */
#include <stdio.h>
// 定义最小公倍数Least common multiple
int lcm(int parameter1, int parameter2);
// 定义最大公约数Greatest common divisor
void gcd(int parameter1, int parameter2);
int main(int argc, char const *argv[])
{
    // 求最小公倍数
    /* 
    * 比如2 4，最小公倍数就是4
    * 比如4，6，最小公倍数就是12
    * ......
    * 由此可知，最小公倍数是得大于两个数之间的数，并且小于两个数的乘积
    * 两个数的乘积肯定是两个数的公倍数，但不一定是最小的。
     */
    int parameter1, parameter2, lcmValue, gcdValue;
    scanf("%d %d", &parameter1, &parameter2);
    lcmValue = lcm(parameter1, parameter2);
    gcdValue = parameter1 * parameter2 / lcmValue;
    printf("%d %d\n", gcdValue, lcmValue);

    return 0;
}
int lcm(int parameter1, int parameter2)
{
    int min, max;
    min = parameter1 > parameter2 ? parameter1 : parameter2;
    max = parameter1 * parameter2;
    int i;
    for (i = min; i <= max; i++)
    {
        if ((i % parameter1 == 0) && (i % parameter2 == 0))
        {
            break;
        }
    }
    return i;
}
void gcd(int parameter1, int parameter2)
{
    // 最小公倍数=两数的乘积/最大公约数
    /* 
    * 比如8和6，最小公倍数是24，最大公约数为2
    * 8*6/24 = 2
    * 比如12和10，最小公倍数是60，最大公约数2
    * 12*10/60 = 2
     */
}
```

---

## 2.韩信点兵问题

### 2.1猜苹果问题

[有一筐苹果，猜个数](https://www.bilibili.com/video/BV1AJ41197cW?from=search&seid=2779905137699813117)

- 三个三个的分，最后还剩1个
- 四个四个分，最后也剩1个
- 五个五个的分，还是剩1个
- 总数不超过100个

```C
/*
 * @Date: 2020-05-04 14:43:19
 * @LastEditors: litelte
 * @LastEditTime: 2020-05-04 14:46:54
 * @FilePath: /CProject/zju_c/week4PatTask/6.c
 * @Description: 使用同余法
 */
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int Five = 5, Six = 6, Seve = 7, Elev = 11;
    int i, org_Number;
    for (i = 1; i < 2; i++)
    {
    }

    printf("Hello World!\n");
    return 0;
}
```

### 2.2正题

- 这里有两个难点，C语言中没有布尔型变量，当然可以使用枚举法来定义布尔型变量，当然可以直接为变量赋值0、1
- 另外就是韩信点兵问题的解法
  - 穷举法
    - 罗列所有的条件，暴力破解
  - 同余法

```c
/*
 * @Date: 2020-05-04 13:54:25
 * @LastEditors: litelte
 * @LastEditTime: 2020-05-12 11:46:36
 * @FilePath: /CProject/zju_c/week4PatTask/5.c
 * @Description: 韩信点兵问题
 * 题目链接：https://pintia.cn/problem-sets/13/problems/439
 */
// 无布尔变量，使用枚举定义
typedef enum
{
    TRUE = 1,
    FALSE = 0
} bool;
#include <stdio.h>
int main(int argc, char const *argv[])
{
    // 使用穷举法
    bool find = FALSE;
    int i;
    for (i = 1; !find; i++)
    {
        if (i % 5 == 1 && i % 6 == 5 && i % 7 == 4 && i % 11 == 10)
        {
            printf("%d\n", i);
            find = TRUE;
        }
    }

    return 0;
}
/*
    * 使用穷举法或者同余法
    * 穷举法:https://www.bilibili.com/video/BV1V64y1u7og?from=search&seid=1415761785684607476
    * 同余法：https://www.bilibili.com/video/BV1jb411t7vz?from=search&seid=1415761785684607476
    *
 */
```

---

## 3.求分数前N项和

这个题目的难点在于，确保结果的精度，也就是说：要注意类型的转换，当需要结果是小数是，至少其中一个除数或被除数是小数形式。如果没有，需要人工添加：乘1.0

```c
/*
 * @Date: 2020-05-04 14:54:30
 * @LastEditors: litelte
 * @LastEditTime: 2020-05-04 15:31:14
 * @FilePath: /CProject/zju_c/week4PatTask/8.c
 * @Description: 求分数序列前N项和
 * 题目链接：https://pintia.cn/problem-sets/13/problems/440
 */
#include <stdio.h>
int main(int argc, char const *argv[])
{
    // 注意精确度，是双精度
    double Numerator = 2, Denominator = 1, temp = 0;
    double sum = 2.0, singleItem = 0;
    double count;
    int i;
    scanf("%lf", &count);
    for (i = 1; i < count; i++)
    {
        temp = Numerator + Denominator;
        Denominator = Numerator;
        Numerator = temp;
        // 一定要注意类型的转换，不加括号的话，就不会变
        singleItem = Numerator * 1.0 / Denominator;
        sum += singleItem;
    }
    printf("%.2lf\n", sum);

    return 0;
}
```

---

## 4.求给定精度的简单交错序列部分和

> 本题要求编写程序，计算序列部分和 1 - 1/4 + 1/7 - 1/10 + ... 直到最后一项的绝对值不大于给定精度eps。
>
> ### 输入格式:
>
> 输入在一行中给出一个正实数eps。
>
> ### 输出格式:
>
> 在一行中按照“sum = S”的格式输出部分和的值S，精确到小数点后六位。题目保证计算结果不超过双精度范围。

这一题的难点在于：

- 对这个序列的第一项的导入
- 后面循环的使用

```c
/*
 * @Date: 2020-05-04 22:39:24
 * @LastEditors: litelte
 * @LastEditTime: 2020-05-06 13:12:12
 * @FilePath: /CProject/zju_c/week4PatTask/10.c
 * @Description: 求给定精度的简单交错序列部分和 
 * 题目链接：https://pintia.cn/problem-sets/13/problems/442
 */
#include <stdio.h>
int main(int argc, char const *argv[])
{
    // int loopCount = 0;
    double sum = 0;
    int i = 1;
    double inputNumber = 0;
    scanf("%lf", &inputNumber);
    /* while ((1.0 / i) >= inputNumber)
    {
        if (i % 2 == 1)
        {
            sum += (1.0 / i);
        }
        else
        {
            sum -= (1.0 / i);
        }

        i += 3;
        // printf("loopCount = %d,result = %lf\n", loopCount, sum);
    } */
    do
    {
        if (i % 2 == 1)
        {
            sum += 1.0 / i;
        }
        else
        {
            sum -= 1.0 / i;
        }

        i += 3;
    } while ((1.0 / i) >= inputNumber);

    printf("sum = %lf\n", sum);
    return 0;
}

//FIXME:错误的代码
/* typedef enum
{
    TRUE = 1,
    FALSE = 0
} bool;
#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
    double inputNumber = 0;
    scanf("%lf", &inputNumber);
    int i;
    double sum = 0, singleItem = 0;
    bool find = FALSE;
    for (i = 1; !find; i++)
    {
        singleItem = 1 + 3 * (i - 1);
        if (fabsf(1.0 / singleItem) >= inputNumber)
        {
            find = TRUE;
            if ((i - 1) % 2 == 0)
            {
                sum -= 1.0 / (singleItem - 3);
            }
            else
            {
                sum += 1.0 / (singleItem - 3);
            }
        }
        else
        {
            if (i % 2 == 0)
            {
                sum -= 1.0 / singleItem;
            }
            else
            {
                sum += 1.0 / singleItem;
            }
        }
    }
    printf("sum = %lf\n", sum);
    return 0;
} */
```

---

## 5.兔子繁衍问题&斐波那契数列

这个问题的难点

- 在得出从第二个月及后面的递推关系后，还能将第一个月的数目顺利地生成
- **使用前、中、后，三个数完成值的赋予及替换**

```c
/*
 * @Date: 2020-05-06 15:18:47
 * @LastEditors: litelte
 * @LastEditTime: 2020-05-06 16:02:05
 * @FilePath: /CProject/zju_c/week4PatTask/12.c
 * @Description: 兔子繁衍问题&斐波那契数列问题
 * 题目链接：https://pintia.cn/problem-sets/13/problems/444
 */
/* 
    * 斐波那契数列数列
    * 1，1，2，3，5，8，13......
 */
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int rabbitOri = 0;
    int loadCount = 0;
    int sumCount = 1;
    int userInputCount = 0;
    int month = 1;
    scanf("%d", &userInputCount);
    while (sumCount < userInputCount)
    {
        loadCount = rabbitOri;
        rabbitOri = sumCount;
        sumCount = loadCount + rabbitOri;
        month++;
        /* if (sumCount == userInputCount)
        {
            find = 0;
        } */
    }
    printf("%d\n", month);

    return 0;
}
```

---

## 6.皮球弹跳高度问题

> 皮球从某给定高度自由落下，触地后反弹到原高度的一半，再落下，再反弹，……，如此反复。问皮球在第n次落地时，在空中一共经过多少距离？第n次反弹的高度是多少？
>
> ### 输入格式:
>
> 输入在一行中给出两个非负整数，分别是皮球的初始高度和n，均在长整型范围内。 
>
> ### 输出格式:
>
> 在一行中顺序输出皮球第n次落地时在空中经过的距离、以及第n次反弹的高度，其间以一个空格分隔，保留一位小数。题目保证计算结果不超过双精度范围。

这个题目需要注意的事项：

- 第N次落地时在空中经过的距离刚好和皮球第N-1次弹起的高度相同
- 第N次弹起的高度等于第N次下落高度的二分之一

```c
/*
 * @Date: 2020-05-06 16:03:56
 * @LastEditors: litelte
 * @LastEditTime: 2020-05-06 16:44:23
 * @FilePath: /CProject/zju_c/week4PatTask/13.c
 * @Description: 高空坠球
 * 题目链接：https://pintia.cn/problem-sets/13/problems/445
 */
#include <stdio.h>
int main(int argc, char const *argv[])
{
    long height = 0, jumpCount = 0;
    double sumHeight = 0;
    int i;
    scanf("%ld %ld", &height, &jumpCount);
    double heightOri = height, high = 0;
    for (i = 1; i <= jumpCount; i++)
    {
        // 第n次下落的高度
        sumHeight = sumHeight + heightOri + high;
        // 第i次弹起的高度
        high = 0.5 * heightOri;
        heightOri = high;
    }
    printf("%.1lf %.1lf\n", sumHeight, high);

    return 0;
}
```

---

## 7.黑洞数

>黑洞数也称为陷阱数，又称“Kaprekar问题”，是一类具有奇特转换特性的数。
>
>任何一个各位数字不全相同的三位数，经有限次“重排求差”操作，总会得到495。最后所得的495即为三位黑洞数。所谓“重排求差”操作即组成该数的数字重排后的最大数减去重排后的最小数。（6174为四位黑洞数。）
>
>例如，对三位数207：
>
>- 第1次重排求差得：720 - 27 ＝ 693；
>- 第2次重排求差得：963 - 369 ＝ 594；
>- 第3次重排求差得：954 - 459 ＝ 495；
>
>以后会停留在495这一黑洞数。如果三位数的3个数字全相同，一次转换后即为0。
>
>任意输入一个三位数，编程给出重排求差的过程。
>
>### 输入格式：
>
>输入在一行中给出一个三位数。
>
>### 输出格式：
>
>按照以下格式输出重排求差的过程：
>
>```
>序号: 数字重排后的最大数 - 重排后的最小数 = 差值
>```
>
>序号从1开始，直到495出现在等号右边为止。
>
>### 输入样例：
>
>```in
>123
>```
>
>### 输出样例：
>
>```out
>1: 321 - 123 = 198
>2: 981 - 189 = 792
>3: 972 - 279 = 693
>4: 963 - 369 = 594
>5: 954 - 459 = 495
>```

这一题的难点：

- 需要对用户输入的数，先进行拆分，拆成百位、十位、个位三个数
- 将这三个数存到数组中，再使用冒泡排序算法进行排序
- 将上面两个功能封装为一个函数
- 递归调用，从而实现多次运算
- 为了实现规范化输出，创建一个全局变量，用于对输出的次数进行记录
- 做好黑洞数运算的条件

```c
/*
 * @Date: 2020-05-06 17:00:46
 * @LastEditors: litelte
 * @LastEditTime: 2020-05-06 17:52:15
 * @FilePath: /CProject/zju_c/week4PatTask/14.c
 * @Description: 黑洞数
 * 题目链接：https://pintia.cn/problem-sets/13/problems/446
 */
#include <stdio.h>
// 创建一个排序函数
void bubble_sort(int Number, int bsCount)
{
    int arr[3] = {0, 0, 0};
    arr[0] = Number / 100;
    arr[1] = (Number - arr[0] * 100) / 10;
    arr[2] = Number % 10;
    int len = (int)sizeof(arr) / sizeof(*arr);
    int i, j, temp;
    int max = 0, min = 0;
    for (i = 0; i < len - 1; i++)
    {
        for (j = 0; j < len - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    min = arr[0] * 100 + arr[1] * 10 + arr[2];
    max = arr[2] * 100 + arr[1] * 10 + arr[0];
    bsCount++;
    if (arr[0] = arr[1] && arr[1] == arr[2])
    {
        printf("%d: %d - %d = %d\n", bsCount, max, min, max - min);
    }
    else
    {
        printf("%d: %d - %d = %d\n", bsCount, max, min, max - min);

        if (max - min != 495)
        {

            bubble_sort(max - min, bsCount);
        }
    }
}
int main(int argc, char const *argv[])
{

    int inputNumber = 0;
    scanf("%d", &inputNumber);
    bubble_sort(inputNumber, 0);
    return 0;
}
```

---

## 8.求e的近似值

> 自然常数 e 可以用级数 1+1/1!+1/2!+⋯+1/n!+⋯ 来近似计算。本题要求对给定的非负整数 n，求该级数的前 n+1 项和。
>
> ### 输入格式:
>
> 输入第一行中给出非负整数 n（≤1000）。
>
> ### 输出格式:
>
> 在一行中输出部分和的值，保留小数点后八位。
>
> ### 输入样例:
>
> ```in
> 10
> ```
>
> ### 输出样例:
>
> ```out
> 2.71828180
> ```

这个题目需要注意的点为：

- 有时候库函数math的执行效率会慢一些
- 可以尝试自定义函数，加快运行速度

```c
/*
 * @Date: 2020-05-06 17:58:04
 * @LastEditors: litelte
 * @LastEditTime: 2020-05-06 18:22:14
 * @FilePath: /CProject/zju_c/week4PatTask/15.c
 * @Description: 求e的近似值
 * 题目链接：https://pintia.cn/problem-sets/13/problems/447
 */
#include <stdio.h>
double fact(int n);
int main(int argc, char const *argv[])
{
    int userinputN = 0;
    scanf("%d", &userinputN);
    int i = 0;
    double sum = 0;

    if (userinputN >= 0 && userinputN <= 1000)
    {
        for (i = 0; i < userinputN + 1; i++)
        {
            sum += 1.0 / fact(i);
        }
        printf("%.8lf\n", sum);
    }
    else
    {
        printf("Input error!\n");
    }

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

---

## 9.哥德巴赫猜想&求素数

> 数学领域著名的“哥德巴赫猜想”的大致意思是：任何一个大于2的偶数总能表示为两个素数之和。比如：24=5+19，其中5和19都是素数。本实验的任务是设计一个程序，验证20亿以内的偶数都可以分解成两个素数之和。
>
> ### 输入格式：
>
> 输入在一行中给出一个(2, 2 000 000 000]范围内的偶数N。
>
> ### 输出格式：
>
> 在一行中按照格式“N = p + q”输出N的素数分解，其中p ≤ q均为素数。又因为这样的分解不唯一（例如24还可以分解为7+17），要求必须输出所有解中p最小的解。
>
> ### 输入样例：
>
> ```in
> 24
> ```
>
> ### 输出样例：
>
> ```out
> 24 = 5 + 19
> ```

这个题目的难点：

- 自定义判断某个数是否为素数的函数
- 给出的数N必须大于2，那么需要设置循环，以2为起点，给出的数N为终点，进行循环
- 判断循环变量和N-循环变量是否同时为素数
- 是的话输出这两个数，反之继续循环

```c
/*
 * @Date: 2020-05-06 18:33:12
 * @LastEditors: litelte
 * @LastEditTime: 2020-05-07 00:33:08
 * @FilePath: /CProject/zju_c/week4PatTask/16.c
 * @Description: 哥德巴赫猜想
 * 题目链接：https://pintia.cn/problem-sets/13/problems/448
 * TODO:求素数的方法
 */
// 运行效率太低
/* for (i = 2; i < 2000000000; i++)
        {
            if (isPrimeNumber(i) == 1)
            {
                printf("i = %ld\n", i);
                for (j = i + 1; j < 2000000000; j++)
                {
                    if (isPrimeNumber(j) == 1)
                    {
                        printf("j = %ld\n", j);
                        if (i + j == inputNumber)
                        {
                            printf("%ld = %ld + %ld\n", inputNumber, i, j);
                        }
                    }
                }
            }
        } */
#include <stdio.h>

int is_prime(int n)
{
    if (n < 2)
    {
        return 0;
    }
    if (n == 2)
    {
        return 1;
    }
    if (n % 2 == 0)
    {
        return 0;
    }
    for (int i = 3; i * i <= n; i += 2)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 2; i < n; i++)
    {
        if (is_prime(i) && is_prime(n - i))
        {
            printf("%d = %d + %d\n", n, i, n - i);
            break;
        }
    }
}
```

---

## 10.水仙花数

> 水仙花数是指一个N位正整数（N≥3），它的每个位上的数字的N次幂之和等于它本身。例如：153=13+53+33。 本题要求编写程序,计算所有N位水仙花数。
>
> ### 输入格式:
>
> 输入在一行中给出一个正整数N（3≤N≤7）。 
>
> ### 输出格式:
>
> 按递增顺序输出所有N位水仙花数，每个数字占一行。
>
> ### 输入样例:
>
> ```in
> 3
> ```
>
> ### 输出样例:
>
> ```out
> 153
> 370
> 371
> 407
> ```

这个题的难点：

- 先将循环变量这个三位数拆分为百十个三个独立的数，并给这三个数都做3次幂，最后相加，判断是否等于原循环变量
- 自定义幂函数，math库的执行效率较低

### 10.1我的答案

```c
/*
 * @Date: 2020-05-06 20:56:18
 * @LastEditors: litelte
 * @LastEditTime: 2020-05-06 22:34:20
 * @FilePath: /CProject/zju_c/week4PatTask/19.c
 * @Description: 水仙花数
 * 题目链接：https://pintia.cn/problem-sets/13/problems/450
 * 经过初步的运行，得出耗时较多的结果，解决方法：自定义幂函数，放弃使用库函数中的pow
 */
#include <stdio.h>
int mypow(int x, int y);
int main(int argc, char const *argv[])
{
    int num = 0;
    scanf("%d", &num);
    int startNumber = mypow(10, num - 1);
    int stopNumber = mypow(10, num) - 1;
    int i, digit = 0, sum = 0, orI = 0;
    for (i = startNumber; i <= stopNumber; i++)
    {
        orI = i;
        // printf("i = %d\n", orI);
        do
        {
            digit = orI % 10;
            sum += mypow(digit, num);
            orI /= 10;
        } while (orI != 0);
        if (sum == i)
        {
            printf("%d\n", i);
        }
        // sum初始化
        sum = 0;
    }

    return 0;
}
int mypow(int x, int y)
{
    int k = 1;
    int i;
    for (i = 0; i < y; i++)
    {
        k *= x;
    }
    return k;
}
```

### 10.2其他人的答案

```c
/*
 * @Date: 2020-05-06 21:42:25
 * @LastEditors: litelte
 * @LastEditTime: 2020-05-06 21:44:20
 * @FilePath: /CProject/zju_c/week4PatTask/20.c
 * @Description: 耗时更短的水仙花数查询方法
 * 原因是math库的pow函数效率较低，选择自定义函数
 */
#include <stdio.h>
int my_pow(int, int); //用自带函数pow效率比较低，超出时间限制，所以自己编了
int main()
{
    int n;
    int a, b, sum, i, tmp;
    scanf("%d", &n);
    int start = my_pow(10, n - 1);
    int end = my_pow(10, n) - 1;
    for (i = start; i <= end; i++)
    {
        tmp = i;
        sum = 0;
        do
        {
            a = tmp / 10;
            b = tmp % 10;
            tmp = tmp / 10;
            sum = sum + my_pow(b, n);
        } while (a != 0);
        if (sum == i)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}

int my_pow(int x, int n)
{
    int X = 1;
    for (int i = 0; i < n; i++)
    {
        X = X * x;
    }
    return X;
}
```

---

## 11.输出三角形

> 本题要求编写程序，输出n行由大写字母A开始构成的三角形字符阵列。
>
> ### 输入格式：
>
> 输入在一行中给出一个正整数n（1≤n<7）。
>
> ### 输出格式：
>
> 输出n行由大写字母A开始构成的三角形字符阵列。格式见输出样例，其中每个字母后面都有一个空格。
>
> ### 输入样例：
>
> ```in
> 4
> ```
>
> ### 输出样例：
>
> ```out
> A B C D 
> E F G 
> H I 
> J 
> ```

本题需要注意的点:

- 字符型变量可以通过加上数字变成另外的字符型变量

```c
/*
 * @Date: 2020-05-06 22:34:53
 * @LastEditors: litelte
 * @LastEditTime: 2020-05-06 22:59:37
 * @FilePath: /CProject/zju_c/week4PatTask/21.c
 * @Description: 输出三角形字符阵列
 * 题目链接：https://pintia.cn/problem-sets/13/problems/451
 */
#include <stdio.h>
int main(int argc, char const *argv[])
{
    // 先做一个三角字符打印
    int count = 0;
    scanf("%d", &count);
    int i, j, charCount = 0;
    if (count >= 1 && count < 7)
    {
        for (i = count; i > 0; i--)
        {

            for (j = 0; j < i; j++)
            {
                printf("%c ", 'A' + charCount);
                charCount++;
            }
            printf("\n");
        }
    }
    else
    {
        printf("input error!\n");
    }

    return 0;
}
```

---

## 12.找完数

> 所谓完数就是该数恰好等于除自身外的因子之和。例如：6=1+2+3，其中1、2、3为6的因子。本题要求编写程序，找出任意两正整数m和n之间的所有完数。
>
> ### 输入格式：
>
> 输入在一行中给出2个正整数m和n（1<m≤n≤10000），中间以空格分隔。
>
> ### 输出格式：
>
> 逐行输出给定范围内每个完数的因子累加形式的分解式，每个完数占一行，格式为“完数 = 因子1 + 因子2 + ... + 因子k”，其中完数和因子均按递增顺序给出。若区间内没有完数，则输出“None”。
>
> ### 输入样例：
>
> ```in
> 2 30
> ```
>
> ### 输出样例：
>
> ```out
> 6 = 1 + 2 + 3
> 28 = 1 + 2 + 4 + 7 + 14
> ```

这个题目的难点为：

- 使用二分法找到一个数的所有因数
- 将所有因数先聚合，判断是否与原数相等
- 如果条件成立，再拆开，打印所有的因数

```c
/*
 * @Date: 2020-05-06 22:59:57
 * @LastEditors: litelte
 * @LastEditTime: 2020-05-06 23:25:12
 * @FilePath: /CProject/zju_c/week4PatTask/22.c
 * @Description: 找完数
 * 题目链接：https://pintia.cn/problem-sets/13/problems/452
 */
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int startCount = 0, stopCount = 0;
    int i, j, sum = 0;
    int find = 0;
    scanf("%d %d", &startCount, &stopCount);
    for (i = startCount; i <= stopCount; i++)
    {
        for (j = 1; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                sum += j;
            }
        }
        if (sum == i)
        {
            find = 1;
            printf("%d = 1", sum);
            for (j = 2; j <= i / 2; j++)
            {
                if (i % j == 0)
                {
                    printf(" + %d", j);
                }
            }
            printf("\n");
        }

        // 初始化sum
        sum = 0;
    }
    if (find == 0)
    {
        printf("None\n");
    }

    return 0;
}
```

---

## 13.分割整数

> 本题要求编写程序，对输入的一个整数，从高位开始逐位分割并输出它的各位数字。
>
> ### 输入格式：
>
> 输入在一行中给出一个长整型范围内的非负整数。
>
> ### 输出格式：
>
> 从高位开始逐位输出该整数的各位数字，每个数字后面有一个空格。
>
> ### 输入样例：
>
> ```in
> 123456
> ```
>
> ### 输出样例：
>
> ```out
> 1 2 3 4 5 6 
> ```

这个题目的难点在于：

- 对多位数进行拆分
- 熟悉使用前、中两个变量及除法运算符和取余运算符

```c
/*
 * @Date: 2020-05-06 23:25:38
 * @LastEditors: litelte
 * @LastEditTime: 2020-05-07 00:20:41
 * @FilePath: /CProject/zju_c/week4PatTask/23.c
 * @Description: 输出整数各位数字
 * 题目链接：https://pintia.cn/problem-sets/13/problems/453
 */
#include <stdio.h>
int main(int argc, char const *argv[])
{
    long inputNumber = 0, orgiNum = 0;
    scanf("%ld", &inputNumber);
    int digit = 0, count = 0;
    int numberArray[10000] = {};
    orgiNum = inputNumber;
    int i;

    do
    {
        digit = orgiNum % 10;
        numberArray[count] = digit;
        orgiNum /= 10;
        count++;
    } while (orgiNum != 0);
    for (i = count - 1; i >= 0; i--)
    {
        printf("%d ", numberArray[i]);
    }
    printf("\n");

    return 0;
}
```

