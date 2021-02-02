/*
 * @Date: 2021-02-02 13:00:00
 * @LastEditors: litelte
 * @LastEditTime: 2021-02-02 17:41:26
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