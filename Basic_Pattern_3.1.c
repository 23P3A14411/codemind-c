#include<stdio.h>
int main()
{
    int i,j,r;
    scanf("%d",&r);
    for(i=1;i<=r;i++)
    {
        for(j=r;j>=i;j--)
        {
            printf("* ");
        }
        printf("
");
    }
}