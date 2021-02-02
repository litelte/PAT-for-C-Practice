/*
 * @Date: 2021-02-02 22:38:34
 * @LastEditors: litelte
 * @LastEditTime: 2021-02-02 22:45:35
 * @FilePath: /PAT-for-C-Practice/func/lab5/5-6.c
 * @Description: 使用函数判断平方数
 */
#include <stdio.h>
#include <math.h>
int IsSquare(int n);
int main()
{
    int n;
    scanf("%d", &n);
    if (IsSquare(n))
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}

/* 你的代码将被嵌在这里 */
int IsSquare(int n)
{
    int judgeRes = 0;
    int tempSqrt = sqrt(n * 1.0);
    if (tempSqrt * tempSqrt == n)
    {
        judgeRes = 1;
    }
    return judgeRes;
}