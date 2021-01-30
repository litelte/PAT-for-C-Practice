/*
 * @Date: 2020-05-03 11:39:47
 * @LastEditors: litelte
 * @LastEditTime: 2020-05-11 22:19:12
 * @FilePath: /CProject/zju_c/week3PatTask/11.c
 * @Description: 高速公路超速处罚
 * 题目链接：https://pintia.cn/problem-sets/13/problems/427
 */
#include <stdio.h>
int main(int argc, char const *argv[])
{
    float speed = 0, limitSpeed = 0;
    float overSpeedRate = 0;
    scanf("%f %f", &speed, &limitSpeed);
    overSpeedRate = (speed - limitSpeed) / limitSpeed;
    if (overSpeedRate < 0.1)
    {
        printf("OK\n");
    }
    else
    {
        // 如果想在程序中输出百分号，只需要放置两个百分号即可。
        printf("Exceed %.0f%%. ", overSpeedRate * 100);
        if (overSpeedRate >= 0.1 && overSpeedRate < 0.5)
        {
            printf("Ticket 200\n");
        }
        else
        {
            printf("License Revoked\n");
        }
    }

    return 0;
}