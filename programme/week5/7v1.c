/*
 * @Date: 2020-05-13 13:08:44
 * @LastEditors: litelte
 * @LastEditTime: 2020-05-13 13:26:57
 * @FilePath: /CProject/7.c
 * @Description:整数分解，进一步优化
 */
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int x;
    // scanf("%d", &x);
    x = 123454;
    int t = 0;
    // 先倒序输出，然后把各个位的数字相加
    do
    {
        // 找出最后一位数
        int d = x % 10;
        // 生成倒序的数
        t = t * 10 + d;
        // 去掉最后一位数
        x /= 10;
    } while (x > 0);
    // 现在t变成了x倒序的数
    printf("x = %d,t=%d\n", x, t);
    do
    {
        int d = t % 10;
        printf("%d", d);
        if (t > 9)
        {
            printf(" ");
        }
        t /= 10;

    } while (t > 0);

    return 0;
}