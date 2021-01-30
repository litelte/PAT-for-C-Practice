/***
 * @Date: 2021-01-15 17:16:08
 * @LastEditors: litelte
 * @LastEditTime: 2021-01-15 17:16:08
 * @FilePath: /pat/temp/2.c
 * @Description: 对上面的算法进行迭代，不用预设，
 * 让机器自己判断，使用while循环
 */
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int inputNumber = 0;
    int tempVal = 0;
    printf("Please input a Number:\n");
    scanf("%d", &inputNumber);
    tempVal = inputNumber;
    do
    {
        printf("the number is :%d\n", tempVal % 10);
        tempVal /= 10;

    } while (tempVal);
    return 0;
}