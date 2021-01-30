/*
 * @Date: 2020-04-29 13:48:51
 * @LastEditors: litelte
 * @LastEditTime: 2020-04-29 18:52:18
 * @FilePath: /CProject/zju_c/week2PatTask/13.c
 * @Description: 简单的练习不需要记录
 */
/* 
    * 计算交错序列 1-2/3+3/5-4/7+5/9-6/11+... 的前N项之和。
    * 输入格式：
    * 输入在一行中给出一个正整数N。
    * 输出格式：
    * 在一行中输出部分和的值，结果保留三位小数。
    * 输入案例
    * 5
    * 0.917
 */
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    float sum = 0.0;
    // 此处的定义很重要
    float Numerator = 1.0, denominator = 1.0;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 1)
        {
            sum = sum + (Numerator / denominator);
        }
        else
        {
            sum = sum - (Numerator / denominator);
        }
        Numerator++;
        denominator += 2;
    }
    printf("%.3f\n", sum);

    return 0;
}
