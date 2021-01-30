/*
 * @Date: 2020-05-01 19:12:49
 * @LastEditors: litelte
 * @LastEditTime: 2020-05-01 19:16:37
 * @FilePath: /CProject/zju_c/week3/3.c
 * @Description: 计算薪水
 */
#include <stdio.h>
int main(int argc, char const *argv[])
{
    const double RATE = 8.25;
    const int STANDARD = 40;
    double pay = 0.0;
    int hours;
    printf("请输入工作的小时数：\n");
    scanf("%d", &hours);
    printf("\n");
    if (hours > STANDARD)
        pay = STANDARD * RATE + (hours - STANDARD) * (RATE * 1.5);
    else
        pay = hours * RATE;
    printf("应付工资：%f\n", pay);
    return 0;
}
