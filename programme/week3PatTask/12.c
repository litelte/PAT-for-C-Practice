/*
 * @Date: 2020-05-03 12:06:52
 * @LastEditors: litelte
 * @LastEditTime: 2020-05-03 12:42:25
 * @FilePath: /CProject/12.c
 * @Description: 计算油费
 * 题目链接：https://pintia.cn/problem-sets/13/problems/428
 */
#include <stdio.h>
int main(int argc, char const *argv[])
{
    float pat90 = 6.95, pat93 = 7.44, pat97 = 7.93;
    float serviceM = 0.05, serviceE = 0.03;
    float pay = 0;
    int patQuantity = 0, pat_type = 0;
    char serviceType;
    scanf("%d %d %c", &patQuantity, &pat_type, &serviceType);
    switch (pat_type)
    {
    case 90:
        pay = patQuantity * pat90;
        break;
    case 93:
        pay = patQuantity * pat93;
        break;
    case 97:
        pay = patQuantity * pat97;
        break;
    default:
        printf("patType input error!\n");
        break;
    }
    switch (serviceType)
    {
    case 'm':
        pay *= (1 - serviceM);
        break;
    case 'e':
        pay *= (1 - serviceE);
        break;
    default:
        printf("serveiceType input error!\n");
        break;
    }
    printf("%.02f\n", pay);

    return 0;
}
