/*
 * @Date: 2020-05-06 17:00:46
 * @LastEditors: litelte
 * @LastEditTime: 2020-05-06 17:52:15
 * @FilePath: /CProject/zju_c/week4PatTask/14.c
 * @Description: 黑洞数
 * 题目链接：https://pintia.cn/problem-sets/13/problems/446
 */
#include <stdio.h>
// 创建一个排序函数
void bubble_sort(int Number, int bsCount)
{
    int arr[3] = {0, 0, 0};
    arr[0] = Number / 100;
    arr[1] = (Number - arr[0] * 100) / 10;
    arr[2] = Number % 10;
    int len = (int)sizeof(arr) / sizeof(*arr);
    int i, j, temp;
    int max = 0, min = 0;
    for (i = 0; i < len - 1; i++)
    {
        for (j = 0; j < len - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    min = arr[0] * 100 + arr[1] * 10 + arr[2];
    max = arr[2] * 100 + arr[1] * 10 + arr[0];
    bsCount++;
    if (arr[0] = arr[1] && arr[1] == arr[2])
    {
        printf("%d: %d - %d = %d\n", bsCount, max, min, max - min);
    }
    else
    {
        printf("%d: %d - %d = %d\n", bsCount, max, min, max - min);

        if (max - min != 495)
        {

            bubble_sort(max - min, bsCount);
        }
    }
}
int main(int argc, char const *argv[])
{

    int inputNumber = 0;
    scanf("%d", &inputNumber);
    bubble_sort(inputNumber, 0);
    return 0;
}