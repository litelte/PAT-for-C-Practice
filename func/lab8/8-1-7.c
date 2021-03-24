/*
 * @Date: 2021-03-24 02:03:40
 * @LastEditors: litelte
 * @LastEditTime: 2021-03-24 13:20:05
 * @FilePath: /PAT-for-C-Practice/func/lab8/8-1-7.c
 * @Description: 实验8-1-7 数组循环右移
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
#define MAXN 10

int ArrayShift(int a[], int n, int m);

int main()
{
    int a[MAXN], n, m;
    int i;

    scanf("%d %d", &n, &m);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    ArrayShift(a, n, m);

    for (i = 0; i < n; i++)
    {
        if (i != 0)
            printf(" ");
        printf("%d", a[i]);
    }
    printf("\n");

    return 0;
}
// n是数组的大小，m是右移的位数
int ArrayShift(int a[], int n, int m)
{
    // 右移的位数可以超过数组大小，并且右移的位数是数组大小的整数倍时
    // 数组元素的排列仍会变成原来的样子
    /* 所以我们右移的策略是：
     * 将要右移的元素放到一个新的数组中 */
    if (m % n != 0)
    {
        m = m % n;
        int New[MAXN] = {'\0'}; // 数组初始化
        for (int i = n - m, j = 0; i < n; i++, j++)
        {
            New[j] = a[i];
        }
        for (int i = m, j = 0; i < n; i++, j++)
        {
            New[i] = a[j];
        }
        for (int i = 0; i < n; i++)
        {
            a[i] = New[i];
        }
        return 0;
    }
}

// 没想清楚这个题目为啥要放到指针的题型中
// 最主要的代码，是使用数组方面的方法实现的