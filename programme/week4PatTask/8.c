/*
 * @Date: 2020-05-04 14:54:30
 * @LastEditors: litelte
 * @LastEditTime: 2020-05-12 12:02:54
 * @FilePath: /CProject/zju_c/week4PatTask/8.c
 * @Description: 求分数序列前N项和
 * 题目链接：https://pintia.cn/problem-sets/13/problems/440
 */
#include <stdio.h>
int main(int argc, char const *argv[])
{
    // 注意精确度，是双精度
    double Numerator = 2, Denominator = 1, temp = 0;
    double sum = 2.0, singleItem = 0;
    double count;
    int i;
    scanf("%lf", &count);
    for (i = 1; i < count; i++)
    {
        temp = Numerator + Denominator;
        Denominator = Numerator;
        Numerator = temp;
        // 一定要注意类型的转换，不加括号的话，就不会变
        singleItem = Numerator * 1.0 / Denominator;
        sum += singleItem;
    }
    printf("%.2lf\n", sum);

    return 0;
}