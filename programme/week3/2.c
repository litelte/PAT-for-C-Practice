/*
 * @Date: 2020-05-01 18:45:21
 * @LastEditors: litelte
 * @LastEditTime: 2020-05-01 19:03:32
 * @FilePath: /CProject/zju_c/week3/2.c
 * @Description: 找零计算器
 */
#include <stdio.h>
int main(int argc, char const *argv[])
{
    float sum = 0;
    int money = 0;
    printf("你好，我是找零计算机，请输入你要购买的金额，以及支付的票面：\n");
    scanf("%f %d", &sum, &money);
    printf("正在计算:\n");
    if (sum > money)
    {
        printf("余额不足以购买\n");
    }
    else
    {
        printf("，找零中-----\n");
        printf("购买成功，找零%.01f元，欢迎下次再来！\n", money - sum);
    }

    return 0;
}
