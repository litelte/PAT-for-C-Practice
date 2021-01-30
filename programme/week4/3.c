/*
 * @Date: 2020-05-03 15:34:27
 * @LastEditors: litelte
 * @LastEditTime: 2020-05-03 15:38:06
 * @FilePath: /CProject/zju_c/week4/3.c
 * @Description: 使用循环实现log函数
 */
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int x;
    int ret = 0;
    x = 64;
    while (x > 1)
    {
        x /= 2;
        ret++;
    }
    printf("log2 of %d is %d.\n", x, ret);
    return 0;
}
/* 
    * 输出结果：
    * log2 of 1 is 6.
    * 为什么第一个%d是1，而不是64呢，是因为x参与计算了，不断变化。
 */