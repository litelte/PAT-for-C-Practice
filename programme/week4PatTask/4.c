/*
 * @Date: 2020-05-04 12:10:09
 * @LastEditors: litelte
 * @LastEditTime: 2020-05-04 13:54:19
 * @FilePath: /CProject/zju_c/week4PatTask/4.c
 * @Description: 求整数的位数及各位数字之和
 * 题目链接：https://pintia.cn/problem-sets/13/problems/438
 */
#include <stdio.h>
int main(int argc, char const *argv[])
{
    // 注意题干信息，输入的每一个数字都不超过10
    int sum = 0;
    int inputNumber = 0;
    int inputNumberSizeof = 0;
    int judge = 0;
    scanf("%d", &inputNumber);
    judge = inputNumber;
    while (judge)
    {
        sum += judge % 10;
        judge /= 10;
        inputNumberSizeof++;
    }

    printf("%d %d\n", inputNumberSizeof, sum);
    return 0;
}
