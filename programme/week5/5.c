/*
 * @Date: 2020-05-13 01:01:37
 * @LastEditors: litelte
 * @LastEditTime: 2020-05-13 01:07:13
 * @FilePath: /CProject/zju_c/week5/5.c
 * @Description:求前n项数的和(优化)
 */
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    int i;
    double sum = 0;
    // 设置标志数，让奇数次项为正数，偶数次项为负数
    // 让标志位为双精度型变量，省去了后面类型的转换
    double sign = 1.0;
    scanf("%d", &n);
    n = 10000;
    for (int i = 1; i <= n; i++)
    {
        sum += sign / i;
        sign = -sign;
    }
    printf("f(%d) = %f\n", n, sum);

    return 0;
}