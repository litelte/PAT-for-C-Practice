/*
 * @Date: 2021-02-02 13:00:00
 * @LastEditors: litelte
 * @LastEditTime: 2021-02-02 20:27:32
 * @FilePath: /PAT-for-C-Practice/func/lab5/5-5.c
 * @Description: 使用函数求素数的和
 */
#include <stdio.h>
#include <math.h>

int prime(int p);
int PrimeSum(int m, int n);
int main()
{
    int m, n, p;
    scanf("%d %d", &m, &n);
    printf("Sum of ( ");
    for (p = m; p <= n; p++)
    {
        if (prime(p) != 0)
            printf("%d ", p);
    }
    printf(") = %d\n", PrimeSum(m, n));
    return 0;
}

/* 你的代码将被嵌在这里 */
int prime(int p)
{
    // 这里就用开根号的方法
    int tempSqrt = 0;
    // 这里要把该数乘以1.0，因为sqrt函数中参数必须是double类型的数
    tempSqrt = (int)sqrt(p * 1.0);
    int result = 1;
    if (p <= 1)
    {
        result = 0;
    }
    else
    {
        for (int i = 2; i <= tempSqrt; i++)
        {
            if (p % i == 0)
            {
                result = 0;
                break;
            }
        }
    }
    return result;
}

int PrimeSum(int m, int n)
{
    int sum = 0;
    if (m > n)
    {
        return 0;
    }
    else
    {
        for (int i = m; i <= n; i++)
        {
            if (prime(i) == 1)
            {
                sum += i;
            }
        }
    }
    return sum;
}