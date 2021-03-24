/*
 * @Date: 2021-03-13 00:25:27
 * @LastEditors: litelte
 * @LastEditTime: 2021-03-13 00:25:59
 * @FilePath: /PAT-for-C-Practice/temp/10.c
 * @Description: 测试别人的代码
 */
#include <stdio.h>
#include <math.h>

double funcos(double e, double x);

int main()
{
    double e, x;

    scanf("%lf %lf", &e, &x);
    printf("cos(%.2f) = %.6f\n", x, funcos(e, x));

    return 0;
}
double fac(int n)
{
    double s = 1;
    for (int i = 1; i <= n; i++)
        s *= i;
    return s;
}
double funcos(double e, double x)
{
    double sum = 1;
    for (int i = 2, j = 1;; i += 2, j++)
    {
        if (j % 2 != 0)
            sum -= pow(x, i) / fac(i);
        else
            sum += pow(x, i) / fac(i);
        if (pow(x, i) / fac(i) < e)
            break;
    }
    return sum;
}