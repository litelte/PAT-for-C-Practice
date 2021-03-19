/*
 * @Date: 2021-03-19 18:17:45
 * @LastEditors: litelte
 * @LastEditTime: 2021-03-19 20:43:06
 * @FilePath: /PAT-for-C-Practice/func/lab6/6-2.c
 * @Description: 实验6-2 分类统计字符个数
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
#define MAXS 15

void StringCount(char s[]);
void ReadString(char s[]); /* 由裁判实现，略去不表 */
int main(int argc, char const *argv[])
{
    char s[MAXS];
    ReadString(s);
    StringCount(s);
    return 0;
}
void ReadString(char s[])
{
    int i = 0;
    for (i = 0; i < MAXS; i++)
    {
        s[i] = getchar();
    }
}
void StringCount(char s[])
{
    int letter = 0;
    int blank = 0;
    int digit = 0;
    int other = 0;
    for (int i = 0; i < MAXS; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z')
        {
            letter++;
        }
        else if (s[i] == ' ' || s[i] == '\n')
        {
            blank++;
        }
        else if (s[i] >= '0' && s[i] <= '9')
        {
            digit++;
        }
        else
        {
            other++;
        }
    }
    printf("letter = %d, blank = %d, digit = %d, other = %d\n", letter, blank, digit, other);
}
/* 仿照之前的一个问题写的代码，发现不符合该题的要求
 * 数组的最大长度为15，每一次输入的字符数目不同，则结束符位置不同
 * 所以这里使用for循环是不对的，而应该使用while循环 */