/*
 * @Date: 2021-03-19 23:54:59
 * @LastEditors: litelte
 * @LastEditTime: 2021-03-19 23:59:43
 * @FilePath: /PAT-for-C-Practice/func/lab6/6-4v1.c
 * @Description: 规避1是完数的输出结果
 */

/*
Run By
{__        {__  {__ __
{__        {__{__    {__ {__ {_       {__      {__ {_   {__
{__   {_   {__ {__      {_     {__  {__  {__  {_     {__ {__
{__  {__   {__   {__         {__  {__     {__      {__   {__
{__ {_ {__ {__      {__    {__    {__      {__   {__     {__
{_ {_    {____{__    {__ {__       {__    {__  {__       {__
{__        {__  {__ __  {________    {___     {________ {____
*/

#include <stdio.h>
int factorsum(int number);
void PrintPN(int m, int n);
int main(int argc, char const *argv[])
{
    int m, n;

    scanf("%d %d", &m, &n);
    if (factorsum(m) == m)
        printf("%d is a perfect number\n", m);
    if (factorsum(n) == n)
        printf("%d is a perfect number\n", n);
    PrintPN(m, n);

    return 0;
}
int factorsum(int number)
{
    // 函数factorsum须返回int number的因子和
    // 其实就是分解因式的问题，无须逐个遍历，使用二分法即可
    int sumfct = 1;
    // 只需单独增加一个判断条件即可
    if (number == 1)
    {
        return 0;
    }

    for (int i = 2; i < (number / 2) + 1; i++)
    {
        if ((number % i) == 0)
        {
            sumfct += (number / i);
        }
    }
    return sumfct;
}
void PrintPN(int m, int n)
{
    // 函数PrintPN要逐行输出给定范围[m, n]内每个完数的因子累加形式的分解式，每个完数占一行，格式为“完数 = 因子1 + 因子2 + ... + 因子k”
    int factCnt = 0;
    for (int i = m; i <= n; i++)
    {
        if (factorsum(i) == i)
        {
            printf("%d = 1", i);
            for (int j = 2; j < (i / 2) + 1; j++)
            {
                if ((i % j) == 0)
                {
                    printf(" + %d", j);
                }
            }
            printf("\n");
            factCnt++;
        }
    }
    if (factCnt == 0)
    {
        printf("No perfect number\n");
    }
}