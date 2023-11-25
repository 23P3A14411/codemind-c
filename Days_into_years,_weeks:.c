#include<stdio.h>
int main()
{
    int x,days,years,weeks;
    scanf("%d",&x);
    years=x/365;
    weeks=(x%365)/7;
    printf("%d
%d",years,weeks);
}