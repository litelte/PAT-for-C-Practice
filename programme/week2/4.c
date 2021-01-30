/*
 * @Date: 2020-04-19 13:17:04
 * @LastEditors: litelte
 * @LastEditTime: 2020-04-19 13:19:31
 * @FilePath: /CProject/zju_c/week2/4.c
 * @Description: 更改变量
 */
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int amount = 100;
    int price = 0;
    printf("请输入金额（元）：");
    scanf("%d", &price);
    printf("请输入票面");
    scanf("%d", &amount);
    int change = amount - price;
    printf("找您%d元。\n", change);
    printf("Hello World!\n");
    return 0;
}
