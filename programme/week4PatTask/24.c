/*
 * @Date: 2020-05-06 23:40:17
 * @LastEditors: litelte
 * @LastEditTime: 2020-05-12 14:45:08
 * @FilePath: /CProject/zju_c/week4PatTask/24.c
 * @Description: 梅森数
 * 题目链接：https://pintia.cn/problem-sets/13/problems/454
 */
#include <stdio.h>
#include <math.h>
int isPrimeNumber(int parameter);
int main(int argc, char const *argv[])
{
    int deadNumber = 0;
    scanf("%d", &deadNumber);
    int i, singleItem = 0;
    int find = 0;
    for (i = 2; i <= deadNumber; i++)
    {
        singleItem = pow(2, i) - 1;
        if (isPrimeNumber(singleItem))
        {
            printf("%d\n", singleItem);
            find = 1;
        }

        // 初始化singleItem
        singleItem = 0;
    }
    if (find == 0)
    {
        printf("None\n");
    }
    /* printf("%d\n", isPrimeNumber(15));
    printf("%d\n", isPrimeNumber(63)); */
    return 0;
}
int isPrimeNumber(int parameter)
{
    int i;
    int isPN = 1;
    for (i = 2; i <= parameter / 2; i++)
    {
        if (parameter % i == 0)
        {
            // 说明不是素数
            isPN = 0;
        }
    }
    return isPN;
}