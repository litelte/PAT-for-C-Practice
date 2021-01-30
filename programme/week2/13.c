/*
 * @Date: 2020-04-27 15:42:20
 * @LastEditors: litelte
 * @LastEditTime: 2020-04-27 15:44:29
 * @FilePath: /CProject/zju_c/week2/13.c
 * @Description: 练习交换变量
 */
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a = 5, b = 6;
    printf("交换前的值：a = %d,b = %d \n", a, b);
    int t;
    t = a;
    a = b;
    b = t;
    printf("交换后的值：a = %d,b = %d \n", a, b);
    // printf("Hello World!\n");
    return 0;
}
