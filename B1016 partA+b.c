//
// Created by CTHRVAD on 2018/10/27.
//This code is for PAT
// source: PAT
//

/*PAT —–B1016
问题描述：

正整数A的“Da（为1位整数）部分”定义为由A中所有DA组成的新整数PA。例如：给定A = 3862767，DA = 6，则A的“6部分”PA是66，因为A中有2个6。

现给定A、DA、B、DB，请编写程序计算PA + PB。

输入格式：

输入在一行中依次给出A、DA、B、DB，中间以空格分隔，其中0 < A, B < 1010。

输出格式：

在一行中输出PA + PB的值。

输入样例1：
3862767 6 13530293 3
输出样例1：
399
输入样例2：
3862767 1 13530293 8
输出样例2：
0
 *思路：此题目比较简单，考察的是在一个数中含有的数值的指定的数值的个数，并有相等的位数的数字，计算两个数值的加和
 *
 * */
#include <stdio.h>
int main()
{
    long int Da,A,Db,B;
    long int Pa,Pb;
    long int i;//计数变量
    scanf("%ld%ld%ld%ld",&A,&Da,&B,&Db);
    
}