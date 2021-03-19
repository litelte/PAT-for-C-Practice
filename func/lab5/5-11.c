/*
 * @Date: 2021-03-16 14:51:08
 * @LastEditors: litelte
 * @LastEditTime: 2021-03-19 15:14:01
 * @FilePath: /PAT-for-C-Practice/func/lab5/5-11.c
 * @Description: 实验5-11 使用函数求最大公约数
 */
// 使用质因分解法(非递归方法)
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
int gcd(int a, int b);
int main(int argc, char const *argv[])
{
    int a = 2, b = 1;
    // gcd(a, b);
    printf("a = %d,b = %d,gcd = %d\n", a, b, gcd(a, b));
    return 0;
}
int gcd(int x, int y)
{
    // 使用分解质因法求解两个数的最大公约数
    /* 采用双线并发，同时对两个数进行拆分，如果拆分的两个数相同，则将这个数
     * 乘到一个结果里，否则不乘 */
    int gcdres = 1;
    // 定义单项因数
    int itemA = x, itemB = y;
    // 两个完成哨兵
    int count = 0;
    int isFin;
    do
    {
        isFin = 0;
        for (int i = 2; i < 10; i++)
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
        printf("The %d Round,itemA = %d,itemB = %d\n", count, itemA, itemB);
    } while (isFin); // 两个都完成了，才算最终的完成
    return gcdres;
}
/* 经过测试，出现了X大Y小测试集中无法通过的情况，需要进一步调整
 * 之前的测试用例使用的都是偶数，如果换成52 13，则无法实现 */