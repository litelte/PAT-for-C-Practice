/*
 * @Date: 2020-04-19 14:42:08
 * @LastEditors: litelte
 * @LastEditTime: 2020-04-19 14:46:33
 * @FilePath: /CProject/zju_c/week13/3.c
 * @Description: 类型修饰
 */
#include <stdio.h>
int main(int argc, char const *argv[])
{
    printf("%hhd\n", 12345);
    printf("%9.2f\n", 123.0);
    printf("Hello World!\n");
    return 0;
}
/* 
运行结果：
57
   123.00
得到57的原因是：
拿int类型的数
12345的16进制为3039，取最后面的两位39，39的十进制为57
 */
