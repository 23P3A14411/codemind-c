#include<stdio.h>
int main()
{
    int n,s,i;
    scanf("%d",&n);
    int arr[n];
    
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            s=i;
        }
        
    }
    printf("%d",s);
}