#include<stdio.h>
int main()
{
    int n,sum=0;
    scanf("%d",&n);
    int ar[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
        sum=sum+ar[i];
    }
    int avg=sum/n,flag=0;
    for(i=0;i<n;i++)
    {
        if(avg==ar[i])
        {
            flag=1;
            break;
        }
    }
   if(flag==1)
   printf("True");
   else
   printf("False");
}