/*
 * @Date: 2021-03-21 23:42:45
 * @LastEditors: litelte
 * @LastEditTime: 2021-03-22 00:18:42
 * @FilePath: /PAT-for-C-Practice/func/lab6/6-7.c
 * @Description: 实验6-7 使用函数输出一个整数的逆序数
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

int reverse(int number);

int main()
{
    int n;

    scanf("%d", &n);
    printf("%d\n", reverse(n));

    return 0;
}
int reverse(int number)
{
    // 需要先判断这个数是几位数，然后从末尾开始，每剥离一个数出来，给这个数乘以这个
    // 10的多少次方
    // int digits = 0;
    int medVal = number;
    int count = 0;
    while (medVal)
    {
        medVal /= 10;
        count++;
        // printf("medVal = %d,count = %d\n", medVal, count);
    }
    // 上面已经实现了判断这个数是几位数，下来要将这个数的每一位一一剥离
    // 反向相乘
    int cpyNumber = number;
    int sum = 0;
    // 定义10的乘方
    int powOfTen;
    while (cpyNumber)
    {
        // 自己构造幂函数
        powOfTen = 1;
        for (int i = count; i > 1; i--)
        {
            powOfTen *= 10;
        }
        // 完事将结果乘以剥离出来的数
        sum += (cpyNumber % 10) * powOfTen;
        cpyNumber /= 10;
        count--;
    }
    return sum;
}
