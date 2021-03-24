/*
 * @Date: 2021-03-24 23:45:38
 * @LastEditors: litelte
 * @LastEditTime: 2021-03-24 23:47:57
 * @FilePath: /PAT-for-C-Practice/func/lab8/8-2-3v2.c
 * @Description: 针对8-2-3.c的改进版
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
    int index = 0;
    int len = 0;
    len = sizeof(str) / sizeof(str[0]);
    // 确定跳出条件
    while (*str[index] != '\n')
    {
        if (*str[index] == c)
        {
            for (int i = index; i < len; i++)
            {
                *str[i] = *str[i + 1];
            }
        }
        len--;
        index++;
    }
}
