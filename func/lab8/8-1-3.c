/*
 * @Date: 2021-03-23 19:12:11
 * @LastEditors: litelte
 * @LastEditTime: 2021-03-23 19:19:30
 * @FilePath: /PAT-for-C-Practice/func/lab8/8-1-3.c
 * @Description: 实验8-1-3 拆分实数的整数与小数部分
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

void splitfloat(float x, int *intpart, float *fracpart);

int main()
{
    float x, fracpart;
    int intpart;

    scanf("%f", &x);
    splitfloat(x, &intpart, &fracpart);
    printf("The integer part is %d\n", intpart);
    printf("The fractional part is %g\n", fracpart);

    return 0;
}
void splitfloat(float x, int *intpart, float *fracpart)
{
    // 直接整个循环
    int integer = 0;
    while (x >= 1)
    {
        x--;
        integer++;
    }
    *intpart = integer;
    *fracpart = x;
}