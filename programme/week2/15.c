/*
 * @Date: 2020-04-27 18:13:29
 * @LastEditors: litelte
 * @LastEditTime: 2020-04-27 18:16:55
 * @FilePath: /CProject/zju_c/week2/15.c
 * @Description: 关于PAT练习平台中的scanf函数的注意事项
 */
#include <stdio.h>
int main(int argc, char const *argv[])
{
    printf("请输入：\n");
    int a, b;
    scanf("%d %d", &a, &b);
    printf("您输入的是：%d和%d\n", a, b);
    printf("请输入：,记得输完加空格\n");
    scanf("%d %d ", &a, &b);
    printf("您输入的内容为：%d和%d \n", a, b);
    // printf("Hello World!\n");
    return 0;
}
