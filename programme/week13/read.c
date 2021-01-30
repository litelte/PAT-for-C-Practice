/*
 * @Date: 2020-04-19 17:15:20
 * @LastEditors: litelte
 * @LastEditTime: 2020-04-19 20:03:49
 * @FilePath: /CProject/zju_c/week13/read.c
 * @Description: 学生信息读取
 */
#include <stdio.h>
#include "student.h"
void read(FILE *fp, int index);
int main(int argc, char const *argv[])
{
    FILE *fp = fopen("zju_c/week13/student.data", "r");
    if (fp)
    {
        fseek(fp, 0L, SEEK_END);
        long size = ftell(fp);
        int number = size / sizeof(Student);
        int index = 0;
        printf("有%d个数据，你要看第几个：", number);
        scanf("%d", &index);
        read(fp, index - 1);
        fclose(fp);
    }

    return 0;
}
void read(FILE *fp, int index)
{
    fseek(fp, index * sizeof(Student), SEEK_SET);
    Student stu;
    if (fread(&stu, sizeof(Student), 1, fp) == 1)
    {
        printf("第%d个学生：\n", index + 1);
        printf("\t姓名：%s\n", stu.name);
        printf("\t性别：");
        switch (stu.gender)
        {
        case 0:
            printf("男\n");
            break;
        case 1:
            printf("男\n");
            break;
        case 2:
            printf("其他\n");
            break;
        }
        printf("\t年龄：%d\n", stu.age);
    }
}
