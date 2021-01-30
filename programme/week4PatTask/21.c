/*
 * @Date: 2020-05-06 22:34:53
 * @LastEditors: litelte
 * @LastEditTime: 2020-05-06 22:59:37
 * @FilePath: /CProject/zju_c/week4PatTask/21.c
 * @Description: 输出三角形字符阵列
 * 题目链接：https://pintia.cn/problem-sets/13/problems/451
 */
#include <stdio.h>
int main(int argc, char const *argv[])
{
    // 先做一个三角字符打印
    int count = 0;
    scanf("%d", &count);
    int i, j, charCount = 0;
    if (count >= 1 && count < 7)
    {
        for (i = count; i > 0; i--)
        {

            for (j = 0; j < i; j++)
            {
                printf("%c ", 'A' + charCount);
                charCount++;
            }
            printf("\n");
        }
    }
    else
    {
        printf("input error!\n");
    }

    return 0;
}