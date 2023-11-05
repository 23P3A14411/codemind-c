#include<stdio.h>
int main()
{
    int i,N,muli=1;
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        muli=muli*i;
    }
    printf("%d",muli);
}