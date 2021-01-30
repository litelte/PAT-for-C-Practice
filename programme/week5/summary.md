<!--
 * @Date: 2020-05-12 17:16:39
 * @LastEditors: litelte
 * @LastEditTime: 2020-05-12 17:17:24
 * @FilePath: /CProject/zju_c/week5/summary.md
 * @Description: week5 summary
 * Focus：For loop
 -->

---

## 1.For循环的使用

### 1.1使用

使用方法

```c
for (size_t i = 0; i < count; i++)
    {
        /* code */
    }
```

C99标准的使用方法：

```c
for (int i = 0; i < count; i++)
    {
        /* code */
    }
```

C99前的使用方法：

```c
int i;
for (i = 0; i < count; i++)
    {
        /* code */
    }
```

当然for循环中的参数可以省略一部分：

```c
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i = 0;
    for (; i < 10; i++)
    {
        printf("i = %d\n", i);
    }

    return 0;
}
```

运行结果

```shell
i = 0
i = 1
i = 2
i = 3
i = 4
i = 5
i = 6
i = 7
i = 8
i = 9
[1] + Done
```

### 1.2循环的特性

```c
int i = 0;
    for (; i < 10; i++)
    {
        printf("i = %d\n", i);
    }
```

- 对于上面的例子中，循环走了10次，循环结束时，i的值位10
- for循环在运行前会就行判断循环条件是否成立

### 1.3循环使用的建议

- 如果有固定次数，优先用for
- 如果比如执行一次，用do...while
- 其他情况用while

### 1.4一个小例子

```c
/*
 * @Date: 2020-05-12 17:17:34
 * @LastEditors: litelte
 * @LastEditTime: 2020-05-12 17:38:30
 * @FilePath: /CProject/zju_c/week5/1.c
 * @Description:关于for循环的小练习
 */
#include <stdio.h>
int main(int argc, char const *argv[])
{
    // 判断一个数是否为素数
    int inputNumber = 0, isPrime = 0;
    scanf("%d", &inputNumber);
    for (int i = 2; i < inputNumber; i++)
    {
        if (inputNumber % i == 0)
        {
            isPrime = 1;
            break;
        }
    }
    if (isPrime == 0)
    {
        printf("是素数\n");
    }
    else
    {
        printf("不是素数\n");
    }

    return 0;
}
```

### 1.5熟悉使用break和continue的使用

- break会跳出循环
- continue会终止下面的输出，进而进入下一轮循环

### 1.6判断一个数是否为素数

```c
/*
 * @Date: 2020-05-12 17:45:38
 * @LastEditors: litelte
 * @LastEditTime: 2020-05-12 18:09:12
 * @FilePath: /CProject/zju_c/week5/2.c
 * @Description:输出50个素数
 */
#include <stdio.h>
int main(int argc, char const *argv[])
{
    // 定义变量，分别存储用户期望输出的数目，以及计数器
    int inputCount = 50, ctn = 1;
    int isPrime = 1;
    int i, j;
    for (i = 1; ctn <= inputCount; i++)
    {
        for (j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                isPrime = 0;
                break;
            }
        }
        if (isPrime == 1)
        {
            printf("第%d个素数：%d\t", ctn, i);
            ctn++;
        }
        // 需要对isPrime进行初始化
        isPrime = 1;
    }

    return 0;
}
```

### 1.7关于continue和break的使用

- 只能对它所在的那层循环做

### 1.8接力break

```c
/*
 * @Date: 2020-05-13 00:54:01
 * @LastEditors: litelte
 * @LastEditTime: 2020-05-13 00:54:10
 * @FilePath: /CProject/zju_c/week5/3.c
 * @Description: 接力break的例子
 */
#include <stdio.h>
int main()
{
    int x;
    int one, two, five;
    int exit = 0;

    scanf("%d", &x);
    for (one = 1; one < x * 10; one++)
    {
        for (two = 1; two < x * 10 / 5; two++)
        {
            for (five = 1; five < x * 10 / 5; five++)
            {
                if (one + two * 2 + five * 5 == x * 10)
                {
                    printf("可以用%d个1角加%d个2角加%d个5角得到%d元\n",
                           one, two, five, x);
                    exit = 1;
                    // 找到一个情况后，退出三层循环，就需要用到接力
                    // 否则只能退出最近的一层循环
                    break;
                }
            }
            if (exit == 1)
                break;
        }
        if (exit == 1)
            break;
    }
    return 0;
}
```

### 1.9goto语句

- 适用于多层循环嵌套的场景下，跳到外层循环
- 其他的场景最好不要使用goto

上面的那个break接力情况也可以用goto来代替，这种情况可以尝试，其他的情况谨慎使用

```c
/*
 * @Date: 2020-05-13 12:50:01
 * @LastEditors: litelte
 * @LastEditTime: 2020-05-13 12:52:57
 * @FilePath: /CProject/zju_c/week5/3_1.c
 * @Description:使用goto语句代替接力
 * 这个是继3.c的程序的改版
 */
/*
 * @Date: 2020-05-13 00:54:01
 * @LastEditors: litelte
 * @LastEditTime: 2020-05-13 00:54:45
 * @FilePath: /CProject/zju_c/week5/3.c
 * @Description: 接力break的例子
 */
#include <stdio.h>
int main()
{
    int x;
    int one, two, five;
    int exit = 0;

    scanf("%d", &x);
    for (one = 1; one < x * 10; one++)
    {
        for (two = 1; two < x * 10 / 5; two++)
        {
            for (five = 1; five < x * 10 / 5; five++)
            {
                if (one + two * 2 + five * 5 == x * 10)
                {
                    printf("可以用%d个1角加%d个2角加%d个5角得到%d元\n",
                           one, two, five, x);
                    goto out;
                }
            }
            if (exit == 1)
                break;
        }
        if (exit == 1)
            break;
    }
    // 注意是冒号:，也就是跳到这个位置
out:
    return 0;
}
```

---

## 2.应用示例代码

### 2.1计算前n项的和

#### 2.1.1原程序

```c
/*
 * @Date: 2020-05-13 01:01:37
 * @LastEditors: litelte
 * @LastEditTime: 2020-05-13 01:04:45
 * @FilePath: /CProject/zju_c/week5/4.c
 * @Description:求前n项数的和
 */
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    int i;
    double sum = 0;
    // 设置标志数，让奇数次项为正数，偶数次项为负数
    int sign = 1;
    scanf("%d", &n);
    n = 10000;
    for (int i = 1; i <= n; i++)
    {
        sum += sign * 1.0 / i;
        sign = -sign;
    }
    printf("f(%d) = %f\n", n, sum);

    return 0;
}
```

#### 2.1.2优化

```c
/*
 * @Date: 2020-05-13 01:01:37
 * @LastEditors: litelte
 * @LastEditTime: 2020-05-13 01:07:13
 * @FilePath: /CProject/zju_c/week5/5.c
 * @Description:求前n项数的和(优化)
 */
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    int i;
    double sum = 0;
    // 设置标志数，让奇数次项为正数，偶数次项为负数
    // 让标志位为双精度型变量，省去了后面类型的转换
    double sign = 1.0;
    scanf("%d", &n);
    n = 10000;
    for (int i = 1; i <= n; i++)
    {
        sum += sign / i;
        sign = -sign;
    }
    printf("f(%d) = %f\n", n, sum);

    return 0;
}
```

### 2.2整数分解

#### 2.2.1初始程序代码

让输入的一个数，逆序输出

```c
/*
 * @Date: 2020-05-13 01:10:14
 * @LastEditors: litelte
 * @LastEditTime: 2020-05-13 01:12:10
 * @FilePath: /CProject/zju_c/week5/6.c
 * @Description:整数分解，中间加空格
 */
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int x;
    // scanf("%d", &x);
    x = 14324;
    do
    {
        int d = x % 10;
        printf("%d", d);
        if (x > 9)
        {
            printf(" ");
        }
        x /= 10;

    } while (x > 0);
    printf("\n");

    return 0;
}
```

#### 2.2.2优化

让输入的数以单个数的形式输出

```c
/*
 * @Date: 2020-05-13 01:10:14
 * @LastEditors: litelte
 * @LastEditTime: 2020-05-13 01:16:32
 * @FilePath: /CProject/zju_c/week5/7.c
 * @Description:整数分解，中间加空格
 */
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int x;
    // scanf("%d", &x);
    x = 14324;
    int t = 0;
    do
    {
        int d = x % 10;
        t = t * 10 + d;
        x /= 10;
    } while (x > 0);
    printf("x = %d,t=%d\n", x, t);
    x = t;

    do
    {
        int d = x % 10;
        printf("%d", d);
        if (x > 9)
        {
            printf(" ");
        }
        x /= 10;

    } while (x > 0);
    printf("\n");

    return 0;
}
```

#### 2.2.3优化输入700问题

当输入700时，会出现输出为7的结果，最终的输出结果为7，这是不对的。但是分解数字的算法就是得先逆序，再分解。

- 先逆序输出数字
- 再逆序输出上一轮逆序输出的数

```c
/*
 * @Date: 2020-05-13 13:42:00
 * @LastEditors: litelte
 * @LastEditTime: 2020-05-13 15:16:58
 * @FilePath: /CProject/zju_c/week5/8v2.c
 * @Description: 解决分解整数问题中用户输入的数字不固定
/*
    当不考虑像700这种的数字的话，我们可以先将数逆序，再将逆序的数再逆序输出
    但是当输入的数为700时，先将数逆序，得到7，再逆序输出逆序数，为7，显然不符合条件，所以我们换个思路，就只能直接输出分解的数
    不用再逆序=>逆序=>输出
 */
/*
    思路：比如输入的数为1345，也就是说要从首位开始拆
    1345 / 1000 = 1
    1345 - 1000 = 345
    345 / 100 = 3
    345 - 100*3 = 45
    45 / 10 = 4
    45 - 10*4 = 5
    5 / 1 = 5
    5 - 1*5 = 0
 */

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int inputNumber = 0, temp = 0;
    scanf("%d", &inputNumber);
    // inputNumber = 0;
    // 需要统计用户输入的数子的位数，从而确定integer的大小
    temp = inputNumber;
    int digit = 0, integer = 1;
    do
    {
        if (temp / 10 != 0)
        {
            integer *= 10;
        }
        temp /= 10;

    } while (temp > 0);
    temp = inputNumber;
    // 定义被分解的每一个数和被除的整数，如1000、100、10等
    do
    {
        digit = temp / integer;
        printf("%d", digit);
        temp -= digit * integer;
        integer /= 10;
        // 更换打印空格的变量为integer
        if (integer != 0)
        {
            printf(" ");
        }
        // 更换循环的终止变量为integer，从而可以让7000这种的纯数输出0
    } while (integer > 0);
    printf("\n");

    return 0;
}
/*
    总结：
    现在无论输入怎样的数，都可以成功分解掉
    下一个程序代码就是课件上的代码
 */
```

视频课中官方的版本

```c
/*
 * @Date: 2020-05-13 15:12:45
 * @LastEditors: litelte
 * @LastEditTime: 2020-05-13 15:16:06
 * @FilePath: /CProject/zju_c/week5/8v3.c
 * @Description:视频课中的代码，同样是完全体的分解一个数
 */
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int x;
    scanf("%d", &x);
    // x = 70;
    int mask = 1;
    int t = x;
    while (t > 9)
    {
        t /= 10;
        mask *= 10;
    }
    printf("x = %d,mask = %d\n", x, mask);
    do
    {
        int d = x / mask;
        printf("%d", d);
        if (mask > 9)
        {
            printf(" ");
        }
        x %= mask;
        mask /= 10;

    } while (mask > 0);
    printf("\n");

    return 0;
}
```

---

### 2.3求最大公约数

- 枚举法
- 辗转相除法

#### 2.3.1枚举法

> 1. 设t为2
> 2. 如果u和v都能被t整除，则记下这个t
> 3. t加1后重复第二步，直到t等于u或v
> 4. 那么，曾经记下的最大的可以同时整除u和v的t就是gcd

```c
/*
 * @Date: 2020-05-13 15:20:19
 * @LastEditors: litelte
 * @LastEditTime: 2020-05-13 15:23:03
 * @FilePath: /CProject/zju_c/week5/9.c
 * @Description:求最大公约数，使用枚举法
 */
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a, b;
    int min;
    scanf("%d %d", &a, &b);
    if (a > b)
    {
        min = a;
    }
    else
    {
        min = b;
    }
    int ret = 0;
    int i;
    for (int i = 1; i < min; i++)
    {
        if (a % i == 0)
        {
            if (b % i == 0)
            {
                ret = i;
            }
        }
    }
    printf("%d和%d的最大公约数为%d\n", a, b, ret);
    return 0;
}
```

#### 2.3.2辗转相除法

> 1. 如果b等于0，计算结束，a就是最大公约数
> 2. 否则，计算a除以b的余数，让a等于b，而b等于那个余数
> 3. 回到第一步

对这个算法进行变量表格演示

| a    | b    | t    |
| ---- | ---- | ---- |
| 12   | 18   | 12   |
| 18   | 12   | 6    |
| 12   | 6    | 0    |
| 6    | 0    |      |

程序代码

```c
/*
 * @Date: 2020-05-13 15:43:25
 * @LastEditors: litelte
 * @LastEditTime: 2020-05-13 15:44:41
 * @FilePath: /CProject/zju_c/week5/10.c
 * @Description:使用辗转相除法来求得最大公约数
 */
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a, b;
    int t;
    scanf("%d %d", &a, &b);
    while (b != 0)
    {
        t = a % b;
        a = b;
        b = t;
    }

    printf("gcd = %d\n", a);
    return 0;
}
```

