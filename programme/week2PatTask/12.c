/*
 * @Date: 2020-04-29 16:14:46
 * @LastEditors: litelte
 * @LastEditTime: 2020-04-29 16:35:01
 * @FilePath: /CProject/zju_c/week2PatTask/12.c
 * @Description: 
 */
/* 
    输入2个正整数lower和upper（lower≤upper≤100），请输出一张取值范围为[lower，upper]、
    且每次增加2华氏度的华氏-摄氏温度转换表。
    温度转换的计算公式：C=5×(F−32)/9，其中：C表示摄氏温度，F表示华氏温度。
    输入格式：
    在一行中输入2个整数，分别表示lower和upper的值，中间用空格分开。
    输出格式：
    第一行输出："fahr celsius"
    接着每行输出一个华氏温度fahr（整型）与一个摄氏温度celsius（占据6个字符宽度，靠右对齐，保留1位小数）。
    若输入的范围不合法，则输出"Invalid."。
    例1：
    32 35
    fahr celsius
    32   0.0
    34   1.1
    例2：
    40 30
    Invalid.

 */
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int lower = 0, upper = 0;
    scanf("%d %d", &lower, &upper);
    float C;
    if ((lower <= upper) & (lower <= 100) & (upper <= 100))
    {
        printf("fahr celsius\n");
        for (int i = lower; i <= upper; i += 2)
        {
            C = 5 * (i - 32) / 9.0;
            printf("%d%6.1f", i, C);
            printf("\n");
        }
    }
    else
    {
        printf("Invalid.\n");
    }

    return 0;
}
