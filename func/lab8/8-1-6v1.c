/*
 * @Date: 2021-03-24 01:55:34
 * @LastEditors: litelte
 * @LastEditTime: 2021-03-24 02:00:41
 * @FilePath: /PAT-for-C-Practice/func/lab8/8-1-6v1.c
 * @Description: 使用二分交换对字符串进行逆序化处理
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

void f(char *p)
{
    // 计算输入字符串的长度
    int len = 0;
    for (int i = 0; p[i] != '\0'; i++)
    {
        len++;
    }
    // 做二分交换
    char temp = NULL;
    for (int i = 0; i < (len / 2); i++)
    {
        temp = p[i];
        p[i] = p[len - 1 - i];
        p[len - 1 - i] = temp;
    }
}