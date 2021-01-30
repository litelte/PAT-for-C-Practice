/*
 * @Date: 2020-05-01 19:20:13
 * @LastEditors: litelte
 * @LastEditTime: 2020-05-01 20:10:29
 * @FilePath: /CProject/zju_c/week3/4.c
 * @Description: 比较三个数的大小
 */
#include <stdio.h>
int main(int argc, char const *argv[])
{
    float a = 0, b = 0, c = 0;
    float max = 0;
    printf("请输入三个数的大小：\n");
    scanf("%f %f %f", &a, &b, &c);
    if (a > b)
    {
        if (a > c)
        {
            max = a;
        }
        else
        {
            max = c;
        }
    }
    else
    {
        if (b > c)
        {
            max = b;
        }
        else
        {
            max = c;
        }
    }
    printf("The max is %.01f\n", max);

    return 0;
}
