/*
 * @Date: 2021-03-20 12:16:50
 * @LastEditors: litelte
 * @LastEditTime: 2021-03-21 17:15:41
 * @FilePath: /PAT-for-C-Practice/func/lab6/6-5.c
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

int fib(int n);
void PrintFN(int m, int n);

int main()
{
    int m, n, t;

    // scanf("%d", &t);
    scanf("%d %d %d", &m, &n, &t);
    printf("fib(%d) = %d\n", t, fib(t));
    PrintFN(m, n);

    return 0;
}

int fib(int n)
{
    // 负责查询
    /* 斐波那契数列的实现分为递归型和非递归型
     * 递归型适合无目的的打印，非递归适合有目的的打印
     * 先来个递归型的函数
     * int starNum = 0, endNum = 1;
     * int temp = starNum + endNum;
     * 这个函数不是很适合，传入的参数不对，至少需要两个参数，所以只能走非递归型的 */
    int starNum = 0, endNum = 1;
    int temp;
    for (int i = 1; i <= n; i++) //i为游标，第一个斐波那契数为前后两个数相加的值
    {
        temp = starNum + endNum;
        starNum = endNum;
        endNum = temp;
    }
    return starNum;
}
void PrintFN(int m, int n)
{
    // 负责打印
    // 非递归的情况会稍微好一些
    // 通过测试，10000以内的斐波那契数列有20个
    // int isFin = 0;
    int fibNum = 0;
    for (int i = 1; i < 21; i++)
    {
        if (fib(i) >= m && fib(i) <= n)
        {
            printf("%d", fib(i));
            fibNum++;
        }
    }
    if (fibNum == 0)
    {
        printf("No Fibonacci number\n");
    }
    else
    {
        printf("\n");
    }
}
// 输出格式错误，分析：最后一个数不能有空格，而上面的输出模式会导致最后一位有空格
// 改进方法：将值输入到数组中，再逐个输出