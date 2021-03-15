/*
 * @Date: 2021-03-05 23:25:35
 * @LastEditors: litelte
 * @LastEditTime: 2021-03-11 16:13:43
 * @FilePath: /PAT-for-C-Practice/temp/8.c
 * @Description: 进一步修改代码
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
/* 实现下面的：
 * 0!*(-1)^0+2!*(-1)^1+4!*(-1)^2+6!*(-1)^3+... */

#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
    // 在阶乘的基础上再实现自加2
    int startNum = 0;
    // 每一项的值为EachRes
    int sum = 0;
    int EachRes;
    while (EachRes != -720)
    {
        // 阶乘核心代码
        EachRes = 1;
        for (int i = 1; i <= startNum; i++)
        {
            EachRes *= i;
        }
        // 阶乘后再乘另一项
        EachRes *= pow(-1, startNum / 2);
        // 计算每一项的结果相加
        sum += EachRes;
        startNum += 2;
        printf("EachRes = %d,sum = %d\n", EachRes, sum);
    }
    return 0;
}