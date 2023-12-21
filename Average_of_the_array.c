#include<stdio.h>
int main()
{
    int i,n,s=0;
    float avg;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    s=s+a[i];
    }
    printf("%.2f",s/(float)n);
}