#include<stdio.h>
int main()
{
    int i,j,k,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=n-i+1;j<n;j++)
        {
            printf(" ");
        }
        for(k=i;k<n+1;k++)
        {
            printf("* ");
        }
        printf("
");
    }
}