/*
 * @Date: 2020-05-13 15:20:19
 * @LastEditors: litelte
 * @LastEditTime: 2020-05-13 15:23:03
 * @FilePath: /CProject/zju_c/week5/9.c
 * @Description:求最大公约数，使用枚举法
 */
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a, b;
    int min;
    scanf("%d %d", &a, &b);
    if (a > b)
    {
        min = a;
    }
    else
    {
        min = b;
    }
    int ret = 0;
    int i;
    for (int i = 1; i < min; i++)
    {
        if (a % i == 0)
        {
            if (b % i == 0)
            {
                ret = i;
            }
        }
    }
    printf("%d和%d的最大公约数为%d\n", a, b, ret);
    return 0;
}