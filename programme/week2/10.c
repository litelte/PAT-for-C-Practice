/*
 * @Date: 2020-04-27 14:44:01
 * @LastEditors: litelte
 * @LastEditTime: 2020-04-27 14:57:50
 * @FilePath: /CProject/zju_c/week2/10.c
 * @Description: 应用表达式，计算时间差
 */
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int hour1, minute1;
    int hour2, minute2;
    printf("请输入一个时间：eg:1点20分：1 20\n");
    scanf("%d %d", &hour1, &minute1);
    printf("请再输入一个时间：eg:1点20分：1 20\n");
    scanf("%d %d", &hour2, &minute2);
    int time1 = 60 * hour1 + minute1;
    int time2 = 60 * hour2 + minute2;
    int time_minus;
    if (time1 >= time2)
    {
        time_minus = time1 - time2;
    }
    else
    {
        time_minus = time2 - time1;
    }
    printf("相差时间为：%d分,即%d时%d分 \n", time_minus, (time_minus / 60), (time_minus % 60));

    // printf("Hello World!\n");
    return 0;
}
