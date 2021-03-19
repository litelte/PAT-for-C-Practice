/*
 * @Date: 2021-03-19 20:43:30
 * @LastEditors: litelte
 * @LastEditTime: 2021-03-19 22:10:55
 * @FilePath: /PAT-for-C-Practice/func/lab6/6-2v1.c
 * @Description: 使用while循环修改6-2.c的代码，让结果更精确
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
    char s[MAXS] = {'\0'};
    ReadString(s);
    StringCount(s);
    return 0;
}
void ReadString(char s[])
{
    for (int i = 0; i < MAXS; i++)
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
    int i = 0;
    while (s[i] != '\0')
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
        i++;
    }

    printf("letter = %d, blank = %d, digit = %d, other = %d\n", letter, blank, digit, other);
}
/* 出现问题的原因：
 * 1.没有审清题意，题目要求的是实现StringCount函数，而不是实现StringCount函数和ReadString函数
 * 2.ReadString函数由裁判实现，所以即便实现了也会出现编译错误
 * 3.主函数中字符数组定义存在问题，后面无法实现进一步衔接
 * 4.正确的字符数组初始化代码为：
 *   char s[MAXS] = {'\0'}
 *   而char s[MAXS] = {}是非常错误的 */