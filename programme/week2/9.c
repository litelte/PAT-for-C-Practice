/*
 * @Date: 2020-04-19 13:55:29
 * @LastEditors: litelte
 * @LastEditTime: 2020-04-27 14:32:17
 * @FilePath: /CProject/zju_c/week2/9.c
 * @Description: 使用double定义的变量
 */
#include <stdio.h>
int main(int argc, char const *argv[])
{
    printf("请分别输入身高的英尺和英寸，"
           "如输入\"5 7\"表示5英尺7英寸：");
    double foot;
    double inch;
    // 对于double型变量，我们在输入的时候使用lf
    scanf("%lf %lf", &foot, &inch);
    printf("身高是%f米。\n", ((foot + inch / 12) * 0.3048));
    // 这个时候便不需要再改动12为12.0了
    printf("Hello World!\n");
    return 0;
}