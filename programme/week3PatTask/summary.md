<!--

 * @Date: 2020-05-02 11:48:29
 * @LastEditors: litelte
 * @LastEditTime: 2020-05-02 11:48:42
 * @FilePath: /CProject/zju_c/week3PatTask/summary.md
 * @Description: 第三周的PAT平台题目练习
 -->

## 1.实现解一元二次方程组

### 1.0版本

```c
/*
 * @Date: 2020-05-02 11:48:12
 * @LastEditors: litelte
 * @LastEditTime: 2020-05-02 18:43:32
 * @FilePath: /CProject/zju_c/week3PatTask/temp.c
 * @Description: 简单的题目不需要解释
 */
/* 
输入三个浮点数
    根据系数情况，输出不同结果：
1)如果方程有两个不相等的实数根，则每行输出一个根，先大后小；
2)如果方程有两个不相等复数根，则每行按照格式“实部+虚部i”输出一个根，先输出虚部为正的，后输出虚部为负的；
3)如果方程只有一个根，则直接输出此根；
4)如果系数都为0，则输出"Zero Equation"；
5)如果a和b为0，c不为0，则输出"Not An Equation"。
 */
#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
    float a = 0, b = 0, c = 0;
    scanf("%f %f %f", &a, &b, &c);
    /*  a = 1;
    b = 2;
    c = 3; */
    float delta = (b * b) - (4 * a * c);
    float ans1 = (-b + sqrtf(delta)) / (2 * a);
    float ans2 = (-b - sqrtf(delta)) / (2 * a);
    if (a == 0)
    {
        if (b == 0)
        {
            if (c == 0)
            {
                printf("Zero Equation\n");
            }
            else
            {
                printf("Not An Equation\n");
            }
        }
        else
        {
            printf("%.2f\n", -c / b);
        }
    }
    else
    {
        /* if (b = 0)
        {
            //解决纯b= 0的情况下，Δ无法开根号的问题。
            printf("%.02f\ni", fabsf(-c / a));
        } */
        // 使用求根公式来求解
        if (delta > 0)
        {
            printf("%.02f\n", ans1);
            printf("%.02f\n", ans2);
        }

        else if (delta == 0)
        {

            printf("%.02f\n", ans1);
        }
        else
        {
            // 调用fabs浮点型绝对值函数
            if (b == 0)
            {
                // b = 0的情况下，有纯虚根
                printf("%.02fi\n", -1 / (2 * a) * sqrt(fabsf(delta)));
            }
            else
            {
                printf("%.02f+%.02fi\n", -b / (2 * a), 1 / (2 * a) * sqrt(fabsf(delta)));
                printf("%.02f%.02fi\n", -b / (2 * a), -1 / (2 * a) * sqrt(fabsf(delta)));
            }
        }
    }
    return 0;
}
```

上面的为1.0版本，下面的是2.0版本

### 2.0版本

```c
/*
 * @Date: 2020-05-02 12:13:55
 * @LastEditors: litelte
 * @LastEditTime: 2020-05-02 19:24:58
 * @FilePath: /CProject/zju_c/week3PatTask/2.c
 * @Description: 求根公式的重构
 */

#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
    float a = 0, b = 0, c = 0;
    scanf("%f %f %f", &a, &b, &c);
    float delta = (b * b) - (4 * a * c);
    float ans1 = (-b + sqrtf(delta)) / (2 * a);
    float ans2 = (-b - sqrtf(delta)) / (2 * a);
    // 先判断是否为一元二次方程，判断标准：a是否为0
    if (a == 0)
    {
        // 去掉特殊情况
        if (b == 0)
        {
            if (c == 0)
            {
                printf("Zero Equation\n");
            }
            else
            {
                printf("Not An Equation\n");
            }
        }
        else
        {
            // 方程不为一元二次方程
            printf("%.02f\n", -c / b);
        }
    }
    else
    {
        // 方程为一元二次方程，判断Δ的大小
        if (delta == 0)
        {
            printf("%.02f\n", ans1);
        }
        else if (delta > 0)
        {
            printf("%.02f\n", ans1);
            printf("%.02f\n", ans2);
        }
        else
        {
            // 出现重虚根的情况
            if (b == 0)
            {
                // 这里没有注意题目的要求，即便是纯虚根，也必须为a+bi的形式！！！
                printf("%.02f+%.02fi\n", b / (2 * a), 1 / (2 * a) * sqrt(fabsf(delta)));
                printf("%.02f%.02fi\n", b / (2 * a), -1 / (2 * a) * sqrt(fabsf(delta)));
            }
            else
            {
                printf("%.02f+%.02fi\n", -b / (2 * a), 1 / (2 * a) * sqrt(fabsf(delta)));
                printf("%.02f%.02fi\n", -b / (2 * a), -1 / (2 * a) * sqrt(fabsf(delta)));
            }
        }
    }
}
```

## 2.使用冒泡排序实现3个数比较大小

### 1.0耗时长的版本

```c
/*
 * @Date: 2020-05-02 19:51:46
 * @LastEditors: litelte
 * @LastEditTime: 2020-05-02 20:25:47
 * @FilePath: /CProject/zju_c/week3PatTask/3.c
 * @Description: hahah
 */
#include <stdio.h>
int main(int argc, char const *argv[])
{
    // 三个数比大小，使用冒泡排序
    int array[3] = {0, 0, 0};
    scanf("%d %d %d", &array[0], &array[1], &array[2]);
    int i, j, temp, k;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3 - i; j++)
        {
            if (array[j] > array[j + 1])
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
    printf("%d->%d->%d\n", array[0], array[1], array[2]);
    return 0;
}
```

### 2.0耗时短的版本

```c
/*
 * @Date: 2020-05-02 20:30:04
 * @LastEditors: litelte
 * @LastEditTime: 2020-05-02 20:58:24
 * @FilePath: /CProject/zju_c/week3PatTask/4.c
 * @Description: 使用冒泡排序2,耗时短
 */
#include <stdio.h>
void bubble_sort(int arr[], int len)
{
    int i, j, temp;
    for (i = 0; i < len - 1; i++)
        for (j = 0; j < len - 1 - i; j++)
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
}
int main()
{
    int arr[3] = {0, 0, 0};
    scanf("%d %d %d", &arr[0], &arr[1], &arr[2]);
    int len = (int)sizeof(arr) / sizeof(*arr);
    bubble_sort(arr, len);
    int i;
    for (i = 0; i < len; i++)
    {
        printf("%d", arr[i]);
        if (i != len - 1)
        {
            printf("->");
        }
    }
    printf("\n");

    return 0;
}
```

## 3.统计字符

```c
/*
 * @Date: 2020-05-02 21:41:49
 * @LastEditors: litelte
 * @LastEditTime: 2020-05-02 21:47:05
 * @FilePath: /CProject/zju_c/week3PatTask/5.c
 * @Description: 统计字符
 */
// 题目链接：https://pintia.cn/problem-sets/13/problems/421

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int letter = 0;
    int blank = 0;
    int digit = 0;
    int other = 0;
    char arr[10] = {};
    int i;
    printf("please input:\n");
    for (int k = 0; k < 10; k++)
    {
        arr[k] = getchar();
    }
    for (i = 0; i < 10; i++)
    {
        if (arr[i] >= 'a' && arr[i] <= 'z' || arr[i] >= 'A' && arr[i] <= 'Z')
        {
            letter++;
        }
        else if (arr[i] == ' ' || arr[i] == '\n')
        {
            blank++;
        }
        else if (arr[i] >= '0' && arr[i] <= '9')
        {
            digit++;
        }
        else
        {
            other++;
        }
    }
    printf("letter = %d, blank = %d, digit = %d, other = %d\n", letter, blank, digit, other);

    return 0;
}
```

## 4.使用switch查询水果价格

```C
/*
 * @Date: 2020-05-02 21:47:35
 * @LastEditors: litelte
 * @LastEditTime: 2020-05-03 10:33:38
 * @FilePath: /CProject/zju_c/week3PatTask/6.c
 * @Description: 查询水果价格
 * 题目链接：https://pintia.cn/problem-sets/13/problems/422
 */
#include <stdio.h>
int main(int argc, char const *argv[])
{
    float apple = 3.00, pear = 2.50, orange = 4.10, grape = 10.20;
    int choice[5] = {};
    int count = 0;
    printf("[1] apple\n[2] pear\n[3] orange\n[4] grape\n[0] exit\n");
    scanf("%d %d %d %d %d", &choice[0], &choice[1], &choice[2], &choice[3], &choice[4]);
    for (count = 0; count < 5; count++)
    {
        if (choice[count] == 0)
        {
            break;
        }
        else
        {
            switch (choice[count])
            {
            case 1:
                printf("price = %.2f\n", apple);
                break;
            case 2:
                printf("price = %.2f\n", pear);
                break;
            case 3:
                printf("price = %.2f\n", orange);
                break;
            case 4:
                printf("price = %.2f\n", grape);
                break;
            default:
                printf("price = 0.00\n");
                break;
            }
        }
    }

    return 0;
}
/* 
    * 总结
    * 需要输入一些参数，参数与参数之间需要用空格分开时，单单一个getchar不再适用，这时就需要其他的工具来辅助
    * 比如数组，for循环
 */
```

## 5.统计学生成绩

这个程序代码列出的意义是，通过除法运算符来为成绩分等级，省去了多个表达式，从而让代码结构更简洁。

```C
/*
 * @Date: 2020-05-03 10:47:20
 * @LastEditors: litelte
 * @LastEditTime: 2020-05-03 11:12:28
 * @FilePath: /CProject/zju_c/week3PatTask/8.c
 * @Description: 统计学生成绩
 * 题目链接：https://pintia.cn/problem-sets/13/problems/424
 */
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int studentCount = 0;
    scanf("%d", &studentCount);
    float studentGrades = 0;
    int i = 0;
    int A_level = 0, B_level = 0, C_level = 0, D_level = 0, E_level = 0;
    for (i = 0; i < studentCount; i++)
    {
        scanf("%f", &studentGrades);
        switch ((int)studentGrades / 10)
        {
        case 10:
        case 9:
            A_level++;
            break;
        case 8:
            B_level++;
            break;
        case 7:
            C_level++;
            break;
        case 6:
            D_level++;
            break;
        default:
            E_level++;
            break;
        }
    }
    printf("%d %d %d %d %d\n", A_level, B_level, C_level, D_level, E_level);

    return 0;
}
```

## 6.输出三角形面积和周长

- 这个题目的难点是判断用户输入的三个数是否触及到边界问题，那么就需要把三角形成立的限制条件考虑好。

- 这里用到了逆向思维，既然成立的条件要比不成立的条件多，那么就直接将不成立的条件排除掉，剩下的就剩成立的条件了。

```c
/*
 * @Date: 2020-05-03 11:11:59
 * @LastEditors: litelte
 * @LastEditTime: 2020-05-03 11:28:47
 * @FilePath: /CProject/zju_c/week3PatTask/9.c
 * @Description: 输出三角形面积和周长
 * 题目链接：https://pintia.cn/problem-sets/13/problems/425
 */
#include <stdio.h>
#include <math.h>
float perimeter(int parameterA, int parameterB, int parameterC);
float area(int parameterA, int parameterB, int parameterC);
int main(int argc, char const *argv[])
{
    int parameterA = 0, parameterB = 0, parameterC = 0;
    scanf("%d %d %d", &parameterA, &parameterB, &parameterC);
    if ((parameterA + parameterB) <= parameterC || fabs(parameterA - parameterB) >= parameterC)
    {
        printf("These sides do not correspond to a valid triangle\n");
    }
    else
    {
        printf("area = %.02f; perimeter = %.02f\n", area(parameterA, parameterB, parameterC), perimeter(parameterA, parameterB, parameterC));
    }

    return 0;
}
float perimeter(int parameterA, int parameterB, int parameterC)
{
    return parameterA + parameterB + parameterC;
}
float area(int parameterA, int parameterB, int parameterC)
{
    float s = (parameterA + parameterB + parameterC) / 2.0;
    float preArea = s * (s - parameterA) * (s - parameterB) * (s - parameterC);
    return sqrtf(preArea);
}
```

## 7.高速公路超速罚款

这个题的难点在于规范化输出，也就是输出两个百分号，也就是键入两个百分号

```C
/*
 * @Date: 2020-05-03 11:39:47
 * @LastEditors: litelte
 * @LastEditTime: 2020-05-11 22:19:12
 * @FilePath: /CProject/zju_c/week3PatTask/11.c
 * @Description: 高速公路超速处罚
 * 题目链接：https://pintia.cn/problem-sets/13/problems/427
 */
#include <stdio.h>
int main(int argc, char const *argv[])
{
    float speed = 0, limitSpeed = 0;
    float overSpeedRate = 0;
    scanf("%f %f", &speed, &limitSpeed);
    overSpeedRate = (speed - limitSpeed) / limitSpeed;
    if (overSpeedRate < 0.1)
    {
        printf("OK\n");
    }
    else
    {
        // 如果想在程序中输出百分号，只需要放置两个百分号即可。
        printf("Exceed %.0f%%. ", overSpeedRate * 100);
        if (overSpeedRate >= 0.1 && overSpeedRate < 0.5)
        {
            printf("Ticket 200\n");
        }
        else
        {
            printf("License Revoked\n");
        }
    }

    return 0;
}
```

