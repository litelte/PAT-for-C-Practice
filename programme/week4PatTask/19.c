/*
 * @Date: 2020-05-06 20:56:18
 * @LastEditors: litelte
 * @LastEditTime: 2020-05-06 22:34:20
 * @FilePath: /CProject/zju_c/week4PatTask/19.c
 * @Description: 水仙花数
 * 题目链接：https://pintia.cn/problem-sets/13/problems/450
 * 经过初步的运行，得出耗时较多的结果，解决方法：自定义幂函数，放弃使用库函数中的pow
 */
#include <stdio.h>
int mypow(int x, int y);
int main(int argc, char const *argv[])
{
    int num = 0;
    scanf("%d", &num);
    int startNumber = mypow(10, num - 1);
    int stopNumber = mypow(10, num) - 1;
    int i, digit = 0, sum = 0, orI = 0;
    for (i = startNumber; i <= stopNumber; i++)
    {
        orI = i;
        // printf("i = %d\n", orI);
        do
        {
            digit = orI % 10;
            sum += mypow(digit, num);
            orI /= 10;
        } while (orI != 0);
        if (sum == i)
        {
            printf("%d\n", i);
        }
        // sum初始化
        sum = 0;
    }

    return 0;
}
int mypow(int x, int y)
{
    int k = 1;
    int i;
    for (i = 0; i < y; i++)
    {
        k *= x;
    }
    return k;
}