#include<stdio.h>
int main()
{
    int i,N,r,c=1;
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        r=N%10;
        c=c+1;
        N=N/10;
    }
    printf("%d",c);
}