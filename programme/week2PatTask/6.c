/*
 * @Date: 2020-04-28 11:25:27
 * @LastEditors: litelte
 * @LastEditTime: 2020-04-28 11:38:28
 * @FilePath: /CProject/zju_c/week2PatTask/6.c
 * @Description: 计算一个数的百位、十位、个位数
 */
/* 
    输出整数152的个位数字、十位数字和百位数字的值。
    输出要求：
    152 = 个位数字 + 十位数字*10 + 百位数字*100
 */
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a = 152;
    printf("%d = %d + %d*10 + %d*100\n", a, a - (a / 100 * 100) - ((a - a / 100 * 100) / 10 * 10), (a - a / 100 * 100) / 10, a / 100);
    /* int b = 152 / 100;
    int c = (152 - b * 100) / 10;
    int d = 152 - b * 100 - c * 10;
    printf("%d = %d + %d*10 + %d*100\n", a, d, c, b); */
    // printf("Hello World!\n");
    return 0;
}
