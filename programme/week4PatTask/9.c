/*
 * @Date: 2020-05-04 15:32:12
 * @LastEditors: litelte
 * @LastEditTime: 2020-05-04 20:25:46
 * @FilePath: /CProject/zju_c/week4PatTask/9.c
 * @Description: 特殊a串数列求和
 */
#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
    int num = 0, count = 0;
    scanf("%d %d", &num, &count);
    int i = 0, sumInner = num, sumOuter = num;
    if (num > 9)
    {
        printf("input error");
    }
    else
    {
        for (i = 1; i < count; i++)
        {
            // 统计单项的数
            sumInner += num * pow(10, i);
            // 统计所有项的和
            sumOuter += sumInner;
        }
    }
    printf("s = %d\n", sumOuter);

    return 0;
}