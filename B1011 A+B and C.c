//
// Created by CTHRVAD on 2018/10/26.
//This code is for PAT
// source: PAT
//
/*
 * 1011 A+B和C (15)（15 分）
给定区间[-2^31^, 2^31^]内的3个整数A、B和C，请判断A+B是否大于C。
输入格式：
输入第1行给出正整数T(<=10)，是测试用例的个数。随后给出T组测试用例，每组占一行，顺序给出A、B和C。整数间以空格分隔。
输出格式：
对每组测试用例，在一行中输出“Case #X: true”如果A+B>C，否则输出“Case #X: false”，其中X是测试用例的编号（从1开始）。
输入样例：
4
1 2 3
2 3 4
2147483647 0 2147483646
0 -2147483648 -2147483647
输出样例：

Case #1: false
Case #2: true
Case #3: true

 * */
#include <stdio.h>
int main()
{
   long int a,b,c;
   long int T;
   long int i;
    scanf("%ld",&T);
    for(i=0;i<T;i++)
    {
        scanf("%ld%ld%ld",&a,&b,&c);
        if(a+b>c)
        {
            printf("Case #%ld:true\n",i+1);
        }
        else
        {
            printf("Case #%ld:false\n",i+1);
        }
    }
    return 0;
}