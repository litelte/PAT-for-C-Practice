/*
 * @Date: 2020-04-19 13:21:21
 * @LastEditors: litelte
 * @LastEditTime: 2020-04-19 13:23:00
 * @FilePath: /CProject/zju_c/week2/5.c
 * @Description: 使用加法函数
 */
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a, b;
    printf("请输入两个整数：");
    scanf("%d %d", &a, &b);
    printf("%d + %d = %d\n", a, b, a + b);
    printf("Hello World!\n");
    return 0;
}
