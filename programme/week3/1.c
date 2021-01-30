/*
 * @Date: 2020-05-01 18:33:18
 * @LastEditors: litelte
 * @LastEditTime: 2020-05-01 18:44:13
 * @FilePath: /CProject/zju_c/week3/1.c
 * @Description: C语言实现借位运算
 */
/* 
    * 输入两个时间，
    * 如：11 02
    * 10 20
    * 计算两个时间的差值
 */
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int hour1, minute1;
    int hour2, minute2;
    scanf("%d %d", &hour1, &minute1);
    scanf("%d %d", &hour2, &minute2);
    int ih = hour2 - hour1;
    int im = minute2 - minute1;
    if (im < 0)
    {
        im = 60 + im;
        ih--;
    }
    printf("时间差是%d小时%d分\n", ih, im);

    return 0;
}
