/*
 * @Date: 2021-02-03 00:00:37
 * @LastEditors: litelte
 * @LastEditTime: 2021-02-03 13:39:00
 * @FilePath: /PAT-for-C-Practice/func/lab5/5-9.c
 * @Description: 使用函数输出水仙花数
 */
#include <stdio.h>
int narcissistic(int number);
void PrintN(int m, int n);
int main()
{
    int m, n;

    scanf("%d %d", &m, &n);
    if (narcissistic(m))
        printf("%d is a narcissistic number\n", m);
    PrintN(m, n);
    if (narcissistic(n))
        printf("%d is a narcissistic number\n", n);

    return 0;
}

/* 你的代码将被嵌在这里 */
int narcissistic(int number)
{
    // 无需添加该条件
    // if (number < 100 || number > 10000)
    // {
    //     return 0;
    // }
    int result = 0;
    if (number >= 100 && number <= 10000)
    {

        int tempVal = number;
        int sum = 0;
        int lens = 0;
        // 先求这串数字的长度
        do
        {
            tempVal /= 10;
            lens++;
        } while (tempVal);

        tempVal = number;
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
        if (sum == number)
        {
            result = 1;
        }
    }
    return result;
}
void PrintN(int m, int n)
{
    if (m < n)
    {
        for (int i = m + 1; i < n; i++)
        {
            if (narcissistic(i))
            {
                printf("%d\n", i);
            }
        }
    }
}