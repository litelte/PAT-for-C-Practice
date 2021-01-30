/*
 * @Date: 2020-05-03 15:52:13
 * @LastEditors: litelte
 * @LastEditTime: 2020-05-03 16:27:11
 * @FilePath: /CProject/zju_c/week4/4.c
 * @Description: 做一个猜数游戏
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(int argc, char const *argv[])
{
    // 生成随机的数
    srand(time(0));
    // 使用取余运算符来生成一个1-100之间的数
    int number = rand() % 100 + 1;
    // 记录用户猜的次数
    int counts = 0;
    int guessValue = 0;
    printf("我是后门：%d\n", number);
    printf("系统> 猜猜我生成的数什么吧！（输入0退出）\n");
    do
    {
        printf("用户> ");
        scanf("%d", &guessValue);
        if (guessValue == 0)
        {
            printf("您已退出游戏\n");
            break;
        }
        else
        {

            counts++;
            if (guessValue > number)
            {
                printf("系统> 很抱歉哦，您猜大啦😄,再试一次吧！\n");
            }
            else if (guessValue < number)
            {
                printf("系统> 很抱歉哦，您猜小啦😄,再试一次吧！\n");
            }

            else
            {
                printf("系统> 恭喜您，猜对啦，系统生成的数就是：%d.\n系统> 您共猜了%d次！\n", number, counts);
            }
        }
    } while (guessValue != number);

    return 0;
}
