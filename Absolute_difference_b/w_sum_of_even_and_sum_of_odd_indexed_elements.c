#include<stdio.h>
#include<math.h>
int main()
{
    int n,sum=0,add=0,i;
    scanf("%d",&n);
    int arr[n];
    
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    if(i%2==0)
    {
        sum=sum+arr[i];
    }
    if(i%2!=0)
    {
        add=add+arr[i];
    }
    }

printf("%d",abs(sum-add));
}