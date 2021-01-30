/*
 * @Date: 2020-05-03 10:32:14
 * @LastEditors: litelte
 * @LastEditTime: 2020-05-03 10:47:14
 * @FilePath: /CProject/zju_c/week3PatTask/7.c
 * @Description: 计算个人所得税
 */
#include <stdio.h>
int main(int argc, char const *argv[])
{
    float salary = 0;
    scanf("%f", &salary);
    if (salary < 0)
    {
        printf("input error\n");
    }
    else
    {
        if (salary <= 1600)
        {
            printf("0.00\n");
        }
        else if (salary > 1600 && salary <= 2500)
        {
            printf("%.02f\n", (salary - 1600) * 0.05);
        }
        else if (salary > 2500 && salary <= 3500)
        {
            printf("%.02f\n", (salary - 1600) * 0.1);
        }
        else if (salary > 3500 && salary <= 4500)
        {
            printf("%.02f\n", (salary - 1600) * 0.15);
        }
        else if (salary > 4500)
        {
            printf("%.02f\n", (salary - 1600) * 0.2);
        }
    }

    return 0;
}
