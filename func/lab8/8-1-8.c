/*
 * @Date: 2021-03-24 13:17:02
 * @LastEditors: litelte
 * @LastEditTime: 2021-03-24 23:14:01
 * @FilePath: /PAT-for-C-Practice/func/lab8/8-1-8.c
 * @Description: 实验8-1-8 报数
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
#define MAXN 20

void CountOff(int n, int m, int out[]);

int main()
{
    int out[MAXN], n, m;
    int i;

    scanf("%d %d", &n, &m);
    CountOff(n, m, out);
    for (i = 0; i < n; i++)
        printf("%d: %d\n", i, out[i]);
    // printf("\n");

    return 0;
}

void CountOff(int n, int m, int out[])
{
    int i = 0, z = 0, h, a[MAXN]; //定义出了i（总计数器），z（报数计数器），h（顺序计数器），a（数组）
    while (i < n)
    {
        a[i] = i + 1;
        i++;
    }
    i = 0; //先把数组充满数
    for (h = 0; h < n;)
    {
        if (a[i] != 0)
            z++;    //模拟报数过程，z要从0记起，这样才能报三次，Z为3，准确计数
        if (z == m) //当计数器满m时，就是该移出这个人了，进行移出操作
        {
            h++;
            out[i] = h;
            z = 0;    //计数器清零
            a[i] = 0; //因为从1记起，数组中无0，所以移出的记为0，代替删除操作
        }
        i++;        //判断完了一个数，下移
        if (i == n) //防止i溢出
            i = 0;
    }
}

/* 搞不懂这个输出结果，感觉题目的意思和最后的运行结果存在较大的差异 */