#include<stdio.h>
int main()
{
    int i,n,a,b,c,m,d;
    scanf("%d%d",&a,&b);
    c=a*b;
    d=a+b;
    for(i=1;i<=b;i++)
    {
        m=i*a;
            if(m%b==0)
            {
                break;
            }
    }
    n=a*b/m;
    printf("%d",n);
}