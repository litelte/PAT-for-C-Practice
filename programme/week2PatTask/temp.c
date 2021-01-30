/*
 * @Date: 2020-04-29 13:48:51
 * @LastEditors: litelte
 * @LastEditTime: 2020-04-30 12:52:12
 * @FilePath: /CProject/zju_c/week2PatTask/temp.c
 * @Description: 输入一个非负整数n，生成一张3的乘方表，输出3^0~3^n
​​ * 的值。可调用幂函数计算3的乘方.
 */
/* 
    * 输入格式：输入在一行中给出一个非负整数n。
    * 输出格式：
    * 按照幂的递增顺序输出n+1行，每行格式为“pow(3,i) = 3的
    * i次幂的值”。题目保证输出数据不超过长整型整数的范围。
    * 输入：3
    *   pow(3,0) = 1
        pow(3,1) = 3
        pow(3,2) = 9
        pow(3,3) = 27
 */
// 熟悉%.0f的含义
#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
    int inputNumber = 0;
    scanf("%d", &inputNumber);
    if (inputNumber >= 0)
    {
        for (int i = 0; i <= inputNumber; i++)
        {
            // int result = pow(3, i);
            printf("pow(3,%d) = %.0f\n", i, pow(3, i));
            // FIXME为什么printf函数中不能直接调用pow函数？？
            // 已经解决了，可以使用，注意函数的返回值类型，%.0f就是可以去除后面没用的0
            // printf("pow(3,%d) = %d\n", i, pow(3, i));
        }
    }
    else
    {
        printf("input error");
    }
    return 0;
}
