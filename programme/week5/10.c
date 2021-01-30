/*
 * @Date: 2020-05-13 15:43:25
 * @LastEditors: litelte
 * @LastEditTime: 2020-05-13 15:44:41
 * @FilePath: /CProject/zju_c/week5/10.c
 * @Description:使用辗转相除法来求得最大公约数
 */
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a, b;
    int t;
    scanf("%d %d", &a, &b);
    while (b != 0)
    {
        t = a % b;
        a = b;
        b = t;
    }

    printf("gcd = %d\n", a);
    return 0;
}