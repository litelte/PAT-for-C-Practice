/*
 * @Date: 2020-04-29 13:48:51
 * @LastEditors: litelte
 * @LastEditTime: 2020-04-30 12:20:48
 * @FilePath: /CProject/zju_c/week2PatTask/15.c
 * @Description: 
 */
/* 
    * 本题要求编写程序，根据公式C(n m)=n!/m!(n−m)!
    * 算出从n个不同元素中取出m个元素（m≤n）的组合数。
    * 自定义函数fact(n)来计算n!,其中n的类型为int，函数类型为
    * double
    * 输入格式：
    * 输入在一行中给出两个正整数m和n（m≤n），以空格分隔。
    * 输出格式
    * 按照格式“result = 组合数计算结果”输出。题目保证结果在double类型范围内。
    * 输入：
    * 2 7
    * 输出：
    * result = 21
 */
/* 
    * 题目网址链接：https://pintia.cn/problem-sets/13/problems/417
    * 下面的答案为答案2
 */
#include <stdio.h>
double fact(int n);
int main(void)
{
    int i, n, m;
    double result;
    scanf("%d %d", &m, &n);
    result = 1;
    result = fact(n) / (fact(m) * fact(n - m));
    printf("result = %.0f", result);
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
