#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int b,c=0;
    scanf("%d",&b);
    for(i=0;i<n;i++)
    {
        if(b==arr[i])
        {
            c++;
        }
        
    }
    printf("%d",c);
}