#include<stdio.h>
int main()
{
    int i,rev=0,n,r;
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    printf("%d",rev);
}
