/***
 * @Date: 2020-07-24 15:40:47
 * @LastEditors: litelte
 * @LastEditTime: 2020-07-24 15:40:47
 * @FilePath: /CProject/zju_c/week6/1v1.c
 * @Description:第一题的官方解答
 */
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a;
    scanf("%d", &a);
    // a = 2;
    int i, j, k;
    int cnt = 0;
    i = a;
    while (i <= a + 3)
    {
        k = a;
        while (j <= a + 3)
        {
            k = a;
            while (k <= a + 3)
            {
                if (i != j)
                {
                    if (i != k)
                    {
                        if (j != k)
                        {
                            cnt++;
                            printf("%d%d%d", i, j, k);
                            if (cnt == 6)
                            {
                                printf("\n");
                                cnt = 0;
                            }
                            else
                            {
                                printf(" ");
                            }
                        }
                    }
                }
                k++;
            }
            j++;
        }
        i++;
    }

    return 0;
}