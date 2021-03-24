/*
 * @Date: 2021-03-12 00:15:56
 * @LastEditors: litelte
 * @LastEditTime: 2021-03-12 15:29:04
 * @FilePath: /PAT-for-C-Practice/temp/9.c
 * @Description: 简单测试
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
#include <math.h>
double funcos(double x);
int main(int argc, char const *argv[])
{
    // 还得模拟
    double x = 0;
    printf("输入x的值\n");
    scanf("%lf", &x);
    funcos(x);
    return 0;
}
double funcos(double x) // 误差上限e和自变量x
{
    int startNum = 0;
    // 每一项的值为EachRes
    double sum = 0;     //计算最终的和,为双精度数
    double EachRes = 1; //每个子项的和
    //单项阶乘的结果
    int fac;
    // 循环的终止条件为某一项值的绝对值小于误差上限e
    while (EachRes >= 0.01)
    {
        // 阶乘计算
        fac = 1;
        EachRes = 1;
        for (int i = startNum; i >= 1; i--)
        {
            fac *= i;
        }
        EachRes *= fac;
        EachRes *= pow(x, startNum / 2);
        sum += EachRes;
        if (EachRes < 0)
        {
            EachRes = -EachRes;
        }
        printf("StartNum = %d,fac = %d,EachRes = %.6f,sum = %.6f\n", startNum, fac, EachRes, sum);
        startNum += 2;
    }
    return sum;
}