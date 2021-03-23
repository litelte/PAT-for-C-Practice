/*
 * @Date: 2021-03-23 19:08:04
 * @LastEditors: litelte
 * @LastEditTime: 2021-03-23 19:11:40
 * @FilePath: /PAT-for-C-Practice/func/lab8/8-1-2.c
 * @Description: 实验8-1-2 计算两数的和与差
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

void sum_diff(float op1, float op2, float *psum, float *pdiff);

int main()
{
    float a, b, sum, diff;

    scanf("%f %f", &a, &b);
    sum_diff(a, b, &sum, &diff);
    printf("The sum is %.2f\nThe diff is %.2f\n", sum, diff);

    return 0;
}

void sum_diff(float op1, float op2, float *psum, float *pdiff)
{
    *psum = op1 + op2;
    *pdiff = op1 - op2;
}
