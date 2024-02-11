#include<stdio.h>
int main()
{
    int i,n,c=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int a;
    scanf("%d",&a);
    for(i=0;i<n;i++)
    {
        if(a==arr[i])
        {
            c=1;
            break;
        }
    }
    if(c==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}