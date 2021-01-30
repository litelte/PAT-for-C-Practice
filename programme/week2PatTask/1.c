/*
 * @Date: 2020-04-27 18:35:17
 * @LastEditors: litelte
 * @LastEditTime: 2020-04-27 19:26:55
 * @FilePath: /CProject/zju_c/week2PatTask/1.c
 * @Description: 打印三角形
 */
/* 
打印下面的形状
****
***
**
*
 */
// 这是使用for循环来实现的
#include <stdio.h>
int main(int argc, char const *argv[])
{
    for (int j = 0; j < 4; j++)
    {
        for (int i = 4; i > j; --i)
        {
            printf("*");
        }
        printf("\n");
    }
    // printf("Hello World!\n");
    return 0;
}
