/***
 * @Date: 2021-01-26 18:15:56
 * @LastEditors: litelte
 * @LastEditTime: 2021-01-26 18:24:17
 * @FilePath: /pat/temp/5.c
 * @Description: hello  world
 */

#include <stdio.h>

int main(int argc, char const *argv[])
{
    for (int i = 1; i < 10; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d*%d=%d\t", i, j, i * j);
        }
        printf("\n");
        printf("hello world");
    }
    return 0;
}
