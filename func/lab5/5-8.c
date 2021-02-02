/*
 * @Date: 2021-02-02 22:52:10
 * @LastEditors: litelte
 * @LastEditTime: 2021-02-02 23:47:37
 * @FilePath: /PAT-for-C-Practice/func/lab5/5-8.c
 * @Description: 使用函数统计指定数字的个数
 */
#include <stdio.h>
int CountDigit(int number, int digit);
int main()
{
    int number, digit;

    scanf("%d %d", &number, &digit);
    printf("Number of digit %d in %d: %d\n", digit, number, CountDigit(number, digit));

    return 0;
}

/* 你的代码将被嵌在这里 */
int CountDigit(int number, int digit)
{
    if (number < 0)
    {
        number = -number;
    }

    // 使用数组
    int arr[10] = {0}; //定义一个含有10元素的数组，每个元素的值均为0
    //再把求水仙花数那一套搬过来，将每一位数都存到数组中
    int tempVal = 0;
    tempVal = number;
    int index = 0;
    do
    {
        arr[index] = tempVal % 10;
        tempVal /= 10;
        index++;
    } while (tempVal);
    // 现在这个数组就存满了数，没有被替换的数，就都是0
    // 然后再遍历这个数组
    int count = 0;
    for (int i = 0; i < index; i++)
    {
        if (arr[i] == digit)
        {
            count++;
        }
    }
    return count;
}