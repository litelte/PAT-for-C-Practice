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