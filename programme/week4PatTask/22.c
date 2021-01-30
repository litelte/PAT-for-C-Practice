/*
 * @Date: 2020-05-06 22:59:57
 * @LastEditors: litelte
 * @LastEditTime: 2020-05-06 23:25:12
 * @FilePath: /CProject/zju_c/week4PatTask/22.c
 * @Description: 找完数
 * 题目链接：https://pintia.cn/problem-sets/13/problems/452
 */
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int startCount = 0, stopCount = 0;
    int i, j, sum = 0;
    int find = 0;
    scanf("%d %d", &startCount, &stopCount);
    for (i = startCount; i <= stopCount; i++)
    {
        for (j = 1; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                sum += j;
            }
        }
        if (sum == i)
        {
            find = 1;
            printf("%d = 1", sum);
            for (j = 2; j <= i / 2; j++)
            {
                if (i % j == 0)
                {
                    printf(" + %d", j);
                }
            }
            printf("\n");
        }

        // 初始化sum
        sum = 0;
    }
    if (find == 0)
    {
        printf("None\n");
    }

    return 0;
}