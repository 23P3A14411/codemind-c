#include<stdio.h>
int main()
{
    int i,N,sum=0,multi=1,r;
    scanf("%d",&N);
    while(N!=0)
    {
        r=N%10;
        sum=sum+r;
        multi=multi*r;
        N=N/10;
    }
    if(sum == multi)
    {
        printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
    }
}   