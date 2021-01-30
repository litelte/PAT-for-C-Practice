/*
 * @Date: 2020-05-02 12:13:55
 * @LastEditors: litelte
 * @LastEditTime: 2020-05-02 19:24:58
 * @FilePath: /CProject/zju_c/week3PatTask/2.c
 * @Description: 求根公式的重构
 */

#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
    float a = 0, b = 0, c = 0;
    scanf("%f %f %f", &a, &b, &c);
    float delta = (b * b) - (4 * a * c);
    float ans1 = (-b + sqrtf(delta)) / (2 * a);
    float ans2 = (-b - sqrtf(delta)) / (2 * a);
    // 先判断是否为一元二次方程，判断标准：a是否为0
    if (a == 0)
    {
        // 去掉特殊情况
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
            // 方程不为一元二次方程
            printf("%.02f\n", -c / b);
        }
    }
    else
    {
        // 方程为一元二次方程，判断Δ的大小
        if (delta == 0)
        {
            printf("%.02f\n", ans1);
        }
        else if (delta > 0)
        {
            printf("%.02f\n", ans1);
            printf("%.02f\n", ans2);
        }
        else
        {
            // 出现重虚根的情况
            if (b == 0)
            {
                // 这里没有注意题目的要求，即便是纯虚根，也必须为a+bi的形式！！！
                printf("%.02f+%.02fi\n", b / (2 * a), 1 / (2 * a) * sqrt(fabsf(delta)));
                printf("%.02f%.02fi\n", b / (2 * a), -1 / (2 * a) * sqrt(fabsf(delta)));
            }
            else
            {
                printf("%.02f+%.02fi\n", -b / (2 * a), 1 / (2 * a) * sqrt(fabsf(delta)));
                printf("%.02f%.02fi\n", -b / (2 * a), -1 / (2 * a) * sqrt(fabsf(delta)));
            }
        }
    }
}
