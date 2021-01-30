/*
 * @Date: 2020-05-06 16:03:56
 * @LastEditors: litelte
 * @LastEditTime: 2020-05-06 16:44:23
 * @FilePath: /CProject/zju_c/week4PatTask/13.c
 * @Description: 高空坠球
 * 题目链接：https://pintia.cn/problem-sets/13/problems/445
 */
#include <stdio.h>
int main(int argc, char const *argv[])
{
    long height = 0, jumpCount = 0;
    double sumHeight = 0;
    int i;
    scanf("%ld %ld", &height, &jumpCount);
    double heightOri = height, high = 0;
    for (i = 1; i <= jumpCount; i++)
    {
        // 第n次下落的高度
        sumHeight = sumHeight + heightOri + high;
        // 第i次弹起的高度
        high = 0.5 * heightOri;
        heightOri = high;
    }
    printf("%.1lf %.1lf\n", sumHeight, high);

    return 0;
}