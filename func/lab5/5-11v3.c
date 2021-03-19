/*
 * @Date: 2021-03-19 17:43:16
 * @LastEditors: litelte
 * @LastEditTime: 2021-03-19 18:00:21
 * @FilePath: /PAT-for-C-Practice/func/lab5/5-11v3.c
 * @Description: 使用更相减损法求最大公约数
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
    if ((x % 2 == 0) && (y % 2 == 0))
    {
        x /= 2;
        y /= 2;
    }
    else
    {

        int diff = 0,
            tempVal = 0;
        if (x >= y)
        {
            // x大y小
            // diff = x - y;
            // x = diff;
            x = x - y;
        }
        else
        {
            // x小y大
            // diff = y - x;
            y = y - x;
        }
    }
    gcd(x, y);
}
/* 缺少退出条件 */