/*
 * @Date: 2021-03-21 23:56:26
 * @LastEditors: litelte
 * @LastEditTime: 2021-03-22 00:04:35
 * @FilePath: /PAT-for-C-Practice/temp/12.c
 * @Description: 一个关于拆分数的简单测试
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
int reverse(int number);
int main(int argc, char const *argv[])
{
    int number = 9999999;
    reverse(number);
    return 0;
}
int reverse(int number)
{
    // 需要先判断这个数是几位数，然后从末尾开始，每剥离一个数出来，给这个数乘以这个
    // 10的多少次方
    // int digits = 0;
    int medVal = number;
    int count = 0;
    while (medVal)
    {
        medVal /= 10;
        count++;
        printf("medVal = %d,count = %d\n", medVal, count);
    }
}