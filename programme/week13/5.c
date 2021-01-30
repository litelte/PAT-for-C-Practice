/*
 * @Date: 2020-04-19 14:57:22
 * @LastEditors: litelte
 * @LastEditTime: 2020-04-19 14:59:22
 * @FilePath: /CProject/zju_c/week13/5.c
 * @Description: scanf字符类型
 */
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int num;
    scanf("%*d%d",&num);
    printf("%d\n", num);
    printf("Hello World!\n");
    return 0;
}

/* 
123 234
234
Hello World!
 */