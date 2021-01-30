/*
 * @Date: 2020-05-02 11:48:12
 * @LastEditors: litelte
 * @LastEditTime: 2020-05-02 18:43:32
 * @FilePath: /CProject/zju_c/week3PatTask/temp.c
 * @Description: 简单的题目不需要解释
 */
/* 
输入三个浮点数
    根据系数情况，输出不同结果：

1)如果方程有两个不相等的实数根，则每行输出一个根，先大后小；

2)如果方程有两个不相等复数根，则每行按照格式“实部+虚部i”输出一个根，先输出虚部为正的，后输出虚部为负的；

3)如果方程只有一个根，则直接输出此根；

4)如果系数都为0，则输出"Zero Equation"；

5)如果a和b为0，c不为0，则输出"Not An Equation"。
 */

#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
    float a = 0, b = 0, c = 0;
    scanf("%f %f %f", &a, &b, &c);
    /*  a = 1;
    b = 2;
    c = 3; */
    float delta = (b * b) - (4 * a * c);
    float ans1 = (-b + sqrtf(delta)) / (2 * a);
    float ans2 = (-b - sqrtf(delta)) / (2 * a);
    if (a == 0)
    {
        if (b == 0)
        {
            if (c == 0)
            {
                printf("Zero Equation\n");
            }
            else
            {
                printf("Not An Equation\n");
            }
        }
        else
        {
            printf("%.2f\n", -c / b);
        }
    }
    else
    {
        /* if (b = 0)
        {
            //解决纯b= 0的情况下，Δ无法开根号的问题。
            printf("%.02f\ni", fabsf(-c / a));
        } */
        // 使用求根公式来求解
        if (delta > 0)
        {
            printf("%.02f\n", ans1);
            printf("%.02f\n", ans2);
        }

        else if (delta == 0)
        {

            printf("%.02f\n", ans1);
        }
        else
        {
            // 调用fabs浮点型绝对值函数
            if (b == 0)
            {
                // b = 0的情况下，有纯虚根
                printf("%.02fi\n", -1 / (2 * a) * sqrt(fabsf(delta)));
            }
            else
            {
                printf("%.02f+%.02fi\n", -b / (2 * a), 1 / (2 * a) * sqrt(fabsf(delta)));
                printf("%.02f%.02fi\n", -b / (2 * a), -1 / (2 * a) * sqrt(fabsf(delta)));
            }
        }
    }
    return 0;
}