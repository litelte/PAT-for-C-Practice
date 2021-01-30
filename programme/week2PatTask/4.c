/*
 * @Date: 2020-04-28 11:07:51
 * @LastEditors: litelte
 * @LastEditTime: 2020-04-28 11:16:48
 * @FilePath: /CProject/zju_c/week2PatTask/4.c
 * @Description: 温度之间的换算
 */
/* 
    计算华氏温度100°F对应的摄氏温度。计算公式：C=5×(F−32)/9，式中：C表示摄氏温度，
    F表示华氏温度，输出数据要求为整型。
    输出格式：
    fahr = 100, celsius = 计算所得摄氏温度的整数值
 */
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int F = 150;
    int C = 5 * (F - 32) / 9;
    printf("fahr = %d, celsius = %d\n", F, C);

    // printf("Hello World!\n");
    return 0;
}
