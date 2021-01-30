/*
 * @Date: 2020-05-12 17:17:34
 * @LastEditors: litelte
 * @LastEditTime: 2020-05-12 17:38:30
 * @FilePath: /CProject/zju_c/week5/1.c
 * @Description:关于for循环的小练习
 */
#include <stdio.h>
int main(int argc, char const *argv[])
{
    // 判断一个数是否为素数
    int inputNumber = 0, isPrime = 0;
    scanf("%d", &inputNumber);
    for (int i = 2; i < inputNumber; i++)
    {
        if (inputNumber % i == 0)
        {
            isPrime = 1;
            break;
        }
    }
    if (isPrime == 0)
    {
        printf("是素数\n");
    }
    else
    {
        printf("不是素数\n");
    }

    return 0;
}