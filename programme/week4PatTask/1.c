/*
 * @Date: 2020-05-03 23:48:37
 * @LastEditors: litelte
 * @LastEditTime: 2020-05-12 12:00:33
 * @FilePath: /CProject/zju_c/week4PatTask/1.c
 * @Description: 计算最大公约数和最小公倍数
 * 相关链接：https://pintia.cn/problem-sets/13/problems/435
 */
#include <stdio.h>
// 定义最小公倍数Least common multiple
int lcm(int parameter1, int parameter2);
// 定义最大公约数Greatest common divisor
void gcd(int parameter1, int parameter2);
int main(int argc, char const *argv[])
{
    // 求最小公倍数
    /*
    * 比如2 4，最小公倍数就是4
    * 比如4，6，最小公倍数就是12
    * ......
    * 由此可知，最小公倍数是得大于两个数之间的数，并且小于两个数的乘积
    * 两个数的乘积肯定是两个数的公倍数，但不一定是最小的。
     */
    int parameter1, parameter2, lcmValue, gcdValue;
    scanf("%d %d", &parameter1, &parameter2);
    lcmValue = lcm(parameter1, parameter2);
    gcdValue = parameter1 * parameter2 / lcmValue;
    printf("%d %d\n", gcdValue, lcmValue);

    return 0;
}
int lcm(int parameter1, int parameter2)
{
    int min, max;
    min = parameter1 > parameter2 ? parameter1 : parameter2;
    max = parameter1 * parameter2;
    int i;
    for (i = min; i <= max; i++)
    {
        if ((i % parameter1 == 0) && (i % parameter2 == 0))
        {
            break;
        }
    }
    return i;
}
void gcd(int parameter1, int parameter2)
{
    // 最小公倍数=两数的乘积/最大公约数
    /*
    * 比如8和6，最小公倍数是24，最大公约数为2
    * 8*6/24 = 2
    * 比如12和10，最小公倍数是60，最大公约数2
    * 12*10/60 = 2
     */
}