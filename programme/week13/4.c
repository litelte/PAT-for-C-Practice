/*
 * @Date: 2020-04-19 14:50:12
 * @LastEditors: litelte
 * @LastEditTime: 2020-04-19 14:54:59
 * @FilePath: /CProject/zju_c/week13/4.c
 * @Description: 字符类型
 */
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int num;
    printf("%hhd%n\n", (char)12345, &num);
    printf("%d%n\n", 12345, &num);
    printf("%dty%n\n", 12345, &num);
    printf("%d\n", num);
    printf("Hello World!\n");
    return 0;
}

/* 
57
12345
12345ty
7
Hello World!
 */