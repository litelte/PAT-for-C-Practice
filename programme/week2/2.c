/*
 * @Date: 2020-04-19 12:53:56
 * @LastEditors: litelte
 * @LastEditTime: 2020-04-19 13:02:02
 * @FilePath: /CProject/zju_c/week2/2.c
 * @Description: 变量赋值与初始化
 */
#include <stdio.h>
int main(int argc, char const *argv[])
{
    // int i;   // i不赋初值的话，在部分编译器中会出现乱码，或者长串的数字
    int i = 0;
    int j;
    j = i + 10;
    printf("%d\n", j);
    printf("Hello World");
    return 0;
}
