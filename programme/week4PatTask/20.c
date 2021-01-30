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