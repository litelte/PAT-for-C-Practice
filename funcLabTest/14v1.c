/*
 * @Date: 2021-03-24 17:37:50
 * @LastEditors: litelte
 * @LastEditTime: 2021-03-24 19:58:22
 * @FilePath: /PAT-for-C-Practice/temp/14v1.c
 * @Description: 14.c的改进版
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
// 遍历数组
int tvr(int a[], int Num);
int main(int argc, char const *argv[])
{
    int arr[11] = {
        1,
        2,
        3,
        4,
        5,
        6,
        7,
        8,
        9,
        10,
        11};
    int out[11] = {'\0'};
    int index = 1;     // 设置游标
    int clearFlag = 3; //清除位置的游标
    int clearSite = 0;
    // printf("len = %d\n", lenN);
    int outNum = 0;
    // int len = sizeof(arr) / sizeof(arr[0]);
    int len = 11;
    while (arr[index] != '\0') // 确保数组中非空，循环就继续
    {
        // 首位循环打印输出数组中的元素
        /* printf("%d\n", arr[index]);
        index++;
        index = index % (len); */
        /* 策略：
         * 每一次都把第n个位置的元素清除掉
         * 运行一次就把第clearFlag个位置的元素清除掉 */
        if (len >= clearFlag)
        {
            clearSite = clearFlag;
        }
        else
        {
            clearSite = clearFlag % len;
        }
        out[outNum] = arr[clearSite - 1];
        // 先考虑一种简单的情况
        // 删掉数组中第clearFlag个位置的元素，通过一遍循环来实现
        for (int i = clearSite; i < len; i++)
        {
            arr[i - 1] = arr[i];
        }
        // 停下之后，给数组的末尾元素制空
        arr[len - 1] = '\0';
        outNum++;
        len--;
    }
    // 最后把原数组剩下的最后一个元素赋给out数组
    out[outNum] = arr[0];
    outNum++;
    tvr(out, outNum);
    return 0;
}
int tvr(int a[], int Num)
{
    for (int i = 0; i < Num; i++)
    {
        printf("%d\n", a[i]);
    }
}

/* 方向错了，题目重新做 */