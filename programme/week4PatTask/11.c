/*
 * @Date: 2020-05-06 13:55:26
 * @LastEditors: litelte
 * @LastEditTime: 2020-05-06 15:18:32
 * @FilePath: /CProject/zju_c/week4PatTask/11.c
 * @Description: 做一个猜数游戏
 * 题目链接：https://pintia.cn/problem-sets/13/problems/443
 */
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int randomNumber = 0, userInputNumber = 0, guessCount = 0, deadCount = 0;
    scanf("%d %d", &randomNumber, &deadCount);
    do
    {
        scanf("%d", &userInputNumber);
        guessCount++;
        if (guessCount > deadCount || userInputNumber < 0)
        {
            printf("Game Over");
            break;
        }
        if (userInputNumber > randomNumber)
        {
            printf("Too big\n");
        }
        else if (userInputNumber < randomNumber)
        {
            printf("Too small\n");
        }
        else
        {

            if (guessCount > 3 && guessCount <= deadCount)
            {
                printf("Good Guess!\n");
                break;
            }
            else if (guessCount > 1 && guessCount <= 3)
            {
                printf("Lucky You!\n");
                break;
            }
            else if (guessCount == 1)
            {
                printf("Bingo!\n");
                break;
            }
        }

    } while (guessCount < deadCount || userInputNumber > 0);

    return 0;
}