/*
 * @Date: 2021-03-23 15:37:29
 * @LastEditors: litelte
 * @LastEditTime: 2021-03-23 15:37:49
 * @FilePath: /PAT-for-C-Practice/pointtest/3.c
 * @Description: 单目运算符
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
    // *是一个单目运算符
    int *p;
    int q = 2;
    p = &q;
    printf("&q = %p\n", &q);  //q的地址
    printf("q  = %d\n", q);   // q的值
    printf("p  = %p\n", p);   //p的值
    printf("&p  = %p\n", &p); // p的地址
    printf("*p=%d\n", *p);    //通过*p访问p指向的那个值
    // 其他的写法都不对
    *p = q + 1;
    printf("p = %p\n", p);   // p的值
    printf("&p = %p\n", &p); // p的地址
    printf("*p=%d\n", *p);   //通过*p访问p指向的那个值
    return 0;
}