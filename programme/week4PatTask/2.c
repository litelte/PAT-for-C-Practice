/*
 * @Date: 2020-05-03 23:55:51
 * @LastEditors: litelte
 * @LastEditTime: 2020-05-04 00:19:21
 * @FilePath: /CProject/zju_c/week4PatTask/2.c
 * @Description: 求奇数和
 * 相关链接：https://pintia.cn/problem-sets/13/problems/436
 */
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int input = 0;
    scanf("%d", &input);
    int sum = 0;
    while (input > 0)
    {
        if (input % 2 != 0)
        {
            sum += input;
        }

        scanf("%d", &input);
    }
    printf("%d\n", sum);

    return 0;
}
