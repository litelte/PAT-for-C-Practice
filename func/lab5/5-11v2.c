/*
 * @Date: 2021-03-19 17:04:23
 * @LastEditors: litelte
 * @LastEditTime: 2021-03-19 17:43:05
 * @FilePath: /PAT-for-C-Practice/func/lab5/5-11v2.c
 * @Description: 使用迭代法求取最大公约数（辗转相除法）[欧几里得算法]
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
int gcd(int x, int y);
int main(int argc, char const *argv[])
{
    int x, y;
    scanf("%d %d", &x, &y);
    printf("%d\n", gcd(x, y));
    return 0;
}
int gcd(int x, int y)
{
    int temp = 0;
    if (x % y != 0)
    {
        temp = y;
        y = x % y;
        x = temp;
        gcd(x, y);
    }
    else
    {
        return y;
    }
}