/*
 * @Date: 2020-04-28 11:12:53
 * @LastEditors: litelte
 * @LastEditTime: 2020-05-05 11:20:45
 * @FilePath: /CProject/zju_c/week2PatTask/5.c
 * @Description: 计算下落高度
 */
/* 
    一个物体从100米的高空自由落下。编写程序，求它在前3秒内下落的垂直距离。设重力加速度为10米/秒²
    输出格式：height = 垂直距离值
 */
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int g = 10;
    int t = 3;
    float height = 0.5 * g * t * t;
    printf("height = %.2f\n", height);
    // printf("Hello World!\n");
    return 0;
}