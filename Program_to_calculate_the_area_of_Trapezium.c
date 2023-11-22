#include<stdio.h>
int main()
{
    float a,b,h,t;
    scanf("%f%f%f",&a,&b,&h);
    t=0.5*(a+b)*h;
    printf("%.4f",t);
}