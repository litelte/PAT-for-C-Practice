/*
 * @Date: 2021-02-02 19:01:37
 * @LastEditors: litelte
 * @LastEditTime: 2021-02-02 19:40:41
 * @FilePath: /PAT-for-C-Practice/temp/5.c
 * @Description: 进阶方法判断一个数是否为素数
 */
#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
    int a = 0;
    int tempSqrt = 0;
    scanf("%d", &a);
    if (a == 0 || a == 1)
    {
        printf("您的输入有误\n");
        return 0;
    }
    else
    {

        tempSqrt = (int)sqrt(a * 1.0);
        for (int i = 2; i <= tempSqrt; i++)
        {
            if (a % i == 0)
            {
                printf("不是素数\n");
                break;
            }
        }
    }
    return 0;
}