/*
 * @Date: 2020-05-01 22:44:55
 * @LastEditors: litelte
 * @LastEditTime: 2020-05-01 22:47:50
 * @FilePath: /CProject/zju_c/week3/6.c
 * @Description: 使用switch实现成绩转换
 */
#include <stdio.h>
int main(int argc, char const *argv[])
{
    printf("输入一个学生的成绩：");
    int grade;
    scanf("%d", &grade);
    grade /= 10;
    switch (grade)
    {
    case 10:
    case 9:
        printf("A\n");
        break;
    case 8:
        printf("B\n");
        break;
    case 7:
        printf("C\n");
        break;
    case 6:
        printf("D\n");
        break;
    default:
        printf("F\n");
        break;
    }
    return 0;
}
