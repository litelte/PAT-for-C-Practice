/*
 * @Date: 2021-03-23 15:17:22
 * @LastEditors: litelte
 * @LastEditTime: 2021-03-23 15:37:09
 * @FilePath: /PAT-for-C-Practice/pointtest/2.c
 * @Description: *号运算符
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
    // *一个单目运算符，用来访问指针的值所表示的地址上的变量
    // 两种不同的指针型变量定义方法
    int *p;
    int q = 2;
    p = &q;
    // 打印指针P自己的地址
    printf("&p= %p\n", &p);
    // 打印指针P指向的变量的地址
    printf("p = %p\n", p);
    // 打印q的地址
    printf("q = %p\n", &q);
    // 打印指针p指向变量地址对应的值
    printf("*p = %d\n", *p);
    // 打印变量q的值
    printf("q = %d\n", q);
    // 第二种
    int r = 2;
    int *s = r;
    // 上面两种方法都是把普通变量赋给指针型变量
    return 0;
}