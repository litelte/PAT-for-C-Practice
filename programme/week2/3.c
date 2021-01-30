/*
 * @Date: 2020-04-19 13:13:44
 * @LastEditors: litelte
 * @LastEditTime: 2020-04-19 13:16:22
 * @FilePath: /CProject/zju_c/week2/3.c
 * @Description: 常量
 */
#include <stdio.h>
int main(int argc, char const *argv[])
{
    const int AMOUNT = 100;
    int price = 0;
    // 常量为只读，无法改变。
    // AMOUNT = 90;
    printf("请输入金额（元）：");
    scanf("%d",&price);
    int change =  AMOUNT - price;
    printf("找您%d元。\n",change);
    printf("Hello World!\n");
    return 0;
}
