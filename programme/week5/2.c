/*
 * @Date: 2020-05-12 17:45:38
 * @LastEditors: litelte
 * @LastEditTime: 2020-05-12 18:09:12
 * @FilePath: /CProject/zju_c/week5/2.c
 * @Description:输出50个素数
 */
#include <stdio.h>
int main(int argc, char const *argv[])
{
    // 定义变量，分别存储用户期望输出的数目，以及计数器
    int inputCount = 50, ctn = 1;
    int isPrime = 1;
    int i, j;
    for (i = 1; ctn <= inputCount; i++)
    {
        for (j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                isPrime = 0;
                break;
            }
        }
        if (isPrime == 1)
        {
            printf("第%d个素数：%d\t", ctn, i);
            ctn++;
        }
        // 需要对isPrime进行初始化
        isPrime = 1;
    }

    return 0;
}