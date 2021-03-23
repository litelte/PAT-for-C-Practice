/*
 * @Date: 2021-03-23 20:57:58
 * @LastEditors: litelte
 * @LastEditTime: 2021-03-23 21:36:24
 * @FilePath: /PAT-for-C-Practice/func/lab8/8-1-5.c
 * @Description: 实验8-1-5 在数组中查找指定元素
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

int search(int list[], int n, int x);

int main()
{
    int i, index, n, x;
    int a[MAXN];

    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    scanf("%d", &x);
    index = search(a, n, x);
    if (index != -1)
        printf("index = %d\n", index);
    else
        printf("Not found\n");

    return 0;
}
int search(int list[], int n, int x)
{
    int indexSite = 0, isFin = 0;
    for (int i = 0; i < n; i++)
    {
        if (list[i] == x)
        {
            indexSite = i;
            isFin = 1;
            break;
        }
    }
    if (isFin == 0)
    {
        indexSite = -1;
    }
    return indexSite;
}