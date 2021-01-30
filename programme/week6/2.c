/***
 * @Date: 2020-07-24 15:49:10
 * @LastEditors: litelte
 * @LastEditTime: 2020-07-24 15:49:10
 * @FilePath: /CProject/zju_c/week6/2.c
 * @Description: 给出一个正整数N，求出所有的N位正整数中包含的水仙花数
 */
/*
 * 解题步骤：
 * 1.用户键入一个N，比如这个N为3
 * 2.找出所有的3位数，也就是100-999
 * 3.遍历所有的三位数，并将其进行拆分为单个的三位数
 * 4.将每个数进行3次方运算，并相加
 * 5.最后再和原数判断，相同输出该数，不同则不输出
 */
#include <stdio.h>
int myPow(int x, int y);
int main(int argc, char const *argv[])
{
    // 用户输入规定的N位数
    int n;
    scanf("%d", &n);
    // 定义范围变量
    int front = 1;
    // n必须大于3
    if (n >= 3)
    {
        // 求出遍历的数的范围
        for (int i = 0; i < n - 1; i++)
        {
            front *= 10;
        }
        // 下面开始遍历front到front*10之间的数，然后分解在这之中的每一个数
        // 设置遍历的值
        int index = front;
        int WaitSplit = 0;
        // 拆分后，每一位的3次幂的和为reCalculate
        int reCalculate = 0;
        // WaitSplit分解过程的中，求余以及除法的结果
        int divisionResult = 0, surplusResult = 0;
        // 10的N次方，用于后面的拆分求余除法过程
        while (index < front * 10)
        {
            int MultipleOfOneHundred = front;
            // reCalculate置0
            reCalculate = 0;
            // 开始分解index的值，这里需要将index的值赋给WaitSplit
            WaitSplit = index;
            // printf("%d\n", WaitSplit);
            // 开始拆分
            do
            {
                divisionResult = WaitSplit / MultipleOfOneHundred;
                surplusResult = WaitSplit % MultipleOfOneHundred;
                reCalculate += myPow(divisionResult, n);
                WaitSplit = surplusResult;
                MultipleOfOneHundred /= 10;
            } while (surplusResult != 0);
            if (reCalculate == index)
            {
                printf("%d\n", index);
            }
            index++;
        }
    }
    else
    {
        printf("invalid error!");
    }

    return 0;
}
int myPow(int x, int y)
{
    int multiResult = 1;
    int i;
    for (i = 0; i < y; i++)
    {
        multiResult *= x;
    }
    return multiResult;
}