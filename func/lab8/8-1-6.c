/*
 * @Date: 2021-03-23 21:36:52
 * @LastEditors: litelte
 * @LastEditTime: 2021-03-24 01:55:22
 * @FilePath: /PAT-for-C-Practice/func/lab8/8-1-6.c
 * @Description: 实验8-1-6 函数实现字符串逆序
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
#define MAXS 20

void f(char *p);
void ReadString(char *s); /* 由裁判实现，略去不表 */

int main()
{
    char s[MAXS];
    ReadString(s);
    f(s);
    // printf("%s\n", s);

    return 0;
}
void f(char *p)
{
    // 不能定义数组，但是可以定义指针数组
    char *pNew[MAXS] = NULL;
    int len = sizeof(p) / sizeof(p[0]);
}

/* 出现的问题：
 * 1.无法实现字符串倒置输出
 * 2.无法定义新的数组
 * 3.无法使用传统的交换方法 */