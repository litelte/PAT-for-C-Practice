/*
 * @Date: 2020-04-19 13:49:02
 * @LastEditors: litelte
 * @LastEditTime: 2020-04-19 13:49:48
 * @FilePath: /CProject/zju_c/week2/8.c
 * @Description: 计算身高的改进版
 */
#include <stdio.h>
int main(int argc, char const *argv[])
{
    printf("请分别输入身高的英尺和英寸，"
           "如输入\"5 7\"表示5英尺7英寸：");
    int foot;
    int inch;
    scanf("%d %d", &foot, &inch);
    printf("身高是%f米。\n", ((foot + inch / 12.0) * 0.3048));
    printf("Hello World!\n");
    return 0;
}