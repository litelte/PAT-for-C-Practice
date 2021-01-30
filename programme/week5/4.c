/*
 * @Date: 2020-05-13 01:01:37
 * @LastEditors: litelte
 * @LastEditTime: 2020-05-13 01:04:45
 * @FilePath: /CProject/zju_c/week5/4.c
 * @Description:求前n项数的和
 */
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    int i;
    double sum = 0;
    // 设置标志数，让奇数次项为正数，偶数次项为负数
    int sign = 1;
    scanf("%d", &n);
    n = 10000;
    for (int i = 1; i <= n; i++)
    {
        sum += sign * 1.0 / i;
        sign = -sign;
    }
    printf("f(%d) = %f\n", n, sum);

    return 0;
}