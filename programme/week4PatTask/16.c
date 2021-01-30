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