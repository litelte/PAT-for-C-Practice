/*
 * @Date: 2021-03-18 15:50:30
 * @LastEditors: litelte
 * @LastEditTime: 2021-03-19 23:18:24
 * @FilePath: /PAT-for-C-Practice/temp/11.c
 * @Description:
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
    // printf("hello world");
    int res = 1;
    int sum = 1;
    for (int i = 0; i < 2; i++)
    {
        res *= 10;
        printf("Res = %d\n", res);
        sum += res;
        printf("Sum = %d\n", sum);
    }

    return 0;
}