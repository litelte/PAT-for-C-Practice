/*
 * @Date: 2021-01-20 17:31:51
 * @LastEditors: litelte
 * @LastEditTime: 2021-01-20 17:32:21
 * @FilePath: /pat/func/lab2/4-5
 * @Description: 实现一个计算x的N次方的函数
 */
#include <stdio.h>

double mypow(double x, int n);

int main()
{
    double x;
    int n;

    scanf("%lf %d", &x, &n);
    printf("%f\n", mypow(x, n));

    return 0;
}

/* 你的代码将被嵌在这里 */
double mypow(double x, int n)
{
    if (n < 0)
    {
        return 0;
    }
    else if (n == 0)
    {
        return 1;
    }
    else
    {
        double product = 1; //定义一个积的变量
        for (int i = 0; i < n; i++)
        {
            product *= x;
        }
        return product;
    }
}