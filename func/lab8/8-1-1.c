/*
 * @Date: 2021-03-22 00:32:10
 * @LastEditors: litelte
 * @LastEditTime: 2021-03-23 19:07:30
 * @FilePath: /PAT-for-C-Practice/func/lab8/8-1-1.c
 * @Description: 实验8-1-1 利用指针找最大值
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

void findmax(int *px, int *py, int *pmax);

int main()
{
    int max, x, y;
    scanf("%d %d", &x, &y);
    findmax(&x, &y, &max);
    printf("%d\n", max);
    return 0;
}
void findmax(int *px, int *py, int *pmax)
{
    if (*px >= *py)
    {
        *pmax = *px;
    }
    else
    {
        *pmax = *py;
    }
}

// 等于说简单的复习指针