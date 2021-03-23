/*
 * @Date: 2021-03-23 19:20:44
 * @LastEditors: litelte
 * @LastEditTime: 2021-03-23 20:56:50
 * @FilePath: /PAT-for-C-Practice/func/lab8/8-1-4.c
 * @Description: 实验8-1-3 拆分实数的整数与小数部分
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

void sort(int a[], int n);

int main()
{
    int i, n;
    int a[MAXN];

    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    sort(a, n);

    printf("After sorted the array is:");
    for (i = 0; i < n; i++)
        printf(" %d", a[i]);
    printf("\n");

    return 0;
}
void sort(int a[], int n)
{
    int tempVal = 0;
    // 进行一个冒泡排序，总共进行n-1次比较
    // 最后的结果是一个降序的排列
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                tempVal = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tempVal;
            }
        }
    }
}