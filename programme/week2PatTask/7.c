/*
 * @Date: 2020-04-28 11:38:50
 * @LastEditors: litelte
 * @LastEditTime: 2020-04-28 11:45:57
 * @FilePath: /CProject/zju_c/week2PatTask/7.c
 * @Description: 计算一个分段函数
 */
/*           _
            |   1/x  x != 0
    y=f(x) =|
            |_  0    x == 0
    上面的就是要构造的分段函数
    ** 输入输出要求：
    输入格式:
    输入在一行中给出实数x。

    输出格式:
    在一行中按“f(x) = result”的格式输出，其中x与result都保留一位小数。
    输入输出样例：
    例1：
    10
    f(10.0) = 0.1  
    输入样例2:
    0    
    f(0.0) = 0.0
 */
#include <stdio.h>
int main(int argc, char const *argv[])
{
    float inputNumber, outputNumber;
    scanf("%f", &inputNumber);
    if (inputNumber != 0)
    {
        outputNumber = 1 / inputNumber;
    }
    else
    {
        outputNumber = 0;
    }

    printf("f(%.1f) = %.1f\n", inputNumber, outputNumber);
    return 0;
}