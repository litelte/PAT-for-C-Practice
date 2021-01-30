/***
 * @Date: 2020-10-09 14:58:30
 * @LastEditors: litelte
 * @LastEditTime: 2020-10-09 14:58:31
 * @FilePath: /zju_c/studyPractice/preds/Hourglass.c
 * @Description: 输入一个数字，打印在这个数字之内最大数量符号的沙漏
 */

/* 打印沙漏
*****
 ***
  *
 ***
*****
 */
#include <stdio.h>
int main(int argc, char const *argv[])
{
    // 先实现一个沙漏首行为5个元素
    for (int i = 5; i > 0; i -= 2)
    {
        // printf("%d\n", i);

        for (int j = i; j > 0; j--)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}