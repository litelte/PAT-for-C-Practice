/*
 * @Date: 2020-05-06 18:34:12
 * @LastEditors: litelte
 * @LastEditTime: 2020-05-06 20:55:00
 * @FilePath: /CProject/zju_c/week4PatTask/18.c
 * @Description: 换硬币-另一种解法，从大到小输出
 * 这个答案单纯为了通过PTA平台的测试
 * 题目链接：https://pintia.cn/problem-sets/13/problems/449
 */
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int total = 0, count = 0;
    int fen5 = 5, fen2 = 2, fen1 = 1;
    int fen5Count = 0, fen2Count = 0, fen1Count = 0;
    scanf("%d", &total);
    int i, j;
    if (total > 8 && total < 100)
    {
        for (fen5Count = (total - 3) / fen5; fen5Count >= 1; fen5Count--)
        {
            for (fen2Count = (total - 1 - fen5 * fen5Count) / 2; fen2Count >= 1; fen2Count--)
            {
                fen1Count = total - 5 * fen5Count - 2 * fen2Count;
                printf("fen5:%d, fen2:%d, fen1:%d, total:%d\n", fen5Count, fen2Count, fen1Count, fen5Count + fen2Count + fen1Count);
                count++;
            }
        }
        printf("count = %d\n", count);
    }
    else
    {
        printf("Input error\n");
    }
    return 0;
}