/*
 * @Date: 2021-03-19 14:51:14
 * @LastEditors: litelte
 * @LastEditTime: 2021-03-19 17:04:12
 * @FilePath: /PAT-for-C-Practice/func/lab5/5-11v1.c
 * @Description: 调试上一个程序5-11.c中对X大Y小测试集无法通过的问题
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
    int gcdres = 1;
    // 定义单项因数
    int itemA = x, itemB = y;
    // 两个完成哨兵
    int count = 0;
    int isFin;
    int end = 0; // 设置循环的终点
    // 判断最小的数，让该数作为循环的终点
    if (x > y)
    {
        end = y;
    }
    else
    {
        end = x;
    }
    do
    {
        isFin = 0;
        for (int i = 2; i <= end; i++) // 设置小数作为循环的终点
        {
            if ((itemA % i == 0) && (itemB % i == 0))
            {
                gcdres *= i;
                isFin = 1;
                break;
            }
        }
        itemA = x / gcdres, itemB = y / gcdres;
        count++;
        // 双向判定，确保结果
        if (itemA == 1 || itemB == 1)
        {
            isFin = 0;
        }
        printf("The %d Round,itemA = %d,itemB = %d\n", count, itemA, itemB);
    } while (isFin); // 两个都完成了，才算最终的完成
    return gcdres;
}