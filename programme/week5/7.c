/*
 * @Date: 2020-05-13 01:10:14
 * @LastEditors: litelte
 * @LastEditTime: 2020-05-13 01:16:32
 * @FilePath: /CProject/zju_c/week5/7.c
 * @Description:整数分解，中间加空格
 */
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int x;
    // scanf("%d", &x);
    x = 14324;
    int t = 0;
    do
    {
        int d = x % 10;
        t = t * 10 + d;
        x /= 10;
    } while (x > 0);
    printf("x = %d,t=%d\n", x, t);
    x = t;

    do
    {
        int d = x % 10;
        printf("%d", d);
        if (x > 9)
        {
            printf(" ");
        }
        x /= 10;

    } while (x > 0);
    printf("\n");

    return 0;
}