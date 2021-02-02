/*
 * @Date: 2021-02-02 22:46:26
 * @LastEditors: litelte
 * @LastEditTime: 2021-02-02 22:51:07
 * @FilePath: /PAT-for-C-Practice/func/lab5/5-7.c
 * @Description:使用函数求1到10的阶乘和
 */
#include <stdio.h>
double fact(int n);
int main(void)
{
    int i;
    double sum;
    sum = 0;
    for (i = 1; i <= 10; i++)
        sum = sum + fact(i);
    printf("1!+2!+...+10! = %f\n", sum);
    return 0;
}

/* 你的代码将被嵌在这里 */
double fact(int n)
{
    int product = 1;
    if (n > 10 || n < 0)
    {
        return 0;
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            product *= i;
        }
    }
    return product;
}