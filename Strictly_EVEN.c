#include<stdio.h>
int main()
{
    int n,s,i,flag=1;
    scanf("%d",&n);
    int arr[n];
    
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i%2!=0 && arr[i]%2==0)
        {
            flag=0;
        }
        
    }
    if (flag==1)
    printf("True");
    else
    printf("False");
}