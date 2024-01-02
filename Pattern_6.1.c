#include<stdio.h>
int main()
{
    int i,j,s,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        for(s=1;s<=i;s++)
        {
            printf("* ");
        }
            printf("
");
    }

}