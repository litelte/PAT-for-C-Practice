/*
 * @Date: 2021-02-02 18:56:20
 * @LastEditors: litelte
 * @LastEditTime: 2021-02-02 19:27:03
 * @FilePath: /PAT-for-C-Practice/temp/4.c
 * @Description: 简单方法判断一个数是否为素数
 */
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a = 0;
    scanf("%d", &a);
    //0和1，既不为素数，也不为合数，需要做个判断
    if (a == 0 || a == 1)
    {
        printf("您的输入有误\n");
        return 0;
    }
    else
    {

        for (int i = 2; i < a; i++)
        {
            if (a % i == 0)
            {
                printf("不是素数\n");
                break;
            }
        }
        return 0;
    }
}