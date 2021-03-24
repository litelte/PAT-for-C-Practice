/*
 * @Date: 2021-03-24 13:43:36
 * @LastEditors: litelte
 * @LastEditTime: 2021-03-24 17:41:21
 * @FilePath: /PAT-for-C-Practice/temp/14.c
 * @Description: 循环输出数组元素，并抽走数组中的某一位
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
    int arr[5] = {1, 2, 3, 4, 5};
    int out[5] = {'\0'};
    int index = 1;     // 设置游标
    int clearFlag = 2; //清除位置的游标
    // printf("len = %d\n", lenN);
    int outNum = 0;
    while (arr[index] != '\0') // 确保数组中非空，循环就继续
    {
        // 首位循环打印输出数组中的元素
        /* printf("%d\n", arr[index]);
        index++;
        index = index % (len); */
        /* 策略：
         * 每一次都把第n个位置的元素清除掉
         * 运行一次就把第clearFlag个位置的元素清除掉 */
        // 获取当前数组的长度
        int len = sizeof(arr) / sizeof(arr[0]);
        out[outNum] = arr[clearFlag - 1];
        // 先考虑一种简单的情况
        // 删掉数组中第clearFlag个位置的元素，通过一遍循环来实现
        for (int i = clearFlag; i < len; i++)
        {
            arr[i - 1] = arr[i];
        }
        // 停下之后，给数组的末尾元素制空
        arr[len - 1] = '\0';
        outNum++;
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
/* 总结：
 * 到此，第一种情况已经完成
 * 这个程序也存在一个问题，即我们把清除数的游标clearFlag更换为3时
 * 重新运行程序，在进行到第三轮的时候
 * arr[] = {1,2}
 * out[] = {3,4,5}
 * 这时候问题就来了，clearFlag>len
 * 结果就会出现溢出 */
