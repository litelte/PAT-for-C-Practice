/*
 * @Date: 2020-05-04 11:48:51
 * @LastEditors: litelte
 * @LastEditTime: 2020-05-04 12:09:22
 * @FilePath: /CProject/zju_c/week4PatTask/3.c
 * @Description: 找出最小值
 * 题目链接：https://pintia.cn/problem-sets/13/problems/437
 */
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int inputCounts = 0;
    scanf("%d", &inputCounts);

    int inputFirst = 0, input = 0;
    int min = 0;
    int i;
    if (inputCounts == 1)
    {
        scanf("%d", &inputFirst);
        min = inputFirst;
    }
    else
    {
        for (i = 0; i < inputCounts; i++)
        {
            scanf("%d", &input);
            if (min > input)
            {
                min = input;
            }
        }
    }

    printf("min = %d\n", min);

    return 0;
}
