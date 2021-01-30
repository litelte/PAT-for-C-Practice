/*
 * @Date: 2020-05-03 16:41:02
 * @LastEditors: litelte
 * @LastEditTime: 2020-05-03 16:47:43
 * @FilePath: /CProject/zju_c/week4/6.c
 * @Description: 将一个数倒序输出
 */
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int x;
    x = 700;
    int digit;
    int ret = 0;
    while (x > 0)
    {
        digit = x % 10;
        // 纯倒序输出，如果输入770，输出007
        // printf("%d", digit);
        ret = ret * 10 + digit;
        // 详细且规范的输出
        printf("x = %d, digit=%d, ret = %d\n", x, digit, ret);
        x /= 10;
    }

    return 0;
}
