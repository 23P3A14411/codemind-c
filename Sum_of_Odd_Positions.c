#include<stdio.h>
int main()
{
    int n,sum=0;
    scanf("%d",&n);
    int ar[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i%2!=0)
        {
           sum=sum+ar[i];
        }
    }
        printf("%d",sum);
}