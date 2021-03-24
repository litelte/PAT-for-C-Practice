/*
 * @Date: 2021-03-24 13:28:10
 * @LastEditors: litelte
 * @LastEditTime: 2021-03-24 13:43:23
 * @FilePath: /PAT-for-C-Practice/temp/13.c
 * @Description: 传统非递归方式让数组循环输出
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
    int arr[5] = {1, 2, 3, 4, 5};
    int index = 0; // 设置游标
    int len = sizeof(arr) / sizeof(arr[0]);
    while (arr[index] != '\0')
    {
        printf("%d\n", arr[index]);
        index++;
        index = index % (len);
    }
    return 0;
}
// 已经实现了一个循环打印数组中每一个元素的程序了
// 下一步每一次循环都抽走某一位的数，直到留下最后一个数