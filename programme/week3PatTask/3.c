/*
 * @Date: 2020-05-02 19:51:46
 * @LastEditors: litelte
 * @LastEditTime: 2020-05-05 12:20:03
 * @FilePath: /CProject/zju_c/week3PatTask/3.c
 * @Description: hahah
 */
#include <stdio.h>
int main(int argc, char const *argv[])
{
    // 三个数比大小，使用冒泡排序
    int array[3] = {0, 0, 0};
    scanf("%d %d %d", &array[0], &array[1], &array[2]);
    int i, j, temp, k;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3 - i; j++)
        {
            if (array[j] > array[j + 1])
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
    printf("%d->%d->%d\n", array[0], array[1], array[2]);
    return 0;
}