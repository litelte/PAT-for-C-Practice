/*
 * @Date: 2020-05-02 20:30:04
 * @LastEditors: litelte
 * @LastEditTime: 2020-05-02 20:58:24
 * @FilePath: /CProject/zju_c/week3PatTask/4.c
 * @Description: 使用冒泡排序2,耗时短
 */
#include <stdio.h>
void bubble_sort(int arr[], int len)
{
    int i, j, temp;
    for (i = 0; i < len - 1; i++)
        for (j = 0; j < len - 1 - i; j++)
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
}
int main()
{
    int arr[3] = {0, 0, 0};
    scanf("%d %d %d", &arr[0], &arr[1], &arr[2]);
    int len = (int)sizeof(arr) / sizeof(*arr);
    bubble_sort(arr, len);
    int i;
    for (i = 0; i < len; i++)
    {
        printf("%d", arr[i]);
        if (i != len - 1)
        {
            printf("->");
        }
    }
    printf("\n");

    return 0;
}
