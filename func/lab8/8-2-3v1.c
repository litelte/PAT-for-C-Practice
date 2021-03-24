/*
 * @Date: 2021-03-24 23:44:09
 * @LastEditors: litelte
 * @LastEditTime: 2021-03-24 23:45:12
 * @FilePath: /PAT-for-C-Practice/func/lab8/8-2-3v1.c
 * @Description: 实验8-2-3 删除字符的改进版
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
#define MAXN 20

void delchar(char *str, char c);
void ReadString(char s[]); /* 由裁判实现，略去不表 */

int main()
{
    char str[MAXN], c;

    scanf("%c\n", &c);
    ReadString(str);
    delchar(str, c);
    printf("%s\n", str);

    return 0;
}
void delchar(char *str, char c)
{
    char *string = str;
    int i = 0, count = 0;
    while (*(string + i) != '\0')
    {
        if (*(string + i) != c)
        {
            *(str + count) = *(string + i);
            count++;
        }
        i++;
    }
    *(str + count) = '\0'; //点睛之笔奥
}