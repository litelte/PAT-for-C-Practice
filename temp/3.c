/***
 * @Date: 2021-01-18 17:07:56
 * @LastEditors: litelte
 * @LastEditTime: 2021-01-18 17:07:56
 * @FilePath: /pat/temp/3.c
 * @Description: 判断一个数是否为水仙花数问题
 */

#include <stdio.h>
int NumLens(int inputNum);
int isDaffodilsNum(int lens, int inputNum);
int main(int argc, char const *argv[])
{
    int inputNumber = 0;
    printf("Please input a Number:\n");
    scanf("%d", &inputNumber);
    int lens = NumLens(inputNumber);
    printf("%d\n", isDaffodilsNum(lens, inputNumber));
    return 0;
}
int NumLens(int inputNum)
{
    int tempVal = inputNum;
    int lens = 0;
    do
    {
        // printf("the number is :%d\n", tempVal % 10);
        tempVal /= 10;
        lens++;

    } while (tempVal);
    return lens;
}

int isDaffodilsNum(int lens, int inputNum)
{
    int tempVal = inputNum;
    int sum = 0;
    do
    {
        int product = 1; //用于存储每一次解析出来的乘积
        for (int i = 0; i < lens; i++)
        {
            product *= (tempVal % 10);
        }
        sum += product;
        tempVal /= 10;

    } while (tempVal);
    if (sum == inputNum)
    {
        return 1;
    }
    return 0;
}