/*
 * @Date: 2020-04-28 11:48:55
 * @LastEditors: litelte
 * @LastEditTime: 2020-05-05 11:20:56
 * @FilePath: /CProject/zju_c/week2PatTask/8.c
 * @Description: 计算存款利息（对于整年来算）
 */
#include <stdio.h>
int main(int argc, char const *argv[])
{
    float preMoney, money, rate, interest, backMoney;
    int year;
    scanf("%f %d %f", &money, &year, &rate);
    preMoney = money;
    for (int i = 0; i < year; i++)
    {
        backMoney = money * (1 + rate);
        money = backMoney;
    }
    interest = money - preMoney;
    printf("interset = %.2f\n", interest);

    return 0;
}