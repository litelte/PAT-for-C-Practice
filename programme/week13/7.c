/*
 * @Date: 2020-04-19 15:08:21
 * @LastEditors: litelte
 * @LastEditTime: 2020-04-19 15:10:49
 * @FilePath: /CProject/zju_c/week13/7.c
 * @Description: printf和scanf的返回值
 */
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int num;
    int i1 = scanf("%i", &num);
    int i2 = printf("%d\n", num);
    printf("%d:%d\n", i1, i2);
    printf("Hello World!\n");
    return 0;
}
/* 
1234
1234
1:5
Hello World!
 */
