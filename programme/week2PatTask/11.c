/*
 * @Date: 2020-04-29 13:48:51
 * @LastEditors: litelte
 * @LastEditTime: 2020-04-29 15:18:22
 * @FilePath: /CProject/zju_c/week2PatTask/11.c
 * @Description: 计算前n项奇数的和
 */
/* 
    计算序列 1 + 1/3 + 1/5 + ... 的前N项之和。
    输入在一行中给出一个正整数N。
    在一行中按照“sum = S”的格式输出部分和的值S，精确到小数点后6位。题目保证计算结果不超过双精度范围。
    例如：
    23
    sum = 2.549541
 */
/* 
    容易出错的点：
    * 把前n项算成n以内的奇数，容易出现这样的问题：
    * https://segmentfault.com/q/1010000012456292
    * 熟悉使用for的用法
 */
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    double sum = 0;
    int j = 1;
    scanf("%d", &n);
    if (n <= 0)
    {
        printf("input error\n");
    }
    else
    {
        for (int i = 0; i < n; i++, j += 2)
        {
            sum += 1.0 / j;
        }
        printf("sum = %.6f\n", sum);
    }
    return 0;
}