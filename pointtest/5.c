/*
 * @Date: 2021-03-23 15:59:36
 * @LastEditors: litelte
 * @LastEditTime: 2021-03-24 02:21:00
 * @FilePath: /PAT-for-C-Practice/pointtest/5.c
 * @Description: 指针数组和数组指针
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
int main(int argc, char const *argv[])
{
    for (int i = 0; i < 10; i++)
    {
        printf("i = %d\n", i);
    }
    printf("--------------------分割线--------------\n");
    for (int i = 9; i > 0; i--)
    {
        printf("i = %d\n", i);
    }

    printf("Hello World!\n");
    return 0;
}