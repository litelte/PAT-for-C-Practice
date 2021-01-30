/***
 * @Date: 2021-01-15 17:00:30
 * @LastEditors: litelte
 * @LastEditTime: 2021-01-15 17:00:30
 * @FilePath: /pat/temp/1.c
 * @Description: 使用百分号来对一个百位数进行拆分
 */
#include <stdio.h>
int main(int argc, char const *argv[])
{
    // 先对该百分数进行拆分，然后再对其拆分的数求和
    int a = 456;
    // 使用for循环,并用取余运算符
    int med = 100;
    int sum = 0;
    for (int i = 0; i < 3; i++)
    {
        printf("The %d Number is %d\n", i + 1, a / med);
        sum += a / med;
        a %= med;
        med /= 10;
    }
    printf("The result of sum: %d.\n", sum);

    return 0;
}