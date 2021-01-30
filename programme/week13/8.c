/*
 * @Date: 2020-04-19 15:30:30
 * @LastEditors: litelte
 * @LastEditTime: 2020-04-19 15:35:46
 * @FilePath: /CProject/zju_c/week13/8.c
 * @Description: 打开文件
 */
#include <stdio.h>
int main(int argc, char const *argv[])
{
    FILE *fp = fopen("zju_c/week13/temp.txt", "r");
    if (fp)
    {
        int num;
        fscanf(fp, "%d", &num);
        printf("%d\n", num);
        fclose(fp);
    }
    else
    {
        printf("无法打开文件\n");
    }

    printf("Hello World!\n");
    return 0;
}
/* 
12345
Hello World!
 */