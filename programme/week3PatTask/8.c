/*
 * @Date: 2020-05-03 10:47:20
 * @LastEditors: litelte
 * @LastEditTime: 2020-05-03 11:12:28
 * @FilePath: /CProject/zju_c/week3PatTask/8.c
 * @Description: 统计学生成绩
 * 题目链接：https://pintia.cn/problem-sets/13/problems/424
 */
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int studentCount = 0;
    scanf("%d", &studentCount);
    float studentGrades = 0;
    int i = 0;
    int A_level = 0, B_level = 0, C_level = 0, D_level = 0, E_level = 0;
    for (i = 0; i < studentCount; i++)
    {
        scanf("%f", &studentGrades);
        switch ((int)studentGrades / 10)
        {
        case 10:
        case 9:
            A_level++;
            break;
        case 8:
            B_level++;
            break;
        case 7:
            C_level++;
            break;
        case 6:
            D_level++;
            break;
        default:
            E_level++;
            break;
        }
    }
    printf("%d %d %d %d %d\n", A_level, B_level, C_level, D_level, E_level);

    return 0;
}
