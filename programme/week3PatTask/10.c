/*
 * @Date: 2020-05-03 11:29:24
 * @LastEditors: litelte
 * @LastEditTime: 2020-05-03 11:37:28
 * @FilePath: /CProject/zju_c/week3PatTask/10.c
 * @Description: 三天打鱼，两天晒网
 * 题目链接：https://pintia.cn/problem-sets/13/problems/426
 */
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int day = 0;
    scanf("%d", &day);
    if (day > 1000 || day < 0)
    {
        printf("input error");
    }
    else
    {
        switch (day % 5)
        {
        case 1:
        case 2:
        case 3:
            printf("Fishing in day %d\n", day);
            break;
        case 0:
        case 4:
        case 5:
            printf("Drying in day %d\n", day);
            break;
        }
    }

    return 0;
}
