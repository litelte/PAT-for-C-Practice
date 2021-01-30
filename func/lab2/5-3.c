/***
 * @Date: 2021-01-20 18:08:57
 * @LastEditors: litelte
 * @LastEditTime: 2021-01-20 18:08:57
 * @FilePath: /pat/func/lab2/5-3.c
 * @Description: 使用函数求奇数和
 */
#include <stdio.h>

#define MAXN 10

int even(int n);
int OddSum(int List[], int N);

int main()
{
    int List[MAXN], N, i;

    scanf("%d", &N);
    printf("Sum of ( ");
    for (i = 0; i < N; i++)
    {
        scanf("%d", &List[i]);
        if (even(List[i]) == 0)
            printf("%d ", List[i]);
    }
    printf(") = %d\n", OddSum(List, N));

    return 0;
}

/* 你的代码将被嵌在这里 */
int even(int n)
{
    if (n % 2 == 0)
    {
        // 说明是偶数
        return 1;
    }
    else
    {
        return 0;
    }
}
int OddSum(int List[], int N)
{
    int sum = 0; //定义最后的和
    for (int i = 0; i < N; i++)
    {
        if (even(List[i]) == 0)
        {
            sum += List[i];
        }
    }
    return sum;
}