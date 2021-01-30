/*
 * @Date: 2020-05-01 20:18:30
 * @LastEditors: litelte
 * @LastEditTime: 2020-05-01 22:44:40
 * @FilePath: /CProject/zju_c/week3/5.c
 * @Description: switch-case型语句
 */
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int type;
    // const int MRN = 2;
    // 在C99中case的表达式可以为整型常量
    scanf("%d", &type);
    // switch()括号中的参数必须为整型数
    switch (type)
    {
    case 1:
        printf("你好");
        break;
    case 2:
        printf("早上好");
        break;
    case 3:
        printf("晚上好");
        break;
    case 4:
        printf("再见");
        break;
    default:
        printf("啊，什么呀？");
        break;
    }
    return 0;
}