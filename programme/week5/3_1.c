/*
 * @Date: 2020-05-13 12:50:01
 * @LastEditors: litelte
 * @LastEditTime: 2020-05-13 12:52:57
 * @FilePath: /CProject/zju_c/week5/3_1.c
 * @Description:使用goto语句代替接力
 * 这个是继3.c的程序的改版
 */
/*
 * @Date: 2020-05-13 00:54:01
 * @LastEditors: litelte
 * @LastEditTime: 2020-05-13 00:54:45
 * @FilePath: /CProject/zju_c/week5/3.c
 * @Description: 接力break的例子
 */
#include <stdio.h>
int main()
{
    int x;
    int one, two, five;
    int exit = 0;

    scanf("%d", &x);
    for (one = 1; one < x * 10; one++)
    {
        for (two = 1; two < x * 10 / 5; two++)
        {
            for (five = 1; five < x * 10 / 5; five++)
            {
                if (one + two * 2 + five * 5 == x * 10)
                {
                    printf("可以用%d个1角加%d个2角加%d个5角得到%d元\n",
                           one, two, five, x);
                    goto out;
                }
            }
            if (exit == 1)
                break;
        }
        if (exit == 1)
            break;
    }
    // 注意是冒号:，也就是跳到这个位置
out:
    return 0;
}