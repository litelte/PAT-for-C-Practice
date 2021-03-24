/*
 * @Date: 2021-03-18 15:50:30
 * @LastEditors: litelte
 * @LastEditTime: 2021-03-21 17:57:21
 * @FilePath: /PAT-for-C-Practice/temp/11.c
 * @Description:
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
int main(int argc, char const *argv[])
{
    int isWhat = 0;
    for (int i = 1; i < 10; i++)
    {
        isWhat = prime(i);
        if (isWhat)
        {
            printf("%d是素数\n", i);
        }
        else
        {
            printf("%d不是素数\n", i);
        }
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
