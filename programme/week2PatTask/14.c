/*
 * @Date: 2020-04-29 13:48:51
 * @LastEditors: litelte
 * @LastEditTime: 2020-05-05 12:05:41
 * @FilePath: /CProject/zju_c/week2PatTask/14.c
 * @Description: 实现公式C(n m)=n!/m!(n−m)!
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
    * 下面的答案为答案1，不是很理解和原答案的差别
 */
// FIXME:理解答案的细节
#include <stdio.h>
double fact(int n);
int main(int argc, char const *argv[])
{
    int m = 0, n = 0;
    scanf("%d %d", &m, &n);
    printf("result = %0.f \n", fact(n) / (fact(m) * fact(n - m)));
    return 0;
}
double fact(int n)
{
    int product = 1;
    for (int i = 2; i <= n; i++)
    {
        product *= i;
    }
    return product;
}