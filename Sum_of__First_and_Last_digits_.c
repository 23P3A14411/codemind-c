#include<stdio.h>
int main()
{
    int i=1,N,sum=0,r,a,b;
    scanf("%d",&N);
    b=N%10;
    while(N>10)
    {
       
        N=N/10;
        
    }
    r=b+N;
    printf("%d",r);
}