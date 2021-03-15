/*
 * @Date: 2021-03-12 15:50:42
 * @LastEditors: litelte
 * @LastEditTime: 2021-03-13 00:29:28
 * @FilePath: /PAT-for-C-Practice/func/lab5/5-10v1.c
 * @Description: 对5-10的阶乘函数的优化
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

double funcos(double e, double x);

int main()
{
    double e, x;
    scanf("%lf %lf", &e, &x);
    printf("cos(%.2f) = %.6f\n", x, funcos(e, x));
    return 0;
}

/* 你的代码将被嵌在这里 */
double funcos(double e, double x) // 误差上限e和自变量x
{
    int startNum = 0, endNum = 0;
    // 每一项的值为EachRes
    double sum = 0.0;     //计算最终的和,为双精度数
    double EachRes = 1.0; //每个子项的和
    //单项阶乘的结果
    int fac = 1; //阶乘计算初始化
    // 循环的终止条件为某一项值的绝对值小于误差上限e
    while (EachRes >= e)
    {
        EachRes = 1.0; //单项计算初始化
        EachRes *= pow(x, startNum);
        EachRes *= pow(-1, startNum / 2);
        for (int i = startNum; i > endNum; i--)
        {
            fac *= i;
        }
        EachRes /= fac;
        // 还要注意前边的符号，奇数次幂为正号，偶数次幂为负号
        sum += EachRes;
        // printf("StartNum = %d,fac = %d,EachRes = %.6f,sum = %.6f\n", startNum, fac, EachRes, sum);
        if ((startNum / 2) % 2 != 0)
        {
            EachRes = -EachRes;
        }
        endNum = startNum;
        startNum += 2;
    }
    return sum;
}
/* 代码未通过：
 * 精确度不够，输入题目规定的示例确实会有相同的结果
 * 但输入更高精确度的值时，会出现不对的结果
 * 比如：
 * 0.01 -3.14
   cos(-3.14) = -0.999899
 * 如果输入精确度较高的值时，结果为：
 * 0.000001 -3.14
   cos(-3.14) = 0.017627
   很明显，结果应该无限接近-1
   */