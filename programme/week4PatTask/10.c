/*
 * @Date: 2020-05-04 22:39:24
 * @LastEditors: litelte
 * @LastEditTime: 2020-05-06 13:12:12
 * @FilePath: /CProject/zju_c/week4PatTask/10.c
 * @Description: 求给定精度的简单交错序列部分和 
 * 题目链接：https://pintia.cn/problem-sets/13/problems/442
 */
#include <stdio.h>
int main(int argc, char const *argv[])
{
    // int loopCount = 0;
    double sum = 0;
    int i = 1;
    double inputNumber = 0;
    scanf("%lf", &inputNumber);
    /* while ((1.0 / i) >= inputNumber)
    {
        if (i % 2 == 1)
        {
            sum += (1.0 / i);
        }
        else
        {
            sum -= (1.0 / i);
        }

        i += 3;
        // printf("loopCount = %d,result = %lf\n", loopCount, sum);
    } */
    do
    {
        if (i % 2 == 1)
        {
            sum += 1.0 / i;
        }
        else
        {
            sum -= 1.0 / i;
        }

        i += 3;
    } while ((1.0 / i) >= inputNumber);

    printf("sum = %lf\n", sum);
    return 0;
}

//FIXME:错误的代码
/* typedef enum
{
    TRUE = 1,
    FALSE = 0
} bool;
#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
    double inputNumber = 0;
    scanf("%lf", &inputNumber);
    int i;
    double sum = 0, singleItem = 0;
    bool find = FALSE;
    for (i = 1; !find; i++)
    {
        singleItem = 1 + 3 * (i - 1);
        if (fabsf(1.0 / singleItem) >= inputNumber)
        {
            find = TRUE;
            if ((i - 1) % 2 == 0)
            {
                sum -= 1.0 / (singleItem - 3);
            }
            else
            {
                sum += 1.0 / (singleItem - 3);
            }
        }
        else
        {
            if (i % 2 == 0)
            {
                sum -= 1.0 / singleItem;
            }
            else
            {
                sum += 1.0 / singleItem;
            }
        }
    }
    printf("sum = %lf\n", sum);
    return 0;
} */