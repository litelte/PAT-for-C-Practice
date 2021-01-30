<!--
 * @Date: 2020-07-24 15:35:29
 * @LastEditors: litelte
 * @LastEditTime: 2020-07-24 15:35:53
 * @FilePath: /CProject/zju_c/week6/summary.md
 * @Description: 第六周的C语言编程，主要是习题讲解
-->

## 6.1编程解析1

### 求符合给定条件的整数集

>给定不超过6的正整数A，考虑从A开始的连续4个数字，输出所有由它们组成的无重复数字的3位数
>
>**输入格式：**
>
>输入在一行中给出A
>
>**输出格式：**
>
>输出满足条件的3位数，要求从小到大，每行6个整数，整数间以空格分隔，但行末不能有多余空格。
>
>输入：
>
>6
>
>输出：
>
>607 608 609 617 618 619
>627 628 629 637 638 639
>647 648 649 657 658 659
>678 679 687 689 697 698

### 源码

```c
/***
 * @Date: 2020-07-24 15:40:47
 * @LastEditors: litelte
 * @LastEditTime: 2020-07-24 15:40:47
 * @FilePath: /CProject/zju_c/week6/1v1.c
 * @Description:第一题的官方解答
 */
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a;
    scanf("%d", &a);
    // a = 2;
    int i, j, k;
    int cnt = 0;
    i = a;
    while (i <= a + 3)
    {
        k = a;
        while (j <= a + 3)
        {
            k = a;
            while (k <= a + 3)
            {
                if (i != j)
                {
                    if (i != k)
                    {
                        if (j != k)
                        {
                            cnt++;
                            printf("%d%d%d", i, j, k);
                            if (cnt == 6)
                            {
                                printf("\n");
                                cnt = 0;
                            }
                            else
                            {
                                printf(" ");
                            }
                        }
                    }
                }
                k++;
            }
            j++;
        }
        i++;
    }
    return 0;
}
```

## 6.2水仙花数

> 水仙花数是指一个N位正整数（N>=3）,它的每个位上的数字的N次幂之和等于它本身，例如：153=1^3+5^3+3^3