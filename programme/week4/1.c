/*
 * @Date: 2020-05-03 13:55:21
 * @LastEditors: litelte
 * @LastEditTime: 2020-05-03 14:28:33
 * @FilePath: /CProject/zju_c/week4/1.c
 * @Description: 一个使用while循环的示例程序
 */
#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
    int x;
    int n = 0;
    scanf("%d", &x);
    if (x < 0)
    {
        x = fabs(x);
        while (x >= 0)
        {
            n++;
            x /= 10;
        }
        printf("%d\n", n);
    }
    else
    {
        while (x > 0)
        {
            n++;
            x /= 10;
        }
        printf("%d\n", n);
    }

    return 0;
}
