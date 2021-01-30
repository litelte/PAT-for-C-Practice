/***
 * @Date: 2021-01-15 15:57:33
 * @LastEditors: litelte
 * @LastEditTime: 2021-01-15 15:57:33
 * @FilePath: /pat/func/lab2/4-1.c
 * @Description: 统计各位数字之和是5的数
 */
// 输入两个数，作为两个区间端点，判断在这个区间中的数符合，个位、十位、百位相加之和
// 为5的数，并将这些符合条件的数相加
#include <stdio.h>

int is(int number);
void count_sum(int a, int b);

int main()
{
    int a, b;

    scanf("%d %d", &a, &b);
    if (is(a))
        printf("%d is counted.\n", a);
    if (is(b))
        printf("%d is counted.\n", b);
    count_sum(a, b);

    return 0;
}

// 下面是需要输入的代码
int is(int number)
{
    // 要对传入的数进行拆分，使用取余的方法
    int tempVal = number; //临时的值
    int sum = 0;          //拆分各个位的和
    do
    {
        sum += (tempVal % 10);
        tempVal = tempVal / 10;
    } while (tempVal);
    if (sum == 5)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void count_sum(int a, int b)
{
    int count = 0;
    int sum = 0;
    for (int i = a; i <= b; i++)
    {
        if (is(i))
        {
            count++;
            sum += i;
        }
    }
    printf("count = %d, sum = %d\n", count, sum);
}