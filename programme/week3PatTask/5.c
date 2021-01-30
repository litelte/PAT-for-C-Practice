/*
 * @Date: 2020-05-02 21:41:49
 * @LastEditors: litelte
 * @LastEditTime: 2020-05-11 22:07:58
 * @FilePath: /CProject/zju_c/week3PatTask/5.c
 * @Description: 统计字符
 */
// 题目链接：https://pintia.cn/problem-sets/13/problems/421

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int letter = 0;
    int blank = 0;
    int digit = 0;
    int other = 0;
    char arr[10] = {};
    int i;
    printf("please input:\n");
    for (int k = 0; k < 10; k++)
    {
        arr[k] = getchar();
    }
    for (i = 0; i < 10; i++)
    {
        if (arr[i] >= 'a' && arr[i] <= 'z' || arr[i] >= 'A' && arr[i] <= 'Z')
        {
            letter++;
        }
        else if (arr[i] == ' ' || arr[i] == '\n')
        {
            blank++;
        }
        else if (arr[i] >= '0' && arr[i] <= '9')
        {
            digit++;
        }
        else
        {
            other++;
        }
    }
    printf("letter = %d, blank = %d, digit = %d, other = %d\n", letter, blank, digit, other);
    return 0;
}
