/*
 * @Date: 2020-05-06 15:18:47
 * @LastEditors: litelte
 * @LastEditTime: 2020-05-06 16:02:05
 * @FilePath: /CProject/zju_c/week4PatTask/12.c
 * @Description: 兔子繁衍问题&斐波那契数列问题
 * 题目链接：https://pintia.cn/problem-sets/13/problems/444
 */
/* 
    * 斐波那契数列数列
    * 1，1，2，3，5，8，13......
 */
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int rabbitOri = 0;
    int loadCount = 0;
    int sumCount = 1;
    int userInputCount = 0;
    int month = 1;
    scanf("%d", &userInputCount);
    while (sumCount < userInputCount)
    {
        loadCount = rabbitOri;
        rabbitOri = sumCount;
        sumCount = loadCount + rabbitOri;
        month++;
        /* if (sumCount == userInputCount)
        {
            find = 0;
        } */
    }
    printf("%d\n", month);

    return 0;
}