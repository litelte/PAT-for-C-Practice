/*
 * @Date: 2020-04-27 14:59:12
 * @LastEditors: litelte
 * @LastEditTime: 2020-04-27 15:03:25
 * @FilePath: /CProject/zju_c/week2/11.c
 * @Description: 求平均值
 */
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a,b;
    printf("请输入两个数：\n");
    scanf("%d %d",&a,&b);
    // 除以2的话，结果仍为整型，为了保证精确度，应除以2.0
    // 运算符是有优先级的，必要时要加括号
    double c = (a+b)/2.0;
    printf("%d和%d的平均值=%f\n",a,b,c);
    // printf("Hello World!\n");
    return 0;
}