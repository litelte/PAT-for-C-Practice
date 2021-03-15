/*
 * @Date: 2021-03-05 22:54:06
 * @LastEditors: litelte
 * @LastEditTime: 2021-03-05 23:13:29
 * @FilePath: /PAT-for-C-Practice/temp/7.c
 * @Description: 实现一个阶乘的方案
 */
/* 实现下面的：
 * 0!+2!+4!+6!+... */
#include <stdio.h>
int main(int argc, char const *argv[])
{
    // 在阶乘的基础上再实现自加2
    int startNum = 0;
    // 每一项的值为EachRes
    int sum = 0;
    int EachRes;
    while (EachRes != 720)
    {
        EachRes = 1;
        for (int i = 1; i <= startNum; i++)
        {
            EachRes *= i;
        }
        startNum += 2;
        sum += EachRes;
        printf("EachRes = %d,sum = %d\n", EachRes, sum);
    }
    return 0;
}