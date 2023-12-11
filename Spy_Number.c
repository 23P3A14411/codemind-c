#include<stdio.h>
int main()
{
    int i,n,s=0,r,mul=1;
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        s=s+r;
        mul=mul*r;
        n=n/10;
    }
        if(s==mul)
        {
            printf("Spy Number");
        }
        else
        {
            printf("Not Spy Number");
        }
}