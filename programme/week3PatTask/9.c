/*
 * @Date: 2020-05-03 11:11:59
 * @LastEditors: litelte
 * @LastEditTime: 2020-05-03 11:28:47
 * @FilePath: /CProject/zju_c/week3PatTask/9.c
 * @Description: 输出三角形面积和周长
 * 题目链接：https://pintia.cn/problem-sets/13/problems/425
 */
#include <stdio.h>
#include <math.h>
float perimeter(int parameterA, int parameterB, int parameterC);
float area(int parameterA, int parameterB, int parameterC);
int main(int argc, char const *argv[])
{
    int parameterA = 0, parameterB = 0, parameterC = 0;
    scanf("%d %d %d", &parameterA, &parameterB, &parameterC);
    if ((parameterA + parameterB) <= parameterC || fabs(parameterA - parameterB) >= parameterC)
    {
        printf("These sides do not correspond to a valid triangle\n");
    }
    else
    {
        printf("area = %.02f; perimeter = %.02f\n", area(parameterA, parameterB, parameterC), perimeter(parameterA, parameterB, parameterC));
    }

    return 0;
}
float perimeter(int parameterA, int parameterB, int parameterC)
{
    return parameterA + parameterB + parameterC;
}
float area(int parameterA, int parameterB, int parameterC)
{
    float s = (parameterA + parameterB + parameterC) / 2.0;
    float preArea = s * (s - parameterA) * (s - parameterB) * (s - parameterC);
    return sqrtf(preArea);
}
