/*
 * @Date: 2020-04-27 19:32:48
 * @LastEditors: litelte
 * @LastEditTime: 2020-05-05 11:10:46
 * @FilePath: /CProject/zju_c/week2PatTask/2.c
 * @Description: 打印带*的图案（test）
 */
#include <stdio.h>
int main(int argc, char const *argv[])
{
    /* 
输出下面的内容
* * * *
 * * *
  * *
   *
* * * *
 * * *
  * *
   *
这个图形可以看作是左边的空白和右边的*
由两层循环组成，外层循环为四次，内层循环也为4
*/
    int i, j, k;
    for (i = 0; i < 4; i++)
    {
        // 打印空白
        for (j = 0; j < i; j++)
        {
            printf(" ");
        }
        // 打印*
        for (k = 7; (k -= 2) > i; --k)
        {
            if ((k % 2) == 1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}
