/*
 * @Date: 2020-04-29 11:38:26
 * @LastEditors: litelte
 * @LastEditTime: 2020-05-05 11:52:18
 * @FilePath: /CProject/zju_c/week2PatTask/10.c
 * @Description: 算两个时间的差值
 */
/* 
    输入两个四位的整型数字来表示时间，计算它们的差值
    同时要考虑边界问题
    输出必须为两位数字
 */
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int startTime = 0, stopTime = 0;
    scanf("%d %d", &startTime, &stopTime);
    // 开始的时间比结束的时间大
    if (startTime / 100 > stopTime / 100)
    {
        printf("input error:Hour\n");
    }
    // 输入的两个时间的小时部分相同，分钟部分前面的比后面的大
    else if ((startTime / 100 == stopTime / 100) & (startTime % 100 > stopTime % 100))
    {
        printf("input error:minutes");
    }
    // 先同以换算成分钟，然后相减
    int startTimeInMinutes = (startTime / 100) * 60 + (startTime % 100);
    int stopTimeInMinutes = (stopTime / 100) * 60 + (stopTime % 100);
    int divid = stopTimeInMinutes - startTimeInMinutes;
    // 当然也可以使用借位运算
    /* if (stopTime % 100 < startTime % 100)
    {
        int dividMinutes = (stopTime % 100 + 60) - (startTime % 100);
        int dividHours = (stopTime / 100 - 1) - (startTime / 100);
        printf("%02d:%02d\n", dividHours, dividMinutes);
    }
    else
    {
        int dividMinutes = (stopTime % 100) - (startTime % 100);
        int dividHours = (stopTime / 100) - (startTime / 100);
        printf("%02d:%02d\n", dividHours, dividMinutes);
    } */

    // 输出必须为两个数字
    // 这里就非常钦佩/和%的功能了
    printf("%02d:%02d\n", divid / 60, divid % 60);
    return 0;
}