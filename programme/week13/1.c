/*
 * @Date: 2020-04-19 14:23:59
 * @LastEditors: litelte
 * @LastEditTime: 2020-04-19 14:32:27
 * @FilePath: /CProject/zju_c/week13/1.c
 * @Description: 格式化输入和输出flag
 */
#include <stdio.h>
int main(int argc, char const *argv[])
{
    printf("%9d\n", 123);
    printf("%-9d\n", 123);
    printf("%09d\n", 123);
    printf("Hello World!\n");
    return 0;
}
/* 
      123
123      
000000123
Hello World!
 */
