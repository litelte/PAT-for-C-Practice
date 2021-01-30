/*
 * @Date: 2020-05-04 14:00:11
 * @LastEditors: litelte
 * @LastEditTime: 2020-05-12 12:00:41
 * @FilePath: /CProject/zju_c/week4PatTask/7.c
 * @Description: 连小学生都懂的分桃问题
 */
#include <stdio.h>
int main(int argc, char const *argv[])
{
    // 把一定数量的桃子按3个、5个、4个分，最后都剩一个，规定桃不超过100个
    // 求桃子的数量
    for (int i = 100; i > 0; i--)
    {
        if (i % 5 == 1 && i % 4 == 1 && i % 3 == 1)
        {
            printf("%d\n", i);
        }
    }
    // printf("Hello World!\n");
    return 0;
}
