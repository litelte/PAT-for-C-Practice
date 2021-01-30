/*
 * @Date: 2020-05-02 21:47:35
 * @LastEditors: litelte
 * @LastEditTime: 2020-05-03 10:33:38
 * @FilePath: /CProject/zju_c/week3PatTask/6.c
 * @Description: 查询水果价格
 * 题目链接：https://pintia.cn/problem-sets/13/problems/422
 */
#include <stdio.h>
int main(int argc, char const *argv[])
{
    float apple = 3.00, pear = 2.50, orange = 4.10, grape = 10.20;
    int choice[5] = {};
    int count = 0;
    printf("[1] apple\n[2] pear\n[3] orange\n[4] grape\n[0] exit\n");
    scanf("%d %d %d %d %d", &choice[0], &choice[1], &choice[2], &choice[3], &choice[4]);
    for (count = 0; count < 5; count++)
    {
        if (choice[count] == 0)
        {
            break;
        }
        else
        {
            switch (choice[count])
            {
            case 1:
                printf("price = %.2f\n", apple);
                break;
            case 2:
                printf("price = %.2f\n", pear);
                break;
            case 3:
                printf("price = %.2f\n", orange);
                break;
            case 4:
                printf("price = %.2f\n", grape);
                break;
            default:
                printf("price = 0.00\n");
                break;
            }
        }
    }

    return 0;
}
/* 
    * 总结
    * 需要输入一些参数，参数与参数之间需要用空格分开时，单单一个getchar不再适用，这时就需要其他的工具来辅助
    * 比如数组，for循环
 */
