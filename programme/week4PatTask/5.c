/*
 * @Date: 2020-05-04 13:54:25
 * @LastEditors: litelte
 * @LastEditTime: 2020-05-12 11:46:36
 * @FilePath: /CProject/zju_c/week4PatTask/5.c
 * @Description: 韩信点兵问题
 * 题目链接：https://pintia.cn/problem-sets/13/problems/439
 */
// 无布尔变量，使用枚举定义
typedef enum
{
    TRUE = 1,
    FALSE = 0
} bool;
#include <stdio.h>
int main(int argc, char const *argv[])
{
    // 使用穷举法
    bool find = FALSE;
    int i;
    for (i = 1; !find; i++)
    {
        if (i % 5 == 1 && i % 6 == 5 && i % 7 == 4 && i % 11 == 10)
        {
            printf("%d\n", i);
            find = TRUE;
        }
    }

    return 0;
}
/*
    * 使用穷举法或者同余法
    * 穷举法:https://www.bilibili.com/video/BV1V64y1u7og?from=search&seid=1415761785684607476
    * 同余法：https://www.bilibili.com/video/BV1jb411t7vz?from=search&seid=1415761785684607476
    *
 */