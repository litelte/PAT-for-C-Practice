/*
 * @Date: 2020-05-03 14:18:24
 * @LastEditors: litelte
 * @LastEditTime: 2020-05-03 14:30:15
 * @FilePath: /CProject/zju_c/week4/2.c
 * @Description: do while循环的练习
 */
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int x;
    scanf("%d", &x);
    int n = 0;
    do
    {
        x /= 10;
        n++;
    } while (x > 0);
    printf("%d\n", n);
    return 0;
}
