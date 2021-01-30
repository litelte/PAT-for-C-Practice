/***
 * @Date: 2020-10-09 15:50:57
 * @LastEditors: litelte
 * @LastEditTime: 2020-10-09 15:50:58
 * @FilePath: /zju_c/studyPractice/week6PatTask/6-1.c
 * @Description: 6-1
 */
#include <stdio.h>
// 定义一个阶乘函数
int factorial(int factor);
int main(int argc, char const *argv[])
{
    printf("%d", factorial(5));
    return 0;
}
int factorial(int factor)
{
    int res = 1;
    for (int i = 1; i <= factor; i++)
    {
        res *= i;
    }
    return res;
}