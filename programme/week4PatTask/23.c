/*
 * @Date: 2020-05-06 23:25:38
 * @LastEditors: litelte
 * @LastEditTime: 2020-05-07 00:20:41
 * @FilePath: /CProject/zju_c/week4PatTask/23.c
 * @Description: 输出整数各位数字
 * 题目链接：https://pintia.cn/problem-sets/13/problems/453
 */
#include <stdio.h>
int main(int argc, char const *argv[])
{
    long inputNumber = 0, orgiNum = 0;
    scanf("%ld", &inputNumber);
    int digit = 0, count = 0;
    int numberArray[10000] = {};
    orgiNum = inputNumber;
    int i;

    do
    {
        digit = orgiNum % 10;
        numberArray[count] = digit;
        orgiNum /= 10;
        count++;
    } while (orgiNum != 0);
    for (i = count - 1; i >= 0; i--)
    {
        printf("%d ", numberArray[i]);
    }
    printf("\n");

    return 0;
}