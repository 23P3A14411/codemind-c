#include<stdio.h>
int main()
{
    int i,N,M,c=0;
    scanf("%d%d",&M,&N);
    for(i=M;i<=N;i++)
    {
        if(i%3==0)
        {
            c=c+1;
        }
    }
        printf("%d",c);
}