/*
 * @Date: 2021-03-21 17:23:03
 * @LastEditors: litelte
 * @LastEditTime: 2021-03-21 23:40:25
 * @FilePath: /PAT-for-C-Practice/func/lab6/6-6.c
 * @Description: 实验6-5 使用函数输出指定范围内的Fibonacci数
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
#include <math.h>

int prime(int p);
void Goldbach(int n);

int main()
{
    int m, n, i, cnt;

    scanf("%d %d", &m, &n);
    if (prime(m) != 0)
        printf("%d is a prime number\n", m);
    if (m < 6)
        m = 6;
    if (m % 2)
        m++;
    cnt = 0;
    for (i = m; i <= n; i += 2)
    {
        Goldbach(i);
        cnt++;
        if (cnt % 5)
            printf(", ");
        else
            printf("\n");
    }

    return 0;
}

int prime(int p)
{
    // 一个判断p是否位素数的函数
    // 素数就是只能被1和自身整除的数
    // 使用math库的sqrt函数
    int medVal = sqrt(p);
    int isPrime = 1;
    for (int i = 1; i <= medVal; i++)
    {
        if (p == 1)
        {
            isPrime = 0;
            continue;
        }
        else if (p % i == 0 && i > 1)
        {
            isPrime = 0;
            break;
        }
    }
    return isPrime;
}
void Goldbach(int n)
{
    // 定义另一个加数
    int AnoNum = 0;
    for (int index = 2; index < n - 1; index++)
    {
        if (prime(index) && (prime(n - index)))
        {
            printf("%d=%d+%d", n, index, n - index);
            break;
        }
    }
}