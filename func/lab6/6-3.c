/*
 * @Date: 2021-03-19 22:12:16
 * @LastEditors: litelte
 * @LastEditTime: 2021-03-19 23:24:13
 * @FilePath: /PAT-for-C-Practice/func/lab6/6-3.c
 * @Description: 实验6-3 使用函数求特殊a串数列和
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
int fn(int a, int n);
int SumA(int a, int n);
int main(int argc, char const *argv[])
{
    int a, n;

    scanf("%d %d", &a, &n);
    printf("fn(%d, %d) = %d\n", a, n, fn(a, n));
    printf("s = %d\n", SumA(a, n));

    return 0;
}

int fn(int a, int n)
{
    // 只需一层循环即可搞定，通过10的不断阶乘，每阶乘一次就相加一次，最后再乘以n
    // 222 = （1+10+100)*2
    int res = 1, sumFn = 1;
    for (int i = 0; i < n - 1; i++)
    {
        res *= 10;
        sumFn += res;
    }
    sumFn *= a;
    return sumFn;
}
int SumA(int a, int n)
{
    int sumA = 0;
    for (int i = 1; i <= n; i++)
    {
        sumA += fn(a, i);
    }
    return sumA;
}