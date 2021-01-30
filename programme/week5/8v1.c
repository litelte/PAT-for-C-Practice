/*
 * @Date: 2020-05-13 13:42:00
 * @LastEditors: litelte
 * @LastEditTime: 2020-05-13 14:09:41
 * @FilePath: /CProject/zju_c/week5/8v1.c
 * @Description: 解决分解整数问题中的7000、700、7等比较纯的数
 */
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
    // scanf("%d", &inputNumber);
    inputNumber = 1000;
    temp = inputNumber;
    // 定义被分解的每一个数和被除的整数，如1000、100、10等
    int digit = 0, integer = 1000;
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

    return 0;
}
/*
    总结：
    在规定的四位数中，任意输入都可得到相应的分解出来的数，但是没法输入未指定的数，比如200000000，这样就没法输出
 */