/*
 * @Date: 2020-05-13 15:12:45
 * @LastEditors: litelte
 * @LastEditTime: 2020-05-13 15:16:06
 * @FilePath: /CProject/zju_c/week5/8v3.c
 * @Description:视频课中的代码，同样是完全体的分解一个数
 */
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int x;
    scanf("%d", &x);
    // x = 70;
    int mask = 1;
    int t = x;
    while (t > 9)
    {
        t /= 10;
        mask *= 10;
    }
    printf("x = %d,mask = %d\n", x, mask);
    do
    {
        int d = x / mask;
        printf("%d", d);
        if (mask > 9)
        {
            printf(" ");
        }
        x %= mask;
        mask /= 10;

    } while (mask > 0);
    printf("\n");

    return 0;
}