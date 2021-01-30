/*
 * @Date: 2020-05-13 01:10:14
 * @LastEditors: litelte
 * @LastEditTime: 2020-05-13 13:00:49
 * @FilePath: /CProject/zju_c/week5/6.c
 * @Description:整数分解，中间加空格
 */
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int x;
    // scanf("%d", &x);
    x = 14324;
    do
    {
        // 得到最后一位数字
        int d = x % 10;
        printf("%d", d);
        // 只要x不剩一位数字，就继续打印空格
        if (x > 9)
        {
            printf(" ");
        }
        // x把打印的最后一位数字去掉
        x /= 10;

    } while (x > 0);
    printf("\n");

    return 0;
}