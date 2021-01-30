/*
 * @Date: 2020-04-28 11:01:23
 * @LastEditors: litelte
 * @LastEditTime: 2020-05-05 11:11:18
 * @FilePath: /CProject/zju_c/week2PatTask/3.c
 * @Description: 打印带*的图案，最后一个图案不能有空格
 */
/* 
* * * *
 * * *
  * *
   *
和2.c不同的是，这次的输出更遵循格式的要求就是每行最后的一个*不能有空格
所以我想到了使用奇偶数不同输出的方法
对于收获的点就是：
1.如果要使用for循环嵌套，那么外层的循环变量和内层的循环变量
是必须得建立练习的，比如本程序的例子：
外层为i，内层j、k，无论怎样都得产生联系
 */
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i, j, k;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < i; j++)
        {
            printf(" ");
        }
        for (k = 1; k <= 7 - (2 * i); k++)
        {
            // 打印次数随i有着变化：7、5、3、1
            //             对应：0、1、2、3
            if (k % 2 == 0)
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}