/*
 * @Date: 2020-04-19 12:23:38
 * @LastEditors: litelte
 * @LastEditTime: 2020-04-19 12:25:47
 * @FilePath: /CProject/zju_c/week2/1.c
 * @Description: 使用scanf函数实现找零钱的程序
 */
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int price = 0;
    printf("请输入金额（元）：");
    scanf("%d", &price);
    int change = 100 - price;
    printf("找您%d元。\n", change);
    return 0;
}
