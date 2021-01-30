/*
 * @Date: 2020-04-19 14:35:02
 * @LastEditors: litelte
 * @LastEditTime: 2020-04-19 14:40:20
 * @FilePath: /CProject/zju_c/week13/2.c
 * @Description: width或prec
 */
#include <stdio.h>
int main(int argc, char const *argv[])
{
    // 整个输出占9位，小数点后有两位
    printf("%9.2f\n", 123.0);
    // 6被填入*，而123则被填入d
    printf("%*d\n", 6, 123);
    printf("Hello World!\n");
    return 0;
}

/* 
   123.00
   123
Hello World!
 */