/***
 * @Date: 2020-07-25 11:18:54
 * @LastEditors: litelte
 * @LastEditTime: 2020-07-25 11:18:54
 * @FilePath: /CProject/zju_c/week6/4.c
 * @Description: 输出m-n之间的所有素数
 */
/*
 * 输入在一行中给出2个正整数M和N（1<=M<=N<=500）
 * 输出格式：
 * 在一行中顺序输出M和N区间内素数的个数以及它们的和，数字间以空格分隔
 * 输入样例：
 * 10 31
 * 输出样例：
 * 7 143
*/
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int front = 0, back = 0;
    scanf("%d %d", &front, &back);
    // 这里需要考虑的一个边界问题是，当用户输入的起始值为1时，1也会背计入，但1不是素数
    // 这里需要做一个特殊值调整
    if (front == 1)
    {
        front = 2;
    }
    int sum = 0;
    int isPrime, cnt = 0;
    // 遍历front和back之间的所有数，逐个进行判断
    for (int i = front; i <= back; i++)
    {
        isPrime = 1;
        // 注意素数的判断条件
        for (int j = 2; j < i - 1; j++)
        {
            if (i % j == 0)
            {
                isPrime = 0;
                break;
            }
        }
        if (isPrime == 1)
        {
            cnt++;
            // printf("%d\n", i);
            sum += i;
        }
    }
    printf("%d %d\n", cnt, sum);

    return 0;
}