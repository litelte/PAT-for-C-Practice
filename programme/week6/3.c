/***
 * @Date: 2020-07-25 11:15:41
 * @LastEditors: litelte
 * @LastEditTime: 2020-07-25 11:15:41
 * @FilePath: /CProject/zju_c/week6/3.c
 * @Description:输出一个下三角的乘法口诀表
 */
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int sum;
    for (int i = 1; i < 10; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d*%d=%d\t", j, i, i * j);
        }
        printf("\n");
    }
    return 0;
}