/*
 * @Date: 2021-03-23 15:40:49
 * @LastEditors: litelte
 * @LastEditTime: 2021-03-23 15:59:02
 * @FilePath: /PAT-for-C-Practice/pointtest/4.c
 * @Description: 用指针更换两个变量的值
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
    // printf("leftNum = %p\n", &leftNum);
    // printf("rightNum = %p\n", &rightNum);
    int leftNum = 2, rightNum = 5;
    int *p = NULL, *q = NULL;
    int temp = 0;
    // 分别把两个数的地址赋给指针
    p = &leftNum;
    q = &rightNum;
    if (*p > *q)
    {
        printf("leftNum always bigger than rightNum.They are:%d,%d\n", leftNum, rightNum);
    }
    else
    {
        temp = *p;
        *p = rightNum;
        *q = temp;
        printf("leftNum always bigger than rightNum.They are:%d,%d\n", leftNum, rightNum);
    }

    return 0;
}
// 最后还有指向指针，其实就是指针的指针，解引需要多个&号，其他就没啥区别了