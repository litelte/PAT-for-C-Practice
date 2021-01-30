/*
 * @Date: 2020-05-13 13:42:00
 * @LastEditors: litelte
 * @LastEditTime: 2020-05-13 15:16:58
 * @FilePath: /CProject/zju_c/week5/8v2.c
 * @Description: 解决分解整数问题中用户输入的数字不固定
/*
    当不考虑像700这种的数字的话，我们可以先将数逆序，再将逆序的数再逆序输出
    但是当输入的数为700时，先将数逆序，得到7，再逆序输出逆序数，为7，显然不符合条件，所以我们换个思路，就只能直接输出分解的数
    不用再逆序=>逆序=>输出
 */
/*
    思路：比如输入的数为1345，也就是说要从首位开始拆
    1345 / 1000 = 1
    1345 - 1000 = 345
    345 / 100 = 3
    345 - 100*3 = 45
    45 / 10 = 4
    45 - 10*4 = 5
    5 / 1 = 5
    5 - 1*5 = 0
 */

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int inputNumber = 0, temp = 0;
    scanf("%d", &inputNumber);
    // inputNumber = 0;
    // 需要统计用户输入的数子的位数，从而确定integer的大小
    temp = inputNumber;
    int digit = 0, integer = 1;
    do
    {
        if (temp / 10 != 0)
        {
            integer *= 10;
        }
        temp /= 10;

    } while (temp > 0);
    temp = inputNumber;
    // 定义被分解的每一个数和被除的整数，如1000、100、10等
    do
    {
        digit = temp / integer;
        printf("%d", digit);
        temp -= digit * integer;
        integer /= 10;
        // 更换打印空格的变量为integer
        if (integer != 0)
        {
            printf(" ");
        }
        // 更换循环的终止变量为integer，从而可以让7000这种的纯数输出0
    } while (integer > 0);
    printf("\n");

    return 0;
}
/*
    总结：
    现在无论输入怎样的数，都可以成功分解掉
    下一个程序代码就是课件上的代码
 */