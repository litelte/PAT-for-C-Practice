/*
 * @Date: 2020-04-28 12:10:29
 * @LastEditors: litelte
 * @LastEditTime: 2020-05-05 11:23:10
 * @FilePath: /CProject/zju_c/week2PatTask/9.c
 * @Description: 计算存款利息（非整年）
 */
#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
    // 为了实现幂函数的运算，这里调用了math.h库中的pow函数
    float interest = 0.0, money = 0.0, rate = 0.0, year = 0.0, backMoney = 0.0;
    scanf("%f %f %f", &money, &year, &rate);
    interest = money * pow((1 + rate), year) - money;
    interest = (float)interest;
    printf("interest = %.2f\n", interest);
}
// 在编译程序时，需要加上lm
// 例如：gcc 9.c -lm
//或者：gcc -0 9 9.c -lm
//答案来源：https://stackoverflow.com/questions/12824134/undefined-reference-to-pow-in-c-despite-including-math-h