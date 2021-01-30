/***
 * @Date: 2021-01-20 18:44:51
 * @LastEditors: litelte
 * @LastEditTime: 2021-01-20 18:44:51
 * @FilePath: /pat/func/lab2/5-4.c
 * @Description: 使用函数计算两点间的距离
 */
#include <stdio.h>
#include <math.h>

double dist(double x1, double y1, double x2, double y2);

int main()
{
    double x1, y1, x2, y2;

    scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);
    printf("dist = %.2f\n", dist(x1, y1, x2, y2));
    printf("hello world");
    return 0;
}

/* 你的代码将被嵌在这里 */

double dist(double x1, double y1, double x2, double y2)
{
    double dis = 0;
    dis = (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
    // 需要将结果开根号
    return sqrt(dis);
}