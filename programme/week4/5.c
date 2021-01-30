/*
 * @Date: 2020-05-03 16:33:27
 * @LastEditors: litelte
 * @LastEditTime: 2020-05-03 16:37:48
 * @FilePath: /CProject/zju_c/week4/5.c
 * @Description: 使用循环一次判断构建一个计算平均数的程序
 */
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int number;
    int sum = 0;
    int count = 0;
    scanf("%d", &number);
    while (number != -1)
    {
        sum += number;
        count++;
        scanf("%d", &number);
    }

    printf("%f\n", 1.0 * sum / count);
    return 0;
}