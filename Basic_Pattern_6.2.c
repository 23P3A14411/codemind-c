#include<stdio.h>
int main()
{
    int i,j,s,n;
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        for(j=1;j<=i-1;j++)
        {
            printf(" ");
        }
        for(s=i;s<=n;s++)
        {
            printf("%d ",i);
        }
            printf("
");
    }
}