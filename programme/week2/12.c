/*
 * @Date: 2020-04-27 15:14:26
 * @LastEditors: litelte
 * @LastEditTime: 2020-04-27 15:28:27
 * @FilePath: /CProject/zju_c/week2/12.c
 * @Description: 计算复利程序
 */
/* 
    在银行存定期的时候，可以选择到期后自动转存，并将到期的利息计入本金
    合并转存。如果一年期的定期利率是3.3%，那么连续自动转存3年后，最初
    存入的X元定期会得到多少本息金额
 */
#include <stdio.h>
int main(int argc, char const *argv[])
{
    printf("请输入您要存的本金金额：\n");
    float base_Money = 0.0;
    scanf("%f", &base_Money);
    double allMoneyNYear;
    int N;
    // N = 3;
    printf("请输入您要存的年限：");
    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        allMoneyNYear = base_Money * (1 + 0.033);
        base_Money = allMoneyNYear;
    }
    printf("最终的钱为：%f", base_Money);

    // float allMoneyTwoYear = allMoneyFirYear(1+0.033);
    // float allMoneyThrYear = allMoneyTwoYear(1+0.033);

    // printf("Hello World!\n");
    return 0;
}
