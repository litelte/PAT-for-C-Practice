/*
 * @Date: 2021-02-03 23:01:51
 * @LastEditors: litelte
 * @LastEditTime: 2021-03-05 23:35:13
 * @FilePath: /PAT-for-C-Practice/temp/6.c
 * @Description: 测试for循环
 */
#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
    // for循环无法实现，改用do while循环
    // 使用math库中的pow函数
    double x = -2;
    int d = 6;
    int res = pow(-2, d / 2);
    printf("Res  = %d\n", res);
    /* // 实现一个阶乘方案
    int inpVal = 0;
    scanf("%d", &inpVal);
    // 得考虑0的阶乘为1这个问题
    int dnm = inpVal;
    int res = 1;
    // 使用while循环
    while (dnm)
    {
        res *= dnm;
        dnm--;
    }
    printf("%d\n", res); */
    return 0;
}