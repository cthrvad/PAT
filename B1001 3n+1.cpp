//
// Created by CTHRVAD on 2018/10/25.
//This code is for PAT
// source: PAT
//
#include <stdio.h>
int main()
{
    int step=0;
    int n=0;
    scanf("%d",&n);
    while (n!=1)
    {
        if(n%2==0)
        {
            n=n/2;
            step++;
        }
        else
        {
            n=(3*n+1)/2;
            step++;
        }
    }
    printf("%d",step);

    return 0;
}

